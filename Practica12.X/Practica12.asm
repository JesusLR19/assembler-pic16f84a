    list p=16F84A
#include P16F84a.inc
    __CONFIG  _CP_OFF & _WDT_OFF & _PWRTE_ON & _XT_OSC

RESET ORG 0x00
        GOTO Inicio
        ORG 0x04
        GOTO INTER
        ORG 0X05

    CBLOCK 0x0C
    C_Tempo
    R_ContA
    R_ContB
    R_ContC
    SAVE_W
    SAVE_STATUS
    ENDC
;
Inicio
    BSF STATUS, RP0
    MOVLW b'00001'
    MOVWF TRISA
    MOVLW b'00000001'
    MOVWF TRISB
    BSF OPTION_REG,6
    BCF STATUS,RP0
    MOVLW B'10010000'
    MOVWF INTCON
    CLRF PORTA
    CLRF PORTB

FairyTheme
;387ms BPM
    CALL RE4;   ///////////  D4  ////////////
;    CALL RE4;   ///////////  D4  ////////////
;    CALL RE4;   ///////////  D4  ////////////
    CALL MI4;   ///////////  E4  ////////////
;    CALL MI4;   ///////////  E4  ////////////
;    CALL MI4;   ///////////  E4  ////////////
    CALL SOL4;  ///////////  G4  ////////////
;    CALL SOL4;  ///////////  G4  ////////////
    CALL SIb4;  ///////////  Bb4 ////////////
    CALL RE5;   ///////////  D5  ////////////
    CALL MI5;   ///////////  E5  ////////////
;	===================================================================
;	===================================================================
    CALL Retardo_1ms
    CALL LA5;    ///////////  A5  ////////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////

    CALL SOL5;   ///////////  G5  ////////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////

    CALL SOLb5;  ///////////  Gb5  ///////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////

    CALL SOL5;   ///////////  G5  ////////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////
    CALL Retardo_1ms
;	===================================================================
;	===================================================================
    CALL SOL5;   ///////////  G5  ////////////
    CALL DO5;    ///////////  C5  ////////////
    CALL LA4;    ///////////  A4  ////////////
    CALL FA4;    ///////////  F4  ////////////

    CALL FA5;    ///////////  F5  ////////////
    CALL DO5;    ///////////  C5  ////////////
    CALL LA4;    ///////////  A4  ////////////
    CALL FA4;    ///////////  F4  ////////////

    CALL MI5;    ///////////  E5  ////////////
    CALL DO5;    ///////////  C5  ////////////
    CALL LA4;    ///////////  A4  ////////////
    CALL FA4;    ///////////  F4  ////////////

    CALL FA5;    ///////////  F5  ////////////
    CALL DO5;    ///////////  C5  ////////////
    CALL LA4;    ///////////  A4  ////////////
    CALL FA4;    ///////////  F4  ////////////
;	===================================================================
;	===================================================================
    CALL FA5;   ///////////  F5  ////////////
    CALL SIb4;  ///////////  Bb4 ////////////
    CALL SOL4;  ///////////  G4  ////////////
    CALL MI4;   ///////////  E4  ////////////

    CALL MI5;   ///////////  E5  ////////////
    CALL SIb4;  ///////////  Bb4 ////////////
    CALL SOL4;  ///////////  G4  ////////////
    CALL MI4;   ///////////  E4  ////////////

    CALL MIb5;  //////////   Eb5  ///////////
    CALL SIb4;  ///////////  Bb4 ////////////
    CALL SOL4;  ///////////  G4  ////////////
    CALL MI4;   ///////////  E4  ////////////

    CALL MI5;   ///////////  E5  ////////////
    CALL SIb4;  ///////////  Bb4 ////////////
    CALL SOL4;  ///////////  G4  ////////////
    CALL MI4;   ///////////  E4  ////////////
;	===================================================================
;	===================================================================
    CALL MI5;   ///////////  E5  ////////////
    CALL LA4;   ///////////  A4  ////////////
    CALL FA4;   ///////////  F4  ////////////
    CALL RE4;   ///////////  D4  ////////////

    CALL RE5;   ///////////  D5  ////////////
    CALL LA4;   ///////////  A4  ////////////
    CALL FA4;   ///////////  F4  ////////////
    CALL RE4;   ///////////  D4  ////////////

    CALL REb5;  ///////////  Db5 ////////////
    CALL LA4;   ///////////  A4  ////////////
    CALL FA4;   ///////////  F4  ////////////
    CALL RE4;   ///////////  D4  ////////////

    CALL RE5;   ///////////  D5  ////////////
    CALL LA4;   ///////////  A4  ////////////
    CALL FA4;   ///////////  F4  ////////////
    CALL RE4;   ///////////  D4  ////////////
;	===================================================================
;	===================================================================
    CALL Retardo_1ms
    CALL LA5;    ///////////  A5  ////////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////

    CALL SOL5;   ///////////  G5  ////////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////

    CALL SOLb5;  ///////////  Gb5  ///////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////

    CALL SOL5;   ///////////  G5  ////////////
    CALL RE5;    ///////////  D5  ////////////
    CALL SIb4;   ///////////  Bb4 ////////////
    CALL SOL4;   ///////////  G4  ////////////
    CALL Retardo_1ms
;	===================================================================
;	==================================================================
  GOTO FairyTheme
INTER
    MOVWF SAVE_W
    SWAPF STATUS,0
    MOVWF SAVE_STATUS
;ZELDA SARIAS SONG
;____________________________________________________
    call Retardo_1s
    CALL FA4_;   ///////////  F4  ////////////
    CALL LA4_;   ///////////  A4  ////////////
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_20ms
    CALL FA4_;   ///////////  F4  ////////////
    CALL LA4_;   ///////////  A4  ////////////
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_20ms
    CALL FA4_;   ///////////  F4  ////////////
    CALL LA4_;   ///////////  A4  ////////////
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_20ms

    CALL MI5_;   ///////////  E5  ////////////
    call Retardo_10ms
    CALL RE5_;   ///////////  D5  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms
    CALL DO5_;   ///////////  C5  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms
    CALL SOL4_;  ///////////  G4  ////////////
    call Retardo_10ms
    CALL MI4_;   ///////////  E4  ////////////
    call Retardo_50ms
    CALL RE4_;   ///////////  D4  ////////////
    call Retardo_10ms
    CALL SOL4_;   ///////////  E4  ////////////
    call Retardo_10ms
    CALL SOL4_;  ///////////  G4  ////////////
    call Retardo_10ms
;    CALL MI4_;   ///////////  E4  //////////// SUENA MAL
;    CALL MI4_;   ///////////  E4  ////////////
    CALL SOL4_;  ///////////  G4  //////////// SUENA BIEN
    CALL SOL4_;  ///////////  G4  ////////////
    call Retardo_50ms


    CALL FA4_;   ///////////  F4  ////////////
    call Retardo_10ms
    CALL LA4_;   ///////////  A4  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_20ms

    CALL FA4_;   ///////////  F4  ////////////
    call Retardo_10ms
    CALL LA4_;   ///////////  A4  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_20ms

    CALL FA4_;   ///////////  F4  ////////////
    call Retardo_10ms
    CALL LA4_;   ///////////  A4  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_20ms

    CALL MI5_;   ///////////  E5  ////////////
    call Retardo_10ms
    CALL RE5_;   ///////////  D5  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms
    CALL DO5_;   ///////////  C5  ////////////
    call Retardo_10ms
    CALL MI5_;   ///////////  E5  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms

    CALL SOL4_;  ///////////  G4  //////////// SUENA BIEN
    CALL SOL4_;  ///////////  G4  ////////////

    call Retardo_50ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms
    CALL SOL4_;  ///////////  G4  ////////////
    call Retardo_10ms
    CALL RE4_;   ///////////  D4  ////////////
    call Retardo_10ms
;    CALL MI4_;   ///////////  E4  //////////// SUENA MAL
;    CALL MI4_;   ///////////  E4  ////////////
    call Retardo_50ms
    CALL RE4_;   ///////////  D4  ////////////
    call Retardo_10ms
;    CALL MI4_;   ///////////  E4  ////////////
    call Retardo_10ms
    CALL FA4_;   ///////////  F4  ////////////
    call Retardo_10ms
    CALL SOL4_;  ///////////  G4  ////////////
    call Retardo_10ms
    CALL LA4_;   ///////////  A4  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms
    CALL DO5_;   ///////////  C5  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms
    CALL MI4_;   ///////////  E4  //////////// SUENA MAL
;    CALL MI4_;   ///////////  E4  ////////////
;    CALL MI4_;   ///////////  E4  ////////////

    CALL RE4_;   ///////////  D4  ////////////
    call Retardo_10ms
    CALL MI4_;   ///////////  E4  ////////////
    call Retardo_10ms
    CALL FA4_;   ///////////  F4  ////////////
    call Retardo_10ms
    CALL SOL4_;  ///////////  G4  ////////////
    call Retardo_10ms
    CALL LA4_;   ///////////  A4  ////////////
    call Retardo_10ms
    CALL SI4_;   ///////////  B4  ////////////
    call Retardo_10ms
    CALL DO5_;   ///////////  C5  ////////////
    call Retardo_10ms
    CALL RE5_;   ///////////  D5  ////////////
    call Retardo_10ms
    CALL MI5_;   ///////////  E5  ////////////
    CALL MI5_;   ///////////  E5  ////////////
    call Retardo_50ms

    CALL MI4_;   ///////////  E4  ////////////

    CALL FA4_;   ///////////  F4  ////////////

    CALL MI4_;   ///////////  E4  ////////////

    CALL RE4_;   ///////////  D4  ////////////
    CALL RE4_;   ///////////  D4  ////////////
    call Retardo_50ms

FIN_INTER
    SWAPF SAVE_STATUS,0
    MOVWF STATUS
    SWAPF SAVE_W,1
    SWAPF SAVE_W,0
    BCF INTCON,INTF
    RETFIE

  
    INCLUDE <RETARDOS_NOTAS.INC>
    INCLUDE <NOTAS_A.INC>
    INCLUDE <NOTAS_B.INC>
    END
