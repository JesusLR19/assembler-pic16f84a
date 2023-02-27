    __CONFIG _CP_OFF & _WDT_OFF & _XT_OSC & _PWRTE_ON
    list p=16f84
    include <p16f84a.inc>

RESET org 0
    GOTO Inicio
    org 0x05

CONTADOR_A equ 0x0c ;Declaramos las variables a ocupar
CONTADOR_B equ 0x0d
CONTADOR_C equ 0x0e
Led_encendido equ 34

Inicio
    BSF STATUS, RP0
    CLRF TRISA 
    movlw b'00000001' ;Definimos como entrada el RB7
    movwf TRISB
    BCF STATUS, RP0
    CLRF PORTA
    CLRF PORTB
Leer
    btfss PORTB,0     ;///////////////////////////////////////////
    goto Leer  ;LECTURA DE PUSH BOTTON
    goto Antirrebote         ;///////////////////////////////////////////
Antirrebote
    btfsc PORTB,0
    goto Antirrebote
    goto Barrido
;__________________________________________________________________
Barrido
    BTFSC PORTB,0
    goto Barrido
    MOVLW b'00001'     ;///////////////////////////////////////////
    MOVWF Led_encendido;BARRIDO PORTA IDA
    MOVWF PORTA        ;///////////////////////////////////////////
    BTFSC PORTB,7
    call ParpadeoPortA
    call RETARDO_05S

    MOVLW b'00010'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB,7
    call ParpadeoPortA
    CALL RETARDO_05S

    MOVLW b'00100'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB,7
    CALL ParpadeoPortA
    CALL RETARDO_05S

    MOVLW b'01000'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB, 7
    CALL ParpadeoPortA
    CALL RETARDO_05S

    MOVLW b'10000'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB,7
    CALL ParpadeoPortA
    CALL RETARDO_05S
;__________________________________________________________________
    CLRF PORTA         ;///////////////////////////////////////////
    MOVLW b'00000001'  ;BARRIDO PORTB IDA
    MOVWF Led_encendido;///////////////////////////////////////////
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00000010'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00000100'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00001000'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00010000'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB, 7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00100000'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'01000000'
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S
;__________________________________________________________________
    MOVLW b'00100000'    ;///////////////////////////////////////////
    MOVWF Led_encendido  ;BARRIDO PORTB REGRESO
    MOVWF PORTB          ;///////////////////////////////////////////
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00010000'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00001000'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00000100'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00000010'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S

    MOVLW b'00000001'
    MOVWF Led_encendido
    MOVWF PORTB
    BTFSC PORTB,7
    CALL ParpadeoPortB
    CALL RETARDO_05S
;__________________________________________________________________
    CLRF PORTB          ;///////////////////////////////////////////
    MOVLW b'10000'      ;BARRIDO PORTA REGRESO
    MOVWF Led_encendido ;///////////////////////////////////////////
    MOVWF PORTA
    BTFSC PORTB,7
    CALL ParpadeoPortA
    CALL RETARDO_05S

    MOVLW b'01000'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB,7
    CALL ParpadeoPortA
    CALL RETARDO_05S

    MOVLW b'00100'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB,7
    CALL ParpadeoPortA
    CALL RETARDO_05S

    MOVLW b'00010'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB,7
    CALL ParpadeoPortA
    CALL RETARDO_05S

    MOVLW b'00001'
    MOVWF Led_encendido
    MOVWF PORTA
    BTFSC PORTB,7
    CALL ParpadeoPortA
    CALL RETARDO_05S
    goto Barrido
;__________________________________________________________________
RETARDO_05S            ;///////////////////////////////////////////
    MOVLW 3            ;RETARDOS
    MOVWF CONTADOR_C   ;///////////////////////////////////////////
    MOVLW 12
    MOVWF CONTADOR_B
    MOVLW 81
    MOVWF CONTADOR_A
LOOP
    DECFSZ CONTADOR_A, 1
    GOTO LOOP
    DECFSZ CONTADOR_B, 1
    GOTO LOOP
    DECFSZ CONTADOR_C, 1
    GOTO LOOP
    RETURN

Retardo_UnSeg
    movlw d'11'         
    movwf CONTADOR_C
    movlw d'101'      
    movwf CONTADOR_B
    movlw d'250'     
    movwf CONTADOR_A
    nop                
    decfsz CONTADOR_A
    goto $-.2           
    decfsz CONTADOR_B
    goto $-.6           
    decfsz CONTADOR_C
    goto $-.10         
    return
;__________________________________________________________________
ParpadeoPortA             ;///////////////////////////////////////////
    MOVF Led_encendido,0  ;Parpadeos
    MOVWF PORTA           ;///////////////////////////////////////////
    CALL Retardo_UnSeg
    CLRF PORTA
    CALL Retardo_UnSeg

    MOVF Led_encendido,0
    MOVWF PORTA
    CALL Retardo_UnSeg
    CLRF PORTA
    CALL Retardo_UnSeg

    MOVF Led_encendido,0
    MOVWF PORTA
    CALL Retardo_UnSeg
    CLRF PORTA
    CALL Retardo_UnSeg
    return
ParpadeoPortB
    MOVF Led_encendido,0
    MOVWF PORTB
    CALL Retardo_UnSeg
    CLRF PORTB
    CALL Retardo_UnSeg

    MOVF Led_encendido,0
    MOVWF PORTB
    CALL Retardo_UnSeg
    CLRF PORTB
    CALL Retardo_UnSeg

    MOVF Led_encendido,0
    MOVWF PORTB
    CALL Retardo_UnSeg
    CLRF PORTB
    CALL Retardo_UnSeg
    return
    END




