__CONFIG _CP_OFF & _WDT_OFF & _XT_OSC & _PWRTE_ON
LIST P=PIC16F84A
#INCLUDE <P16F84A.INC>
RESET ORG 0X00
    GOTO Inicio
    ORG 0X05
Inicio
    BSF STATUS, RP0 
    MOVLW b'10000'
    MOVWF TRISA
    CLRF TRISB
    BCF STATUS, RP0
    GOTO Principal
Principal
    BTFSC PORTA,4 ;Checamos si estamos en cero logico
    GOTO SWAP
    MOVF PORTB, W
    MOVWF PORTA
    GOTO Principal
SWAP
    SWAPF PORTB, W ;Rotamos
    MOVWF PORTA
    GOTO Principal
    END


