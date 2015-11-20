
		ORG $8000

		.WORD 0
		.WORD _bA_s1		; data used at 8000
		.WORD _bA_s2		; data used at 8000
		.WORD _bA_s3		; data used at 8000
		.WORD _bA_s4_div24_to_8	; data used at 8000
		.WORD _bA_s5_add16_to_24
		.WORD _bA_s6		; data used at 8000
		.WORD _bA_s7_nullsub
		.WORD _bA_s8		; data used at 8000
		.WORD _bA_s9_nullsub
		.WORD _bA_sA
		.WORD _bA_sB
		.WORD _bA_sC		; data used at 8000
		.WORD _bA_sD		; data used at 8000
		.WORD _bA_sE		; data used at 8000
		.WORD _bA_sF		; data used at 8000
		.WORD _bA_s10		; data used at 8000
		.WORD _bA_s11		; data used at 8000
		.WORD _bA_s12
		.WORD 0
		.WORD _bA_d14		; data used at 8000
		.WORD _bA_d15		; data used at 8000
		.WORD _bA_s16		; data used at 8000
		.WORD _bA_s17		; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_get_text_block_ptr:			; CODE XREF: _get_msg_ptr_by_idx+B-P
		STX		word_72+1	; code used as ind data	at 8000
		STA		word_72		; code used at 8000
		PHA				; code used at 8000
		LSR		word_72+1	; code used at 8000
		ROR		word_72		; code used as ind data	at 8000
		LSR		word_72+1	; code used as ind data	at 8000
		ROR		word_72		; code used as ind data	at 8000
		LSR		word_72+1	; code used at 8000
		ROR		word_72		; code used at 8000
		LDA		word_7C		; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		#$10		; code used at 8000
		ASL		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		_text_lib_ptrs,X ; code	used as	ind data at 8000
		STA		word_4		; code used at 8000
		LDA		_text_lib_ptrs+1,X ; code used as ind data at 8000
		STA		word_4+1	; code used as ind data	at 8000
		LDA		word_72		; code used as ind data	at 8000
		AND		#$FE       ; code used as ind data at 8000
		CLC				; code used at 8000
		ADC		word_4		; code used as ind data	at 8000
		STA		word_4		; code used as ind data	at 8000
		LDA		word_72+1	; code used as ind data	at 8000
		ADC		word_4+1	; code used as ind data	at 8000
		STA		word_4+1	; code used as ind data	at 8000
		LDY		#0		; code used at 8000
		LDA		(word_4),Y	; code used as ind data	at 8000
		STA		word_72		; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		LDA		(word_4),Y	; code used at 8000
		STA		word_72+1	; code used as ind data	at 8000
		PLA				; code used at 8000
		AND		#$F		; code used at 8000
		RTS				; code used at 8000
_b10_text_lib:
		.WORD _b10_txt_block0	; DATA XREF: BANKA:_text_lib_ptrs-o
					; ind data used	at 8000
		.WORD _b10_txt_block1	; ind data used	at 8000
		.WORD _b10_txt_block2	; ind data used	at 8000
		.WORD _b10_txt_block3	; ind data used	at 8000
		.WORD _b10_txt_block4	; ind data used	at 8000
		.WORD _b10_txt_block5	; ind data used	at 8000
		.WORD _b10_txt_block6	; ind data used	at 8000
		.WORD _b10_txt_block7	; ind data used	at 8000
		.WORD _b10_txt_block8	; ind data used	at 8000
		.WORD _b10_txt_block9	; ind data used	at 8000
		.WORD _b10_txt_blockA	; ind data used	at 8000
		.WORD _b10_txt_blockB	; ind data used	at 8000
		.WORD _b10_txt_blockC	; ind data used	at 8000
		.WORD _b10_txt_blockD	; ind data used	at 8000
		.WORD _b10_txt_blockE
		.WORD _b10_txt_blockF
		.WORD _b10_txt_block10	; ind data used	at 8000
		.WORD _b10_txt_block11	; ind data used	at 8000
		.WORD _b10_txt_block12	; ind data used	at 8000
		.WORD _b10_txt_block13	; ind data used	at 8000
		.WORD _b10_txt_block14	; ind data used	at 8000
		.WORD _b10_txt_block15	; ind data used	at 8000
		.WORD _b10_txt_block16	; ind data used	at 8000
		.WORD _b10_txt_block17	; ind data used	at 8000
		.WORD _b10_txt_block18	; ind data used	at 8000
		.WORD _b10_txt_block19	; ind data used	at 8000
_b11_text_lib:
		.WORD _b11_txt_block0	; DATA XREF: BANKA:8158-o
					; ind data used	at 8000
		.WORD _b11_txt_block1	; ind data used	at 8000
		.WORD _b11_txt_block2
		.WORD _b11_txt_block3
		.WORD _b11_txt_block4
		.WORD _b11_txt_block5
		.WORD _b11_txt_block6	; ind data used	at 8000
		.WORD _b11_txt_block7	; ind data used	at 8000
		.WORD _b11_txt_block8	; ind data used	at 8000
		.WORD _b11_txt_block9	; ind data used	at 8000
		.WORD _b11_txt_blockA	; ind data used	at 8000
		.WORD _b11_txt_blockB	; ind data used	at 8000
		.WORD _b11_txt_blockC	; ind data used	at 8000
		.WORD _b11_txt_blockD	; ind data used	at 8000
		.WORD _b11_txt_blockE	; ind data used	at 8000
		.WORD _b11_txt_blockF	; ind data used	at 8000
		.WORD _b11_txt_block10	; ind data used	at 8000
		.WORD _b11_txt_block11
		.WORD _b11_txt_block12
		.WORD _b11_txt_block13
		.WORD _b11_txt_block14
		.WORD _b11_txt_block15
		.WORD _b11_txt_block16	; ind data used	at 8000
		.WORD _b11_txt_block17	; ind data used	at 8000
		.WORD _b11_txt_block18	; ind data used	at 8000
		.WORD _b11_txt_block19	; ind data used	at 8000
		.WORD _b11_txt_block1A	; ind data used	at 8000
		.WORD _b11_txt_block1B
		.WORD _b11_txt_block1C
_b12_text_lib:
		.WORD _b12_txt_block0	; DATA XREF: BANKA:815A-o
		.WORD _b12_txt_block1
		.WORD _b12_txt_block2
		.WORD _b12_txt_block4
		.WORD _b12_txt_block5
		.WORD _b12_txt_block6	; ind data used	at 8000
		.WORD _b12_txt_block7	; ind data used	at 8000
		.WORD _b12_txt_block8	; ind data used	at 8000
		.WORD _b12_txt_block9	; ind data used	at 8000
		.WORD _b12_txt_blockA	; ind data used	at 8000
		.WORD _b12_txt_blockB	; ind data used	at 8000
		.WORD _b12_txt_blockC	; ind data used	at 8000
		.WORD _b12_txt_blockD	; ind data used	at 8000
		.WORD _b12_txt_blockE	; ind data used	at 8000
_b13_text_lib:
		.WORD _b13_txt_block0	; DATA XREF: BANKA:815C-o
					; ind data used	at 8000
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
		.WORD _b13_txt_blockC	; ind data used	at 8000
		.WORD _b13_txt_blockD
		.WORD _b13_txt_blockE
		.WORD _b13_txt_blockF
		.WORD _b13_txt_block10
		.WORD _b13_txt_block11
		.WORD _b13_txt_block12
		.WORD _b13_txt_block13	; ind data used	at 8000
		.WORD _b13_txt_block14	; ind data used	at 8000
		.WORD _b13_txt_block15	; ind data used	at 8000
_b14_text_lib:
		.WORD _b14_txt_block0	; DATA XREF: BANKA:815E-o
					; ind data used	at 8000
		.WORD _b14_txt_block1	; ind data used	at 8000
		.WORD _b14_txt_block2	; ind data used	at 8000
		.WORD _b14_txt_block3
		.WORD _b14_txt_block4	; ind data used	at 8000
		.WORD _b14_txt_block5	; ind data used	at 8000
		.WORD _b14_txt_block6	; ind data used	at 8000
		.WORD _b14_txt_block7
		.WORD _b14_txt_block8
		.WORD _b14_txt_block9
		.WORD _b14_txt_blockA
		.WORD _b14_txt_blockB	; ind data used	at 8000
		.WORD _b14_txt_blockC	; ind data used	at 8000
		.WORD _b14_txt_blockD
_b15_text_lib:
		.WORD _b15_txt_block0	; DATA XREF: BANKA:8160-o
					; ind data used	at 8000
		.WORD _b15_txt_block1	; ind data used	at 8000
		.WORD _b15_txt_block2	; ind data used	at 8000
		.WORD _b15_txt_block3	; ind data used	at 8000
		.WORD _b15_txt_block4	; ind data used	at 8000
		.WORD _b15_txt_block5
		.WORD _b15_txt_block6
		.WORD _b15_txt_block7
		.WORD _b15_txt_block8
		.WORD _b15_txt_block9	; ind data used	at 8000
_text_lib_ptrs:
		.WORD _b10_text_lib	; DATA XREF: _get_text_block_ptr+18-r
					; _get_text_block_ptr+1D-r
					; data used at 8000
		.WORD _b11_text_lib	; data used at 8000
		.WORD _b12_text_lib	; data used at 8000
		.WORD _b13_text_lib	; data used at 8000
		.WORD _b14_text_lib	; data used at 8000
		.WORD _b15_text_lib	; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_s1:					; CODE XREF: _bA_s1+6E-j sub_174D56+2A-P
					; DATA XREF: BANKA:8002-o
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BEQ		locret_F816D	; code used at 8000
		LDA		byte_176	; code used at 8000
		BNE		loc_F816E	; code used at 8000
locret_F816D:				; CODE XREF: _bA_s1+4-j
		RTS				; code used at 8000
loc_F816E:				; CODE XREF: _bA_s1+9-j
		LDA		byte_174	; code used at 8000
		AND		byte_175	; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_F817B	; code used at 8000
		JMP		loc_F81D3	; code used at 8000
loc_F817B:				; CODE XREF: _bA_s1+14-j
		JSR		sub_177668	; code used at 8000
		LDY		#0		; code used at 8000
loc_F8180:				; CODE XREF: _bA_s1+24-j
		LDA		byte_177,Y	; code used at 8000
		BNE		loc_F8189	; code used at 8000
		INY				; code used at 8000
		JMP		loc_F8180	; code used at 8000
loc_F8189:				; CODE XREF: _bA_s1+21-j
		TAX				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_177,Y	; code used at 8000
		LDA		byte_103,X	; code used at 8000
		AND		#$C3       ; code used at 8000
		ORA		byte_6BB	; code used at 8000
		STA		byte_103,X	; code used at 8000
		TYA				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDY		#0		; code used at 8000
loc_F81A2:				; CODE XREF: _bA_s1+4F-j
		LDA		byte_180,X	; code used at 8000
		STA		word_4,Y	; code used at 8000
		LDA		#$F8       ; code used at 8000
		STA		byte_180,X	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		#$10		; code used at 8000
		BNE		loc_F81A2	; code used at 8000
		LDX		#4		; code used at 8000
		LDY		byte_6BB	; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		JSR		sub_174204	; code used at 8000
		DEC		byte_176	; code used at 8000
		LDA		byte_6BB	; code used at 8000
		BRK
		.BYTE $13, 7		; ofs 0x00080008, -> dst _b5_s4
		JMP		_bA_s1		; code used at 8000
loc_F81D3:				; CODE XREF: _bA_s1+16-j
		JSR		sub_F81DC	; code used at 8000
		JSR		_vblank		; code used at 8000
		JMP		sub_F81DC	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F81DC:				; CODE XREF: _bA_s1:loc_F81D3-p
		LDX		#0		; code used at 8000
loc_F81DE:				; CODE XREF: sub_F81DC+E-j
		STX		byte_74		; code used at 8000
		LDA		byte_177,X	; code used at 8000
		BNE		loc_F81ED	; code used at 8000
loc_F81E5:				; CODE XREF: sub_F81DC+19-j
		LDX		byte_74		; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_F81DE	; code used at 8000
		RTS				; code used at 8000
loc_F81ED:				; CODE XREF: sub_F81DC+7-j
		LDA		byte_17B,X	; code used at 8000
		TAY				; code used at 8000
		TXA				; code used at 8000
		JSR		sub_F81F8	; code used at 8000
		JMP		loc_F81E5	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F81F8:				; CODE XREF: sub_F81DC+16-p
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		PHA				; code used at 8000
		LDX		#4		; code used at 8000
		JSR		sub_1741FD	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDY		_tmp21		; code used at 8000
loc_F8206:				; CODE XREF: sub_F81F8+21-j
		LDA		_spr_ram,Y	; code used at 8000
		PHA				; code used at 8000
		LDA		byte_180,X	; code used at 8000
		STA		_spr_ram,Y	; code used at 8000
		PLA				; code used at 8000
		STA		byte_180,X	; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		TXA				; code used at 8000
		AND		#$F		; code used at 8000
		BNE		loc_F8206	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_s2:					; CODE XREF: _b4_s0+34-P
					; DATA XREF: BANKA:8004-o
		LDX		#4		; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
loc_F8220:				; CODE XREF: _bA_s2+16-j
		STA		byte_54C,X	; code used at 8000
		STA		byte_653,X	; code used at 8000
		STA		byte_65B,X	; code used at 8000
		STA		byte_643,X	; code used as ind data	at 8000
		STA		byte_64B,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$C		; code used as ind data	at 8000
		BNE		loc_F8220	; code used at 8000
		LDX		#4		; code used at 8000
		STX		byte_51		; code used at 8000
loc_F8238:				; CODE XREF: _bA_s2+2E-j
		LDX		byte_51		; code used at 8000
		LDA		byte_540,X	; code used at 8000
		AND		#$87       ; code used as ind data at 8000
		BPL		loc_F8244	; code used at 8000
		JSR		sub_F824D	; code used at 8000
loc_F8244:				; CODE XREF: _bA_s2+23-j
		INC		byte_51		; code used as ind data	at 8000
		LDA		byte_51		; code used as ind data	at 8000
		CMP		#$C		; code used as ind data	at 8000
		BNE		loc_F8238	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F824D:				; CODE XREF: _bA_s2+25-p
		AND		#$7F       ; code used as ind data at 8000
		STA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_530,X	; code used as ind data	at 8000
		AND		byte_531,X	; code used as ind data	at 8000
		BMI		loc_F825C	; code used as ind data	at 8000
locret_F825B:				; CODE XREF: sub_F824D+14-j
		RTS				; code used as ind data	at 8000
loc_F825C:				; CODE XREF: sub_F824D+C-j
		BRK
		.BYTE $9F, $17		; ofs 0x00068052, -> dst _b4_s29
		CMP		#2		; code used at 8000
		BEQ		locret_F825B	; code used at 8000
		BRK
		.BYTE $A0, $17		; ofs 0x00068054, -> dst _b4_s2A
		LDA		byte_59		; code used at 8000
		CMP		#0		; code used as ind data	at 8000
		BEQ		sub_F827A	; code used at 8000
		CMP		#1		; code used as ind data	at 8000
		BEQ		sub_F828A	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		sub_F82A4	; code used at 8000
		JSR		sub_F827A	; code used at 8000
		JMP		sub_F8294	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F827A:				; CODE XREF: sub_F824D+1D-j
					; sub_F824D+27-p sub_F828A-p
					; sub_F82A4+5-j	sub_F82A4:loc_F82B2-p
		JSR		_bA_s3		; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_50		; code used at 8000
		STA		byte_54C,X	; code used as ind data	at 8000
		LDA		byte_4F		; code used as ind data	at 8000
		STA		byte_558,X	; code used as ind data	at 8000
locret_F8289:				; CODE XREF: sub_F828A+8-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F828A:				; CODE XREF: sub_F824D+21-j
					; sub_F82A4+B-j
		JSR		sub_F827A	; code used at 8000
		JSR		sub_1743B8	; code used at 8000
		AND		#1		; code used at 8000
		BEQ		locret_F8289	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8294:				; CODE XREF: sub_F824D+2A-j
					; sub_F82A4+11-p
		JSR		_bA_s3		; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_50		; code used at 8000
		STA		byte_643,X	; code used at 8000
		LDA		byte_4F		; code used at 8000
		STA		byte_653,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F82A4:				; CODE XREF: sub_F824D+25-j
		JSR		sub_1743B8	; code used at 8000
		AND		#3		; code used at 8000
		BEQ		sub_F827A	; code used at 8000
		CMP		#3
		BNE		loc_F82B2
		JMP		sub_F828A
loc_F82B2:				; CODE XREF: sub_F82A4+9-j
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
_bA_s3:					; CODE XREF: sub_68931+C7-P sub_F827A-p
					; sub_F8294-p sub_F82A4+14-p
					; DATA XREF: BANKA:8006-o
		LDA		#0		; code used at 8000
		STA		byte_49		; code used as ind data	at 8000
loc_F82CC:				; CODE XREF: _bA_s3+14-j
		BRK
		.BYTE $9D, $17		; ofs 0x0006804e, -> dst _b4_s27
		STA		byte_4F		; code used at 8000
		BRK
		.BYTE $9E, $17		; ofs 0x00068050, -> dst _b4_s28
		STA		byte_50		; code used as ind data	at 8000
		BCS		locret_F82E7	; code used at 8000
		LDA		byte_49		; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_F82CC	; code used at 8000
		LDA		#2
		STA		byte_4F
		BRK
		.BYTE $A1, $17		; ofs 0x00068056, -> dst _b4_s2B
		STA		byte_50
locret_F82E7:				; CODE XREF: _bA_s3+E-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_s4_div24_to_8:			; CODE XREF: _b1_sD+62-P _b1_sD+80-P
					; DATA XREF: BANKA:8008-o
		STA		_tmp21+1	; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		LDY		#$18		; code used at 8000
		LDA		#0		; code used at 8000
		STA		_tmp21		; code used at 8000
loc_F82F2:				; CODE XREF: _bA_s4_div24_to_8+22-j
		ASL		0,X		; code used at 8000
		ROL		1,X		; code used at 8000
		ROL		2,X		; code used at 8000
		ROL		_tmp21		; code used at 8000
		INC		0,X		; code used at 8000
		LDA		_tmp21		; code used at 8000
		SEC				; code used at 8000
		SBC		_tmp21+1	; code used at 8000
		BCS		loc_F8307	; code used at 8000
		DEC		0,X		; code used at 8000
		BCC		loc_F8309	; code used at 8000
loc_F8307:				; CODE XREF: _bA_s4_div24_to_8+19-j
		STA		_tmp21		; code used at 8000
loc_F8309:				; CODE XREF: _bA_s4_div24_to_8+1D-j
		DEY				; code used at 8000
		BNE		loc_F82F2	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		LDA		_tmp21		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8311:
		CLC

; =============== S U B	R O U T	I N E =======================================
_bA_s5_add16_to_24:			; DATA XREF: BANKA:800A-o
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
_bA_s9_nullsub:				; DATA XREF: BANKA:8012-o
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s8:					; CODE XREF: sub_6B027+A-P
					; DATA XREF: BANKA:8010-o
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
		JSR		sub_F834B	; code used at 8000
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		BRK
		.BYTE $91, $2F		; _syscall12
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F834B:				; CODE XREF: _bA_s8+18-p
		BRK
		.BYTE $A1, $2F		; _syscall12
		LDA		#$78       ; code used at 8000
		STA		word_4		; code used at 8000
loc_F8352:				; CODE XREF: sub_F834B+1B-j
		JSR		sub_F8388	; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#$1E		; code used at 8000
		BCS		loc_F8361	; code used at 8000
		BRK
		.BYTE $9D, $2F		; _syscall12
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
loc_F8361:				; CODE XREF: sub_F834B+E-j
		JSR		sub_17435B	; code used at 8000
		DEC		word_4		; code used at 8000
		BNE		loc_F8352	; code used at 8000
		LDX		#$12		; code used at 8000
loc_F836A:				; CODE XREF: sub_F834B+26-j
		LDA		byte_F8376-1,X	; code used at 8000
		STA		_ram_pal_buf+3,X ; code	used at	8000
		DEX				; code used at 8000
		BNE		loc_F836A	; code used at 8000
		JMP		sub_17435B	; code used at 8000
byte_F8376:
		.BYTE $21,$2C,$1C,  1,$2C,$1C, $F, $F, $F,$3C,$2C,$1C,$3C, $C,$1C,$3C
					; DATA XREF: sub_F834B:loc_F836A-r
		.BYTE $21,$11		; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8388:				; CODE XREF: sub_F834B:loc_F8352-p
		LDX		#$18		; code used at 8000
loc_F838A:				; CODE XREF: sub_F8388+14-j
		LDY		_ram_pal_buf,X	; code used at 8000
		INY				; code used at 8000
		TYA				; code used at 8000
		AND		#$F		; code used at 8000
		CMP		#$D		; code used at 8000
		TYA				; code used at 8000
		BCC		loc_F8398	; code used at 8000
		SBC		#$D		; code used at 8000
loc_F8398:				; CODE XREF: sub_F8388+C-j
		STA		_ram_pal_buf,X	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_F838A	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_sB:					; CODE XREF: _b2_sD+1D-P _bA_sA+23-p
					; DATA XREF: BANKA:8016-o
		LDA		#0
		STA		byte_10
		TAY
loc_F83A4:				; CODE XREF: _bA_sB+10-j
		LDA		(word_3C),Y
		AND		(word_3E),Y
		BEQ		loc_F83AC
		INC		byte_10
loc_F83AC:				; CODE XREF: _bA_sB+9-j
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
loc_F83CD:				; CODE XREF: _bA_sB+4A-j
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
loc_F83E6:				; CODE XREF: _bA_sB+34-j
		INY
		CPY		#8
		BNE		loc_F83CD
loc_F83EB:				; CODE XREF: _bA_sB+14-j
		CLC
		RTS
loc_F83ED:				; CODE XREF: _bA_sB+3A-j _bA_sB+3E-j
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
_bA_sA:					; CODE XREF: sub_694DA:loc_6952A-P
					; DATA XREF: BANKA:8014-o
		JSR		_sram_bank0_sub33
		DEC		word_4
		BEQ		locret_F8461
		JSR		_sram_b0_s2C
		LDA		word_4
		BEQ		loc_F8416
		CMP		#7
		BEQ		loc_F8462
		LDA		#1
loc_F8416:				; CODE XREF: _bA_sA+C-j
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
loc_F843F:				; CODE XREF: _bA_sA+3A-j
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
locret_F8461:				; CODE XREF: _bA_sA+5-j	_bA_sA+4D-j
		RTS
loc_F8462:				; CODE XREF: _bA_sA+10-j _bA_sA+26-j
					; _bA_sA+2F-j
		JSR		sub_F846B
		BCC		locret_F846A
		STA		byte_54C,X
locret_F846A:				; CODE XREF: _bA_sA+63-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F846B:				; CODE XREF: _bA_sA+4A-p
					; _bA_sA:loc_F8462-p
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
		.WORD byte_F8481	; DATA XREF: _bA_sA+16-r _bA_sA+1B-r
		.WORD byte_F8489
byte_F8481:
		.BYTE $11,$55,	0,  0,	0,  0,	0,  0 ;	DATA XREF: BANKA:off_F847D-o
byte_F8489:
		.BYTE $55,$5D,$55,  0,$10,$10,$10,  0,$9C,  7 ;	DATA XREF: BANKA:847F-o

; =============== S U B	R O U T	I N E =======================================
_bA_sC:					; CODE XREF: sub_175516+19-P
					; DATA XREF: BANKA:8018-o
		BRK
		.BYTE $F2, 7		; ofs 0x00080014, -> dst _b5_sA
		JSR		sub_F8682	; code used at 8000
		JSR		sub_F864D	; code used at 8000
		LDA		#$94       ; code used at 8000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		JSR		sub_F84CE	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_28		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_sD:					; CODE XREF: sub_175516+23-P
					; DATA XREF: BANKA:801A-o
		JSR		_clear_nmi_flag_10 ; code used at 8000
		JSR		sub_17443A	; code used at 8000
		BRK
		.BYTE $F2, 7		; ofs 0x00080014, -> dst _b5_sA
		JSR		sub_F8682	; code used at 8000
		JSR		sub_F85B0	; code used at 8000
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A2, 7		; ofs 0x0002000a, -> dst _b1_s5
		JSR		sub_F850A	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_28		; code used at 8000
		LDA		byte_60B7	; code used at 8000
		AND		#$7F       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F84CE:				; CODE XREF: _bA_sC+E-p	sub_F84CE+19-j
					; sub_F84CE+39-j
		JSR		sub_F86D5	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_28		; code used at 8000
		STA		byte_6D6	; code used at 8000
		JSR		_nmi_wait	; code used at 8000
		LDA		#$20       ; code used at 8000
		STA		byte_28		; code used at 8000
		JSR		sub_F8541	; code used at 8000
		JSR		sub_F8691	; code used at 8000
		DEC		word_3C+1	; code used at 8000
		BNE		sub_F84CE	; code used at 8000
		JSR		sub_F8728	; code used at 8000
		LDA		word_3E		; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_F84F6	; code used at 8000
		LDA		#$20       ; code used at 8000
		BNE		loc_F8501	; code used at 8000
loc_F84F6:				; CODE XREF: sub_F84CE+22-j
		CMP		#2		; code used at 8000
		BEQ		loc_F8501	; code used at 8000
		SEC				; code used at 8000
		SBC		#$10		; code used at 8000
		BNE		loc_F8501	; code used at 8000
		LDA		#2		; code used at 8000
loc_F8501:				; CODE XREF: sub_F84CE+26-j
					; sub_F84CE+2A-j sub_F84CE+2F-j
		STA		word_3E		; code used at 8000
		STA		word_3C+1	; code used at 8000
		DEC		word_3C		; code used at 8000
		BNE		sub_F84CE	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F850A:				; CODE XREF: _bA_sD+15-p sub_F850A+19-j
					; sub_F850A+2F-j
		JSR		sub_F86C8	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_28		; code used at 8000
		STA		byte_6D6	; code used at 8000
		JSR		_nmi_wait	; code used at 8000
		LDA		#$20       ; code used at 8000
		STA		byte_28		; code used at 8000
		JSR		sub_F8541	; code used at 8000
		JSR		sub_F8691	; code used at 8000
		DEC		word_3C+1	; code used at 8000
		BNE		sub_F850A	; code used at 8000
		JSR		sub_F8770	; code used at 8000
		LDA		word_3C		; code used at 8000
		CMP		#6		; code used at 8000
		BCS		loc_F853C	; code used at 8000
		LDA		word_3E		; code used at 8000
		CLC				; code used at 8000
		ADC		#6		; code used at 8000
		STA		word_3E		; code used at 8000
loc_F8535:				; CODE XREF: sub_F850A+34-j
		STA		word_3C+1	; code used at 8000
		DEC		word_3C		; code used at 8000
		BNE		sub_F850A	; code used at 8000
		RTS				; code used at 8000
loc_F853C:				; CODE XREF: sub_F850A+22-j
		LDA		word_3E		; code used at 8000
		JMP		loc_F8535	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8541:				; CODE XREF: sub_F84CE+11-p
					; sub_F850A+11-p
		LDA		#4		; code used at 8000
		STA		byte_43		; code used at 8000
		LDY		#0		; code used at 8000
		LDX		#0		; code used at 8000
		STY		word_40+1	; code used at 8000
loc_F854B:				; CODE XREF: sub_F8541+4E-j
					; sub_F8541+57-j
		LDA		_PPU_STATUS	; code used as ind data	at 8000
		LDA		byte_6CF2,X	; code used as ind data	at 8000
		STA		_PPU_CTRL	; code used as ind data	at 8000
		LDA		byte_6C70,Y	; code used as ind data	at 8000
		STA		_PPU_SCROLL	; code used as ind data	at 8000
		LDA		word_3E+1	; code used as ind data	at 8000
		STA		_PPU_SCROLL	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		INC		word_40+1	; code used as ind data	at 8000
		LDA		word_40+1	; code used as ind data	at 8000
		CMP		#5		; code used as ind data	at 8000
		BEQ		loc_F8571	; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		word_40+1	; code used as ind data	at 8000
		JMP		loc_F8575	; code used as ind data	at 8000
loc_F8571:				; CODE XREF: sub_F8541+27-j
		EOR		#$FF
		EOR		#$80 
loc_F8575:				; CODE XREF: sub_F8541+2D-j
		EOR		#$FF		; code used as ind data	at 8000
		EOR		#$80       ; code used as ind data at 8000
		NOP				; code used as ind data	at 8000
		NOP				; code used as ind data	at 8000
		NOP				; code used as ind data	at 8000
		TXA				; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		LDX		#5		; code used as ind data	at 8000
loc_F8580:				; CODE XREF: sub_F8541+40-j
		DEX				; code used as ind data	at 8000
		BNE		loc_F8580	; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		CPY		#$80       ; code used as ind data at 8000
		BEQ		loc_F8592	; code used as ind data	at 8000
		EOR		#$FF		; code used as ind data	at 8000
		EOR		#$80       ; code used as ind data at 8000
		EOR		#1		; code used as ind data	at 8000
		JMP		loc_F854B	; code used as ind data	at 8000
loc_F8592:				; CODE XREF: sub_F8541+46-j
		LDX		#0		; code used at 8000
		LDY		#0		; code used at 8000
		DEC		byte_43		; code used at 8000
		BNE		loc_F854B	; code used at 8000
		LDA		byte_6D3	; code used at 8000
		STA		_PPU_CTRL	; code used at 8000
		LDA		_PPU_STATUS	; code used at 8000
		LDA		byte_6D0	; code used at 8000
		STA		_PPU_SCROLL	; code used at 8000
		LDA		byte_6D1	; code used at 8000
		STA		_PPU_SCROLL	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F85B0:				; CODE XREF: _bA_sD+C-p
		LDA		#$30       ; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		#2		; code used at 8000
		STA		word_3E		; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_3E+1	; code used at 8000
		LDA		#$8B       ; code used at 8000
		STA		word_40		; code used at 8000
		LDX		#0		; code used at 8000
		LDY		#0		; code used at 8000
loc_F85C6:				; CODE XREF: sub_F85B0+26-j
		LDA		byte_F8821,X	; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		CPX		#$1B		; code used at 8000
		BNE		loc_F85C6	; code used at 8000
		STA		byte_6C71,Y	; code used at 8000
		LDA		#$6D       ; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		DEX				; code used at 8000
loc_F85E3:				; CODE XREF: sub_F85B0+41-j
		LDA		byte_F8821,X	; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		DEX				; code used at 8000
		BPL		loc_F85E3	; code used at 8000
		LDX		#0		; code used at 8000
loc_F85F5:				; CODE XREF: sub_F85B0+55-j
		LDA		byte_F883C,X	; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_F85F5	; code used at 8000
		STA		byte_6C71,Y	; code used at 8000
		LDA		#$B3       ; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		DEX				; code used at 8000
loc_F8612:				; CODE XREF: sub_F85B0+70-j
		LDA		byte_F883C,X	; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		DEX				; code used at 8000
		BPL		loc_F8612	; code used at 8000
		LDA		#$C0       ; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		LDA		#$B0       ; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		LDA		#$91       ; code used at 8000
loc_F8630:				; CODE XREF: sub_F85B0+86-j
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		CPY		#$8C       ; code used at 8000
		BNE		loc_F8630	; code used at 8000
		LDA		#$90       ; code used at 8000
loc_F863A:				; CODE XREF: sub_F85B0+90-j
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		CPY		#$AF       ; code used at 8000
		BNE		loc_F863A	; code used at 8000
		LDA		#$91       ; code used at 8000
loc_F8644:				; CODE XREF: sub_F85B0+9A-j
		STA		byte_6C70,Y	; code used at 8000
		INY				; code used at 8000
		CPY		#$C2       ; code used at 8000
		BNE		loc_F8644	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F864D:				; CODE XREF: _bA_sC+6-p
		LDA		#$30       ; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		#1		; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		#$FF		; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		byte_6D1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_40		; code used at 8000
		TAX				; code used at 8000
loc_F8663:				; CODE XREF: sub_F864D+25-j
		LDA		byte_6D0	; code used at 8000
		STA		byte_6C70,X	; code used at 8000
		INX				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6C70,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$80       ; code used at 8000
		BNE		loc_F8663	; code used at 8000
		LDX		#0		; code used at 8000
		LDA		byte_6D3	; code used at 8000
loc_F8679:				; CODE XREF: sub_F864D+32-j
		STA		byte_6CF2,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$40       ; code used at 8000
		BNE		loc_F8679	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8682:				; CODE XREF: _bA_sC+3-p	_bA_sD+9-p
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JMP		_vblank		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_nmi_wait:				; CODE XREF: sub_F84CE+A-p sub_F850A+A-p
		LDA		_nmi_counter	; code used at 8000
loc_F868B:				; CODE XREF: _nmi_wait+6-j
		CMP		_nmi_counter	; code used as ind data	at 8000
		BEQ		loc_F868B	; code used as ind data	at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8691:				; CODE XREF: sub_F84CE+14-p
					; sub_F850A+14-p
		LDX		#$7F       ; code used at 8000
loc_F8693:				; CODE XREF: sub_F8691+F-j
		LDA		byte_6C70,X	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		STA		byte_6C70,X	; code used at 8000
		DEX				; code used at 8000
		DEX				; code used at 8000
		DEX				; code used at 8000
		CPX		#$FF		; code used at 8000
		BNE		loc_F8693	; code used at 8000
		LDA		byte_6CF0	; code used at 8000
		STA		byte_6C70	; code used at 8000
		LDA		byte_6CF1	; code used at 8000
		STA		byte_6C71	; code used at 8000
		LDA		byte_6D31	; code used at 8000
		PHA				; code used at 8000
		LDX		#$3E       ; code used at 8000
loc_F86B4:				; CODE XREF: sub_F8691+2E-j
		LDA		byte_6CF2,X	; code used at 8000
		INX				; code used at 8000
		STA		byte_6CF2,X	; code used at 8000
		DEX				; code used at 8000
		DEX				; code used at 8000
		CPX		#$FF		; code used at 8000
		BNE		loc_F86B4	; code used at 8000
		PLA				; code used at 8000
		STA		byte_6CF2	; code used at 8000
		INC		word_40		; code used at 8000
locret_F86C7:				; CODE XREF: sub_F86C8+4-j sub_F86D5+4-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F86C8:				; CODE XREF: sub_F850A-p
		LDA		word_3C		; code used at 8000
		CMP		#$29       ; code used at 8000
		BCC		locret_F86C7	; code used at 8000
		SEC				; code used at 8000
		SBC		#$29       ; code used at 8000
		LSR		; code used at 8000
		JMP		loc_F86E3	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F86D5:				; CODE XREF: sub_F84CE-p
		LDX		word_3C		; code used at 8000
		CPX		#9		; code used at 8000
		BCS		locret_F86C7	; code used at 8000
		DEX				; code used at 8000
		TXA				; code used at 8000
		LSR		; code used at 8000
		EOR		#3		; code used at 8000
		CLC				; code used at 8000
		ADC		#1		; code used at 8000
loc_F86E3:				; CODE XREF: sub_F86C8+A-j
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		STA		byte_42		; code used at 8000
		LDX		#0		; code used at 8000
		LDA		#$BF       ; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		LDA		#$20       ; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		LDY		#1		; code used at 8000
loc_F86FF:				; CODE XREF: sub_F86D5+49-j
		TXA				; code used at 8000
		SEC				; code used at 8000
		SBC		#3		; code used at 8000
		AND		#3		; code used at 8000
		BEQ		loc_F8713	; code used at 8000
		LDA		_ram_pal_buf,Y	; code used at 8000
		SEC				; code used at 8000
		SBC		byte_42		; code used at 8000
		CMP		#$40       ; code used at 8000
		BCC		loc_F8717	; code used at 8000
		BCS		loc_F8714	; code used at 8000
loc_F8713:				; CODE XREF: sub_F86D5+30-j
		DEY				; code used at 8000
loc_F8714:				; CODE XREF: sub_F86D5+3C-j
		LDA		_ram_pal_buf	; code used at 8000
loc_F8717:				; CODE XREF: sub_F86D5+3A-j
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		#$20       ; code used at 8000
		BNE		loc_F86FF	; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_6D9	; code used at 8000
		JMP		sub_1742BA	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8728:				; CODE XREF: sub_F84CE+1B-p
		LDA		word_40		; code used at 8000
		ASL		; code used at 8000
		AND		#$7F       ; code used at 8000
		TAY				; code used at 8000
		LDX		#0		; code used at 8000
loc_F8730:				; CODE XREF: sub_F8728+2D-j
		LDA		byte_6C71,Y	; code used at 8000
		CLC				; code used at 8000
		ADC		word_F87A1+1,X	; code used at 8000
		STA		byte_6C71,Y	; code used at 8000
		LDA		byte_6C70,Y	; code used at 8000
		STA		byte_44		; code used at 8000
		ADC		word_F87A1,X	; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		EOR		byte_44		; code used at 8000
		BPL		loc_F874B	; code used at 8000
		BMI		sub_F8758	; code used at 8000
loc_F874B:				; CODE XREF: sub_F8728+1F-j
		INY				; code used at 8000
		INY				; code used at 8000
		TYA				; code used at 8000
		AND		#$7F       ; code used at 8000
		TAY				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$80       ; code used at 8000
		BNE		loc_F8730	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8758:				; CODE XREF: sub_F8728+21-j
					; sub_F8770+21-p
		LDA		byte_44		; code used at 8000
		SEC				; code used at 8000
		SBC		#$20       ; code used at 8000
		CMP		#$C0       ; code used at 8000
		BCC		locret_F876F	; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		LSR		; code used at 8000
		TAY				; code used at 8000
		LDA		#1		; code used at 8000
		EOR		byte_6CF2,Y	; code used at 8000
		STA		byte_6CF2,Y	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
locret_F876F:				; CODE XREF: sub_F8758+7-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8770:				; CODE XREF: sub_F850A+1B-p
		LDA		word_40		; code used at 8000
		ASL		; code used at 8000
		AND		#$7F       ; code used at 8000
		TAY				; code used at 8000
		LDX		#0		; code used at 8000
loc_F8778:				; CODE XREF: sub_F8770+2E-j
		LDA		byte_6C71,Y	; code used at 8000
		SEC				; code used at 8000
		SBC		word_F87A1+1,X	; code used at 8000
		STA		byte_6C71,Y	; code used at 8000
		LDA		byte_6C70,Y	; code used at 8000
		STA		byte_44		; code used at 8000
		SBC		word_F87A1,X	; code used at 8000
		STA		byte_6C70,Y	; code used at 8000
		EOR		byte_44		; code used at 8000
		BPL		loc_F8794	; code used at 8000
		JSR		sub_F8758	; code used at 8000
loc_F8794:				; CODE XREF: sub_F8770+1F-j
		INY				; code used at 8000
		INY				; code used at 8000
		TYA				; code used at 8000
		AND		#$7F       ; code used at 8000
		TAY				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$80       ; code used at 8000
		BNE		loc_F8778	; code used at 8000
		RTS				; code used at 8000
word_F87A1:
		.WORD	  0,$3000,$6000,$8000,$B000,$E000,$1001,$3001
					; DATA XREF: sub_F8728+17-r
					; sub_F8770+17-r sub_F8728+C-r
					; sub_F8770+C-r
		.WORD $5001,$7001,$9001,$B001,$C001,$D001,$E001,$E001 ;	data used at 8000
		.WORD $F001,$E001,$E001,$D001,$C001,$B001,$9001,$7001
		.WORD $5001,$3001,$1001,$E000,$B000,$8000,$6000,$3000
		.WORD	  0,$D0FF,$A0FF,$80FF,$50FF,$20FF,$F0FE,$D0FE
		.WORD $B0FE,$90FE,$70FE,$50FE,$40FE,$30FE,$20FE,$20FE
		.WORD $10FE,$20FE,$20FE,$30FE,$40FE,$50FE,$70FE,$90FE
		.WORD $B0FE,$D0FE,$F0FE,$20FF,$50FF,$80FF,$A0FF,$D0FF
byte_F8821:
		.BYTE $BF,$C5,$CB,$D1,$D7,$DD,$E6,$EF,$F8,$FE,	7,$10,$19,$22,$28,$31
					; DATA XREF: sub_F85B0:loc_F85C6-r
					; sub_F85B0:loc_F85E3-r
		.BYTE $3A,$43,$49,$4F,$55,$5B,$61,$64,$67,$6A,$6A ; data used at 8000
byte_F883C:
		.BYTE $BC,$B9,$B6,$B6	; DATA XREF: sub_F85B0:loc_F85F5-r
					; sub_F85B0:loc_F8612-r
					; data used at 8000
_chr_data_unk0:
		.BYTE  $C,$AA,	5, $D,$1A,$4D,$12,$2D,$F3,$55,$FA,$72,$E5,$B2,$6D,$D2
					; DATA XREF: BANKF:off_1741BC-o
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
					; DATA XREF: BANKF:C1C2-o
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
					; DATA XREF: BANKF:C1C5-o
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
					; DATA XREF: BANKF:C1C8-o
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
					; DATA XREF: BANKF:C1BF-o
		.BYTE $14,$18,	8,$1C,$16,$23,$C2,$45,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	1,  1,	1,  2,$84,$C7,$7A,$9C,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $EE,$72,$43,$81,$80,$C0,$41,$23,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF

; =============== S U B	R O U T	I N E =======================================
_bA_s6:					; CODE XREF: sub_174E52:loc_174F1A-P
					; sub_174E52+DF-P
					; DATA XREF: BANKA:800C-o
		LDA		byte_2B		; code used at 8000
		CMP		#$48       ; code used at 8000
		BNE		loc_F8C8C	; code used at 8000
		LDA		byte_2A
		CMP		#$5B 
		BEQ		loc_F8C8E
loc_F8C8C:				; CODE XREF: _bA_s6+4-j
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_F8C8E:				; CODE XREF: _bA_s6+A-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_s7_nullsub:				; DATA XREF: BANKA:800E-o
		RTS

; =============== S U B	R O U T	I N E =======================================
_bA_sE:					; CODE XREF: _b0_s5D+12-P
					; DATA XREF: BANKA:801C-o
		JSR		sub_F8DFC	; code used at 8000
		LDA		#0		; code used at 8000
		JSR		sub_F8E2D	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_584	; code used at 8000
		LDA		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#8		; code used at 8000
		STA		byte_583	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#$73       ; code used at 8000
		STA		byte_585	; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		LDA		byte_588	; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_583	; code used at 8000
		STA		byte_582	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_588	; code used at 8000
loc_F8CC7:				; CODE XREF: _bA_sE+81-j _bA_sE+AF-j
					; _bA_sE+D8-j _bA_sE+EE-j
		JSR		_calc_pads	; code used at 8000
		LDA		_pads		; code used at 8000
		PHA				; code used at 8000
		LSR		; code used at 8000
		BCC		loc_F8CEC	; code used at 8000
		PLA				; code used at 8000
		LDA		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_583	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#$73       ; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		BRK
		.BYTE $85, $2F		; _syscall12
		LDA		byte_588	; code used at 8000
		RTS				; code used at 8000
loc_F8CEC:				; CODE XREF: _bA_sE+3D-j
		LSR		; code used at 8000
		BCC		loc_F8CF3	; code used at 8000
		PLA				; code used at 8000
		LDA		#$FF		; code used at 8000
		RTS				; code used at 8000
loc_F8CF3:				; CODE XREF: _bA_sE+5C-j
		PLA				; code used at 8000
		AND		#$20       ; code used at 8000
		BEQ		loc_F8D21	; code used at 8000
		INC		byte_583	; code used at 8000
		INC		byte_583	; code used at 8000
		INC		byte_588	; code used at 8000
		LDA		byte_583	; code used at 8000
		CMP		byte_582	; code used at 8000
		BCS		loc_F8D15	; code used at 8000
		JSR		sub_F8D82	; code used at 8000
		LDA		byte_588	; code used at 8000
		JSR		sub_F8E2D	; code used at 8000
		JMP		loc_F8CC7	; code used at 8000
loc_F8D15:				; CODE XREF: _bA_sE+76-j
		DEC		byte_588	; code used at 8000
		DEC		byte_583	; code used at 8000
		DEC		byte_583	; code used at 8000
		JMP		loc_F8D4F	; code used at 8000
loc_F8D21:				; CODE XREF: _bA_sE+65-j
		LDA		_pads		; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		loc_F8D4F	; code used at 8000
		DEC		byte_583	; code used at 8000
		DEC		byte_583	; code used at 8000
		DEC		byte_588	; code used at 8000
		LDA		byte_583	; code used at 8000
		CMP		#8		; code used at 8000
		BCC		loc_F8D43	; code used at 8000
		JSR		sub_F8DBF	; code used at 8000
		LDA		byte_588	; code used at 8000
		JSR		sub_F8E2D	; code used at 8000
		JMP		loc_F8CC7	; code used at 8000
loc_F8D43:				; CODE XREF: _bA_sE+A4-j
		INC		byte_588	; code used at 8000
		INC		byte_583	; code used at 8000
		INC		byte_583	; code used at 8000
		JMP		loc_F8D4F	; code used at 8000
loc_F8D4F:				; CODE XREF: _bA_sE+8D-j _bA_sE+94-j
		DEC		byte_584	; code used at 8000
		BEQ		loc_F8D6C	; code used at 8000
		LDA		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_583	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		byte_585	; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		JMP		loc_F8CC7	; code used at 8000
loc_F8D6C:				; CODE XREF: _bA_sE+C1-j
		LDA		byte_585	; code used at 8000
		BNE		loc_F8D75	; code used at 8000
		LDA		#$73       ; code used at 8000
		BNE		loc_F8D77	; code used at 8000
loc_F8D75:				; CODE XREF: _bA_sE+DE-j
		LDA		#0		; code used at 8000
loc_F8D77:				; CODE XREF: _bA_sE+E2-j
		STA		byte_585	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_584	; code used at 8000
		JMP		loc_F8CC7	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8D82:				; CODE XREF: _bA_sE+78-p
		DEC		byte_583	; code used at 8000
		DEC		byte_583	; code used at 8000
		LDA		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_583	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		INC		byte_583	; code used at 8000
		INC		byte_583	; code used at 8000
		LDA		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_583	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#$73       ; code used at 8000
		STA		byte_585	; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_584	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8DBF:				; CODE XREF: _bA_sE+A6-p
		INC		byte_583	; code used at 8000
		INC		byte_583	; code used at 8000
		LDA		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_583	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		DEC		byte_583	; code used at 8000
		DEC		byte_583	; code used at 8000
		LDA		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_583	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#$73       ; code used at 8000
		STA		byte_585	; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_584	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8DFC:				; CODE XREF: _bA_sE-p
		BRK
		.BYTE 5, 7		; ofs 0x0015800a, -> dst _bE_s5
		JSR		_sram_b0_s31	; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_586	; code used at 8000
		STA		byte_588	; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		LDA		byte_F8E29,X	; code used at 8000
		STA		byte_587	; code used at 8000
		LDA		#0		; code used at 8000
		TAX				; code used at 8000
loc_F8E15:				; CODE XREF: sub_F8DFC+1F-j
		STA		byte_460,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BCC		loc_F8E15	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8E1D:				; CODE XREF: sub_F8E2D+6-p
		LDA		#0		; code used at 8000
		TAX				; code used at 8000
loc_F8E20:				; CODE XREF: sub_F8E1D+9-j
		STA		byte_400,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$60       ; code used at 8000
		BCC		loc_F8E20	; code used at 8000
		RTS				; code used at 8000
byte_F8E29:
		.BYTE $22,$32,$42,$52	; DATA XREF: sub_F8DFC+10-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8E2D:				; CODE XREF: _bA_sE+5-p	_bA_sE+7E-p
					; _bA_sE+AC-p
		STA		byte_CE		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_CF		; code used at 8000
		JSR		sub_F8E1D	; code used at 8000
loc_F8E36:				; CODE XREF: sub_F8E2D+BB-j
		JSR		sub_F8EEB	; code used at 8000
		JSR		_sram_bank0_sub28 ; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_580	; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_581	; code used at 8000
		LDA		byte_CF		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_F8F13,X	; code used at 8000
		STA		byte_470	; code used at 8000
		LDA		#$28       ; code used at 8000
		STA		byte_471	; code used at 8000
		LDA		byte_581	; code used at 8000
		TAX				; code used at 8000
		BPL		loc_F8E63	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_F8E91	; code used at 8000
		LDA		#$5F       ; code used at 8000
		STA		byte_400	; code used at 8000
loc_F8E63:				; CODE XREF: sub_F8E2D+2B-j
		TXA				; code used at 8000
		AND		#$7F       ; code used at 8000
		LDX		#0		; code used at 8000
		JSR		sub_F9099	; code used at 8000
		LDX		#0		; code used at 8000
loc_F8E6D:				; CODE XREF: sub_F8E2D+4A-j
		LDA		word_4,X	; code used at 8000
		CMP		#$60       ; code used at 8000
		BEQ		loc_F8E79	; code used at 8000
		STA		byte_402,X	; code used at 8000
		INX				; code used at 8000
		BNE		loc_F8E6D	; code used at 8000
loc_F8E79:				; CODE XREF: sub_F8E2D+44-j
		LDA		byte_581	; code used at 8000
		AND		#$7F       ; code used at 8000
		LDX		#1		; code used at 8000
		JSR		sub_F9099	; code used at 8000
		LDX		#0		; code used at 8000
loc_F8E85:				; CODE XREF: sub_F8E2D+62-j
		LDA		word_4,X	; code used at 8000
		CMP		#$60       ; code used at 8000
		BEQ		loc_F8E91	; code used at 8000
		STA		byte_414,X	; code used at 8000
		INX				; code used at 8000
		BNE		loc_F8E85	; code used at 8000
loc_F8E91:				; CODE XREF: sub_F8E2D+2F-j
					; sub_F8E2D+5C-j
		INC		byte_CF		; code used at 8000
		JSR		_sram_bank0_sub28 ; code used at 8000
		LDA		word_4		; code used as ind data	at 8000
		STA		byte_580	; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_581	; code used at 8000
		LDA		byte_581	; code used at 8000
		TAX				; code used at 8000
		BPL		loc_F8EAF	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_F8EDD	; code used at 8000
		LDA		#$5F       ; code used at 8000
		STA		byte_420	; code used at 8000
loc_F8EAF:				; CODE XREF: sub_F8E2D+77-j
		TXA				; code used at 8000
		AND		#$7F       ; code used at 8000
		LDX		#0		; code used at 8000
		JSR		sub_F9099	; code used at 8000
		LDX		#0		; code used at 8000
loc_F8EB9:				; CODE XREF: sub_F8E2D+96-j
		LDA		word_4,X	; code used at 8000
		CMP		#$60       ; code used as ind data at 8000
		BEQ		loc_F8EC5	; code used at 8000
		STA		byte_422,X	; code used at 8000
		INX				; code used at 8000
		BNE		loc_F8EB9	; code used at 8000
loc_F8EC5:				; CODE XREF: sub_F8E2D+90-j
		LDA		byte_581	; code used at 8000
		AND		#$7F       ; code used at 8000
		LDX		#1		; code used at 8000
		JSR		sub_F9099	; code used at 8000
		LDX		#0		; code used at 8000
loc_F8ED1:				; CODE XREF: sub_F8E2D+AE-j
		LDA		word_4,X	; code used as ind data	at 8000
		CMP		#$60       ; code used at 8000
		BEQ		loc_F8EDD	; code used at 8000
		STA		byte_434,X	; code used at 8000
		INX				; code used as ind data	at 8000
		BNE		loc_F8ED1	; code used as ind data	at 8000
loc_F8EDD:				; CODE XREF: sub_F8E2D+7B-j
					; sub_F8E2D+A8-j
		JSR		sub_F8F1F	; code used at 8000
		INC		byte_CF		; code used at 8000
		LDA		byte_CF		; code used at 8000
		CMP		#8		; code used at 8000
		BCS		locret_F8F12	; code used at 8000
		JMP		loc_F8E36	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8EEB:				; CODE XREF: sub_F8E2D:loc_F8E36-p
		LDA		#0		; code used at 8000
		TAX				; code used at 8000
loc_F8EEE:				; CODE XREF: sub_F8EEB+9-j
		STA		byte_400,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$60       ; code used at 8000
		BCC		loc_F8EEE	; code used at 8000
		LDA		#$77       ; code used at 8000
		STA		byte_400	; code used at 8000
		STA		byte_410	; code used at 8000
		STA		byte_420	; code used at 8000
		STA		byte_430	; code used at 8000
		LDA		#$7C       ; code used at 8000
		STA		byte_40F	; code used at 8000
		STA		byte_41F	; code used at 8000
		STA		byte_42F	; code used at 8000
		STA		byte_43F	; code used at 8000
locret_F8F12:				; CODE XREF: sub_F8E2D+B9-j
		RTS				; code used at 8000
byte_F8F13:
		.BYTE $18,$28,$38,$48,$58,$68,$78,$88 ;	DATA XREF: sub_F8E2D+1C-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8F1B:
		LDA		#$FF
		BNE		sub_F8F21

; =============== S U B	R O U T	I N E =======================================
sub_F8F1F:				; CODE XREF: sub_F8E2D:loc_F8EDD-p
		LDA		#0		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8F21:				; CODE XREF: sub_F8F1B+2-j
		JSR		sub_F8F2A	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JMP		_vblank		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8F2A:				; CODE XREF: sub_F8F21-p
		PHA				; code used at 8000
		LDA		byte_6D9	; code used at 8000
		BEQ		loc_F8F33	; code used at 8000
		JSR		_vblank
loc_F8F33:				; CODE XREF: sub_F8F2A+4-j
		LDA		#0		; code used at 8000
		STA		byte_24		; code used at 8000
		PLA				; code used at 8000
		JSR		sub_F9005	; code used as ind data	at 8000
		LDA		#0		; code used at 8000
		STA		byte_25		; code used at 8000
		STA		byte_26		; code used at 8000
		LDA		byte_471	; code used at 8000
		PHA				; code used at 8000
		AND		#$F0       ; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		STA		_tmp21+1	; code used as ind data	at 8000
		PLA				; code used at 8000
		AND		#$F		; code used at 8000
		ASL		; code used at 8000
		STA		_tmp21+2	; code used at 8000
		STA		byte_27		; code used at 8000
		LDX		byte_6D8	; code used at 8000
loc_F8F57:				; CODE XREF: sub_F8F2A+97-j
		LDA		byte_20		; code used at 8000
		STA		byte_9		; code used at 8000
		LDA		byte_1F		; code used at 8000
		STA		byte_8		; code used at 8000
		AND		#$1F		; code used as ind data	at 8000
		STA		word_4		; code used at 8000
		LDA		#$20       ; code used as ind data at 8000
		SEC				; code used as ind data	at 8000
		SBC		word_4		; code used as ind data	at 8000
		STA		word_6		; code used as ind data	at 8000
		LDA		_tmp21+2	; code used at 8000
		SEC				; code used at 8000
		SBC		word_6		; code used at 8000
		STA		word_6+1	; code used at 8000
		BEQ		loc_F8F75	; code used at 8000
		BCS		loc_F8F7C	; code used at 8000
loc_F8F75:				; CODE XREF: sub_F8F2A+47-j
		LDA		_tmp21+2	; code used at 8000
		STA		word_6		; code used at 8000
		JMP		loc_F8F96	; code used at 8000
loc_F8F7C:				; CODE XREF: sub_F8F2A+49-j
		JSR		sub_F8FC7	; code used as ind data	at 8000
		LDA		byte_9		; code used at 8000
		EOR		#4		; code used at 8000
		STA		byte_9		; code used at 8000
		LDA		byte_8		; code used at 8000
		AND		#$1F		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_8		; code used at 8000
		SEC				; code used as ind data	at 8000
		SBC		word_4		; code used at 8000
		STA		byte_8		; code used at 8000
		LDA		word_6+1	; code used at 8000
		STA		word_6		; code used at 8000
loc_F8F96:				; CODE XREF: sub_F8F2A+4F-j
		JSR		sub_F8FC7	; code used as ind data	at 8000
		LDA		byte_20		; code used at 8000
		AND		#$FB       ; code used at 8000
		CMP		#$23       ; code used at 8000
		BCC		loc_F8FB2	; code used as ind data	at 8000
		LDA		byte_1F		; code used at 8000
		CMP		#$A0       ; code used at 8000
		BCC		loc_F8FB2	; code used at 8000
		AND		#$1F		; code used at 8000
		STA		byte_1F		; code used at 8000
		LDA		byte_20		; code used at 8000
		AND		#$FC       ; code used at 8000
		JMP		loc_F8FBD	; code used at 8000
loc_F8FB2:				; CODE XREF: sub_F8F2A+75-j
					; sub_F8F2A+7B-j
		LDA		byte_1F		; code used as ind data	at 8000
		CLC				; code used at 8000
		ADC		#$20       ; code used at 8000
		STA		byte_1F		; code used at 8000
		LDA		byte_20		; code used at 8000
		ADC		#0		; code used as ind data	at 8000
loc_F8FBD:				; CODE XREF: sub_F8F2A+85-j
		STA		byte_20		; code used as ind data	at 8000
		DEC		_tmp21+1	; code used at 8000
		BNE		loc_F8F57	; code used as ind data	at 8000
		STX		byte_6D8	; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F8FC7:				; CODE XREF: sub_F8F2A:loc_F8F7C-p
					; sub_F8F2A:loc_F8F96-p
		INC		byte_24		; code used as ind data	at 8000
		LDA		byte_24		; code used at 8000
		CMP		#8		; code used at 8000
		BCC		loc_F8FD6	; code used at 8000
		LDX		#0		; code used at 8000
		STX		byte_24		; code used at 8000
		JSR		sub_1742B0	; code used at 8000
loc_F8FD6:				; CODE XREF: sub_F8FC7+6-j
		LDA		byte_9		; code used at 8000
		ORA		#$80       ; code used as ind data at 8000
		STA		byte_300,X	; code used as ind data	at 8000
		LDA		word_6		; code used as ind data	at 8000
		STA		byte_301,X	; code used as ind data	at 8000
		LDA		byte_8		; code used at 8000
		STA		byte_302,X	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		LDA		word_6		; code used at 8000
		PHA				; code used at 8000
		LDY		byte_25		; code used at 8000
loc_F8FEF:				; CODE XREF: sub_F8FC7+32-j
		LDA		byte_400,Y	; code used as ind data	at 8000
		STA		byte_300,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		DEC		word_6		; code used as ind data	at 8000
		BNE		loc_F8FEF	; code used as ind data	at 8000
		STY		byte_25		; code used at 8000
		PLA				; code used at 8000
		LSR		; code used as ind data	at 8000
		STA		word_6		; code used as ind data	at 8000
		INC		byte_6D9	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F9005:				; CODE XREF: sub_F8F2A+E-p
		PHA				; code used at 8000
		JSR		sub_F9014	; code used at 8000
		PLA				; code used at 8000
		BNE		loc_F900D	; code used at 8000
		RTS				; code used at 8000
loc_F900D:				; CODE XREF: sub_F9005+5-j
		LDA		byte_20
		EOR		#4
		STA		byte_20
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F9014:				; CODE XREF: sub_F9005+1-p
		LDA		byte_470	; code used at 8000
		ASL		; code used at 8000
		AND		#$1E		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_470	; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		AND		#$1E		; code used at 8000
		STA		word_4+1	; code used at 8000
		INC		word_4+1	; code used at 8000
		JMP		sub_1742CF	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
; unused
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
loc_F9059:				; CODE XREF: sub_F902B+2A-j
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
loc_F907E:				; CODE XREF: sub_F902B+4C-j
		LDA		byte_480,X
		STA		byte_D
		LDA		#3
		LDY		byte_C
		BEQ		loc_F908F
loc_F9089:				; CODE XREF: sub_F902B+62-j
		ASL
		ASL		byte_F
		DEY
		BNE		loc_F9089
loc_F908F:				; CODE XREF: sub_F902B+5C-j
		EOR		#$FF
		AND		byte_D
		ORA		byte_F
		STA		byte_480,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_F9099:				; CODE XREF: sub_F8E2D+3B-p
					; sub_F8E2D+53-p sub_F8E2D+87-p
					; sub_F8E2D+9F-p
		BRK
		.BYTE $A4, 7		; ofs 0x00038018, -> dst _b2_sC
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_sF:					; CODE XREF: sub_174BB3+39-P
					; DATA XREF: BANKA:801E-o
		BRK
		.BYTE $21, $17		; ofs 0x0015801e, -> dst _bE_sF
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JSR		__render_on_flag10_clear_reinit	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		JSR		_pal_fade_in	; code used at 8000
		BRK
		.BYTE $83, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE 3, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		JSR		sub_174369	; code used at 8000
		LDY		#1		; code used at 8000
		STY		byte_2F		; code used at 8000
		DEY				; code used at 8000
		LDA		#$80       ; code used at 8000
		JSR		sub_1762C3	; code used at 8000
		LDA		#3		; code used at 8000
		STA		byte_644	; code used at 8000
		STA		byte_6A58	; code used at 8000
		JSR		sub_174CD5	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $84, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#$20       ; code used at 8000
		STA		byte_60C6	; code used at 8000
		LDA		#$29       ; code used at 8000
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_s10:				; CODE XREF: sub_12B999-P
					; DATA XREF: BANKA:8020-o
		LDA		byte_60C6	; code used at 8000
		AND		#$20       ; code used at 8000
		BEQ		locret_F9110	; code used at 8000
		LDA		byte_30		; code used at 8000
		CMP		#7		; code used at 8000
		BNE		locret_F9110	; code used at 8000
		LDA		#$40       ; code used at 8000
		STA		byte_60C6	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $85, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#$2B       ; code used at 8000
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
locret_F9110:				; CODE XREF: _bA_s10+5-j _bA_s10+B-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_s11:				; CODE XREF: sub_12B99D-P
					; DATA XREF: BANKA:8022-o
		LDA		byte_60C6	; code used at 8000
		BPL		locret_F9159	; code used at 8000
		LDA		byte_30		; code used at 8000
		CMP		#9		; code used at 8000
		BNE		locret_F9159	; code used at 8000
		LDA		byte_31		; code used at 8000
		CMP		#5		; code used at 8000
		BNE		locret_F9159	; code used at 8000
		LDA		#$50       ; code used at 8000
		STA		byte_60C6	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $88, $77		; _msg_m00_arg1
		BRK
		.BYTE $8D, $77		; _msg_m00_arg1
		BRK
		.BYTE $89, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		LDA		byte_60B7	; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		LDA		#$32       ; code used at 8000
		STA		byte_7BC	; code used at 8000
		LDX		#$FF		; code used at 8000
		STX		byte_77E	; code used at 8000
		STX		byte_77F	; code used at 8000
		STX		byte_780	; code used at 8000
		STX		byte_781	; code used at 8000
		LDX		#0		; code used at 8000
		STX		byte_7BE	; code used at 8000
		STX		byte_7BD	; code used at 8000
locret_F9159:				; CODE XREF: _bA_s11+3-j _bA_s11+9-j
					; _bA_s11+F-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_s12:				; CODE XREF: sub_20A1A-P
					; DATA XREF: BANKA:8024-o
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
loc_F9170:				; CODE XREF: _bA_s12+34-j
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
loc_F9185:				; CODE XREF: _bA_s12+24-j
		JSR		_sram_bank0_sub4
		JSR		_sram_bank0_sub8
loc_F918B:				; CODE XREF: _bA_s12+1F-j
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
					; DATA XREF: BANKA:8028-o
		.BYTE $2E,  2,$2F,  0,$30,  2,$34,  6,$36,  5,$3B,  8,$3D,  1,$3F,  1 ;	ind data used at 8000
		.BYTE $40,  2,$46,  6,$4E,  1,$53,  1,$55,  8,$69,  3,$6A,  1,$71,  3
		.BYTE $75,  4,$86,  1,$8B,  3,$90,  1,$9D,  6,$9F,  3,$A1,  2,$A3,  2
		.BYTE $A4,  5,$A5,  1,$A8,  3,$B2,  4,$BD,  2,$BE,$15,$BF,  2,$C5,  5
		.BYTE $CA,  1,$CB,  6,$D1,  1,$D2,  2,$D3, $C,$D4,  1,$D6,  1,$D7,  2
		.BYTE $DB,  1,$DC,  2,$DE,  1,$E5,  4,$E7,  3,$E9,  1,$EE,  2,$F0,  8
		.BYTE $F1,  1,$F2,  1,$39,  2,$A7,  3,$35,  1,$62,  1,$EB,  1,$17,  1
_bA_d15:
		.BYTE $FF, $F,$4E,$42,$5A,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$48,  8,	1,$FF
					; DATA XREF: BANKA:802A-o
		.BYTE $82,$30,$65,$68,$A4,$21,	1,$9D,$67,$FD,$65,$C5,$FD,$34,$9F,$FE ;	ind data used at 8000
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
_bA_s16:				; CODE XREF: _b7_s1E+3-P
					; DATA XREF: BANKA:802C-o
		JSR		sub_174369	; code used at 8000
		JSR		_ppu_screen_clear ; code used at 8000
		JSR		sub_F946C	; code used at 8000
		JSR		_pal_fade_in	; code used at 8000
		JSR		sub_F930A	; code used at 8000
loc_F92E7:				; CODE XREF: _bA_s16+2A-j
		JSR		sub_F9319	; code used at 8000
		JSR		sub_F9336	; code used at 8000
		LDA		word_3C		; code used at 8000
		CMP		#$1A		; code used at 8000
		BCS		loc_F92F6	; code used at 8000
		JSR		sub_F933D	; code used at 8000
loc_F92F6:				; CODE XREF: _bA_s16+19-j
		JSR		sub_1742BA	; code used at 8000
		JSR		sub_F9319	; code used at 8000
		INC		word_3C		; code used at 8000
		LDA		word_3C		; code used at 8000
		CMP		#$37       ; code used at 8000
		BNE		loc_F92E7	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_60C5	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F930A:				; CODE XREF: _bA_s16+C-p
		LDA		_txt_erdrick_story_ofs ; code used at 8000
		STA		word_6C		; code used at 8000
		LDA		_txt_erdrick_story_ofs+1 ; code	used at	8000
		STA		word_6C+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_3C		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F9319:				; CODE XREF: _bA_s16:loc_F92E7-p
					; _bA_s16+21-p
		LDY		#4		; code used at 8000
loc_F931B:				; CODE XREF: sub_F9319+6-j
		JSR		sub_F9322	; code used at 8000
		DEY				; code used at 8000
		BNE		loc_F931B	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F9322:				; CODE XREF: sub_F9319:loc_F931B-p
		INC		byte_6D1	; code used at 8000
		LDA		byte_6D1	; code used at 8000
		CMP		#$F0       ; code used at 8000
		BNE		loc_F9331	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6D1	; code used at 8000
loc_F9331:				; CODE XREF: sub_F9322+8-j
		LDX		#4		; code used at 8000
		JMP		_vblank_count	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F9336:				; CODE XREF: _bA_s16+12-p
		LDA		#1		; code used at 8000
		STA		word_4+1	; code used at 8000
		JMP		sub_F93B1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F933D:				; CODE XREF: _bA_s16+1B-p
		JSR		sub_F93A4	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6D8	; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
loc_F934A:				; CODE XREF: sub_F933D+1C-j
					; sub_F933D+4E-j
		LDA		(word_6C),Y	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_F935B	; code used at 8000
		CMP		#$F0       ; code used at 8000
		BEQ		loc_F936A	; code used at 8000
		STA		byte_305,X	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		BNE		loc_F934A	; code used at 8000
loc_F935B:				; CODE XREF: sub_F933D+11-j
					; sub_F938E+7-j
		INY				; code used at 8000
		TYA				; code used at 8000
		CLC				; code used at 8000
		ADC		word_6C		; code used at 8000
		STA		word_6C		; code used at 8000
		BCC		loc_F9366	; code used at 8000
		INC		word_6C+1	; code used at 8000
loc_F9366:				; CODE XREF: sub_F933D+25-j
		DEC		byte_6D9	; code used at 8000
		RTS				; code used at 8000
loc_F936A:				; CODE XREF: sub_F933D+15-j
		TYA				; code used at 8000
		PHA				; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		LDA		byte_D2		; code used at 8000
		STA		byte_CE		; code used at 8000
		JSR		_sram_bank0_subF ; code	used at	8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDY		#0		; code used at 8000
loc_F937C:				; CODE XREF: sub_F933D+49-j
		LDA		word_4,Y	; code used at 8000
		STA		byte_305,X	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		#8		; code used at 8000
		BNE		loc_F937C	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		INY				; code used at 8000
		JMP		loc_F934A	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F938E:
		JSR		sub_F93A4
loc_F9391:				; CODE XREF: sub_F938E+14-j
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
sub_F93A4:				; CODE XREF: sub_F933D-p sub_F938E-p
		LDA		#$1D		; code used at 8000
		STA		word_4+1	; code used at 8000
		JSR		sub_F93B1	; code used at 8000
		LDY		#0		; code used at 8000
		LDX		byte_6D8	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F93B1:				; CODE XREF: sub_F9336+4-j sub_F93A4+4-p
		LDA		#0		; code used at 8000
		STA		byte_6D0	; code used at 8000
		STA		word_4		; code used at 8000
		JSR		sub_1742CF	; code used at 8000
		LDX		byte_6D8	; code used at 8000
		LDA		byte_20		; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_300,X	; code used at 8000
		LDA		#$20       ; code used at 8000
		STA		byte_301,X	; code used at 8000
		LDA		byte_1F		; code used at 8000
		STA		byte_302,X	; code used at 8000
		LDY		#0		; code used at 8000
		TYA				; code used at 8000
loc_F93D2:				; CODE XREF: sub_F93B1+28-j
		STA		byte_303,X	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		#$20       ; code used at 8000
		BNE		loc_F93D2	; code used at 8000
		INC		byte_6D9	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bA_s17:				; CODE XREF: _b7_s1E+32-P
					; DATA XREF: BANKA:802E-o
		LDX		#$DC       ; code used at 8000
		JSR		_vblank_count	; code used at 8000
		JSR		_vblank_count	; code used at 8000
		LDA		#$BF       ; code used at 8000
		LDX		byte_6D8	; code used at 8000
		STA		byte_300,X	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_301,X	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_302,X	; code used at 8000
		LDA		#0		; code used at 8000
loc_F93FB:				; CODE XREF: _bA_s17+22-j
		STA		byte_303,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BNE		loc_F93FB	; code used at 8000
		INC		byte_6D9	; code used at 8000
		JSR		sub_1742B0	; code used at 8000
		JSR		sub_F946C	; code used at 8000
		JSR		_vblank		; code used at 8000
		LDY		#0		; code used at 8000
loc_F9411:				; CODE XREF: _bA_s17+6E-j
		LDA		#$3F       ; code used at 8000
		STA		byte_300	; code used at 8000
		STA		byte_303	; code used at 8000
		STA		byte_306	; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_301	; code used at 8000
		LDA		#$11		; code used at 8000
		STA		byte_304	; code used at 8000
		LDA		#$13		; code used at 8000
		STA		byte_307	; code used at 8000
		LDA		byte_F9457,Y	; code used at 8000
		STA		byte_302	; code used at 8000
		LDA		byte_F945D,Y	; code used at 8000
		STA		byte_305	; code used at 8000
		LDA		byte_F9463,Y	; code used at 8000
		STA		byte_308	; code used at 8000
		LDA		#3		; code used at 8000
		STA		byte_6D9	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		LDX		#$F		; code used at 8000
		JSR		_vblank_count	; code used at 8000
		INY				; code used at 8000
		CPY		#7		; code used at 8000
		BNE		loc_F9411	; code used at 8000
		LDX		#$22       ; code used at 8000
		JSR		_vblank_count	; code used at 8000
		JMP		_vblank_count	; code used at 8000
byte_F9457:
		.BYTE $30,$31,$21,$11,	1,  0 ;	DATA XREF: _bA_s17+4C-r
					; data used at 8000
byte_F945D:
		.BYTE  $F,  0,	1,$11,$21,$31 ;	DATA XREF: _bA_s17+52-r
					; data used at 8000
byte_F9463:
		.BYTE $30, $F, $F,  5,	5,  5,$15,$15, $F ; DATA XREF: _bA_s17+58-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_F946C:				; CODE XREF: _bA_s16+6-p _bA_s17+2A-p
		JSR		sub_174D0D	; code used at 8000
		LDX		#2		; code used at 8000
loc_F9471:				; CODE XREF: sub_F946C+C-j
		LDA		byte_F94C1,X	; code used at 8000
		STA		_ram_pal_buf+$D,X ; code used at 8000
		DEX				; code used at 8000
		BPL		loc_F9471	; code used at 8000
		LDX		#0		; code used at 8000
		LDY		#0		; code used at 8000
		LDA		#$30       ; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		#6		; code used at 8000
		STA		word_3E		; code used at 8000
loc_F9486:				; CODE XREF: sub_F946C+52-j
		LDA		#$60       ; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		#8		; code used at 8000
		STA		word_3E+1	; code used at 8000
loc_F948E:				; CODE XREF: sub_F946C+47-j
		LDA		word_3C		; code used at 8000
		STA		_spr_ram,X	; code used at 8000
		LDA		byte_F94C4,Y	; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		STA		_spr_ram,X	; code used at 8000
		LDA		byte_F94C4,Y	; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		STA		_spr_ram,X	; code used at 8000
		INX				; code used at 8000
		LDA		word_3C+1	; code used at 8000
		STA		_spr_ram,X	; code used at 8000
		LDA		word_3C+1	; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		word_3C+1	; code used at 8000
		INX				; code used at 8000
		DEC		word_3E+1	; code used at 8000
		BNE		loc_F948E	; code used at 8000
		LDA		word_3C		; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		word_3C		; code used at 8000
		DEC		word_3E		; code used at 8000
		BNE		loc_F9486	; code used at 8000
		RTS				; code used at 8000
byte_F94C1:
		.BYTE $30,$30,$15	; DATA XREF: sub_F946C:loc_F9471-r
					; data used at 8000
byte_F94C4:
		.BYTE	1,$20,	2,$20,	3,$20,	4,$20,	4,$60,	3,$60,	2,$60,	1,$60
					; DATA XREF: sub_F946C+27-r
					; sub_F946C+2F-r
		.BYTE	5,$20,	6,$20,	7,$20,	8,$20,	8,$60,	7,$60,	6,$60,	5,$60 ;	data used at 8000
		.BYTE	9,$20, $A,$20, $B,$20,$12,$20,$12,$60, $B,$60, $A,$60,	9,$60
		.BYTE	0,$20, $C,$20, $D,$20,$13,$20,$13,$60, $D,$60, $C,$60,	0,$60
		.BYTE	0,$20, $E,$20, $F,$20,$14,$20,$14,$60, $F,$60, $E,$60,	0,$60
		.BYTE	0,$20,	0,$20,$10,$20,$11,$20,$11,$60,$10,$60,	0,$60,	0,$60
_txt_erdrick_story_ofs:
		.WORD _txt_erdrick_story	; DATA XREF: sub_F930A-r
					; sub_F930A+5-r
					; data used at 8000
_txt_erdrick_story:
		.BYTE   2,$38,$12,$1F,$1D,  0, $B,  0,$1E,$1C,$1F, $F,  0,$21, $B,$1C
					; DATA XREF: BANKA:_txt_erdrick_story_ofs-o
		.BYTE $1C,$13,$19,$1C,	0,$21, $B,$1D ;	ind data used at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	1, $C,$19,$1C,$18,$6A,	0, $B,$18, $E,	0,$F0,	0, $C, $F, $D ;	ind data used at 8000
		.BYTE  $B,$17, $F
		.BYTE $FF		; ind data used	at 8000
		.BYTE	1,$15,$18,$19,$21,$18,	0, $B,$1D,  0,$29,$1C, $E,$1C,$13, $D ;	ind data used at 8000
		.BYTE $15,$6A,	0,$2C, $F,$1C,$19,  0,$19,$10
		.BYTE $FF		; ind data used	at 8000
		.BYTE	3,$25,$16,$13, $B,$12, $B,$18,$6C,  0,$38,$12, $F,$1C, $F,  0 ;	ind data used at 8000
		.BYTE $21, $B,$1D,  0,$18,$19
		.BYTE $FF		; ind data used	at 8000
		.BYTE  $B, $F,$1B,$1F, $B,$16,$6C ; ind	data used at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	0,  0		; ind data used	at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	5,$2C,$19,$21, $F,$20, $F,$1C,$6A,  0,$1D,$12,$19,$1C,$1E,$16 ;	ind data used at 8000
		.BYTE $23
		.BYTE $FF		; ind data used	at 8000
		.BYTE	3,$1E,$12, $F,$1C, $F, $B,$10,$1E, $F,$1C,$6A,	0,$1E,$12, $F ;	ind data used at 8000
		.BYTE	0,$2C, $F,$1C,$19
		.BYTE $FF		; ind data used	at 8000
		.BYTE	3,$F0,	0,$17,$23,$1D,$1E, $F,$1C,$13,$19,$1F,$1D,$16,$23 ; ind	data used at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	2, $E,$13,$1D, $B,$1A,$1A, $F, $B,$1C, $F, $E,	0, $B,$18, $E ;	ind data used at 8000
		.BYTE	0,$12, $B,$1D,	0,$18,$19,$1E
		.BYTE $FF		; ind data used	at 8000
		.BYTE	5, $C, $F, $F,$18,  0,$1D, $F, $F,$18,	0,$1D,$13,$18, $D, $F ;	ind data used at 8000
		.BYTE $6C
		.BYTE $FF		; ind data used	at 8000
		.BYTE	0,  0		; ind data used	at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	1,$31, $B,$18,$23,  0, $B,  0,$1D,$1E,$19,$1C,$23,  0,$12, $B ;	ind data used at 8000
		.BYTE $1D,  0, $C, $F, $F,$18,	0,$1E,$19,$16, $E
		.BYTE $FF		; ind data used	at 8000
		.BYTE	1,$19,$10,  0,$1E,$12, $B,$1E,	0, $E, $B,$1C,$15, $F,$1D,$1E ;	ind data used at 8000
		.BYTE	0,$19,$10,  0,$18,$13,$11,$12,$1E,$1D
		.BYTE $FF		; ind data used	at 8000
		.BYTE	3,$21,$12, $F,$18,  0,$29,$1C, $E,$1C,$13, $D,$15,  0,$16, $F ;	ind data used at 8000
		.BYTE $10,$1E,	0,$12,$13,$1D
		.BYTE $FF		; ind data used	at 8000
		.BYTE	2,$21, $F, $B,$1A,$19,$18,$6A,	0, $B,$1C,$17,$19,$1C,	0, $B ;	ind data used at 8000
		.BYTE $18, $E,	0, $B,$17,$1F,$16, $F,$1E
		.BYTE $FF		; ind data used	at 8000
		.BYTE  $A, $C, $F,$12,$13,$18, $E,$6C ;	ind data used at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	0,  0		; ind data used	at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	1,$30, $F,$11, $F,$18, $E,  0,$1D, $B,$23,$1D,	0,$1E,$12, $F ;	ind data used at 8000
		.BYTE $23,  0,$12, $B,$20, $F,	0, $C, $F, $F,$18
		.BYTE $FF		; ind data used	at 8000
		.BYTE	3,$12, $B,$18, $E, $F, $E,  0, $E,$19,$21,$18,	0,$1E,$19,  0 ;	ind data used at 8000
		.BYTE $21,$19,$1C,$1E,$12,$23
		.BYTE $FF		; ind data used	at 8000
		.BYTE	4,$21, $B,$1C,$1C,$13,$19,$1C,$1D,  0,$19,$10,	0,$10,$1F,$1E ;	ind data used at 8000
		.BYTE $1F,$1C, $F
		.BYTE $FF		; ind data used	at 8000
		.BYTE	1,$11, $F,$18, $F,$1C, $B,$1E,$13,$19,$18,$1D,	0, $B,$1D,  0 ;	ind data used at 8000
		.BYTE $1E,$12, $F,  0,$37,$21,$19,$1C, $E,  0,$19,$10
		.BYTE $FF		; ind data used	at 8000
		.BYTE	3,$29,$1C, $E,$1C,$13, $D,$15,$6A,  0,$1E,$12, $F,  0,$25,$1C ;	ind data used at 8000
		.BYTE $17,$19,$1C,  0,$19,$10
		.BYTE $FF		; ind data used	at 8000
		.BYTE	1,$29,$1C, $E,$1C,$13, $D,$15,$6A,  0, $B,$18, $E,  0,$1E,$12 ;	ind data used at 8000
		.BYTE  $F,  0,$29,$17, $C,$16, $F,$17,	0,$19,$10
		.BYTE $FF		; ind data used	at 8000
		.BYTE  $A,$29,$1C, $E,$1C,$13, $D,$15,$6C ; ind	data used at 8000
		.BYTE $FF		; ind data used	at 8000
		.BYTE	0,  0		; ind data used	at 8000
		.BYTE $FF		; ind data used	at 8000
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
