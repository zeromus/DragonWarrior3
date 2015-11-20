
		ORG $8000

		.WORD _b16_s0

; =============== S U B	R O U T	I N E =======================================
_b16_s0:
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#0
		STA		byte_AA
		JSR		sub_21C01C
		FAR		$2F, $17		; _bD_s28
		PLA
		STA		_mmc_cur_prg_bank
		JSR		_mmc1_prg_set
		LDA		#0
		STA		byte_AB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_21C01C:
		LDA		#$F
		STA		_ram_pal_buf
		LDA		off_21C164
		STA		_pak_data_ptr
		LDA		off_21C164+1
		STA		_pak_data_ptr+1
		JSR		sub_21C145
		LDA		byte_9A
		BNE		loc_21C060
		LDX		#6
loc_21C034:
		LDA		byte_21C3AA,X
		CMP		byte_6DF
		BCC		loc_21C041
		BEQ		loc_21C041
		DEX
		BNE		loc_21C034
loc_21C041:
		LDA		byte_21C3A3,X
		TAX
		LDY		#0
loc_21C047:
		STY		_tmp_pak_data_bank
		LDA		#$8B
		JSR		_get_syscall0_data_byte_X
		PHA
		LDA		byte_21C152,Y
		TAY
		PLA
		STA		_ram_pal_buf,Y
		LDY		_tmp_pak_data_bank
		INX
		INY
		CPY		#$C
		BCC		loc_21C047
		RTS
loc_21C060:
		LDA		byte_8B
		CMP		#8
		BEQ		loc_21C0B4
		CMP		#$2D
		BCC		loc_21C086
		CMP		#$41
		BCC		loc_21C0B8
		CMP		#$58
		BEQ		loc_21C0BC
		CMP		#$5B
		BEQ		loc_21C0C0
		CMP		#$85
		BEQ		loc_21C0C4
		CMP		#$9C
		BCC		loc_21C084
		CMP		#$9F
		BCC		loc_21C0A8
		BCS		loc_21C0C8
loc_21C084:
		SBC		#$13
loc_21C086:
		PHA
		LSR
		LSR
		TAX
		LDA		byte_21C166,X
		STA		_tmp21+1
		PLA
		ASL
		CLC
		ADC		_tmp_pak_data_bank
		AND		#7
		TAY
loc_21C097:
		ASL		_tmp21+1
		DEY
		BPL		loc_21C097
		LDA		_tmp_pak_data_bank
		ROL
		TAY
		LDA		byte_21C15E,Y
		TAY
		JSR		sub_21C137
		RTS
loc_21C0A8:
		SBC		#$9B
		LDY		_tmp_pak_data_bank
		LDA		byte_21C162,Y
		TAY
		JSR		sub_21C137
		RTS
loc_21C0B4:
		LDA		#0
		BEQ		loc_21C0CA
loc_21C0B8:
		SBC		#$2B
		BNE		loc_21C0CA
loc_21C0BC:
		LDA		#$15
		BNE		loc_21C0CA
loc_21C0C0:
		LDA		#$16
		BNE		loc_21C0CA
loc_21C0C4:
		LDA		#$17
		BNE		loc_21C0CA
loc_21C0C8:
		SBC		#$87
loc_21C0CA:
		TAX
		LDA		byte_21C2D2,X
		STA		word_4
		LDY		byte_8B
		CPY		#$D5
		BEQ		loc_21C0DC
		LDY		byte_9A
		CPY		#$19
		BCC		loc_21C0DF
loc_21C0DC:
		CLC
		ADC		_tmp_pak_data_bank
loc_21C0DF:
		ASL
		TAX
		LDA		byte_21C278,X
		PHA
		LSR
		LSR
		LSR
		LSR
		STA		word_B7
		PLA
		AND		#$F
		STA		word_B7+1
		INX
		LDA		byte_21C278,X
		PHA
		LSR
		LSR
		LSR
		LSR
		STA		byte_B9
		PLA
		AND		#$F
		STA		byte_BA
		LDA		byte_9A
		SEC
		SBC		#$C
		TAX
		LDA		byte_21C33F,X
		STA		word_4
		LDX		#0
		STX		_tmp_pak_data_bank
loc_21C10F:
		LDA		#0
		STA		word_4+1
		TXA
		PHA
		LDX		_tmp_pak_data_bank
		LDA		word_B7,X
		ASL
		ADC		word_B7,X
		ADC		word_4
		TAY
		PLA
		TAX
loc_21C121:
		LDA		(_pak_data_ptr),Y
		STA		_ram_pal_buf+1,X
		INY
		INX
		INC		word_4+1
		LDA		word_4+1
		CMP		#3
		BNE		loc_21C121
		INC		_tmp_pak_data_bank
		CPX		#$C
		BNE		loc_21C10F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_21C137:
		LDX		#0
loc_21C139:
		LDA		(_pak_data_ptr),Y
		STA		_ram_pal_buf+1,X
		INY
		INX
		CPX		#$C
		BNE		loc_21C139
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_21C145:
		LDX		#0
		LDA		byte_6DF
		CMP		#$78
		BCC		loc_21C14F
		INX
loc_21C14F:
		STX		_tmp_pak_data_bank
		RTS
byte_21C152:
		.BYTE	1,  4,	7, $A,	2,  5,	8, $B,	3,  6,	9, $C
byte_21C15E:
		.BYTE	0, $C,$18,$24
byte_21C162:
		.BYTE $30,$3C
off_21C164:
		.WORD byte_21C188
byte_21C166:
		.BYTE	0,  1,$20,  8,$54,  2,$8D,  5,$55,$D5,$D4,$3F,$51,$74,$75,$3C
		.BYTE	1,  0,$FC,  0,$3F,$55,$7F,$C0,$2F,$D5,$FF,$77,	9,$B0,$2D,$30
		.BYTE $10,$14
byte_21C188:
		.BYTE $30,$11,$21,$26,$37,$15,$10,  0,$15,$29,$1A,$27,$30,$11,$21,$27
		.BYTE $37,$15,$10,  0,$15,$29,$1A,$27,$21, $F,	1,  6,$17,  5,	0, $F
		.BYTE	5, $C,	9,  7,$21, $F,	1,$17,$27,  6,	0, $F,	6,$19, $A,$17
		.BYTE $30,$11,$21,$17,$27,$15,$17,$27,$10,$17,$27,$11,$21, $F,	1,  7
		.BYTE $17,  5,	7,$17,	0,  7,$17, $F,$30,  0,$10,$10,	0,$18,$26,$37
		.BYTE $17,$10,	0,$17,$2B, $B,$1B,$10,	0,$17,$30,  1,$11,$10,$28,$18
		.BYTE $30,$11,$21,$37,	0,$10,	1,  0,$10,$30,	0,$10,$30, $B,$26,$10
		.BYTE	0,$18,	1,  0,$10,$30,	1,$11,$10,  0,$18,$37,$26,$17,$10,  0
		.BYTE $17,$2A,$1A,$17,$30,  0,$10,$27,$17,  7,$10,  0,$18,$30,	1,$11
		.BYTE	1,  0,$10,$30,$15,$26,$15,  0,$10,  7,$16,$26,$30,$37,$27,$10
		.BYTE	0,$17,$10,  0,$17,$30,$10,  0,$37,  0,$10,$30, $F,$17,$2A,$1A
		.BYTE $17,$37,$27,$17,$30,$27,$21,$30,$27,  1,$27,$17,	7,$27,$16,  6
		.BYTE $37,$26,$17,$10,	0,$15,$10,  0,$1C,$37,	0,$26,$30,  0,$21,$30
		.BYTE	0,  1,$30,  0,$2A,$30,	0, $A,$10,$28,$18,$37,$26,$15,$37,$27
		.BYTE $1C,$30,$11,$21,$30,$11,	1,$37,$26,$21,$37,$26,	1,$2A,$1A,$15
byte_21C278:
		.BYTE	1,$23,$40,$15,$40,$18,$40,$16,$40,$13,$80,$13,$80,$15,$70,$19
		.BYTE $70,$16,$20,$10,$62,$43,$62,$45,$12,$40,$40,$15,$20,$16,$20,$13
		.BYTE	6,$14,$37,$14,$32,$1C,$50,$14,$52,$13,$80,$16,$90,$16,$8A,$1B
		.BYTE $9A,$1B,$30,$78,$40,$78,$30,$7A,$40,$7B,$30,$72,$40,$72,$31,$79
		.BYTE $41,$79,$31,$7A,$41,$7B,$31,$7C,$41,$7D,$50,$7A,$60,$7B,$50,$7E
		.BYTE $60,$7E,$51,$7A,$61,$7B,$50,$72,$60,$72
byte_21C2D2:
		.BYTE	4, $E, $E,  0,	0, $C, $B,  3,	5, $D,	5, $E,$14,$14,$12,$15
		.BYTE $27,$29,$2B,$29,$25,  2,	3,$11,	4,  5,	5,  4, $E, $E, $F,  0
		.BYTE $14, $B, $B, $C, $C,$1B, $E, $E, $E, $E, $E,  6,	5,  5,	5,  6
		.BYTE  $D, $D, $D, $D, $D,  5,	8, $E, $E,  7,	7,  2,$14,$14,$11,  0
		.BYTE	1,  1,	5,  5,	8,  2,	2,  2,$13,$15,$15,$15,$15,$13,$17,$19
		.BYTE $19,$19,$19,$19,$21,$21,$21,$21,$21,$23,$1D,$1D,$1D,$1D,$1D,$1D
		.BYTE $19,$21,$21,$21,$21,$1F,	9,$21,$1B,$1B,$1B,$1B,$1B
byte_21C33F:
		.BYTE $48,$54,$54,$54,$54,$54,$72,$87,$87,$9C,$9C,$9C,$54,$C3,$C3,$C3
		.BYTE $30,$17,$10,$2A, $C,$27,	0,$19,$1C,$2A,$2A,$27,$30,$17,$10,$2A
		.BYTE $1C,$37,	0,$1A,$2C,$2A,$2A,$27,$30,$17,$10,$29,$11,$37,	0,$19
		.BYTE $21,$29,$29,$27,$30,$17,$10,$29,	1,$27,	0,$19,$11,$29,$29,$27
		.BYTE $21,  7,	0,$19, $F,$17, $F,  9,	1,$19,$19,$17,$21,  7,	0, $C
		.BYTE  $F,$17, $F,  9,	1, $C, $C,  7,$21,  7,	0,$1A, $F,$17, $F,  9
		.BYTE  $C,$1A,$1A,$17
byte_21C3A3:
		.BYTE	0, $C,$18,$24,$30,$3C,$48 
byte_21C3AA:
		.BYTE	0,$1E,$3C,$5A,$78,$96,$B4 

		ECHO "bank 16 free space", [$BFD8-.]

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
