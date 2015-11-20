
		ORG $8000

		.WORD 0
		.WORD _bD_d1_ofs	; data used at 8000
		.WORD _bD_s2		; data used at 8000
		.WORD _bD_s3		; data used at 8000
		.WORD _bD_s4		; data used at 8000
		.WORD _bD_s5		; data used at 8000
		.WORD _bD_s6		; data used at 8000
		.WORD _bD_s7		; data used at 8000
		.WORD 0
		.WORD _bD_s9		; data used at 8000
		.WORD _bD_sA		; data used at 8000
		.WORD _bD_sB		; data used at 8000
		.WORD _bD_sC		; data used at 8000
		.WORD _bD_sD		; data used at 8000
		.WORD _bD_sE
		.WORD _bD_sF
		.WORD _bD_s10		; data used at 8000
		.WORD _bD_s11		; data used at 8000
		.WORD _bD_s12		; data used at 8000
		.WORD _bD_s13
		.WORD _bD_s14		; data used at 8000
		.WORD _bD_s15		; data used at 8000
		.WORD _bD_s16		; data used at 8000
		.WORD _bD_s17		; data used at 8000
		.WORD _bD_s18
		.WORD _bD_s19		; data used at 8000
		.WORD _bD_s1A		; data used at 8000
		.WORD _bD_s1B		; data used at 8000
		.WORD _bD_s1C
		.WORD _bD_s1D
		.WORD _bD_s1E
		.WORD _bD_s1F
		.WORD _bD_s20_npc_hndl31
		.WORD _bD_s21
		.WORD _bD_s22		; data used at 8000
		.WORD _bD_s23		; data used at 8000
		.WORD _bD_s24		; data used at 8000
		.WORD 0
		.WORD _bD_s26		; data used at 8000
		.WORD _bD_s27
		.WORD _bD_s28		; data used at 8000
		.WORD _bD_s29		; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s19:				; CODE XREF: sub_9BC74+6C-P _b6_s19+1A-P
					; _b6_s1A+23-P sub_B2846:loc_B285C-P
					; _bC_s35+17-P _bC_s35+23-P _bC_s35+2F-P
					; _bC_s35+3B-P _bC_s1D+195-P
					; sub_12A365+5-P sub_12A58F+C-P
					; sub_12A5D5-P _bC_s19+4B-P
					; sub_12B353+6D-P sub_12B3D1+7A-P
					; sub_12B493+70-P
					; sub_12B877:loc_12B88A-P sub_12B8E9-P
					; sub_158203+DF-P sub_1586FE+45-P
					; DATA XREF: BANKD:8032-o
		LDA		#1		; code used as ind data	at 8000
		STA		word_6C+1	; code used as ind data	at 8000
		LDY		#0		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		STA		byte_80		; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		STA		byte_81		; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s1A:				; CODE XREF: sub_12AA2E+1E-P _bD_sD+67-p
					; DATA XREF: BANKD:8034-o
		JSR		sub_140192	; code used at 8000
		JSR		sub_14007C	; code used as ind data	at 8000
		JSR		sub_177373	; code used at 8000
		JMP		sub_17731E	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_sA:					; CODE XREF: sub_1280A6+299-P
					; DATA XREF: BANKD:8014-o
		LDA		#1		; code used at 8000
		STA		word_6C+1	; code used at 8000
		JSR		sub_14007C	; code used at 8000
		JSR		sub_177385	; code used at 8000
		JMP		sub_17732F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_14007C:				; CODE XREF: _bD_s1A+3-p _bD_sA+4-p
		LDY		#2		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		AND		#$F		; code used at 8000
		JSR		sub_1778D7	; code used as ind data	at 8000
		LDY		#3		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		JSR		sub_177909	; code used as ind data	at 8000
		LDY		#3		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$3C       ; code used as ind data at 8000
		TAY				; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s1B:				; CODE XREF: _b5_s9+54-P
					; sub_1750D0+10F-P
					; DATA XREF: BANKD:8036-o
		JSR		_bD_s1E		; code used at 8000
		JSR		_bD_s1C		; code used at 8000
		JMP		_bD_s1D		; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s1E:				; CODE XREF: _bD_s1B-p sub_15874F+14-P
					; DATA XREF: BANKD:803C-o
		LDX		byte_2D		; code used at 8000
		STX		byte_80		; code used at 8000
		LDY		byte_2E		; code used at 8000
		STY		byte_81		; code used at 8000
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_1400B2	; code used at 8000
		JSR		sub_1777B7	; code used at 8000
		BCC		locret_1400EC	; code used at 8000
		BCS		loc_1400C8
loc_1400B2:				; CODE XREF: _bD_s1E+C-j
		JSR		sub_1777C2
		BCC		locret_1400EC
		LDA		byte_2C
		CMP		#1
		BNE		loc_1400D6
		LDA		byte_30
		STA		byte_80
		LDA		byte_2B
		STA		byte_81
		JMP		loc_1400D6
loc_1400C8:				; CODE XREF: _bD_s1E+13-j
		LDA		byte_2C
		CMP		#1
		BNE		loc_1400D6
		LDA		byte_2A
		STA		byte_80
		LDA		byte_2B
		STA		byte_81
loc_1400D6:				; CODE XREF: _bD_s1E+1E-j _bD_s1E+28-j
					; _bD_s1E+2F-j
		JSR		sub_140192	; CHECK	ME! ANY	POINTERS HERE?
		LDA		#4
		JSR		sub_1778D7
		LDA		byte_6BA
		JSR		sub_177909
		JSR		sub_177373
		LDY		#$10
		JSR		sub_17731E
locret_1400EC:				; CODE XREF: _bD_s1E+11-j _bD_s1E+18-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s1C:				; CODE XREF: _bD_s1B+3-p sub_15874F+24-P
					; DATA XREF: BANKD:8038-o
		JSR		sub_1772F4	; code used at 8000
		JMP		loc_1400F6	; code used at 8000
_bD_s1D:				; CODE XREF: _bD_s1B+6-j sub_15874F+34-P
					; DATA XREF: BANKD:803A-o
		JSR		sub_177305	; code used at 8000
loc_1400F6:				; CODE XREF: _bD_s1C+3-j
		LDA		byte_2F		; code used at 8000
		AND		#2		; code used at 8000
		BNE		locret_14011C	; code used at 8000
		STX		byte_80		; code used at 8000
		STY		byte_81		; code used at 8000
		JSR		sub_1777B7	; code used at 8000
		BCC		locret_14011C	; code used as ind data	at 8000
		JSR		sub_140192	; CHECK	ME! ANY	POINTERS HERE?
		LDA		word_3C
		JSR		sub_1778D7
		LDA		word_3E
		AND		#3
		JSR		sub_177909
		JSR		sub_177373
		LDY		word_3C+1
		JSR		sub_17731E
locret_14011C:				; CODE XREF: _bD_s1C+D-j _bD_s1C+16-j
					; _bD_s18+4-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s18:				; CODE XREF: sub_1580AC+68-P
					; sub_1757C0+8E-P
					; DATA XREF: BANKD:8030-o
		LDA		byte_AC
		AND		#$1F
		BNE		locret_14011C
		LDA		byte_102
		AND		#$F
		JSR		sub_1778D7
		LDA		byte_103
		JSR		sub_177909
		LDA		byte_74
		STA		_spr_ram+1
		LDA		byte_75
		STA		_spr_ram+2
		LDA		byte_76
		STA		_spr_ram+5
		LDA		byte_77
		STA		_spr_ram+6
		LDA		byte_78
		STA		_spr_ram+9
		LDA		byte_79
		STA		_spr_ram+$A
		LDA		byte_7A
		STA		_spr_ram+$D
		LDA		byte_7B
		STA		_spr_ram+$E
		LDA		byte_14018A
		STA		_spr_ram
		LDA		byte_14018A+1
		STA		_spr_ram+3
		LDA		byte_14018A+2
		STA		_spr_ram+4
		LDA		byte_14018A+3
		STA		_spr_ram+7
		LDA		byte_14018A+4
		STA		_spr_ram+8
		LDA		byte_14018A+5
		STA		_spr_ram+$B
		LDA		byte_14018A+6
		STA		_spr_ram+$C
		LDA		byte_14018A+7
		STA		_spr_ram+$F
		RTS
byte_14018A:
		.BYTE $6F,$80,$6F,$88,$77,$80,$77,$88 ;	DATA XREF: _bD_s18+3C-r
					; _bD_s18+42-r _bD_s18+48-r _bD_s18+4E-r
					; _bD_s18+54-r _bD_s18+5A-r _bD_s18+60-r
					; _bD_s18+66-r

; =============== S U B	R O U T	I N E =======================================
; CHECK	ME! ANY	POINTERS HERE?
sub_140192:				; CODE XREF: _bD_s1A-p
					; _bD_s1E:loc_1400D6-p _bD_s1C+18-p
		JSR		sub_1778B5	; code used as ind data	at 8000
		JMP		sub_17787B	; code used as ind data	at 8000
_bD_d1_ofs:
		.WORD _bD_d1		; DATA XREF: BANKD:8002-o
					; ind data used	at 8000
_bD_d1:
		.BYTE $18,$2E,	1,$82,$89,$18,$1F,  2,$85,$92,$18,$1D, $A,$8B,$A2,$18
					; DATA XREF: BANKD:_bD_d1_ofs-o
		.BYTE $52,  6,$9B,$8A,$78,$2E,$97,$90,$B4,$BE,$2C,$27,	3,$9C,$69,  4 ;	ind data used at 8000
		.BYTE $25,$9F, $F,$26,$84,$8D,$8D,$51,$16,$21,$5F,$1E,$FE,$8A,$9A,$1D
		.BYTE $50,$17,$26,$90,$23,$2B,	7,$1F,$90,$16,$2A,$13,$1E,$50,$1E,$EA
		.BYTE $94,$23,$90, $F,$2D,$95,$27,$90,$23,$1C,$9D,$25,$90,$16,$2C,$9C
		.BYTE $1F,$90,$2F,$29,$1B,$1A,$90, $F,$28,$1C, $D,  0,$78,  9,$1C,$8F
		.BYTE $AE,$78, $B,$1C,$92,$AE,$18,$16,$17,$97,$A3,$78,	9,$1D,$8F,$98
		.BYTE $18,$51,	6,$83,$9B,$7C, $B,$21,$1D,$1C,$1C,$15,$FE,$2E,$B5,  9
		.BYTE $9B,$20,$1D,$27,$9E, $A,$37,$91,$8A,$59,$10, $C,$FF, $F,$B4, $E
		.BYTE	1, $B,$1E,$1E,$23,$FF, $F,$B7,$1A,$86,$B5,$1F,$1D,$28,$FF,$17
		.BYTE $B6, $C,$88,$8F,$AC, $E,	3,$DF,$36,$B0,$12,$A0, $A,$5A,$11, $C
		.BYTE $90,$16,$13,$85,$23,$50,$16,$FB,$89,$23,$D0, $F,$AF,  5,$27,$D0
		.BYTE $15,$B1, $F,$28,$D0,$2C,$B2,$1E,$27,$D0,	8,$B3,$A0,$2D,	0,$18
		.BYTE $13,$C1,$A0,$A7,$18, $A,$BF,$8D,$A4,$18, $A,$C0,$88,$A2,$18,$1E
		.BYTE $C3, $F,$1B,$18,$2C,$C2,$9D,$86,$9A, $A,$A2,$85,$91,$52,$1C,$17
		.BYTE $C4,$15,$1A,$15,$1B,$9F,$2D,$A0, $E,$86,$81,$52,$1F,  3,$9F,$18
		.BYTE $A1,$91,$8F,$99,$C5,$1F,	6,$90,$35,$A3,$83,$26,$90,  5,$A4,$13
		.BYTE $20,  0,$18,$4E,	0,$87,$86,$18,$4E,  0,$8B,$86,$18,$E0,$B2,$89
		.BYTE $86,  0,$78,$62,$11,$89,$82,  0,	0,$18,$1D,$1C,$81,$89,$98,$16
		.BYTE $CB,$1C,$1F,$98,$22,$CD,$91,$99,$18,$50,$EC,$95,$86,$18,$1C,$ED
		.BYTE $96,$87,$18,$70,	0,$95,$87,$18,$14,$EE,$94,$87,$18,$64,$EF,$95
		.BYTE $88,$18,$64,$F0,$94,$89,$18,$34,$F1,$96,$89,$18,$17,$F2,$9D,$98
		.BYTE $99,$23,$CC,$18,$23,$21,	0,$98,$1F, $F,$98,$98,$98, $D,$EE, $E
		.BYTE $13,$78,$1F,$E0,$8B,$94,$98, $F,$F0,$9F,$8D,$18,$53,  6,$98,$83
		.BYTE $78,$1E,$F6,$85,$86,$98,$2E,$E8,$89,$88,$98,$13,$E9, $E,	5,$98
		.BYTE $36,$EA,$97,$89,$98,$2C,$EB,$1A,	8,$98, $F,$ED,$85,$98,$98,$17
		.BYTE $EC,  7, $F,$99,$12,$EF,$9E,$81,$10,  0,	0,$18,$17,$3C,$8B,$82
		.BYTE $18,$1E, $B,$88,$90,$18,$53,  6,$96,$8E,$18,$76,	0,$97,$97,$19
		.BYTE $45,$5C,$97,$86,$47,$5F,$1E,$FF,$85,$84,$89,$52,	3,$10,$9F,$2C
		.BYTE $47,  3,$8A,$9D,	0,$10,$17,$90,$11,$45, $A, $D,$90, $A,$46,$86
		.BYTE $10,$50,$1C,$EB,$90,$14,$D0,$17,$C2,$98,$17,  0,$18,$28,	0,$A3
		.BYTE $1A,$18,$16,$13,$A3,$8B,$18,$4A,$99,$84,$BA,$18,$17,$9C,$A4,$BA
		.BYTE $78,$2D,$95,$A2,$BA,$1B,$47,$5C,$A7,$88,$17,$41,$9F,$22,$81,$1E
		.BYTE $84,$95,$52,$26, $D,$90,$16,  9,$9E,  8,$90,$2F,$7F,$21, $C,$90
		.BYTE $14,$7E,$9E, $D,$90,$14,$82,$18,$10,$90,$15,$80,$23,$10,	0,$18
		.BYTE $1E,$32,	7,  4,$18,$12,$81,$87,$87,$18,$20,$83,	4, $E,$18,$16
		.BYTE $87,$9B,$94,$18,$15,$82, $C, $D,$18,$35,$84, $D,	6,$18,$22,$85
		.BYTE $98,$86,$18,$2C,$86,$13, $F,$18,$1D,$11,$8D,$92,$18,$2D,$3E,$10
		.BYTE $15,$18,$37,$88, $E,$1B,	0,$18,$1F,$10,$9A,$97,$18,$16,$74,$98
		.BYTE $8E,$18,$51,  6,$82,$8B,$9A,$24,$65,$85,$9C,$7A,$9A,$24,$62,$83
		.BYTE $9D,$79,$9B,$2E,$66,$8D,$9A,$16,$7F,$9B,$26,$64,$86,$9D,$24,$7B
		.BYTE $9E,$16,$61,$85,$99,$76,	5,$17,$9E,$12,$5E,$87,$92,$28, $F,  3
		.BYTE $9E,  9,$5C,$19,	6,$7D,$12, $B,$DE,$1E,$CD,$82,$82,$77,	6,$19
		.BYTE $DF,$1E,$CE,$82,$8F,$89,$7E,$19,$1D,$5F,$1C,$F0,$98,$8A,$95,$52
		.BYTE $15,$1D,$BF,$24,$63,$84,$9C,$26,$76, $D,$13,$9F,$11,$60, $D,$97
		.BYTE $12,$78,	3,$19,$9F,$16,$5D, $D,$90,$1D,$75,  1,$16,$9F,$2C,$5F
		.BYTE $13,$14,$26,$80, $E,$1C,$10,$91,	0,$90,	2,$90,$1E,  6,$17,  2
		.BYTE	0,  0,$18,$1C,$14,$91,$87,$18,$22,  6,$86,$84,$98, $F,$8C,$99
		.BYTE $91,$18,$4E,  0,$90,$96,$18,$4E,	0,$8D,$96,$18,$64,$A0,$8F,$97
		.BYTE $18,$15,$9F,$8B,$9A,$78,$23,$80,$8D,$9A,$98, $C,$8E,$81,$9B,$98
		.BYTE  $E,$8A,$16,  6,$98,$2E,$89, $B,	6,$98,$1E, $A,$8B,$8F,$98,$1D
		.BYTE $8B,$84,$8F,$98,$2D,$89,	3, $D,$98, $D,$88,$85,$94,$98,$2E,$8F
		.BYTE $8E,$9D,$98,$16,$90,$90,$9D,  0,$78,$52,$87,$8E,$8B,$18,$78,$BC
		.BYTE $87,$94,$18,  6,$BA,$83,$94,$18,	6,$BB,$99,$94,$18,$1F,$1A,$8E
		.BYTE $AF,$18, $C,$BD, $B,$1C,$1D, $E,$BE,$8A,$AF,$8D,	9,$30,$90,$2D
		.BYTE $9C,  6,$2C,$90,$1E, $D,$8E,$29,$90, $D,$9F,$14,$28,$50,$1F,$F3
		.BYTE $98,$29,$90,$2C,$9D,$19,$30,$90, $E,$9E,$14,$31,	0,$F8, $B,$1B
		.BYTE  $F,  1,$F8, $B,$1D,$19, $C,$78,$1E,$E3,$8A,$84,$18,$95,$52,$9D
		.BYTE $95,$F8,$22,$1E,$91,$90,$F8,$22,$1F,$90,$9E,$F8,$2A,$1C,$8D,$85
		.BYTE	0,$F8,$2E,$28,$AE,$80,$F8,$15,$2F,$80,$91,$F8,$23,$2B,$93,$8E
		.BYTE $F8,$22,$DC,$90,$85,$78,$1D,$E4,$A0,$95,$F8,$15,$2D,$90,$98,$F8
		.BYTE  $F,$2E,$22,$1D,$F8,$20,$25,$98,$89,$F8,$2C,$26,$9C,$89,$F8,$35
		.BYTE $27,$20, $C,$78,$1E,$F9,$A7,$88,$F8, $F,$29,$27, $B,$F8,$2E,$2A
		.BYTE $29, $F,$F8,$16,$DD,$1C,$10,$F8,$2E,$2C,$14,$17,	0,$18,$45,$5C
		.BYTE $16,$21,$F8,$2E,$12,$9A,$83,$F8,$1C,$13,$91,$8A,$98,$1F,$11,$8B
		.BYTE $81,$78,$1F,$E2,$93,$8F,$18,$47,$5C,$18,$25,$F8,$16,$11,$82,$89
		.BYTE $F8, $F,$10,  5,	5,$F8, $D,$1A,$8C,$A2,$78,$1E,$F8,$89,$89,$F8
		.BYTE  $E,$14,$8A,$8B,$F8,$2E,$15,  8,$11,$F8,$2E,$16,$19,$10,$18,$46
		.BYTE $5C,$1C,$22,$F8,$21,$18,$82,$A2,$F8,$2E,$17,  5,$1D,$F8,$17,$19
		.BYTE $15,$1B,	0,$18,$2E,$E8,$15,$1E,$18,$1E,$EA,$8C,$8F,$18,$23,$E9
		.BYTE $9F,$8C,	0,$18,$52,  6,$84,$82,$18,$22,$5D,$8E,$8B,$18,$1E, $C
		.BYTE $96,$99,$9B, $C,$48,$8C,$83,$8D,$52,$9F,$15,$4B,$97,$83,$62,$5F
		.BYTE  $D,  2,$9F,$2F,$4C,$99,$83,$14,$60,$18,	9,$9F,$1F,$4D,$1C,$84
		.BYTE $9D,$52,$19,$13,$DF,$1F,$C4,$96,$93,$8D,$5E,$1A,$1B,$90, $F,$4E
		.BYTE  $C,$16,$50,$1D,$EC,$82,$18,$90,$2D,$4A,	6, $E,$90,$16,$49,  8
		.BYTE	9,  0,$FB,$E3,$D2,$90,$82,$6A,$86,  8, $A,$B3,$12,$85,	8,$23
		.BYTE $B9,$1D,$89,  8,$2E,$B6,$10, $C,	8,$1D,$19,  7,$8B,  8,$21,$B4
		.BYTE	6,$96,	8,$15,$B5, $E,$15,  8,$1E,$29,	3,$9B,	8,$23,	6,$1C
		.BYTE $93,  8,$16,$B8, $F,$A3,	8, $B,$B7,$16,$1A,  0,$18,$52,	6,$85
		.BYTE $86,$18,$1D,$18,$83,$9B,$1C,$22,$42, $B,$17, $A, $F,$1C,$2E,$AE
		.BYTE $97,$A0,$18,$20,$1D,$22,$AF,$9E,$85,$21,$1D,  6,$BE,$1F, $C,$97
		.BYTE $8C,$82,$1F,  6,$BF,$2E,$99,$84,$8C,$91,$D8,$18,	5,$DF,$13,$D0
		.BYTE  $C,$8C,$91,$52,	3,$18,$50,$12,$F2,$94,	6,$D0,$1C,$D1,$9F, $C
		.BYTE $90,$15,$9A,$91, $E,$90,$17,$9B, $B,$22,	0,$18,$38,$D7,$26,  5
		.BYTE $18,$39,$D9,$90,$94,$18,$4E,  0,$92,$BB,$18,$20,$DE,$91,$BB,$78
		.BYTE $B1,$96,$92,$DC,$78,$38,$98,$92,$DD,$9A,$3B,$B2,$93,$94,$DA,$9A
		.BYTE $3B,$B1,$9B,$92,$D8,$DB,$32,$D3,$92,$87,$B1,$D6,$9B,$3E,$B9,$9E
		.BYTE $AA,$BD,$A3,$9B,$3D,$BC,$A0,$3A,$38,$DC,$9F,$3A,$AE,$89,$85,$BD
		.BYTE $A3,$1B,	5,$9F,$3F,$AD, $A,$89,$BD,$A3,$1B,  6,$9F,$39,$AF,$10
		.BYTE $8A,$B9,$52,  8,	7,$9F,$3F,$B0,$1B,$8B,$B9,$52,	8,  6,$9F,$3A
		.BYTE $B6,$93,$A6,$B5,$DD,$1E,$2B,$9F,$3B,$B8,$1A,$A9,$B9,$52,$1E,$2C
		.BYTE $9F,$35,$BB, $E,$B4,$52,$DB,$12,$3A,$9F,$3E,$B7,$92,$AD,$B7,$52
		.BYTE	3,$2E,$9F,$51,$B3, $A,$A9,$BF,$52,  3,$2D,$90,$3E,$B4,$85,$2C
		.BYTE $90,$21,$B5,$86,$32,$90,$36,$BA,$1D,$33,	0,$18,$16,$CB,$9D,$A6
		.BYTE $18,$76,	0,$9A,$8B,  8,$13,$CF, $D,$14,	8,$10,$CD,  4,$12,  8
		.BYTE $93,$D3,$16,$93,	8,$93,$D4,$16,$8F,  8,$26,$44,	6,$86,	8,$12
		.BYTE $CC,  6,$8A,  8,$12,$CE, $D,$8E,	8,$1D,$D1,$12,$89,  8,$13,$D2
		.BYTE $14,$89,	8, $E,$D0,$16,$84,  0,$18,$4E,	0,$8F,$83,$18,$1E,$1B
		.BYTE $86,$91,$18,$47,$C8,$97,$89,$18,$23,$43,$96,$98,$9B,$37,$A8,$11
		.BYTE $84,$AD,$A3,$9B,$2D,$AB, $E,$8F,$45,$5C,$1C,$22,$C7,$90,$83, $F
		.BYTE	2,$1C,$45,$5C,	5,$1A,	8,$1B,$9E,$16,$AA,$98,$8C,$CA, $F, $E
		.BYTE $9F,$1E, $E,$86,$88,$B5,$A3,$11,	2,$1F,$46,$5C,$85,$8D,$AD,$C9
		.BYTE $18, $E,$9F,$16,$AC,$85,$8E,$95,$52,$19, $C,$90,$14,$A9, $A,$15
		.BYTE $90,$2F,$A7,$11,$1C,$50,$1D,$F4,$93,$13,	0,$F8,$66,  7,$82,$81
		.BYTE $F8,$17, $E,$8C,$9D,$78,$1C,$E1,$95,$89,$F8,$1E, $D,$87,$98,$F8
		.BYTE $13, $F,$82,$9F,$F8,$2E,	6,$8E,$86,$F8, $E,  8,$99,$8B,$F8,$2D
		.BYTE	9, $C,$11,$F8,$16, $A,$12, $E,$78,$1F,$F7,$99,$91,$F8,$16, $B
		.BYTE $18,$17,$F9,$3E, $C,  5,$11,$3F,	0,$18,$22,$3D,$84,$82,	0,  0
		.BYTE $78,$4E,	6,$89,$83,$18,$E3,$B2,$83,$89,$78,$4D,	7,  3, $F,$18
		.BYTE $E1,$B2,$8F,$90,	0,$18,$4E,  0,$82,$83,$18,$4E,	0,$85,$83,$18
		.BYTE $23,$40,$85,$85,	0,$18,$52,  6,$8B,$8B,	0,$78,	6,$8D,$86,$85
		.BYTE $18,$4E,	0,$85,$89,$18,$4E,  0,$87,$89,	0,$18,$1E,$1E,$90,$90
		.BYTE $78,$2A,	8,$8D,$8A,$48, $A,  9,	9,$92,	0,$18,$42,$55,	2,  8
		.BYTE $78,$7A, $B,$87,$84,$78,$43,$8E, $A,  5,	0,$78,$5A,$8F,$8E,$99
		.BYTE $78,$45, $C,$8C,$A9,$78,$47, $C,$90,$A9,$78,$7A, $D,$86,$96,$78
		.BYTE $7A, $E,$96,$96,$18,$72,	0,$8E,$FD,  0,$18,$39,$AD,  3,	2,$18
		.BYTE $1E,$16,$85,$86,	0,$78,$6C,$90,$88,$89,$78,$6C,$90,$86,$89,$18
		.BYTE $72,  0,$87,$87,$18,$4E,	0,$8B,$BC,$18,$4E,  0,$83,$BC,$18,$4E
		.BYTE	0,$87,$B6,$18,$4E,  0,$87,$BE,$18,$7E,	0,$87,$C0,$18,$4E,  0
		.BYTE $8B,$B8,$18,$4E,	0,$83,$B8,  0,$78,$52, $F,$87,$83,  0,	0,$F8
		.BYTE  $E,  5,$83,$87,$F8,$2D,	4,$82,$88,  0,$F8,$6E,$DB,$89,$88,  0
		.BYTE $F8,$21,$DA,$88,$88,  0,$78,  8,$10,$97,$8F,  0,$78,  8,$10,$97
		.BYTE $8F,  0,	0,$F8,$52,$33,$84,$A0,	0,$78,$78,$9A,$A7,$86,	0,$78
		.BYTE $78,$9A,$A7,$86,	0,  0,	0,$18,$4E,  0,$8B,$90,$18,  6,	4,$8D
		.BYTE $8D,$18,$4E,  0,$8F,$90,$78,  6,$B2,$8F,$A4,$90,$12,$93,$85, $B
		.BYTE $90,$12,$92,$95, $B,$90,$14,$94,$12,$1C,$90,$2D,$95, $B,$17,$90
		.BYTE $1F,$96, $A,$1D,$90,$22,$97, $F,$15,  0,$F8, $A,$34,$92,$A5,  0
		.BYTE	0,  0,	0,  0,	0,$F8,$12,$37,$84,$82,$F8,$13,$38,$85,$83,$F8
		.BYTE $12,$3A,$8B,$A9,$F8,$12,$39,$8E,$A9,  0,	0,  0,$78,$22,$12,$97
		.BYTE $9D,$78,$2E,$13,$AA,$87,$78,$2C,$14,$AA,$9A,  0,	0,$78,$13,$16
		.BYTE $90,$83,	0,$78,$10,$19,$82,$9E,$78,$22,$18,$A2,$8F,  0,$50,$2E
		.BYTE $69,  4,	5,$90,$20,$2E,	7,  5,	0,  8,$16,$53,	4,$83,$48,$2F
		.BYTE $68,  6,	6,  0,$18,$93,$57,$82,$82,$1D,$17,$56,	4,$89,$97,  2
		.BYTE	9,  8,$28,$58,	9,$89,	8,$8F,$52,  8,$82,  0,$18,$16,	3,$82
		.BYTE $83,$18,$43,$55,	5, $D,$90,$12,$30,$88,	5,$90,$2A,$2F,$87, $A
		.BYTE	0,$9F,$6A,$44,$83,$84,$89,$52,	2, $B,$90, $A,$43,$85,	6,$D0
		.BYTE $11,$C1,	8,  3,	0,$9F,$1B,$34, $F,$81, $A,$59, $E,$1C,$9F,$23
		.BYTE $33,  4,$82, $A,$5A, $F,$1C,$90,	8,$32,	4,  8,$90,$2D,$35,$88
		.BYTE	7,$90,$2E,$39,$9B, $A,$90,  9,$36,$8D, $B,$90, $B,$37,$90, $B
		.BYTE $90,$22,$3A,$87,$15,$90,$14,$3D,$15,$16,$90,$1F,$38,$1A,$1A,$90
		.BYTE	9,$3C,	2,$1B,$90,  9,$31,$8C,$1C,$90, $B,$31,$91,$1C,$90,$15
		.BYTE $3B,  2, $E,  0,$50,  2,$AE,$89,	4,$90,	9,$3E,$86,  8,$90, $B
		.BYTE $3F,$8C,	8,$90,$2B,$40, $E, $E,$90,$2D,$41,  5,$10,$90, $A,$42
		.BYTE $8A,$14,$D0,  6,$C0,$8B,	5,  0,$78,$11,$26,  2,	2,$78,$1F,$28
		.BYTE  $D,  2,$78,$15,$25,$86,$8E,$78,$22,$27,$84,$84,$78,$2F,$29,$8C
		.BYTE $89,$78, $C,$2A,$8B,$8A,$78,$17,$A5,$8E,$8C,$18,$11,  5,$81,$8C
		.BYTE $18,  6,	0,$84,$99,  0,	0,$D0,$1A,$B8,$8D,  3,$50,  2,$AA,$92
		.BYTE	3,$D0,	5,$B9,$90,  4,$D0,$29,$BB, $E,	7,$D0, $A,$BA,$90, $C
		.BYTE	0,  0,$78,$6A,$22,  3,	3,  0,$DF,$21,$BC,$82,$84,$A3,$52,  5
		.BYTE	5,  0,$18,$74,	0,$83,$8A,$18,$74,  0,$85,$8A,$18,$74,	0,$87
		.BYTE $8A,  0,$5B,  2,$B0,$8F,$87,  6,$C6,$90, $A,$A5,$8A, $A,$90,  7
		.BYTE $A6,$91,	8,  0,$18,$52,	6,$9D,$91,$18,$2A,$8A, $E,  5,$18,$1D
		.BYTE $12,$89,$A2,$9F,$1F,  7,$9F,$99,$8D,$52, $F,$21,$50,$1E,$F1,$9F
		.BYTE $1F,$90, $F,$67,$1F,$28,$90,$16,$6A,$96,$21,$90, $D,$6D,$12,$24
		.BYTE $90,$50,$6B,$12,$28,$90,$2A,$69,$87,$27,$90,$2C,$6C,  6,$1C,$90
		.BYTE $2F,$68,$83,$21,$90,$15,	8,$83,$19,  0,$18,$2E,$8B,  4,	6,$48
		.BYTE $1D,$78,	1,  3,	0,  8,$15,$8C,	4,$82,	0,$78,$62,$93,$83,$90
		.BYTE	0,  0,$18,$12,$8E,$80,$81,$18,	9,$8D,$90,$B5,$18, $B,$8D,$94
		.BYTE $B5,$1C,$41,$55,	7,$1A,$10, $A,$1C,$42,$55,$15,$1A,$15,$19,$1C
		.BYTE $43,$55,$1B,$17,	9,$2E,$1F,$41,$55,$10,$98,$89,$52,  5, $B,$9F
		.BYTE $10,$71,$1E,$93,$89,$52,	5, $D,$9F,$26,$74,$18,$90,$89,$8F,$1E
		.BYTE  $B,$9F,$12,$6F,$86,$91,$89,$90,$1E, $D,$BF,$27,$72, $C,$8C,$C0
		.BYTE $79,  5,$1A,$90,$25,$73,$14, $A,$90,  7,$6E,$94,	7,$90, $A,$70
		.BYTE $8C,  7,$90, $A,$70,$98,	7,  0,$9A,  9,$77,$88,$93,$91,$9A, $B
		.BYTE $78,$8C,$93,$92,$5F,$1A,$B1,$8A,$84,$B5,$93,$11,	6,$9F,$25,$76
		.BYTE $88,$86,$B5,$7E,$11,  7,$90,$27,$75,$8C,	6,$90,$35,$7B,$10,  6
		.BYTE $90,$37,$7C,$12,	7,$90,$27,$79,	5, $D,$90,$42,$7A,$12, $D,  0
		.BYTE $9F,$26,$7D,$86,$8B,$A5,$94,  8, $A,  8,$43,$97,	9,  9,$48,$A7
		.BYTE $7A,  5,$89,  8,$25,$96,	5,  6,	8,$A5,$95,  9,$86,$48,$1A,$AD
		.BYTE	6,$84,	0,$78,$56,$91,$88,$83,$18,$4E,	0,$85,$84,$18,$4E,  0
		.BYTE $8B,$84,	0,$18,$E1,$B2,$A2,$A6,	0,  0,	0,$18,$52,  6,$83,$82
		.BYTE $18,$1E, $B,$88,$89,$9F,$16,$98,$87,$84,$9E,$A8,	3, $D,	8,$A3
		.BYTE $A9, $B,$8D,  8,$94,$AC, $A,$8F,	8,$93,$AA,  3,$8F,  8,$AF,$AB
		.BYTE	7,$8F,	0,$D0,$11,$D5,	2,  3,	0,$DF,$1E,$D6,$82,$85,$1C,$F6
		.BYTE	3,  5,	8,$11,$F7,  2,$84,  0,$78,$81,	2,$91,$9F,  0,$78,$27
		.BYTE	1, $F, $B,$78, $E,  0,$12,  2,$78,  8,$8B,$82,$83,$18,$E3,$B2
		.BYTE $8C,$81,$18,$2B,$FF,  8,	2,  0,$18, $A,$45,$8F,$9B,$18, $A,$F8
		.BYTE $8D,$9B,$18,$25,$FA, $C, $E,$18,$27,$FB,$10,$10,$19, $B,$F9,  7
		.BYTE $87,  8,$1A, $A,$F8,$8E,$87,$59,$1D,  2,	0,$8E,$8B,$1B,$3C,$1D
		.BYTE $9F,$1B,$CE, $D,$81,$AD,$FD,$14,$11,$9F, $A,$1E,$9B,$87,$AD,$FC
		.BYTE $14, $F,$90,$2D,$CF,$16,	9,$90,$2C,$D0,$18, $C,$90,  9,$D1,$8D
		.BYTE  $C,$90, $B,$D1,$8F, $C,	0,$18,$5E,  0,$8D,$B7,$48,$81,$41, $D
		.BYTE $85,  0,	0,  0,$98,$6B,$F1,$82,$83,  0,$98,$20,$F2,$84,$83,  0
		.BYTE $98,$2D,$F3,  2,	4,  0,$F8,  7,	3,$87,$87,  0,$98, $B,$F9,$16
		.BYTE $13,$98, $B,$FC,$8C,$9A,$98,  9,$FC,$89,$9A,$98,$2F,$F8,$13, $D
		.BYTE $98, $B,$F7,$12,	5,$98,$12,$F4,$88,$80,$18,$43,$55,$99,$85,$98
		.BYTE $2E,$F6, $D, $E,$98,$15,$F5,  8, $C,$98,$37,$FB,	6,$19,$98,$34
		.BYTE $FA,  2,$16,$F8,$23,$D8,$91,$99,	0,$18,$4E,  0,$81,$83,$18,$4E
		.BYTE	0,$81,$81,  0,$98,  6,$FD,$8B,$85,$98, $B,$FE,$8C,$88,$98,$2E
		.BYTE $FF,$12,	8,$F8,$2A,$D9,	4,  6,$F8,$21,	0,  4, $E,$F8,	9,  1
		.BYTE $88,$93,$78,  2,$B4,$8A,$84,  0,$F8,$2C,	2,  9,	5,  0,$DB,$36
		.BYTE $C3,$82,$83,$B7,$52,  8,$10,$5B,	4,$84,	0,$7C,$22,$6A,$84,$83
		.BYTE	3,  4,	0,$18,$4E,  0,$84,$84,$1D,$52,$9A,$84,$82,$D0,	2,  5
		.BYTE	0,$9B,$2E,$83,$81,$84,$42,$55,	8,$9F,$9B,  2,$86,  8,$B7,$93
		.BYTE	2,$88,	0,$DF,	2,$CF,$89,$86, $A,$59, $E,$1A,$9F,$1E,$86,$14
		.BYTE $8D, $A,$5A, $F,$1A,$90,	9,$84,$87, $A,$90,$23,$1D, $B, $D,$90
		.BYTE $2F,$87,$14,  5,$90,  9,$85,$8D,$18,  0,$78,$20,$6B,$87,$8F,$78
		.BYTE $1E,$6C,$86,$A4,	0,$18,$20,$65,$89,$92,$DF,$1E,$C5,$8A,$82,$9D
		.BYTE $64, $A,	1,  0,$18,$2E, $D,$98,$82,$9F,$2E,$51,	5,$8C,$95,  0
		.BYTE  $B,  2,$DF,$1F,$C6,$19,$95,$8D,$66,$19,	7,$90,$15,$50,$13, $D
		.BYTE $90,$16,	2,$8B,	3,  0,$18,$2E, $E,$9F,$82,$18,$26,$6C,$A3,$93
		.BYTE $18,$12,$68,$9B,$97,$18,$24,$69,$9E,$98,$18,$14,$6D,$A1,$97,$18
		.BYTE $10,$6E,$A1,$99,$18,$2F,$6A,$A9,$97,$18,$2A,$6B,$A1,$93,$9B,$10
		.BYTE $55,$26,$88,$A9,$52,$FE,$12,$C8,$83,$8B,$6F,  4, $B,$DE,$14,$CA
		.BYTE	3,$94,$70,  4,$1C,$9E,$13,$54,$16,$89,$6F,  5,$1B,$BF,$1E,$53
		.BYTE $84,$84,$16,$71,	4,$1A,$FF,$21,$C9,  8,$8E,$22,$70,  3, $C,$90
		.BYTE $20,  3,$92,$17,$50,$17,$ED,$93,	3,$D0,$2F,$C7,$25, $E,	0,$9B
		.BYTE $22,$52,	3,  3,$1F,$67,$48,$A3,$6E,  2,$82,  0,$78,$22,$77,  4
		.BYTE	2,  0,$18, $E,$3F,  3,	1,$18,$2E,$89,$8A,$85,	0,$1D,	5,$7C
		.BYTE $83,$85,	6,  9,	4,$48,$5D,$75,	1,  1,	0,$48,$10,$46,	2,$84
		.BYTE $48,$26,$45,  7,$83,  0,	0,  0,	0,  0,$F8,$B7,$20,$8B,$84,$F8
		.BYTE $2E,$21,$8A,$83,$F8,$1D,$22,  9,	2,$F8,$9F,$23,$82,$81,$F8,$20
		.BYTE $24,$83,$89,  0,$18,$51,	6,$82,$84,$F8, $A,$32,$89,$89,$F8,$1F
		.BYTE $30,$86,$83,$F9,$69,$31,$81,$89,$6B,  0,	0,$18,$14,$EB,$83,$87
		.BYTE	0,$9F,$35,$4F,$81,$84,$1F,$61,	3,  4,	8,$B7,$52,  3,$87,  8
		.BYTE $AF,$62,	7,$87,	0,$78,$6E,$7C,$15, $C,$18,$45,$5C,$94,$89,$78
		.BYTE $6E,$7E,$98,$86,$78,$6E,$7B,$8D,$88,$78,$20,$7F,$8F,$8D,$78,$6D
		.BYTE $7D, $B,$15,$18,$47,$5C,$14,$14,	0,  0,$1D,$E3,$B2,$85,$85,$E1
		.BYTE	4,  5,	0,$78,$11,$26,	2,  2,$78,$1F,$28, $D,	2,$78,$15,$25
		.BYTE $86,$8E,$78,$22,$27,$84,$84,$78,$2F,$29,$8C,$89,$78, $C,$2A,$8B
		.BYTE $8A,$78,$17,$A5,$8E,$8C,$18,$11,	5,$81,$8C,  0,	0,$18,$4E,  0
		.BYTE $84,$81,$78,$2A,$85,$84,$83,$18,$2F,$B0,$85,$84,$78,$34,$83,$84
		.BYTE $85,$78,$35,$84,$83,$84,	0,$18,$3E,$DF,$8D,$88,	0,  0,$18,  6
		.BYTE $D5,$81,$81,  0,$78,$22,$8A,$85,$84,  0,$98,$3A,$10,$84,$83,  0
		.BYTE $18,$4E,	0,$84,$84,$18,$13,$B1,	6,  4,	0,  0,$18,$12,	0,$87
		.BYTE $88,$98,$34,$E7, $C,$17,$98,$4B,$E6,$8A,$93,  0,	0,  0,	0,$78
		.BYTE $7A,$43,$96,$96,$78,$45, $C,$8C,$A9,$78,$47, $C,$90,$A9,$78,$7A
		.BYTE $42,$86,$96,  0,	0,  0,	0,$78,$11,$26,	2,  2,$78,$1F,$28, $D
		.BYTE	2,$78,$15,$25,$86,$8E,$78,$22,$27,$84,$84,$78,$2F,$29,$8C,$89
		.BYTE $78, $C,$2A,$8B,$8A,$78,$17,$A5,$8E,$8C,$18,$11,	5,$81,$8C,  0
		.BYTE $78,$11,$26,  2,	2,$78,$1F,$28, $D,  2,$78,$15,$25,$86,$8E,$78
		.BYTE $22,$27,$84,$84,$78,$2F,$29,$8C,$89,$78, $C,$2A,$8B,$8A,$78,$17
		.BYTE $A5,$8E,$8C,$18,$11,  5,$81,$8C,	0,  0,$98,$62,$D8,  9,$14,$F8
		.BYTE $5F,$D7, $A,$28,$98, $D,$D9,  6,$33,  0,$98,$4F,$DA, $E,$11,$98
		.BYTE $60,$DB,$88,$96,$98,$60,$DC,$88,$9B,$18,$EB,$B2,$88,$A0,$98,$60
		.BYTE $DE,$88,$A5,$98,$E9,$E1,$92,$9B,$18,$E3,$B2,$92,$A5,$98,$68,$E0
		.BYTE $92,$A0,$98,$60,$DD,$92,$96,$98,$4D,$DF, $E,$27,	0,  0,	0,$F8
		.BYTE $22,$DE,$87,$86,	0,  0,	0,  0,	0,  0,$78, $A,$44,$8E,$9A,  0
		.BYTE	0,  0,	0,  0,$98,  6,$FD,$8B,$85,$78,	2,$B4,$8A,$84,$18,  9
		.BYTE	0,$88,$87,$18,	9,  0,$88,$89,$18,  9,	0,$88,$8B,$18,	9,  0
		.BYTE $88,$8D,$18, $B,	0,$8C,$8D,$18, $B,  0,$8C,$8B,$18, $B,	0,$8C
		.BYTE $89,$18, $B,  0,$8C,$87,$18,$27,	0,$8D,$8C,$18,$27,  0,$8D,$88
		.BYTE $18,$25,	0,$87,$8C,$18,$25,  0,$87,$88,$18,$72,	0,$86,$A0,$18
		.BYTE $12,  0,$86,$A1,$18,$1E,	0,$86,$A3,$18,$26,  0,$86,$A4,$18,$2E
		.BYTE	0,$86,$A5,$18,$36,  0,$86,$A6,$18,$42,	0,$86,$A7,$1A,$16,  2
		.BYTE $86,$A2,	0,  0,$50,  2,$94,$89,	4,$50,	6,$AE,$8A,  5,$D0, $B
		.BYTE $3B,$8B,	6,$D0,	9,$3B,$87,  6,$D0,  9,$3B,$87,	9,$D0, $B,$3B
		.BYTE $8B,  9,$D0, $B,$3B,$8B, $C,$D0,	9,$3B,$87, $C,$10,$72,	0,$8A
		.BYTE $27,  0,$50, $F,$30, $E,	1,$50, $F,$A9,$1A,  6,$50,$17,$36, $C
		.BYTE	8,$50, $A,$37,$91, $A,$50, $B,$2D,$92,$2E,$50,	9,$2B,$8F,$18
		.BYTE $50,  9,$2D,$8F,$2E,$50,$2E,$A8,	9,$1B,$50, $B,$2B,$1D,$1C,$50
		.BYTE $36,$32,$12,$20,$50,$16,$2E,$85,$23,$50,$16,$2F,$89,$23,$50, $F
		.BYTE $31,  5,$27,$50,$15,$33, $F,$28,$50,$16,$30,$97,$23,$50,$2C,$34
		.BYTE $1E,$27,$50,  8,$35,$A0,$2D,$10,$51,  6,$83,$1B,	0,$50,$1A,$A6
		.BYTE $8D,  3,$50, $A,$2B,$90, $C,$50,	5,$A7,$90,  4,$50,$29,$2C, $E
		.BYTE	7,  0,$50,$6A,$38,  3,	3,  0,$50,$21,$39,$82,	4,  0,	0,$18
		.BYTE	9,  0,$8B,$8E,$18, $B,	0,$8E,$8E,$18,	8,  0,$8D,$92,$18,  8
		.BYTE	0,$8C,$93,$18,$12,  0,$8D,$A4,$18,$2F,	0,$90,$98,$18,$15,  0
		.BYTE $86,$99,$18, $A,	0,$8C,$A3,$18, $A,  0,$8D,$A3,	0,$78,$11,$26
		.BYTE	2,  2,$78,$1F,$28, $D,	2,$78,$15,$25,$86,$8E,$78,$22,$27,$84
		.BYTE $84,$78,$2F,$29,$8C,$89,$78, $C,$2A,$8B,$8A,$78,$17,$A5,$8E,$8C
		.BYTE $18,$11,	5,$81,$8C,$78,	6,$AB,$84,$8B,	0,  0,	0,  0,$18,$39
		.BYTE $E3,$90,$94,$78,$3B,$88,$93,$94,$18,$4E,	0,$92,$BB,$18,$20,$E6
		.BYTE $91,$BB,$9A,$3B,$C1,$9B,$92,$52,$9B,$3E,$C5,$9E,$AA,$BD,$A3,$9B
		.BYTE $3D,$BC,$A0,$39,$38,$E5,$1D,$51,$E4, $A,$A9,$52,$12,$3A,$9F,$3A
		.BYTE $BE,$89,$85,$BF,$52,  3,$2D,$5F,$21,$89,$86,$B2,$BD,$E0,$1B,  5
		.BYTE $9F,$3F,$BD, $A,$89,$BD,$A3,$1B,	6,$9F,$39,$BF,$10,$8A,$B9,$52
		.BYTE	8,  7,$9F,$3F,$C0,$1B,$8B,$B9,$52,  8,	6,$DF,$3A,$D4,$93,$A6
		.BYTE $B5,$DD,$1E,$2B,$9F,$3B,$C4,$1A,$A9,$B9,$52,$1E,$2C,$9F,$36,$BA
		.BYTE $9D,$B3,$B7,$52,	3,$2E,$90,$35,$C6, $E,$34,$90,$3E,$C3,$92,$2D
		.BYTE $90,$3E,$C2,$85,$2C,  0,$18,$3F,$E7,$83,$87,$18,$39,$E1,$82,$87
		.BYTE	0,  0,	0,$18,$5B,  0,$A2,$8C,	0,  0,	0,  0,	0,$18,$1C,$14
		.BYTE $91,$87,$18,$22,	6,$86,$84,$78,$23,$80,$8D,$9A,$9A, $F,$8C,$99
		.BYTE $91,$A5,$9E,$1D,$8B,$84,$8F,$A4,$17,$11,$9F,$2D,$89,  3,$8D,$AF
		.BYTE $A1,$18,	3,$9F, $D,$8D,$85,$94,$8F,$52,$18,  7,$9F, $C,$8E,$81
		.BYTE $9B,$AF,$A3,$19,$14,$9F,$1E, $A,$8B,$8F,$14,$A2,$16,  4,$10,$4E
		.BYTE	0,$8D,$16,$10,$4E,  0,$90,$16,$10,$64,$A0,$8F,$17,$90, $E,$8A
		.BYTE $16,  6,$90,$2E,$8F,$8E,$1D,$90,$16,$90,$90,$1D,	0,$18,$2D,$A7
		.BYTE	2,  7,$18,$20,$A6,$85,$86,  0,$18,$1C,$14,$91,$87,$18,$22,  6
		.BYTE $86,$84,$78,$14,$81,$85,$98,$9A, $F,$8C,$99,$91,$A5,$9E,$1D,$8B
		.BYTE $84,$8F,$A4,$17,$11,$9F,$2D,$89,	3,$8D,$AF,$A1,$18,  3,$9F, $D
		.BYTE $8D,$85,$94,$8F,$52,$18,	7,$9F, $C,$8E,$81,$9B,$AF,$A3,$19,$14
		.BYTE $9F,$1E, $A,$8B,$8F,$14,$A2,$16,	4,$10,$4E,  0,$8D,$16,$10,$4E
		.BYTE	0,$90,$16,$10,$64,$A0,$8F,$17,$90, $E,$8A,$16,	6,$90,$2E,$8F
		.BYTE $8E,$1D,$90,$16,$90,$90,$1D,  0,	0,$F8,$21,$35,$86,$85,$F8,$17
		.BYTE $36,$87,$85,  0,	0,$78, $A,$1B,$8E,$9A,$78, $A,$1A,$96,$8C,  0
		.BYTE	0,  0,	0,  0,$18,$13,	0,$8B,$9C,$18,$59,  0,$8A,$9C,$18,$91
		.BYTE	0,$8D,$C4,$18,$85,  0,$8D,$C4,	0,$18,$4E,  0,$89,$88,$18,$4E
		.BYTE	0,$8D,$88,$18,$4E,  0,$8D,$8B,$18,$4E,	0,$89,$8B,$18,$4E,  0
		.BYTE $8D,$B6,$18,$4E,	0,$88,$BC,$18,$4E,  0,$8E,$BC,$18,$4E,	0,$89
		.BYTE $B9,$18,$4E,  0,$8D,$B9,$18,$4E,	0,$89,$B6,$18,$7E,  0,$8B,$86
		.BYTE $18,$7C,	0,$8B,$85,$18,$7D,  0,$8C,$85,$18,$7F,	0,$8C,$86,  0
		.BYTE $78,$1E,$6D,$88,$82,$18,$20,$63,$87,$8F,	0,$18,$2E, $F,$9F,$82
		.BYTE $78,$1D,$72,$82,$97,$18,	9,$71,$83,$94,$78, $B,$74,$25, $E,$78
		.BYTE $22,$73,	6,$85,$9B,$28,$55,$26,$88,$A9,$52,$1D,$16,$72,$15,$93
		.BYTE $95,$1F,	8,$5E,$17,$EE,$93,$83,$73,$1A,$18,$DF,$2D,$CB,	8,$8E
		.BYTE $95,  0,$14,  4,$90,$14,	4,$92,$17,$D0,$36,$CC,$16,  9,$90,$14
		.BYTE $59,$A1,$17,$90,$2C,$5A,$A1,$19,$90,$34,$5B,$A3,$19,$90,$2F,$58
		.BYTE $A9,$17,$90,$36,$57,$A1,$13,$90,	9,$56,$10,  2,	0,$18,$71,  0
		.BYTE $96,$8B,	0,  0,	0,  0,	0,  0,	0,  0,	0,$FA,$22,$DF,$89,$87
		.BYTE $92,  0,	0,  0,	0,  0,	0,  0,	0,  0,$78,$10,$15,$93,$90,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,$78,$10,$17,$91,$93,	0,  0,$18, $A
		.BYTE	0,$90,$8F,$18,$12,  0,$91,$8F,$18, $A,	0,$92,$8F,$18, $A,  0
		.BYTE $91,$8E,	0,$18,	8,  0,$88,$87,$18,  9,	0,$86,$88,  0,$18,$1E
		.BYTE  $D,$85,$84,  0,$18, $A,	0,$85,$86,$18, $A,  0,$88,$86,$18, $A
		.BYTE	0,$86,$85,$18,$12,  0,$87,$84,	0,$18,$6E,  0,$8F,$B2,	0,  0
		.BYTE	0,  0,$18,$52,	6,$8C,$84,$98,$22,$CD,$91,$99,$18,$1D,$1D,$81
		.BYTE $89,$1B,$34,$F1,$9D,$8F,$64,$F4,$1C,$17,$F3,$92,$A6,  8,$16,$1F
		.BYTE $1F,$34,$1F,$97,$B5,$F5,$1D,$12,$90,$22,$CC,$19,$23,$90,$16,$CB
		.BYTE $1C,$1F,$90,$15,$C8, $E,$12,$90,$64,$C9,$99,  4,$90,$2E,$CA,$19
		.BYTE $15,  0,$78, $A,$8C,$8F,$9B,$78, $A,$8C,$8D,$9B,$78,$24,	3,  7
		.BYTE $11,$79, $B, $A,	7,$87,	8,$1A, $A,$F8,$8E,$87,$59,$9F,$1B,$D5
		.BYTE  $D,$81,$AD,$A3,$14,$11,$9F, $A,$1E,$9B,$87,$AD,$A3,$14, $F,$90
		.BYTE $2D,$CF,$16,  9,$90,$2C,$D6,$18, $C,$50,	2,$B3,$8E, $B,$90,  9
		.BYTE $D7,$8D, $C,$90, $B,$D7,$8F, $C,	0,  8,$81,$52, $D,$85,	0,$D0
		.BYTE $11,$F1,	2,  3,	0,$18,$E3,$B2,$8C,$81,$78,  8,	4,$81,$83,  0
		.BYTE $78, $C,	5,$81,$8A,  0,$18,$52,	6,$8C,$84,$98,$22,$CD,$91,$99
		.BYTE $18,$1D,$1D,$81,$89,$1B,$34,$F1,$9D,$8F,$64,$FE,$1C,$17,$F3,$92
		.BYTE $A6,  8,$16,$1F,$1F,$34,$1F,$97,$B5,$F5,$1D,$12,$90,$22,$D4,$19
		.BYTE $23,$90,$16,$D3,$1C,$1F,$90,$15,$C8, $E,$12,$10,$64,$FE,$99,  4
		.BYTE $90,$2E,$D2,$19,$15,  0

; =============== S U B	R O U T	I N E =======================================
_bD_s28:				; CODE XREF: _b0_s64+3F-P _b4_s1A-P
					; _b6_s8+24-P _b6_s1D+C-P
					; sub_142504+4A-P sub_174BB3+8D-P
					; _b16_s0+B-P
					; DATA XREF: BANKD:8050-o
		LDX		#0		; code used at 8000
		STX		byte_10		; code used at 8000
loc_1415A4:				; CODE XREF: _bD_s28+14-j
		TXA				; code used as ind data	at 8000
		ASL		; code used at 8000
		TAY				; code used as ind data	at 8000
		LDA		byte_73C,Y	; code used at 8000
		EOR		byte_73D,Y	; code used as ind data	at 8000
		BPL		loc_1415B1	; code used at 8000
		INC		byte_10		; code used at 8000
loc_1415B1:				; CODE XREF: _bD_s28+D-j
		INX				; code used as ind data	at 8000
		CPX		#4		; code used at 8000
		BNE		loc_1415A4	; code used as ind data	at 8000
		LDA		byte_10		; code used at 8000
		BNE		loc_141612	; code used at 8000
		LDX		#0		; code used at 8000
		STX		byte_10		; code used at 8000
loc_1415BE:				; CODE XREF: _bD_s28+52-j
		TXA				; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_73C,Y	; code used as ind data	at 8000
		AND		byte_73D,Y	; code used at 8000
		BPL		loc_1415EF	; code used as ind data	at 8000
		LDA		byte_724,Y	; code used as ind data	at 8000
		STA		byte_11		; code used at 8000
		LDA		byte_725,Y	; code used at 8000
		STA		_tmp12		; code used at 8000
		LSR		_tmp12		; code used at 8000
		ROR		byte_11		; code used at 8000
		LSR		_tmp12		; code used at 8000
		ROR		byte_11		; code used at 8000
		LDA		byte_71D,Y	; code used at 8000
		CMP		_tmp12		; code used at 8000
		BEQ		loc_1415E6	; code used as ind data	at 8000
		BCC		loc_1415ED	; code used at 8000
		BCS		loc_1415EF	; code used at 8000
loc_1415E6:				; CODE XREF: _bD_s28+40-j
		LDA		byte_71C,Y	; code used at 8000
		CMP		byte_11		; code used as ind data	at 8000
		BCS		loc_1415EF	; code used at 8000
loc_1415ED:				; CODE XREF: _bD_s28+42-j
		INC		byte_10		; code used at 8000
loc_1415EF:				; CODE XREF: _bD_s28+27-j _bD_s28+44-j
					; _bD_s28+4B-j
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_1415BE	; code used at 8000
		LDA		byte_10		; code used at 8000
		BEQ		loc_1415FC	; code used at 8000
		LDA		#$2A       ; code used at 8000
		BNE		loc_141614	; code used at 8000
loc_1415FC:				; CODE XREF: _bD_s28+56-j
		LDA		byte_60B7	; code used at 8000
		AND		#$20       ; code used at 8000
		BNE		loc_14160A	; code used at 8000
		LDA		byte_6DF	; code used at 8000
		CMP		#$78       ; code used as ind data at 8000
		BCS		loc_14160E	; code used at 8000
loc_14160A:				; CODE XREF: _bD_s28+61-j
		LDA		#$30       ; code used at 8000
		BNE		loc_141614	; code used at 8000
loc_14160E:				; CODE XREF: _bD_s28+68-j
		LDA		#$21       ; code used at 8000
		BNE		loc_141614	; code used at 8000
loc_141612:				; CODE XREF: _bD_s28+18-j
		LDA		#$27       ; code used at 8000
loc_141614:				; CODE XREF: _bD_s28+5A-j _bD_s28+6C-j
					; _bD_s28+70-j
		LDX		byte_6A58	; code used at 8000
		BNE		loc_14161B	; code used at 8000
		LDA		#$30       ; code used at 8000
loc_14161B:				; CODE XREF: _bD_s28+77-j
		STA		_ram_pal_buf+1	; code used at 8000
		STA		byte_6E0	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s29:				; CODE XREF: _b4_s26+51-P
					; DATA XREF: BANKD:8052-o
		LDX		#0		; code used at 8000
loc_141624:				; CODE XREF: _bD_s29+C-j
		LDA		byte_6A6F,X	; code used at 8000
		CMP		#$18		; code used at 8000
		BEQ		loc_141631	; code used at 8000
loc_14162B:				; CODE XREF: _bD_s29+37-j
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_141624	; code used at 8000
		RTS				; code used at 8000
loc_141631:				; CODE XREF: _bD_s29+7-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		BRK
		.BYTE $A7, 7		; ofs 0x0006801c, -> dst _b4_sE
		LDA		byte_700	; code used at 8000
		LDX		#word_3C	; code used at 8000
		JSR		_mul16_to_8	; code used at 8000
		LDA		#$64       ; code used at 8000
		JSR		_div16_to_8	; code used at 8000
		INC		word_3C		; code used at 8000
		LDA		word_3C		; code used at 8000
		CMP		#$82       ; code used at 8000
		BCC		loc_141650	; code used at 8000
		LDA		#$82 
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
loc_141650:				; CODE XREF: _bD_s29+27-j
		STA		word_4		; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_6A73,X	; code used at 8000
		JMP		loc_14162B	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s2:					; CODE XREF: sub_174D56+9-P
					; DATA XREF: BANKD:8004-o
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_141666	; code used at 8000
		JSR		sub_14193F	; code used at 8000
locret_141665:				; CODE XREF: _bD_s2+D-j	_bD_s2+13-j
					; _bD_s2+24-j _bD_s2+31-j
		RTS				; code used at 8000
loc_141666:				; CODE XREF: _bD_s2+4-j
		LDA		byte_6E1	; code used at 8000
		BNE		locret_141665	; code used at 8000
		LDA		byte_90		; code used at 8000
		AND		#$F		; code used at 8000
		BNE		locret_141665	; code used as ind data	at 8000
		LDA		byte_8B		; code used at 8000
		CMP		#$B		; code used at 8000
		BEQ		loc_14167B	; code used at 8000
		CMP		#$78       ; code used at 8000
		BNE		loc_141682	; code used at 8000
loc_14167B:				; CODE XREF: _bD_s2+19-j
		LDA		byte_60B7	; code used at 8000
		AND		#4		; code used at 8000
		BEQ		locret_141665	; code used at 8000
loc_141682:				; CODE XREF: _bD_s2+1D-j
		LDY		#$13		; code used at 8000
loc_141684:				; CODE XREF: _bD_s2+39-j
		LDA		byte_100,Y	; code used as ind data	at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_141697	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		locret_141665	; code used at 8000
		INY				; code used as ind data	at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		CPY		#$70       ; code used at 8000
		BCC		loc_141684	; code used at 8000
loc_141697:				; CODE XREF: _bD_s2+2D-j
		LDA		#1		; code used at 8000
		STA		word_72+1	; code used at 8000
		LDA		byte_90		; code used at 8000
		AND		#$70       ; code used at 8000
		LSR		; code used at 8000
		CLC				; code used at 8000
		ADC		#$10		; code used at 8000
		STA		word_72		; code used at 8000
		LDA		byte_6AE6	; code used at 8000
		BMI		loc_1416AE	; code used at 8000
		LDA		word_72		; code used at 8000
		STA		byte_91		; code used at 8000
loc_1416AE:				; CODE XREF: _bD_s2+4C-j
		JSR		loc_1416B1	; code used at 8000
loc_1416B1:				; code used at 8000
		JSR		sub_1416B7
		JMP		loc_141B48	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1416B7:				; CODE XREF: _bD_s2:loc_1416B1-p
		LDA		#0		; code used at 8000
		STA		byte_7F		; code used at 8000
		LDA		byte_176	; code used at 8000
		BEQ		loc_1416CE	; code used at 8000
		LDX		#0
		LDA		word_72
loc_1416C4:				; CODE XREF: sub_1416B7+15-j
		CMP		byte_177,X
		BEQ		locret_1416D4
		INX
		CPX		#4
		BNE		loc_1416C4
loc_1416CE:				; CODE XREF: sub_1416B7+7-j
		LDY		#3		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		BPL		loc_1416D5	; code used at 8000
locret_1416D4:				; CODE XREF: sub_1416B7+10-j
		RTS				; code used at 8000
loc_1416D5:				; CODE XREF: sub_1416B7+1B-j
		AND		#$FC       ; code used at 8000
		STA		(word_72),Y	; code used at 8000
		JSR		sub_1417DD	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_sE:					; CODE XREF: _b6_s10+69-P
					; DATA XREF: BANKD:801C-o
		AND		#3		; code used at 8000
		PHA				; code used at 8000
		LDY		#3		; code used at 8000
		ORA		(word_72),Y	; code used at 8000
		STA		(word_72),Y	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		PHA				; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		PHA				; code used at 8000
		TAY				; code used at 8000
		JSR		sub_1777C2	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		BCC		loc_141722	; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$E0       ; code used at 8000
		CMP		byte_8C		; code used at 8000
		BNE		loc_141722	; code used at 8000
		LDA		byte_8E		; code used at 8000
		BPL		loc_141724	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		byte_30		; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		word_4		; code used at 8000
		INY				; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		byte_31		; code used at 8000
		CLC				; code used at 8000
		ADC		#7		; code used at 8000
		STA		word_4+1	; code used at 8000
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		BCC		loc_141724	; code used at 8000
loc_141722:				; CODE XREF: _bD_sE+1B-j _bD_sE+24-j
					; _bD_sE+5C-j
		PLA				; code used at 8000
		RTS				; code used at 8000
loc_141724:				; CODE XREF: _bD_sE+28-j _bD_sE+44-j
		LDY		#2		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		AND		#$F		; code used at 8000
		JSR		sub_1778D7	; code used at 8000
		LDY		#3		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		PHA				; code used at 8000
		JSR		sub_177909	; code used at 8000
		PLA				; code used at 8000
		AND		#$3C       ; code used at 8000
		BEQ		loc_141722	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_177385	; code used at 8000
		JSR		sub_17732F	; code used at 8000
		INC		byte_7F		; code used at 8000
		PLA				; code used at 8000
		BEQ		loc_14176A	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_14175C	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_141777	; code used at 8000
		JSR		sub_141924	; code used at 8000
		JSR		sub_141791	; code used at 8000
		JSR		sub_141831	; code used at 8000
		BCC		loc_141784	; code used at 8000
		JMP		sub_1417A5	; code used at 8000
loc_14175C:				; CODE XREF: _bD_sE+6C-j
		JSR		sub_141924	; code used at 8000
		JSR		sub_1417A5	; code used at 8000
		JSR		sub_141831	; code used at 8000
		BCC		loc_141784	; code used at 8000
		JMP		sub_141791	; code used at 8000
loc_14176A:				; CODE XREF: _bD_sE+68-j
		JSR		sub_141924	; code used at 8000
		JSR		sub_14179B	; code used at 8000
		JSR		sub_141831	; code used at 8000
		BCC		loc_141784	; code used at 8000
		BCS		sub_1417AF	; code used at 8000
loc_141777:				; CODE XREF: _bD_sE+70-j
		JSR		sub_141924	; code used at 8000
		JSR		sub_1417AF	; code used at 8000
		JSR		sub_141831	; code used at 8000
		BCC		loc_141784	; code used at 8000
		BCS		sub_14179B	; code used at 8000
loc_141784:				; CODE XREF: _bD_sE+7B-j _bD_sE+89-j
					; _bD_sE+97-j _bD_sE+A4-j
		LDA		byte_7F		; code used at 8000
		BEQ		locret_141790	; code used at 8000
		LDY		#3		; code used at 8000
		LDA		#$40       ; code used at 8000
		ORA		(word_72),Y	; code used at 8000
		STA		(word_72),Y	; code used at 8000
locret_141790:				; CODE XREF: _bD_sE+AA-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141791:				; CODE XREF: _bD_sE+75-p _bD_sE+8B-j
		LDY		#0		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		#1		; code used at 8000
		STA		(word_72),Y	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_14179B:				; CODE XREF: _bD_sE+91-p _bD_sE+A6-j
		LDY		#1		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		#1		; code used at 8000
		STA		(word_72),Y	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1417A5:				; CODE XREF: _bD_sE+7D-j _bD_sE+83-p
		LDY		#0		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		CLC				; code used at 8000
		ADC		#1		; code used at 8000
		STA		(word_72),Y	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1417AF:				; CODE XREF: _bD_sE+99-j _bD_sE+9E-p
		LDY		#1		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		CLC				; code used at 8000
		ADC		#1		; code used at 8000
		STA		(word_72),Y	; code used at 8000
locret_1417B8:				; CODE XREF: sub_1417B9+3-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1417B9:
		JSR		sub_141831
		BCS		locret_1417B8
		LDA		byte_87
		BEQ		loc_1417C9
		LDA		byte_644
		AND		#1
		BNE		loc_1417DB
loc_1417C9:				; CODE XREF: sub_1417B9+7-j
					; sub_1417CB+7-j sub_1417CB+E-j
		CLC
locret_1417CA:				; CODE XREF: sub_1417CB+3-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1417CB:
		JSR		sub_141831
		BCS		locret_1417CA
		LDA		byte_87
		BEQ		loc_1417C9
		LDA		byte_644
		AND		#1
		BNE		loc_1417C9
loc_1417DB:				; CODE XREF: sub_1417B9+E-j
					; sub_141810+14-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1417DD:				; CODE XREF: sub_1416B7+22-p
		JSR		sub_1743B8	; code used at 8000
		LDX		byte_87		; code used at 8000
		BEQ		locret_141801	; code used at 8000
		PHA				; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_1777CD	; code used at 8000
		PLA				; code used at 8000
		BCS		locret_141801	; code used at 8000
		AND		#$FE       ; code used at 8000
		STA		word_4		; code used at 8000
loc_1417F8:				; code used at 8000
		LDA		byte_644
		AND		#1		; code used at 8000
		EOR		#1		; code used at 8000
		ORA		word_4		; code used at 8000
locret_141801:				; CODE XREF: sub_1417DD+5-j
					; sub_1417DD+15-j sub_141802+3-j
					; sub_141810+3-j sub_141810+C-j
					; sub_141828+3-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141802:
		JSR		sub_141831
		BCS		locret_141801
		LDY		#1
loc_141809:				; CODE XREF: sub_141828:loc_14182F-j
		LDA		(word_72),Y
		AND		#7
		CMP		#7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141810:
		JSR		sub_141831
		BCS		locret_141801
		LDY		#0
		BEQ		loc_141820
		JSR		sub_141831
		BCS		locret_141801
		LDY		#1
loc_141820:				; CODE XREF: sub_141810+7-j
		LDA		(word_72),Y
		AND		#7
		BEQ		loc_1417DB
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141828:
		JSR		sub_141831
		BCS		locret_141801
		LDY		#0
		BEQ		loc_141809

; =============== S U B	R O U T	I N E =======================================
sub_141831:				; CODE XREF: _bD_sE+78-p _bD_sE+86-p
					; _bD_sE+94-p _bD_sE+A1-p sub_1417B9-p
					; sub_1417CB-p sub_141802-p sub_141810-p
					; sub_141810+9-p sub_141828-p
		JSR		sub_141935	; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$E0       ; code used at 8000
		STA		byte_78		; code used at 8000
		JSR		sub_141878	; code used at 8000
		BCS		locret_141861	; code used at 8000
		JSR		sub_141884	; code used at 8000
		BCS		locret_141861	; code used at 8000
		JSR		sub_1418BB	; code used at 8000
		BCS		locret_141861	; code used at 8000
		JSR		sub_1418C7	; code used at 8000
		BCS		locret_141861	; code used at 8000
		JSR		sub_1418D5	; code used at 8000
		BCS		locret_141861	; code used at 8000
		JSR		sub_141862	; code used at 8000
		BCS		locret_141861	; code used at 8000
		JSR		sub_1418F4	; code used at 8000
		BCS		locret_141861	; code used at 8000
		JSR		sub_1418FE	; code used at 8000
locret_141861:				; CODE XREF: sub_141831+D-j
					; sub_141831+12-j sub_141831+17-j
					; sub_141831+1C-j sub_141831+21-j
					; sub_141831+26-j sub_141831+2B-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141862:				; CODE XREF: sub_141831+23-p
		LDA		word_7C		; code used at 8000
		AND		#$1F		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used at 8000
		CMP		#7		; code used at 8000
		BEQ		loc_141876	; code used at 8000
		CMP		#8		; code used at 8000
		BEQ		loc_141876	; code used at 8000
loc_141874:				; CODE XREF: _bD_s3+4-j
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_141876:				; CODE XREF: sub_141862+C-j
					; sub_141862+10-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141878:				; CODE XREF: sub_141831+A-p
		LDA		word_7C		; code used at 8000
		AND		#$1F		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s3:					; CODE XREF: sub_175853+3E-P
					; DATA XREF: BANKD:8006-o
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		BPL		loc_141874	; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141884:				; CODE XREF: sub_141831+F-p
		JSR		sub_141935	; code used at 8000
		STX		word_4		; code used at 8000
		STY		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_74		; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_75		; code used at 8000
		LDY		#0		; code used at 8000
loc_141895:				; CODE XREF: sub_141884+1F-j
		LDA		(byte_74),Y	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_1418A6	; code used at 8000
		CMP		word_4		; code used at 8000
		BEQ		loc_1418A8	; code used at 8000
		INY				; code used at 8000
loc_1418A0:				; CODE XREF: sub_141884+29-j
					; sub_141884+32-j
		INY				; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		JMP		loc_141895	; code used at 8000
loc_1418A6:				; CODE XREF: sub_141884+15-j
					; sub_1418C7+A-j
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_1418A8:				; CODE XREF: sub_141884+19-j
		INY				; code used at 8000
		LDA		(byte_74),Y	; code used at 8000
		CMP		word_4+1	; code used at 8000
		BNE		loc_1418A0	; code used at 8000
		DEY				; code used at 8000
		TYA				; code used at 8000
		INY				; code used at 8000
		CMP		word_72		; code used at 8000
		BNE		loc_1418B9	; code used at 8000
		JMP		loc_1418A0	; code used at 8000
loc_1418B9:				; CODE XREF: sub_141884+30-j
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1418BB:				; CODE XREF: sub_141831+14-p
		JSR		sub_141935	; code used at 8000
		TXA				; code used at 8000
		CMP		byte_88		; code used at 8000
		BCS		locret_1418C6	; code used at 8000
		TYA				; code used at 8000
		CMP		byte_89		; code used at 8000
locret_1418C6:				; CODE XREF: sub_1418BB+6-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1418C7:				; CODE XREF: sub_141831+19-p
		LDA		word_7C		; code used at 8000
		AND		#$E0       ; code used at 8000
		CMP		byte_78		; code used at 8000
		BNE		loc_1418D3	; code used at 8000
		CMP		byte_8C		; code used at 8000
		BEQ		loc_1418A6	; code used at 8000
loc_1418D3:				; CODE XREF: sub_1418C7+6-j
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1418D5:				; CODE XREF: sub_141831+1E-p
		LDA		byte_8E		; code used as ind data	at 8000
		BPL		loc_1418F2	; code used at 8000
		JSR		sub_141935	; code used at 8000
		TXA				; code used at 8000
		SEC				; code used at 8000
		SBC		byte_30		; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		word_4		; code used at 8000
		TYA				; code used at 8000
		SEC				; code used at 8000
		SBC		byte_31		; code used at 8000
		CLC				; code used at 8000
		ADC		#7		; code used at 8000
		STA		word_4+1	; code used at 8000
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		RTS				; code used at 8000
loc_1418F2:				; CODE XREF: sub_1418D5+2-j
					; sub_1418F4+2-j sub_1418FE+2-j
					; sub_1418FE+F-j sub_1418FE+1A-j
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1418F4:				; CODE XREF: sub_141831+28-p
		LDA		byte_79		; code used at 8000
		BEQ		loc_1418F2	; code used at 8000
		JSR		sub_141935
		JMP		sub_1777C2

; =============== S U B	R O U T	I N E =======================================
sub_1418FE:				; CODE XREF: sub_141831+2D-p
		LDA		byte_87		; code used at 8000
		BEQ		loc_1418F2	; code used at 8000
		LDA		byte_644	; code used at 8000
		CMP		#3		; code used at 8000
		BEQ		loc_14190F	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_14191C	; code used at 8000
		BNE		loc_1418F2	; code used at 8000
loc_14190F:				; CODE XREF: sub_1418FE+9-j
		LDA		byte_30		; code used at 8000
		SEC				; code used at 8000
		SBC		#8		; code used at 8000
loc_141914:				; CODE XREF: sub_1418FE+23-j
		LDY		#0		; code used at 8000
		CMP		(word_72),Y	; code used at 8000
		BNE		loc_1418F2	; code used at 8000
		SEC
		RTS
loc_14191C:				; CODE XREF: sub_1418FE+D-j
		LDA		byte_30		; code used at 8000
		CLC				; code used at 8000
		ADC		#7		; code used at 8000
		JMP		loc_141914	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141924:				; CODE XREF: _bD_sE+72-p
					; _bD_sE:loc_14175C-p
					; _bD_sE:loc_14176A-p
					; _bD_sE:loc_141777-p
		LDA		#0		; code used at 8000
		STA		byte_79		; code used at 8000
		JSR		sub_141935	; code used at 8000
		JSR		sub_1777C2	; code used at 8000
		BCS		locret_141934	; code used at 8000
		LDA		#$FF
		STA		byte_79
locret_141934:				; CODE XREF: sub_141924+A-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141935:				; CODE XREF: sub_141831-p sub_141884-p
					; sub_1418BB-p sub_1418D5+4-p
					; sub_1418F4+4-p sub_141924+4-p
		LDY		#0		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		TAY				; code used at 8000
locret_14193E:				; CODE XREF: sub_14193F+4-j
					; sub_14193F+A-j sub_14193F+E-j
					; sub_14193F+1A-j sub_14193F+20-j
					; sub_14193F+30-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_14193F:				; CODE XREF: _bD_s2+6-p
		LDA		byte_90		; code used at 8000
		AND		#$3F       ; code used at 8000
		BNE		locret_14193E	; code used at 8000
		LDA		byte_2F		; code used at 8000
		AND		#2		; code used at 8000
		BNE		locret_14193E	; code used at 8000
		LDA		byte_8F		; code used at 8000
		BNE		locret_14193E	; code used at 8000
		LDX		byte_9B		; code used at 8000
		LDY		byte_9C		; code used at 8000
		CPX		byte_2A		; code used at 8000
		BNE		loc_14195B	; code used at 8000
		CPY		byte_2B
		BEQ		locret_14193E
loc_14195B:				; CODE XREF: sub_14193F+16-j
		LDA		byte_97		; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		locret_14193E	; code used at 8000
		STX		byte_80		; code used at 8000
		STY		byte_81		; code used at 8000
		JSR		sub_1777B7	; code used at 8000
		PHP				; code used at 8000
		PLA				; code used at 8000
		STA		word_3C+1	; code used at 8000
		JSR		sub_141A92	; code used at 8000
		BCS		locret_14193E	; code used at 8000
		JSR		sub_1743B8	; code used at 8000
		AND		#7		; code used at 8000
		BEQ		loc_14197D	; code used at 8000
		LDA		byte_9D		; code used at 8000
		JMP		loc_141995	; code used at 8000
loc_14197D:				; CODE XREF: sub_14193F+37-j
		JSR		sub_1743B8	; code used at 8000
		AND		#3		; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		byte_9D		; code used at 8000
		AND		#3		; code used at 8000
		EOR		word_3E		; code used at 8000
		CMP		#2		; code used at 8000
		BNE		loc_141993	; code used at 8000
		LDA		byte_9D		; code used at 8000
		JMP		loc_141995	; code used at 8000
loc_141993:				; CODE XREF: sub_14193F+4D-j
		LDA		word_3E		; code used at 8000
loc_141995:				; CODE XREF: sub_14193F+3B-j
					; sub_14193F+51-j
		AND		#3		; code used at 8000
		PHA				; code used at 8000
		BEQ		loc_1419B0	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_1419BE	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_1419CC	; code used at 8000
		DEC		byte_80		; code used at 8000
		JSR		sub_1419FB	; code used at 8000
		BCS		loc_1419E8	; code used at 8000
		LDA		byte_80		; code used at 8000
		STA		byte_9B		; code used at 8000
		JMP		loc_1419D7	; code used at 8000
loc_1419B0:				; CODE XREF: sub_14193F+59-j
		DEC		byte_81		; code used at 8000
		JSR		sub_1419FB	; code used at 8000
		BCS		loc_1419E8	; code used at 8000
		LDA		byte_81		; code used at 8000
		STA		byte_9C		; code used at 8000
		JMP		loc_1419D7	; code used at 8000
loc_1419BE:				; CODE XREF: sub_14193F+5D-j
		INC		byte_80		; code used at 8000
		JSR		sub_1419FB	; code used at 8000
		BCS		loc_1419E8	; code used at 8000
		LDA		byte_80		; code used at 8000
		STA		byte_9B		; code used at 8000
		JMP		loc_1419D7	; code used at 8000
loc_1419CC:				; CODE XREF: sub_14193F+61-j
		INC		byte_81		; code used at 8000
		JSR		sub_1419FB	; code used at 8000
		BCS		loc_1419E8	; code used at 8000
		LDA		byte_81		; code used at 8000
		STA		byte_9C		; code used at 8000
loc_1419D7:				; CODE XREF: sub_14193F+6E-j
					; sub_14193F+7C-j sub_14193F+8A-j
		LDX		byte_9B		; code used at 8000
		LDY		byte_9C		; code used at 8000
		JSR		sub_1777B7	; code used at 8000
		BCC		loc_1419E8	; code used at 8000
		LDA		byte_9D
		ORA		#8
		STA		byte_9D
		BNE		loc_1419EF
loc_1419E8:				; CODE XREF: sub_14193F+68-j
					; sub_14193F+76-j sub_14193F+84-j
					; sub_14193F+92-j sub_14193F+9F-j
		PLA				; code used at 8000
		JSR		sub_1743B8	; code used at 8000
		AND		#3		; code used at 8000
		PHA				; code used at 8000
loc_1419EF:				; CODE XREF: sub_14193F+A7-j
		LDA		byte_9D		; code used at 8000
		AND		#$FC       ; code used at 8000
		STA		byte_9D		; code used at 8000
		PLA				; code used at 8000
		ORA		byte_9D		; code used at 8000
		STA		byte_9D		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1419FB:				; CODE XREF: sub_14193F+65-p
					; sub_14193F+73-p sub_14193F+81-p
					; sub_14193F+8F-p
		LDA		byte_87		; code used at 8000
		BEQ		loc_141A50	; code used at 8000
		LDA		byte_644	; code used at 8000
		BEQ		loc_141A2E	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_141A1D	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_141A3F	; code used at 8000
		LDA		byte_2A		; code used at 8000
		SEC				; code used at 8000
		SBC		#8		; code used at 8000
		TAX				; code used at 8000
		CMP		byte_9B		; code used at 8000
		BEQ		loc_141A4E	; code used at 8000
		INX				; code used at 8000
		CPX		byte_9B		; code used at 8000
		BNE		loc_141A50	; code used at 8000
		SEC
		RTS
loc_141A1D:				; CODE XREF: sub_1419FB+B-j
		LDA		byte_2A		; code used at 8000
		CLC				; code used at 8000
		ADC		#6		; code used at 8000
		TAX				; code used at 8000
		CMP		byte_9B		; code used at 8000
		BEQ		loc_141A4E	; code used at 8000
		INX				; code used at 8000
		CPX		byte_9B		; code used at 8000
		BNE		loc_141A50	; code used at 8000
		SEC
		RTS
loc_141A2E:				; CODE XREF: sub_1419FB+7-j
		LDA		byte_2B		; code used at 8000
		SEC				; code used at 8000
		SBC		#7		; code used at 8000
		TAX				; code used at 8000
		CMP		byte_9C		; code used at 8000
		BEQ		loc_141A4E	; code used at 8000
		INX				; code used at 8000
		CPX		byte_9C		; code used at 8000
		BNE		loc_141A50	; code used at 8000
		SEC
		RTS
loc_141A3F:				; CODE XREF: sub_1419FB+F-j
		LDA		byte_2B		; code used at 8000
		CLC				; code used at 8000
		ADC		#6		; code used at 8000
		TAX				; code used at 8000
		CMP		byte_9C		; code used at 8000
		BEQ		loc_141A4E	; code used at 8000
		INX				; code used at 8000
		CPX		byte_9C		; code used at 8000
		BNE		loc_141A50	; code used at 8000
loc_141A4E:				; CODE XREF: sub_1419FB+19-j
					; sub_1419FB+2A-j sub_1419FB+3B-j
					; sub_1419FB+4C-j sub_1419FB+64-j
					; sub_1419FB+6C-j sub_1419FB+77-j
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_141A50:				; CODE XREF: sub_1419FB+2-j
					; sub_1419FB+1E-j sub_1419FB+2F-j
					; sub_1419FB+40-j sub_1419FB+51-j
		JSR		sub_141A92	; code used at 8000
		BCS		locret_141A91	; code used at 8000
		LDX		byte_80		; code used at 8000
		LDY		byte_81		; code used at 8000
		CPX		byte_2A		; code used at 8000
		BNE		loc_141A61	; code used at 8000
		CPY		byte_2B
		BEQ		loc_141A4E
loc_141A61:				; CODE XREF: sub_1419FB+60-j
		CPX		byte_2D		; code used at 8000
		BNE		loc_141A69	; code used at 8000
		CPY		byte_2E
		BEQ		loc_141A4E
loc_141A69:				; CODE XREF: sub_1419FB+68-j
		JSR		sub_1777B7	; code used at 8000
		PHP				; code used at 8000
		PLA				; code used at 8000
		EOR		word_3C+1	; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_141A4E	; code used at 8000
		LDA		byte_80		; code used at 8000
		SEC				; code used at 8000
		SBC		#$10		; code used at 8000
		CMP		#$DF       ; code used at 8000
		BCS		locret_141A91	; code used at 8000
		LDA		byte_81		; code used at 8000
		SEC				; code used at 8000
		SBC		#$F		; code used at 8000
		CMP		#$E1       ; code used at 8000
		BCS		locret_141A91	; code used at 8000
		LDX		byte_80		; code used at 8000
		LDY		byte_81		; code used at 8000
		JSR		sub_176CA4	; code used at 8000
		LDA		word_7C		; code used at 8000
		CMP		#1		; code used at 8000
locret_141A91:				; CODE XREF: sub_1419FB+58-j
					; sub_1419FB+80-j sub_1419FB+89-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141A92:				; CODE XREF: sub_14193F+2D-p
					; sub_1419FB:loc_141A50-p
		LDA		byte_8E		; code used at 8000
		BPL		loc_141AAE	; code used at 8000
		LDA		byte_80		; code used at 8000
		SEC				; code used at 8000
		SBC		byte_2A		; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_81		; code used at 8000
		SEC				; code used at 8000
		SBC		byte_2B		; code used at 8000
		CLC				; code used at 8000
		ADC		#7		; code used at 8000
		STA		word_4+1	; code used at 8000
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		RTS				; code used at 8000
loc_141AAE:				; CODE XREF: sub_141A92+2-j
		CLC				; code used at 8000
locret_141AAF:				; CODE XREF: sub_141AB0+4-j
					; sub_141AB0+A-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141AB0:				; CODE XREF: _bD_s6+6-j
		LDA		byte_2F		; code used as ind data	at 8000
		AND		#2		; code used as ind data	at 8000
		BNE		locret_141AAF	; code used as ind data	at 8000
		LDA		byte_9D		; code used as ind data	at 8000
		AND		#8		; code used as ind data	at 8000
		BEQ		locret_141AAF	; code used as ind data	at 8000
		LDX		byte_9B
		LDY		byte_9C
		LDA		byte_9D
		AND		#3
		BEQ		loc_141AD2
		CMP		#1
		BEQ		loc_141AD6
		CMP		#2
		BEQ		loc_141ADA
		INX
		JMP		loc_141ADB
loc_141AD2:				; CODE XREF: sub_141AB0+14-j
		INY
		JMP		loc_141ADB
loc_141AD6:				; CODE XREF: sub_141AB0+18-j
		DEX
		JMP		loc_141ADB
loc_141ADA:				; CODE XREF: sub_141AB0+1C-j
		DEY
loc_141ADB:				; CODE XREF: sub_141AB0+1F-j
					; sub_141AB0+23-j sub_141AB0+27-j
		JSR		sub_1777B7
		BCS		loc_141AE7
		LDA		byte_9D
		AND		#7
		STA		byte_9D
		RTS
loc_141AE7:				; CODE XREF: sub_141AB0+2E-j
		LDA		byte_9D
		CLC
		ADC		#$10
		STA		byte_9D
		LDA		#$14
		STA		byte_8
		JSR		sub_141B0B
		JSR		sub_141B0B
		JSR		sub_141B0B
		JSR		sub_141B0B
		LDA		byte_9D
		AND		#$F0 
		BNE		locret_141B0A
		LDA		byte_9D
		AND		#$F7 
		STA		byte_9D
locret_141B0A:				; CODE XREF: sub_141AB0+52-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141B0B:				; CODE XREF: sub_141AB0+42-p
					; sub_141AB0+45-p sub_141AB0+48-p
					; sub_141AB0+4B-p
		LDA		byte_9D
		PHA
		LDY		byte_8
		JMP		loc_141C8B

; =============== S U B	R O U T	I N E =======================================
_bD_s6:					; CODE XREF: sub_174D56+1B-P
					; DATA XREF: BANKD:800C-o
		LDA		byte_2F		; code used as ind data	at 8000
		AND		#1		; code used as ind data	at 8000
		BNE		loc_141B1C	; code used as ind data	at 8000
		JMP		sub_141AB0	; code used as ind data	at 8000
loc_141B1C:				; CODE XREF: _bD_s6+4-j
		LDA		byte_6E1	; code used at 8000
		BEQ		loc_141B3A	; code used as ind data	at 8000
		LDA		#1		; code used at 8000
		STA		word_72+1	; code used at 8000
		LDX		#0		; code used at 8000
loc_141B27:				; CODE XREF: _bD_s6+24-j
		LDA		byte_6E4,X	; code used at 8000
		STA		word_72		; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		sub_141B45	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
		CPX		byte_6E3	; code used at 8000
		BNE		loc_141B27	; code used at 8000
		RTS				; code used at 8000
loc_141B3A:				; CODE XREF: _bD_s6+C-j
		LDA		#1		; code used as ind data	at 8000
		STA		word_72+1	; code used at 8000
		LDA		byte_91		; code used as ind data	at 8000
		STA		word_72		; code used as ind data	at 8000
		JSR		sub_141B45	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141B45:				; CODE XREF: _bD_s6+1B-p
		JSR		sub_141B50	; code used as ind data	at 8000
loc_141B48:				; CODE XREF: _bD_s2+58-j
		LDA		word_72		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#4		; code used as ind data	at 8000
		STA		word_72		; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141B50:				; CODE XREF: sub_141B45-p
		LDY		#3		; code used as ind data	at 8000
		LDA		(word_72),Y	; code used as ind data	at 8000
		BPL		loc_141B5E	; code used as ind data	at 8000
		LDA		byte_6AE6	; code used at 8000
		BMI		loc_141B5C	; code used as ind data	at 8000
locret_141B5B:				; CODE XREF: sub_141B50+10-j
		RTS				; code used as ind data	at 8000
loc_141B5C:				; CODE XREF: sub_141B50+9-j
		LDA		(word_72),Y	; code used at 8000
loc_141B5E:				; CODE XREF: sub_141B50+4-j
		AND		#$40       ; code used at 8000
		BEQ		locret_141B5B	; code used as ind data	at 8000
		LDA		byte_6E1	; code used at 8000
		CMP		#$31       ; code used at 8000
		BNE		loc_141B6D	; code used at 8000
		LDA		#2		; code used at 8000
		BNE		loc_141B73	; code used at 8000
loc_141B6D:				; CODE XREF: sub_141B50+17-j
		LDY		#3		; code used as ind data	at 8000
		LDA		(word_72),Y	; code used at 8000
		AND		#3		; code used as ind data	at 8000
loc_141B73:				; CODE XREF: sub_141B50+1B-j
		PHA				; code used at 8000
		LDY		#0		; code used as ind data	at 8000
		LDA		(word_72),Y	; code used at 8000
		TAX				; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		LDA		(word_72),Y	; code used at 8000
		TAY				; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		BEQ		loc_141B90	; code used as ind data	at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_141B8C	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_141B94	; code used at 8000
		INX				; code used at 8000
		JMP		loc_141B95	; code used at 8000
loc_141B8C:				; CODE XREF: sub_141B50+32-j
		DEX				; code used at 8000
		JMP		loc_141B95	; code used at 8000
loc_141B90:				; CODE XREF: sub_141B50+2E-j
		INY				; code used at 8000
		JMP		loc_141B95	; code used at 8000
loc_141B94:				; CODE XREF: sub_141B50+36-j
		DEY				; code used as ind data	at 8000
loc_141B95:				; CODE XREF: sub_141B50+39-j
					; sub_141B50+3D-j sub_141B50+41-j
		JSR		sub_1777C2	; code used at 8000
		BCS		loc_141BA3	; code used as ind data	at 8000
		LDY		#3		; code used at 8000
		LDA		#$BF       ; code used at 8000
		AND		(word_72),Y	; code used at 8000
		STA		(word_72),Y	; code used at 8000
locret_141BA2:				; CODE XREF: sub_141B50+79-j
		RTS				; code used as ind data	at 8000
loc_141BA3:				; CODE XREF: sub_141B50+48-j
		LDY		#2		; code used as ind data	at 8000
		LDA		(word_72),Y	; code used at 8000
		CLC				; code used at 8000
		ADC		#$10		; code used as ind data	at 8000
		STA		(word_72),Y	; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		byte_8		; code used at 8000
		STA		byte_9		; code used as ind data	at 8000
		JSR		sub_141C7E	; code used as ind data	at 8000
		JSR		sub_141C7E	; code used as ind data	at 8000
		JSR		sub_141C7E	; code used as ind data	at 8000
		JSR		sub_141C7E	; code used at 8000
		LDY		#2		; code used as ind data	at 8000
		LDA		(word_72),Y	; code used at 8000
		AND		#$F0       ; code used as ind data at 8000
		BEQ		loc_141BCE	; code used at 8000
		LDA		byte_6AE6	; code used at 8000
		BPL		locret_141BA2	; code used as ind data	at 8000
		JMP		_vblank		; code used at 8000
loc_141BCE:				; CODE XREF: sub_141B50+74-j
		INY				; code used at 8000
		LDA		#$BF       ; code used at 8000
		AND		(word_72),Y	; code used at 8000
		STA		(word_72),Y	; code used at 8000
		LDX		byte_9		; code used at 8000
		BNE		sub_141C10	; code used at 8000
		LDX		byte_6AE6	; code used at 8000
		BPL		locret_141C0F	; code used at 8000
		PHA				; code used at 8000
		LDA		byte_6AE6	; code used at 8000
		AND		#$7F       ; code used at 8000
		STA		byte_6AE6	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_72),Y	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_176F34	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		word_7C		; code used at 8000
		AND		#$1F		; code used at 8000
		CMP		#$1C		; code used at 8000
		BNE		sub_141C1C	; code used at 8000
		LDY		#0
		LDA		#$FE 
		STA		(word_72),Y
		INY
		STA		(word_72),Y
		INY
		INY
		LDA		(word_72),Y
		AND		#$3C 
		BRK
		.BYTE $9B, 7		; ofs 0x00128012, -> dst _bC_s9
locret_141C0F:				; CODE XREF: sub_141B50+8C-j
					; sub_141C1C+4-j sub_141C1C+B-j
					; sub_141C1C+10-j sub_141C1C+15-j
					; sub_141C1C+24-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141C10:				; CODE XREF: sub_141B50+87-j
		TAX				; code used at 8000
		AND		#$C3       ; code used at 8000
		STA		(word_72),Y	; code used at 8000
		TXA				; code used at 8000
		AND		#$3C       ; code used at 8000
		BRK
		.BYTE $99, 7		; ofs 0x00080006, -> dst _b5_s3
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141C1C:				; CODE XREF: sub_141B50+AB-j
		LDA		byte_8B		; code used at 8000
		CMP		#$4E       ; code used at 8000
		BNE		locret_141C0F	; code used at 8000
		LDA		#5
		CMP		byte_111
		BNE		locret_141C0F
		CMP		byte_115
		BNE		locret_141C0F
		CMP		byte_119
		BNE		locret_141C0F
		LDA		byte_110
		CLC
		ADC		byte_114
		CLC
		ADC		byte_118
		CMP		#$F
		BNE		locret_141C0F
		LDX		byte_30
		STX		word_3C
loc_141C46:				; CODE XREF: sub_141C1C+37-j
		LDY		byte_31
		INC		word_3C
		LDX		word_3C
		JSR		sub_176F34
		AND		#$1F
		CMP		#8
		BEQ		loc_141C46
		LDA		word_3C
		SEC
		SBC		byte_30
		CLC
		ADC		#8
		ASL
		STA		word_4
		LDA		#$E
		STA		word_4+1
		LDA		#8
		STA		byte_7485
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4+1
		DEC		word_4+1
		LDA		#$1B
		STA		byte_7470
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		BRK
		.BYTE $95, $2F		; _syscall12
		JMP		sub_1742BA

; =============== S U B	R O U T	I N E =======================================
sub_141C7E:				; CODE XREF: sub_141B50+62-p
					; sub_141B50+65-p sub_141B50+68-p
					; sub_141B50+6B-p
		LDY		#3		; code used as ind data	at 8000
		LDA		(word_72),Y	; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		AND		#$3C       ; code used as ind data at 8000
		BEQ		loc_141C9F	; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		byte_8		; code used as ind data	at 8000
		TAY				; code used as ind data	at 8000
loc_141C8B:				; CODE XREF: sub_141B0B+5-j
		LDX		#4		; code used at 8000
		JSR		sub_1741FD	; code used as ind data	at 8000
		LDA		word_6		; code used as ind data	at 8000
		CMP		#$F8       ; code used as ind data at 8000
		BNE		loc_141CA1	; code used as ind data	at 8000
		PLA				; code used at 8000
		LDX		_tmp21		; code used at 8000
		JSR		sub_141D22	; code used at 8000
		INC		byte_8		; code used at 8000
		RTS				; code used at 8000
loc_141C9F:				; CODE XREF: sub_141C7E+7-j
		PLA
		RTS
loc_141CA1:				; CODE XREF: sub_141C7E+16-j
		LDA		byte_6E1	; code used as ind data	at 8000
		CMP		#$31       ; code used as ind data at 8000
		BNE		loc_141CAC	; code used as ind data	at 8000
		PLA				; code used at 8000
		JMP		loc_141CE3	; code used at 8000
loc_141CAC:				; CODE XREF: sub_141C7E+28-j
		PLA				; code used as ind data	at 8000
		AND		#3		; code used as ind data	at 8000
		BEQ		loc_141CCB	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_141CC4	; code used as ind data	at 8000
		CMP		#2		; code used as ind data	at 8000
		BEQ		loc_141CE3	; code used as ind data	at 8000
		DEC		word_6+1	; code used at 8000
		LDA		word_6+1	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_141CF9	; code used at 8000
		JMP		sub_141D09	; code used at 8000
loc_141CC4:				; CODE XREF: sub_141C7E+35-j
		INC		word_6+1	; code used at 8000
		BEQ		loc_141CF9	; code used as ind data	at 8000
		JMP		sub_141D09	; code used at 8000
loc_141CCB:				; CODE XREF: sub_141C7E+31-j
		DEC		word_4		; code used as ind data	at 8000
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_141CDB	; code used at 8000
		LDA		word_4
		CMP		#$F7 
		BEQ		loc_141CF9
		BNE		sub_141D09
loc_141CDB:				; CODE XREF: sub_141C7E+53-j
		LDA		word_4		; code used as ind data	at 8000
		CMP		#$F3       ; code used at 8000
		BEQ		loc_141CF9	; code used at 8000
		BNE		sub_141D09	; code used as ind data	at 8000
loc_141CE3:				; CODE XREF: sub_141C7E+2B-j
					; sub_141C7E+39-j
		INC		word_4		; code used as ind data	at 8000
		LDA		byte_2F		; code used as ind data	at 8000
		AND		#1		; code used at 8000
		BNE		loc_141CF3	; code used at 8000
		LDA		word_4
		CMP		#$EF 
		BEQ		loc_141CF9
		BNE		sub_141D09
loc_141CF3:				; CODE XREF: sub_141C7E+6B-j
		LDA		word_4		; code used at 8000
		CMP		#$EB       ; code used at 8000
		BNE		sub_141D09	; code used as ind data	at 8000
loc_141CF9:				; CODE XREF: sub_141C7E+41-j
					; sub_141C7E+48-j sub_141C7E+59-j
					; sub_141C7E+61-j sub_141C7E+71-j
		LDA		#$F8       ; code used at 8000
		STA		word_4		; code used at 8000
		STA		word_4+1	; code used at 8000
		STA		word_6		; code used at 8000
		STA		word_6+1	; code used at 8000
		JSR		sub_141D09	; code used at 8000
		JMP		sub_141D22	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141D09:				; CODE XREF: sub_141C7E+43-j
					; sub_141C7E+4A-j sub_141C7E+5B-j
					; sub_141C7E+63-j sub_141C7E+73-j
					; sub_141C7E+79-j sub_141C7E+85-p
		LDX		_tmp21		; code used as ind data	at 8000
		LDA		word_4		; code used at 8000
		STA		_spr_ram,X	; code used as ind data	at 8000
		LDA		word_4+1	; code used as ind data	at 8000
		STA		_spr_ram+1,X	; code used as ind data	at 8000
		LDA		word_6		; code used as ind data	at 8000
		STA		_spr_ram+2,X	; code used as ind data	at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		STA		_spr_ram+3,X	; code used as ind data	at 8000
		INC		byte_8		; code used as ind data	at 8000
locret_141D21:				; CODE XREF: sub_141D22+4-j
					; sub_141D22+26-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141D22:				; CODE XREF: sub_141C7E+1B-p
					; sub_141C7E+88-j
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BEQ		locret_141D21	; code used at 8000
		TXA				; code used at 8000
		AND		#$F0       ; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		LDA		_spr_ram,X	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		AND		_spr_ram,X	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		AND		_spr_ram,X	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		AND		_spr_ram,X	; code used at 8000
		CMP		#$F8       ; code used at 8000
		BNE		locret_141D21	; code used at 8000
		LDA		#$FF		; code used at 8000
		STA		byte_9		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_sD:					; CODE XREF: _b5_s9+44-P sub_128BCC+15-P
					; sub_12B518+70-P sub_142504+56-P
					; sub_175516+31-P
					; DATA XREF: BANKD:801A-o
		LDA		#0		; code used at 8000
		STA		byte_176	; code used at 8000
		STA		byte_177	; code used at 8000
		STA		byte_178	; code used at 8000
		STA		byte_179	; code used at 8000
		STA		byte_17A	; code used at 8000
		LDX		#0		; code used at 8000
		LDA		#$F8       ; code used at 8000
loc_141D64:				; CODE XREF: _bD_sD+1B-j
		STA		byte_180,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#$40       ; code used as ind data at 8000
		BNE		loc_141D64	; code used as ind data	at 8000
		LDA		#$10		; code used at 8000
		STA		word_6C		; code used at 8000
		LDA		#1		; code used at 8000
		STA		word_6C+1	; code used at 8000
loc_141D74:				; CODE XREF: _bD_sD+6D-j
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		locret_141DBF	; code used at 8000
		STA		byte_80		; code used at 8000
		TAX				; code used as ind data	at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		STA		byte_81		; code used at 8000
		TAY				; code used as ind data	at 8000
		JSR		sub_1777C2	; code used at 8000
		BCC		loc_141DB9	; code used as ind data	at 8000
		LDX		byte_30		; code used as ind data	at 8000
		LDY		byte_31		; code used at 8000
		JSR		sub_176F34	; code used as ind data	at 8000
		AND		#$E0       ; code used at 8000
		STA		byte_79		; code used as ind data	at 8000
		LDX		byte_80		; code used at 8000
		LDY		byte_81		; code used at 8000
		JSR		sub_176F34	; code used as ind data	at 8000
		AND		#$E0       ; code used at 8000
		CMP		byte_79		; code used as ind data	at 8000
		BNE		loc_141DB9	; code used at 8000
		JSR		sub_177668	; code used at 8000
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$C3       ; code used at 8000
		ORA		byte_6BB	; code used at 8000
		STA		(word_6C),Y	; code used as ind data	at 8000
		LDA		byte_6BB	; code used at 8000
		BRK
		.BYTE $13, 7		; ofs 0x00080008, -> dst _b5_s4
		JSR		_bD_s1A		; code used at 8000
loc_141DB9:				; CODE XREF: _bD_sD+39-j _bD_sD+51-j
		JSR		sub_177289	; code used as ind data	at 8000
		JMP		loc_141D74	; code used at 8000
locret_141DBF:				; CODE XREF: _bD_sD+2B-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s9:					; CODE XREF: sub_174D56+18-P
					; DATA XREF: BANKD:8012-o
		LDA		byte_AC		; code used as ind data	at 8000
		AND		#$1F		; code used as ind data	at 8000
		BNE		locret_141DCE	; code used as ind data	at 8000
		LDA		byte_87		; code used at 8000
		BNE		loc_141DCF	; code used as ind data	at 8000
		LDA		byte_86		; code used at 8000
		BEQ		loc_141DCF	; code used at 8000
locret_141DCE:				; CODE XREF: _bD_s9+4-j	_bD_s9+11-j
					; _bD_s7+4-j
		RTS				; code used at 8000
loc_141DCF:				; CODE XREF: _bD_s9+8-j	_bD_s9+C-j
		LDA		byte_2C		; code used as ind data	at 8000
		BNE		locret_141DCE	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s7:					; CODE XREF: _bE_s22:loc_15B01F-P
					; _bE_s22+19-P _bE_s32:loc_15B05C-P
					; _bE_s26-P
					; DATA XREF: BANKD:800E-o
		LDA		byte_AC		; code used as ind data	at 8000
		AND		#$1F		; code used as ind data	at 8000
		BNE		locret_141DCE	; code used at 8000
		LDA		#1		; code used as ind data	at 8000
		STA		word_72+1	; code used at 8000
		LDA		#4		; code used as ind data	at 8000
		STA		word_72		; code used at 8000
		LDY		#4		; code used as ind data	at 8000
		LDX		#4		; code used as ind data	at 8000
		JSR		sub_1741FD	; code used as ind data	at 8000
		LDA		byte_97		; code used as ind data	at 8000
		LDX		byte_8F		; code used as ind data	at 8000
		CPX		#$12		; code used as ind data	at 8000
		BCS		loc_141DFC	; code used as ind data	at 8000
		AND		#$7F       ; code used as ind data at 8000
		CMP		#$40       ; code used as ind data at 8000
		BCC		loc_141DFC	; code used as ind data	at 8000
		JSR		sub_141E22	; code used as ind data	at 8000
		JMP		loc_141DFF	; code used as ind data	at 8000
loc_141DFC:				; CODE XREF: _bD_s7+1B-j _bD_s7+21-j
		JSR		sub_141E76	; code used at 8000
loc_141DFF:				; CODE XREF: _bD_s7+26-j
		LDX		byte_8F		; code used as ind data	at 8000
		CPX		#$22       ; code used as ind data at 8000
		BCS		loc_141E13	; code used as ind data	at 8000
		LDA		byte_97		; code used as ind data	at 8000
		AND		#$3F       ; code used as ind data at 8000
		CMP		#$20       ; code used as ind data at 8000
		BCC		loc_141E13	; code used as ind data	at 8000
		JSR		sub_141E22	; code used at 8000
		JMP		loc_141E16	; code used as ind data	at 8000
loc_141E13:				; CODE XREF: _bD_s7+30-j _bD_s7+38-j
		JSR		sub_141E76	; code used at 8000
loc_141E16:				; CODE XREF: _bD_s7+3D-j
		LDA		byte_97		; code used as ind data	at 8000
		AND		#$1F		; code used as ind data	at 8000
		CMP		#$10		; code used as ind data	at 8000
		BCC		locret_141E21	; code used at 8000
		JSR		sub_141E22	; code used as ind data	at 8000
locret_141E21:				; CODE XREF: _bD_s7+49-j sub_141E22+7-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141E22:				; CODE XREF: _bD_s7+23-p _bD_s7+3A-p
					; _bD_s7+4B-p
		LDA		word_72		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_73C,X	; code used as ind data	at 8000
		BPL		locret_141E21	; code used as ind data	at 8000
		LDX		_tmp21		; code used as ind data	at 8000
		LDY		#3		; code used as ind data	at 8000
		LDA		(word_72),Y	; code used as ind data	at 8000
		AND		#3		; code used as ind data	at 8000
		BEQ		loc_141E5B	; code used as ind data	at 8000
		CMP		#1		; code used as ind data	at 8000
		BEQ		loc_141E4C	; code used at 8000
		CMP		#2		; code used as ind data	at 8000
		BEQ		loc_141E6A	; code used as ind data	at 8000
		DEC		_spr_ram+3,X	; code used at 8000
		DEC		_spr_ram+7,X	; code used as ind data	at 8000
		DEC		_spr_ram+$B,X	; code used as ind data	at 8000
		DEC		_spr_ram+$F,X	; code used as ind data	at 8000
		JMP		sub_141E76	; code used as ind data	at 8000
loc_141E4C:				; CODE XREF: sub_141E22+15-j
		INC		_spr_ram+3,X	; code used as ind data	at 8000
		INC		_spr_ram+7,X	; code used as ind data	at 8000
		INC		_spr_ram+$B,X	; code used as ind data	at 8000
		INC		_spr_ram+$F,X	; code used as ind data	at 8000
		JMP		sub_141E76	; code used as ind data	at 8000
loc_141E5B:				; CODE XREF: sub_141E22+11-j
		DEC		_spr_ram,X	; code used at 8000
		DEC		_spr_ram+4,X	; code used as ind data	at 8000
		DEC		_spr_ram+8,X	; code used at 8000
		DEC		_spr_ram+$C,X	; code used at 8000
		JMP		sub_141E76	; code used as ind data	at 8000
loc_141E6A:				; CODE XREF: sub_141E22+19-j
		INC		_spr_ram,X	; code used as ind data	at 8000
		INC		_spr_ram+4,X	; code used as ind data	at 8000
		INC		_spr_ram+8,X	; code used as ind data	at 8000
		INC		_spr_ram+$C,X	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141E76:				; CODE XREF: _bD_s7:loc_141DFC-p
					; _bD_s7:loc_141E13-p sub_141E22+27-j
					; sub_141E22+36-j sub_141E22+45-j
		LDA		word_72		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#4		; code used as ind data	at 8000
		STA		word_72		; code used as ind data	at 8000
		LDA		_tmp21		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#$10		; code used as ind data	at 8000
		STA		_tmp21		; code used as ind data	at 8000
locret_141E84:				; CODE XREF: _bD_s4+2-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s4:					; CODE XREF: sub_1755CA+71-P
					; DATA XREF: BANKD:8008-o
		LDA		byte_2C		; code used at 8000
		BNE		locret_141E84	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s5:					; CODE XREF: _bE_s22-P _bE_s32-P
					; sub_15B08E:loc_15B09B-P
					; sub_15B08E:loc_15B0A2-P
					; sub_15B08E:loc_15B0A9-P _bE_s25+18-P
					; DATA XREF: BANKD:800A-o
		JSR		sub_141EB3	; code used at 8000
		LDA		byte_107	; code used at 8000
		AND		#$FC       ; code used at 8000
		STA		byte_107	; code used at 8000
		LDA		byte_6BC	; code used at 8000
		AND		#3		; code used at 8000
		ORA		byte_107	; code used at 8000
		STA		byte_107	; code used at 8000
		LDA		byte_95		; code used at 8000
		STA		byte_96		; code used at 8000
		LDA		byte_94		; code used at 8000
		STA		byte_95		; code used at 8000
		LDA		byte_93		; code used at 8000
		STA		byte_94		; code used at 8000
		LDA		byte_92		; code used at 8000
		STA		byte_93		; code used at 8000
		SEC				; code used at 8000
		ROR		byte_97		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141EB3:				; CODE XREF: _bD_s5-p
		LDX		#$B		; code used at 8000
		JSR		sub_141EBA	; code used at 8000
		LDX		#7		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141EBA:				; CODE XREF: sub_141EB3+2-p
		LDA		byte_104,X	; code used at 8000
		AND		#$FC       ; code used at 8000
		STA		byte_104,X	; code used at 8000
		LDA		byte_100,X	; code used at 8000
		AND		#3		; code used at 8000
		ORA		byte_104,X	; code used at 8000
		STA		byte_104,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s26:				; CODE XREF: _b0_s3C+17-P _b0_s4E-P
					; _b2_sB+347-P _bC_s1D+A-P _bC_s2B+11-P
					; sub_12B1A2:loc_12B1B2-P
					; sub_12B1A2+3F-P sub_12B2EB+13-P
					; sub_142CE7+F1-P sub_143847-p
					; _npc_hndl42+18-p sub_143AEA+9-p
					; _npc_hndl4D+C-P
					; DATA XREF: BANKD:804C-o
		LDX		#0		; code used at 8000
loc_141ED0:				; CODE XREF: _bD_s26+15-j
		LDA		byte_73C,X	; code used at 8000
		AND		byte_73D,X	; code used at 8000
		BPL		loc_141EDF	; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$40       ; code used at 8000
		BEQ		loc_141EE9	; code used at 8000
loc_141EDF:				; CODE XREF: _bD_s26+8-j
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#8		; code used at 8000
		BNE		loc_141ED0	; code used at 8000
		LDA		#0		; code used at 8000
		BEQ		loc_141EEB	; code used at 8000
loc_141EE9:				; CODE XREF: _bD_s26+F-j
		TXA				; code used at 8000
		LSR		; code used at 8000
loc_141EEB:				; CODE XREF: _bD_s26+19-j
		STA		word_4		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141EEE:				; CODE XREF: sub_1420CC+F-p
					; sub_142923+123-p
		STA		byte_C5
		LDY		#$77 
loc_141EF2:				; CODE XREF: sub_141EEE+B-j
		LDA		byte_600C,Y
		STA		byte_600D,Y
		DEY
		BNE		loc_141EF2
		LDA		byte_C5
		STA		byte_600D
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141F03:				; CODE XREF: sub_142923+283-p
		LDA		byte_600D,X
		STA		byte_C5
		INX
loc_141F09:				; CODE XREF: sub_141F03+D-j
		LDA		byte_600D,X
		STA		byte_600C,X
		INX
		BPL		loc_141F09
		LDA		#$FF
		STA		byte_608C
		LDA		byte_C5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141F1A:
		LDA		#1
		INX
loc_141F1D:				; CODE XREF: sub_141F1A+7-j
		DEX
		BEQ		locret_141F23
		ASL
		BCC		loc_141F1D
locret_141F23:				; CODE XREF: sub_141F1A+4-j
					; _bD_s12:loc_141F3B-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s12:				; CODE XREF: sub_AD31+5C-P
					; sub_142135+31-p sub_142135+119-p
					; sub_1422E1+5B-p sub_1423CC+24-p
					; sub_142923+CB-p sub_142923+1F5-p
					; sub_15881A+CC-P
					; DATA XREF: BANKD:8024-o
		LDA		#$92       ; code used at 8000
		JSR		_get_syscall0_data_byte_X ; code used at 8000
		AND		#$7F       ; code used at 8000
		STA		byte_C0		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_C1		; code used at 8000
		STA		byte_C2		; code used at 8000
		LDA		#$90       ; code used at 8000
		JSR		_get_syscall0_data_byte_X ; code used at 8000
		AND		#3		; code used at 8000
		TAX				; code used at 8000
loc_141F3B:				; CODE XREF: _bD_s12+1D-j
		BEQ		locret_141F23	; code used at 8000
		JSR		sub_141F44	; code used at 8000
		DEX				; code used at 8000
		JMP		loc_141F3B	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141F44:				; CODE XREF: _bD_s12+19-p
					; sub_142589+148-p sub_142BD2+8-p
					; sub_142BD2+B-p sub_142BD2+E-p
					; _bD_sF+13-p
		ASL		byte_C0		; code used at 8000
		ROL		byte_C1		; code used at 8000
		ROL		byte_C2		; code used at 8000
		LDA		byte_C0		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_C1		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		byte_C2		; code used at 8000
		STA		word_6		; code used at 8000
		ASL		byte_C0		; code used at 8000
		ROL		byte_C1		; code used at 8000
		ROL		byte_C2		; code used at 8000
		ASL		byte_C0		; code used at 8000
		ROL		byte_C1		; code used at 8000
		ROL		byte_C2		; code used at 8000
		CLC				; code used at 8000
		LDA		byte_C0		; code used at 8000
		ADC		word_4		; code used at 8000
		STA		byte_C0		; code used at 8000
		LDA		byte_C1		; code used at 8000
		ADC		word_4+1	; code used at 8000
		STA		byte_C1		; code used at 8000
		LDA		byte_C2		; code used at 8000
		ADC		word_6		; code used at 8000
		STA		byte_C2		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bD_s13:				; CODE XREF: sub_AD31+5F-P
					; sub_1422E1+5E-p
					; DATA XREF: BANKD:8026-o
		LDX		#2		; code used at 8000
loc_141F78:				; CODE XREF: _bD_s13+7-j
		LDA		byte_C0,X	; code used at 8000
		STA		word_4,X	; code used at 8000
		DEX				; code used at 8000
		BPL		loc_141F78	; code used at 8000
		CLC				; code used at 8000
		LDA		word_4		; code used at 8000
		ADC		#3		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		word_4+1	; code used at 8000
		ADC		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		word_6		; code used at 8000
		ADC		#0		; code used at 8000
		STA		word_6		; code used at 8000
		LDX		#2		; code used at 8000
loc_141F94:				; CODE XREF: _bD_s13+25-j
		LSR		word_6		; code used at 8000
		ROR		word_4+1	; code used at 8000
		ROR		word_4		; code used at 8000
		DEX				; code used at 8000
		BNE		loc_141F94	; code used at 8000
		SEC				; code used at 8000
		LDA		byte_C0		; code used at 8000
		SBC		word_4		; code used at 8000
		STA		byte_C0		; code used at 8000
		LDA		byte_C1		; code used at 8000
		SBC		word_4+1	; code used at 8000
		STA		byte_C1		; code used at 8000
		LDA		byte_C2		; code used at 8000
		SBC		word_6		; code used at 8000
		STA		byte_C2		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141FB1:				; CODE XREF: sub_142135+34-p
					; sub_142135+11C-p sub_1423CC+61-p
					; sub_142486+42-p sub_142589+58-p
					; sub_142589+DD-p
					; sub_142589:loc_1426E9-p
					; sub_142923+60-p
					; sub_142923:loc_142B45-p _bD_sF+31-p
					; _bD_s20_npc_hndl33+12-p
		JSR		_sram_bank0_sub1B ; code used at 8000
		SEC				; code used at 8000
		LDA		word_4		; code used at 8000
		SBC		byte_C0		; code used at 8000
		LDA		word_4+1	; code used at 8000
		SBC		byte_C1		; code used at 8000
		LDA		word_6		; code used at 8000
		SBC		byte_C2		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141FC2:				; CODE XREF: sub_142923+22F-p
		LDX		#$12
		BNE		sub_141FC8

; =============== S U B	R O U T	I N E =======================================
sub_141FC6:				; CODE XREF: sub_142135+44-p
					; sub_142135+132-p sub_1422E1+2-p
					; sub_142589+23-p sub_142589+A2-p
					; sub_142923+8F-p sub_142C17+A-p
					; sub_142CE7+BF-p
		LDX		#7		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141FC8:				; CODE XREF: sub_141FC2+2-j
		STA		byte_C4		; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		_sram_b0_s31	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		LDX		word_4		; code used at 8000
		DEX				; code used at 8000
		STX		byte_C3		; code used at 8000
		TXA				; code used at 8000
		BEQ		loc_141FEE	; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		LDX		#2		; code used at 8000
		LDA		byte_C4		; code used at 8000
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		BRK
		.BYTE $1C, $D7		; _syscall0D
		STA		byte_C3		; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		JSR		_bD_s10		; code used at 8000
		LDA		byte_C3		; code used at 8000
loc_141FEE:				; CODE XREF: sub_141FC8+F-j
		CMP		#4		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_141FF1:				; CODE XREF: sub_142486+4A-p
					; sub_142589+5D-p sub_142589+E2-p
					; sub_142589:loc_1426F1-p
					; sub_142923:loc_142B82-p _bD_sF+4D-p
					; _bD_s20_npc_hndl33+17-p
		JMP		sub_14211D	; code used at 8000
loc_141FF4:				; CODE XREF: sub_14211D+9-j
		LDA		byte_C0		; code used at 8000
		STA		byte_CE		; code used at 8000
		LDA		byte_C1		; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		byte_C2		; code used at 8000
		STA		byte_D0		; code used at 8000
		JSR		_sram_bank0_sub1D ; code used at a000
		BRK
		.BYTE $68, $D7		; _syscall0D
		JMP		sub_142129	; code used at a000
locret_142009:				; CODE XREF: sub_142129+9-j
		RTS				; code used at a000
loc_14200A:				; CODE XREF: sub_1422E1+CC-p
					; _bD_sC:loc_143002-p
		LDA		byte_C0		; code used at a000
		STA		byte_CE		; code used at a000
		LDA		byte_C1		; code used at a000
		STA		byte_CF		; code used at a000
		LDA		byte_C2		; code used at a000
		STA		byte_D0		; code used at a000
		JMP		_sram_bank0_sub1C ; code used at a000
loc_142019:				; CODE XREF: sub_1422E1:loc_14236C-p
					; sub_142923+1AE-p
		JSR		_sram_bank0_sub1B ; code used at a000
		CLC				; code used at a000
		LDA		byte_C0		; code used at a000
		ADC		word_4		; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_C1		; code used at a000
		ADC		word_4+1	; code used at a000
		STA		word_4+1	; code used at a000
		LDA		byte_C2		; code used at a000
		ADC		word_6		; code used at a000
		STA		word_6		; code used at a000
		SEC				; code used at a000
		LDA		#$9F       ; code used at a000
		SBC		word_4		; code used at a000
		LDA		#$86       ; code used at a000
		SBC		word_4+1	; code used at a000
		LDA		#1		; code used at a000
		SBC		word_6		; code used at a000
		RTS				; code used at a000
loc_14203D:				; CODE XREF: sub_142589+138-p
					; sub_142923+CE-p sub_142923+1F8-p
					; sub_142BF0+18-p sub_142BF0+1B-p
					; sub_142BF0+1E-p
		LDY		#2		; code used at a000
loc_14203F:				; CODE XREF: sub_141FF1+5A-j
		LDA		byte_C0,Y	; code used at a000
		STA		word_4,Y	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_C0,Y	; code used at a000
		DEY				; code used at a000
		BPL		loc_14203F	; code used at a000
		STA		byte_C6		; code used at a000
		LDA		#$20       ; code used at a000
		STA		byte_C7		; code used at a000
		LDY		#3		; code used at a000
loc_142055:				; CODE XREF: sub_141FF1+6B-j
		ASL		word_4		; code used at a000
		ROL		word_4+1	; code used at a000
		ROL		word_6		; code used at a000
		DEY				; code used at a000
		BNE		loc_142055	; code used at a000
		LDY		#$E		; code used at a000
loc_142060:				; CODE XREF: sub_141FF1+90-j
		LDA		word_6		; code used at a000
		CMP		#$A		; code used at a000
		BCC		loc_142076	; code used at a000
		SBC		#$A		; code used at a000
		STA		word_6		; code used at a000
		LDA		byte_C1		; code used at a000
		ORA		byte_C7		; code used at a000
		STA		byte_C1		; code used at a000
		LDA		byte_C0		; code used at a000
		ORA		byte_C6		; code used at a000
		STA		byte_C0		; code used at a000
loc_142076:				; CODE XREF: sub_141FF1+73-j
		LSR		byte_C7		; code used at a000
		ROR		byte_C6		; code used at a000
		ASL		word_4		; code used at a000
		ROL		word_4+1	; code used at a000
		ROL		word_6		; code used at a000
		DEY				; code used at a000
		BNE		loc_142060	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_s15:				; CODE XREF: sub_142135+29-p
					; sub_142135+113-p sub_1423CC+1E-p
					; sub_15881A+C8-P sub_15881A+1E2-P
					; DATA XREF: BANKD:802A-o
		TXA				; code used at a000
		TAY				; code used at a000
		JSR		sub_1420A8	; code used at a000
		LDA		(byte_BE),Y	; code used at a000
		AND		#$7F       ; code used as ind data at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_s14:				; CODE XREF: sub_158D3C:loc_158D60-P
					; DATA XREF: BANKD:8028-o
		JSR		sub_1420A8	; code used at a000
		LDY		#$FF		; code used at a000
loc_142093:				; CODE XREF: _bD_s14+8-j
		INY				; code used at a000
		LDA		(byte_BE),Y	; code used at a000
		BPL		loc_142093	; code used at a000
		INY				; code used at a000
		TYA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_s1F:				; CODE XREF: sub_20122+6-P sub_20325+3-P
					; _bD_s17+1-p sub_142923:loc_1429A3-p
					; DATA XREF: BANKD:803E-o
		LDX		#0		; code used at a000
loc_14209D:				; CODE XREF: _bD_s1F+8-j
		LDA		byte_600D,X	; code used at a000
		BMI		loc_1420A5	; code used at a000
		INX
		BPL		loc_14209D
loc_1420A5:				; CODE XREF: _bD_s1F+5-j
		STX		word_4		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1420A8:				; CODE XREF: _bD_s15+2-p _bD_s14-p
		LDA		byte_6FF	; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_1427CC,X	; code used at a000
		STA		byte_BE		; code used at a000
		LDA		off_1427CC+1,X	; code used at a000
		STA		byte_BF		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_s17:				; CODE XREF: _b0_s4D+7-P sub_129A69+C-P
					; DATA XREF: BANKD:802E-o
		PHA				; code used at a000
		JSR		_bD_s1F		; code used at a000
		PLA				; code used at a000
		DEX				; code used at a000
		BMI		loc_1420C8	; code used at a000
loc_1420C0:				; CODE XREF: _bD_s17+E-j
		CMP		byte_600D,X
		BEQ		loc_1420CA
		DEX
		BPL		loc_1420C0
loc_1420C8:				; CODE XREF: _bD_s17+6-j
		SEC				; code used at a000
		RTS				; code used at a000
loc_1420CA:				; CODE XREF: _bD_s17+B-j
		CLC
locret_1420CB:				; CODE XREF: sub_1420CC+9-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1420CC:				; CODE XREF: _npc_hndl3+78-p
		LDA		#0
		STA		byte_CF
loc_1420D0:				; CODE XREF: sub_1420CC+15-j
		JSR		_sram_bank0_sub28
		LDA		word_4
		BEQ		locret_1420CB
		LDA		word_4+1
		AND		#$7F 
		JSR		sub_141EEE
		JSR		_sram_bank0_sub2A
		JMP		loc_1420D0

; =============== S U B	R O U T	I N E =======================================
_bD_s22:				; CODE XREF: sub_ADF4+19-P
					; sub_B06C:loc_B097-P
					; sub_B09C:loc_B0B5-P _b6_s1F+11-P
					; _bC_s22+99-P _bC_sC+24-P _bC_sC+44-P
					; _bC_s2B+B-P sub_1422E1+B8-p
					; sub_142589:loc_1425A4-p
					; sub_142589+18D-p sub_142923+10E-p
					; sub_1585B0+3-P
					; DATA XREF: BANKD:8044-o
		BRK
		.BYTE $F0, 7		; ofs 0x00020020, -> dst _b1_s10
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1420EE:				; CODE XREF: sub_142CE7:loc_142D21-p
					; sub_142CE7:loc_142DA1-p
					; sub_142E69:loc_142E76-p
		BRK
		.BYTE 5, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1420FA	; code used at a000
		BRK
		.BYTE $65, $17		; ofs 0x000b001a, -> dst _b7_sD
		RTS				; code used at a000
loc_1420FA:				; CODE XREF: sub_1420EE+6-j
		BRK
		.BYTE $94, $87		; _msg_m00_arg2
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142100:				; DATA XREF: BANKD:B3E3-o
		BRK
		.BYTE $85, $17		; ofs 0x0009802c, -> dst _b6_s16
locret_142103:				; CODE XREF: sub_142104+9-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142104:				; CODE XREF: sub_142C17+92-p
		JSR		_sram_bank0_sub28
		LDA		word_4
		STA		byte_CF
loc_14210B:				; CODE XREF: sub_142104+14-j
		DEC		byte_CF
		BMI		locret_142103
		JSR		_sram_bank0_sub28
		LDA		word_4+1
		AND		#$7F 
		CMP		byte_C5
		BNE		loc_14210B
		JMP		_sram_bank0_sub2A

; =============== S U B	R O U T	I N E =======================================
sub_14211D:				; CODE XREF: sub_141FF1-j
		LDA		byte_CE		; code used at a000
		PHA				; code used at a000
		LDA		byte_CF		; code used at a000
		PHA				; code used at a000
		LDA		byte_D0		; code used at a000
		PHA				; code used at a000
		JMP		loc_141FF4	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142129:				; CODE XREF: sub_141FF1+15-j
		PLA				; code used at a000
		STA		byte_D0		; code used at a000
		PLA				; code used at a000
		STA		byte_CF		; code used at a000
		PLA				; code used at a000
		STA		byte_CE		; code used at a000
		JMP		locret_142009	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142135:				; CODE XREF: sub_1434C4+3-j
		LDA		byte_6FF	; code used at a000
		CMP		#7		; code used at a000
		BNE		loc_14213F	; code used at a000
		JMP		sub_1423CC	; code used at a000
loc_14213F:				; CODE XREF: sub_142135+5-j
		BRK
		.BYTE $1E, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_14215A	; code used at a000
loc_142147:				; CODE XREF: sub_142135+B9-j
		BRK
		.BYTE $1F, $87		; _msg_m00_arg2
		BRK
		.BYTE $12, $D7		; _syscall0D
		LDA		#$FF		; code used at a000
		STA		byte_C9		; code used at a000
		LDA		#0		; code used at a000
		BRK
		.BYTE $36, $D7		; _syscall0D
		CMP		#$FE       ; code used at a000
		BCC		loc_14215D	; code used at a000
loc_14215A:				; CODE XREF: sub_142135+10-j
					; sub_142135+47-j
		JMP		loc_1421F1	; code used at a000
loc_14215D:				; CODE XREF: sub_142135+23-j
		TAX				; code used at a000
		JSR		_bD_s15		; code used at a000
		STA		byte_C5		; code used at a000
		STA		byte_D2		; code used at a000
		TAX				; code used at a000
		JSR		_bD_s12		; code used at a000
		JSR		sub_141FB1	; code used at a000
		BCS		loc_142174	; code used at a000
		BRK
		.BYTE $20, $87		; _msg_m00_arg2
		JMP		loc_1421E6	; code used at a000
loc_142174:				; CODE XREF: sub_142135+37-j
		BRK
		.BYTE $21, $87		; _msg_m00_arg2
loc_142177:				; CODE XREF: sub_142135+6A-j
					; sub_142135+88-j
		LDA		#$22       ; code used at a000
		JSR		sub_141FC6	; code used at a000
		BCS		loc_14215A	; code used at a000
		STA		byte_CE		; code used at a000
		STA		byte_D2		; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDA		word_4		; code used at a000
		CMP		#8		; code used at a000
		BCC		loc_1421AA	; code used at a000
		BRK
		.BYTE $23, $87		; _msg_m00_arg2
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#2		; code used at a000
		BCC		loc_1421A6	; code used at a000
		BRK
		.BYTE $24, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		CMP		#1		; code used at a000
		BCC		loc_142177	; code used at a000
		BEQ		loc_1421A6
		JMP		loc_1421F1
loc_1421A6:				; CODE XREF: sub_142135+60-j
					; sub_142135+6C-j
		BRK
		.BYTE $25, $87		; _msg_m00_arg2
		RTS
loc_1421AA:				; CODE XREF: sub_142135+54-j
		LDA		byte_C5		; code used at a000
		STA		byte_CF		; code used at a000
		STA		byte_D3		; code used at a000
		BRK
		.BYTE 8, $17		; ofs 0x000080bc, -> dst _b0_s5E
		BCS		loc_1421C0	; code used at a000
		BRK
		.BYTE $26, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1421C0	; code used at a000
		JMP		loc_142177	; code used at a000
loc_1421C0:				; CODE XREF: sub_142135+7E-j
					; sub_142135+86-j
		JSR		sub_14246C	; code used at a000
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		LDA		byte_C5		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		BIT		word_4		; code used at a000
		BMI		loc_1421D8	; code used at a000
		BRK
		.BYTE $27, $87		; _msg_m00_arg2
		JMP		loc_1421E3
loc_1421D8:				; CODE XREF: sub_142135+9B-j
		BVC		loc_1421E0	; code used at a000
		BRK
		.BYTE $28, $87		; _msg_m00_arg2
		JMP		loc_1421E3
loc_1421E0:				; CODE XREF: sub_142135:loc_1421D8-j
		BRK
		.BYTE $29, $87		; _msg_m00_arg2
loc_1421E3:				; CODE XREF: sub_142135+A0-j
					; sub_142135+A8-j
		JSR		_sram_bank0_sub29 ; code used at a000
loc_1421E6:				; CODE XREF: sub_142135+3C-j
		BRK
		.BYTE $2A, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1421F1	; code used at a000
		JMP		loc_142147	; code used at a000
loc_1421F1:				; CODE XREF: sub_142135:loc_14215A-j
					; sub_142135+6E-j sub_142135+B7-j
		BRK
		.BYTE $2B, $87		; _msg_m00_arg2
		RTS				; code used at a000
loc_1421F5:				; CODE XREF: sub_1434D3+3-j
		LDA		byte_6FF	; code used at a000
		CMP		#$1E		; code used at a000
		BNE		loc_1421FF	; code used at a000
		JMP		sub_1423CC	; code used at a000
loc_1421FF:				; CODE XREF: sub_142135+C5-j
		CMP		#$29       ; code used at a000
		BNE		loc_14221D	; code used at a000
		LDA		byte_60B9
		AND		#$20 
		BEQ		loc_14221D
		LDA		byte_60B7
		BMI		loc_14221D
		LDA		#$1C
		STA		byte_CE
		BRK
		.BYTE $2C, $17		; ofs 0x0000809a, -> dst _b0_s4D
		BCS		loc_14221D
		LDA		#$2D 
		STA		byte_6FF
loc_14221D:				; CODE XREF: sub_142135+CC-j
					; sub_142135+D3-j sub_142135+D8-j
					; sub_142135+E1-j
		BRK
		.BYTE $2C, $87		; _msg_m00_arg2
		BRK
		.BYTE $16, $D7		; _syscall0D
		LDX		#7		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#1		; code used at a000
		BCC		loc_142234	; code used at a000
		BEQ		loc_142231	; code used at a000
loc_14222E:				; CODE XREF: sub_142135+110-j
		JMP		loc_1422DD	; code used at a000
loc_142231:				; CODE XREF: sub_142135+F7-j
		JMP		sub_1422E1	; code used at a000
loc_142234:				; CODE XREF: sub_142135+F5-j
					; sub_142135+1A5-j
		BRK
		.BYTE $2D, $87		; _msg_m00_arg2
		BRK
		.BYTE $12, $D7		; _syscall0D
		LDA		#$FF		; code used at a000
		STA		byte_C9		; code used at a000
		LDA		#0		; code used at a000
		BRK
		.BYTE $36, $D7		; _syscall0D
		CMP		#$FE       ; code used at a000
		BCS		loc_14222E	; code used at a000
		TAX				; code used at a000
		JSR		_bD_s15		; code used at a000
		STA		byte_C5		; code used at a000
		TAX				; code used at a000
		JSR		_bD_s12		; code used at a000
		JSR		sub_141FB1	; code used at a000
		BCS		loc_14225C	; code used at a000
		BRK
		.BYTE $2E, $87		; _msg_m00_arg2
		JMP		loc_1422D2
loc_14225C:				; CODE XREF: sub_142135+11F-j
		LDA		byte_C5		; code used at a000
		STA		byte_D2		; code used at a000
		STA		byte_CF		; code used at a000
		BRK
		.BYTE $2F, $87		; _msg_m00_arg2
loc_142265:				; CODE XREF: sub_142135+159-j
					; sub_142135+178-j
		LDA		#$30       ; code used at a000
		JSR		sub_141FC6	; code used at a000
		BCC		loc_14226F	; code used at a000
		JMP		loc_1422DD
loc_14226F:				; CODE XREF: sub_142135+135-j
		STA		byte_CE		; code used at a000
		STA		byte_D2		; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDA		word_4		; code used at a000
		CMP		#8		; code used at a000
		BCC		loc_142293	; code used at a000
		BRK
		.BYTE $32, $87		; _msg_m00_arg2
		JSR		_sram_b0_s31
		LDA		word_4
		CMP		#2
		BCC		loc_142290
		BRK
		.BYTE $33, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_142265
loc_142290:				; CODE XREF: sub_142135+151-j
		JMP		loc_1422DD
loc_142293:				; CODE XREF: sub_142135+145-j
		BRK
		.BYTE 9, $17		; ofs 0x000080be, -> dst _b0_s5F
		BCS		loc_1422B0	; code used at a000
		LDA		byte_C3
		STA		byte_D2
		BRK
		.BYTE $31, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1422B0
		JSR		_sram_b0_s31
		LDA		word_4
		CMP		#2
		BCC		loc_1422DD
		JMP		loc_142265
loc_1422B0:				; CODE XREF: sub_142135+161-j
					; sub_142135+16D-j
		JSR		sub_14246C	; code used at a000
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		STA		byte_D2		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		BIT		word_4		; code used at a000
		BMI		loc_1422C6	; code used at a000
		BRK
		.BYTE $34, $87		; _msg_m00_arg2
		JMP		loc_1422CB
loc_1422C6:				; CODE XREF: sub_142135+189-j
		BVC		loc_1422CB	; code used at a000
		BRK
		.BYTE $35, $87		; _msg_m00_arg2
loc_1422CB:				; CODE XREF: sub_142135:loc_1422C3-j
					; sub_142135:loc_1422C6-j
		LDA		byte_C5		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_sram_bank0_sub29 ; code used at a000
loc_1422D2:				; CODE XREF: sub_142135+124-j
		BRK
		.BYTE $36, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1422DD	; code used at a000
		JMP		loc_142234	; code used at a000
loc_1422DD:				; CODE XREF: sub_142135:loc_14222E-j
					; sub_142135+137-j
					; sub_142135:loc_142290-j
					; sub_142135+176-j sub_142135+1A3-j
					; sub_1422E1+5-j sub_1422E1+20-j
					; sub_1422E1+2F-j sub_1422E1+85-j
		BRK
		.BYTE $40, $87		; _msg_m00_arg2
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1422E1:				; CODE XREF: sub_142135:loc_142231-j
					; sub_1422E1+1E-j
					; sub_1422E1:loc_142369-j
		LDA		#$37       ; code used at a000
		JSR		sub_141FC6	; code used at a000
		BCS		loc_1422DD	; code used at a000
		STA		byte_CE		; code used at a000
		STA		byte_CF		; code used at a000
		STA		byte_D2		; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDA		word_4		; code used at a000
		BNE		loc_142303	; code used at a000
		BRK
		.BYTE $38, $87		; _msg_m00_arg2
		JSR		_sram_b0_s31
		LDA		word_4
		CMP		#2
		BCS		sub_1422E1
		BCC		loc_1422DD
loc_142303:				; CODE XREF: sub_1422E1+12-j
		BRK
		.BYTE $39, $87		; _msg_m00_arg2
		BRK
		.BYTE $2D, $D7		; _syscall0D
		LDX		#$13		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#9		; code used at a000
		BCS		loc_1422DD	; code used at a000
		STA		byte_BD		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDA		word_4+1	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_C5		; code used at a000
		CMP		#$5E       ; code used at a000
		BEQ		loc_142333	; code used at a000
		TAX				; code used at a000
		LDA		#$90       ; code used at a000
		JSR		_get_syscall0_data_byte_X ; code used at a000
		AND		#$10		; code used at a000
		BEQ		loc_14233A	; code used at a000
loc_14232D:				; CODE XREF: sub_1422E1+57-j
		BRK
		.BYTE $3A, $87		; _msg_m00_arg2
		JMP		loc_14235E
loc_142333:				; CODE XREF: sub_1422E1+40-j
		LDA		byte_6FF
		CMP		#$29 
		BNE		loc_14232D
loc_14233A:				; CODE XREF: sub_1422E1+4A-j
		LDX		byte_C5		; code used at a000
		JSR		_bD_s12		; code used at a000
		JSR		_bD_s13		; code used at a000
		LDA		byte_C5		; code used at a000
		STA		byte_D2		; code used at a000
		LDX		#2		; code used at a000
loc_142348:				; CODE XREF: sub_1422E1+6D-j
		LDA		byte_C0,X	; code used at a000
		STA		byte_63F,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_142348	; code used at a000
		BRK
		.BYTE $12, $D7		; _syscall0D
		BRK
		.BYTE $3B, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_14236C	; code used at a000
		BRK
		.BYTE $3E, $87		; _msg_m00_arg2
loc_14235E:				; CODE XREF: sub_1422E1+4F-j
					; sub_1422E1+93-j sub_1422E1+C6-j
					; sub_1422E1:loc_1423C9-j
		BRK
		.BYTE $3F, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_142369	; code used at a000
		JMP		loc_1422DD	; code used at a000
loc_142369:				; CODE XREF: sub_1422E1+83-j
		JMP		sub_1422E1	; code used at a000
loc_14236C:				; CODE XREF: sub_1422E1+78-j
		JSR		loc_142019	; code used at a000
		BCS		loc_142377	; code used at a000
		BRK
		.BYTE $8A, $87		; _msg_m00_arg2
		JMP		loc_14235E
loc_142377:				; CODE XREF: sub_1422E1+8E-j
		BRK
		.BYTE $3C, $87		; _msg_m00_arg2
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		LDA		byte_BD		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDA		word_4+1	; code used at a000
		AND		#$80       ; code used at a000
		BEQ		loc_1423AA	; code used at a000
		LDX		byte_C5		; code used at a000
		LDA		#$90       ; code used at a000
		JSR		_get_syscall0_data_byte_X ; code used at a000
		AND		#8		; code used at a000
		BEQ		loc_1423AA	; code used at a000
		BRK
		.BYTE $17, $2F		; _syscall12
		JSR		_bD_s22
		LDA		byte_C5
		STA.W		byte_D2
		BRK
		.BYTE $52, $77		; _msg_m00_arg1
		BRK
		.BYTE $3D, $87		; _msg_m00_arg2
		JMP		loc_14235E
loc_1423AA:				; CODE XREF: sub_1422E1+A8-j
					; sub_1422E1+B3-j
		JSR		_sram_bank0_sub2A ; code used at a000
		JSR		loc_14200A	; code used at a000
		BRK
		.BYTE $12, $D7		; _syscall0D
		LDA		byte_C5		; code used at a000
		CMP		#$5E       ; code used at a000
		BNE		loc_1423C9	; code used at a000
		LDA		byte_60B9
		ORA		#$20 
		STA		byte_60B9
		LDA		byte_60B7
		ORA		#$80 
		STA		byte_60B7
loc_1423C9:				; CODE XREF: sub_1422E1+D6-j
		JMP		loc_14235E	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1423CC:				; CODE XREF: sub_142135+7-j
					; sub_142135+C7-j
		BRK
		.BYTE $33, $27		; _msg_m00_b3
loc_1423CF:				; CODE XREF: sub_1423CC+B-j
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1423DA	; code used at a000
		BRK
		.BYTE $34, $27		; _msg_m00_b3
		JMP		loc_1423CF	; code used at a000
loc_1423DA:				; CODE XREF: sub_1423CC+6-j
		LDA		#0		; code used at a000
		STA		byte_C9		; code used at a000
		BRK
		.BYTE $36, $D7		; _syscall0D
		CMP		#8		; code used at a000
		BCC		loc_1423E9	; code used at a000
		BRK
		.BYTE $35, $27		; _msg_m00_b3
		RTS				; code used at a000
loc_1423E9:				; CODE XREF: sub_1423CC+17-j
		TAX				; code used at a000
		JSR		_bD_s15		; code used at a000
		STA		byte_C5		; code used at a000
		TAX				; code used at a000
		JSR		_bD_s12		; code used at a000
		LDX		#4		; code used at a000
loc_1423F5:				; CODE XREF: sub_1423CC+30-j
		ASL		byte_C0		; code used at a000
		ROL		byte_C1		; code used at a000
		ROL		byte_C2		; code used at a000
		DEX				; code used at a000
		BNE		loc_1423F5	; code used at a000
		LDX		#2		; code used at a000
loc_142400:				; CODE XREF: sub_1423CC+3A-j
		LDA		byte_C0,X	; code used at a000
		STA		byte_63F,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_142400	; code used at a000
		BRK
		.BYTE $36, $27		; _msg_m00_b3
		BRK
		.BYTE $12, $D7		; _syscall0D
		JSR		loc_14245F	; code used at a000
		BRK
		.BYTE $37, $27		; _msg_m00_b3
		JSR		sub_14245C	; code used at a000
		BRK
		.BYTE $39, $27		; _msg_m00_b3
		JSR		sub_14245C	; code used at a000
		BRK
		.BYTE $3A, $27		; _msg_m00_b3
		JSR		sub_14245C	; code used at a000
		BRK
		.BYTE $3B, $47		; _msg_m00_b3_break
loc_142426:				; CODE XREF: sub_14245C+D-j
		BRK
		.BYTE $68, 7		; ofs 0x00008078, -> dst _b0_s3C
		BCC		loc_142446	; code used at a000
		STA		byte_C3		; code used at a000
		JSR		sub_141FB1	; code used at a000
		BCC		loc_142449	; code used at a000
		JSR		sub_14246C	; code used at a000
		BRK
		.BYTE $12, $D7		; _syscall0D
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		LDA		byte_C5		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_sram_bank0_sub29 ; code used at a000
		BRK
		.BYTE $3C, $47		; _msg_m00_b3_break
loc_142446:				; CODE XREF: sub_1423CC+5D-j
		BRK
		.BYTE $3D, $47		; _msg_m00_b3_break
loc_142449:				; CODE XREF: sub_1423CC+64-j
		BRK
		.BYTE $3E, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
sub_14244C:				; CODE XREF: sub_14245C+8-j
		LSR		byte_C2		; code used at a000
		ROR		byte_C1		; code used at a000
		ROR		byte_C0		; code used at a000
		LSR		byte_641	; code used at a000
		ROR		byte_640	; code used at a000
		ROR		byte_63F	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_14245C:				; CODE XREF: sub_1423CC+48-p
					; sub_1423CC+4E-p sub_1423CC+54-p
		BRK
		.BYTE $38, $27		; _msg_m00_b3
loc_14245F:				; CODE XREF: sub_1423CC+42-p
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_142467	; code used at a000
		JMP		sub_14244C	; code used at a000
loc_142467:				; CODE XREF: sub_14245C+6-j
		PLA				; code used at a000
		PLA				; code used at a000
		JMP		loc_142426	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_14246C:				; CODE XREF: sub_142135:loc_1421C0-p
					; sub_142135:loc_1422B0-p
					; sub_1423CC+66-p
		LDA		byte_C0		; code used at a000
		STA		byte_CE		; code used at a000
		LDA		byte_C1		; code used at a000
		STA		byte_CF		; code used at a000
		LDA		byte_C2		; code used at a000
		STA		byte_D0		; code used at a000
		JSR		_sram_bank0_sub1D ; code used at a000
		BRK
		.BYTE $12, $D7		; _syscall0D
		RTS				; code used at a000
loc_14247F:				; CODE XREF: sub_142486+45-j
		BRK
		.BYTE $1A, $87		; _msg_m00_arg2
loc_142482:				; CODE XREF: sub_142486+40-j
		BRK
		.BYTE $1D, $87		; _msg_m00_arg2
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142486:				; CODE XREF: sub_1434B2+6-j
		LDA		byte_6DF	; code used at a000
		CMP		#$78       ; code used at a000
		BCS		loc_142493	; code used at a000
		BRK
		.BYTE $17, $87		; _msg_m00_arg2
		JMP		loc_142496	; code used at a000
loc_142493:				; CODE XREF: sub_142486+5-j
		BRK
		.BYTE $18, $87		; _msg_m00_arg2
loc_142496:				; CODE XREF: sub_142486+A-j
		LDX		byte_6FF	; code used at a000
		LDA		byte_1427B1,X	; code used at a000
		STA		byte_C6		; code used at a000
		AND		#$1F		; code used at a000
		STA		byte_C0		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_C1		; code used at a000
		STA		byte_C2		; code used at a000
		STA		byte_640	; code used at a000
		STA		byte_641	; code used at a000
		JSR		_sram_bank0_sub33 ; code used at a000
		LDA		word_4		; code used at a000
		LDX		#byte_C0	; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		byte_C0		; code used at a000
		STA		byte_63F	; code used at a000
		BRK
		.BYTE $19, $87		; _msg_m00_arg2
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_142482	; code used at a000
		JSR		sub_141FB1	; code used at a000
		BCC		loc_14247F	; code used at a000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_141FF1	; code used at a000
		BRK
		.BYTE $1B, $87		; _msg_m00_arg2
		JSR		sub_142504	; code used at a000
		LDA		byte_6FF	; code used at a000
		CMP		#$F		; code used at a000
		BEQ		locret_1424E3	; code used at a000
		BRK
		.BYTE $1C, $87		; _msg_m00_arg2
locret_1424E3:				; CODE XREF: sub_142486+58-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1424E4:				; CODE XREF: sub_142504+53-p
					; sub_142ECB+A-p
		LDA		byte_C6		; code used at a000
		BMI		loc_142500	; code used at a000
		LDA		byte_644	; code used at a000
		PHA				; code used at a000
		LDA		byte_C6		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		byte_644	; code used at a000
		STA		byte_6BC	; code used at a000
		BRK
		.BYTE $83, 7		; ofs 0x00128008, -> dst _bC_s4
		PLA				; code used at a000
		STA		byte_644	; code used at a000
loc_142500:				; CODE XREF: sub_1424E4+2-j
		BRK
		.BYTE $5A, $17		; ofs 0x0012806a, -> dst _bC_s35
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142504:				; CODE XREF: sub_142486+50-p
		JSR		sub_174369	; code used at a000
		BRK
		.BYTE $3E, $D7		; _syscall0D
		JSR		_sram_b0_s31	; code used at a000
		LDX		word_4		; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_CF		; code used at a000
		STA		byte_D0		; code used at a000
loc_142515:				; CODE XREF: sub_142504+31-j
		DEX				; code used at a000
		STX		byte_CE		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4+1	; code used at a000
		BPL		loc_142531	; code used at a000
		LDA		byte_CE		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_73D,X	; code used at a000
		AND		#$BF       ; code used at a000
		STA		byte_73D,X	; code used at a000
		JSR		_sram_bank0_sub4 ; code	used at	a000
		JSR		_sram_bank0_sub8 ; code	used at	a000
loc_142531:				; CODE XREF: sub_142504+19-j
		LDX		byte_CE		; code used at a000
		CPX		#0		; code used at a000
		BNE		loc_142515	; code used at a000
		BRK
		.BYTE $14, $2F		; _syscall12
		LDA		byte_2F		; code used at a000
		AND		#2		; code used at a000
		BNE		loc_142545	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6DF	; code used at a000
loc_142545:				; CODE XREF: sub_142504+3A-j
		JSR		sub_1743B5	; code used at a000
		BRK
		.BYTE $F9, 7		; ofs 0x00158036, -> dst _bE_s1B
		JSR		sub_177CFC	; code used at a000
		BRK
		.BYTE $2F, $17		; ofs 0x00140050, -> dst _bD_s28
		BRK
		.BYTE $47, $17		; ofs 0x0012804e, -> dst _bC_s27
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JSR		sub_1424E4	; code used at a000
		BRK
		.BYTE $DD, 7		; ofs 0x0014001a, -> dst _bD_sD
		BRK
		.BYTE $1A, $17		; ofs 0x00158026, -> dst _bE_s13
		BRK
		.BYTE $F0, 7		; ofs 0x00020020, -> dst _b1_s10
		JSR		sub_175B0E	; code used at a000
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDA		#0		; code used at a000
		STA		byte_81		; code used at a000
		STA		byte_80		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142573:				; DATA XREF: BANKD:B3E9-o
		LDA		byte_6DF	; ind code used	at a000
		CMP		#$78       ; code used at a000
		BCS		loc_142580	; code used at a000
		BRK
		.BYTE 0, $87		; _msg_m00_arg2
		JMP		sub_142589	; code used at a000
loc_142580:				; CODE XREF: sub_142573+5-j
		BRK
		.BYTE 1, $87		; _msg_m00_arg2
		JMP		sub_142589	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142586:				; CODE XREF: sub_142589+99-j
		BRK
		.BYTE 6, $87		; _msg_m00_arg2

; =============== S U B	R O U T	I N E =======================================
sub_142589:				; CODE XREF: sub_142573+A-j
					; sub_142573+10-j
		BRK
		.BYTE $17, $D7		; _syscall0D
		LDX		#9		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#1		; code used at a000
		BCC		loc_1425AA	; code used at a000
		BNE		loc_14259A	; code used at a000
		JMP		loc_142629
loc_14259A:				; CODE XREF: sub_142589+C-j
		CMP		#2		; code used at a000
		BNE		loc_1425A1	; code used at a000
		JMP		loc_14268A	; code used at a000
loc_1425A1:				; CODE XREF: sub_142589+13-j
		JMP		loc_142618	; code used at a000
loc_1425A4:				; CODE XREF: sub_142589+79-j
					; sub_142589+F8-j
		JSR		_bD_s22		; code used at a000
		JMP		loc_142618	; code used at a000
loc_1425AA:				; CODE XREF: sub_142589+A-j
		LDA		#7		; code used at a000
		JSR		sub_141FC6	; code used at a000
		BCS		loc_142618	; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4+1	; code used at a000
		AND		#$A0       ; code used at a000
		CMP		#$A0       ; code used at a000
		BNE		loc_142605	; code used at a000
		JSR		_sram_bank0_subC ; code	used at	a000
		LDA		word_4		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		byte_C0		; code used at a000
		STA		byte_63F	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_C1		; code used at a000
		STA		byte_640	; code used at a000
		STA		byte_C2		; code used at a000
		STA		byte_641	; code used at a000
		BRK
		.BYTE 9, $87		; _msg_m00_arg2
		JSR		sub_1427A8	; code used at a000
		BNE		loc_14260F	; code used at a000
		JSR		sub_141FB1	; code used at a000
		BCC		loc_142615	; code used at a000
		JSR		sub_141FF1	; code used at a000
		STA		byte_CE		; code used at a000
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		LDA		byte_C3		; code used at a000
		STA		byte_D2		; code used at a000
		BRK
		.BYTE $A, $87		; _msg_m00_arg2
		BRK
		.BYTE $15, $2F		; _syscall12
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		BRK
		.BYTE $7A, 7		; ofs 0x0000807a, -> dst _b0_s3D
		JMP		loc_1425A4	; code used at a000
loc_142605:				; CODE XREF: sub_142589+33-j
		LDA		byte_C3		; code used at a000
		STA		byte_D2		; code used at a000
		BRK
		.BYTE 8, $87		; _msg_m00_arg2
		JMP		loc_142618	; code used at a000
loc_14260F:				; CODE XREF: sub_142589+56-j
					; sub_142589+DB-j sub_142589+15D-j
		BRK
		.BYTE $13, $87		; _msg_m00_arg2
		JMP		loc_142618	; code used at a000
loc_142615:				; CODE XREF: sub_142589+5B-j
					; sub_142589+E0-j sub_142589+165-j
		BRK
		.BYTE $14, $87		; _msg_m00_arg2
loc_142618:				; CODE XREF: sub_142589:loc_1425A1-j
					; sub_142589+1E-j sub_142589+26-j
					; sub_142589+83-j sub_142589+89-j
					; sub_142589+A5-j sub_142589+FE-j
					; sub_142589+110-j sub_142589+196-j
					; sub_142589+19C-j
		BRK
		.BYTE $15, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		CMP		#0		; code used at a000
		BNE		loc_142625	; code used at a000
		JMP		sub_142586	; code used at a000
loc_142625:				; CODE XREF: sub_142589+97-j
		BRK
		.BYTE $16, $87		; _msg_m00_arg2
		RTS				; code used at a000
loc_142629:				; CODE XREF: sub_142589+E-j
		LDA		#$B
		JSR		sub_141FC6
		BCS		loc_142618
		STA		byte_CE
		STA		byte_D2
		BRK
		.BYTE $29, $17		; ofs 0x000080b8, -> dst _b0_s5C
		BCC		loc_142684
		LDA		word_4
		STA		byte_BD
		JSR		_sram_bank0_subC
		LDA		word_4
		STA		byte_C0
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		STA		byte_641
		LDA		#$1E
		LDX		#byte_C0
		JSR		_mul16_to_8
		LDA		byte_C0
		STA		byte_63F
		LDA		byte_C1
		STA		byte_640
		BRK
		.BYTE 9, $87		; _msg_m00_arg2
		JSR		sub_1427A8
		BNE		loc_14260F
		JSR		sub_141FB1
		BCC		loc_142615
		JSR		sub_141FF1
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		BRK
		.BYTE $D, $87		; _msg_m00_arg2
		BRK
		.BYTE $15, $2F		; _syscall12
		LDA		byte_BD
		STA		byte_CF
		JSR		_sram_bank0_sub2A
		JMP		loc_1425A4
loc_142684:				; CODE XREF: sub_142589+AE-j
		BRK
		.BYTE $C, $87		; _msg_m00_arg2
		JMP		loc_142618
loc_14268A:				; CODE XREF: sub_142589+15-j
		BRK
		.BYTE $E, $87		; _msg_m00_arg2
		BRK
		.BYTE $4E, $D7		; _syscall0D
		LDX		#7		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#4		; code used at a000
		BCC		loc_14269C	; code used at a000
		JMP		loc_142618
loc_14269C:				; CODE XREF: sub_142589+10E-j
		STA		byte_CE		; code used at a000
		STA		byte_D2		; code used at a000
		STA		byte_C3		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4+1	; code used at a000
		BPL		loc_1426AC	; code used at a000
		JMP		loc_142722
loc_1426AC:				; CODE XREF: sub_142589+11E-j
		LDA		#0		; code used at a000
		STA		byte_C1		; code used at a000
		STA		byte_C2		; code used at a000
		STA		byte_641	; code used at a000
		JSR		_sram_bank0_subC ; code	used at	a000
		LDA		word_4		; code used at a000
		STA		byte_C0		; code used at a000
		LDX		#byte_C0	; code used at a000
		JSR		_mul16_to_8	; code used at a000
		JSR		loc_14203D	; code used at a000
		CLC				; code used at a000
		LDA		byte_C0		; code used at a000
		ADC		#1		; code used at a000
		STA		byte_C0		; code used at a000
		LDA		byte_C1		; code used at a000
		ADC		#0		; code used at a000
		STA		byte_C1		; code used at a000
		JSR		sub_141F44	; code used at a000
		LDA		byte_C0		; code used at a000
		STA		byte_63F	; code used at a000
		LDA		byte_C1		; code used at a000
		STA		byte_640	; code used at a000
		BRK
		.BYTE 9, $87		; _msg_m00_arg2
		JSR		sub_1427A8	; code used at a000
		BEQ		loc_1426E9	; code used at a000
		JMP		loc_14260F	; code used at a000
loc_1426E9:				; CODE XREF: sub_142589+15B-j
		JSR		sub_141FB1	; code used at a000
		BCS		loc_1426F1	; code used at a000
		JMP		loc_142615
loc_1426F1:				; CODE XREF: sub_142589+163-j
		JSR		sub_141FF1	; code used at a000
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE 2, $87		; _msg_m00_arg2
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		BRK
		.BYTE $10, $87		; _msg_m00_arg2
		BRK
		.BYTE $15, $2F		; _syscall12
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		BRK
		.BYTE $7B, 7		; ofs 0x0000807c, -> dst _b0_s3E
		LDA		#$FF		; code used at a000
		STA		byte_CF		; code used at a000
		STA		byte_D0		; code used at a000
		JSR		_sram_bank0_sub4 ; code	used at	a000
		JSR		_sram_bank0_sub8 ; code	used at	a000
		JSR		_bD_s22		; code used at a000
		JSR		sub_142780	; code used at a000
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		JMP		loc_142618	; code used at a000
loc_142722:				; CODE XREF: sub_142589+120-j
		BRK
		.BYTE $F, $87		; _msg_m00_arg2
		JMP		loc_142618

; =============== S U B	R O U T	I N E =======================================
; unused
sub_142728:
		JSR		_sram_b0_s31
		LDA		word_4
		STA		byte_CE
		LDA		#0
		STA		byte_C0
		STA		byte_C1
		STA		byte_C2
		STA		byte_641
loc_14273A:				; CODE XREF: sub_142728+20-j
					; sub_142728+32-j
		LDX		byte_CE
		DEX
		BMI		loc_14275C
		STX		byte_CE
		JSR		_sram_bank0_sub7
		LDA		word_4
		ORA		word_4+1
		BEQ		loc_14273A
		JSR		_sram_bank0_subC
		CLC
		LDA		byte_C0
		ADC		word_4
		STA		byte_C0
		LDA		byte_C1
		ADC		#0
		STA		byte_C1
		BCC		loc_14273A
loc_14275C:				; CODE XREF: sub_142728+15-j
		LDX		#byte_C0
		LDA		#3
		JSR		_mul16_to_8
		LDA		byte_C0
		STA		byte_63F
		LDA		byte_C1
		STA		byte_640
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s10:				; CODE XREF: sub_9BA90+C-P sub_9BBED+2-P
					; sub_141FC8+21-p sub_142135+F0-p
					; sub_1422E1+2A-p sub_142589+5-p
					; sub_142589+109-p sub_142923+8-p
					; sub_142923+1F-p sub_142923+AC-p
					; sub_142923+B4-p sub_142923+16B-p
					; sub_142923+1E3-p sub_142BF0+11-p
					; sub_142C17+51-p sub_142CE7+8-p
					; sub_142CE7+4D-p sub_142CE7+60-p
					; sub_142CE7+A5-p sub_142E69+20-p
					; sub_142E69+59-p _bD_sF+5B-p
					; DATA XREF: BANKD:8020-o
		PHA				; code used at a000
		TXA				; code used at a000
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		LDX		#0		; code used at a000
		TXA				; code used at a000
loc_142776:				; CODE XREF: _bD_s10+E-j
		STA		byte_460,X	; code used at a000
		INX				; code used at a000
		CPX		#$10		; code used at a000
		BNE		loc_142776	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142780:				; CODE XREF: sub_142589+190-p
					; sub_142C17:loc_142CAC-p
					; sub_142CE7+8E-p sub_142E3C+1B-p
		LDA		byte_80		; code used at a000
		PHA				; code used at a000
		LDA		byte_81		; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		PLA				; code used at a000
		STA		byte_81		; code used at a000
		PLA				; code used at a000
		STA		byte_80		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_s11:				; CODE XREF: _b6_s1D+9-P _b7_s19+8E-P
					; sub_12B7C8+12-P
					; DATA XREF: BANKD:8022-o
		JSR		_sram_b0_s31	; code used at a000
		LDX		word_4		; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_CF		; code used at a000
		STA		byte_D0		; code used at a000
loc_14279B:				; CODE XREF: _bD_s11+15-j
		DEX				; code used at a000
		STX		byte_C4		; code used at a000
		STX		byte_CE		; code used at a000
		JSR		_sram_bank0_sub8 ; code	used at	a000
		LDX		byte_C4		; code used at a000
		BNE		loc_14279B	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1427A8:				; CODE XREF: sub_142589+53-p
					; sub_142589+D8-p sub_142589+158-p
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		CMP		#0		; code used at a000
		RTS				; code used at a000
byte_1427B1:
		.BYTE	2,  2,$64,$82,$8F,$6F,$87,  5,$4A,$6A,$8C,$2C,$2F,$83,$4C,$1F
					; DATA XREF: sub_142486+13-r
		.BYTE  $F,$25,$54,$54, $C,$81,$7F,$19,$99,$94, $F
off_1427CC:
		.WORD byte_142859	; DATA XREF: sub_1420A8+5-r
					; sub_1420A8+A-r
					; data used at a000
		.WORD byte_14288A
		.WORD byte_142828	; data used at a000
		.WORD byte_14284B	; data used at a000
		.WORD byte_142883	; data used at a000
		.WORD byte_142852
		.WORD byte_142852
		.WORD byte_142864	; data used at a000
		.WORD byte_14285E	; data used at a000
		.WORD byte_142836	; data used at a000
		.WORD byte_142891
		.WORD byte_142870
		.WORD byte_142897
		.WORD byte_14283D
		.WORD byte_142844
		.WORD byte_14289E
		.WORD byte_14287D
		.WORD byte_142877	; data used at a000
		.WORD byte_14286A
		.WORD byte_14282F	; data used at a000
		.WORD byte_1428DC	; data used at a000
		.WORD byte_142904
		.WORD byte_1428BA
		.WORD byte_1428A4	; data used at a000
		.WORD byte_1428C6	; data used at a000
		.WORD byte_1428FE	; data used at a000
		.WORD byte_1428D0
		.WORD byte_1428D2
		.WORD byte_1428D6
		.WORD byte_1428D6
		.WORD byte_1428E4	; data used at a000
		.WORD byte_1428E2	; data used at a000
		.WORD byte_1428AE	; data used at a000
		.WORD byte_1428AE	; data used at a000
		.WORD byte_1428CB
		.WORD byte_1428EF
		.WORD byte_1428B4
		.WORD byte_14290A
		.WORD byte_1428F5
		.WORD byte_142910
		.WORD byte_1428C0
		.WORD byte_142917
		.WORD byte_1428F8
		.WORD byte_1428EA
		.WORD byte_1428A7	; data used at a000
		.WORD byte_14291B
byte_142828:
		.BYTE	0,  1,	2,$20,$30,$22,$B8 ; DATA XREF: BANKD:A7D0-o
					; ind data used	at a000
byte_14282F:
		.BYTE  $C,  4,	6,$22,$33,$2F,$BD ; DATA XREF: BANKD:A7F2-o
					; ind data used	at a000
byte_142836:
		.BYTE	6,  5, $B,$24,$27,$25,$B9 ; DATA XREF: BANKD:A7DE-o
					; ind data used	at a000
byte_14283D:
		.BYTE	9,$1F,$17,$1E,$26,$3E,$87 ; DATA XREF: BANKD:A7E6-o
byte_142844:
		.BYTE	7,$1F,$1E,$18,$2C,$35,$B7 ; DATA XREF: BANKD:A7E8-o
byte_14284B:
		.BYTE	3, $A, $C,$21,$22,$38,$C5 ; DATA XREF: BANKD:A7D2-o
					; ind data used	at a000
byte_142852:
		.BYTE $17,$1E,$1F,$26,$2C,$35,$BE ; DATA XREF: BANKD:A7D6-o
					; BANKD:A7D8-o
byte_142859:
		.BYTE	3, $C,	4,  6,$85 ; DATA XREF: BANKD:off_1427CC-o
					; ind data used	at a000
byte_14285E:
		.BYTE $2F,$24,$3D,$39,$29,$B1 ;	DATA XREF: BANKD:A7DC-o
					; ind data used	at a000
byte_142864:
		.BYTE	5, $B,$27,$43,$40,$95 ;	DATA XREF: BANKD:A7DA-o
					; ind data used	at a000
byte_14286A:
		.BYTE	5,$19,$25,$26,$39,$C6 ;	DATA XREF: BANKD:A7F0-o
byte_142870:
		.BYTE	3,  4,	5,$19,$27,$2C,$C6 ; DATA XREF: BANKD:A7E2-o
byte_142877:
		.BYTE $18,$13,$27,$26,$3E,$C6 ;	DATA XREF: BANKD:A7EE-o
					; ind data used	at a000
byte_14287D:
		.BYTE $17,$1F,$2C,$35,$3A,$B1 ;	DATA XREF: BANKD:A7EC-o
byte_142883:
		.BYTE	4,  6,	9,$24,$2B,$3D,$B9 ; DATA XREF: BANKD:A7D4-o
					; ind data used	at a000
byte_14288A:
		.BYTE $15,$19,$17,$26,$2C,$3D,$C6 ; DATA XREF: BANKD:A7CE-o
byte_142891:
		.BYTE $1F,$19,$25,$27,$2B,$C6 ;	DATA XREF: BANKD:A7E0-o
byte_142897:
		.BYTE	0,  1,	8, $A,$20,$23,$AB ; DATA XREF: BANKD:A7E4-o
byte_14289E:
		.BYTE	6,$19,$35,$2E,$3E,$C6 ;	DATA XREF: BANKD:A7EA-o
byte_1428A4:
		.BYTE $65,$66,$E8	; DATA XREF: BANKD:A7FA-o
					; ind data used	at a000
byte_1428A7:
		.BYTE $65,$66,$67,$68,$6C,$29,$C5 ; DATA XREF: BANKD:A824-o
					; ind data used	at a000
byte_1428AE:
		.BYTE $65,$66,$67,$68,$6C,$C5 ;	DATA XREF: BANKD:A80C-o
					; BANKD:A80E-o
					; ind data used	at a000
byte_1428B4:
		.BYTE $65,$66,$67,$68,$6C,$A9 ;	DATA XREF: BANKD:A814-o
byte_1428BA:
		.BYTE $65,$66,$67,$68,$6C,$F3 ;	DATA XREF: BANKD:A7F8-o
byte_1428C0:
		.BYTE $65,$66,$67,$68,$6C,$D6 ;	DATA XREF: BANKD:A81C-o
byte_1428C6:
		.BYTE $65,$66,$67,$68,$C3 ; DATA XREF: BANKD:A7FC-o
					; ind data used	at a000
byte_1428CB:
		.BYTE $65,$66,$67,$68,$EC ; DATA XREF: BANKD:A810-o
byte_1428D0:
		.BYTE $65,$C5		; DATA XREF: BANKD:A800-o
byte_1428D2:
		.BYTE $65,$67,$68,$C5	; DATA XREF: BANKD:A802-o
byte_1428D6:
		.BYTE $65,$67,$68,$73,$74,$D6 ;	DATA XREF: BANKD:A804-o
					; BANKD:A806-o
byte_1428DC:
		.BYTE $67,$68,$6C,$74,	7,$A7 ;	DATA XREF: BANKD:A7F4-o
					; ind data used	at a000
byte_1428E2:
		.BYTE $66,$EC		; DATA XREF: BANKD:A80A-o
					; ind data used	at a000
byte_1428E4:
		.BYTE $65,$66,$67,$68,$6C,$F4 ;	DATA XREF: BANKD:A808-o
					; ind data used	at a000
byte_1428EA:
		.BYTE $65,$66,$67,$68,$EC ; DATA XREF: BANKD:A822-o
byte_1428EF:
		.BYTE $65,$66,$67,$68,$6C,$F4 ;	DATA XREF: BANKD:A812-o
byte_1428F5:
		.BYTE $67,$68,$D6	; DATA XREF: BANKD:A818-o
byte_1428F8:
		.BYTE $65,$66,$67,$68,$6C,$F3 ;	DATA XREF: BANKD:A820-o
byte_1428FE:
		.BYTE $65,$66,$67,$68,$6C,$A9 ;	DATA XREF: BANKD:A7FE-o
					; ind data used	at a000
byte_142904:
		.BYTE $4E,$56,$68,$73,$74,$B7 ;	DATA XREF: BANKD:A7F6-o
byte_14290A:
		.BYTE $65,$66,$67,$68,$6C,$F3 ;	DATA XREF: BANKD:A816-o
byte_142910:
		.BYTE $65,$66,$67,$68,$6C,$73,$D6 ; DATA XREF: BANKD:A81A-o
byte_142917:
		.BYTE $65,$67,$68,$EC	; DATA XREF: BANKD:A81E-o
byte_14291B:
		.BYTE $65,$67,$68,$6C,$9C ; DATA XREF: BANKD:A826-o

; =============== S U B	R O U T	I N E =======================================
sub_142920:				; DATA XREF: BANKD:B3E1-o
		BRK
		.BYTE $68, $87		; _msg_m00_arg2

; =============== S U B	R O U T	I N E =======================================
sub_142923:				; CODE XREF: sub_142BC0+8-j
		BRK
		.BYTE $69, $87		; _msg_m00_arg2
		BRK
		.BYTE $1F, $D7		; _syscall0D
		LDX		#$B		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#1		; code used at a000
		BCC		loc_14293A	; code used at a000
		BEQ		loc_142937	; code used at a000
		JMP		sub_142BCB	; code used at a000
loc_142937:				; CODE XREF: sub_142923+F-j
		JMP		loc_142A86
loc_14293A:				; CODE XREF: sub_142923+D-j
		BRK
		.BYTE $6A, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $D7		; _syscall0D
		LDX		#$D		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#1		; code used at a000
		BCC		loc_142951	; code used at a000
		BEQ		loc_14294E
loc_14294B:				; CODE XREF: sub_142923+43-j
		JMP		sub_142BC0	; code used at a000
loc_14294E:				; CODE XREF: sub_142923+26-j
		JMP		loc_1429A3
loc_142951:				; CODE XREF: sub_142923+24-j
					; sub_142923+58-j sub_142923+68-j
		LDX		byte_608D	; code used at a000
		INX				; code used at a000
		BNE		loc_14295D	; code used at a000
		BRK
		.BYTE $87, $87		; _msg_m00_arg2
		JMP		sub_142BC0
loc_14295D:				; CODE XREF: sub_142923+32-j
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $6B, $87		; _msg_m00_arg2
		JSR		sub_142BF0	; code used at a000
		BEQ		loc_14294B	; code used at a000
		STA		byte_C6
		CLC
		ADC		byte_608D
		BCC		loc_14297E
		LDA		byte_608D
		EOR		#$FF
		JSR		sub_142BD2
		BRK
		.BYTE $88, $87		; _msg_m00_arg2
		JMP		loc_142951
loc_14297E:				; CODE XREF: sub_142923+4B-j
		LDA		byte_C6
		JSR		sub_142BD2
		JSR		sub_141FB1
		BCS		loc_14298E
		BRK
		.BYTE $6C, $87		; _msg_m00_arg2
		JMP		loc_142951
loc_14298E:				; CODE XREF: sub_142923+63-j
		BRK
		.BYTE $6D, $87		; _msg_m00_arg2
		JSR		_sram_bank0_sub1D
		BRK
		.BYTE $68, $D7		; _syscall0D
		CLC
		LDA		byte_C6
		ADC		byte_608D
		STA		byte_608D
		JMP		sub_142BC0
loc_1429A3:				; CODE XREF: sub_142923:loc_14294E-j
		JSR		_bD_s1F
		CPX		#$78 
		BCC		loc_1429B0
		BRK
		.BYTE $86, $87		; _msg_m00_arg2
		JMP		sub_142BC0
loc_1429B0:				; CODE XREF: sub_142923+85-j
		LDA		#$6E 
		JSR		sub_141FC6
		BCS		loc_1429C7
		STA		byte_CE
loc_1429B9:				; CODE XREF: sub_142923:loc_142A83-j
		JSR		_sram_bank0_sub28
		LDA		word_4
		BNE		loc_1429CA
		LDA		byte_C3
		STA		byte_D2
		BRK
		.BYTE $6F, $87		; _msg_m00_arg2
loc_1429C7:				; CODE XREF: sub_142923+92-j
					; sub_142923+B9-j
		JMP		sub_142BC0
loc_1429CA:				; CODE XREF: sub_142923:loc_1429BE-j
		BRK
		.BYTE $8B, $87		; _msg_m00_arg2
		LDX		#3
		JSR		_bD_s10
		BRK
		.BYTE $2D, $D7		; _syscall0D
		LDX		#$13
		JSR		_bD_s10
		CMP		#8
		BCS		loc_1429C7
		STA		byte_BD
		STA		byte_CF
		JSR		_sram_bank0_sub28
		LDA		word_4+1
		AND		#$7F 
		STA		byte_C5
		STA		byte_D2
		TAX
		JSR		_bD_s12
		JSR		loc_14203D
		LDA		byte_C0
		ORA		byte_C1
		ORA		byte_C2
		BNE		loc_142A00
		LDA		#1
		STA		byte_C0
loc_142A00:				; CODE XREF: sub_142923+D7-j
		LDX		#2
loc_142A02:				; CODE XREF: sub_142923+E5-j
		LDA		byte_C0,X
		STA		byte_63F,X
		DEX
		BPL		loc_142A02
		BRK
		.BYTE $70, $87		; _msg_m00_arg2
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_142A1B
		BRK
		.BYTE $71, $87		; _msg_m00_arg2
		JMP		loc_142A6B
loc_142A1B:				; CODE XREF: sub_142923+F0-j
		JSR		_sram_bank0_sub28
		LDA		word_4+1
		BPL		loc_142A41
		AND		#$7F 
		TAX
		LDA		#$90 
		JSR		_get_syscall0_data_byte_X
		AND		#8
		BEQ		loc_142A41
		BRK
		.BYTE $17, $2F		; _syscall12
		JSR		_bD_s22
		LDA		byte_C5
		STA		byte_D2
		BRK
		.BYTE $52, $77		; _msg_m00_arg1
		BRK
		.BYTE $72, $87		; _msg_m00_arg2
		JMP		loc_142A6B
loc_142A41:				; CODE XREF: sub_142923+FD-j
					; sub_142923+109-j
		BRK
		.BYTE $73, $87		; _msg_m00_arg2
		LDA		byte_C5
		JSR		sub_141EEE
		JSR		_sram_bank0_sub2A
		LDA		byte_C5
		AND		#$7F 
		CMP		#$2A 
		BEQ		loc_142A5C
		CMP		#$31 
		BEQ		loc_142A5C
		CMP		#$32 
		BNE		loc_142A6B
loc_142A5C:				; CODE XREF: sub_142923+12F-j
					; sub_142923+133-j
		LDA		byte_80
		PHA
		LDA		byte_81
		PHA
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		PLA
		STA		byte_81
		PLA
		STA		byte_80
loc_142A6B:				; CODE XREF: sub_142923+F5-j
					; sub_142923+11B-j sub_142923+137-j
		BRK
		.BYTE $74, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_142A76
		JMP		sub_142BCB
loc_142A76:				; CODE XREF: sub_142923+14E-j
		LDA		byte_6084
		CMP		#$7F 
		BCS		loc_142A83
		BRK
		.BYTE $86, $87		; _msg_m00_arg2
loc_142A80:				; CODE XREF: sub_142923+172-j
		JMP		sub_142BC0
loc_142A83:				; CODE XREF: sub_142923+158-j
		JMP		loc_1429B9
loc_142A86:				; CODE XREF: sub_142923:loc_142937-j
		BRK
		.BYTE $75, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $D7		; _syscall0D
		LDX		#7
		JSR		_bD_s10
		CMP		#1
		BCC		loc_142A9A
		BNE		loc_142A80
		JMP		loc_142AF1
loc_142A9A:				; CODE XREF: sub_142923+170-j
		LDA		byte_608D
		BNE		loc_142AA5
		BRK
		.BYTE $76, $87		; _msg_m00_arg2
		JMP		sub_142BC0
loc_142AA5:				; CODE XREF: sub_142923+17A-j
					; sub_142923+1A6-j sub_142923+1B6-j
		LDA		byte_608D
		JSR		sub_142BD2
		BRK
		.BYTE $77, $87		; _msg_m00_arg2
		BRK
		.BYTE $68, $D7		; _syscall0D
		JSR		sub_142BF0
		BNE		loc_142ABC
		BRK
		.BYTE $71, $87		; _msg_m00_arg2
		JMP		sub_142BC0
loc_142ABC:				; CODE XREF: sub_142923+191-j
		STA		byte_C6
		SEC
		LDA		byte_608D
		SBC		byte_C6
		BCS		loc_142ACC
		BRK
		.BYTE $78, $87		; _msg_m00_arg2
		JMP		loc_142AA5
loc_142ACC:				; CODE XREF: sub_142923+1A1-j
		LDA		byte_C6
		JSR		sub_142BD2
		JSR		loc_142019
		BCS		loc_142ADC
		BRK
		.BYTE $89, $87		; _msg_m00_arg2
		JMP		loc_142AA5
loc_142ADC:				; CODE XREF: sub_142923+1B1-j
		BRK
		.BYTE $79, $87		; _msg_m00_arg2
		JSR		_sram_bank0_sub1C
		BRK
		.BYTE $68, $D7		; _syscall0D
		SEC
		LDA		byte_608D
		SBC		byte_C6
		STA		byte_608D
		JMP		sub_142BC0
loc_142AF1:				; CODE XREF: sub_142923+174-j
		LDA		byte_600D
		CMP		#$7F 
		BCC		loc_142AFE
		BRK
		.BYTE $7A, $87		; _msg_m00_arg2
loc_142AFB:				; CODE XREF: sub_142923+1E8-j
		JMP		sub_142BC0
loc_142AFE:				; CODE XREF: sub_142923+1D3-j
					; sub_142923+234-j sub_142923+29A-j
		BRK
		.BYTE $7B, $87		; _msg_m00_arg2
		BRK
		.BYTE $16, $17		; ofs 0x0002002c, -> dst _b1_s16
		LDX		#$13
		JSR		_bD_s10
		CMP		#$FF
		BEQ		loc_142AFB
		STA		byte_BD
		TAX
		LDA		byte_600D,X
		STA		byte_C5
		STA		byte_D2
		TAX
		JSR		_bD_s12
		JSR		loc_14203D
		LDA		byte_C0
		ORA		byte_C1
		ORA		byte_C2
		BNE		loc_142B2A
		LDA		#1
		STA		byte_C0
loc_142B2A:				; CODE XREF: sub_142923+201-j
		LDX		#2
loc_142B2C:				; CODE XREF: sub_142923+20F-j
		LDA		byte_C0,X
		STA		byte_63F,X
		DEX
		BPL		loc_142B2C
		BRK
		.BYTE $7C, $87		; _msg_m00_arg2
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_142B45
		BRK
		.BYTE $71, $87		; _msg_m00_arg2
		JMP		loc_142BAE
loc_142B45:				; CODE XREF: sub_142923+21A-j
		JSR		sub_141FB1
		BCS		loc_142B50
		BRK
		.BYTE $81, $87		; _msg_m00_arg2
		JMP		sub_142BC0
loc_142B50:				; CODE XREF: sub_142923+225-j
					; sub_142923+257-j
		LDA		#$7D 
		JSR		sub_141FC2
		BCC		loc_142B5A
		JMP		loc_142AFE
loc_142B5A:				; CODE XREF: sub_142923+232-j
		STA		byte_D2
		STA		byte_CE
		JSR		_sram_bank0_sub28
		LDA		word_4
		CMP		#8
		BCC		loc_142B82
		BRK
		.BYTE $7E, $87		; _msg_m00_arg2
		JSR		_sram_b0_s31
		LDA		word_4
		BNE		loc_142B74
		JMP		sub_142BC0
loc_142B74:				; CODE XREF: sub_142923+24C-j
		BRK
		.BYTE $33, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_142B50
		BRK
		.BYTE $71, $87		; _msg_m00_arg2
		JMP		loc_142BAE
loc_142B82:				; CODE XREF: sub_142923+242-j
		JSR		sub_141FF1
		BRK
		.BYTE $68, $D7		; _syscall0D
		LDA		byte_C3
		STA		byte_CE
		JSR		_sram_b0_sE
		BIT		word_4+1
		BMI		loc_142B99
		BRK
		.BYTE $34, $87		; _msg_m00_arg2
		JMP		loc_142BA4
loc_142B99:				; CODE XREF: sub_142923+26E-j
		BVC		loc_142BA1
		BRK
		.BYTE $35, $87		; _msg_m00_arg2
		JMP		loc_142BA4
loc_142BA1:				; CODE XREF: sub_142923:loc_142B99-j
		BRK
		.BYTE $82, $87		; _msg_m00_arg2
loc_142BA4:				; CODE XREF: sub_142923+273-j
					; sub_142923+27B-j
		LDX		byte_BD
		JSR		sub_141F03
		STA		byte_CF
		JSR		_sram_bank0_sub29
loc_142BAE:				; CODE XREF: sub_142923+21F-j
					; sub_142923+25C-j
		LDA		byte_600D
		CMP		#$7F 
		BCS		sub_142BC0
		BRK
		.BYTE $83, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		sub_142BCB
		JMP		loc_142AFE

; =============== S U B	R O U T	I N E =======================================
sub_142BC0:				; CODE XREF: sub_142923:loc_14294B-j
					; sub_142923+37-j sub_142923+7D-j
					; sub_142923+8A-j
					; sub_142923:loc_1429C7-j
					; sub_142923:loc_142A80-j
					; sub_142923+17F-j sub_142923+196-j
					; sub_142923+1CB-j
					; sub_142923:loc_142AFB-j
					; sub_142923+22A-j sub_142923+24E-j
					; sub_142923+290-j
		BRK
		.BYTE $84, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		sub_142BCB	; code used at a000
		JMP		sub_142923	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142BCB:				; CODE XREF: sub_142923+11-j
					; sub_142923+150-j sub_142923+298-j
					; sub_142BC0+6-j
		BRK
		.BYTE $85, $87		; _msg_m00_arg2
		BRK
		.BYTE $49, $17		; ofs 0x000080a0, -> dst _b0_s50
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142BD2:				; CODE XREF: sub_142923+52-p
					; sub_142923+5D-p sub_142923+185-p
					; sub_142923+1AB-p
		STA		byte_C0
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		JSR		sub_141F44
		JSR		sub_141F44
		JSR		sub_141F44
		LDX		#2
loc_142BE5:				; CODE XREF: sub_142BD2+1B-j
		LDA		byte_C0,X
		STA		byte_63F,X
		STA		byte_CE,X
		DEX
		BPL		loc_142BE5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142BF0:				; CODE XREF: sub_142923+40-p
					; sub_142923+18E-p
		BRK
		.BYTE $4D, $D7		; _syscall0D
		LDX		word_4		; code used at a000
		STX		byte_C0		; code used at a000
		LDX		word_4+1	; code used at a000
loc_142BF9:				; code used at a000
		STX		byte_C1
		LDX		word_6		; code used at a000
		STX		byte_C2		; code used at a000
		LDX		#$C		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_142C14	; code used at a000
		JSR		loc_14203D
		JSR		loc_14203D
		JSR		loc_14203D
		LDA		byte_C0
		RTS
loc_142C14:				; CODE XREF: sub_142BF0+16-j
		LDA		#0		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142C17:				; DATA XREF: BANKD:B3E5-o
		BRK
		.BYTE $41, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_142C59
		LDA		#$42 
		JSR		sub_141FC6
		BCS		loc_142C59
		STA		byte_CE
		STA		byte_D2
		JSR		_sram_b0_sE
		LDA		word_4+1
		BMI		loc_142C37
		BRK
		.BYTE $9A, $87		; _msg_m00_arg2
		JMP		loc_142C5C
loc_142C37:				; CODE XREF: sub_142C17+18-j
		JSR		_sram_b0_s2C
		LDA		word_4
		BNE		loc_142C44
		BRK
		.BYTE $43, $87		; _msg_m00_arg2
		JMP		loc_142C5C
loc_142C44:				; CODE XREF: sub_142C17+25-j
		STA		byte_C6
		STA		byte_D3
		STA		byte_CF
		JSR		_sram_bank0_subC
		LDA		word_4
		CMP		#$14
		BCS		loc_142C60
		BRK
		.BYTE $44, $87		; _msg_m00_arg2
		JMP		loc_142C5C
loc_142C59:				; CODE XREF: sub_142C17+6-j
					; sub_142C17+D-j sub_142C17+56-j
					; sub_142C17+6C-j sub_142C17+74-j
		BRK
		.BYTE $4B, $87		; _msg_m00_arg2
loc_142C5C:				; CODE XREF: sub_142C17+1D-j
					; sub_142C17+2A-j sub_142C17+3F-j
					; sub_142C17+63-j sub_142C17+98-j
		BRK
		.BYTE $4A, $87		; _msg_m00_arg2
		RTS
loc_142C60:				; CODE XREF: sub_142C17+3A-j
		BRK
		.BYTE $45, $87		; _msg_m00_arg2
		JSR		sub_142CBB
		LDX		#$13
		JSR		_bD_s10
		CMP		#$FF
		BEQ		loc_142C59
		STA		byte_D3
		STA		byte_CF
		CMP		byte_C6
		BNE		loc_142C7D
		BRK
		.BYTE $46, $87		; _msg_m00_arg2
		JMP		loc_142C5C
loc_142C7D:				; CODE XREF: sub_142C17+5E-j
		BRK
		.BYTE $47, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_142C59
		BRK
		.BYTE $48, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_142C59
		LDA		byte_CF
		CMP		#3
		BEQ		loc_142CB2
		BRK
		.BYTE $49, $87		; _msg_m00_arg2
loc_142C96:				; CODE XREF: sub_142C17+A1-j
		BRK
		.BYTE $3F, $17		; ofs 0x0002001c, -> dst _b1_sE
		LDA		byte_C6
		CMP		#7
		BEQ		loc_142CAC
		LDA		byte_CF
		CMP		#3
		BNE		loc_142CAC
		LDA		#$4C 
		STA		byte_C5
		JSR		sub_142104
loc_142CAC:				; CODE XREF: sub_142C17+86-j
					; sub_142C17+8C-j
		JSR		sub_142780
		JMP		loc_142C5C
loc_142CB2:				; CODE XREF: sub_142C17+7A-j
		BRK
		.BYTE 4, $87		; _msg_m00_arg2
		BRK
		.BYTE 3, $87		; _msg_m00_arg2
		JMP		loc_142C96

; =============== S U B	R O U T	I N E =======================================
sub_142CBB:				; CODE XREF: sub_142C17+4C-p
		LDA		byte_C6
		CMP		#7
		BEQ		loc_142CD8
		LDA		#$4C 
		STA		byte_CF
		BRK
		.BYTE $9C, 7		; ofs 0x0000808a, -> dst _b0_s45
		INC		word_4
		BNE		loc_142CD8
		BRK
		.BYTE $4F, $D7		; _syscall0D
loc_142CCF:				; CODE XREF: sub_142CBB+20-j
		CMP		#$FF
		BEQ		locret_142CD7
		TAX
		LDA		byte_142CDE,X
locret_142CD7:				; CODE XREF: sub_142CBB+16-j
		RTS
loc_142CD8:				; CODE XREF: sub_142CBB+4-j
					; sub_142CBB+F-j
		BRK
		.BYTE $47, $D7		; _syscall0D
		JMP		loc_142CCF
byte_142CDE:
		.BYTE	4,  2,	1,  6,	5,  3 ;	DATA XREF: sub_142CBB+19-r

; =============== S U B	R O U T	I N E =======================================
sub_142CE4:				; DATA XREF: BANKD:off_1433DF-o
		BRK
		.BYTE $59, $87		; _msg_m00_arg2

; =============== S U B	R O U T	I N E =======================================
sub_142CE7:				; CODE XREF: sub_142E22+A-j
		BRK
		.BYTE $5A, $87		; _msg_m00_arg2
		BRK
		.BYTE $46, $D7		; _syscall0D
		LDX		#$11		; code used at a000
		JSR		_bD_s10		; code used at a000
		CMP		#1		; code used at a000
		BCC		loc_142D05	; code used at a000
		BEQ		loc_142CFF	; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_142D02	; code used at a000
		JMP		sub_142E35	; code used at a000
loc_142CFF:				; CODE XREF: sub_142CE7+F-j
		JMP		loc_142D92	; code used at a000
loc_142D02:				; CODE XREF: sub_142CE7+13-j
		JMP		sub_142E69	; code used at a000
loc_142D05:				; CODE XREF: sub_142CE7+D-j
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#4		; code used at a000
		BCC		loc_142D14	; code used at a000
		BRK
		.BYTE $5B, $87		; _msg_m00_arg2
		JMP		sub_142E22	; code used at a000
loc_142D14:				; CODE XREF: sub_142CE7+25-j
		JSR		_sram_bank0_sub32 ; code used at a000
		LDA		word_4		; code used at a000
		BNE		loc_142D21	; code used at a000
		BRK
		.BYTE $5C, $87		; _msg_m00_arg2
		JMP		sub_142E22
loc_142D21:				; CODE XREF: sub_142CE7+32-j
		JSR		sub_1420EE	; code used at a000
		BRK
		.BYTE $5D, $87		; _msg_m00_arg2
		LDA		#6		; code used at a000
		STA		byte_C6		; code used at a000
		BRK
		.BYTE $34, $D7		; _syscall0D
		CMP		#$FF		; code used at a000
		BNE		loc_142D3A	; code used at a000
		LDX		#$10
		JSR		_bD_s10
		JMP		sub_142E22
loc_142D3A:				; CODE XREF: sub_142CE7+49-j
		STA		byte_BD		; code used at a000
		JSR		_sram_bank0_sub32 ; code used at a000
		LDA		byte_BD		; code used at a000
		CMP		word_4		; code used at a000
		BCC		loc_142D50	; code used at a000
		LDX		#$10		; code used at a000
		JSR		_bD_s10		; code used at a000
		BRK
		.BYTE $5E, $87		; _msg_m00_arg2
		JMP		sub_142E22	; code used at a000
loc_142D50:				; CODE XREF: sub_142CE7+5C-j
		LDX		byte_BD		; code used at a000
		LDA		word_4+1,X	; code used at a000
		STA		byte_CE		; code used at a000
		BRK
		.BYTE $69, $17		; ofs 0x000b0022, -> dst _b7_s11
		STA		byte_D2		; code used at a000
		STA		byte_D3		; code used at a000
		STA		byte_D4		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_100,X	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_100,X	; code used at a000
		LDA		byte_101,X	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_101,X	; code used at a000
		BRK
		.BYTE $5F, $87		; _msg_m00_arg2
		JSR		sub_142780	; code used at a000
		LDA		byte_AC		; code used at a000
		ORA		#$1F		; code used at a000
		STA		byte_AC		; code used at a000
		JSR		sub_142ECB	; code used at a000
		LDA		byte_AC		; code used at a000
		AND		#$E0       ; code used at a000
		STA		byte_AC		; code used at a000
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		LDX		#$10		; code used at a000
		JSR		_bD_s10		; code used at a000
		JMP		sub_142E22	; code used at a000
loc_142D92:				; CODE XREF: sub_142CE7:loc_142CFF-j
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#2		; code used at a000
		BCS		loc_142DA1	; code used at a000
		BRK
		.BYTE $60, $87		; _msg_m00_arg2
		JMP		sub_142E35
loc_142DA1:				; CODE XREF: sub_142CE7+B2-j
		JSR		sub_1420EE	; code used at a000
		LDA		#$61       ; code used at a000
		JSR		sub_141FC6	; code used at a000
		BCC		loc_142DAE	; code used at a000
		JMP		sub_142E2F
loc_142DAE:				; CODE XREF: sub_142CE7+C2-j
		STA		byte_D2		; code used at a000
		BRK
		.BYTE $63, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		sub_142E2F	; code used at a000
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_b0_s2C	; code used at a000
		LDA		word_4		; code used at a000
		BNE		loc_142DD0	; code used at a000
		LDA		byte_60B7
		AND		#1
		BNE		loc_142DD0
		BRK
		.BYTE $64, $87		; _msg_m00_arg2
		JMP		sub_142E22
loc_142DD0:				; CODE XREF: sub_142CE7+DA-j
					; sub_142CE7+E1-j
		JSR		_sram_bank0_sub33 ; code used at a000
		LDX		word_4		; code used at a000
		DEX				; code used at a000
		BNE		loc_142DE7	; code used at a000
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		LDA		word_4		; code used at a000
		CMP		byte_C3		; code used at a000
		BNE		loc_142DE7	; code used at a000
		BRK
		.BYTE $95, $87		; _msg_m00_arg2
		JMP		sub_142E35
loc_142DE7:				; CODE XREF: sub_142CE7+EF-j
					; sub_142CE7+F8-j
		LDA		byte_C3		; code used at a000
		STA		byte_D2		; code used at a000
		STA		byte_D3		; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE $65, $87		; _msg_m00_arg2
		LDA		byte_C3		; code used at a000
		BNE		loc_142DF9	; code used at a000
		INC		byte_D2
		BNE		loc_142DFD
loc_142DF9:				; CODE XREF: sub_142CE7+10C-j
		LDA		#0		; code used at a000
		STA		byte_D2		; code used at a000
loc_142DFD:				; CODE XREF: sub_142CE7+110-j
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#3		; code used at a000
		BCC		loc_142E0C	; code used at a000
		BRK
		.BYTE $93, $87		; _msg_m00_arg2
		JMP		loc_142E0F	; code used at a000
loc_142E0C:				; CODE XREF: sub_142CE7+11D-j
		BRK
		.BYTE $92, $87		; _msg_m00_arg2
loc_142E0F:				; CODE XREF: sub_142CE7+122-j
		LDA		byte_C3		; code used at a000
		STA		byte_CE		; code used at a000
		BRK
		.BYTE $6A, $17		; ofs 0x000b0024, -> dst _b7_s12
		PLA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		STX		word_6C		; code used at a000
		JSR		sub_142E3C	; code used at a000
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A

; =============== S U B	R O U T	I N E =======================================
sub_142E22:				; CODE XREF: sub_142CE7+2A-j
					; sub_142CE7+37-j sub_142CE7+50-j
					; sub_142CE7+66-j sub_142CE7+A8-j
					; sub_142CE7+E6-j sub_142E2F+3-j
					; sub_142E69+A-j sub_142E69+23-j
					; sub_142E69+5F-j
		BRK
		.BYTE $66, $87		; _msg_m00_arg2
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		CMP		#0		; code used at a000
		BNE		sub_142E35	; code used at a000
		JMP		sub_142CE7	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142E2F:				; CODE XREF: sub_142CE7+C4-j
					; sub_142CE7+CF-j
		BRK
		.BYTE $62, $87		; _msg_m00_arg2
		JMP		sub_142E22

; =============== S U B	R O U T	I N E =======================================
sub_142E35:				; CODE XREF: sub_142CE7+15-j
					; sub_142CE7+B7-j sub_142CE7+FD-j
					; sub_142E22+8-j
		BRK
		.BYTE $67, $87		; _msg_m00_arg2
		BRK
		.BYTE $AA, 7		; ofs 0x0000808e, -> dst _b0_s47
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142E3C:				; CODE XREF: sub_142CE7+135-p
		LDX		#$C		; code used at a000
loc_142E3E:				; CODE XREF: sub_142E3C+B-j
		LDA		byte_100,X	; code used at a000
		BPL		loc_142E49	; code used at a000
		DEX				; code used at a000
		DEX				; code used at a000
		DEX				; code used at a000
		DEX				; code used at a000
		BNE		loc_142E3E	; code used at a000
loc_142E49:				; CODE XREF: sub_142E3C+5-j
		LDA		#$80       ; code used at a000
		STA		byte_100,X	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		BRK
		.BYTE $FA, 7		; ofs 0x00128070, -> dst _bC_s38
		JSR		sub_142780	; code used at a000
		PLA				; code used at a000
		STA		word_6C		; code used at a000
		BRK
		.BYTE $FA, 7		; ofs 0x00128070, -> dst _bC_s38
		LDA		byte_174	; code used at a000
		ORA		#$F0       ; code used at a000
		STA		byte_174	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142E69:				; CODE XREF: sub_142CE7:loc_142D02-j
		JSR		_sram_bank0_sub32 ; code used at a000
		LDA		word_4		; code used at a000
		BNE		loc_142E76	; code used at a000
		BRK
		.BYTE $99, $87		; _msg_m00_arg2
		JMP		sub_142E22	; code used at a000
loc_142E76:				; CODE XREF: sub_142E69+5-j
		JSR		sub_1420EE	; code used at a000
		BRK
		.BYTE $98, $87		; _msg_m00_arg2
		LDA		#7		; code used at a000
		STA		byte_C6		; code used at a000
		BRK
		.BYTE $34, $D7		; _syscall0D
		CMP		#$FF		; code used at a000
		BNE		loc_142E8F	; code used at a000
		LDX		#$10		; code used at a000
		JSR		_bD_s10		; code used at a000
		JMP		sub_142E22	; code used at a000
loc_142E8F:				; CODE XREF: sub_142E69+1C-j
		STA		byte_C3		; code used at a000
		JSR		_sram_bank0_sub32 ; code used at a000
		LDX		byte_C3		; code used at a000
		LDA		word_4+1,X	; code used at a000
		STA		byte_C3		; code used at a000
		LDA		byte_630F	; code used at a000
		PHA				; code used at a000
		LDA		byte_C3		; code used at a000
		STA		byte_630F	; code used at a000
		BRK
		.BYTE $6C, $17		; ofs 0x000b0028, -> dst _b7_s14
		LDA		#0		; code used at a000
		STA		byte_CE		; code used at a000
		BRK
		.BYTE 9, $D7		; _syscall0D
		JSR		__pause_or_skip	; code used at a000
		BRK
		.BYTE 8, $D7		; _syscall0D
		BRK
		.BYTE $A, $D7		; _syscall0D
		PLA				; code used at a000
		STA		byte_630F	; code used at a000
		BRK
		.BYTE $6C, $17		; ofs 0x000b0028, -> dst _b7_s14
		JSR		__pause_or_skip	; code used at a000
		LDX		#0		; code used at a000
		JSR		_bD_s10		; code used at a000
		JSR		sub_174CCF	; code used at a000
		JMP		sub_142E22	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_142ECB:				; CODE XREF: sub_142CE7+97-p
		LDA		byte_80		; code used at a000
		PHA				; code used at a000
		LDA		byte_81		; code used at a000
		PHA				; code used at a000
		LDA		#$60       ; code used at a000
		STA		byte_C6		; code used at a000
		JSR		sub_1424E4	; code used at a000
		PLA				; code used at a000
		STA		byte_81		; code used at a000
		PLA				; code used at a000
		STA		byte_80		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_sF:					; DATA XREF: BANKD:801E-o BANKD:B3E7-o
		LDA		#0		; ind code used	at a000
		STA.W		byte_CE		; code used at a000
		STA		byte_C1		; code used at a000
		STA		byte_C2		; code used at a000
		STA		byte_641	; code used at a000
		JSR		_sram_bank0_subC ; code	used at	a000
		LDA		word_4		; code used at a000
		STA		byte_C0		; code used at a000
		JSR		sub_141F44	; code used at a000
		LDA		byte_C0		; code used at a000
		STA		byte_63F	; code used at a000
loc_142EFA:				; code used at a000
		STA		byte_6A3B
		LDA		byte_C1		; code used at a000
		STA		byte_640	; code used at a000
		STA		byte_6A3C	; code used at a000
		BRK
		.BYTE $8C, $87		; _msg_m00_arg2
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_142F4F	; code used at a000
		JSR		sub_141FB1	; code used at a000
		BCS		loc_142F1B	; code used at a000
		BRK
		.BYTE $8E, $87		; _msg_m00_arg2
		JMP		loc_142F52
loc_142F1B:				; CODE XREF: _bD_sF+34-j
		BRK
		.BYTE $66, $D7		; _syscall0D
		CMP		#4		; code used at a000
		BCS		loc_142F4F	; code used at a000
loc_142F22:				; code used at a000
		STA		byte_6A67
		STA		byte_64		; code used at a000
		BRK
		.BYTE $B1, 7		; ofs 0x00068024, -> dst _b4_s12
		STA		byte_D2		; code used at a000
		JSR		sub_141FF1	; code used at a000
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE $90, $87		; _msg_m00_arg2
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDX		#0		; code used at a000
		JSR		_bD_s10		; code used at a000
		LDA		#$33       ; code used at a000
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
loc_142F42:				; code used at a000
		LDA		#0
		STA		byte_6EB	; code used at a000
		LDA		#$20       ; code used at a000
		STA		byte_6EF	; code used at a000
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000
loc_142F4F:				; CODE XREF: _bD_sF+2F-j _bD_sF+41-j
		BRK
		.BYTE $8D, $87		; _msg_m00_arg2
loc_142F52:				; CODE XREF: _bD_sF+39-j
		BRK
		.BYTE $91, $87		; _msg_m00_arg2
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_sC:					; CODE XREF: sub_680FE+31-P
					; DATA XREF: BANKD:8018-o
		LDA		byte_6A65	; code used at a000
		CMP		#$FE       ; code used at a000
		BNE		loc_142F60	; code used at a000
		JMP		locret_143008
loc_142F60:				; CODE XREF: _bD_sC+5-j
		PHA				; code used at a000
		BRK
		.BYTE $3D, $E7		; _syscall0E
		PLA				; code used at a000
		CMP		#4		; code used at a000
		BCC		loc_142F6C	; code used at a000
		JMP		loc_142FED	; code used at a000
loc_142F6C:				; CODE XREF: _bD_sC+11-j
		STA		byte_64		; code used at a000
		CMP		byte_6A67	; code used at a000
		PHP				; code used at a000
		BRK
		.BYTE $B1, 7		; ofs 0x00068024, -> dst _b4_s12
		STA		byte_D2		; code used at a000
		PLP				; code used at a000
		BEQ		loc_142F84	; code used at a000
		LDA		#$CF       ; code used at a000
		LDX		#0		; code used at a000
		BRK
		.BYTE 8, 7		; ofs 0x00158010, -> dst _bE_s4_msg_m00
		JMP		locret_143008	; code used at a000
loc_142F84:				; CODE XREF: _bD_sC+22-j
		LDX		#0		; code used at a000
loc_142F86:				; CODE XREF: _bD_sC+36-j
		LDA		word_4,X	; code used at a000
		PHA				; code used at a000
		INX				; code used at a000
		CPX		#8		; code used at a000
		BCC		loc_142F86	; code used at a000
		LDA		#0		; code used at a000
		TAX				; code used at a000
loc_142F91:				; CODE XREF: _bD_sC+40-j
		STA		word_4,X	; code used at a000
		INX				; code used at a000
		CPX		#8		; code used at a000
		BCC		loc_142F91	; code used at a000
		STA		byte_C2		; code used at a000
		LDA		byte_6A3B	; code used at a000
		STA		byte_C0		; code used at a000
		LDA		byte_6A3C	; code used at a000
		STA		byte_C1		; code used at a000
		LDX		byte_6A67	; code used at a000
		LDA		byte_6AD5,X	; code used at a000
		STA		word_4+1	; code used at a000
		LDA		byte_6AD9,X	; code used at a000
		TAX				; code used at a000
		LDA		byte_143036,X	; code used at a000
		STA		word_4		; code used at a000
		JSR		sub_143009	; code used at a000
		LDA		word_6		; code used at a000
		BEQ		loc_142FC6	; code used at a000
		INC		word_6+1	; code used at a000
		BNE		loc_142FC6	; code used at a000
		INC		byte_8
		BNE		loc_142FC6
		INC		byte_9
loc_142FC6:				; CODE XREF: _bD_sC+64-j _bD_sC+68-j
					; _bD_sC+6C-j
		LDA		word_6+1	; code used at a000
		STA		byte_C0		; code used at a000
		STA		byte_63F	; code used at a000
		LDA		byte_8		; code used at a000
		STA		byte_C1		; code used at a000
		STA		byte_640	; code used at a000
		LDA		byte_9		; code used at a000
		STA		byte_C2		; code used at a000
		STA		byte_641	; code used at a000
		LDX		#7		; code used at a000
loc_142FDD:				; CODE XREF: _bD_sC+8B-j
		PLA				; code used at a000
		STA		word_4,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_142FDD	; code used at a000
		LDA		#$CE       ; code used at a000
		LDX		#0		; code used at a000
		BRK
		.BYTE 8, 7		; ofs 0x00158010, -> dst _bE_s4_msg_m00
		JMP		loc_143002	; code used at a000
loc_142FED:				; CODE XREF: _bD_sC+13-j
		LDA		#$D0       ; code used at a000
		LDX		#0		; code used at a000
		BRK
		.BYTE 8, 7		; ofs 0x00158010, -> dst _bE_s4_msg_m00
		LDA		byte_6A3B	; code used at a000
		STA		byte_C0		; code used at a000
		LDA		byte_6A3C	; code used at a000
		STA		byte_C1		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_C2		; code used at a000
loc_143002:				; CODE XREF: _bD_sC+94-j
		JSR		loc_14200A	; code used at a000
		BRK
		.BYTE $68, $D7		; _syscall0D
locret_143008:				; CODE XREF: _bD_sC+7-j	_bD_sC+2B-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143009:				; CODE XREF: _bD_sC+5F-p
		LDX		#$10		; code used at a000
loc_14300B:				; CODE XREF: sub_143009+2A-j
		LSR		byte_C1		; code used at a000
		ROR		byte_C0		; code used at a000
		BCC		loc_14302A	; code used at a000
		LDA		word_4		; code used at a000
		CLC				; code used at a000
		ADC		word_6		; code used at a000
		STA		word_6		; code used at a000
		LDA		word_4+1	; code used at a000
		ADC		word_6+1	; code used at a000
		STA		word_6+1	; code used at a000
		LDA		byte_A		; code used at a000
		ADC		byte_8		; code used at a000
		STA		byte_8		; code used at a000
		LDA		byte_B		; code used at a000
		ADC		byte_9		; code used at a000
		STA		byte_9		; code used at a000
loc_14302A:				; CODE XREF: sub_143009+6-j
		ASL		word_4		; code used at a000
		ROL		word_4+1	; code used at a000
		ROL		byte_A		; code used at a000
		ROL		byte_B		; code used at a000
		DEX				; code used at a000
		BNE		loc_14300B	; code used at a000
		RTS				; code used at a000
byte_143036:
		.BYTE	0,$1A,$34,$4D,$67,$80,$9A,$B4,$CD,$E7 ;	DATA XREF: _bD_sC+5A-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_param_b0:			; CODE XREF: _npc_hndl28+12-p
					; _npc_hndl5F-p
		LDY		#0
		BEQ		__msg_m00_select_param

; =============== S U B	R O U T	I N E =======================================
; unused
__msg_m00_param_b1:
		LDY		#2
		BNE		__msg_m00_select_param

; =============== S U B	R O U T	I N E =======================================
__msg_m00_param_b2:			; CODE XREF: _npc_hndl47+32-p
					; _npc_hndl47+62-p
		LDY		#4		; code used at a000
		BNE		__msg_m00_select_param ; code used at a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_b3:				; CODE XREF: _msg_m00_b3-j
		TYA				; code used at a000
		LDY		#6		; code used at a000
		BNE		__msg_m00_select ; code	used at	a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_b4:				; CODE XREF: _msg_m00_b4-j
		TYA				; code used at a000
		LDY		#8		; code used at a000
		BNE		__msg_m00_select ; code	used at	a000

; =============== S U B	R O U T	I N E =======================================
___msg_m00_param_break_b0:		; CODE XREF: sub_143179+39-p
					; sub_1431F7+17-p _npc_hndl3+6-p
					; _npc_hndl23:loc_1438BD-p
					; _npc_hndl26:loc_143911-p
					; _npc_hndl28+5-p
		LDY		#0		; code used at a000
		BEQ		___msg_m00_select_param_break ;	code used at a000

; =============== S U B	R O U T	I N E =======================================
___msg_m00_param_break_b1:		; CODE XREF: sub_14327E+3A-p
		LDY		#2
		BNE		___msg_m00_select_param_break

; =============== S U B	R O U T	I N E =======================================
___msg_m00_param_break_b2:		; CODE XREF: _npc_hndl30-p
					; _npc_hndl44+3-p _npc_hndl46+9-p
		LDY		#4
		BNE		___msg_m00_select_param_break

; =============== S U B	R O U T	I N E =======================================
__msg_m00_b3_break:			; CODE XREF: _msg_m00_b3_break-j
		TYA				; code used at a000
		LDY		#6		; code used at a000
		JSR		__msg_m00_select ; code	used at	a000
		BCS		_break		; code used at a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_b4_break:			; CODE XREF: _msg_m00_b4_break-j
		TYA
		LDY		#8
		JSR		__msg_m00_select
		BCS		_break

; =============== S U B	R O U T	I N E =======================================
___msg_m00_select_param_break:		; CODE XREF: ___msg_m00_param_break_b0+2-j
					; ___msg_m00_param_break_b1+2-j
					; ___msg_m00_param_break_b2+2-j
					; __msg_m00_param_break_b3+5-j
					; __msg_m00_param_break_b4+5-j
		JSR		___msg_m00_select_param	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_break:					; CODE XREF: __msg_m00_b3_break+6-j
					; __msg_m00_b4_break+6-j
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_select_param:			; CODE XREF: __msg_m00_param_b0+2-j
					; __msg_m00_param_b1+2-j
					; __msg_m00_param_b2+2-j
					; __msg_m00_param_b3+5-j
					; __msg_m00_param_b4+5-j
		JSR		___msg_m00_select_param	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
___msg_m00_select_param:		; CODE XREF: ___msg_m00_select_param_break-p
					; __msg_m00_select_param-p
		TSX				; code used at a000
		INC		byte_103,X	; code used at a000
		LDA		byte_103,X	; code used at a000
		STA		byte_6A		; code used at a000
		BNE		loc_14308A	; code used at a000
		INC		byte_104,X
loc_14308A:				; CODE XREF: ___msg_m00_select_param+9-j
		LDA		byte_104,X	; code used at a000
		STA		byte_6B		; code used at a000
		LDX		#0		; code used at a000
		LDA		(byte_6A,X)	; code used at a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_select:			; CODE XREF: __msg_m00_b3+3-j
					; __msg_m00_b4+3-j
					; __msg_m00_b3_break+3-p
					; __msg_m00_b4_break+3-p
		CLC				; code used at a000
		ADC		_msg_bank_ofs_list,Y ; code used at a000
		PHA				; code used at a000
		LDA		#0		; code used at a000
		ADC		_msg_bank_ofs_list+1,Y ; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		JSR		_far_bE_s4_msg_m00_delta3 ; code used at a000
		SEC				; code used at a000
		RTS				; code used at a000
_msg_bank_ofs_list:
		.WORD 0		; DATA XREF: __msg_m00_select+1-r
					; __msg_m00_select+7-r
					; data used at a000
		.WORD $F7
		.WORD $1F7		; data used at a000
		.WORD $2B5		; data used at a000
		.WORD $3B5		; data used at a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_param_break_b3:		; CODE XREF: _npc_hndl1+51-p
					; _npc_hndl4-p _npc_hndl5+3-p
					; _npc_hndl1F+7-p _npc_hndl20-p
					; _npc_hndl3E-p	_npc_hndl3F-p
					; _npc_hndl41-p	_npc_hndl52+C-p
					; _npc_hndl53+3-p _npc_hndl5C+22-p
					; _npc_hndl5C+40-p _npc_hndl60-p
					; _npc_hndl61-p	_npc_hndl6C+2B-p
		JSR		_bD_sB		; code used at a000
		LDY		#6		; code used at a000
		BNE		___msg_m00_select_param_break ;	code used at a000

; =============== S U B	R O U T	I N E =======================================
__msg_m00_param_break_b4:		; CODE XREF: sub_1431F7+5B-p
		JSR		_bD_sB
		LDY		#8
		BNE		___msg_m00_select_param_break

; =============== S U B	R O U T	I N E =======================================
__msg_m00_param_b3:			; CODE XREF: _npc_hndlA+3-p
					; _npc_hndl29-p	_npc_hndl43:loc_143B21-p
					; _npc_hndl6C+7-p
					; _npc_hndl6C:loc_143DD7-p
		JSR		_bD_sB		; code used at a000
		LDY		#6		; code used at a000
		BNE		__msg_m00_select_param ; code used at a000

; =============== S U B	R O U T	I N E =======================================
; unused
__msg_m00_param_b4:
		JSR		_bD_sB
		LDY		#8
		BNE		__msg_m00_select_param

; =============== S U B	R O U T	I N E =======================================
_bD_sB:					; CODE XREF: _b7_s1A+17-P sub_F933D+31-P
					; sub_1280A6+FE-P
					; sub_12B518:loc_12B564-P
					; sub_12B820+15-P sub_12B820+2C-P
					; __msg_m00_param_break_b3-p
					; __msg_m00_param_break_b4-p
					; __msg_m00_param_b3-p
					; __msg_m00_param_b4-p sub_143179+64-p
					; sub_1431F7+30-p _npc_hndl0-p
					; _npc_hndl1-p _npc_hndl1D-p
					; _npc_hndl21-p	_npc_hndl2C+7-p
					; _npc_hndl42+F-p sub_143AEA-p
					; _npc_hndl46+12-p _npc_hndl50-p
					; _npc_hndl66-p	sub_143EB8+1-p
					; sub_15AC41+18-P sub_294028+6-P
					; DATA XREF: BANKD:8016-o
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_CE		; code used at a000
		STA		byte_8		; code used at a000
loc_1430D3:				; CODE XREF: _bD_sB+14-j
		DEC		byte_CE		; code used at a000
		BMI		loc_1430E0	; code used at a000
		JSR		_sram_b0_s2C	; code used at a000
		LDA		word_4		; code used at a000
		BEQ		loc_1430E4	; code used at a000
		BNE		loc_1430D3	; code used at a000
loc_1430E0:				; CODE XREF: _bD_sB+B-j
		LDA		#0
		STA		byte_CE
loc_1430E4:				; CODE XREF: _bD_sB+12-j
		LDA		byte_CE		; code used at a000
		STA		byte_D2		; code used at a000
		JSR		_sram_b0_s2F	; code used at a000
		LDA		word_4		; code used at a000
		STA		word_6+1	; code used at a000
		JMP		_sram_b0_sE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1430F2:				; CODE XREF: _npc_hndl1:loc_143559-p
					; _npc_hndl24+3-p
		LDA		byte_6DF	; code used at a000
		STA		word_4		; code used at a000
		CMP		#$78       ; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1430FA:				; CODE XREF: _npc_hndl1:loc_143566-p
					; _npc_hndl3+16-p _npc_hndl4D-p
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#2		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143102:				; CODE XREF: _npc_hndl1C+10-j
					; _npc_hndl67+35-p
		STA		byte_CF
		BRK
		.BYTE $68, 7		; ofs 0x00008078, -> dst _b0_s3C
		BCS		sub_143126
		BRK
		.BYTE $F1, $27		; _msg_m00_b3
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s27:				; CODE XREF: _bC_s2B+1B-P
					; _npc_hndl19+12-p _npc_hndl1E+F-p
					; _npc_hndl27+5-p
					; _npc_hndl2D:loc_143A16-p
					; _npc_hndl68+F-p
					; DATA XREF: BANKD:804E-o
		STA		byte_CF
		BRK
		.BYTE $68, 7		; ofs 0x00008078, -> dst _b0_s3C
		BCS		sub_143126
		BRK
		.BYTE $F2, $27		; _msg_m00_b3
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_14311A:				; CODE XREF: _npc_hndl2+15-p
					; _npc_hndl25+14-p _npc_hndl5C+35-p
					; _npc_hndl6C+21-p
		STA		byte_CF		; code used at a000
		BRK
		.BYTE $68, 7		; ofs 0x00008078, -> dst _b0_s3C
		BCS		sub_143126	; code used at a000
		BRK
		.BYTE $F3, $27		; _msg_m00_b3
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143126:				; CODE XREF: sub_143102+5-j _bD_s27+5-j
					; sub_14311A+5-j
		STA		byte_CE		; code used at a000
		JMP		_sram_bank0_sub29 ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_14312B:				; CODE XREF: _npc_hndl16+C-p
					; _npc_hndl1C+5-p _npc_hndl22+11-p
					; _npc_hndl42+2-p _npc_hndl4D+13-p
					; _npc_hndl4D+1A-p _npc_hndl4D+21-p
					; _npc_hndl5C+A-p _npc_hndl67+F-p
					; _npc_hndl67+19-p _npc_hndl67+20-p
					; _npc_hndl67+2A-p _npc_hndl69+2-p
					; _npc_hndl6A+5-p
		STA		byte_CE		; code used at a000
		JMP		_sram_bank0_sub2B ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143130:				; CODE XREF: _npc_hndl16:loc_143772-p
					; _npc_hndl22+38-p
					; _npc_hndl42:loc_143AC9-p
					; _npc_hndl5C+F-p _npc_hndl67+25-p
					; _npc_hndl67+2D-p
		LDA		word_4		; code used at a000
		STA		byte_CE		; code used at a000
		LDA		word_4+1	; code used at a000
		STA		byte_CF		; code used at a000
		JMP		_sram_bank0_sub2A ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_14313B:				; CODE XREF: sub_14327E+46-p
		STA		byte_5C		; code used at a000
		STX		byte_5D		; code used at a000
		LDA		word_4		; code used at a000
		SEC				; code used at a000
		SBC		byte_5C		; code used at a000
		STA		byte_5C		; code used at a000
		LDA		word_4+1	; code used at a000
		SBC		byte_5D		; code used at a000
		STA		byte_5D		; code used at a000
		ORA		byte_5C		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_add_arg5C_to16:			; CODE XREF: sub_143179+78-p
					; sub_1431F7+81-p sub_1434D9+4-p
					; sub_1434E3+4-p sub_1434ED+4-p
					; sub_1434F4+9-p sub_143503+4-p
					; sub_143E48+13-p sub_143EBD+60-p
		CLC				; code used at a000
		ADC		byte_5C		; code used at a000
		STA		byte_5C		; code used at a000
		TXA				; code used at a000
		ADC		byte_5D		; code used at a000
		STA		byte_5D		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_14315A:				; CODE XREF: sub_1431F7+63-p
					; sub_1431F7+6F-p _npc_hndl16+21-p
					; _npc_hndl22:loc_143881-p
		LDY		#4
loc_14315C:				; CODE XREF: sub_14315A+9-j
		LDA		word_4,Y
		STA		word_60+1,Y
		DEY
		BPL		loc_14315C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143166:				; CODE XREF: sub_14327E-p
					; _npc_hndl16+2A-p _npc_hndl22+35-p
		LDY		#4
loc_143168:				; CODE XREF: sub_143166+9-j
		LDA		word_60+1,Y
		STA		word_4,Y
		DEY
		BPL		loc_143168
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s16:				; CODE XREF: sub_158203+F1-P
					; DATA XREF: BANKD:802C-o
		JSR		sub_143179	; code used at a000
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143179:				; CODE XREF: _bD_s16-p
		LDA		word_4		; code used at a000
		ORA		word_4+1	; code used at a000
		BNE		loc_143182	; code used at a000
		BRK
		.BYTE $F4, $47		; _msg_m00_b3_break
loc_143182:				; CODE XREF: sub_143179+4-j
		LDA		word_4+1	; code used at a000
		BNE		loc_143195	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#$EC       ; code used at a000
		BCC		loc_143195	; code used at a000
		CMP		#$F2 
		BCS		loc_143195
		LDA		#$AC 
		JSR		sub_143F9E
loc_143195:				; CODE XREF: sub_143179+B-j
					; sub_143179+11-j sub_143179+15-j
		LDA		byte_60C5	; code used at a000
		BPL		loc_1431A3	; code used at a000
		LDA		word_6
		AND		#$20 
		BEQ		loc_1431C2
		BRK
		.BYTE $B3, $47		; _msg_m00_b3_break
loc_1431A3:				; CODE XREF: sub_143179+1F-j
		LDA		byte_60CB	; code used at a000
		BPL		sub_1431F7	; code used at a000
		LDA		word_4
		CMP		#$99 
		BNE		loc_1431B6
		LDA		word_4+1
		BNE		loc_1431B6
		JSR		___msg_m00_param_break_b0
		.BYTE $4E
loc_1431B6:				; CODE XREF: sub_143179+33-j
					; sub_143179+37-j
		LDA		byte_8B
		BEQ		loc_1431C2
		CMP		#$41 
		BCC		sub_1431F7
		CMP		#$48 
		BCS		sub_1431F7
loc_1431C2:				; CODE XREF: sub_143179+25-j
					; sub_143179+3F-j
		LDY		#$63 
loc_1431C4:				; CODE XREF: sub_143179+5C-j
		LDA		byte_14333D,Y
		CMP		word_4
		BNE		loc_1431D2
		LDA		byte_14333D+1,Y
		CMP		word_4+1
		BEQ		loc_1431D9
loc_1431D2:				; CODE XREF: sub_143179+50-j
		DEY
		DEY
		DEY
		BPL		loc_1431C4
		BMI		sub_1431F7
loc_1431D9:				; CODE XREF: sub_143179+57-j
		LDA		byte_14333D+2,Y
		PHA
		JSR		_bD_sB
		LDA		byte_D2
		STA		byte_D3
		STA		byte_D4
		PLA
		STA		byte_5C
		LDA		#0
		STA		byte_5D
		LDA		#byte_69
		LDX		#3
		JSR		_add_arg5C_to16
		JMP		__far_bE_s4_msg_m00_delta3_arg5C

; =============== S U B	R O U T	I N E =======================================
sub_1431F7:				; CODE XREF: sub_143179+2D-j
					; sub_143179+43-j sub_143179+47-j
					; sub_143179+5E-j
		LDA		word_6		; code used at a000
		AND		#$1F		; code used at a000
		STA		word_6		; code used at a000
		LDA		byte_8B		; code used at a000
		CMP		#$B		; code used at a000
		BEQ		loc_143207	; code used at a000
		CMP		#$78       ; code used at a000
		BNE		loc_143212	; code used at a000
loc_143207:				; CODE XREF: sub_1431F7+A-j
		LDA		byte_60B7	; code used at a000
		AND		#4		; code used at a000
		BNE		loc_143212	; code used at a000
		JSR		___msg_m00_param_break_b0 ; code used at a000
		.BYTE 2			; ind data used	at a000
loc_143212:				; CODE XREF: sub_1431F7+E-j
					; sub_1431F7+15-j
		LDY		#0		; code used at a000
		LDA		byte_AC		; code used at a000
		AND		#$1F		; code used at a000
		BNE		loc_143244	; code used at a000
		LDA		byte_60C9	; code used at a000
		BNE		loc_143231	; code used at a000
		LDA		byte_60C5	; code used at a000
		BPL		loc_143281	; code used at a000
		LDA		word_6
		PHA
		JSR		_bD_sB
		PLA
		STA		word_6
		LDY		#$40 
		BNE		loc_143244
loc_143231:				; CODE XREF: sub_1431F7+26-j
		LDY		#$20 
		LDA		byte_60B8
		AND		#$3F 
		CMP		#$17
		BEQ		loc_143244
		CMP		#$18
		BEQ		loc_143244
		CMP		#$20 
		BNE		loc_143281
loc_143244:				; CODE XREF: sub_1431F7+21-j
					; sub_1431F7+38-j sub_1431F7+43-j
					; sub_1431F7+47-j
		TYA
		CLC
		ADC		word_6
		TAY
		LDA		byte_1432DD,Y
		BEQ		loc_143281
		CMP		#1
		BNE		loc_143256
		JSR		__msg_m00_param_break_b4
		.BYTE $1F
loc_143256:				; CODE XREF: sub_1431F7+59-j
		CMP		#2
		BNE		loc_143262
		JSR		sub_14315A
		BRK
		.BYTE $20, $37		; _msg_m00_b4
		BCS		sub_14327E
loc_143262:				; CODE XREF: sub_1431F7+61-j
		CMP		#3
		BNE		loc_14326E
		JSR		sub_14315A
		BRK
		.BYTE $21, $37		; _msg_m00_b4
		BCS		sub_14327E
loc_14326E:				; CODE XREF: sub_1431F7+6D-j
		STA		byte_5C
		LDA		#0
		STA		byte_5D
		LDA		#$D3 
		LDX		#3
		JSR		_add_arg5C_to16
		JMP		__far_bE_s4_msg_m00_delta3_arg5C

; =============== S U B	R O U T	I N E =======================================
sub_14327E:				; CODE XREF: sub_1431F7+69-j
					; sub_1431F7+75-j
		JSR		sub_143166
loc_143281:				; CODE XREF: sub_1431F7+2B-j
					; sub_1431F7+4B-j sub_1431F7+55-j
		BIT		byte_60B7	; code used at a000
		BVC		loc_1432A7	; code used at a000
		LDY		#$15		; code used at a000
loc_143288:				; CODE XREF: sub_14327E+27-j
		LDA		word_4		; code used at a000
		CMP		byte_1433A3,Y	; code used at a000
		BNE		loc_1432A2	; code used at a000
		LDA		word_4+1	; code used at a000
		CMP		byte_1433A3+1,Y	; code used at a000
		BNE		loc_1432A2	; code used at a000
		LDA		byte_1433A3+2,Y	; code used at a000
		STA		byte_5C		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_5D		; code used at a000
		JMP		__far_bE_s4_msg_m00_delta3_arg5C ; code	used at	a000
loc_1432A2:				; CODE XREF: sub_14327E+F-j
					; sub_14327E+16-j
		DEY				; code used at a000
		DEY				; code used at a000
		DEY				; code used at a000
		BPL		loc_143288	; code used at a000
loc_1432A7:				; CODE XREF: sub_14327E+6-j
		LDA		word_4		; code used at a000
		CMP		#$8D       ; code used at a000
		BNE		loc_1432BC	; code used at a000
		LDA		word_4+1	; code used at a000
		CMP		#2		; code used at a000
		BNE		loc_1432BC	; code used at a000
		LDA		byte_60BA
		BMI		loc_1432BC
		JSR		___msg_m00_param_break_b1
		.BYTE $62
loc_1432BC:				; CODE XREF: sub_14327E+2D-j
					; sub_14327E+33-j sub_14327E+38-j
		LDY		#$22       ; code used at a000
loc_1432BE:				; CODE XREF: sub_14327E+4D-j
		LDA		byte_1433A3+$18,Y ; code used at a000
		LDX		byte_1433BC,Y	; code used at a000
		JSR		sub_14313B	; code used at a000
		BCS		loc_1432D0	; code used at a000
		DEY				; code used at a000
		DEY				; code used at a000
		BPL		loc_1432BE	; code used at a000
		BRK
		.BYTE $F4, $47		; _msg_m00_b3_break
loc_1432D0:				; CODE XREF: sub_14327E+49-j
		LDA		off_1433DF,Y	; code used at a000
		STA		word_5E		; code used at a000
		LDA		off_1433DF+1,Y	; code used at a000
		STA		word_5E+1	; code used at a000
loc_1432DA:				; code used at a000
		JMP		(word_5E)
byte_1432DD:
		.BYTE	4,  5,	7,  8,	9, $A, $F, $B,	6, $E, $A, $C,	0, $D,$13,$14
					; DATA XREF: sub_1431F7+52-r
		.BYTE $16,$15,	0,  0,$12,  0,	0,$10,	0, $C,	9,  2,	0,  0,$11,  0
		.BYTE $17,$18,$1A,$1B,$1C,$1D,$22,$1E,$19,$21,$1D,$1F,	0,$20,$25,$26
		.BYTE $28,$27,	0,  0,$24,  0,	0,$23,	0,$1F,$1C,  3,	0,  0,	1,  0
		.BYTE	0,$29,$2A,$2B,$2C,$2D,	0,$2E,$2F,  0,$30,$31,	0,$32,$33,$34
		.BYTE $35,$36,$2C,  0,$37,  0,	0,  0,	0,$38,$3F,$39,	0,  0,	0,  0
byte_14333D:
		.BYTE $1C,  2,	0,$27,	2,  1,$28,  2,	2,$29,	2,  3,$2A,  2,	4,$2B
					; DATA XREF: sub_143179:loc_1431C4-r
					; sub_143179+52-r
					; sub_143179:loc_1431D9-r
		.BYTE	2,  0,$2C,  2,	5,$53,	0,  5,$2D,  2,	6,$69,	1,  7,$2E,  2
		.BYTE	8,$2F,	2,  2,$30,  2,	6,$56,	0,  5,$31,  2,	9,$32,	2,  6
		.BYTE $33,  2,	0,$34,	2, $A,$36,  2,	9,$37,	2,  9,$38,  2,	5,$39
		.BYTE	2,  3,$3A,  2,	0,$3B,	2, $B,$3C,  2,	2,$3D,	2, $B,	2,  3
		.BYTE $11,$F8,	2,$12,	3,  3,$13,  4,	3,$14,$13,  3,$15,$DA,	3,$16
		.BYTE $1C,  3,$17,$DC,	3,$18
byte_1433A3:
		.BYTE	5,  0,$EB,$A5,	1,$EB,$25,  1,$EC,$26,	1,$ED,$27,  1,$EE,$28
					; DATA XREF: sub_14327E+C-r
					; sub_14327E+13-r sub_14327E+18-r
		.BYTE	1,$EF,$29,  1,$F0,$2A,	1,$DB,	1 ; data used at a000
byte_1433BC:
		.BYTE	0,  2,	0,  3,	0,  4,	0,  5,	0,  6,	0, $A,	0,$28,	0,$32
					; DATA XREF: sub_14327E+43-r
		.BYTE	0,$3C,	0,$50,	0,$68,	1,$E0,	1,$EA,	1,$FE,	1,$1C,	2,$26 ;	data used at a000
		.BYTE	2,$C0,	3
off_1433DF:
		.WORD sub_142CE4	; DATA XREF: sub_14327E:loc_1432D0-r
					; sub_14327E+57-r
					; data used at a000
		.WORD sub_142920	; data used at a000
		.WORD sub_142100	; data used at a000
		.WORD sub_142C17
		.WORD _bD_sF		; data used at a000
		.WORD sub_142573	; data used at a000
		.WORD sub_1434AC	; data used at a000
		.WORD sub_1434BB	; data used at a000
		.WORD sub_1434CA	; data used at a000
		.WORD sub_1434E3	; data used at a000
		.WORD _far_bE_s4_msg_m00_delta3_arg5C ;	data used at a000
		.WORD sub_143403	; data used at a000
		.WORD sub_1434B0	; data used at a000
		.WORD sub_1434BF	; data used at a000
		.WORD sub_1434CE	; data used at a000
		.WORD sub_1434ED	; data used at a000
		.WORD sub_1434D9	; data used at a000
		.WORD sub_143407	; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143403:				; DATA XREF: BANKD:B3F5-o
		LDA		#0		; ind code used	at a000
		BEQ		sub_143409	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143407:				; DATA XREF: BANKD:B401-o
		LDA		#$4D       ; ind code used at a000

; =============== S U B	R O U T	I N E =======================================
; offset calculation!
sub_143409:				; CODE XREF: sub_143403+2-j
		CLC				; code used at a000
		ADC		byte_5C		; code used at a000
		TAX				; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		off_14342B	; code used at a000
		STA		word_5E		; code used at a000
		LDA		off_14342B+1	; code used at a000
		STA		word_5E+1	; code used at a000
loc_143419:				; CODE XREF: sub_143409+1D-j
		LDA		byte_14342D,X	; code used at a000
		CLC				; code used at a000
		ADC		word_5E		; code used at a000
		STA		word_5E		; code used at a000
		BCC		loc_143425	; code used at a000
		INC		word_5E+1	; code used at a000
loc_143425:				; CODE XREF: sub_143409+18-j
		DEX				; code used at a000
		BPL		loc_143419	; code used at a000
		JMP		(word_5E)	; code used at a000
off_14342B:
		.WORD _npc_hndl0	; DATA XREF: sub_143409+6-r
					; sub_143409+B-r
					; data used at a000
byte_14342D:
		.BYTE 0			; DATA XREF: sub_143409:loc_143419-r
					; .BYTE	_npc_hndl0-_npc_hndl0
		.BYTE $F		; .BYTE	_npc_hndl1-_npc_hndl0
		.BYTE $55		; .BYTE	_npc_hndl2-_npc_hndl1
		.BYTE $23		; .BYTE	_npc_hndl3-_npc_hndl2
		.BYTE $82		; .BYTE	_npc_hndl4-_npc_hndl3
		.BYTE 4			; .BYTE	_npc_hndl5-_npc_hndl4
		.BYTE 7			; .BYTE	_npc_hndl6-_npc_hndl5
		.BYTE 6			; .BYTE	_npc_hndl7-_npc_hndl6
		.BYTE 6			; .BYTE	_npc_hndl8-_npc_hndl7
		.BYTE 6			; .BYTE	_npc_hndl9-_npc_hndl8
		.BYTE 6			; .BYTE	_npc_hndlA-_npc_hndl9
		.BYTE $14		; .BYTE	_npc_hndlB-_npc_hndlA
		.BYTE 6			; .BYTE	_npc_hndlC-_npc_hndlB
		.BYTE 9			; .BYTE	_npc_hndlD-_npc_hndlC
		.BYTE $19		; .BYTE	_npc_hndlE-_npc_hndlD
		.BYTE $40		; .BYTE	_npc_hndlF-_npc_hndlE
		.BYTE $D		; .BYTE	_npc_hndl10-_npc_hndlF
		.BYTE $16		; .BYTE	_npc_hndl11-_npc_hndl10
		.BYTE 7			; .BYTE	_npc_hndl12-_npc_hndl11
		.BYTE $20		; .BYTE	_npc_hndl13-_npc_hndl12
		.BYTE $1A		; .BYTE	_npc_hndl14-_npc_hndl13
		.BYTE $B		; .BYTE	_npc_hndl15-_npc_hndl14
		.BYTE $C		; .BYTE	_npc_hndl16-_npc_hndl15
		.BYTE $47		; .BYTE	_npc_hndl17-_npc_hndl16
		.BYTE $D		; .BYTE	_npc_hndl18-_npc_hndl17
		.BYTE $1B		; .BYTE	_npc_hndl19-_npc_hndl18
		.BYTE $20		; .BYTE	_npc_hndl1A-_npc_hndl19
		.BYTE 6			; .BYTE	_npc_hndl1B-_npc_hndl1A
		.BYTE 5			; .BYTE	_npc_hndl1C-_npc_hndl1B
		.BYTE $13		; .BYTE	_npc_hndl1D-_npc_hndl1C
		.BYTE $18		; .BYTE	_npc_hndl1E-_npc_hndl1D
		.BYTE $1D		; .BYTE	_npc_hndl1F-_npc_hndl1E
		.BYTE $28		; .BYTE	_npc_hndl20-_npc_hndl1F
		.BYTE 4			; .BYTE	_npc_hndl21-_npc_hndl20
		.BYTE $A		; .BYTE	_npc_hndl22-_npc_hndl21
		.BYTE $5C		; .BYTE	_npc_hndl23-_npc_hndl22
		.BYTE $B		; .BYTE	_npc_hndl24-_npc_hndl23
		.BYTE $20		; .BYTE	_npc_hndl25-_npc_hndl24
		.BYTE $22		; .BYTE	_npc_hndl26-_npc_hndl25
		.BYTE $F		; .BYTE	_npc_hndl27-_npc_hndl26
		.BYTE $16		; .BYTE	_npc_hndl28-_npc_hndl27
		.BYTE $58		; .BYTE	_npc_hndl29-_npc_hndl28
		.BYTE $3C		; .BYTE	_npc_hndl2A-_npc_hndl29
		.BYTE 3			; .BYTE	_npc_hndl2B-_npc_hndl2A
		.BYTE $1C		; .BYTE	_npc_hndl2C-_npc_hndl2B
		.BYTE $26		; .BYTE	_npc_hndl2D-_npc_hndl2C
		.BYTE $1D		; .BYTE	_npc_hndl2E-_npc_hndl2D
		.BYTE $29		; .BYTE	_npc_hndl2F-_npc_hndl2E
		.BYTE 4			; .BYTE	_npc_hndl30-_npc_hndl2F
		.BYTE 4			; .BYTE	_bD_s20_npc_hndl31-_npc_hndl30
		.BYTE $19		; .BYTE	_bD_s20_npc_hndl32-_bD_s20_npc_hndl31
		.BYTE $E		; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl32
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE 0			; .BYTE	_bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE $2A		; .BYTE	_npc_hndl3E-_bD_s20_npc_hndl33
		.BYTE 4			; .BYTE	_npc_hndl3F-_npc_hndl3E
		.BYTE 4			; .BYTE	_npc_hndl40-_npc_hndl3F
		.BYTE $E		; .BYTE	_npc_hndl41-_npc_hndl40
		.BYTE 4			; .BYTE	_npc_hndl42-_npc_hndl41
		.BYTE $4C		; .BYTE	_npc_hndl43-_npc_hndl42
		.BYTE $25		; .BYTE	_npc_hndl44-_npc_hndl43
		.BYTE 7			; .BYTE	_npc_hndl45-_npc_hndl44
		.BYTE $C		; .BYTE	_npc_hndl46-_npc_hndl45
		.BYTE $19		; .BYTE	_npc_hndl47-_npc_hndl46
		.BYTE 0			; .BYTE	_npc_hndl47-_npc_hndl47
		.BYTE 0			; .BYTE	_npc_hndl47-_npc_hndl47
		.BYTE 0			; .BYTE	_npc_hndl47-_npc_hndl47
		.BYTE 0			; .BYTE	_npc_hndl47-_npc_hndl47
		.BYTE 0			; .BYTE	_npc_hndl47-_npc_hndl47
		.BYTE $76		; .BYTE	_npc_hndl4D-_npc_hndl47
		.BYTE $2C		; .BYTE	_npc_hndl4E-_npc_hndl4D
		.BYTE $A		; .BYTE	_npc_hndl4F-_npc_hndl4E
		.BYTE $B		; .BYTE	_npc_hndl50-_npc_hndl4F
		.BYTE $D		; .BYTE	_npc_hndl51-_npc_hndl50
		.BYTE $C		; .BYTE	_npc_hndl52-_npc_hndl51
		.BYTE $10		; .BYTE	_npc_hndl53-_npc_hndl52
		.BYTE 7			; .BYTE	_npc_hndl54-_npc_hndl53
		.BYTE $C		; .BYTE	_npc_hndl55-_npc_hndl54
		.BYTE 6			; .BYTE	_npc_hndl56-_npc_hndl55
		.BYTE 6			; .BYTE	_npc_hndl57-_npc_hndl56
		.BYTE 6			; .BYTE	_npc_hndl58-_npc_hndl57
		.BYTE 6			; .BYTE	_npc_hndl59-_npc_hndl58
		.BYTE 6			; .BYTE	_npc_hndl5A-_npc_hndl59
		.BYTE 5			; .BYTE	_npc_hndl5B-_npc_hndl5A
		.BYTE 5			; .BYTE	_npc_hndl5C-_npc_hndl5B
		.BYTE $44		; .BYTE	_npc_hndl5D-_npc_hndl5C
		.BYTE 6			; .BYTE	_npc_hndl5E-_npc_hndl5D
		.BYTE 5			; .BYTE	_npc_hndl5F-_npc_hndl5E
		.BYTE $11		; .BYTE	_npc_hndl60-_npc_hndl5F
		.BYTE 4			; .BYTE	_npc_hndl61-_npc_hndl60
		.BYTE 4			; .BYTE	_npc_hndl62-_npc_hndl61
		.BYTE 9			; .BYTE	_npc_hndl63-_npc_hndl62
		.BYTE $C		; .BYTE	_npc_hndl64-_npc_hndl63
		.BYTE $19		; .BYTE	_npc_hndl65-_npc_hndl64
		.BYTE $25		; .BYTE	_npc_hndl66-_npc_hndl65
		.BYTE $C		; .BYTE	_npc_hndl67-_npc_hndl66
		.BYTE $43		; .BYTE	_npc_hndl68-_npc_hndl67
		.BYTE $1A		; .BYTE	_npc_hndl69-_npc_hndl68
		.BYTE $D		; .BYTE	_npc_hndl6A-_npc_hndl69
		.BYTE $E		; .BYTE	_npc_hndl6B-_npc_hndl6A
		.BYTE $D		; .BYTE	_npc_hndl6C-_npc_hndl6B
		.BYTE $33		; .BYTE	_npc_hndl6D-_npc_hndl6C
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D
		.BYTE 0			; .BYTE	_npc_hndl6D-_npc_hndl6D

; =============== S U B	R O U T	I N E =======================================
sub_1434AC:				; DATA XREF: BANKD:B3EB-o
		LDA		#0		; ind code used	at a000
		BEQ		sub_1434B2	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434B0:				; DATA XREF: BANKD:B3F7-o
		LDA		#$15		; ind code used	at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434B2:				; CODE XREF: sub_1434AC+2-j
		CLC				; code used at a000
		ADC		byte_5C		; code used at a000
		STA		byte_6FF	; code used at a000
		JMP		sub_142486	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434BB:				; DATA XREF: BANKD:B3ED-o
		LDA		#0		; ind code used	at a000
		BEQ		sub_1434C1	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434BF:				; DATA XREF: BANKD:B3F9-o
		LDA		#2		; ind code used	at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434C1:				; CODE XREF: sub_1434BB+2-j
		CLC				; code used at a000
		ADC		byte_5C		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434C4:				; CODE XREF: _npc_hndl5A+2-j
					; _npc_hndl63+9-j
		STA		byte_6FF	; code used at a000
		JMP		sub_142135	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434CA:				; DATA XREF: BANKD:B3EF-o
		LDA		#$14		; ind code used	at a000
		BNE		sub_1434D0	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434CE:				; DATA XREF: BANKD:B3FB-o
		LDA		#$17		; ind code used	at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434D0:				; CODE XREF: sub_1434CA+2-j
		CLC				; code used at a000
		ADC		byte_5C		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434D3:				; CODE XREF: _npc_hndl13+7-j
					; _npc_hndl51+6-j _npc_hndl52+6-j
					; _npc_hndl5B+2-j
		STA		byte_6FF	; code used at a000
		JMP		loc_1421F5	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434D9:				; DATA XREF: BANKD:B3FF-o
		LDA		#$F7       ; ind code used at a000
		LDX		#0		; code used at a000
		JSR		_add_arg5C_to16	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_far_bE_s4_msg_m00_delta3_arg5C:	; DATA XREF: BANKD:B3F3-o
		JMP		__far_bE_s4_msg_m00_delta3_arg5C ; code	used at	a000

; =============== S U B	R O U T	I N E =======================================
sub_1434E3:				; DATA XREF: BANKD:B3F1-o
		LDA		#$8E       ; ind code used at a000
		LDX		#2		; code used at a000
		JSR		_add_arg5C_to16	; code used at a000
		JMP		sub_1434F4	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434ED:				; DATA XREF: BANKD:B3FD-o
		LDA		#$98       ; ind code used at a000
		LDX		#2		; code used at a000
		JSR		_add_arg5C_to16	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_1434F4:				; CODE XREF: sub_1434E3+7-j
		JSR		sub_143515	; code used at a000
		BNE		sub_143503	; code used at a000
		LDA		#$D		; code used at a000
		LDX		#0		; code used at a000
		JSR		_add_arg5C_to16	; code used at a000
		JMP		__far_bE_s4_msg_m00_delta3_arg5C ; code	used at	a000

; =============== S U B	R O U T	I N E =======================================
sub_143503:				; CODE XREF: sub_1434F4+3-j
		LDA		#$1A		; code used at a000
		LDX		#0		; code used at a000
		JSR		_add_arg5C_to16	; code used at a000

; =============== S U B	R O U T	I N E =======================================
__far_bE_s4_msg_m00_delta3_arg5C:	; CODE XREF: sub_143179+7B-j
					; sub_1431F7+84-j sub_14327E+21-j
					; _far_bE_s4_msg_m00_delta3_arg5C-j
					; sub_1434F4+C-j sub_143515-p
					; sub_143EBD+63-j
		LDX		byte_5D		; code used at a000
		LDA		byte_5C		; code used at a000

; =============== S U B	R O U T	I N E =======================================
_far_bE_s4_msg_m00_delta3:		; CODE XREF: __msg_m00_select+C-p
					; sub_14351B-p _npc_hndl28+4A-p
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143515:				; CODE XREF: sub_1434F4-p
		JSR		__far_bE_s4_msg_m00_delta3_arg5C ; code	used at	a000
		JMP		loc_14351E	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_14351B:
		JSR		_far_bE_s4_msg_m00_delta3
loc_14351E:				; CODE XREF: sub_143515+3-j
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl0:				; CODE XREF: BANKD:B42E-P
					; DATA XREF: BANKD:off_14342B-o
		JSR		_bD_sB		; ind code used	at a000
		LDA		word_4		; code used at a000
		AND		word_4+1	; code used at a000
		BPL		loc_14352E	; code used at a000
		BRK
		.BYTE 0, $47		; _msg_m00_b3_break
loc_14352E:				; CODE XREF: _npc_hndl0+7-j
		BRK
		.BYTE 1, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1:				; CODE XREF: BANKD:B42E-P
		JSR		_bD_sB		; ind code used	at a000
		LDA		word_4		; code used at a000
		AND		word_4+1	; code used at a000
		BMI		loc_143541	; code used at a000
		LDA		byte_D2
		STA		byte_D3
		BRK
		.BYTE $A, $47		; _msg_m00_b3_break
loc_143541:				; CODE XREF: _npc_hndl1+7-j
		LDA		byte_60B7	; code used at a000
		BPL		loc_143559	; code used at a000
		BRK
		.BYTE 6, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143553
		BRK
		.BYTE 7, $27		; _msg_m00_b3
		BCS		loc_143556
loc_143553:				; CODE XREF: _npc_hndl1+1B-j
		BRK
		.BYTE 9, $27		; _msg_m00_b3
loc_143556:				; CODE XREF: _npc_hndl1+20-j
		BRK
		.BYTE 8, $47		; _msg_m00_b3_break
loc_143559:				; CODE XREF: _npc_hndl1+13-j
		JSR		sub_1430F2	; code used at a000
		BCS		loc_143563	; code used at a000
		BRK
		.BYTE 2, $27		; _msg_m00_b3
		BCS		loc_143566	; code used at a000
loc_143563:				; CODE XREF: _npc_hndl1+2B-j
		BRK
		.BYTE 5, $27		; _msg_m00_b3
loc_143566:				; CODE XREF: _npc_hndl1+30-j
		JSR		sub_1430FA	; code used at a000
		BCC		loc_14356E	; code used at a000
		BRK
		.BYTE 3, $27		; _msg_m00_b3
loc_14356E:				; CODE XREF: _npc_hndl1+38-j
		LDX		#$3C       ; code used at a000
		JSR		_vblank_count	; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_C6		; code used at a000
		BRK
		.BYTE $87, $17		; ofs 0x0009803a, -> dst _b6_s1D
		JSR		sub_174CCF	; code used at a000
		LDA		#$17		; code used at a000
		JSR		sub_143F9E	; code used at a000
		JSR		__msg_m00_param_break_b3 ; code	used at	a000
		.BYTE 4			; ind data used	at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60B6	; ind code used	at a000
		AND		#2		; code used at a000
		BNE		loc_1435A6	; code used at a000
		LDA		byte_60BF	; code used at a000
		AND		#$20       ; code used at a000
		BNE		loc_1435A6	; code used at a000
		BCS		loc_1435A6	; code used at a000
		BRK
		.BYTE $14, $27		; _msg_m00_b3
		LDA		#$57       ; code used at a000
		JSR		sub_14311A	; code used at a000
		BCC		locret_1435A5	; code used at a000
		LDA		#$55       ; code used at a000
		JSR		sub_143F9E	; code used at a000
locret_1435A5:				; CODE XREF: _npc_hndl2+18-j
		RTS				; code used at a000
loc_1435A6:				; CODE XREF: _npc_hndl2+5-j
					; _npc_hndl2+C-j _npc_hndl2+E-j
		BRK
		.BYTE $15, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl3:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60CD
		LSR
		BCC		loc_1435B3
		JSR		___msg_m00_param_break_b0
		.BYTE $13
loc_1435B3:				; CODE XREF: _npc_hndl3+4-j
		BRK
		.BYTE $17, $27		; _msg_m00_b3
		JSR		_sram_bank0_sub33
		LDA		word_4
		CMP		#2
		BCC		loc_1435E2
		JSR		sub_1430FA
		BCC		loc_1435E2
		LDA		#0
		STA		byte_CE
loc_1435C8:				; CODE XREF: _npc_hndl3+37-j
		JSR		_sram_b0_sE
		LDA		word_4
		AND		word_4+1
		BPL		loc_1435DA
		JSR		_sram_b0_s2C
		LDA		word_4
		CMP		#5
		BEQ		loc_1435E5
loc_1435DA:				; CODE XREF: _npc_hndl3+26-j
		INC		byte_CE
		LDA		byte_CE
		CMP		#4
		BNE		loc_1435C8
loc_1435E2:				; CODE XREF: _npc_hndl3+14-j
					; _npc_hndl3+19-j
		BRK
		.BYTE $18, $47		; _msg_m00_b3_break
loc_1435E5:				; CODE XREF: _npc_hndl3+2F-j
		LDA		byte_CE
		STA		byte_D2
		BRK
		.BYTE $19, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143628
		BRK
		.BYTE $1B, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143628
		BRK
		.BYTE $1C, $27		; _msg_m00_b3
		LDA		byte_D2
		STA		byte_D3
		STA		byte_CE
		JSR		_sram_bank0_subF
		LDX		#7
loc_143607:				; CODE XREF: _npc_hndl3+66-j
		LDA		word_4,X
		STA		byte_60CD,X
		DEX
		CPX		#4
		BCS		loc_143607
loc_143611:				; CODE XREF: _npc_hndl3+6E-j
		LDA		word_4,X
		STA		byte_60BB,X
		DEX
		BPL		loc_143611
		LDA		#$C0 
		JSR		sub_143F9E
		BRK
		.BYTE $1D, $27		; _msg_m00_b3
		JSR		sub_1420CC
		BRK
		.BYTE 5, $17		; ofs 0x0009802e, -> dst _b6_s17
		RTS
loc_143628:				; CODE XREF: _npc_hndl3+46-j
					; _npc_hndl3+4E-j
		BRK
		.BYTE $1A, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl4:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_break_b3
		.BYTE $1E

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		JSR		__msg_m00_param_break_b3
		.BYTE $1F

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $22, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl7:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $29, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl8:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $2A, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl9:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $2B, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndlA:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		JSR		__msg_m00_param_b3
		.BYTE $2C
		LDA		byte_60CE
		AND		#4
		BNE		loc_14365F
		BRK
		.BYTE $2D, $27		; _msg_m00_b3
loc_14365F:				; CODE XREF: _npc_hndlA+C-j
		BRK
		.BYTE $2E, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndlB:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $2F, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndlC:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $32, $27		; _msg_m00_b3
		BRK
		.BYTE $E0, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndlD:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $3F, $27		; _msg_m00_b3
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#5
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		#$80 
		STA		byte_114
		STA		byte_117
		JSR		sub_174CBD
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndlE:				; CODE XREF: BANKD:B42E-P
		LDA		#0		; ind code used	at a000
		STA		byte_CE		; code used at a000
loc_14368E:				; CODE XREF: _npc_hndlE+13-j
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4		; code used at a000
		AND		word_4+1	; code used at a000
		BMI		loc_14369F	; code used at a000
		INC		byte_CE
		LDA		byte_CE
		CMP		#3
		BNE		loc_14368E
loc_14369F:				; CODE XREF: _npc_hndlE+B-j
		JSR		_sram_b0_s2C	; code used at a000
		BEQ		loc_1436AE	; code used at a000
		JSR		_sram_b0_s2F
		LDA		word_4
		BEQ		loc_1436AE
		BRK
		.BYTE $F6, $47		; _msg_m00_b3_break
loc_1436AE:				; CODE XREF: _npc_hndlE+18-j
					; _npc_hndlE+1F-j
		LDA		byte_144	; code used at a000
		CMP		#7		; code used at a000
		BNE		loc_1436B8	; code used at a000
		BRK
		.BYTE $E5, $47		; _msg_m00_b3_break
loc_1436B8:				; CODE XREF: _npc_hndlE+29-j
		BRK
		.BYTE $E1, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1436C3	; code used at a000
		BRK
		.BYTE $E2, $47		; _msg_m00_b3_break
loc_1436C3:				; CODE XREF: _npc_hndlE+34-j
		BRK
		.BYTE $E3, $27		; _msg_m00_b3
		BRK
		.BYTE $4B, $17		; ofs 0x00128060, -> dst _bC_s30
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndlF:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60B7	; ind code used	at a000
		AND		#4		; code used at a000
		BNE		loc_1436D4	; code used at a000
		BRK
		.BYTE $40, $47		; _msg_m00_b3_break
loc_1436D4:				; CODE XREF: _npc_hndlF+5-j
		BRK
		.BYTE $41, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl10:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $42, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1436E2	; code used at a000
loc_1436DF:				; CODE XREF: _npc_hndl10+11-j
		BRK
		.BYTE $43, $47		; _msg_m00_b3_break
loc_1436E2:				; CODE XREF: _npc_hndl10+6-j
		BRK
		.BYTE $44, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1436DF
		BRK
		.BYTE $45, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl11:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $46, $27		; _msg_m00_b3
		BRK
		.BYTE $3A, $17		; ofs 0x00128072, -> dst _bC_s39
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl12:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $47, $27		; _msg_m00_b3
		JSR		_sram_b0_s31
		LDA		word_4
		STA		byte_CE
loc_1436FE:				; CODE XREF: _npc_hndl12+1A-j
		DEC		byte_CE
		BMI		loc_143711
		JSR		_sram_b0_s2C
		LDA		word_4
		BEQ		locret_143710
		JSR		_sram_b0_s2F
		LDA		word_4
		BNE		loc_1436FE
locret_143710:				; CODE XREF: _npc_hndl12+13-j
		RTS
loc_143711:				; CODE XREF: _npc_hndl12+C-j
		BRK
		.BYTE $48, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl13:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143721	; ind code used	at a000
		BNE		loc_14371E	; code used at a000
		LDA		#$15
		JMP		sub_1434D3
loc_14371E:				; CODE XREF: _npc_hndl13+3-j
		BRK
		.BYTE $4D, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
sub_143721:				; CODE XREF: _npc_hndl13-p _npc_hndl14-p
					; _npc_hndl15+3-p
		LDA		byte_60C9	; code used at a000
		BEQ		loc_14372B	; code used at a000
		LDA		byte_60B8
		AND		#$3F 
loc_14372B:				; CODE XREF: sub_143721+3-j
		CMP		#$1E		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl14:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143721	; ind code used	at a000
		BEQ		loc_143736	; code used at a000
		BRK
		.BYTE $4E, $47		; _msg_m00_b3_break
loc_143736:				; CODE XREF: _npc_hndl14+3-j
		BRK
		.BYTE $4F, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl15:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $50, $27		; _msg_m00_b3
		JSR		sub_143721	; code used at a000
		BEQ		locret_143744	; code used at a000
		BRK
		.BYTE $51, $47		; _msg_m00_b3_break
locret_143744:				; CODE XREF: _npc_hndl15+6-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl16:				; CODE XREF: BANKD:B42E-P
		JSR		loc_14377F	; ind code used	at a000
		BCS		loc_14374C	; code used at a000
		BEQ		loc_14374F	; code used at a000
loc_14374C:				; CODE XREF: _npc_hndl16+3-j
		BRK
		.BYTE $55, $47		; _msg_m00_b3_break
loc_14374F:				; CODE XREF: _npc_hndl16+5-j
		LDA		#$5B       ; code used at a000
		JSR		sub_14312B	; code used at a000
		BCS		loc_14375F	; code used at a000
loc_143756:				; CODE XREF: _npc_hndl16+24-p
		BRK
		.BYTE $52, $27		; _msg_m00_b3
		LDA		#$21       ; code used at a000
		JSR		sub_143F9E	; code used at a000
		RTS				; code used at a000
loc_14375F:				; CODE XREF: _npc_hndl16+F-j
		LDA		byte_60B9	; code used at a000
		AND		#2		; code used at a000
		BNE		loc_143772	; code used at a000
		JSR		sub_14315A
		JSR		loc_143756
		BRK
		.BYTE $53, $27		; _msg_m00_b3
		JSR		sub_143166
loc_143772:				; CODE XREF: _npc_hndl16+1F-j
		JSR		sub_143130	; code used at a000
		LDA		#$5C       ; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_sram_bank0_sub29 ; code used at a000
		BRK
		.BYTE $54, $47		; _msg_m00_b3_break
loc_14377F:				; CODE XREF: _npc_hndl16-p _npc_hndl17-p
		LDA		#$5C       ; code used at a000
		STA		byte_CE		; code used at a000
		BRK
		.BYTE $2C, $17		; ofs 0x0000809a, -> dst _b0_s4D
		LDA		byte_60B7	; code used at a000
		AND		#4		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl17:				; CODE XREF: BANKD:B42E-P
		JSR		loc_14377F	; ind code used	at a000
		BCS		loc_143793	; code used at a000
		BEQ		loc_143796	; code used at a000
loc_143793:				; CODE XREF: _npc_hndl17+3-j
		BRK
		.BYTE $57, $47		; _msg_m00_b3_break
loc_143796:				; CODE XREF: _npc_hndl17+5-j
		BRK
		.BYTE $56, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl18:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60B9
		AND		#4
		BNE		loc_1437B1
		LDA		#$22 
		JSR		sub_143F9E
		BRK
		.BYTE $5D, $27		; _msg_m00_b3
		BRK
		.BYTE $1A, $37		; _msg_m00_b4
		LDA		#1
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
		RTS
loc_1437B1:				; CODE XREF: _npc_hndl18+5-j
		BRK
		.BYTE $5E, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl19:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60BF
		BMI		loc_1437D1
		BRK
		.BYTE $5F, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1437D1
		BRK
		.BYTE $60, $27		; _msg_m00_b3
		LDA		#$4F 
		JSR		_bD_s27
		BCC		locret_1437D0
		LDA		#$57 
		JSR		sub_143F9E
locret_1437D0:				; CODE XREF: _npc_hndl19+15-j
		RTS
loc_1437D1:				; CODE XREF: _npc_hndl19+3-j
					; _npc_hndl19+B-j
		BRK
		.BYTE $61, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1A:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $65, $27		; _msg_m00_b3

; =============== S U B	R O U T	I N E =======================================
sub_1437D7:				; CODE XREF: _npc_hndl1B+3-j
		BRK
		.BYTE $63, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1B:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $66, $27		; _msg_m00_b3
		BCS		sub_1437D7

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1C:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $67, $27		; _msg_m00_b3
		LDA		#$6D 
		JSR		sub_14312B
		BCC		loc_1437EA
		RTS
loc_1437EA:				; CODE XREF: _npc_hndl1C+8-j
		BRK
		.BYTE $68, $27		; _msg_m00_b3
		LDA		#$6D 
		JMP		sub_143102

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1D:				; CODE XREF: BANKD:B42E-P
		JSR		_bD_sB
		LDA		word_6+1
		BNE		loc_1437FD
		LDA		#$14
		BNE		loc_1437FF
loc_1437FD:				; CODE XREF: _npc_hndl1D+5-j
		LDA		#$2C 
loc_1437FF:				; CODE XREF: _npc_hndl1D+9-j
		STA		byte_6AD1
		LDA		#$FF
		STA		byte_6AD2
		BRK
		.BYTE $69, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1E:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60CE
		AND		#$20 
		BEQ		loc_143814
		BRK
		.BYTE $1C, $57		; _msg_m00_b4_break
loc_143814:				; CODE XREF: _npc_hndl1E+5-j
		BRK
		.BYTE $6B, $27		; _msg_m00_b3
		LDA		#$7C 
		JSR		_bD_s27
		BCC		locret_143826
		LDA		#$CD 
		JSR		sub_143F9E
		BRK
		.BYTE $92, $17		; ofs 0x00128046, -> dst _bC_s23
locret_143826:				; CODE XREF: _npc_hndl1E+12-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1F:				; CODE XREF: BANKD:B42E-P
		LDA		byte_101
		CMP		#3
		BNE		loc_143832
		JSR		__msg_m00_param_break_b3
		.BYTE $71
loc_143832:				; CODE XREF: _npc_hndl1F+5-j
		JSR		sub_143847
		BRK
		.BYTE $6C, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_143840
		BRK
		.BYTE $6D, $47		; _msg_m00_b3_break
loc_143840:				; CODE XREF: _npc_hndl1F+14-j
		BRK
		.BYTE $6E, $27		; _msg_m00_b3
		BRK
		.BYTE $48, $17		; ofs 0x00128050, -> dst _bC_s28
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143847:				; CODE XREF: _npc_hndl1F:loc_143832-p
					; _bD_s20_npc_hndl31-p
		JSR		_bD_s26
		LDA		word_4
		STA		byte_D2
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl20:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_break_b3
		.BYTE $79

; =============== S U B	R O U T	I N E =======================================
_npc_hndl21:				; CODE XREF: BANKD:B42E-P
		JSR		_bD_sB
		LDA		byte_D2
		STA		byte_D3
		BRK
		.BYTE $7A, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl22:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60B9
		AND		#8
		BEQ		loc_14386C
		LDA		byte_60B7
		BMI		loc_1438B6
		BRK
		.BYTE $83, $47		; _msg_m00_b3_break
loc_14386C:				; CODE XREF: _npc_hndl22+5-j
		LDA		#$54 
		JSR		sub_14312B
		BCS		loc_143881
		BRK
		.BYTE $7C, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_14387E
		BRK
		.BYTE $7D, $47		; _msg_m00_b3_break
loc_14387E:				; CODE XREF: _npc_hndl22+1C-j
		BRK
		.BYTE $7E, $47		; _msg_m00_b3_break
loc_143881:				; CODE XREF: _npc_hndl22+14-j
		JSR		sub_14315A
		BRK
		.BYTE $7F, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_14388F
		BRK
		.BYTE $82, $47		; _msg_m00_b3_break
loc_14388F:				; CODE XREF: _npc_hndl22+2D-j
		BRK
		.BYTE $80, $27		; _msg_m00_b3
		JSR		sub_143166
		JSR		sub_143130
		LDA		#$6E 
		STA		byte_CF
		JSR		_sram_bank0_sub29
		LDA		#$17
		JSR		sub_143F9E
		LDA		#$23 
		JSR		sub_143F9E
		LDA		#$40 
		STA		byte_9B
		LDA		#$6C 
		STA		byte_9C
		LDA		#$B6 
		JSR		sub_143F9E
loc_1438B6:				; CODE XREF: _npc_hndl22+A-j
		BRK
		.BYTE $81, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl23:				; CODE XREF: BANKD:B42E-P
		LDA		byte_8
		BNE		loc_1438C1
		JSR		___msg_m00_param_break_b0
		.BYTE $63
loc_1438C1:				; CODE XREF: _npc_hndl23+2-j
		BRK
		.BYTE $87, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl24:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $8A, $27		; _msg_m00_b3
		JSR		sub_1430F2
		BCC		loc_1438D7
		LDA		byte_110
		CMP		#$F
		BNE		locret_1438E3
		LDA		#$34 
		BNE		loc_1438E0
loc_1438D7:				; CODE XREF: _npc_hndl24+6-j
		LDA		byte_110
		CMP		#$F
		BNE		locret_1438E3
		LDA		#$12
loc_1438E0:				; CODE XREF: _npc_hndl24+11-j
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
locret_1438E3:				; CODE XREF: _npc_hndl24+D-j
					; _npc_hndl24+18-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl25:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60CE
		LSR
		BCC		loc_1438ED
		BRK
		.BYTE $8C, $47		; _msg_m00_b3_break
loc_1438ED:				; CODE XREF: _npc_hndl25+4-j
		BRK
		.BYTE $8B, $27		; _msg_m00_b3
		BRK
		.BYTE $8C, $27		; _msg_m00_b3
		BRK
		.BYTE $8D, $27		; _msg_m00_b3
		LDA		#$77 
		JSR		sub_14311A
		BCC		locret_143905
		LDA		#$C8 
		JSR		sub_143F9E
		BRK
		.BYTE $92, $17		; ofs 0x00128046, -> dst _bC_s23
locret_143905:				; CODE XREF: _npc_hndl25+17-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl26:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $8F, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143911
		BRK
		.BYTE $90, $47		; _msg_m00_b3_break
loc_143911:				; CODE XREF: _npc_hndl26+6-j
		JSR		___msg_m00_param_break_b0
		.BYTE 5

; =============== S U B	R O U T	I N E =======================================
_npc_hndl27:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $91, $27		; _msg_m00_b3
		LDA		#$72 
		JSR		_bD_s27
		BCC		locret_14392A
		BRK
		.BYTE $92, $27		; _msg_m00_b3
		BRK
		.BYTE $81, $17		; ofs 0x00098032, -> dst _b6_s19
		LDA		#$AE 
		JSR		sub_143F9E
locret_14392A:				; CODE XREF: _npc_hndl27+8-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl28:				; CODE XREF: BANKD:B42E-P
		BIT		byte_60B9
		BVC		loc_143934
		JSR		___msg_m00_param_break_b0
		.BYTE $D4
loc_143934:				; CODE XREF: _npc_hndl28+3-j
		LDA		byte_60CF
		AND		#$3F 
		CMP		#$3F 
		BNE		loc_14394D
		JSR		__msg_m00_param_b0
		.BYTE $D3
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		BRK
		.BYTE $26, $17		; ofs 0x00128066, -> dst _bC_s33
		PLA
		PLA
locret_14394C:				; CODE XREF: _npc_hndl28+2A-j
		RTS
loc_14394D:				; CODE XREF: _npc_hndl28+10-j
		BRK
		.BYTE $94, $27		; _msg_m00_b3
		LDA		byte_60CF
		AND		#$3F 
		BEQ		locret_14394C
		BRK
		.BYTE $95, $27		; _msg_m00_b3
		LDA		byte_60CF
		AND		#$3F 
		STA		byte_5C
		LDA		#$4B 
		STA		byte_5D
		LDA		#3
		STA		word_5E
loc_143969:				; CODE XREF: _npc_hndl28+4F-j
					; _npc_hndl28+53-j
		LSR		byte_5C
		BCS		loc_143971
		BEQ		loc_143980
		BNE		loc_143978
loc_143971:				; CODE XREF: _npc_hndl28+40-j
		LDA		byte_5D
		LDX		word_5E
		JSR		_far_bE_s4_msg_m00_delta3
loc_143978:				; CODE XREF: _npc_hndl28+44-j
		INC		byte_5D
		BNE		loc_143969
		INC		word_5E
		BNE		loc_143969
loc_143980:				; CODE XREF: _npc_hndl28+42-j
		BRK
		.BYTE $9C, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl29:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_b3
		.BYTE $9D
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$11
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		#$B7 
		JSR		sub_143F9E
		LDA		#$80 
		STA		byte_110
		JSR		sub_174CBD
		LDX		#$FF
		STX		byte_9E
		STX		byte_2D
		INX
		STX		byte_751
		STX		byte_754
		STX		byte_757
		STX		byte_75A
		INX
		STX		byte_750
		STX		byte_753
		STX		byte_756
		STX		byte_759
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2A:				; CODE XREF: BANKD:B42E-P
		JMP		_npc_hndl6C

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2B:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $49, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1439D1
loc_1439CA:				; CODE XREF: _npc_hndl2B+15-j
		BRK
		.BYTE $4A, $27		; _msg_m00_b3
loc_1439CD:				; CODE XREF: _npc_hndl2B+1A-j
		BRK
		.BYTE $7F, $17		; ofs 0x00098030, -> dst _b6_s18
		RTS
loc_1439D1:				; CODE XREF: _npc_hndl2B+6-j
		BRK
		.BYTE $4B, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1439CA
		BRK
		.BYTE $4C, $27		; _msg_m00_b3
		BCS		loc_1439CD

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2C:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60CB
		AND		#$10
		BNE		loc_143A01
		JSR		_bD_sB
		LDA		byte_D2
		STA		byte_D3
		BRK
		.BYTE $C2, $27		; _msg_m00_b3
		BRK
		.BYTE $89, $17		; ofs 0x00098036, -> dst _b6_s1B
		JSR		sub_174CCF
		BRK
		.BYTE $C3, $27		; _msg_m00_b3
		BRK
		.BYTE $88, $17		; ofs 0x00098038, -> dst _b6_s1C
		LDA		#$B4 
		JSR		sub_143F9E
		RTS
loc_143A01:				; CODE XREF: _npc_hndl2C+5-j
		BRK
		.BYTE $C4, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2D:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60BF
		AND		#$10
		BEQ		loc_143A0E
		BRK
		.BYTE $58, $57		; _msg_m00_b4_break
loc_143A0E:				; CODE XREF: _npc_hndl2D+5-j
		BRK
		.BYTE $89, $27		; _msg_m00_b3
		BRK
		.BYTE $58, $37		; _msg_m00_b4
		LDA		#$16
		JSR		_bD_s27
		BCC		locret_143A20
		LDA		#$54 
		JSR		sub_143F9E
locret_143A20:				; CODE XREF: _npc_hndl2D+15-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2E:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $59, $37		; _msg_m00_b4
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143A2C
		BRK
		.BYTE $5A, $57		; _msg_m00_b4_break
loc_143A2C:				; CODE XREF: _npc_hndl2E+6-j
		BRK
		.BYTE $5B, $37		; _msg_m00_b4
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#1
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		#$27 
		JSR		sub_143F9E
		JSR		sub_177CFC
		LDA		#$F
		STA		byte_7522
		JSR		sub_174CBD
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2F:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $87, $77		; _msg_m00_arg1
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl30:				; CODE XREF: BANKD:B42E-P
		JSR		___msg_m00_param_break_b2
		.BYTE $16

; =============== S U B	R O U T	I N E =======================================
_bD_s20_npc_hndl31:			; CODE XREF: BANKD:B42E-P
					; sub_174BB3+76-P
					; DATA XREF: BANKD:8040-o
		JSR		sub_143847
		BRK
		.BYTE $72, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_143A64
		BRK
		.BYTE $73, $27		; _msg_m00_b3
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS
loc_143A64:				; CODE XREF: _bD_s20_npc_hndl31+9-j
		BRK
		.BYTE $48, $17		; ofs 0x00128050, -> dst _bC_s28
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s20_npc_hndl32:			; CODE XREF: BANKD:B42E-P
		LDA		byte_60B6
		AND		#$20 
		BNE		loc_143A75
		BRK
		.BYTE $5C, $57		; _msg_m00_b4_break
loc_143A75:				; CODE XREF: _bD_s20_npc_hndl32+5-j
		BRK
		.BYTE $A5, $77		; _msg_m00_arg1
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s20_npc_hndl33:			; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $CE, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143AA0	; code used at a000
		LDA		#5		; code used at a000
		STA		byte_C0		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_C1		; code used at a000
		STA		byte_C2		; code used at a000
		JSR		sub_141FB1	; code used at a000
		BCC		loc_143AA0	; code used at a000
		JSR		sub_141FF1	; code used at a000
		LDA		byte_6A6D	; code used at a000
		STA		byte_64		; code used at a000
		BRK
		.BYTE $B1, 7		; ofs 0x00068024, -> dst _b4_s12
		STA		byte_D2		; code used at a000
		BRK
		.BYTE $CF, $47		; _msg_m00_b3_break
loc_143AA0:				; CODE XREF: _bD_s20_npc_hndl33+6-j
					; _bD_s20_npc_hndl33+15-j
		BRK
		.BYTE $D0, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl3E:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_break_b3 ; ind code used at a000
		.BYTE $D1		; ind data used	at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl3F:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_break_b3 ; ind code used at a000
		.BYTE $D2		; ind data used	at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl40:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $D3, $27		; _msg_m00_b3
		LDA		byte_60B7	; code used at a000
		AND		#4		; code used at a000
		BNE		loc_143AB6	; code used at a000
		RTS
loc_143AB6:				; CODE XREF: _npc_hndl40+8-j
		BRK
		.BYTE $D4, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl41:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_break_b3 ; ind code used at a000
		.BYTE $D5		; ind data used	at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl42:				; CODE XREF: BANKD:B42E-P
		LDA		#$3F       ; ind code used at a000
		JSR		sub_14312B	; code used at a000
		BCS		loc_143AC9	; code used at a000
		LDY		#$8E       ; code used at a000
		JMP		_npc_hndl47	; code used at a000
loc_143AC9:				; CODE XREF: _npc_hndl42+5-j
		JSR		sub_143130	; code used at a000
		JSR		_bD_sB		; code used at a000
		LDA		word_4		; code used at a000
		AND		word_4+1	; code used at a000
		BMI		loc_143ADA	; code used at a000
		JSR		_bD_s26
		STA		byte_D2
loc_143ADA:				; CODE XREF: _npc_hndl42+16-j
		BRK
		.BYTE $D6, $27		; _msg_m00_b3
loc_143ADD:				; CODE XREF: _npc_hndl42+2B-j
		BRK
		.BYTE $D7, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		sub_143AEA	; code used at a000
		BRK
		.BYTE $D8, $27		; _msg_m00_b3
		BCS		loc_143ADD	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143AEA:				; CODE XREF: _npc_hndl42+26-j
					; sub_143EBD+39-j
		JSR		_bD_sB		; code used at a000
		LDA		word_4		; code used at a000
		AND		word_4+1	; code used at a000
		BMI		loc_143AF8	; code used at a000
		JSR		_bD_s26
		STA		byte_D2
loc_143AF8:				; CODE XREF: sub_143AEA+7-j
		BRK
		.BYTE $D9, $27		; _msg_m00_b3
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$2A       ; code used at a000
		JSR		sub_143F9E	; code used at a000
		BRK
		.BYTE $43, $17		; ofs 0x00128032, -> dst _bC_s19
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl43:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $DA, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143B14	; code used at a000
loc_143B11:				; CODE XREF: _npc_hndl43+16-j
		BRK
		.BYTE $DB, $47		; _msg_m00_b3_break
loc_143B14:				; CODE XREF: _npc_hndl43+6-j
		BRK
		.BYTE $DC, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_143B21	; code used at a000
		BRK
		.BYTE $DD, $27		; _msg_m00_b3
		BCS		loc_143B11	; code used at a000
loc_143B21:				; CODE XREF: _npc_hndl43+11-j
		JSR		__msg_m00_param_b3 ; code used at a000
		.BYTE $DE		; ind data used	at a000
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $43, $17		; ofs 0x00128032, -> dst _bC_s19
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl44:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $CD, $27		; _msg_m00_b3
		JSR		___msg_m00_param_break_b2
		.BYTE $8E

; =============== S U B	R O U T	I N E =======================================
_npc_hndl45:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60CA
		LSR
		BCS		loc_143B3E
		BRK
		.BYTE $18, $57		; _msg_m00_b4_break
loc_143B3E:				; CODE XREF: _npc_hndl45+4-j
		BRK
		.BYTE $19, $57		; _msg_m00_b4_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl46:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60CB	; ind code used	at a000
		BPL		loc_143B4E	; code used at a000
		AND		#$10
		BNE		_npc_hndl47
		JSR		___msg_m00_param_break_b2
		.BYTE $15
loc_143B4E:				; CODE XREF: _npc_hndl46+3-j
		LDA		byte_60B7	; code used at a000
		BPL		_npc_hndl47	; code used at a000
		JSR		_bD_sB		; code used at a000
		BRK
		.BYTE $89, $77		; _msg_m00_arg1
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl47:				; CODE XREF: BANKD:B42E-P
					; _npc_hndl42+9-j _npc_hndl46+7-j
					; _npc_hndl46+10-j
		TYA				; code used at a000
		LSR		; code used at a000
		SEC				; code used at a000
		SBC		#$46       ; code used at a000
		STA		byte_5C		; code used at a000
		LDA		byte_60C3	; code used at a000
		AND		#$F8       ; code used at a000
		ORA		byte_5C		; code used at a000
		STA		byte_60C3	; code used at a000
		JSR		sub_143E48	; code used at a000
		LDA		#0		; code used at a000
		JSR		sub_143EB8	; code used at a000
		JSR		sub_143E67	; code used at a000
		LDA		#2		; code used at a000
		JSR		sub_143EBD	; code used at a000
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143B96	; code used at a000
loc_143B80:				; CODE XREF: _bD_s23+1F-p
		BRK
		.BYTE $65, $17		; ofs 0x000b001a, -> dst _b7_sD
		LDA		byte_60C3	; code used at a000
		AND		#7		; code used at a000
		CMP		#3		; code used at a000
		BEQ		loc_143B93	; code used at a000
		JSR		__msg_m00_param_b2 ; code used at a000
		.BYTE $F		; ind data used	at a000
		JMP		loc_143B96	; code used at a000
loc_143B93:				; CODE XREF: _npc_hndl47+30-j
		BRK
		.BYTE $EE, $27		; _msg_m00_b3
loc_143B96:				; CODE XREF: _npc_hndl47+24-j
					; _npc_hndl47+36-j
		LDA		#3		; code used at a000
		JSR		sub_143EBD	; code used at a000
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_143BCB	; code used at a000
		LDA		#5		; code used at a000
		JSR		sub_143EBD	; code used at a000
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369	; code used at a000
		JSR		_ppu_screen_clear ; code used at a000
		JSR		sub_174CCF	; code used at a000
		JSR		_pal_fade_in	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6A3E	; code used at a000
		JSR		__msg_m00_param_b2 ; code used at a000
		.BYTE $17		; ind data used	at a000
loc_143BC0:				; CODE XREF: _npc_hndl47+6E-j
		LDA		_mmc_cur_prg_bank ; code used at a000
		ORA		#$10		; code used at a000
		JSR		sub_17690A	; code used at a000
		JMP		loc_143BC0
loc_143BCB:				; CODE XREF: _npc_hndl47+44-j
		LDA		#4		; code used at a000
		JMP		sub_143EB8	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl4D:				; CODE XREF: BANKD:B42E-P
		JSR		sub_1430FA	; ind code used	at a000
		BCS		loc_143BD8	; code used at a000
		BRK
		.BYTE $B, $47		; _msg_m00_b3_break
loc_143BD8:				; CODE XREF: _npc_hndl4D+3-j
		LDA		#$39 
		STA		byte_CE
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		BCS		loc_143BF9
		LDA		#$58 
		JSR		sub_14312B
		BCS		loc_143BF9
		LDA		#$59 
		JSR		sub_14312B
		BCS		loc_143BF9
		LDA		#$5A 
		JSR		sub_14312B
		BCS		loc_143BF9
		BRK
		.BYTE $C, $47		; _msg_m00_b3_break
loc_143BF9:				; CODE XREF: _npc_hndl4D+F-j
					; _npc_hndl4D+16-j _npc_hndl4D+1D-j
					; _npc_hndl4D+24-j
		BRK
		.BYTE $D, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl4E:				; CODE XREF: BANKD:B42E-P
		LDA		byte_8		; ind code used	at a000
		BEQ		loc_143C03	; code used at a000
		BRK
		.BYTE $E, $47		; _msg_m00_b3_break
loc_143C03:				; CODE XREF: _npc_hndl4E+2-j
		BRK
		.BYTE $F, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl4F:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60B7	; ind code used	at a000
		BMI		loc_143C0E	; code used at a000
		BRK
		.BYTE $10, $47		; _msg_m00_b3_break
loc_143C0E:				; CODE XREF: _npc_hndl4F+3-j
		BRK
		.BYTE $11, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl50:				; CODE XREF: BANKD:B42E-P
		JSR		_bD_sB		; ind code used	at a000
		LDA		word_6+1	; code used at a000
		BEQ		loc_143C1B	; code used at a000
		BRK
		.BYTE $12, $47		; _msg_m00_b3_break
loc_143C1B:				; CODE XREF: _npc_hndl50+5-j
		BRK
		.BYTE $13, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl51:				; CODE XREF: BANKD:B42E-P
		LDA		byte_8		; ind code used	at a000
		BEQ		loc_143C27	; code used at a000
		LDA		#$19		; code used at a000
		JMP		sub_1434D3	; code used at a000
loc_143C27:				; CODE XREF: _npc_hndl51+2-j
		BRK
		.BYTE $16, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl52:				; CODE XREF: BANKD:B42E-P
		LDA		byte_8
		BEQ		loc_143C33
		LDA		#$1A
		JMP		sub_1434D3
loc_143C33:				; CODE XREF: _npc_hndl52+2-j
		JSR		sub_143F7B
		JSR		__msg_m00_param_break_b3
		.BYTE $20

; =============== S U B	R O U T	I N E =======================================
_npc_hndl53:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		JSR		__msg_m00_param_break_b3
		.BYTE $21

; =============== S U B	R O U T	I N E =======================================
_npc_hndl54:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $23, $27		; _msg_m00_b3
		JSR		sub_143F7B
		BRK
		.BYTE $DF, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl55:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $24, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl56:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $25, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl57:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $26, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl58:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $30, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl59:				; CODE XREF: BANKD:B42E-P
		JSR		sub_143F7B
		BRK
		.BYTE $31, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5A:				; CODE XREF: BANKD:B42E-P
		LDA		#7		; ind code used	at a000
		JMP		sub_1434C4	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5B:				; CODE XREF: BANKD:B42E-P
		LDA		#$1E		; ind code used	at a000
		JMP		sub_1434D3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5C:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60B8
		BPL		loc_143C7D
		BRK
		.BYTE $5C, $47		; _msg_m00_b3_break
loc_143C7D:				; CODE XREF: _npc_hndl5C+3-j
		LDA		#$4F 
		JSR		sub_14312B
		BCC		loc_143C9B
		JSR		sub_143130
		LDA		byte_60B8
		ORA		#$C0 
		STA		byte_60B8
		LDA		#3
		STA		byte_2D
		LDA		#8
		STA		byte_2E
		JSR		__msg_m00_param_break_b3
		.BYTE $5B
loc_143C9B:				; CODE XREF: _npc_hndl5C+D-j
		LDA		byte_60BF
		AND		#$40 
		BEQ		loc_143CA5
		BRK
		.BYTE $5A, $47		; _msg_m00_b3_break
loc_143CA5:				; CODE XREF: _npc_hndl5C+2B-j
		BRK
		.BYTE $58, $27		; _msg_m00_b3
		LDA		#$5D 
		JSR		sub_14311A
		BCS		loc_143CB0
		RTS
loc_143CB0:				; CODE XREF: _npc_hndl5C+38-j
		LDA		#$56 
		JSR		sub_143F9E
		JSR		__msg_m00_param_break_b3
		.BYTE $59

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5D:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $62, $27		; _msg_m00_b3

; =============== S U B	R O U T	I N E =======================================
sub_143CBC:				; CODE XREF: _npc_hndl5E+3-j
		BRK
		.BYTE $63, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5E:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $64, $27		; _msg_m00_b3
		BCS		sub_143CBC

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5F:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_b0
		.BYTE $62
		LDA		byte_60CE
		AND		#$20 
		BNE		loc_143CD2
		BRK
		.BYTE $6A, $47		; _msg_m00_b3_break
loc_143CD2:				; CODE XREF: _npc_hndl5F+9-j
		BRK
		.BYTE $1D, $57		; _msg_m00_b4_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl60:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_break_b3
		.BYTE $78

; =============== S U B	R O U T	I N E =======================================
_npc_hndl61:				; CODE XREF: BANKD:B42E-P
		JSR		__msg_m00_param_break_b3
		.BYTE $7B

; =============== S U B	R O U T	I N E =======================================
_npc_hndl62:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $84, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BRK
		.BYTE $85, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl63:				; CODE XREF: BANKD:B42E-P
		LDA		byte_8
		BNE		loc_143CED
		BRK
		.BYTE $86, $47		; _msg_m00_b3_break
loc_143CED:				; CODE XREF: _npc_hndl63+2-j
		LDA		#$D
		JMP		sub_1434C4

; =============== S U B	R O U T	I N E =======================================
_npc_hndl64:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $8E, $27		; _msg_m00_b3
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$D
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		#$80 
		STA		byte_114
		STA		byte_117
		JSR		sub_174CBD
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl65:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $A0, $27		; _msg_m00_b3
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		JSR		_sram_b0_s31
		LDX		word_4
		DEX
		STX		byte_CE
loc_143D19:				; CODE XREF: _npc_hndl65+22-j
		JSR		_sram_b0_sE
		LDA		word_4
		AND		word_4+1
		BPL		loc_143D2B
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JSR		_sram_bank0_sub8
loc_143D2B:				; CODE XREF: _npc_hndl65+15-j
		DEC		byte_CE
		BPL		loc_143D19
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl66:				; CODE XREF: BANKD:B42E-P
		JSR		_bD_sB
		LDA		byte_D2
		STA		byte_D3
		STA		byte_D4
		BRK
		.BYTE $A1, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl67:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $A2, $27		; _msg_m00_b3
		LDA		byte_60BF
		AND		#8
		BEQ		loc_143D49
		BRK
		.BYTE $1B, $57		; _msg_m00_b4_break
loc_143D49:				; CODE XREF: _npc_hndl67+8-j
		LDA		#$47 
		JSR		sub_14312B
		BCS		loc_143D53
		BRK
		.BYTE $A5, $47		; _msg_m00_b3_break
loc_143D53:				; CODE XREF: _npc_hndl67+12-j
		LDA		#$10
		JSR		sub_14312B
		BCC		loc_143D7C
		LDA		#$75 
		JSR		sub_14312B
		BCC		loc_143D7C
		JSR		sub_143130
		LDA		#$10
		JSR		sub_14312B
		JSR		sub_143130
		BRK
		.BYTE $A3, $27		; _msg_m00_b3
		LDA		#$76 
		JSR		sub_143102
		BCC		locret_143D7B
		LDA		#$53 
		JSR		sub_143F9E
locret_143D7B:				; CODE XREF: _npc_hndl67+38-j
		RTS
loc_143D7C:				; CODE XREF: _npc_hndl67+1C-j
					; _npc_hndl67+23-j
		BRK
		.BYTE $A4, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl68:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60BF
		AND		#4
		BEQ		loc_143D89
		BRK
		.BYTE $1E, $57		; _msg_m00_b4_break
loc_143D89:				; CODE XREF: _npc_hndl68+5-j
		BRK
		.BYTE $A6, $27		; _msg_m00_b3
		LDA		#$10
		JSR		_bD_s27
		BCC		locret_143D98
		LDA		#$52 
		JSR		sub_143F9E
locret_143D98:				; CODE XREF: _npc_hndl68+12-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl69:				; CODE XREF: BANKD:B42E-P
		LDA		#$59 
		JSR		sub_14312B
		BCC		loc_143DA3
		BRK
		.BYTE $A7, $47		; _msg_m00_b3_break
loc_143DA3:				; CODE XREF: _npc_hndl69+5-j
		BRK
		.BYTE $A8, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6A:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $A9, $27		; _msg_m00_b3
		LDA		#$72 
		JSR		sub_14312B
		BCC		loc_143DB1
		RTS
loc_143DB1:				; CODE XREF: _npc_hndl6A+8-j
		BRK
		.BYTE $AA, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6B:				; CODE XREF: BANKD:B42E-P
		LDA		byte_60B6	; ind code used	at a000
		AND		#2		; code used at a000
		BNE		loc_143DBE	; code used at a000
		BRK
		.BYTE $AB, $47		; _msg_m00_b3_break
loc_143DBE:				; CODE XREF: _npc_hndl6B+5-j
		BRK
		.BYTE $AC, $47		; _msg_m00_b3_break

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6C:				; CODE XREF: BANKD:B42E-P _npc_hndl2A-j
		LDA		byte_60BF	; ind code used	at a000
		AND		#2		; code used at a000
		BEQ		loc_143DD7	; code used at a000
		JSR		__msg_m00_param_b3
		.BYTE $B0
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143DD4
		BRK
		.BYTE $B1, $47		; _msg_m00_b3_break
loc_143DD4:				; CODE XREF: _npc_hndl6C+E-j
		BRK
		.BYTE $B2, $47		; _msg_m00_b3_break
loc_143DD7:				; CODE XREF: _npc_hndl6C+5-j
		JSR		__msg_m00_param_b3 ; code used at a000
		.BYTE $AD		; ind data used	at a000
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143DF0	; code used at a000
		LDA		#$58       ; code used at a000
		JSR		sub_14311A	; code used at a000
		BCC		locret_143DF3	; code used at a000
		LDA		#$51       ; code used at a000
		JSR		sub_143F9E	; code used at a000
		JSR		__msg_m00_param_break_b3 ; code	used at	a000
		.BYTE $AE		; ind data used	at a000
loc_143DF0:				; CODE XREF: _npc_hndl6C+1D-j
		BRK
		.BYTE $AF, $47		; _msg_m00_b3_break
locret_143DF3:				; CODE XREF: _npc_hndl6C+24-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6D:				; CODE XREF: BANKD:B42E-P
		BRK
		.BYTE $88, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BRK
		.BYTE $85, $47		; _msg_m00_b3_break
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s24:				; CODE XREF: sub_174BB3+98-P
					; DATA XREF: BANKD:8048-o
		LDA		byte_60C3	; code used at a000
		AND		#7		; code used at a000
		JSR		sub_143E48	; code used at a000
		LDA		#6		; code used at a000
		JSR		sub_143EB8	; code used at a000
		JSR		sub_143E67	; code used at a000
		LDA		#4		; code used at a000
		JSR		sub_143EB8	; code used at a000
		BRK
		.BYTE $49, $17		; ofs 0x000080a0, -> dst _b0_s50
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bD_s23:				; CODE XREF: sub_174BB3+A6-P
					; DATA XREF: BANKD:8046-o
		LDA		byte_60C3	; code used at a000
		AND		#7		; code used at a000
		JSR		sub_143E48	; code used at a000
		LDA		#7		; code used at a000
		JSR		sub_143EB8	; code used at a000
		LDA		#8		; code used at a000
		JSR		sub_143EB8	; code used at a000
		JSR		sub_143E67	; code used at a000
		LDA		#2		; code used at a000
		JSR		sub_143EB8	; code used at a000
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143E3F	; code used at a000
		JSR		loc_143B80	; code used at a000
		JMP		loc_143E44	; code used at a000
loc_143E3F:				; CODE XREF: _bD_s23+1D-j
		LDA		#9		; code used at a000
		JSR		sub_143EBD	; code used at a000
loc_143E44:				; CODE XREF: _bD_s23+22-j
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143E48:				; CODE XREF: _npc_hndl47+11-p
					; _bD_s24+5-p _bD_s23+5-p
		STA		byte_5C		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_5D		; code used at a000
		LDX		#byte_5C	; code used at a000
		LDA		#$A		; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		off_143F23	; code used at a000
		LDX		off_143F23+1	; code used at a000
		JSR		_add_arg5C_to16	; code used at a000
		LDA		byte_5C		; code used at a000
		STA		byte_66		; code used at a000
		LDA		byte_5D		; code used at a000
		STA		byte_67		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143E67:				; CODE XREF: _npc_hndl47+19-p
					; _bD_s24+D-p _bD_s23+12-p
		BRK
		.BYTE $AA, 7		; ofs 0x0000808e, -> dst _b0_s47
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_64		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_D2		; code used at a000
loc_143E75:				; CODE XREF: sub_143E67+4E-j
		LDA		byte_D2		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_bank0_subC ; code	used at	a000
		LDA		word_4		; code used at a000
		CMP		#$63       ; code used at a000
		BNE		loc_143E88	; code used at a000
		BRK
		.BYTE $9F, $27		; _msg_m00_b3
		JMP		loc_143EAF
loc_143E88:				; CODE XREF: sub_143E67+19-j
		LDA		byte_D2		; code used at a000
		ASL		; code used at a000
		ADC		byte_D2		; code used at a000
		TAY				; code used at a000
		SEC				; code used at a000
		LDA		byte_6A3F,Y	; code used at a000
		SBC		byte_744,Y	; code used at a000
		STA		byte_63F	; code used at a000
		LDA		byte_6A40,Y	; code used at a000
		SBC		byte_745,Y	; code used at a000
		STA		byte_640	; code used at a000
		LDA		byte_6A41,Y	; code used at a000
		SBC		byte_746,Y	; code used at a000
		STA		byte_641	; code used at a000
		LDA		#1		; code used at a000
		JSR		sub_143EBD	; code used at a000
loc_143EAF:				; CODE XREF: sub_143E67+1E-j
		INC		byte_D2		; code used at a000
		LDA		byte_64		; code used at a000
		CMP		byte_D2		; code used at a000
		BNE		loc_143E75	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143EB8:				; CODE XREF: _npc_hndl47+16-p
					; _npc_hndl47+73-j _bD_s24+A-p
					; _bD_s24+12-p _bD_s23+A-p _bD_s23+F-p
					; _bD_s23+17-p
		PHA				; code used at a000
		JSR		_bD_sB		; code used at a000
		PLA				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_143EBD:				; CODE XREF: _npc_hndl47+1E-p
					; _npc_hndl47+3E-p _npc_hndl47+48-p
					; _bD_s23+27-p sub_143E67+45-p
		TAY				; code used at a000
		LDA		(byte_66),Y	; code used at a000
		BNE		loc_143ECC	; code used at a000
		LDA		byte_60CB	; code used at a000
		AND		#$10		; code used at a000
		BEQ		loc_143ECC	; code used at a000
		BRK
		.BYTE $C0, $47		; _msg_m00_b3_break
loc_143ECC:				; CODE XREF: sub_143EBD+3-j
					; sub_143EBD+A-j
		CMP		#$A		; code used at a000
		BNE		loc_143EDF	; code used at a000
		LDA		byte_60BA	; code used at a000
		AND		#4		; code used at a000
		BNE		loc_143EDB	; code used at a000
		LDA		#$A		; code used at a000
		BNE		loc_143F13	; code used at a000
loc_143EDB:				; CODE XREF: sub_143EBD+18-j
		LDA		#$C		; code used at a000
		BNE		loc_143F13	; code used at a000
loc_143EDF:				; CODE XREF: sub_143EBD+11-j
		CMP		#$B		; code used at a000
		BNE		loc_143EFD	; code used at a000
		LDA		byte_60BA	; code used at a000
		AND		#4		; code used at a000
		BNE		loc_143EEE	; code used at a000
		LDA		#$B		; code used at a000
		BNE		loc_143F13	; code used at a000
loc_143EEE:				; CODE XREF: sub_143EBD+2B-j
		BRK
		.BYTE 4, $37		; _msg_m00_b4
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_143EF9	; code used at a000
		JMP		sub_143AEA
loc_143EF9:				; CODE XREF: sub_143EBD+37-j
		LDA		#$E		; code used at a000
		BNE		loc_143F13	; code used at a000
loc_143EFD:				; CODE XREF: sub_143EBD+24-j
		CMP		#$1E		; code used at a000
		BNE		loc_143F13	; code used at a000
		LDA		byte_60BA
		AND		#8
		BNE		loc_143F11
		LDA		#$2B 
		JSR		sub_143F9E
		LDA		#$1E
		BNE		loc_143F13
loc_143F11:				; CODE XREF: sub_143EBD+49-j
		LDA		#$1F
loc_143F13:				; CODE XREF: sub_143EBD+1C-j
					; sub_143EBD+20-j sub_143EBD+2F-j
					; sub_143EBD+3E-j sub_143EBD+42-j
					; sub_143EBD+52-j
		STA		byte_5C		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_5D		; code used at a000
		LDA		#$AC       ; code used at a000
		LDX		#3		; code used at a000
		JSR		_add_arg5C_to16	; code used at a000
		JMP		__far_bE_s4_msg_m00_delta3_arg5C ; code	used at	a000
off_143F23:
		.WORD byte_143F25	; DATA XREF: sub_143E48+D-r
					; sub_143E48+10-r
					; data used at a000
byte_143F25:
		.BYTE	0,  1,	2,  3,	4,  5,	6,  7,	8,  9, $A,  1,	2,  3, $B,  5
					; DATA XREF: BANKD:off_143F23-o
		.BYTE	6,  7,	8,  4, $F,  1,	2,  3,	4,  5,	6,$10,	8,  4,$11,$12 ;	ind data used at a000
		.BYTE $13,$14,$15,$16,$17,$18,$19,$15,$1A,  1,	2,  3,	4,  5,	6,  7
		.BYTE	8,  4,$1B,  1,	2,  3,$1C,  5,	6,$1D,	8,  4,$1E,  1,	2,  3
		.BYTE	4,  5,	6,$20,	8,  4

; =============== S U B	R O U T	I N E =======================================
_bD_s21:				; CODE XREF: sub_1280A6+171-P
					; DATA XREF: BANKD:8042-o
		BRK
		.BYTE $27, $27		; _msg_m00_b3
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		JSR		sub_143F7B
		BRK
		.BYTE $28, $27		; _msg_m00_b3
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143F7B:				; CODE XREF: _npc_hndl5-p _npc_hndl6-p
					; _npc_hndl7-p _npc_hndl8-p _npc_hndl9-p
					; _npc_hndlA-p _npc_hndlB-p _npc_hndlC-p
					; _npc_hndl52:loc_143C33-p _npc_hndl53-p
					; _npc_hndl54-p	_npc_hndl54+6-p
					; _npc_hndl55-p	_npc_hndl56-p
					; _npc_hndl57-p	_npc_hndl58-p
					; _npc_hndl59-p	_bD_s21+6-p
		LDX		#0
loc_143F7D:				; CODE XREF: sub_143F7B+D-j
		LDA		byte_60BB,X
		BEQ		loc_143F98
		STA		byte_6AD1,X
		INX
		CPX		#4
		BNE		loc_143F7D
loc_143F8A:				; CODE XREF: sub_143F7B+1A-j
		LDA		byte_60CD,X
		BEQ		loc_143F98
		STA		byte_6AD1,X
		INX
		CPX		#8
		BCC		loc_143F8A
		RTS
loc_143F98:				; CODE XREF: sub_143F7B+5-j
					; sub_143F7B+12-j
		LDA		#$FF
		STA		byte_6AD1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143F9E:				; CODE XREF: sub_143179+19-p
					; _npc_hndl1+4E-p _npc_hndl2+1C-p
					; _npc_hndl3+72-p _npc_hndl16+16-p
					; _npc_hndl18+9-p _npc_hndl19+19-p
					; _npc_hndl1E+16-p _npc_hndl22+44-p
					; _npc_hndl22+49-p _npc_hndl22+56-p
					; _npc_hndl25+1B-p _npc_hndl27+12-p
					; _npc_hndl29+E-p _npc_hndl2C+1F-p
					; _npc_hndl2D+19-p _npc_hndl2E+18-p
					; sub_143AEA+16-p _npc_hndl5C+3D-p
					; _npc_hndl67+3C-p _npc_hndl68+16-p
					; _npc_hndl6C+28-p sub_143EBD+4D-p
		STY		byte_60C0	; code used at a000
		STX		byte_60C1	; code used at a000
		PHA				; code used at a000
		AND		#7		; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		TAX				; code used at a000
		LDA		byte_143FBD,Y	; code used at a000
		ORA		byte_60B5,X	; code used at a000
		STA		byte_60B5,X	; code used at a000
		LDX		byte_60C1	; code used at a000
		LDY		byte_60C0	; code used at a000
		RTS				; code used at a000
byte_143FBD:
		.BYTE	1,  2,	4,  8,$10,$20,$40,$80 ;	DATA XREF: sub_143F9E+F-r
_unused_19:
		.BYTE $FF,$FF,$FF,$FF,$FF,$FF,$FF

; =============== S U B	R O U T	I N E =======================================
_msg_m00_b3:				; CODE XREF: sub_1423CC-P sub_1423CC+8-P
					; sub_1423CC+19-P sub_1423CC+3C-P
					; sub_1423CC+45-P sub_1423CC+4B-P
					; sub_1423CC+51-P sub_14245C-P
					; sub_143102+7-P _bD_s27+7-P
					; sub_14311A+7-P _npc_hndl1+15-P
					; _npc_hndl1+1D-P
					; _npc_hndl1:loc_143553-P
					; _npc_hndl1+2D-P
					; _npc_hndl1:loc_143563-P
					; _npc_hndl1+3A-P _npc_hndl2+10-P
					; _npc_hndl3:loc_1435B3-P
					; _npc_hndl3+40-P _npc_hndl3+48-P
					; _npc_hndl3+50-P
					; _npc_hndl3:loc_14361E-P _npc_hndlA+E-P
					; _npc_hndlC+3-P _npc_hndlD-P
					; _npc_hndlE:loc_1436B8-P
					; _npc_hndlE:loc_1436C3-P _npc_hndl10-P
					; _npc_hndl10:loc_1436E2-P _npc_hndl11-P
					; _npc_hndl12-P	_npc_hndl15-P
					; _npc_hndl16:loc_143756-P
					; _npc_hndl16+27-P _npc_hndl18+C-P
					; _npc_hndl19+5-P _npc_hndl19+D-P
					; _npc_hndl1A-P	_npc_hndl1B-P
					; _npc_hndl1C-P	_npc_hndl1C:loc_1437EA-P
					; _npc_hndl1E:loc_143814-P
					; _npc_hndl1F+E-P
					; _npc_hndl1F:loc_143840-P
					; _npc_hndl22+16-P _npc_hndl22+27-P
					; _npc_hndl22:loc_14388F-P _npc_hndl24-P
					; _npc_hndl25:loc_1438ED-P
					; _npc_hndl25+C-P _npc_hndl25+F-P
					; _npc_hndl26-P	_npc_hndl27-P
					; _npc_hndl27+A-P
					; _npc_hndl28:loc_14394D-P
					; _npc_hndl28+2C-P _npc_hndl2B-P
					; _npc_hndl2B:loc_1439CA-P
					; _npc_hndl2B:loc_1439D1-P
					; _npc_hndl2B+17-P _npc_hndl2C+E-P
					; _npc_hndl2C+17-P
					; _npc_hndl2D:loc_143A0E-P
					; _bD_s20_npc_hndl31+3-P
					; _bD_s20_npc_hndl31+B-P
					; _bD_s20_npc_hndl33-P _npc_hndl40-P
					; _npc_hndl42:loc_143ADA-P
					; _npc_hndl42:loc_143ADD-P
					; _npc_hndl42+28-P
					; sub_143AEA:loc_143AF8-P _npc_hndl43-P
					; _npc_hndl43:loc_143B14-P
					; _npc_hndl43+13-P _npc_hndl44-P
					; _npc_hndl47:loc_143B93-P
					; _npc_hndl54+3-P
					; _npc_hndl5C:loc_143CA5-P _npc_hndl5D-P
					; _npc_hndl5E-P	_npc_hndl62-P
					; _npc_hndl64-P	_npc_hndl65-P
					; _npc_hndl67-P	_npc_hndl67+30-P
					; _npc_hndl68:loc_143D89-P _npc_hndl6A-P
					; _npc_hndl6D-P	sub_143E67+1B-P
					; _bD_s21-P _bD_s21+9-P
					; DATA XREF: BANKF:E7C4-o
		JMP		__msg_m00_b3	; ind code used	at a000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_b4:				; CODE XREF: sub_1431F7+66-P
					; sub_1431F7+72-P _npc_hndl18+F-P
					; _npc_hndl2D+D-P _npc_hndl2E-P
					; _npc_hndl2E:loc_143A2C-P
					; sub_143EBD:loc_143EEE-P
					; DATA XREF: BANKF:E7C6-o
		JMP		__msg_m00_b4	; ind code used	at a000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_b3_break:			; CODE XREF: sub_68A52+37-P sub_68C64-P
					; sub_68C64+CF-P sub_68D3F-P sub_68D8D-P
					; sub_68DEC-P sub_68E00-P sub_68E96+16-P
					; sub_68EC7+16-P sub_68F73-P
					; sub_68FF8+52-P sub_69058+17-P
					; sub_69173+41-P sub_691DF+37-P
					; sub_69225:loc_69267-P	sub_69370+74-P
					; sub_69370+90-P sub_69415+22-P
					; sub_69453+22-P sub_6957D-P
					; sub_696E8+4A-P sub_6975F+8-P
					; sub_69973+10-P sub_699A0+31-P
					; sub_69CA7+30-P sub_69CED+19-P
					; sub_69D77+31-P sub_69DAF+19-P
					; sub_69DF6+2B-P sub_69E2E+19-P
					; sub_69E98:loc_69EC1-P	sub_69F97+7-P
					; sub_6A044-P sub_6A049+C-P sub_6A070-P
					; sub_6A10C-P sub_6A121+7-P sub_6A134-P
					; sub_6A158-P sub_6A16D-P sub_6A1E8-P
					; sub_6A1EE-P sub_6A23B-P sub_6A2CB+25-P
					; sub_6A35F+18-P sub_6A38A+2-P
					; sub_6A38A+F-P	sub_6A3D3+18-P
					; sub_6A3D3:loc_6A3F1-P	sub_6A544-P
					; sub_6A5F7+1F-P sub_6A676:loc_6A6BD-P
					; sub_6ADD1+10-P sub_6AE6C+48-P
					; sub_6AF0E+1A-P sub_6AF53+3-P
					; sub_6AF5C+3-P	sub_6B01E+3-P
					; sub_6B027+7-P	sub_6B027+10-P
					; sub_6B0C1+11-P sub_1423CC+57-P
					; sub_1423CC+77-P
					; sub_1423CC:loc_142446-P
					; sub_1423CC:loc_142449-P sub_143179+6-P
					; sub_143179+27-P sub_14327E+4F-P
					; _npc_hndl0+9-P _npc_hndl0:loc_14352E-P
					; _npc_hndl1:loc_14353E-P
					; _npc_hndl1:loc_143556-P
					; _npc_hndl2:loc_1435A6-P
					; _npc_hndl3:loc_1435E2-P
					; _npc_hndl3:loc_143628-P _npc_hndl6+3-P
					; _npc_hndl7+3-P _npc_hndl8+3-P
					; _npc_hndl9+3-P _npc_hndlA:loc_14365F-P
					; _npc_hndlB+3-P _npc_hndlC+6-P
					; _npc_hndlE+21-P _npc_hndlE+2B-P
					; _npc_hndlE+36-P _npc_hndlF+7-P
					; _npc_hndlF:loc_1436D4-P
					; _npc_hndl10:loc_1436DF-P
					; _npc_hndl10+13-P
					; _npc_hndl12:loc_143711-P
					; _npc_hndl13:loc_14371E-P
					; _npc_hndl14+5-P
					; _npc_hndl14:loc_143736-P
					; _npc_hndl15+8-P
					; _npc_hndl16:loc_14374C-P
					; _npc_hndl16+37-P
					; _npc_hndl17:loc_143793-P
					; _npc_hndl17:loc_143796-P
					; _npc_hndl18:loc_1437B1-P
					; _npc_hndl19:loc_1437D1-P sub_1437D7-P
					; _npc_hndl1D+15-P _npc_hndl1F+16-P
					; _npc_hndl21+7-P _npc_hndl22+C-P
					; _npc_hndl22+1E-P
					; _npc_hndl22:loc_14387E-P
					; _npc_hndl22+2F-P
					; _npc_hndl22:loc_1438B6-P
					; _npc_hndl23:loc_1438C1-P
					; _npc_hndl25+6-P _npc_hndl26+8-P
					; _npc_hndl28:loc_143980-P
					; _npc_hndl2C:loc_143A01-P
					; _bD_s20_npc_hndl33+24-P
					; _bD_s20_npc_hndl33:loc_143AA0-P
					; _npc_hndl40:loc_143AB6-P
					; _npc_hndl43:loc_143B11-P
					; _npc_hndl4D+5-P _npc_hndl4D+26-P
					; _npc_hndl4D:loc_143BF9-P
					; _npc_hndl4E+4-P
					; _npc_hndl4E:loc_143C03-P
					; _npc_hndl4F+5-P
					; _npc_hndl4F:loc_143C0E-P
					; _npc_hndl50+7-P
					; _npc_hndl50:loc_143C1B-P
					; _npc_hndl51:loc_143C27-P
					; _npc_hndl54+9-P _npc_hndl55+3-P
					; _npc_hndl56+3-P _npc_hndl57+3-P
					; _npc_hndl58+3-P _npc_hndl59+3-P
					; _npc_hndl5C+5-P _npc_hndl5C+2D-P
					; sub_143CBC-P _npc_hndl5F+B-P
					; _npc_hndl62+6-P _npc_hndl63+4-P
					; _npc_hndl66+9-P _npc_hndl67+14-P
					; _npc_hndl67:loc_143D7C-P
					; _npc_hndl69+7-P
					; _npc_hndl69:loc_143DA3-P
					; _npc_hndl6A:loc_143DB1-P
					; _npc_hndl6B+7-P
					; _npc_hndl6B:loc_143DBE-P
					; _npc_hndl6C+10-P
					; _npc_hndl6C:loc_143DD4-P
					; _npc_hndl6C:loc_143DF0-P
					; _npc_hndl6D+6-P sub_143EBD+C-P
					; DATA XREF: BANKF:E7C8-o
		JMP		__msg_m00_b3_break ; ind code used at a000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_b4_break:			; CODE XREF: sub_68B00+21-P
					; sub_68B00+2C-P sub_68B3B+37-P
					; sub_68B3B+46-P sub_68D3F:loc_68D56-P
					; sub_68E1E+21-P sub_68E1E+2A-P
					; sub_68E69+21-P sub_68E69+2A-P
					; sub_68F21:loc_68F6D-P	sub_68FEB+A-P
					; sub_691BA:loc_691BD-P	sub_692B7+1A-P
					; sub_69370:loc_693EA-P	sub_69589+28-P
					; sub_69589+3A-P sub_69604+13-P
					; sub_69604+40-P sub_696E8+9-P
					; sub_696E8+1E-P sub_696E8+61-P
					; sub_69782+48-P sub_69931:loc_6994B-P
					; sub_69AE1+34-P sub_69B34+28-P
					; sub_69B74+29-P sub_69C62+15-P
					; sub_69C62:loc_69C7E-P	sub_69CA7+3B-P
					; sub_69D1D-P sub_69D35+24-P
					; sub_69E5B:loc_69E7C-P	sub_69ECB+2A-P
					; sub_69EF8+A-P	sub_69F85+F-P
					; sub_69FC5+1E-P sub_69FC5+4F-P
					; sub_6A263:loc_6A2C5-P	sub_6A5D6+1D-P
					; sub_6A6DF+39-P sub_6A74B+3C-P
					; sub_6A790+28-P sub_6A7BC+2A-P
					; sub_6AFD2+22-P sub_6B027:loc_6B048-P
					; sub_6B3D8-P _npc_hndl1E+7-P
					; _npc_hndl2D+7-P _npc_hndl2E+8-P
					; _bD_s20_npc_hndl32+7-P _npc_hndl45+6-P
					; _npc_hndl45:loc_143B3E-P
					; _npc_hndl5F:loc_143CD2-P
					; _npc_hndl67+A-P _npc_hndl68+7-P
					; DATA XREF: BANKF:E7CA-o
		JMP		__msg_m00_b4_break

		ECHO "bank 0D size", [.-$8000], "free space", [$BFD8-.]

		ORG $BFD8
		SEI
		INC	$BFDF
		JMP	_RESET
		.BYTE $80
		.BYTE "DRAGON WARRIOR "
		.BYTE $33
		.WORD $FFFF
		.WORD 0
		.BYTE $48
		.BYTE 4
		.BYTE 1
		.BYTE $F
		.BYTE 7
		.BYTE $9D
		.WORD $BFD8
		.WORD $BFD8
		.WORD $BFD8
