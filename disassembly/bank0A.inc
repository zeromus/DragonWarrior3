
		ORG $8000

		.WORD 0
		.WORD _bA_s1
		.WORD _bA_s2
		.WORD _bA_s3
		.WORD _bA_s4_div24_to_8
		.WORD _bA_s5_add16_to_24
		.WORD _bA_s6
		.WORD _bA_s7_nullsub
		.WORD _bA_s8
		.WORD _bA_s9_nullsub
		.WORD _bA_sA
		.WORD _bA_sB
		.WORD _bA_sC
		.WORD _bA_sD
		.WORD _bA_sE
		.WORD _bA_sF
		.WORD _bA_s10
		.WORD _bA_s11
		.WORD _bA_s12
		.WORD 0
		.WORD _bA_d14
		.WORD _bA_d15
		.WORD _bA_s16
		.WORD _bA_s17

; =============== S U B	R O U T	I N E =======================================
_get_text_block_ptr:
		STX		word_72+1
		STA		word_72
		PHA
		LSR		word_72+1
		ROR		word_72
		LSR		word_72+1
		ROR		word_72
		LSR		word_72+1
		ROR		word_72
		LDA		word_7C
		SEC
		SBC		#$10
		ASL
		TAX
		LDA		_text_lib_ptrs,X
		STA		word_4
		LDA		_text_lib_ptrs+1,X
		STA		word_4+1
		LDA		word_72
		AND		#$FE
		CLC
		ADC		word_4
		STA		word_4
		LDA		word_72+1
		ADC		word_4+1
		STA		word_4+1
		LDY		#0
		LDA		(word_4),Y
		STA		word_72
		INY
		LDA		(word_4),Y
		STA		word_72+1
		PLA
		AND		#$F
		RTS
_b10_text_lib:
		.WORD _b10_txt_block0
		.WORD _b10_txt_block1
		.WORD _b10_txt_block2
		.WORD _b10_txt_block3
		.WORD _b10_txt_block4
		.WORD _b10_txt_block5
		.WORD _b10_txt_block6
		.WORD _b10_txt_block7
		.WORD _b10_txt_block8
		.WORD _b10_txt_block9
		.WORD _b10_txt_blockA
		.WORD _b10_txt_blockB
		.WORD _b10_txt_blockC
		.WORD _b10_txt_blockD
		.WORD _b10_txt_blockE
		.WORD _b10_txt_blockF
		.WORD _b10_txt_block10
		.WORD _b10_txt_block11
		.WORD _b10_txt_block12
		.WORD _b10_txt_block13
		.WORD _b10_txt_block14
		.WORD _b10_txt_block15
		.WORD _b10_txt_block16
		.WORD _b10_txt_block17
		.WORD _b10_txt_block18
		.WORD _b10_txt_block19
_b11_text_lib:
		.WORD _b11_txt_block0
		.WORD _b11_txt_block1
		.WORD _b11_txt_block2
		.WORD _b11_txt_block3
		.WORD _b11_txt_block4
		.WORD _b11_txt_block5
		.WORD _b11_txt_block6
		.WORD _b11_txt_block7
		.WORD _b11_txt_block8
		.WORD _b11_txt_block9
		.WORD _b11_txt_blockA
		.WORD _b11_txt_blockB
		.WORD _b11_txt_blockC
		.WORD _b11_txt_blockD
		.WORD _b11_txt_blockE
		.WORD _b11_txt_blockF
		.WORD _b11_txt_block10
		.WORD _b11_txt_block11
		.WORD _b11_txt_block12
		.WORD _b11_txt_block13
		.WORD _b11_txt_block14
		.WORD _b11_txt_block15
		.WORD _b11_txt_block16
		.WORD _b11_txt_block17
		.WORD _b11_txt_block18
		.WORD _b11_txt_block19
		.WORD _b11_txt_block1A
		.WORD _b11_txt_block1B
		.WORD _b11_txt_block1C
_b12_text_lib:
		.WORD _b12_txt_block0
		.WORD _b12_txt_block1
		.WORD _b12_txt_block2
		.WORD _b12_txt_block4
		.WORD _b12_txt_block5
		.WORD _b12_txt_block6
		.WORD _b12_txt_block7
		.WORD _b12_txt_block8
		.WORD _b12_txt_block9
		.WORD _b12_txt_blockA
		.WORD _b12_txt_blockB
		.WORD _b12_txt_blockC
		.WORD _b12_txt_blockD
		.WORD _b12_txt_blockE
_b13_text_lib:
		.WORD _b13_txt_block0
		.WORD _b13_txt_block1
		.WORD _b13_txt_block2
		.WORD _b13_txt_block3
		.WORD _b13_txt_block4
		.WORD _b13_txt_block5
		.WORD _b13_txt_block6
		.WORD _b13_txt_block7
		.WORD _b13_txt_block8
		.WORD _b13_txt_block9
		.WORD _b13_txt_blockA
		.WORD _b13_txt_blockB
		.WORD _b13_txt_blockC
		.WORD _b13_txt_blockD
		.WORD _b13_txt_blockE
		.WORD _b13_txt_blockF
		.WORD _b13_txt_block10
		.WORD _b13_txt_block11
		.WORD _b13_txt_block12
		.WORD _b13_txt_block13
		.WORD _b13_txt_block14
		.WORD _b13_txt_block15
_b14_text_lib:
		.WORD _b14_txt_block0
		.WORD _b14_txt_block1
		.WORD _b14_txt_block2
		.WORD _b14_txt_block3
		.WORD _b14_txt_block4
		.WORD _b14_txt_block5
		.WORD _b14_txt_block6
		.WORD _b14_txt_block7
		.WORD _b14_txt_block8
		.WORD _b14_txt_block9
		.WORD _b14_txt_blockA
		.WORD _b14_txt_blockB
		.WORD _b14_txt_blockC
		.WORD _b14_txt_blockD
_b15_text_lib:
		.WORD _b15_txt_block0
		.WORD _b15_txt_block1
		.WORD _b15_txt_block2
		.WORD _b15_txt_block3
		.WORD _b15_txt_block4
		.WORD _b15_txt_block5
		.WORD _b15_txt_block6
		.WORD _b15_txt_block7
		.WORD _b15_txt_block8
		.WORD _b15_txt_block9
_text_lib_ptrs:
		.WORD _b10_text_lib
		.WORD _b11_text_lib
		.WORD _b12_text_lib
		.WORD _b13_text_lib
		.WORD _b14_text_lib
		.WORD _b15_text_lib

; =============== S U B	R O U T	I N E =======================================
_bA_s1:
		LDA		byte_2F
		AND		#1
		BEQ		locret_F816D
		LDA		byte_176
		BNE		loc_F816E
locret_F816D:
		RTS
loc_F816E:
		LDA		byte_174
		AND		byte_175
		CMP		#$FF
		BNE		loc_F817B
		JMP		loc_F81D3
loc_F817B:
		JSR		sub_177668
		LDY		#0
loc_F8180:
		LDA		byte_177,Y
		BNE		loc_F8189
		INY
		JMP		loc_F8180
loc_F8189:
		TAX
		LDA		#0
		STA		byte_177,Y
		LDA		byte_103,X
		AND		#$C3
		ORA		byte_6BB
		STA		byte_103,X
		TYA
		ASL
		ASL
		ASL
		ASL
		TAX
		LDY		#0
loc_F81A2:
		LDA		byte_180,X
		STA		word_4,Y
		LDA		#$F8
		STA		byte_180,X
		INX
		INY
		CPY		#$10
		BNE		loc_F81A2
		LDX		#4
		LDY		byte_6BB
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		DEC		byte_176
		LDA		byte_6BB
		BRK
		.BYTE $13, 7		; ofs 0x00080008, -> dst _b5_s4
		JMP		_bA_s1
loc_F81D3:
		JSR		sub_F81DC
		JSR		_vblank
		JMP		sub_F81DC

; =============== S U B	R O U T	I N E =======================================
sub_F81DC:
		LDX		#0
loc_F81DE:
		STX		byte_74
		LDA		byte_177,X
		BNE		loc_F81ED
loc_F81E5:
		LDX		byte_74
		INX
		CPX		#4
		BNE		loc_F81DE
		RTS
loc_F81ED:
		LDA		byte_17B,X
		TAY
		TXA
		JSR		sub_F81F8
		JMP		loc_F81E5

; =============== S U B	R O U T	I N E =======================================
sub_F81F8:
		ASL
		ASL
		ASL
		ASL
		PHA
		LDX		#4
		JSR		sub_1741FD
		PLA
		TAX
		LDY		_tmp21
loc_F8206:
		LDA		_spr_ram,Y
		PHA
		LDA		byte_180,X
		STA		_spr_ram,Y
		PLA
		STA		byte_180,X
		INY
		INX
		TXA
		AND		#$F
		BNE		loc_F8206
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s2:
		LDX		#4
		LDA		#0
loc_F8220:
		STA		byte_54C,X
		STA		byte_653,X
		STA		byte_65B,X
		STA		byte_643,X
		STA		byte_64B,X
		INX
		CPX		#$C
		BNE		loc_F8220
		LDX		#4
		STX		byte_51
loc_F8238:
		LDX		byte_51
		LDA		byte_540,X
		AND		#$87
		BPL		loc_F8244
		JSR		sub_F824D
loc_F8244:
		INC		byte_51
		LDA		byte_51
		CMP		#$C
		BNE		loc_F8238
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F824D:
		AND		#$7F
		STA		byte_64
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_531,X
		BMI		loc_F825C
locret_F825B:
		RTS
loc_F825C:
		BRK
		.BYTE $9F, $17		; ofs 0x00068052, -> dst _b4_s29
		CMP		#2
		BEQ		locret_F825B
		BRK
		.BYTE $A0, $17		; ofs 0x00068054, -> dst _b4_s2A
		LDA		byte_59
		CMP		#0
		BEQ		sub_F827A
		CMP		#1
		BEQ		sub_F828A
		CMP		#2
		BEQ		sub_F82A4
		JSR		sub_F827A
		JMP		sub_F8294

; =============== S U B	R O U T	I N E =======================================
sub_F827A:
		JSR		_bA_s3
		LDX		byte_51
		LDA		byte_50
		STA		byte_54C,X
		LDA		byte_4F
		STA		byte_558,X
locret_F8289:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F828A:
		JSR		sub_F827A
		JSR		sub_1743B8
		AND		#1
		BEQ		locret_F8289

; =============== S U B	R O U T	I N E =======================================
sub_F8294:
		JSR		_bA_s3
		LDX		byte_51
		LDA		byte_50
		STA		byte_643,X
		LDA		byte_4F
		STA		byte_653,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F82A4:
		JSR		sub_1743B8
		AND		#3
		BEQ		sub_F827A
		CMP		#3
		BNE		loc_F82B2
		JMP		sub_F828A
loc_F82B2:
		JSR		sub_F827A
		JSR		sub_F8294
		JSR		_bA_s3
		LDX		byte_51
		LDA		byte_50
		STA		byte_64B,X
		LDA		byte_4F
		STA		byte_65B,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s3:
		LDA		#0
		STA		byte_49
loc_F82CC:
		BRK
		.BYTE $9D, $17		; ofs 0x0006804e, -> dst _b4_s27
		STA		byte_4F
		BRK
		.BYTE $9E, $17		; ofs 0x00068050, -> dst _b4_s28
		STA		byte_50
		BCS		locret_F82E7
		LDA		byte_49
		CMP		#$FF
		BNE		loc_F82CC
		LDA		#2
		STA		byte_4F
		BRK
		.BYTE $A1, $17		; ofs 0x00068056, -> dst _b4_s2B
		STA		byte_50
locret_F82E7:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s4_div24_to_8:
		STA		_tmp21+1
		TYA
		PHA
		LDY		#$18
		LDA		#0
		STA		_tmp21
loc_F82F2:
		ASL		0,X
		ROL		1,X
		ROL		2,X
		ROL		_tmp21
		INC		0,X
		LDA		_tmp21
		SEC
		SBC		_tmp21+1
		BCS		loc_F8307
		DEC		0,X
		BCC		loc_F8309
loc_F8307:
		STA		_tmp21
loc_F8309:
		DEY
		BNE		loc_F82F2
		PLA
		TAY
		LDA		_tmp21
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
sub_F8311:
		CLC

; =============== S U B	R O U T	I N E =======================================
_bA_s5_add16_to_24:
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
_bA_s9_nullsub:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s8:
		BRK
		.BYTE $81, $2F		; _syscall12
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		BRK
		.BYTE $91, $2F		; _syscall12
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		JSR		sub_F834B
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		BRK
		.BYTE $91, $2F		; _syscall12
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F834B:
		BRK
		.BYTE $A1, $2F		; _syscall12
		LDA		#$78
		STA		word_4
loc_F8352:
		JSR		sub_F8388
		LDA		word_4
		CMP		#$1E
		BCS		loc_F8361
		BRK
		.BYTE $9D, $2F		; _syscall12
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
loc_F8361:
		JSR		sub_17435B
		DEC		word_4
		BNE		loc_F8352
		LDX		#$12
loc_F836A:
		LDA		byte_F8376-1,X
		STA		_ram_pal_buf+3,X
		DEX
		BNE		loc_F836A
		JMP		sub_17435B
byte_F8376:
		.BYTE $21,$2C,$1C,  1,$2C,$1C, $F, $F, $F,$3C,$2C,$1C,$3C, $C,$1C,$3C
		.BYTE $21,$11

; =============== S U B	R O U T	I N E =======================================
sub_F8388:
		LDX		#$18
loc_F838A:
		LDY		_ram_pal_buf,X
		INY
		TYA
		AND		#$F
		CMP		#$D
		TYA
		BCC		loc_F8398
		SBC		#$D
loc_F8398:
		STA		_ram_pal_buf,X
		DEX
		BNE		loc_F838A
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_sB:
		LDA		#0
		STA		byte_10
		TAY
loc_F83A4:
		LDA		(word_3C),Y
		AND		(word_3E),Y
		BEQ		loc_F83AC
		INC		byte_10
loc_F83AC:
		INY
		CPY		#8
		BNE		loc_F83A4
		LDA		byte_10
		BEQ		loc_F83EB
		LDX		#$FF
		STX		byte_10
		LDX		#0
		STX		byte_11
		LDX		#byte_10
		JSR		_div16_to_8
		LDA		byte_10
		STA		byte_11
		JSR		sub_1743B8
		STA		_tmp12
		LDY		#0
loc_F83CD:
		LDA		(word_3C),Y
		AND		(word_3E),Y
		STA		_tmp12+1
		BEQ		loc_F83E6
		LDA		byte_11
		CMP		#$FA
		BCS		loc_F83ED
		CMP		_tmp12
		BCS		loc_F83ED
		LDA		byte_11
		CLC
		ADC		byte_10
		STA		byte_11
loc_F83E6:
		INY
		CPY		#8
		BNE		loc_F83CD
loc_F83EB:
		CLC
		RTS
loc_F83ED:
		LDA		_tmp12+1
		EOR		#$FF
		STY		word_4
		BRK
		.BYTE $B4, 7		; ofs 0x00068028, -> dst _b4_s14
		AND		#$7F
		ASL		word_4
		ASL		word_4
		ASL		word_4
		ADC		word_4
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_sA:
		JSR		_sram_bank0_sub33
		DEC		word_4
		BEQ		locret_F8461
		JSR		_sram_b0_s2C
		LDA		word_4
		BEQ		loc_F8416
		CMP		#7
		BEQ		loc_F8462
		LDA		#1
loc_F8416:
		ASL
		TAX
		LDA		off_F847D,X
		STA		word_3E
		LDA		off_F847D+1,X
		STA		word_3E+1
		BRK
		.BYTE $98, $17		; ofs 0x0003801c, -> dst _b2_sE
		JSR		_bA_sB
		BCC		loc_F8462
		STA		byte_10
		JSR		sub_1743B8
		CMP		#$50
		BCC		loc_F8462
		LDX		byte_CE
		LDA		byte_718,X
		LDX		#$DF
		AND		#7
		BEQ		loc_F843F
		INX
loc_F843F:
		TXA
		LDX		byte_10
		JSR		_get_syscall0_data_byte_X
		LDX		byte_51
		AND		#$1F
		STA		byte_558,X
		JSR		sub_F846B
		BCC		locret_F8461
		AND		#3
		STA		word_4
		LDA		byte_54C,X
		AND		#3
		ORA		word_4
		ORA		#$10
		STA		byte_54C,X
locret_F8461:
		RTS
loc_F8462:
		JSR		sub_F846B
		BCC		locret_F846A
		STA		byte_54C,X
locret_F846A:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F846B:
		LDA		#$F
		BRK
		.BYTE $54, $17		; ofs 0x00068046, -> dst _b4_s23
		LDA		byte_CE
		BRK
		.BYTE $B0, 7		; ofs 0x00068020, -> dst _b4_s10
		ORA		word_6+1
		BRK
		.BYTE $B3, 7		; ofs 0x00068026, -> dst _b4_s13
		LDX		byte_51
		RTS
off_F847D:
		.WORD byte_F8481
		.WORD byte_F8489
byte_F8481:
		.BYTE $11,$55,	0,  0,	0,  0,	0,  0 
byte_F8489:
		.BYTE $55,$5D,$55,  0,$10,$10,$10,  0,$9C,  7 

; =============== S U B	R O U T	I N E =======================================
_bA_sC:
		BRK
		.BYTE $F2, 7		; ofs 0x00080014, -> dst _b5_sA
		JSR		sub_F8682
		JSR		sub_F864D
		LDA		#$94
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		JSR		sub_F84CE
		LDA		#0
		STA		byte_28
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_sD:
		JSR		_clear_nmi_flag_10
		JSR		sub_17443A
		BRK
		.BYTE $F2, 7		; ofs 0x00080014, -> dst _b5_sA
		JSR		sub_F8682
		JSR		sub_F85B0
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A2, 7		; ofs 0x0002000a, -> dst _b1_s5
		JSR		sub_F850A
		LDA		#0
		STA		byte_28
		LDA		byte_60B7
		AND		#$7F
		STA		byte_60B7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F84CE:
		JSR		sub_F86D5
		LDA		#0
		STA		byte_28
		STA		byte_6D6
		JSR		_nmi_wait
		LDA		#$20
		STA		byte_28
		JSR		sub_F8541
		JSR		sub_F8691
		DEC		word_3C+1
		BNE		sub_F84CE
		JSR		sub_F8728
		LDA		word_3E
		CMP		#$FF
		BNE		loc_F84F6
		LDA		#$20
		BNE		loc_F8501
loc_F84F6:
		CMP		#2
		BEQ		loc_F8501
		SEC
		SBC		#$10
		BNE		loc_F8501
		LDA		#2
loc_F8501:
		STA		word_3E
		STA		word_3C+1
		DEC		word_3C
		BNE		sub_F84CE
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F850A:
		JSR		sub_F86C8
		LDA		#0
		STA		byte_28
		STA		byte_6D6
		JSR		_nmi_wait
		LDA		#$20
		STA		byte_28
		JSR		sub_F8541
		JSR		sub_F8691
		DEC		word_3C+1
		BNE		sub_F850A
		JSR		sub_F8770
		LDA		word_3C
		CMP		#6
		BCS		loc_F853C
		LDA		word_3E
		CLC
		ADC		#6
		STA		word_3E
loc_F8535:
		STA		word_3C+1
		DEC		word_3C
		BNE		sub_F850A
		RTS
loc_F853C:
		LDA		word_3E
		JMP		loc_F8535

; =============== S U B	R O U T	I N E =======================================
sub_F8541:
		LDA		#4
		STA		byte_43
		LDY		#0
		LDX		#0
		STY		word_40+1
loc_F854B:
		LDA		_PPU_STATUS
		LDA		byte_6CF2,X
		STA		_PPU_CTRL
		LDA		byte_6C70,Y
		STA		_PPU_SCROLL
		LDA		word_3E+1
		STA		_PPU_SCROLL
		INY
		INY
		INX
		INC		word_40+1
		LDA		word_40+1
		CMP		#5
		BEQ		loc_F8571
		LDA		#0
		STA		word_40+1
		JMP		loc_F8575
loc_F8571:
		EOR		#$FF
		EOR		#$80
loc_F8575:
		EOR		#$FF
		EOR		#$80
		NOP
		NOP
		NOP
		TXA
		PHA
		LDX		#5
loc_F8580:
		DEX
		BNE		loc_F8580
		PLA
		TAX
		CPY		#$80
		BEQ		loc_F8592
		EOR		#$FF
		EOR		#$80
		EOR		#1
		JMP		loc_F854B
loc_F8592:
		LDX		#0
		LDY		#0
		DEC		byte_43
		BNE		loc_F854B
		LDA		byte_6D3
		STA		_PPU_CTRL
		LDA		_PPU_STATUS
		LDA		byte_6D0
		STA		_PPU_SCROLL
		LDA		byte_6D1
		STA		_PPU_SCROLL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F85B0:
		LDA		#$30
		STA		word_3C
		LDA		#2
		STA		word_3E
		STA		word_3C+1
		LDA		#0
		STA		word_3E+1
		LDA		#$8B
		STA		word_40
		LDX		#0
		LDY		#0
loc_F85C6:
		LDA		byte_F8821,X
		STA		byte_6C70,Y
		INY
		LDA		#0
		STA		byte_6C70,Y
		INY
		INX
		CPX		#$1B
		BNE		loc_F85C6
		STA		byte_6C71,Y
		LDA		#$6D
		STA		byte_6C70,Y
		INY
		INY
		DEX
loc_F85E3:
		LDA		byte_F8821,X
		STA		byte_6C70,Y
		INY
		LDA		#0
		STA		byte_6C70,Y
		INY
		DEX
		BPL		loc_F85E3
		LDX		#0
loc_F85F5:
		LDA		byte_F883C,X
		STA		byte_6C70,Y
		INY
		LDA		#0
		STA		byte_6C70,Y
		INY
		INX
		CPX		#4
		BNE		loc_F85F5
		STA		byte_6C71,Y
		LDA		#$B3
		STA		byte_6C70,Y
		INY
		INY
		DEX
loc_F8612:
		LDA		byte_F883C,X
		STA		byte_6C70,Y
		INY
		LDA		#0
		STA		byte_6C70,Y
		INY
		DEX
		BPL		loc_F8612
		LDA		#$C0
		STA		byte_6C70,Y
		INY
		LDA		#$B0
		STA		byte_6C70,Y
		INY
		LDA		#$91
loc_F8630:
		STA		byte_6C70,Y
		INY
		CPY		#$8C
		BNE		loc_F8630
		LDA		#$90
loc_F863A:
		STA		byte_6C70,Y
		INY
		CPY		#$AF
		BNE		loc_F863A
		LDA		#$91
loc_F8644:
		STA		byte_6C70,Y
		INY
		CPY		#$C2
		BNE		loc_F8644
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F864D:
		LDA		#$30
		STA		word_3C
		LDA		#1
		STA		word_3C+1
		LDA		#$FF
		STA		word_3E
		LDA		byte_6D1
		STA		word_3E+1
		LDA		#0
		STA		word_40
		TAX
loc_F8663:
		LDA		byte_6D0
		STA		byte_6C70,X
		INX
		LDA		#0
		STA		byte_6C70,X
		INX
		CPX		#$80
		BNE		loc_F8663
		LDX		#0
		LDA		byte_6D3
loc_F8679:
		STA		byte_6CF2,X
		INX
		CPX		#$40
		BNE		loc_F8679
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F8682:
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
_nmi_wait:
		LDA		_nmi_counter
loc_F868B:
		CMP		_nmi_counter
		BEQ		loc_F868B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F8691:
		LDX		#$7F
loc_F8693:
		LDA		byte_6C70,X
		INX
		INX
		STA		byte_6C70,X
		DEX
		DEX
		DEX
		CPX		#$FF
		BNE		loc_F8693
		LDA		byte_6CF0
		STA		byte_6C70
		LDA		byte_6CF1
		STA		byte_6C71
		LDA		byte_6D31
		PHA
		LDX		#$3E
loc_F86B4:
		LDA		byte_6CF2,X
		INX
		STA		byte_6CF2,X
		DEX
		DEX
		CPX		#$FF
		BNE		loc_F86B4
		PLA
		STA		byte_6CF2
		INC		word_40
locret_F86C7:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F86C8:
		LDA		word_3C
		CMP		#$29
		BCC		locret_F86C7
		SEC
		SBC		#$29
		LSR
		JMP		loc_F86E3

; =============== S U B	R O U T	I N E =======================================
sub_F86D5:
		LDX		word_3C
		CPX		#9
		BCS		locret_F86C7
		DEX
		TXA
		LSR
		EOR		#3
		CLC
		ADC		#1
loc_F86E3:
		ASL
		ASL
		ASL
		ASL
		STA		byte_42
		LDX		#0
		LDA		#$BF
		STA		byte_300,X
		INX
		LDA		#$20
		STA		byte_300,X
		INX
		LDA		#0
		STA		byte_300,X
		INX
		LDY		#1
loc_F86FF:
		TXA
		SEC
		SBC		#3
		AND		#3
		BEQ		loc_F8713
		LDA		_ram_pal_buf,Y
		SEC
		SBC		byte_42
		CMP		#$40
		BCC		loc_F8717
		BCS		loc_F8714
loc_F8713:
		DEY
loc_F8714:
		LDA		_ram_pal_buf
loc_F8717:
		STA		byte_300,X
		INX
		INY
		CPY		#$20
		BNE		loc_F86FF
		LDA		#1
		STA		byte_6D9
		JMP		sub_1742BA

; =============== S U B	R O U T	I N E =======================================
sub_F8728:
		LDA		word_40
		ASL
		AND		#$7F
		TAY
		LDX		#0
loc_F8730:
		LDA		byte_6C71,Y
		CLC
		ADC		word_F87A1+1,X
		STA		byte_6C71,Y
		LDA		byte_6C70,Y
		STA		byte_44
		ADC		word_F87A1,X
		STA		byte_6C70,Y
		EOR		byte_44
		BPL		loc_F874B
		BMI		sub_F8758
loc_F874B:
		INY
		INY
		TYA
		AND		#$7F
		TAY
		INX
		INX
		CPX		#$80
		BNE		loc_F8730
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F8758:
		LDA		byte_44
		SEC
		SBC		#$20
		CMP		#$C0
		BCC		locret_F876F
		TYA
		PHA
		LSR
		TAY
		LDA		#1
		EOR		byte_6CF2,Y
		STA		byte_6CF2,Y
		PLA
		TAY
locret_F876F:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F8770:
		LDA		word_40
		ASL
		AND		#$7F
		TAY
		LDX		#0
loc_F8778:
		LDA		byte_6C71,Y
		SEC
		SBC		word_F87A1+1,X
		STA		byte_6C71,Y
		LDA		byte_6C70,Y
		STA		byte_44
		SBC		word_F87A1,X
		STA		byte_6C70,Y
		EOR		byte_44
		BPL		loc_F8794
		JSR		sub_F8758
loc_F8794:
		INY
		INY
		TYA
		AND		#$7F
		TAY
		INX
		INX
		CPX		#$80
		BNE		loc_F8778
		RTS
word_F87A1:
		.WORD	  0,$3000,$6000,$8000,$B000,$E000,$1001,$3001
		.WORD $5001,$7001,$9001,$B001,$C001,$D001,$E001,$E001
		.WORD $F001,$E001,$E001,$D001,$C001,$B001,$9001,$7001
		.WORD $5001,$3001,$1001,$E000,$B000,$8000,$6000,$3000
		.WORD	  0,$D0FF,$A0FF,$80FF,$50FF,$20FF,$F0FE,$D0FE
		.WORD $B0FE,$90FE,$70FE,$50FE,$40FE,$30FE,$20FE,$20FE
		.WORD $10FE,$20FE,$20FE,$30FE,$40FE,$50FE,$70FE,$90FE
		.WORD $B0FE,$D0FE,$F0FE,$20FF,$50FF,$80FF,$A0FF,$D0FF
byte_F8821:
		.BYTE $BF,$C5,$CB,$D1,$D7,$DD,$E6,$EF,$F8,$FE,	7,$10,$19,$22,$28,$31
		.BYTE $3A,$43,$49,$4F,$55,$5B,$61,$64,$67,$6A,$6A
byte_F883C:
		.BYTE $BC,$B9,$B6,$B6
_chr_data_unk0:
		.BYTE  $C,$AA,	5, $D,$1A,$4D,$12,$2D,$F3,$55,$FA,$72,$E5,$B2,$6D,$D2
		.BYTE $2E,$55, $D,$22,	7,$55,$2A,$15,$D1,$AA,$72,$DD,$78,$AA,$D5,$6A
		.BYTE $AA,$D7,$6C,$93,$59,$C4,$90,$48,$55,$28,$93,$6C,$A6,$3B,$6F,$B7
		.BYTE	0,$40,$15,  3,$2C,$13,$5A,$25,$73,$BF,$EA,$7C,$D3,$6C,$A5,$5A
		.BYTE	2,$20,$82,$50,$BB,$AD,$52,$AC,$B5,$DF,$7D,$AF,$44,$52,$AD,$53
		.BYTE	0,$22,$49,$A2,$45,$B7,$59,$B6,$6B,$DD,$B6,$5D,$BA,$48,$A6,$49
		.BYTE	2,  2,	5,$20, $A,$B4,$29,$18,$2C,$55,$1A,$5F,$F7,$CB,$D6,$7F
		.BYTE	0,$90,	0,$40,$8C,$A4,$4C,$C0,$18,$C0,$FA,$BE,$77,$7B,$BF,$3E
		.BYTE $10,  8,	0, $B,$94,$47,$33,$4A,$4A,$85,$9E,$66,$FB,$B9,$DC,$75
		.BYTE $20,$44,$44,$90,$4C,$32,$48,$90,$52,$B2,$A8,$6E,$BF,$CD,$B7,$FE
		.BYTE	0,  0,	0,  0,$10,$2C,	4,  2,	0,  8,$80,$10,$2C,$50, $A,$45
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,$20,$82, $C,$18,  0,$50,$42
		.BYTE	0,  0,	0,  0,$20,  0,	0,  0,	0,$20,	9,$80,$50,$10,$24,$18
		.BYTE	0,  0,$20,  0,$20,$20,$40,$40,	8,$30,	0,$60,$52,$50,$A2,$24
		.BYTE	8,$10,	0,  0,	0,  0,	0,  0,$14,$28,$30,  8,$10,  0,$10,  0
		.BYTE	0,  0,$18, $C,$28,$14,$10,  0,$3C,$7C,$66,$72,$56,$2A,$2C,$18
_chr_data_unk2:
		.BYTE	8,  0,	0,  0,$2D,$F7,$97,  2,$F9,$F1,$F0,$F0,$F4,$FB,$EF,$FF
		.BYTE $14,$18,	8,  4,$86,$6E,$B7,$45,$FF,$FF,$EF,$C7,$87,$AB,$EE,$FF
		.BYTE	1,  1,	1,  2,$84,$C7,$7A,$9C,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $EE,$72,$43,$81,$80,$C0,$41,$23,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	8,  8,	0,  4,$37,$EC,$87,  2,$FE,$F8,$E0,$E0,$ED,$FF,$FF,$FF
		.BYTE $14,  8,	0,$C0,$76,$CF,$82,$45,$3F, $F,	3,  3,$EB,$BF,$FF,$FF
		.BYTE	1,  1,	1,  2,$84,$C7,$7A,$9C,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $EE,$72,$43,$81,$80,$C0,$41,$23,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	8,  0,	0,$10,$20,$E0,$F0,$38,$F9,$F1,$F0,$F0,$E0,$E0,$A0,$D9
		.BYTE $14,$18,	8,  4,	6,  3,	6,$ED,$FF,$FF,$EF,$C7,$87,  3,	5,$6B
		.BYTE $6B,  5,	1,  2,$84,$C7,$7A,$9C,$96,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $EE,$72,$43,$81,$80,$C0,$41,$23,$95,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	8,  8,	0,  0,	0,$A0,$30,$78,$FE,$F8,$E0,$C0,$C0,$E0,$D0,$E0
		.BYTE	0,  0,	0,  0,	0,  2,	3, $E,$3F, $F,	3,  1,	1,  3,	6,  5
		.BYTE $1F,$47,$30, $B,$84,$C7,$7A,$9C,$FD,$FA,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $EC,$72,	7,$D1,$80,$C0,$41,$23,$93,$EF,$FF,$FF,$FF,$FF,$FF,$FF
_chr_data_unk3:
		.BYTE	8,  0,	0,$10,$20,$E0,$80,  0,$F9,$F1,$F0,$F0,$E0,$E0,$E0,$C0
		.BYTE $14,$18,	8,  4,	6,  3,	2,  1,$FF,$FF,$EF,$C7,$87,  3,	3,  1
		.BYTE $C0,$A0,$58,$67,$BD,$C7,$7A,$9C,$C0,$C0,$E8,$BA,$F7,$FD,$FF,$FF
		.BYTE	2,  6,$1B,$F5,$9C,$70,$41,$23,	3,  3, $E,$5F,$EB,$BF,$FF,$FF
		.BYTE	8,  8,	0,  0,	0,$E0,$80,  0,$FE,$F8,$E0,$C0,$C0,$E0,$F0,$F0
		.BYTE $14,  8,	0,  0,	0,  3,	2,  5,$3F, $F,	3,  1,	1,  3,	7,  7
		.BYTE $30,$40,$30,$5C,$77,$AA,$1B,$80,$E0,$A0,$D0,$E8,$BF,$D5,$FF,$FF
		.BYTE	6,  1,	6,$1C,$F1,$14,$D1,$23,	3,  3,	5,$13,$BE,$EB,$7F,$FF
		.BYTE	8,  0,	0,$10,$20,$E0,$80,  0,$F9,$F1,$F0,$F0,$E0,$E0,$E0,$C0
		.BYTE $14,$18,	8,  4,	6,  3,	2,  1,$FF,$FF,$EF,$C7,$87,  3,	3,  1
		.BYTE	0,  0,	0,  0,$40,$90,$62,$B6,$C0,$C0,$80,$80,	0,  0,$E0,$DD
		.BYTE	0,  0,	0,  0,	1,$82,$23,$BA,	1,  0,	0,  0,	0,  0,	2,$ED
		.BYTE	8,  8,	0,  0,	0,$E0,$80,  0,$FE,$F8,$E0,$C0,$C0,$E0,$F0,$F0
		.BYTE $14,  8,	0,  0,	0,  3,	2,  5,$3F, $F,	3,  1,	1,  3,	7,  7
		.BYTE	0,  0,	0,  0,	8,$A0,$58,$B6,$F0,$E0,$C0,$80,	0,  0,	0,$A2
		.BYTE	6,  2,	1,  1,$10,  4,$91,$DB,	7,  3,	1,  1,	0,  0,$11,$CA
_chr_data_unk4:
		.BYTE	8,  0,	0,$10,$20,$E0,$80,  0,$F9,$F1,$F0,$F0,$E0,$E0,$E0,$C0
		.BYTE $14,$18,	8,  4,	6,  3,	2,  1,$FF,$FF,$EF,$C7,$87,  3,	3,  1
		.BYTE	0,  0,	0,  0,	0,  0,	0,$80,$C0,$C0,$80,$80,	0,  0,$80,$C1
		.BYTE	0,  0,	0,  0,	0,  0,	1,  3,	1,  0,	0,  0,	0,  0,	3,$87
		.BYTE	8,  8,	0,  0,	0,$E0,$80,  0,$FE,$F8,$E0,$C0,$C0,$E0,$F0,$F0
		.BYTE $14,  8,	0,  0,	0,  3,	2,  5,$3F, $F,	3,  1,	1,  3,	7,  7
		.BYTE	0,  0,	0,  0,	0,  0,	0,$80,$F0,$E0,$C0,$80,	0,  0,	0,$80
		.BYTE	6,  2,	1,  1,	0,  0,	0,  1,	7,  3,	1,  1,	0,  0,	0,  1
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,$48,$F1,$C0,$10,$C0,$60,$C0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,$B9,$51,$2F,$C3,	4,  3,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,$80,$C1,$80,$C0,	0,$80,	0,  0,$80,$C1
		.BYTE	0,  0,	0,  0,	0,  0,	0,$81,	1,  0,	0,  0,	0,  0,	2,$85
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,$E4,$80,$C0,  0,$C0,$80,$30,$D0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0, $E,  1,	0,  1,	1,  2,	4,  7
		.BYTE	0,  0,	0,  0,	0,  0,	0,$80,$C0,$60,	0,$80,	0,  0,	0,$80
		.BYTE	0,  0,	0,  0,	0,  0,	0,  1,	1,  0,	1,  1,	0,  0,	0,  1
_chr_data_unk1:
		.BYTE	8,  8,	8,$18,$24,$FA,$87,  2,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $14,$18,	8,$1C,$16,$23,$C2,$45,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	1,  1,	1,  2,$84,$C7,$7A,$9C,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $EE,$72,$43,$81,$80,$C0,$41,$23,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF

; =============== S U B	R O U T	I N E =======================================
_bA_s6:
		LDA		byte_2B
		CMP		#$48
		BNE		loc_F8C8C
		LDA		byte_2A
		CMP		#$5B
		BEQ		loc_F8C8E
loc_F8C8C:
		CLC
		RTS
loc_F8C8E:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s7_nullsub:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_sE:
		JSR		sub_F8DFC
		LDA		#0
		JSR		sub_F8E2D
		LDA		#$10
		STA		byte_584
		LDA		#$B
		STA		word_4
		LDA		#8
		STA		byte_583
		STA		word_4+1
		LDA		#$73
		STA		byte_585
		JSR		sub_1742C7
		JSR		sub_1742BA
		JSR		_vblank
		LDA		byte_588
		ASL
		CLC
		ADC		byte_583
		STA		byte_582
		LDA		#0
		STA		byte_588
loc_F8CC7:
		JSR		_calc_pads
		LDA		_pads
		PHA
		LSR
		BCC		loc_F8CEC
		PLA
		LDA		#$B
		STA		word_4
		LDA		byte_583
		STA		word_4+1
		LDA		#$73
		JSR		sub_1742C7
		JSR		sub_1742BA
		JSR		_vblank
		BRK
		.BYTE $85, $2F		; _syscall12
		LDA		byte_588
		RTS
loc_F8CEC:
		LSR
		BCC		loc_F8CF3
		PLA
		LDA		#$FF
		RTS
loc_F8CF3:
		PLA
		AND		#$20
		BEQ		loc_F8D21
		INC		byte_583
		INC		byte_583
		INC		byte_588
		LDA		byte_583
		CMP		byte_582
		BCS		loc_F8D15
		JSR		sub_F8D82
		LDA		byte_588
		JSR		sub_F8E2D
		JMP		loc_F8CC7
loc_F8D15:
		DEC		byte_588
		DEC		byte_583
		DEC		byte_583
		JMP		loc_F8D4F
loc_F8D21:
		LDA		_pads
		AND		#$10
		BEQ		loc_F8D4F
		DEC		byte_583
		DEC		byte_583
		DEC		byte_588
		LDA		byte_583
		CMP		#8
		BCC		loc_F8D43
		JSR		sub_F8DBF
		LDA		byte_588
		JSR		sub_F8E2D
		JMP		loc_F8CC7
loc_F8D43:
		INC		byte_588
		INC		byte_583
		INC		byte_583
		JMP		loc_F8D4F
loc_F8D4F:
		DEC		byte_584
		BEQ		loc_F8D6C
		LDA		#$B
		STA		word_4
		LDA		byte_583
		STA		word_4+1
		LDA		byte_585
		JSR		sub_1742C7
		JSR		sub_1742BA
		JSR		_vblank
		JMP		loc_F8CC7
loc_F8D6C:
		LDA		byte_585
		BNE		loc_F8D75
		LDA		#$73
		BNE		loc_F8D77
loc_F8D75:
		LDA		#0
loc_F8D77:
		STA		byte_585
		LDA		#$10
		STA		byte_584
		JMP		loc_F8CC7

; =============== S U B	R O U T	I N E =======================================
sub_F8D82:
		DEC		byte_583
		DEC		byte_583
		LDA		#$B
		STA		word_4
		LDA		byte_583
		STA		word_4+1
		LDA		#0
		JSR		sub_1742C7
		JSR		sub_1742BA
		JSR		_vblank
		INC		byte_583
		INC		byte_583
		LDA		#$B
		STA		word_4
		LDA		byte_583
		STA		word_4+1
		LDA		#$73
		STA		byte_585
		JSR		sub_1742C7
		JSR		sub_1742BA
		JSR		_vblank
		LDA		#$10
		STA		byte_584
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F8DBF:
		INC		byte_583
		INC		byte_583
		LDA		#$B
		STA		word_4
		LDA		byte_583
		STA		word_4+1
		LDA		#0
		JSR		sub_1742C7
		JSR		sub_1742BA
		JSR		_vblank
		DEC		byte_583
		DEC		byte_583
		LDA		#$B
		STA		word_4
		LDA		byte_583
		STA		word_4+1
		LDA		#$73
		STA		byte_585
		JSR		sub_1742C7
		JSR		sub_1742BA
		JSR		_vblank
		LDA		#$10
		STA		byte_584
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F8DFC:
		BRK
		.BYTE 5, 7		; ofs 0x0015800a, -> dst _bE_s5
		JSR		_sram_b0_s31
		LDA		word_4
		STA		byte_586
		STA		byte_588
		TAX
		DEX
		LDA		byte_F8E29,X
		STA		byte_587
		LDA		#0
		TAX
loc_F8E15:
		STA		byte_460,X
		INX
		CPX		#$10
		BCC		loc_F8E15

; =============== S U B	R O U T	I N E =======================================
sub_F8E1D:
		LDA		#0
		TAX
loc_F8E20:
		STA		byte_400,X
		INX
		CPX		#$60
		BCC		loc_F8E20
		RTS
byte_F8E29:
		.BYTE $22,$32,$42,$52

; =============== S U B	R O U T	I N E =======================================
sub_F8E2D:
		STA		byte_CE
		LDA		#0
		STA		byte_CF
		JSR		sub_F8E1D
loc_F8E36:
		JSR		sub_F8EEB
		JSR		_sram_bank0_sub28
		LDA		word_4
		STA		byte_580
		LDA		word_4+1
		STA		byte_581
		LDA		byte_CF
		TAX
		LDA		byte_F8F13,X
		STA		byte_470
		LDA		#$28
		STA		byte_471
		LDA		byte_581
		TAX
		BPL		loc_F8E63
		CMP		#$FF
		BEQ		loc_F8E91
		LDA		#$5F
		STA		byte_400
loc_F8E63:
		TXA
		AND		#$7F
		LDX		#0
		JSR		sub_F9099
		LDX		#0
loc_F8E6D:
		LDA		word_4,X
		CMP		#$60
		BEQ		loc_F8E79
		STA		byte_402,X
		INX
		BNE		loc_F8E6D
loc_F8E79:
		LDA		byte_581
		AND		#$7F
		LDX		#1
		JSR		sub_F9099
		LDX		#0
loc_F8E85:
		LDA		word_4,X
		CMP		#$60
		BEQ		loc_F8E91
		STA		byte_414,X
		INX
		BNE		loc_F8E85
loc_F8E91:
		INC		byte_CF
		JSR		_sram_bank0_sub28
		LDA		word_4
		STA		byte_580
		LDA		word_4+1
		STA		byte_581
		LDA		byte_581
		TAX
		BPL		loc_F8EAF
		CMP		#$FF
		BEQ		loc_F8EDD
		LDA		#$5F
		STA		byte_420
loc_F8EAF:
		TXA
		AND		#$7F
		LDX		#0
		JSR		sub_F9099
		LDX		#0
loc_F8EB9:
		LDA		word_4,X
		CMP		#$60
		BEQ		loc_F8EC5
		STA		byte_422,X
		INX
		BNE		loc_F8EB9
loc_F8EC5:
		LDA		byte_581
		AND		#$7F
		LDX		#1
		JSR		sub_F9099
		LDX		#0
loc_F8ED1:
		LDA		word_4,X
		CMP		#$60
		BEQ		loc_F8EDD
		STA		byte_434,X
		INX
		BNE		loc_F8ED1
loc_F8EDD:
		JSR		sub_F8F1F
		INC		byte_CF
		LDA		byte_CF
		CMP		#8
		BCS		locret_F8F12
		JMP		loc_F8E36

; =============== S U B	R O U T	I N E =======================================
sub_F8EEB:
		LDA		#0
		TAX
loc_F8EEE:
		STA		byte_400,X
		INX
		CPX		#$60
		BCC		loc_F8EEE
		LDA		#$77
		STA		byte_400
		STA		byte_410
		STA		byte_420
		STA		byte_430
		LDA		#$7C
		STA		byte_40F
		STA		byte_41F
		STA		byte_42F
		STA		byte_43F
locret_F8F12:
		RTS
byte_F8F13:
		.BYTE $18,$28,$38,$48,$58,$68,$78,$88 

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
sub_F8F1B:
		LDA		#$FF
		BNE		sub_F8F21

; =============== S U B	R O U T	I N E =======================================
sub_F8F1F:
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
sub_F8F21:
		JSR		sub_F8F2A
		JSR		sub_1742BA
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_F8F2A:
		PHA
		LDA		byte_6D9
		BEQ		loc_F8F33
		JSR		_vblank
loc_F8F33:
		LDA		#0
		STA		byte_24
		PLA
		JSR		sub_F9005
		LDA		#0
		STA		byte_25
		STA		byte_26
		LDA		byte_471
		PHA
		AND		#$F0
		LSR
		LSR
		LSR
		STA		_tmp21+1
		PLA
		AND		#$F
		ASL
		STA		_tmp21+2
		STA		byte_27
		LDX		byte_6D8
loc_F8F57:
		LDA		byte_20
		STA		byte_9
		LDA		byte_1F
		STA		byte_8
		AND		#$1F
		STA		word_4
		LDA		#$20
		SEC
		SBC		word_4
		STA		word_6
		LDA		_tmp21+2
		SEC
		SBC		word_6
		STA		word_6+1
		BEQ		loc_F8F75
		BCS		loc_F8F7C
loc_F8F75:
		LDA		_tmp21+2
		STA		word_6
		JMP		loc_F8F96
loc_F8F7C:
		JSR		sub_F8FC7
		LDA		byte_9
		EOR		#4
		STA		byte_9
		LDA		byte_8
		AND		#$1F
		STA		word_4
		LDA		byte_8
		SEC
		SBC		word_4
		STA		byte_8
		LDA		word_6+1
		STA		word_6
loc_F8F96:
		JSR		sub_F8FC7
		LDA		byte_20
		AND		#$FB
		CMP		#$23
		BCC		loc_F8FB2
		LDA		byte_1F
		CMP		#$A0
		BCC		loc_F8FB2
		AND		#$1F
		STA		byte_1F
		LDA		byte_20
		AND		#$FC
		JMP		loc_F8FBD
loc_F8FB2:
		LDA		byte_1F
		CLC
		ADC		#$20
		STA		byte_1F
		LDA		byte_20
		ADC		#0
loc_F8FBD:
		STA		byte_20
		DEC		_tmp21+1
		BNE		loc_F8F57
		STX		byte_6D8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F8FC7:
		INC		byte_24
		LDA		byte_24
		CMP		#8
		BCC		loc_F8FD6
		LDX		#0
		STX		byte_24
		JSR		sub_1742B0
loc_F8FD6:
		LDA		byte_9
		ORA		#$80
		STA		byte_300,X
		LDA		word_6
		STA		byte_301,X
		LDA		byte_8
		STA		byte_302,X
		INX
		INX
		INX
		LDA		word_6
		PHA
		LDY		byte_25
loc_F8FEF:
		LDA		byte_400,Y
		STA		byte_300,X
		INX
		INY
		DEC		word_6
		BNE		loc_F8FEF
		STY		byte_25
		PLA
		LSR
		STA		word_6
		INC		byte_6D9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F9005:
		PHA
		JSR		sub_F9014
		PLA
		BNE		loc_F900D
		RTS
loc_F900D:
		LDA		byte_20
		EOR		#4
		STA		byte_20
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F9014:
		LDA		byte_470
		ASL
		AND		#$1E
		STA		word_4
		LDA		byte_470
		LSR
		LSR
		LSR
		AND		#$1E
		STA		word_4+1
		INC		word_4+1
		JMP		sub_1742CF

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
sub_F902B:
		STA		byte_F
		LDA		#$1F
		AND		byte_10
		LSR
		LSR
		STA		byte_9
		LDA		#$80
		AND		byte_10
		LSR
		LSR
		LSR
		LSR
		ORA		byte_9
		STA		byte_9
		LDA		#3
		AND		byte_11
		ASL
		ASL
		ASL
		ASL
		ORA		#$C0
		ORA		byte_9
		STA		_tmp12
		LDX		#$23
		LDA		byte_11
		CMP		#$24
		BCC		loc_F9059
		LDX		#$27
loc_F9059:
		STX		_tmp12+1
		LDA		byte_10
		AND		#$40
		LSR
		LSR
		LSR
		LSR
		STA		byte_C
		LDA		byte_10
		AND		#2
		ORA		byte_C
		STA		byte_C
		LDA		_tmp12
		SEC
		SBC		#$C0
		TAX
		LDA		_tmp12+1
		CMP		#$23
		BEQ		loc_F907E
		TXA
		CLC
		ADC		#$40
		TAX
loc_F907E:
		LDA		byte_480,X
		STA		byte_D
		LDA		#3
		LDY		byte_C
		BEQ		loc_F908F
loc_F9089:
		ASL
		ASL		byte_F
		DEY
		BNE		loc_F9089
loc_F908F:
		EOR		#$FF
		AND		byte_D
		ORA		byte_F
		STA		byte_480,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F9099:
		BRK
		.BYTE $A4, 7		; ofs 0x00038018, -> dst _b2_sC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_sF:
		BRK
		.BYTE $21, $17		; ofs 0x0015801e, -> dst _bE_sF
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JSR		__render_on_flag10_clear_reinit
		JSR		sub_174CCF
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		JSR		_pal_fade_in
		BRK
		.BYTE $83, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE 3, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		JSR		sub_174369
		LDY		#1
		STY		byte_2F
		DEY
		LDA		#$80
		JSR		sub_1762C3
		LDA		#3
		STA		byte_644
		STA		byte_6A58
		JSR		sub_174CD5
		JSR		sub_174CCF
		BRK
		.BYTE $84, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#$20
		STA		byte_60C6
		LDA		#$29
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s10:
		LDA		byte_60C6
		AND		#$20
		BEQ		locret_F9110
		LDA		byte_30
		CMP		#7
		BNE		locret_F9110
		LDA		#$40
		STA		byte_60C6
		JSR		sub_174CCF
		BRK
		.BYTE $85, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#$2B
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
locret_F9110:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s11:
		LDA		byte_60C6
		BPL		locret_F9159
		LDA		byte_30
		CMP		#9
		BNE		locret_F9159
		LDA		byte_31
		CMP		#5
		BNE		locret_F9159
		LDA		#$50
		STA		byte_60C6
		JSR		sub_174CCF
		BRK
		.BYTE $88, $77		; _msg_m00_arg1
		BRK
		.BYTE $8D, $77		; _msg_m00_arg1
		BRK
		.BYTE $89, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		LDA		byte_60B7
		ORA		#$80
		STA		byte_60B7
		LDA		#$32
		STA		byte_7BC
		LDX		#$FF
		STX		byte_77E
		STX		byte_77F
		STX		byte_780
		STX		byte_781
		LDX		#0
		STX		byte_7BE
		STX		byte_7BD
locret_F9159:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s12:
		LDA		byte_60B7
		AND		#$DF
		STA		byte_60B7
		LDA		#$7F
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		BRK
		.BYTE $EA, 7		; ofs 0x00038010, -> dst _b2_s8_screen_hit_blink
		LDX		#3
		STX		byte_CF
		STX		byte_D0
loc_F9170:
		TXA
		PHA
		STA		byte_CE
		ASL
		TAY
		LDA		byte_73C,Y
		BPL		loc_F918B
		LDA		byte_73D,Y
		BMI		loc_F9185
		LDA		#$80
		STA		byte_73D,Y
loc_F9185:
		JSR		_sram_bank0_sub4
		JSR		_sram_bank0_sub8
loc_F918B:
		PLA
		TAX
		DEX
		BPL		loc_F9170
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		BRK
		.BYTE $71, 7		; ofs 0x0006800c, -> dst _b4_s6
		RTS
_bA_d14:
		.BYTE	0,  1,	3,  3,	4,  1, $C,  7,$11,  1,$14,  2,$2A,  1,$2D,  3
		.BYTE $2E,  2,$2F,  0,$30,  2,$34,  6,$36,  5,$3B,  8,$3D,  1,$3F,  1
		.BYTE $40,  2,$46,  6,$4E,  1,$53,  1,$55,  8,$69,  3,$6A,  1,$71,  3
		.BYTE $75,  4,$86,  1,$8B,  3,$90,  1,$9D,  6,$9F,  3,$A1,  2,$A3,  2
		.BYTE $A4,  5,$A5,  1,$A8,  3,$B2,  4,$BD,  2,$BE,$15,$BF,  2,$C5,  5
		.BYTE $CA,  1,$CB,  6,$D1,  1,$D2,  2,$D3, $C,$D4,  1,$D6,  1,$D7,  2
		.BYTE $DB,  1,$DC,  2,$DE,  1,$E5,  4,$E7,  3,$E9,  1,$EE,  2,$F0,  8
		.BYTE $F1,  1,$F2,  1,$39,  2,$A7,  3,$35,  1,$62,  1,$EB,  1,$17,  1
_bA_d15:
		.BYTE $FF, $F,$4E,$42,$5A,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$48,  8,	1,$FF
		.BYTE $82,$30,$65,$68,$A4,$21,	1,$9D,$67,$FD,$65,$C5,$FD,$34,$9F,$FE
		.BYTE $FE,$63,$FF,$FF,$FF,$FF,$FD,$FD,$FF,$FF,$63,$68,$FE,$7F,$68,$90
		.BYTE $5F,$AA,$60,$2B,$52,$FC,$88,$89,$30,$64,$68,$63,$73,$8A,$FF,$FF
		.BYTE $FF,$75,$8B,$61,$74,$9E,$62,$FF,$FF,$53,$5F,$78,$68,$71,$90,$91
		.BYTE $92,$FE,$6C,$6B,$84,$65,$60,$66,	3,$5F,	3,$64,$67,$9C,$86,$8A
		.BYTE $5B,$E2,$1A,$36,$5F,$64,$63,$60,$65,$7B,$FE,$FE,$64,$65,$A8,$FE
		.BYTE $FE,$83,$90,$C7,$87,$5F,$68,$FE,$FE,$FE,$55,$65,$61,$83,$FE,$51
		.BYTE $2A,$3B,$55,$7F,$FE,$F8,$14,$FE,$55,$69,$50,$4E,$FE,$FF,$61,$59
		.BYTE $96,$85,$5F,$8A,$83,$60,$65,$8E,$87,$68,$A6,$83,$23,$85,$45,$68
		.BYTE $4C,$9F,$FD,$40,$6F,$C5,$64,$64,$FD,$20,$FD,$B0,$FF,$FF,$6C,$FE
		.BYTE $FE,$F8,$64,$61,$64,$64,$FE,$28,$7F,$4E,$FE,$2D,$56,$44,$54,$3F
		.BYTE $7A

; =============== S U B	R O U T	I N E =======================================
_bA_s16:
		JSR		sub_174369
		JSR		_ppu_screen_clear
		JSR		sub_F946C
		JSR		_pal_fade_in
		JSR		sub_F930A
loc_F92E7:
		JSR		sub_F9319
		JSR		sub_F9336
		LDA		word_3C
		CMP		#$1A
		BCS		loc_F92F6
		JSR		sub_F933D
loc_F92F6:
		JSR		sub_1742BA
		JSR		sub_F9319
		INC		word_3C
		LDA		word_3C
		CMP		#$37
		BNE		loc_F92E7
		LDA		#0
		STA		byte_60C5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F930A:
		LDA		_txt_erdrick_story_ofs
		STA		word_6C
		LDA		_txt_erdrick_story_ofs+1
		STA		word_6C+1
		LDA		#0
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F9319:
		LDY		#4
loc_F931B:
		JSR		sub_F9322
		DEY
		BNE		loc_F931B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F9322:
		INC		byte_6D1
		LDA		byte_6D1
		CMP		#$F0
		BNE		loc_F9331
		LDA		#0
		STA		byte_6D1
loc_F9331:
		LDX		#4
		JMP		_vblank_count

; =============== S U B	R O U T	I N E =======================================
sub_F9336:
		LDA		#1
		STA		word_4+1
		JMP		sub_F93B1

; =============== S U B	R O U T	I N E =======================================
sub_F933D:
		JSR		sub_F93A4
		LDY		#0
		LDA		(word_6C),Y
		CLC
		ADC		byte_6D8
		TAX
		INY
loc_F934A:
		LDA		(word_6C),Y
		CMP		#$FF
		BEQ		loc_F935B
		CMP		#$F0
		BEQ		loc_F936A
		STA		byte_305,X
		INX
		INY
		BNE		loc_F934A
loc_F935B:
		INY
		TYA
		CLC
		ADC		word_6C
		STA		word_6C
		BCC		loc_F9366
		INC		word_6C+1
loc_F9366:
		DEC		byte_6D9
		RTS
loc_F936A:
		TYA
		PHA
		TXA
		PHA
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		LDA		byte_D2
		STA		byte_CE
		JSR		_sram_bank0_subF
		PLA
		TAX
		LDY		#0
loc_F937C:
		LDA		word_4,Y
		STA		byte_305,X
		INX
		INY
		CPY		#8
		BNE		loc_F937C
		PLA
		TAY
		INY
		JMP		loc_F934A

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
sub_F938E:
		JSR		sub_F93A4
loc_F9391:
		LDA		(word_6C),Y
		CMP		#$FF
		BEQ		loc_F935B
		CLC
		ADC		byte_6D8
		TAX
		LDA		#0
		STA		byte_305,X
		INY
		BNE		loc_F9391

; =============== S U B	R O U T	I N E =======================================
sub_F93A4:
		LDA		#$1D
		STA		word_4+1
		JSR		sub_F93B1
		LDY		#0
		LDX		byte_6D8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F93B1:
		LDA		#0
		STA		byte_6D0
		STA		word_4
		JSR		sub_1742CF
		LDX		byte_6D8
		LDA		byte_20
		ORA		#$80
		STA		byte_300,X
		LDA		#$20
		STA		byte_301,X
		LDA		byte_1F
		STA		byte_302,X
		LDY		#0
		TYA
loc_F93D2:
		STA		byte_303,X
		INX
		INY
		CPY		#$20
		BNE		loc_F93D2
		INC		byte_6D9
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s17:
		LDX		#$DC
		JSR		_vblank_count
		JSR		_vblank_count
		LDA		#$BF
		LDX		byte_6D8
		STA		byte_300,X
		LDA		#$10
		STA		byte_301,X
		LDA		#$10
		STA		byte_302,X
		LDA		#0
loc_F93FB:
		STA		byte_303,X
		INX
		CPX		#$10
		BNE		loc_F93FB
		INC		byte_6D9
		JSR		sub_1742B0
		JSR		sub_F946C
		JSR		_vblank
		LDY		#0
loc_F9411:
		LDA		#$3F
		STA		byte_300
		STA		byte_303
		STA		byte_306
		LDA		#1
		STA		byte_301
		LDA		#$11
		STA		byte_304
		LDA		#$13
		STA		byte_307
		LDA		byte_F9457,Y
		STA		byte_302
		LDA		byte_F945D,Y
		STA		byte_305
		LDA		byte_F9463,Y
		STA		byte_308
		LDA		#3
		STA		byte_6D9
		JSR		sub_1742BA
		LDX		#$F
		JSR		_vblank_count
		INY
		CPY		#7
		BNE		loc_F9411
		LDX		#$22
		JSR		_vblank_count
		JMP		_vblank_count
byte_F9457:
		.BYTE $30,$31,$21,$11,	1,  0 
byte_F945D:
		.BYTE  $F,  0,	1,$11,$21,$31 
byte_F9463:
		.BYTE $30, $F, $F,  5,	5,  5,$15,$15, $F 

; =============== S U B	R O U T	I N E =======================================
sub_F946C:
		JSR		sub_174D0D
		LDX		#2
loc_F9471:
		LDA		byte_F94C1,X
		STA		_ram_pal_buf+$D,X
		DEX
		BPL		loc_F9471
		LDX		#0
		LDY		#0
		LDA		#$30
		STA		word_3C
		LDA		#6
		STA		word_3E
loc_F9486:
		LDA		#$60
		STA		word_3C+1
		LDA		#8
		STA		word_3E+1
loc_F948E:
		LDA		word_3C
		STA		_spr_ram,X
		LDA		byte_F94C4,Y
		INY
		INX
		STA		_spr_ram,X
		LDA		byte_F94C4,Y
		INY
		INX
		STA		_spr_ram,X
		INX
		LDA		word_3C+1
		STA		_spr_ram,X
		LDA		word_3C+1
		CLC
		ADC		#8
		STA		word_3C+1
		INX
		DEC		word_3E+1
		BNE		loc_F948E
		LDA		word_3C
		CLC
		ADC		#8
		STA		word_3C
		DEC		word_3E
		BNE		loc_F9486
		RTS
byte_F94C1:
		.BYTE $30,$30,$15
byte_F94C4:
		.BYTE	1,$20,	2,$20,	3,$20,	4,$20,	4,$60,	3,$60,	2,$60,	1,$60
		.BYTE	5,$20,	6,$20,	7,$20,	8,$20,	8,$60,	7,$60,	6,$60,	5,$60
		.BYTE	9,$20, $A,$20, $B,$20,$12,$20,$12,$60, $B,$60, $A,$60,	9,$60
		.BYTE	0,$20, $C,$20, $D,$20,$13,$20,$13,$60, $D,$60, $C,$60,	0,$60
		.BYTE	0,$20, $E,$20, $F,$20,$14,$20,$14,$60, $F,$60, $E,$60,	0,$60
		.BYTE	0,$20,	0,$20,$10,$20,$11,$20,$11,$60,$10,$60,	0,$60,	0,$60
_txt_erdrick_story_ofs:
		.WORD _txt_erdrick_story
_txt_erdrick_story:
		.BYTE   2,$38,$12,$1F,$1D,  0, $B,  0,$1E,$1C,$1F, $F,  0,$21, $B,$1C
		.BYTE $1C,$13,$19,$1C,	0,$21, $B,$1D
		.BYTE $FF
		.BYTE	1, $C,$19,$1C,$18,$6A,	0, $B,$18, $E,	0,$F0,	0, $C, $F, $D
		.BYTE  $B,$17, $F
		.BYTE $FF
		.BYTE	1,$15,$18,$19,$21,$18,	0, $B,$1D,  0,$29,$1C, $E,$1C,$13, $D
		.BYTE $15,$6A,	0,$2C, $F,$1C,$19,  0,$19,$10
		.BYTE $FF
		.BYTE	3,$25,$16,$13, $B,$12, $B,$18,$6C,  0,$38,$12, $F,$1C, $F,  0
		.BYTE $21, $B,$1D,  0,$18,$19
		.BYTE $FF
		.BYTE  $B, $F,$1B,$1F, $B,$16,$6C
		.BYTE $FF
		.BYTE	0,  0
		.BYTE $FF
		.BYTE	5,$2C,$19,$21, $F,$20, $F,$1C,$6A,  0,$1D,$12,$19,$1C,$1E,$16
		.BYTE $23
		.BYTE $FF
		.BYTE	3,$1E,$12, $F,$1C, $F, $B,$10,$1E, $F,$1C,$6A,	0,$1E,$12, $F
		.BYTE	0,$2C, $F,$1C,$19
		.BYTE $FF
		.BYTE	3,$F0,	0,$17,$23,$1D,$1E, $F,$1C,$13,$19,$1F,$1D,$16,$23
		.BYTE $FF
		.BYTE	2, $E,$13,$1D, $B,$1A,$1A, $F, $B,$1C, $F, $E,	0, $B,$18, $E
		.BYTE	0,$12, $B,$1D,	0,$18,$19,$1E
		.BYTE $FF
		.BYTE	5, $C, $F, $F,$18,  0,$1D, $F, $F,$18,	0,$1D,$13,$18, $D, $F
		.BYTE $6C
		.BYTE $FF
		.BYTE	0,  0
		.BYTE $FF
		.BYTE	1,$31, $B,$18,$23,  0, $B,  0,$1D,$1E,$19,$1C,$23,  0,$12, $B
		.BYTE $1D,  0, $C, $F, $F,$18,	0,$1E,$19,$16, $E
		.BYTE $FF
		.BYTE	1,$19,$10,  0,$1E,$12, $B,$1E,	0, $E, $B,$1C,$15, $F,$1D,$1E
		.BYTE	0,$19,$10,  0,$18,$13,$11,$12,$1E,$1D
		.BYTE $FF
		.BYTE	3,$21,$12, $F,$18,  0,$29,$1C, $E,$1C,$13, $D,$15,  0,$16, $F
		.BYTE $10,$1E,	0,$12,$13,$1D
		.BYTE $FF
		.BYTE	2,$21, $F, $B,$1A,$19,$18,$6A,	0, $B,$1C,$17,$19,$1C,	0, $B
		.BYTE $18, $E,	0, $B,$17,$1F,$16, $F,$1E
		.BYTE $FF
		.BYTE  $A, $C, $F,$12,$13,$18, $E,$6C
		.BYTE $FF
		.BYTE	0,  0
		.BYTE $FF
		.BYTE	1,$30, $F,$11, $F,$18, $E,  0,$1D, $B,$23,$1D,	0,$1E,$12, $F
		.BYTE $23,  0,$12, $B,$20, $F,	0, $C, $F, $F,$18
		.BYTE $FF
		.BYTE	3,$12, $B,$18, $E, $F, $E,  0, $E,$19,$21,$18,	0,$1E,$19,  0
		.BYTE $21,$19,$1C,$1E,$12,$23
		.BYTE $FF
		.BYTE	4,$21, $B,$1C,$1C,$13,$19,$1C,$1D,  0,$19,$10,	0,$10,$1F,$1E
		.BYTE $1F,$1C, $F
		.BYTE $FF
		.BYTE	1,$11, $F,$18, $F,$1C, $B,$1E,$13,$19,$18,$1D,	0, $B,$1D,  0
		.BYTE $1E,$12, $F,  0,$37,$21,$19,$1C, $E,  0,$19,$10
		.BYTE $FF
		.BYTE	3,$29,$1C, $E,$1C,$13, $D,$15,$6A,  0,$1E,$12, $F,  0,$25,$1C
		.BYTE $17,$19,$1C,  0,$19,$10
		.BYTE $FF
		.BYTE	1,$29,$1C, $E,$1C,$13, $D,$15,$6A,  0, $B,$18, $E,  0,$1E,$12
		.BYTE  $F,  0,$29,$17, $C,$16, $F,$17,	0,$19,$10
		.BYTE $FF
		.BYTE  $A,$29,$1C, $E,$1C,$13, $D,$15,$6C
		.BYTE $FF
		.BYTE	0,  0
		.BYTE $FF
		.BYTE	0,  0
		.BYTE $FF

		ECHO "bank 0A size", [.-$8000], "free space", [$BFD8-.]

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
