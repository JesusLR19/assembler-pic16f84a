    __CONFIG _CP_OFF & _WDT_OFF & _XT_OSC & _PWRTE_ON
    list p=16f84
    include <p16f84a.inc>

RESET org 0x00
    GOTO Inicio
    org 0x05

Inicio
    BSF STATUS, RP0
    movlw b'00000' 
    movwf TRISA
    movlw b'0000011' 
    movwf TRISB
    BCF STATUS, RP0
    CLRF PORTA 
    CLRF PORTB
ChecaBoton1
    BTFSS PORTB,0
    GOTO ChecaBoton2
    GOTO Suma
ChecaBoton2
    BTFSS PORTB,1 
    GOTO ChecaBoton1
    GOTO Resta
Suma
    BTFSC PORTB,0 
    GOTO Suma
    BTFSC PORTB,0
    GOTO Suma
    INCF PORTA,1 
    INCF PORTA,1 
    INCF PORTA,1 
    INCF PORTA,0 
    MOVWF PORTA 
    GOTO ChecaBoton1
Resta
    BTFSC PORTB,1 
    GOTO Resta
    BTFSC PORTB,1
    GOTO Resta
    DECF PORTA,1 
    DECF PORTA,1 
    DECF PORTA,0 
    MOVWF PORTA 
    GOTO ChecaBoton2
    End