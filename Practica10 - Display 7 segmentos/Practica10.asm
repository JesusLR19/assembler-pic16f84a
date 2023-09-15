    __CONFIG _CP_OFF & _WDT_OFF & _XT_OSC & _PWRTE_ON
    list p=16f84
    include <p16f84a.inc>

RESET org 0
    GOTO Inicio
    org 0x05

Operador equ 0x0c

Inicio
    BSF STATUS, RP0
    movlw b'00011'
    movwf TRISA
    clrf TRISB
    BCF STATUS, RP0
    BCF OPTION_REG,NOT_RBPU ; Activo resistencias Pull-Up
    clrf PORTB
    clrf PORTA
    clrf Operador
    movlw b'0111111'
    movwf PORTB

LecturaPBs
ChecaBoton1
    BTFSS PORTA,0
    GOTO ChecaBoton2
    GOTO Antirrebote
    
ChecaBoton2
    BTFSS PORTA,1
    GOTO ChecaBoton1
    GOTO Antirrebote1
    

Antirrebote
    btfsc PORTA,0
    goto Antirrebote
SUMA
    btfsc PORTA,0
    goto SUMA
    MOVLW b'00000010'
    addwf Operador,1
    goto Display

Antirrebote1
    btfsc PORTA,1
    GOTO Antirrebote1
RESTA
    btfsc PORTA,1
    GOTO RESTA
    MOVLW b'00000001'
    subwf Operador,1
    goto Display

Display
    movf Operador,0
    call TABLA
    movwf PORTB
    goto LecturaPBs

TABLA
    ADDWF PCL, F
    retlw b'0111111' ;0
	retlw b'0000110' ;1
    retlw b'1011011' ;2
	retlw b'1001111' ;3
	retlw b'1100110' ;4
 	retlw b'1101101' ;5
	retlw b'1111101' ;6
	retlw b'0000111' ;7
	retlw b'1111111' ;8
    retlw b'1100111' ;9
	retlw b'1110111' ;A
	retlw b'1111100' ;B
	retlw b'0111001' ;C
	retlw b'1011110' ;D
	retlw b'1111001' ;E
	retlw b'1110001' ;F
	retlw b'1001001' ;No puede mostrarse
	retlw b'1001001' 
    retlw b'1001001' 
    END


