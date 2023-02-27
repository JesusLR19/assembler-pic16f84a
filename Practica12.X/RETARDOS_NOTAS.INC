;**************************** Librería "RETARDOS_NOTAS.INC" *********************************
;
;	===================================================================
;   NOTAS Y RETARDOS PARA MUSICA
;	JESUS EDUARDO LOPEZ RODRIGUEZ
;	===================================================================

; ZONA DE DATOS *********************************************************************

	CBLOCK
	;R_ContA						; Contadores para los retardos.
	;R_ContB
	;R_ContC
	ENDC

D4;RE en 4 octava
    BSF  PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_20micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_20micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO D4
    return

E4;MI en 4 octava
    BSF  PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_200micros
    CALL Retardo_20micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_20micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO E4
    return

G4;SOL en 4 octava 637us
    BSF  PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_100micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_100micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO G4
    return

G5;SOL en 5 octava 318us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO G5
    return

Gb5;SOL# en 5 octava 300us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    decfsz C_Tempo, f
    GOTO Gb5
    return

Bb4;SI# en 4 octava 470us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    decfsz C_Tempo, f
    GOTO Bb4
    return

Bb5;SI# en 5 octava 235us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_20micros
    CALL Retardo_10micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_20micros
    CALL Retardo_10micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO Bb5
    return

D5;RE en 5 octava 425us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO D5
    return

E5;MI en 5 octava 379us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO E5
    return

A4;LA en 4 octava 568us
    BSF  PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_50micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_50micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO A4
    return


A5;LA en 5 octava 284us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO A5
    return

Ab5;LA# en 5 octava 268us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_10micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_10micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO Ab5
    return

F4;FA en 4 octava 715us
    BSF  PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_200micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_500micros
    CALL Retardo_200micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO F4
    return

F5;FA en 5 octava 357us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO F5
    return

F6;FA en 6 octava 178us
    BSF  PORTB, 1
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    BCF PORTB, 1
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    decfsz C_Tempo, f
    GOTO F6
    return

Db4;RE# en 4 octava 803us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_200micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_200micros
    decfsz C_Tempo, f
    GOTO Db5
    return

Db5;RE# en 5 octava 401us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    decfsz C_Tempo, f
    GOTO Db5
    return

Eb5;MI# en 5 octava 379us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO Eb5
    return

Gb4;SOL# en 4 octava 601us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_100micros
    decfsz C_Tempo, f
    GOTO Eb5
    return

C5;DO en 5 octava 477us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_5micros
    decfsz C_Tempo, f
    GOTO C5
    return

C6;DO en 6 octava 238.89us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_20micros
    CALL Retardo_10micros
    CALL Retardo_5micros
    CALL Retardo_4micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_20micros
    CALL Retardo_10micros
    CALL Retardo_5micros
    CALL Retardo_4micros
    decfsz C_Tempo, f
    GOTO C6
    return

B4;SI en 4 octava 506us
    BSF  PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_20micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    BCF PORTB, 1
    CALL Retardo_200micros
    CALL Retardo_200micros
    CALL Retardo_50micros
    CALL Retardo_20micros
    CALL Retardo_20micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    CALL Retardo_4micros
    decfsz C_Tempo, f
    GOTO B4
    return




Retardo_10micros	; La llamada "CALL" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
	nop				; Aporta 1 ciclo máquina.
	nop				; Aporta 1 ciclo máquina.
	nop				; Aporta 1 ciclo máquina.
	nop				; Aporta 1 ciclo máquina.
Retardo_5micros			; La llamada "CALL" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
Retardo_4micros			; La llamada "CALL" aporta 2 ciclos máquina.
	return				; El salto del retorno aporta 2 ciclos máquina.
;
; RETARDOS de 20 hasta 500 microsegundos ------------------------------------------------
;
Retardo_500micros			; La llamada "CALL" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
	MOVLW	D'164'		; Aporta 1 ciclo máquina. Este es el valor de "K".
	GOTO	RetardoMicros		; Aporta 2 ciclos máquina.
Retardo_200micros				; La llamada "CALL" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
	MOVLW	D'64'		; Aporta 1 ciclo máquina. Este es el valor de "K".
	GOTO	RetardoMicros		; Aporta 2 ciclos máquina.
Retardo_100micros				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'31'	; Aporta 1 ciclo máquina. Este es el valor de "K".
	GOTO	RetardoMicros		; Aporta 2 ciclos máquina.
Retardo_50micros				; La llamada "CALL" aporta 2 ciclos máquina.
	nop				; Aporta 1 ciclo máquina.
	MOVLW	D'14'			; Aporta 1 ciclo máquina. Este es el valor de "K".
	GOTO	RetardoMicros		; Aporta 2 ciclos máquina.
Retardo_20micros				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'5'			; Aporta 1 ciclo máquina. Este es el valor de "K".
;
; El próximo bloque "RetardoMicros" tarda:
; 1 + (K-1) + 2 + (K-1)x2 + 2 = (2 + 3K) ciclos máquina.
;
RetardoMicros
	MOVWF	R_ContA			; Aporta 1 ciclo máquina.
Rmicros_Bucle
	decfsz	R_ContA,F		; (K-1)x1 cm (cuando no salta) + 2 cm (al saltar).
	GOTO	Rmicros_Bucle		; Aporta (K-1)x2 ciclos máquina.
	return				; El salto del retorno aporta 2 ciclos máquina.
;
;En total estas subrutinas tardan:
; - Retardo_500micros:	2 + 1 + 1 + 2 + (2 + 3K) = 500 cm = 500 µs. (para K=164 y 4 MHz).
; - Retardo_200micros:	2 + 1 + 1 + 2 + (2 + 3K) = 200 cm = 200 µs. (para K= 64 y 4 MHz).
; - Retardo_100micros:	2     + 1 + 2 + (2 + 3K) = 100 cm = 100 µs. (para K= 31 y 4 MHz).
; - Retardo_50micros :	2 + 1 + 1 + 2 + (2 + 3K) =  50 cm =  50 µs. (para K= 14 y 4 MHz).
; - Retardo_20micros :	2     + 1     + (2 + 3K) =  20 cm =  20 µs. (para K=  5 y 4 MHz).
;
; RETARDOS de 1 ms hasta 200 ms. --------------------------------------------------------
;
Retardo_200ms			; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'200'			; Aporta 1 ciclo máquina. Este es el valor de "M".
	GOTO	Retardos_ms		; Aporta 2 ciclos máquina.
Retardo_100ms				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'100'			; Aporta 1 ciclo máquina. Este es el valor de "M".
	GOTO	Retardos_ms		; Aporta 2 ciclos máquina.
Retardo_50ms				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'50'			; Aporta 1 ciclo máquina. Este es el valor de "M".
	GOTO	Retardos_ms		; Aporta 2 ciclos máquina.
Retardo_20ms				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'20'			; Aporta 1 ciclo máquina. Este es el valor de "M".
	GOTO	Retardos_ms		; Aporta 2 ciclos máquina.
Retardo_10ms		; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'10'			; Aporta 1 ciclo máquina. Este es el valor de "M".
	GOTO	Retardos_ms		; Aporta 2 ciclos máquina.
Retardo_5ms			; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'5'			; Aporta 1 ciclo máquina. Este es el valor de "M".
	GOTO	Retardos_ms		; Aporta 2 ciclos máquina.
Retardo_2ms			; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'2'			; Aporta 1 ciclo máquina. Este es el valor de "M".
	GOTO	Retardos_ms		; Aporta 2 ciclos máquina.
Retardo_1ms		; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'1'			; Aporta 1 ciclo máquina. Este es el valor de "M".
;
; El próximo bloque "Retardos_ms" tarda:
; 1 + M + M + KxM + (K-1)xM + Mx2 + (K-1)Mx2 + (M-1) + 2 + (M-1)x2 + 2 =
; = (2 + 4M + 4KM) ciclos máquina. Para K=249 y M=1 supone 1002 ciclos máquina
; que a 4 MHz son 1002 µs = 1 ms.
;
Retardos_ms
	MOVWF	R_ContB			; Aporta 1 ciclo máquina.
R1ms_BucleExterno
	MOVLW	D'249'			; Aporta Mx1 ciclos máquina. Este es el valor de "K".
	MOVWF	R_ContA			; Aporta Mx1 ciclos máquina.
R1ms_BucleInterno
	nop				; Aporta KxMx1 ciclos máquina.
	decfsz	R_ContA,F		; (K-1)xMx1 cm (cuando no salta) + Mx2 cm (al saltar).
	GOTO	R1ms_BucleInterno		; Aporta (K-1)xMx2 ciclos máquina.
	decfsz	R_ContB,F		; (M-1)x1 cm (cuando no salta) + 2 cm (al saltar).
	GOTO	R1ms_BucleExterno 	; Aporta (M-1)x2 ciclos máquina.
	return				; El salto del retorno aporta 2 ciclos máquina.
;
;En total estas subrutinas tardan:
; - Retardo_200ms:	2 + 1 + 2 + (2 + 4M + 4KM) = 200007 cm = 200 ms. (M=200 y K=249).
; - Retardo_100ms:	2 + 1 + 2 + (2 + 4M + 4KM) = 100007 cm = 100 ms. (M=100 y K=249).
; - Retardo_50ms :	2 + 1 + 2 + (2 + 4M + 4KM) =  50007 cm =  50 ms. (M= 50 y K=249).
; - Retardo_20ms :	2 + 1 + 2 + (2 + 4M + 4KM) =  20007 cm =  20 ms. (M= 20 y K=249).
; - Retardo_10ms :	2 + 1 + 2 + (2 + 4M + 4KM) =  10007 cm =  10 ms. (M= 10 y K=249).
; - Retardo_5ms  :	2 + 1 + 2 + (2 + 4M + 4KM) =   5007 cm =   5 ms. (M=  5 y K=249).
; - Retardo_2ms  :	2 + 1 + 2 + (2 + 4M + 4KM) =   2007 cm =   2 ms. (M=  2 y K=249).
; - Retardo_1ms  :	2 + 1     + (2 + 4M + 4KM) =   1005 cm =   1 ms. (M=  1 y K=249).
;
; RETARDOS de 0.5 hasta 20 segundos ---------------------------------------------------
;
Retardo_20s				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'200'			; Aporta 1 ciclo máquina. Este es el valor de "N".
	GOTO	Retardo_1Decima		; Aporta 2 ciclos máquina.
Retardo_10s				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'100'			; Aporta 1 ciclo máquina. Este es el valor de "N".
	GOTO	Retardo_1Decima		; Aporta 2 ciclos máquina.
Retardo_5s				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'50'			; Aporta 1 ciclo máquina. Este es el valor de "N".
	GOTO	Retardo_1Decima		; Aporta 2 ciclos máquina.
Retardo_2s				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'20'			; Aporta 1 ciclo máquina. Este es el valor de "N".
	GOTO	Retardo_1Decima		; Aporta 2 ciclos máquina.
Retardo_1s				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'10'			; Aporta 1 ciclo máquina. Este es el valor de "N".
	GOTO	Retardo_1Decima		; Aporta 2 ciclos máquina.
Retardo_500ms				; La llamada "CALL" aporta 2 ciclos máquina.
	MOVLW	D'5'			; Aporta 1 ciclo máquina. Este es el valor de "N".
;
; El próximo bloque "Retardo_1Decima" tarda:
; 1 + N + N + MxN + MxN + KxMxN + (K-1)xMxN + MxNx2 + (K-1)xMxNx2 +
;   + (M-1)xN + Nx2 + (M-1)xNx2 + (N-1) + 2 + (N-1)x2 + 2 =
; = (2 + 4M + 4MN + 4KM) ciclos máquina. Para K=249, M=100 y N=1 supone 100011
; ciclos máquina que a 4 MHz son 100011 µs = 100 ms = 0,1 s = 1 décima de segundo.
;
Retardo_1Decima
	MOVWF	R_ContC			; Aporta 1 ciclo máquina.
R1Decima_BucleExterno2
	MOVLW	D'100'			; Aporta Nx1 ciclos máquina. Este es el valor de "M".
	MOVWF	R_ContB			; Aporta Nx1 ciclos máquina.
R1Decima_BucleExterno
	MOVLW	D'249'			; Aporta MxNx1 ciclos máquina. Este es el valor de "K".
	MOVWF	R_ContA			; Aporta MxNx1 ciclos máquina.
R1Decima_BucleInterno
	nop				; Aporta KxMxNx1 ciclos máquina.
	decfsz	R_ContA,F		; (K-1)xMxNx1 cm (si no salta) + MxNx2 cm (al saltar).
	GOTO	R1Decima_BucleInterno	; Aporta (K-1)xMxNx2 ciclos máquina.
	decfsz	R_ContB,F		; (M-1)xNx1 cm (cuando no salta) + Nx2 cm (al saltar).
	GOTO	R1Decima_BucleExterno	; Aporta (M-1)xNx2 ciclos máquina.
	decfsz	R_ContC,F		; (N-1)x1 cm (cuando no salta) + 2 cm (al saltar).
	GOTO	R1Decima_BucleExterno2	; Aporta (N-1)x2 ciclos máquina.
	return				; El salto del retorno aporta 2 ciclos máquina.

;En total estas subrutinas tardan:
; - Retardo_20s:	2 + 1 + 2 + (2 + 4N + 4MN + 4KMN) = 20000807 cm = 20 s.
;			(N=200, M=100 y K=249).
; - Retardo_10s:	2 + 1 + 2 + (2 + 4N + 4MN + 4KMN) = 10000407 cm = 10 s.
;			(N=100, M=100 y K=249).
; - Retardo_5s:		2 + 1 + 2 + (2 + 4N + 4MN + 4KMN) =  5000207 cm =  5 s.
;			(N= 50, M=100 y K=249).
; - Retardo_2s:		2 + 1 + 2 + (2 + 4N + 4MN + 4KMN) =  2000087 cm =  2 s.
;			(N= 20, M=100 y K=249).
; - Retardo_1s:		2 + 1 + 2 + (2 + 4N + 4MN + 4KMN) =  1000047 cm =  1 s.
;			(N= 10, M=100 y K=249).
; - Retardo_500ms:	2 + 1     + (2 + 4N + 4MN + 4KMN) =   500025 cm = 0,5 s.
;			(N=  5, M=100 y K=249).





