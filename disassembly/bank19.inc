
		ORG $8000

_b19_s0_ptr:
		.WORD	_b19_s0

; =============== S U B	R O U T	I N E =======================================
_b19_s0:
		LDA		#<[byte_2640B1]
		STA		word_6C
		LDA		#>[byte_2640B1]
		STA		word_6C+1
		JSR		sub_264077
		LDA		#<[byte_26496F]
		STA		word_6C
		LDA		#>[byte_26496F]
		STA		word_6C+1
		JSR		sub_264077
		LDA		#<[byte_265B16]
		STA		word_6C
		LDA		#>[byte_265B16]
		STA		word_6C+1
		JSR		sub_264077
		LDA		#<[byte_2661EC]
		STA		word_6C
		LDA		#>[byte_2661EC]
		STA		word_6C+1
		JSR		sub_264077
		LDA		#<[byte_2667D9]
		STA		word_6C
		LDA		#>[byte_2667D9]
		STA		word_6C+1
		JSR		sub_264077
		FARX	_bB_s4
		LDA		#<[byte_26786F]
		STA		word_6C
		LDA		#>[byte_26786F]
		STA		word_6C+1
		JSR		sub_264077
		JSR		sub_264090
		LDA		#0
		STA		word_6
		LDA		#$32
		STA		word_6+1
		FARX	_b18_s1
		LDA		word_6
		BEQ		locret_264076
		LDA		#<[byte_2679DF]
		STA		word_6C
		LDA		#>[byte_2679DF]
		STA		word_6C+1
		JSR		sub_264077
		LDA		#$FF
		STA		word_6
locret_264076:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_264077:
		JSR		sub_265019
		BCS		locret_264088
		BVS		sub_264077
		FARX	_b18_s1
		LDA		word_6
		BEQ		loc_264089
		JMP		sub_264077
locret_264088:
		RTS
loc_264089:
		PLA
		PLA
		LDA		#0
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_264090:
		LDA		#$E
		STA		_APU_DMC_FREQ
		LDA		#[[_pcm_data - $C000] >> 6]
		STA		_APU_DMC_ADDR
		LDA		#$80
		STA		_APU_DMC_LOAD
		LDA		#$AB
		STA		_APU_DMC_LEN
		LDA		#$1F
		STA		_APU_STATUS
		LDA		#1
		STA		byte_6A3D
		RTS
;off_2640AF:
;		.WORD	byte_2640B1
byte_2640B1:
		.BYTE	$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40
		.BYTE	$D0,  0,$90,  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0,  0,$90,  0
		.BYTE	  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,$FF,  0,  0
		.BYTE	$90,  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$D0,  2,$90,  0
		.BYTE	  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  3
		.BYTE	$90,  0,$FF,$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$A0,  1,  0,$40
		.BYTE	$E0,$15,$90,  0,$FF,$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$D0,  2
		.BYTE	$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40
		.BYTE	$D0,  1,$90,  0,$FF,$40,$A0,  1,  0,  0,$90,$FF,  0,  0,$90,  0
		.BYTE	$FF,  0,$90,$FF,  0,$40,$D0, $A,$90,  0,$FF,$40,  2,  1,$A5,  1
		.BYTE	  2,$90,$FF,  0,  0,$90,  0,$FF,$40,$A0,  1,  0,  0,$90,$FF,  0
		.BYTE	$40,$D0, $B,$90,  0,  1,$40,$A0,  1,  0,$40,$E0,$16,$90,  1,  0
		.BYTE	$40,$A0,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0, $C,$90
		.BYTE	  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0
		.BYTE	 $D,$90,  0,  1,$40,$A0,  1,  0,  0,$90,  1,  0,  0,$90,  0,  1
		.BYTE	  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0,$90
		.BYTE	  0,  1,$40,$A0,  1,  0,  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  0,$90
		.BYTE	  0,$FF,$40,$A0,  1,  0,$40,$E0,$15,$90,  1,  0,$40,$A0,  1,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0,$90
		.BYTE	  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  2,$90,  0,$FF
		.BYTE	$40,$A0,  1,  0,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0
		.BYTE	$40,$D0,  3,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,$40,$A0
		.BYTE	  1,  0,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,  1,$40,$A0,  1,  0
		.BYTE	$40,$E0,$16,$90,$FF,  0,$40,$A0,  1,  0,  0,$90,  0,  1,  0,$90
		.BYTE	$FF,  0,$40,$D0,  1,$90,  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0
		.BYTE	  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  0,$90,  0,  1,$40,$A0
		.BYTE	  1,  0,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0
		.BYTE	  1,$90,  0,$FF,$40,$A0,  1,  0,$40,$E0,$15,$90,$FF,  0,$40,$A0
		.BYTE	  1,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF
		.BYTE	$40,$A0,  1,  0,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0
		.BYTE	$40,$D0,  3,$90,  0,$FF,$40,$A0,  1,  0,  0,$90,$FF,  0,  0,$90
		.BYTE	  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF,$40,$A0,  1,  0
		.BYTE	$40,$E0,$16,$90,$FF,  0,$40,$A0,  1,  0,  0,$90,  0,$FF,  0,$90
		.BYTE	$FF,  0,$40,$D0,  1,$90,  0,  1,$40,$A0,  1,  0,  0,$90,  1,  0
		.BYTE	  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  0,$90,  0,  1,$40,$A0
		.BYTE	  1,  0,  0,$90,  1,  0,  0,$90,  0,  1,$40,$A0,  1,  0,$40,$E0
		.BYTE	  0,$90,  1,  0,$40,$D0,  1,$90,  0,  1,$40,$A0,  1,  0,  0,$90
		.BYTE	  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1
		.BYTE	$40,$A0,  1,  0,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0
		.BYTE	$40,$D0,  1,$90,$FE,  4,$40,$A0,  1,  0,  0,$90,$FE,  4,  0,$90
		.BYTE	$FE,  4,  0,$90,$FE,  4,$40,$A0,  1,  0,$40,$E0,  1,$90,$FE,  4
		.BYTE	  0,$90,$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4,$40,$E0,  9,$90
		.BYTE	$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4,  0,$90
		.BYTE	  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90
		.BYTE	  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90
		.BYTE	  0,$FF,  0,$90,  0,$FF,  0,$90,  0,$FF,  0,$90,  0,$FF,  0,$90
		.BYTE	  0,$FF,  0,$90,  0,$FF,  0,$90,  0,$FF,  0,$90,  0,$FF,  0,$90
		.BYTE	  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90
		.BYTE	  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90
		.BYTE	  0,$FF,  0,$90,  0,$FF,  0,$90,  0,$FF,$40,$E0,  1,$90,  0,$FF
		.BYTE	  0,$90,  0,$FF,  0,$90,  0,$FF,  0,$90,  0,$FF,  0,$90,  0,$FF
		.BYTE	$40,$E0,$16,$90,$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4,  0,$90
		.BYTE	$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4,$40,$E0
		.BYTE	  9,$90,$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4,  0,$90,$FE,  4
		.BYTE	  0,$90,$FE,  4,  0,$90,$FE,  3,$40,$D0,  0,$90,$FE,  3,  0,$90
		.BYTE	$FE,  3,  0,$90,$FE,  3,  0,$90,$FE,  3,  0,$90,$FE,  3,  0,$90
		.BYTE	$FE,  3,  0,$90,$FE,  3,  0,$90,$FE,  3,  0,$90,$FE,  3,  0,$90
		.BYTE	$FE,  3,  0,$90,$FE,  2,  0,$90,$FE,  2,  0,$90,$FE,  1,  0,$90
		.BYTE	$FE,  1,  0,$90,$FE,  1,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90
		.BYTE	$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90
		.BYTE	$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90
		.BYTE	$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90
		.BYTE	$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0,$40,$D0,  1,$90,$FF,$FF
		.BYTE	$40,  2,  1,$A4,  1,  2,$90,$FF,  0,  0,$90,$FF,$FF,$40,$D0,  2
		.BYTE	$90,$FF,  0,  0,$90,$FF,$FF,  0,$90,$FF,  0,$40,$D0,  3,$90,$FF
		.BYTE	$FF,  0,$90,$FF,  0,  0,$90,$FF,$FF,$40,$D0,  2,$90,$FF,  0,  0
		.BYTE	$90,$FF,$FF,  0,$90,$FF,  0,$40,$D0,  1,$90,$FF,$FF,  0,$90,$FF
		.BYTE	  0,  0,$90,$FF,$FF,$40,$D0,  0,$90,$FF,  0,$40,$D0,  1,$90,$FF
		.BYTE	$FF,$40,  2,  1,$A4,  1,  2,$90,$FF,  0,  0,$90,$FF,$FF,$40,$D0
		.BYTE	  2,$90,$FF,  0,  0,$90,$FF,$FF,  0,$90,$FF,  0,$40,$D0,  3,$90
		.BYTE	$FF,$FF,  0,$90,$FF,  0,  0,$90,$FF,$FF,$40,$D0,  2,$90,$FF,  0
		.BYTE	  0,$90,$FF,$FF,  0,$90,$FF,  0,$40,$D0,  1,$90,$FF,$FF,  0,$90
		.BYTE	$FF,  0,$40,$E0,  1,$90,$FF,$FF,$40,$D0,  0,$90,$FE,$FE,$40,  2
		.BYTE	  1,$A4,  1,  2,$90,$FE,$FE,$40,$D0,  1,$90,$FE,$FE,  0,$90,$FE
		.BYTE	$FE,$40,$D0,  2,$90,$FE,$FD,  0,$90,$FE,$FD,$40,$D0,  3,$90,$FE
		.BYTE	$FD,  0,$90,$FE,$FD,$40,$D0,  2,$90,$FE,$FD,$40,$E0,  1,$90,$FE
		.BYTE	$FD,$40,$D0,  1,$90,$FE,$FD,  0,$90,$FE,$FD,$40,$D0,  0,$90,$FE
		.BYTE	$FE,  0,$90,$FE,$FE,$40,$D0,  1,$90,$FE,$FE,  0,$90,$FE,$FE,$40
		.BYTE	$D0,  2,$90,$FE,$FD,  0,$90,$FE,$FD,$40,$D0,  3,$90,$FE,$FD,$40
		.BYTE	  0,  2,$90,$FE,$FD,$40,$D0,  2,$90,$FE,$FC,$40,$E0,  1,$90,$FE
		.BYTE	$FC,$40,$D0,  1,$90,$FE,$FC,  0,$90,$FE,$FC,  0,$90,  0,  0,$40
		.BYTE	  7,$14,  0,  1,  1,$B0,$B1,$CD,$CE,  1,$C0,$C1,$A2,$A3,  1,$D0
		.BYTE	$D1,$B3,$BB,  1,$E0,$E1,  1,  1,  0,  1,  0,  3,  7,$14,  0,  1
		.BYTE	$36,$37,$38,$63,$64,$46,$47,$48,$73,$74,$56,$57,$82,$83,$93,  1
		.BYTE	  1,$92,  1,  1,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0
		.BYTE	$90,$FF,  0,$40,$D0,  0,$90,  0,  1,$40,$E0,$16,$90,$FF,  0,  0
		.BYTE	$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,$FF
		.BYTE	  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,  1,  0
		.BYTE	$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  3,$90,  0
		.BYTE	$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2
		.BYTE	$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40
		.BYTE	$D0,  1,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF
		.BYTE	  0,$40,$D0,  0,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0
		.BYTE	$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0
		.BYTE	  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0
		.BYTE	$90,  0,  1,  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0,$90,  1
		.BYTE	  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0
		.BYTE	$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  1,$90,  0
		.BYTE	$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  0
		.BYTE	$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40
		.BYTE	$D0,  1,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1
		.BYTE	  0,$40,$D0,  2,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0
		.BYTE	$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0
		.BYTE	  1,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,  1,  0,$90,$FF,  0,  0
		.BYTE	$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,$FF
		.BYTE	  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  0,$90,  0,  1,  0
		.BYTE	$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0
		.BYTE	$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2
		.BYTE	$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40
		.BYTE	$D0,  3,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF
		.BYTE	  0,$40,$D0,  2,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0
		.BYTE	$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0
		.BYTE	  1,  0,$90,  1,  0,$40,$D0, $A,$90,  0,  1,$40,  2,  1,$A5,  1
		.BYTE	  2,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0, $B,$90
		.BYTE	  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0
		.BYTE	 $C,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0
		.BYTE	$40,$D0, $D,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90
		.BYTE	  1,  0,$40,$D0,  2,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0,$90,  1,  0,  0,$90
		.BYTE	  0,$FF,  0,$90,  1,  0,$40,$D0,  0,$90,  0,$FF,  0,$90,  1,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  1,$90,  0,  1,  0,$90
		.BYTE	  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1
		.BYTE	  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  3,$90
		.BYTE	  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0
		.BYTE	  2,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0
		.BYTE	$40,$D0,  1,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90
		.BYTE	  1,  0,$40,$D0,  0,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0,$90,  1,  0,  0,$90
		.BYTE	  0,$FF,  0,$90,  1,  0,$40,$D0,  2,$90,  0,$FF,  0,$90,  1,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0,$90
		.BYTE	$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,  1
		.BYTE	  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90
		.BYTE	  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0
		.BYTE	  0,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0
		.BYTE	$40,$D0,  1,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90
		.BYTE	$FF,  0,$40,$D0,  2,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF
		.BYTE	  0,$90,$FF,  0,$40,$D0,  3,$90,  0,$FF,  0,$90,$FF,  0,  0,$90
		.BYTE	  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF,  0,$90,$FF,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  1,$FF
;off_26496D:
;		.WORD	byte_26496F
byte_26496F:
		.BYTE	$90,  1,  4,  0,$90,  1,  4,  0,$90,  2,  4,  0,$90,  2,  4,  0
		.BYTE	$90,  2,  4,  0,$90,  2,  4,  0,$90,  2,  4,  0,$90,  2,  4,  0
		.BYTE	$90,  2,  4,  0,$90,  2,  4,$40,$D0,  8,$90,  4,  5,  0,$90,  4
		.BYTE	  5,  0,$90,  4,  5,  0,$90,  4,  5,  0,$90,  4,  5,  0,$90,  4
		.BYTE	  5,  0,$90,  4,  5,$40,$E0,  9,$90,  4,  5,$40,  4,$14,$A5,  1
		.BYTE	$36,$37,$65,$66,$67,$46,$47,$48,$76,$77,$56,$57,$82,$83,$93,  1
		.BYTE	  1,$92,$68,$78,  1,$F0,  4,  4,  0,$F0,  4,  4,  0,$F0,  4,  3
		.BYTE	  0,$F0,  4,  3,  0,$F0,  4,  3,$40,$D0,  9,$F0,  4,  3,  0,$F0
		.BYTE	  4,  2,  0,$F0,  4,  2,  0,$F0,  4,  2,$40,$E0, $A,$F0,  4,  2
		.BYTE	$40,$A0,$FE,$FC,  0,$F0,  4,  2,$40,$A0,$FE,$FC,  0,$F0,  4,  2
		.BYTE	$40,$A0,$FE,$FC,$40,  4,$14,  0,  1,$36,$37,$38,$63,$64,$46,$47
		.BYTE	$48,$73,$74,$56,$57,$82,$83,$93,  1,  1,$92,  1,  1,  1,$A0,$FE
		.BYTE	$FC,$40,$90,  1,$FE,$40,$D0,  0,$90,  1,$FE,$40,$A0,$FE,$FD,$40
		.BYTE	  2,  1,$A4,  1,  2,$A0,$FE,$FD,$40,$90,  1,$FE,$40,$D0,  1,$90
		.BYTE	  1,$FE,$40,$A0,$FE,$FD,  0,$A0,$FE,$FD,$40,$90,  1,$FE,$40,$D0
		.BYTE	  2,$90,  1,$FE,$40,$A0,$FE,$FD,  0,$A0,$FE,$FD,$40,$90,  1,$FE
		.BYTE	$40,$D0,  3,$90,  1,$FE,$40,$A0,$FE,$FD,  0,$A0,$FE,$FD,$40,$90
		.BYTE	  1,$FE,$40,$D0,  2,$90,  1,$FE,$40,$A0,$FF,$FE,  0,$A0,$FF,$FE
		.BYTE	$40,$90,  1,$FE,$40,$D0,  1,$A0,$FF,$FE,$40,$90,  1,$FE,  0,$90
		.BYTE	  1,$FE,$40,$D0,  0,$A0,$FF,$FE,$40,$90,  1,$FE,$40,  2,  1,$A4
		.BYTE	  1,  2,$A0,$FF,$FE,$40,$90,  1,$FE,$40,$D0,  1,$A0,$FF,$FE,$40
		.BYTE	$90,  1,$FE,  0,$A0,$FF,  0,$40,$90,  1,$FE,$40,$D0,  2,$A0,$FF
		.BYTE	  0,$40,$90,  1,$FE,  0,$A0,$FF,  0,$40,$90,  1,$FE,$40,$D0,  3
		.BYTE	$A0,$FF,  0,$40,$90,  1,$FE,  0,$A0,$FF,  0,$40,$90,  1,$FE,$40
		.BYTE	$D0,  2,$A0,$FF,  0,$40,$90,  1,$FE,  0,$A0,$FF,  0,$40,$90,  1
		.BYTE	$FE,$40,$D0,  1,$A0,$FF,  0,$40,$90,  1,$FE,  0,$90,  1,$FD,$40
		.BYTE	$A0,$FF,  0,  0,$90,  1,$FD,$40,$A0,$FF,  0,  0,$A0,$FF,  0,$40
		.BYTE	$90,  1,$FD,$40,$D0,  0,$A0,$FF,  0,$40,$90,  1,$FD,$40,  2,  1
		.BYTE	$A4,  1,  2,$A0,$FF,  0,$40,$90,  1,$FC,  0,$A0,$FF,  0,$40,$90
		.BYTE	  1,$FC,$40,$D0,  1,$A0,$FF,  0,$40,$90,  1,$FC,  0,$A0,$FF,  0
		.BYTE	$40,$90,  1,$FC,  0,$A0,$FF,  0,$40,$90,  1,$FC,$40,$D0,  2,$A0
		.BYTE	$FF,  0,$40,$90,  1,$FC,  0,$A0,$FF,  2,$40,$90,  1,$FC,  0,$A0
		.BYTE	$FF,  2,$40,$90,  1,$FC,$40,$D0,  3,$A0,$FF,  2,$40,$90,  1,$FC
		.BYTE	  0,$A0,$FF,  2,$40,$90,  1,$FC,  0,$A0,$FF,  2,$40,$90,  1,$FC
		.BYTE	$40,$D0,  2,$A0,$FF,  2,$40,$90,  1,$FC,  0,$A0,$FE,  3,$40,$90
		.BYTE	  1,$FB,  0,$A0,$FE,  3,$40,$90,  1,$FB,$40,$D0,  1,$A0,$FE,  3
		.BYTE	$40,$90,  1,$FB,  0,$90,  1,$FB,$40,$A0,$FE,  3,  0,$A0,$FE,  3
		.BYTE	$40,$90,  1,$FB,$40,$D0,  0,$A0,$FE,  3,$40,$90,  1,$FB,  0,$A0
		.BYTE	$FE,  3,$40,$90,  1,$FA,  0,$A0,$FE,  3,$40,$90,  1,$FB,$40,$D0
		.BYTE	  1,$90,  0,  0,$40,$A0,$FE,  4,  0,$A0,$FE,  4,$40,  7,$14,  0
		.BYTE	  1,  1,$B0,$B1,$CD,$CE,  1,$C0,$C1,$A2,$A3,  1,$D0,$D1,$B3,$BB
		.BYTE	  1,$E0,$E1,  1,  1,$A0,$FE,  4,$40,  0,  1,$A0,$FE,  4,$40,  0
		.BYTE	  3,  7,$14,  0,  1,$36,$37,$38,$63,$64,$46,$47,$48,$73,$74,$56
		.BYTE	$57,$82,$83,$93,  1,  1,$92,  1,  1,$90,  0,  1,$40,$E0,  9,$90
		.BYTE	$FF,  0,$40,  2,  1,  0,  1,  5,$90,  0,  1,$40,  2,  1,  0,  1
		.BYTE	  3,$90,$FF,  0,$40,$D0,  0,$90,  0,  1,$40,  2,  1,$A9,  1,  2
		.BYTE	$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0
		.BYTE	  1,$40,$E0,  1,$90,$FF,  0,$40,  2,  1,  0,  1,  6,$90,  0,  1
		.BYTE	$40,$A0,$FF,  0,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,  1,$40,$A0
		.BYTE	$FF,  0,  0,$90,$FF,  0,$40,$A0,$FF,  0,  0,$90,  0,  1,$40,$A0
		.BYTE	$FF,  0,  0,$A0,$FF,  0,$40,$90,$FF,  0,$40,$D0,  3,$90,  0,$FF
		.BYTE	$40,$A0,$FF,  0,  0,$90,$FF,  0,$40,$A0,$FF,  0,  0,$90,  0,$FF
		.BYTE	$40,$A0,$FF,  0,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF,$40,  2
		.BYTE	  1,  0,  1,  4,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40
		.BYTE	$D0,  1,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF
		.BYTE	  0,$40,$D0,  0,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0
		.BYTE	$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0
		.BYTE	  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0
		.BYTE	$90,  0,  1,  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0,$90,  1
		.BYTE	  0,$40,$E0,  3,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0
		.BYTE	  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  1
		.BYTE	$90,  0,$FF,$40,  0,  2,$90,  1,  0,$40,$E0,  1,$90,  0,$FF,$40
		.BYTE	$A0,  1,  0,$40,  2,  1,  0,  1,  4,$90,  1,  0,$40,$D0,  0,$90
		.BYTE	  0,$FF,$40,$A0,  1,  0,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90
		.BYTE	  1,  0,$40,$D0,  1,$90,  0,$FF,$40,$A0,  1,  0,  0,$90,  1,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  2,$90,  0,$FF,$40,$A0
		.BYTE	  1,  0,$40,$E0,$15,$90,  1,  0,$40,$A0,  1,  0,  0,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,$40,$A0,  1,  0,  0,$90
		.BYTE	$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,  1
		.BYTE	$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$A0,  1,  0,$40,$E0,$16,$90
		.BYTE	  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,  1
		.BYTE	  0,$90,$FF,  0,$40,$A0,  1,  0,  0,$90,  0,  1,  0,$90,$FF,  0
		.BYTE	$40,$D0,  0,$90,  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$A0
		.BYTE	  1,  0,$40,$E0,$15,$90,  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0
		.BYTE	$40,$D0,  1,$90,  0,$FF,  0,$90,$FF,  0,$40,$A0,  1,  0,  0,$90
		.BYTE	  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF,$40,$A0,  1,  0
		.BYTE	  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  3,$90
		.BYTE	  0,$FF,$40,$A0,  1,  0,$40,$E0,$16,$90,$FF,  0,$40,$A0,  1,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF,  0,$90
		.BYTE	$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,  1
		.BYTE	$40,$A0,  1,  0,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0
		.BYTE	$40,$D0,  0,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,$40,$A0
		.BYTE	  1,  0,  0,$90,  1,  0,$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0
		.BYTE	  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,$40,$A0
		.BYTE	  1,  0,$40,$E0,$15,$90,  1,  0,$40,$A0,  1,  0,  0,$90,  0,  1
		.BYTE	  0,$90,  1,  0,$40,$D0,  3,$90,  0,$FF,  0,$90,  1,  0,  0,$90
		.BYTE	  0,$FF,  0,$90,  1,  0,$40,$D0,  2,$90,  0,$FF,$40,$A0,  1,  0
		.BYTE	  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  1,$90
		.BYTE	  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,$40,$A0,  1,  0,  0,$90
		.BYTE	  1,  0,$40,$D0,  0,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,$40,$D0,  1,$90,  0,  1,$40,$A0,  1,  0,$40,$E0
		.BYTE	$16,$90,  1,  0,$40,$A0,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0
		.BYTE	$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90
		.BYTE	  1,  0,$40,$D0,  3,$90,  0,  1,$40,$A0,  1,  0,  0,$90,  1,  0
		.BYTE	  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90
		.BYTE	  1,  0,  0,$90,  0,  1,$40,$A0,  1,  0,  0,$90,  1,  0,$40,$D0
		.BYTE	  1,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0
		.BYTE	$40,$D0,  0,$90,  0,$FF,$40,$A0,  1,  0,$40,$E0,$15,$90,  1,  0
		.BYTE	$40,$A0,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  1,$90
		.BYTE	  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0
		.BYTE	  2,$90,  0,$FF,$40,$A0,  1,  0,  0,$90,  1,  0,  0,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0,$90,$FF,  0,  0,$90
		.BYTE	  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,  1
		.BYTE	  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90
		.BYTE	  0,  1,$40,$A0,  1,  0,$40,$E0,$16,$90,$FF,  0,  0,$90,  0,  1
		.BYTE	  0,$90,$FF,  0,$40,$D0,  0,$90,  0,  1,  0,$90,$FF,  0,  0,$90
		.BYTE	  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$FF

; =============== S U B	R O U T	I N E =======================================
sub_265019:
		LDY		#$FF
		STY		word_4+1
		LDY		#0
		STY		word_6+1
		INC		word_6+1
		LDA		(word_6C),Y
		BEQ		loc_265074
		CMP		#$FF
		BEQ		loc_2650A1
		TAX
		BMI		loc_2650A9
		INC		word_6C
		BNE		loc_265034
		INC		word_6C+1
loc_265034:
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_26503E
		INC		word_6C+1
loc_26503E:
		LDA		(word_6C),Y
		STA		word_4+1
		INC		word_6C
		BNE		loc_265048
		INC		word_6C+1
loc_265048:
		LDA		(word_6C),Y
		STA		word_6+1
		INC		word_6C
		BNE		loc_265052
		INC		word_6C+1
loc_265052:
		TXA
		LDX		#0
		CMP		#1
		BEQ		loc_2650D5
		CMP		#2
		BEQ		loc_2650D8
		CMP		#3
		BEQ		loc_2650DB
		CMP		#4
		BEQ		loc_2650DE
		CMP		#5
		BEQ		loc_2650E1
		CMP		#6
		BEQ		loc_2650E4
		CMP		#7
		BEQ		loc_2650E7
loc_265071:
		JMP		loc_265071
loc_265074:
		INC		word_6C
		BNE		loc_26507A
		INC		word_6C+1
loc_26507A:
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_265082
		INC		word_6C+1
loc_265082:
		CMP		#1
		BEQ		loc_2650FF
		CMP		#2
		BEQ		loc_265102
		CMP		#3
		BEQ		loc_265105
		CMP		#4
		BEQ		loc_265108
		CMP		#5
		BEQ		loc_26510B
		CMP		#6
		BEQ		loc_26510E
		CMP		#7
		BEQ		loc_265111
loc_26509E:
		JMP		loc_26509E
loc_2650A1:
		INC		word_6C
		BNE		loc_2650A7
		INC		word_6C+1
loc_2650A7:
		SEC
		RTS
loc_2650A9:
		INC		word_6C
		BNE		loc_2650AF
		INC		word_6C+1
loc_2650AF:
		LDA		#1
		STA		word_6+1
		TXA
		AND		#$70
		CMP		#$10
		BEQ		loc_2650EA
		CMP		#$20
		BEQ		loc_2650ED
		CMP		#$30
		BEQ		loc_2650FC
		CMP		#$40
		BEQ		loc_2650F0
		CMP		#$50
		BEQ		loc_2650F3
		CMP		#$60
		BEQ		loc_2650F9
		CMP		#$70
		BEQ		loc_2650F6
loc_2650D2:
		JMP		loc_2650D2
loc_2650D5:
		JMP		loc_265114
loc_2650D8:
		JMP		loc_26512C
loc_2650DB:
		JMP		loc_265191
loc_2650DE:
		JMP		sub_2651D7
loc_2650E1:
		JMP		sub_265241
loc_2650E4:
		JMP		sub_265259
loc_2650E7:
		JMP		sub_265264
loc_2650EA:
		JMP		sub_26537A
loc_2650ED:
		JMP		sub_2653EB
loc_2650F0:
		JMP		sub_265433
loc_2650F3:
		JMP		sub_265441
loc_2650F6:
		JMP		sub_26557B
loc_2650F9:
		JMP		sub_265444
loc_2650FC:
		JMP		sub_265436
loc_2650FF:
		JMP		sub_2655EC
loc_265102:
		JMP		sub_265669
loc_265105:
		JMP		sub_2656BC
loc_265108:
		JMP		sub_265715
loc_26510B:
		JMP		sub_265715
loc_26510E:
		JMP		sub_265775
loc_265111:
		JMP		sub_26578F
loc_265114:
		LDA		(word_6C),Y
		STA		_spr_ram+4,X
		INC		word_6C
		BNE		loc_26511F
		INC		word_6C+1
loc_26511F:
		INX
		DEC		word_4
		BNE		loc_265114
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_26512C:
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_265134
		INC		word_6C+1
loc_265134:
		CMP		#1
		BEQ		loc_26514F
		CMP		#2
		BEQ		loc_26515C
		CMP		#3
		BEQ		loc_265163
		CMP		#4
		BEQ		loc_265170
		CMP		#5
		BEQ		loc_265177
		CMP		#6
		BEQ		loc_265184
loc_26514C:
		JMP		loc_26514C
loc_26514F:
		LDA		_spr_ram+$48
		STA		_spr_ram+$B8
		LDA		#8
		STA		_spr_ram+$B9
		BNE		loc_265189
loc_26515C:
		LDA		#1
		STA		_spr_ram+$B9
		BNE		loc_265189
loc_265163:
		LDA		_spr_ram+$64
		STA		_spr_ram+$C0
		LDA		#8
		STA		_spr_ram+$C1
		BNE		loc_265189
loc_265170:
		LDA		#1
		STA		_spr_ram+$C1
		BNE		loc_265189
loc_265177:
		LDA		_spr_ram+$64
		STA		_spr_ram+$C4
		LDA		#8
		STA		_spr_ram+$C5
		BNE		loc_265189
loc_265184:
		LDA		#1
		STA		_spr_ram+$C5
loc_265189:
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_265191:
		LDA		word_4
		PHA
loc_265194:
		LDA		(word_6C),Y
		STA		_spr_ram+$79,X
		INC		word_6C
		BNE		loc_26519F
		INC		word_6C+1
loc_26519F:
		INX
		INX
		INX
		INX
		DEC		word_4
		BNE		loc_265194
		PLA
		STA		word_4
		LDX		#0
loc_2651AC:
		LDA		byte_2651C7,X
		CLC
		ADC		_spr_ram+$28
		STA		_spr_ram+$78,Y
		INY
		INY
		INY
		INY
		INX
		DEC		word_4
		BNE		loc_2651AC
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
byte_2651C7:
		.BYTE	  0,  0,  8,  8,  8,$10,$10,$10,$18,$18,$18,$20,$20,$20,$28,$28

; =============== S U B	R O U T	I N E =======================================
sub_2651D7:
		JSR		sub_265524
		LDA		_spr_ram+$4C
		CMP		#$F8
		BNE		loc_265213
		LDA		_spr_ram+$14
		STA		_spr_ram+$4C
		LDA		_spr_ram+$28
		STA		_spr_ram+$50
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_2651F7
		INC		word_6C+1
loc_2651F7:
		LDX		#0
loc_2651F9:
		LDA		_spr_ram+6,X
		AND		#$FC
		ORA		word_4
		STA		_spr_ram+6,X
		INX
		INX
		INX
		INX
		CPX		#$50
		BCC		loc_2651F9
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_265213:
		LDA		#$F8
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_265225
		INC		word_6C+1
loc_265225:
		LDX		#0
loc_265227:
		LDA		_spr_ram+6,X
		AND		#$FC
		ORA		word_4
		STA		_spr_ram+6,X
		INX
		INX
		INX
		INX
		CPX		#$50
		BCC		loc_265227
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265241:
		LDA		(word_6C),Y
		STA		_spr_ram+$C8,X
		INC		word_6C
		BNE		loc_26524C
		INC		word_6C+1
loc_26524C:
		INX
		DEC		word_4
		BNE		sub_265241
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265259:
		JSR		sub_265541
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265264:
		JSR		sub_265524
		LDA		_spr_ram+6
		AND		#$40
		BEQ		loc_265271
		JMP		loc_2652F1
loc_265271:
		LDA		_spr_ram+$C
		CMP		_spr_ram+$40
		BCS		loc_2652C2
		SEC
		SBC		#8
		STA		_spr_ram+$40
		STA		_spr_ram+$44
		LDA		#$F8
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		_spr_ram+$43
		STA		_spr_ram+$E3
		LDA		_spr_ram+$47
		STA		_spr_ram+$E7
		LDA		_spr_ram+$4F
		STA		_spr_ram+$EB
		LDA		_spr_ram+$53
		STA		_spr_ram+$EF
		LDA		_spr_ram+$F
		STA		_spr_ram+$43
		LDA		_spr_ram+$13
		STA		_spr_ram+$47
		LDA		_spr_ram+$17
		CLC
		ADC		#8
		STA		_spr_ram+$4F
		STA		_spr_ram+$53
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_2652C2:
		LDA		_spr_ram+$48
		STA		_spr_ram+$40
		STA		_spr_ram+$44
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		_spr_ram+$E3
		STA		_spr_ram+$43
		LDA		_spr_ram+$E7
		STA		_spr_ram+$47
		LDA		_spr_ram+$EB
		STA		_spr_ram+$4F
		LDA		_spr_ram+$EF
		STA		_spr_ram+$53
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_2652F1:
		LDA		_spr_ram+$C
		CMP		_spr_ram+$40
		BCS		loc_265342
		SEC
		SBC		#8
		STA		_spr_ram+$40
		STA		_spr_ram+$44
		LDA		#$F8
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		_spr_ram+$43
		STA		_spr_ram+$E3
		LDA		_spr_ram+$47
		STA		_spr_ram+$E7
		LDA		_spr_ram+$4F
		STA		_spr_ram+$EB
		LDA		_spr_ram+$53
		STA		_spr_ram+$EF
		LDA		_spr_ram+$F
		STA		_spr_ram+$43
		LDA		_spr_ram+$13
		STA		_spr_ram+$47
		LDA		_spr_ram+$17
		SEC
		SBC		#8
		STA		_spr_ram+$4F
		STA		_spr_ram+$53
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_265342:
		LDA		_spr_ram+$48
		STA		_spr_ram+$40
		STA		_spr_ram+$44
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		_spr_ram+$E3
		STA		_spr_ram+$43
		LDA		_spr_ram+$E7
		STA		_spr_ram+$47
		LDA		_spr_ram+$EB
		STA		_spr_ram+$4F
		LDA		_spr_ram+$EF
		STA		_spr_ram+$53
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_265371:
;		JMP		sub_265524

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_265374:
;		JMP		sub_265541

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_265377:
;		JMP		sub_26555E

; =============== S U B	R O U T	I N E =======================================
sub_26537A:
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_265386
		INC		word_6C+1
loc_265386:
		LDY		#$14
		LDX		#7
		JSR		sub_265447
		LDA		_spr_ram+$BB
		CLC
		ADC		word_4
		STA		_spr_ram+$BB
		LDA		_spr_ram+$E3
		CLC
		ADC		word_4
		STA		_spr_ram+$E3
		LDA		_spr_ram+$E7
		CLC
		ADC		word_4
		STA		_spr_ram+$E7
		LDA		_spr_ram+$EB
		CLC
		ADC		word_4
		STA		_spr_ram+$EB
		LDA		_spr_ram+$EF
		CLC
		ADC		word_4
		STA		_spr_ram+$EF
		LDY		#$10
		LDX		#$7B
		JSR		sub_265447
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_2653CD
		INC		word_6C+1
loc_2653CD:
		LDY		#$12
		LDX		#4
		JSR		sub_265447
		LDY		#$10
		LDX		#$78
		JSR		sub_265447
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2653E5
		INC		word_6C+1
loc_2653E5:
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2653EB:
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_2653F7
		INC		word_6C+1
loc_2653F7:
		LDY		#9
		LDX		#$57
		JSR		sub_265447
		LDA		_spr_ram+$C3
		CLC
		ADC		word_4
		STA		_spr_ram+$C3
		LDA		_spr_ram+$C7
		CLC
		ADC		word_4
		STA		_spr_ram+$C7
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_26541C
		INC		word_6C+1
loc_26541C:
		LDY		#9
		LDX		#$54
		JSR		sub_265447
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_26542D
		INC		word_6C+1
loc_26542D:
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265433:
		JMP		sub_2654D7

; =============== S U B	R O U T	I N E =======================================
sub_265436:
		TXA
		PHA
		JSR		sub_26537A
		PLA
		TAX
		JSR		sub_2653EB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265441:
		JMP		sub_26546D

; =============== S U B	R O U T	I N E =======================================
sub_265444:
		JMP		sub_2654AD

; =============== S U B	R O U T	I N E =======================================
sub_265447:
		PHA
loc_265448:
		LDA		_spr_ram,X
		CLC
		ADC		word_4
		STA		_spr_ram,X
		INX
		INX
		INX
		INX
		DEY
		BNE		loc_265448
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_26545A:
;		PHA
;loc_26545B:
;		LDA		_spr_ram,X
;		SEC
;		SBC		4
;		STA		_spr_ram,X
;		INX
;		INX
;		INX
;		INX
;		DEY
;		BNE		loc_26545B
;		PLA
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_26546D:
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_265475
		INC		word_6C+1
loc_265475:
		TAX
		LDA		#<[byte_265879]
		STA		word_6E
		LDA		#>[byte_265879]
		STA		word_6E+1
		TXA
		BEQ		loc_265491
loc_265483:
		LDA		word_6E
		CLC
		ADC		#$14
		STA		word_6E
		BCC		loc_26548E
		INC		word_6E+1
loc_26548E:
		DEX
		BNE		loc_265483
loc_265491:
		LDY		#0
		LDX		#0
loc_265495:
		LDA		(word_6E),Y
		STA		_spr_ram+5,X
		INY
		INX
		INX
		INX
		INX
		CPY		#$14
		BCC		loc_265495
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS
;off_2654AB:
;		.WORD	byte_265879

; =============== S U B	R O U T	I N E =======================================
sub_2654AD:
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2654B5
		INC		word_6C+1
loc_2654B5:
		STA		word_4
		ASL
		ASL
		ASL
		CLC
		ADC		word_4
		TAY
		LDX		#0
loc_2654C0:
		LDA		byte_2659A5,Y
		STA		_spr_ram+$55,X
		INY
		INX
		INX
		INX
		INX
		CPX		#$24
		BCC		loc_2654C0
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2654D7:
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2654DF
		INC		word_6C+1
loc_2654DF:
		ASL
		ASL
		ASL
		ASL
		TAY
		LDX		#0
loc_2654E6:
		LDA		byte_265A74,Y
		STA		_spr_ram+$79,X
		INY
		INX
		INX
		INX
		INX
		CPX		#$40
		BCC		loc_2654E6
		LDX		#0
		LDY		#0
loc_2654F9:
		LDA		byte_265514,X
		CLC
		ADC		_spr_ram+$28
		STA		_spr_ram+$78,Y
		INY
		INY
		INY
		INY
		INX
		CPX		#$10
		BCC		loc_2654F9
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS
byte_265514:
		.BYTE	  0,  0,  8,  8,  8,$10,$10,$10,$18,$18,$18,$20,$20,$20,$28,$28

; =============== S U B	R O U T	I N E =======================================
sub_265524:
		LDX		#0
loc_265526:
		LDA		(word_6C),Y
		STA		_spr_ram+5,X
		INC		word_6C
		BNE		loc_265531
		INC		word_6C+1
loc_265531:
		INX
		INX
		INX
		INX
		CPX		#$50
		BCC		loc_265526
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265541:
		LDX		#0
loc_265543:
		LDA		(word_6C),Y
		STA		_spr_ram+$55,X
		INC		word_6C
		BNE		loc_26554E
		INC		word_6C+1
loc_26554E:
		INX
		INX
		INX
		INX
		CPX		#$24
		BCC		loc_265543
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_26555E:
		LDX		#0
loc_265560:
		LDA		($6C),Y
		STA		$279,X
		INC		$6C
		BNE		loc_26556B
		INC		$6D
loc_26556B:
		INX
		INX
		INX
		INX
		CPX		#$40
		BCC		loc_265560
		LDA		#0
		STA		4
		BIT		4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_26557B:
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_265587
		INC		word_6C+1
loc_265587:
		LDY		#$14
		LDX		#7
		JSR		sub_265447
		LDA		_spr_ram+$BB
		CLC
		ADC		word_4
		STA		_spr_ram+$BB
		LDA		_spr_ram+$E3
		CLC
		ADC		word_4
		STA		_spr_ram+$E3
		LDA		_spr_ram+$E7
		CLC
		ADC		word_4
		STA		_spr_ram+$E7
		LDA		_spr_ram+$EB
		CLC
		ADC		word_4
		STA		_spr_ram+$EB
		LDA		_spr_ram+$EF
		CLC
		ADC		word_4
		STA		_spr_ram+$EF
		LDY		#$10
		LDX		#$7B
		JSR		sub_265447
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_2655CE
		INC		word_6C+1
loc_2655CE:
		LDY		#$14
		LDX		#4
		JSR		sub_265447
		LDY		#$10
		LDX		#$78
		JSR		sub_265447
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2655E6
		INC		word_6C+1
loc_2655E6:
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2655EC:
		LDX		#0
loc_2655EE:
		LDA		_spr_ram+6,X
		EOR		#$40
		STA		_spr_ram+6,X
		INX
		INX
		INX
		INX
		CPX		#$50
		BCC		loc_2655EE
		LDX		#0
		LDY		#0
		LDA		_spr_ram+6
		AND		#$40
		BEQ		loc_265639
loc_265609:
		LDA		byte_265817,X
		CLC
		ADC		_spr_ram+7,Y
		STA		_spr_ram+7,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$50
		BCC		loc_265609
		LDY		#0
loc_26561E:
		LDA		byte_265817,X
		CLC
		ADC		_spr_ram+$E3,Y
		STA		_spr_ram+$E3,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$10
		BCC		loc_26561E
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_265639:
		LDA		byte_26582F,X
		CLC
		ADC		_spr_ram+7,Y
		STA		_spr_ram+7,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$50
		BCC		loc_265639
		LDY		#0
loc_26564E:
		LDA		byte_26582F,X
		CLC
		ADC		_spr_ram+$E3,Y
		STA		_spr_ram+$E3,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$10
		BCC		loc_26564E
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265669:
		LDX		#0
loc_26566B:
		LDA		_spr_ram+$56,X
		EOR		#$40
		STA		_spr_ram+$56,X
		INX
		INX
		INX
		INX
		CPX		#$24
		BCC		loc_26566B
		LDX		#0
		LDY		#0
		LDA		_spr_ram+$56
		AND		#$40
		BEQ		loc_2656A1
loc_265686:
		LDA		byte_265847,X
		CLC
		ADC		_spr_ram+$57,Y
		STA		_spr_ram+$57,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$24
		BCC		loc_265686
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_2656A1:
		LDA		byte_265850,X
		CLC
		ADC		_spr_ram+$57,Y
		STA		_spr_ram+$57,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$24
		BCC		loc_2656A1
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2656BC:
		LDX		#0
loc_2656BE:
		LDA		_spr_ram+$7A,X
		EOR		#$40
		STA		_spr_ram+$7A,X
		INX
		INX
		INX
		INX
		CPX		#$40
		BCC		loc_2656BE
		LDX		#0
		LDY		#0
		LDA		_spr_ram+$7A
		AND		#$40
		BEQ		loc_2656F7
loc_2656D9:
		LDA		byte_265859,X
		CLC
		ADC		_spr_ram+$7B,Y
		SEC
		SBC		#$40
		STA		_spr_ram+$7B,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$40
		BCC		loc_2656D9
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_2656F7:
		LDA		byte_265869,X
		CLC
		ADC		_spr_ram+$7B,Y
		CLC
		ADC		#$40
		STA		_spr_ram+$7B,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$40
		BCC		loc_2656F7
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265715:
		LDX		#0
loc_265717:
		LDA		_spr_ram+$54,X
		PHA
		INX
		CPX		#$10
		BCC		loc_265717
		LDX		#0
loc_265722:
		LDA		_spr_ram+$A8,X
		STA		_spr_ram+$54,X
		INX
		CPX		#$10
		BCC		loc_265722
		LDX		#$F
loc_26572F:
		PLA
		STA		_spr_ram+$A8,X
		DEX
		BPL		loc_26572F
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_265740
		INC		word_6C+1
loc_265740:
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_265746:
;		LDX		#0
;loc_265748:
;		LDA		_spr_ram+$A8,X
;		PHA
;		INX
;		CPX		#$10
;		BCC		loc_265748
;		LDX		#0
;		LDY		#$F
;loc_265755:
;		LDA		_spr_ram+$54,X
;		STA		_spr_ram+$A8,Y
;		PLA
;		STA		_spr_ram+$54,X
;		DEY
;		INX
;		CPX		#$10
;		BCC		loc_265755
;		LDY		#0
;		LDA		(word_6C),Y
;		INC		word_6C
;		BNE		loc_26576F
;		INC		word_6C+1
;loc_26576F:
;		STA		word_4
;		BIT		word_4
;		CLC
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_265775:
		LDX		#0
		LDY		#0
		LDA		#$F8
loc_26577B:
		STA		_spr_ram+$78,X
		INX
		INX
		INX
		INX
		INY
		CPY		#$10
		BCC		loc_26577B
		LDY		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_26578F:
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_265799
		INC		word_6C+1
loc_265799:
		CMP		#1
		BEQ		loc_2657A8
		CMP		#2
		BEQ		loc_2657CF
		CMP		#3
		BEQ		loc_2657F3
loc_2657A5:
		JMP		loc_2657A5
loc_2657A8:
		LDY		#0
		LDX		#0
loc_2657AC:
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2657B4
		INC		word_6C+1
loc_2657B4:
		STA		_spr_ram+4,X
		INX
		INX
		INX
		INX
		CPX		#$50
		BCC		loc_2657AC
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2657C9
		INC		word_6C+1
loc_2657C9:
		STA		word_4
		BIT		word_4
		CLC
		RTS
loc_2657CF:
		LDY		#0
		LDX		#0
loc_2657D3:
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2657DB
		INC		word_6C+1
loc_2657DB:
		STA		_spr_ram+$78,X
		INX
		CPX		#$40
		BCC		loc_2657D3
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_2657ED
		INC		word_6C+1
loc_2657ED:
		STA		word_4
		BIT		word_4
		CLC
		RTS
loc_2657F3:
		LDY		#0
		LDX		#0
loc_2657F7:
		LDA		(word_6C),Y
		STA		_spr_ram+4,X
		INC		word_6C
		BNE		loc_265802
		INC		word_6C+1
loc_265802:
		INX
		CPX		#$50
		BCC		loc_2657F7
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_265811
		INC		word_6C+1
loc_265811:
		STA		word_4
		BIT		word_4
		CLC
		RTS
byte_265817:
		.BYTE	$20,$10,  0,$F0,$E0,$20,$10,  0,$F0,$E0,$20,$10,  0,$F0,$F0,  0
		.BYTE	  8,  0,$D0,$D0,  0,  8,$E0,$E0
byte_26582F:
		.BYTE	$E0,$F0,  0,$10,$20,$E0,$F0,  0,$10,$20,$E0,$F0,  0,$10,$10,  0
		.BYTE	$F8,  0,$30,$30,  0,$F8,$20,$20
byte_265847:
		.BYTE	  8,$F8,  8,$F8,  8,$F8,  8,$18,$18
byte_265850:
		.BYTE	$F8,  8,$F8,  8,$F8,  8,$F8,$E8,$E8
byte_265859:
		.BYTE	$20,$10,$20,$10,  0,$10,  0,$F0,  0,$F0,$E0,  0,$F0,$E0,$F0,$E0
byte_265869:
		.BYTE	$E0,$F0,$E0,$F0,  0,$F0,  0,$10,  0,$10,$20,  0,$10,$20,$10,$20
byte_265879:
		.BYTE	$60,$61,$62,$63,$64,$70,$71,$72,$73,$74,$80,$81,$82,$83,$93,  1
		.BYTE	  1,$92,  1,  1,$36,$37,$38,$63,$64,$46,$47,$48,$73,$74,$56,$57
		.BYTE	$82,$83,$93,  1,  1,$92,  1,  1,  1,  1,$3B,$63,$64,$49,$4A,$4B
		.BYTE	$73,$74,$59,$5A,$82,$83,$93,  1,  1,$92,  1,  1,  1,  1,$3E,$63
		.BYTE	$64,$4C,$4D,$4E,$73,$74,$56,$57,$5E,$5F,$3D,  1,  1,$92,  1,  1
		.BYTE	$60,$61,$62,$6E,$6F,$70,$71,$72,$7E,$7F,$80,$81,$82,$83,$93,  1
		.BYTE	  1,$92,  1,  1,$60,$61,$62,$63,$3F,$70,$71,$72,$73,$4F,$80,$81
		.BYTE	$82,$83,$93,  1,  1,$92,  1,  1,$60,$61,$62,$63,$64,$70,$71,$72
		.BYTE	$73,$74,$80,$81,$90,$91,$A1,  1,  1,$A0,  1,  1,  1,$85,$86,$63
		.BYTE	$64,$94,$95,$96,$73,$74,$80,$81,$90,$91,$A1,  1,  1,$A0,  1,  1
		.BYTE	$36,$37,$38,$63,$3F,$46,$47,$48,$73,$4F,$56,$57,$82,$83,$93,  1
		.BYTE	  1,$92,  1,  1,$36,$37,$65,$6A,$6B,$46,$47,$48,$7A,$7B,$56,$57
		.BYTE	$82,$83,$93,  1,  1,$92,$6C,$7C,$60,$61,$62,$6E,$6F,$70,$71,$72
		.BYTE	$7E,$7F,$80,$81,$82,$83,$93,  1,  1,$92,  1,  1,$36,$37,$38,$6E
		.BYTE	$6F,$46,$47,$48,$7E,$7F,$56,$57,$82,$83,$93,  1,  1,$92,  1,  1
		.BYTE	  1,  1,$3B,$6E,$6F,$49,$4A,$4B,$7E,$7F,$59,$5A,$82,$83,$93,  1
		.BYTE	  1,$92,  1,  1,  1,  1,$3E,$6E,$6F,$4C,$4D,$4E,$7E,$7F,$56,$57
		.BYTE	$5E,$5F,$3D,  1,  1,$92,  1,  1,  1,$85,$86,$63,$3F,$94,$95,$96
		.BYTE	$73,$4F,$80,$81,$90,$91,$A1,  1,  1,$A0,  1,  1
byte_2659A5:
		.BYTE	$50,$51,$10,$11,$20,$21,  1,  1,  1,  2,  3,$12,$11,$22,$23,  1
		.BYTE	  1,  1,$50,$51,$17,$11,$20,$21,  1,  1,$16, $A, $B,$1A,$1B,$2A
		.BYTE	$2B,  1,  1,  1,$19,$51,$29,$11,  4,  5,  9,  1,  1,$50,$51,$18
		.BYTE	$11,$28,$27,  1,  1,  1, $C, $D,$1C,$1D,$2C,$2D,  1,  1,  1, $C
		.BYTE	 $D,$1C,$1D,$2C,$2D,  1,  1,  1, $E, $F,$1E,$1F,$2E,$2F,  1,  1
		.BYTE	  1,$32,$33,$42,$43,$52,$53,  1,  1,  1,$19,$35,$44,$45,$54,$55
		.BYTE	  9,  1,  1,  6,  7,$41,$15,$24,$25,  1,$30,$40,  6,  7,$31,$15
		.BYTE	$24,$25,  1,  1,  1,$50,$51,$10,$11,  4,  5,  1,  1,  1,  2,  3
		.BYTE	$14,$15,$24,$25,  1,  1,  1,$50,$51,$10,$11,$26,$27,  1,  1,  1
		.BYTE	$50,$35,$10,$45,$54,$55,  1,  1,  1,  6,  7,$14,$15,$24,$25,  1
		.BYTE	  1,  1,$19,  7,$44,$11,$54,$55,  9,  1,  1,  1,  1, $A, $B,$1A
		.BYTE	$1B,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,$34,$3C,$58
		.BYTE	$11,$20,$21,  1,  1,  1,$5B,$69,$6D,$11,$22,$23,  1,  1,  1
byte_265A74:
		.BYTE	$EA,$EB,$FA,$FB,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1
		.BYTE	$EA,$EB,$FA,$CC,$ED,$DC,$DD,  1,  1,  1,  1,  1,  1,  1,  1,  1
		.BYTE	$EA,$EB,$FA,$CC,$ED,$DC,$EC,$ED,$FC,$DD,  1,  1,  1,  1,  1,  1
		.BYTE	$EA,$EB,$FA,$CC,$ED,$DC,$EC,$ED,$FC,$DE,$DF,  1,$EE,$EF,$FD,$FE
		.BYTE	$F0,$F1,$F2,$F3,$F4,$F5,$F6,$F4,$F7,$F8,$F9,$E4,$E5,$E6,$E7,$E8
		.BYTE	  1,  1,  1,$EA,$EB,$DC,$CC,$ED,$FC,$DE,$DF,  1,$EE,$EF,$FD,$FE
		.BYTE	  1,  1,  1,  1,  1,  1,$EA,$EB,$DC,$EC,$DF,  1,$EE,$EF,$FD,$FE
		.BYTE	  1,  1,  1,  1,  1,  1,  1,  1,$EA,$EB,  1,$FA,$CC,$ED,$DC,$DD
		.BYTE	  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,$EA,$EB,$FA,$FB
		.BYTE	  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1
;off_265B14:
;		.WORD	byte_265B16
byte_265B16:
		.BYTE	$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40
		.BYTE	$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1
		.BYTE	  0,$40,$D0,  3,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0
		.BYTE	$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0
		.BYTE	  1,  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0,$90,  1,  0,  0
		.BYTE	$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  0,$90,  0,$FF,  0,$90,  1
		.BYTE	  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0
		.BYTE	$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  2,$90,  0
		.BYTE	$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  3
		.BYTE	$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40
		.BYTE	$D0,  2,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF
		.BYTE	  0,$40,$D0,  1,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0
		.BYTE	$90,$FF,  0,$40,$D0,  0,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0
		.BYTE	  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,$FF,  0,$90,$FF,  0,  0
		.BYTE	$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF,  0,$90,$FF
		.BYTE	  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  3,$90,  0,$FF,  0
		.BYTE	$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0
		.BYTE	$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  1
		.BYTE	$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0
		.BYTE	$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0
		.BYTE	$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0
		.BYTE	$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0
		.BYTE	$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0
		.BYTE	$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  1,  0
		.BYTE	$90,$FF,  2,  0,$90,$FF,  2,  0,$90,$FF,  2,  0,$90,$FF,  2,  0
		.BYTE	$90,$FF,  2,  0,$90,$FF,  2,  0,$90,$FF,  2,  0,$90,$FF,  2,  0
		.BYTE	$90,  0,  0,  0,$90,  0,  0,  0,$90,  0,  0,  0,$90,  0,  0,$40
		.BYTE	$D0,  0,  2,  1,  0, $A,  4,$D0,  5,  2,  1,  0, $A,  4,$D0,  4
		.BYTE	  2,  1,  0,$1E,  4,$C0,  0,  2,  1,$91,  2,  4,$C0,  1,  2,  1
		.BYTE	  0,  2,  4,$C0,  2,$E0,  7,  2,  1,  0,  1,  4,$C0,  3,  2,  1
		.BYTE	  0,  2,  4,$C0,  4,  2,  1,  0,  2,  4,$C0,  5,  2,  1,  0,  2
		.BYTE	  4,$C0,  4,  2,  1,  0,  2,  4,$C0,  5,  2,  1,  0,  2,  4,$C0
		.BYTE	  4,  2,  1,  0,  2,  4,$C0,  5,  2,  1,  0,  2,  4,$C0,  4,  2
		.BYTE	  1,  0,  2,  4,$C0,  5,  2,  1,  0,  2,  4,$C0,  4,  2,  1,  0
		.BYTE	  2,  4,$C0,  5,  2,  1,  0,  2,  4,$C0,  4,  2,  1,  0,  2,  4
		.BYTE	$C0,  5,  2,  1,  0,  2,  4,$C0,  4,  2,  1,  0,  2,  4,$C0,  5
		.BYTE	  2,  1,  0,  2,  4,$C0,  4,  2,  1,  0,  2,  4,$C0,  5,  2,  1
		.BYTE	  0,  2,  4,$C0,  4,  2,  1,  0,  2,  4,$C0,  5,  2,  1,  0,  2
		.BYTE	  4,$C0,  6,  2,  1,  0,  2,  4,$C0,  7,  2,  1,  0,  2,  4,$C0
		.BYTE	  8,  2,  1,  0,  2,  4,$C0,  9,$90,  0,  1,  0,$90,$FF,  0,  0
		.BYTE	$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  0,$90,  0,  1,  0,$90,$FF
		.BYTE	  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0
		.BYTE	$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  2,$90,  0
		.BYTE	  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  3
		.BYTE	$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40
		.BYTE	$D0,  2,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF
		.BYTE	  0,$40,$D0,  1,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0
		.BYTE	$90,$FF,  0,$40,$D0,  0,$90,  0,$FF,  0,$90,$FF,  0,  0,$90,  0
		.BYTE	$FF,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0,  0
		.BYTE	$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1
		.BYTE	  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0
		.BYTE	$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0
		.BYTE	  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  1
		.BYTE	$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40
		.BYTE	$D0,  0,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1
		.BYTE	  0,$40,$D0,  1,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0
		.BYTE	$90,  1,  0,$40,$D0,  2,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0
		.BYTE	$FF,  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,$40,$E0,$16,$90,$FF
		.BYTE	  0,$40,$A0,  1,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40,$D0,  2
		.BYTE	$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0,$40
		.BYTE	$D0,  1,$90,  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0,  0,$90,  0
		.BYTE	  1,  0,$90,$FF,  0,$40,$D0,  0,$90,  0,  1,  0,$90,$FF,  0,  0
		.BYTE	$90,  0,  1,$40,$A0,  1,  0,  0,$90,$FF,  0,$40,$D0,  1,$90,  0
		.BYTE	$FF,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2
		.BYTE	$90,  0,$FF,$40,$A0,  1,  0,$40,$E0,$15,$90,$FF,  0,$40,$A0,  1
		.BYTE	  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  3,$90,  0,$FF,  0
		.BYTE	$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0
		.BYTE	$FF,$40,$A0,  1,  0,  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF
		.BYTE	  0,$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,$40
		.BYTE	$A0,  1,  0,  0,$90,  1,  0,$40,$D0,  0,$90,  0,  1,  0,$90,  1
		.BYTE	  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  1,$90,  0,  1,$40
		.BYTE	$A0,  1,  0,$40,$E0,$16,$90,  1,  0,$40,$A0,  1,  0,  0,$90,  0
		.BYTE	  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0
		.BYTE	$90,  0,  1,  0,$90,  1,  0,$40,$D0,  3,$90,  0,$FF,$40,$A0,  1
		.BYTE	  0,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  2
		.BYTE	$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,$40,$A0,  1,  0,  0
		.BYTE	$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0,$90,  1,  0,  0,$90,  0
		.BYTE	$FF,  0,$90,  1,  0,$40,$D0,  0,$90,  0,$FF,$40,$A0,  1,  0,$40
		.BYTE	$E0,$15,$90,  1,  0,$40,$A0,  1,  0,  0,$90,  0,$FF,  0,$90,  1
		.BYTE	  0,$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0
		.BYTE	$90,  1,  0,$40,$D0,  2,$90,  0,  1,$40,$A0,  1,  0,  0,$90,  1
		.BYTE	  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0
		.BYTE	$90,  1,  0,  0,$90,  0,  1,$40,$A0,  1,  0,  0,$90,  1,  0,$40
		.BYTE	$D0,  2,$90,  0,  1,$40,$A0,  1,  0,$40,$E0,$16,$90,  1,  0,  0
		.BYTE	$90,  0,  1,  0,$90,  1,  0,$40,$D0,  1,$90,$FF,  1,  0,$90,$FF
		.BYTE	  1,  0,$90,$FF,  1,  0,$90,$FF,  1,  0,$90,$FF,  1,  0,$90,$FF
		.BYTE	  1,  0,$90,$FF,  1,  0,$90,$FF,  1,  0,$90,$FF,  2,  0,$90,$FF
		.BYTE	  2,  0,$90,$FF,  2,  0,$90,$FF,  2,  0,$90,$FF,  3,  0,$90,$FF
		.BYTE	  3,  0,$90,$FF,  3,  0,$90,$FF,  3,  0,  2,  1,  0, $A,  4,$D0
		.BYTE	  5,  2,  1,  0, $A,  4,$D0,  4,  2,  1,  0,$1E,  4,$C0,  0,  2
		.BYTE	  1,$AB,  2,  4,$C0,  1,  2,  1,  0,  2,  4,$C0,  2,$E0,  7,  2
		.BYTE	  1,  0,  1,  4,$C0,  3,  2,  1,  0,  2,  4,$C0,  4,$E0,  8,  0
		.BYTE	  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  5,  0,  4,  0,  2
		.BYTE	  1,  0,  1,  4,  0,  5,$40,$C0,  4,  0,  4,  0,  2,  1,  0,  1
		.BYTE	  4,  0,  5,$40,$C0,  5,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5
		.BYTE	$40,$C0,  4,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  5
		.BYTE	  0,  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  4,  0,  4,  0
		.BYTE	  2,  1,  0,  1,  4,  0,  5,$40,$C0,  5,  0,  4,  0,  2,  1,  0
		.BYTE	  1,  4,  0,  5,$40,$C0,  4,  0,  4,  0,  2,  1,  0,  1,  4,  0
		.BYTE	  5,$40,$C0,  5,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0
		.BYTE	  4,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  5,  0,  4
		.BYTE	  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  4,  0,  4,  0,  2,  1
		.BYTE	  0,  1,  4,  0,  5,$40,$C0,  5,  0,  4,  0,  2,  1,  0,  1,  4
		.BYTE	  0,  5,$40,$C0,  4,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5,$40
		.BYTE	$C0,  5,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  4,  0
		.BYTE	  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  5,  0,  4,  0,  2
		.BYTE	  1,  0,  1,  4,  0,  5,$40,$C0,  4,  0,  4,  0,  2,  1,  0,  1
		.BYTE	  4,  0,  5,$40,$C0,  5,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5
		.BYTE	$40,$C0,  4,  0,  4,  0,  2,  1,  0,  1,  4,  0,  5,$40,$C0,  5
		.BYTE	  0,  4,  0,$FF
;off_2661EA:
;		.WORD	byte_2661EC
byte_2661EC:
		.BYTE	$A0,$FF,  0,$40,$90,$FE,  0,$40,$D0, $A,$A0,$FF,  0,$40,  2,  1
		.BYTE	  0,  1,  5,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0,  5,$40,$C0,  4
		.BYTE	$A0,$FF,  0,$40,$90,$FF,  0,$40,  0,  4,$40,$D0, $B,  2,  1,  0
		.BYTE	  1,  5,  0,  5,$40,$C0,  5,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0
		.BYTE	  4,  0,  2,  1,  0,  1,  5,  0,  5,$40,$C0,  4,$A0,$FF,  0,$40
		.BYTE	$90,$FF,  0,$40,  0,  4,$40,$D0, $C,  2,  1,  0,  1,  5,  0,  5
		.BYTE	$40,$C0,  5,  0,  4,$40,  2,  1,  0,  1,  5,$A0,$FF,  0,$40,$90
		.BYTE	$FF,  0,  0,  0,  5,$40,$C0,  4,  0,  4,$40,  2,  1,  0,  2,  5
		.BYTE	  0,  5,$40,$C0,  5,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0,  4,$40
		.BYTE	$D0, $D,  2,  1,  0,  1,  5,  0,  5,$40,$C0,  4,  0,  4,$40,  2
		.BYTE	  1,  0,  3,  5,  0,  5,$40,$C0,  5,$A0,$FF,  0,$40,$90,$FF,  0
		.BYTE	$40,  0,  4,$40,$D0, $C,  2,  1,  0,  1,  5,  0,  5,$40,$C0,  4
		.BYTE	  0,  4,$40,  2,  1,  0,  3,  5,  0,  5,$40,$C0,  5,$A0,$FF,  0
		.BYTE	$40,$90,$FF,  0,$40,  0,  4,$40,$D0, $B,  2,  1,  0,  1,  5,  0
		.BYTE	  5,$40,$C0,  4,  0,  4,$40,  2,  1,  0,  3,  5,  0,  5,$40,$C0
		.BYTE	  5,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0,  4,$40,$D0, $A,  2,  1
		.BYTE	  0,  1,  5,  0,  5,$40,$C0,  5,  0,  4,$40,  2,  1,  0,  3,  5
		.BYTE	  0,  5,$40,$C0,  4,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0,  4,$40
		.BYTE	$D0, $B,  2,  1,  0,  1,  5,  0,  5,$40,$C0,  5,  0,  4,$40,  2
		.BYTE	  1,  0,  3,  5,  0,  5,$40,$C0,  4,$A0,$FF,  0,$40,$90,$FF,  0
		.BYTE	$40,  0,  4,$40,$D0, $C,  2,  1,  0,  1,  5,  0,  5,$40,$C0,  5
		.BYTE	  0,  4,$40,  2,  1,  0,  3,  5,  0,  5,$40,$C0,  4,$A0,$FF,  0
		.BYTE	$40,$90,$FF,  0,$40,  0,  4,$40,$D0, $D,  2,  1,  0,  1,  5,  0
		.BYTE	  5,$40,$C0,  4,  0,  4,$40,  2,  1,  0,  3,  5,  0,  5,$40,$C0
		.BYTE	  4,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0,  4,  0,  2,  1,  0,  1
		.BYTE	  5,  0,  5,$40,$C0,  5,  0,  4,$40,  2,  1,  0,  3,  5,  0,  5
		.BYTE	$40,$C0,  4,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0,  4,$40,$D0, $C
		.BYTE	  2,  1,  0,  1,  5,  0,  5,$40,$C0,  5,  0,  4,$40,  2,  1,  0
		.BYTE	  3,  5,  0,  5,$40,$C0,  4,$A0,$FF,  0,$40,$90,$FF,  0,$40,  0
		.BYTE	  4,  0,  2,  1,  0,  1,  5,  0,  5,$40,$C0,  5,  0,  4,$40,  2
		.BYTE	  1,  0,  3,  5,  0,  5,$40,$C0,  4,$A0,$FF,  0,$40,$90,$FF,  0
		.BYTE	$40,  0,  4,$40,$D0, $B,  2,  1,  0,  1,  5,  0,  5,$40,$C0,  5
		.BYTE	  0,  4,$40,  2,  1,  0,  3,  5,  0,  5,$40,$C0,  6,$A0,$FF,  0
		.BYTE	$40,$90,$FF,  0,$40,  0,  4,  0,  2,  1,  0,  1,  5,  0,  5,$40
		.BYTE	$C0,  7,  0,  4,$40,  2,  1,  0,  3,  5,  0,  5,$40,$C0,  8,$A0
		.BYTE	$FF,  0,$40,$90,$FF,  0,$40,  0,  4,$40,$D0, $A,  2,  1,  0,  1
		.BYTE	  5,  0,  5,$40,$C0,  9,  0,  4,$40,  2,  1,  0,  3,  5,  0,  5
		.BYTE	$40,$C0,  9,$A0,$FF,  0,$40,$90,$FF,  0,  0,  2,  1,  0,  1,  5
		.BYTE	$C0,  9,  2,  1,  0,  3,  5,$A0,$FF,  0,$40,$D0, $C,  2,  1,  0
		.BYTE	  5,  5,$A0,$FF,  0,$40,$D0, $B,  2,  1,  0,  5,  6,$90,  0,  1
		.BYTE	$40,$E0,  1,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0
		.BYTE	  2,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90,  1,  0
		.BYTE	$40,$D0,  3,$90,  0,  1,$40,$E0,$16,$90,  1,  0,  0,$90,  0,  1
		.BYTE	  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0,$90
		.BYTE	  0,  1,  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0,$90,  1,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  0,$90,  0,$FF,  0,$90
		.BYTE	  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  2,$90
		.BYTE	  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0
		.BYTE	  3,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90,$FF,  0
		.BYTE	$40,$D0,  2,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1,  0,$90
		.BYTE	$FF,  0,$40,$D0,  1,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1
		.BYTE	  0,$90,$FF,  0,$40,$D0,  0,$90,  0,  1,  0,$90,$FF,  0,  0,$90
		.BYTE	  0,  1,  0,$90,$FF,  0,$40,$D0,  1,$90,  0,$FF,  0,$90,$FF,  0
		.BYTE	  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90,  0,$FF,  0,$90
		.BYTE	$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  3,$90,  0,$FF
		.BYTE	  0,$90,$FF,  0,  0,$90,  0,$FF,  0,$90,$FF,  0,$40,$D0,  2,$90
		.BYTE	  0,$FF,  0,$90,$FF,  0,$40,$E0,  9,$90,  0,$FF,  0,$90,$FF,  0
		.BYTE	$40,$D0,  1,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1,  0,$90
		.BYTE	  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0,  0,$90,  0,  1
		.BYTE	  0,$90,  1,  0,$40,$D0,  3,$90,  0,  1,  0,$90,  1,  0,  0,$90
		.BYTE	  0,  1,  0,$90,  1,  0,$40,$D0,  2,$90,  0,  1,  0,$90,  1,  0
		.BYTE	  0,$90,  0,  1,  0,$90,  1,  0,$40,$D0,  1,$90,  0,$FF,  0,$90
		.BYTE	  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  0,$90,  0,$FF
		.BYTE	  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0,  1,$90
		.BYTE	  0,$FF,  0,$90,  1,  0,  0,$90,  0,$FF,  0,$90,  1,  0,$40,$D0
		.BYTE	  2,$90,  0,$FF,$40,$E0, $A,$A0,  1,$FC,$40,$90,  1,  0,  0,$A0
		.BYTE	  1,$FC,$40,$90,  0,$FF,  0,$A0,  1,$FD,$40,$90,  1,  0,$40,$D0
		.BYTE	  3,$A0,  1,$FD,$40,$90,  0,  1,  0,$A0,  1,$FE,$40,$90,$FF,  0
		.BYTE	  0,$A0,  1,$FE,$40,$90,  0,  1,  0,$A0,  1,$FE,$40,$90,$FF,  0
		.BYTE	$40,$D0,  2,$A0,  1,$FE,$40,$90,  0,  1,  0,$A0,  1,$FE,$40,$90
		.BYTE	$FF,  0,  0,$A0,  1,$FE,$40,$90,  0,  1,  0,$A0,  1,$FF,$40,$90
		.BYTE	$FF,  0,$40,$D0,  1,$A0,  1,$FF,$40,$90,  0,  1,  0,$A0,  1,$FF
		.BYTE	$40,$90,$FF,  0,  0,$A0,  1,$FF,$40,$90,  0,  1,  0,$A0,  1,$FF
		.BYTE	$40,$90,$FF,  0,$40,$D0,  0,$A0,  1,$FF,$40,$90,  0,  1,  0,$A0
		.BYTE	  1,  0,$40,$90,$FF,  0,  0,$A0,  1,  0,$40,$90,  0,  1,  0,$A0
		.BYTE	  1,  0,$40,$90,$FF,  0,$40,$D0,  1,$A0,  1,  0,$40,$90,  0,$FF
		.BYTE	  0,$A0,  1,  0,$40,$90,$FF,  0,  0,$A0,  1,  0,$40,$90,  0,$FF
		.BYTE	  0,$A0,  1,  0,$40,$90,$FF,  0,$40,$D0,  2,$A0,  1,  0,$40,$90
		.BYTE	  0,$FF,  0,$A0,  1,  0,$40,$90,$FF,  0,  0,$90,  0,$FF,$40,$A0
		.BYTE	  1,  0,$40,$E0,$12,$90,$FF,  0,$40,$D0,  3,$A0,  1,  1,$40,$90
		.BYTE	  0,$FF,  0,$A0,  1,  1,$40,$90,$FF,  0,$40,  2,  1,$88,  1,  2
		.BYTE	$A0,  1,  1,$40,$90,  0,$FF,  0,$A0,  1,  1,$40,$90,$FF,  0,$40
		.BYTE	$D0,  2,$A0,  1,  1,$40,$90,  0,$FF,  0,$A0,  1,  1,$40,$90,$FF
		.BYTE	  0,  0,$90,  0,$FF,$40,$A0,  1,  2,$40,$E0, $B,$A0,  1,  2,$40
		.BYTE	  2,  1,$87,  1,  2,$90,$FF,  0,$40,$D0,  1,$A0,  1,  2,$40,$E0
		.BYTE	 $C,  4,$14,$A5,  1,$60,$61,$62,$63,$3F,$70,$71,$72,$73,$4F,$80
		.BYTE	$81,$82,$83,$93,  1,  1,$92,  1,  1,  3,$A0,  1,  2,  0,$A0,  1
		.BYTE	  2,  0,$A0,  1,  2,$40,  4,$14,  0,  1,$60,$61,$62,$63,$3F,$70
		.BYTE	$71,$72,$73,$4F,$80,$81,$82,$83,$93,  1,  1,$92,  1,  1,  1,$A0
		.BYTE	  1,  3,  0,$A0,  1,  3,  0,$A0,  1,  4,$40,  4,$14,  0,  1,$60
		.BYTE	$61,$62,$63,$3F,$70,$71,$72,$73,$4F,$80,$81,$82,$83,$93,  1,  1
		.BYTE	$92,  1,  1,  3,$A0,  1,  4,  0,$E0,  9,  2,  1,$A9,  1,  3,  4
		.BYTE	$14,  0,  1,$60,$61,$62,$63,$3F,$70,$71,$72,$73,$4F,$80,$81,$82
		.BYTE	$83,$93,  1,  1,$92,  1,  1,  1,$FF
;off_2667D5:
;		.WORD	byte_2667D9
;off_2667D7:
;		.WORD	byte_26786F
byte_2667D9:
		.BYTE	  0,  6,  2,  1,  0,$14,  5,$E0,  0,  2,  1,  0,  1,  4,  2,  1
		.BYTE	  0,  1,  6,$A0,  2,  0,$40,  5,$18,  0,  1,$95,$8C,$41,$90,$95
		.BYTE	$8B,$41,$98,$9D,$9C,$41,$90,$9D,$9B,$41,$98,$A5,$AC,$41,$90,$A5
		.BYTE	$AB,$41,$98,$A0,  2,  0,$40,$E0,  1,$A0,  2,  0,$40,  5,$18,  0
		.BYTE	  1,$97,$8C,$41,$90,$97,$8B,$41,$98,$9F,$9C,$41,$90,$9F,$9B,$41
		.BYTE	$98,$A7,$AC,$41,$90,$A7,$AB,$41,$98,$A0,  2,  0,$40,$E0,  0,$A0
		.BYTE	  2,  0,$40,  5,$18,  0,  1,$99,$8C,$41,$90,$99,$8B,$41,$98,$A1
		.BYTE	$9C,$41,$90,$A1,$9B,$41,$98,$A9,$AC,$41,$90,$A9,$AB,$41,$98,$A0
		.BYTE	  2,  0,$40,$E0,  1,$A0,  2,  0,$40,  5,$18,  0,  1,$9B,$8C,$41
		.BYTE	$90,$9B,$8B,$41,$98,$A3,$9C,$41,$90,$A3,$9B,$41,$98,$AB,$AC,$41
		.BYTE	$90,$AB,$AB,$41,$98,$A0,  2,  0,$40,$E0,  0,$A0,  2,  0,$40,  5
		.BYTE	$18,  0,  1,$9D,$8C,$41,$90,$9D,$8B,$41,$98,$A5,$9C,$41,$90,$A5
		.BYTE	$9B,$41,$98,$AD,$AC,$41,$90,$AD,$AB,$41,$98,$A0,  2,  0,$40,$E0
		.BYTE	  1,  5,$18,  0,  1,$9F,$8C,$41,$90,$9F,$8B,$41,$98,$A7,$9C,$41
		.BYTE	$90,$A7,$9B,$41,$98,$AF,$AC,$41,$90,$AF,$AB,$41,$98,$E0,  3,  2
		.BYTE	  1,  0,  1,  6,  5,$18,  0,  1,$A1,$8C,$41,$90,$A1,$8B,$41,$98
		.BYTE	$A9,$9C,$41,$90,$A9,$9B,$41,$98,$B1,$AC,$41,$90,$B1,$AB,$41,$98
		.BYTE	  2,  1,  0,  1,  6,  5,$18,  0,  1,$A3,$8C,$41,$90,$A3,$8B,$41
		.BYTE	$98,$AB,$9C,$41,$90,$AB,$9B,$41,$98,$B3,$AC,$41,$90,$B3,$AB,$41
		.BYTE	$98,  2,  1,  0,  1,  6,  5,$18,  0,  1,$A5,$8C,$41,$90,$A5,$8B
		.BYTE	$41,$98,$AD,$9C,$41,$90,$AD,$9B,$41,$98,$B5,$AC,$41,$90,$B5,$AB
		.BYTE	$41,$98,  2,  1,  0,  1,  6,  5,$18,  0,  1,$A7,$8C,$41,$90,$A7
		.BYTE	$8B,$41,$98,$AF,$9C,$41,$90,$AF,$9B,$41,$98,$B7,$AC,$41,$90,$B7
		.BYTE	$AB,$41,$98,  2,  1,  0,  1,  6,  5,$18,  0,  1,$A9,$8C,$41,$90
		.BYTE	$A9,$8B,$41,$98,$B1,$9C,$41,$90,$B1,$9B,$41,$98,$B9,$AC,$41,$90
		.BYTE	$B9,$AB,$41,$98,  0,  2,  5,$18,  0,  1,$AB,$8C,$41,$90,$AB,$8B
		.BYTE	$41,$98,$B3,$9C,$41,$90,$B3,$9B,$41,$98,$BB,$AC,$41,$90,$BB,$AB
		.BYTE	$41,$98,$E0,  1,  5,$18,  0,  1,$AD,$8C,$41,$90,$AD,$8B,$41,$98
		.BYTE	$B5,$9C,$41,$90,$B5,$9B,$41,$98,$BD,$AC,$41,$90,$BD,$AB,$41,$98
		.BYTE	  2,  1,  0,  1,  6,$90,$FF,  1,$40,  5,$18,  0,  1,$AF,$8C,$41
		.BYTE	$90,$AF,$8B,$41,$98,$B7,$9C,$41,$90,$B7,$9B,$41,$98,$BF,$AC,$41
		.BYTE	$90,$BF,$AB,$41,$98,  2,  1,  0,  1,  6,  5,$18,  0,  1,$B1,$8C
		.BYTE	$41,$90,$B1,$8B,$41,$98,$B9,$9C,$41,$90,$B9,$9B,$41,$98,$C1,$AC
		.BYTE	$41,$90,$C1,$AB,$41,$98,  2,  1,  0,  1,  6,  5,$18,  0,  1,$B3
		.BYTE	$8C,$41,$90,$B3,$8B,$41,$98,$BB,$9C,$41,$90,$BB,$9B,$41,$98,$C3
		.BYTE	$AC,$41,$90,$C3,$AB,$41,$98,  2,  1,  0,  1,  6,  5,$18,  0,  1
		.BYTE	$B5,$8C,$41,$90,$B5,$8B,$41,$98,$BD,$9C,$41,$90,$BD,$9B,$41,$98
		.BYTE	$C5,$AC,$41,$90,$C5,$AB,$41,$98,  2,  1,  0,  1,  6,  5,$18,  0
		.BYTE	  1,$B7,$8C,$41,$90,$B7,$8B,$41,$98,$BF,$9C,$41,$90,$BF,$9B,$41
		.BYTE	$98,$C7,$AC,$41,$90,$C7,$AB,$41,$98,  2,  1,  0,  1,  6,$90,  0
		.BYTE	$FF,$40,  5,$18,  0,  1,$B9,$8C,$41,$90,$B9,$8B,$41,$98,$C1,$9C
		.BYTE	$41,$90,$C1,$9B,$41,$98,$C9,$AC,$41,$90,$C9,$AB,$41,$98,  2,  1
		.BYTE	  0,  1,  6,  5,$18,  0,  1,$BB,$8C,$41,$90,$BB,$8B,$41,$98,$C3
		.BYTE	$9C,$41,$90,$C3,$9B,$41,$98,$CB,$AC,$41,$90,$CB,$AB,$41,$98,  2
		.BYTE	  1,  0,  1,  6,  5,$18,  0,  1,$BD,$8C,$41,$90,$BD,$8B,$41,$98
		.BYTE	$C5,$9C,$41,$90,$C5,$9B,$41,$98,$CD,$AC,$41,$90,$CD,$AB,$41,$98
		.BYTE	  2,  1,  0,  1,  6,  5,$18,  0,  1,$BF,$8C,$41,$90,$BF,$8B,$41
		.BYTE	$98,$C7,$9C,$41,$90,$C7,$9B,$41,$98,$CF,$AC,$41,$90,$CF,$AB,$41
		.BYTE	$98,  2,  1,  0,  1,  6,  5,$18,  0,  1,$C1,$8C,$41,$90,$C1,$8B
		.BYTE	$41,$98,$C9,$9C,$41,$90,$C9,$9B,$41,$98,$D1,$AC,$41,$90,$D1,$AB
		.BYTE	$41,$98,  2,  1,  0,  1,  6,$90,  0,  1,$40,  5,$18,  0,  1,$C3
		.BYTE	$8C,$41,$90,$C3,$8B,$41,$98,$CB,$9C,$41,$90,$CB,$9B,$41,$98,$D3
		.BYTE	$AC,$41,$90,$D3,$AB,$41,$98,  2,  1,  0,  1,  6,  5,$18,  0,  1
		.BYTE	$C5,$8C,$41,$90,$C5,$8B,$41,$98,$CD,$9C,$41,$90,$CD,$9B,$41,$98
		.BYTE	$D5,$AC,$41,$90,$D5,$AB,$41,$98,  2,  1,  0,  1,  6,  5,$18,$A9
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41
		.BYTE	$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,$90,$FF,  1,  0,$90,$FF,  1
		.BYTE	  0,$90,$FF,  1,  0,$90,$FF,  1,  0,$90,$FF,  1,  0,$90,$FF,  0
		.BYTE	  0,$90,$FF,  1,  0,$90,$FF,  0,  0,$90,$FF,  0,  0,$90,$FF,  0
		.BYTE	  0,$90,$FF,  1,$40,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41
		.BYTE	$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41
		.BYTE	$98,$90,$FF,  1,  0,$90,$FF,  1,  0,$90,$FF,  0,  0,$90,$FF,  0
		.BYTE	  0,$90,$FF,  0,  0,$90,$FF,  1,  0,$90,$FF,  1,  0,$90,$FF,  1
		.BYTE	  0,$90,  1,  0,  0,$90,$FF,  0,  0,$90,  1,  0,$40,  5,$18,  0
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41
		.BYTE	$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,$90,  1,  0,  0,$90,$FF,  1
		.BYTE	  0,$90,$FF,  1,  0,$90,  0,  1,  0,$90,$FF,  0,  0,$90,$FF,  0
		.BYTE	  0,$90,  1,  1,  0,$90,$FF,  0,  0,$90,  1,  0,  0,$90,$FF,  0
		.BYTE	  0,$90,  0,  1,$40,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41
		.BYTE	$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41
		.BYTE	$98,$90,$FF,  0,  0,$90,  0,  0,  0,$90,  0,  0,  0,$90,  0,  1
		.BYTE	  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  0,  0,$90,  0,  0
		.BYTE	  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,  0,  0,$40,  5,$18,  0
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41
		.BYTE	$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,$90,  0,  1,  0,$90,  0,  1
		.BYTE	  0,$90,  0,  0,  0,$90,  0,  0,  0,$90,  0,  0,  0,$90,$FF,  1
		.BYTE	  0,$90,  0,  0,  0,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  1
		.BYTE	  0,$90,  0,  1,$40,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41
		.BYTE	$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41
		.BYTE	$98,$90,$FF,  0,  0,$90,  0,  0,  0,$90,  0,  0,  0,$90,$FF,  1
		.BYTE	  0,$90,  0,  1,  0,$90,  0,  1,  0,$90,$FF,  0,  0,$90,  0,  0
		.BYTE	  0,$90,  0,  1,  0,$90,  0,  1,$40,$D0,  6,  5,$18,  0,  1,$F8
		.BYTE	  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7
		.BYTE	$9E,$41,$90,$D7,$9D,$41,$98,$90,$FF,  1,$40,  2,  1,  0, $A,  1
		.BYTE	  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90
		.BYTE	$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1,  0,  1
		.BYTE	  2,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1
		.BYTE	$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D
		.BYTE	$41,$98,  2,  1,  0, $A,  2,  0,  7,  1,$F8,$F8,$F8,$F8,$F8,$F8
		.BYTE	$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$40,  0
		.BYTE	  7,  2,$AF,$6F,  1,$8A,$AF,$B2,  1,$82,$AF,$B1,  1,$7A,$AF,$B0
		.BYTE	  1,$72,$B7,$C3,  1,$8A,$B7,$C2,  1,$82,$B7,$C1,  1,$7A,$B7,$C0
		.BYTE	  1,$72,$BF,$B7,  1,$8A,$BF,$B3,  1,$82,$BF,$D3,  1,$7A,$BF,$D2
		.BYTE	  1,$72,$C7,$5D,  1,$8A,$C7,$5C,  1,$82,$C7,$E3,  1,$7A,$C7,$E2
		.BYTE	  1,$72,$40,  2,  1,  0, $A,  2,  0,  1,  5,$18,  0,  1,$F8,  1
		.BYTE	$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE
		.BYTE	$41,$90,$D7,$BD,$41,$98,  0,  7,  1,$AF,$AF,$AF,$AF,$AF,$B7,$B7
		.BYTE	$B7,$B7,$B7,$BF,$BF,$BF,$BF,$C7,$A7,$A7,$C7,$F8,$F8,$40,$D0,  7
		.BYTE	  0,  6,$A0,$FE,  0,$40,$E0,  0,$A0,$FE,  0,  0,$A0,$FE,  0,$40
		.BYTE	$E0,  1,$A0,$FE,  0,  0,$A0,$FE,  0,$40,$E0,  0,$A0,$FE,  0,  0
		.BYTE	$A0,$FE,  0,$40,$E0,  1,$A0,$FE,  0,  0,$A0,$FE,  0,$40,$E0,  0
		.BYTE	$A0,$FE,  0,$40,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98
		.BYTE	$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98
		.BYTE	$A0,$FE,  0,$40,$E0,  2,$A0,$FE,  0,$40,  2,  1,$A8,  1,  2,$A0
		.BYTE	$FE,  0,$40,$D0, $E,  2,  1,  0,  5,  2,  0,  7,  3,$AF,  1,  1
		.BYTE	$6A,$AF,$85,  1,$72,$AF,$A7,  1,$7A,$AF,$A8,  1,$82,$AF,  1,  1
		.BYTE	$8A,$B7,$94,  1,$6A,$B7,$95,  1,$72,$B7,$96,  1,$7A,$B7,$84,  1
		.BYTE	$82,$B7,  1,  1,$8A,$BF,$80,  1,$6A,$BF,$81,  1,$72,$BF,$90,  1
		.BYTE	$7A,$BF,$91,  1,$82,$9F,$87,  1,$7A,$A7,$97,  1,$7A,$A7,$98,  1
		.BYTE	$82,$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$88,  1,$82,$40,  2,  1
		.BYTE	  0,  5,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF
		.BYTE	$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  0
		.BYTE	  7,  3,$AF,  1,  1,$6A,$AF,$85,  1,$72,$AF,$A9,  1,$7A,$AF,$AA
		.BYTE	  1,$82,$AF,  1,  1,$8A,$B7,$4C,  1,$6A,$B7,$A5,  1,$72,$B7,$96
		.BYTE	  1,$7A,$B7,$84,  1,$82,$B7,  1,  1,$8A,$BF,$56,  1,$6A,$BF,$57
		.BYTE	  1,$72,$BF,$90,  1,$7A,$BF,$91,  1,$82,$9F,$89,  1,$7A,$A7,$99
		.BYTE	  1,$7A,$A7,$9A,  1,$82,$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$8A
		.BYTE	  1,$82,$40,  2,  1,$AC,  5,  2,  0,  7,  3,$AF,  1,  1,$6A,$AF
		.BYTE	$85,  1,$72,$AF,$A7,  1,$7A,$AF,$A8,  1,$82,$AF,  1,  1,$8A,$B7
		.BYTE	$94,  1,$6A,$B7,$95,  1,$72,$B7,$96,  1,$7A,$B7,$84,  1,$82,$B7
		.BYTE	  1,  1,$8A,$BF,$80,  1,$6A,$BF,$81,  1,$72,$BF,$90,  1,$7A,$BF
		.BYTE	$91,  1,$82,$9F,$87,  1,$7A,$A7,$97,  1,$7A,$A7,$98,  1,$82,$C7
		.BYTE	$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$88,  1,$82,$40,  2,  1,  0,  5
		.BYTE	  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41
		.BYTE	$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  0,  7,  3
		.BYTE	$AF,  1,  1,$6A,$AF,$85,  1,$72,$AF,$A9,  1,$7A,$AF,$AA,  1,$82
		.BYTE	$AF,  1,  1,$8A,$B7,$4C,  1,$6A,$B7,$A5,  1,$72,$B7,$96,  1,$7A
		.BYTE	$B7,$84,  1,$82,$B7,  1,  1,$8A,$BF,$56,  1,$6A,$BF,$57,  1,$72
		.BYTE	$BF,$90,  1,$7A,$BF,$91,  1,$82,$9F,$89,  1,$7A,$A7,$99,  1,$7A
		.BYTE	$A7,$9A,  1,$82,$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$8A,  1,$82
		.BYTE	$40,  2,  1,  0,  5,  2,  0,  7,  3,$AF,  1,  1,$6A,$AF,$85,  1
		.BYTE	$72,$AF,$A7,  1,$7A,$AF,$A8,  1,$82,$AF,  1,  1,$8A,$B7,$94,  1
		.BYTE	$6A,$B7,$95,  1,$72,$B7,$96,  1,$7A,$B7,$84,  1,$82,$B7,  1,  1
		.BYTE	$8A,$BF,$80,  1,$6A,$BF,$81,  1,$72,$BF,$90,  1,$7A,$BF,$91,  1
		.BYTE	$82,$9F,$87,  1,$7A,$A7,$97,  1,$7A,$A7,$98,  1,$82,$C7,$A0,  1
		.BYTE	$7A,$C7,$A1,  1,$82,$9F,$88,  1,$82,$40,  2,  1,  0,  5,  2,  5
		.BYTE	$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF
		.BYTE	$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  0,  7,  3,$AF,  1
		.BYTE	  1,$6A,$AF,$85,  1,$72,$AF,$A9,  1,$7A,$AF,$AA,  1,$82,$AF,  1
		.BYTE	  1,$8A,$B7,$4C,  1,$6A,$B7,$A5,  1,$72,$B7,$96,  1,$7A,$B7,$84
		.BYTE	  1,$82,$B7,  1,  1,$8A,$BF,$56,  1,$6A,$BF,$57,  1,$72,$BF,$90
		.BYTE	  1,$7A,$BF,$91,  1,$82,$9F,$89,  1,$7A,$A7,$99,  1,$7A,$A7,$9A
		.BYTE	  1,$82,$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$8A,  1,$82,$40,  2
		.BYTE	  1,  0,  5,  2,  0,  7,  3,$AF,  1,  1,$6A,$AF,$85,  1,$72,$AF
		.BYTE	$A7,  1,$7A,$AF,$A8,  1,$82,$AF,  1,  1,$8A,$B7,$94,  1,$6A,$B7
		.BYTE	$95,  1,$72,$B7,$96,  1,$7A,$B7,$84,  1,$82,$B7,  1,  1,$8A,$BF
		.BYTE	$80,  1,$6A,$BF,$81,  1,$72,$BF,$90,  1,$7A,$BF,$91,  1,$82,$9F
		.BYTE	$87,  1,$7A,$A7,$97,  1,$7A,$A7,$98,  1,$82,$C7,$A0,  1,$7A,$C7
		.BYTE	$A1,  1,$82,$9F,$88,  1,$82,$40,  2,  1,  0,  5,  2,  5,$18,  0
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41
		.BYTE	$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  0,  7,  3,$AF,  1,  1,$6A
		.BYTE	$AF,$85,  1,$72,$AF,$A9,  1,$7A,$AF,$AA,  1,$82,$AF,  1,  1,$8A
		.BYTE	$B7,$4C,  1,$6A,$B7,$A5,  1,$72,$B7,$96,  1,$7A,$B7,$84,  1,$82
		.BYTE	$B7,  1,  1,$8A,$BF,$56,  1,$6A,$BF,$57,  1,$72,$BF,$90,  1,$7A
		.BYTE	$BF,$91,  1,$82,$9F,$89,  1,$7A,$A7,$99,  1,$7A,$A7,$9A,  1,$82
		.BYTE	$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$8A,  1,$82,$40,  2,  1,  0
		.BYTE	 $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE
		.BYTE	$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  0,  7
		.BYTE	  3,$AF,  1,  1,$6A,$AF,$85,  1,$72,$AF,$A7,  1,$7A,$AF,$A8,  1
		.BYTE	$82,$AF,  1,  1,$8A,$B7,$94,  1,$6A,$B7,$95,  1,$72,$B7,$96,  1
		.BYTE	$7A,$B7,$84,  1,$82,$B7,  1,  1,$8A,$BF,$80,  1,$6A,$BF,$81,  1
		.BYTE	$72,$BF,$90,  1,$7A,$BF,$91,  1,$82,$9F,$87,  1,$7A,$A7,$97,  1
		.BYTE	$7A,$A7,$98,  1,$82,$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$88,  1
		.BYTE	$82,$40,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8
		.BYTE	  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7
		.BYTE	$9D,$41,$98,  0,  7,  3,$AF,  1,  1,$6A,$AF,$85,  1,$72,$AF,$A9
		.BYTE	  1,$7A,$AF,$AA,  1,$82,$AF,  1,  1,$8A,$B7,$4C,  1,$6A,$B7,$A5
		.BYTE	  1,$72,$B7,$96,  1,$7A,$B7,$84,  1,$82,$B7,  1,  1,$8A,$BF,$56
		.BYTE	  1,$6A,$BF,$57,  1,$72,$BF,$90,  1,$7A,$BF,$91,  1,$82,$9F,$89
		.BYTE	  1,$7A,$A7,$99,  1,$7A,$A7,$9A,  1,$82,$C7,$A0,  1,$7A,$C7,$A1
		.BYTE	  1,$82,$9F,$8A,  1,$82,$40,  2,  1,  0, $A,  2,  5,$18,  0,  1
		.BYTE	$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98
		.BYTE	$D7,$BE,$41,$90,$D7,$BD,$41,$98,  0,  7,  3,$AF,  1,  1,$6A,$AF
		.BYTE	$85,  1,$72,$AF,$A7,  1,$7A,$AF,$A8,  1,$82,$AF,  1,  1,$8A,$B7
		.BYTE	$94,  1,$6A,$B7,$95,  1,$72,$B7,$96,  1,$7A,$B7,$84,  1,$82,$B7
		.BYTE	  1,  1,$8A,$BF,$80,  1,$6A,$BF,$81,  1,$72,$BF,$90,  1,$7A,$BF
		.BYTE	$91,  1,$82,$9F,$87,  1,$7A,$A7,$97,  1,$7A,$A7,$98,  1,$82,$C7
		.BYTE	$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$88,  1,$82,$40,  2,  1,  0, $A
		.BYTE	  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41
		.BYTE	$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,  0
		.BYTE	 $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE
		.BYTE	$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  0,  7
		.BYTE	  3,$AF,  1,  1,$6A,$AF,$85,  1,$72,$AF,$A9,  1,$7A,$AF,$AA,  1
		.BYTE	$82,$AF,  1,  1,$8A,$B7,$4C,  1,$6A,$B7,$A5,  1,$72,$B7,$96,  1
		.BYTE	$7A,$B7,$84,  1,$82,$B7,  1,  1,$8A,$BF,$56,  1,$6A,$BF,$57,  1
		.BYTE	$72,$BF,$90,  1,$7A,$BF,$91,  1,$82,$9F,$89,  1,$7A,$A7,$99,  1
		.BYTE	$7A,$A7,$9A,  1,$82,$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,$8A,  1
		.BYTE	$82,$40,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8
		.BYTE	  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7
		.BYTE	$9D,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90
		.BYTE	$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90
		.BYTE	$D7,$BD,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41
		.BYTE	$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41
		.BYTE	$90,$D7,$9D,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1
		.BYTE	$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE
		.BYTE	$41,$90,$D7,$BD,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8
		.BYTE	  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7
		.BYTE	$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1
		.BYTE	$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98
		.BYTE	$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41
		.BYTE	$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,  0, $A,  2,  0,  7
		.BYTE	  3,$AF,  1,  1,$6A,$AF,$85,  1,$72,$AF,$62,  1,$7A,$AF,$6E,  1
		.BYTE	$82,$AF,$6F,  1,$8A,$B7,$4C,  1,$6A,$B7,$A5,  1,$72,$B7,$96,  1
		.BYTE	$7A,$B7,$7E,  1,$82,$B7,$7F,  1,$8A,$BF,$56,  1,$6A,$BF,$57,  1
		.BYTE	$72,$BF,$90,  1,$7A,$BF,$91,  1,$82,$9F,  1,  1,$7A,$A7,  1,  1
		.BYTE	$7A,$A7,  1,  1,$82,$C7,$A0,  1,$7A,$C7,$A1,  1,$82,$9F,  1,  1
		.BYTE	$82,$40,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8
		.BYTE	  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7
		.BYTE	$BD,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90
		.BYTE	$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90
		.BYTE	$D7,$9D,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41
		.BYTE	$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41
		.BYTE	$90,$D7,$BD,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1
		.BYTE	$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E
		.BYTE	$41,$90,$D7,$9D,$41,$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8
		.BYTE	  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7
		.BYTE	$BE,$41,$90,$D7,$BD,$41,$98,  0,  7,  3,$AA,  1,  1,$8A,$AA,$B2
		.BYTE	  1,$82,$AA,$B1,  1,$7A,$AA,$B0,  1,$72,$B2,$C3,  1,$8A,$B2,$C2
		.BYTE	  1,$82,$B2,$C1,  1,$7A,$B2,$C0,  1,$72,$BA,$B7,  1,$8A,$BA,$B3
		.BYTE	  1,$82,$BA,$D3,  1,$7A,$BA,$D2,  1,$72,$C2,$5D,  1,$8A,$C2,$5C
		.BYTE	  1,$82,$C2,$E3,  1,$7A,$C2,$E2,  1,$72,$F8,  1,  1,  0,$F8,  1
		.BYTE	  1,  0,$F8,  1,  1,  0,$F8,  1,  1,  0,$40,  2,  1,  0,  1,  2
		.BYTE	$A0,$F8,$FB,$40,$E0,  3,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8
		.BYTE	  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7
		.BYTE	$9E,$41,$90,$D7,$9D,$41,$98,$A0,$FE,  0,$40,  2,  1,  0, $A,  2
		.BYTE	  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90
		.BYTE	$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,$A0,  2,  0,$40
		.BYTE	  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41
		.BYTE	$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41
		.BYTE	$98,$A0,$FE,  0,$40,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1
		.BYTE	$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE
		.BYTE	$41,$90,$D7,$BD,$41,$98,$A0,  2,  0,$40,  2,  1,  0, $A,  2,  5
		.BYTE	$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF
		.BYTE	$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  0,  7,  3,$A8,  1
		.BYTE	  1,$8A,$A8,$B2,  1,$82,$A8,$B1,  1,$7A,$A8,$B0,  1,$72,$B0,$C3
		.BYTE	  1,$8A,$B0,$C2,  1,$82,$B0,$C1,  1,$7A,$B0,$C0,  1,$72,$B8,$B7
		.BYTE	  1,$8A,$B8,$B3,  1,$82,$B8,$D3,  1,$7A,$B8,$D2,  1,$72,$C0,$5D
		.BYTE	  1,$8A,$C0,$5C,  1,$82,$C0,$E3,  1,$7A,$C0,$E2,  1,$72,$F8,  1
		.BYTE	  1,  0,$F8,  1,  1,  0,$F8,  1,  1,  0,$F8,  1,  1,  0,$40,  2
		.BYTE	  1,  0,  1,  2,$A0,  2,$FE,$40,  2,  1,  0, $A,  2,  5,$18,  0
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41
		.BYTE	$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,$A0,$FE,  0,$40,  2,  1,  0
		.BYTE	 $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E
		.BYTE	$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,$A0,$FE
		.BYTE	  0,$40,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8
		.BYTE	  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7
		.BYTE	$BD,$41,$98,  0,  7,  3,$A6,  1,  1,$8A,$A6,$B2,  1,$82,$A6,$B1
		.BYTE	  1,$7A,$A6,$B0,  1,$72,$AE,$C3,  1,$8A,$AE,$C2,  1,$82,$AE,$C1
		.BYTE	  1,$7A,$AE,$C0,  1,$72,$B6,$B7,  1,$8A,$B6,$B3,  1,$82,$B6,$D3
		.BYTE	  1,$7A,$B6,$D2,  1,$72,$BE,$5D,  1,$8A,$BE,$5C,  1,$82,$BE,$E3
		.BYTE	  1,$7A,$BE,$E2,  1,$72,$F8,  1,  1,  0,$F8,  1,  1,  0,$F8,  1
		.BYTE	  1,  0,$F8,  1,  1,  0,$40,  2,  1,  0,  1,  2,$A0,  2,  0,$40
		.BYTE	$A0,  0,$FE,$40,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41
		.BYTE	$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41
		.BYTE	$90,$D7,$9D,$41,$98,$A0,$FE,  0,$40,  2,  1,  0, $A,  2,  5,$18
		.BYTE	  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD
		.BYTE	$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,$A0,  2,  0,$40,  2,  1
		.BYTE	  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF
		.BYTE	$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  0
		.BYTE	  7,  3,$A6,  1,  1,$8A,$A6,  1,  1,$82,$A6,  1,  1,$7A,$A6,  1
		.BYTE	  1,$72,$AE,  1,  1,$8A,$AE,$B6,  1,$82,$AE,$B5,  1,$7A,$AE,$B4
		.BYTE	  1,$72,$B6,$C7,  1,$8A,$B6,$C6,  1,$82,$B6,$C5,  1,$7A,$B6,$C4
		.BYTE	  1,$72,$BE,$D7,  1,$8A,$BE,$D6,  1,$82,$BE,$D5,  1,$7A,$BE,$D4
		.BYTE	  1,$72,$F8,  1,  1,  0,$F8,  1,  1,  0,$F8,  1,  1,  0,$F8,  1
		.BYTE	  1,  0,$40,$E0,$13,$FF
byte_26786F:
		.BYTE	$A0,$FE,  0,$40,  2,  1,  0, $F,  2,  5,$18,  0,  1,$F8,  1,$41
		.BYTE	$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41
		.BYTE	$90,$D7,$BD,$41,$98,  0,  7,  3,$A6,  1,  1,$8A,$A6,$BA,  1,$82
		.BYTE	$A6,  1,  1,$7A,$A6,  1,  1,$72,$AE,  1,  1,$8A,$AE,$CA,  1,$82
		.BYTE	$AE,$C9,  1,$7A,$AE,$C8,  1,$72,$B6,  1,  1,$8A,$B6,$DA,  1,$82
		.BYTE	$B6,$D9,  1,$7A,$B6,$D8,  1,$72,$BE,  1,  1,$8A,$BE,$B9,  1,$82
		.BYTE	$BE,$B8,  1,$7A,$BE,  1,  1,$72,$F8,  1,  1,  0,$F8,  1,  1,  0
		.BYTE	$F8,  1,  1,  0,$F8,  1,  1,  0,$40,$E0,$14,$A0,  2,  0,$40,  2
		.BYTE	  1,  0, $F,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98
		.BYTE	$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98
		.BYTE	  0,  7,  3,$A6,  1,  1,$8A,$A6,  1,  1,$82,$A6,  1,  1,$7A,$A6
		.BYTE	  1,  1,$72,$AE,  1,  1,$8A,$AE,$AF,  1,$82,$AE,$8F,  1,$7A,$AE
		.BYTE	  1,  1,$72,$B6,  1,  1,$8A,$B6,$BF,  1,$82,$B6,$9F,  1,$7A,$B6
		.BYTE	  1,  1,$72,$BE,  1,  1,$8A,$BE,  1,  1,$82,$BE,  1,  1,$7A,$BE
		.BYTE	  1,  1,$72,$F8,  1,  1,  0,$F8,  1,  1,  0,$F8,  1,  1,  0,$F8
		.BYTE	  1,  1,  0,$40,  2,  1,  0, $F,  2,$A0,$FE,  0,$40,  5,$18,  0
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41
		.BYTE	$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  0,  7,  3,$A6,  1,  1,$8A
		.BYTE	$A6,  1,  1,$82,$A6,  1,  1,$7A,$A6,  1,  1,$72,$AE,  1,  1,$8A
		.BYTE	$AE,  1,  1,$82,$AE,  1,  1,$7A,$AE,  1,  1,$72,$B6,  1,  1,$8A
		.BYTE	$B6,  1,  1,$82,$B6,  1,  1,$7A,$B6,  1,  1,$72,$BE,  1,  1,$8A
		.BYTE	$BE,  1,  1,$82,$BE,  1,  1,$7A,$BE,  1,  1,$72,$F8,  1,  1,  0
		.BYTE	$F8,  1,  1,  0,$F8,  1,  1,  0,$F8,  1,  1,  0,  0,$FF
;off_2679DD:
;		.WORD	byte_2679DF
byte_2679DF:
		.BYTE	  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90
		.BYTE	$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1,$A7, $A
		.BYTE	  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41
		.BYTE	$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,  0
		.BYTE	 $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE
		.BYTE	$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1
		.BYTE	  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF
		.BYTE	$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2
		.BYTE	  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98
		.BYTE	$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98
		.BYTE	  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41
		.BYTE	$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41
		.BYTE	$98,  2,  1,  0, $A,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1
		.BYTE	$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD
		.BYTE	$41,$98,  2,  1,  0,$14,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8
		.BYTE	  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7
		.BYTE	$9D,$41,$98,  2,  1,  0,$14,  2,  5,$18,  0,  1,$F8,  1,$41,$90
		.BYTE	$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90
		.BYTE	$D7,$BD,$41,$98,  2,  1,$A7,$14,  2,  5,$18,  0,  1,$F8,  1,$41
		.BYTE	$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41
		.BYTE	$90,$D7,$9D,$41,$98,  2,  1,  0,$14,  2,  5,$18,  0,  1,$F8,  1
		.BYTE	$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE
		.BYTE	$41,$90,$D7,$BD,$41,$98,  2,  1,  0,$1E,  2,  5,$18,  0,  1,$F8
		.BYTE	  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7
		.BYTE	$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,  0,$1E,  2,  5,$18,  0,  1
		.BYTE	$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD,$41,$98
		.BYTE	$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1,  0,$1E,  2,  5,$18,  0
		.BYTE	  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF,$8D,$41
		.BYTE	$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,  0,$28,  2,  5,$18
		.BYTE	  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90,$CF,$AD
		.BYTE	$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1,  0,$28,  2,  5
		.BYTE	$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41,$90,$CF
		.BYTE	$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,  0,$32,  2
		.BYTE	  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE,$41,$90
		.BYTE	$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1,  0,$3C
		.BYTE	  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$8E,$41
		.BYTE	$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2,  1,$A7
		.BYTE	$46,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF,$AE
		.BYTE	$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98,  2,  1
		.BYTE	  0,$46,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98,$CF
		.BYTE	$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41,$98,  2
		.BYTE	  1,  0,$50,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41,$98
		.BYTE	$CF,$AE,$41,$90,$CF,$AD,$41,$98,$D7,$BE,$41,$90,$D7,$BD,$41,$98
		.BYTE	  2,  1,  0,$50,  2,  5,$18,  0,  1,$F8,  1,$41,$90,$F8,  1,$41
		.BYTE	$98,$CF,$8E,$41,$90,$CF,$8D,$41,$98,$D7,$9E,$41,$90,$D7,$9D,$41
		.BYTE	$98,  2,  1,  0,$78,  2,$FF

		ECHO "bank 19 free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB