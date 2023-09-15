;**************************** Librería "NOTASB.INC" *********************************
;
;	===================================================================
;   NOTAS PARA FAIRY THEME  DE ZELDA A LINK TO THE PAST
;   JESUS EDUARDO LOPEZ RODRIGUEZ
;	===================================================================

; ZONA DE DATOS *********************************************************************

	CBLOCK
	ENDC

RE4
;851us = .851x2 = 1.702ms  387/1.702 = 227      ///////////  D4  ////////////
    MOVLW D'113'
    MOVWF C_Tempo
    CALL D4;RE 4 octava
    return
MI4
;758us = .758msx2 = 1.516ms 387/1.516 = 255     ///////////  E4  ////////////
    MOVLW D'127'
    MOVWF C_Tempo
    CALL E4;MI 4 octava
    return
SOL4
;637us = .637msx2 = 1.274ms 387/1.274 = 303     ///////////  G4  ////////////
    MOVLW D'151'
    MOVWF C_Tempo
    CALL G4; SOL 4 octava
    return
SIb4
;470us = .47ms x 2 = .94ms 387/.94 = 411/2=       ///////////  Bb4  ////////////
    MOVLW D'205'
    MOVWF C_Tempo
    CALL Bb4;Si# 4 octava
    return
RE5
;425us .425ms x 2 = .850ms 387/.850 = 455/2=227      ///////////  D5  ////////////
    MOVLW D'227'
    MOVWF C_Tempo
    CALL D5;RE 5 octava
    return
MI5
    MOVLW D'255'
    MOVWF C_Tempo
    CALL E5;Mi 5 octava
    MOVLW D'3'
    MOVWF C_Tempo
    CALL E5;
    return
LA5
; 284us .248ms x 2 = .496ms 387/.496 = 780/2= 390     ///////////  A5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL A5;LA 5 octava
    MOVLW D'135'
    MOVWF C_Tempo
    CALL A5;
    return
SOL5
;318us = .318ms x 2 = .636ms 387/.636 = 608/2=304     ///////////  G5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL G5; SOL 5 octava
    MOVLW D'49'
    MOVWF C_Tempo
    CALL G5;
    return
SOLb5
;301us = .301ms = .602ms 387/.602 = 642/2=321         ///////////  Gb5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Gb5; ;SOL# 5 OCT
    MOVLW D'66'
    MOVWF C_Tempo
    CALL Gb5
    return
DO5
;477us = .477Ms x 2= .954ms  387/.954 = 405/2 202     ///////////  C5  ////////////
    MOVLW D'202'
    MOVWF C_Tempo
    CALL C5; DO 5 octava
    return
LA4
;568US = .568MS X 2 = 1.13ms 387/1.13 = 342/2=171     ///////////  A4   ////////////
    MOVLW D'171'
    MOVWF C_Tempo
    CALL A4; LA 4 octava
    return
FA4
;715us = .715MS X 1.43ms  387/1.43 = 270/2=135        ///////////  F4   ////////////
    MOVLW D'135'
    MOVWF C_Tempo
    CALL F4; FA 4 octava
    return
FA5
;357us = .357ms x 2 = .714ms 387/.714 = 542/2=271     ///////////  F5   ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL F5; FA 5 octava
    MOVLW D'16'
    MOVWF C_Tempo
    CALL F5;
    return
MIb5
;364 = .364 x 2 = .728ms  387/.728 = 531/2= 265       ///////////   Eb5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Eb5;MI# 5 octava
    MOVLW D'10'
    MOVWF C_Tempo
    CALL Eb5;
    return

REb4
;803us = .801 x 2= 1.6ms 387/1.6 = 241/2=120       ///////////  Db4  ////////////
    MOVLW D'120'
    MOVWF C_Tempo
    CALL Db4;RE# 4 octava
    return

REb5
;401us = .401 x 2= .802ms 387/.802 = 482/2 = 241       ///////////  Db5  ////////////
    MOVLW D'241'
    MOVWF C_Tempo
    CALL Db5;RE# 5 octava
    return
SIb5
;253us = .253 x 2 = .506ms 387/.506 = 764/2= 382      ///////////  Bb5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Bb5; SI# 5 octava
    MOVLW D'127'
    MOVWF C_Tempo
    CALL Bb5;
    return
SOLb4
;601us = 1.2ms 387/1.2 = 322/2 =161                     ///////////  Gb4  ////////////
    MOVLW D'161'
    MOVWF C_Tempo
    CALL Gb4; SOL# 4 octava
    return
LAb5
;268us = .536ms 387/.536 = 722/2 = 361                  ///////////  Ab5    ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Ab5; LA# 5 octava
    MOVLW D'106'
    MOVWF C_Tempo
    CALL Ab5;
    return
DO6
;238us = ,476ms 387/.476 = 813/2 = 406                  ///////////  C6    ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL C6; DO 6 octava
    MOVLW D'151'
    MOVWF C_Tempo
    CALL C6;
    return

SI4
;506us = 1.012ms 387/1.012 = 382/2                   ///////////  B4    ////////////
    MOVLW D'191'
    MOVWF C_Tempo
    CALL B4; DO 6 octava
    return

;	===================================================================
;
;	===================================================================

