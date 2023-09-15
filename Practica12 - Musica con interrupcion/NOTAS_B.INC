;**************************** Librería "NOTASB.INC" *********************************
;
;	===================================================================
;   NOTAS PARA FAIRY THEME  DE ZELDA A LINK TO THE PAST
;   JESUS EDUARDO LOPEZ RODRIGUEZ
;	===================================================================

; ZONA DE DATOS *********************************************************************

	CBLOCK
	ENDC

RE4_
;851us = .851x2 = 1.702ms  387/1.702 = 227      ///////////  D4  ////////////
    MOVLW D'227'
    MOVWF C_Tempo
    CALL D4;RE 4 octava
    return
MI4_
;758us = .758msx2 = 1.516ms 387/1.516 = 255     ///////////  E4  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL E4;MI 4 octava
    return
SOL4_
;637us = .637msx2 = 1.274ms 387/1.274 = 303     ///////////  G4  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL G4; SOL 4 octava
    MOVLW D'48'
    MOVWF C_Tempo
    CALL G4;
    return
SIb4_
;470us = .47ms x 2 = .94ms 387/.94 = 411       ///////////  Bb4  ////////////
    MOVLW D'211'
    MOVWF C_Tempo
    CALL Bb4;Si# 4 octava
    MOVLW D'200'
    MOVWF C_Tempo
    CALL Bb4;
    return
RE5_
;425us .425ms x 2 = .850ms 387/.850 = 455      ///////////  D5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL D5;RE 5 octava
    MOVLW D'200'
    MOVWF C_Tempo
    CALL D5;
    return
MI5_
    MOVLW D'250'
    MOVWF C_Tempo
    CALL E5;Mi 5 octava
    MOVLW D'250'
    MOVWF C_Tempo
    CALL E5;
    MOVLW D'17'
    MOVWF C_Tempo
    CALL E5;
    return
LA5_
; 284us .248ms x 2 = .496ms 387/.496 = 780     ///////////  A5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL A5;LA 5 octava
    MOVLW D'255'
    MOVWF C_Tempo
    CALL A5;
    MOVLW D'255'
    MOVWF C_Tempo
    CALL A5;
    MOVLW D'15'
    MOVWF C_Tempo
    CALL A5;
    return
SOL5_
;318us = .318ms x 2 = .636ms 387/.636 = 608     ///////////  G5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL G5; SOL 5 octava
    MOVLW D'255'
    MOVWF C_Tempo
    CALL G5;
    MOVLW D'98'
    MOVWF C_Tempo
    CALL G5;
    return
SOLb5_
;301us = .301ms = .602ms 387/.602 = 642         ///////////  Gb5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Gb5; ;SOL# 5 OCT
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Gb5
    MOVLW D'132'
    MOVWF C_Tempo
    CALL Gb5
    return
DO5_
;477us = .477Ms x 2= .954ms  387/.954 = 405     ///////////  C5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL C5; DO 5 octava
    MOVLW D'150'
    MOVWF C_Tempo
    CALL C5;
    return
LA4_
;568US = .568MS X 2 = 1.13ms 387/1.13 = 342     ///////////  A4   ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL A4; LA 4 octava
    MOVLW D'87'
    MOVWF C_Tempo
    CALL A4;
    return
FA4_
;715us = .715MS X 1.43ms  387/1.43 = 270        ///////////  F4   ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL F4; FA 4 octava
    MOVLW D'15'
    MOVWF C_Tempo
    CALL F4;
    return
FA5_
;357us = .357ms x 2 = .714ms 387/.714 = 542     ///////////  F5   ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL F5; FA 5 octava
    MOVLW D'255'
    MOVWF C_Tempo
    CALL F5;
    MOVLW D'32'
    MOVWF C_Tempo
    CALL F5;
    return
MIb5_
;364 = .364 x 2 = .728ms  387/.728 = 531       ///////////   Eb5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Eb5;MI# 5 octava
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Eb5;
    MOVLW D'21'
    MOVWF C_Tempo
    CALL Eb5;
    return

REb4_
;803us = .801 x 2= 1.6ms 387/1.6 = 241       ///////////  Db4  ////////////
    MOVLW D'241'
    MOVWF C_Tempo
    CALL Db4;RE# 4 octava
    return

REb5_
;401us = .401 x 2= .802ms 387/.802 = 482       ///////////  Db5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Db5;RE# 5 octava
    MOVLW D'227'
    MOVWF C_Tempo
    CALL Db5;
    return
SIb5_
;253us = .253 x 2 = .506ms 387/.506 = 764      ///////////  Bb5  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Bb5; SI# 5 octava
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Bb5;
    MOVLW D'254'
    MOVWF C_Tempo
    CALL Bb5;
    return
SOLb4_
;601us = 1.2ms 387/1.2 = 322                    ///////////  Gb4  ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Gb4; SOL# 4 octava
    MOVLW D'67'
    MOVWF C_Tempo
    CALL Gb4;
    call Retardo_1ms
    return
LAb5_
;268us = .536ms 387/.536 = 722                  ///////////  Ab5    ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Ab5; LA# 5 octava
    MOVLW D'255'
    MOVWF C_Tempo
    CALL Ab5;
    MOVLW D'212'
    MOVWF C_Tempo
    CALL Ab5;
    return
DO6_
;238us = ,476ms 387/.476 = 813                  ///////////  C6    ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL C6; DO 6 octava
    MOVLW D'255'
    MOVWF C_Tempo
    CALL C6;
    MOVLW D'255'
    MOVWF C_Tempo
    CALL C6;
    MOVLW D'48'
    MOVWF C_Tempo
    CALL C6;
    return

SI4_
;506us = 1.012ms 387/1.012 = 382                  ///////////  B4    ////////////
    MOVLW D'255'
    MOVWF C_Tempo
    CALL B4; DO 6 octava
    MOVLW D'127'
    MOVWF C_Tempo
    CALL B4;
    return

;	===================================================================
;	
;	===================================================================




