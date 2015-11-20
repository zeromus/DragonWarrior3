
		ORG $8000

		.WORD _b16_s0		; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_b16_s0:				; CODE XREF: _b2_s9+25-P sub_1743B5-P
					; DATA XREF: BANK16:8000-o
		LDA		_mmc_cur_prg_bank ; code used at 8000
		PHA				; code used as ind data	at 8000
		LDA		#0		; code used at 8000
		STA		byte_AA		; code used at 8000
		JSR		sub_21C01C	; code used at 8000
		BRK
		.BYTE $2F, $17		; ofs 0x00140050, -> dst _bD_s28
		PLA				; code used at 8000
		STA		_mmc_cur_prg_bank ; code used at 8000
		JSR		_mmc1_prg_set	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_AB		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_21C01C:				; CODE XREF: _b16_s0+8-p
		LDA		#$F		; code used at 8000
		STA		_ram_pal_buf	; code used at 8000
		LDA		off_21C164	; code used at 8000
		STA		_pak_data_ptr	; code used at 8000
		LDA		off_21C164+1	; code used at 8000
		STA		_pak_data_ptr+1	; code used at 8000
		JSR		sub_21C145	; code used at 8000
		LDA		byte_9A		; code used at 8000
		BNE		loc_21C060	; code used at 8000
		LDX		#6		; code used at 8000
loc_21C034:				; CODE XREF: sub_21C01C+23-j
		LDA		byte_21C3AA,X	; code used at 8000
		CMP		byte_6DF	; code used at 8000
		BCC		loc_21C041	; code used at 8000
		BEQ		loc_21C041	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_21C034	; code used at 8000
loc_21C041:				; CODE XREF: sub_21C01C+1E-j
					; sub_21C01C+20-j
		LDA		byte_21C3A3,X	; code used at 8000
		TAX				; code used at 8000
		LDY		#0		; code used at 8000
loc_21C047:				; CODE XREF: sub_21C01C+41-j
		STY		_tmp_pak_data_bank ; code used at 8000
		LDA		#$8B       ; code used at 8000
		JSR		_get_syscall0_data_byte_X ; code used at 8000
		PHA				; code used at 8000
		LDA		byte_21C152,Y	; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		STA		_ram_pal_buf,Y	; code used at 8000
		LDY		_tmp_pak_data_bank ; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		#$C		; code used at 8000
		BCC		loc_21C047	; code used at 8000
		RTS				; code used at 8000
loc_21C060:				; CODE XREF: sub_21C01C+14-j
		LDA		byte_8B		; code used as ind data	at 8000
		CMP		#8		; code used at 8000
		BEQ		loc_21C0B4	; code used at 8000
		CMP		#$2D       ; code used at 8000
		BCC		loc_21C086	; code used at 8000
		CMP		#$41       ; code used at 8000
		BCC		loc_21C0B8	; code used at 8000
		CMP		#$58       ; code used at 8000
		BEQ		loc_21C0BC	; code used at 8000
loc_21C072:				; code used at 8000
		CMP		#$5B 
		BEQ		loc_21C0C0	; code used at 8000
		CMP		#$85       ; code used at 8000
		BEQ		loc_21C0C4	; code used at 8000
		CMP		#$9C       ; code used at 8000
		BCC		loc_21C084	; code used at 8000
		CMP		#$9F       ; code used at 8000
		BCC		loc_21C0A8	; code used at 8000
		BCS		loc_21C0C8	; code used at 8000
loc_21C084:				; CODE XREF: sub_21C01C+60-j
		SBC		#$13		; code used at 8000
loc_21C086:				; CODE XREF: sub_21C01C+4C-j
		PHA				; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_21C166,X	; code used at 8000
		STA		_tmp21+1	; code used at 8000
		PLA				; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		_tmp_pak_data_bank ; code used at 8000
		AND		#7		; code used at 8000
		TAY				; code used at 8000
loc_21C097:				; CODE XREF: sub_21C01C+7E-j
		ASL		_tmp21+1	; code used at 8000
		DEY				; code used at 8000
		BPL		loc_21C097	; code used at 8000
		LDA		_tmp_pak_data_bank ; code used at 8000
		ROL		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_21C15E,Y	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_21C137	; code used at 8000
		RTS				; code used at 8000
loc_21C0A8:				; CODE XREF: sub_21C01C+64-j
		SBC		#$9B 
		LDY		_tmp_pak_data_bank
		LDA		byte_21C162,Y
		TAY
		JSR		sub_21C137
		RTS
loc_21C0B4:				; CODE XREF: sub_21C01C+48-j
		LDA		#0		; code used at 8000
		BEQ		loc_21C0CA	; code used at 8000
loc_21C0B8:				; CODE XREF: sub_21C01C+50-j
		SBC		#$2B       ; code used at 8000
		BNE		loc_21C0CA	; code used at 8000
loc_21C0BC:				; CODE XREF: sub_21C01C+54-j
		LDA		#$15
		BNE		loc_21C0CA
loc_21C0C0:				; CODE XREF: sub_21C01C+58-j
		LDA		#$16
		BNE		loc_21C0CA
loc_21C0C4:				; CODE XREF: sub_21C01C+5C-j
		LDA		#$17
		BNE		loc_21C0CA
loc_21C0C8:				; CODE XREF: sub_21C01C+66-j
		SBC		#$87       ; code used at 8000
loc_21C0CA:				; CODE XREF: sub_21C01C+9A-j
					; sub_21C01C+9E-j sub_21C01C+A2-j
					; sub_21C01C+A6-j sub_21C01C+AA-j
		TAX				; code used at 8000
		LDA		byte_21C2D2,X	; code used at 8000
		STA		word_4		; code used at 8000
		LDY		byte_8B		; code used at 8000
		CPY		#$D5       ; code used at 8000
		BEQ		loc_21C0DC	; code used at 8000
		LDY		byte_9A		; code used at 8000
		CPY		#$19		; code used at 8000
		BCC		loc_21C0DF	; code used at 8000
loc_21C0DC:				; CODE XREF: sub_21C01C+B8-j
		CLC				; code used at 8000
		ADC		_tmp_pak_data_bank ; code used at 8000
loc_21C0DF:				; CODE XREF: sub_21C01C+BE-j
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_21C278,X	; code used at 8000
		PHA				; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		STA		word_B7		; code used at 8000
		PLA				; code used at 8000
		AND		#$F		; code used at 8000
		STA		word_B7+1	; code used at 8000
		INX				; code used at 8000
		LDA		byte_21C278,X	; code used at 8000
		PHA				; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		STA		byte_B9		; code used at 8000
		PLA				; code used at 8000
		AND		#$F		; code used at 8000
		STA		byte_BA		; code used at 8000
		LDA		byte_9A		; code used at 8000
		SEC				; code used at 8000
		SBC		#$C		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_21C33F,X	; code used at 8000
		STA		word_4		; code used at 8000
		LDX		#0		; code used at 8000
		STX		_tmp_pak_data_bank ; code used at 8000
loc_21C10F:				; CODE XREF: sub_21C01C+118-j
		LDA		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		LDX		_tmp_pak_data_bank ; code used at 8000
		LDA		word_B7,X	; code used at 8000
		ASL		; code used at 8000
		ADC		word_B7,X	; code used at 8000
		ADC		word_4		; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
loc_21C121:				; CODE XREF: sub_21C01C+112-j
		LDA		(_pak_data_ptr),Y ; code used at 8000
		STA		_ram_pal_buf+1,X ; code	used at	8000
		INY				; code used at 8000
		INX				; code used at 8000
		INC		word_4+1	; code used as ind data	at 8000
		LDA		word_4+1	; code used as ind data	at 8000
		CMP		#3		; code used at 8000
		BNE		loc_21C121	; code used at 8000
		INC		_tmp_pak_data_bank ; code used at 8000
		CPX		#$C		; code used at 8000
		BNE		loc_21C10F	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_21C137:				; CODE XREF: sub_21C01C+88-p
					; sub_21C01C+94-p
		LDX		#0		; code used at 8000
loc_21C139:				; CODE XREF: sub_21C137+B-j
		LDA		(_pak_data_ptr),Y ; code used as ind data at 8000
		STA		_ram_pal_buf+1,X ; code	used as	ind data at 8000
		INY				; code used as ind data	at 8000
		INX				; code used at 8000
		CPX		#$C		; code used as ind data	at 8000
		BNE		loc_21C139	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_21C145:				; CODE XREF: sub_21C01C+F-p
		LDX		#0		; code used at 8000
		LDA		byte_6DF	; code used at 8000
		CMP		#$78       ; code used at 8000
		BCC		loc_21C14F	; code used at 8000
		INX				; code used at 8000
loc_21C14F:				; CODE XREF: sub_21C145+7-j
		STX		_tmp_pak_data_bank ; code used at 8000
		RTS				; code used at 8000
byte_21C152:
		.BYTE	1,  4,	7, $A,	2,  5,	8, $B,	3,  6,	9, $C
					; DATA XREF: sub_21C01C+33-r
					; data used at 8000
byte_21C15E:
		.BYTE	0, $C,$18,$24	; DATA XREF: sub_21C01C+84-r
					; data used at 8000
byte_21C162:
		.BYTE $30,$3C		; DATA XREF: sub_21C01C+90-r
off_21C164:
		.WORD byte_21C188	; DATA XREF: sub_21C01C+5-r
					; sub_21C01C+A-r
					; data used at 8000
byte_21C166:
		.BYTE	0,  1,$20,  8,$54,  2,$8D,  5,$55,$D5,$D4,$3F,$51,$74,$75,$3C
					; DATA XREF: sub_21C01C+6E-r
		.BYTE	1,  0,$FC,  0,$3F,$55,$7F,$C0,$2F,$D5,$FF,$77,	9,$B0,$2D,$30 ;	data used at 8000
		.BYTE $10,$14
byte_21C188:
		.BYTE $30,$11,$21,$26,$37,$15,$10,  0,$15,$29,$1A,$27,$30,$11,$21,$27
					; DATA XREF: BANK16:off_21C164-o
		.BYTE $37,$15,$10,  0,$15,$29,$1A,$27,$21, $F,	1,  6,$17,  5,	0, $F ;	ind data used at 8000
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
					; DATA XREF: sub_21C01C+C5-r
					; sub_21C01C+D5-r
		.BYTE $70,$16,$20,$10,$62,$43,$62,$45,$12,$40,$40,$15,$20,$16,$20,$13
		.BYTE	6,$14,$37,$14,$32,$1C,$50,$14,$52,$13,$80,$16,$90,$16,$8A,$1B
		.BYTE $9A,$1B,$30,$78,$40,$78,$30,$7A,$40,$7B,$30,$72,$40,$72,$31,$79
		.BYTE $41,$79,$31,$7A,$41,$7B,$31,$7C,$41,$7D,$50,$7A,$60,$7B,$50,$7E
		.BYTE $60,$7E,$51,$7A,$61,$7B,$50,$72,$60,$72
byte_21C2D2:
		.BYTE	4, $E, $E,  0,	0, $C, $B,  3,	5, $D,	5, $E,$14,$14,$12,$15
					; DATA XREF: sub_21C01C+AF-r
		.BYTE $27,$29,$2B,$29,$25,  2,	3,$11,	4,  5,	5,  4, $E, $E, $F,  0 ;	data used at 8000
		.BYTE $14, $B, $B, $C, $C,$1B, $E, $E, $E, $E, $E,  6,	5,  5,	5,  6
		.BYTE  $D, $D, $D, $D, $D,  5,	8, $E, $E,  7,	7,  2,$14,$14,$11,  0
		.BYTE	1,  1,	5,  5,	8,  2,	2,  2,$13,$15,$15,$15,$15,$13,$17,$19
		.BYTE $19,$19,$19,$19,$21,$21,$21,$21,$21,$23,$1D,$1D,$1D,$1D,$1D,$1D
		.BYTE $19,$21,$21,$21,$21,$1F,	9,$21,$1B,$1B,$1B,$1B,$1B
byte_21C33F:
		.BYTE $48,$54,$54,$54,$54,$54,$72,$87,$87,$9C,$9C,$9C,$54,$C3,$C3,$C3
					; DATA XREF: sub_21C01C+EA-r
		.BYTE $30,$17,$10,$2A, $C,$27,	0,$19,$1C,$2A,$2A,$27,$30,$17,$10,$2A
		.BYTE $1C,$37,	0,$1A,$2C,$2A,$2A,$27,$30,$17,$10,$29,$11,$37,	0,$19
		.BYTE $21,$29,$29,$27,$30,$17,$10,$29,	1,$27,	0,$19,$11,$29,$29,$27
		.BYTE $21,  7,	0,$19, $F,$17, $F,  9,	1,$19,$19,$17,$21,  7,	0, $C
		.BYTE  $F,$17, $F,  9,	1, $C, $C,  7,$21,  7,	0,$1A, $F,$17, $F,  9
		.BYTE  $C,$1A,$1A,$17
byte_21C3A3:
		.BYTE	0, $C,$18,$24,$30,$3C,$48 ; DATA XREF: sub_21C01C:loc_21C041-r
					; data used at 8000
byte_21C3AA:
		.BYTE	0,$1E,$3C,$5A,$78,$96,$B4 ; DATA XREF: sub_21C01C:loc_21C034-r

		ECHO "bank 16 size", [.-$8000], "free space", [$BFD8-.]

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
