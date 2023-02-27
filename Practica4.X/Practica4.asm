__CONFIG _CP_OFF & _WDT_OFF & _XT_OSC & _PWRTE_ON
LIST P=PIC16F84A
#INCLUDE <P16F84A.INC>

RESET ORG 0X00
    GOTO Inicio
    ORG 0X05
Inicio
    BSF STATUS, RP0
    MOVLW b'11111'
    MOVWF TRISA
    CLRF TRISB
    BCF STATUS, RP0
    GOTO Operacion

Operacion
    MOVF PORTA, W
    ADDWF PORTA,W
    ADDWF PORTA,W
    ADDWF PORTA,W ;Ya que no hay instruccion que multiplique
    ADDWF PORTA,W ;Sumo el numero ingresado 5 veces
    XORLW b'11111111' 
    MOVWF PORTB
    GOTO Operacion
    End




