
		ORG $8000

		.WORD 0
		.WORD 0
		.WORD _b1_s2		; data used at 8000
		.WORD _b1_s3_far_apu_load ; data used at 8000
		.WORD _b1_s4		; data used at 8000
		.WORD _b1_s5		; data used at 8000
		.WORD 0
		.WORD _b1_s7		; data used at 8000
		.WORD 0
		.WORD _b1_s9		; data used at 8000
		.WORD _b1_sA		; data used at 8000
		.WORD _b1_sB		; data used at 8000
		.WORD _b1_sC		; data used at 8000
		.WORD _b1_sD		; data used at 8000
		.WORD _b1_sE
		.WORD 0
		.WORD _b1_s10		; data used at 8000
		.WORD 0
		.WORD 0
		.WORD _b1_s13
		.WORD _b1_s14		; data used at 8000
		.WORD _b1_s15		; data used at 8000
		.WORD _b1_s16
		.WORD _b1_s17		; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s2:					; CODE XREF: _RESET+3E-P
					; DATA XREF: BANK1:8004-o
		PHA				; code used at 8000
		LDA		#1		; code used at 8000
		STA		_mmc_cur_prg_bank ; code used at 8000
		PLA				; code used at 8000
		BRK
		.BYTE 2, $EF		; ofs 0x002dc004, -> dst _b1E_s2
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s5:					; CODE XREF: _bA_sD+12-P
					; DATA XREF: BANK1:800A-o
		PHA				; code used at 8000
		LDA		#1		; code used at 8000
		STA		_mmc_cur_prg_bank ; code used at 8000
		PLA				; code used at 8000
		BRK
		.BYTE 5, $EF		; ofs 0x002dc00a, -> dst _b1E_s5
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s4:					; CODE XREF: _b7_s1A+14-P _b7_s1E+6-P
					; sub_1292B0+F-P _bC_s22+38-P
					; _bC_s25+14-P _bC_s19+5-P
					; sub_142486+47-P sub_142589+65-P
					; sub_142589+E8-P sub_142589+171-P
					; _npc_hndl47+4E-P sub_174BB3+B-P
					; sub_174BB3+2C-P
					; sub_1750D0:loc_175185-P
					; sub_17522D+B2-P sub_175342+3-P
					; sub_1753AA+7A-P sub_175596+7-P
					; _b17_s1+3E-P _b17_s1+8E-P _b18_s0+1D-P
					; sub_24C084+D-P _b19_s0+41-P
					; DATA XREF: BANK1:8008-o
		PHA				; code used at 8000
		LDA		#1		; code used at 8000
		STA		_mmc_cur_prg_bank ; code used at 8000
		PLA				; code used at 8000
		BRK
		.BYTE 4, $EF		; ofs 0x002dc008, -> dst _b1E_s4
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s7:					; CODE XREF: _b6_s1B+5C-P sub_24C055+2-P
					; sub_24C084+A-P sub_24E747+21-P
					; sub_24E747+5B-P sub_24E747+10E-P
					; sub_24E747+13E-P
					; DATA XREF: BANK1:800E-o
		PHA				; code used at 8000
		LDA		#1		; code used at 8000
		STA		_mmc_cur_prg_bank ; code used at 8000
		PLA				; code used at 8000
		BRK
		.BYTE 6, $EF		; ofs 0x002dc00c, -> dst _b1E_s6
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s10:				; CODE XREF: sub_A3FB+34-P sub_B09C+3-P
					; _b1_sD:loc_20A68-P sub_6B0DB+3-P
					; _b6_s1D+21-P _b7_s1B-P _bC_s19+19-P
					; _bD_s22-P sub_142504+5C-P
					; DATA XREF: BANK1:8020-o
		PHA				; code used at 8000
		LDA		#1		; code used at 8000
		STA		_mmc_cur_prg_bank ; code used at 8000
		PLA				; code used at 8000
		BRK
		.BYTE 7, $EF		; ofs 0x002dc00e, -> dst _b1E_s7
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s3_far_apu_load:			; CODE XREF: sub_8683:loc_86AE-P
					; sub_9E9C+BB-P	sub_A3FB+20-P
					; sub_A3FB+3A-P	sub_203A7+87-P
					; sub_20A1A+9-P	_b1_sD+4F-P _b2_sB+344-P
					; sub_3A7E9+16-P _b4_s0+80-P
					; sub_692D4+7-P	sub_6B0DB-P
					; sub_6B347+32-P _b6_s6+7E-P
					; sub_B2C66+48-P _bA_sC+B-P
					; sub_1280A6+1F5-P sub_1283C3+2-P
					; sub_1292B0+2C-P sub_1294D0+A-P
					; _bC_s1D+4D-P _bD_s22+6-P
					; sub_142504+65-P sub_15B265+D-P
					; sub_175212+3-P sub_17522D+CF-P
					; sub_175853+9A-P _syscall12+1-P
					; _copyrights_set_pal_and_show+12-P
					; sub_24C055+7-P sub_24C2B1+8-P
					; sub_24E747+1C-P sub_24E747+FE-P
					; DATA XREF: BANK1:8006-o
		PHA				; code used as ind data	at 8000
		LDA		#1		; code used as ind data	at 8000
		STA		_mmc_cur_prg_bank ; code used as ind data at 8000
		PLA				; code used as ind data	at 8000
		BRK
		.BYTE 3, $EF		; ofs 0x002dc006, -> dst _b1E_s3_apu_load
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s14:				; CODE XREF: _b2_sB+17C-P
					; DATA XREF: BANK1:8028-o
		STA		byte_7E		; code used at 8000
		LDA		#2		; code used at 8000
		STA		byte_63E	; code used at 8000
loc_20079:				; CODE XREF: _b1_s14+39-j _b1_s14+3F-j
					; _b1_s14+48-j
		JSR		sub_2016F	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		locret_200BC	; code used at 8000
		CMP		#0		; code used at 8000
		BEQ		loc_2009C	; code used at 8000
		STA		byte_CF		; code used at 8000
		DEC		byte_CF		; code used at 8000
		DEC		byte_CF		; code used at 8000
		LDX		byte_7E		; code used at 8000
		DEX				; code used at 8000
		TXA				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_CF		; code used at 8000
		STA		byte_CF		; code used at 8000
		JSR		_sram_bank0_sub34 ; code used at 8000
		LDA		word_4		; code used at 8000
		RTS				; code used at 8000
loc_2009C:				; CODE XREF: _b1_s14+10-j
		LDA		#0		; code used at 8000
		STA		byte_63E	; code used at 8000
		INC		byte_7E		; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#3		; code used at 8000
		BEQ		loc_200B3	; code used at 8000
		CMP		#4		; code used at 8000
		BNE		loc_20079	; code used at 8000
loc_200AD:				; CODE XREF: _b1_s14+46-j
		LDA		#1		; code used at 8000
		STA		byte_7E		; code used at 8000
		BNE		loc_20079	; code used at 8000
loc_200B3:				; CODE XREF: _b1_s14+35-j
		JSR		_sram_bank0_sub39 ; code used at 8000
		LDA		word_6		; code used at 8000
		BEQ		loc_200AD	; code used at 8000
		BNE		loc_20079	; code used at 8000
locret_200BC:				; CODE XREF: _b1_s14+C-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_s16:				; CODE XREF: sub_142923+1DE-P
					; DATA XREF: BANK1:802C-o
		LDA		#6
		STA		byte_7F
		BNE		sub_200C7

; =============== S U B	R O U T	I N E =======================================
_b1_s15:				; CODE XREF: sub_9E9C:loc_9F2A-P
					; sub_AF5B-P
					; DATA XREF: BANK1:802A-o
		LDA		#4		; code used at 8000
		STA		byte_7F		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_200C7:				; CODE XREF: _b1_s16+4-j
		LDA		#1		; code used at 8000
		STA		byte_63E	; code used at 8000
loc_200CC:				; CODE XREF: sub_200C7+4A-j
		LDA		#1		; code used at 8000
		STA		word_7C+1	; code used at 8000
loc_200D0:				; CODE XREF: sub_200C7+46-j
		LDA		byte_7F		; code used at 8000
		JSR		sub_20162	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		locret_200EF	; code used at 8000
		CMP		#0		; code used at 8000
		BEQ		loc_200F0	; code used at 8000
		PHA				; code used at 8000
		LDX		word_7C+1	; code used at 8000
		DEX				; code used at 8000
		TXA				; code used at 8000
		STA		word_7C+1	; code used at 8000
		JSR		sub_20114	; code used at 8000
		STA		word_7C+1	; code used at 8000
		DEC		word_7C+1	; code used at 8000
		PLA				; code used at 8000
		CLC				; code used at 8000
		ADC		word_7C+1	; code used at 8000
locret_200EF:				; CODE XREF: sub_200C7+10-j
		RTS				; code used at 8000
loc_200F0:				; CODE XREF: sub_200C7+14-j
		LDA		#0		; code used at 8000
		STA		byte_63E	; code used at 8000
		LDA		word_7C+1	; code used at 8000
		PHA				; code used at 8000
		JSR		sub_20114	; code used at 8000
		STA		word_7C+1	; code used at 8000
		JSR		sub_20122	; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		word_7C+1	; code used at 8000
		BEQ		loc_20110	; code used at 8000
		BCC		loc_20110	; code used at 8000
		PLA				; code used at 8000
		STA		word_7C+1	; code used at 8000
		INC		word_7C+1	; code used at 8000
		JMP		loc_200D0	; code used at 8000
loc_20110:				; CODE XREF: sub_200C7+3D-j
					; sub_200C7+3F-j
		PLA
		JMP		loc_200CC

; =============== S U B	R O U T	I N E =======================================
sub_20114:				; CODE XREF: sub_200C7+1D-p
					; sub_200C7+31-p
		ASL		; code used at 8000
		ASL		; code used at 8000
		LDX		byte_7F		; code used at 8000
		CPX		#4		; code used at 8000
		BEQ		loc_2011E	; code used at 8000
		ASL
		RTS
loc_2011E:				; CODE XREF: sub_20114+6-j
		CLC				; code used at 8000
		ADC		word_7C+1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20122:				; CODE XREF: sub_200C7+36-p
		LDA		byte_7F		; code used at 8000
		CMP		#4		; code used at 8000
		BEQ		loc_2012C	; code used at 8000
		BRK
		.BYTE $3C, $17		; ofs 0x0014003e, -> dst _bD_s1F
		RTS
loc_2012C:				; CODE XREF: sub_20122+4-j
		BRK
		.BYTE $10, $17		; ofs 0x00008090, -> dst _b0_s48
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s17:				; CODE XREF: sub_9E9C+59-P _b1_s17+21-j
					; DATA XREF: BANK1:802E-o
		STA		word_7C+1	; code used at 8000
		LDA		#7		; code used at 8000
		JSR		sub_2015B	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		locret_2014C	; code used at 8000
		CMP		#0		; code used at 8000
		BEQ		loc_2014D	; code used at 8000
		STA		byte_CF		; code used at 8000
		DEC		byte_CF		; code used at 8000
		LDA		word_7C+1	; code used at 8000
		STA		byte_D0		; code used at 8000
		JSR		_sram_bank0_sub35 ; code used at 8000
		LDA		word_4		; code used at 8000
locret_2014C:				; CODE XREF: _b1_s17+9-j
		RTS				; code used at 8000
loc_2014D:				; CODE XREF: _b1_s17+D-j
		LDA		word_7C+1
		EOR		#3
		JMP		_b1_s17

; =============== S U B	R O U T	I N E =======================================
_b1_s13:				; DATA XREF: BANK1:8026-o
		JSR		sub_2015B
		TAX
		DEX
		TXA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2015B:				; CODE XREF: _b1_s17+4-p _b1_s13-p
		PHA				; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_63E	; code used at 8000
		PLA				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20162:				; CODE XREF: sub_200C7+B-p
		STA		byte_7E		; code used at 8000
		JSR		sub_202A9	; code used at 8000
		LDA		byte_7E		; code used at 8000
		JSR		sub_20759	; code used at 8000
		BRK
		.BYTE $1A, $17		; ofs 0x00158026, -> dst _bE_s13

; =============== S U B	R O U T	I N E =======================================
sub_2016F:				; CODE XREF: _b1_s14:loc_20079-p
		JSR		sub_202A9	; code used at 8000
		PHA				; code used at 8000
		JSR		sub_2063D	; code used at 8000
		LDX		#$FF		; code used at 8000
		PLA				; code used at 8000
		BEQ		loc_20180	; code used at 8000
		JSR		sub_2069E	; code used at 8000
		LDX		#0		; code used at 8000
loc_20180:				; CODE XREF: sub_2016F+A-j
		STX		byte_634	; code used at 8000
		JSR		sub_205CD	; code used at 8000
		JSR		sub_20628	; code used at 8000
		LDA		byte_75		; code used at 8000
		CMP		#3		; code used at 8000
		BCS		loc_20195	; code used at 8000
		JSR		sub_2065D	; code used at 8000
		JMP		loc_20198	; code used at 8000
loc_20195:				; CODE XREF: sub_2016F+1E-j
					; sub_2016F+39-j
		JSR		sub_205E8	; code used at 8000
loc_20198:				; CODE XREF: sub_2016F+23-j
					; sub_2016F+3E-j
		JSR		sub_2067E	; code used at 8000
		JSR		sub_2060C	; code used at 8000
		INC		byte_7B		; code used at 8000
		DEC		byte_75		; code used at 8000
		LDA		byte_75		; code used at 8000
		BEQ		loc_201B0	; code used at 8000
		CMP		#2		; code used at 8000
		BNE		loc_20195	; code used at 8000
		JSR		sub_2065D	; code used at 8000
		JMP		loc_20198	; code used at 8000
loc_201B0:				; CODE XREF: sub_2016F+35-j
		JMP		sub_203A7	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_201B3:				; DATA XREF: BANK1:836F-o
		LDX		_sram_bank0_sub36_ofs ;	ind code used at 8000
		LDY		_sram_bank0_sub36_ofs+1	; code used at 8000
		JMP		sub_201CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_201BC:				; DATA XREF: BANK1:8373-o
		LDX		_sram_bank0_sub37_ofs ;	ind code used at 8000
		LDY		_sram_bank0_sub37_ofs+1	; code used at 8000
		JMP		sub_201CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_201C5:				; DATA XREF: BANK1:8377-o
		LDX		_sram_bank0_sub38_ofs ;	ind code used at 8000
		LDY		_sram_bank0_sub38_ofs+1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_201CB:				; CODE XREF: sub_201B3+6-j sub_201BC+6-j
		STX		word_7C		; code used at 8000
		STY		word_7C+1	; code used at 8000
		LDA		byte_7B		; code used at 8000
		ASL		; code used at 8000
		PHA				; code used at 8000
		JSR		sub_201DF	; code used at 8000
		LDX		#2		; code used at 8000
		JSR		sub_20690	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
		TXA				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_201DF:				; CODE XREF: sub_201CB+8-p
		STA		byte_CF		; code used at 8000
		JSR		_jump_indirect_7C ; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_201F5	; code used at 8000
		JSR		sub_206EF	; code used at 8000
		LDX		byte_CF		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_636,X	; code used at 8000
		RTS				; code used at 8000
loc_201F5:				; CODE XREF: sub_201DF+9-j
		LDA		byte_77		; code used at 8000
		CLC				; code used at 8000
		ADC		#9		; code used at 8000
		STA		byte_77		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_jump_indirect_7C:			; CODE XREF: sub_201DF+2-p
		JMP		(word_7C)	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20200:				; DATA XREF: BANK1:837B-o
		LDA		word_7C+1	; ind code used	at 8000
		STA		word_4		; code used at 8000
		DEC		word_4		; code used at 8000
		LDA		word_4		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		word_4		; code used at 8000
		STA		word_4		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_7B		; code used at 8000
		STA		byte_CF		; code used at 8000
		SEC				; code used at 8000
		SBC		word_4		; code used at 8000
		TAX				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_635,X	; code used at 8000
		BRK
		.BYTE $10, $17		; ofs 0x00008090, -> dst _b0_s48
		LDA		word_4+1	; code used at 8000
		JMP		sub_206E8	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20225:				; DATA XREF: BANK1:837F-o
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
sub_20268:				; DATA XREF: BANK1:8383-o
		LDX		word_7C+1
		DEX
		TXA
		ASL
		ASL
		ASL
		CLC
		ADC		byte_7B
		TAX
		LDA		byte_600D,X
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
sub_2028D:				; DATA XREF: BANK1:8387-o
		LDA		byte_7B		; ind code used	at 8000
		STA		byte_CF		; code used at 8000
		LDA		word_7C+1	; code used at 8000
		STA		byte_D0		; code used at 8000
		JSR		_sram_bank0_sub35 ; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		locret_202A8	; code used at 8000
		JSR		sub_206EF	; code used at 8000
		LDX		byte_7B		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_635,X	; code used at 8000
locret_202A8:				; CODE XREF: sub_2028D+F-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_202A9:				; CODE XREF: sub_20162+2-p sub_2016F-p
		LDA		byte_7E		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		off_20369,X	; code used at 8000
		STA		word_4		; code used at 8000
		LDA		off_20369+1,X	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		off_2036B,X	; code used at 8000
		STA		word_6C		; code used at 8000
		LDA		off_2036B+1,X	; code used at 8000
		STA		word_6C+1	; code used at 8000
		LDX		#0		; code used at 8000
		LDA		#$FF		; code used at 8000
loc_202C6:				; CODE XREF: sub_202A9+23-j
		STA		byte_634,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$A		; code used at 8000
		BNE		loc_202C6	; code used at 8000
		JMP		(word_4)	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_202D1:				; DATA XREF: BANK1:836D-o
		JSR		sub_20720	; ind code used	at 8000
		JSR		_sram_bank0_sub39 ; code used at 8000
		LDA		word_4+1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_202DA:				; DATA XREF: BANK1:8371-o BANK1:8375-o
		JSR		sub_20720	; ind code used	at 8000
		LDA		#$FF		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_202E0:				; DATA XREF: BANK1:8379-o
		JSR		sub_20720	; ind code used	at 8000
		BRK
		.BYTE $10, $17		; ofs 0x00008090, -> dst _b0_s48
		LDA		word_7C+1	; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		word_7C+1	; code used at 8000
		CMP		word_4		; code used at 8000
		BCC		loc_20303	; code used at 8000
		BEQ		loc_20303	; code used at 8000
		LDX		word_4		; code used at 8000
		SEC				; code used at 8000
		SBC		word_4		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#6		; code used at 8000
		SEC				; code used at 8000
		SBC		word_4		; code used at 8000
		STA		byte_75		; code used at 8000
		STX		word_4		; code used at 8000
loc_20303:				; CODE XREF: sub_202E0+F-j
					; sub_202E0+11-j
		LDA		word_4		; code used at 8000
		CMP		#6		; code used at 8000
		BCS		loc_2030C	; code used at 8000
		LDA		#0		; code used at 8000
		RTS				; code used at 8000
loc_2030C:				; CODE XREF: sub_202E0+27-j
		LDA		#$FF		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2030F:				; DATA XREF: BANK1:837D-o
		JSR		sub_20720
		LDX		#1
loc_20314:				; CODE XREF: sub_2030F+F-j
		LDA		byte_56C,X
		CMP		#$FF
		BEQ		loc_20320
		INX
		CPX		#5
		BNE		loc_20314
loc_20320:				; CODE XREF: sub_2030F+A-j
		STX		byte_75
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20325:				; DATA XREF: BANK1:8381-o
		JSR		sub_20720
		BRK
		.BYTE $3C, $17		; ofs 0x0014003e, -> dst _bD_s1F
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
loc_20346:				; CODE XREF: sub_20325+D-j sub_20325+F-j
		DEC		word_4
		LDA		word_4
		AND		#$F8 
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2034D:				; DATA XREF: BANK1:8385-o
		JSR		sub_20720	; ind code used	at 8000
		LDA		word_7C+1	; code used at 8000
		STA		byte_D0		; code used at 8000
		BRK
		.BYTE $2A, $17		; ofs 0x000080c4, -> dst _b0_s62
		LDA		word_6+1	; code used at 8000
		STA		byte_75		; code used at 8000
		INC		byte_75		; code used at 8000
		LDA		word_7C+1	; code used at 8000
		EOR		#3		; code used at 8000
		STA		byte_D0		; code used at 8000
		JSR		_sram_bank0_sub39 ; code used at 8000
		LDA		word_6+1	; code used at 8000
		RTS				; code used at 8000
off_20369:
		.WORD 0			; DATA XREF: sub_202A9+5-r sub_202A9+A-r
off_2036B:
		.WORD 0			; DATA XREF: sub_202A9+F-r
					; sub_202A9+14-r
		.WORD sub_202D1		; data used at 8000
		.WORD sub_201B3		; data used at 8000
		.WORD sub_202DA		; data used at 8000
		.WORD sub_201BC		; data used at 8000
		.WORD sub_202DA		; data used at 8000
		.WORD sub_201C5		; data used at 8000
		.WORD sub_202E0		; data used at 8000
		.WORD sub_20200		; data used at 8000
		.WORD sub_2030F
		.WORD sub_20225
		.WORD sub_20325
		.WORD sub_20268
		.WORD sub_2034D		; data used at 8000
		.WORD sub_2028D		; data used at 8000
_sram_bank0_sub36_ofs:
		.WORD _sram_bank0_sub36 ;	DATA XREF: sub_201B3-r
					; sub_201B3+3-r
					; data used at 8000
_sram_bank0_sub37_ofs:
		.WORD _sram_bank0_sub37 ;	DATA XREF: sub_201BC-r
					; sub_201BC+3-r
					; data used at 8000
_sram_bank0_sub38_ofs:
		.WORD _sram_bank0_sub38 ;	DATA XREF: sub_201C5-r
					; sub_201C5+3-r
					; data used at 8000
byte_2038F:
		.BYTE $88,$12,$22,$5C,$92,$32,$5C,$92,$32,$5C,$92,$32,$66,$83,$1A,$58
					; DATA XREF: sub_20720+7-r sub_20775-r
					; sub_20775+A-r	sub_20720+18-r
					; sub_20720+26-r
		.BYTE $44,$22,$98,$16,$12,$96,$18,$1A

; =============== S U B	R O U T	I N E =======================================
sub_203A7:				; CODE XREF: sub_2016F:loc_201B0-j
					; sub_203A7+8-j
		JSR		_vblank		; code used at 8000
		JSR		_calc_pads	; code used at 8000
		LDA		_pads		; code used at 8000
		BNE		sub_203A7	; code used at 8000
		LDA		byte_7E		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_205BD,X	; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_205BD+1,X	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		byte_63E	; code used at 8000
		STA		byte_78		; code used at 8000
		STA		byte_79		; code used at 8000
		BNE		loc_203E3	; code used at 8000
		DEC		word_4+1	; code used at 8000
		DEC		word_4+1	; code used at 8000
		INC		byte_63E	; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#6		; code used at 8000
		BEQ		loc_203DE	; code used at 8000
		CMP		#4		; code used at 8000
		BCS		loc_20410	; code used at 8000
		INC		byte_63E	; code used at 8000
		BNE		loc_20410	; code used at 8000
loc_203DE:				; CODE XREF: sub_203A7+2C-j
		INC		word_4+1
		JMP		loc_20410
loc_203E3:				; CODE XREF: sub_203A7+1F-j
		LDX		byte_78		; code used at 8000
loc_203E5:				; CODE XREF: sub_203A7+44-j
		LDA		byte_634,X	; code used at 8000
		BEQ		loc_203ED	; code used at 8000
		INX				; code used at 8000
		BNE		loc_203E5	; code used at 8000
loc_203ED:				; CODE XREF: sub_203A7+41-j
		STX		byte_78		; code used at 8000
		DEX				; code used at 8000
		TXA				; code used at 8000
		TAY				; code used at 8000
		LDA		byte_63E	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_20409	; code used at 8000
		DEX				; code used at 8000
		TXA				; code used at 8000
		LSR		; code used at 8000
		BCC		loc_20408	; code used at 8000
		TAY				; code used at 8000
loc_203FF:				; code used at 8000
		LDA		word_4
		CLC				; code used at 8000
		ADC		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		BNE		loc_20409	; code used at 8000
loc_20408:				; CODE XREF: sub_203A7+55-j
		TAY				; code used at 8000
loc_20409:				; CODE XREF: sub_203A7+50-j
					; sub_203A7+5F-j sub_203A7+67-j
		INC		word_4+1	; code used at 8000
		INC		word_4+1	; code used at 8000
		DEY				; code used at 8000
		BNE		loc_20409	; code used at 8000
loc_20410:				; CODE XREF: sub_203A7+30-j
					; sub_203A7+35-j sub_203A7+39-j
					; sub_203A7+7B-j sub_20448+3-j
		JSR		sub_20434	; code used at 8000
		JSR		_calc_pads	; code used at 8000
		LDA		_pads		; code used at 8000
		AND		#$F0       ; code used at 8000
		BNE		sub_20448	; code used at 8000
		LDA		_pads		; code used at 8000
		LSR		; code used at 8000
		BCS		loc_20427	; code used at 8000
		LSR		; code used at 8000
		BCC		loc_20410	; code used at 8000
		LDA		#$FF		; code used at 8000
		RTS				; code used at 8000
loc_20427:				; CODE XREF: sub_203A7+78-j
		LDX		#$73       ; code used at 8000
		JSR		sub_20441	; code used at 8000
		LDA		#$85       ; code used at 8000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDA		byte_78		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20434:				; CODE XREF: sub_203A7:loc_20410-p
		LDX		#$73       ; code used at 8000
		LDA		byte_79		; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		byte_79		; code used at 8000
		BPL		sub_20441	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2043F:				; CODE XREF: sub_20451+2B-p
					; sub_20451+7D-p sub_204EE+16-p
					; sub_20522+44-p sub_20522:loc_20577-p
					; sub_2059E-p
		LDX		#0		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20441:				; CODE XREF: sub_203A7+82-p
					; sub_20434+9-j
		TXA				; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JMP		sub_1742B0	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20448:				; CODE XREF: sub_203A7+73-j
		JSR		sub_20451	; code used at 8000
		JMP		loc_20410	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2044E:				; CODE XREF: sub_20451+B-j
		JMP		sub_204EE	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20451:				; CODE XREF: sub_20448-p
		PHA				; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_7A		; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_7B		; code used at 8000
		PLA				; code used at 8000
		ASL		; code used at 8000
		BCS		sub_2044E	; code used at 8000
		ASL		; code used at 8000
		BCS		loc_204B4	; code used at 8000
		ASL		; code used at 8000
		BCS		loc_204B7	; code used at 8000
		LDX		byte_78		; code used at 8000
loc_20466:				; CODE XREF: sub_20451+27-j
		TXA				; code used at 8000
		BEQ		locret_2049B	; code used at 8000
		DEC		byte_7B		; code used at 8000
		DEC		byte_7B		; code used at 8000
		TXA				; code used at 8000
		SEC				; code used at 8000
		SBC		byte_63E	; code used at 8000
		TAX				; code used at 8000
		BMI		loc_2049C	; code used at 8000
		LDA		byte_634,X	; code used at 8000
		BNE		loc_20466	; code used at 8000
		STX		byte_78		; code used at 8000
		JSR		sub_2043F	; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#6		; code used at 8000
		BNE		loc_2048D	; code used at 8000
		LDA		byte_7B
		CMP		#1
		BNE		loc_2048D
		INC		byte_7B
loc_2048D:				; CODE XREF: sub_20451+32-j
					; sub_20451+38-j sub_20451+61-j
		LDA		byte_7B		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_79		; code used at 8000
		LDA		_pads+2		; code used at 8000
		ORA		#$10		; code used at 8000
		STA		_pads+2		; code used at 8000
locret_2049B:				; CODE XREF: sub_20451+16-j
					; sub_20451+50-j sub_20451+56-j
					; sub_20451+74-j
		RTS				; code used at 8000
loc_2049C:				; CODE XREF: sub_20451+22-j
		LDA		byte_63E	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		locret_2049B	; code used at 8000
		INX				; code used at 8000
		LDA		byte_634,X	; code used at 8000
		BNE		locret_2049B	; code used at 8000
		STX		byte_78		; code used at 8000
		JSR		sub_2059E	; code used at 8000
		INC		byte_7B		; code used at 8000
		INC		byte_7B		; code used at 8000
		BNE		loc_2048D	; code used at 8000
loc_204B4:				; CODE XREF: sub_20451+E-j
		JMP		sub_20588	; code used at 8000
loc_204B7:				; CODE XREF: sub_20451+11-j
		LDX		byte_78		; code used at 8000
loc_204B9:				; CODE XREF: sub_20451+79-j
		INC		byte_7B		; code used at 8000
		INC		byte_7B		; code used at 8000
		TXA				; code used at 8000
		CLC				; code used at 8000
		ADC		byte_63E	; code used at 8000
		TAX				; code used at 8000
		CPX		#$A		; code used at 8000
		BCS		locret_2049B	; code used at 8000
		LDA		byte_634,X	; code used at 8000
		BNE		loc_204B9	; code used at 8000
		STX		byte_78		; code used at 8000
		JSR		sub_2043F	; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#6		; code used at 8000
		BNE		loc_204DF	; code used at 8000
		LDA		byte_7B
		CMP		#4
		BNE		loc_204DF
		DEC		byte_7B
loc_204DF:				; CODE XREF: sub_20451+84-j
					; sub_20451+8A-j
		LDA		byte_7B		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_79		; code used at 8000
		LDA		_pads+2		; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		_pads+2		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_204EE:				; CODE XREF: sub_2044E-j
		LDA		byte_63E	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		locret_20518	; code used at 8000
		LDA		byte_78		; code used at 8000
		TAX				; code used at 8000
		AND		#1		; code used at 8000
		BNE		locret_20518	; code used at 8000
		INX				; code used at 8000
		LDA		byte_634,X	; code used at 8000
		BNE		loc_20519	; code used at 8000
		STX		byte_78		; code used at 8000
		JSR		sub_2043F	; code used at 8000
loc_20507:				; CODE XREF: sub_204EE+32-j
		LDA		word_4		; code used at 8000
		CLC				; code used at 8000
		ADC		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_79		; code used at 8000
		LDA		_pads+2		; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		_pads+2		; code used at 8000
locret_20518:				; CODE XREF: sub_204EE+5-j sub_204EE+C-j
					; sub_204EE+2E-j
		RTS				; code used at 8000
loc_20519:				; CODE XREF: sub_204EE+12-j
		JSR		sub_20522	; code used at 8000
		BCC		locret_20518	; code used at 8000
		INC		byte_78		; code used at 8000
		BNE		loc_20507	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20522:				; CODE XREF: sub_204EE:loc_20519-p
					; sub_205B3-p
		TXA				; code used at 8000
		PHA				; code used at 8000
		LDY		#0		; code used at 8000
		CPX		#2		; code used at 8000
		BCC		loc_20538	; code used at 8000
loc_2052A:				; CODE XREF: sub_20522+12-j
		DEX				; code used at 8000
		DEX				; code used at 8000
		CPX		#2		; code used at 8000
		BCC		loc_20538	; code used at 8000
		INY				; code used at 8000
		LDA		byte_634,X	; code used at 8000
		BNE		loc_2052A	; code used at 8000
		BEQ		loc_2053A
loc_20538:				; CODE XREF: sub_20522+6-j sub_20522+C-j
		LDY		#0		; code used at 8000
loc_2053A:				; CODE XREF: sub_20522+14-j
		STY		byte_7F		; code used at 8000
		LDY		#0		; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
loc_20540:				; CODE XREF: sub_20522+28-j
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$A		; code used at 8000
		BCS		loc_2054E	; code used at 8000
		INY				; code used at 8000
		LDA		byte_634,X	; code used at 8000
		BNE		loc_20540	; code used at 8000
		BEQ		loc_20550	; code used at 8000
loc_2054E:				; CODE XREF: sub_20522+22-j
		LDY		#0		; code used at 8000
loc_20550:				; CODE XREF: sub_20522+2A-j
		TYA				; code used at 8000
		ORA		byte_7F		; code used at 8000
		BNE		loc_20557	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_20557:				; CODE XREF: sub_20522+31-j
		TYA				; code used at 8000
		BEQ		loc_20577	; code used at 8000
		LDX		byte_7F		; code used at 8000
		BEQ		loc_20564	; code used at 8000
		CMP		byte_7F
		BEQ		loc_20564
		BCS		loc_20577
loc_20564:				; CODE XREF: sub_20522+3A-j
					; sub_20522+3E-j
		STA		byte_7F		; code used at 8000
		JSR		sub_2043F	; code used at 8000
loc_20569:				; CODE XREF: sub_20522+51-j
		INC		word_4+1	; code used at 8000
		INC		word_4+1	; code used at 8000
		INC		byte_78		; code used at 8000
		INC		byte_78		; code used at 8000
		DEC		byte_7F		; code used at 8000
		BNE		loc_20569	; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_20577:				; CODE XREF: sub_20522+36-j
					; sub_20522+40-j
		JSR		sub_2043F
loc_2057A:				; CODE XREF: sub_20522+62-j
		DEC		word_4+1
		DEC		word_4+1
		DEC		byte_78
		DEC		byte_78
		DEC		byte_7F
		BNE		loc_2057A
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20588:				; CODE XREF: sub_20451:loc_204B4-j
		LDA		byte_63E	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		locret_205B2	; code used at 8000
		LDA		byte_78		; code used at 8000
		TAX				; code used at 8000
		AND		#1		; code used at 8000
		BEQ		locret_205B2	; code used at 8000
		DEX				; code used at 8000
		LDA		byte_634,X	; code used at 8000
		BNE		sub_205B3	; code used at 8000
		STX		byte_78		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2059E:				; CODE XREF: sub_20451+5A-p
		JSR		sub_2043F	; code used at 8000
loc_205A1:				; CODE XREF: sub_205B3+7-j
		LDA		word_4		; code used at 8000
		SEC				; code used at 8000
		SBC		#$B		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_79		; code used at 8000
		LDA		_pads+2		; code used at 8000
		ORA		#$40       ; code used at 8000
		STA		_pads+2		; code used at 8000
locret_205B2:				; CODE XREF: sub_20588+5-j sub_20588+C-j
					; sub_205B3+3-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_205B3:				; CODE XREF: sub_20588+12-j
		JSR		sub_20522	; code used at 8000
		BCC		locret_205B2	; code used at 8000
		DEC		byte_78		; code used at 8000
		JMP		loc_205A1	; code used at 8000
byte_205BD:
		.BYTE	5,  4,	5,$14,	5,$14,	5,$14,	7,$12,	9, $A, $D,  3,$11,  4
					; DATA XREF: sub_203A7+E-r
					; sub_203A7+13-r

; =============== S U B	R O U T	I N E =======================================
sub_205CD:				; CODE XREF: sub_2016F+14-p
		LDA		byte_7E		; code used at 8000
		CMP		#4		; code used at 8000
		BEQ		loc_205D4	; code used at 8000
		RTS				; code used at 8000
loc_205D4:				; CODE XREF: sub_205CD+4-j
		LDX		#0		; code used at 8000
loc_205D6:				; CODE XREF: sub_205CD+12-j
		LDA		byte_205E2,X	; code used at 8000
		STA		byte_404,X	; code used at 8000
		INX				; code used at 8000
		CPX		#6		; code used at 8000
		BNE		loc_205D6	; code used at 8000
		RTS				; code used at 8000
byte_205E2:
		.BYTE $79,$3B,$2C,$29,$36,$29 ;	DATA XREF: sub_205CD:loc_205D6-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_205E8:				; CODE XREF: sub_2016F:loc_20195-p
					; sub_2063D+3-p	sub_2065D-p
		LDA		byte_74		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		#$77       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		TXA				; code used at 8000
		CLC				; code used at 8000
		ADC		byte_74		; code used at 8000
		TAX				; code used at 8000
		LDA		#$77       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		LDA		#$7C       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		TXA				; code used at 8000
		CLC				; code used at 8000
		ADC		byte_74		; code used at 8000
		TAX				; code used at 8000
		LDA		#$7C       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2060C:				; CODE XREF: sub_2016F+2C-p
		JSR		sub_17474C	; code used at 8000
		LDA		byte_470	; code used at 8000
		CLC				; code used at 8000
		ADC		#$10		; code used at 8000
		STA		byte_470	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20618:				; CODE XREF: sub_2063D+6-p
		LDA		byte_74		; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
loc_2061E:				; CODE XREF: sub_20618+E-j
		LDA		_ram_pal_buf+$18,X ; code used at 8000
		STA		_ram_pal_buf+$18,Y ; code used at 8000
		DEX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_2061E	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20628:				; CODE XREF: sub_2016F+17-p sub_2063D-p
		LDA		byte_74		; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		LDA		#0		; code used at 8000
loc_20631:				; CODE XREF: sub_20628+E-j
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_20631	; code used at 8000
		LDA		byte_76		; code used at 8000
		STA		byte_77		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2063D:				; CODE XREF: sub_2016F+4-p
		JSR		sub_20628	; code used at 8000
		JSR		sub_205E8	; code used at 8000
		JSR		sub_20618	; code used at 8000
		LDA		#$7A       ; code used at 8000
		STA		byte_400	; code used at 8000
		LDX		byte_74		; code used at 8000
		DEX				; code used at 8000
		LDA		#$7D       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		LDA		#$78       ; code used at 8000
loc_20656:				; CODE XREF: sub_2063D+1D-j
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_20656	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2065D:				; CODE XREF: sub_2016F+20-p
					; sub_2016F+3B-p
		JSR		sub_205E8	; code used at 8000
		LDA		byte_74		; code used at 8000
		TAY				; code used at 8000
		DEY				; code used at 8000
		DEY				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		LDA		#$7F       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		LDA		#$7E       ; code used at 8000
loc_20671:				; CODE XREF: sub_2065D+19-j
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_20671	; code used at 8000
		LDA		#$7B       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2067E:				; CODE XREF: sub_2016F:loc_20198-p
		LDA		byte_75		; code used at 8000
		CMP		#1		; code used at 8000
		BNE		loc_20685	; code used at 8000
		RTS				; code used at 8000
loc_20685:				; CODE XREF: sub_2067E+4-j
		JMP		(word_6C)	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20688:				; CODE XREF: sub_20225+10-p
					; sub_20225+15-p sub_20225+26-p
		LDX		byte_77
		STA		byte_400,X
		INC		byte_77
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20690:				; CODE XREF: sub_201CB+D-p
		LDY		byte_77		; code used at 8000
		LDA		#0		; code used at 8000
loc_20694:				; CODE XREF: sub_20690+9-j
		STA		byte_400,Y	; code used at 8000
		INY				; code used at 8000
		DEX				; code used at 8000
		BNE		loc_20694	; code used at 8000
		STY		byte_77		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_2069E:				; CODE XREF: sub_2016F+C-p
		LDA		#0		; code used at 8000
		STA		byte_401	; code used at 8000
		LDA		#$64       ; code used at 8000
		STA		byte_402	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_206A9:				; CODE XREF: sub_20225+21-p
					; sub_20225+38-p
		STA		byte_78
		CMP		#1
		BEQ		loc_206C1
		LDA		word_4
		ORA		word_4+1
		ORA		word_6
		BNE		loc_206C1
		LDX		#7
loc_206B9:				; CODE XREF: sub_206A9+14-j
		STA.WX		byte_8,X
		DEX
		BNE		loc_206B9
		BEQ		loc_206CD
loc_206C1:				; CODE XREF: sub_206A9+4-j sub_206A9+C-j
		BRK
		.BYTE $1B, $17		; ofs 0x00158028, -> dst _bE_s14
		LDX		#0
loc_206C6:				; CODE XREF: sub_206A9+22-j
		INC		byte_9,X
		INX
		CPX		#7
		BNE		loc_206C6
loc_206CD:				; CODE XREF: sub_206A9+16-j
		LDA		byte_77
		TAX
		CLC
		ADC		byte_78
		STA		byte_77
		LDA		#7
		SEC
		SBC		byte_78
		TAY
loc_206DB:				; CODE XREF: sub_206A9+3C-j
		LDA.WY		byte_9,Y
		STA		byte_400,X
		INX
		INY
		CPY		#7
		BNE		loc_206DB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_206E8:				; CODE XREF: sub_20200+22-j
		LDX		#7		; code used at 8000
		LDY		#9		; code used at 8000
		JMP		sub_20707	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_206EF:				; CODE XREF: sub_201DF+B-p
					; sub_2028D+11-p
		LDX		#4		; code used at 8000
		LDY		#9		; code used at 8000
		JMP		sub_20707	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_206F6:				; CODE XREF: sub_20225+5-p
		LDX		#2
		LDY		#$B
		JMP		sub_20707

; =============== S U B	R O U T	I N E =======================================
sub_206FD:				; CODE XREF: sub_20268+F-p
		LDX		#0
		LDY		#$C
		BNE		sub_20707

; =============== S U B	R O U T	I N E =======================================
sub_20703:				; CODE XREF: sub_20268+1A-p
		LDX		#1
		LDY		#$A

; =============== S U B	R O U T	I N E =======================================
sub_20707:				; CODE XREF: sub_206E8+4-j sub_206EF+4-j
					; sub_206F6+4-j	sub_206FD+4-j
		STY		byte_78		; code used at 8000
		BRK
		.BYTE $A4, 7		; ofs 0x00038018, -> dst _b2_sC
		LDY		#0		; code used at 8000
loc_2070E:				; CODE XREF: sub_20707+16-j
		LDX		byte_77		; code used at 8000
		INC		byte_77		; code used at 8000
		LDA.WY		word_4,Y	; code used at 8000
		STA		byte_400,X	; code used at 8000
		INY				; code used at 8000
		INC		byte_79		; code used at 8000
		DEC		byte_78		; code used at 8000
		BNE		loc_2070E	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20720:				; CODE XREF: sub_202D1-p sub_202DA-p
					; sub_202E0-p sub_2030F-p sub_20325-p
					; sub_2034D-p
		LDA		byte_7E		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_7E		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_2038F,X	; code used at 8000
		STA		byte_75		; code used at 8000
		AND		#$F		; code used at 8000
		ORA		#$10		; code used at 8000
		STA		byte_471	; code used at 8000
		AND		#$F		; code used at 8000
		ASL		; code used at 8000
		STA		byte_74		; code used at 8000
		LDA		byte_2038F+1,X	; code used at 8000
		STA		byte_470	; code used at 8000
		LSR		byte_75		; code used at 8000
		LSR		byte_75		; code used at 8000
		LSR		byte_75		; code used at 8000
		LSR		byte_75		; code used at 8000
		LDA		byte_2038F+2,X	; code used at 8000
		STA		byte_76		; code used at 8000
		LDX		#0		; code used at 8000
		STX		byte_7B		; code used at 8000
		TXA				; code used at 8000
loc_20750:				; CODE XREF: sub_20720+36-j
		STA		byte_460,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BNE		loc_20750	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20759:				; CODE XREF: sub_20162+7-p
		STA		byte_7E		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_7E		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_75		; code used at 8000
		PHA				; code used at 8000
		LDY		#0		; code used at 8000
		JSR		sub_20775	; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		INX				; code used at 8000
		JSR		sub_20775	; code used at 8000
		PLA				; code used at 8000
		STA		byte_74		; code used at 8000
		BRK
		.BYTE $19, $17		; ofs 0x00158024, -> dst _bE_s12
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20775:				; CODE XREF: sub_20759+C-p
					; sub_20759+12-p
		LDA		byte_2038F,X	; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		STA.WY		byte_74,Y	; code used at 8000
		LDA		byte_2038F,X	; code used at 8000
		AND		#$F		; code used at 8000
		STA.WY		byte_75,Y	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_sA:					; CODE XREF: _b4_s0:loc_680CD-P
					; DATA XREF: BANK1:8014-o
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		LDA		byte_566	; code used at 8000
		AND		#$F3       ; code used at 8000
		STA		byte_566	; code used at 8000
		JSR		sub_207B6	; code used at 8000
		LDA		byte_566	; code used at 8000
		AND		#$C0       ; code used at 8000
		BEQ		locret_207B5	; code used at 8000
		SEC
		SBC		#$40 
		STA		word_4
		LDA		byte_566
		AND		#$3F 
		ORA		word_4
		STA		byte_566
		AND		#$C0 
		BNE		locret_207B5
		LDA		#$55 
		BRK
		.BYTE $73, 7		; ofs 0x00068010, -> dst _b4_s8
locret_207B5:				; CODE XREF: _b1_sA+13-j _b1_sA+26-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_207B6:				; CODE XREF: _b1_sA+B-p
		LDY		#0		; code used at 8000
loc_207B8:				; CODE XREF: sub_207B6+36-j
		TYA				; code used at 8000
		PHA				; code used at 8000
		STA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_530,Y	; code used at 8000
		AND		byte_531,Y	; code used at 8000
		BPL		loc_207E7	; code used at 8000
		BRK
		.BYTE $D2, 7		; ofs 0x00068030, -> dst _b4_s18
		LDA		byte_59		; code used at 8000
		BEQ		loc_207E7	; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_207EF-1,X	; code used at 8000
		STX		byte_60C1	; code used at 8000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		LDX		byte_60C1	; code used at 8000
		ADC		byte_207EF-2,X	; code used at 8000
		STA		byte_65		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_66		; code used at 8000
		BRK
		.BYTE $D3, 7		; ofs 0x00068032, -> dst _b4_s19
loc_207E7:				; CODE XREF: sub_207B6+E-j
					; sub_207B6+15-j
		PLA				; code used at 8000
		TAY				; code used at 8000
		INY				; code used at 8000
		CPY		#8		; code used at 8000
		BNE		loc_207B8	; code used at 8000
		RTS				; code used at 8000
byte_207EF:
		.BYTE $10,  8,$2C, $C,$5A,$14 ;	DATA XREF: sub_207B6+19-r
					; sub_207B6+25-r

; =============== S U B	R O U T	I N E =======================================
_b1_sB:					; CODE XREF: _b4_s0:loc_68080-P
					; DATA XREF: BANK1:8016-o
		LDX		#0		; code used at 8000
loc_207F7:				; CODE XREF: _b1_sB+38-j
		TXA				; code used as ind data	at 8000
		PHA				; code used at 8000
		STA		byte_CE		; code used at 8000
		LDA		#$FB       ; code used at 8000
		AND		byte_6A9B,X	; code used at 8000
		STA		byte_6A9B,X	; code used at 8000
		AND		#8		; code used as ind data	at 8000
		BEQ		loc_2080F	; code used at 8000
		LDA		#4		; code used at 8000
		ORA		byte_6A9B,X	; code used at 8000
		STA		byte_6A9B,X	; code used at 8000
loc_2080F:				; CODE XREF: _b1_sB+10-j
		LDA		#$44       ; code used at 8000
		STA		byte_CF		; code used at 8000
		BRK
		.BYTE $9C, 7		; ofs 0x0000808a, -> dst _b0_s45
		LDA		word_4		; code used as ind data	at 8000
		CMP		#$C4       ; code used as ind data at 8000
		BNE		loc_20828	; code used at 8000
		PLA
		PHA
		ASL
		TAX
		LDA		byte_73D,X
		ORA		#$10
		STA		byte_73D,X
loc_20828:				; CODE XREF: _b1_sB+25-j
		PLA				; code used at 8000
		TAX				; code used at 8000
		INX				; code used as ind data	at 8000
		CPX		#4		; code used at 8000
		BNE		loc_207F7	; code used at 8000
loc_2082F:				; CODE XREF: _b1_sB+45-j
		DEX				; code used at 8000
		BMI		loc_2083D	; code used at 8000
		LDA		byte_6A9B,X	; code used as ind data	at 8000
		AND		#$DF       ; code used as ind data at 8000
		STA		byte_6A9B,X	; code used as ind data	at 8000
		JMP		loc_2082F	; code used at 8000
loc_2083D:				; CODE XREF: _b1_sB+3B-j
		INX				; code used at 8000
loc_2083E:				; CODE XREF: _b1_sB+57-j
		TXA				; code used as ind data	at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_531,Y	; code used at 8000
		AND		#$BF       ; code used at 8000
		STA		byte_531,Y	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#8		; code used as ind data	at 8000
		BNE		loc_2083E	; code used as ind data	at 8000
		LDA		byte_568	; code used at 8000
		AND		#$F7       ; code used at 8000
		STA		byte_568	; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_s9:					; CODE XREF: _b4_s0+24-P
					; DATA XREF: BANK1:8012-o
		LDA		#0		; code used at 8000
		STA		byte_576	; code used at 8000
		LDA		#$3D       ; code used at 8000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		LDX		#0		; code used at 8000
		STX		byte_51		; code used at 8000
		STX		byte_52		; code used at 8000
loc_2086A:				; CODE XREF: _b1_s9+25-j
		LDX		byte_51		; code used at 8000
		LDA		_enemy_roster_index_list,X ; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_20876	; code used at 8000
		JMP		loc_208FA	; code used at 8000
loc_20876:				; CODE XREF: _b1_s9+1A-j _b1_s9+A8-j
					; _b1_s9+D9-j
		INC		byte_51		; code used at 8000
		LDA		byte_51		; code used at 8000
		CMP		#4		; code used at 8000
		BNE		loc_2086A	; code used at 8000
		BRK
		.BYTE $31, $17		; ofs 0x00068042, -> dst _b4_s21
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		LDA		byte_6A63	; code used at 8000
		BNE		loc_208F6	; code used at 8000
		LDA		byte_6A6B	; code used at 8000
		BEQ		loc_20891	; code used at 8000
		JMP		loc_208F6	; code used at 8000
loc_20891:				; CODE XREF: _b1_s9+35-j
		LDA		byte_49		; code used at 8000
		BEQ		loc_208A4	; code used at 8000
		CMP		#3
		BEQ		loc_208F6
		CMP		#1
		BNE		loc_208A4
		JSR		sub_1743B8
		CMP		#$20 
		BCC		loc_208AB
loc_208A4:				; CODE XREF: _b1_s9+3C-j _b1_s9+44-j
		JSR		sub_1743B8	; code used at 8000
		CMP		#8		; code used at 8000
		BCS		loc_208C8	; code used at 8000
loc_208AB:				; CODE XREF: _b1_s9+4B-j
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		LDA		#$A0       ; code used at 8000
		STA		byte_D2		; code used at 8000
		LDX		#$6D       ; code used at 8000
		BRK
		.BYTE $D6, 7		; ofs 0x00068038, -> dst _b4_s1C
		BRK
		.BYTE $73, 7		; ofs 0x00068010, -> dst _b4_s8
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		LDA		byte_566	; code used at 8000
		ORA		#4		; code used at 8000
		STA		byte_566	; code used at 8000
		JMP		loc_208F6	; code used at 8000
loc_208C8:				; CODE XREF: _b1_s9+52-j
		LDA		byte_49		; code used at 8000
		CMP		#2		; code used at 8000
		BNE		loc_208D5	; code used at 8000
		JSR		sub_1743B8
		CMP		#$20 
		BCC		loc_208DC
loc_208D5:				; CODE XREF: _b1_s9+75-j
		JSR		sub_1743B8	; code used at 8000
		CMP		#8		; code used at 8000
		BCS		loc_208F6	; code used at 8000
loc_208DC:				; CODE XREF: _b1_s9+7C-j
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		LDA		#$A0       ; code used at 8000
		STA		byte_D2		; code used at 8000
		LDX		#$71       ; code used at 8000
		BRK
		.BYTE $D6, 7		; ofs 0x00068038, -> dst _b4_s1C
		BRK
		.BYTE $73, 7		; ofs 0x00068010, -> dst _b4_s8
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		LDA		byte_566	; code used at 8000
		ORA		#8		; code used at 8000
		STA		byte_566	; code used at 8000
loc_208F6:				; CODE XREF: _b1_s9+30-j _b1_s9+37-j
					; _b1_s9+40-j _b1_s9+6E-j _b1_s9+83-j
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		RTS				; code used at 8000
loc_208FA:				; CODE XREF: _b1_s9+1C-j
		LDA		byte_571,X	; code used at 8000
		BNE		loc_20902	; code used at 8000
		JMP		loc_20876	; code used at 8000
loc_20902:				; CODE XREF: _b1_s9+A6-j
		STA		byte_63F	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_640	; code used at 8000
		STA		byte_641	; code used at 8000
		LDA		byte_52		; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_D2		; code used at 8000
		JSR		sub_20933	; code used at 8000
		LDA		byte_6A32	; code used at 8000
		ORA		#$40       ; code used at 8000
		STA		byte_6A32	; code used at 8000
		LDX		#7		; code used at 8000
		JSR		sub_20977	; code used at 8000
		BRK
		.BYTE 6, 7		; ofs 0x0015800c, -> dst _bE_s6_msg_mFF
		INC		byte_52		; code used at 8000
		LDA		byte_6A32	; code used at 8000
		AND		#$BF       ; code used at 8000
		STA		byte_6A32	; code used at 8000
		JMP		loc_20876	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20933:				; CODE XREF: _b1_s9+BC-p
		LDA		byte_6A32	; code used at 8000
		AND		#$F1       ; code used at 8000
		STA		byte_6A32	; code used at 8000
		JSR		sub_20987	; code used at 8000
		CPX		#3		; code used at 8000
		BCC		loc_2094B	; code used at 8000
loc_20942:				; CODE XREF: sub_20933+2E-j
		LDA		byte_6A32	; code used at 8000
		ORA		#2		; code used at 8000
		STA		byte_6A32	; code used at 8000
		RTS				; code used at 8000
loc_2094B:				; CODE XREF: sub_20933+D-j
		LDY		#0		; code used at 8000
loc_2094D:				; CODE XREF: sub_20933+20-j
					; sub_20933+25-j sub_20933+2A-j
		INX				; code used at 8000
		LDA		_enemy_roster_index_list,X ; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_2094D	; code used at 8000
		LDA		byte_571,X	; code used at 8000
		BEQ		loc_2094D	; code used at 8000
		INY				; code used at 8000
		CPX		#4		; code used at 8000
		BCC		loc_2094D	; code used at 8000
		CPY		#2		; code used at 8000
		BCC		loc_20942	; code used at 8000
		BEQ		loc_2096E	; code used at 8000
		LDA		byte_6A32	; code used at 8000
		ORA		#4		; code used at 8000
		STA		byte_6A32	; code used at 8000
		RTS				; code used at 8000
loc_2096E:				; CODE XREF: sub_20933+30-j
		LDA		byte_6A32	; code used at 8000
		ORA		#8		; code used at 8000
		STA		byte_6A32	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20977:				; CODE XREF: _b1_s9+C9-p
		LDA		byte_6A32	; code used at 8000
		AND		#$E		; code used at 8000
		LSR		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_20982,Y	; code used at 8000
		RTS				; code used at 8000
byte_20982:
		.BYTE	0,$13,$14,$16,$15 ; DATA XREF: sub_20977+7-r

; =============== S U B	R O U T	I N E =======================================
sub_20987:				; CODE XREF: sub_20933+8-p
		TXA				; code used at 8000
		PHA				; code used at 8000
		LDX		#0		; code used at 8000
		LDY		#0		; code used at 8000
loc_2098D:				; CODE XREF: sub_20987+16-j
		LDA		_enemy_roster_index_list,X ; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_2099A	; code used at 8000
		LDA		byte_571,X	; code used at 8000
		BEQ		loc_2099A	; code used at 8000
		INY				; code used at 8000
loc_2099A:				; CODE XREF: sub_20987+B-j
					; sub_20987+10-j
		INX				; code used at 8000
		CPX		#3		; code used at 8000
		BNE		loc_2098D	; code used at 8000
		CPY		#1		; code used at 8000
		BNE		loc_209C0	; code used at 8000
		LDX		#0		; code used at 8000
loc_209A5:				; CODE XREF: sub_20987+28-j
		LDA		byte_571,X	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_209B3	; code used at 8000
		INX				; code used at 8000
		CPX		#3		; code used at 8000
		BNE		loc_209A5	; code used at 8000
		BEQ		loc_209C0	; code used at 8000
loc_209B3:				; CODE XREF: sub_20987+23-j
		PLA				; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6A32	; code used at 8000
		ORA		#6		; code used at 8000
		STA		byte_6A32	; code used at 8000
		RTS				; code used at 8000
loc_209C0:				; CODE XREF: sub_20987+1A-j
					; sub_20987+2A-j
		PLA				; code used at 8000
		TAX				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_sC:					; CODE XREF: _b4_s0:loc_680A0-P
					; DATA XREF: BANK1:8018-o
		LDA		byte_60B7	; code used at 8000
		AND		#$DF       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		LDA		#$3D       ; code used at 8000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		BRK
		.BYTE $D5, 7		; ofs 0x00068036, -> dst _b4_s1B
		LDA		#0		; code used at 8000
		STA		byte_D2		; code used at 8000
		LDX		#$27       ; code used at 8000
		BRK
		.BYTE $D7, 7		; ofs 0x0006803a, -> dst _b4_s1D
		TAX				; code used at 8000
		CPX		#$27       ; code used at 8000
		BEQ		loc_209E6	; code used at 8000
		LDX		#$2B       ; code used at 8000
loc_209E6:				; CODE XREF: _b1_sC+1F-j
		TXA				; code used at 8000
		LDX		#0		; code used at 8000
		BRK
		.BYTE 6, 7		; ofs 0x0015800c, -> dst _bE_s6_msg_mFF
		BRK
		.BYTE $13, $2F		; _syscall12
		BRK
		.BYTE $49, $17		; ofs 0x000080a0, -> dst _b0_s50
		LDA		byte_60BA	; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_209FA	; code used at 8000
		RTS				; code used at 8000
loc_209FA:				; CODE XREF: _b1_sC+34-j
		LDA		#$80 
		STA		byte_73C
		STA		byte_73D
		LDA		#0
		STA		byte_CE
		JSR		_sram_bank0_sub3
		LDA		word_4
		STA		byte_71C
		LDA		word_4+1
		STA		byte_71D
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		BRK
		.BYTE $4A, $17		; ofs 0x0012805e, -> dst _bC_s2F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20A1A:				; CODE XREF: _b1_sD+46-j
		BRK
		.BYTE $B, $17		; ofs 0x000f8024, -> dst _bA_s12
		JSR		__pause_or_skip
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		RTS

; =============== S U B	R O U T	I N E =======================================
_pause_or_skip:				; CODE XREF: _b1_sD+4A-j
		JMP		__pause_or_skip	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b1_sD:					; CODE XREF: _b4_s0+55-P
					; DATA XREF: BANK1:801A-o
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		LDA		#$A0       ; code used at 8000
		STA		byte_D2		; code used at 8000
		BIT		byte_568	; code used at 8000
		BMI		loc_20A5A	; code used at 8000
		BVC		loc_20A4C	; code used at 8000
		BRK
		.BYTE $16, $2F		; _syscall12
		JSR		sub_20CAA	; code used at 8000
		LDX		#$E		; code used at 8000
		BRK
		.BYTE $D6, 7		; ofs 0x00068038, -> dst _b4_s1C
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		JMP		loc_20A68	; code used at 8000
loc_20A4C:				; CODE XREF: _b1_sD+C-j
		JSR		sub_20CAA
		LDX		#$50 
		BRK
		.BYTE $D6, 7		; ofs 0x00068038, -> dst _b4_s1C
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JMP		loc_20A76
loc_20A5A:				; CODE XREF: _b1_sD+A-j
		BRK
		.BYTE $16, $2F		; _syscall12
		JSR		sub_20CAA
		LDX		#$5D 
		BRK
		.BYTE $D6, 7		; ofs 0x00068038, -> dst _b4_s1C
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
loc_20A68:				; CODE XREF: _b1_sD+1F-j
		BRK
		.BYTE $F0, 7		; ofs 0x00020020, -> dst _b1_s10
		LDA		byte_6A6F	; code used at 8000
		CMP		#$84       ; code used at 8000
		BEQ		sub_20A1A	; code used at 8000
		CMP		#$86       ; code used at 8000
		BEQ		_pause_or_skip	; code used at 8000
loc_20A76:				; CODE XREF: _b1_sD+2D-j
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDA		byte_5D		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		word_5E		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		word_5E+1	; code used at 8000
		STA		word_6		; code used at 8000
		LDX		#word_4		; code used at 8000
		LDA		#byte_3		; code used at 8000
		BRK
		.BYTE $A2, $17		; ofs 0x000f8008, -> dst _bA_s4_div24_to_8
		CMP		#1		; code used at 8000
		LDA		word_4+1	; code used at 8000
		TAY				; code used at 8000
		LDA		word_4		; code used at 8000
		LDX		#byte_5D	; code used at 8000
		JSR		_add_16_to_24	; code used at 8000
		JSR		sub_20CB4	; code used at 8000
		LDY		#_tmp21		; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_20AB7	; code used at 8000
		LDA		word_4		; code used at 8000
		LDX		#byte_5D	; code used at 8000
		BRK
		.BYTE $A2, $17		; ofs 0x000f8008, -> dst _bA_s4_div24_to_8
		CMP		#1		; code used at 8000
		LDA		#0		; code used at 8000
		TAY				; code used at 8000
		JSR		_add_16_to_24	; code used at 8000
		LDY		#$B5       ; code used at 8000
loc_20AB7:				; CODE XREF: _b1_sD+7A-j
		LDX		#0		; code used at 8000
		STX		word_4		; code used at 8000
loc_20ABB:				; CODE XREF: _b1_sD+9D-j
		LDA		byte_5D,X	; code used at 8000
		STA		byte_63F,X	; code used at 8000
		ORA		word_4		; code used at 8000
		STA		word_4		; code used at 8000
		INX				; code used at 8000
		CPX		#3		; code used at 8000
		BNE		loc_20ABB	; code used at 8000
		LDA		word_4		; code used at 8000
		BEQ		loc_20AED	; code used at 8000
		TYA				; code used at 8000
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		LDA		byte_5D		; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		word_5E		; code used at 8000
		STA		byte_D0		; code used at 8000
		LDA		word_5E+1	; code used at 8000
		STA		byte_D1		; code used at 8000
		LDX		#0		; code used at 8000
loc_20ADF:				; CODE XREF: _b1_sD+C1-j
		STX		byte_CE		; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		_sram_bank0_sub1A ; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_20ADF	; code used at 8000
loc_20AED:				; CODE XREF: _b1_sD+A1-j
		LDA		byte_62		; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_20AF6	; code used at 8000
		JMP		loc_20BE7
loc_20AF6:				; CODE XREF: _b1_sD+C7-j
		STA		byte_64		; code used at 8000
		BRK
		.BYTE $D1, 7		; ofs 0x0006802e, -> dst _b4_s17
		LDA		byte_59		; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_20B04	; code used at 8000
		JMP		loc_20BE7	; code used at 8000
loc_20B04:				; CODE XREF: _b1_sD+D5-j
		PHA				; code used at 8000
		LDA		byte_64		; code used at 8000
		STA		byte_6A73	; code used at 8000
		STA		byte_6A6F	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_6A77	; code used at 8000
		STA		byte_530	; code used at 8000
		STA		byte_531	; code used at 8000
		STA		byte_D2		; code used at 8000
		LDX		#$62       ; code used at 8000
		BRK
		.BYTE $D6, 7		; ofs 0x00068038, -> dst _b4_s1C
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JSR		sub_20D11	; code used at 8000
		STA		byte_D2		; code used at 8000
		BRK
		.BYTE $8F, $2F		; _syscall12
		LDA		#$64       ; code used at 8000
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		PLA				; code used at 8000
		STA		byte_D3		; code used at 8000
		STA		byte_48		; code used at 8000
		CMP		#$1D		; code used at 8000
		BNE		loc_20B48	; code used at 8000
		BIT		byte_60C7
		BVC		loc_20B40
		JMP		loc_20BE7
loc_20B40:				; CODE XREF: _b1_sD+111-j
		LDA		byte_60C7
		ORA		#$40 
		STA		byte_60C7
loc_20B48:				; CODE XREF: _b1_sD+10C-j
		LDA		#$65       ; code used at 8000
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JSR		sub_20CDB	; code used at 8000
		STA		byte_D4		; code used at 8000
		STA		byte_47		; code used at 8000
		BCS		loc_20BD1	; code used at 8000
		LDX		#$66 
		BRK
		.BYTE $D7, 7		; ofs 0x0006803a, -> dst _b4_s1D
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
loc_20B5E:				; CODE XREF: _b1_sD+150-j
		LDA		#$45 
		LDX		#1
		BRK
		.BYTE 8, 7		; ofs 0x00158010, -> dst _bE_s4_msg_m00
		BRK
		.BYTE $86, $2F		; _syscall12
		BRK
		.BYTE $1D, $E7		; _syscall0E
		CMP		#0
		BEQ		loc_20B87
loc_20B6F:				; CODE XREF: _b1_sD+169-j
		LDA		byte_48
		CMP		#$77 
		BCC		loc_20B7D
loc_20B75:				; CODE XREF: _b1_sD+196-j
		LDA		#$60 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JMP		loc_20B5E
loc_20B7D:				; CODE XREF: _b1_sD+149-j
		STA		byte_D3
		LDA		#$69 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JMP		loc_20BE7
loc_20B87:				; CODE XREF: _b1_sD+143-j _b1_sD+17B-j
		LDA		#$6A 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		LDA		#$1C
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF
		BEQ		loc_20B6F
		STA		byte_CE
		STA		byte_47
		LDA		#$68 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		LDA		#$2D 
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF
		BEQ		loc_20B87
		STA		byte_CF
		LDA		byte_47
		STA		byte_D2
		STA		byte_CE
		JSR		_sram_bank0_sub28
		LDA		word_4+1
		AND		#$7F 
		STA		byte_D3
		TAX
		LDA		#$90 
		JSR		_get_syscall0_data_byte_X
		AND		#$10
		BNE		loc_20B75
		JSR		_sram_bank0_sub2A
		LDA		byte_48
		STA		byte_D4
		LDA		#$6B 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JMP		loc_20BDC
loc_20BD1:				; CODE XREF: _b1_sD+12A-j
		CMP		byte_D2		; code used at 8000
		BEQ		loc_20BDC	; code used at 8000
		LDA		#$2D 
		LDX		#1
		BRK
		.BYTE 8, 7		; ofs 0x00158010, -> dst _bE_s4_msg_m00
loc_20BDC:				; CODE XREF: _b1_sD+1A4-j _b1_sD+1A9-j
		LDA		byte_48		; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		byte_47		; code used at 8000
		STA		byte_CE		; code used at 8000
		JSR		_sram_bank0_sub29 ; code used at 8000
loc_20BE7:				; CODE XREF: _b1_sD+C9-j _b1_sD+D7-j
					; _b1_sD+113-j _b1_sD+15A-j
		LDA		word_60		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		word_60+1	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDX		#word_60	; code used at 8000
		LDA		#5		; code used at 8000
		JSR		_div16_to_8	; code used at 8000
		CMP		#1		; code used at 8000
		LDA		word_4		; code used at 8000
		ADC		word_60		; code used at 8000
		STA		word_60		; code used at 8000
		LDA		word_4+1	; code used at 8000
		ADC		word_60+1	; code used at 8000
		STA		word_60+1	; code used at 8000
		BCC		loc_20C0C	; code used at 8000
		LDA		#$FF
		STA		word_60
		STA		word_60+1
loc_20C0C:				; CODE XREF: _b1_sD+1DA-j
		LDA		word_60		; code used at 8000
		STA		byte_63F	; code used at 8000
		STA		byte_CE		; code used at 8000
		ORA		word_60+1	; code used at 8000
		BEQ		loc_20C6F	; code used at 8000
		LDA		word_60+1	; code used at 8000
		STA		byte_640	; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_641	; code used at 8000
		STA		byte_D0		; code used at 8000
		JSR		_sram_bank0_sub1C ; code used at 8000
		LDA		#$26       ; code used at 8000
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JSR		sub_1743B8	; code used at 8000
		AND		#3		; code used at 8000
		BNE		loc_20C6F	; code used at 8000
		LDX		#3		; code used at 8000
loc_20C36:				; CODE XREF: _b1_sD+221-j
		TXA				; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_73C,Y	; code used at 8000
		AND		byte_73D,Y	; code used at 8000
		BPL		loc_20C4A	; code used at 8000
		LDA		byte_718,X	; code used at 8000
		AND		#7		; code used at 8000
		CMP		#5		; code used at 8000
		BEQ		loc_20C4F	; code used at 8000
loc_20C4A:				; CODE XREF: _b1_sD+215-j
		DEX				; code used at 8000
		BPL		loc_20C36	; code used at 8000
		BMI		loc_20C6F	; code used at 8000
loc_20C4F:				; CODE XREF: _b1_sD+21E-j
		STX		byte_D2
		LDX		#byte_CE
		LDA		#8
		JSR		_div16_to_8
		LDA		#1
		JSR		_add8_to_16	; A = value
					; X = ram var ofs
		LDA		byte_CE
		STA		byte_63F
		LDA		byte_CF
		STA		byte_640
		JSR		_sram_bank0_sub1C
		LDA		#$B6 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
loc_20C6F:				; CODE XREF: _b1_sD+1EB-j _b1_sD+208-j
					; _b1_sD+223-j
		BRK
		.BYTE $AA, 7		; ofs 0x0000808e, -> dst _b0_s47
		BRK
		.BYTE $A9, 7		; ofs 0x0000808c, -> dst _b0_s46
		LDA		byte_6A6B	; code used as ind data	at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_20C8B	; code used at 8000
		LDA		byte_6A6B	; code used at 8000
		CMP		#$11		; code used at 8000
		BEQ		loc_20CA2	; code used at 8000
loc_20C83:				; CODE XREF: _b1_sD+264-j _b1_sD+275-j
		LDA		#$13		; code used at 8000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		JMP		__pause_or_skip	; code used at 8000
loc_20C8B:				; CODE XREF: _b1_sD+250-j
		LDA		byte_60CA
		BPL		loc_20C83
		LDA		#$B
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
loc_20C95:				; CODE XREF: _b1_sD+27D-j
		LDA		#$29 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		LDA		#$3C 
		STA		byte_6DF
		JMP		loc_20C83
loc_20CA2:				; CODE XREF: _b1_sD+257-j
		LDA		#$2A 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		JMP		loc_20C95

; =============== S U B	R O U T	I N E =======================================
sub_20CAA:				; CODE XREF: _b1_sD+11-p
					; _b1_sD:loc_20A4C-p _b1_sD+33-p
		LDA		#$80       ; code used at 8000
		STA		byte_6A77	; code used at 8000
		LDA		#$A0       ; code used at 8000
		STA		byte_D2		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20CB4:				; CODE XREF: _b1_sD+71-p
		LDX		#0		; code used at 8000
loc_20CB6:				; CODE XREF: sub_20CB4+10-j
		TXA				; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_73C,Y	; code used at 8000
		AND		byte_73D,Y	; code used at 8000
		BMI		loc_20CC6	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_20CB6	; code used at 8000
loc_20CC6:				; CODE XREF: sub_20CB4+B-j
		STX		byte_D2		; code used at 8000
		JMP		_sram_bank0_sub33 ; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_add_16_to_24:				; CODE XREF: _b1_sD+6E-p _b1_sD+88-p
		ADC		0,X		; code used at 8000
		STA		0,X		; code used at 8000
		TYA				; code used at 8000
		ADC		1,X		; code used at 8000
		STA		1,X		; code used at 8000
		LDA		#0		; code used at 8000
		ADC		2,X		; code used at 8000
		STA		2,X		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20CDB:				; CODE XREF: _b1_sD+123-p sub_20D11-p
		JSR		_sram_b0_s31	; code used at 8000
		LDY		#0		; code used at 8000
loc_20CE0:				; CODE XREF: sub_20CDB+2B-j
		TYA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		byte_73D,X	; code used at 8000
		BPL		loc_20D03	; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		loc_20D03	; code used at 8000
		TXA				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
loc_20CF6:				; CODE XREF: sub_20CDB+26-j
		LDA		byte_77C,X	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		sub_20D0C	; code used at 8000
		INX				; code used at 8000
		TXA				; code used at 8000
		AND		#7		; code used at 8000
		BNE		loc_20CF6	; code used at 8000
loc_20D03:				; CODE XREF: sub_20CDB+E-j
					; sub_20CDB+15-j
		INY				; code used at 8000
		CPY		word_4		; code used at 8000
		BCC		loc_20CE0	; code used at 8000
		BRK
		.BYTE $68, 7		; ofs 0x00008078, -> dst _b0_s3C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20D0C:				; CODE XREF: sub_20CDB+20-j
					; sub_20D11+16-j sub_20D11+2E-j
		TYA				; code used at 8000
		STA		word_4		; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_20D11:				; CODE XREF: _b1_sD+F8-p
		JSR		sub_20CDB	; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		byte_73D,X	; code used at 8000
		BPL		loc_20D2A	; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		loc_20D2A	; code used at 8000
		LDY		word_4		; code used at 8000
		JMP		sub_20D0C	; code used at 8000
loc_20D2A:				; CODE XREF: sub_20D11+B-j
					; sub_20D11+12-j
		JSR		_sram_b0_s31
		LDY		#0
loc_20D2F:				; CODE XREF: sub_20D11+33-j
		TYA
		ASL
		TAX
		LDA		byte_73C,X
		AND		byte_73D,X
		BPL		loc_20D41
		LDA		byte_73D,X
		AND		#$40 
		BEQ		sub_20D0C
loc_20D41:				; CODE XREF: sub_20D11+27-j
		INY
		CPY		word_4
		BCC		loc_20D2F
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
_b1_sE:					; CODE XREF: sub_142C17:loc_142C96-P
					; DATA XREF: BANK1:801C-o
		LDX		byte_CE
		LDA		byte_718,X
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
loc_20D5D:				; CODE XREF: _b1_sE+19-j
		STA		byte_79C,X
		INX
		DEY
		BNE		loc_20D5D
loc_20D64:				; CODE XREF: _b1_sE+9-j
		LDX		byte_CE
		LDA		#1
		STA		byte_700,X
		LDA		byte_718,X
		AND		#$F8 
		ORA		byte_CF
		STA		byte_718,X
		LSR		byte_704,X
		LSR		byte_708,X
		LSR		byte_70C,X
		LSR		byte_710,X
		LSR		byte_714,X
		TXA
		ASL
		TAX
		LSR		byte_72D,X
		ROR		byte_72C,X
		LSR		byte_735,X
		ROR		byte_734,X
		LSR		byte_725,X
		ROR		byte_724,X
		LDA		byte_725,X
		STA		byte_71D,X
		LDA		byte_724,X
		STA		byte_71C,X
		LDX		byte_CE
		JSR		sub_20DCE
		LDA		#0
		STA		byte_746,X
		STA		byte_745,X
		STA		byte_744,X
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		#8
loc_20DBD:				; CODE XREF: _b1_sE+82-j
		LDA		byte_77C,X
		CMP		#$FF
		BEQ		loc_20DC9
		AND		#$7F 
		STA		byte_77C,X
loc_20DC9:				; CODE XREF: _b1_sE+79-j
		INX
		DEY
		BNE		loc_20DBD
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_20DCE:				; CODE XREF: _b1_sE+5E-p
		PHA
		TXA
		STA		_tmp12+1
		ASL
		CLC
		ADC		_tmp12+1
		TAX
		PLA
		RTS

		ECHO "bank 01 size", [.-$8000], "free space", [$BFD8-.]

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
