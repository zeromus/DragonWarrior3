
		ORG $8000

		.WORD	_b1B_s0

; =============== S U B	R O U T	I N E =======================================
_b1B_s0:
		JSR		sub_294028
		JSR		sub_294071
		JSR		sub_2940B3
		LDX		#0
		LDY		#0
loc_29400F:
		LDA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_29401C
		INY
		INX
		CPX		#4
		BCC		loc_29400F
loc_29401C:
		INY
		TYA
		FAR		$7C, 7		; _b4_sF
		STA		byte_6A6D
		FAR		$80, $17		; _b4_s26
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_294028:
		LDA		byte_60B7
		LSR
		BCS		loc_294065
		FAR		$7D, $17		; _bD_sB
		LDA		byte_D2
		CMP		#4
		BCC		loc_294039
		LDA		#0
loc_294039:
		STA		byte_CE
		JSR		_sram_b0_sC
		LDA		word_4
		CMP		#$B
		BCS		loc_29404A
		LDA		byte_29406C
		JMP		loc_294068
loc_29404A:
		CMP		#$10
		BCS		loc_294053
		LDA		byte_29406D
		BNE		loc_294068
loc_294053:
		CMP		#$16
		BCS		loc_29405C
		LDA		byte_29406E
		BNE		loc_294068
loc_29405C:
		CMP		#$1E
		BCS		loc_294065
		LDA		byte_29406F
		BNE		loc_294068
loc_294065:
		LDA		byte_294070
loc_294068:
		FAR		$7C, 7		; _b4_sF
		RTS
byte_29406C:
		.BYTE	$A
byte_29406D:
		.BYTE	$13
byte_29406E:
		.BYTE	$18
byte_29406F:
		.BYTE	$21
byte_294070:
		.BYTE	$26

; =============== S U B	R O U T	I N E =======================================
sub_294071:
		STA		word_6
		LDA		#0
		STA		word_6+1
		LDA		off_294215
		STA		word_4
		LDA		off_294215+1
		STA		word_4+1
		ASL		word_6
		ROL		word_6+1
		ASL		word_6
		ROL		word_6+1
		ASL		word_6
		ROL		word_6+1
		LDA		word_6
		CLC
		ADC		word_4
		STA		word_4
		LDA		word_6+1
		ADC		word_4+1
		STA		word_4+1
		LDY		#0
loc_29409C:
		LDA		(word_4),Y
		STA		_enemy_roster_index_list,Y
		INY
		CPY		#4
		BCC		loc_29409C
		LDX		#0
		LDA		#1
loc_2940AA:
		STA		byte_571,X
		INX
		CPX		#4
		BCC		loc_2940AA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2940B3:
		LDX		#0
loc_2940B5:
		LDA		(word_4),Y
		STA		byte_6AD5,X
		LDA		#0
		STA		byte_6AD9,X
		INY
		INX
		CPX		#4
		BCC		loc_2940B5
		LDA		#0
		STA		word_4
loc_2940C9:
		JSR		sub_2940D5
		INC		word_4
		LDA		word_4
		CMP		#4
		BCC		loc_2940C9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2940D5:
		LDX		word_4
		LDA		byte_6AD5,X
		CMP		#6
		BCC		loc_294121
		CMP		#$B
		BCC		loc_29415A
		CMP		#$1F
		BCC		loc_29415D
		CMP		#$65
		BCC		loc_294160
		LDA		#$65
		FAR		$7C, 7		; _b4_sF
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
loc_294107:
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
loc_29411D:
		STA		byte_6AD9,X
		RTS
loc_294121:
		LDA		#4
		FAR		$7C, 7		; _b4_sF
		PHA
		JSR		sub_2941FA
		PLA
		BCS		loc_294133
loc_29412D:
		LDX		word_4
		STA		byte_6AD9,X
		RTS
loc_294133:
		PHA
		LDX		word_4
		DEC		byte_6AD5,X
		LDA		byte_6AD5,X
		BNE		loc_294145
		INC		byte_6AD5,X
		PLA
		JMP		loc_29412D
loc_294145:
		PLA
		TAY
		BNE		loc_29414D
		LDA		#9
		BNE		loc_294154
loc_29414D:
		STA		word_4+1
		LDA		#$A
		SEC
		SBC		word_4+1
loc_294154:
		LDX		word_4
		STA		byte_6AD9,X
		RTS
loc_29415A:
		JMP		loc_294163
loc_29415D:
		JMP		loc_29418C
loc_294160:
		JMP		loc_2941C3
loc_294163:
		LDA		#8
		FAR		$7C, 7		; _b4_sF
		PHA
		JSR		sub_2941FA
		PLA
		BCS		loc_294175
		LDX		word_4
		STA		byte_6AD9,X
		RTS
loc_294175:
		TAY
		BNE		loc_29417C
		LDA		#9
		BNE		loc_294183
loc_29417C:
		STA		word_4+1
		LDA		#$A
		SEC
		SBC		word_4+1
loc_294183:
		LDX		word_4
		STA		byte_6AD9,X
		DEC		byte_6AD5,X
		RTS
loc_29418C:
		LDA		#$15
		FAR		$7C, 7		; _b4_sF
		PHA
		JSR		sub_2941FA
		PLA
		BCS		loc_2941A9
		JSR		sub_294206
		LDX		word_4
		CLC
		ADC		byte_6AD5,X
		STA		byte_6AD5,X
		TYA
		STA		byte_6AD9,X
		RTS
loc_2941A9:
		JSR		sub_294206
		LDX		word_4
		STA		word_4+1
		LDA		byte_6AD5,X
		SEC
		SBC		word_4+1
		STA		byte_6AD5,X
		TYA
		BEQ		loc_2941BF
		DEC		byte_6AD5,X
loc_2941BF:
		STA		byte_6AD9,X
		RTS
loc_2941C3:
		LDA		#$33
		FAR		$7C, 7		; _b4_sF
		PHA
		JSR		sub_2941FA
		PLA
		BCS		loc_2941E0
		JSR		sub_294206
		LDX		word_4
		CLC
		ADC		byte_6AD5,X
		STA		byte_6AD5,X
		TYA
		STA		byte_6AD9,X
		RTS
loc_2941E0:
		JSR		sub_294206
		LDX		word_4
		STA		word_4+1
		LDA		byte_6AD5,X
		SEC
		SBC		word_4+1
		STA		byte_6AD5,X
		TYA
		BEQ		loc_2941F6
		DEC		byte_6AD5,X
loc_2941F6:
		STA		byte_6AD9,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2941FA:
		LDA		#2
		FAR		$7C, 7		; _b4_sF
		TAX
		BNE		loc_294204
		CLC
		RTS
loc_294204:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_294206:
		LDX		#0
loc_294208:
		SEC
		SBC		#$A
		BCC		loc_294210
		INX
		BNE		loc_294208
loc_294210:
		ADC		#$A
		TAY
		TXA
		RTS
off_294215:
		.WORD	byte_294217
byte_294217:
		.BYTE	  0,  1,  2,$FF,  4,  4,  2,  1,  5,  4,  6,$FF,  2, $A,  3,  1
		.BYTE	  7, $B,  7,$FF,  3,  4,  3,  1,  7, $E,$10,$FF,$14,  3,  3,  1
		.BYTE	 $B, $B, $B, $B,  5,  5,  5,  5, $A,  3,  3,  3,  3,  5,  5,  5
		.BYTE	  4,  8,  4,$FF,  4,  2,  4,  1,  5,  3,  8,$FF,  3,  4,  3,  1
		.BYTE	  2,  1,  6,$FF,  5,  5,  1,  1, $B, $C, $D,  7,$15,$1B,  2,$13
		.BYTE	 $E,$12,$13,$FF,  2,  6,  3,  1, $D,$15,$15,$FF,$1E,  3,  3,  1
		.BYTE	$11,$14,$16,$FF,  2, $D,  4,  1,$1B,$19,$FF,$FF,  1,  4,  1,  1
		.BYTE	$17,$1A,$20,$1E, $B, $A,  2,  3,$20,$24,$20,$FF,  3,  2,  3,  1
		.BYTE	$23,$1B,$19,$FF,  5,  2,  3,  1,  9,$1A,$1E,$FF,$64,  3,  2,  1
		.BYTE	$1F,$15,$1C,$1D,$20,  2,$13,  3,$6C,$31,$22,$FF,  1,  4,  4,  1
		.BYTE	$28,$25,$38,$FF,  4,  4,  3,  1,$33,$2F,$30,$FF,  4,  6,  2,  1
		.BYTE	$3A,$47,$47,$47,  2,  8,  8,  8,  9,$31,$31,  9,$C8,  7,  7,$C8
		.BYTE	$3F,$40,$41,$FF,  2,  5,  5,  1,$60,$60,$60,$FF,  3,  3,  3,  1
		.BYTE	$50,$45,$4F,$FF,  1,$1E, $A,  1,  0,$31,$39,$3F,$DF,$53, $A,$31
		.BYTE	$45,$60,$FF,$FF,  8,  1,  1,  1,$4E,$5F,$46,$FF, $A,  2,  2,  1
		.BYTE	$57,$36,$FF,$FF,$F0,  2,  1,  1,$3B,$4A,$48,$FF,  3,  3,  3,  1
		.BYTE	$52,$4D,$4C,$FF,  4,  3,  3,  1,$64,$63,$64,$FF,  3,  4,  3,  1
		.BYTE	$6E,$2E,$FF,$FF,  2,  2,  1,  1,$5F,$61,$5B,$FF, $F,  2,  4,  1
		.BYTE	$36,$62,$FF,$FF,  4,  4,  1,  1,$18,$18,$18,$FF,  7,  7,  7,  1
		.BYTE	$7C,$7C,$7C,$7C,  5,  5,  5,  5,$FF

		ECHO "bank 1B free space", [$BFD8-.]

		ORG $BFD8
		SEI
		INC	$BFDF
		JMP	_RESET
		.BYTE	$80
		.BYTE	"DRAGON WARRIOR "
		.BYTE	$33
		.WORD	$FFFF
		.WORD	0
		.BYTE	$48
		.BYTE	  4
		.BYTE	  1
		.BYTE	$F
		.BYTE	  7
		.BYTE	$9D
		.WORD	$BFD8
		.WORD	$BFD8
		.WORD	$BFD8
