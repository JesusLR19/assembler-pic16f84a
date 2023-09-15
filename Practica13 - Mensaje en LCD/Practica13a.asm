    __CONFIG _CP_OFF &_WDT_OFF &_PWRTE_ON &_XT_OSC
    LIST        P=16F84A
    INCLUDE     <P16F84A.INC>
    CBLOCK 0x0C
        CONT
        CONT2
    ENDC
ESCRITURA  EQU 1
RESET   ORG     0x00
        GOTO    INICIO
        ORG     0x05
INICIO
    BSF     STATUS,RP0
    CLRF    TRISA
    CLRF    TRISB
    BCF     STATUS,RP0

    CLRF    PORTA
    CLRF    PORTB
    MOVLW   B'00111000'     ; Función set (Bus de datos de 8 bits,
    CALL    CONTROL         ; LCD de 2 líneas, Carácter de 5x7 puntos)
    MOVLW   B'00001100'     ; Display ON, Cursor OFF, Parpadeo de cursor OFF
    CALL    CONTROL
    MOVLW   B'00000001'     ; Clear Display
    CALL    CONTROL
    MOVLW   B'00000110'     ; Entry mode set
    CALL    CONTROL
    CALL    Retardo_10ms
    CLRF    CONT
    MOVLW   B'01000000'     ; Configuración CGRAM address
    CALL    CONTROL

CAR_ES
    MOVF    CONT,W
    CALL    CARACTER
    CALL    DATO
    INCF    CONT,F
    MOVLW   ESCRITURA*8
    SUBWF   CONT,W
    BTFSS   STATUS,C
    GOTO    CAR_ES

REINI
    CLRF    CONT
    MOVLW   B'10000000'     ; Primer renglón
    CALL    CONTROL

FRASE1
    MOVF    CONT,W
    CALL    TABLA
    CALL    DATO
    INCF    CONT,F
    MOVLW   .14
    XORWF   CONT,W
    BTFSS   STATUS,Z
    GOTO    FRASE1
    MOVLW   B'11000000'     ; Segundo renglón
    CALL    CONTROL

FRASE2
    MOVF    CONT,W
    CALL    TABLA
    CALL    DATO
    INCF    CONT,F
    MOVLW   .29
    XORWF   CONT,W
    BTFSS   STATUS,Z
    GOTO    FRASE2
    CALL    Retardo_2s
    MOVLW   B'00000001'     ; Clear Display
    CALL    CONTROL

NAME
    MOVF    CONT,W
    CALL    TABLA
    CALL    DATO
    INCF    CONT,F
    MOVLW   .48
    XORWF   CONT,W
    BTFSS   STATUS,Z
    GOTO    NAME
    CALL    Retardo_500ms
    MOVLW   B'00000011'
    MOVWF   CONT2
    CALL    Retardo_2s
    MOVLW   B'00000001'     ; Clear Display
    CALL    CONTROL
    GOTO    REINI

DATO
    BSF     PORTA,0
    MOVWF   PORTB
    BSF     PORTA,2
    CALL    Retardo_2ms
    CALL    Retardo_2ms
    CALL    Retardo_200micros
    BCF     PORTA,2
    CALL    Retardo_2ms
    RETURN

CONTROL
    BCF     PORTA,0
    MOVWF   PORTB
    BSF     PORTA,2
    CALL    Retardo_2ms
    CALL    Retardo_2ms
    CALL    Retardo_200micros
    BCF     PORTA,2
    CALL    Retardo_2ms
    RETURN

CARACTER ;Cara feliz
    ADDWF   PCL,1
    RETLW   B'00000000'
    RETLW   B'00001010'
    RETLW   B'00001010'
    RETLW   B'00000000'
    RETLW   B'00011111'
    RETLW   B'00001110'
    RETLW   B'00000000'

TABLA
    ADDWF   PCL,1
    RETLW   B'01001101'; M
    RETLW   B'01101001'; i
    RETLW   B'01100011'; c
    RETLW   B'01110010'; r
    RETLW   B'01101111'; o
    RETLW   B'01110000'; p
    RETLW   B'01110010'; r
    RETLW   B'01101111'; o
    RETLW   B'01100011'; c
    RETLW   B'01100101'; e
    RETLW   B'01110011'; s
    RETLW   B'01110011'; s
    RETLW   B'01101111'; o
    RETLW   B'01110010'; r

    RETLW   B'01001101'; M
    RETLW   B'01101001'; i
    RETLW   B'01100011'; c
    RETLW   B'01110010'; r
    RETLW   B'01101111'; o
    RETLW   B'01100011'; c
    RETLW   B'01101111'; o
    RETLW   B'01101110'; n
    RETLW   B'01110100'; t
    RETLW   B'01110010'; r
    RETLW   B'01101111'; o
    RETLW   B'01101100'; l
    RETLW   B'01101100'; l
    RETLW   B'01100101'; e
    RETLW   B'01110010'; r

    RETLW   B'01001100'; L
    RETLW   B'01001111'; O
    RETLW   B'01010000'; P
    RETLW   B'01000101'; E
    RETLW   B'01011010'; Z
    RETLW   B'00101100'; ,
    RETLW   B'01010010'; R
    RETLW   B'01001111'; O
    RETLW   B'01000100'; D
    RETLW   B'01010010'; R
    RETLW   B'01001001'; I
    RETLW   B'01000111'; G
    RETLW   B'01010101'; U
    RETLW   B'01000101'; E
    RETLW   B'01011010'; Z
    RETLW   B'00000000'; Caracter especial

    INCLUDE  <RETARDOS.INC>
    END



