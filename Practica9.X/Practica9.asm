    __CONFIG _CP_OFF & _WDT_OFF & _XT_OSC & _PWRTE_ON
    list p=16f84
    include <p16f84a.inc>

RESET org 0
    GOTO Inicio
    org 0x05

CONTADOR_A equ 0x0c
CONTADOR_B equ 0x0d
CONTADOR_C equ 0x0e

Inicio
    BSF STATUS, RP0
    clrf TRISA
    clrf TRISB
    BCF STATUS, RP0
    CLRF PORTB

Programa
    movlw b'00001'
    movwf PORTA
    call R6ms
    clrf PORTA
    call R2ms
    goto Programa

R2ms
    movlw b'00000010'
    movwf CONTADOR_B
    movlw b'11000111'
    movwf CONTADOR_A
    nop
    nop
    decfsz CONTADOR_A
    goto $-3
    decfsz CONTADOR_B
    goto $-7
    return

R6ms
    movlw b'00000110'
    movwf CONTADOR_B
    movlw b'11000111'
    movwf CONTADOR_A
    nop
    nop
    decfsz CONTADOR_A
    goto $-3
    decfsz CONTADOR_B
    goto $-7
    return


    end