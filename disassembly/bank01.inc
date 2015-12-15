
		ORG $8000

		PTR_IDX		_b1_s9
		PTR_IDX		_b1_sA
		PTR_IDX		_b1_sB
		PTR_IDX		_b1_sC
		PTR_IDX		_b1_sD
		PTR_IDX		_b1_sE
		PTR_IDX		_b1_s14
		PTR_IDX		_b1_s15
		PTR_IDX		_b1_s16
		PTR_IDX		_b1_s17
		PTR_IDX		_b1B_s0

; =============== S U B	R O U T	I N E =======================================
_b1_s14:
		STA		byte_7E
		LDA		#2
		STA		byte_63E
loc_20079:
		JSR		sub_2016F
		CMP		#$FF
		BEQ		locret_200BC
		CMP		#0
		BEQ		loc_2009C
		STA		byte_CF
		DEC		byte_CF
		DEC		byte_CF
		LDX		byte_7E
		DEX
		TXA
		ASL
		ASL
		ASL
		CLC
		ADC		byte_CF
		STA		byte_CF
		JSR		_sram_b0_s34_read_spell_related_data_byte
		LDA		word_4
		RTS
loc_2009C:
		LDA		#0
		STA		byte_63E
		INC		byte_7E
		LDA		byte_7E
		CMP		#3
		BEQ		loc_200B3
		CMP		#4
		BNE		loc_20079
loc_200AD:
		LDA		#1
		STA		byte_7E
		BNE		loc_20079
loc_200B3:
		JSR		_sram_b0_s39
		LDA		word_6
		BEQ		loc_200AD
		BNE		loc_20079
locret_200BC:
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_s16:
		LDA		#6
		STA		byte_7F
		BNE		sub_200C7

; =============== S U B	R O U T	I N E =======================================
_b1_s15:
		LDA		#4
		STA		byte_7F

; =============== S U B	R O U T	I N E =======================================
sub_200C7:
		LDA		#1
		STA		byte_63E
loc_200CC:
		LDA		#1
		STA		word_7C+1
loc_200D0:
		LDA		byte_7F
		JSR		sub_20162
		CMP		#$FF
		BEQ		locret_200EF
		CMP		#0
		BEQ		loc_200F0
		PHA
		LDX		word_7C+1
		DEX
		TXA
		STA		word_7C+1
		JSR		sub_20114
		STA		word_7C+1
		DEC		word_7C+1
		PLA
		CLC
		ADC		word_7C+1
locret_200EF:
		RTS
loc_200F0:
		LDA		#0
		STA		byte_63E
		LDA		word_7C+1
		PHA
		JSR		sub_20114
		STA		word_7C+1
		JSR		sub_20122
		LDA		word_4
		CMP		word_7C+1
		BEQ		loc_20110
		BCC		loc_20110
		PLA
		STA		word_7C+1
		INC		word_7C+1
		JMP		loc_200D0
loc_20110:
		PLA
		JMP		loc_200CC

; =============== S U B	R O U T	I N E =======================================
sub_20114:
		ASL
		ASL
		LDX		byte_7F
		CPX		#4
		BEQ		loc_2011E
		ASL
		RTS
loc_2011E:
		CLC
		ADC		word_7C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20122:
		LDA		byte_7F
		CMP		#4
		BEQ		loc_2012C
		FARX	_bD_s1F_get_vault_items_count
		RTS
loc_2012C:
		FARX	_b0_s48_get_count_returnable_locations
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_s17:
		STA		word_7C+1
		LDA		#7
		JSR		sub_2015B
		CMP		#$FF
		BEQ		locret_2014C
		CMP		#0
		BEQ		loc_2014D
		STA		byte_CF
		DEC		byte_CF
		LDA		word_7C+1
		STA		byte_D0
		JSR		_sram_b0_s35
		LDA		word_4
locret_2014C:
		RTS
loc_2014D:
		LDA		word_7C+1
		EOR		#3
		JMP		_b1_s17

; =============== S U B	R O U T	I N E =======================================
; unused
;_b1_s13:
;		JSR		sub_2015B
;		TAX
;		DEX
;		TXA
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2015B:
		PHA
		LDA		#1
		STA		byte_63E
		PLA

; =============== S U B	R O U T	I N E =======================================
sub_20162:
		STA		byte_7E
		JSR		sub_202A9
		LDA		byte_7E
		JSR		sub_20759
		FARX	_bE_s13

; =============== S U B	R O U T	I N E =======================================
sub_2016F:
		JSR		sub_202A9
		PHA
		JSR		sub_2063D
		LDX		#$FF
		PLA
		BEQ		loc_20180
		JSR		sub_2069E
		LDX		#0
loc_20180:
		STX		byte_634
		JSR		sub_205CD
		JSR		sub_20628
		LDA		byte_75
		CMP		#3
		BCS		loc_20195
		JSR		sub_2065D
		JMP		loc_20198
loc_20195:
		JSR		sub_205E8
loc_20198:
		JSR		sub_2067E
		JSR		sub_2060C
		INC		byte_7B
		DEC		byte_75
		LDA		byte_75
		BEQ		loc_201B0
		CMP		#2
		BNE		loc_20195
		JSR		sub_2065D
		JMP		loc_20198
loc_201B0:
		JMP		sub_203A7

; =============== S U B	R O U T	I N E =======================================
sub_201B3:
		LDX		#<[_sram_b0_s34_read_spell_related_data_byte]
		LDY		#>[_sram_b0_s34_read_spell_related_data_byte]
		BNE		sub_201CB

; =============== S U B	R O U T	I N E =======================================
sub_201BC:
		LDX		#<[_sram_b0_s37]
		LDY		#>[_sram_b0_s37]
		BNE		sub_201CB

; =============== S U B	R O U T	I N E =======================================
sub_201C5:
		LDX		#<[_sram_b0_s38]
		LDY		#>[_sram_b0_s38]

; =============== S U B	R O U T	I N E =======================================
sub_201CB:
		STX		word_7C
		STY		word_7C+1
		LDA		byte_7B
		ASL
		PHA
		JSR		sub_201DF
		LDX		#2
		JSR		sub_20690
		PLA
		TAX
		INX
		TXA

; =============== S U B	R O U T	I N E =======================================
sub_201DF:
		STA		byte_CF
		JSR		_jump_indirect_7C
		LDA		word_4
		CMP		#$FF
		BEQ		loc_201F5
		JSR		sub_206EF
		LDX		byte_CF
		LDA		#0
		STA		byte_636,X
		RTS
loc_201F5:
		LDA		byte_77
		CLC
		ADC		#9
		STA		byte_77
		RTS

; =============== S U B	R O U T	I N E =======================================
_jump_indirect_7C:
		JMP		(word_7C)

; =============== S U B	R O U T	I N E =======================================
sub_20200:
		LDA		word_7C+1
		STA		word_4
		DEC		word_4
		LDA		word_4
		ASL
		ASL
		CLC
		ADC		word_4
		STA		word_4
		CLC
		ADC		byte_7B
		STA		byte_CF
		SEC
		SBC		word_4
		TAX
		LDA		#0
		STA		byte_635,X
		FARX	_b0_s48_get_count_returnable_locations
		LDA		word_4+1
		JMP		sub_206E8

; =============== S U B	R O U T	I N E =======================================
sub_20225:
		LDX		byte_7B
		LDA		_enemy_roster_index_list,X
		JSR		sub_206F6
		LDX		byte_77
		LDA		#0
		STA		word_4+1
		STA		word_6
		JSR		sub_20688
		LDA		#$71
		JSR		sub_20688
		LDX		byte_7B
		LDA		byte_6AD5,X
		STA		word_4
		LDA		#2
		JSR		sub_206A9
		LDA		#$69
		JSR		sub_20688
		LDX		byte_7B
		LDA		byte_6AD9,X
		STA		word_4
		LDA		#0
		STA		word_4+1
		STA		word_6
		LDA		#1
		JSR		sub_206A9
		LDA		#0
		LDX		byte_7B
		STA		byte_635,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20268:
		LDX		word_7C+1
		DEX
		TXA
		ASL
		ASL
		ASL
		CLC
		ADC		byte_7B
		TAX
		LDA		_vault_items_list,X
		PHA
		JSR		sub_206FD
		LDA		byte_77
		CLC
		ADC		#7
		STA		byte_77
		PLA
		JSR		sub_20703
		LDX		byte_7B
		LDA		#0
		STA		byte_635,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2028D:
		LDA		byte_7B
		STA		byte_CF
		LDA		word_7C+1
		STA		byte_D0
		JSR		_sram_b0_s35
		LDA		word_4
		CMP		#$FF
		BEQ		locret_202A8
		JSR		sub_206EF
		LDX		byte_7B
		LDA		#0
		STA		byte_635,X
locret_202A8:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_202A9:
		LDA		byte_7E
		ASL
		ASL
		TAX
		LDA		off_20369,X
		STA		word_4
		LDA		off_20369+1,X
		STA		word_4+1
		LDA		off_20369+2,X
		STA		word_6C
		LDA		off_20369+3,X
		STA		word_6C+1
		LDX		#0
		LDA		#$FF
loc_202C6:
		STA		byte_634,X
		INX
		CPX		#$A
		BNE		loc_202C6
		JMP		(word_4)

; =============== S U B	R O U T	I N E =======================================
sub_202D1:
		JSR		sub_20720
		JSR		_sram_b0_s39
		LDA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_202DA:
		JSR		sub_20720
		LDA		#$FF
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_202E0:
		JSR		sub_20720
		FARX	_b0_s48_get_count_returnable_locations
		LDA		word_7C+1
		ASL
		ASL
		CLC
		ADC		word_7C+1
		CMP		word_4
		BCC		loc_20303
		BEQ		loc_20303
		LDX		word_4
		SEC
		SBC		word_4
		STA		word_4
		LDA		#6
		SEC
		SBC		word_4
		STA		byte_75
		STX		word_4
loc_20303:
		LDA		word_4
		CMP		#6
		BCS		loc_2030C
		LDA		#0
		RTS
loc_2030C:
		LDA		#$FF
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2030F:
		JSR		sub_20720
		LDX		#1
loc_20314:
		LDA		byte_56C,X
		CMP		#$FF
		BEQ		loc_20320
		INX
		CPX		#5
		BNE		loc_20314
loc_20320:
		STX		byte_75
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20325:
		JSR		sub_20720
		FARX	_bD_s1F_get_vault_items_count
		LDA		word_7C+1
		ASL
		ASL
		ASL
		CMP		word_4
		BEQ		loc_20346
		BCC		loc_20346
		LDX		word_4
		SEC
		SBC		word_4
		STA		word_4
		LDA		#9
		SEC
		SBC		word_4
		STA		byte_75
		STX		word_4
loc_20346:
		DEC		word_4
		LDA		word_4
		AND		#$F8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2034D:
		JSR		sub_20720
		LDA		word_7C+1
		STA		byte_D0
		FARX	_b0_s62
		LDA		word_6+1
		STA		byte_75
		INC		byte_75
		LDA		word_7C+1
		EOR		#3
		STA		byte_D0
		JSR		_sram_b0_s39
		LDA		word_6+1
		RTS
off_20369:
		.WORD	  0,  0
		.WORD	sub_202D1, sub_201B3
		.WORD	sub_202DA, sub_201BC
		.WORD	sub_202DA, sub_201C5
		.WORD	sub_202E0, sub_20200
		.WORD	sub_2030F, sub_20225
		.WORD	sub_20325, sub_20268
		.WORD	sub_2034D, sub_2028D
byte_2038F:
		.BYTE	$88,$12,$22,$5C,$92,$32,$5C,$92,$32,$5C,$92,$32,$66,$83,$1A,$58
		.BYTE	$44,$22,$98,$16,$12,$96,$18,$1A

; =============== S U B	R O U T	I N E =======================================
sub_203A7:
		JSR		_wait_for_nmi_is_over_sync
		JSR		_calc_pads
		LDA		_pads
		BNE		sub_203A7
		LDA		byte_7E
		ASL
		TAX
		LDA		byte_205BD,X
		STA		word_4
		LDA		byte_205BD+1,X
		STA		word_4+1
		LDA		byte_63E
		STA		byte_78
		STA		byte_79
		BNE		loc_203E3
		DEC		word_4+1
		DEC		word_4+1
		INC		byte_63E
		LDA		byte_7E
		CMP		#6
		BEQ		loc_203DE
		CMP		#4
		BCS		loc_20410
		INC		byte_63E
		BNE		loc_20410
loc_203DE:
		INC		word_4+1
		JMP		loc_20410
loc_203E3:
		LDX		byte_78
loc_203E5:
		LDA		byte_634,X
		BEQ		loc_203ED
		INX
		BNE		loc_203E5
loc_203ED:
		STX		byte_78
		DEX
		TXA
		TAY
		LDA		byte_63E
		CMP		#1
		BEQ		loc_20409
		DEX
		TXA
		LSR
		BCC		loc_20408
		TAY
		LDA		word_4
		CLC
		ADC		#$B
		STA		word_4
		BNE		loc_20409
loc_20408:
		TAY
loc_20409:
		INC		word_4+1
		INC		word_4+1
		DEY
		BNE		loc_20409
loc_20410:
		JSR		sub_20434
		JSR		_calc_pads
		LDA		_pads
		AND		#$F0
		BNE		sub_20448
		LDA		_pads
		LSR
		BCS		loc_20427
		LSR
		BCC		loc_20410
		LDA		#$FF
		RTS
loc_20427:
		LDX		#$73
		JSR		sub_20441
		SYSX	_apu_load,$85
		LDA		byte_78
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20434:
		LDX		#$73
		LDA		byte_79
		CLC
		ADC		#8
		STA		byte_79
		BPL		sub_20441

; =============== S U B	R O U T	I N E =======================================
sub_2043F:
		LDX		#0

; =============== S U B	R O U T	I N E =======================================
sub_20441:
		TXA
		JSR		_print_char
		JMP		_ppu_force_dequeue

; =============== S U B	R O U T	I N E =======================================
sub_20448:
		JSR		sub_20451
		JMP		loc_20410

; =============== S U B	R O U T	I N E =======================================
sub_2044E:
		JMP		sub_204EE

; =============== S U B	R O U T	I N E =======================================
sub_20451:
		PHA
		LDA		word_4
		STA		byte_7A
		LDA		word_4+1
		STA		byte_7B
		PLA
		ASL
		BCS		sub_2044E
		ASL
		BCS		loc_204B4
		ASL
		BCS		loc_204B7
		LDX		byte_78
loc_20466:
		TXA
		BEQ		locret_2049B
		DEC		byte_7B
		DEC		byte_7B
		TXA
		SEC
		SBC		byte_63E
		TAX
		BMI		loc_2049C
		LDA		byte_634,X
		BNE		loc_20466
		STX		byte_78
		JSR		sub_2043F
		LDA		byte_7E
		CMP		#6
		BNE		loc_2048D
		LDA		byte_7B
		CMP		#1
		BNE		loc_2048D
		INC		byte_7B
loc_2048D:
		LDA		byte_7B
		STA		word_4+1
		LDA		#0
		STA		byte_79
		LDA		_pads+2
		ORA		#$10
		STA		_pads+2
locret_2049B:
		RTS
loc_2049C:
		LDA		byte_63E
		CMP		#1
		BEQ		locret_2049B
		INX
		LDA		byte_634,X
		BNE		locret_2049B
		STX		byte_78
		JSR		sub_2059E
		INC		byte_7B
		INC		byte_7B
		BNE		loc_2048D
loc_204B4:
		JMP		sub_20588
loc_204B7:
		LDX		byte_78
loc_204B9:
		INC		byte_7B
		INC		byte_7B
		TXA
		CLC
		ADC		byte_63E
		TAX
		CPX		#$A
		BCS		locret_2049B
		LDA		byte_634,X
		BNE		loc_204B9
		STX		byte_78
		JSR		sub_2043F
		LDA		byte_7E
		CMP		#6
		BNE		loc_204DF
		LDA		byte_7B
		CMP		#4
		BNE		loc_204DF
		DEC		byte_7B
loc_204DF:
		LDA		byte_7B
		STA		word_4+1
		LDA		#0
		STA		byte_79
		LDA		_pads+2
		ORA		#$20
		STA		_pads+2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_204EE:
		LDA		byte_63E
		CMP		#1
		BEQ		locret_20518
		LDA		byte_78
		TAX
		AND		#1
		BNE		locret_20518
		INX
		LDA		byte_634,X
		BNE		loc_20519
		STX		byte_78
		JSR		sub_2043F
loc_20507:
		LDA		word_4
		CLC
		ADC		#$B
		STA		word_4
		LDA		#0
		STA		byte_79
		LDA		_pads+2
		ORA		#$80
		STA		_pads+2
locret_20518:
		RTS
loc_20519:
		JSR		sub_20522
		BCC		locret_20518
		INC		byte_78
		BNE		loc_20507

; =============== S U B	R O U T	I N E =======================================
sub_20522:
		TXA
		PHA
		LDY		#0
		CPX		#2
		BCC		loc_20538
loc_2052A:
		DEX
		DEX
		CPX		#2
		BCC		loc_20538
		INY
		LDA		byte_634,X
		BNE		loc_2052A
		BEQ		loc_2053A
loc_20538:
		LDY		#0
loc_2053A:
		STY		byte_7F
		LDY		#0
		PLA
		TAX
loc_20540:
		INX
		INX
		CPX		#$A
		BCS		loc_2054E
		INY
		LDA		byte_634,X
		BNE		loc_20540
		BEQ		loc_20550
loc_2054E:
		LDY		#0
loc_20550:
		TYA
		ORA		byte_7F
		BNE		loc_20557
		CLC
		RTS
loc_20557:
		TYA
		BEQ		loc_20577
		LDX		byte_7F
		BEQ		loc_20564
		CMP		byte_7F
		BEQ		loc_20564
		BCS		loc_20577
loc_20564:
		STA		byte_7F
		JSR		sub_2043F
loc_20569:
		INC		word_4+1
		INC		word_4+1
		INC		byte_78
		INC		byte_78
		DEC		byte_7F
		BNE		loc_20569
		SEC
		RTS
loc_20577:
		JSR		sub_2043F
loc_2057A:
		DEC		word_4+1
		DEC		word_4+1
		DEC		byte_78
		DEC		byte_78
		DEC		byte_7F
		BNE		loc_2057A
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20588:
		LDA		byte_63E
		CMP		#1
		BEQ		locret_205B2
		LDA		byte_78
		TAX
		AND		#1
		BEQ		locret_205B2
		DEX
		LDA		byte_634,X
		BNE		sub_205B3
		STX		byte_78

; =============== S U B	R O U T	I N E =======================================
sub_2059E:
		JSR		sub_2043F
loc_205A1:
		LDA		word_4
		SEC
		SBC		#$B
		STA		word_4
		LDA		#0
		STA		byte_79
		LDA		_pads+2
		ORA		#$40
		STA		_pads+2
locret_205B2:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_205B3:
		JSR		sub_20522
		BCC		locret_205B2
		DEC		byte_78
		JMP		loc_205A1
byte_205BD:
		.BYTE	  5,  4,  5,$14,  5,$14,  5,$14,  7,$12,  9, $A, $D,  3,$11,  4

; =============== S U B	R O U T	I N E =======================================
sub_205CD:
		LDA		byte_7E
		CMP		#4
		BEQ		loc_205D4
		RTS
loc_205D4:
		LDX		#0
loc_205D6:
		LDA		byte_205E2,X
		STA		_window_draw_buf+4,X
		INX
		CPX		#6
		BNE		loc_205D6
		RTS
byte_205E2:
		.BYTE	$79,$3B,$2C,$29,$36,$29

; =============== S U B	R O U T	I N E =======================================
sub_205E8:
		LDA		byte_74
		ASL
		TAX
		LDA		#$77
		STA		_window_draw_buf,X
		TXA
		CLC
		ADC		byte_74
		TAX
		LDA		#$77
		STA		_window_draw_buf,X
		DEX
		LDA		#$7C
		STA		_window_draw_buf,X
		TXA
		CLC
		ADC		byte_74
		TAX
		LDA		#$7C
		STA		_window_draw_buf,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2060C:
		JSR		sub_17474C
		LDA		byte_470
		CLC
		ADC		#$10
		STA		byte_470

; =============== S U B	R O U T	I N E =======================================
sub_20618:
		LDA		byte_74
		ASL
		TAY
		ASL
		TAX
loc_2061E:
		LDA		_window_draw_buf-1,X
		STA		_window_draw_buf-1,Y
		DEX
		DEY
		BNE		loc_2061E

; =============== S U B	R O U T	I N E =======================================
sub_20628:
		LDA		byte_74
		ASL
		TAY
		ASL
		TAX
		DEX
		LDA		#0
loc_20631:
		STA		_window_draw_buf,X
		DEX
		DEY
		BNE		loc_20631
		LDA		byte_76
		STA		byte_77
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2063D:
		JSR		sub_20628
		JSR		sub_205E8
		JSR		sub_20618
		LDA		#$7A
		STA		_window_draw_buf
		LDX		byte_74
		DEX
		LDA		#$7D
		STA		_window_draw_buf,X
		DEX
		LDA		#$78
loc_20656:
		STA		_window_draw_buf,X
		DEX
		BNE		loc_20656
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2065D:
		JSR		sub_205E8
		LDA		byte_74
		TAY
		DEY
		DEY
		ASL
		ASL
		TAX
		DEX
		LDA		#$7F
		STA		_window_draw_buf,X
		DEX
		LDA		#$7E
loc_20671:
		STA		_window_draw_buf,X
		DEX
		DEY
		BNE		loc_20671
		LDA		#$7B
		STA		_window_draw_buf,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2067E:
		LDA		byte_75
		CMP		#1
		BNE		loc_20685
		RTS
loc_20685:
		JMP		(word_6C)

; =============== S U B	R O U T	I N E =======================================
sub_20688:
		LDX		byte_77
		STA		_window_draw_buf,X
		INC		byte_77
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20690:
		LDY		byte_77
		LDA		#0
loc_20694:
		STA		_window_draw_buf,Y
		INY
		DEX
		BNE		loc_20694
		STY		byte_77
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2069E:
		LDA		#0
		STA		_window_draw_buf+1
		LDA		#$64
		STA		_window_draw_buf+2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_206A9:
		STA		byte_78
		CMP		#1
		BEQ		loc_206C1
		LDA		word_4
		ORA		word_4+1
		ORA		word_6
		BNE		loc_206C1
		LDX		#7
loc_206B9:
		STA		byte_8,X
		DEX
		BNE		loc_206B9
		BEQ		loc_206CD
loc_206C1:
		FARX	_bE_s14
		LDX		#0
loc_206C6:
		INC		byte_9,X
		INX
		CPX		#7
		BNE		loc_206C6
loc_206CD:
		LDA		byte_77
		TAX
		CLC
		ADC		byte_78
		STA		byte_77
		LDA		#7
		SEC
		SBC		byte_78
		TAY
loc_206DB:
		LDA		byte_9,Y
		STA		_window_draw_buf,X
		INX
		INY
		CPY		#7
		BNE		loc_206DB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_206E8:
		LDX		#7
		LDY		#9
		JMP		sub_20707

; =============== S U B	R O U T	I N E =======================================
sub_206EF:
		LDX		#4
		LDY		#9
		JMP		sub_20707

; =============== S U B	R O U T	I N E =======================================
sub_206F6:
		LDX		#2
		LDY		#$B
		JMP		sub_20707

; =============== S U B	R O U T	I N E =======================================
sub_206FD:
		LDX		#0
		LDY		#$C
		BNE		sub_20707

; =============== S U B	R O U T	I N E =======================================
sub_20703:
		LDX		#1
		LDY		#$A

; =============== S U B	R O U T	I N E =======================================
sub_20707:
		STY		byte_78
		FARX	_b2_sC
		LDY		#0
loc_2070E:
		LDX		byte_77
		INC		byte_77
		LDA		word_4,Y
		STA		_window_draw_buf,X
		INY
		INC		byte_79
		DEC		byte_78
		BNE		loc_2070E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20720:
		LDA		byte_7E
		ASL
		CLC
		ADC		byte_7E
		TAX
		LDA		byte_2038F,X
		STA		byte_75
		AND		#$F
		ORA		#$10
		STA		byte_471
		AND		#$F
		ASL
		STA		byte_74
		LDA		byte_2038F+1,X
		STA		byte_470
		LSR		byte_75
		LSR		byte_75
		LSR		byte_75
		LSR		byte_75
		LDA		byte_2038F+2,X
		STA		byte_76
		LDX		#0
		STX		byte_7B
		TXA
loc_20750:
		STA		_window_draw_buf+$60,X
		INX
		CPX		#$10
		BNE		loc_20750
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20759:
		STA		byte_7E
		ASL
		CLC
		ADC		byte_7E
		TAX
		LDA		byte_75
		PHA
		LDY		#0
		JSR		sub_20775
		INY
		INY
		INX
		JSR		sub_20775
		PLA
		STA		byte_74
		FARX	_bE_s12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20775:
		LDA		byte_2038F,X
		LSR
		LSR
		LSR
		LSR
		STA		byte_74,Y
		LDA		byte_2038F,X
		AND		#$F
		STA		byte_75,Y
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_sA:
		FARX	_b4_sA
		LDA		byte_566
		AND		#$F3
		STA		byte_566
		JSR		sub_207B6
		LDA		byte_566
		AND		#$C0
		BEQ		locret_207B5
		SEC
		SBC		#$40
		STA		word_4
		LDA		byte_566
		AND		#$3F
		ORA		word_4
		STA		byte_566
		AND		#$C0
		BNE		locret_207B5
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$55
locret_207B5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_207B6:
		LDY		#0
loc_207B8:
		TYA
		PHA
		STA		byte_64
		ASL
		TAY
		LDA		byte_530,Y
		AND		byte_530+1,Y
		BPL		loc_207E7
		FARX	_b4_s18
		LDA		byte_59
		BEQ		loc_207E7
		ASL
		TAX
		LDA		byte_207EF-1,X
		STX		_backup_x
		FARX	_b4_sF
		LDX		_backup_x
		ADC		byte_207EF-2,X
		STA		byte_65
		LDA		#0
		STA		byte_66
		FARX	_b4_s19
loc_207E7:
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_207B8
		RTS
byte_207EF:
		.BYTE	$10,  8,$2C, $C,$5A,$14

; =============== S U B	R O U T	I N E =======================================
_b1_sB:
		LDX		#0
loc_207F7:
		TXA
		PHA
		STA		byte_CE
		LDA		#$FB
		AND		_player_battle_order_and_flags,X
		STA		_player_battle_order_and_flags,X
		AND		#8
		BEQ		loc_2080F
		LDA		#4
		ORA		_player_battle_order_and_flags,X
		STA		_player_battle_order_and_flags,X
loc_2080F:
		LDA		#$44
		STA		byte_CF
		FARX	_b0_s45_check_if_item_equipped
		LDA		word_4
		CMP		#$C4
		BNE		loc_20828
		PLA
		PHA
		ASL
		TAX
		LDA		_players_status+1,X
		ORA		#$10
		STA		_players_status+1,X
loc_20828:
		PLA
		TAX
		INX
		CPX		#4
		BNE		loc_207F7
loc_2082F:
		DEX
		BMI		loc_2083D
		LDA		_player_battle_order_and_flags,X
		AND		#$DF
		STA		_player_battle_order_and_flags,X
		JMP		loc_2082F
loc_2083D:
		INX
loc_2083E:
		TXA
		ASL
		TAY
		LDA		byte_530+1,Y
		AND		#$BF
		STA		byte_530+1,Y
		INX
		CPX		#8
		BNE		loc_2083E
		LDA		byte_568
		AND		#$F7
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_s9:
		LDA		#0
		STA		byte_576
		SYSX	_display_window_ex,$3D
		FARX	_b4_sA
		LDX		#0
		STX		byte_51
		STX		byte_52
loc_2086A:
		LDX		byte_51
		LDA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_20876
		JMP		loc_208FA
loc_20876:
		INC		byte_51
		LDA		byte_51
		CMP		#4
		BNE		loc_2086A
		FARX	_b4_s21_message_half_delay_or_wait_for_keypress
		FARX	_b4_s5_do_message_speed_delay
		LDA		_curent_battle_type_flags
		BNE		loc_208F6
		LDA		byte_6A6B
		BEQ		loc_20891
		JMP		loc_208F6
loc_20891:
		LDA		byte_49
		BEQ		loc_208A4
		CMP		#3
		BEQ		loc_208F6
		CMP		#1
		BNE		loc_208A4
		JSR		_rand
		CMP		#$20
		BCC		loc_208AB
loc_208A4:
		JSR		_rand
		CMP		#8
		BCS		loc_208C8
loc_208AB:
		FARX	_b4_sA
		LDA		#$A0
		STA		byte_D2
		LDX		#$6D	; select between "Suddenly mount an attack" and "Your foes mount an attack"
		JSR		_incX_if_568_not_has_bit_20
		FARX	_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		FARX	_b4_s5_do_message_speed_delay
		LDA		byte_566
		ORA		#4
		STA		byte_566
		JMP		loc_208F6
loc_208C8:
		LDA		byte_49
		CMP		#2
		BNE		loc_208D5
		JSR		_rand
		CMP		#$20
		BCC		loc_208DC
loc_208D5:
		JSR		_rand
		CMP		#8
		BCS		loc_208F6
loc_208DC:
		FARX	_b4_sA
		LDA		#$A0
		STA		byte_D2
		LDX		#$71	; select between "<name> is taking off guard" and "your foes taking off guard"
		JSR		_incX_if_568_not_has_bit_20
		FARX	_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		FARX	_b4_s5_do_message_speed_delay
		LDA		byte_566
		ORA		#8
		STA		byte_566
loc_208F6:
		FARX	_b4_sA
		RTS
loc_208FA:
		LDA		_enemy_group_count,X
		BNE		loc_20902
		JMP		loc_20876
loc_20902:
		STA		_msg_number_parameter_F8
		LDA		#0
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		LDA		byte_52
		ORA		#$80
		STA		byte_D2
		JSR		sub_20933
		LDA		byte_6A32
		ORA		#$40
		STA		byte_6A32
		JSR		_get_appearance_message_idx
		FARX	_bE_s6_msg_mFF
		INC		byte_52
		LDA		byte_6A32
		AND		#$BF
		STA		byte_6A32
		JMP		loc_20876

; =============== S U B	R O U T	I N E =======================================
sub_20933:
		LDA		byte_6A32
		AND		#$F1
		STA		byte_6A32
		JSR		sub_20987
		CPX		#3
		BCC		loc_2094B
loc_20942:
		LDA		byte_6A32
		ORA		#2
		STA		byte_6A32
		RTS
loc_2094B:
		LDY		#0
loc_2094D:
		INX
		LDA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_2094D
		LDA		_enemy_group_count,X
		BEQ		loc_2094D
		INY
		CPX		#4
		BCC		loc_2094D
		CPY		#2
		BCC		loc_20942
		BEQ		loc_2096E
		LDA		byte_6A32
		ORA		#4
		STA		byte_6A32
		RTS
loc_2096E:
		LDA		byte_6A32
		ORA		#8
		STA		byte_6A32
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_appearance_message_idx:
		LDX		#7
		LDA		byte_6A32
		AND		#$E
		LSR
		TAY
		LDA		_appearance_message_list-1,Y
		RTS
_appearance_message_list:
;		.BYTE	  0	; never used, 6A32 cannot be 0 here
		.BYTE	$13 ; $713 "$F7 <name> appear!"
		.BYTE	$14 ; $714 "$F7 <name>'"
		.BYTE	$16 ; $716 "$F7 <name> appears!"
		.BYTE	$15 ; $715 "$F7 <name> and"

; =============== S U B	R O U T	I N E =======================================
sub_20987:
		TXA
		PHA
		LDX		#0
		LDY		#0
loc_2098D:
		LDA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_2099A
		LDA		_enemy_group_count,X
		BEQ		loc_2099A
		INY
loc_2099A:
		INX
		CPX		#3
		BNE		loc_2098D
		CPY		#1
		BNE		loc_209C0
		LDX		#0
loc_209A5:
		LDA		_enemy_group_count,X
		CMP		#1
		BEQ		loc_209B3
		INX
		CPX		#3
		BNE		loc_209A5
		BEQ		loc_209C0
loc_209B3:
		PLA
		PLA
		PLA
		TAX
		LDA		byte_6A32
		ORA		#6
		STA		byte_6A32
		RTS
loc_209C0:
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_sC:
		LDA		_global_flags_array.byte2
		AND		#$DF
		STA		_global_flags_array.byte2
		SYSX	_display_window_ex,$3D
		FARX	_b4_sA
		FARX	_b4_s1B
		LDA		#0
		STA		byte_D2
; --
;		LDX		#$27	; "<name> is dead"
;		FARX	_b4_s1D_incX_if_more_than_one_char_in_party	; very hacky way to select message (not counting
;		TAX													; the X usage here instead of A directly lol)
;		CPX		#$27										; using the generic routine, but not using it's result.
;		BEQ		loc_209E6									; why not check for party here instantly then?
;		LDX		#$2B	; "<hero>'s party is wiped out"
;loc_209E6:
;		TXA
; --
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		#$27	; "<name> is dead"
		DEC		word_4
		BEQ		loc_209E6
		LDA		#$2B	; "<hero>'s party is wiped out"
loc_209E6:
; --
		LDX		#0
		FARX	_bE_s6_msg_mFF
		SYSX	_apu_load,$13
		FARX	_b0_s50_players_item_buffs_refresh
		LDA		_global_flags_array.byte5
		AND		#1
		BNE		loc_209FA
		RTS
loc_209FA:
		LDA		#$80
		STA		_players_status
		STA		_players_status+1
		LDA		#0
		STA		byte_CE
		JSR		_sram_b0_s3_player_MHP_read
		LDA		word_4
		STA		_players_HP
		LDA		word_4+1
		STA		_players_HP+1
		FARX	_b0_s4F
		FARX	_bC_s2F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20A1A:
		FARX	_bA_s12
		JSR		_pause_or_skip
		JSR		_map_music_select_and_load
		RTS

; =============== S U B	R O U T	I N E =======================================
; increase the X argument depending on bit 20 in byte_586
; used for changing battle message type
; from "<hero> does" to "Your foes does"
;
_incX_if_568_not_has_bit_20:
		LDA		byte_568
		AND		#$20
		BNE		loc_6B412
		INX
loc_6B412:
		TXA
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_sD:
		FARX	_b4_sA
		LDA		#$A0
		STA		byte_D2
		BIT		byte_568
		BMI		loc_20A5A
		BVC		loc_20A4C
		SYSX	_apu_load,$16
		JSR		sub_20CAA
		LDX		#$E	; select between "You have defeated" and "You have vanquished all your foes"
		JSR		_incX_if_568_not_has_bit_20
		JSR		_wrap_msg_m00_arg0
		FARX	_b4_s5_do_message_speed_delay
		JMP		loc_20A68
loc_20A4C:
		JSR		sub_20CAA
		LDX		#$50 ; select between "<name> start to flee" and "All your foes starts to flee"
		JSR		_incX_if_568_not_has_bit_20
		JSR		_wrap_msg_m00_arg0
		JMP		loc_20A76
loc_20A5A:
		SYSX	_apu_load,$16
		JSR		sub_20CAA
		LDX		#$5D ; select between "<name> eparts" and "All your foes depart"
		JSR		_incX_if_568_not_has_bit_20
		JSR		_wrap_msg_m00_arg0
loc_20A68:
		FARX	_bB_s7_apu_wait
		LDA		byte_6A6F
		CMP		#$84
		BEQ		sub_20A1A
		CMP		#$86
		BNE		loc_20A76
		JMP		_pause_or_skip
loc_20A76:
		JSR		_map_music_select_and_load
		LDA		byte_5D
		STA		word_4
		LDA		word_5E
		STA		word_4+1
		LDA		word_5E+1
		STA		word_6
		LDX		#word_4
		LDA		#byte_3
		FARX	_bA_s4_div24_to_8
		CMP		#1
		LDA		word_4+1
		TAY
		LDA		word_4
		LDX		#byte_5D
		JSR		_add_16_to_24
		JSR		sub_20CB4
		LDY		#$21	; "<name> gains experience points"
		LDA		word_4
		CMP		#1
		BEQ		loc_20AB7
		LDA		word_4
		LDX		#byte_5D
		FARX	_bA_s4_div24_to_8
		CMP		#1
		LDA		#0
		TAY
		JSR		_add_16_to_24
		LDY		#$B5	; "All party members gains experience points"
loc_20AB7:
		LDX		#0
		STX		word_4
loc_20ABB:
		LDA		byte_5D,X
		STA		_msg_number_parameter_F8,X
		ORA		word_4
		STA		word_4
		INX
		CPX		#3
		BNE		loc_20ABB
		LDA		word_4
		BEQ		loc_20AED
		TYA				; "... gains experience points" message
		JSR		_wrap_msg_m00_arg0
		LDA		byte_5D
		STA		byte_CF
		LDA		word_5E
		STA		byte_D0
		LDA		word_5E+1
		STA		byte_D1
		LDX		#0
loc_20ADF:
		STX		byte_CE
		TXA
		PHA
		JSR		_sram_b0_s1A_player_EXP_add
		PLA
		TAX
		INX
		CPX		#4
		BNE		loc_20ADF
loc_20AED:
		LDA		_battle_type_fight
		CMP		#$FF
		BNE		loc_20AF6
		JMP		loc_20BE7
loc_20AF6:
		STA		byte_64
; runs loot drop calculator
		FARX	_b4_s17
		LDA		byte_59
		CMP		#$FF
		BNE		loc_20B04
		JMP		loc_20BE7
loc_20B04:
		PHA
		LDA		byte_64
		STA		byte_6A73
		STA		byte_6A6F
		LDA		#$80
		STA		byte_6A77
		STA		byte_530
		STA		byte_530+1
		STA		byte_D2
		LDX		#$62	; select between "<name> had a treasure chest" and "your foes had a treasure chest"
		JSR		_incX_if_568_not_has_bit_20
		JSR		_wrap_msg_m00_arg0
		JSR		sub_20D11
		STA		byte_D2
		SYSX	_apu_load,$8F
		MSGX	_msg_m00,$064	; "<name> opens the treasure chest"
		PLA
		STA		byte_D3
		STA		byte_48
		CMP		#$1D
		BNE		loc_20B48
		BIT		_global_flags_array.byte12
		BVC		loc_20B40
		JMP		loc_20BE7
loc_20B40:
		LDA		_global_flags_array.byte12
		ORA		#$40
		STA		_global_flags_array.byte12
loc_20B48:
		MSGX	_msg_m00,$065	; "<name> finds the <item>"
		JSR		sub_20CDB
		STA		byte_D4
		STA		byte_47
		BCS		loc_20BD1
		MSGX	_msg_m00,$066	; "However the <hero>'s party cannot carry any more items"
loc_20B5E:
		MSGX	_msg_m00,$145	; "Do you want to discard something?"
		SYSX	_apu_load,$86
		SYSX	_display_window_ex,$1D
		CMP		#0
		BEQ		loc_20B87
loc_20B6F:
		LDA		byte_48
		CMP		#$77
		BCC		loc_20B7D
loc_20B75:
		MSGX	_msg_m00,$060	; "Wait, you better not give up now"
		JMP		loc_20B5E
loc_20B7D:
		STA		byte_D3
		MSGX	_msg_m00,$069	; "<name> gives up the item"
		JMP		loc_20BE7
loc_20B87:
		MSGX	_msg_m00,$06A	; "Who will discard something?"
		SYSX	_display_window_ex,$1C
		CMP		#$FF
		BEQ		loc_20B6F
		STA		byte_CE
		STA		byte_47
		MSGX	_msg_m00,$068	; "Wait will you discard"
		SYSX	_display_window_ex,$2D
		CMP		#$FF
		BEQ		loc_20B87
		STA		byte_CF
		LDA		byte_47
		STA		byte_D2
		STA		byte_CE
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		AND		#$7F
		STA		byte_D3
		TAX
		LDA		#_b0_d42_item_use_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#$10
		BNE		loc_20B75
		JSR		_sram_b0_s2A_player_inventory_item_remove
		LDA		byte_48
		STA		byte_D4
		MSGX	_msg_m00,$06B	; "<name> discards the <item> and acquires the <item>"
		JMP		loc_20BDC
loc_20BD1:
		CMP		byte_D2
		BEQ		loc_20BDC
		MSGX	_msg_m00,$12D	; "<name> gives the <item> to <name>'s ghost"
loc_20BDC:
		LDA		byte_48
		STA		byte_CF
		LDA		byte_47
		STA		byte_CE
		JSR		_sram_b0_s29_player_inventory_item_add
loc_20BE7:
		LDA		word_60
		STA		word_4
		LDA		word_60+1
		STA		word_4+1
		LDX		#word_60
		LDA		#5
		JSR		_div16_to_8
		CMP		#1
		LDA		word_4
		ADC		word_60
		STA		word_60
		LDA		word_4+1
		ADC		word_60+1
		STA		word_60+1
		BCC		loc_20C0C
		LDA		#$FF
		STA		word_60
		STA		word_60+1
loc_20C0C:
		LDA		word_60
		STA		_msg_number_parameter_F8
		STA		byte_CE
		ORA		word_60+1
		BEQ		loc_20C6F
		LDA		word_60+1
		STA		_msg_number_parameter_F8+1
		STA		byte_CF
		LDA		#0
		STA		_msg_number_parameter_F8+2
		STA		byte_D0
		JSR		_sram_b0_s1B_player_gold_add
		MSGX	_msg_m00,$026	; "You obrain <number> piece of gold"
		JSR		_rand
		AND		#3
		BNE		loc_20C6F
		LDX		#3
loc_20C36:
		TXA
		ASL
		TAY
		LDA		_players_status,Y
		AND		_players_status+1,Y
		BPL		loc_20C4A
		LDA		_players_class_gender,X					; fetch player's class. setting up money multiplier for merchant?
		AND		#7
		CMP		#CLASS_MERCHANT
		BEQ		loc_20C4F
loc_20C4A:
		DEX
		BPL		loc_20C36
		BMI		loc_20C6F
loc_20C4F:
		STX		byte_D2
		LDX		#byte_CE
		LDA		#8
		JSR		_div16_to_8
		LDA		#1
		JSR		_add8_to_16	; A = value
		LDA		byte_CE
		STA		_msg_number_parameter_F8
		LDA		byte_CF
		STA		_msg_number_parameter_F8+1
		JSR		_sram_b0_s1B_player_gold_add
		MSGX	_msg_m00,$0B6	; "you have vanquished all of your foes""
loc_20C6F:
		FARX	_b0_s47_players_next_EXP_calc			; calls a recalculation next level value for each player
		FARX	_b0_s46_players_level_up_test			; test if players are leveling up
		LDA		byte_6A6B
		CMP		#2
		BEQ		loc_20C8B
		LDA		byte_6A6B
		CMP		#$11
		BEQ		loc_20CA2
loc_20C83:
		SYSX	_display_window_ex,$13
		JMP		_pause_or_skip
loc_20C8B:
		LDA		_global_flags_array.byte15
		BPL		loc_20C83
		MSGX	_msg_m00,$00B	; "Himiko is the orochi!"
loc_20C95:
		MSGX	_msg_m00,$029	; "And so the day breaks"
		LDA		#$3C
		STA		_world_map_steps_count
		JMP		loc_20C83
loc_20CA2:
		MSGX	_msg_m00,$02A	; "The false King is no more!"
		JMP		loc_20C95

; =============== S U B	R O U T	I N E =======================================
sub_20CAA:
		LDA		#$80
		STA		byte_6A77
		LDA		#$A0
		STA		byte_D2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20CB4:
		LDX		#0
loc_20CB6:
		TXA
		ASL
		TAY
		LDA		_players_status,Y
		AND		_players_status+1,Y
		BMI		loc_20CC6
		INX
		CPX		#4
		BNE		loc_20CB6
loc_20CC6:
		STX		byte_D2
		JMP		_sram_b0_s33_count_non_dead_party_chars

; =============== S U B	R O U T	I N E =======================================
_add_16_to_24:
		ADC		0,X
		STA		0,X
		TYA
		ADC		1,X
		STA		1,X
		LDA		#0
		ADC		2,X
		STA		2,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20CDB:
		JSR		_sram_b0_s31_get_party_chars_list
		LDY		#0
loc_20CE0:
		TYA
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_20D03
		LDA		_players_status+1,X
		AND		#$40
		BNE		loc_20D03
		TXA
		ASL
		ASL
		TAX
loc_20CF6:
		LDA		_players_inventory_list,X
		CMP		#$FF
		BEQ		sub_20D0C
		INX
		TXA
		AND		#7
		BNE		loc_20CF6
loc_20D03:
		INY
		CPY		word_4
		BCC		loc_20CE0
		FARX	_b0_s3C_get_free_inventory_slot
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20D0C:
		TYA
		STA		word_4
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20D11:
		JSR		sub_20CDB
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_20D2A
		LDA		_players_status+1,X
		AND		#$40
		BNE		loc_20D2A
		LDY		word_4
		JMP		sub_20D0C
loc_20D2A:
		JSR		_sram_b0_s31_get_party_chars_list
		LDY		#0
loc_20D2F:
		TYA
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_20D41
		LDA		_players_status+1,X
		AND		#$40
		BEQ		sub_20D0C
loc_20D41:
		INY
		CPY		word_4
		BCC		loc_20D2F
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_sE:
		LDX		byte_CE
		LDA		_players_class_gender,X
		AND		#7
		CMP		#7
		BNE		loc_20D64
		TXA
		ASL
		ASL
		ASL
		TAX
		LDY		#8
		LDA		#0
loc_20D5D:
		STA		_players_spell,X
		INX
		DEY
		BNE		loc_20D5D
loc_20D64:
		LDX		byte_CE
		LDA		#1
		STA		_players_level,X
		LDA		_players_class_gender,X
		AND		#$F8
		ORA		byte_CF
		STA		_players_class_gender,X
		LSR		_players_STR,X
		LSR		_players_AGI,X
		LSR		_players_INT,X
		LSR		_players_LUCK,X
		LSR		_players_VIT,X
		TXA
		ASL
		TAX
		LSR		_players_MP+1,X
		ROR		_players_MP,X
		LSR		_players_MMP+1,X
		ROR		_players_MMP,X
		LSR		_players_MHP+1,X
		ROR		_players_MHP,X
		LDA		_players_MHP+1,X
		STA		_players_HP+1,X
		LDA		_players_MHP,X
		STA		_players_HP,X
		LDX		byte_CE
		JSR		sub_20DCE
		LDA		#0
		STA		_players_EXP+2,X
		STA		_players_EXP+1,X
		STA		_players_EXP,X
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		#8
loc_20DBD:
		LDA		_players_inventory_list,X
		CMP		#$FF
		BEQ		loc_20DC9
		AND		#$7F
		STA		_players_inventory_list,X
loc_20DC9:
		INX
		DEY
		BNE		loc_20DBD
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20DCE:
		PHA
		TXA
		STA		_tmp12+1
		ASL
		CLC
		ADC		_tmp12+1
		TAX
		PLA
		RTS


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
		FARX	_b4_sF
		STA		byte_6A6D
		FARX	_b4_s26
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_294028:
		LDA		_global_flags_array.byte2
		LSR									; test _f_Erdrick
		BCS		loc_294065					; branch down if we're Erdrick
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		LDA		byte_D2
		CMP		#4
		BCC		loc_294039
		LDA		#0
loc_294039:
		STA		byte_CE
		JSR		_sram_b0_sC_player_LV_read
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
		FARX	_b4_sF
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
		LDA		#<[byte_294217]
		STA		word_4
		LDA		#>[byte_294217]
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
		STA		_enemy_group_count,X
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
		FARX	_b4_sF
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
		FARX	_b4_sF
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
		FARX	_b4_sF
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
		FARX	_b4_sF
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
		FARX	_b4_sF
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
		FARX	_b4_sF
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

		ECHO "bank 01 free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB