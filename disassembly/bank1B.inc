
		ORG $8000

		.WORD _b1B_s0		; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1B_s0:				; CODE XREF: _b0_s51-P
					; DATA XREF: BANK1B:8000-o
		JSR		sub_294028	; code used at 8000
		JSR		sub_294071	; code used at 8000
		JSR		sub_2940B3	; code used at 8000
		LDX		#0		; code used at 8000
		LDY		#0		; code used at 8000
loc_29400F:				; CODE XREF: _b1B_s0+18-j
		LDA		_enemy_roster_index_list,X ; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_29401C	; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BCC		loc_29400F	; code used at 8000
loc_29401C:				; CODE XREF: _b1B_s0+12-j
		INY				; code used at 8000
		TYA				; code used at 8000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		STA		byte_6A6D	; code used at 8000
		BRK
		.BYTE $80, $17		; ofs 0x0006804c, -> dst _b4_s26
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_294028:				; CODE XREF: _b1B_s0-p
		LDA		byte_60B7	; code used at 8000
		LSR		; code used at 8000
		BCS		loc_294065	; code used at 8000
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		LDA		byte_D2		; code used at 8000
		CMP		#4		; code used at 8000
		BCC		loc_294039	; code used at 8000
		LDA		#0
loc_294039:				; CODE XREF: sub_294028+D-j
		STA		byte_CE		; code used at 8000
		JSR		_sram_bank0_subC ; code	used at	8000
		LDA		word_4		; code used at 8000
		CMP		#$B		; code used at 8000
		BCS		loc_29404A	; code used at 8000
		LDA		byte_29406C	; code used at 8000
		JMP		loc_294068	; code used at 8000
loc_29404A:				; CODE XREF: sub_294028+1A-j
		CMP		#$10		; code used at 8000
		BCS		loc_294053	; code used at 8000
		LDA		byte_29406D	; code used at 8000
		BNE		loc_294068	; code used at 8000
loc_294053:				; CODE XREF: sub_294028+24-j
		CMP		#$16
		BCS		loc_29405C
		LDA		byte_29406E
		BNE		loc_294068
loc_29405C:				; CODE XREF: sub_294028+2D-j
		CMP		#$1E
		BCS		loc_294065
		LDA		byte_29406F
		BNE		loc_294068
loc_294065:				; CODE XREF: sub_294028+4-j
					; sub_294028+36-j
		LDA		byte_294070
loc_294068:				; CODE XREF: sub_294028+1F-j
					; sub_294028+29-j sub_294028+32-j
					; sub_294028+3B-j
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		RTS				; code used at 8000
byte_29406C:
		.BYTE $A		; DATA XREF: sub_294028+1C-r
					; data used at 8000
byte_29406D:
		.BYTE $13		; DATA XREF: sub_294028+26-r
					; data used at 8000
byte_29406E:
		.BYTE $18		; DATA XREF: sub_294028+2F-r
byte_29406F:
		.BYTE $21		; DATA XREF: sub_294028+38-r
byte_294070:
		.BYTE $26		; DATA XREF: sub_294028:loc_294065-r

; =============== S U B	R O U T	I N E =======================================
sub_294071:				; CODE XREF: _b1B_s0+3-p
		STA		word_6		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_6+1	; code used at 8000
		LDA		off_294215	; code used at 8000
		STA		word_4		; code used at 8000
		LDA		off_294215+1	; code used at 8000
		STA		word_4+1	; code used at 8000
		ASL		word_6		; code used at 8000
		ROL		word_6+1	; code used at 8000
		ASL		word_6		; code used at 8000
		ROL		word_6+1	; code used at 8000
		ASL		word_6		; code used at 8000
		ROL		word_6+1	; code used at 8000
		LDA		word_6		; code used at 8000
		CLC				; code used at 8000
		ADC		word_4		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		word_6+1	; code used at 8000
		ADC		word_4+1	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDY		#0		; code used at 8000
loc_29409C:				; CODE XREF: sub_294071+33-j
		LDA		(word_4),Y	; code used at 8000
		STA		_enemy_roster_index_list,Y ; code used as ind data at 8000
		INY				; code used at 8000
		CPY		#4		; code used at 8000
		BCC		loc_29409C	; code used at 8000
		LDX		#0		; code used at 8000
		LDA		#1		; code used at 8000
loc_2940AA:				; CODE XREF: sub_294071+3F-j
		STA		byte_571,X	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BCC		loc_2940AA	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2940B3:				; CODE XREF: _b1B_s0+6-p
		LDX		#0		; code used at 8000
loc_2940B5:				; CODE XREF: sub_2940B3+10-j
		LDA		(word_4),Y	; code used at 8000
		STA		byte_6AD5,X	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6AD9,X	; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BCC		loc_2940B5	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4		; code used at 8000
loc_2940C9:				; CODE XREF: sub_2940B3+1F-j
		JSR		sub_2940D5	; code used at 8000
		INC		word_4		; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#4		; code used at 8000
		BCC		loc_2940C9	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2940D5:				; CODE XREF: sub_2940B3:loc_2940C9-p
		LDX		word_4		; code used at 8000
		LDA		byte_6AD5,X	; code used at 8000
		CMP		#6		; code used at 8000
		BCC		loc_294121	; code used at 8000
		CMP		#$B		; code used at 8000
		BCC		loc_29415A	; code used at 8000
		CMP		#$1F		; code used at 8000
		BCC		loc_29415D	; code used at 8000
		CMP		#$65       ; code used at 8000
		BCC		loc_294160	; code used at 8000
		LDA		#$65 
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		PHA
		JSR		sub_2941FA
		PLA
		BCS		loc_294107
		JSR		sub_294206
		LDX		word_4
		CLC
		ADC		byte_6AD5,X
		STA		byte_6AD5,X
		TYA
		STA		byte_6AD9,X
		RTS
loc_294107:				; CODE XREF: sub_2940D5+1F-j
		JSR		sub_294206
		LDX		word_4
		STA		word_4+1
		LDA		byte_6AD5,X
		SEC
		SBC		word_4+1
		STA		byte_6AD5,X
		TYA
		BEQ		loc_29411D
		DEC		byte_6AD5,X
loc_29411D:				; CODE XREF: sub_2940D5+43-j
		STA		byte_6AD9,X
		RTS
loc_294121:				; CODE XREF: sub_2940D5+7-j
		LDA		#4		; code used at 8000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		PHA				; code used at 8000
		JSR		sub_2941FA	; code used at 8000
		PLA				; code used at 8000
		BCS		loc_294133	; code used as ind data	at 8000
loc_29412D:				; CODE XREF: sub_2940D5+6D-j
		LDX		word_4		; code used at 8000
		STA		byte_6AD9,X	; code used at 8000
		RTS				; code used at 8000
loc_294133:				; CODE XREF: sub_2940D5+56-j
		PHA				; code used at 8000
		LDX		word_4		; code used at 8000
		DEC		byte_6AD5,X	; code used at 8000
		LDA		byte_6AD5,X	; code used at 8000
		BNE		loc_294145	; code used at 8000
		INC		byte_6AD5,X	; code used at 8000
		PLA				; code used at 8000
		JMP		loc_29412D	; code used at 8000
loc_294145:				; CODE XREF: sub_2940D5+67-j
		PLA				; code used at 8000
		TAY				; code used at 8000
		BNE		loc_29414D	; code used at 8000
		LDA		#9		; code used at 8000
		BNE		loc_294154	; code used at 8000
loc_29414D:				; CODE XREF: sub_2940D5+72-j
		STA		word_4+1	; code used at 8000
		LDA		#$A		; code used at 8000
		SEC				; code used at 8000
		SBC		word_4+1	; code used at 8000
loc_294154:				; CODE XREF: sub_2940D5+76-j
		LDX		word_4		; code used at 8000
		STA		byte_6AD9,X	; code used at 8000
		RTS				; code used at 8000
loc_29415A:				; CODE XREF: sub_2940D5+B-j
		JMP		loc_294163	; code used at 8000
loc_29415D:				; CODE XREF: sub_2940D5+F-j
		JMP		loc_29418C	; code used at 8000
loc_294160:				; CODE XREF: sub_2940D5+13-j
		JMP		loc_2941C3	; code used at 8000
loc_294163:				; CODE XREF: sub_2940D5:loc_29415A-j
		LDA		#8		; code used at 8000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		PHA				; code used at 8000
		JSR		sub_2941FA	; code used at 8000
		PLA				; code used at 8000
		BCS		loc_294175	; code used at 8000
		LDX		word_4		; code used at 8000
		STA		byte_6AD9,X	; code used at 8000
		RTS				; code used at 8000
loc_294175:				; CODE XREF: sub_2940D5+98-j
		TAY				; code used at 8000
		BNE		loc_29417C	; code used at 8000
		LDA		#9
		BNE		loc_294183
loc_29417C:				; CODE XREF: sub_2940D5+A1-j
		STA		word_4+1	; code used at 8000
		LDA		#$A		; code used at 8000
		SEC				; code used at 8000
		SBC		word_4+1	; code used at 8000
loc_294183:				; CODE XREF: sub_2940D5+A5-j
		LDX		word_4		; code used at 8000
		STA		byte_6AD9,X	; code used at 8000
		DEC		byte_6AD5,X	; code used at 8000
		RTS				; code used at 8000
loc_29418C:				; CODE XREF: sub_2940D5:loc_29415D-j
		LDA		#$15		; code used at 8000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		PHA				; code used at 8000
		JSR		sub_2941FA	; code used at 8000
		PLA				; code used at 8000
		BCS		loc_2941A9	; code used at 8000
		JSR		sub_294206	; code used at 8000
		LDX		word_4		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6AD5,X	; code used at 8000
		STA		byte_6AD5,X	; code used at 8000
		TYA				; code used at 8000
		STA		byte_6AD9,X	; code used at 8000
		RTS				; code used at 8000
loc_2941A9:				; CODE XREF: sub_2940D5+C1-j
		JSR		sub_294206	; code used at 8000
		LDX		word_4		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		byte_6AD5,X	; code used at 8000
		SEC				; code used at 8000
		SBC		word_4+1	; code used at 8000
		STA		byte_6AD5,X	; code used at 8000
		TYA				; code used at 8000
		BEQ		loc_2941BF	; code used at 8000
		DEC		byte_6AD5,X	; code used at 8000
loc_2941BF:				; CODE XREF: sub_2940D5+E5-j
		STA		byte_6AD9,X	; code used at 8000
		RTS				; code used at 8000
loc_2941C3:				; CODE XREF: sub_2940D5:loc_294160-j
		LDA		#$33       ; code used at 8000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		PHA				; code used at 8000
		JSR		sub_2941FA	; code used at 8000
		PLA				; code used at 8000
		BCS		loc_2941E0	; code used at 8000
		JSR		sub_294206
		LDX		word_4
		CLC
		ADC		byte_6AD5,X
		STA		byte_6AD5,X
		TYA
		STA		byte_6AD9,X
		RTS
loc_2941E0:				; CODE XREF: sub_2940D5+F8-j
		JSR		sub_294206	; code used at 8000
		LDX		word_4		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		byte_6AD5,X	; code used at 8000
		SEC				; code used at 8000
		SBC		word_4+1	; code used at 8000
		STA		byte_6AD5,X	; code used at 8000
		TYA				; code used at 8000
		BEQ		loc_2941F6	; code used at 8000
		DEC		byte_6AD5,X	; code used at 8000
loc_2941F6:				; CODE XREF: sub_2940D5+11C-j
		STA		byte_6AD9,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2941FA:				; CODE XREF: sub_2940D5+1B-p
					; sub_2940D5+52-p sub_2940D5+94-p
					; sub_2940D5+BD-p sub_2940D5+F4-p
		LDA		#2		; code used at 8000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		TAX				; code used at 8000
		BNE		loc_294204	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_294204:				; CODE XREF: sub_2941FA+6-j
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_294206:				; CODE XREF: sub_2940D5+21-p
					; sub_2940D5:loc_294107-p
					; sub_2940D5+C3-p
					; sub_2940D5:loc_2941A9-p
					; sub_2940D5+FA-p
					; sub_2940D5:loc_2941E0-p
		LDX		#0		; code used at 8000
loc_294208:				; CODE XREF: sub_294206+8-j
		SEC				; code used at 8000
		SBC		#$A		; code used at 8000
		BCC		loc_294210	; code used at 8000
		INX				; code used at 8000
		BNE		loc_294208	; code used at 8000
loc_294210:				; CODE XREF: sub_294206+5-j
		ADC		#$A		; code used at 8000
		TAY				; code used at 8000
		TXA				; code used at 8000
		RTS				; code used at 8000
off_294215:
		.WORD byte_294217	; DATA XREF: sub_294071+6-r
					; sub_294071+B-r
					; data used at 8000
byte_294217:
		.BYTE	0,  1,	2,$FF,	4,  4,	2,  1,	5,  4,	6,$FF,	2, $A,	3,  1
					; DATA XREF: BANK1B:off_294215-o
		.BYTE	7, $B,	7,$FF,	3,  4,	3,  1,	7, $E,$10,$FF,$14,  3,	3,  1 ;	ind data used at 8000
		.BYTE  $B, $B, $B, $B,	5,  5,	5,  5, $A,  3,	3,  3,	3,  5,	5,  5
		.BYTE	4,  8,	4,$FF,	4,  2,	4,  1,	5,  3,	8,$FF,	3,  4,	3,  1
		.BYTE	2,  1,	6,$FF,	5,  5,	1,  1, $B, $C, $D,  7,$15,$1B,	2,$13
		.BYTE  $E,$12,$13,$FF,	2,  6,	3,  1, $D,$15,$15,$FF,$1E,  3,	3,  1
		.BYTE $11,$14,$16,$FF,	2, $D,	4,  1,$1B,$19,$FF,$FF,	1,  4,	1,  1
		.BYTE $17,$1A,$20,$1E, $B, $A,	2,  3,$20,$24,$20,$FF,	3,  2,	3,  1
		.BYTE $23,$1B,$19,$FF,	5,  2,	3,  1,	9,$1A,$1E,$FF,$64,  3,	2,  1
		.BYTE $1F,$15,$1C,$1D,$20,  2,$13,  3,$6C,$31,$22,$FF,	1,  4,	4,  1
		.BYTE $28,$25,$38,$FF,	4,  4,	3,  1,$33,$2F,$30,$FF,	4,  6,	2,  1
		.BYTE $3A,$47,$47,$47,	2,  8,	8,  8,	9,$31,$31,  9,$C8,  7,	7,$C8
		.BYTE $3F,$40,$41,$FF,	2,  5,	5,  1,$60,$60,$60,$FF,	3,  3,	3,  1
		.BYTE $50,$45,$4F,$FF,	1,$1E, $A,  1,	0,$31,$39,$3F,$DF,$53, $A,$31
		.BYTE $45,$60,$FF,$FF,	8,  1,	1,  1,$4E,$5F,$46,$FF, $A,  2,	2,  1
		.BYTE $57,$36,$FF,$FF,$F0,  2,	1,  1,$3B,$4A,$48,$FF,	3,  3,	3,  1
		.BYTE $52,$4D,$4C,$FF,	4,  3,	3,  1,$64,$63,$64,$FF,	3,  4,	3,  1
		.BYTE $6E,$2E,$FF,$FF,	2,  2,	1,  1,$5F,$61,$5B,$FF, $F,  2,	4,  1
		.BYTE $36,$62,$FF,$FF,	4,  4,	1,  1,$18,$18,$18,$FF,	7,  7,	7,  1
		.BYTE $7C,$7C,$7C,$7C,	5,  5,	5,  5,$FF

		ECHO "bank 1B size", [.-$8000], "free space", [$BFD8-.]

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
