
		ORG $8000

_b4_s0_ptr:
		.WORD	_b4_s0
_b4_s1_ptr:
		.WORD	_b4_s1
_b4_s2_ptr:
		.WORD	_b4_s2
_b4_s3_ptr:
		.WORD	_b4_s3
_b4_s4_ptr:
		.WORD	_b4_s4
_b4_s5_do_message_speed_delay_ptr:
		.WORD	_b4_s5_do_message_speed_delay
_b4_s6_ptr:
		.WORD	_b4_s6
_b4_s7_window_display_safe_ptr:
		.WORD	_b4_s7_window_display_safe
_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress_ptr:
		.WORD	_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
_b4_s9_ptr:
		.WORD	_b4_s9
_b4_sA_ptr:
		.WORD	_b4_sA
_b4_sB_ptr:
		.WORD	_b4_sB
_b4_sC_ptr:
		.WORD	_b4_sC
_b4_dD_spells_list_ptr:
		.WORD	_b4_dD_spells_list
_b4_sE_ptr:
		.WORD	_b4_sE
_b4_sF_ptr:
		.WORD	_b4_sF
_b4_s10_ptr:
		.WORD	_b4_s10
		.WORD	0 ; _b4_d11
_b4_s12_ptr:
		.WORD	_b4_s12
_b4_s13_ptr:
		.WORD	_b4_s13
_b4_s14_ptr:
		.WORD	_b4_s14
_b4_d15_ptr:
		.WORD	_b4_d15
_b4_s16_do_half_message_speed_delay_ptr:
		.WORD	_b4_s16_do_half_message_speed_delay
_b4_s17_ptr:
		.WORD	_b4_s17
_b4_s18_ptr:
		.WORD	_b4_s18
_b4_s19_ptr:
		.WORD	_b4_s19
_b4_s1A_ptr:
		.WORD	_b4_s1A
_b4_s1B_ptr:
		.WORD	_b4_s1B
_b4_s1C_ptr:
		.WORD	_b4_s1C
_b4_s1D_ptr:
		.WORD	_b4_s1D
_b4_s1E_ptr:
		.WORD	_b4_s1E
_b4_s1F_ptr:
		.WORD	_b4_s1F
_b4_s20_ptr:
		.WORD	_b4_s20
_b4_s21_message_half_delay_or_wait_for_keypress_ptr:
		.WORD	_b4_s21_message_half_delay_or_wait_for_keypress
_b4_s22_ptr:
		.WORD	_b4_s22
_b4_s23_ptr:
		.WORD	_b4_s23
_b4_s24_ptr:
		.WORD	_b4_s24
_b4_s25_ptr:
		.WORD	_b4_s25
_b4_s26_ptr:
		.WORD	_b4_s26
_b4_s27_ptr:
		.WORD	_b4_s27
_b4_s28_ptr:
		.WORD	_b4_s28
_b4_s29_ptr:
		.WORD	_b4_s29
_b4_s2A_ptr:
		.WORD	_b4_s2A
_b4_s2B_ptr:
		.WORD	_b4_s2B

;_b4_d11:
;		.BYTE	  2

; =============== S U B	R O U T	I N E =======================================
_b4_s0:
		LDA		#0
		STA		byte_6A63
		JSR		_b4_s1A
loc_68061:
		LDA		byte_62
		STA		byte_6A6B
		LDA		#0
		STA		byte_6A66
		LDA		byte_60B7
		ORA		#$20
		STA		byte_60B7
		FARX	_bE_s5
		LDA		#$FD
		STA		byte_32
		JSR		_b4_s22
		FAR		$D8,$07		; _b1_s9
loc_68080:
		FAR		$DA,$07		; _b1_sB
		JSR		sub_6814E
		FAR		$79,$07		; _b2_sB
		CMP		#$FD
		BEQ		loc_680D6
		FAR		$9B,$17		; _bA_s2
		JSR		sub_6AE36
		JSR		sub_6AE51
		INC		byte_6A66
		JSR		sub_6889C
		CMP		#$FF
		BNE		loc_680AA
loc_680A0:
		FAR		$DB,$07		; _b1_sC
		LDA		#0
		STA		byte_32
		JMP		sub_174BB3
loc_680AA:
		CMP		#$FE
		BNE		loc_680B4
		FAR		$DC,$07		; _b1_sD
		JMP		loc_680D6
loc_680B4:
		BIT		byte_6A63
		BPL		loc_680CD
		CMP		#$FC
		BEQ		loc_6811D
		CMP		#$FD
		BEQ		sub_680FE
		BIT		byte_6A63
		BVS		loc_680CD
		LDA		byte_6A66
		CMP		#$A
		BCS		loc_6810D
loc_680CD:
		FAR		$D9,$07		; _b1_sA
		LDA		byte_4C
		BNE		loc_68080
		BEQ		loc_680A0
loc_680D6:
		FAR		$E9,$07		; _bE_s31
		FAR		$A0,$07		; _bB_s3_apu_load
loc_680DC:
		FAR		$49,$17		; _b0_s50
		LDA		byte_60B7
		AND		#$DF
		STA		byte_60B7
		JSR		sub_174C62
		LDA		#0
		STA		byte_8E
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s24:
		LDA		#$80

; =============== S U B	R O U T	I N E =======================================
sub_680F1:
		STA		byte_6A63
		STA		byte_6A64
		JMP		loc_68061

; =============== S U B	R O U T	I N E =======================================
_b4_s25:
		LDA		#$C0
		BNE		sub_680F1

; =============== S U B	R O U T	I N E =======================================
sub_680FE:
		LDX		#0
		STX		byte_6A64
loc_68103:
		LDA		byte_6A77,X
		BMI		loc_68114
		INX
		CPX		#4
		BNE		loc_68103
loc_6810D:
		LDA		#$FF
		STA		byte_6A65
		BNE		loc_68122
loc_68114:
		STX		byte_6A65
		JSR		sub_68141
		JMP		loc_68122
loc_6811D:
		LDA		#$FE
		STA		byte_6A65
loc_68122:
		LDA		byte_60B7
		AND		#$DF
		STA		byte_60B7
		BIT		byte_6A63
		BVS		loc_68138
		FAR		$83,$17		; _bD_sC
		JSR		__pause_or_skip
		JMP		loc_680D6
loc_68138:
		FAR		$29,$2F		; _sys12
		FAR		$70,$17		; _bC_s2E_vblank_count_50_wait_50_or_skip
		JMP		loc_680DC

; =============== S U B	R O U T	I N E =======================================
sub_68141:
		LDX		#0
loc_68143:
		LDA		#$80
		STA		byte_6A77,X
		INX
		CPX		#4
		BNE		loc_68143
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6814E:
		JSR		sub_68183
		LDX		#0
loc_68153:
		LDA		byte_558,X
		ASL
		ASL
		ASL
		STA		byte_540,X
		INX
		CPX		#$C
		BNE		loc_68153
		LDX		#0
loc_68163:
		TXA
		ORA		byte_540,X
		STA		byte_540,X
		INX
		CPX		#4
		BNE		loc_68163
		LDX		#0
		LDY		#4
loc_68173:
		TXA
		ORA		#$80
		ORA		byte_540,Y
		STA		byte_540,Y
		INX
		INY
		CPX		#8
		BNE		loc_68173
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68183:
		LDY		#0
loc_68185:
		STY		byte_CE
		TYA
		PHA
		LDA		byte_6A9F,Y
		STA		word_4
		JSR		sub_68201
		PLA
		TAY
		LDA		word_3C
		STA		byte_54C,Y
		INY
		CPY		#4
		BNE		loc_68185
		LDX		#0
		LDY		#4
loc_681A1:
		STX		byte_64
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6B73E
		LDA		byte_59
		STA		word_4
		JSR		sub_68201
		PLA
		TAY
		PLA
		TAX
		LDA		word_3C
		STA		byte_54C,Y
		INY
		INX
		CPX		#8
		BNE		loc_681A1
		LDA		#$FF
		LDX		#0
		STX		byte_42
loc_681C6:
		STA		byte_540,X
		INX
		CPX		#$C
		BNE		loc_681C6
loc_681CE:
		LDA		#0
		STA		byte_43
		LDX		#0
loc_681D4:
		LDA		byte_540,X
		BEQ		loc_681E6
		LDA		byte_54C,X
		CMP		byte_43
		BEQ		loc_681E2
		BCC		loc_681E6
loc_681E2:
		STA		byte_43
		STX		byte_44
loc_681E6:
		INX
		CPX		#$C
		BNE		loc_681D4
		LDX		byte_44
		LDA		#0
		STA		byte_540,X
		LDA		byte_42
		STA		byte_558,X
		CLC
		ADC		#1
		STA		byte_42
		CMP		#$C
		BNE		loc_681CE
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68201:
		LDA		word_4
		LSR
		LSR
		STA		word_4+1
		LDA		word_4
		SEC
		SBC		word_4+1
		JSR		_b4_sF
		CLC
		ADC		word_4+1
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s22:
		LDA		#0
		STA		byte_566
		STA		byte_567
		STA		byte_568
		STA		byte_565
		STA		byte_569
		STA		byte_56A
		STA		byte_56B
		STA		byte_56C
		TAX
loc_68230:
		STA		byte_5D,X
		INX
		CPX		#5
		BNE		loc_68230
		LDA		#$FF
		STA		byte_62
		FAR		$73,$17		; _b0_s55
		BCS		loc_68245
		LDA		#$10
		STA		byte_568
loc_68245:
		LDX		#0
		LDY		#0
loc_68249:
		LDA		byte_73C,X
		AND		byte_73D,X
		BPL		loc_68252
		INY
loc_68252:
		INX
		INX
		CPX		#8
		BNE		loc_68249
		STY		byte_4C
		LDX		#0
loc_6825C:
		STX		byte_51
		TXA
		STA		byte_6A9B,X
		STA		byte_CE
		JSR		_sram_b0_s12
		LDX		byte_51
		LDA		word_4
		STA		byte_6A9F,X
		JSR		_sram_b0_s18
		LDA		byte_51
		ASL
		TAX
		LDA		word_4
		STA		byte_6AA3,X
		LDA		word_4+1
		STA		byte_6AA4,X
		LDA		byte_51
		ASL
		TAX
		LDA		byte_73C,X
		AND		#$80
		STA		byte_73C,X
		LDA		byte_73D,X
		AND		#$E0
		STA		byte_73D,X
		JSR		_sram_b0_s16
		LDA		byte_51
		ASL
		TAX
		LDA		word_4
		STA		byte_6AAB,X
		LDA		word_4+1
		STA		byte_6AAC,X
		LDX		byte_51
		INX
		CPX		#4
		BNE		loc_6825C

; =============== S U B	R O U T	I N E =======================================
_b4_s26:
		LDX		#0
		STX		byte_4D
		TXA
loc_682B0:
		STA		byte_530,X
		INX
		CPX		#$10
		BNE		loc_682B0
		LDX		#0
loc_682BA:
		STA		byte_6A7B,X
		INX
		CPX		#$20
		BNE		loc_682BA
		LDX		#0
loc_682C4:
		STX		byte_51
		LDA		#0
		STA		byte_6A77,X
		LDA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_68308
		STA		byte_6A6F,X
		STA		byte_6A73,X
		LDA		byte_571,X
		BEQ		loc_682F5
		LDA		#$80
		STA		byte_6A77,X
		LDY		byte_571,X
		TYA
		CLC
		ADC		byte_4D
		STA		byte_4D
loc_682EB:
		TYA
		PHA
		JSR		loc_68312
		PLA
		TAY
		DEY
		BNE		loc_682EB
loc_682F5:
		LDX		byte_51
		INX
		CPX		#4
		BNE		loc_682C4
		FAR		$7A,$17		; _bD_s29
		JSR		sub_6BA99
		JSR		sub_6B3DB
		JMP		loc_6833E
loc_68308:
		LDA		#$FF
		STA		byte_6A6F,X
		STA		byte_6A73,X
		BNE		loc_682F5
loc_68312:
		LDX		#0
		LDY		#0
loc_68316:
		STX		byte_64
		JSR		sub_6B8E7
		BCS		loc_6833A
loc_6831D:
		JSR		loc_68356
		LDA		byte_6A7B,Y
		BPL		loc_6832B
		LDY		word_4
		INY
		JMP		loc_6831D
loc_6832B:
		TXA
		ORA		#$80
		STA		byte_6A7B,Y
		TXA
		ASL
		TAX
		LDA		#$80
		STA		byte_530,X
		RTS
loc_6833A:
		INX
		BNE		loc_68316
		RTS
loc_6833E:
		LDA		#7
		STA		byte_64
loc_68342:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		AND		byte_530,X
		BPL		loc_68351
		JSR		sub_68453
loc_68351:
		DEC		byte_64
		BPL		loc_68342
		RTS
loc_68356:
		STY		word_4
		LDA		byte_51
		ASL
		ASL
		ASL
		CLC
		ADC		word_4
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s27:
		JSR		sub_6B960
		LDA		byte_59
		CMP		#3
		BNE		loc_6836E
		JMP		loc_683BC
loc_6836E:
		ASL
		TAX
		LDA		off_68406,X
		STA		word_3E
		LDA		off_68406+1,X
		STA		word_3E+1
		JSR		sub_6840C
		LDA		byte_49
		STA		byte_43
		LDA		#$FF
		STA		byte_47
		JSR		sub_6ACBE
		STA		byte_45
		LDY		#0
		STY		byte_42
loc_6838E:
		LSR		byte_47
		LSR		byte_43
		BCC		loc_68398
		INY
		BNE		loc_6838E
		RTS
loc_68398:
		LDA		byte_43
		EOR		byte_47
		BEQ		loc_683B3
		LDA		(word_3E),Y
		ADC		byte_44
		ADC		byte_42
		STA		byte_42
		CPY		#7
		BEQ		loc_683B3
		INY
		SEC
		SBC		#1
		CMP		byte_45
		BCC		loc_6838E
		DEY
loc_683B3:
		JSR		loc_683F6
		JSR		sub_6B9F2
		AND		#$3F
		RTS
loc_683BC:
		LDA		byte_64
		LSR
		PHP
		TAX
		LDA		byte_569,X
		BCC		loc_683CA
		LSR
		LSR
		LSR
		LSR
loc_683CA:
		AND		#7
		STA		word_4+1
		LDY		#$F0
		STY		word_4
		TAY
		CLC
		ADC		#1
		PLP
		BCC		loc_683E3
		ASL
		ASL
		ASL
		ASL
		PHA
		LDA		#$F
		STA		word_4
		PLA
loc_683E3:
		PHA
		LDA		byte_569,X
		AND		word_4
		STA		word_4
		PLA
		ORA		word_4
		STA		byte_569,X
		LDY		word_4+1
		JMP		loc_683B3
loc_683F6:
		TYA
		PHA
		LDA		#0
		SEC
loc_683FB:
		ROL
		DEY
		BPL		loc_683FB
		ORA		byte_49
		STA		byte_49
		PLA
		TAY
		RTS
off_68406:
		.WORD	byte_6B422
		.WORD	byte_6B42A
		.WORD	byte_6B432

; =============== S U B	R O U T	I N E =======================================
sub_6840C:
		LDA		#7
		STA		byte_46
		LDY		#0
		STY		byte_44
		LDA		byte_49
		STA		byte_43
loc_68418:
		LSR		byte_43
		BCC		loc_68438
		LDA		(word_3E),Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		TYA
		PHA
		LDX		#word_4
		LDA		byte_46
		JSR		_div16_to_8
		PLA
		TAY
		CLC
		LDA		word_4
		ADC		byte_44
		STA		byte_44
		DEC		byte_46
loc_68438:
		INY
		CPY		#8
		BNE		loc_68418
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6843E:
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A77,X
		AND		#3
		ASL
		TAX
		LDA		byte_73D,X
		AND		byte_73C,X
		BPL		sub_68453
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68453:
		JSR		sub_686F4
		CMP		#$F
		BNE		loc_6845B
		RTS
loc_6845B:
		JSR		_b4_s13
		PHA
		JSR		sub_6B91D
		TAX
		LDA		byte_6A77,X
		AND		#$80
		STA		byte_6A77,X
		PLA
		ORA		byte_6A77,X
		STA		byte_6A77,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s28:
		JSR		_b4_s29
		BNE		loc_684B2
		LDA		byte_4F
		CMP		#$2C
		BCS		loc_68486
		LDA		#$F
		JSR		_b4_s23
		JMP		_b4_s13
loc_68486:
		CMP		#$2F
		BEQ		loc_6848E
		CMP		#$30
		BNE		loc_68496
loc_6848E:
		LDA		#0
loc_68490:
		JSR		sub_6BC17
		JMP		_b4_s14
loc_68496:
		CMP		#$36
		BCS		loc_6849E
		LDA		#5
		BNE		loc_68490
loc_6849E:
		CMP		#$39
		BCS		loc_684A7
		LDA		#5
		JMP		sub_686BB
loc_684A7:
		CMP		#$3B
		BCS		locret_684EA
		LDA		#5
		LDX		#0
		JMP		sub_6868C
loc_684B2:
		LDX		byte_4F
		CPX		#$13
		BCC		loc_684F5
		CPX		#$2B
		BEQ		loc_684F5
		CPX		#$3B
		BCS		loc_684F5
		LDA		byte_6BD82-$13,X
		PHA
		JSR		sub_6B6E3
		PLA
		CMP		byte_59
		BEQ		loc_684EB
		BCC		loc_684EB
		JSR		sub_686E1
		BEQ		loc_684E9
		LDA		byte_64
		JSR		_b4_s10
		STA		byte_42
		AND		byte_576
		BNE		loc_684E9
		LDA		byte_42
		ORA		byte_576
		STA		byte_576
		BNE		loc_684EB
loc_684E9:
		CLC
locret_684EA:
		RTS
loc_684EB:
		JSR		sub_686E1
		BNE		loc_684F5
		JSR		sub_6B901
		BCS		loc_684E9
loc_684F5:
		LDA		byte_4F
		ASL
		TAY
		LDA		off_6BD02,Y
		LDX		off_6BD02+1,Y
		JSR		sub_6BBCB
		JMP		(word_3C)

; =============== S U B	R O U T	I N E =======================================
sub_68505:
		LDA		#0
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68509:
		LDA		byte_64
		ASL
		TAX
		LDA		#$40
		ORA		byte_531,X
		STA		byte_531,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s2B:
		JSR		sub_6BA04
		BEQ		loc_6852A
		JSR		sub_6843E
		JSR		sub_6B91D
		TAX
		LDA		byte_6A77,X
		AND		#3
		SEC
		RTS
loc_6852A:
		JSR		_sram_b0_s33
		DEC		word_4
		LDA		word_4
		ASL
		TAY
		LDA		off_6855F,Y
		LDX		off_6855F+1,Y
		JSR		sub_6BBD0
		JSR		sub_686F4
		STA		byte_43
		LDX		#0
		LDY		#0
loc_68545:
		LSR		byte_43
		BCC		loc_68550
loc_68549:
		INX
		CPX		#4
		BNE		loc_68545
		SEC
		RTS
loc_68550:
		JSR		sub_6ACBE
		CMP		(word_3E),Y
		BEQ		loc_6855C
		BCC		loc_6855C
		INY
		BNE		loc_68549
loc_6855C:
		TXA
		SEC
		RTS
off_6855F:
		.WORD	byte_6B43A
		.WORD	byte_6B43E
		.WORD	byte_6B442
		.WORD	byte_6B446

; =============== S U B	R O U T	I N E =======================================
sub_68567:
		JSR		_b4_s4
		LDA		#5
		CLC
		ADC		byte_59
		CMP		byte_700
		BCC		loc_6859E
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68576:
		LDA		byte_4D
		CMP		#8
		BCS		loc_68588
		JSR		sub_6B91D
		TAX
		LDA		byte_6A6F,X
		FAR		$69,$07		; _b2_sA
		BCC		loc_6859E
loc_68588:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6858A:
		LDA		byte_4D
		CMP		#8
		BCS		loc_68588
		LDA		byte_4F
		SEC
		SBC		#$3B
		TAX
		LDA		byte_68D88,X
		FAR		$69,$07		; _b2_sA
		BCS		loc_68588
loc_6859E:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_685A0:
		LDA		#$12
		JSR		_b4_s23
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
sub_685A8:
		LDA		#0
		JMP		sub_68638

; =============== S U B	R O U T	I N E =======================================
sub_685AD:
		LDA		#$D
		JMP		sub_68638

; =============== S U B	R O U T	I N E =======================================
sub_685B2:
		JSR		sub_686E1
		BEQ		sub_685BA
		JMP		sub_686F9

; =============== S U B	R O U T	I N E =======================================
sub_685BA:
		JSR		sub_686E7
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
sub_685C0:
		JSR		sub_686E1
		BEQ		sub_685C8
		JMP		sub_686F9

; =============== S U B	R O U T	I N E =======================================
sub_685C8:
		JMP		sub_686FD

; =============== S U B	R O U T	I N E =======================================
sub_685CB:
		LDA		#2
		LDX		#$FF
		JSR		sub_68675
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_685D5:
		LDA		#5
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
sub_685DA:
		LDA		#$10
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
sub_685DF:
		LDA		#$10
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
sub_685E4:
		LDA		#4
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
sub_685E9:
		LDA		#$C
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
sub_685EE:
		LDA		#$11
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
sub_685F3:
		JSR		_sram_b0_s31
		DEC		word_4
		BEQ		loc_6863F
		LDA		#$F
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
sub_685FF:
		LDA		#4
		LDX		#$FF
		JMP		sub_68675

; =============== S U B	R O U T	I N E =======================================
sub_68606:
		LDA		#3
		LDX		#$FF
		JMP		sub_6868C

; =============== S U B	R O U T	I N E =======================================
sub_6860D:
		JSR		sub_686E1
		LDA		#3
		BCS		loc_68616
		LDA		#5
loc_68616:
		JMP		sub_68707

; =============== S U B	R O U T	I N E =======================================
sub_68619:
		LDA		#0
		JMP		sub_68707

; =============== S U B	R O U T	I N E =======================================
sub_6861E:
		LDA		#1
		LDX		#$FF
		JMP		sub_68675

; =============== S U B	R O U T	I N E =======================================
sub_68625:
		LDA		#1
		LDX		#$FF
		JMP		sub_6868C

; =============== S U B	R O U T	I N E =======================================
sub_6862C:
		LDA		#1
		JMP		sub_686BB

; =============== S U B	R O U T	I N E =======================================
sub_68631:
		LDA		#1
		LDX		#0
		JMP		sub_6868C

; =============== S U B	R O U T	I N E =======================================
sub_68638:
		JSR		_b4_s23

; =============== S U B	R O U T	I N E =======================================
sub_6863B:
		CMP		#$F
		BNE		loc_68641
loc_6863F:
		CLC
		RTS
loc_68641:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68643:
		STA		byte_43
		JSR		_b4_s23
		JSR		sub_6863B
		BCS		loc_6864E
		RTS
loc_6864E:
		JSR		sub_686E1
		BNE		loc_6865E
		LDA		byte_43
		JSR		_b4_s23
		JSR		sub_686EC
		JMP		sub_6863B
loc_6865E:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68660:
		STA		byte_43
		JSR		sub_686E1
		BEQ		loc_6866A
		JMP		sub_686F9
loc_6866A:
		LDA		byte_43
		JSR		_b4_s23
		JSR		sub_686EC
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
sub_68675:
		STA		byte_43
		STX		byte_42
		LDA		byte_64
		JSR		_b4_s10
		EOR		byte_42
		PHA
		LDA		byte_43
		JSR		sub_6BC17
		PLA
		ORA		word_6+1
		JMP		_b4_s14

; =============== S U B	R O U T	I N E =======================================
sub_6868C:
		STX		byte_42
		STA		byte_43
		JSR		sub_6B91D
		JSR		_b4_s10
		EOR		byte_42
		PHA
		LDA		byte_43
		JSR		sub_6BC17
		JSR		sub_6BCBF
		PLA
		ORA		word_6+1
		CMP		#$F
		BEQ		loc_686AE
		JSR		_b4_s13
		ORA		#$80
		RTS
loc_686AE:
		LDA		byte_42
		BNE		loc_686B9
		LDA		#$FF
		STA		byte_42
		JMP		sub_6868C
loc_686B9:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686BB:
		STA		byte_43
		JSR		sub_6B91D
		JSR		sub_6BCDE
		EOR		#$FF
		JSR		sub_686D5
		BCC		loc_686CB
		RTS
loc_686CB:
		JSR		sub_6B91D
		JSR		sub_6BCDE
		JSR		sub_686D5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686D5:
		PHA
		LDA		byte_43
		JSR		sub_6BC17
		PLA
		ORA		word_6+1
		JMP		_b4_s14

; =============== S U B	R O U T	I N E =======================================
sub_686E1:
		JSR		_b4_s29
		CMP		#2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686E7:
		LDA		#8
		JMP		_b4_s23

; =============== S U B	R O U T	I N E =======================================
sub_686EC:
		PHA
		JSR		sub_686E7
		PLA
		ORA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686F4:
		LDA		#$F
		JMP		_b4_s23

; =============== S U B	R O U T	I N E =======================================
sub_686F9:
		LDA		#$F
		BNE		sub_68701

; =============== S U B	R O U T	I N E =======================================
sub_686FD:
		LDA		#8
		BNE		sub_68701

; =============== S U B	R O U T	I N E =======================================
sub_68701:
		JSR		_b4_s23
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
sub_68707:
		JSR		sub_6BC17
		JMP		_b4_s14

; =============== S U B	R O U T	I N E =======================================
sub_6870D:
		JSR		sub_6881F
		BCC		locret_6875E
		LDX		byte_51
		LDA		byte_558,X
		PHA
		LSR
		LSR
		TAY
		PLA
		AND		#3
		TAX
		LDA		byte_68828,Y
		CPX		#0
		BEQ		loc_6872B
loc_68726:
		LSR
		LSR
		DEX
		BNE		loc_68726
loc_6872B:
		LDX		byte_51
		LDY		byte_558,X
		AND		#3
		BEQ		loc_68747
		CMP		#1
		BEQ		loc_687A2
		CMP		#2
		BNE		loc_6873F
		JMP		loc_687D3
loc_6873F:
		LDX		byte_51
		LDA		#2
		STA		byte_558,X
		TAY
loc_68747:
		CPY		#$2F
		BCS		loc_6875F
		JSR		sub_68808
		BCC		locret_6875E
loc_68750:
		STA		word_4
		LDX		byte_51
		LDA		byte_54C,X
		AND		#$F8
		ORA		word_4
		STA		byte_54C,X
locret_6875E:
		RTS
loc_6875F:
		CPY		#$31
		BCC		loc_68777
		LDA		byte_6A63
		BNE		loc_68771
		JSR		sub_686F4
loc_6876B:
		JSR		_b4_s13
		JMP		loc_68750
loc_68771:
		LDA		byte_64
		ORA		#$80
		BNE		loc_68750
loc_68777:
		LDA		#1
		STA		byte_43
		LDX		#0
		STX		byte_42
loc_6877F:
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		BPL		loc_6878C
		LDA		byte_73D,Y
		BPL		loc_68792
loc_6878C:
		LDA		byte_42
		ORA		byte_43
		STA		byte_42
loc_68792:
		ASL		byte_43
		INX
		CPX		#4
		BNE		loc_6877F
		LDA		byte_42
		CMP		#$F
		BNE		loc_6876B
		JMP		loc_6873F
loc_687A2:
		CPY		#$2D
		BCS		loc_687BC
		JSR		sub_687E3
		BCC		locret_6875E
		ORA		#$80
		STA		word_4
		LDX		byte_51
		LDA		byte_54C,X
		AND		#$F8
		ORA		word_4
		STA		byte_54C,X
		RTS
loc_687BC:
		LDA		byte_6A63
		BNE		loc_687CC
		LDX		byte_51
		LDA		byte_54C,X
		AND		#$7F
loc_687C8:
		STA		byte_54C,X
		RTS
loc_687CC:
		JSR		sub_6B91D
		ORA		#$80
		BNE		loc_687C8
loc_687D3:
		JSR		sub_6881F
		BCC		locret_6875E
		LDX		byte_51
		LDA		#$80
		ORA		byte_54C,X
		STA		byte_54C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_687E3:
		JSR		sub_6B91D
		JSR		_b4_s10
		PHA
		LDA		#5
		JSR		sub_6BC17
		JSR		sub_6BCBF
		PLA
		ORA		word_6+1
		AND		#$F
		CMP		#$F
		BEQ		loc_687FE
		JMP		_b4_s13
loc_687FE:
		JSR		sub_6881F
		BCC		locret_68807
		JSR		sub_6B91D
		SEC
locret_68807:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68808:
		JSR		sub_687E3
		BCC		locret_6881E
		JSR		sub_6A8B3
		PHA
		LDA		byte_64
		JSR		_b4_s10
		STA		word_4
		PLA
		ORA		word_4
		JSR		_b4_s14
locret_6881E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6881F:
		LDX		byte_4D
		DEX
		BNE		loc_68826
		CLC
		RTS
loc_68826:
		SEC
		RTS
byte_68828:
		.BYTE	 $F,$FF,$53,$55,$3F,$40,$55,$15,$51,$14,$C7,$D7,  3,  5,$D4,$FF

; =============== S U B	R O U T	I N E =======================================
_b4_s13:
		ORA		#$F0
		EOR		#$FF
		STA		_tmp12+1
		BEQ		loc_6884C
		TXA
		PHA
		LDX		#4
		JSR		sub_68864
		PLA
		TAX
		LDA		_tmp12+1
		RTS
loc_6884C:
		CLC
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s14:
		EOR		#$FF
		STA		_tmp12+1
		BEQ		loc_6884C
		TXA
		PHA
		LDX		#8
		JSR		sub_68864
		PLA
		TAX
		LDA		_tmp12+1
		ORA		#$80
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68864:
		TYA
		PHA
		LDY		#0
		LDA		_tmp12+1
loc_6886A:
		LSR
		BCC		loc_6886E
		INY
loc_6886E:
		DEX
		BNE		loc_6886A
		STX		_tmp12
		DEX
		STX		byte_11
		TYA
		LDX		#byte_11
		JSR		_div16_to_8
		JSR		sub_6ACBE
		STA		byte_10
		LDX		#0
loc_68883:
		LSR		_tmp12+1
		BCC		loc_68893
		BEQ		loc_68896
		LDA		byte_11
		ADC		_tmp12
		STA		_tmp12
		CMP		byte_10
		BCS		loc_68896
loc_68893:
		INX
		BNE		loc_68883
loc_68896:
		STX		_tmp12+1
		PLA
		TAY
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6889C:
		LDA		#$3D
		JSR		_b4_s7_window_display_safe
		LDY		#0
loc_688A3:
		JSR		sub_68F0C
		BMI		loc_688AF
loc_688A8:
		INY
		CPY		#4
		BNE		loc_688A3
		BEQ		loc_688E7
loc_688AF:
		LDA		byte_54C,Y
		AND		#$70
		CMP		#$10
		BNE		loc_688A8
		LDA		byte_558,Y
		CMP		#$2A
		BNE		loc_688A8
		LDA		byte_540,Y
		PHA
		AND		#$78
		STA		word_4
		PLA
		AND		#$87
		STA		word_4+1
		LDX		#0
loc_688CE:
		LDA		byte_540,X
		AND		#$78
		BEQ		loc_688D8
		INX
		BNE		loc_688CE
loc_688D8:
		LDA		byte_540,X
		AND		#$87
		ORA		word_4
		STA		byte_540,X
		LDA		word_4+1
		STA		byte_540,Y
loc_688E7:
		LDX		#0
		STX		byte_52
loc_688EB:
		LDX		#0
		STX		byte_51
loc_688EF:
		LDX		byte_51
		LDA		byte_540,X
		AND		#$78
		LSR
		LSR
		LSR
		CMP		byte_52
		BNE		loc_68921
		JSR		sub_68931
		LDA		byte_6A63
		BEQ		loc_6890E
		LDX		byte_4D
		BEQ		loc_6892E
		DEX
		BEQ		loc_6892B
		BNE		loc_68916
loc_6890E:
		LDA		byte_4C
		BEQ		loc_68925
		LDA		byte_4D
		BEQ		loc_68928
loc_68916:
		INC		byte_52
		LDA		byte_52
		CMP		#$C
		BNE		loc_688EB
		LDA		#0
		RTS
loc_68921:
		INC		byte_51
		BNE		loc_688EF
loc_68925:
		LDA		#$FF
		RTS
loc_68928:
		LDA		#$FE
		RTS
loc_6892B:
		LDA		#$FD
		RTS
loc_6892E:
		LDA		#$FC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68931:
		BIT		byte_6A63
		BPL		loc_6897F
		BVS		loc_6897F
		JSR		sub_6B2B3
		BPL		loc_6897F
		JSR		_calc_pads
		LDA		_pads
		AND		#2
		BEQ		loc_6897F
		LDX		#$F
		LDA		#0
loc_6894A:
		STA		byte_460,X
		DEX
		BPL		loc_6894A
		LDX		byte_6A67
		LDA		byte_6A77,X
		BPL		loc_68974
		LDA		#$CB
		JSR		_b4_s9
		FAR		$86,$2F		; _sys12
		FAR		$45,$E7		; _sys0E
		PHA
		JSR		sub_6AA51
		PLA
		BNE		loc_6897C
		LDA		#$CC
		JSR		_b4_s9
loc_6896F:
		PLA
		PLA
		LDA		#$FC
		RTS
loc_68974:
		LDA		#$CD
		JSR		_b4_s9
		JMP		loc_6896F
loc_6897C:
		FARX	_bE_s5
loc_6897F:
		LDA		#$10
		JSR		sub_6B2C4
		LDA		#$EF
		JSR		sub_6B300
		LDA		#0
		STA		byte_575
		LDX		byte_51
		LDA		byte_540,X
		BMI		loc_68999
		JMP		sub_694DA
locret_68998:
		RTS
loc_68999:
		JSR		sub_68AC6
		BEQ		locret_68998
		LDX		byte_51
		LDA		byte_566
		AND		#8
		BNE		locret_68998
		LDA		byte_566
		AND		#4
		BEQ		loc_689BC
		LDA		byte_568
		AND		#8
		BEQ		loc_689BC
		JSR		sub_6ACBE
		CMP		#$C0
		BCS		locret_68998
loc_689BC:
		LDA		byte_54C,X
		AND		#$70
		CMP		#$70
		BEQ		locret_68998
		JSR		sub_6B2B3
		STA		byte_64
		LDA		byte_567
		AND		#$C
		BNE		locret_68998
		JSR		_b4_s29
		LDA		byte_59
		CMP		#2
		BNE		loc_68A1E
		JSR		_b4_s2A
		LDX		byte_59
		LDA		byte_68AFC,X
		CPX		#0
		BEQ		loc_689F3
		CPX		#3
		BEQ		loc_689F3
		JSR		_b4_sF
		CMP		#0
		BNE		loc_689F3
		LDA		#2
loc_689F3:
		AND		#3
		TAX
loc_689F6:
		TXA
		PHA
		FAR		$9C,$17		; _bA_s3
		LDX		byte_51
		LDA		byte_50
		STA		byte_54C,X
		LDA		byte_4F
		STA		byte_558,X
		JSR		sub_68A52
		JSR		sub_6B3C7
		PLA
		TAX
		LDA		byte_64
		ASL
		TAY
		LDA		byte_531,Y
		AND		#$20
		BNE		locret_68A1D
		DEX
		BNE		loc_689F6
locret_68A1D:
		RTS
loc_68A1E:
		JSR		sub_68A52
		JSR		sub_6B3C7
		JSR		sub_6B95A
		BNE		locret_68A1D
		LDX		byte_51
		LDA		byte_643,X
		STA		byte_54C,X
		LDA		byte_653,X
		BEQ		loc_68A42
		STA		byte_558,X
		PHA
		JSR		sub_68A52
		PLA
		CMP		#1
		BEQ		locret_68A1D
loc_68A42:
		LDX		byte_51
		LDA		byte_64B,X
		STA		byte_54C,X
		LDA		byte_65B,X
		BEQ		locret_68AC5
		STA		byte_558,X

; =============== S U B	R O U T	I N E =======================================
sub_68A52:
		JSR		sub_68AC6
		BEQ		locret_68A1D
		LDA		#0
		STA		byte_575
		JSR		sub_69580
		JSR		sub_6B3C7
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_531,X
		BPL		locret_68AC5
		JSR		_b4_sA
		LDA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		AND		#$20
		BEQ		loc_68A7D
		JMP		sub_68B00
loc_68A7D:
		LDA		byte_6A63
		BNE		loc_68A8F
		LDA		byte_531,X
		AND		#$10
		BEQ		loc_68A92
		FAR		$73,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		_b4_sA
loc_68A8F:
		JSR		sub_6870D
loc_68A92:
		JSR		sub_6B2F5
		LDX		byte_51
		LDA		byte_558,X
		CMP		#$3B
		BCC		loc_68AA4
		JSR		sub_6B2FE
		JMP		loc_68AAB
loc_68AA4:
		CMP		#$13
		BCS		loc_68AAB
		JSR		sub_6B2FE
loc_68AAB:
		LDA		byte_568
		ORA		#8
		STA		byte_568
		LDA		byte_558,X
		ASL
		TAX
		LDA		off_6BDAA,X
		STA		word_3C
		LDA		off_6BDAA+1,X
		STA		word_3C+1
		JMP		(word_3C)
locret_68AC5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68AC6:
		LDA		byte_6A63
		BEQ		loc_68AD1
		LDX		byte_4D
		BEQ		locret_68AD0
		DEX
locret_68AD0:
		RTS
loc_68AD1:
		LDA		byte_4C
		BEQ		locret_68AFB
		JSR		_sram_b0_s33
		LDX		#0
loc_68ADA:
		TXA
		ASL
		TAY
		LDA		byte_73D,Y
		AND		byte_73C,Y
		BPL		loc_68AEE
		LDA		byte_73D,Y
		AND		#$40
		BEQ		loc_68AEE
		DEC		word_4
loc_68AEE:
		INX
		CPX		#4
		BNE		loc_68ADA
		LDA		word_4
		BNE		loc_68AF9
		STA		byte_4C
loc_68AF9:
		LDA		byte_4C
locret_68AFB:
		RTS
byte_68AFC:
		.BYTE	  1,  3,  3,  2

; =============== S U B	R O U T	I N E =======================================
sub_68B00:
		LDA		byte_530,X
		AND		#3
		TAY
		LDA		byte_6B44E,Y
		STA		word_4
		JSR		sub_6ACBE
		CMP		word_4
		BEQ		loc_68B24
		BCC		loc_68B24
		DEY
		STY		word_4
		LDA		byte_530,X
		AND		#$FC
		ORA		word_4
		STA		byte_530,X
		FAR		$1B,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_68B24:
		LDA		byte_531,X
		AND		#$DF
		STA		byte_531,X
		FAR		$1C,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68B2F:
		FAR		$00,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68B32:
		FAR		$04,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68B35:
		JSR		sub_68BB0
		JSR		sub_6B30E

; =============== S U B	R O U T	I N E =======================================
sub_68B3B:
		JSR		sub_6AD2B
		JSR		sub_6B2A3
		BPL		loc_68B49
		JSR		sub_6AD8F
		JMP		loc_68B5D
loc_68B49:
		STA		byte_CE
		TAY
		JSR		sub_68F0C
		BPL		locret_68AFB
		JSR		sub_6B1E8
		BCS		loc_68B75
		JSR		sub_6ACBE
		CMP		#4
		BCC		loc_68B75
loc_68B5D:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_530,X
		AND		#$10
		BEQ		loc_68B84
		JSR		sub_6ACBE
		CMP		#$A0
		BCS		loc_68B84
		JSR		sub_68BB6
		FAR		$22,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_68B75:
		LDX		byte_CE
		LDA		byte_6A9B,X
		AND		#8
		BNE		loc_68B5D
		JSR		sub_68BB6
		FAR		$07,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_68B84:
		LDA		byte_565
		LDX		byte_64
		INX
loc_68B8A:
		LSR
		DEX
		BNE		loc_68B8A
		BCC		loc_68B94
		ASL		word_4
		ROL		word_4+1
loc_68B94:
		JSR		sub_6B2A3
		BMI		loc_68BAB
		STA		byte_D2
		STA		byte_CE
		LDA		byte_575
		AND		#$20
		BEQ		loc_68BA8
		LSR		word_4+1
		ROR		word_4
loc_68BA8:
		JMP		loc_6A58C
loc_68BAB:
		STA		byte_64
		JMP		loc_6A42E

; =============== S U B	R O U T	I N E =======================================
sub_68BB0:
		FAR		$8B,$2F		; _sys12
		FAR		$01,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68BB6:
		LDA		#$20
		JSR		sub_6B2BB
		FAR		$8D,$2F		; _sys12
		JSR		sub_6B2A3
		BMI		loc_68BC6
		JMP		sub_6B3D2
loc_68BC6:
		JMP		sub_6B5B7

; =============== S U B	R O U T	I N E =======================================
sub_68BC9:
		JSR		sub_6ACBE
		CMP		#$20
		BCC		loc_68BD3
		JMP		sub_68B35
loc_68BD3:
		JSR		sub_68BB0
		JSR		sub_6B30E
		FAR		$88,$2F		; _sys12
		FAR		$11,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B763
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		JSR		sub_6ADA4
		JMP		loc_68B94

; =============== S U B	R O U T	I N E =======================================
sub_68BF0:
		JSR		sub_68BB0
		JSR		sub_6B30E
		JSR		sub_68B3B
		JSR		sub_68C42
		BNE		locret_68C09
		JSR		sub_6B2A3
		LDA		byte_CE
		JSR		sub_6B2E6
		JSR		sub_69C9D
locret_68C09:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68C0A:
		JSR		sub_68BB0
		JSR		sub_6B30E
		JSR		sub_68B3B
		JSR		sub_68C42
		BNE		locret_68C09
		JSR		sub_6B2E6
		JSR		sub_6B2A3
		STA		byte_CE
		JSR		sub_68E1E
		JMP		_b4_s6

; =============== S U B	R O U T	I N E =======================================
sub_68C26:
		JSR		sub_68BB0
		JSR		sub_6B30E
		JSR		sub_68B3B
		JSR		sub_68C42
		BNE		locret_68C09
		JSR		sub_6B2A3
		STA		byte_CE
		JSR		sub_6B2E6
		JSR		sub_68E69
		JMP		_b4_s6

; =============== S U B	R O U T	I N E =======================================
sub_68C42:
		LDA		#$20
		AND		byte_566
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68C48:
		JSR		sub_6B2B3
		STA		byte_64
		FAR		$83,$2F		; _sys12
		LDA		#$50
		JSR		sub_6A96F
		JSR		sub_6ADBF
		LDA		byte_64
		ASL
		TAX
		LDA		#0
		STA		byte_530,X
		JMP		_b4_s21_message_half_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
sub_68C64:
		FAR		$4B,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B2B3
		STA		byte_64
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A6F,X
		JSR		sub_68D59
		BCS		loc_68C7C
		JMP		loc_68D56
loc_68C7C:
		LDA		byte_45
		FAR		$69,$07		; _b2_sA
		BCC		loc_68C86
		JMP		loc_68D56
loc_68C86:
		LDX		byte_47
		LDA		byte_45
		STA		byte_6A6F,X
		STA		byte_6A73,X
		LDA		byte_6A77,X
		ORA		#$80
		STA		byte_6A77,X
		LDX		#0
loc_68C9A:
		LDA		byte_530,X
		BPL		loc_68CB2
		INX
		INX
		CPX		#$10
		BNE		loc_68C9A
		LDX		#0
loc_68CA7:
		LDA		byte_531,X
		BPL		loc_68CB2
		INX
		INX
		CPX		#$10
		BNE		loc_68CA7
loc_68CB2:
		TXA
		LSR
		STA		byte_46
		LDA		byte_47
		PHA
		ASL
		ASL
		ORA		#$80
		STA		byte_530,X
		LDA		#$80
		STA		byte_531,X
		PLA
		ASL
		ASL
		ASL
		STA		byte_45
		TAX
		LDY		#8
loc_68CCE:
		LDA		byte_6A7B,X
		BPL		loc_68CD9
		AND		#7
		CMP		byte_46
		BEQ		loc_68CED
loc_68CD9:
		INX
		DEY
		BNE		loc_68CCE
		LDX		byte_45
		LDA		#8
		STA		word_4
loc_68CE3:
		LDA		byte_6A7B,X
		BPL		loc_68CED
		INX
		DEC		word_4
		BNE		loc_68CE3
loc_68CED:
		LDA		#$80
		ORA		byte_46
		STA		byte_6A7B,X
		LDA		byte_46
		STA		byte_64
		JSR		sub_6B6B8
		JSR		sub_68D7F
		STA		byte_500,X
		TYA
		STA		byte_501,X
		JSR		sub_6B72F
		LDA		byte_59
		LDX		byte_64
		STA		byte_510,X
		JSR		sub_6B786
		JSR		sub_68D7F
		STA		byte_520,X
		TYA
		STA		byte_521,X
		JSR		sub_6B746
		LDX		byte_64
		STA		byte_518,X
		TXA
		CLC
		ADC		#4
		TAX
		LDA		#$70
		STA		byte_54C,X
		JSR		sub_6B5B7
		INC		byte_4D
		FAR		$4C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		sub_6AA34

; =============== S U B	R O U T	I N E =======================================
sub_68D39:
		JSR		sub_68D3F
		JMP		sub_6B3DB

; =============== S U B	R O U T	I N E =======================================
sub_68D3F:
		FAR		$4B,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDX		byte_51
		LDA		byte_558,X
		SEC
		SBC		#$3B
		TAX
		LDA		byte_68D88,X
		JSR		sub_68D59
		BCC		loc_68D56
		JMP		loc_68C7C
loc_68D56:
		FAR		$4D,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68D59:
		STA		byte_45
		LDX		#0
loc_68D5D:
		LDA		byte_530,X
		INX
		AND		byte_530,X
		BPL		loc_68D6D
		INX
		CPX		#$10
		BNE		loc_68D5D
		CLC
		RTS
loc_68D6D:
		LDX		#3
loc_68D6F:
		LDA		byte_6A6F,X
		CMP		byte_45
		BEQ		loc_68D7B
		DEX
		BPL		loc_68D6F
		CLC
		RTS
loc_68D7B:
		STX		byte_47
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68D7F:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_59
		LDY		byte_5A
		RTS
byte_68D88:
		.BYTE	  9,$75,$47,$56,$59

; =============== S U B	R O U T	I N E =======================================
sub_68D8D:
		FAR		$3A,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#1
		JSR		sub_6B307
		JSR		sub_6B30E
		JSR		sub_6B2A3
		BMI		loc_68DA8
		STA		byte_CE
		TAY
		JSR		sub_68F0C
		BPL		nullsub_5
		JMP		sub_6A61F
loc_68DA8:
		STA		byte_64
		JSR		nullsub_5
		JMP		sub_6A6D9

; =============== S U B	R O U T	I N E =======================================
nullsub_5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68DB1:
		FAR		$91,$2F		; _sys12
		LDA		#$36
		STA		word_4
		LDX		byte_51
		LDA		byte_558,X
		CMP		#$D
		BCC		loc_68DC5
		LDA		#$37
		STA		word_4
loc_68DC5:
		LDA		word_4
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B32F
		JSR		sub_6B2A3
		BMI		loc_68DD5
		JMP		loc_68EE6
loc_68DD5:
		LDA		byte_51
		LDA		byte_558,X
		CLC
		ADC		#2
		ASL
		TAX
		LDA		word_6B4C5,X
		STA		byte_55
		LDA		word_6B4C5+1,X
		STA		byte_56
		JMP		sub_697DE

; =============== S U B	R O U T	I N E =======================================
sub_68DEC:
		FAR		$30,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B32F
		JSR		sub_6B2A3
		BMI		loc_68DFD
		JSR		sub_69096
		JMP		sub_694C1
loc_68DFD:
		JMP		sub_69C86

; =============== S U B	R O U T	I N E =======================================
sub_68E00:
		FAR		$31,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B32F
		LDA		off_68E16
		STA		word_3E
		LDA		off_68E16+1
		STA		word_3E+1
		JSR		sub_694C1
		JMP		_b4_s6
off_68E16:
		.WORD	sub_68E18

; =============== S U B	R O U T	I N E =======================================
sub_68E18:
		JSR		sub_68E1E
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_68E1E:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_68E42
		TYA
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$20
		BNE		locret_68E42
		LDA		#$60
		JSR		sub_6A84F
		BCS		loc_68E43
		LDA		byte_73D,X
		ORA		#$20
		STA		byte_73D,X
		FAR		$1D,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
locret_68E42:
		RTS
loc_68E43:
		JSR		sub_6B2EF
		BNE		locret_68E42
		FAR		$32,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68E4B:
		FAR		$33,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B32F
		LDA		off_68E61
		STA		word_3E
		LDA		off_68E61+1
		STA		word_3E+1
		JSR		sub_694C1
		JMP		_b4_s6
off_68E61:
		.WORD	sub_68E63

; =============== S U B	R O U T	I N E =======================================
sub_68E63:
		JSR		sub_68E69
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_68E69:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_68E8D
		TYA
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$40
		BNE		locret_68E8D
		LDA		#$20
		JSR		sub_6A84F
		BCS		loc_68E8E
		LDA		byte_73D,X
		ORA		#$40
		STA		byte_73D,X
		FAR		$34,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
locret_68E8D:
		RTS
loc_68E8E:
		JSR		sub_6B2EF
		BNE		locret_68E8D
		FAR		$35,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68E96:
		JSR		sub_6983C
		FAR		$66,$07		; _b2_s7_screen_spell_blink
		LDX		byte_51
		LDA		byte_558,X
		SEC
		SBC		#$13
		TAX
		LDA		byte_6B490,X
		STA		byte_D3
		STA		byte_49
		FAR		$02,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		sub_6BEB9
loc_68EB8:
		JSR		sub_6B2A3
		BMI		loc_68EC4
		STA		byte_CE
		STA		byte_D2
		JMP		sub_6A579
loc_68EC4:
		JMP		loc_6989F

; =============== S U B	R O U T	I N E =======================================
sub_68EC7:
		JSR		sub_6983C
		FAR		$66,$07		; _b2_s7_screen_spell_blink
		LDX		byte_51
		LDA		byte_558,X
		SEC
		SBC		#$17
		TAX
		LDA		byte_6B494,X
		STA		byte_49
		STA		byte_D3
		FAR		$02,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6A35F
		JSR		sub_6B32F
loc_68EE6:
		JSR		sub_6B2A3
		BMI		loc_68F09
		LDY		#0
loc_68EED:
		STY		byte_CE
		STY		byte_D2
		JSR		sub_68F0C
		BPL		loc_68F03
		TYA
		PHA
		JSR		_b4_sB
		JSR		sub_6BEB9
		JSR		sub_6A579
		PLA
		TAY
loc_68F03:
		INY
		CPY		#4
		BNE		loc_68EED
		RTS
loc_68F09:
		JMP		loc_698B4

; =============== S U B	R O U T	I N E =======================================
sub_68F0C:
		TYA
		ASL
		TAX
		LDA		byte_73C,X
		AND		byte_73D,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68F16:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_531,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68F21:
		LDA		#$12
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_68F2C:
		JSR		sub_6B2A3
		BMI		loc_68F70
		STA		byte_CE
		LDA		#$20
		STA		byte_47
loc_68F37:
		JSR		sub_6B347
		BCC		loc_68F41
		BEQ		loc_68F41
		JMP		sub_69931
loc_68F41:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_68F6C
		JSR		sub_68F7E
		BEQ		loc_68F6D
		LDA		#$37
		JSR		sub_6B0B9
		CMP		#$B7
		BNE		loc_68F59
		LSR		byte_47
loc_68F59:
		LDA		byte_47
		JSR		sub_6A84F
		BCS		loc_68F6D
		LDA		#$55
		JSR		sub_6B0B9
		CMP		#$55
		BEQ		sub_68F73
		JMP		sub_68F86
locret_68F6C:
		RTS
loc_68F6D:
		FAR		$83,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_68F70:
		JMP		loc_6991A

; =============== S U B	R O U T	I N E =======================================
sub_68F73:
		FAR		$7E,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$55
		JSR		_b4_s20
		JMP		_sram_b0_s2A

; =============== S U B	R O U T	I N E =======================================
sub_68F7E:
		LDA		#$47
		JSR		sub_6B0B9
		CMP		#$C7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68F86:
		JSR		sub_68F8C
		JSR		sub_6A4E4

; =============== S U B	R O U T	I N E =======================================
sub_68F8C:
		JSR		loc_68F8F
loc_68F8F:
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JMP		_sram_b0_s5

; =============== S U B	R O U T	I N E =======================================
sub_68F98:
		JSR		_sram_b0_s2
		LDX		#word_4
		LDA		#4
		JSR		_div16_to_8
		LDA		#$FD
		JSR		_mul16_to_8
		LDA		word_4+1
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		#4
		JSR		_mul16_to_8
		LDA		#5
		JSR		_add8_to_16	; A = value
		JMP		loc_6A582

; =============== S U B	R O U T	I N E =======================================
sub_68FBC:
		JSR		sub_6B2A3
		BMI		sub_68FE0
		JSR		sub_68FD5
		LDA		#$20
		STA		byte_47
		LDA		#$13
		JMP		sub_694B8
off_68FCD:
		.WORD	sub_68FCF

; =============== S U B	R O U T	I N E =======================================
sub_68FCF:
		JSR		loc_68F37
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_68FD5:
		LDA		off_68FCD
		STA		word_3E
		LDA		off_68FCD+1
		STA		word_3E+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68FE0:
		LDA		#$13
		JSR		sub_68FEB
		JSR		sub_6B2A3
		JMP		sub_6995B

; =============== S U B	R O U T	I N E =======================================
sub_68FEB:
		PHA
		JSR		sub_6983C
		FAR		$66,$07		; _b2_s7_screen_spell_blink
		PLA
		STA		byte_D3
		FAR		$02,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_68FF8:
		LDA		#$14
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B32F
		JSR		sub_6B2A3
		BMI		loc_69079
		LDY		#0
loc_6900A:
		JSR		sub_68F0C
		BPL		sub_69058
		STY		byte_CE
		STY		byte_D2
		TYA
		PHA
		JSR		_b4_sB
		JSR		sub_68F7E
		BEQ		loc_6902C
		LDA		#$55
		JSR		sub_6B0B9
		CMP		#$55
		BNE		loc_69032
		JSR		sub_68F73
		JMP		sub_69053
loc_6902C:
		JSR		sub_6B3D8
		JMP		sub_69053
loc_69032:
		JSR		sub_6ACBE
		CMP		#$80
		BCS		sub_69050
		LDA		byte_CE
		ASL
		TAX
		LDA		#0
		STA		byte_73D,X
		JSR		sub_68F8C
		JSR		_b4_s1A
		DEC		byte_4C
		FAR		$2C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		sub_69053

; =============== S U B	R O U T	I N E =======================================
sub_69050:
		JSR		sub_68F98

; =============== S U B	R O U T	I N E =======================================
sub_69053:
		JSR		_b4_s6
		PLA
		TAY

; =============== S U B	R O U T	I N E =======================================
sub_69058:
		INY
		CPY		#4
		BNE		loc_6900A
loc_6905D:
		JSR		_b4_sB
		JSR		sub_6B2B3
		STA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		BPL		locret_69078
		JSR		sub_6B5B7
		FAR		$2D,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6ADBF
		JSR		_b4_s5_do_message_speed_delay
locret_69078:
		RTS
loc_69079:
		LDA		#$80
		JSR		sub_699A0
		JMP		loc_6905D

; =============== S U B	R O U T	I N E =======================================
sub_69081:
		JSR		sub_6B2A3
		BMI		loc_6908E
		JSR		sub_69096
		LDA		#$22
		JMP		sub_694B8
loc_6908E:
		LDA		#$22
		JSR		sub_68FEB
		JMP		sub_69C86

; =============== S U B	R O U T	I N E =======================================
sub_69096:
		LDA		off_690A1
		STA		word_3E
		LDA		off_690A1+1
		STA		word_3E+1
		RTS
off_690A1:
		.WORD	sub_690A3

; =============== S U B	R O U T	I N E =======================================
sub_690A3:
		JSR		sub_69C9D
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_690A9:
		JSR		sub_6B2A3
		BMI		loc_690BD
		LDA		off_690C5
		STA		word_3E
		LDA		off_690C5+1
		STA		word_3E+1
		LDA		#$24
		JMP		sub_694B8
loc_690BD:
		LDA		#$24
		JSR		sub_68FEB
		JMP		sub_69D60
off_690C5:
		.WORD	sub_690C7

; =============== S U B	R O U T	I N E =======================================
sub_690C7:
		JSR		sub_69D77
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_690CD:
		LDA		#$2B
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E

; =============== S U B	R O U T	I N E =======================================
sub_690D8:
		JSR		sub_6B2A3
		BMI		loc_690E6
		STA		byte_CE
		LDA		#0
		STA		byte_47
		JMP		sub_6A6DF
loc_690E6:
		JMP		loc_69F16

; =============== S U B	R O U T	I N E =======================================
sub_690E9:
		JSR		sub_6B2A3
		BMI		loc_690FD
		LDA		off_69105
		STA		word_3E
		LDA		off_69105+1
		STA		word_3E+1
		LDA		#$2C
		JMP		sub_694B8
loc_690FD:
		LDA		#$2C
		JSR		sub_68FEB
		JMP		sub_69F23
off_69105:
		.WORD	sub_69107

; =============== S U B	R O U T	I N E =======================================
sub_69107:
		LDA		#$FF
		STA		byte_47
		JSR		sub_6A6DF
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69111:
		JSR		sub_6B2A3
		BMI		loc_69125
		LDA		off_6912D
		STA		word_3E
		LDA		off_6912D+1
		STA		word_3E+1
		LDA		#$25
		JMP		sub_694B8
loc_69125:
		LDA		#$25
		JSR		sub_68FEB
		JMP		sub_69DDF
off_6912D:
		.WORD	sub_6912F

; =============== S U B	R O U T	I N E =======================================
sub_6912F:
		JSR		sub_69DF6
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69135:
		LDA		#$17
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		sub_6B2A3
		BMI		loc_69166
		STA		byte_CE
		TAY
		JSR		sub_68F0C
		BPL		locret_6915D
		JSR		sub_6A61F
		LDA		byte_CF
		STA		byte_65
		LDA		byte_D0
		STA		byte_66
loc_69158:
		BIT		byte_567
		BVC		loc_6915E
locret_6915D:
		RTS
loc_6915E:
		JSR		sub_6B2B3
		STA		byte_64
		JMP		sub_6B6EB
loc_69166:
		STA		byte_64
		JSR		sub_68F16
		BPL		locret_6915D
		JSR		sub_6A676
		JMP		loc_69158

; =============== S U B	R O U T	I N E =======================================
sub_69173:
		LDA		#$27
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_6917E:
		JSR		sub_6B2A3
		BMI		sub_691C0
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_6918F
		BEQ		loc_6918F
		JMP		sub_69E98
loc_6918F:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6915D
		LDA		byte_73C,X
		AND		#$40
		BNE		sub_691BA
		LDA		#$40
		JSR		sub_6A84F
		BCS		sub_691BA
		LDA		byte_73D,X
		AND		#$10
		BNE		loc_691BD
		LDA		byte_73D,X
		ORA		#$10
		STA		byte_73D,X
		FAR		$46,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		_b4_s6

; =============== S U B	R O U T	I N E =======================================
sub_691BA:
		JMP		sub_6B3D8
loc_691BD:
		FAR		$85,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_691C0:
		JMP		sub_69E7F

; =============== S U B	R O U T	I N E =======================================
sub_691C3:
		JSR		sub_6B2A3
		BMI		sub_6921D
		LDA		off_691D7
		STA		word_3E
		LDA		off_691D7+1
		STA		word_3E+1
		LDA		#$18
		JMP		sub_694B8
off_691D7:
		.WORD	sub_691D9

; =============== S U B	R O U T	I N E =======================================
sub_691D9:
		JSR		sub_691DF
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_691DF:
		JSR		sub_6B347
		BCC		loc_691E9
		BEQ		loc_691E9
		JMP		loc_69AEB
loc_691E9:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_69219
		LDA		#$C0
		JSR		sub_6A84F
		BCS		loc_6921A
		JSR		_sram_b0_s12
		LDA		byte_6A9F,X
		CMP		word_4
		BCC		loc_69204
		LDA		word_4
loc_69204:
		PHA
		LDA		byte_6A9F,X
		SEC
		SBC		word_4
		BCS		loc_6920F
		LDA		#0
loc_6920F:
		STA		byte_6A9F,X
		PLA
		JSR		sub_6B2CF
		FAR		$3E,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
locret_69219:
		RTS
loc_6921A:
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_6921D:
		LDA		#$18
		JSR		sub_68FEB
		JMP		sub_69ABF

; =============== S U B	R O U T	I N E =======================================
sub_69225:
		LDA		#$16
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_69230:
		JSR		sub_6B2A3
		BPL		loc_69238
		JMP		loc_69A3B
loc_69238:
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_69244
		BEQ		loc_69244
		JMP		loc_69A49
loc_69244:
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73C,X
		AND		byte_73D,X
		BMI		loc_69251
		RTS
loc_69251:
		LDA		#$32
		JSR		sub_6A84F
		BCS		loc_69264
		LDX		byte_4C
		DEX
		BEQ		loc_69264
		JSR		_sram_b0_s2C
		LDA		word_4
		BNE		loc_69267
loc_69264:
		JMP		sub_6B3D8
loc_69267:
		FAR		$4F,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		byte_CE
		STA		byte_CF
		TAX
		LDA		byte_7C1,X
		ORA		#$80
		STA		byte_7C1,X
		TXA
		ASL
		TAX
		LDA		#0
		STA		byte_73C,X
		STA		byte_73D,X
loc_69282:
		LDA		byte_CF
		CMP		#3
		BEQ		loc_69295
		CLC
		ADC		#1
		STA		byte_D0
		JSR		_sram_b0_s3B
		INC		byte_CF
		JMP		loc_69282
loc_69295:
		DEC		byte_4C
		JSR		sub_6A927
		LDA		byte_2C
		BNE		locret_692B6
		LDX		#$C
loc_692A0:
		LDA		byte_100
		EOR		byte_100,X
		BPL		loc_692AE
		DEX
		DEX
		DEX
		DEX
		BNE		loc_692A0
loc_692AE:
		LDA		byte_100,X
		EOR		#$80
		STA		byte_100,X
locret_692B6:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_692B7:
		LDA		#$30
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B2B3
		STA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		ORA		#$F
		STA		byte_531,X
		JSR		sub_6B5B7
		FAR		$48,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_692D4:
		LDA		#$AD
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$9C
		FAR		$A0,$07		; _bB_s3_apu_load
		FAR		$EA,$07		; _b2_s8_screen_hit_blink
		FAR		$EA,$07		; _b2_s8_screen_hit_blink
		FAR		$76,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		byte_500
		PHA
		LDA		byte_501
		PHA
		LDA		byte_51
		PHA
		LDA		byte_52
		PHA
		LDA		byte_566
		PHA
		JSR		_b4_s22
		PLA
		STA		byte_566
		AND		#$C0
		BEQ		loc_69309
		LDA		#4
		STA		byte_566
loc_69309:
		PLA
		STA		byte_52
		PLA
		STA		byte_51
		PLA
		STA		byte_501
		PLA
		STA		byte_500
		LDA		#5
		LDX		#3
loc_6931B:
		STA		byte_6A4B,X
		DEX
		BPL		loc_6931B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69322:
		LDA		#$2E
		STA		byte_47
		JSR		sub_68FEB
		JSR		sub_6A35F
loc_6932C:
		JSR		sub_6B2A3
		BPL		sub_6933E
		LDA		off_69344
		STA		word_40
		LDA		off_69344+1
		STA		word_40+1
		JMP		sub_6A3AB

; =============== S U B	R O U T	I N E =======================================
sub_6933E:
		JSR		sub_6B32F
		JMP		sub_69F64
off_69344:
		.WORD	sub_69346

; =============== S U B	R O U T	I N E =======================================
sub_69346:
		JSR		sub_6A7BC
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6934C:
		LDA		#$2F
		STA		byte_47
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B2A3
		BPL		sub_6933E
		LDA		off_69344
		STA		word_40
		LDA		off_69344+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1

; =============== S U B	R O U T	I N E =======================================
sub_6936A:
		LDA		#$21
		BNE		sub_69370

; =============== S U B	R O U T	I N E =======================================
sub_6936E:
		LDA		#$20

; =============== S U B	R O U T	I N E =======================================
sub_69370:
		STA		byte_49
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		sub_6B2A3
		BMI		loc_69383
		JMP		loc_6940A
loc_69383:
		STA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		BMI		loc_693EA
		LDA		byte_530,X
		BPL		loc_693EA
		LDA		byte_49
		CMP		#$21
		BEQ		loc_6939C
		JSR		sub_6ACBE
		BPL		loc_693ED
loc_6939C:
		JSR		sub_6B91D
		TAX
		LDA		byte_6A6F,X
		FAR		$69,$07		; _b2_sA
		BCS		loc_693EA
		LDA		byte_64
		ASL
		TAX
		LDA		byte_530,X
		AND		#$FC
		ORA		#$40
		STA		byte_530,X
		LDA		byte_531,X
		ORA		#$80
		STA		byte_531,X
		JSR		sub_6B6B8
		LDA		byte_49
		CMP		#$21
		BEQ		loc_693CB
		LSR		byte_5A
		ROR		byte_59
loc_693CB:
		LDA		byte_59
		STA		byte_65
		LDA		byte_5A
		STA		byte_66
		JSR		_b4_s19
		JSR		sub_6B91D
		TAX
		LDA		#$80
		STA		byte_6A77,X
		INC		byte_4D
		JSR		sub_6B5B7
		FAR		$3C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		sub_6AA34
loc_693EA:
		FAR		$40,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_693ED:
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A77,X
		PHA
		TXA
		PHA
		LDA		#$80
		STA		byte_6A77,X
		JSR		sub_6B5B7
		FAR		$3D,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		TAX
		PLA
		STA		byte_6A77,X
		RTS
loc_6940A:
		LDA		byte_49
		SEC
		SBC		#$20
		CLC
		ROL
		ROL
		JMP		sub_69C0B

; =============== S U B	R O U T	I N E =======================================
sub_69415:
		JSR		sub_6983C
		FAR		$66,$07		; _b2_s7_screen_spell_blink
		LDA		#$36
		STA		word_4
		LDX		byte_51
		LDA		byte_558,X
		CMP		#$36
		BCS		loc_6942E
		PHA
		LDA		#$31
		STA		word_4
		PLA
loc_6942E:
		SEC
		SBC		word_4
		TAX
		LDA		byte_6B49C,X
		STA		byte_D3
		FAR		$02,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		sub_6BEF5

; =============== S U B	R O U T	I N E =======================================
sub_69443:
		JSR		sub_6B2A3
		BPL		loc_69450
		STA		byte_64
		JSR		sub_6BEF5
		JMP		sub_6A5D6
loc_69450:
		JMP		loc_69BA3

; =============== S U B	R O U T	I N E =======================================
sub_69453:
		JSR		sub_6983C
		FAR		$66,$07		; _b2_s7_screen_spell_blink
		LDA		#$34
		STA		word_4
		LDX		byte_51
		LDA		byte_558,X
		CMP		#$39
		BCC		loc_6946C
		PHA
		LDA		#$39
		STA		word_4
		PLA
loc_6946C:
		SEC
		SBC		word_4
		TAX
		LDA		byte_6B49F,X
		STA		byte_D3
		FAR		$02,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6A35F
		JSR		sub_6B32F
loc_6947E:
		JSR		sub_6B2A3
		BPL		loc_694B5
		JSR		sub_6A8B3
		STA		byte_46
		LDY		#0
loc_6948A:
		TYA
		PHA
		STA		byte_64
		LSR		byte_46
		BCS		loc_694AD
		JSR		sub_68F16
		BPL		loc_694AD
		JSR		_b4_sB
		LDA		byte_566
		AND		#$10
		BNE		loc_694A7
		JSR		sub_6BEF5
		JMP		loc_694AA
loc_694A7:
		JSR		sub_6BF22
loc_694AA:
		JSR		sub_6A5D6
loc_694AD:
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_6948A
		RTS
loc_694B5:
		JMP		sub_69BE0

; =============== S U B	R O U T	I N E =======================================
sub_694B8:
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B32F

; =============== S U B	R O U T	I N E =======================================
sub_694C1:
		LDY		#0
loc_694C3:
		JSR		sub_68F0C
		BPL		loc_694D4
		STY		byte_CE
		TYA
		PHA
		JSR		_b4_sB
		JMP		(word_3E)
loc_694D2:
		PLA
		TAY
loc_694D4:
		INY
		CPY		#4
		BNE		loc_694C3
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_694DA:
		LDA		byte_6A63
		BNE		locret_694FC
		JSR		sub_68AC6
		BEQ		locret_694FC
		LDA		byte_566
		AND		#$C4
		BNE		locret_694FC
		JSR		sub_6B2B3
		STA		byte_D2
		STA		byte_CE
		ASL
		TAX
		LDA		byte_73C,X
		AND		byte_73D,X
		BMI		loc_694FD
locret_694FC:
		RTS
loc_694FD:
		TXA
		PHA
		JSR		_b4_sA
		PLA
		TAX
		LDA		byte_73D,X
		AND		#$40
		BNE		sub_6957D
		TXA
		LSR
		TAX
		LDA		byte_6A9B,X
		AND		#8
		BNE		sub_69589
		LDA		#$44
		JSR		sub_6B0B9
		CMP		#$C4
		BEQ		loc_6952A
		JSR		sub_6B2B3
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$10
		BEQ		loc_69536
loc_6952A:
		FAR		$E5,$07		; _bA_sA
		FAR		$73,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		_b4_sA
		JMP		loc_6953C
loc_69536:
		FAR		$86,$17		; _b2_sD
		BCC		loc_6953C
		RTS
loc_6953C:
		JSR		sub_6B2FE
		LDA		byte_567
		AND		#$C
		BEQ		loc_69562
		LDA		byte_567
		AND		#3
		STA		word_4
		JSR		sub_6B2B3
		CMP		word_4
		BNE		locret_694FC
		LDA		byte_567
		SEC
		SBC		#4
		STA		byte_567
		LDA		#4
		JSR		sub_6B2BB
loc_69562:
		JSR		sub_69580
		LDX		byte_51
		LDA		byte_54C,X
		AND		#$70
		LSR
		LSR
		LSR
		TAX
		LDA		off_6BE2A,X
		STA		word_3C
		LDA		off_6BE2A+1,X
		STA		word_3C+1
		JMP		(word_3C)

; =============== S U B	R O U T	I N E =======================================
sub_6957D:
		FAR		$38,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
sub_69580:
		LDA		byte_568
		AND		#$FC
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69589:
		TXA
		ASL
		TAX
		LDA		byte_73C,X
		AND		#3
		TAY
		LDA		byte_6B44A,Y
		STA		word_4
		JSR		sub_6ACBE
		CMP		word_4
		BEQ		loc_695B4
		BCC		loc_695B4
		DEY
		STY		word_4
		LDA		byte_73C,X
		AND		#$FC
		ORA		word_4
		STA		byte_73C,X
		LDA		byte_CE
		STA		byte_D2
		FAR		$1B,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_695B4:
		TXA
		LSR
		TAX
		LDA		byte_6A9B,X
		AND		#$F7
		STA		byte_6A9B,X
		LDA		byte_CE
		STA		byte_D2
		FAR		$1C,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_695C6:
		JSR		_sram_b0_s16
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73C,X
		AND		#$40
		BNE		loc_695DE
		LDA		word_4
		STA		byte_6AAB,X
		LDA		word_4+1
		STA		byte_6AAC,X
loc_695DE:
		JSR		_sram_b0_s1E
		LDA		word_4
		AND		#$7F
		CMP		#$18
		BNE		loc_69600
		LDA		byte_CE
		PHA
		JSR		sub_69604
		PLA
		STA		byte_CE
		JSR		sub_6B3D2
		LDA		byte_4C
		BEQ		locret_69603
		LDA		byte_4D
		BEQ		locret_69603
		JSR		_b4_sA
loc_69600:
		JSR		sub_69604
locret_69603:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69604:
		JSR		sub_6B2A3
		BMI		loc_6960C
		JMP		sub_696E8
loc_6960C:
		FAR		$89,$2F		; _sys12
		FAR		$01,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B0E5
		BCC		loc_6961A
		FAR		$7C,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_6961A:
		LDA		byte_CE
		PHA
		JSR		sub_6AABA
		PLA
		STA		byte_CE
		LDA		word_6
		CMP		#$FF
		BNE		loc_6962A
		RTS
loc_6962A:
		STA		byte_64
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73C,X
		AND		#$10
		BEQ		loc_69647
		JSR		sub_6ACBE
		CMP		#$A0
		BCS		loc_69647
loc_6963E:
		FAR		$8C,$2F		; _sys12
		JSR		sub_6B5B7
		FAR		$22,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_69647:
		LDA		byte_575
		AND		#8
		BEQ		loc_69655
		JSR		sub_6ACBE
		CMP		#$20
		BCC		loc_6963E
loc_69655:
		LDA		byte_73C,X
		AND		#8
		BEQ		loc_69660
		ASL		word_4
		ROL		word_4+1
loc_69660:
		LDA		byte_575
		BMI		loc_696C9
		LDA		byte_567
		AND		#$20
		BNE		loc_696B6
		JSR		sub_6B95A
		BNE		loc_6968F
		JSR		sub_6B9D2
		BEQ		loc_6968F
		LDA		byte_566
		AND		#8
		BNE		loc_6968F
		LDA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		AND		#$20
		BNE		loc_6968F
		JSR		sub_6ACBE
		CMP		byte_59
		BCC		loc_696DF
loc_6968F:
		LDX		byte_CE
		LDA		byte_718,X
		AND		#7
		CMP		#6
		BNE		loc_696A2
		JSR		sub_6ACBE
		CMP		byte_700,X
		BCC		loc_696B6
loc_696A2:
		LDX		#4
		LDA		byte_575
		AND		#2
		BEQ		loc_696AD
		LDX		#$20
loc_696AD:
		STX		word_6+1
		JSR		sub_6ACBE
		CMP		word_6+1
		BCS		loc_696C9
loc_696B6:
		FAR		$88,$2F		; _sys12
		FAR		$10,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		_sram_b0_s17
		JSR		sub_6ADA4
		LDX		#word_4
		LDA		#1
		JSR		_add8_to_16
loc_696C9:
		LDA		byte_575
		AND		#$10
		BEQ		loc_696DC
		JSR		sub_6ACBE
		AND		#$F
		ADC		#$10
		LDX		#word_4
		JSR		_add8_to_16	; A = value
loc_696DC:
		JMP		loc_6A42E
loc_696DF:
		JSR		sub_6B5B7
		FAR		$8C,$2F		; _sys12
		FAR		$07,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_696E8:
		JSR		sub_6AABA
		LDA		word_6
		CMP		#$FF
		BNE		loc_696F4
		FAR		$01,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_696F4:
		AND		#$18
		BEQ		loc_69709
		CMP		#8
		BEQ		loc_69736
		JSR		sub_69777
		BNE		loc_69709
		JSR		sub_6975F
		BCC		locret_69735
		FAR		$24,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_69709:
		FAR		$01,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		word_6
		AND		#3
		STA		byte_CE
		STA		byte_D2
		PHA
		JSR		loc_6A58C
		PLA
		JSR		loc_6977A
		BEQ		locret_69735
		JSR		sub_68C42
		BNE		locret_69735
		JSR		sub_6ACBE
		CMP		#$20
		BCS		locret_69735
		LDA		byte_73D,X
		AND		#$EF
		STA		byte_73D,X
		FAR		$74,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
locret_69735:
		RTS
loc_69736:
		JSR		sub_69777
		BNE		loc_69709
		JSR		sub_6975F
		BCC		locret_69735
		JSR		sub_6ACBE
		AND		#7
		CMP		#7
		BCC		loc_6974C
		FAR		$25,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_6974C:
		FAR		$1C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDX		byte_CE
		LDA		byte_6A9B,X
		AND		#$F7
		STA		byte_6A9B,X
		LDA		#$70
		STA		byte_54C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6975F:
		LDA		word_6
		AND		#3
		STA		byte_CE
		STA		byte_D3
		FAR		$23,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		byte_D3
		STA		byte_D2
		JSR		sub_6A4D9
		PHP
		JSR		_b4_s21_message_half_delay_or_wait_for_keypress
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69777:
		JSR		sub_6B2B3
loc_6977A:
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$10
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69782:
		JSR		sub_6B2F5
		LDX		byte_51
		LDA		byte_558,X
		STA		byte_49
		STA		byte_D3
		TAX
		LDA		_b4_dD_spells_list,X
		AND		#$3F
		FAR		$99,$17		; _b0_s67
		JSR		_sram_b0_sB
		BCC		loc_697C5
		JSR		_sram_b0_s9
		JSR		_b4_s6
		LDA		byte_D3
		JSR		sub_68FEB
		JSR		sub_6A39F
loc_697AA:
		LDA		byte_49
		CMP		#$12
		BCS		loc_697B4
		LDA		#0
		BEQ		loc_697B6
loc_697B4:
		SBC		#$11
loc_697B6:
		ASL
		TAX
		LDA		off_6BE3A,X
		STA		word_3C
		LDA		off_6BE3A+1,X
		STA		word_3C+1
		JMP		(word_3C)
loc_697C5:
		LDA		byte_D3
		JSR		sub_68FEB
		FAR		$20,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_697CD:
		FAR		$04,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_697D0:
		FAR		$91,$2F		; _sys12
		FAR		$36,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$14
		STA		byte_55
		LDA		#$AA
		STA		byte_56

; =============== S U B	R O U T	I N E =======================================
sub_697DE:
		LDY		#0
loc_697E0:
		STY		byte_64
		TYA
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_531,X
		BPL		loc_69831
		LDA		byte_6A63
		BEQ		loc_697F9
		JSR		sub_6B2B3
		CMP		byte_64
		BEQ		loc_69831
loc_697F9:
		TYA
		PHA
		JSR		_b4_sB
		LDA		byte_55
		JSR		_b4_sF
		ADC		byte_56
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		#0
		STA		byte_65
		JSR		sub_6B994
		LDA		byte_69837,X
		CMP		#$FF
		BEQ		loc_6982C
		LDX		#word_4
		JSR		_mul16_to_8
		LDA		word_4+1
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		word_4
		BNE		loc_6982C
		INC		word_4
loc_6982C:
		JSR		loc_6A42E
		PLA
		TAY
loc_69831:
		INY
		CPY		#8
		BNE		loc_697E0
		RTS
byte_69837:
		.BYTE	$FF,$CC,$99,$80

; =============== S U B	R O U T	I N E =======================================
nullsub_11:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6983C:
		FAR		$8E,$2F		; _sys12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69840:
		LDA		byte_49
		CMP		#3
		BCC		loc_69892
		CMP		#6
		BCC		loc_698B4
		CMP		#9
		BCC		loc_69862
		CMP		#$A
		BCC		loc_69892
		CMP		#$C
		BCC		loc_698B4
		CMP		#$D
		BCC		loc_69862
		CMP		#$10
		BCC		loc_698B4
		CMP		#$11
		BCC		loc_69892
loc_69862:
		JSR		sub_6B2A3
		BMI		loc_6986A
		JMP		loc_698EF
loc_6986A:
		LDY		#0
loc_6986C:
		TYA
		STA		byte_64
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_531,X
		BPL		loc_69886
		TYA
		PHA
		JSR		_b4_sB
		JSR		sub_6BEA4
		JSR		sub_6A3F8
		PLA
		TAY
loc_69886:
		INY
		CPY		#8
		BNE		loc_6986C
		RTS
loc_6988C:
		JSR		sub_6BEA4
		JMP		loc_68EB8
loc_69892:
		JSR		sub_6B2A3
		BPL		loc_6988C
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_698B3
loc_6989F:
		AND		#7
		STA		byte_64
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_531,X
		BPL		locret_698B3
		JSR		sub_6BEA4
		JMP		sub_6A3F8
locret_698B3:
		RTS
loc_698B4:
		JSR		sub_6B2A3
		BPL		loc_698E0
		STA		byte_47
		LDY		#0
loc_698BD:
		TYA
		PHA
		STY		byte_64
		JSR		sub_6B91D
		LDA		byte_59
		CMP		byte_47
		BNE		loc_698D8
		JSR		sub_68F16
		BPL		loc_698D8
		JSR		_b4_sB
		JSR		sub_6BEA4
		JSR		sub_6A3F8
loc_698D8:
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_698BD
		RTS
loc_698E0:
		JSR		sub_6B2B3
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$10
		BNE		loc_698EF
		JMP		loc_6988C
loc_698EF:
		LDY		#0
loc_698F1:
		STY		byte_CE
		STY		byte_D2
		JSR		sub_68F0C
		BPL		loc_69907
		TYA
		PHA
		JSR		_b4_sB
		JSR		sub_6BEA4
		JSR		sub_6A57F
		PLA
		TAY
loc_69907:
		INY
		CPY		#4
		BNE		loc_698F1
locret_6990C:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6990D:
		JSR		sub_6B2A3
		BPL		sub_69955
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_6990C
loc_6991A:
		AND		#7
		STA		byte_64
		JSR		sub_68F16
		BPL		locret_6994E
		LDA		#$80
		STA		byte_47

; =============== S U B	R O U T	I N E =======================================
sub_69927:
		JSR		sub_6B398
		BCC		sub_69931
		BNE		sub_69931
		JMP		loc_68F41

; =============== S U B	R O U T	I N E =======================================
sub_69931:
		JSR		sub_6B5B7
		LDA		#4
		JSR		sub_6A337
		BCC		loc_6993E
loc_6993B:
		JMP		sub_6A3D3
loc_6993E:
		LDA		byte_47
		CMP		#$80
		BNE		loc_6994B
		LDA		#4
		JSR		sub_6A337
		BCS		loc_6993B
loc_6994B:
		FAR		$83,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
locret_6994E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6994F:
		JSR		sub_69927
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69955:
		JSR		sub_6B2DB
		JMP		loc_68F2C

; =============== S U B	R O U T	I N E =======================================
sub_6995B:
		JSR		sub_6B2A3
		BPL		sub_69955
		JSR		sub_69966
		JMP		sub_6A3AB

; =============== S U B	R O U T	I N E =======================================
sub_69966:
		LDA		off_69971
		STA		word_40
		LDA		off_69971+1
		STA		word_40+1
		RTS
off_69971:
		.WORD	sub_6994F

; =============== S U B	R O U T	I N E =======================================
sub_69973:
		LDA		#0
		JSR		sub_699A0
		JSR		_b4_sB
		JSR		sub_6B2B3
		PHA
		STA		byte_D2
		STA		byte_CE
		FAR		$2D,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JSR		_sram_b0_s5
		PLA
		ASL
		TAX
		LDA		#0
		STA		byte_73D,X
		JSR		_b4_s1A
		JSR		_b4_s6
		DEC		byte_4C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_699A0:
		STA		byte_55
		LDY		#0
loc_699A4:
		TYA
		PHA
		STA		byte_64
		JSR		sub_68F16
		BPL		loc_699E9
		LDA		#5
		JSR		sub_6A337
		BCS		loc_699C0
		JSR		_b4_sB
		JSR		sub_6B5B7
		JSR		sub_6B3D8
		JMP		loc_699E9
loc_699C0:
		LDA		byte_55
		BEQ		loc_699CB
		JSR		sub_6B2B3
		CMP		byte_64
		BEQ		loc_699E9
loc_699CB:
		JSR		_b4_sB
		JSR		sub_6B5B7
		FAR		$2C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$FF
		STA		byte_65
		STA		byte_CF
		STA		byte_66
		STA		byte_D0
		LDA		#$40
		JSR		sub_6B307
		JSR		sub_6B697
		JSR		sub_6ADBF
loc_699E9:
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_699A4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_699F1:
		JSR		sub_6B2A3
		BPL		loc_69A03
		LDA		off_69A0D
		STA		word_40
		LDA		off_69A0D+1
		STA		word_40+1
		JMP		sub_6A3AB
loc_69A03:
		STA		byte_CE
		STA		byte_D2
		JSR		sub_6B347
		JMP		sub_6B3D8
off_69A0D:
		.WORD	sub_69A0F

; =============== S U B	R O U T	I N E =======================================
sub_69A0F:
		JSR		sub_6B398
		BCC		loc_69A18
		BNE		loc_69A18
		BEQ		loc_69A28
loc_69A18:
		JSR		sub_6B2E6
		LDA		#$D
		JSR		sub_6A337
		BCC		loc_69A28
		JSR		sub_6A3D3
		JMP		sub_6A3CB
loc_69A28:
		JSR		sub_6B3D8
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69A2E:
		JSR		sub_6B2A3
		BPL		sub_69A7A
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_69A79
loc_69A3B:
		AND		#7
		STA		byte_64
		JSR		sub_6B398
		BCC		loc_69A49
		BNE		loc_69A49
		JMP		loc_69244
loc_69A49:
		JSR		sub_68F16
		BPL		locret_69A79
		TXA
		PHA
		JSR		sub_6B5B7
		LDA		#$C
		JSR		sub_6A337
		BCC		loc_69A5E
		LDA		#$4E
		BNE		loc_69A63
loc_69A5E:
		JSR		sub_6B3D8
		PLA
		RTS
loc_69A63:
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		JSR		sub_6ADBF
		PLA
		TAX
		LDA		#0
		STA		byte_530,X
locret_69A79:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69A7A:
		JSR		sub_6B2DB
		JMP		loc_69230

; =============== S U B	R O U T	I N E =======================================
sub_69A80:
		JSR		sub_6B2A3
		BMI		loc_69A99
		JSR		sub_6A61F
		BIT		byte_567
		BVC		loc_69A8E
		RTS
loc_69A8E:
		JSR		sub_6B2B3
		STA		byte_CE
		JSR		_sram_b0_s8
		JMP		_b4_s6
loc_69A99:
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_69ABE
		AND		#7
		STA		word_4
		LDX		byte_51
		LDA		byte_54C,X
		AND		#$F8
		ORA		word_4
		STA		byte_54C,X
		JSR		sub_6A676
		LDA		byte_65
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		BEQ		loc_69A8E
locret_69ABE:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69ABF:
		JSR		sub_6B2A3
		BPL		loc_69AD1
		LDA		off_69AD9
		STA		word_40
		LDA		off_69AD9+1
		STA		word_40+1
		JMP		sub_6A3AB
loc_69AD1:
		STA		byte_CE
		JSR		sub_6B2DB
		JMP		sub_691DF
off_69AD9:
		.WORD	sub_69ADB

; =============== S U B	R O U T	I N E =======================================
sub_69ADB:
		JSR		sub_69AE1
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69AE1:
		JSR		sub_6B398
		BCC		loc_69AEB
		BNE		loc_69AEB
		JMP		loc_691E9
loc_69AEB:
		JSR		sub_6B5B7
		LDA		#$C
		JSR		sub_6A337
		BCC		loc_69B18
		JSR		sub_6B746
		LDX		byte_64
		LDA		byte_518,X
		CMP		byte_59
		BCC		loc_69B03
		LDA		byte_59
loc_69B03:
		PHA
		LDA		byte_518,X
		SEC
		SBC		byte_59
		BCS		loc_69B0E
		LDA		#0
loc_69B0E:
		STA		byte_518,X
		PLA
		JSR		sub_6B2CF
		FAR		$3E,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_69B18:
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_69B1B:
		JSR		sub_6B2A3
		BMI		sub_69B5F
		LDA		off_69B2C
		LDX		off_69B2C+1
		JSR		sub_6BBD0
		JMP		sub_694C1
off_69B2C:
		.WORD	sub_69B2E

; =============== S U B	R O U T	I N E =======================================
sub_69B2E:
		JSR		sub_69B34
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69B34:
		JSR		sub_6B347
		BCC		loc_69B3E
		BEQ		loc_69B3E
		JMP		loc_69B7E
loc_69B3E:
		JSR		sub_6B3D2
		JSR		_sram_b0_s12
		LDA		byte_6A9F,X
		ADC		word_4
		BCC		loc_69B54
		LDA		#$FF
		SBC		byte_6A9F,X
		STA		word_4
		LDA		#$FF
loc_69B54:
		STA		byte_6A9F,X
		LDA		word_4
		JSR		sub_6B2CF
		FAR		$45,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69B5F:
		LDA		off_69B6C
		LDX		off_69B6C+1
		STA		word_40
		STX		word_40+1
		JMP		sub_6A3AB
off_69B6C:
		.WORD	sub_69B6E

; =============== S U B	R O U T	I N E =======================================
sub_69B6E:
		JSR		sub_69B74
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69B74:
		JSR		sub_6B398
		BCC		loc_69B7E
		BNE		loc_69B7E
		JMP		loc_69B3E
loc_69B7E:
		JSR		sub_6B5B7
		JSR		sub_6B746
		LDX		byte_64
		CLC
		ADC		byte_518,X
		BCC		loc_69B95
		LDA		#$FF
		SBC		byte_518,X
		STA		byte_59
		LDA		#$FF
loc_69B95:
		STA		byte_518,X
		LDA		byte_59
		JSR		sub_6B2CF
		FAR		$45,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69BA0:
		JSR		sub_6BF22
loc_69BA3:
		JSR		sub_6B2A3
		BMI		loc_69BAD
		STA		byte_CE
		JMP		sub_6A5F7
loc_69BAD:
		LDA		byte_6A6F
		CMP		#$86
		BNE		loc_69BD7
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		byte_64
		LDA		byte_49
		SEC
		SBC		#$1A
		TAY
		LDA		byte_69BDD,Y
		JSR		_b4_sF
		CLC
		ADC		byte_69BDA,Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		JMP		loc_6A42E
loc_69BD7:
		JMP		sub_69443
byte_69BDA:
		.BYTE	$19,$46,$8C
byte_69BDD:
		.BYTE	 $A,$14,$28

; =============== S U B	R O U T	I N E =======================================
sub_69BE0:
		JSR		sub_6B2A3
		BMI		sub_69C03

; =============== S U B	R O U T	I N E =======================================
sub_69BE5:
		LDY		#0
loc_69BE7:
		TYA
		PHA
		JSR		_b4_sB
		JSR		sub_68F0C
		BPL		loc_69BFB
		JSR		sub_6BF22
		PLA
		STA		byte_CE
		PHA
		JSR		sub_6A5F7
loc_69BFB:
		PLA
		TAY
		INY
		CPY		#4
		BNE		loc_69BE7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69C03:
		JSR		sub_6B2DB
		JMP		loc_6947E

; =============== S U B	R O U T	I N E =======================================
sub_69C09:
		LDA		#$80

; =============== S U B	R O U T	I N E =======================================
sub_69C0B:
		STA		byte_47
		JSR		sub_6B2A3
		BMI		loc_69C4C
		STA		byte_D2
		STA		byte_CE
		ASL
		TAX
		LDA		byte_73D,X
		BMI		loc_69C7A
		LDA		byte_73C,X
		BPL		locret_69C7D
		LDA		byte_47
		BEQ		loc_69C2D
		LDA		#$80
		JSR		sub_6A84F
		BCS		loc_69C7E
loc_69C2D:
		JSR		sub_69C62
		JSR		_sram_b0_s3
		LDA		byte_47
		BPL		loc_69C3B
		LSR		word_4+1
		ROR		word_4
loc_69C3B:
		LDA		word_4
		STA		byte_CF
		LDA		word_4+1
		STA		byte_D0
		JSR		_sram_b0_s4
		JSR		_b4_s1A
		JMP		_b4_s6
loc_69C4C:
		JSR		sub_6A900
		PHA
		LDA		#0
		JSR		sub_6BC17
		PLA
		ORA		word_6+1
		JSR		_b4_s14
		BCC		loc_69C7A
		AND		#7
		JMP		loc_69383

; =============== S U B	R O U T	I N E =======================================
sub_69C62:
		LDA		#$80
		STA		byte_73C,X
		STA		byte_73D,X
		TXA
		LSR
		TAX
		LDA		byte_6A9B,X
		AND		#$F7
		STA		byte_6A9B,X
		INC		byte_4C
		FAR		$3C,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_69C7A:
		FAR		$40,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
locret_69C7D:
		RTS
loc_69C7E:
		FAR		$3D,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69C81:
		LDA		#0
		JMP		sub_69C0B

; =============== S U B	R O U T	I N E =======================================
sub_69C86:
		JSR		sub_6B2A3
		BPL		loc_69C98
		LDA		off_69CE5
		STA		word_40
		LDA		off_69CE5+1
		STA		word_40+1
		JMP		sub_6A3AB
loc_69C98:
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69C9D:
		JSR		sub_6B347
		BCC		sub_69CA7
		BEQ		sub_69CA7
		JMP		loc_69CF7

; =============== S U B	R O U T	I N E =======================================
sub_69CA7:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_69D1C
		TYA
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$40
		BNE		locret_69D1C
		LDA		byte_6A9B,Y
		AND		#8
		BNE		locret_69D1C
		LDA		#$60
		JSR		sub_6A84F
		BCS		loc_69CDD
		LDA		byte_6A9B,Y
		ORA		#8
		STA		byte_6A9B,Y
		LDA		byte_73C,X
		ORA		#3
		STA		byte_73C,X
		FAR		$19,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		_b4_s6
loc_69CDD:
		JSR		sub_6B2EF
		BNE		locret_69D1C
		FAR		$1A,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
off_69CE5:
		.WORD	sub_69CE7

; =============== S U B	R O U T	I N E =======================================
sub_69CE7:
		JSR		sub_69CED
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69CED:
		JSR		sub_6B398
		BCC		loc_69CF7
		BNE		loc_69CF7
		JMP		sub_69CA7
loc_69CF7:
		JSR		sub_6B5B7
		JSR		sub_6B95A
		BNE		locret_69D1C
		LDA		#6
		JSR		sub_6A337
		BCC		sub_69D1D
		FAR		$19,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6A35A
		LDA		byte_531,X
		ORA		#$20
		STA		byte_531,X
		LDA		byte_530,X
		ORA		#3
		STA		byte_530,X
locret_69D1C:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69D1D:
		FAR		$1A,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69D20:
		LDA		off_69D2D
		STA		word_3E
		LDA		off_69D2D+1
		STA		word_3E+1
		JMP		sub_694C1
off_69D2D:
		.WORD	sub_69D2F

; =============== S U B	R O U T	I N E =======================================
sub_69D2F:
		JSR		sub_69D35
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69D35:
		JSR		sub_6B347
		BCC		loc_69D3D
		BEQ		loc_69D3D
		RTS
loc_69D3D:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_69D5F
		LDA		byte_6A9B,Y
		AND		#8
		BEQ		loc_69D5C
		LDA		byte_6A9B,Y
		AND		#$F7
		STA		byte_6A9B,Y
		LDA		#$70
		STA		byte_54C,Y
		FAR		$1C,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_69D5C:
		FAR		$24,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
locret_69D5F:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69D60:
		JSR		sub_6B2A3
		BPL		loc_69D72
		LDA		off_69DD7
		STA		word_40
		LDA		off_69DD7+1
		STA		word_40+1
		JMP		sub_6A3AB
loc_69D72:
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69D77:
		JSR		sub_6B347
		BCC		loc_69D81
		BEQ		loc_69D81
		JMP		loc_69DB9
loc_69D81:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_69DAB
		JSR		_sram_b0_s6
		BEQ		loc_69DAC
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73C,X
		AND		#$20
		BNE		locret_69DAB
		LDA		#$60
		JSR		sub_6A84F
		BCS		loc_69DAC
		LDA		byte_73C,X
		ORA		#$20
		STA		byte_73C,X
		FAR		$41,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
locret_69DAB:
		RTS
loc_69DAC:
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_69DAF:
		JSR		sub_6B398
		BCC		loc_69DB9
		BNE		loc_69DB9
		JMP		loc_69D81
loc_69DB9:
		JSR		sub_6B5B7
		JSR		sub_6B901
		BCS		locret_69DAB
		LDA		#7
		JSR		sub_6A337
		BCC		loc_69DAC
		FAR		$41,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6A35A
		LDA		byte_530,X
		ORA		#$20
		STA		byte_530,X
		RTS
off_69DD7:
		.WORD	sub_69DD9

; =============== S U B	R O U T	I N E =======================================
sub_69DD9:
		JSR		sub_69DAF
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69DDF:
		JSR		sub_6B2A3
		BPL		loc_69DF1
		LDA		off_69E59
		STA		word_40
		LDA		off_69E59+1
		STA		word_40+1
		JMP		sub_6A3AB
loc_69DF1:
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69DF6:
		JSR		sub_6B347
		BCC		loc_69E00
		BEQ		loc_69E00
		JMP		loc_69E38
loc_69E00:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_69E24
		TYA
		ASL
		TAX
		LDA		byte_73C,X
		AND		#$10
		BNE		locret_69E24
		LDA		#$A0
		JSR		sub_6A84F
		BCS		loc_69E25
		LDA		byte_73C,X
		ORA		#$10
		STA		byte_73C,X
		FAR		$2F,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
locret_69E24:
		RTS
loc_69E25:
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_69E28:
		JSR		sub_69E2E
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69E2E:
		JSR		sub_6B398
		BCC		loc_69E38
		BNE		loc_69E38
		JMP		loc_69E00
loc_69E38:
		JSR		sub_6B5B7
		JSR		loc_6B90F
		BCS		locret_69E55
		LDA		#9
		JSR		sub_6A337
		BCC		loc_69E56
		FAR		$2F,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6A35A
		LDA		byte_530,X
		ORA		#$10
		STA		byte_530,X
locret_69E55:
		RTS
loc_69E56:
		JMP		sub_6B3D8
off_69E59:
		.WORD	sub_69E28

; =============== S U B	R O U T	I N E =======================================
sub_69E5B:
		LDA		byte_6A6B
		BNE		loc_69E7C
		STA		byte_50
		JSR		_b4_s5_do_message_speed_delay
		FAR		$12,$17		; _b6_s6
		BCC		loc_69E7C
		LDA		byte_60B7
		AND		#$DF
		STA		byte_60B7
		LDA		#0
		STA		byte_32
		LDX		#$FB
		TXS
		JMP		loc_174E92
loc_69E7C:
		FAR		$40,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69E7F:
		JSR		sub_6B2A3
		BPL		sub_69EC5
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		byte_64
		JSR		sub_6B398
		BCC		sub_69E98
		BNE		sub_69E98
		JMP		loc_6918F

; =============== S U B	R O U T	I N E =======================================
sub_69E98:
		JSR		sub_6B5B7
		JSR		sub_68F16
		BPL		locret_69EC4
		LDA		#$B
		JSR		sub_6A337
		BCC		loc_69EBE
		JSR		sub_6A35A
		LDA		byte_531,X
		AND		#$10
		BNE		loc_69EC1
		LDA		byte_531,X
		ORA		#$10
		STA		byte_531,X
		LDA		#$46
		JMP		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_69EBE:
		JMP		sub_6B3D8
loc_69EC1:
		FAR		$85,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
locret_69EC4:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69EC5:
		JSR		sub_6B2DB
		JMP		loc_6917E

; =============== S U B	R O U T	I N E =======================================
sub_69ECB:
		JSR		sub_6B2B3
		STA		byte_D2
		TAX
		LDA		#$64
		STA		byte_6A9F,X
		TXA
		ASL
		TAX
		LDA		byte_73C,X
		ORA		#$40
		STA		byte_73C,X
		LDA		#$2C
		STA		byte_6AAB,X
		LDA		#1
		STA		byte_6AAC,X
		LDA		#0
		STA		byte_6AA4,X
		LDA		#$C8
		STA		byte_6AA3,X
		FAR		$47,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69EF8:
		LDA		byte_566
		AND		#$3F
		ORA		#$C0
		STA		byte_566
		FAR		$54,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69F05:
		LDA		#0
		STA		byte_47
		JSR		sub_6B2A3
		BPL		loc_69F1D
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_69F63
loc_69F16:
		AND		#7
		STA		byte_64
		JMP		sub_6A74B
loc_69F1D:
		JSR		sub_6B2DB
		JMP		sub_690D8

; =============== S U B	R O U T	I N E =======================================
sub_69F23:
		LDA		#$FF
		STA		byte_47
		JSR		sub_6B2A3
		BPL		loc_69F39
		LDA		off_69F41
		STA		word_40
		LDA		off_69F41+1
		STA		word_40+1
		JMP		sub_6A3AB
loc_69F39:
		STA		byte_CE
		JSR		sub_6B2DB
		JMP		sub_6A6DF
off_69F41:
		.WORD	sub_6A78A

; =============== S U B	R O U T	I N E =======================================
sub_69F43:
		LDA		#0
		STA		byte_47
		JSR		sub_6B2A3
		BMI		loc_69F51
		STA		byte_CE
		JMP		sub_6A790
loc_69F51:
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		byte_64
		JSR		sub_68F16
		BPL		locret_69F63
		JMP		sub_6A7BC
locret_69F63:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69F64:
		LDA		#$FF
		STA		byte_47
		JSR		sub_6B2A3
		BMI		loc_69F7A
		LDA		off_69F7D
		STA		word_3E
		LDA		off_69F7D+1
		STA		word_3E+1
		JMP		sub_694C1
loc_69F7A:
		JMP		loc_6932C
off_69F7D:
		.WORD	sub_69F7F

; =============== S U B	R O U T	I N E =======================================
sub_69F7F:
		JSR		sub_6A790
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69F85:
		JSR		sub_6B2B3
		STA		byte_D2
		ASL
		TAX
		LDA		byte_73D,X
		ORA		#$F
		STA		byte_73D,X
		FAR		$48,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_69F97:
		LDA		#0
		STA		byte_D2
		JSR		_b4_sB
		FAR		$49,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDY		#0

; =============== S U B	R O U T	I N E =======================================
sub_69FA3:
		TYA
		PHA
		STA		byte_CE
		STA		byte_D2
		JSR		sub_68F0C
		BPL		loc_69FBD
		LDA		byte_73C,X
		AND		#4
		BNE		loc_69FBD
		LDA		byte_73C,X
		ORA		#4
		STA		byte_73C,X
loc_69FBD:
		PLA
		TAY
		INY
		CPY		#4
		BNE		sub_69FA3
locret_69FC4:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69FC5:
		JSR		sub_6B2A3
		BMI		loc_69FE6
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_69FD3
		BNE		loc_69FF7
loc_69FD3:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_69FC4
		LDA		byte_73C,X
		ORA		#8
		STA		byte_73C,X
		FAR		$4A,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_69FE6:
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		byte_64
		JSR		sub_6B398
		BCC		loc_69FF7
		BEQ		loc_69FD3
loc_69FF7:
		JSR		sub_6B5B7
		JSR		sub_68F16
		BPL		locret_69FC4
		LDA		#1
		LDX		byte_64
		BEQ		loc_6A009
loc_6A005:
		ASL
		DEX
		BNE		loc_6A005
loc_6A009:
		BIT		byte_565
		BNE		locret_69FC4
		ORA		byte_565
		STA		byte_565
		FAR		$4A,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6A017:
		JSR		sub_6B2FE
		LDA		#$10
		JSR		sub_6B2F7
		LDA		byte_6A6B
		BNE		loc_6A038
		LDA		#$11
		JSR		_b4_sF
		ASL
		TAX
		LDA		off_6A241,X
		STA		word_3C
		LDA		off_6A241+1,X
		STA		word_3C+1
		JMP		(word_3C)
loc_6A038:
		JSR		sub_6ACBE
		AND		#$F
		CMP		#$C
		BCS		sub_6A079
		JMP		sub_6A23B

; =============== S U B	R O U T	I N E =======================================
sub_6A044:
		FAR		$57,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDY		#0

; =============== S U B	R O U T	I N E =======================================
sub_6A049:
		TYA
		PHA
		STY		byte_D2
		JSR		sub_68F0C
		BPL		loc_6A058
		JSR		_b4_sB
		FAR		$89,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_6A058:
		PLA
		TAY
		INY
		CPY		#4
		BNE		sub_6A049
		LDA		off_6A06E
		STA		word_40
		LDA		off_6A06E+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6A06E:
		.WORD	sub_6A070

; =============== S U B	R O U T	I N E =======================================
sub_6A070:
		FAR		$50,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6ADBF
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A079:
		LDA		#$1F
		LDX		byte_51
		STA		byte_558,X
		JMP		sub_69BE5

; =============== S U B	R O U T	I N E =======================================
sub_6A083:
		JSR		_sram_b0_s33
		LDA		word_4
		PHA
		JSR		_sram_b0_s31
		PLA
		CMP		word_4
		BEQ		sub_6A079
		LDY		#0
loc_6A093:
		STY		word_4
		TYA
		PHA
		ASL
		TAX
		LDA		byte_73C,X
		BPL		loc_6A0AC
		LDA		byte_73D,X
		BMI		loc_6A0AC
		LDX		byte_51
		TYA
		STA		byte_54C,X
		JSR		sub_69C81
loc_6A0AC:
		PLA
		TAY
		INY
		CPY		#4
		BNE		loc_6A093
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A0B4:
		LDA		#$F
		JSR		_b4_s23
		JSR		_b4_s13
		LDX		byte_51
		STA		byte_54C,X
		LDA		#$1F
		STA		byte_558,X
		JMP		sub_69BA0

; =============== S U B	R O U T	I N E =======================================
sub_6A0C9:
		LDA		off_6A0E5
		STA		word_40
		LDA		off_6A0E5+1
		STA		word_40+1
		LDA		#0
		JSR		sub_6A3B1
		LDA		off_6A0E7
		STA		word_3E
		LDA		off_6A0E7+1
		STA		word_3E+1
		JMP		sub_694C1
off_6A0E5:
		.WORD	sub_6A0E9
off_6A0E7:
		.WORD	sub_6A0EF

; =============== S U B	R O U T	I N E =======================================
sub_6A0E9:
		JSR		sub_69E98
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A0EF:
		JSR		loc_6918F
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6A0F5:
		LDA		off_6A104
		STA		word_40
		LDA		off_6A104+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6A104:
		.WORD	sub_6A106

; =============== S U B	R O U T	I N E =======================================
sub_6A106:
		JSR		sub_6A10C
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A10C:
		FAR		$2C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		LDA		#$40
		JSR		sub_6B307
		JSR		sub_6ADB6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A121:
		LDA		byte_568
		AND		#$10
		BNE		sub_6A134
		FAR		$58,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		byte_568
		ORA		#$10
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A134:
		FAR		$59,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$20
		JMP		sub_6B2F7

; =============== S U B	R O U T	I N E =======================================
sub_6A13C:
		LDA		off_69CE5
		STA		word_40
		LDA		off_69CE5+1
		STA		word_40+1
		LDA		#0
		JSR		sub_6A3B1
		LDA		off_690A1
		STA		word_3E
		LDA		off_690A1+1
		STA		word_3E+1
		JMP		sub_694C1

; =============== S U B	R O U T	I N E =======================================
sub_6A158:
		FAR		$5A,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B2B3
		ORA		#$C
		STA		word_4
		LDA		byte_567
		AND		#$F0
		ORA		word_4
		STA		byte_567
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A16D:
		FAR		$8B,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#0
		STA		byte_42
loc_6A174:
		LDX		byte_42
		STX		byte_CF
		JSR		sub_6A18E
		BMI		loc_6A182
		STX		byte_D0
		JSR		_sram_b0_s3B
loc_6A182:
		INC		byte_42
		LDA		byte_42
		CMP		#4
		BNE		loc_6A174
		JSR		_b4_s6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A18E:
		LDA		#0
		STA		byte_55
		STA		byte_56
		STA		byte_57
		DEC		byte_57
loc_6A198:
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		BPL		loc_6A1A9
		LDA		byte_56
		CMP		byte_71D,Y
		BCC		loc_6A1B1
		BEQ		loc_6A1C0
loc_6A1A9:
		INX
		CPX		#4
		BCC		loc_6A198
		LDX		byte_57
		RTS
loc_6A1B1:
		LDA		byte_71C,Y
		STA		byte_55
		LDA		byte_71D,Y
		STA		byte_56
		STX		byte_57
		JMP		loc_6A1A9
loc_6A1C0:
		LDA		byte_55
		CMP		byte_71C,Y
		BCS		loc_6A1A9
		BCC		loc_6A1B1

; =============== S U B	R O U T	I N E =======================================
sub_6A1C9:
		LDA		byte_568
		ORA		#$80
		STA		byte_568
		LDA		off_6A1E0
		STA		word_40
		LDA		off_6A1E0+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6A1E0:
		.WORD	sub_6A1E2

; =============== S U B	R O U T	I N E =======================================
sub_6A1E2:
		JSR		sub_6A1E8
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A1E8:
		FAR		$5D,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		sub_6ADC8

; =============== S U B	R O U T	I N E =======================================
sub_6A1EE:
		FAR		$5B,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		byte_566
		AND		#$C3
		ORA		#8
		STA		byte_566
		PLA
		PLA
		PLA
		PLA
		JMP		loc_68080

; =============== S U B	R O U T	I N E =======================================
sub_6A202:
		LDA		off_6A211
		STA		word_40
		LDA		off_6A211+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6A211:
		.WORD	sub_6A213

; =============== S U B	R O U T	I N E =======================================
sub_6A213:
		LDA		#$FF
		JSR		loc_6A693
		LDA		byte_65
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		JSR		_sram_b0_s8
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A226:
		LDA		off_6A233
		STA		word_3E
		LDA		off_6A233+1
		STA		word_3E+1
		JMP		sub_694C1
off_6A233:
		.WORD	sub_6A235

; =============== S U B	R O U T	I N E =======================================
sub_6A235:
		JSR		sub_6A30D
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6A23B:
		FAR		$8C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		_b4_s5_do_message_speed_delay
off_6A241:
		.WORD	sub_6A044
		.WORD	sub_6A079
		.WORD	sub_6A083
		.WORD	sub_6A0B4
		.WORD	sub_6A0C9
		.WORD	sub_6A0F5
		.WORD	sub_6A0F5
		.WORD	sub_6A121
		.WORD	sub_6A134
		.WORD	sub_6A13C
		.WORD	sub_6A158
		.WORD	sub_6A16D
		.WORD	sub_6A1C9
		.WORD	sub_6A1EE
		.WORD	sub_6A202
		.WORD	sub_6A226
		.WORD	sub_6A23B

; =============== S U B	R O U T	I N E =======================================
sub_6A263:
		JSR		sub_6B2A3
		BMI		loc_6A2C5
		STA		byte_D3
		TAY
		LDX		byte_CE
		LDA		byte_6A9B,X
		AND		#3
		STA		word_4
		CPY		word_4
		BEQ		loc_6A2C8
		CPY		byte_CE
		BNE		loc_6A280
		LDA		#$87
		BNE		loc_6A282
loc_6A280:
		LDA		#$43
loc_6A282:
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		byte_6A9B,X
		AND		#$FC
		STA		word_4
		TYA
		ORA		word_4
		ORA		#$10
		STA		byte_6A9B,X
		LDA		byte_708,Y
		STA		byte_6A9F,X
		LDA		#5
		STA		byte_6A4B,X
		STY		byte_CE
		TXA
		ASL
		PHA
		JSR		_sram_b0_s18
		PLA
		TAX
		LDA		word_4
		STA		byte_6AA3,X
		LDA		word_4+1
		STA		byte_6AA4,X
		TXA
		PHA
		JSR		_sram_b0_s16
		PLA
		TAX
		LDA		word_4
		STA		byte_6AAB,X
		LDA		word_4+1
		STA		byte_6AAC,X
		RTS
loc_6A2C5:
		FAR		$40,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_6A2C8:
		FAR		$86,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6A2CB:
		JSR		sub_6B2A3
		BMI		loc_6A2F7
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_6A2D9
		BNE		locret_6A2F6
loc_6A2D9:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6A2F6
		LDA		byte_73D,X
		AND		#$20
		BEQ		loc_6A333
		LDA		byte_73D,X
		AND		#$DF
		STA		byte_73D,X
		FAR		$44,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		_b4_s6
locret_6A2F6:
		RTS
loc_6A2F7:
		STA		byte_64
		JSR		sub_6B398
		JMP		loc_6A333

; =============== S U B	R O U T	I N E =======================================
sub_6A2FF:
		JSR		sub_6B2A3
		BMI		loc_6A333
		STA		byte_CE
		JSR		sub_6B347
		BCC		sub_6A30D
		BNE		locret_6A2F6

; =============== S U B	R O U T	I N E =======================================
sub_6A30D:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6A2F6
		LDA		byte_73D,X
		AND		#$40
		BEQ		loc_6A333
		LDA		byte_73D,X
		AND		#$BF
		STA		byte_73D,X
		LDX		byte_CE
		LDA		#$70
		STA		byte_54C,X
		LDA		#$42
loc_6A32D:
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		_b4_s6
loc_6A333:
		LDA		#$40
		BNE		loc_6A32D

; =============== S U B	R O U T	I N E =======================================
sub_6A337:
		STA		byte_65
		LDA		byte_6A6B
		BNE		loc_6A345
		LDA		byte_567
		AND		#$10
		BNE		loc_6A358
loc_6A345:
		JSR		sub_6B994
		BEQ		loc_6A358
		LDA		byte_59
		CMP		#$FF
		BEQ		loc_6A356
		JSR		sub_6ACBE
		CMP		byte_59
		RTS
loc_6A356:
		CLC
		RTS
loc_6A358:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A35A:
		LDA		byte_64
		ASL
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A35F:
		JSR		sub_6B2B3
		STA		byte_64
		LDY		byte_558,X
		LDA		byte_6BD82-$13,Y
		STA		byte_65
		JSR		sub_6B6E3
		LDA		byte_59
		CMP		byte_65
		BCS		loc_6A37D
		STA		byte_64
		FAR		$20,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		loc_6A38F
loc_6A37D:
		JSR		sub_6B70B
		JSR		sub_6B2B3
		ASL
		TAX
		LDA		byte_530,X
		AND		#$20

; =============== S U B	R O U T	I N E =======================================
sub_6A38A:
		BEQ		loc_6A392
		FAR		$1E,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_6A38F:
		PLA
		PLA
		RTS
loc_6A392:
		LDA		byte_568
		AND		#$10
		BEQ		locret_6A39E
		FAR		$81,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		PLA
locret_6A39E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A39F:
		JSR		sub_6B2B3
		ASL
		TAX
		LDA		byte_73C,X
		AND		#$20
		BPL		sub_6A38A

; =============== S U B	R O U T	I N E =======================================
sub_6A3AB:
		JSR		sub_6B2A3
		JSR		sub_6A8B3

; =============== S U B	R O U T	I N E =======================================
sub_6A3B1:
		STA		byte_47
		LDY		#0

; =============== S U B	R O U T	I N E =======================================
sub_6A3B5:
		TYA
		PHA
		LSR		byte_47
		BCS		sub_6A3CB
		STY		byte_64
		JSR		sub_68F16
		BPL		sub_6A3CB
		JSR		sub_6B5B7
		JSR		_b4_sB
		JMP		(word_40)

; =============== S U B	R O U T	I N E =======================================
sub_6A3CB:
		PLA
		TAY
		INY
		CPY		#8
		BNE		sub_6A3B5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A3D3:
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		JSR		sub_6B5B7
		LDA		#$40
		JSR		sub_6B307
		LDA		byte_568
		AND		#1
		BEQ		loc_6A3F1
		FAR		$88,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		sub_6ADBF
loc_6A3F1:
		FAR		$3F,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6ADB6
locret_6A3F7:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A3F8:
		JSR		sub_6B398
		BCC		loc_6A402
		BNE		loc_6A402
		JMP		loc_6A58C
loc_6A402:
		JSR		sub_68F16
		BPL		locret_6A3F7
		LDA		byte_49
		CMP		#9
		BCC		loc_6A419
		CMP		#$D
		BCC		loc_6A41D
		CMP		#$10
		BCC		loc_6A421
		LDA		#3
		BNE		loc_6A423
loc_6A419:
		LDA		#0
		BEQ		loc_6A423
loc_6A41D:
		LDA		#1
		BNE		loc_6A423
loc_6A421:
		LDA		#2
loc_6A423:
		JSR		sub_6A337
		BCS		loc_6A42E
		JSR		sub_6B5B7
		JMP		sub_6B3D8
loc_6A42E:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		BPL		locret_6A3F7
		JSR		sub_68F16
		BPL		locret_6A3F7
		JSR		sub_6B5B7
		LDA		byte_575
		BPL		loc_6A467
		JSR		sub_6ACBE
		CMP		#$20
		BCS		loc_6A45F
		LDA		byte_6A6B
		BNE		loc_6A45F
		FAR		$99,$2F		; _sys12
		FAR		$7D,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		FAR		$0E,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6ADB6
		JMP		_b4_s5_do_message_speed_delay
loc_6A45F:
		LDA		#1
		STA		word_4
		LDA		#0
		STA		word_4+1
loc_6A467:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		AND		#$40
		BEQ		loc_6A478
		LSR		word_4+1
		ROR		word_4
		INC		word_4
loc_6A478:
		LDA		word_4
		STA		byte_65
		STA		byte_63F
		LDA		word_4+1
		STA		byte_66
		STA		byte_640
		LDA		#0
		STA		byte_641
		LDA		word_4
		ORA		word_4+1
		BEQ		loc_6A4C9
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		sub_6B697
		FAR		$87,$2F		; _sys12
		LDA		#$C
		JSR		sub_6A96F
		JSR		sub_6AA3C
		JSR		_b4_s21_message_half_delay_or_wait_for_keypress
		JSR		sub_6ADD1
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		LDA		byte_575
		AND		#4
		BEQ		locret_6A4C8
		LSR		word_4+1
		ROR		word_4
		LSR		word_4+1
		ROR		word_4
		INC		word_4
		JSR		_b4_sB
		JMP		loc_6A58C
locret_6A4C8:
		RTS
loc_6A4C9:
		FAR		$8C,$2F		; _sys12
		LDY		#$22
		JSR		sub_6B2B3
		BPL		loc_6A4D5
		LDY		#$7A
loc_6A4D5:
		TYA
		JMP		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
sub_6A4D9:
		LDA		word_4
		ORA		word_4+1
		BNE		loc_6A4E1
		INC		word_4
loc_6A4E1:
		JSR		sub_6A5B8

; =============== S U B	R O U T	I N E =======================================
sub_6A4E4:
		JSR		_sram_b0_s2
		ORA		word_4
		BEQ		loc_6A4EE
		JSR		_b4_s1A
loc_6A4EE:
		JSR		_b4_s6
		JSR		_sram_b0_s2
		LDA		word_4
		ORA		word_4+1
		BEQ		sub_6A544
		LDA		byte_575
		AND		#1
		BNE		loc_6A529
		LDA		byte_575
		AND		#$20
		BEQ		loc_6A542
		JSR		sub_686F4
		PHA
		LDA		byte_CE
		JSR		_b4_s10
		PLA
		ORA		word_6+1
		JSR		_b4_s13
		PHA
		JSR		sub_6A56E
		LDA		#0
		STA		byte_575
		PLA
		STA		byte_CE
		JSR		_b4_sB
		JMP		loc_6A58C
loc_6A529:
		JSR		sub_6B2B3
		STA		byte_64
		JSR		sub_6A56E
		LSR		word_4+1
		ROR		word_4
		INC		word_4
		LDA		#0
		STA		byte_575
		JSR		_b4_sB
		JMP		loc_6A42E
loc_6A542:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A544:
		FAR		$27,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		byte_CE
		ASL
		TAX
		LDA		#$1F
		AND		byte_73D,X
		STA		byte_73D,X
		JSR		_b4_s1A
		JSR		_b4_s6
		DEC		byte_4C
		JSR		sub_6A569
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A560:
		FAR		$8D,$2F		; _sys12
		JSR		sub_6A569
		JMP		loc_6A4C9

; =============== S U B	R O U T	I N E =======================================
sub_6A569:
		LDA		#$20
		JMP		sub_6B2BB

; =============== S U B	R O U T	I N E =======================================
sub_6A56E:
		LDA		byte_63F
		STA		word_4
		LDA		byte_640
		STA		word_4+1
locret_6A578:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A579:
		JSR		sub_6B170
		JMP		loc_6A582

; =============== S U B	R O U T	I N E =======================================
sub_6A57F:
		JSR		sub_6B1E4
loc_6A582:
		JSR		sub_6B347
		BCC		loc_6A58C
		BEQ		loc_6A58C
		JMP		loc_6A402
loc_6A58C:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6A578
		LDA		#$20
		JSR		sub_6B2C4
		LDX		byte_CE
		LDA		byte_6A9B,X
		AND		#$20
		BEQ		loc_6A5A6
		LSR		word_4+1
		ROR		word_4
loc_6A5A6:
		LDA		word_4
		ORA		word_4+1
		BEQ		sub_6A560
		JSR		sub_6A5B8
		FAR		$65,$07		; _b2_s6_screen_damage_shake
		JSR		_b4_s21_message_half_delay_or_wait_for_keypress
		JMP		sub_6A4E4

; =============== S U B	R O U T	I N E =======================================
sub_6A5B8:
		LDA		word_4
		STA		byte_CF
		STA		byte_63F
		LDA		word_4+1
		STA		byte_D0
		STA		byte_640
		LDA		#0
		STA		byte_641
		JSR		_sram_b0_s5
		FAR		$8A,$2F		; _sys12
		LDA		#$13
		JMP		sub_6A96F

; =============== S U B	R O U T	I N E =======================================
sub_6A5D6:
		JSR		sub_6B398
		BCC		loc_6A5E0
		BNE		loc_6A5E0
		JMP		loc_6A604
loc_6A5E0:
		JSR		sub_68F16
		BPL		locret_6A5F6
		LDA		word_4
		STA		byte_65
		LDA		word_4+1
		STA		byte_66
		JSR		_b4_s19
		JSR		sub_6B5B7
		FAR		$14,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
locret_6A5F6:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A5F7:
		JSR		sub_6B3D2
		JSR		sub_6B347
		BCC		loc_6A604
		BEQ		loc_6A604
		JMP		loc_6A5E0
loc_6A604:
		LDY		byte_CE
		JSR		sub_68F0C
		BPL		locret_6A5F6
		LDA		word_4
		STA		byte_CF
		LDA		word_4+1
		STA		byte_D0
		JSR		_sram_b0_s4
		FAR		$14,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		_b4_s1A
		JMP		_b4_s6

; =============== S U B	R O U T	I N E =======================================
sub_6A61F:
		JSR		sub_6B2A3
		STA		byte_CE
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		loc_6A66F
		JSR		sub_6B347
		BCC		loc_6A633
		BNE		loc_6A685
loc_6A633:
		LDA		#6
		JSR		_b4_sF
		ADC		#5
		STA		byte_CF
		JSR		sub_6B2CF
		STA		byte_D0
		JSR		_sram_b0_sB
		BCS		loc_6A650
		JSR		_sram_b0_s6
		LDA		word_4
		STA		byte_CF
		STA		byte_63F
loc_6A650:
		JSR		_sram_b0_s9
		JSR		_b4_s6
		JMP		loc_6A659
loc_6A659:
		LDY		#$75
		LDA		byte_568
		AND		#3
		BEQ		loc_6A66B
		LDY		#$39
		JSR		sub_6B2B3
		BMI		loc_6A66B
		LDY		#$84
loc_6A66B:
		TYA
		JMP		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_6A66F:
		LDA		#0
		STA		byte_CF
		STA		byte_D0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A676:
		JSR		sub_6A6C7
		JSR		sub_68F16
		BPL		loc_6A6C0
		JSR		sub_6B398
		BCC		loc_6A685
		BEQ		loc_6A633
loc_6A685:
		LDA		#$A
		JSR		sub_6A337
		BCC		loc_6A6BD
loc_6A68C:
		LDA		#6
		JSR		_b4_sF
		ADC		#5
loc_6A693:
		STA		byte_65
		JSR		sub_6B6E3
		LDA		byte_59
		STA		byte_63F
		LDA		#0
		STA		byte_640
		STA		byte_641
		JSR		sub_6B70B
		BEQ		loc_6A6B2
		LDA		byte_65
		STA		byte_63F
		JMP		loc_6A6B5
loc_6A6B2:
		JSR		sub_6B725
loc_6A6B5:
		LDA		byte_63F
		STA		byte_65
		JMP		loc_6A659
loc_6A6BD:
		FAR		$12,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_6A6C0:
		LDA		#0
		STA		byte_65
		STA		byte_66
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A6C7:
		LDA		#0
		STA		byte_66
		STA		byte_640
		STA		byte_641
		JSR		sub_6B2A3
		STA		byte_64
		JMP		sub_6B5B7

; =============== S U B	R O U T	I N E =======================================
sub_6A6D9:
		JSR		sub_6A6C7
		JMP		loc_6A68C

; =============== S U B	R O U T	I N E =======================================
sub_6A6DF:
		JSR		sub_6B347
		BCC		loc_6A6E9
		BEQ		loc_6A6E9
		JMP		loc_6A755
loc_6A6E9:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6A747
		JSR		_sram_b0_s18
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_47
		BEQ		loc_6A708
		LDA		byte_6AA4,X
		LSR
		STA		word_4+1
		LDA		byte_6AA3,X
		ROR
		STA		word_4
loc_6A708:
		LDA		#$BE
		JSR		sub_6A84F
		BCS		sub_6A748
		JSR		sub_6A823
		JSR		sub_6A71B
		JSR		sub_6A82E
		FAR		$16,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6A71B:
		SEC
		LDA		word_6
		SBC		word_4
		STA		byte_8
		LDA		word_6+1
		SBC		word_4+1
		STA		byte_9
		BCS		loc_6A738
		LDA		#0
		STA		byte_8
		STA		byte_9
		LDA		word_6
		STA		word_4
		LDA		word_6+1
		STA		word_4+1
loc_6A738:
		LDA		word_4
		STA		byte_63F
		LDA		word_4+1
		STA		byte_640
		LDA		#0
		STA		byte_641
locret_6A747:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A748:
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_6A74B:
		JSR		sub_6B398
		BCC		loc_6A755
		BNE		loc_6A755
		JMP		loc_6A6E9
loc_6A755:
		JSR		sub_6B5B7
		JSR		sub_68F16
		BPL		locret_6A747
		JSR		sub_6B786
		LDA		byte_47
		BEQ		loc_6A76B
		JSR		sub_6B777
		LSR		byte_5A
		ROR		byte_59
loc_6A76B:
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		LDA		#8
		JSR		sub_6A337
		BCC		sub_6A748
		LDA		byte_64
		ASL
		TAX
		JSR		sub_6A839
		JSR		sub_6A71B
		JSR		sub_6A844
		FAR		$15,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6A78A:
		JSR		sub_6A74B
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A790:
		JSR		sub_6B347
		BCC		loc_6A797
		BNE		loc_6A7C3
loc_6A797:
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6A7BB
		JSR		_sram_b0_s18
		LDA		byte_47
		BEQ		loc_6A7AA
		LSR		word_4+1
		ROR		word_4
loc_6A7AA:
		LDA		byte_CE
		ASL
		TAX
		CLC
		JSR		sub_6A823
		JSR		sub_6A7E9
		JSR		sub_6A82E
		FAR		$3B,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
locret_6A7BB:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A7BC:
		JSR		sub_6B398
		BCC		loc_6A7C3
		BEQ		loc_6A797
loc_6A7C3:
		JSR		sub_6B5B7
		JSR		sub_6B786
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		LDA		byte_47
		BEQ		loc_6A7D9
		LSR		word_4+1
		ROR		word_4
loc_6A7D9:
		LDA		byte_64
		ASL
		TAX
		JSR		sub_6A839
		JSR		sub_6A7E9
		JSR		sub_6A844
		FAR		$3B,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6A7E9:
		CLC
		LDA		word_6
		ADC		word_4
		STA		byte_8
		LDA		word_6+1
		ADC		word_4+1
		STA		byte_9
		CMP		#3
		BCC		loc_6A813
		BNE		loc_6A802
		LDA		byte_8
		CMP		#$E7
		BCC		loc_6A813
loc_6A802:
		SEC
		LDA		#$E7
		STA		byte_8
		SBC		word_6
		STA		word_4
		LDA		#3
		STA		byte_9
		SBC		word_6+1
		STA		word_4+1
loc_6A813:
		LDA		word_4
		STA		byte_63F
		LDA		word_4+1
		STA		byte_640
		LDA		#0
		STA		byte_641
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A823:
		LDA		byte_6AA3,X
		STA		word_6
		LDA		byte_6AA4,X
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A82E:
		LDA		byte_8
		STA		byte_6AA3,X
		LDA		byte_9
		STA		byte_6AA4,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A839:
		LDA		byte_520,X
		STA		word_6
		LDA		byte_521,X
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A844:
		LDA		byte_8
		STA		byte_520,X
		LDA		byte_9
		STA		byte_521,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A84F:
		STA		byte_10
		TXA
		PHA
		TYA
		PHA
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		LDA		byte_10
		JSR		sub_6A86B
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A86B:
		CMP		#$FF
		BEQ		loc_6A8B1
		PHA
		JSR		_sram_b0_s15
		LDA		word_4
		PHA
		LDA		#$80
		STA		word_4
		LDA		#1
		STA		word_4+1
		LDX		#word_4
		PLA
		JSR		_add8_to_neg16
		LDA		#2
		JSR		_div16_to_8
		PLA
		JSR		_mul16_to_8
		LDA		#$80
		JSR		_div16_to_8
		LDA		word_4+1
		BNE		loc_6A8B1
		LDA		byte_567
		AND		#$10
		BNE		loc_6A8B1
		LDA		byte_567
		AND		#$40
		BNE		loc_6A8AB
		LDA		byte_566
		AND		#$10
		BNE		loc_6A8B1
loc_6A8AB:
		JSR		sub_6ACBE
		CMP		word_4
		RTS
loc_6A8B1:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A8B3:
		STA		byte_42
		LDA		#0
loc_6A8B7:
		STA		byte_10
		TXA
		PHA
		TYA
		PHA
		LDA		byte_64
		PHA
		LDA		#1
		STA		byte_43
		LDX		#0
		STX		byte_44
loc_6A8C8:
		STX		byte_64
		TXA
		ASL
		TAX
		LDA		byte_10
		BNE		loc_6A8D9
		LDA		byte_530,X
		AND		byte_531,X
		BPL		loc_6A8E7
loc_6A8D9:
		LDA		byte_530,X
		BPL		loc_6A8E7
		JSR		sub_6B91D
		LDA		byte_59
		CMP		byte_42
		BEQ		loc_6A8ED
loc_6A8E7:
		LDA		byte_43
		ORA		byte_44
		STA		byte_44
loc_6A8ED:
		LDX		byte_64
		ASL		byte_43
		INX
		CPX		#8
		BNE		loc_6A8C8
		PLA
		STA		byte_64
		PLA
		TAY
		PLA
		TAX
		LDA		byte_44
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A900:
		STA		byte_42
		LDA		#$FF
		BNE		loc_6A8B7

; =============== S U B	R O U T	I N E =======================================
_b4_s6:
		PHA
		TXA
		PHA
		TYA
		PHA
		LDA		byte_6A63
		BNE		loc_6A921
		LDA		byte_CE
		PHA
		JSR		_sram_b0_s31
		LDA		word_4
		CLC
		ADC		#3
		JSR		_b4_s7_window_display_safe
		PLA
		STA		byte_CE
loc_6A921:
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A927:
		JSR		sub_6AA51
		JMP		_b4_s6

; =============== S U B	R O U T	I N E =======================================
_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress:
		STA		_tmp12+1
		TXA
		PHA
		TYA
		PHA
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		LDA		word_6
		PHA
		LDA		byte_64
		PHA
		LDA		byte_CE
		PHA
		LDX		#0
		LDA		_tmp12+1
		FARX	_bE_s6_msg_mFF_0
		JSR		__message_delay_or_wait_for_keypress
		PLA
		STA		byte_CE
		PLA
		STA		byte_64
		PLA
		STA		word_6
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break:
		TYA
		LDY		_irq_y_saved
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress:
		TYA
		LDY		_irq_y_saved
		JMP		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
sub_6A96F:
		STA		_tmp12+1
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		LDA		word_6
		PHA
		LDA		byte_64
		PHA
		LDX		#0
		LDA		_tmp12+1
		FARX	_bE_s6_msg_mFF_0
		PLA
		STA		byte_64
		PLA
		STA		word_6
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s9:
		LDX		#0
		FARX	_bE_s4_msg_m00_1
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_sB:
		TXA
		PHA
		TYA
		PHA
		FARX	_bE_s3
		LDX		#4
		JSR		_vblank_count
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_sA:
		PHA
		TXA
		PHA
		TYA
		PHA
		FARX	_bE_s2
		FARX	_bE_s5
		JSR		_delay_n
		JSR		_delay_n
		JSR		_delay_n
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s7_window_display_safe:
		STA		word_4
		TXA
		PHA
		TYA
		PHA
		LDA		word_4
		FARX	_bE_s0
		STA		word_4
		PLA
		TAY
		PLA
		TAX
		LDA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s21_message_half_delay_or_wait_for_keypress:
		LDA		_cur_message_speed
		CMP		#7
		BCS		_message_speed_delay_until_keypress
		JMP		_b4_s16_do_half_message_speed_delay

; =============== S U B	R O U T	I N E =======================================
__message_delay_or_wait_for_keypress:
		LDA		_cur_message_speed
		CMP		#7
		BCS		_message_speed_delay_until_keypress
		JMP		_b4_s5_do_message_speed_delay

; =============== S U B	R O U T	I N E =======================================
_message_speed_delay_until_keypress:
		LDA		#$74
		JSR		sub_6A9FF
		JSR		_test_for_keypress
		BNE		locret_6A9FE
		LDA		#0
		JSR		sub_6A9FF
		JSR		_test_for_keypress
		BEQ		_message_speed_delay_until_keypress
locret_6A9FE:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A9FF:
		PHA
		LDA		#$1A
		STA		word_4
		STA		word_4+1
		PLA
		JSR		sub_1742C7
		JMP		sub_1742BA

; =============== S U B	R O U T	I N E =======================================
_test_for_keypress:
		LDX		#$C
loc_6AA0F:
		TXA
		PHA
		JSR		_vblank
		JSR		_calc_pads
		LDA		_prev_pads
		BNE		loc_6AA21
		JSR		_pads_copy_to_tmp
		BNE		loc_6AA2A
loc_6AA21:
		JSR		_pads_copy_to_tmp
		PLA
		TAX
		DEX
		BNE		loc_6AA0F
		RTS
loc_6AA2A:
		PLA
		LDA		#$FF
		RTS

; =============== S U B	R O U T	I N E =======================================
_pads_copy_to_tmp:
		LDA		_pads
		STA		_prev_pads
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AA34:
		LDA		#$62
		BNE		sub_6AA3E

; =============== S U B	R O U T	I N E =======================================
sub_6AA38:
		LDA		#$63
		BNE		sub_6AA3E

; =============== S U B	R O U T	I N E =======================================
sub_6AA3C:
		LDA		#$64

; =============== S U B	R O U T	I N E =======================================
sub_6AA3E:
		STA		byte_42
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6B595
		LDY		byte_42
		JSR		_sys00_safe
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AA51:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6AAA5
		LDX		#4
loc_6AA5B:
		TXA
		ASL
		ASL
		ASL
		ASL
		ORA		#2
		STA		byte_470
		LDA		#$1C
		STA		byte_471
		TXA
		PHA
		JSR		sub_17474C
		PLA
		TAX
		DEX
		BNE		loc_6AA5B
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_sC:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6AAA5
		LDX		#$D
loc_6AA84:
		TXA
		ASL
		ASL
		ASL
		ASL
		ORA		#2
		STA		byte_470
		LDA		#$1C
		STA		byte_471
		TXA
		PHA
		JSR		sub_17474C
		PLA
		TAX
		DEX
		CPX		#8
		BNE		loc_6AA84
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AAA5:
		LDA		#0
		TAX
loc_6AAA8:
		STA		byte_400,X
		INX
		CPX		#$40
		BNE		loc_6AAA8
		TAX
loc_6AAB1:
		STA		byte_460,X
		INX
		CPX		#$10
		BNE		loc_6AAB1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AABA:
		LDX		#0
		LDA		#$FF
loc_6AABE:
		STA		byte_677,X
		INX
		CPX		#8
		BNE		loc_6AABE
		LDX		byte_51
		LDA		byte_54C,X
		BMI		loc_6AAD0
		JMP		loc_6ABAE
loc_6AAD0:
		AND		#3
		TAX
		STA		byte_43
		LDA		byte_6A77,X
		BPL		loc_6AB15
		TXA
		ASL
		ASL
		ASL
		TAY
		LDA		#8
		STA		byte_47
loc_6AAE3:
		LDA		byte_6A7B,Y
		BPL		loc_6AB02
		AND		#7
		ASL
		TAX
		LDA		byte_531,X
		AND		byte_530,X
		BPL		loc_6AB02
		LDA		byte_530,X
		AND		#$C
		LSR
		LSR
		CMP		byte_43
		BNE		loc_6AB02
		JSR		sub_6AC36
loc_6AB02:
		INY
		DEC		byte_47
		BNE		loc_6AAE3
		LDX		#0
loc_6AB09:
		LDA		byte_677,X
		CMP		#$FF
		BNE		loc_6AB1A
		INX
		CPX		#8
		BNE		loc_6AB09
loc_6AB15:
		LDA		#$FF
		STA		word_6
		RTS
loc_6AB1A:
		LDA		#0
		STA		word_4
		STA		word_4+1
		LDX		#0
loc_6AB22:
		LDA		byte_677,X
		CMP		#$FF
		BEQ		loc_6AB33
		CMP		#$FE
		BNE		loc_6AB31
		INC		word_4
		BNE		loc_6AB33
loc_6AB31:
		INC		word_4+1
loc_6AB33:
		INX
		CPX		#8
		BNE		loc_6AB22
		LDA		word_4
		BNE		loc_6AB3F
		JMP		loc_6AB94
loc_6AB3F:
		LDX		#0
loc_6AB41:
		LDA		byte_677,X
		CMP		#$FE
		BEQ		loc_6AB4D
		LDA		#$FF
		STA		byte_677,X
loc_6AB4D:
		INX
		CPX		#8
		BNE		loc_6AB41
		LDX		#0
		STX		word_3C
		STX		word_3C+1
loc_6AB58:
		LDA		byte_677,X
		CMP		#$FE
		BNE		loc_6AB80
		TXA
		PHA
		STA		byte_64
		JSR		sub_6B645
		PLA
		TAX
		LDA		byte_5A
		CMP		word_3C+1
		BCC		loc_6AB80
		BNE		loc_6AB76
		LDA		byte_59
		CMP		word_3C
		BCC		loc_6AB80
loc_6AB76:
		LDA		byte_59
		STA		word_3C
		LDA		byte_5A
		STA		word_3C+1
		STX		word_6
loc_6AB80:
		INX
		CPX		#8
		BNE		loc_6AB58
loc_6AB85:
		LDA		word_6
		ASL
		TAX
		LDA		byte_667,X
		STA		word_4
		LDA		byte_668,X
		STA		word_4+1
		RTS
loc_6AB94:
		LDX		#0
		STX		byte_42
loc_6AB98:
		LDA		byte_677,X
		CMP		#$FF
		BEQ		loc_6ABA7
		CMP		byte_42
		BCC		loc_6ABA7
		STA		byte_42
		STX		word_6
loc_6ABA7:
		INX
		CPX		#8
		BNE		loc_6AB98
		BEQ		loc_6AB85
loc_6ABAE:
		LDX		byte_51
		LDA		byte_54C,X
		AND		#3
		STA		byte_CE
		JSR		_sram_b0_sE
		LDA		word_4
		AND		word_4+1
		BMI		loc_6ABC3
		JMP		loc_6AB15
loc_6ABC3:
		LDA		byte_CE
		ASL
		LDA		byte_6AA3,X
		STA		byte_59
		LDA		byte_6AA4,X
		STA		byte_5A
		LDA		byte_CE
		PHA
		JSR		sub_6ACD9
		PLA
		STA		byte_CE
		LDA		word_4
		STA		byte_59
		LDA		word_4+1
		STA		byte_5A
		LDX		byte_CE
		LDA		byte_6A9B,X
		AND		#8
		BNE		loc_6AC05
		LDX		byte_CE
		LDA		byte_6A9B,X
		AND		#4
		BNE		loc_6AC0D
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		LDX		byte_51
		LDA		byte_54C,X
		AND		#3
		STA		word_6
		RTS
loc_6AC05:
		JSR		sub_6AC15
		ORA		#8
		STA		word_6
		RTS
loc_6AC0D:
		JSR		sub_6AC15
		ORA		#$10
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AC15:
		LDX		#3
loc_6AC17:
		LSR		byte_5A
		ROR		byte_59
		DEX
		BNE		loc_6AC17
		JSR		sub_6ACBE
		AND		#3
		CLC
		ADC		byte_59
		STA		word_4
		LDA		byte_5A
		ADC		#0
		STA		word_4+1
		LDX		byte_51
		LDA		byte_54C,X
		AND		#3
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AC36:
		LDA		byte_6A7B,Y
		AND		#7
		STA		byte_64
		TYA
		PHA
		JSR		sub_6ACD6
		PLA
		TAY
		LDA		byte_64
		ASL
		TAX
		LDA		word_4
		STA		byte_667,X
		LDA		word_4+1
		STA		byte_668,X
		JSR		sub_6B2B3
		LDA		#$FF
		SEC
		SBC		byte_70C,X
		JSR		_b4_sF
		LSR
		LSR
		LDX		#word_4
		JSR		_mul16_to_8
		LDA		byte_64
		ASL
		TAX
		CLC
		LDA		word_4+1
		ADC		byte_667,X
		STA		word_3C
		LDA		byte_668,X
		ADC		#0
		STA		word_3C+1
		SEC
		LDA		byte_500,X
		SBC		word_3C
		STA		word_3C
		LDA		byte_501,X
		SBC		word_3C+1
		STA		word_3C+1
		BCS		loc_6AC8F
		LDA		#$FE
		STA		word_3C
		BNE		loc_6AC97
loc_6AC8F:
		LSR		word_3C+1
		ROR		word_3C
		LSR		word_3C+1
		ROR		word_3C
loc_6AC97:
		LDA		byte_6A7B,Y
		AND		#7
		TAX
		LDA		word_3C
		STA		byte_677,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_sF:
		PHA
		JSR		sub_6ACBE
		STA		word_3C
		LDA		#0
		STA		word_3C+1
		LDX		#word_3C
		PLA
		JSR		_mul16_to_8
		LDA		word_3C+1
		STA		word_3C
		LDA		#0
		STA		word_3C+1
		LDA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6ACBE:
		TXA
		PHA
		TYA
		PHA
		LDA		byte_6A68
		AND		#$F
		TAX
		INX
loc_6ACC9:
		JSR		sub_1743B8
		DEX
		BNE		loc_6ACC9
		PLA
		TAY
		PLA
		TAX
		JMP		sub_1743B8

; =============== S U B	R O U T	I N E =======================================
sub_6ACD6:
		JSR		sub_6B777

; =============== S U B	R O U T	I N E =======================================
sub_6ACD9:
		LDX		byte_51
		LDA		byte_540,X
		AND		#3
		STA		byte_CE
		JSR		_sram_b0_s17
		LSR		byte_5A
		ROR		byte_59
		LDA		word_4
		SEC
		SBC		byte_59
		STA		word_4
		LDA		word_4+1
		SBC		byte_5A
		BCC		loc_6AD1F
		STA		word_4+1
		BNE		loc_6AD00
		LDA		word_4
		CMP		#2
		BCC		loc_6AD1F
loc_6AD00:
		JSR		sub_6BA64
		LDA		word_3C
		CMP		#$66
		BCS		loc_6AD0D
		LDA		#$66
		BNE		loc_6AD13
loc_6AD0D:
		CMP		#$99
		BCC		loc_6AD13
		LDA		#$99
loc_6AD13:
		LDX		#word_4
		LSR
		LSR
		JSR		_mul16_to_8
		LDA		#$40
		JMP		_div16_to_8
loc_6AD1F:
		JSR		sub_6ACBE
		AND		#1
		STA		word_4
		LDA		#0
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AD2B:
		LDX		byte_51
		LDA		byte_54C,X
		AND		#3
		PHA
		JSR		sub_6B763
		PLA
		ASL
		TAX
		LDA		byte_6AA3,X
		STA		word_4
		LDA		byte_6AA4,X
loc_6AD41:
		STA		word_4+1
		LSR		word_4+1
		ROR		word_4
		SEC
		LDA		byte_59
		SBC		word_4
		STA		word_4
		LDA		byte_5A
		SBC		word_4+1
		BCS		loc_6AD58
		LDA		#0
		STA		word_4
loc_6AD58:
		STA		word_4+1
		BNE		loc_6AD00
		LSR		byte_5A
		ROR		byte_59
		LSR		byte_5A
		ROR		byte_59
		LSR		byte_5A
		ROR		byte_59
		LDA		word_4+1
		CMP		byte_5A
		BCC		loc_6AD79
		BNE		loc_6AD00
		LDA		byte_59
		CMP		word_4
		BCS		loc_6AD79
		JMP		loc_6AD00
loc_6AD79:
		LDA		byte_59
		BEQ		loc_6AD87
		CMP		#1
		BEQ		loc_6AD87
		JSR		_b4_sF
		STA		word_4
		RTS
loc_6AD87:
		JSR		sub_6ACBE
		AND		#1
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AD8F:
		JSR		sub_6B2A3
		PHA
		JSR		sub_6B763
		PLA
		ASL
		TAX
		LDA		byte_520,X
		STA		word_4
		LDA		byte_521,X
		JMP		loc_6AD41

; =============== S U B	R O U T	I N E =======================================
sub_6ADA4:
		LDA		#$B
		JSR		_b4_sF
		CLC
		ADC		#$36
		LDX		#word_4
		JSR		_mul16_to_8
		LDA		#$40
		JMP		_div16_to_8

; =============== S U B	R O U T	I N E =======================================
sub_6ADB6:
		JSR		sub_6AA38
		LDA		byte_64
		PHA
		JMP		sub_6ADE4

; =============== S U B	R O U T	I N E =======================================
sub_6ADBF:
		JSR		sub_6AA38
		LDA		byte_64
		PHA
		JMP		sub_6ADF9

; =============== S U B	R O U T	I N E =======================================
sub_6ADC8:
		JSR		sub_6AA38
		LDA		byte_64
		PHA
		JMP		sub_6ADEC

; =============== S U B	R O U T	I N E =======================================
sub_6ADD1:
		JSR		sub_6B645
		LDA		byte_59
		ORA		byte_5A
		BEQ		loc_6ADDB
		RTS
loc_6ADDB:
		JSR		sub_6AA38
		LDA		byte_64
		PHA
		FAR		$0D,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
sub_6ADE4:
		LDA		#$40
		JSR		sub_6B307
		JSR		sub_6B7F2

; =============== S U B	R O U T	I N E =======================================
sub_6ADEC:
		JSR		sub_6B81D
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A73,X
		STA		byte_62

; =============== S U B	R O U T	I N E =======================================
sub_6ADF9:
		LDA		byte_64
		ASL
		TAX
		LDA		#0
		STA		byte_531,X
		DEC		byte_4D
		BEQ		loc_6AE31
		LDA		byte_530,X
		AND		#$C
		LSR
		LSR
		STA		byte_59
		JSR		sub_6B927
		LDA		byte_5A
		STA		byte_64
		JSR		_b4_s2
		LDA		byte_5A
		BEQ		loc_6AE20
		SEC
		BCS		loc_6AE32
loc_6AE20:
		LDA		byte_64
		STA		byte_59
		JSR		_b4_s3
		LDX		byte_5A
		LDA		#0
		STA		byte_6A77,X
		SEC
		BCS		loc_6AE32
loc_6AE31:
		CLC
loc_6AE32:
		PLA
		STA		byte_64
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AE36:
		LDY		#0
loc_6AE38:
		TYA
		ASL
		TAX
		LDA		byte_73C,X
		AND		byte_73D,X
		BMI		loc_6AE4B
		LDA		byte_54C,Y
		ORA		#$70
		STA		byte_54C,Y
loc_6AE4B:
		INY
		CPY		#4
		BNE		loc_6AE38
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AE51:
		LDY		#0
loc_6AE53:
		TYA
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_531,X
		BMI		loc_6AE66
		LDA		byte_550,Y
		ORA		#$70
		STA		byte_550,Y
loc_6AE66:
		INY
		CPY		#8
		BNE		loc_6AE53
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AE6C:
		JSR		sub_6B2FE
		JSR		sub_6B2A3
		STA		byte_D4
		BPL		loc_6AE7D
		STA		byte_64
		JSR		_b4_s12
		STA		byte_D4
loc_6AE7D:
		LDX		byte_51
		LDA		byte_558,X
		STA		byte_D3
		STA		word_4
		CMP		#$70
		BEQ		loc_6AE97
		CMP		#$5B
		BEQ		loc_6AE92
		CMP		#$74
		BNE		loc_6AEA2
loc_6AE92:
		LDA		#$10
		JSR		sub_6B2F7
loc_6AE97:
		LDA		word_4
		CMP		#$70
		BNE		loc_6AEA2
		LDA		#$1C
		JSR		sub_6B0DB
loc_6AEA2:
		LDX		#0
		LDY		#0
loc_6AEA6:
		LDA		#$90
		JSR		_get_syscall0_data_byte_X
		AND		#$80
		BMI		loc_6AEBA
loc_6AEAF:
		INX
		CPX		#$7F
		BNE		loc_6AEA6
		FAR		$03,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		FAR		$40,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
loc_6AEBA:
		INY
		CPX		word_4
		BNE		loc_6AEAF
		DEY
		LDA		byte_6B23D,Y
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		CPY		#$B
		BCS		loc_6AED0
		LDA		byte_6B265,Y
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_6AED0:
		CPY		#4
		BNE		loc_6AED7
		JSR		_b4_sB
loc_6AED7:
		LDA		byte_6B270,Y
		STA		byte_49
		LDA		#$90
		JSR		_get_syscall0_data_byte_X
		AND		#4
		BEQ		loc_6AEEC
		TXA
		JSR		_b4_s20
		JSR		_sram_b0_s2A
loc_6AEEC:
		JMP		loc_697AA

; =============== S U B	R O U T	I N E =======================================
sub_6AEEF:
		LDA		off_6AEFC
		STA		word_3E
		LDA		off_6AEFC+1
		STA		word_3E+1
		JMP		sub_694C1
off_6AEFC:
		.WORD	sub_6AEFE

; =============== S U B	R O U T	I N E =======================================
sub_6AEFE:
		JSR		loc_69D3D
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6AF04:
		LDX		byte_51
		LDA		byte_558,X
		STA		byte_42
		JMP		sub_6B076

; =============== S U B	R O U T	I N E =======================================
sub_6AF0E:
		LDA		#$19
		JSR		_b4_sF
		ADC		#$A
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		JSR		_sram_b0_s8
		JSR		_b4_s6
		JSR		sub_1743B8
		CMP		#$19
		BCS		locret_6AF33
		FAR		$A6,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		#$4E
		JSR		_b4_s20
		JMP		_sram_b0_s2A
locret_6AF33:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AF34:
		LDA		off_6AF4F
		LDX		off_6AF4F+1
		JSR		sub_6BBD0
		JSR		sub_694C1
		LDA		off_6AF51
		STA		word_40
		LDA		off_6AF51+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6AF4F:
		.WORD	sub_6AF53
off_6AF51:
		.WORD	sub_6AF5C

; =============== S U B	R O U T	I N E =======================================
sub_6AF53:
		JSR		sub_6B3D2
		FAR		$9C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6AF5C:
		JSR		sub_6B5B7
		FAR		$9C,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6AF65:
		JSR		sub_6B2A3
		STA		byte_CE
		JMP		sub_68E69

; =============== S U B	R O U T	I N E =======================================
sub_6AF6D:
		JSR		sub_6B2B3
		TAX
		LDA		byte_704,X
		JSR		sub_6AFB3
		STA		byte_704,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AF7B:
		JSR		sub_6B2B3
		TAX
		LDA		byte_708,X
		JSR		sub_6AFB3
		STA		byte_708,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AF89:
		JSR		sub_6B2B3
		TAX
		LDA		byte_70C,X
		JSR		sub_6AFB3
		STA		byte_70C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AF97:
		JSR		sub_6B2B3
		TAX
		LDA		byte_710,X
		JSR		sub_6AFB3
		STA		byte_710,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AFA5:
		JSR		sub_6B2B3
		TAX
		LDA		byte_714,X
		JSR		sub_6AFB3
		STA		byte_714,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AFB3:
		PHA
		JSR		sub_1743B8
		AND		#1
		ADC		#1
		JSR		sub_6B2CF
		PLA
		CLC
		ADC		byte_63F
		BCC		loc_6AFC7
		LDA		#$FF
loc_6AFC7:
		PHA
		LDA		byte_49
		CLC
		ADC		#$65
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AFD2:
		JSR		sub_1743B8
		AND		#3
		CLC
		ADC		#2
		STA		word_4
		JSR		sub_6B2B3
		ASL
		TAX
		CLC
		LDA		byte_724,X
		ADC		word_4
		STA		byte_724,X
		BCC		loc_6AFEF
		INC		byte_725,X
loc_6AFEF:
		LDA		word_4
		JSR		sub_6B2CF
		FAR		$A8,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6AFF7:
		LDA		#$F
		JSR		_b4_sF
		ADC		#$23
		STA		word_4
		LDA		#0
		STA		word_4+1
		JMP		loc_69BA3

; =============== S U B	R O U T	I N E =======================================
nullsub_12:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B008:
		LDA		#$1B
		JSR		sub_6B0DB
		LDA		off_6B01C
		STA		word_40
		LDA		off_6B01C+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6B01C:
		.WORD	sub_6B01E

; =============== S U B	R O U T	I N E =======================================
sub_6B01E:
		JSR		sub_6B5B7
		FAR		$B0,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6B027:
		LDA		byte_6A6F
		CMP		#$85
		BNE		loc_6B048
		FAR		$B1,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		FAR		$78,$17		; _bA_s8
		JSR		_b4_sB
		FAR		$B2,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		_b4_s5_do_message_speed_delay
		JSR		_b4_s5_do_message_speed_delay
		LDA		#$86
		STA		_enemy_roster_index_list
		JMP		_b4_s26
loc_6B048:
		FAR		$40,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6B04B:
		JSR		sub_6B2A3
		BPL		loc_6B071
		JSR		sub_6AABA
		LDA		#$14
		JSR		_b4_sF
		ADC		#$E
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		word_6
		STA		byte_64
		JSR		sub_6B5B7
		LDA		#$D
		JSR		sub_6A337
		BCC		loc_6B073
		JMP		loc_6A42E
loc_6B071:
		STA		byte_D2
loc_6B073:
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_6B076:
		LDA		byte_42
		STA		byte_D3
		JSR		sub_6B2B3

; =============== S U B	R O U T	I N E =======================================
_b4_s1F:
		ASL
		ASL
		ASL
		TAX
		LDA		#8
		STA		word_4
loc_6B085:
		LDA		byte_77C,X
		CMP		#$FF
		BEQ		loc_6B092
		AND		#$7F
		CMP		byte_42
		BEQ		loc_6B098
loc_6B092:
		INX
		DEC		word_4
		BNE		loc_6B085
		RTS
loc_6B098:
		LDA		byte_77C,X
		ORA		#$80
		STA		byte_77C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s20:
		STA		word_4
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		#0
loc_6B0AB:
		LDA		byte_77C,X
		CMP		word_4
		BEQ		loc_6B0B6
		INX
		INY
		BNE		loc_6B0AB
loc_6B0B6:
		STY		byte_CF
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B0B9:
		STA		byte_CF
		FAR		$9C,$07		; _b0_s45
		LDA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B0C1:
		LDA		#0
		STA		byte_42
		FAR		$30,$17		; _b0_s63
		LDX		byte_51
		LDA		byte_558,X
		STA		byte_42
		JSR		sub_6B076
		FAR		$06,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		_b4_sA
		JMP		sub_695C6

; =============== S U B	R O U T	I N E =======================================
sub_6B0DB:
		FAR		$A0,$07		; _bB_s3_apu_load
		FAR		$F0,$07		; _bB_s7
		FAR		$10,$2F		; _sys12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B0E5:
		JSR		_sram_b0_s1E
		LDY		#7
loc_6B0EA:
		DEY
		BMI		loc_6B145
		LDA		word_4
		CMP		byte_6B156,Y
		BNE		loc_6B0EA
		LDA		byte_6B15D,Y
		STY		byte_CF
		DEY
		STY		byte_D0
		BPL		loc_6B109
		JSR		loc_6B142
		BCS		locret_6B108
		JSR		sub_1743B8
		CMP		#$C0
locret_6B108:
		RTS
loc_6B109:
		BNE		loc_6B118
		LDA		#3
		STA		byte_CF
		JSR		_sram_b0_s9
		JSR		_b4_s6
		JMP		loc_6B145
loc_6B118:
		CPY		#4
		BCC		loc_6B142
		JSR		sub_6B2A3
		BPL		loc_6B145
		CPY		#4
		BNE		loc_6B132
		STA		byte_64
		LDA		#$D
		JSR		sub_6A337
		CMP		#$4E
		BCS		loc_6B145
		BCC		loc_6B140
loc_6B132:
		TAX
		LDA		byte_6A73,X
		LDY		#6
loc_6B138:
		DEY
		BMI		loc_6B145
		CMP		byte_6B162,Y
		BNE		loc_6B138
loc_6B140:
		LDA		#$10
loc_6B142:
		JSR		sub_6B168
loc_6B145:
		JSR		_sram_b0_s1E
		LDA		word_4+1
		CMP		#$AD
		BNE		loc_6B154
		JSR		sub_1743B8
		CMP		#$AA
		RTS
loc_6B154:
		CLC
		RTS
byte_6B156:
		.BYTE	$93,$95,$88,$8F,$94,$97,$9E
byte_6B15D:
		.BYTE	  2,  0,$80, $A,  4
byte_6B162:
		.BYTE	$5B,$67,$7C,$3A,$71,$7E

; =============== S U B	R O U T	I N E =======================================
sub_6B168:
		ORA		byte_575
		STA		byte_575
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B170:
		LDX		byte_51
		LDY		byte_558,X
loc_6B175:
		LDA		word_4
		STA		byte_59
		LDA		word_4+1
		STA		byte_5A
		TYA
		PHA
		JSR		_sram_b0_s1E
		PLA
		TAY
		LDA		word_4+1
		CPY		#$13
		BCC		loc_6B18E
		CMP		#$AD
		BEQ		loc_6B1D2
loc_6B18E:
		CMP		#$AE
		BEQ		loc_6B1B2
		CMP		#$A8
		BEQ		loc_6B1B2
		CPY		#$13
		BCC		loc_6B1A4
		CMP		#$A6
		BEQ		loc_6B1B2
		CMP		#$AC
		BEQ		loc_6B1B2
		BNE		loc_6B1DB
loc_6B1A4:
		LDX		word_6
		CPX		#$BB
		BEQ		loc_6B1B2
		CPY		#$D
		BCS		loc_6B1DB
		CMP		#$B5
		BNE		loc_6B1DB
loc_6B1B2:
		CPY		#$13
		BCS		loc_6B1C1
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73C,X
		AND		#4
		BNE		loc_6B1DB
loc_6B1C1:
		LDX		#byte_59
		LDA		#2
		JSR		_mul16_to_8
		LDA		#3
		JSR		_div16_to_8
		INC		byte_59
		JMP		loc_6B1DB
loc_6B1D2:
		LDX		#byte_59
		LDA		#4
		JSR		_div16_to_8
		INC		byte_59
loc_6B1DB:
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B1E4:
		LDY		#$13
		BNE		loc_6B175

; =============== S U B	R O U T	I N E =======================================
sub_6B1E8:
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		_sram_b0_s1E
		LDA		word_4+1
		CMP		#$A7
		BEQ		loc_6B209
		CMP		#$B6
		BEQ		loc_6B211
		LDA		word_6
		CMP		#$BC
		BEQ		loc_6B235
loc_6B201:
		CLC
loc_6B202:
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		RTS
loc_6B209:
		JSR		sub_1743B8
		CMP		#$CC
		JMP		loc_6B202
loc_6B211:
		JSR		sub_6B2B3
		BPL		loc_6B201
		STA		byte_10
		LDA		byte_64
		PHA
		LDA		byte_10
		STA		byte_64
		LDA		#$D
		JSR		sub_6A337
		PLA
		STA		byte_64
		LDA		byte_59
		CMP		#$FF
		BEQ		loc_6B201
		LDA		#1
		JSR		sub_6B168
		JMP		loc_6B201
loc_6B235:
		LDA		#$20
		JSR		sub_6B168
		JMP		loc_6B201
byte_6B23D:
		.BYTE	$8E,$8E,$8E,$8E,$8E,$8E,$8E,$8E,$8E,$94,$8E,$9A,$9F,$9F,$9F,$9F
		.BYTE	$9F,$A5,$9B,$9A,$9E,  3,  3,  3,  3,  3,$A7,  3,  3,$9B,$AA,$AB
		.BYTE	$AC,  3,$AE,$AF,  3,$9B,$B3,$9A
byte_6B265:
		.BYTE	$8F,$90,$91,$97,$98,$99,$92,$93,$90,$95,$96
byte_6B270:
		.BYTE	  0,  5, $A,$24,$30,$27,  7,  4, $F,$2C, $D,$1B,$37,$37,$37,$37
		.BYTE	$37,$38,$39,$1E,$3A,$3B,$3C,$3D,$3E,$3F,$40,$41,$34,$45,$26,$21
		.BYTE	$42,$35,$22,$43,$44,$27,$18,$36

; =============== S U B	R O U T	I N E =======================================
_b4_s1A:
		FAR		$2F,$17		; _bD_s28
		LDX		#0
		JSR		sub_17435B
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_6B2A3:
		LDX		byte_51
		LDA		byte_54C,X

; =============== S U B	R O U T	I N E =======================================
sub_6B2A8:
		PHP
		AND		#$87
		BMI		loc_6B2AF
		AND		#3
loc_6B2AF:
		AND		#7
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2B3:
		LDX		byte_51
		LDA		byte_540,X
		JMP		sub_6B2A8

; =============== S U B	R O U T	I N E =======================================
sub_6B2BB:
		PHA
		ORA		byte_566
		STA		byte_566
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2C4:
		PHA
		EOR		#$FF
		AND		byte_566
		STA		byte_566
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2CF:
		STA		byte_63F
		LDA		#0
		STA		byte_640
		STA		byte_641
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2DB:
		PHA
		LDA		byte_566
		ORA		#$10
		STA		byte_566
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2E6:
		LDA		#1
		ORA		byte_568
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2EF:
		LDA		byte_568
		AND		#3
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2F5:
		LDA		#$80

; =============== S U B	R O U T	I N E =======================================
sub_6B2F7:
		ORA		byte_567
		STA		byte_567
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2FE:
		LDA		#$7F

; =============== S U B	R O U T	I N E =======================================
sub_6B300:
		AND		byte_567
		STA		byte_567
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B307:
		ORA		byte_568
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B30E:
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
sub_6B310:
		STA		word_4
		JSR		sub_6B2A3
		BMI		locret_6B32E
		STA		byte_D2
		LDA		byte_566
		AND		#$C0
		BEQ		locret_6B32E
		LDA		word_4
		BNE		sub_6B333

; =============== S U B	R O U T	I N E =======================================
sub_6B324:
		LDX		#$52
		JSR		_b4_s1D
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		PLA
locret_6B32E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B32F:
		LDA		#$80
		BNE		sub_6B310

; =============== S U B	R O U T	I N E =======================================
sub_6B333:
		JSR		_b4_s1B
		STY		byte_D2
		LDA		#$53
		BNE		sub_6B324

; =============== S U B	R O U T	I N E =======================================
_b4_s1B:
		LDY		#0
loc_6B33E:
		JSR		sub_68F0C
		BMI		locret_6B346
		INY
		BNE		loc_6B33E
locret_6B346:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B347:
		LDA		#$BF
		JSR		sub_6B300
		LDA		byte_567
		BPL		loc_6B3C5
		LDA		byte_CE
		STA		byte_42
		JSR		sub_6B2B3
		BMI		loc_6B35E
		CMP		byte_42
		BEQ		loc_6B3C5
loc_6B35E:
		JSR		sub_6B3D2
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$F
		BEQ		loc_6B3C5
		LDA		byte_73C,X
		AND		byte_73D,X
		BPL		loc_6B3C5
loc_6B372:
		LDA		#$40
		JSR		sub_6B2F7
		LDA		#$9A
		FAR		$A0,$07		; _bB_s3_apu_load
		FAR		$56,$F7		; _sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		_b4_sB
		JSR		sub_6B2B3
		BMI		loc_6B38F
		STA		byte_CE
		STA		byte_D2
		SEC
		LDA		#0
		RTS
loc_6B38F:
		STA		byte_64
		JSR		sub_6B5B7
		SEC
		LDA		#1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B398:
		LDA		#$BF
		JSR		sub_6B300
		LDA		byte_567
		BPL		loc_6B3C5
		JSR		sub_6B5B7
		LDA		byte_64
		STA		byte_42
		JSR		sub_6B2B3
		BPL		loc_6B3B2
		CMP		byte_42
		BEQ		loc_6B3C5
loc_6B3B2:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		AND		#$F
		BEQ		loc_6B3C5
		LDA		byte_530,X
		AND		byte_531,X
		BMI		loc_6B372
loc_6B3C5:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B3C7:
		JSR		sub_6B2B3
		PHA
		STA		byte_64
		JSR		sub_6B5B7
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B3D2:
		LDA		byte_CE
		STA		byte_D2
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B3D8:
		FAR		$12,$0F		; _sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

; =============== S U B	R O U T	I N E =======================================
sub_6B3DB:
		LDX		#3
loc_6B3DD:
		LDA		byte_6A77,X
		BPL		loc_6B3E7
		LDA		byte_6A73,X
		STA		word_4
loc_6B3E7:
		DEX
		BPL		loc_6B3DD
		INX
loc_6B3EB:
		LDA		byte_6A77,X
		BPL		loc_6B3F7
		LDA		byte_6A73,X
		CMP		word_4
		BNE		loc_6B401
loc_6B3F7:
		INX
		CPX		#4
		BNE		loc_6B3EB
		LDA		#$20
		JMP		sub_6B307
loc_6B401:
		LDA		#$DF
		AND		byte_568
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s1C:
		LDA		byte_568
		AND		#$20
		BNE		loc_6B412
		INX
loc_6B412:
		TXA
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s1D:
		TXA
		PHA
		JSR		_sram_b0_s31
		PLA
		TAX
		DEC		word_4
		BEQ		loc_6B420
		INX
loc_6B420:
		TXA
		RTS
byte_6B422:
		.BYTE	$20,$20,$20,$20,$20,$20,$20,$20
byte_6B42A:
		.BYTE	$12,$16,$1A,$1E,$22,$26,$2A,$2E
byte_6B432:
		.BYTE	  2,  4,  6,  8, $A, $C, $E,$C8
byte_6B43A:
		.BYTE	$FF,$FF,$FF,$FF
byte_6B43E:
		.BYTE	$91,$FF,$FF,$FF
byte_6B442:
		.BYTE	$71,$C6,$FF,$FF
byte_6B446:
		.BYTE	$70,$B3,$EA,$FF
byte_6B44A:
		.BYTE	$FF,$80,$55,$20
byte_6B44E:
		.BYTE	$FF,$C0,$80,$40
_b4_dD_spells_list:
		.BYTE	$C2,$C6,$CC,$C4,$C6,$CC,$45,$49,$52,$C3,$C6,$CC,$49,$C4,$C6,$C9
		.BYTE	$C8,$5E,$C7,$C7,$41,$C2,$C7,$C0,$C3,  3,$83,$85,$87,  0,$12,$3E
		.BYTE	$8A,$94,$C3,  3,$C3,$C4,  8,$C5,$8C,$18,  6,$C3,$C4,$83,  4,  4
		.BYTE	  8,  6,$86,$14,$82,$86,$D2,  4, $C,  0,  3,  8, $F,  2
byte_6B490:
		.BYTE	  0,  1,  2,  9
byte_6B494:
		.BYTE	  3,  4,  8, $A, $B, $D, $E, $F
byte_6B49C:
		.BYTE	$1A,$1B,$1C
byte_6B49F:
		.BYTE	$1E,$1F
word_6B4A1:
		.WORD	 $608,$1446,$28A0, $810, $C1E,$1858, $810,$1034
		.WORD	$2878, $A19,$102A,$1858,$143C,$1008,$1E19,$3C3C
		.WORD	$1446,$32AF
word_6B4C5:
		.WORD	 $507, $A34,$245C, $810, $80A, $C16,$143C, $A20
		.WORD	 $C37, $C06,$140E,$201E, $406, $A1E,$1450, $C09
		.WORD	$1428,$2864
_b4_d15:
		.WORD	 $A1E,$144B,  $FF, $A1E,$103E,$FFFF
byte_6B4F5:
		.BYTE	  0,  1,  2,  4,  5,  0,  1,  2,  4,  5

; =============== S U B	R O U T	I N E =======================================
_b4_s1:
		LDX		#0
		STX		byte_59
loc_6B503:
		LDA		byte_6A77,X
		BPL		loc_6B52C
		TXA
		PHA
		ASL
		ASL
		ASL
		TAX
		LDA		#8
		STA		byte_5A
loc_6B512:
		LDA		byte_6A7B,X
		AND		#7
		ASL
		TAY
		LDA		byte_530,Y
		AND		byte_531,Y
		BMI		loc_6B528
		INX
		DEC		byte_5A
		BNE		loc_6B512
		BEQ		loc_6B52A
loc_6B528:
		INC		byte_59
loc_6B52A:
		PLA
		TAX
loc_6B52C:
		INX
		CPX		#4
		BNE		loc_6B503
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s2:
		LDY		byte_64
		INY
		LDX		#0
loc_6B537:
		LDA		byte_6A77,X
		BMI		loc_6B542
		INX
		CPX		#4
		BCC		loc_6B537
		RTS
loc_6B542:
		INX
		DEY
		BNE		loc_6B537
		DEX
		STX		byte_42
		STX		byte_5A
		LDX		byte_42
		LDA		byte_6A6F,X
		STA		byte_59
		TXA
		ASL
		ASL
		ASL
		TAX
		LDY		#0
		LDA		#8
		STA		byte_42
loc_6B55D:
		LDA		byte_6A7B,X
		BPL		loc_6B585
		TXA
		PHA
		LDA		byte_6A7B,X
		AND		#7
		ASL
		TAX
		LDA		byte_530,X
		LSR
		LSR
		AND		#3
		CMP		byte_5A
		BEQ		loc_6B579
		CLC
		BCC		loc_6B580
loc_6B579:
		LDA		byte_531,X
		AND		byte_530,X
		ROL
loc_6B580:
		PLA
		TAX
		BCC		loc_6B585
		INY
loc_6B585:
		INX
		DEC		byte_42
		BNE		loc_6B55D
		STY		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B58D:
;		JSR		_b4_s2
;		LDA		byte_5A
;		STA		byte_59
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B595:
		JSR		sub_6B91D
		LDA		byte_59
		ASL
		ASL
		ASL
		TAX
		LDY		#0
loc_6B5A0:
		LDA		byte_6A7B,X
		BPL		loc_6B5AC
		AND		#7
		CMP		byte_64
		BEQ		loc_6B5B0
		INY
loc_6B5AC:
		INX
		JMP		loc_6B5A0
loc_6B5B0:
		STY		byte_B9
		LDA		byte_59
		STA		word_B7+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B5B7:
		JSR		_b4_s12
		STA		byte_D2
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s12:
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A6F,X
		STA		byte_5A
		LDY		#0
		LDX		#0
loc_6B5CB:
		LDA		byte_6A6F,X
		CMP		byte_5A
		BNE		loc_6B5F9
		STX		byte_5B
		TXA
		ASL
		ASL
		ASL
		TAX
		LDA		#8
		STA		byte_5C
loc_6B5DD:
		LDA		byte_6A7B,X
		BPL		loc_6B5F2
		LDA		byte_59
		CMP		byte_5B
		BNE		loc_6B5F1
		LDA		byte_6A7B,X
		AND		#7
		CMP		byte_64
		BEQ		loc_6B5FE
loc_6B5F1:
		INY
loc_6B5F2:
		INX
		DEC		byte_5C
		BNE		loc_6B5DD
		LDX		byte_5B
loc_6B5F9:
		INX
		CPX		#4
		BNE		loc_6B5CB
loc_6B5FE:
		JSR		sub_6B927
		TYA
		AND		#7
		ASL
		ASL
		ORA		#$80
		ORA		byte_5A
		PHA
		JSR		sub_6B91D
		TAX
		LDA		byte_6A6F,X
		LDX		#3
		LDY		#0
loc_6B616:
		CMP		byte_6A6F,X
		BNE		loc_6B61C
		INY
loc_6B61C:
		DEX
		BPL		loc_6B616
		DEY
		BNE		loc_6B641
		LDA		byte_59
		ASL
		ASL
		ASL
		TAX
		LDY		#0
		STY		byte_5A
loc_6B62C:
		LDA		byte_6A7B,X
		BPL		loc_6B633
		INC		byte_5A
loc_6B633:
		INX
		INY
		CPY		#8
		BNE		loc_6B62C
		DEC		byte_5A
		BNE		loc_6B641
		PLA
		ORA		#$20
		PHA
loc_6B641:
		PLA
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B645:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_500,X
		STA		byte_59
		LDA		byte_501,X
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s19:
		JSR		sub_6B6B8
		LDA		byte_59
		STA		byte_5B
		LDA		byte_5A
		STA		byte_5C
		JSR		sub_6B645
		CLC
		LDA		byte_65
		ADC		byte_59
		STA		byte_59
		LDA		byte_66
		ADC		byte_5A
		STA		byte_5A
		BCS		loc_6B68C
		CMP		byte_5C
		BEQ		loc_6B679
		BCS		loc_6B68C
		BCC		loc_6B681
loc_6B679:
		LDA		byte_59
		CMP		byte_5B
		BEQ		loc_6B681
		BCS		loc_6B68C
loc_6B681:
		LDA		byte_59
		STA		byte_500,X
		LDA		byte_5A
		STA		byte_501,X
		RTS
loc_6B68C:
		LDA		byte_5B
		STA		byte_59
		LDA		byte_5C
		STA		byte_5A
		JMP		loc_6B681

; =============== S U B	R O U T	I N E =======================================
sub_6B697:
		JSR		sub_6B645
		SEC
		LDA		byte_59
		SBC		byte_65
		STA		byte_59
		LDA		byte_5A
		SBC		byte_66
		STA		byte_5A
		BCC		loc_6B6AF
		ORA		byte_59
		BEQ		loc_6B6AF
		BNE		loc_6B681
loc_6B6AF:
		LDA		#0
		STA		byte_59
		STA		byte_5A
		JMP		loc_6B681

; =============== S U B	R O U T	I N E =======================================
sub_6B6B8:
		JSR		sub_6B888
		LDY		#7
		JSR		_get_bank0_ptr_byte_safe
		STA		byte_59
		LDY		#$15
		JSR		_get_bank0_ptr_byte_safe
		AND		#3
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s4:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6B888
		LDY		#0
		JSR		_get_bank0_ptr_byte_safe
		AND		#$3F
		STA		byte_59
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B6E3:
		LDX		byte_64
		LDA		byte_510,X
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B6EB:
		JSR		sub_6B72F
		LDA		byte_59
		STA		byte_5A
		JSR		sub_6B6E3
		CLC
		LDA		byte_65
		ADC		byte_59
		BCS		loc_6B704
		CMP		byte_5A
		BCS		loc_6B704
loc_6B700:
		STA		byte_510,X
locret_6B703:
		RTS
loc_6B704:
		LDA		byte_5A
		STA		byte_59
		JMP		loc_6B700

; =============== S U B	R O U T	I N E =======================================
sub_6B70B:
		JSR		sub_6B6E3
		CMP		#$FF
		BEQ		loc_6B71F
		SEC
		SBC		byte_65
		BCC		loc_6B722
		LDX		byte_64
		STA		byte_510,X
		PHA
		PLA
		RTS
loc_6B71F:
		LDA		#$FF
		RTS
loc_6B722:
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B725:
		LDX		byte_64
		LDA		#0
		STA		byte_510,X
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B72F:
		JSR		sub_6B888
		LDY		#8
		JSR		_get_bank0_ptr_byte_safe
		STA		byte_59
		LDA		#0
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B73E:
		LDX		byte_64
		LDA		byte_518,X
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B746:
		JSR		sub_6B888
		LDY		#3
		JSR		_get_bank0_ptr_byte_safe
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B751:
;		JSR		sub_6B73E
;		CLC
;		LDA		byte_65
;		ADC		byte_59
;		BCC		loc_6B75D
;		LDA		#$FF
;loc_6B75D:
;		STA		byte_59
;		STA		byte_518,X
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B763:
		JSR		sub_6B888
		LDY		#5
		JSR		_get_bank0_ptr_byte_safe
		STA		byte_59
		LDY		#$13
		JSR		_get_bank0_ptr_byte_safe
		AND		#3
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B777:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_520,X
		STA		byte_59
		LDA		byte_521,X
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B786:
		JSR		sub_6B888
		LDY		#6
		JSR		_get_bank0_ptr_byte_safe
		STA		byte_59
		LDY		#$14
		JSR		_get_bank0_ptr_byte_safe
		AND		#3
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B79A:
;		JSR		sub_6B777
;		CLC
;		LDA		byte_65
;		ADC		byte_59
;		STA		byte_59
;		LDA		byte_66
;		AND		#3
;		ADC		byte_5A
;		STA		byte_5A
;		CMP		#3
;		BEQ		loc_6B7C5
;		BCC		loc_6B7BA
;loc_6B7B2:
;		LDA		#3
;		STA		byte_5A
;		LDA		#$E7
;		STA		byte_59
;loc_6B7BA:
;		LDA		byte_59
;		STA		byte_520,X
;		LDA		byte_5A
;		STA		byte_521,X
;		RTS
;loc_6B7C5:
;		LDA		byte_59
;		CMP		#$E7
;		BCS		loc_6B7B2
;		BCC		loc_6B7BA
;		JSR		sub_6B777
;		SEC
;		LDA		byte_59
;		SBC		byte_65
;		STA		byte_59
;		LDA		byte_5A
;		SBC		byte_66
;		STA		byte_5A
;		BCC		loc_6B7EA
;loc_6B7DF:
;		LDA		byte_59
;		STA		byte_520,X
;		LDA		byte_5A
;		STA		byte_521,X
;		RTS
;loc_6B7EA:
;		LDA		#0
;		STA		byte_59
;		STA		byte_5A
;		BEQ		loc_6B7DF

; =============== S U B	R O U T	I N E =======================================
sub_6B7F2:
		JSR		sub_6B8F3
		BCS		locret_6B81C
		JSR		sub_6B888
		LDY		#1
		JSR		_get_bank0_ptr_byte_safe
		CLC
		ADC		byte_5D
		STA		byte_5D
		INY
		PHP
		JSR		_get_bank0_ptr_byte_safe
		PLP
		ADC		word_5E
		STA		word_5E
		BCC		locret_6B81C
		INC		word_5E+1
		BNE		locret_6B81C
		LDA		#$FF
		STA		byte_5D
		STA		word_5E
		STA		word_5E+1
locret_6B81C:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B81D:
		JSR		sub_6B8F3
		BCS		locret_6B83C
		JSR		sub_6B888
		LDY		#4
		JSR		_get_bank0_ptr_byte_safe
		CLC
		ADC		word_60
		STA		word_60
		LDY		#$12
		PHP
		JSR		_get_bank0_ptr_byte_safe
		AND		#3
		PLP
		ADC		word_60+1
		STA		word_60+1
locret_6B83C:
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s17:
		LDY		byte_64
		JSR		loc_6B892
		LDY		#9
		JSR		_get_bank0_ptr_byte_safe
		AND		#$7F
		CMP		#$7F
		BEQ		loc_6B874
		STA		byte_59
		LDY		#$16
		JSR		_get_bank0_ptr_byte_safe
		AND		#7
		BEQ		locret_6B873
		CMP		#7
		BEQ		loc_6B879
		STA		byte_5A
		LDA		#7
		SEC
		SBC		byte_5A
		TAY
		LDA		#0
loc_6B866:
		ROL
		DEY
		BNE		loc_6B866
		STA		byte_5A
		JSR		sub_1743B8
		CMP		byte_5A
		BCS		loc_6B874
locret_6B873:
		RTS
loc_6B874:
		LDA		#$FF
		STA		byte_59
		RTS
loc_6B879:
		JSR		sub_1743B8
		STA		byte_5A
		BNE		loc_6B874
		JSR		sub_1743B8
		CMP		#$20
		BCS		loc_6B874
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B888:
		JSR		sub_6B91D
		TAX
		LDY		byte_6A73,X
		JMP		loc_6B892
loc_6B892:
		LDA		#$17
		STA		word_4A
		LDA		#0
		STA		word_4A+1
		LDX		#word_4A
		TYA
		JSR		_mul16_to_8
		LDA		#<[_b0_d43_enemies_lib]
		CLC
		ADC		word_4A
		STA		word_4A
		LDA		#>[_b0_d43_enemies_lib]
		ADC		word_4A+1
		STA		word_4A+1
		LDX		#word_4A
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B8B7:
;		PHA
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_6BA20
;		BPL		sub_6B8C4

; =============== S U B	R O U T	I N E =======================================
sub_6B8C1:
		SEC
		BCS		sub_6B8C5

; =============== S U B	R O U T	I N E =======================================
sub_6B8C4:
		CLC

; =============== S U B	R O U T	I N E =======================================
sub_6B8C5:
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B8CB:
;		PHA
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_6BA20
;		AND		#$10
;		BEQ		sub_6B8C4
;		BNE		sub_6B8C1
;		PHA
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_6BA20
;		AND		#$F
;		BEQ		sub_6B8C4
;		BNE		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B8E7:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		BPL		sub_6B8C4
		BMI		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B8F3:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		AND		#$40
		BEQ		sub_6B8C4
		BNE		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B901:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		AND		#$20
		BEQ		sub_6B8C4
		BNE		sub_6B8C1
loc_6B90F:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		AND		#$10
		BEQ		sub_6B8C4
		BNE		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B91D:
		JSR		sub_6BA26
		AND		#$C
		LSR
		LSR
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B927:
		TYA
		PHA
		LDY		byte_59
		INY
		LDA		#$FF
		STA		byte_5A
		LDX		#0
loc_6B932:
		LDA		byte_6A77,X
		BPL		loc_6B939
		INC		byte_5A
loc_6B939:
		INX
		DEY
		BNE		loc_6B932
		BEQ		loc_6B957

; =============== S U B	R O U T	I N E =======================================
_b4_s3:
		TYA
		PHA
		LDY		byte_59
		INY
		LDA		#0
		STA		byte_5A
loc_6B948:
		LDX		byte_5A
		LDA		byte_6A77,X
		BPL		loc_6B952
		DEY
		BEQ		loc_6B957
loc_6B952:
		INC		byte_5A
		JMP		loc_6B948
loc_6B957:
		PLA
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B95A:
		JSR		sub_6BA20
		AND		#$20
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B960:
		LDY		#$C
		JMP		sub_6B974

; =============== S U B	R O U T	I N E =======================================
_b4_s29:
		LDY		#$A
		JMP		sub_6B974

; =============== S U B	R O U T	I N E =======================================
_b4_s2A:
		LDY		#$E
		JMP		sub_6B974

; =============== S U B	R O U T	I N E =======================================
_b4_s18:
		LDY		#$10
		JMP		sub_6B974

; =============== S U B	R O U T	I N E =======================================
sub_6B974:
		TYA
		PHA
		JSR		sub_6B888
		PLA
		TAY
		JSR		_get_bank0_ptr_byte_safe
		AND		#$80
		ROL
		ROL
		STA		byte_59
		INY
		JSR		_get_bank0_ptr_byte_safe
		AND		#$80
		ROL
		ROL
		ROL
		ORA		byte_59
		AND		#3
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B994:
		JSR		sub_6B888
		LDA		byte_65
		LDY		#$12
loc_6B99B:
		INY
		SEC
		SBC		#3
		BCS		loc_6B99B
		ADC		#3
		TAX
		STX		byte_59
		DEY
		LDA		byte_6B9CB,X
		PHA
		LDX		#word_4A
		JSR		_get_bank0_ptr_byte_safe
		STA		byte_5A
		PLA
		AND		byte_5A
		PHA
		LDA		#3
		SEC
		SBC		byte_59
		ASL
		TAX
		PLA
loc_6B9C0:
		LSR
		DEX
		BNE		loc_6B9C0
		TAX
		LDA		byte_6B9CE,X
		STA		byte_59
		RTS
byte_6B9CB:
		.BYTE	$C0,$30, $C
byte_6B9CE:
		.BYTE	  0,$4D,$B3,$FF

; =============== S U B	R O U T	I N E =======================================
sub_6B9D2:
		JSR		sub_6B888
		LDY		#0
		JSR		_get_bank0_ptr_byte_safe
		AND		#$C0
		LSR
		LSR
		LSR
		STA		byte_59
		LDY		#9
		JSR		_get_bank0_ptr_byte_safe
		AND		#$80
		LSR
		LSR
		LSR
		LSR
		LSR
		ORA		byte_59
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B9F2:
		TYA
		CLC
		ADC		#$A
		PHA
		JSR		sub_6B888
		PLA
		TAY
		JSR		_get_bank0_ptr_byte_safe
		AND		#$7F
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA04:
		JSR		sub_6B888
		LDY		#$16
		JSR		_get_bank0_ptr_byte_safe
		AND		#8
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA11:
		LDA		byte_64
		ASL
		TAX
		LDA		byte_530,X
		STA		byte_5B
		LDA		byte_531,X
		STA		byte_5C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA20:
		JSR		sub_6BA11
		LDA		byte_5C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA26:
		JSR		sub_6BA11
		LDA		byte_5B
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s16_do_half_message_speed_delay:
		PHA
		TXA
		PHA
		JSR		_get_cur_message_speed_delay
		TXA
		LSR
		TAX
		INX
		JMP		loc_6BA3F

; =============== S U B	R O U T	I N E =======================================
_b4_s5_do_message_speed_delay:
		PHA
		TXA
		PHA
		JSR		_get_cur_message_speed_delay
loc_6BA3F:
		JSR		_vblank_count
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; message speed delay for battle messages, for some reason, for 7th (slowest)
; it takes value 1. for _b4_s16_do_half_message_speed_delay this is slowest
; value (1 >> 1 or 255 frames), but for _b4_s5_do_message_speed_delay will be
; fastest - just one frame
;
_get_cur_message_speed_delay:
		LDX		_cur_message_speed
		CPX		#7
		BCS		loc_6BA52
		LDA		_message_speed_delays_list,X
		TAX
		RTS
loc_6BA52:
		LDX		#1
		RTS
_message_speed_delays_list:
		.BYTE	$18,$24,$30,$3C,$48,$54,$64

; =============== S U B	R O U T	I N E =======================================
_b4_sE:
		LDA		#$1F
		STA		byte_42
		LDX		#$10
		BNE		sub_6BA6A

; =============== S U B	R O U T	I N E =======================================
sub_6BA64:
		LDA		#$F
		STA		byte_42
		LDX		#$20

; =============== S U B	R O U T	I N E =======================================
sub_6BA6A:
		TXA
		PHA
		STX		word_3C
		LSR		word_3C
		LDA		#0
		STA		word_3C+1
loc_6BA74:
		JSR		sub_1743B8
		LDA		byte_1C
		AND		byte_42
		CLC
		ADC		word_3C
		STA		word_3C
		BCC		loc_6BA84
		INC		word_3C+1
loc_6BA84:
		DEX
		BNE		loc_6BA74
		PLA
		TAX
		LDA		word_3C
		SEC
		SBC		#$80
		STA		word_3C
		LDA		word_3C+1
		SBC		#0
		BNE		sub_6BA6A
		STA		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA99:
		LDX		#0
loc_6BA9B:
		LDA		byte_6A77,X
		BPL		loc_6BAA7
		TXA
		PHA
		JSR		sub_6BAAD
		PLA
		TAX
loc_6BAA7:
		INX
		CPX		#4
		BNE		loc_6BA9B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BAAD:
		ASL
		ASL
		ASL
		STA		byte_44
		LDA		#8
		STA		_tmp12+1
loc_6BAB6:
		LDY		byte_44
		LDA		byte_6A7B,Y
		BPL		loc_6BAC4
		TXA
		PHA
		JSR		sub_6BACB
		PLA
		TAX
loc_6BAC4:
		INC		byte_44
		DEC		_tmp12+1
		BNE		loc_6BAB6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BACB:
		LDA		byte_6A7B,Y
		AND		#7
		STA		byte_43
		STA		byte_64
		ASL
		TAY
		TXA
		ASL
		ASL
		ORA		#$80
		STA		byte_530,Y
		JSR		sub_6B6B8
		LDA		byte_59
		STA		byte_5B
		LDA		byte_5A
		STA		byte_5C
		LSR		byte_5C
		ROR		byte_5B
		LSR		byte_5C
		ROR		byte_5B
		INC		byte_5B
		LDA		byte_5B
		JSR		_b4_sF
		LDX		#byte_59
		JSR		_add8_to_neg16
		LDA		byte_43
		ASL
		TAY
		LDA		byte_59
		STA		byte_500,Y
		LDA		byte_5A
		STA		byte_501,Y
		JSR		sub_6B72F
		LDY		byte_43
		LDA		byte_59
		STA		byte_510,Y
		JSR		sub_6B746
		LDY		byte_43
		LDA		byte_59
		STA		byte_518,Y
		JSR		sub_6B786
		LDA		byte_43
		ASL
		TAY
		LDA		byte_59
		STA		byte_520,Y
		LDA		byte_5A
		STA		byte_521,Y
		LDA		#$80
		STA		byte_531,Y
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_bank0_ptr_byte_safe:
		LDA		#0
		JMP		_get_far_ptr_byte_safe

; =============== S U B	R O U T	I N E =======================================
_b4_s23:
		STA		word_4
		TXA
		PHA
		TYA
		PHA
		LDA		word_4
		JSR		sub_6BB4D
		PLA
		TAY
		PLA
		TAX
		LDA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BB4D:
		CMP		#2
		BCS		loc_6BB5E
		LDA		off_6BC0B
		LDX		off_6BC0B+1
		JSR		sub_6BBCB
		LDA		#8
		BNE		loc_6BB85
loc_6BB5E:
		CMP		#$10
		BCC		loc_6BB72
		SBC		#$10
		ASL
		TAY
		LDA		off_6BC11,Y
		LDX		off_6BC11+1,Y
		JSR		sub_6BBCB
		JMP		loc_6BB85
loc_6BB72:
		LSR
		LSR
		LSR
		ASL
		TAY
		LDA		off_6BC0D,Y
		LDX		off_6BC0D+1,Y
		JSR		sub_6BBCB
		LDX		word_4
		LDA		byte_6BBFD-2,X
loc_6BB85:
		STA		word_4+1
		JSR		sub_6BBD5
loc_6BB8A:
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		AND		byte_73D,Y
		BMI		loc_6BBA2
loc_6BB95:
		JSR		sub_6BBDD
loc_6BB98:
		ASL		word_6
		INX
		CPX		#4
		BNE		loc_6BB8A
		LDA		word_6+1
		RTS
loc_6BBA2:
		TXA
		LDY		word_4
		CPY		#$10
		BCC		loc_6BBAE
		ASL
		TAY
		JMP		(word_3C)
loc_6BBAE:
		LDY		word_4
		CPY		#2
		BCC		loc_6BBB5
		ASL
loc_6BBB5:
		TAY
		LDA		(word_3C),Y
		AND		word_4+1
		PHP
		LDA		word_4
		CMP		#$F
		BEQ		loc_6BBC6
		PLP
		BNE		loc_6BB95
		BEQ		loc_6BB98
loc_6BBC6:
		PLP
		BEQ		loc_6BB95
		BNE		loc_6BB98

; =============== S U B	R O U T	I N E =======================================
sub_6BBCB:
		STA		word_3C
		STX		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BBD0:
		STA		word_3E
		STX		word_3E+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BBD5:
		LDX		#1
		STX		word_6
		DEX
		STX		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BBDD:
		LDA		word_6
		ORA		word_6+1
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BBE4:
		LDA		byte_6AA3,Y
		ORA		byte_6AA4,Y
		JMP		sub_6BBF9

; =============== S U B	R O U T	I N E =======================================
sub_6BBED:
		LDA		byte_6A9F,X
		JMP		sub_6BBF9

; =============== S U B	R O U T	I N E =======================================
sub_6BBF3:
		LDA		byte_72C,Y
		ORA		byte_72D,Y

; =============== S U B	R O U T	I N E =======================================
sub_6BBF9:
		BEQ		loc_6BB95
		BNE		loc_6BB98
byte_6BBFD:
		.BYTE	  4,  8,$10,$20,$40,$80, $F, $F, $F, $F,$10,$20,$40,$80
off_6BC0B:
		.WORD	byte_6A9B
off_6BC0D:
		.WORD	byte_73C
		.WORD	byte_73D
off_6BC11:
		.WORD	sub_6BBE4
		.WORD	sub_6BBED
		.WORD	sub_6BBF3

; =============== S U B	R O U T	I N E =======================================
sub_6BC17:
		STA		word_4
		LDA		byte_64
		PHA
		LDA		word_4
		JSR		sub_6BC27
		PLA
		STA		byte_64
		LDA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BC27:
		ASL
		TAY
		LDA		off_6BCA2,Y
		LDX		off_6BCA2+1,Y
		JSR		sub_6BBCB
		JSR		sub_6BBD5
loc_6BC35:
		STX		byte_64
		TXA
		ASL
		TAY
		LDA		byte_530,Y
		BMI		loc_6BC4E
loc_6BC3F:
		JSR		sub_6BBDD
loc_6BC42:
		ASL		word_6
		LDX		byte_64
		INX
		CPX		#8
		BNE		loc_6BC35
		LDA		word_6+1
		RTS
loc_6BC4E:
		LDA		word_4
		BEQ		loc_6BC5D
		LDA		byte_531,Y
		BPL		loc_6BC3F
		LDA		word_4
		CMP		#5
		BCS		loc_6BC42
loc_6BC5D:
		JMP		(word_3C)

; =============== S U B	R O U T	I N E =======================================
sub_6BC60:
		LDA		byte_531,Y
		BPL		loc_6BC42
		BMI		loc_6BC3F

; =============== S U B	R O U T	I N E =======================================
sub_6BC67:
		JSR		sub_6B6B8
loc_6BC6A:
		LSR		byte_5A
		ROR		byte_59
		LDA		byte_64
		ASL
		TAY
		LDA		byte_501,Y
		CMP		byte_5A
		BEQ		loc_6BC7D
		BCC		loc_6BC42
		BCS		loc_6BC3F
loc_6BC7D:
		LDA		byte_500,Y
		CMP		byte_59
		BCC		loc_6BC42
		BCS		loc_6BC3F

; =============== S U B	R O U T	I N E =======================================
sub_6BC86:
		JSR		sub_6B6B8
		LSR		byte_5A
		ROR		byte_59
		JMP		loc_6BC6A

; =============== S U B	R O U T	I N E =======================================
sub_6BC90:
		LDA		byte_521,Y
		CMP		#3
		BCC		loc_6BC3F
		BCS		loc_6BC42

; =============== S U B	R O U T	I N E =======================================
sub_6BC99:
		LDA		byte_531,Y
		AND		#$F
		BEQ		loc_6BC42
		BNE		loc_6BC3F
off_6BCA2:
		.WORD	sub_6BC60
		.WORD	sub_6BC67
		.WORD	sub_6BC86
		.WORD	sub_6BC90
		.WORD	sub_6BC99

; =============== S U B	R O U T	I N E =======================================
_b4_s10:
		CMP		#8
		BCS		loc_6BCBC
		STA		word_4
		SEC
		LDX		word_4
		LDA		#0
loc_6BCB7:
		ROL
		DEX
		BPL		loc_6BCB7
		RTS
loc_6BCBC:
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BCBF:
		STA		word_4
		JSR		sub_6BBD5
loc_6BCC4:
		TXA
		PHA
		JSR		sub_6BCDE
		ORA		word_4
		CMP		#$FF
		BNE		loc_6BCD2
		JSR		sub_6BBDD
loc_6BCD2:
		ASL		word_6
		PLA
		TAX
		INX
		CPX		#4
		BNE		loc_6BCC4
		LDA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BCDE:
		STA		byte_10
		LDA		byte_42
		PHA
		LDA		byte_43
		PHA
		LDA		byte_10
		JSR		sub_6A8B3
		STA		byte_10
		PLA
		STA		byte_43
		PLA
		STA		byte_42
		LDA		byte_10
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6BCF6:
;		LDA		#$FF
;		STA		byte_42
;		LDA		#0
;		STA		byte_55
;		STA		byte_56
;		TAX
;		RTS

off_6BD02:
		.WORD	sub_68505
		.WORD	sub_68509
		.WORD	_b4_s2B
		.WORD	_b4_s2B
		.WORD	_b4_s2B
		.WORD	_b4_s2B
		.WORD	_b4_s2B
		.WORD	sub_68567
		.WORD	sub_68576
		.WORD	sub_685A0
		.WORD	sub_68505
		.WORD	sub_68505
		.WORD	sub_68505
		.WORD	sub_68505
		.WORD	sub_68505
		.WORD	sub_68505
		.WORD	sub_685A8
		.WORD	sub_685AD
		.WORD	sub_68505
		.WORD	sub_685B2
		.WORD	sub_685B2
		.WORD	sub_685B2
		.WORD	sub_685B2
		.WORD	sub_685C0
		.WORD	sub_685C0
		.WORD	sub_685C0
		.WORD	sub_685C0
		.WORD	sub_685C0
		.WORD	sub_685C0
		.WORD	sub_685C0
		.WORD	sub_685C0
		.WORD	sub_685B2
		.WORD	sub_685C0
		.WORD	sub_685CB
		.WORD	sub_685A8
		.WORD	sub_685D5
		.WORD	sub_685DA
		.WORD	sub_685DF
		.WORD	sub_685E4
		.WORD	sub_685A0
		.WORD	sub_685E9
		.WORD	sub_685EE
		.WORD	sub_685F3
		.WORD	sub_68505
		.WORD	sub_685FF
		.WORD	sub_68606
		.WORD	sub_6860D
		.WORD	sub_68619
		.WORD	sub_68619
		.WORD	sub_6861E
		.WORD	sub_6861E
		.WORD	sub_6861E
		.WORD	sub_68625
		.WORD	sub_68625
		.WORD	sub_6862C
		.WORD	sub_6862C
		.WORD	sub_6862C
		.WORD	sub_68631
		.WORD	sub_68631
		.WORD	sub_6858A
		.WORD	sub_6858A
		.WORD	sub_6858A
		.WORD	sub_6858A
		.WORD	sub_6858A
byte_6BD82:
		.BYTE	  2,  6, $C,  3,  4,  6,$12,  6, $C,  4,  6,  9,  5,  8,  1,  3
		.BYTE	  4,  3,  4,  4,  0,  5,  3,  7,  0,  8,  4,  5, $A,$14,  3,  6
		.BYTE	  7,$12,$3E,  3,  6,  9,$12,$3E
off_6BDAA:
		.WORD	sub_68B2F
		.WORD	sub_68B32
		.WORD	sub_68B35
		.WORD	sub_68BC9
		.WORD	sub_68BF0
		.WORD	sub_68C0A
		.WORD	sub_68C26
		.WORD	sub_68C48
		.WORD	sub_68C64
		.WORD	sub_68D8D
		.WORD	sub_68DB1
		.WORD	sub_68DB1
		.WORD	sub_68DB1
		.WORD	sub_68DB1
		.WORD	sub_68DB1
		.WORD	sub_68DB1
		.WORD	sub_68DEC
		.WORD	sub_68E00
		.WORD	sub_68E4B
		.WORD	sub_68E96
		.WORD	sub_68E96
		.WORD	sub_68E96
		.WORD	sub_68E96
		.WORD	sub_68EC7
		.WORD	sub_68EC7
		.WORD	sub_68EC7
		.WORD	sub_68EC7
		.WORD	sub_68EC7
		.WORD	sub_68EC7
		.WORD	sub_68EC7
		.WORD	sub_68EC7
		.WORD	sub_68F21
		.WORD	sub_68FBC
		.WORD	sub_68FF8
		.WORD	sub_69081
		.WORD	sub_690A9
		.WORD	sub_690CD
		.WORD	sub_690E9
		.WORD	sub_69111
		.WORD	sub_69135
		.WORD	sub_69173
		.WORD	sub_691C3
		.WORD	sub_69225
		.WORD	sub_692D4
		.WORD	sub_692B7
		.WORD	sub_69322
		.WORD	sub_6934C
		.WORD	sub_6936E
		.WORD	sub_6936A
		.WORD	sub_69415
		.WORD	sub_69415
		.WORD	sub_69415
		.WORD	sub_69453
		.WORD	sub_69453
		.WORD	sub_69415
		.WORD	sub_69415
		.WORD	sub_69415
		.WORD	sub_69453
		.WORD	sub_69453
		.WORD	sub_68D39
		.WORD	sub_68D39
		.WORD	sub_68D39
		.WORD	sub_68D39
		.WORD	sub_68D39
off_6BE2A:
		.WORD	sub_695C6
		.WORD	sub_69782
		.WORD	sub_697CD
		.WORD	sub_6AE6C
		.WORD	sub_697D0
		.WORD	sub_697D0
		.WORD	sub_6B0C1
		.WORD	nullsub_11
off_6BE3A:
		.WORD	sub_69840
		.WORD	sub_6990D
		.WORD	sub_6995B
		.WORD	sub_69973
		.WORD	sub_699F1
		.WORD	sub_69A2E
		.WORD	sub_69A80
		.WORD	sub_69ABF
		.WORD	sub_69B1B
		.WORD	sub_69BA0
		.WORD	sub_69BA0
		.WORD	sub_69BA0
		.WORD	sub_69BE0
		.WORD	sub_69BE0
		.WORD	sub_69BE0
		.WORD	sub_69C09
		.WORD	sub_69C81
		.WORD	sub_69C86
		.WORD	sub_69D20
		.WORD	sub_69D60
		.WORD	sub_69DDF
		.WORD	sub_69E5B
		.WORD	sub_69E7F
		.WORD	sub_6A263
		.WORD	sub_69ECB
		.WORD	sub_69EF8
		.WORD	sub_69F05
		.WORD	sub_69F23
		.WORD	sub_69F43
		.WORD	sub_69F64
		.WORD	sub_69840
		.WORD	sub_69F85
		.WORD	sub_69F97
		.WORD	sub_69FC5
		.WORD	sub_6A017
		.WORD	sub_6A2CB
		.WORD	sub_6A2FF
		.WORD	sub_6AEEF
		.WORD	sub_6AF04
		.WORD	sub_6AF0E
		.WORD	sub_6AF34
		.WORD	sub_6AF65
		.WORD	sub_6AF6D
		.WORD	sub_6AF7B
		.WORD	sub_6AFA5
		.WORD	sub_6AF97
		.WORD	sub_6AF89
		.WORD	sub_6AFD2
		.WORD	sub_6AFF7
		.WORD	nullsub_12
		.WORD	sub_6B008
		.WORD	sub_6B027
		.WORD	sub_6B04B

; =============== S U B	R O U T	I N E =======================================
sub_6BEA4:
		LDA		byte_49
		ASL
		TAY
		LDA		word_6B4A1+1,Y
		JSR		_b4_sF
		CLC
		ADC		word_6B4A1,Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BEB9:
		LDX		byte_51
		LDA		byte_558,X
		CMP		#$10
		BCS		loc_6BEC4
		ADC		#$15
loc_6BEC4:
		SEC
		SBC		#$13
		ASL
		TAY
		LDA		word_6B4C5+1,Y
		JSR		_b4_sF
		CLC
		ADC		word_6B4C5,Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDX		byte_51
		LDA		byte_558,X
		CMP		#$10
		BCS		locret_6BEF4
		LDA		byte_73C
		AND		#4
		BEQ		locret_6BEF4
		ASL		word_4
		ROL		word_4+1
		LDX		#word_4
		LDA		#3
		JSR		_div16_to_8
locret_6BEF4:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BEF5:
		LDX		byte_51
		LDA		byte_558,X
		SEC
		SBC		#$31
		TAX
		LDA		byte_6B4F5,X

; =============== S U B	R O U T	I N E =======================================
_b4_s1E:
		ASL
		TAY
		LDA		_b4_d15,Y
		CMP		#$FF
		BEQ		loc_6BF1B
		LDA		_b4_d15+1,Y
		JSR		_b4_sF
		CLC
		ADC		_b4_d15,Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		RTS
loc_6BF1B:
		LDA		#$FF
		STA		word_4
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BF22:
		LDA		byte_49
		CMP		#$1D
		BCS		loc_6BF2E
		SEC
		SBC		#$1A
		JMP		_b4_s1E
loc_6BF2E:
		SBC		#$1D
		BNE		_b4_s1E

		ECHO "bank 04 free space", [$BFD8-.]

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
