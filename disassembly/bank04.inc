
		ORG $8000

		.WORD _b4_s0		; data used at 8000
		.WORD _b4_s1		; data used at 8000
		.WORD _b4_s2		; data used at 8000
		.WORD _b4_s3		; data used at 8000
		.WORD _b4_s4
		.WORD _b4_s5		; data used at 8000
		.WORD _b4_s6		; data used at 8000
		.WORD _b4_s7		; data used at 8000
		.WORD _b4_s8		; data used at 8000
		.WORD _b4_s9		; data used at 8000
		.WORD _b4_sA		; data used at 8000
		.WORD _b4_sB
		.WORD _b4_sC		; data used at 8000
		.WORD _b4_dD_spells_list ; data	used at	8000
		.WORD _b4_sE		; data used at 8000
		.WORD _b4_sF		; data used at 8000
		.WORD _b4_s10
		.WORD _b4_d11
		.WORD _b4_s12		; data used at 8000
		.WORD _b4_s13
		.WORD _b4_s14
		.WORD _b4_d15
		.WORD _b4_s16
		.WORD _b4_s17		; data used at 8000
		.WORD _b4_s18		; data used at 8000
		.WORD _b4_s19		; data used at 8000
		.WORD _b4_s1A		; data used at 8000
		.WORD _b4_s1B		; data used at 8000
		.WORD _b4_s1C		; data used at 8000
		.WORD _b4_s1D		; data used at 8000
		.WORD _b4_s1E		; data used at 8000
		.WORD _b4_s1F
		.WORD _b4_s20
		.WORD _b4_s21		; data used at 8000
		.WORD _b4_s22
		.WORD _b4_s23
		.WORD _b4_s24		; data used at 8000
		.WORD _b4_s25		; data used at 8000
		.WORD _b4_s26		; data used at 8000
		.WORD _b4_s27		; data used at 8000
		.WORD _b4_s28		; data used at 8000
		.WORD _b4_s29		; data used at 8000
		.WORD _b4_s2A		; data used at 8000
		.WORD _b4_s2B

_b4_d11:
		.BYTE 2			; DATA XREF: BANK4:8022-o

; =============== S U B	R O U T	I N E =======================================
_b4_s0:					; CODE XREF: sub_8683:loc_8721-P
					; DATA XREF: BANK4:8000-o
		LDA		#0		; code used at 8000
		STA		byte_6A63	; code used at 8000
		JSR		_b4_s1A		; code used at 8000
loc_68061:				; CODE XREF: sub_680F1+6-j
		LDA		byte_62		; code used at 8000
		STA		byte_6A6B	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6A66	; code used at 8000
		LDA		byte_60B7	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		BRK
		.BYTE 5, 7		; ofs 0x0015800a, -> dst _bE_s5
		LDA		#$FD       ; code used at 8000
		STA		byte_32		; code used at 8000
		JSR		_b4_s22		; code used at 8000
		BRK
		.BYTE $D8, 7		; ofs 0x00020012, -> dst _b1_s9
loc_68080:				; CODE XREF: _b4_s0+79-j sub_6A1EE+11-j
		BRK
		.BYTE $DA, 7		; ofs 0x00020016, -> dst _b1_sB
		JSR		sub_6814E	; code used as ind data	at 8000
		BRK
		.BYTE $79, 7		; ofs 0x00038016, -> dst _b2_sB
		CMP		#$FD       ; code used at 8000
		BEQ		loc_680D6	; code used at 8000
		BRK
		.BYTE $9B, $17		; ofs 0x000f8004, -> dst _bA_s2
		JSR		sub_6AE36	; code used as ind data	at 8000
		JSR		sub_6AE51	; code used at 8000
		INC		byte_6A66	; code used at 8000
		JSR		sub_6889C	; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_680AA	; code used at 8000
loc_680A0:				; CODE XREF: _b4_s0+7B-j
		BRK
		.BYTE $DB, 7		; ofs 0x00020018, -> dst _b1_sC
		LDA		#0		; code used at 8000
		STA		byte_32		; code used at 8000
		JMP		sub_174BB3	; code used at 8000
loc_680AA:				; CODE XREF: _b4_s0+45-j
		CMP		#$FE       ; code used at 8000
		BNE		loc_680B4	; code used at 8000
		BRK
		.BYTE $DC, 7		; ofs 0x0002001a, -> dst _b1_sD
		JMP		loc_680D6	; code used at 8000
loc_680B4:				; CODE XREF: _b4_s0+53-j
		BIT		byte_6A63	; code used at 8000
		BPL		loc_680CD	; code used at 8000
		CMP		#$FC       ; code used at 8000
		BEQ		loc_6811D	; code used at 8000
		CMP		#$FD       ; code used at 8000
		BEQ		sub_680FE	; code used at 8000
		BIT		byte_6A63	; code used at 8000
		BVS		loc_680CD	; code used at 8000
		LDA		byte_6A66	; code used at 8000
		CMP		#$A		; code used at 8000
		BCS		loc_6810D	; code used at 8000
loc_680CD:				; CODE XREF: _b4_s0+5E-j _b4_s0+6B-j
		BRK
		.BYTE $D9, 7		; ofs 0x00020014, -> dst _b1_sA
		LDA		byte_4C		; code used at 8000
		BNE		loc_68080	; code used at 8000
		BEQ		loc_680A0
loc_680D6:				; CODE XREF: _b4_s0+32-j _b4_s0+58-j
					; sub_680FE+37-j
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
loc_680DC:				; CODE XREF: sub_680FE+40-j
		BRK
		.BYTE $49, $17		; ofs 0x000080a0, -> dst _b0_s50
		LDA		byte_60B7	; code used at 8000
		AND		#$DF       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		JSR		sub_174C62	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_8E		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s24:				; CODE XREF: sub_8683+92-P
					; DATA XREF: BANK4:8048-o
		LDA		#$80       ; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_680F1:				; CODE XREF: _b4_s25+2-j
		STA		byte_6A63	; code used at 8000
		STA		byte_6A64	; code used at 8000
		JMP		loc_68061	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s25:				; CODE XREF: sub_8683:loc_871B-P
					; DATA XREF: BANK4:804A-o
		LDA		#$C0       ; code used at 8000
		BNE		sub_680F1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_680FE:				; CODE XREF: _b4_s0+66-j
		LDX		#0		; code used at 8000
		STX		byte_6A64	; code used at 8000
loc_68103:				; CODE XREF: sub_680FE+D-j
		LDA		byte_6A77,X	; code used at 8000
		BMI		loc_68114	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_68103	; code used at 8000
loc_6810D:				; CODE XREF: _b4_s0+72-j
		LDA		#$FF		; code used at 8000
		STA		byte_6A65	; code used at 8000
		BNE		loc_68122	; code used at 8000
loc_68114:				; CODE XREF: sub_680FE+8-j
		STX		byte_6A65	; code used at 8000
		JSR		sub_68141	; code used at 8000
		JMP		loc_68122	; code used at 8000
loc_6811D:				; CODE XREF: _b4_s0+62-j
		LDA		#$FE 
		STA		byte_6A65
loc_68122:				; CODE XREF: sub_680FE+14-j
					; sub_680FE+1C-j
		LDA		byte_60B7	; code used at 8000
		AND		#$DF       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		BIT		byte_6A63	; code used at 8000
		BVS		loc_68138	; code used at 8000
		BRK
		.BYTE $83, $17		; ofs 0x00140018, -> dst _bD_sC
		JSR		__pause_or_skip	; code used at 8000
		JMP		loc_680D6	; code used at 8000
loc_68138:				; CODE XREF: sub_680FE+2F-j
		BRK
		.BYTE $29, $2F		; _syscall12
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		JMP		loc_680DC	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68141:				; CODE XREF: sub_680FE+19-p
		LDX		#0		; code used at 8000
loc_68143:				; CODE XREF: sub_68141+A-j
		LDA		#$80       ; code used at 8000
		STA		byte_6A77,X	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_68143	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6814E:				; CODE XREF: _b4_s0+2A-p
		JSR		sub_68183	; code used as ind data	at 8000
		LDX		#0		; code used at 8000
loc_68153:				; CODE XREF: sub_6814E+11-j
		LDA		byte_558,X	; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used as ind data	at 8000
		STA		byte_540,X	; code used at 8000
		INX				; code used as ind data	at 8000
		CPX		#$C		; code used as ind data	at 8000
		BNE		loc_68153	; code used at 8000
		LDX		#0		; code used at 8000
loc_68163:				; CODE XREF: sub_6814E+1F-j
		TXA				; code used at 8000
		ORA		byte_540,X	; code used as ind data	at 8000
		STA		byte_540,X	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_68163	; code used as ind data	at 8000
		LDX		#0		; code used at 8000
		LDY		#4		; code used at 8000
loc_68173:				; CODE XREF: sub_6814E+32-j
		TXA				; code used as ind data	at 8000
		ORA		#$80       ; code used as ind data at 8000
		ORA		byte_540,Y	; code used as ind data	at 8000
		STA		byte_540,Y	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		CPX		#8		; code used as ind data	at 8000
		BNE		loc_68173	; code used as ind data	at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68183:				; CODE XREF: sub_6814E-p
		LDY		#0		; code used at 8000
loc_68185:				; CODE XREF: sub_68183+18-j
		STY		byte_CE		; code used as ind data	at 8000
		TYA				; code used at 8000
		PHA				; code used as ind data	at 8000
		LDA		byte_6A9F,Y	; code used at 8000
		STA		word_4		; code used as ind data	at 8000
		JSR		sub_68201	; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		TAY				; code used at 8000
		LDA		word_3C		; code used as ind data	at 8000
		STA		byte_54C,Y	; code used at 8000
		INY				; code used as ind data	at 8000
		CPY		#4		; code used at 8000
		BNE		loc_68185	; code used as ind data	at 8000
		LDX		#0		; code used at 8000
		LDY		#4		; code used at 8000
loc_681A1:				; CODE XREF: sub_68183+3B-j
		STX		byte_64		; code used as ind data	at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		TYA				; code used as ind data	at 8000
		PHA				; code used at 8000
		JSR		sub_6B73E	; code used at 8000
		LDA		byte_59		; code used as ind data	at 8000
		STA		word_4		; code used at 8000
		JSR		sub_68201	; code used as ind data	at 8000
		PLA				; code used at 8000
		TAY				; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		word_3C		; code used as ind data	at 8000
		STA		byte_54C,Y	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#8		; code used at 8000
		BNE		loc_681A1	; code used at 8000
		LDA		#$FF		; code used at 8000
		LDX		#0		; code used at 8000
		STX		byte_42		; code used at 8000
loc_681C6:				; CODE XREF: sub_68183+49-j
		STA		byte_540,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#$C		; code used at 8000
		BNE		loc_681C6	; code used as ind data	at 8000
loc_681CE:				; CODE XREF: sub_68183+7B-j
		LDA		#0		; code used at 8000
		STA		byte_43		; code used as ind data	at 8000
		LDX		#0		; code used as ind data	at 8000
loc_681D4:				; CODE XREF: sub_68183+66-j
		LDA		byte_540,X	; code used as ind data	at 8000
		BEQ		loc_681E6	; code used as ind data	at 8000
		LDA		byte_54C,X	; code used as ind data	at 8000
		CMP		byte_43		; code used as ind data	at 8000
		BEQ		loc_681E2	; code used as ind data	at 8000
		BCC		loc_681E6	; code used as ind data	at 8000
loc_681E2:				; CODE XREF: sub_68183+5B-j
		STA		byte_43		; code used as ind data	at 8000
		STX		byte_44		; code used as ind data	at 8000
loc_681E6:				; CODE XREF: sub_68183+54-j
					; sub_68183+5D-j
		INX				; code used as ind data	at 8000
		CPX		#$C		; code used as ind data	at 8000
		BNE		loc_681D4	; code used as ind data	at 8000
		LDX		byte_44		; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		byte_540,X	; code used as ind data	at 8000
		LDA		byte_42		; code used as ind data	at 8000
		STA		byte_558,X	; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#1		; code used as ind data	at 8000
		STA		byte_42		; code used as ind data	at 8000
		CMP		#$C		; code used as ind data	at 8000
		BNE		loc_681CE	; code used as ind data	at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68201:				; CODE XREF: sub_68183+B-p
					; sub_68183+2B-p
		LDA		word_4		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		word_4		; code used as ind data	at 8000
		SEC				; code used at 8000
		SBC		word_4+1	; code used as ind data	at 8000
		JSR		_b4_sF		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		word_4+1	; code used as ind data	at 8000
		STA		word_3C		; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s22:				; CODE XREF: _b4_s0+21-p sub_692D4+25-p
					; DATA XREF: BANK4:8044-o
		LDA		#0		; code used at 8000
		STA		byte_566	; code used at 8000
		STA		byte_567	; code used at 8000
		STA		byte_568	; code used at 8000
		STA		byte_565	; code used at 8000
		STA		byte_569	; code used at 8000
		STA		byte_56A	; code used at 8000
		STA		byte_56B	; code used at 8000
		STA		byte_56C	; code used at 8000
		TAX				; code used at 8000
loc_68230:				; CODE XREF: _b4_s22+20-j
		STA		byte_5D,X	; code used at 8000
		INX				; code used at 8000
		CPX		#5		; code used at 8000
		BNE		loc_68230	; code used at 8000
		LDA		#$FF		; code used at 8000
		STA		byte_62		; code used at 8000
		BRK
		.BYTE $73, $17		; ofs 0x000080aa, -> dst _b0_s55
		BCS		loc_68245	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_568	; code used at 8000
loc_68245:				; CODE XREF: _b4_s22+29-j
		LDX		#0		; code used at 8000
		LDY		#0		; code used at 8000
loc_68249:				; CODE XREF: _b4_s22+41-j
		LDA		byte_73C,X	; code used at 8000
		AND		byte_73D,X	; code used at 8000
		BPL		loc_68252	; code used at 8000
		INY				; code used at 8000
loc_68252:				; CODE XREF: _b4_s22+3A-j
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#8		; code used at 8000
		BNE		loc_68249	; code used at 8000
		STY		byte_4C		; code used at 8000
		LDX		#0		; code used at 8000
loc_6825C:				; CODE XREF: _b4_s22+94-j
		STX		byte_51		; code used at 8000
		TXA				; code used at 8000
		STA		byte_6A9B,X	; code used at 8000
		STA		byte_CE		; code used at 8000
		JSR		_sram_bank0_sub12 ; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_6A9F,X	; code used at 8000
		JSR		_sram_bank0_sub18 ; code used at 8000
		LDA		byte_51		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_6AA3,X	; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_6AA4,X	; code used at 8000
		LDA		byte_51		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		#$80       ; code used at 8000
		STA		byte_73C,X	; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$E0       ; code used at 8000
		STA		byte_73D,X	; code used at 8000
		JSR		_sram_bank0_sub16 ; code used at 8000
		LDA		byte_51		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_6AAB,X	; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_6AAC,X	; code used at 8000
		LDX		byte_51		; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_6825C	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s26:				; CODE XREF: sub_80D4+D4-P
					; sub_6B027+1E-j _b1B_s0+22-P
					; DATA XREF: BANK4:804C-o
		LDX		#0		; code used at 8000
		STX		byte_4D		; code used at 8000
		TXA				; code used at 8000
loc_682B0:				; CODE XREF: _b4_s26+B-j
		STA		byte_530,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BNE		loc_682B0	; code used at 8000
		LDX		#0		; code used at 8000
loc_682BA:				; CODE XREF: _b4_s26+15-j
		STA		byte_6A7B,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$20       ; code used at 8000
		BNE		loc_682BA	; code used at 8000
		LDX		#0		; code used at 8000
loc_682C4:				; CODE XREF: _b4_s26+4F-j
		STX		byte_51		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6A77,X	; code used at 8000
		LDA		_enemy_roster_index_list,X ; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_68308	; code used at 8000
		STA		byte_6A6F,X	; code used at 8000
		STA		byte_6A73,X	; code used at 8000
		LDA		byte_571,X	; code used at 8000
		BEQ		loc_682F5	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_6A77,X	; code used at 8000
		LDY		byte_571,X	; code used at 8000
		TYA				; code used at 8000
		CLC				; code used at 8000
		ADC		byte_4D		; code used at 8000
		STA		byte_4D		; code used at 8000
loc_682EB:				; CODE XREF: _b4_s26+48-j
		TYA				; code used at 8000
		PHA				; code used at 8000
		JSR		loc_68312	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_682EB	; code used at 8000
loc_682F5:				; CODE XREF: _b4_s26+30-j _b4_s26+65-j
		LDX		byte_51		; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_682C4	; code used at 8000
		BRK
		.BYTE $7A, $17		; ofs 0x00140052, -> dst _bD_s29
		JSR		sub_6BA99	; code used at 8000
		JSR		sub_6B3DB	; code used at 8000
		JMP		loc_6833E	; code used as ind data	at 8000
loc_68308:				; CODE XREF: _b4_s26+25-j
		LDA		#$FF		; code used at 8000
		STA		byte_6A6F,X	; code used at 8000
		STA		byte_6A73,X	; code used at 8000
		BNE		loc_682F5	; code used at 8000
loc_68312:				; CODE XREF: _b4_s26+42-p
		LDX		#0		; code used at 8000
		LDY		#0		; code used at 8000
loc_68316:				; CODE XREF: _b4_s26+90-j
		STX		byte_64		; code used at 8000
		JSR		sub_6B8E7	; code used at 8000
		BCS		loc_6833A	; code used as ind data	at 8000
loc_6831D:				; CODE XREF: _b4_s26+7D-j
		JSR		loc_68356	; code used at 8000
		LDA		byte_6A7B,Y	; code used as ind data	at 8000
		BPL		loc_6832B	; code used at 8000
		LDY		word_4		; code used at 8000
		INY				; code used at 8000
		JMP		loc_6831D	; code used at 8000
loc_6832B:				; CODE XREF: _b4_s26+78-j
		TXA				; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_6A7B,Y	; code used at 8000
		TXA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_530,X	; code used at 8000
		RTS				; code used at 8000
loc_6833A:				; CODE XREF: _b4_s26+70-j
		INX				; code used at 8000
		BNE		loc_68316	; code used at 8000
		RTS
loc_6833E:				; CODE XREF: _b4_s26+5A-j
		LDA		#7		; code used at 8000
		STA		byte_64		; code used at 8000
loc_68342:				; CODE XREF: _b4_s26+A8-j
		LDA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_531,X	; code used at 8000
		AND		byte_530,X	; code used at 8000
		BPL		loc_68351	; code used as ind data	at 8000
		JSR		sub_68453	; code used as ind data	at 8000
loc_68351:				; CODE XREF: _b4_s26+A1-j
		DEC		byte_64		; code used at 8000
		BPL		loc_68342	; code used as ind data	at 8000
		RTS				; code used at 8000
loc_68356:				; CODE XREF: _b4_s26:loc_6831D-p
		STY		word_4		; code used as ind data	at 8000
		LDA		byte_51		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used as ind data	at 8000
		ADC		word_4		; code used at 8000
		TAY				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s27:				; CODE XREF: _bA_s3:loc_F82CC-P
					; DATA XREF: BANK4:804E-o
		JSR		sub_6B960	; code used at 8000
		LDA		byte_59		; code used at 8000
		CMP		#3		; code used at 8000
		BNE		loc_6836E	; code used at 8000
		JMP		loc_683BC	; code used at 8000
loc_6836E:				; CODE XREF: _b4_s27+7-j
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		off_68406,X	; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		off_68406+1,X	; code used at 8000
		STA		word_3E+1	; code used as ind data	at 8000
		JSR		sub_6840C	; code used at 8000
		LDA		byte_49		; code used as ind data	at 8000
		STA		byte_43		; code used at 8000
		LDA		#$FF		; code used at 8000
		STA		byte_47		; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		STA		byte_45		; code used at 8000
		LDY		#0		; code used at 8000
		STY		byte_42		; code used at 8000
loc_6838E:				; CODE XREF: _b4_s27+33-j _b4_s27+4E-j
		LSR		byte_47		; code used as ind data	at 8000
		LSR		byte_43		; code used as ind data	at 8000
		BCC		loc_68398	; code used at 8000
		INY				; code used at 8000
		BNE		loc_6838E	; code used at 8000
		RTS
loc_68398:				; CODE XREF: _b4_s27+30-j
		LDA		byte_43		; code used at 8000
		EOR		byte_47		; code used as ind data	at 8000
		BEQ		loc_683B3	; code used at 8000
		LDA		(word_3E),Y	; code used as ind data	at 8000
		ADC		byte_44		; code used as ind data	at 8000
		ADC		byte_42		; code used as ind data	at 8000
		STA		byte_42		; code used as ind data	at 8000
		CPY		#7		; code used as ind data	at 8000
		BEQ		loc_683B3	; code used as ind data	at 8000
		INY				; code used at 8000
		SEC				; code used at 8000
		SBC		#1		; code used at 8000
		CMP		byte_45		; code used as ind data	at 8000
		BCC		loc_6838E	; code used at 8000
		DEY				; code used as ind data	at 8000
loc_683B3:				; CODE XREF: _b4_s27+3A-j _b4_s27+46-j
					; _b4_s27+91-j
		JSR		loc_683F6	; code used at 8000
		JSR		sub_6B9F2	; code used at 8000
		AND		#$3F       ; code used at 8000
		RTS				; code used at 8000
loc_683BC:				; CODE XREF: _b4_s27+9-j
		LDA		byte_64		; code used at 8000
		LSR		; code used at 8000
		PHP				; code used at 8000
		TAX				; code used at 8000
		LDA		byte_569,X	; code used at 8000
		BCC		loc_683CA	; code used at 8000
		LSR
		LSR
		LSR
		LSR
loc_683CA:				; CODE XREF: _b4_s27+62-j
		AND		#7		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDY		#$F0       ; code used at 8000
		STY		word_4		; code used at 8000
		TAY				; code used at 8000
		CLC				; code used at 8000
		ADC		#1		; code used at 8000
		PLP				; code used at 8000
		BCC		loc_683E3	; code used at 8000
		ASL
		ASL
		ASL
		ASL
		PHA
		LDA		#$F
		STA		word_4
		PLA
loc_683E3:				; CODE XREF: _b4_s27+75-j
		PHA				; code used at 8000
		LDA		byte_569,X	; code used at 8000
		AND		word_4		; code used at 8000
		STA		word_4		; code used at 8000
		PLA				; code used at 8000
		ORA		word_4		; code used at 8000
		STA		byte_569,X	; code used at 8000
		LDY		word_4+1	; code used at 8000
		JMP		loc_683B3	; code used at 8000
loc_683F6:				; CODE XREF: _b4_s27:loc_683B3-p
		TYA				; code used as ind data	at 8000
		PHA				; code used at 8000
		LDA		#0		; code used at 8000
		SEC				; code used as ind data	at 8000
loc_683FB:				; CODE XREF: _b4_s27+9B-j
		ROL		; code used at 8000
		DEY				; code used at 8000
		BPL		loc_683FB	; code used as ind data	at 8000
loc_683FF:				; code used at 8000
		ORA		byte_49
		STA		byte_49		; code used at 8000
		PLA				; code used as ind data	at 8000
		TAY				; code used at 8000
		RTS				; code used at 8000
off_68406:
		.WORD byte_6B422	; DATA XREF: _b4_s27+E-r _b4_s27+13-r
					; data used at 8000
		.WORD byte_6B42A	; data used at 8000
		.WORD byte_6B432	; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6840C:				; CODE XREF: _b4_s27+18-p
		LDA		#7		; code used at 8000
		STA		byte_46		; code used at 8000
		LDY		#0		; code used as ind data	at 8000
		STY		byte_44		; code used at 8000
		LDA		byte_49		; code used as ind data	at 8000
		STA		byte_43		; code used at 8000
loc_68418:				; CODE XREF: sub_6840C+2F-j
		LSR		byte_43		; code used as ind data	at 8000
		BCC		loc_68438	; code used as ind data	at 8000
		LDA		(word_3E),Y	; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		LDX		#word_4		; code used as ind data	at 8000
		LDA		byte_46		; code used at 8000
		JSR		_div16_to_8	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		CLC				; code used at 8000
		LDA		word_4		; code used at 8000
		ADC		byte_44		; code used at 8000
		STA		byte_44		; code used at 8000
		DEC		byte_46		; code used at 8000
loc_68438:				; CODE XREF: sub_6840C+E-j
		INY				; code used as ind data	at 8000
		CPY		#8		; code used at 8000
		BNE		loc_68418	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6843E:				; CODE XREF: _b4_s2B+5-p
		JSR		sub_6B91D	; code used at 8000
		LDX		byte_59		; code used at 8000
		LDA		byte_6A77,X	; code used at 8000
		AND		#3		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		byte_73C,X	; code used at 8000
		BPL		sub_68453	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68453:				; CODE XREF: _b4_s26+A3-p sub_6843E+12-j
		JSR		sub_686F4	; code used at 8000
		CMP		#$F		; code used as ind data	at 8000
		BNE		loc_6845B	; code used as ind data	at 8000
		RTS
loc_6845B:				; CODE XREF: sub_68453+5-j
		JSR		_b4_s13		; code used at 8000
		PHA				; code used as ind data	at 8000
		JSR		sub_6B91D	; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6A77,X	; code used at 8000
		AND		#$80       ; code used as ind data at 8000
		STA		byte_6A77,X	; code used at 8000
		PLA				; code used as ind data	at 8000
		ORA		byte_6A77,X	; code used as ind data	at 8000
		STA		byte_6A77,X	; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s28:				; CODE XREF: _bA_s3+9-P
					; DATA XREF: BANK4:8050-o
		JSR		_b4_s29		; code used as ind data	at 8000
		BNE		loc_684B2	; code used as ind data	at 8000
		LDA		byte_4F		; code used at 8000
		CMP		#$2C       ; code used at 8000
		BCS		loc_68486	; code used at 8000
		LDA		#$F		; code used at 8000
		JSR		_b4_s23		; code used at 8000
		JMP		_b4_s13		; code used at 8000
loc_68486:				; CODE XREF: _b4_s28+9-j
		CMP		#$2F       ; code used at 8000
		BEQ		loc_6848E	; code used at 8000
		CMP		#$30       ; code used at 8000
		BNE		loc_68496	; code used at 8000
loc_6848E:				; CODE XREF: _b4_s28+15-j
		LDA		#0
loc_68490:				; CODE XREF: _b4_s28+29-j
		JSR		sub_6BC17
		JMP		_b4_s14
loc_68496:				; CODE XREF: _b4_s28+19-j
		CMP		#$36       ; code used at 8000
		BCS		loc_6849E	; code used at 8000
		LDA		#5
		BNE		loc_68490
loc_6849E:				; CODE XREF: _b4_s28+25-j
		CMP		#$39       ; code used at 8000
		BCS		loc_684A7	; code used at 8000
		LDA		#5		; code used at 8000
		JMP		sub_686BB	; code used at 8000
loc_684A7:				; CODE XREF: _b4_s28+2D-j
		CMP		#$3B 
		BCS		locret_684EA
		LDA		#5
		LDX		#0
		JMP		sub_6868C
loc_684B2:				; CODE XREF: _b4_s28+3-j
		LDX		byte_4F		; code used at 8000
		CPX		#$13		; code used at 8000
		BCC		loc_684F5	; code used at 8000
		CPX		#$2B       ; code used at 8000
		BEQ		loc_684F5	; code used at 8000
		CPX		#$3B       ; code used at 8000
		BCS		loc_684F5	; code used at 8000
		LDA		byte_6BD82-$13,X ; code	used at	8000
		PHA				; code used at 8000
		JSR		sub_6B6E3	; code used at 8000
		PLA				; code used at 8000
		CMP		byte_59		; code used at 8000
		BEQ		loc_684EB	; code used at 8000
		BCC		loc_684EB	; code used at 8000
		JSR		sub_686E1	; code used at 8000
		BEQ		loc_684E9	; code used at 8000
		LDA		byte_64		; code used at 8000
		JSR		_b4_s10		; code used at 8000
		STA		byte_42		; code used at 8000
		AND		byte_576	; code used at 8000
		BNE		loc_684E9	; code used at 8000
		LDA		byte_42		; code used at 8000
		ORA		byte_576	; code used at 8000
		STA		byte_576	; code used at 8000
		BNE		loc_684EB	; code used at 8000
loc_684E9:				; CODE XREF: _b4_s28+5E-j _b4_s28+6A-j
					; _b4_s28+80-j
		CLC				; code used at 8000
locret_684EA:				; CODE XREF: _b4_s28+36-j
		RTS				; code used at 8000
loc_684EB:				; CODE XREF: _b4_s28+57-j _b4_s28+59-j
					; _b4_s28+74-j
		JSR		sub_686E1	; code used at 8000
		BNE		loc_684F5	; code used at 8000
		JSR		sub_6B901	; code used at 8000
		BCS		loc_684E9	; code used at 8000
loc_684F5:				; CODE XREF: _b4_s28+43-j _b4_s28+47-j
					; _b4_s28+4B-j _b4_s28+7B-j
		LDA		byte_4F		; code used at 8000
		ASL		; code used at 8000
		TAY				; code used as ind data	at 8000
		LDA		off_6BD02,Y	; code used at 8000
		LDX		off_6BD02+1,Y	; code used as ind data	at 8000
		JSR		sub_6BBCB	; code used at 8000
		JMP		(word_3C)	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68505:				; DATA XREF: BANK4:off_6BD02-o
					; BANK4:BD16-o BANK4:BD18-o BANK4:BD1A-o
					; BANK4:BD1C-o BANK4:BD1E-o BANK4:BD20-o
					; BANK4:BD26-o BANK4:BD58-o
		LDA		#0		; ind code used	at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68509:				; DATA XREF: BANK4:BD04-o
		LDA		byte_64		; ind code used	at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		#$40       ; code used at 8000
		ORA		byte_531,X	; code used at 8000
		STA		byte_531,X	; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s2B:				; CODE XREF: _bA_s3+1A-P
					; DATA XREF: BANK4:8056-o BANK4:BD06-o
					; BANK4:BD08-o BANK4:BD0A-o BANK4:BD0C-o
					; BANK4:BD0E-o
		JSR		sub_6BA04	; ind code used	as ind data at 8000
		BEQ		loc_6852A	; code used at 8000
		JSR		sub_6843E	; code used at 8000
		JSR		sub_6B91D	; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6A77,X	; code used at 8000
		AND		#3		; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_6852A:				; CODE XREF: _b4_s2B+3-j
		JSR		_sram_bank0_sub33 ; code used at 8000
		DEC		word_4		; code used as ind data	at 8000
		LDA		word_4		; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDA		off_6855F,Y	; code used at 8000
		LDX		off_6855F+1,Y	; code used at 8000
		JSR		sub_6BBD0	; code used at 8000
		JSR		sub_686F4	; code used at 8000
		STA		byte_43		; code used at 8000
		LDX		#0		; code used at 8000
		LDY		#0		; code used as ind data	at 8000
loc_68545:				; CODE XREF: _b4_s2B+35-j
		LSR		byte_43		; code used at 8000
		BCC		loc_68550	; code used at 8000
loc_68549:				; CODE XREF: _b4_s2B+43-j
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_68545	; code used at 8000
		SEC
		RTS
loc_68550:				; CODE XREF: _b4_s2B+30-j
		JSR		sub_6ACBE	; code used at 8000
		CMP		(word_3E),Y	; code used at 8000
		BEQ		loc_6855C	; code used as ind data	at 8000
		BCC		loc_6855C	; code used at 8000
		INY				; code used at 8000
		BNE		loc_68549	; code used as ind data	at 8000
loc_6855C:				; CODE XREF: _b4_s2B+3E-j _b4_s2B+40-j
		TXA				; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		RTS				; code used at 8000
off_6855F:
		.WORD byte_6B43A	; DATA XREF: _b4_s2B+1C-r _b4_s2B+1F-r
					; data used at 8000
		.WORD byte_6B43E	; data used at 8000
		.WORD byte_6B442	; data used at 8000
		.WORD byte_6B446	; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68567:				; DATA XREF: BANK4:BD10-o
		JSR		_b4_s4		; ind code used	at 8000
		LDA		#5		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_59		; code used at 8000
		CMP		byte_700	; code used at 8000
		BCC		loc_6859E	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68576:				; DATA XREF: BANK4:BD12-o
		LDA		byte_4D		; ind code used	at 8000
		CMP		#8		; code used at 8000
		BCS		loc_68588	; code used at 8000
		JSR		sub_6B91D	; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6A6F,X	; code used at 8000
		BRK
		.BYTE $69, 7		; ofs 0x00038014, -> dst _b2_sA
		BCC		loc_6859E	; code used at 8000
loc_68588:				; CODE XREF: sub_68576+4-j sub_6858A+4-j
					; sub_6858A+12-j
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6858A:				; DATA XREF: BANK4:BD78-o BANK4:BD7A-o
					; BANK4:BD7C-o BANK4:BD7E-o BANK4:BD80-o
		LDA		byte_4D		; ind code used	at 8000
		CMP		#8		; code used at 8000
		BCS		loc_68588	; code used at 8000
		LDA		byte_4F		; code used at 8000
		SEC				; code used at 8000
		SBC		#$3B       ; code used at 8000
		TAX				; code used at 8000
		LDA		byte_68D88,X	; code used at 8000
		BRK
		.BYTE $69, 7		; ofs 0x00038014, -> dst _b2_sA
		BCS		loc_68588	; code used at 8000
loc_6859E:				; CODE XREF: sub_68567+B-j
					; sub_68576+10-j
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685A0:				; DATA XREF: BANK4:BD14-o BANK4:BD50-o
		LDA		#$12		; ind code used	at 8000
		JSR		_b4_s23		; code used at 8000
		JMP		_b4_s13		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685A8:				; DATA XREF: BANK4:BD22-o BANK4:BD46-o
		LDA		#0		; ind code used	at 8000
		JMP		sub_68638	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685AD:				; DATA XREF: BANK4:BD24-o
		LDA		#$D		; ind code used	at 8000
		JMP		sub_68638	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685B2:				; DATA XREF: BANK4:BD28-o BANK4:BD2A-o
					; BANK4:BD2C-o BANK4:BD2E-o BANK4:BD40-o
		JSR		sub_686E1	; ind code used	at 8000
		BEQ		sub_685BA	; code used at 8000
		JMP		sub_686F9	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685BA:				; CODE XREF: sub_685B2+3-j
		JSR		sub_686E7	; code used as ind data	at 8000
		JMP		_b4_s13		; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685C0:				; DATA XREF: BANK4:BD30-o BANK4:BD32-o
					; BANK4:BD34-o BANK4:BD36-o BANK4:BD38-o
					; BANK4:BD3A-o BANK4:BD3C-o BANK4:BD3E-o
					; BANK4:BD42-o
		JSR		sub_686E1	; ind code used	at 8000
		BEQ		sub_685C8	; code used at 8000
		JMP		sub_686F9

; =============== S U B	R O U T	I N E =======================================
sub_685C8:				; CODE XREF: sub_685C0+3-j
		JMP		sub_686FD	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685CB:				; DATA XREF: BANK4:BD44-o
		LDA		#2		; ind code used	at 8000
		LDX		#$FF		; code used at 8000
		JSR		sub_68675	; code used at 8000
		LDA		#0		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685D5:				; DATA XREF: BANK4:BD48-o
		LDA		#5		; ind code used	at 8000
		JMP		sub_68643	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685DA:				; DATA XREF: BANK4:BD4A-o
		LDA		#$10
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
sub_685DF:				; DATA XREF: BANK4:BD4C-o
		LDA		#$10		; ind code used	at 8000
		JMP		sub_68643	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685E4:				; DATA XREF: BANK4:BD4E-o
		LDA		#4		; ind code used	at 8000
		JMP		sub_68643	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685E9:				; DATA XREF: BANK4:BD52-o
		LDA		#$C
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
sub_685EE:				; DATA XREF: BANK4:BD54-o
		LDA		#$11		; ind code used	at 8000
		JMP		sub_68643	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_685F3:				; DATA XREF: BANK4:BD56-o
		JSR		_sram_b0_s31
		DEC		word_4
		BEQ		loc_6863F
		LDA		#$F
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
sub_685FF:				; DATA XREF: BANK4:BD5A-o
		LDA		#4
		LDX		#$FF
		JMP		sub_68675

; =============== S U B	R O U T	I N E =======================================
sub_68606:				; DATA XREF: BANK4:BD5C-o
		LDA		#3		; ind code used	at 8000
		LDX		#$FF		; code used at 8000
		JMP		sub_6868C	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6860D:				; DATA XREF: BANK4:BD5E-o
		JSR		sub_686E1	; ind code used	at 8000
		LDA		#3		; code used at 8000
		BCS		loc_68616	; code used at 8000
		LDA		#5		; code used at 8000
loc_68616:				; CODE XREF: sub_6860D+5-j
		JMP		sub_68707	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68619:				; DATA XREF: BANK4:BD60-o BANK4:BD62-o
		LDA		#0
		JMP		sub_68707

; =============== S U B	R O U T	I N E =======================================
sub_6861E:				; DATA XREF: BANK4:BD64-o BANK4:BD66-o
					; BANK4:BD68-o
		LDA		#1		; ind code used	at 8000
		LDX		#$FF		; code used at 8000
		JMP		sub_68675	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68625:				; DATA XREF: BANK4:BD6A-o BANK4:BD6C-o
		LDA		#1
		LDX		#$FF
		JMP		sub_6868C

; =============== S U B	R O U T	I N E =======================================
sub_6862C:				; DATA XREF: BANK4:BD6E-o BANK4:BD70-o
					; BANK4:BD72-o
		LDA		#1
		JMP		sub_686BB

; =============== S U B	R O U T	I N E =======================================
sub_68631:				; DATA XREF: BANK4:BD74-o BANK4:BD76-o
		LDA		#1
		LDX		#0
		JMP		sub_6868C

; =============== S U B	R O U T	I N E =======================================
sub_68638:				; CODE XREF: sub_685A8+2-j sub_685AD+2-j
		JSR		_b4_s23		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6863B:				; CODE XREF: sub_68643+5-p
					; sub_68643+18-j
		CMP		#$F		; code used at 8000
		BNE		loc_68641	; code used at 8000
loc_6863F:				; CODE XREF: sub_685F3+5-j
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_68641:				; CODE XREF: sub_6863B+2-j
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68643:				; CODE XREF: sub_685D5+2-j sub_685DF+2-j
					; sub_685E4+2-j	sub_685EE+2-j
		STA		byte_43		; code used at 8000
		JSR		_b4_s23		; code used at 8000
		JSR		sub_6863B	; code used at 8000
		BCS		loc_6864E	; code used at 8000
		RTS				; code used at 8000
loc_6864E:				; CODE XREF: sub_68643+8-j
		JSR		sub_686E1	; code used at 8000
		BNE		loc_6865E	; code used at 8000
		LDA		byte_43		; code used at 8000
		JSR		_b4_s23		; code used at 8000
		JSR		sub_686EC	; code used at 8000
		JMP		sub_6863B	; code used at 8000
loc_6865E:				; CODE XREF: sub_68643+E-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68660:				; CODE XREF: BANK4:85DC-j sub_685E9+2-j
					; sub_685F3+9-j
		STA		byte_43
		JSR		sub_686E1
		BEQ		loc_6866A
		JMP		sub_686F9
loc_6866A:				; CODE XREF: sub_68660+5-j
		LDA		byte_43
		JSR		_b4_s23
		JSR		sub_686EC
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
sub_68675:				; CODE XREF: sub_685CB+4-p sub_685FF+4-j
					; sub_6861E+4-j
		STA		byte_43		; code used at 8000
		STX		byte_42		; code used at 8000
		LDA		byte_64		; code used at 8000
		JSR		_b4_s10		; code used at 8000
		EOR		byte_42		; code used at 8000
		PHA				; code used at 8000
		LDA		byte_43		; code used at 8000
		JSR		sub_6BC17	; code used at 8000
		PLA				; code used at 8000
		ORA		word_6+1	; code used at 8000
		JMP		_b4_s14		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6868C:				; CODE XREF: _b4_s28+3C-j sub_68606+4-j
					; sub_68625+4-j	sub_68631+4-j
					; sub_6868C+2A-j
		STX		byte_42		; code used at 8000
		STA		byte_43		; code used at 8000
		JSR		sub_6B91D	; code used at 8000
		JSR		_b4_s10		; code used at 8000
		EOR		byte_42		; code used at 8000
		PHA				; code used at 8000
		LDA		byte_43		; code used at 8000
		JSR		sub_6BC17	; code used at 8000
		JSR		sub_6BCBF	; code used as ind data	at 8000
		PLA				; code used at 8000
		ORA		word_6+1	; code used at 8000
		CMP		#$F		; code used at 8000
		BEQ		loc_686AE	; code used at 8000
		JSR		_b4_s13		; code used at 8000
		ORA		#$80       ; code used at 8000
		RTS				; code used at 8000
loc_686AE:				; CODE XREF: sub_6868C+1A-j
		LDA		byte_42
		BNE		loc_686B9
		LDA		#$FF
		STA		byte_42
		JMP		sub_6868C
loc_686B9:				; CODE XREF: sub_6868C+24-j
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686BB:				; CODE XREF: _b4_s28+31-j sub_6862C+2-j
		STA		byte_43		; code used at 8000
		JSR		sub_6B91D	; code used at 8000
		JSR		sub_6BCDE	; code used at 8000
		EOR		#$FF		; code used at 8000
		JSR		sub_686D5	; code used at 8000
		BCC		loc_686CB	; code used at 8000
		RTS				; code used at 8000
loc_686CB:				; CODE XREF: sub_686BB+D-j
		JSR		sub_6B91D	; code used at 8000
		JSR		sub_6BCDE	; code used at 8000
		JSR		sub_686D5	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_686D5:				; CODE XREF: sub_686BB+A-p
					; sub_686BB+16-p
		PHA				; code used at 8000
		LDA		byte_43		; code used at 8000
		JSR		sub_6BC17	; code used at 8000
		PLA				; code used at 8000
		ORA		word_6+1	; code used at 8000
		JMP		_b4_s14		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_686E1:				; CODE XREF: _b4_s28+5B-p
					; _b4_s28:loc_684EB-p sub_685B2-p
					; sub_685C0-p sub_6860D-p
					; sub_68643:loc_6864E-p	sub_68660+2-p
		JSR		_b4_s29		; code used at 8000
		CMP		#2		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_686E7:				; CODE XREF: sub_685BA-p sub_686EC+1-p
		LDA		#8		; code used at 8000
		JMP		_b4_s23		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_686EC:				; CODE XREF: sub_68643+15-p
					; sub_68660+F-p
		PHA				; code used at 8000
		JSR		sub_686E7	; code used at 8000
		PLA				; code used at 8000
		ORA		word_6+1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_686F4:				; CODE XREF: sub_68453-p _b4_s2B+25-p
					; sub_6870D+5B-p sub_6A4E4+24-p
		LDA		#$F		; code used as ind data	at 8000
		JMP		_b4_s23		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_686F9:				; CODE XREF: sub_685B2+5-j sub_685C0+5-j
					; sub_68660+7-j
		LDA		#$F		; code used at 8000
		BNE		sub_68701	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_686FD:				; CODE XREF: sub_685C8-j
		LDA		#8		; code used at 8000
		BNE		sub_68701	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68701:				; CODE XREF: sub_686F9+2-j
		JSR		_b4_s23		; code used at 8000
		JMP		_b4_s13		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68707:				; CODE XREF: sub_6860D:loc_68616-j
					; sub_68619+2-j
		JSR		sub_6BC17	; code used at 8000
		JMP		_b4_s14		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6870D:				; CODE XREF: sub_68A52:loc_68A8F-p
		JSR		sub_6881F	; code used at 8000
		BCC		locret_6875E	; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		PHA				; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		AND		#3		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_68828,Y	; code used at 8000
		CPX		#0		; code used at 8000
		BEQ		loc_6872B	; code used at 8000
loc_68726:				; CODE XREF: sub_6870D+1C-j
		LSR		; code used at 8000
		LSR		; code used at 8000
		DEX				; code used at 8000
		BNE		loc_68726	; code used at 8000
loc_6872B:				; CODE XREF: sub_6870D+17-j
		LDX		byte_51		; code used at 8000
		LDY		byte_558,X	; code used at 8000
		AND		#3		; code used at 8000
		BEQ		loc_68747	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_687A2	; code used at 8000
		CMP		#2		; code used at 8000
		BNE		loc_6873F	; code used at 8000
		JMP		loc_687D3
loc_6873F:				; CODE XREF: sub_6870D+2D-j
					; sub_6870D+92-j
		LDX		byte_51		; code used at 8000
		LDA		#2		; code used at 8000
		STA		byte_558,X	; code used at 8000
		TAY				; code used at 8000
loc_68747:				; CODE XREF: sub_6870D+25-j
		CPY		#$2F       ; code used at 8000
		BCS		loc_6875F	; code used at 8000
		JSR		sub_68808	; code used at 8000
		BCC		locret_6875E	; code used at 8000
loc_68750:				; CODE XREF: sub_6870D+61-j
					; sub_6870D+68-j
		STA		word_4		; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_54C,X	; code used at 8000
		AND		#$F8       ; code used at 8000
		ORA		word_4		; code used at 8000
		STA		byte_54C,X	; code used at 8000
locret_6875E:				; CODE XREF: sub_6870D+3-j
					; sub_6870D+41-j sub_6870D+9C-j
					; sub_6870D+C9-j
		RTS				; code used at 8000
loc_6875F:				; CODE XREF: sub_6870D+3C-j
		CPY		#$31       ; code used at 8000
		BCC		loc_68777	; code used at 8000
		LDA		byte_6A63	; code used at 8000
		BNE		loc_68771	; code used at 8000
		JSR		sub_686F4
loc_6876B:				; CODE XREF: sub_6870D+90-j
		JSR		_b4_s13
		JMP		loc_68750
loc_68771:				; CODE XREF: sub_6870D+59-j
		LDA		byte_64		; code used at 8000
		ORA		#$80       ; code used at 8000
		BNE		loc_68750	; code used at 8000
loc_68777:				; CODE XREF: sub_6870D+54-j
		LDA		#1
		STA		byte_43
		LDX		#0
		STX		byte_42
loc_6877F:				; CODE XREF: sub_6870D+8A-j
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		BPL		loc_6878C
		LDA		byte_73D,Y
		BPL		loc_68792
loc_6878C:				; CODE XREF: sub_6870D+78-j
		LDA		byte_42
		ORA		byte_43
		STA		byte_42
loc_68792:				; CODE XREF: sub_6870D+7D-j
		ASL		byte_43
		INX
		CPX		#4
		BNE		loc_6877F
		LDA		byte_42
		CMP		#$F
		BNE		loc_6876B
		JMP		loc_6873F
loc_687A2:				; CODE XREF: sub_6870D+29-j
		CPY		#$2D       ; code used at 8000
		BCS		loc_687BC	; code used at 8000
		JSR		sub_687E3	; code used at 8000
		BCC		locret_6875E	; code used at 8000
		ORA		#$80       ; code used at 8000
loc_687AD:				; code used at 8000
		STA		word_4
		LDX		byte_51		; code used at 8000
		LDA		byte_54C,X	; code used at 8000
		AND		#$F8       ; code used at 8000
		ORA		word_4		; code used at 8000
loc_687B8:				; code used at 8000
		STA		byte_54C,X
		RTS				; code used at 8000
loc_687BC:				; CODE XREF: sub_6870D+97-j
		LDA		byte_6A63
		BNE		loc_687CC
		LDX		byte_51
		LDA		byte_54C,X
		AND		#$7F 
loc_687C8:				; CODE XREF: sub_6870D+C4-j
		STA		byte_54C,X
		RTS
loc_687CC:				; CODE XREF: sub_6870D+B2-j
		JSR		sub_6B91D
		ORA		#$80 
		BNE		loc_687C8
loc_687D3:				; CODE XREF: sub_6870D+2F-j
		JSR		sub_6881F
		BCC		locret_6875E
		LDX		byte_51
		LDA		#$80 
		ORA		byte_54C,X
		STA		byte_54C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_687E3:				; CODE XREF: sub_6870D+99-p sub_68808-p
		JSR		sub_6B91D	; code used at 8000
		JSR		_b4_s10		; code used at 8000
		PHA				; code used at 8000
		LDA		#5		; code used at 8000
		JSR		sub_6BC17	; code used at 8000
		JSR		sub_6BCBF	; code used at 8000
		PLA				; code used at 8000
		ORA		word_6+1	; code used at 8000
		AND		#$F		; code used at 8000
		CMP		#$F		; code used at 8000
		BEQ		loc_687FE	; code used at 8000
		JMP		_b4_s13		; code used at 8000
loc_687FE:				; CODE XREF: sub_687E3+16-j
		JSR		sub_6881F
		BCC		locret_68807
		JSR		sub_6B91D
		SEC
locret_68807:				; CODE XREF: sub_687E3+1E-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68808:				; CODE XREF: sub_6870D+3E-p
		JSR		sub_687E3	; code used at 8000
		BCC		locret_6881E	; code used at 8000
		JSR		sub_6A8B3	; code used at 8000
		PHA				; code used at 8000
		LDA		byte_64		; code used at 8000
		JSR		_b4_s10		; code used at 8000
		STA		word_4		; code used at 8000
		PLA				; code used at 8000
		ORA		word_4		; code used as ind data	at 8000
		JSR		_b4_s14		; code used at 8000
locret_6881E:				; CODE XREF: sub_68808+3-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6881F:				; CODE XREF: sub_6870D-p
					; sub_6870D:loc_687D3-p
					; sub_687E3:loc_687FE-p
		LDX		byte_4D		; code used at 8000
		DEX				; code used at 8000
		BNE		loc_68826	; code used at 8000
		CLC
		RTS
loc_68826:				; CODE XREF: sub_6881F+3-j
		SEC				; code used at 8000
		RTS				; code used at 8000
byte_68828:
		.BYTE  $F,$FF,$53,$55,$3F,$40,$55,$15,$51,$14,$C7,$D7,	3,  5,$D4,$FF
					; DATA XREF: sub_6870D+12-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s13:				; CODE XREF: sub_68453:loc_6845B-p
					; _b4_s28+10-j sub_685A0+5-j
					; sub_685BA+3-j	sub_68660+12-j
					; sub_6868C+1C-p sub_68701+3-j
					; sub_6870D:loc_6876B-p	sub_687E3+18-j
					; sub_6A0B4+5-p	sub_6A4E4+30-p
					; sub_F846B+C-P
					; DATA XREF: BANK4:8026-o
		ORA		#$F0       ; code used as ind data at 8000
		EOR		#$FF		; code used at 8000
		STA		_tmp12+1	; code used at 8000
		BEQ		loc_6884C	; code used as ind data	at 8000
		TXA				; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		LDX		#4		; code used as ind data	at 8000
		JSR		sub_68864	; code used at 8000
		PLA				; code used as ind data	at 8000
		TAX				; code used at 8000
		LDA		_tmp12+1	; code used at 8000
		RTS				; code used at 8000
loc_6884C:				; CODE XREF: _b4_s13+6-j _b4_s14+4-j
		CLC				; code used at 8000
		LDA		#0		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b4_s14:				; CODE XREF: _b4_s28+20-j sub_68675+14-j
					; sub_686D5+9-j	sub_68707+3-j
					; sub_68808+13-p sub_69840+5A-p
					; sub_6990D+8-p	sub_69A2E+8-p
					; sub_69A80+1C-p sub_69BA0+17-p
					; sub_69C0B+4D-p sub_69E7F+8-p
					; sub_69F05+C-p	sub_69F43+11-p
					; sub_69FC5+24-p _bA_sB+54-P
					; DATA XREF: BANK4:8028-o
		EOR		#$FF		; code used at 8000
		STA		_tmp12+1	; code used as ind data	at 8000
		BEQ		loc_6884C	; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		LDX		#8		; code used at 8000
		JSR		sub_68864	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		_tmp12+1	; code used at 8000
		ORA		#$80       ; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68864:				; CODE XREF: _b4_s13+C-p _b4_s14+A-p
		TYA				; code used at 8000
		PHA				; code used as ind data	at 8000
		LDY		#0		; code used as ind data	at 8000
		LDA		_tmp12+1	; code used as ind data	at 8000
loc_6886A:				; CODE XREF: sub_68864+B-j
		LSR		; code used as ind data	at 8000
		BCC		loc_6886E	; code used as ind data	at 8000
		INY				; code used at 8000
loc_6886E:				; CODE XREF: sub_68864+7-j
		DEX				; code used as ind data	at 8000
		BNE		loc_6886A	; code used as ind data	at 8000
		STX		_tmp12		; code used at 8000
		DEX				; code used as ind data	at 8000
		STX		byte_11		; code used at 8000
		TYA				; code used at 8000
		LDX		#byte_11	; code used at 8000
		JSR		_div16_to_8	; code used at 8000
		JSR		sub_6ACBE	; code used as ind data	at 8000
		STA		byte_10		; code used as ind data	at 8000
		LDX		#0		; code used at 8000
loc_68883:				; CODE XREF: sub_68864+30-j
		LSR		_tmp12+1	; code used as ind data	at 8000
		BCC		loc_68893	; code used as ind data	at 8000
		BEQ		loc_68896	; code used as ind data	at 8000
		LDA		byte_11		; code used as ind data	at 8000
		ADC		_tmp12		; code used at 8000
		STA		_tmp12		; code used at 8000
		CMP		byte_10		; code used at 8000
		BCS		loc_68896	; code used as ind data	at 8000
loc_68893:				; CODE XREF: sub_68864+21-j
		INX				; code used at 8000
		BNE		loc_68883	; code used at 8000
loc_68896:				; CODE XREF: sub_68864+23-j
					; sub_68864+2D-j
		STX		_tmp12+1	; code used at 8000
		PLA				; code used as ind data	at 8000
		TAY				; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6889C:				; CODE XREF: _b4_s0+40-p
		LDA		#$3D       ; code used at 8000
		JSR		_b4_s7		; code used at 8000
		LDY		#0		; code used at 8000
loc_688A3:				; CODE XREF: sub_6889C+F-j
		JSR		sub_68F0C	; code used at 8000
		BMI		loc_688AF	; code used at 8000
loc_688A8:				; CODE XREF: sub_6889C+1A-j
					; sub_6889C+21-j
		INY				; code used at 8000
		CPY		#4		; code used at 8000
		BNE		loc_688A3	; code used at 8000
		BEQ		loc_688E7	; code used at 8000
loc_688AF:				; CODE XREF: sub_6889C+A-j
		LDA		byte_54C,Y	; code used at 8000
		AND		#$70       ; code used at 8000
		CMP		#$10		; code used at 8000
		BNE		loc_688A8	; code used at 8000
		LDA		byte_558,Y	; code used at 8000
		CMP		#$2A       ; code used at 8000
		BNE		loc_688A8	; code used at 8000
		LDA		byte_540,Y
		PHA
		AND		#$78 
		STA		word_4
		PLA
		AND		#$87 
		STA		word_4+1
		LDX		#0
loc_688CE:				; CODE XREF: sub_6889C+3A-j
		LDA		byte_540,X
		AND		#$78 
		BEQ		loc_688D8
		INX
		BNE		loc_688CE
loc_688D8:				; CODE XREF: sub_6889C+37-j
		LDA		byte_540,X
		AND		#$87 
		ORA		word_4
		STA		byte_540,X
		LDA		word_4+1
		STA		byte_540,Y
loc_688E7:				; CODE XREF: sub_6889C+11-j
		LDX		#0		; code used at 8000
		STX		byte_52		; code used at 8000
loc_688EB:				; CODE XREF: sub_6889C+80-j
		LDX		#0		; code used at 8000
		STX		byte_51		; code used at 8000
loc_688EF:				; CODE XREF: sub_6889C+87-j
		LDX		byte_51		; code used as ind data	at 8000
		LDA		byte_540,X	; code used at 8000
		AND		#$78       ; code used as ind data at 8000
		LSR		; code used at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used at 8000
		CMP		byte_52		; code used at 8000
		BNE		loc_68921	; code used as ind data	at 8000
		JSR		sub_68931	; code used at 8000
		LDA		byte_6A63	; code used at 8000
		BEQ		loc_6890E	; code used at 8000
		LDX		byte_4D		; code used at 8000
		BEQ		loc_6892E	; code used at 8000
		DEX				; code used at 8000
		BEQ		loc_6892B	; code used at 8000
		BNE		loc_68916	; code used at 8000
loc_6890E:				; CODE XREF: sub_6889C+67-j
		LDA		byte_4C		; code used at 8000
		BEQ		loc_68925	; code used at 8000
		LDA		byte_4D		; code used at 8000
		BEQ		loc_68928	; code used at 8000
loc_68916:				; CODE XREF: sub_6889C+70-j
		INC		byte_52		; code used at 8000
		LDA		byte_52		; code used as ind data	at 8000
		CMP		#$C		; code used at 8000
		BNE		loc_688EB	; code used at 8000
		LDA		#0		; code used at 8000
		RTS				; code used at 8000
loc_68921:				; CODE XREF: sub_6889C+5F-j
		INC		byte_51		; code used at 8000
		BNE		loc_688EF	; code used as ind data	at 8000
loc_68925:				; CODE XREF: sub_6889C+74-j
		LDA		#$FF		; code used at 8000
		RTS				; code used at 8000
loc_68928:				; CODE XREF: sub_6889C+78-j
		LDA		#$FE       ; code used at 8000
		RTS				; code used at 8000
loc_6892B:				; CODE XREF: sub_6889C+6E-j
		LDA		#$FD       ; code used at 8000
		RTS				; code used at 8000
loc_6892E:				; CODE XREF: sub_6889C+6B-j
		LDA		#$FC 
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68931:				; CODE XREF: sub_6889C+61-p
		BIT		byte_6A63	; code used at 8000
		BPL		loc_6897F	; code used at 8000
		BVS		loc_6897F	; code used at 8000
		JSR		sub_6B2B3	; code used at 8000
		BPL		loc_6897F	; code used at 8000
		JSR		_calc_pads	; code used at 8000
		LDA		_pads		; code used at 8000
		AND		#2		; code used at 8000
		BEQ		loc_6897F	; code used at 8000
		LDX		#$F
		LDA		#0
loc_6894A:				; CODE XREF: sub_68931+1D-j
		STA		byte_460,X
		DEX
		BPL		loc_6894A
		LDX		byte_6A67
		LDA		byte_6A77,X
		BPL		loc_68974
		LDA		#$CB 
		JSR		_b4_s9
		BRK
		.BYTE $86, $2F		; _syscall12
		BRK
		.BYTE $45, $E7		; _syscall0E
		PHA
		JSR		sub_6AA51
		PLA
		BNE		loc_6897C
		LDA		#$CC 
		JSR		_b4_s9
loc_6896F:				; CODE XREF: sub_68931+48-j
		PLA
		PLA
		LDA		#$FC 
		RTS
loc_68974:				; CODE XREF: sub_68931+25-j
		LDA		#$CD 
		JSR		_b4_s9
		JMP		loc_6896F
loc_6897C:				; CODE XREF: sub_68931+37-j
		BRK
		.BYTE 5, 7		; ofs 0x0015800a, -> dst _bE_s5
loc_6897F:				; CODE XREF: sub_68931+3-j sub_68931+5-j
					; sub_68931+A-j	sub_68931+13-j
		LDA		#$10		; code used at 8000
		JSR		sub_6B2C4	; code used at 8000
		LDA		#$EF       ; code used at 8000
		JSR		sub_6B300	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_575	; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_540,X	; code used at 8000
		BMI		loc_68999	; code used at 8000
		JMP		sub_694DA	; code used at 8000
locret_68998:				; CODE XREF: sub_68931+6B-j
					; sub_68931+74-j sub_68931+89-j
					; sub_68931+92-j sub_68931+9E-j
		RTS				; code used at 8000
loc_68999:				; CODE XREF: sub_68931+62-j
		JSR		sub_68AC6	; code used at 8000
		BEQ		locret_68998	; code used as ind data	at 8000
		LDX		byte_51		; code used as ind data	at 8000
		LDA		byte_566	; code used at 8000
		AND		#8		; code used at 8000
		BNE		locret_68998	; code used at 8000
		LDA		byte_566	; code used at 8000
		AND		#4		; code used at 8000
		BEQ		loc_689BC	; code used at 8000
		LDA		byte_568	; code used at 8000
		AND		#8		; code used at 8000
		BEQ		loc_689BC	; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		#$C0       ; code used at 8000
		BCS		locret_68998	; code used at 8000
loc_689BC:				; CODE XREF: sub_68931+7B-j
					; sub_68931+82-j
		LDA		byte_54C,X	; code used at 8000
		AND		#$70       ; code used at 8000
		CMP		#$70       ; code used at 8000
		BEQ		locret_68998	; code used at 8000
		JSR		sub_6B2B3	; code used at 8000
		STA		byte_64		; code used at 8000
		LDA		byte_567	; code used at 8000
		AND		#$C		; code used at 8000
		BNE		locret_68998	; code used at 8000
		JSR		_b4_s29		; code used at 8000
		LDA		byte_59		; code used at 8000
		CMP		#2		; code used at 8000
		BNE		loc_68A1E	; code used at 8000
		JSR		_b4_s2A		; code used at 8000
		LDX		byte_59		; code used at 8000
		LDA		byte_68AFC,X	; code used at 8000
		CPX		#0		; code used at 8000
		BEQ		loc_689F3	; code used at 8000
		CPX		#3		; code used at 8000
		BEQ		loc_689F3	; code used at 8000
		JSR		_b4_sF		; code used at 8000
		CMP		#0		; code used at 8000
		BNE		loc_689F3	; code used at 8000
		LDA		#2
loc_689F3:				; CODE XREF: sub_68931+B3-j
					; sub_68931+B7-j sub_68931+BE-j
		AND		#3		; code used at 8000
		TAX				; code used at 8000
loc_689F6:				; CODE XREF: sub_68931+EA-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		BRK
		.BYTE $9C, $17		; ofs 0x000f8006, -> dst _bA_s3
		LDX		byte_51		; code used at 8000
		LDA		byte_50		; code used at 8000
		STA		byte_54C,X	; code used at 8000
		LDA		byte_4F		; code used at 8000
		STA		byte_558,X	; code used at 8000
		JSR		sub_68A52	; code used at 8000
		JSR		sub_6B3C7	; code used at 8000
		PLA				; code used as ind data	at 8000
		TAX				; code used at 8000
		LDA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_531,Y	; code used at 8000
		AND		#$20       ; code used at 8000
		BNE		locret_68A1D	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_689F6	; code used at 8000
locret_68A1D:				; CODE XREF: sub_68931+E7-j
					; sub_68931+F6-j sub_68931+10F-j
					; sub_68A52+3-j
		RTS				; code used at 8000
loc_68A1E:				; CODE XREF: sub_68931+A7-j
		JSR		sub_68A52	; code used at 8000
		JSR		sub_6B3C7	; code used at 8000
		JSR		sub_6B95A	; code used at 8000
		BNE		locret_68A1D	; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_643,X	; code used at 8000
		STA		byte_54C,X	; code used at 8000
		LDA		byte_653,X	; code used at 8000
		BEQ		loc_68A42	; code used at 8000
		STA		byte_558,X	; code used at 8000
		PHA				; code used at 8000
		JSR		sub_68A52	; code used at 8000
		PLA				; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		locret_68A1D	; code used at 8000
loc_68A42:				; CODE XREF: sub_68931+103-j
		LDX		byte_51		; code used at 8000
		LDA		byte_64B,X	; code used at 8000
		STA		byte_54C,X	; code used at 8000
		LDA		byte_65B,X	; code used at 8000
		BEQ		locret_68AC5	; code used at 8000
		STA		byte_558,X

; =============== S U B	R O U T	I N E =======================================
sub_68A52:				; CODE XREF: sub_68931+D6-p
					; sub_68931:loc_68A1E-p	sub_68931+109-p
		JSR		sub_68AC6	; code used at 8000
		BEQ		locret_68A1D	; code used at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		byte_575	; code used at 8000
		JSR		sub_69580	; code used at 8000
		JSR		sub_6B3C7	; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_530,X	; code used at 8000
		AND		byte_531,X	; code used at 8000
		BPL		locret_68AC5	; code used at 8000
		JSR		_b4_sA		; code used at 8000
		LDA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_531,X	; code used at 8000
		AND		#$20       ; code used at 8000
		BEQ		loc_68A7D	; code used at 8000
		JMP		sub_68B00	; code used at 8000
loc_68A7D:				; CODE XREF: sub_68A52+26-j
		LDA		byte_6A63	; code used at 8000
		BNE		loc_68A8F	; code used at 8000
		LDA		byte_531,X	; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		loc_68A92	; code used at 8000
		BRK
		.BYTE $73, $F7		; _syscall0F
		JSR		_b4_sA
loc_68A8F:				; CODE XREF: sub_68A52+2E-j
		JSR		sub_6870D	; code used at 8000
loc_68A92:				; CODE XREF: sub_68A52+35-j
		JSR		sub_6B2F5	; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		CMP		#$3B       ; code used at 8000
		BCC		loc_68AA4	; code used at 8000
		JSR		sub_6B2FE	; code used at 8000
		JMP		loc_68AAB	; code used at 8000
loc_68AA4:				; CODE XREF: sub_68A52+4A-j
		CMP		#$13		; code used at 8000
		BCS		loc_68AAB	; code used at 8000
		JSR		sub_6B2FE	; code used at 8000
loc_68AAB:				; CODE XREF: sub_68A52+4F-j
					; sub_68A52+54-j
		LDA		byte_568	; code used at 8000
		ORA		#8		; code used at 8000
		STA		byte_568	; code used at 8000
		LDA		byte_558,X	; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		off_6BDAA,X	; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		off_6BDAA+1,X	; code used at 8000
		STA		word_3C+1	; code used at 8000
		JMP		(word_3C)	; code used at 8000
locret_68AC5:				; CODE XREF: sub_68931+11C-j
					; sub_68A52+18-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68AC6:				; CODE XREF: sub_68931:loc_68999-p
					; sub_68A52-p sub_694DA+5-p
		LDA		byte_6A63	; code used at 8000
		BEQ		loc_68AD1	; code used at 8000
		LDX		byte_4D		; code used at 8000
		BEQ		locret_68AD0	; code used at 8000
		DEX				; code used at 8000
locret_68AD0:				; CODE XREF: sub_68AC6+7-j
		RTS				; code used at 8000
loc_68AD1:				; CODE XREF: sub_68AC6+3-j
		LDA		byte_4C		; code used as ind data	at 8000
		BEQ		locret_68AFB	; code used as ind data	at 8000
		JSR		_sram_bank0_sub33 ; code used as ind data at 8000
		LDX		#0		; code used at 8000
loc_68ADA:				; CODE XREF: sub_68AC6+2B-j
		TXA				; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		TAY				; code used at 8000
		LDA		byte_73D,Y	; code used at 8000
		AND		byte_73C,Y	; code used as ind data	at 8000
		BPL		loc_68AEE	; code used as ind data	at 8000
		LDA		byte_73D,Y	; code used at 8000
		AND		#$40       ; code used at 8000
		BEQ		loc_68AEE	; code used at 8000
		DEC		word_4		; code used at 8000
loc_68AEE:				; CODE XREF: sub_68AC6+1D-j
					; sub_68AC6+24-j
		INX				; code used as ind data	at 8000
		CPX		#4		; code used as ind data	at 8000
		BNE		loc_68ADA	; code used at 8000
		LDA		word_4		; code used at 8000
		BNE		loc_68AF9	; code used at 8000
		STA		byte_4C		; code used at 8000
loc_68AF9:				; CODE XREF: sub_68AC6+2F-j
		LDA		byte_4C		; code used as ind data	at 8000
locret_68AFB:				; CODE XREF: sub_68AC6+D-j
					; sub_68B3B+14-j
		RTS				; code used at 8000
byte_68AFC:
		.BYTE	1,  3,	3,  2	; DATA XREF: sub_68931+AE-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68B00:				; CODE XREF: sub_68A52+28-j
		LDA		byte_530,X	; code used at 8000
		AND		#3		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_6B44E,Y	; code used at 8000
		STA		word_4		; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		word_4		; code used at 8000
		BEQ		loc_68B24	; code used at 8000
		BCC		loc_68B24	; code used at 8000
		DEY				; code used at 8000
		STY		word_4		; code used at 8000
		LDA		byte_530,X	; code used as ind data	at 8000
		AND		#$FC       ; code used at 8000
		ORA		word_4		; code used at 8000
		STA		byte_530,X	; code used at 8000
		BRK
		.BYTE $1B, $F		; _syscall10
loc_68B24:				; CODE XREF: sub_68B00+10-j
					; sub_68B00+12-j
		LDA		byte_531,X	; code used at 8000
		AND		#$DF       ; code used at 8000
		STA		byte_531,X	; code used at 8000
		BRK
		.BYTE $1C, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68B2F:				; DATA XREF: BANK4:off_6BDAA-o
		BRK
		.BYTE 0, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68B32:				; DATA XREF: BANK4:BDAC-o
		BRK
		.BYTE 4, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68B35:				; CODE XREF: sub_68BC9+7-j
					; DATA XREF: BANK4:BDAE-o
		JSR		sub_68BB0	; ind code used	at 8000
		JSR		sub_6B30E	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68B3B:				; CODE XREF: sub_68BF0+6-p sub_68C0A+6-p
					; sub_68C26+6-p
		JSR		sub_6AD2B	; code used at 8000
		JSR		sub_6B2A3	; code used as ind data	at 8000
		BPL		loc_68B49	; code used as ind data	at 8000
		JSR		sub_6AD8F	; code used at 8000
		JMP		loc_68B5D	; code used at 8000
loc_68B49:				; CODE XREF: sub_68B3B+6-j
		STA		byte_CE		; code used at 8000
		TAY				; code used at 8000
		JSR		sub_68F0C	; code used as ind data	at 8000
		BPL		locret_68AFB	; code used as ind data	at 8000
		JSR		sub_6B1E8	; code used at 8000
		BCS		loc_68B75	; code used as ind data	at 8000
		JSR		sub_6ACBE	; code used as ind data	at 8000
		CMP		#4		; code used as ind data	at 8000
		BCC		loc_68B75	; code used at 8000
loc_68B5D:				; CODE XREF: sub_68B3B+B-j
					; sub_68B3B+41-j
		LDA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_530,X	; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		loc_68B84	; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		#$A0       ; code used at 8000
		BCS		loc_68B84	; code used at 8000
		JSR		sub_68BB6	; code used at 8000
		BRK
		.BYTE $22, $F		; _syscall10
loc_68B75:				; CODE XREF: sub_68B3B+19-j
					; sub_68B3B+20-j
		LDX		byte_CE		; code used at 8000
		LDA		byte_6A9B,X	; code used at 8000
		AND		#8		; code used at 8000
		BNE		loc_68B5D	; code used at 8000
		JSR		sub_68BB6	; code used at 8000
		BRK
		.BYTE 7, $F		; _syscall10
loc_68B84:				; CODE XREF: sub_68B3B+2B-j
					; sub_68B3B+32-j
		LDA		byte_565	; code used at 8000
		LDX		byte_64		; code used at 8000
		INX				; code used at 8000
loc_68B8A:				; CODE XREF: sub_68B3B+51-j
		LSR		; code used at 8000
		DEX				; code used at 8000
		BNE		loc_68B8A	; code used at 8000
		BCC		loc_68B94	; code used at 8000
		ASL		word_4
		ROL		word_4+1
loc_68B94:				; CODE XREF: sub_68B3B+53-j
					; sub_68BC9+24-j
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_68BAB	; code used at 8000
		STA		byte_D2		; code used at 8000
		STA		byte_CE		; code used at 8000
		LDA		byte_575	; code used at 8000
		AND		#$20       ; code used at 8000
		BEQ		loc_68BA8	; code used at 8000
		LSR		word_4+1
		ROR		word_4
loc_68BA8:				; CODE XREF: sub_68B3B+67-j
		JMP		loc_6A58C	; code used at 8000
loc_68BAB:				; CODE XREF: sub_68B3B+5C-j
		STA		byte_64		; code used at 8000
		JMP		loc_6A42E	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68BB0:				; CODE XREF: sub_68B35-p
					; sub_68BC9:loc_68BD3-p	sub_68BF0-p
					; sub_68C0A-p sub_68C26-p
		BRK
		.BYTE $8B, $2F		; _syscall12
		BRK
		.BYTE 1, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68BB6:				; CODE XREF: sub_68B3B+34-p
					; sub_68B3B+43-p
		LDA		#$20       ; code used at 8000
		JSR		sub_6B2BB	; code used at 8000
		BRK
		.BYTE $8D, $2F		; _syscall12
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_68BC6	; code used at 8000
		JMP		sub_6B3D2	; code used at 8000
loc_68BC6:				; CODE XREF: sub_68BB6+B-j
		JMP		sub_6B5B7	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68BC9:				; DATA XREF: BANK4:BDB0-o
		JSR		sub_6ACBE	; ind code used	at 8000
		CMP		#$20       ; code used at 8000
		BCC		loc_68BD3	; code used at 8000
		JMP		sub_68B35	; code used at 8000
loc_68BD3:				; CODE XREF: sub_68BC9+5-j
		JSR		sub_68BB0	; code used at 8000
		JSR		sub_6B30E	; code used at 8000
		BRK
		.BYTE $88, $2F		; _syscall12
		BRK
		.BYTE $11, $F7		; _syscall0F
		JSR		sub_6B763	; code used at 8000
		LDA		byte_59		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_5A		; code used at 8000
		STA		word_4+1	; code used at 8000
		JSR		sub_6ADA4	; code used at 8000
		JMP		loc_68B94	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68BF0:				; DATA XREF: BANK4:BDB2-o
		JSR		sub_68BB0	; ind code used	at 8000
		JSR		sub_6B30E	; code used at 8000
		JSR		sub_68B3B	; code used at 8000
		JSR		sub_68C42	; code used at 8000
		BNE		locret_68C09	; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		LDA		byte_CE		; code used at 8000
		JSR		sub_6B2E6	; code used at 8000
		JSR		sub_69C9D	; code used at 8000
locret_68C09:				; CODE XREF: sub_68BF0+C-j sub_68C0A+C-j
					; sub_68C26+C-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68C0A:				; DATA XREF: BANK4:BDB4-o
		JSR		sub_68BB0	; ind code used	at 8000
		JSR		sub_6B30E	; code used at 8000
		JSR		sub_68B3B	; code used at 8000
		JSR		sub_68C42	; code used at 8000
		BNE		locret_68C09	; code used at 8000
		JSR		sub_6B2E6	; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		STA		byte_CE		; code used at 8000
		JSR		sub_68E1E	; code used at 8000
		JMP		_b4_s6		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68C26:				; DATA XREF: BANK4:BDB6-o
		JSR		sub_68BB0	; ind code used	at 8000
		JSR		sub_6B30E	; code used at 8000
		JSR		sub_68B3B	; code used at 8000
		JSR		sub_68C42	; code used at 8000
		BNE		locret_68C09	; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		STA		byte_CE		; code used at 8000
		JSR		sub_6B2E6	; code used at 8000
		JSR		sub_68E69	; code used at 8000
		JMP		_b4_s6		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68C42:				; CODE XREF: sub_68BF0+9-p sub_68C0A+9-p
					; sub_68C26+9-p	sub_696E8+36-p
		LDA		#$20       ; code used at 8000
		AND		byte_566	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68C48:				; DATA XREF: BANK4:BDB8-o
		JSR		sub_6B2B3	; ind code used	at 8000
		STA		byte_64		; code used at 8000
		BRK
		.BYTE $83, $2F		; _syscall12
		LDA		#$50       ; code used at 8000
		JSR		sub_6A96F	; code used at 8000
		JSR		sub_6ADBF	; code used at 8000
		LDA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_530,X	; code used at 8000
		JMP		_b4_s21		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68C64:				; DATA XREF: BANK4:BDBA-o
		BRK
		.BYTE $4B, $F7		; _syscall0F
		JSR		sub_6B2B3	; code used at 8000
		STA		byte_64		; code used at 8000
		JSR		sub_6B91D	; code used at 8000
		LDX		byte_59		; code used at 8000
		LDA		byte_6A6F,X	; code used at 8000
		JSR		sub_68D59	; code used at 8000
		BCS		loc_68C7C	; code used at 8000
		JMP		loc_68D56
loc_68C7C:				; CODE XREF: sub_68C64+13-j
					; sub_68D3F+14-j
		LDA		byte_45		; code used at 8000
		BRK
		.BYTE $69, 7		; ofs 0x00038014, -> dst _b2_sA
		BCC		loc_68C86	; code used at 8000
		JMP		loc_68D56	; code used at 8000
loc_68C86:				; CODE XREF: sub_68C64+1D-j
		LDX		byte_47		; code used at 8000
		LDA		byte_45		; code used at 8000
		STA		byte_6A6F,X	; code used at 8000
		STA		byte_6A73,X	; code used at 8000
		LDA		byte_6A77,X	; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_6A77,X	; code used at 8000
		LDX		#0		; code used at 8000
loc_68C9A:				; CODE XREF: sub_68C64+3F-j
		LDA		byte_530,X	; code used at 8000
		BPL		loc_68CB2	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BNE		loc_68C9A	; code used at 8000
		LDX		#0		; code used at 8000
loc_68CA7:				; CODE XREF: sub_68C64+4C-j
		LDA		byte_531,X	; code used at 8000
		BPL		loc_68CB2	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BNE		loc_68CA7	; code used at 8000
loc_68CB2:				; CODE XREF: sub_68C64+39-j
					; sub_68C64+46-j
		TXA				; code used at 8000
		LSR		; code used at 8000
		STA		byte_46		; code used at 8000
		LDA		byte_47		; code used at 8000
		PHA				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_530,X	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_531,X	; code used at 8000
		PLA				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		STA		byte_45		; code used at 8000
		TAX				; code used at 8000
		LDY		#8		; code used at 8000
loc_68CCE:				; CODE XREF: sub_68C64+77-j
		LDA		byte_6A7B,X	; code used at 8000
		BPL		loc_68CD9	; code used at 8000
		AND		#7		; code used at 8000
		CMP		byte_46		; code used at 8000
		BEQ		loc_68CED	; code used at 8000
loc_68CD9:				; CODE XREF: sub_68C64+6D-j
		INX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_68CCE	; code used at 8000
		LDX		byte_45		; code used at 8000
		LDA		#8		; code used at 8000
		STA		word_4		; code used at 8000
loc_68CE3:				; CODE XREF: sub_68C64+87-j
		LDA		byte_6A7B,X	; code used at 8000
		BPL		loc_68CED	; code used at 8000
		INX				; code used at 8000
		DEC		word_4		; code used at 8000
		BNE		loc_68CE3	; code used at 8000
loc_68CED:				; CODE XREF: sub_68C64+73-j
					; sub_68C64+82-j
		LDA		#$80       ; code used at 8000
		ORA		byte_46		; code used at 8000
		STA		byte_6A7B,X	; code used at 8000
		LDA		byte_46		; code used at 8000
		STA		byte_64		; code used at 8000
		JSR		sub_6B6B8	; code used at 8000
		JSR		sub_68D7F	; code used at 8000
		STA		byte_500,X	; code used at 8000
		TYA				; code used at 8000
		STA		byte_501,X	; code used at 8000
		JSR		sub_6B72F	; code used at 8000
		LDA		byte_59		; code used at 8000
		LDX		byte_64		; code used at 8000
		STA		byte_510,X	; code used at 8000
		JSR		sub_6B786	; code used at 8000
		JSR		sub_68D7F	; code used at 8000
		STA		byte_520,X	; code used at 8000
		TYA				; code used at 8000
		STA		byte_521,X	; code used at 8000
		JSR		sub_6B746	; code used at 8000
		LDX		byte_64		; code used at 8000
		STA		byte_518,X	; code used at 8000
		TXA				; code used at 8000
		CLC				; code used at 8000
		ADC		#4		; code used at 8000
		TAX				; code used at 8000
		LDA		#$70       ; code used at 8000
		STA		byte_54C,X	; code used at 8000
		JSR		sub_6B5B7	; code used at 8000
		INC		byte_4D		; code used at 8000
		BRK
		.BYTE $4C, $F7		; _syscall0F
		JMP		sub_6AA34	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68D39:				; DATA XREF: BANK4:BE20-o BANK4:BE22-o
					; BANK4:BE24-o BANK4:BE26-o BANK4:BE28-o
		JSR		sub_68D3F	; ind code used	at 8000
		JMP		sub_6B3DB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68D3F:				; CODE XREF: sub_68D39-p
		BRK
		.BYTE $4B, $F7		; _syscall0F
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		SEC				; code used at 8000
		SBC		#$3B       ; code used at 8000
		TAX				; code used at 8000
		LDA		byte_68D88,X	; code used at 8000
		JSR		sub_68D59	; code used at 8000
		BCC		loc_68D56	; code used at 8000
		JMP		loc_68C7C	; code used at 8000
loc_68D56:				; CODE XREF: sub_68C64+15-j
					; sub_68C64+1F-j sub_68D3F+12-j
		BRK
		.BYTE $4D, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68D59:				; CODE XREF: sub_68C64+10-p
					; sub_68D3F+F-p
		STA		byte_45		; code used at 8000
		LDX		#0		; code used at 8000
loc_68D5D:				; CODE XREF: sub_68D59+10-j
		LDA		byte_530,X	; code used at 8000
		INX				; code used at 8000
		AND		byte_530,X	; code used at 8000
		BPL		loc_68D6D	; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BNE		loc_68D5D	; code used at 8000
		CLC
		RTS
loc_68D6D:				; CODE XREF: sub_68D59+B-j
		LDX		#3		; code used at 8000
loc_68D6F:				; CODE XREF: sub_68D59+1E-j
		LDA		byte_6A6F,X	; code used at 8000
		CMP		byte_45		; code used at 8000
		BEQ		loc_68D7B	; code used at 8000
		DEX				; code used at 8000
		BPL		loc_68D6F	; code used at 8000
		CLC
		RTS
loc_68D7B:				; CODE XREF: sub_68D59+1B-j
		STX		byte_47		; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68D7F:				; CODE XREF: sub_68C64+97-p
					; sub_68C64+AE-p
		LDA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_59		; code used at 8000
		LDY		byte_5A		; code used as ind data	at 8000
		RTS				; code used at 8000
byte_68D88:
		.BYTE	9,$75,$47,$56,$59 ; DATA XREF: sub_6858A+C-r
					; sub_68D3F+C-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68D8D:				; DATA XREF: BANK4:BDBC-o
		BRK
		.BYTE $3A, $F7		; _syscall0F
		LDA		#1		; code used at 8000
		JSR		sub_6B307	; code used at 8000
		JSR		sub_6B30E	; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_68DA8	; code used at 8000
		STA		byte_CE		; code used at 8000
		TAY				; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		nullsub_5	; code used at 8000
		JMP		sub_6A61F	; code used at 8000
loc_68DA8:				; CODE XREF: sub_68D8D+E-j
		STA		byte_64
		JSR		nullsub_5
		JMP		sub_6A6D9

; =============== S U B	R O U T	I N E =======================================
nullsub_5:				; CODE XREF: sub_68D8D+16-j
					; sub_68D8D+1D-p
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68DB1:				; DATA XREF: BANK4:BDBE-o BANK4:BDC0-o
					; BANK4:BDC2-o BANK4:BDC4-o BANK4:BDC6-o
					; BANK4:BDC8-o
		BRK
		.BYTE $91, $2F		; _syscall12
		LDA		#$36       ; code used at 8000
		STA		word_4		; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		CMP		#$D		; code used at 8000
		BCC		loc_68DC5	; code used at 8000
		LDA		#$37       ; code used at 8000
		STA		word_4		; code used at 8000
loc_68DC5:				; CODE XREF: sub_68DB1+E-j
		LDA		word_4		; code used at 8000
		JSR		_b4_s8		; code used at 8000
		JSR		sub_6B32F	; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_68DD5	; code used at 8000
		JMP		loc_68EE6	; code used at 8000
loc_68DD5:				; CODE XREF: sub_68DB1+1F-j
		LDA		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		CLC				; code used at 8000
		ADC		#2		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		word_6B4C5,X	; code used at 8000
		STA		byte_55		; code used at 8000
		LDA		word_6B4C5+1,X	; code used at 8000
		STA		byte_56		; code used at 8000
		JMP		sub_697DE	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68DEC:				; DATA XREF: BANK4:BDCA-o
		BRK
		.BYTE $30, $F7		; _syscall0F
		JSR		sub_6B32F	; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_68DFD	; code used at 8000
		JSR		sub_69096	; code used at 8000
		JMP		sub_694C1	; code used at 8000
loc_68DFD:				; CODE XREF: sub_68DEC+9-j
		JMP		sub_69C86

; =============== S U B	R O U T	I N E =======================================
sub_68E00:				; DATA XREF: BANK4:BDCC-o
		BRK
		.BYTE $31, $F7		; _syscall0F
		JSR		sub_6B32F	; code used at 8000
		LDA		off_68E16	; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		off_68E16+1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		JSR		sub_694C1	; code used at 8000
		JMP		_b4_s6		; code used at 8000
off_68E16:
		.WORD sub_68E18		; DATA XREF: sub_68E00+6-r sub_68E00+B-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68E18:				; DATA XREF: BANK4:off_68E16-o
		JSR		sub_68E1E	; ind code used	at 8000
		JMP		loc_694D2	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68E1E:				; CODE XREF: sub_68C0A+16-p sub_68E18-p
		JSR		sub_6B3D2	; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		locret_68E42	; code used at 8000
		TYA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$20       ; code used at 8000
		BNE		locret_68E42	; code used at 8000
		LDA		#$60       ; code used at 8000
		JSR		sub_6A84F	; code used at 8000
		BCS		loc_68E43	; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_73D,X	; code used at 8000
		BRK
		.BYTE $1D, $F		; _syscall10
locret_68E42:				; CODE XREF: sub_68E1E+6-j
					; sub_68E1E+10-j sub_68E1E+28-j
		RTS				; code used at 8000
loc_68E43:				; CODE XREF: sub_68E1E+17-j
		JSR		sub_6B2EF	; code used at 8000
		BNE		locret_68E42	; code used at 8000
		BRK
		.BYTE $32, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68E4B:				; DATA XREF: BANK4:BDCE-o
		BRK
		.BYTE $33, $F7		; _syscall0F
		JSR		sub_6B32F
		LDA		off_68E61
		STA		word_3E
		LDA		off_68E61+1
		STA		word_3E+1
		JSR		sub_694C1
		JMP		_b4_s6
off_68E61:
		.WORD sub_68E63		; DATA XREF: sub_68E4B+6-r sub_68E4B+B-r

; =============== S U B	R O U T	I N E =======================================
sub_68E63:				; DATA XREF: BANK4:off_68E61-o
		JSR		sub_68E69
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_68E69:				; CODE XREF: sub_68C26+16-p sub_68E63-p
					; sub_6AF65+5-j
		JSR		sub_6B3D2	; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		locret_68E8D	; code used at 8000
		TYA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		locret_68E8D	; code used at 8000
		LDA		#$20       ; code used at 8000
		JSR		sub_6A84F	; code used at 8000
		BCS		loc_68E8E	; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		ORA		#$40       ; code used at 8000
		STA		byte_73D,X	; code used at 8000
		BRK
		.BYTE $34, $F		; _syscall10
locret_68E8D:				; CODE XREF: sub_68E69+6-j
					; sub_68E69+10-j sub_68E69+28-j
		RTS				; code used at 8000
loc_68E8E:				; CODE XREF: sub_68E69+17-j
		JSR		sub_6B2EF	; code used at 8000
		BNE		locret_68E8D	; code used at 8000
		BRK
		.BYTE $35, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68E96:				; DATA XREF: BANK4:BDD0-o BANK4:BDD2-o
					; BANK4:BDD4-o BANK4:BDD6-o
		JSR		sub_6983C	; ind code used	at 8000
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		SEC				; code used at 8000
		SBC		#$13		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6B490,X	; code used at 8000
		STA		byte_D3		; code used at 8000
		STA		byte_49		; code used at 8000
		BRK
		.BYTE 2, $F7		; _syscall0F
		JSR		sub_6A35F	; code used at 8000
		JSR		sub_6B30E	; code used at 8000
		JSR		sub_6BEB9	; code used at 8000
loc_68EB8:				; CODE XREF: sub_69840+4F-j
		JSR		sub_6B2A3	; code used at 8000
loc_68EBB:				; code used at 8000
		BMI		loc_68EC4
		STA		byte_CE		; code used at 8000
		STA		byte_D2		; code used at 8000
		JMP		sub_6A579	; code used at 8000
loc_68EC4:				; CODE XREF: sub_68E96:loc_68EBB-j
		JMP		loc_6989F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68EC7:				; DATA XREF: BANK4:BDD8-o BANK4:BDDA-o
					; BANK4:BDDC-o BANK4:BDDE-o BANK4:BDE0-o
					; BANK4:BDE2-o BANK4:BDE4-o BANK4:BDE6-o
		JSR		sub_6983C	; ind code used	at 8000
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		SEC				; code used at 8000
		SBC		#$17		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6B494,X	; code used at 8000
		STA		byte_49		; code used at 8000
		STA		byte_D3		; code used at 8000
		BRK
		.BYTE 2, $F7		; _syscall0F
		JSR		sub_6A35F	; code used at 8000
		JSR		sub_6B32F	; code used at 8000
loc_68EE6:				; CODE XREF: sub_68DB1+21-j
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_68F09	; code used at 8000
		LDY		#0		; code used at 8000
loc_68EED:				; CODE XREF: sub_68EC7+3F-j
		STY		byte_CE		; code used at 8000
		STY		byte_D2		; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		loc_68F03	; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		JSR		_b4_sB		; code used at 8000
		JSR		sub_6BEB9	; code used at 8000
		JSR		sub_6A579	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
loc_68F03:				; CODE XREF: sub_68EC7+2D-j
		INY				; code used at 8000
		CPY		#4		; code used at 8000
		BNE		loc_68EED	; code used at 8000
		RTS				; code used at 8000
loc_68F09:				; CODE XREF: sub_68EC7+22-j
		JMP		loc_698B4

; =============== S U B	R O U T	I N E =======================================
sub_68F0C:				; CODE XREF: sub_6889C:loc_688A3-p
					; sub_68B3B+11-p sub_68D8D+13-p
					; sub_68E1E+3-p	sub_68E69+3-p
					; sub_68EC7+2A-p sub_68F21+23-p
					; sub_68FF8:loc_6900A-p	sub_69135+13-p
					; sub_69173+1F-p sub_691DF+D-p
					; sub_694C1:loc_694C3-p	sub_69840+B5-p
					; sub_69BE5+7-p	sub_69CA7+3-p
					; sub_69D35+B-p	sub_69D77+D-p
					; sub_69DF6+D-p	sub_69FA3+6-p
					; sub_69FC5+11-p sub_6A049+4-p
					; sub_6A2CB+11-p sub_6A30D+3-p
					; sub_6A57F+10-p sub_6A5F7+F-p
					; sub_6A61F+8-p	sub_6A6DF+D-p
					; sub_6A790+A-p	_b4_s1B:loc_6B33E-p
		TYA				; code used as ind data	at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		byte_73D,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68F16:				; CODE XREF: sub_69135+33-p
					; sub_69453+3F-p sub_69840+8A-p
					; sub_6990D+11-p sub_699A0+8-p
					; sub_69A2E:loc_69A49-p	sub_69E98+3-p
					; sub_69F43+18-p sub_69FC5+35-p
					; sub_6A3B5+8-p	sub_6A3F8:loc_6A402-p
					; sub_6A3F8+3F-p sub_6A5D6:loc_6A5E0-p
					; sub_6A676+3-p	sub_6A74B+D-p
		LDA		byte_64		; code used as ind data	at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_530,X	; code used at 8000
		AND		byte_531,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_68F21:				; DATA XREF: BANK4:BDE8-o
		LDA		#$12
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_68F2C:				; CODE XREF: sub_69955+3-j
		JSR		sub_6B2A3
		BMI		loc_68F70
		STA		byte_CE
		LDA		#$20 
		STA		byte_47
loc_68F37:				; CODE XREF: sub_68FCF-p
		JSR		sub_6B347
		BCC		loc_68F41
		BEQ		loc_68F41
		JMP		sub_69931
loc_68F41:				; CODE XREF: sub_68F21+19-j
					; sub_68F21+1B-j sub_69927+7-j
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
loc_68F59:				; CODE XREF: sub_68F21+34-j
		LDA		byte_47
		JSR		sub_6A84F
		BCS		loc_68F6D
		LDA		#$55 
		JSR		sub_6B0B9
		CMP		#$55 
		BEQ		sub_68F73
		JMP		sub_68F86
locret_68F6C:				; CODE XREF: sub_68F21+26-j
		RTS
loc_68F6D:				; CODE XREF: sub_68F21+2B-j
					; sub_68F21+3D-j
		BRK
		.BYTE $83, $F		; _syscall10
loc_68F70:				; CODE XREF: sub_68F21+E-j
		JMP		loc_6991A

; =============== S U B	R O U T	I N E =======================================
sub_68F73:				; CODE XREF: sub_68F21+46-j
					; sub_68FF8+2E-p
		BRK
		.BYTE $7E, $F7		; _syscall0F
		LDA		#$55 
		JSR		_b4_s20
		JMP		_sram_bank0_sub2A

; =============== S U B	R O U T	I N E =======================================
sub_68F7E:				; CODE XREF: sub_68F21+28-p
					; sub_68FF8+20-p
		LDA		#$47 
		JSR		sub_6B0B9
		CMP		#$C7 
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68F86:				; CODE XREF: sub_68F21+48-j
		JSR		sub_68F8C
		JSR		sub_6A4E4

; =============== S U B	R O U T	I N E =======================================
sub_68F8C:				; CODE XREF: sub_68F86-p sub_68FF8+4A-p
		JSR		loc_68F8F
loc_68F8F:
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JMP		_sram_bank0_sub5

; =============== S U B	R O U T	I N E =======================================
sub_68F98:				; CODE XREF: sub_69050-p
		JSR		_sram_bank0_sub2
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
					; X = ram var ofs
		JMP		loc_6A582

; =============== S U B	R O U T	I N E =======================================
sub_68FBC:				; DATA XREF: BANK4:BDEA-o
		JSR		sub_6B2A3
		BMI		sub_68FE0
		JSR		sub_68FD5
		LDA		#$20 
		STA		byte_47
		LDA		#$13
		JMP		sub_694B8
off_68FCD:
		.WORD sub_68FCF		; DATA XREF: sub_68FD5-r sub_68FD5+5-r

; =============== S U B	R O U T	I N E =======================================
sub_68FCF:				; DATA XREF: BANK4:off_68FCD-o
		JSR		loc_68F37
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_68FD5:				; CODE XREF: sub_68FBC+5-p
		LDA		off_68FCD
		STA		word_3E
		LDA		off_68FCD+1
		STA		word_3E+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68FE0:				; CODE XREF: sub_68FBC+3-j
		LDA		#$13
		JSR		sub_68FEB
		JSR		sub_6B2A3
		JMP		sub_6995B

; =============== S U B	R O U T	I N E =======================================
sub_68FEB:				; CODE XREF: sub_68F21+2-p sub_68FE0+2-p
					; sub_68FF8+2-p	sub_69081+F-p
					; sub_690A9+16-p sub_690CD+2-p
					; sub_690E9+16-p sub_69111+16-p
					; sub_69135+2-p	sub_69173+2-p
					; sub_6921D+2-p	sub_69225+2-p
					; sub_692B7+2-p	sub_69322+4-p
					; sub_6934C+4-p	sub_69370+2-p
					; sub_694B8-p sub_69782+22-p
					; sub_69782+45-p
		PHA				; code used at 8000
		JSR		sub_6983C	; code used at 8000
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		PLA				; code used at 8000
		STA		byte_D3		; code used at 8000
		BRK
		.BYTE 2, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_68FF8:				; DATA XREF: BANK4:BDEC-o
		LDA		#$14
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B32F
		JSR		sub_6B2A3
		BMI		loc_69079
		LDY		#0
loc_6900A:				; CODE XREF: sub_69058+3-j
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
loc_6902C:				; CODE XREF: sub_68FF8+23-j
		JSR		sub_6B3D8
		JMP		sub_69053
loc_69032:				; CODE XREF: sub_68FF8+2C-j
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
		BRK
		.BYTE $2C, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
sub_6904D:
		JMP		sub_69053

; =============== S U B	R O U T	I N E =======================================
sub_69050:				; CODE XREF: sub_68FF8+3F-j
		JSR		sub_68F98

; =============== S U B	R O U T	I N E =======================================
sub_69053:				; CODE XREF: sub_68FF8+31-j
					; sub_68FF8+37-j sub_6904D-j
		JSR		_b4_s6
		PLA
		TAY

; =============== S U B	R O U T	I N E =======================================
sub_69058:				; CODE XREF: sub_68FF8+15-j
		INY
		CPY		#4
		BNE		loc_6900A
loc_6905D:				; CODE XREF: sub_69058+26-j
		JSR		_b4_sB
		JSR		sub_6B2B3
		STA		byte_64
		ASL
		TAX
		LDA		byte_531,X
		BPL		locret_69078
		JSR		sub_6B5B7
		BRK
		.BYTE $2D, $F7		; _syscall0F
		JSR		sub_6ADBF
		JSR		_b4_s5
locret_69078:				; CODE XREF: sub_69058+12-j
		RTS
loc_69079:				; CODE XREF: sub_68FF8+E-j
		LDA		#$80 
		JSR		sub_699A0
		JMP		loc_6905D

; =============== S U B	R O U T	I N E =======================================
sub_69081:				; DATA XREF: BANK4:BDEE-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BMI		loc_6908E	; code used at 8000
		JSR		sub_69096	; code used at 8000
		LDA		#$22       ; code used at 8000
		JMP		sub_694B8	; code used at 8000
loc_6908E:				; CODE XREF: sub_69081+3-j
		LDA		#$22       ; code used at 8000
		JSR		sub_68FEB	; code used at 8000
		JMP		sub_69C86	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69096:				; CODE XREF: sub_68DEC+B-p sub_69081+5-p
		LDA		off_690A1	; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		off_690A1+1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		RTS				; code used at 8000
off_690A1:
		.WORD sub_690A3		; DATA XREF: sub_69096-r sub_6A13C+F-r
					; sub_69096+5-r	sub_6A13C+14-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_690A3:				; DATA XREF: BANK4:off_690A1-o
		JSR		sub_69C9D	; ind code used	at 8000
		JMP		loc_694D2	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_690A9:				; DATA XREF: BANK4:BDF0-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BMI		loc_690BD	; code used at 8000
		LDA		off_690C5	; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		off_690C5+1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		LDA		#$24       ; code used at 8000
		JMP		sub_694B8	; code used at 8000
loc_690BD:				; CODE XREF: sub_690A9+3-j
		LDA		#$24       ; code used at 8000
		JSR		sub_68FEB	; code used at 8000
		JMP		sub_69D60	; code used at 8000
off_690C5:
		.WORD sub_690C7		; DATA XREF: sub_690A9+5-r sub_690A9+A-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_690C7:				; DATA XREF: BANK4:off_690C5-o
		JSR		sub_69D77	; ind code used	at 8000
		JMP		loc_694D2	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_690CD:				; DATA XREF: BANK4:BDF2-o
		LDA		#$2B 
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E

; =============== S U B	R O U T	I N E =======================================
sub_690D8:				; CODE XREF: sub_69F05+1B-j
		JSR		sub_6B2A3
		BMI		loc_690E6
		STA		byte_CE
		LDA		#0
		STA		byte_47
		JMP		sub_6A6DF
loc_690E6:				; CODE XREF: sub_690D8+3-j
		JMP		loc_69F16

; =============== S U B	R O U T	I N E =======================================
sub_690E9:				; DATA XREF: BANK4:BDF4-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BMI		loc_690FD	; code used at 8000
		LDA		off_69105	; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		off_69105+1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		LDA		#$2C       ; code used at 8000
		JMP		sub_694B8	; code used at 8000
loc_690FD:				; CODE XREF: sub_690E9+3-j
		LDA		#$2C       ; code used at 8000
		JSR		sub_68FEB	; code used at 8000
		JMP		sub_69F23	; code used at 8000
off_69105:
		.WORD sub_69107		; DATA XREF: sub_690E9+5-r sub_690E9+A-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69107:				; DATA XREF: BANK4:off_69105-o
		LDA		#$FF		; ind code used	at 8000
		STA		byte_47		; code used at 8000
		JSR		sub_6A6DF	; code used at 8000
		JMP		loc_694D2	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69111:				; DATA XREF: BANK4:BDF6-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BMI		loc_69125	; code used at 8000
		LDA		off_6912D	; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		off_6912D+1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		LDA		#$25       ; code used at 8000
		JMP		sub_694B8	; code used at 8000
loc_69125:				; CODE XREF: sub_69111+3-j
		LDA		#$25       ; code used at 8000
		JSR		sub_68FEB	; code used at 8000
		JMP		sub_69DDF	; code used at 8000
off_6912D:
		.WORD sub_6912F		; DATA XREF: sub_69111+5-r sub_69111+A-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6912F:				; DATA XREF: BANK4:off_6912D-o
		JSR		sub_69DF6	; ind code used	at 8000
		JMP		loc_694D2	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69135:				; DATA XREF: BANK4:BDF8-o
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
loc_69158:				; CODE XREF: sub_69135+3B-j
		BIT		byte_567
		BVC		loc_6915E
locret_6915D:				; CODE XREF: sub_69135+16-j
					; sub_69135+36-j sub_69173+22-j
		RTS
loc_6915E:				; CODE XREF: sub_69135+26-j
		JSR		sub_6B2B3
		STA		byte_64
		JMP		sub_6B6EB
loc_69166:				; CODE XREF: sub_69135+E-j
		STA		byte_64
		JSR		sub_68F16
		BPL		locret_6915D
		JSR		sub_6A676
		JMP		loc_69158

; =============== S U B	R O U T	I N E =======================================
sub_69173:				; DATA XREF: BANK4:BDFA-o
		LDA		#$27 
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_6917E:				; CODE XREF: sub_69EC5+3-j
		JSR		sub_6B2A3
		BMI		sub_691C0
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_6918F
		BEQ		loc_6918F
		JMP		sub_69E98
loc_6918F:				; CODE XREF: sub_69173+15-j
					; sub_69173+17-j sub_69E7F+16-j
					; sub_6A0EF-p
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
		BRK
		.BYTE $46, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
sub_691B7:
		JMP		_b4_s6

; =============== S U B	R O U T	I N E =======================================
sub_691BA:				; CODE XREF: sub_69173+29-j
					; sub_69173+30-j
		JMP		sub_6B3D8
loc_691BD:				; CODE XREF: sub_69173+37-j
		BRK
		.BYTE $85, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_691C0:				; CODE XREF: sub_69173+E-j
		JMP		sub_69E7F

; =============== S U B	R O U T	I N E =======================================
sub_691C3:				; DATA XREF: BANK4:BDFC-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BMI		sub_6921D	; code used at 8000
		LDA		off_691D7	; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		off_691D7+1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		LDA		#$18		; code used at 8000
		JMP		sub_694B8	; code used at 8000
off_691D7:
		.WORD sub_691D9		; DATA XREF: sub_691C3+5-r sub_691C3+A-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_691D9:				; DATA XREF: BANK4:off_691D7-o
		JSR		sub_691DF	; ind code used	at 8000
		JMP		loc_694D2	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_691DF:				; CODE XREF: sub_691D9-p sub_69ABF+17-j
		JSR		sub_6B347	; code used at 8000
		BCC		loc_691E9	; code used at 8000
		BEQ		loc_691E9
		JMP		loc_69AEB
loc_691E9:				; CODE XREF: sub_691DF+3-j sub_691DF+5-j
					; sub_69AE1+7-j
		JSR		sub_6B3D2	; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		locret_69219	; code used at 8000
		LDA		#$C0       ; code used at 8000
		JSR		sub_6A84F	; code used at 8000
		BCS		loc_6921A	; code used at 8000
		JSR		_sram_bank0_sub12 ; code used at 8000
		LDA		byte_6A9F,X	; code used at 8000
		CMP		word_4		; code used at 8000
		BCC		loc_69204	; code used at 8000
		LDA		word_4		; code used at 8000
loc_69204:				; CODE XREF: sub_691DF+21-j
		PHA				; code used at 8000
		LDA		byte_6A9F,X	; code used at 8000
		SEC				; code used at 8000
		SBC		word_4		; code used at 8000
		BCS		loc_6920F	; code used at 8000
		LDA		#0
loc_6920F:				; CODE XREF: sub_691DF+2C-j
		STA		byte_6A9F,X	; code used at 8000
		PLA				; code used at 8000
		JSR		sub_6B2CF	; code used at 8000
		BRK
		.BYTE $3E, $F7		; _syscall0F
locret_69219:				; CODE XREF: sub_691DF+10-j
		RTS				; code used at 8000
loc_6921A:				; CODE XREF: sub_691DF+17-j
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_6921D:				; CODE XREF: sub_691C3+3-j
		LDA		#$18
		JSR		sub_68FEB
		JMP		sub_69ABF

; =============== S U B	R O U T	I N E =======================================
sub_69225:				; DATA XREF: BANK4:BDFE-o
		LDA		#$16
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_69230:				; CODE XREF: sub_69A7A+3-j
		JSR		sub_6B2A3
		BPL		loc_69238
		JMP		loc_69A3B
loc_69238:				; CODE XREF: sub_69225+E-j
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_69244
		BEQ		loc_69244
		JMP		loc_69A49
loc_69244:				; CODE XREF: sub_69225+18-j
					; sub_69225+1A-j sub_69A2E+18-j
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73C,X
		AND		byte_73D,X
		BMI		loc_69251
		RTS
loc_69251:				; CODE XREF: sub_69225+29-j
		LDA		#$32 
		JSR		sub_6A84F
		BCS		loc_69264
		LDX		byte_4C
		DEX
		BEQ		loc_69264
		JSR		_sram_b0_s2C
		LDA		word_4
		BNE		loc_69267
loc_69264:				; CODE XREF: sub_69225+31-j
					; sub_69225+36-j
		JMP		sub_6B3D8
loc_69267:				; CODE XREF: sub_69225+3D-j
		BRK
		.BYTE $4F, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
; unused
sub_6926A:
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
loc_69282:				; CODE XREF: sub_6926A+28-j
		LDA		byte_CF
		CMP		#3
		BEQ		loc_69295
		CLC
		ADC		#1
		STA		byte_D0
		JSR		_sram_bank0_sub3B
		INC		byte_CF
		JMP		loc_69282
loc_69295:				; CODE XREF: sub_6926A+1C-j
		DEC		byte_4C
		JSR		sub_6A927
		LDA		byte_2C
		BNE		locret_692B6
		LDX		#$C
loc_692A0:				; CODE XREF: sub_6926A+42-j
		LDA		byte_100
		EOR		byte_100,X
		BPL		loc_692AE
		DEX
		DEX
		DEX
		DEX
		BNE		loc_692A0
loc_692AE:				; CODE XREF: sub_6926A+3C-j
		LDA		byte_100,X
		EOR		#$80 
		STA		byte_100,X
locret_692B6:				; CODE XREF: sub_6926A+32-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_692B7:				; DATA XREF: BANK4:BE02-o
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
		BRK
		.BYTE $48, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_692D4:				; DATA XREF: BANK4:BE00-o
		LDA		#$AD       ; ind code used at 8000
		JSR		_b4_s8		; code used at 8000
		LDA		#$9C       ; code used at 8000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $EA, 7		; ofs 0x00038010, -> dst _b2_s8_screen_hit_blink
		BRK
		.BYTE $EA, 7		; ofs 0x00038010, -> dst _b2_s8_screen_hit_blink
		BRK
		.BYTE $76, $F7		; _syscall0F
		LDA		byte_500	; code used at 8000
		PHA				; code used at 8000
		LDA		byte_501	; code used at 8000
		PHA				; code used at 8000
		LDA		byte_51		; code used at 8000
		PHA				; code used at 8000
		LDA		byte_52		; code used at 8000
		PHA				; code used at 8000
		LDA		byte_566	; code used at 8000
		PHA				; code used at 8000
		JSR		_b4_s22		; code used at 8000
		PLA				; code used at 8000
		STA		byte_566	; code used at 8000
		AND		#$C0       ; code used at 8000
		BEQ		loc_69309	; code used at 8000
		LDA		#4
		STA		byte_566
loc_69309:				; CODE XREF: sub_692D4+2E-j
		PLA				; code used at 8000
		STA		byte_52		; code used at 8000
		PLA				; code used at 8000
		STA		byte_51		; code used at 8000
		PLA				; code used at 8000
		STA		byte_501	; code used at 8000
		PLA				; code used at 8000
		STA		byte_500	; code used at 8000
		LDA		#5		; code used at 8000
		LDX		#3		; code used at 8000
loc_6931B:				; CODE XREF: sub_692D4+4B-j
		STA		byte_6A4B,X	; code used at 8000
		DEX				; code used at 8000
		BPL		loc_6931B	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69322:				; DATA XREF: BANK4:BE04-o
		LDA		#$2E 
		STA		byte_47
		JSR		sub_68FEB
		JSR		sub_6A35F
loc_6932C:				; CODE XREF: sub_69F64:loc_69F7A-j
		JSR		sub_6B2A3
		BPL		sub_6933E
		LDA		off_69344
		STA		word_40
		LDA		off_69344+1
		STA		word_40+1
		JMP		sub_6A3AB

; =============== S U B	R O U T	I N E =======================================
sub_6933E:				; CODE XREF: sub_69322+D-j sub_6934C+D-j
		JSR		sub_6B32F
		JMP		sub_69F64
off_69344:
		.WORD sub_69346		; DATA XREF: sub_69322+F-r sub_6934C+F-r
					; sub_69322+14-r sub_6934C+14-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69346:				; DATA XREF: BANK4:off_69344-o
		JSR		sub_6A7BC	; ind code used	at 8000
		JMP		sub_6A3CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6934C:				; DATA XREF: BANK4:BE06-o
		LDA		#$2F       ; ind code used at 8000
		STA		byte_47		; code used at 8000
		JSR		sub_68FEB	; code used at 8000
		JSR		sub_6A35F	; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		BPL		sub_6933E	; code used at 8000
		LDA		off_69344	; code used at 8000
		STA		word_40		; code used at 8000
		LDA		off_69344+1	; code used at 8000
		STA		word_40+1	; code used at 8000
		LDA		#0		; code used at 8000
		JMP		sub_6A3B1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6936A:				; DATA XREF: BANK4:BE0A-o
		LDA		#$21 
		BNE		sub_69370

; =============== S U B	R O U T	I N E =======================================
sub_6936E:				; DATA XREF: BANK4:BE08-o
		LDA		#$20 

; =============== S U B	R O U T	I N E =======================================
sub_69370:				; CODE XREF: sub_6936A+2-j
		STA		byte_49
		JSR		sub_68FEB
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		sub_6B2A3
		BMI		loc_69383
		JMP		loc_6940A
loc_69383:				; CODE XREF: sub_69370+E-j
					; sub_69C0B+54-j
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
loc_6939C:				; CODE XREF: sub_69370+25-j
		JSR		sub_6B91D
		TAX
		LDA		byte_6A6F,X
		BRK
		.BYTE $69, 7		; ofs 0x00038014, -> dst _b2_sA
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
loc_693CB:				; CODE XREF: sub_69370+55-j
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
		BRK
		.BYTE $3C, $F7		; _syscall0F
		JMP		sub_6AA34
loc_693EA:				; CODE XREF: sub_69370+1A-j
					; sub_69370+1F-j sub_69370+36-j
		BRK
		.BYTE $40, $F		; _syscall10
loc_693ED:				; CODE XREF: sub_69370+2A-j
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A77,X
		PHA
		TXA
		PHA
		LDA		#$80 
		STA		byte_6A77,X
		JSR		sub_6B5B7
		BRK
		.BYTE $3D, $F7		; _syscall0F
		PLA
		TAX
		PLA
		STA		byte_6A77,X
		RTS
loc_6940A:				; CODE XREF: sub_69370+10-j
		LDA		byte_49
		SEC
		SBC		#$20 
		CLC
		ROL
		ROL
		JMP		sub_69C0B

; =============== S U B	R O U T	I N E =======================================
sub_69415:				; DATA XREF: BANK4:BE0C-o BANK4:BE0E-o
					; BANK4:BE10-o BANK4:BE16-o BANK4:BE18-o
					; BANK4:BE1A-o
		JSR		sub_6983C	; ind code used	at 8000
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		LDA		#$36       ; code used at 8000
		STA		word_4		; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		CMP		#$36       ; code used at 8000
		BCS		loc_6942E	; code used at 8000
		PHA				; code used at 8000
		LDA		#$31       ; code used at 8000
		STA		word_4		; code used at 8000
		PLA				; code used at 8000
loc_6942E:				; CODE XREF: sub_69415+11-j
		SEC				; code used at 8000
		SBC		word_4		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6B49C,X	; code used at 8000
		STA		byte_D3		; code used at 8000
		BRK
		.BYTE 2, $F7		; _syscall0F
		JSR		sub_6A35F	; code used at 8000
		JSR		sub_6B30E	; code used at 8000
		JSR		sub_6BEF5	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69443:				; CODE XREF: sub_69BA0:loc_69BD7-j
		JSR		sub_6B2A3	; code used at 8000
		BPL		loc_69450	; code used at 8000
		STA		byte_64		; code used at 8000
		JSR		sub_6BEF5	; code used at 8000
		JMP		sub_6A5D6	; code used at 8000
loc_69450:				; CODE XREF: sub_69443+3-j
		JMP		loc_69BA3

; =============== S U B	R O U T	I N E =======================================
sub_69453:				; DATA XREF: BANK4:BE12-o BANK4:BE14-o
					; BANK4:BE1C-o BANK4:BE1E-o
		JSR		sub_6983C
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
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
loc_6946C:				; CODE XREF: sub_69453+11-j
		SEC
		SBC		word_4
		TAX
		LDA		byte_6B49F,X
		STA		byte_D3
		BRK
		.BYTE 2, $F7		; _syscall0F
		JSR		sub_6A35F
		JSR		sub_6B32F
loc_6947E:				; CODE XREF: sub_69C03+3-j
		JSR		sub_6B2A3
		BPL		loc_694B5
		JSR		sub_6A8B3
		STA		byte_46
		LDY		#0
loc_6948A:				; CODE XREF: sub_69453+5F-j
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
loc_694A7:				; CODE XREF: sub_69453+4C-j
		JSR		sub_6BF22
loc_694AA:				; CODE XREF: sub_69453+51-j
		JSR		sub_6A5D6
loc_694AD:				; CODE XREF: sub_69453+3D-j
					; sub_69453+42-j
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_6948A
		RTS
loc_694B5:				; CODE XREF: sub_69453+2E-j
		JMP		sub_69BE0

; =============== S U B	R O U T	I N E =======================================
sub_694B8:				; CODE XREF: sub_68FBC+E-j sub_69081+A-j
					; sub_690A9+11-j sub_690E9+11-j
					; sub_69111+11-j sub_691C3+11-j
		JSR		sub_68FEB	; code used at 8000
		JSR		sub_6A35F	; code used at 8000
		JSR		sub_6B32F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_694C1:				; CODE XREF: sub_68DEC+E-j
					; sub_68E00+10-p sub_68E4B+10-p
					; sub_69B1B+E-j	sub_69D20+A-j
					; sub_69F64+13-j sub_6A0C9+19-j
					; sub_6A13C+19-j sub_6A226+A-j
					; sub_6AEEF+A-j	sub_6AF34+9-p
		LDY		#0		; code used at 8000
loc_694C3:				; CODE XREF: sub_694C1+16-j
		JSR		sub_68F0C	; code used at 8000
		BPL		loc_694D4	; code used at 8000
		STY		byte_CE		; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		JSR		_b4_sB		; code used at 8000
		JMP		(word_3E)	; code used at 8000
loc_694D2:				; CODE XREF: sub_68E18+3-j sub_68E63+3-j
					; sub_68FCF+3-j	sub_690A3+3-j
					; sub_690C7+3-j	sub_69107+7-j
					; sub_6912F+3-j	sub_691D9+3-j
					; sub_69B2E+3-j	sub_69D2F+3-j
					; sub_69F7F+3-j	sub_6A0EF+3-j
					; sub_6A235+3-j	sub_6AEFE+3-j
					; sub_6AF53+6-j
		PLA				; code used at 8000
		TAY				; code used at 8000
loc_694D4:				; CODE XREF: sub_694C1+5-j
		INY				; code used at 8000
		CPY		#4		; code used at 8000
		BNE		loc_694C3	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_694DA:				; CODE XREF: sub_68931+64-j
		LDA		byte_6A63	; code used at 8000
		BNE		locret_694FC	; code used at 8000
		JSR		sub_68AC6	; code used at 8000
		BEQ		locret_694FC	; code used at 8000
		LDA		byte_566	; code used at 8000
		AND		#$C4       ; code used at 8000
		BNE		locret_694FC	; code used at 8000
		JSR		sub_6B2B3	; code used at 8000
		STA		byte_D2		; code used at 8000
		STA		byte_CE		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		byte_73D,X	; code used at 8000
		BMI		loc_694FD	; code used at 8000
locret_694FC:				; CODE XREF: sub_694DA+3-j sub_694DA+8-j
					; sub_694DA+F-j	sub_694DA+78-j
		RTS				; code used at 8000
loc_694FD:				; CODE XREF: sub_694DA+20-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		_b4_sA		; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		sub_6957D	; code used at 8000
		TXA				; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6A9B,X	; code used at 8000
		AND		#8		; code used at 8000
		BNE		sub_69589	; code used at 8000
		LDA		#$44       ; code used at 8000
		JSR		sub_6B0B9	; code used at 8000
		CMP		#$C4       ; code used at 8000
		BEQ		loc_6952A	; code used at 8000
		JSR		sub_6B2B3	; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		loc_69536	; code used at 8000
loc_6952A:				; CODE XREF: sub_694DA+42-j
		BRK
		.BYTE $E5, 7		; ofs 0x000f8014, -> dst _bA_sA
		BRK
		.BYTE $73, $F7		; _syscall0F
		JSR		_b4_sA
		JMP		loc_6953C
loc_69536:				; CODE XREF: sub_694DA+4E-j
		BRK
		.BYTE $86, $17		; ofs 0x0003801a, -> dst _b2_sD
		BCC		loc_6953C	; code used at 8000
		RTS
loc_6953C:				; CODE XREF: sub_694DA+59-j
					; sub_694DA+5F-j
		JSR		sub_6B2FE	; code used at 8000
		LDA		byte_567	; code used at 8000
		AND		#$C		; code used at 8000
		BEQ		loc_69562	; code used at 8000
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
loc_69562:				; CODE XREF: sub_694DA+6A-j
		JSR		sub_69580	; code used at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_54C,X	; code used at 8000
		AND		#$70       ; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		LDA		off_6BE2A,X	; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		off_6BE2A+1,X	; code used at 8000
		STA		word_3C+1	; code used at 8000
		JMP		(word_3C)	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_6957D:				; CODE XREF: sub_694DA+2F-j
		BRK
		.BYTE $38, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
sub_69580:				; CODE XREF: sub_68A52+A-p
					; sub_694DA:loc_69562-p
		LDA		byte_568	; code used at 8000
		AND		#$FC       ; code used at 8000
		STA		byte_568	; code used as ind data	at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69589:				; CODE XREF: sub_694DA+39-j
		TXA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		#3		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_6B44A,Y	; code used at 8000
		STA		word_4		; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		word_4		; code used at 8000
		BEQ		loc_695B4	; code used at 8000
		BCC		loc_695B4	; code used at 8000
		DEY				; code used at 8000
		STY		word_4		; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		#$FC       ; code used at 8000
		ORA		word_4		; code used at 8000
		STA		byte_73C,X	; code used at 8000
		LDA		byte_CE		; code used at 8000
		STA		byte_D2		; code used at 8000
		BRK
		.BYTE $1B, $F		; _syscall10
loc_695B4:				; CODE XREF: sub_69589+13-j
					; sub_69589+15-j
		TXA				; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6A9B,X	; code used at 8000
		AND		#$F7       ; code used at 8000
		STA		byte_6A9B,X	; code used at 8000
		LDA		byte_CE		; code used at 8000
		STA		byte_D2		; code used at 8000
		BRK
		.BYTE $1C, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_695C6:				; CODE XREF: sub_6B0C1+17-j
					; DATA XREF: BANK4:off_6BE2A-o
		JSR		_sram_bank0_sub16 ; ind	code used at 8000
		LDA		byte_CE		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		loc_695DE	; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_6AAB,X	; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_6AAC,X	; code used at 8000
loc_695DE:				; CODE XREF: sub_695C6+C-j
		JSR		_sram_bank0_sub1E ; code used at 8000
		LDA		word_4		; code used at 8000
		AND		#$7F       ; code used at 8000
		CMP		#$18		; code used at 8000
		BNE		loc_69600	; code used at 8000
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
loc_69600:				; CODE XREF: sub_695C6+21-j
		JSR		sub_69604	; code used at 8000
locret_69603:				; CODE XREF: sub_695C6+31-j
					; sub_695C6+35-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69604:				; CODE XREF: sub_695C6+26-p
					; sub_695C6:loc_69600-p
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_6960C	; code used at 8000
		JMP		sub_696E8	; code used at 8000
loc_6960C:				; CODE XREF: sub_69604+3-j
		BRK
		.BYTE $89, $2F		; _syscall12
		BRK
		.BYTE 1, $F7		; _syscall0F
		JSR		sub_6B0E5	; code used at 8000
		BCC		loc_6961A	; code used at 8000
		BRK
		.BYTE $7C, $F		; _syscall10
loc_6961A:				; CODE XREF: sub_69604+11-j
		LDA		byte_CE		; code used at 8000
		PHA				; code used at 8000
		JSR		sub_6AABA	; code used at 8000
		PLA				; code used as ind data	at 8000
		STA		byte_CE		; code used as ind data	at 8000
		LDA		word_6		; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_6962A	; code used at 8000
		RTS				; code used at 8000
loc_6962A:				; CODE XREF: sub_69604+23-j
		STA		byte_64		; code used at 8000
		LDA		byte_CE		; code used as ind data	at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		loc_69647	; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		#$A0       ; code used at 8000
		BCS		loc_69647	; code used at 8000
loc_6963E:				; CODE XREF: sub_69604+4F-j
		BRK
		.BYTE $8C, $2F		; _syscall12
		JSR		sub_6B5B7	; code used at 8000
		BRK
		.BYTE $22, $F		; _syscall10
loc_69647:				; CODE XREF: sub_69604+31-j
					; sub_69604+38-j
		LDA		byte_575	; code used at 8000
		AND		#8		; code used at 8000
		BEQ		loc_69655	; code used at 8000
		JSR		sub_6ACBE
		CMP		#$20 
		BCC		loc_6963E
loc_69655:				; CODE XREF: sub_69604+48-j
		LDA		byte_73C,X	; code used at 8000
		AND		#8		; code used at 8000
		BEQ		loc_69660	; code used as ind data	at 8000
		ASL		word_4
		ROL		word_4+1
loc_69660:				; CODE XREF: sub_69604+56-j
		LDA		byte_575	; code used at 8000
		BMI		loc_696C9	; code used at 8000
		LDA		byte_567	; code used at 8000
		AND		#$20       ; code used at 8000
		BNE		loc_696B6	; code used at 8000
		JSR		sub_6B95A	; code used at 8000
		BNE		loc_6968F	; code used at 8000
		JSR		sub_6B9D2	; code used at 8000
		BEQ		loc_6968F	; code used as ind data	at 8000
		LDA		byte_566	; code used at 8000
		AND		#8		; code used as ind data	at 8000
		BNE		loc_6968F	; code used at 8000
		LDA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_531,X	; code used at 8000
		AND		#$20       ; code used at 8000
		BNE		loc_6968F	; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		byte_59		; code used at 8000
		BCC		loc_696DF	; code used at 8000
loc_6968F:				; CODE XREF: sub_69604+6B-j
					; sub_69604+70-j sub_69604+77-j
					; sub_69604+82-j
		LDX		byte_CE		; code used at 8000
		LDA		byte_718,X	; code used at 8000
		AND		#7		; code used at 8000
		CMP		#6		; code used at 8000
		BNE		loc_696A2	; code used at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		byte_700,X	; code used at 8000
		BCC		loc_696B6	; code used at 8000
loc_696A2:				; CODE XREF: sub_69604+94-j
		LDX		#4		; code used at 8000
		LDA		byte_575	; code used at 8000
		AND		#2		; code used at 8000
		BEQ		loc_696AD	; code used at 8000
		LDX		#$20 
loc_696AD:				; CODE XREF: sub_69604+A5-j
		STX		word_6+1	; code used as ind data	at 8000
		JSR		sub_6ACBE	; code used at 8000
		CMP		word_6+1	; code used at 8000
		BCS		loc_696C9	; code used at 8000
loc_696B6:				; CODE XREF: sub_69604+66-j
					; sub_69604+9C-j
		BRK
		.BYTE $88, $2F		; _syscall12
		BRK
		.BYTE $10, $F7		; _syscall0F
		JSR		_sram_bank0_sub17 ; code used at 8000
		JSR		sub_6ADA4	; code used at 8000
		LDX		#word_4		; code used at 8000
		LDA		#1		; code used at 8000
		JSR		_add8_to_16	; code used at 8000
loc_696C9:				; CODE XREF: sub_69604+5F-j
					; sub_69604+B0-j
		LDA		byte_575	; code used as ind data	at 8000
		AND		#$10		; code used at 8000
		BEQ		loc_696DC	; code used at 8000
		JSR		sub_6ACBE
		AND		#$F
		ADC		#$10
		LDX		#word_4
		JSR		_add8_to_16	; A = value
					; X = ram var ofs
loc_696DC:				; CODE XREF: sub_69604+CA-j
		JMP		loc_6A42E	; code used at 8000
loc_696DF:				; CODE XREF: sub_69604+89-j
		JSR		sub_6B5B7	; code used at 8000
		BRK
		.BYTE $8C, $2F		; _syscall12
		BRK
		.BYTE 7, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_696E8:				; CODE XREF: sub_69604+5-j
		JSR		sub_6AABA	; code used at 8000
		LDA		word_6		; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_696F4	; code used at 8000
		BRK
		.BYTE 1, $F		; _syscall10
loc_696F4:				; CODE XREF: sub_696E8+7-j
		AND		#$18		; code used at 8000
		BEQ		loc_69709	; code used at 8000
		CMP		#8
		BEQ		loc_69736
		JSR		sub_69777
		BNE		loc_69709
		JSR		sub_6975F
		BCC		locret_69735
		BRK
		.BYTE $24, $F		; _syscall10
loc_69709:				; CODE XREF: sub_696E8+E-j
					; sub_696E8+17-j sub_696E8+51-j
		BRK
		.BYTE 1, $F7		; _syscall0F
		LDA		word_6		; code used at 8000
		AND		#3		; code used at 8000
		STA		byte_CE		; code used at 8000
		STA		byte_D2		; code used at 8000
		PHA				; code used at 8000
		JSR		loc_6A58C	; code used at 8000
		PLA				; code used at 8000
		JSR		loc_6977A	; code used at 8000
		BEQ		locret_69735	; code used at 8000
		JSR		sub_68C42
		BNE		locret_69735
		JSR		sub_6ACBE
		CMP		#$20 
		BCS		locret_69735
		LDA		byte_73D,X
		AND		#$EF 
		STA		byte_73D,X
		BRK
		.BYTE $74, $F7		; _syscall0F
locret_69735:				; CODE XREF: sub_696E8+1C-j
					; sub_696E8+34-j sub_696E8+39-j
					; sub_696E8+40-j sub_696E8+56-j
		RTS				; code used at 8000
loc_69736:				; CODE XREF: sub_696E8+12-j
		JSR		sub_69777
		BNE		loc_69709
		JSR		sub_6975F
		BCC		locret_69735
		JSR		sub_6ACBE
		AND		#7
		CMP		#7
		BCC		loc_6974C
		BRK
		.BYTE $25, $F		; _syscall10
loc_6974C:				; CODE XREF: sub_696E8+5F-j
		BRK
		.BYTE $1C, $F7		; _syscall0F
		LDX		byte_CE
		LDA		byte_6A9B,X
		AND		#$F7 
		STA		byte_6A9B,X
		LDA		#$70 
		STA		byte_54C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6975F:				; CODE XREF: sub_696E8+19-p
					; sub_696E8+53-p
		LDA		word_6
		AND		#3
		STA		byte_CE
		STA		byte_D3
		BRK
		.BYTE $23, $F7		; _syscall0F
		LDA		byte_D3
		STA		byte_D2
		JSR		sub_6A4D9
		PHP
		JSR		_b4_s21
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69777:				; CODE XREF: sub_696E8+14-p
					; sub_696E8:loc_69736-p
		JSR		sub_6B2B3
loc_6977A:				; CODE XREF: sub_696E8+31-p
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$10		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69782:				; DATA XREF: BANK4:BE2C-o
		JSR		sub_6B2F5	; ind code used	at 8000
		LDX		byte_51		; code used at 8000
		LDA		byte_558,X	; code used at 8000
		STA		byte_49		; code used at 8000
		STA		byte_D3		; code used at 8000
		TAX				; code used at 8000
		LDA		_b4_dD_spells_list,X ; code used at 8000
		AND		#$3F       ; code used at 8000
		BRK
		.BYTE $99, $17		; ofs 0x000080ce, -> dst _b0_s67
		JSR		_sram_bank0_subB ; code	used at	8000
		BCC		loc_697C5	; code used at 8000
		JSR		_sram_bank0_sub9 ; code	used at	8000
		JSR		_b4_s6		; code used at 8000
		LDA		byte_D3		; code used at 8000
		JSR		sub_68FEB	; code used at 8000
		JSR		sub_6A39F	; code used at 8000
loc_697AA:				; CODE XREF: sub_6AE6C:loc_6AEEC-j
		LDA		byte_49		; code used at 8000
		CMP		#$12		; code used at 8000
		BCS		loc_697B4	; code used at 8000
		LDA		#0		; code used at 8000
		BEQ		loc_697B6	; code used at 8000
loc_697B4:				; CODE XREF: sub_69782+2C-j
		SBC		#$11		; code used at 8000
loc_697B6:				; CODE XREF: sub_69782+30-j
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		off_6BE3A,X	; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		off_6BE3A+1,X	; code used at 8000
		STA		word_3C+1	; code used at 8000
		JMP		(word_3C)	; code used at 8000
loc_697C5:				; CODE XREF: sub_69782+18-j
		LDA		byte_D3
		JSR		sub_68FEB
		BRK
		.BYTE $20, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_697CD:				; DATA XREF: BANK4:BE2E-o
		BRK
		.BYTE 4, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_697D0:				; DATA XREF: BANK4:BE32-o BANK4:BE34-o
		BRK
		.BYTE $91, $2F		; _syscall12
		BRK
		.BYTE $36, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
sub_697D6:
		LDA		#$14
		STA		byte_55
		LDA		#$AA 
		STA		byte_56

; =============== S U B	R O U T	I N E =======================================
sub_697DE:				; CODE XREF: sub_68DB1+38-j
		LDY		#0		; code used at 8000
loc_697E0:				; CODE XREF: sub_697DE+56-j
		STY		byte_64		; code used at 8000
		TYA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_530,X	; code used at 8000
		AND		byte_531,X	; code used at 8000
		BPL		loc_69831	; code used at 8000
		LDA		byte_6A63	; code used at 8000
		BEQ		loc_697F9	; code used at 8000
		JSR		sub_6B2B3	; code used at 8000
		CMP		byte_64		; code used at 8000
loc_697F7:				; code used at 8000
		BEQ		loc_69831
loc_697F9:				; CODE XREF: sub_697DE+12-j
		TYA				; code used at 8000
		PHA				; code used at 8000
		JSR		_b4_sB		; code used at 8000
		LDA		byte_55		; code used at 8000
		JSR		_b4_sF		; code used at 8000
		ADC		byte_56		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_65		; code used at 8000
		JSR		sub_6B994	; code used at 8000
		LDA		byte_69837,X	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_6982C	; code used at 8000
		LDX		#word_4		; code used at 8000
		JSR		_mul16_to_8	; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		word_4		; code used at 8000
		BNE		loc_6982C	; code used at 8000
		INC		word_4
loc_6982C:				; CODE XREF: sub_697DE+39-j
					; sub_697DE+4A-j
		JSR		loc_6A42E	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
loc_69831:				; CODE XREF: sub_697DE+D-j
					; sub_697DE:loc_697F7-j
		INY				; code used at 8000
		CPY		#8		; code used at 8000
		BNE		loc_697E0	; code used at 8000
		RTS				; code used at 8000
byte_69837:
		.BYTE $FF,$CC,$99,$80	; DATA XREF: sub_697DE+34-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
nullsub_11:				; DATA XREF: BANK4:BE38-o
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6983C:				; CODE XREF: sub_68E96-p sub_68EC7-p
					; sub_68FEB+1-p	sub_69415-p sub_69453-p
		BRK
		.BYTE $8E, $2F		; _syscall12
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69840:				; DATA XREF: BANK4:off_6BE3A-o
					; BANK4:BE76-o
		LDA		byte_49		; ind code used	at 8000
		CMP		#3		; code used at 8000
		BCC		loc_69892	; code used at 8000
		CMP		#6		; code used at 8000
		BCC		loc_698B4	; code used at 8000
		CMP		#9		; code used at 8000
		BCC		loc_69862	; code used at 8000
		CMP		#$A		; code used at 8000
		BCC		loc_69892	; code used at 8000
		CMP		#$C		; code used at 8000
		BCC		loc_698B4	; code used at 8000
		CMP		#$D		; code used at 8000
		BCC		loc_69862	; code used at 8000
		CMP		#$10		; code used at 8000
		BCC		loc_698B4	; code used at 8000
		CMP		#$11
		BCC		loc_69892
loc_69862:				; CODE XREF: sub_69840+C-j
					; sub_69840+18-j
		JSR		sub_6B2A3
		BMI		loc_6986A
		JMP		loc_698EF
loc_6986A:				; CODE XREF: sub_69840+25-j
		LDY		#0
loc_6986C:				; CODE XREF: sub_69840+49-j
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
loc_69886:				; CODE XREF: sub_69840+37-j
		INY
		CPY		#8
		BNE		loc_6986C
		RTS
loc_6988C:				; CODE XREF: sub_69840+55-j
					; sub_69840+AC-j
		JSR		sub_6BEA4	; code used at 8000
		JMP		loc_68EB8	; code used at 8000
loc_69892:				; CODE XREF: sub_69840+4-j
					; sub_69840+10-j sub_69840+20-j
		JSR		sub_6B2A3	; code used at 8000
		BPL		loc_6988C	; code used at 8000
		JSR		sub_6A8B3	; code used at 8000
		JSR		_b4_s14		; code used at 8000
		BCC		locret_698B3	; code used at 8000
loc_6989F:				; CODE XREF: sub_68E96:loc_68EC4-j
		AND		#7		; code used at 8000
		STA		byte_64		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_530,X	; code used at 8000
		AND		byte_531,X	; code used at 8000
		BPL		locret_698B3	; code used at 8000
		JSR		sub_6BEA4	; code used at 8000
		JMP		sub_6A3F8	; code used at 8000
locret_698B3:				; CODE XREF: sub_69840+5D-j
					; sub_69840+6B-j
		RTS
loc_698B4:				; CODE XREF: sub_68EC7:loc_68F09-j
					; sub_69840+8-j	sub_69840+14-j
					; sub_69840+1C-j
		JSR		sub_6B2A3	; code used at 8000
		BPL		loc_698E0	; code used at 8000
		STA		byte_47		; code used at 8000
		LDY		#0		; code used at 8000
loc_698BD:				; CODE XREF: sub_69840+9D-j
		TYA				; code used at 8000
		PHA				; code used at 8000
		STY		byte_64		; code used at 8000
		JSR		sub_6B91D	; code used at 8000
		LDA		byte_59		; code used at 8000
		CMP		byte_47		; code used at 8000
		BNE		loc_698D8	; code used at 8000
		JSR		sub_68F16	; code used at 8000
		BPL		loc_698D8	; code used at 8000
		JSR		_b4_sB		; code used at 8000
		JSR		sub_6BEA4	; code used at 8000
		JSR		sub_6A3F8	; code used at 8000
loc_698D8:				; CODE XREF: sub_69840+88-j
					; sub_69840+8D-j
		PLA				; code used at 8000
		TAY				; code used at 8000
		INY				; code used at 8000
		CPY		#8		; code used at 8000
		BNE		loc_698BD	; code used at 8000
		RTS				; code used at 8000
loc_698E0:				; CODE XREF: sub_69840+77-j
		JSR		sub_6B2B3
		ASL
		TAX
		LDA		byte_73D,X
		AND		#$10
		BNE		loc_698EF
		JMP		loc_6988C
loc_698EF:				; CODE XREF: sub_69840+27-j
					; sub_69840+AA-j
		LDY		#0
loc_698F1:				; CODE XREF: sub_69840+CA-j
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
loc_69907:				; CODE XREF: sub_69840+B8-j
		INY
		CPY		#4
		BNE		loc_698F1
locret_6990C:				; CODE XREF: sub_6990D+B-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6990D:				; DATA XREF: BANK4:BE3C-o
		JSR		sub_6B2A3
		BPL		sub_69955
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_6990C
loc_6991A:				; CODE XREF: sub_68F21:loc_68F70-j
		AND		#7
		STA		byte_64
		JSR		sub_68F16
		BPL		locret_6994E
		LDA		#$80 
		STA		byte_47

; =============== S U B	R O U T	I N E =======================================
sub_69927:				; CODE XREF: sub_6994F-p
		JSR		sub_6B398	; code used at 8000
		BCC		sub_69931	; code used at 8000
		BNE		sub_69931
		JMP		loc_68F41

; =============== S U B	R O U T	I N E =======================================
sub_69931:				; CODE XREF: sub_68F21+1D-j
					; sub_69927+3-j	sub_69927+5-j
		JSR		sub_6B5B7	; code used at 8000
		LDA		#4		; code used at 8000
		JSR		sub_6A337	; code used at 8000
		BCC		loc_6993E	; code used at 8000
loc_6993B:				; CODE XREF: sub_69931+18-j
		JMP		sub_6A3D3	; code used at 8000
loc_6993E:				; CODE XREF: sub_69931+8-j
		LDA		byte_47		; code used at 8000
		CMP		#$80       ; code used at 8000
		BNE		loc_6994B	; code used at 8000
		LDA		#4
		JSR		sub_6A337
		BCS		loc_6993B
loc_6994B:				; CODE XREF: sub_69931+11-j
		BRK
		.BYTE $83, $F		; _syscall10
locret_6994E:				; CODE XREF: sub_6990D+14-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6994F:				; DATA XREF: BANK4:off_69971-o
		JSR		sub_69927	; ind code used	at 8000
		JMP		sub_6A3CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69955:				; CODE XREF: sub_6990D+3-j sub_6995B+3-j
		JSR		sub_6B2DB
		JMP		loc_68F2C

; =============== S U B	R O U T	I N E =======================================
sub_6995B:				; CODE XREF: sub_68FE0+8-j
					; DATA XREF: BANK4:BE3E-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BPL		sub_69955	; code used at 8000
		JSR		sub_69966	; code used at 8000
		JMP		sub_6A3AB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69966:				; CODE XREF: sub_6995B+5-p
		LDA		off_69971	; code used at 8000
		STA		word_40		; code used at 8000
		LDA		off_69971+1	; code used at 8000
		STA		word_40+1	; code used at 8000
		RTS				; code used at 8000
off_69971:
		.WORD sub_6994F		; DATA XREF: sub_69966-r sub_69966+5-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69973:				; DATA XREF: BANK4:BE40-o
		LDA		#0
		JSR		sub_699A0
		JSR		_b4_sB
		JSR		sub_6B2B3
		PHA
		STA		byte_D2
		STA		byte_CE
		BRK
		.BYTE $2D, $F7		; _syscall0F
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JSR		_sram_bank0_sub5
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
sub_699A0:				; CODE XREF: sub_69058+23-p
					; sub_69973+2-p
		STA		byte_55
		LDY		#0
loc_699A4:				; CODE XREF: sub_699A0+4E-j
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
loc_699C0:				; CODE XREF: sub_699A0+12-j
		LDA		byte_55
		BEQ		loc_699CB
		JSR		sub_6B2B3
		CMP		byte_64
		BEQ		loc_699E9
loc_699CB:				; CODE XREF: sub_699A0+22-j
		JSR		_b4_sB
		JSR		sub_6B5B7
		BRK
		.BYTE $2C, $F7		; _syscall0F
		LDA		#$FF
		STA		byte_65
		STA		byte_CF
		STA		byte_66
		STA		byte_D0
		LDA		#$40 
		JSR		sub_6B307
		JSR		sub_6B697
		JSR		sub_6ADBF
loc_699E9:				; CODE XREF: sub_699A0+B-j
					; sub_699A0+1D-j sub_699A0+29-j
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_699A4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_699F1:				; DATA XREF: BANK4:BE42-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BPL		loc_69A03	; code used at 8000
		LDA		off_69A0D	; code used at 8000
		STA		word_40		; code used at 8000
		LDA		off_69A0D+1	; code used at 8000
		STA		word_40+1	; code used at 8000
		JMP		sub_6A3AB	; code used at 8000
loc_69A03:				; CODE XREF: sub_699F1+3-j
		STA		byte_CE
		STA		byte_D2
		JSR		sub_6B347
		JMP		sub_6B3D8
off_69A0D:
		.WORD sub_69A0F		; DATA XREF: sub_699F1+5-r sub_699F1+A-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69A0F:				; DATA XREF: BANK4:off_69A0D-o
		JSR		sub_6B398	; ind code used	at 8000
		BCC		loc_69A18	; code used at 8000
		BNE		loc_69A18
		BEQ		loc_69A28
loc_69A18:				; CODE XREF: sub_69A0F+3-j sub_69A0F+5-j
		JSR		sub_6B2E6	; code used at 8000
		LDA		#$D		; code used at 8000
		JSR		sub_6A337	; code used at 8000
		BCC		loc_69A28	; code used at 8000
		JSR		sub_6A3D3
		JMP		sub_6A3CB
loc_69A28:				; CODE XREF: sub_69A0F+7-j
					; sub_69A0F+11-j
		JSR		sub_6B3D8	; code used at 8000
		JMP		sub_6A3CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69A2E:				; DATA XREF: BANK4:BE44-o
		JSR		sub_6B2A3
		BPL		sub_69A7A
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_69A79
loc_69A3B:				; CODE XREF: sub_69225+10-j
		AND		#7
		STA		byte_64
		JSR		sub_6B398
		BCC		loc_69A49
		BNE		loc_69A49
		JMP		loc_69244
loc_69A49:				; CODE XREF: sub_69225+1C-j
					; sub_69A2E+14-j sub_69A2E+16-j
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
loc_69A5E:				; CODE XREF: sub_69A2E+2A-j
		JSR		sub_6B3D8
		PLA
		RTS
loc_69A63:				; CODE XREF: sub_69A2E+2E-j
		JSR		_b4_s8
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		JSR		sub_6ADBF
		PLA
		TAX
		LDA		#0
		STA		byte_530,X
locret_69A79:				; CODE XREF: sub_69A2E+B-j
					; sub_69A2E+1E-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69A7A:				; CODE XREF: sub_69A2E+3-j
		JSR		sub_6B2DB
		JMP		loc_69230

; =============== S U B	R O U T	I N E =======================================
sub_69A80:				; DATA XREF: BANK4:BE46-o
		JSR		sub_6B2A3
		BMI		loc_69A99
		JSR		sub_6A61F
		BIT		byte_567
		BVC		loc_69A8E
		RTS
loc_69A8E:				; CODE XREF: sub_69A80+B-j
					; sub_69A80+3C-j
		JSR		sub_6B2B3
		STA		byte_CE
		JSR		_sram_bank0_sub8
		JMP		_b4_s6
loc_69A99:				; CODE XREF: sub_69A80+3-j
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
locret_69ABE:				; CODE XREF: sub_69A80+1F-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69ABF:				; CODE XREF: sub_6921D+5-j
					; DATA XREF: BANK4:BE48-o
		JSR		sub_6B2A3
		BPL		loc_69AD1
		LDA		off_69AD9
		STA		word_40
		LDA		off_69AD9+1
		STA		word_40+1
		JMP		sub_6A3AB
loc_69AD1:				; CODE XREF: sub_69ABF+3-j
		STA		byte_CE
		JSR		sub_6B2DB
		JMP		sub_691DF
off_69AD9:
		.WORD sub_69ADB		; DATA XREF: sub_69ABF+5-r sub_69ABF+A-r

; =============== S U B	R O U T	I N E =======================================
sub_69ADB:				; DATA XREF: BANK4:off_69AD9-o
		JSR		sub_69AE1
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69AE1:				; CODE XREF: sub_69ADB-p
		JSR		sub_6B398
		BCC		loc_69AEB
		BNE		loc_69AEB
		JMP		loc_691E9
loc_69AEB:				; CODE XREF: sub_691DF+7-j sub_69AE1+3-j
					; sub_69AE1+5-j
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
loc_69B03:				; CODE XREF: sub_69AE1+1E-j
		PHA
		LDA		byte_518,X
		SEC
		SBC		byte_59
		BCS		loc_69B0E
		LDA		#0
loc_69B0E:				; CODE XREF: sub_69AE1+29-j
		STA		byte_518,X
		PLA
		JSR		sub_6B2CF
		BRK
		.BYTE $3E, $F		; _syscall10
loc_69B18:				; CODE XREF: sub_69AE1+12-j
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_69B1B:				; DATA XREF: BANK4:BE4A-o
		JSR		sub_6B2A3
		BMI		sub_69B5F
		LDA		off_69B2C
		LDX		off_69B2C+1
		JSR		sub_6BBD0
		JMP		sub_694C1
off_69B2C:
		.WORD sub_69B2E		; DATA XREF: sub_69B1B+5-r sub_69B1B+8-r

; =============== S U B	R O U T	I N E =======================================
sub_69B2E:				; DATA XREF: BANK4:off_69B2C-o
		JSR		sub_69B34
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69B34:				; CODE XREF: sub_69B2E-p
		JSR		sub_6B347
		BCC		loc_69B3E
		BEQ		loc_69B3E
		JMP		loc_69B7E
loc_69B3E:				; CODE XREF: sub_69B34+3-j sub_69B34+5-j
					; sub_69B74+7-j
		JSR		sub_6B3D2
		JSR		_sram_bank0_sub12
		LDA		byte_6A9F,X
		ADC		word_4
		BCC		loc_69B54
		LDA		#$FF
		SBC		byte_6A9F,X
		STA		word_4
		LDA		#$FF
loc_69B54:				; CODE XREF: sub_69B34+15-j
		STA		byte_6A9F,X
		LDA		word_4
		JSR		sub_6B2CF
		BRK
		.BYTE $45, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69B5F:				; CODE XREF: sub_69B1B+3-j
		LDA		off_69B6C
		LDX		off_69B6C+1
		STA		word_40
		STX		word_40+1
		JMP		sub_6A3AB
off_69B6C:
		.WORD sub_69B6E		; DATA XREF: sub_69B5F-r sub_69B5F+3-r

; =============== S U B	R O U T	I N E =======================================
sub_69B6E:				; DATA XREF: BANK4:off_69B6C-o
		JSR		sub_69B74
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69B74:				; CODE XREF: sub_69B6E-p
		JSR		sub_6B398
		BCC		loc_69B7E
		BNE		loc_69B7E
		JMP		loc_69B3E
loc_69B7E:				; CODE XREF: sub_69B34+7-j sub_69B74+3-j
					; sub_69B74+5-j
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
loc_69B95:				; CODE XREF: sub_69B74+16-j
		STA		byte_518,X
		LDA		byte_59
		JSR		sub_6B2CF
		BRK
		.BYTE $45, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69BA0:				; CODE XREF: sub_6A0B4+12-j
					; DATA XREF: BANK4:BE4C-o BANK4:BE4E-o
					; BANK4:BE50-o
		JSR		sub_6BF22	; ind code used	at 8000
loc_69BA3:				; CODE XREF: sub_69443:loc_69450-j
					; sub_6AFF7+D-j
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_69BAD	; code used at 8000
		STA		byte_CE		; code used at 8000
		JMP		sub_6A5F7	; code used at 8000
loc_69BAD:				; CODE XREF: sub_69BA0+6-j
		LDA		byte_6A6F	; code used at 8000
		CMP		#$86       ; code used at 8000
		BNE		loc_69BD7	; code used at 8000
		JSR		sub_6A8B3	; code used at 8000
		JSR		_b4_s14		; code used at 8000
		AND		#7		; code used at 8000
		STA		byte_64		; code used at 8000
		LDA		byte_49		; code used at 8000
		SEC				; code used at 8000
		SBC		#$1A		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_69BDD,Y	; code used at 8000
		JSR		_b4_sF		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_69BDA,Y	; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		JMP		loc_6A42E	; code used at 8000
loc_69BD7:				; CODE XREF: sub_69BA0+12-j
		JMP		sub_69443
byte_69BDA:
		.BYTE $19,$46,$8C	; DATA XREF: sub_69BA0+2B-r
byte_69BDD:
		.BYTE  $A,$14,$28	; DATA XREF: sub_69BA0+24-r

; =============== S U B	R O U T	I N E =======================================
sub_69BE0:				; CODE XREF: sub_69453:loc_694B5-j
					; DATA XREF: BANK4:BE52-o BANK4:BE54-o
					; BANK4:BE56-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BMI		sub_69C03	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69BE5:				; CODE XREF: sub_6A079+7-j
		LDY		#0		; code used at 8000
loc_69BE7:				; CODE XREF: sub_69BE5+1B-j
		TYA				; code used at 8000
		PHA				; code used at 8000
		JSR		_b4_sB		; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		loc_69BFB	; code used at 8000
		JSR		sub_6BF22	; code used at 8000
		PLA				; code used at 8000
		STA		byte_CE		; code used at 8000
		PHA				; code used at 8000
		JSR		sub_6A5F7	; code used at 8000
loc_69BFB:				; CODE XREF: sub_69BE5+A-j
		PLA				; code used at 8000
		TAY				; code used at 8000
		INY				; code used at 8000
		CPY		#4		; code used at 8000
		BNE		loc_69BE7	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69C03:				; CODE XREF: sub_69BE0+3-j
		JSR		sub_6B2DB
		JMP		loc_6947E

; =============== S U B	R O U T	I N E =======================================
sub_69C09:				; DATA XREF: BANK4:BE58-o
		LDA		#$80 

; =============== S U B	R O U T	I N E =======================================
sub_69C0B:				; CODE XREF: sub_69370+A2-j
					; sub_69C81+2-j
		STA		byte_47		; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		BMI		loc_69C4C	; code used at 8000
		STA		byte_D2		; code used at 8000
		STA		byte_CE		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		BMI		loc_69C7A	; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		BPL		locret_69C7D	; code used at 8000
		LDA		byte_47		; code used at 8000
		BEQ		loc_69C2D	; code used at 8000
		LDA		#$80 
		JSR		sub_6A84F
		BCS		loc_69C7E
loc_69C2D:				; CODE XREF: sub_69C0B+19-j
		JSR		sub_69C62	; code used at 8000
		JSR		_sram_bank0_sub3 ; code	used at	8000
		LDA		byte_47		; code used at 8000
		BPL		loc_69C3B	; code used at 8000
		LSR		word_4+1
		ROR		word_4
loc_69C3B:				; CODE XREF: sub_69C0B+2A-j
		LDA		word_4		; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_D0		; code used at 8000
		JSR		_sram_bank0_sub4 ; code	used at	8000
		JSR		_b4_s1A		; code used at 8000
		JMP		_b4_s6		; code used at 8000
loc_69C4C:				; CODE XREF: sub_69C0B+5-j
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
sub_69C62:				; CODE XREF: sub_69C0B:loc_69C2D-p
		LDA		#$80       ; code used at 8000
		STA		byte_73C,X	; code used at 8000
		STA		byte_73D,X	; code used at 8000
		TXA				; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6A9B,X	; code used at 8000
		AND		#$F7       ; code used at 8000
		STA		byte_6A9B,X	; code used at 8000
		INC		byte_4C		; code used at 8000
		BRK
		.BYTE $3C, $F		; _syscall10
loc_69C7A:				; CODE XREF: sub_69C0B+10-j
					; sub_69C0B+50-j
		BRK
		.BYTE $40, $F		; _syscall10
locret_69C7D:				; CODE XREF: sub_69C0B+15-j
		RTS
loc_69C7E:				; CODE XREF: sub_69C0B+20-j
		BRK
		.BYTE $3D, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69C81:				; CODE XREF: sub_6A083+26-p
					; DATA XREF: BANK4:BE5A-o
		LDA		#0		; ind code used	at 8000
		JMP		sub_69C0B	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69C86:				; CODE XREF: sub_68DEC:loc_68DFD-j
					; sub_69081+12-j
					; DATA XREF: BANK4:BE5C-o
		JSR		sub_6B2A3	; ind code used	at 8000
		BPL		loc_69C98	; code used at 8000
		LDA		off_69CE5	; code used at 8000
		STA		word_40		; code used at 8000
		LDA		off_69CE5+1	; code used at 8000
		STA		word_40+1	; code used at 8000
		JMP		sub_6A3AB	; code used at 8000
loc_69C98:				; CODE XREF: sub_69C86+3-j
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69C9D:				; CODE XREF: sub_68BF0+16-p sub_690A3-p
		JSR		sub_6B347	; code used at 8000
		BCC		sub_69CA7	; code used at 8000
		BEQ		sub_69CA7
		JMP		loc_69CF7

; =============== S U B	R O U T	I N E =======================================
sub_69CA7:				; CODE XREF: sub_69C9D+3-j sub_69C9D+5-j
					; sub_69CED+7-j
		JSR		sub_6B3D2	; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		locret_69D1C	; code used at 8000
		TYA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		locret_69D1C	; code used at 8000
		LDA		byte_6A9B,Y	; code used at 8000
		AND		#8		; code used at 8000
		BNE		locret_69D1C	; code used at 8000
		LDA		#$60       ; code used at 8000
		JSR		sub_6A84F	; code used at 8000
		BCS		loc_69CDD	; code used at 8000
		LDA		byte_6A9B,Y	; code used at 8000
		ORA		#8		; code used at 8000
		STA		byte_6A9B,Y	; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		ORA		#3		; code used at 8000
		STA		byte_73C,X	; code used at 8000
		BRK
		.BYTE $19, $F7		; _syscall0F
		JMP		_b4_s6		; code used at 8000
loc_69CDD:				; CODE XREF: sub_69CA7+1E-j
		JSR		sub_6B2EF	; code used at 8000
		BNE		locret_69D1C	; code used at 8000
		BRK
		.BYTE $1A, $F		; _syscall10
off_69CE5:
		.WORD sub_69CE7		; DATA XREF: sub_69C86+5-r sub_6A13C-r
					; sub_69C86+A-r	sub_6A13C+5-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69CE7:				; DATA XREF: BANK4:off_69CE5-o
		JSR		sub_69CED	; ind code used	at 8000
		JMP		sub_6A3CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69CED:				; CODE XREF: sub_69CE7-p
		JSR		sub_6B398	; code used at 8000
		BCC		loc_69CF7	; code used at 8000
		BNE		loc_69CF7
		JMP		sub_69CA7
loc_69CF7:				; CODE XREF: sub_69C9D+7-j sub_69CED+3-j
					; sub_69CED+5-j
		JSR		sub_6B5B7	; code used at 8000
		JSR		sub_6B95A	; code used at 8000
		BNE		locret_69D1C	; code used at 8000
		LDA		#6		; code used at 8000
		JSR		sub_6A337	; code used at 8000
		BCC		sub_69D1D	; code used at 8000
		BRK
		.BYTE $19, $F7		; _syscall0F
		JSR		sub_6A35A	; code used at 8000
		LDA		byte_531,X	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_531,X	; code used at 8000
		LDA		byte_530,X	; code used at 8000
		ORA		#3		; code used at 8000
		STA		byte_530,X	; code used at 8000
locret_69D1C:				; CODE XREF: sub_69CA7+6-j
					; sub_69CA7+10-j sub_69CA7+17-j
					; sub_69CA7+39-j sub_69CED+10-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69D1D:				; CODE XREF: sub_69CED+17-j
		BRK
		.BYTE $1A, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69D20:				; DATA XREF: BANK4:BE5E-o
		LDA		off_69D2D
		STA		word_3E
		LDA		off_69D2D+1
		STA		word_3E+1
		JMP		sub_694C1
off_69D2D:
		.WORD sub_69D2F		; DATA XREF: sub_69D20-r sub_69D20+5-r

; =============== S U B	R O U T	I N E =======================================
sub_69D2F:				; DATA XREF: BANK4:off_69D2D-o
		JSR		sub_69D35
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69D35:				; CODE XREF: sub_69D2F-p
		JSR		sub_6B347
		BCC		loc_69D3D
		BEQ		loc_69D3D
		RTS
loc_69D3D:				; CODE XREF: sub_69D35+3-j sub_69D35+5-j
					; sub_6AEFE-p
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
		BRK
		.BYTE $1C, $F		; _syscall10
loc_69D5C:				; CODE XREF: sub_69D35+15-j
		BRK
		.BYTE $24, $F		; _syscall10
locret_69D5F:				; CODE XREF: sub_69D35+E-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69D60:				; CODE XREF: sub_690A9+19-j
					; DATA XREF: BANK4:BE60-o
		JSR		sub_6B2A3	; code used at 8000
		BPL		loc_69D72	; code used at 8000
		LDA		off_69DD7	; code used at 8000
		STA		word_40		; code used at 8000
		LDA		off_69DD7+1	; code used at 8000
		STA		word_40+1	; code used at 8000
		JMP		sub_6A3AB	; code used at 8000
loc_69D72:				; CODE XREF: sub_69D60+3-j
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69D77:				; CODE XREF: sub_690C7-p
		JSR		sub_6B347	; code used at 8000
		BCC		loc_69D81	; code used at 8000
		BEQ		loc_69D81
		JMP		loc_69DB9
loc_69D81:				; CODE XREF: sub_69D77+3-j sub_69D77+5-j
					; sub_69DAF+7-j
		JSR		sub_6B3D2	; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		locret_69DAB	; code used at 8000
		JSR		_sram_bank0_sub6 ; code	used at	8000
		BEQ		loc_69DAC	; code used at 8000
		LDA		byte_CE		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		#$20       ; code used at 8000
		BNE		locret_69DAB	; code used at 8000
		LDA		#$60       ; code used at 8000
		JSR		sub_6A84F	; code used at 8000
		BCS		loc_69DAC	; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_73C,X	; code used at 8000
		BRK
		.BYTE $41, $F7		; _syscall0F
locret_69DAB:				; CODE XREF: sub_69D77+10-j
					; sub_69D77+20-j sub_69DAF+10-j
		RTS				; code used at 8000
loc_69DAC:				; CODE XREF: sub_69D77+15-j
					; sub_69D77+27-j sub_69DAF+17-j
		JMP		sub_6B3D8	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69DAF:				; CODE XREF: sub_69DD9-p
		JSR		sub_6B398	; code used at 8000
		BCC		loc_69DB9	; code used at 8000
		BNE		loc_69DB9
		JMP		loc_69D81
loc_69DB9:				; CODE XREF: sub_69D77+7-j sub_69DAF+3-j
					; sub_69DAF+5-j
		JSR		sub_6B5B7	; code used at 8000
		JSR		sub_6B901	; code used at 8000
		BCS		locret_69DAB	; code used at 8000
		LDA		#7		; code used at 8000
		JSR		sub_6A337	; code used at 8000
		BCC		loc_69DAC	; code used at 8000
		BRK
		.BYTE $41, $F7		; _syscall0F
		JSR		sub_6A35A	; code used at 8000
		LDA		byte_530,X	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_530,X	; code used at 8000
		RTS				; code used at 8000
off_69DD7:
		.WORD sub_69DD9		; DATA XREF: sub_69D60+5-r sub_69D60+A-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69DD9:				; DATA XREF: BANK4:off_69DD7-o
		JSR		sub_69DAF	; ind code used	at 8000
		JMP		sub_6A3CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69DDF:				; CODE XREF: sub_69111+19-j
					; DATA XREF: BANK4:BE62-o
		JSR		sub_6B2A3	; code used at 8000
		BPL		loc_69DF1	; code used at 8000
		LDA		off_69E59	; code used at 8000
		STA		word_40		; code used at 8000
		LDA		off_69E59+1	; code used at 8000
		STA		word_40+1	; code used at 8000
		JMP		sub_6A3AB	; code used at 8000
loc_69DF1:				; CODE XREF: sub_69DDF+3-j
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69DF6:				; CODE XREF: sub_6912F-p
		JSR		sub_6B347	; code used at 8000
		BCC		loc_69E00	; code used at 8000
		BEQ		loc_69E00
		JMP		loc_69E38
loc_69E00:				; CODE XREF: sub_69DF6+3-j sub_69DF6+5-j
					; sub_69E2E+7-j
		JSR		sub_6B3D2	; code used at 8000
		JSR		sub_68F0C	; code used at 8000
		BPL		locret_69E24	; code used at 8000
		TYA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		AND		#$10		; code used at 8000
		BNE		locret_69E24	; code used at 8000
		LDA		#$A0       ; code used at 8000
		JSR		sub_6A84F	; code used at 8000
		BCS		loc_69E25	; code used at 8000
		LDA		byte_73C,X	; code used at 8000
		ORA		#$10		; code used at 8000
		STA		byte_73C,X	; code used at 8000
		BRK
		.BYTE $2F, $F7		; _syscall0F
locret_69E24:				; CODE XREF: sub_69DF6+10-j
					; sub_69DF6+1A-j
		RTS				; code used at 8000
loc_69E25:				; CODE XREF: sub_69DF6+21-j
		JMP		sub_6B3D8	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69E28:				; DATA XREF: BANK4:off_69E59-o
		JSR		sub_69E2E	; ind code used	at 8000
		JMP		sub_6A3CB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69E2E:				; CODE XREF: sub_69E28-p
		JSR		sub_6B398	; code used at 8000
		BCC		loc_69E38	; code used at 8000
		BNE		loc_69E38
		JMP		loc_69E00
loc_69E38:				; CODE XREF: sub_69DF6+7-j sub_69E2E+3-j
					; sub_69E2E+5-j
		JSR		sub_6B5B7	; code used at 8000
		JSR		loc_6B90F	; code used at 8000
		BCS		locret_69E55	; code used at 8000
		LDA		#9		; code used at 8000
		JSR		sub_6A337	; code used at 8000
		BCC		loc_69E56	; code used at 8000
		BRK
		.BYTE $2F, $F7		; _syscall0F
		JSR		sub_6A35A	; code used at 8000
		LDA		byte_530,X	; code used at 8000
		ORA		#$10		; code used at 8000
		STA		byte_530,X	; code used at 8000
locret_69E55:				; CODE XREF: sub_69E2E+10-j
		RTS				; code used at 8000
loc_69E56:				; CODE XREF: sub_69E2E+17-j
		JMP		sub_6B3D8
off_69E59:
		.WORD sub_69E28		; DATA XREF: sub_69DDF+5-r sub_69DDF+A-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69E5B:				; DATA XREF: BANK4:BE64-o
		LDA		byte_6A6B	; ind code used	at 8000
		BNE		loc_69E7C	; code used at 8000
		STA		byte_50		; code used at 8000
		JSR		_b4_s5		; code used at 8000
		BRK
		.BYTE $12, $17		; ofs 0x0009800c, -> dst _b6_s6
		BCC		loc_69E7C	; code used at 8000
		LDA		byte_60B7	; code used at 8000
		AND		#$DF       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_32		; code used at 8000
		LDX		#$FB       ; code used at 8000
		TXS				; code used at 8000
		JMP		loc_174E92	; code used at 8000
loc_69E7C:				; CODE XREF: sub_69E5B+3-j sub_69E5B+D-j
		BRK
		.BYTE $40, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69E7F:				; CODE XREF: sub_691C0-j
					; DATA XREF: BANK4:BE66-o
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
sub_69E98:				; CODE XREF: sub_69173+19-j
					; sub_69E7F+12-j sub_69E7F+14-j
					; sub_6A0E9-p
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
		JMP		_b4_s8
loc_69EBE:				; CODE XREF: sub_69E98+D-j
		JMP		sub_6B3D8
loc_69EC1:				; CODE XREF: sub_69E98+17-j
		BRK
		.BYTE $85, $F7		; _syscall0F
locret_69EC4:				; CODE XREF: sub_69E98+6-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69EC5:				; CODE XREF: sub_69E7F+3-j
		JSR		sub_6B2DB
		JMP		loc_6917E

; =============== S U B	R O U T	I N E =======================================
sub_69ECB:				; DATA XREF: BANK4:BE6A-o
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
		BRK
		.BYTE $47, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69EF8:				; DATA XREF: BANK4:BE6C-o
		LDA		byte_566
		AND		#$3F 
		ORA		#$C0 
		STA		byte_566
		BRK
		.BYTE $54, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69F05:				; DATA XREF: BANK4:BE6E-o
		LDA		#0		; ind code used	at 8000
		STA		byte_47		; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		BPL		loc_69F1D	; code used at 8000
		JSR		sub_6A8B3	; code used at 8000
		JSR		_b4_s14		; code used at 8000
		BCC		locret_69F63	; code used at 8000
loc_69F16:				; CODE XREF: sub_690D8:loc_690E6-j
		AND		#7		; code used at 8000
		STA		byte_64		; code used at 8000
		JMP		sub_6A74B	; code used at 8000
loc_69F1D:				; CODE XREF: sub_69F05+7-j
		JSR		sub_6B2DB
		JMP		sub_690D8

; =============== S U B	R O U T	I N E =======================================
sub_69F23:				; CODE XREF: sub_690E9+19-j
					; DATA XREF: BANK4:BE70-o
		LDA		#$FF		; code used at 8000
		STA		byte_47		; code used at 8000
		JSR		sub_6B2A3	; code used at 8000
		BPL		loc_69F39	; code used at 8000
		LDA		off_69F41	; code used at 8000
		STA		word_40		; code used at 8000
		LDA		off_69F41+1	; code used at 8000
		STA		word_40+1	; code used at 8000
		JMP		sub_6A3AB	; code used at 8000
loc_69F39:				; CODE XREF: sub_69F23+7-j
		STA		byte_CE
		JSR		sub_6B2DB
		JMP		sub_6A6DF
off_69F41:
		.WORD sub_6A78A		; DATA XREF: sub_69F23+9-r sub_69F23+E-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_69F43:				; DATA XREF: BANK4:BE72-o
		LDA		#0
		STA		byte_47
		JSR		sub_6B2A3
		BMI		loc_69F51
		STA		byte_CE
		JMP		sub_6A790
loc_69F51:				; CODE XREF: sub_69F43+7-j
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		byte_64
		JSR		sub_68F16
		BPL		locret_69F63
		JMP		sub_6A7BC
locret_69F63:				; CODE XREF: sub_69F05+F-j
					; sub_69F43+1B-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69F64:				; CODE XREF: sub_6933E+3-j
					; DATA XREF: BANK4:BE74-o
		LDA		#$FF
		STA		byte_47
		JSR		sub_6B2A3
		BMI		loc_69F7A
		LDA		off_69F7D
		STA		word_3E
		LDA		off_69F7D+1
		STA		word_3E+1
		JMP		sub_694C1
loc_69F7A:				; CODE XREF: sub_69F64+7-j
		JMP		loc_6932C
off_69F7D:
		.WORD sub_69F7F		; DATA XREF: sub_69F64+9-r sub_69F64+E-r

; =============== S U B	R O U T	I N E =======================================
sub_69F7F:				; DATA XREF: BANK4:off_69F7D-o
		JSR		sub_6A790
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_69F85:				; DATA XREF: BANK4:BE78-o
		JSR		sub_6B2B3
		STA		byte_D2
		ASL
		TAX
		LDA		byte_73D,X
		ORA		#$F
		STA		byte_73D,X
		BRK
		.BYTE $48, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_69F97:				; DATA XREF: BANK4:BE7A-o
		LDA		#0
		STA		byte_D2
		JSR		_b4_sB
		BRK
		.BYTE $49, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
sub_69FA1:
		LDY		#0

; =============== S U B	R O U T	I N E =======================================
sub_69FA3:				; CODE XREF: sub_69FA3+1F-j
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
loc_69FBD:				; CODE XREF: sub_69FA3+9-j
					; sub_69FA3+10-j
		PLA
		TAY
		INY
		CPY		#4
		BNE		sub_69FA3
locret_69FC4:				; CODE XREF: sub_69FC5+14-j
					; sub_69FC5+38-j sub_69FC5+47-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69FC5:				; DATA XREF: BANK4:BE7C-o
		JSR		sub_6B2A3
		BMI		loc_69FE6
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_69FD3
		BNE		loc_69FF7
loc_69FD3:				; CODE XREF: sub_69FC5+A-j
					; sub_69FC5+30-j
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_69FC4
		LDA		byte_73C,X
		ORA		#8
		STA		byte_73C,X
		BRK
		.BYTE $4A, $F		; _syscall10
loc_69FE6:				; CODE XREF: sub_69FC5+3-j
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		byte_64
		JSR		sub_6B398
		BCC		loc_69FF7
		BEQ		loc_69FD3
loc_69FF7:				; CODE XREF: sub_69FC5+C-j
					; sub_69FC5+2E-j
		JSR		sub_6B5B7
		JSR		sub_68F16
		BPL		locret_69FC4
		LDA		#1		; data used at 8000
		LDX		byte_64
		BEQ		loc_6A009
loc_6A005:				; CODE XREF: sub_69FC5+42-j
		ASL
		DEX
		BNE		loc_6A005
loc_6A009:				; CODE XREF: sub_69FC5+3E-j
		BIT		byte_565
		BNE		locret_69FC4
		ORA		byte_565
		STA		byte_565
		BRK
		.BYTE $4A, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6A017:				; DATA XREF: BANK4:BE7E-o
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
loc_6A038:				; CODE XREF: sub_6A017+B-j
		JSR		sub_6ACBE
		AND		#$F
		CMP		#$C
		BCS		sub_6A079
		JMP		sub_6A23B

; =============== S U B	R O U T	I N E =======================================
sub_6A044:				; DATA XREF: BANK4:off_6A241-o
		BRK
		.BYTE $57, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
; unused
sub_6A047:
		LDY		#0

; =============== S U B	R O U T	I N E =======================================
sub_6A049:				; CODE XREF: sub_6A049+14-j
		TYA
		PHA
		STY		byte_D2
		JSR		sub_68F0C
		BPL		loc_6A058
		JSR		_b4_sB
		BRK
		.BYTE $89, $F7		; _syscall0F
loc_6A058:				; CODE XREF: sub_6A049+7-j
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
		.WORD sub_6A070		; DATA XREF: sub_6A049+16-r
					; sub_6A049+1B-r

; =============== S U B	R O U T	I N E =======================================
sub_6A070:				; DATA XREF: BANK4:off_6A06E-o
		BRK
		.BYTE $50, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
; unused
sub_6A073:
		JSR		sub_6ADBF
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A079:				; CODE XREF: sub_6A017+28-j
					; sub_6A083+C-j
					; DATA XREF: BANK4:A243-o
		LDA		#$1F
		LDX		byte_51
		STA		byte_558,X
		JMP		sub_69BE5

; =============== S U B	R O U T	I N E =======================================
sub_6A083:				; DATA XREF: BANK4:A245-o
		JSR		_sram_bank0_sub33
		LDA		word_4
		PHA
		JSR		_sram_b0_s31
		PLA
		CMP		word_4
		BEQ		sub_6A079
		LDY		#0
loc_6A093:				; CODE XREF: sub_6A083+2E-j
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
loc_6A0AC:				; CODE XREF: sub_6A083+19-j
					; sub_6A083+1E-j
		PLA
		TAY
		INY
		CPY		#4
		BNE		loc_6A093
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A0B4:				; DATA XREF: BANK4:A247-o
		LDA		#$F
		JSR		_b4_s23
		JSR		_b4_s13
		LDX		byte_51
		STA		byte_54C,X
		LDA		#$1F
		STA		byte_558,X
		JMP		sub_69BA0

; =============== S U B	R O U T	I N E =======================================
sub_6A0C9:				; DATA XREF: BANK4:A249-o
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
		.WORD sub_6A0E9		; DATA XREF: sub_6A0C9-r sub_6A0C9+5-r
off_6A0E7:
		.WORD sub_6A0EF		; DATA XREF: sub_6A0C9+F-r
					; sub_6A0C9+14-r

; =============== S U B	R O U T	I N E =======================================
sub_6A0E9:				; DATA XREF: BANK4:off_6A0E5-o
		JSR		sub_69E98
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A0EF:				; DATA XREF: BANK4:off_6A0E7-o
		JSR		loc_6918F
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6A0F5:				; DATA XREF: BANK4:A24B-o BANK4:A24D-o
		LDA		off_6A104
		STA		word_40
		LDA		off_6A104+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6A104:
		.WORD sub_6A106		; DATA XREF: sub_6A0F5-r sub_6A0F5+5-r

; =============== S U B	R O U T	I N E =======================================
sub_6A106:				; DATA XREF: BANK4:off_6A104-o
		JSR		sub_6A10C
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A10C:				; CODE XREF: sub_6A106-p
		BRK
		.BYTE $2C, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
sub_6A10F:
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		LDA		#$40 
		JSR		sub_6B307
		JSR		sub_6ADB6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A121:				; DATA XREF: BANK4:A24F-o
		LDA		byte_568
		AND		#$10
		BNE		sub_6A134
		BRK
		.BYTE $58, $F7		; _syscall0F
		LDA		byte_568
		ORA		#$10
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A134:				; CODE XREF: sub_6A121+5-j
					; DATA XREF: BANK4:A251-o
		BRK
		.BYTE $59, $F7		; _syscall0F
		LDA		#$20 
		JMP		sub_6B2F7

; =============== S U B	R O U T	I N E =======================================
sub_6A13C:				; DATA XREF: BANK4:A253-o
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
sub_6A158:				; DATA XREF: BANK4:A255-o
		BRK
		.BYTE $5A, $F7		; _syscall0F
		JSR		sub_6B2B3
		ORA		#$C
		STA		word_4
		LDA		byte_567
		AND		#$F0 
		ORA		word_4
		STA		byte_567
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A16D:				; DATA XREF: BANK4:A257-o
		BRK
		.BYTE $8B, $F7		; _syscall0F
		LDA		#0
		STA		byte_42
loc_6A174:				; CODE XREF: sub_6A16D+1B-j
		LDX		byte_42
		STX		byte_CF
		JSR		sub_6A18E
		BMI		loc_6A182
		STX		byte_D0
		JSR		_sram_bank0_sub3B
loc_6A182:				; CODE XREF: sub_6A16D+E-j
		INC		byte_42
		LDA		byte_42
		CMP		#4
		BNE		loc_6A174
		JSR		_b4_s6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A18E:				; CODE XREF: sub_6A16D+B-p
		LDA		#0
		STA		byte_55
		STA		byte_56
		STA		byte_57
		DEC		byte_57
loc_6A198:				; CODE XREF: sub_6A18E+1E-j
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		BPL		loc_6A1A9
		LDA		byte_56
		CMP		byte_71D,Y
		BCC		loc_6A1B1
		BEQ		loc_6A1C0
loc_6A1A9:				; CODE XREF: sub_6A18E+10-j
					; sub_6A18E+2F-j sub_6A18E+37-j
		INX
		CPX		#4
		BCC		loc_6A198
		LDX		byte_57
		RTS
loc_6A1B1:				; CODE XREF: sub_6A18E+17-j
					; sub_6A18E+39-j
		LDA		byte_71C,Y
		STA		byte_55
		LDA		byte_71D,Y
		STA		byte_56
		STX		byte_57
		JMP		loc_6A1A9
loc_6A1C0:				; CODE XREF: sub_6A18E+19-j
		LDA		byte_55
		CMP		byte_71C,Y
		BCS		loc_6A1A9
		BCC		loc_6A1B1

; =============== S U B	R O U T	I N E =======================================
sub_6A1C9:				; DATA XREF: BANK4:A259-o
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
		.WORD sub_6A1E2		; DATA XREF: sub_6A1C9+8-r sub_6A1C9+D-r

; =============== S U B	R O U T	I N E =======================================
sub_6A1E2:				; DATA XREF: BANK4:off_6A1E0-o
		JSR		sub_6A1E8
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A1E8:				; CODE XREF: sub_6A1E2-p
		BRK
		.BYTE $5D, $F7		; _syscall0F
		JMP		sub_6ADC8

; =============== S U B	R O U T	I N E =======================================
sub_6A1EE:				; DATA XREF: BANK4:A25B-o
		BRK
		.BYTE $5B, $F7		; _syscall0F
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
sub_6A202:				; DATA XREF: BANK4:A25D-o
		LDA		off_6A211
		STA		word_40
		LDA		off_6A211+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6A211:
		.WORD sub_6A213		; DATA XREF: sub_6A202-r sub_6A202+5-r

; =============== S U B	R O U T	I N E =======================================
sub_6A213:				; DATA XREF: BANK4:off_6A211-o
		LDA		#$FF
		JSR		loc_6A693
		LDA		byte_65
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		JSR		_sram_bank0_sub8
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A226:				; DATA XREF: BANK4:A25F-o
		LDA		off_6A233
		STA		word_3E
		LDA		off_6A233+1
		STA		word_3E+1
		JMP		sub_694C1
off_6A233:
		.WORD sub_6A235		; DATA XREF: sub_6A226-r sub_6A226+5-r

; =============== S U B	R O U T	I N E =======================================
sub_6A235:				; DATA XREF: BANK4:off_6A233-o
		JSR		sub_6A30D
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6A23B:				; CODE XREF: sub_6A017+2A-j
					; DATA XREF: BANK4:A261-o
		BRK
		.BYTE $8C, $F7		; _syscall0F
		JMP		_b4_s5
off_6A241:
		.WORD sub_6A044		; DATA XREF: sub_6A017+14-r
					; sub_6A017+19-r
		.WORD sub_6A079
		.WORD sub_6A083
		.WORD sub_6A0B4
		.WORD sub_6A0C9
		.WORD sub_6A0F5
		.WORD sub_6A0F5
		.WORD sub_6A121
		.WORD sub_6A134
		.WORD sub_6A13C
		.WORD sub_6A158
		.WORD sub_6A16D
		.WORD sub_6A1C9
		.WORD sub_6A1EE
		.WORD sub_6A202
		.WORD sub_6A226
		.WORD sub_6A23B

; =============== S U B	R O U T	I N E =======================================
sub_6A263:				; DATA XREF: BANK4:BE68-o
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
loc_6A280:				; CODE XREF: sub_6A263+17-j
		LDA		#$43 
loc_6A282:				; CODE XREF: sub_6A263+1B-j
		JSR		_b4_s8
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
		JSR		_sram_bank0_sub18
		PLA
		TAX
		LDA		word_4
		STA		byte_6AA3,X
		LDA		word_4+1
		STA		byte_6AA4,X
		TXA
		PHA
		JSR		_sram_bank0_sub16
		PLA
		TAX
		LDA		word_4
		STA		byte_6AAB,X
		LDA		word_4+1
		STA		byte_6AAC,X
		RTS
loc_6A2C5:				; CODE XREF: sub_6A263+3-j
		BRK
		.BYTE $40, $F		; _syscall10
loc_6A2C8:				; CODE XREF: sub_6A263+13-j
		BRK
		.BYTE $86, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6A2CB:				; DATA XREF: BANK4:BE80-o
		JSR		sub_6B2A3
		BMI		loc_6A2F7
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_6A2D9
		BNE		locret_6A2F6
loc_6A2D9:				; CODE XREF: sub_6A2CB+A-j
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6A2F6
		LDA		byte_73D,X
		AND		#$20 
		BEQ		loc_6A333
		LDA		byte_73D,X
		AND		#$DF 
		STA		byte_73D,X
		BRK
		.BYTE $44, $F7		; _syscall0F
		JMP		_b4_s6
locret_6A2F6:				; CODE XREF: sub_6A2CB+C-j
					; sub_6A2CB+14-j sub_6A2FF+C-j
					; sub_6A30D+6-j
		RTS
loc_6A2F7:				; CODE XREF: sub_6A2CB+3-j
		STA		byte_64
		JSR		sub_6B398
		JMP		loc_6A333

; =============== S U B	R O U T	I N E =======================================
sub_6A2FF:				; DATA XREF: BANK4:BE82-o
		JSR		sub_6B2A3
		BMI		loc_6A333
		STA		byte_CE
		JSR		sub_6B347
		BCC		sub_6A30D
		BNE		locret_6A2F6

; =============== S U B	R O U T	I N E =======================================
sub_6A30D:				; CODE XREF: sub_6A235-p sub_6A2FF+A-j
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
loc_6A32D:				; CODE XREF: sub_6A30D+28-j
		JSR		_b4_s8
		JMP		_b4_s6
loc_6A333:				; CODE XREF: sub_6A2CB+1B-j
					; sub_6A2CB+31-j sub_6A2FF+3-j
					; sub_6A30D+D-j
		LDA		#$40 
		BNE		loc_6A32D

; =============== S U B	R O U T	I N E =======================================
sub_6A337:				; CODE XREF: sub_69931+5-p
					; sub_69931+15-p sub_699A0+F-p
					; sub_69A0F+E-p	sub_69A2E+27-p
					; sub_69AE1+F-p	sub_69CED+14-p
					; sub_69DAF+14-p sub_69E2E+14-p
					; sub_69E98+A-p	sub_6A3F8:loc_6A423-p
					; sub_6A676+11-p sub_6A74B+2A-p
					; sub_6B04B+1E-p sub_6B0E5+44-p
					; sub_6B1E8+39-p
		STA		byte_65		; code used at a000
		LDA		byte_6A6B	; code used at a000
		BNE		loc_6A345	; code used at a000
		LDA		byte_567	; code used at a000
		AND		#$10		; code used at a000
		BNE		loc_6A358	; code used at a000
loc_6A345:				; CODE XREF: sub_6A337+5-j
		JSR		sub_6B994	; code used at a000
		BEQ		loc_6A358	; code used at a000
		LDA		byte_59		; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_6A356	; code used at a000
		JSR		sub_6ACBE	; code used at a000
		CMP		byte_59		; code used at a000
		RTS				; code used at a000
loc_6A356:				; CODE XREF: sub_6A337+17-j
		CLC				; code used at a000
		RTS				; code used at a000
loc_6A358:				; CODE XREF: sub_6A337+C-j
					; sub_6A337+11-j
		SEC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A35A:				; CODE XREF: sub_69CED+1C-p
					; sub_69DAF+1C-p sub_69E2E+1C-p
					; sub_69E98+F-p
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A35F:				; CODE XREF: sub_68E96+19-p
					; sub_68EC7+19-p sub_68F21+5-p
					; sub_68FF8+5-p	sub_690CD+5-p
					; sub_69135+5-p	sub_69173+5-p
					; sub_69225+5-p	sub_692B7+5-p
					; sub_69322+7-p	sub_6934C+7-p
					; sub_69370+5-p	sub_69415+25-p
					; sub_69453+25-p sub_694B8+3-p
		JSR		sub_6B2B3	; code used at a000
		STA		byte_64		; code used at a000
		LDY		byte_558,X	; code used at a000
		LDA		byte_6BD82-$13,Y ; code	used at	a000
		STA		byte_65		; code used at a000
		JSR		sub_6B6E3	; code used at a000
		LDA		byte_59		; code used at a000
		CMP		byte_65		; code used at a000
		BCS		loc_6A37D	; code used at a000
		STA		byte_64		; code used at a000
		BRK
		.BYTE $20, $F7		; _syscall0F
		JMP		loc_6A38F	; code used at a000
loc_6A37D:				; CODE XREF: sub_6A35F+14-j
		JSR		sub_6B70B	; code used at a000
		JSR		sub_6B2B3	; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_530,X	; code used at a000
		AND		#$20       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A38A:				; CODE XREF: sub_6A39F+A-j
		BEQ		loc_6A392	; code used at a000
		BRK
		.BYTE $1E, $F7		; _syscall0F
loc_6A38F:				; CODE XREF: sub_6A35F+1B-j
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000
loc_6A392:				; CODE XREF: sub_6A38A-j
		LDA		byte_568	; code used at a000
		AND		#$10		; code used at a000
		BEQ		locret_6A39E	; code used at a000
		BRK
		.BYTE $81, $F7		; _syscall0F
		PLA				; code used at a000
		PLA				; code used at a000
locret_6A39E:				; CODE XREF: sub_6A38A+D-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A39F:				; CODE XREF: sub_69782+25-p
		JSR		sub_6B2B3	; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_73C,X	; code used at a000
		AND		#$20       ; code used at a000
		BPL		sub_6A38A	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A3AB:				; CODE XREF: sub_69322+19-j
					; sub_6995B+8-j	sub_699F1+F-j
					; sub_69ABF+F-j	sub_69B5F+A-j
					; sub_69C86+F-j	sub_69D60+F-j
					; sub_69DDF+F-j	sub_69F23+13-j
		JSR		sub_6B2A3	; code used at a000
		JSR		sub_6A8B3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A3B1:				; CODE XREF: sub_6934C+1B-j
					; sub_6A049+22-j sub_6A0C9+C-p
					; sub_6A0F5+C-j	sub_6A13C+C-p
					; sub_6A1C9+14-j sub_6A202+C-j
					; sub_6AF34+18-j sub_6B008+11-j
		STA		byte_47		; code used at a000
		LDY		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A3B5:				; CODE XREF: sub_6A3CB+5-j
		TYA				; code used at a000
		PHA				; code used at a000
		LSR		byte_47		; code used at a000
		BCS		sub_6A3CB	; code used at a000
		STY		byte_64		; code used at a000
		JSR		sub_68F16	; code used at a000
		BPL		sub_6A3CB	; code used at a000
		JSR		sub_6B5B7	; code used at a000
		JSR		_b4_sB		; code used at a000
		JMP		(word_40)	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A3CB:				; CODE XREF: sub_69346+3-j sub_6994F+3-j
					; sub_69A0F+16-j sub_69A0F+1C-j
					; sub_69ADB+3-j	sub_69B6E+3-j
					; sub_69CE7+3-j	sub_69DD9+3-j
					; sub_69E28+3-j	sub_6A073+3-j
					; sub_6A0E9+3-j	sub_6A106+3-j
					; sub_6A1E2+3-j	sub_6A213+10-j
					; sub_6A3B5+4-j	sub_6A3B5+B-j
					; sub_6A78A+3-j	sub_6AF5C+6-j
					; sub_6B01E+6-j
		PLA				; code used at a000
		TAY				; code used at a000
		INY				; code used at a000
		CPY		#8		; code used at a000
		BNE		sub_6A3B5	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A3D3:				; CODE XREF: sub_69931:loc_6993B-j
					; sub_69A0F+13-p
		LDA		#$FF		; code used at a000
		STA		byte_65		; code used at a000
		STA		byte_66		; code used at a000
		JSR		sub_6B697	; code used at a000
		JSR		sub_6B5B7	; code used at a000
		LDA		#$40       ; code used at a000
		JSR		sub_6B307	; code used at a000
		LDA		byte_568	; code used at a000
		AND		#1		; code used at a000
		BEQ		loc_6A3F1	; code used at a000
		BRK
		.BYTE $88, $F7		; _syscall0F
		JMP		sub_6ADBF
loc_6A3F1:				; CODE XREF: sub_6A3D3+16-j
		BRK
		.BYTE $3F, $F7		; _syscall0F
		JSR		sub_6ADB6	; code used at a000
locret_6A3F7:				; CODE XREF: sub_6A3F8+D-j
					; sub_6A3F8+3D-j sub_6A3F8+42-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A3F8:				; CODE XREF: sub_69840+41-p
					; sub_69840+70-j sub_69840+95-p
		JSR		sub_6B398	; code used at a000
		BCC		loc_6A402	; code used at a000
		BNE		loc_6A402
		JMP		loc_6A58C
loc_6A402:				; CODE XREF: sub_6A3F8+3-j sub_6A3F8+5-j
					; sub_6A57F+A-j
		JSR		sub_68F16	; code used at a000
		BPL		locret_6A3F7	; code used at a000
		LDA		byte_49		; code used at a000
		CMP		#9		; code used at a000
		BCC		loc_6A419	; code used at a000
		CMP		#$D		; code used at a000
		BCC		loc_6A41D	; code used at a000
		CMP		#$10		; code used at a000
		BCC		loc_6A421	; code used at a000
		LDA		#3
		BNE		loc_6A423
loc_6A419:				; CODE XREF: sub_6A3F8+13-j
		LDA		#0		; code used at a000
		BEQ		loc_6A423	; code used at a000
loc_6A41D:				; CODE XREF: sub_6A3F8+17-j
		LDA		#1		; code used at a000
		BNE		loc_6A423	; code used at a000
loc_6A421:				; CODE XREF: sub_6A3F8+1B-j
		LDA		#2		; code used at a000
loc_6A423:				; CODE XREF: sub_6A3F8+1F-j
					; sub_6A3F8+23-j sub_6A3F8+27-j
		JSR		sub_6A337	; code used at a000
		BCS		loc_6A42E	; code used at a000
		JSR		sub_6B5B7	; code used at a000
		JMP		sub_6B3D8	; code used at a000
loc_6A42E:				; CODE XREF: sub_68B3B+72-j
					; sub_69604:loc_696DC-j
					; sub_697DE:loc_6982C-p	sub_69BA0+34-j
					; sub_6A3F8+2E-j sub_6A4E4+5B-j
					; sub_6B04B+23-j
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_531,X	; code used at a000
		BPL		locret_6A3F7	; code used at a000
		JSR		sub_68F16	; code used at a000
		BPL		locret_6A3F7	; code used at a000
		JSR		sub_6B5B7	; code used at a000
		LDA		byte_575	; code used at a000
		BPL		loc_6A467	; code used at a000
		JSR		sub_6ACBE	; code used at a000
		CMP		#$20       ; code used at a000
		BCS		loc_6A45F	; code used at a000
		LDA		byte_6A6B	; code used at a000
		BNE		loc_6A45F	; code used at a000
		BRK
		.BYTE $99, $2F		; _syscall12
		BRK
		.BYTE $7D, $F7		; _syscall0F
		BRK
		.BYTE $E, $F7		; _syscall0F
		JSR		sub_6ADB6	; code used at a000
		JMP		_b4_s5		; code used at a000
loc_6A45F:				; CODE XREF: sub_6A3F8+51-j
					; sub_6A3F8+56-j
		LDA		#1		; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
loc_6A467:				; CODE XREF: sub_6A3F8+4A-j
		LDA		byte_64		; code used at a000
		ASL		; code used as ind data	at a000
		TAX				; code used at a000
		LDA		byte_531,X	; code used at a000
		AND		#$40       ; code used at a000
		BEQ		loc_6A478	; code used at a000
		LSR		word_4+1	; code used at a000
		ROR		word_4		; code used at a000
		INC		word_4		; code used at a000
loc_6A478:				; CODE XREF: sub_6A3F8+78-j
		LDA		word_4		; code used as ind data	at a000
		STA		byte_65		; code used at a000
		STA		byte_63F	; code used as ind data	at a000
		LDA		word_4+1	; code used as ind data	at a000
		STA		byte_66		; code used as ind data	at a000
		STA		byte_640	; code used as ind data	at a000
		LDA		#0		; code used at a000
		STA		byte_641	; code used at a000
		LDA		word_4		; code used as ind data	at a000
		ORA		word_4+1	; code used as ind data	at a000
		BEQ		loc_6A4C9	; code used at a000
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		word_4+1	; code used at a000
		PHA				; code used at a000
		JSR		sub_6B697	; code used at a000
		BRK
		.BYTE $87, $2F		; _syscall12
		LDA		#$C		; code used as ind data	at a000
		JSR		sub_6A96F	; code used at a000
		JSR		sub_6AA3C	; code used at a000
		JSR		_b4_s21		; code used at a000
		JSR		sub_6ADD1	; code used at a000
		PLA				; code used at a000
		STA		word_4+1	; code used at a000
		PLA				; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_575	; code used at a000
		AND		#4		; code used at a000
		BEQ		locret_6A4C8	; code used at a000
		LSR		word_4+1
		ROR		word_4
		LSR		word_4+1
		ROR		word_4
		INC		word_4
		JSR		_b4_sB
		JMP		loc_6A58C
locret_6A4C8:				; CODE XREF: sub_6A3F8+BE-j
		RTS				; code used at a000
loc_6A4C9:				; CODE XREF: sub_6A3F8+97-j
					; sub_6A560+6-j
		BRK
		.BYTE $8C, $2F		; _syscall12
		LDY		#$22       ; code used at a000
		JSR		sub_6B2B3	; code used at a000
		BPL		loc_6A4D5	; code used at a000
		LDY		#$7A       ; code used at a000
loc_6A4D5:				; CODE XREF: sub_6A3F8+D9-j
		TYA				; code used at a000
		JMP		_b4_s8		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A4D9:				; CODE XREF: sub_6975F+F-p
		LDA		word_4
		ORA		word_4+1
		BNE		loc_6A4E1
		INC		word_4
loc_6A4E1:				; CODE XREF: sub_6A4D9+4-j
		JSR		sub_6A5B8

; =============== S U B	R O U T	I N E =======================================
sub_6A4E4:				; CODE XREF: sub_68F86+3-p
					; sub_6A57F+36-j
		JSR		_sram_bank0_sub2 ; code	used at	a000
		ORA		word_4		; code used at a000
		BEQ		loc_6A4EE	; code used at a000
		JSR		_b4_s1A		; code used at a000
loc_6A4EE:				; CODE XREF: sub_6A4E4+5-j
		JSR		_b4_s6		; code used at a000
		JSR		_sram_bank0_sub2 ; code	used at	a000
		LDA		word_4		; code used at a000
		ORA		word_4+1	; code used at a000
		BEQ		sub_6A544	; code used at a000
		LDA		byte_575	; code used at a000
		AND		#1		; code used at a000
		BNE		loc_6A529	; code used at a000
		LDA		byte_575	; code used at a000
		AND		#$20       ; code used at a000
		BEQ		loc_6A542	; code used at a000
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
loc_6A529:				; CODE XREF: sub_6A4E4+1B-j
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
loc_6A542:				; CODE XREF: sub_6A4E4+22-j
		SEC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A544:				; CODE XREF: sub_6A4E4+14-j
		BRK
		.BYTE $27, $F7		; _syscall0F
		LDA		byte_CE		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#$1F		; code used at a000
		AND		byte_73D,X	; code used at a000
		STA		byte_73D,X	; code used at a000
		JSR		_b4_s1A		; code used at a000
		JSR		_b4_s6		; code used at a000
		DEC		byte_4C		; code used at a000
		JSR		sub_6A569	; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A560:				; CODE XREF: sub_6A57F+2B-j
		BRK
		.BYTE $8D, $2F		; _syscall12
		JSR		sub_6A569	; code used at a000
		JMP		loc_6A4C9	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A569:				; CODE XREF: sub_6A544+17-p
					; sub_6A560+3-p
		LDA		#$20       ; code used at a000
		JMP		sub_6B2BB	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A56E:				; CODE XREF: sub_6A4E4+34-p
					; sub_6A4E4+4A-p
		LDA		byte_63F
		STA		word_4
		LDA		byte_640
		STA		word_4+1
locret_6A578:				; CODE XREF: sub_6A57F+13-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A579:				; CODE XREF: sub_68E96+2B-j
					; sub_68EC7+37-p
		JSR		sub_6B170	; code used at a000
		JMP		loc_6A582	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A57F:				; CODE XREF: sub_69840+C2-p
		JSR		sub_6B1E4
loc_6A582:				; CODE XREF: sub_68F98+21-j
					; sub_6A579+3-j
		JSR		sub_6B347	; code used at a000
		BCC		loc_6A58C	; code used at a000
		BEQ		loc_6A58C
		JMP		loc_6A402
loc_6A58C:				; CODE XREF: sub_68B3B:loc_68BA8-j
					; sub_696E8+2D-p sub_6A3F8+7-j
					; sub_6A3F8+CD-j sub_6A4E4+42-j
					; sub_6A57F+6-j	sub_6A57F+8-j
		JSR		sub_6B3D2	; code used at a000
		JSR		sub_68F0C	; code used at a000
		BPL		locret_6A578	; code used at a000
		LDA		#$20       ; code used at a000
		JSR		sub_6B2C4	; code used at a000
		LDX		byte_CE		; code used at a000
		LDA		byte_6A9B,X	; code used at a000
		AND		#$20       ; code used at a000
		BEQ		loc_6A5A6	; code used at a000
		LSR		word_4+1	; code used at a000
		ROR		word_4		; code used at a000
loc_6A5A6:				; CODE XREF: sub_6A57F+21-j
		LDA		word_4		; code used at a000
		ORA		word_4+1	; code used at a000
		BEQ		sub_6A560	; code used at a000
		JSR		sub_6A5B8	; code used at a000
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		JSR		_b4_s21		; code used at a000
		JMP		sub_6A4E4	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A5B8:				; CODE XREF: sub_6A4D9:loc_6A4E1-p
					; sub_6A57F+2D-p
		LDA		word_4		; code used at a000
		STA		byte_CF		; code used at a000
		STA		byte_63F	; code used at a000
		LDA		word_4+1	; code used at a000
		STA		byte_D0		; code used at a000
		STA		byte_640	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_641	; code used at a000
		JSR		_sram_bank0_sub5 ; code	used at	a000
		BRK
		.BYTE $8A, $2F		; _syscall12
		LDA		#$13		; code used at a000
		JMP		sub_6A96F	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A5D6:				; CODE XREF: sub_69443+A-j
					; sub_69453:loc_694AA-p
		JSR		sub_6B398	; code used at a000
		BCC		loc_6A5E0	; code used at a000
		BNE		loc_6A5E0
		JMP		loc_6A604
loc_6A5E0:				; CODE XREF: sub_6A5D6+3-j sub_6A5D6+5-j
					; sub_6A5F7+A-j
		JSR		sub_68F16	; code used at a000
		BPL		locret_6A5F6	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_65		; code used at a000
		LDA		word_4+1	; code used at a000
		STA		byte_66		; code used at a000
		JSR		_b4_s19		; code used at a000
		JSR		sub_6B5B7	; code used at a000
		BRK
		.BYTE $14, $F		; _syscall10
locret_6A5F6:				; CODE XREF: sub_6A5D6+D-j
					; sub_6A5F7+12-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A5F7:				; CODE XREF: sub_69BA0+A-j
					; sub_69BE5+13-p
		JSR		sub_6B3D2	; code used at a000
		JSR		sub_6B347	; code used at a000
		BCC		loc_6A604	; code used at a000
		BEQ		loc_6A604
		JMP		loc_6A5E0
loc_6A604:				; CODE XREF: sub_6A5D6+7-j sub_6A5F7+6-j
					; sub_6A5F7+8-j
		LDY		byte_CE		; code used at a000
		JSR		sub_68F0C	; code used at a000
		BPL		locret_6A5F6	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_CF		; code used at a000
		LDA		word_4+1	; code used at a000
		STA		byte_D0		; code used at a000
		JSR		_sram_bank0_sub4 ; code	used at	a000
		BRK
		.BYTE $14, $F7		; _syscall0F
		JSR		_b4_s1A		; code used at a000
		JMP		_b4_s6		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A61F:				; CODE XREF: sub_68D8D+18-j
					; sub_69135+18-p sub_69A80+5-p
		JSR		sub_6B2A3	; code used at a000
		STA		byte_CE		; code used at a000
		JSR		sub_6B3D2	; code used at a000
		JSR		sub_68F0C	; code used at a000
		BPL		loc_6A66F	; code used at a000
		JSR		sub_6B347	; code used at a000
		BCC		loc_6A633	; code used at a000
		BNE		loc_6A685
loc_6A633:				; CODE XREF: sub_6A61F+10-j
					; sub_6A676+D-j
		LDA		#6		; code used at a000
		JSR		_b4_sF		; code used at a000
		ADC		#5		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		sub_6B2CF	; code used at a000
		STA		byte_D0		; code used at a000
		JSR		_sram_bank0_subB ; code	used at	a000
		BCS		loc_6A650	; code used at a000
		JSR		_sram_bank0_sub6
		LDA		word_4
		STA		byte_CF
		STA		byte_63F
loc_6A650:				; CODE XREF: sub_6A61F+25-j
		JSR		_sram_bank0_sub9 ; code	used at	a000
		JSR		_b4_s6		; code used at a000
		JMP		loc_6A659	; code used at a000
loc_6A659:				; CODE XREF: sub_6A676+44-j
		LDY		#$75       ; code used at a000
		LDA		byte_568	; code used at a000
		AND		#3		; code used at a000
		BEQ		loc_6A66B	; code used at a000
		LDY		#$39       ; code used at a000
		JSR		sub_6B2B3	; code used at a000
		BMI		loc_6A66B	; code used at a000
		LDY		#$84 
loc_6A66B:				; CODE XREF: sub_6A61F+41-j
					; sub_6A61F+48-j
		TYA				; code used at a000
		JMP		_b4_s8		; code used at a000
loc_6A66F:				; CODE XREF: sub_6A61F+B-j
		LDA		#0
		STA		byte_CF
		STA		byte_D0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A676:				; CODE XREF: sub_69135+38-p
					; sub_69A80+31-p
		JSR		sub_6A6C7
		JSR		sub_68F16
		BPL		loc_6A6C0
		JSR		sub_6B398
		BCC		loc_6A685
		BEQ		loc_6A633
loc_6A685:				; CODE XREF: sub_6A61F+12-j
					; sub_6A676+B-j
		LDA		#$A
		JSR		sub_6A337
		BCC		loc_6A6BD
loc_6A68C:				; CODE XREF: sub_6A6D9+3-j
		LDA		#6
		JSR		_b4_sF
		ADC		#5
loc_6A693:				; CODE XREF: sub_6A213+2-p
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
loc_6A6B2:				; CODE XREF: sub_6A676+32-j
		JSR		sub_6B725
loc_6A6B5:				; CODE XREF: sub_6A676+39-j
		LDA		byte_63F
		STA		byte_65
		JMP		loc_6A659
loc_6A6BD:				; CODE XREF: sub_6A676+14-j
		BRK
		.BYTE $12, $F7		; _syscall0F
loc_6A6C0:				; CODE XREF: sub_6A676+6-j
		LDA		#0
		STA		byte_65
		STA		byte_66
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A6C7:				; CODE XREF: sub_6A676-p sub_6A6D9-p
		LDA		#0
		STA		byte_66
		STA		byte_640
		STA		byte_641
		JSR		sub_6B2A3
		STA		byte_64
		JMP		sub_6B5B7

; =============== S U B	R O U T	I N E =======================================
sub_6A6D9:				; CODE XREF: sub_68D8D+20-j
		JSR		sub_6A6C7
		JMP		loc_6A68C

; =============== S U B	R O U T	I N E =======================================
sub_6A6DF:				; CODE XREF: sub_690D8+B-j sub_69107+4-p
					; sub_69F23+1B-j
		JSR		sub_6B347	; code used at a000
		BCC		loc_6A6E9	; code used at a000
		BEQ		loc_6A6E9
		JMP		loc_6A755
loc_6A6E9:				; CODE XREF: sub_6A6DF+3-j sub_6A6DF+5-j
					; sub_6A74B+7-j
		JSR		sub_6B3D2	; code used at a000
		JSR		sub_68F0C	; code used at a000
		BPL		locret_6A747	; code used at a000
		JSR		_sram_bank0_sub18 ; code used at a000
		LDA		byte_CE		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_47		; code used at a000
		BEQ		loc_6A708	; code used at a000
		LDA		byte_6AA4,X	; code used at a000
		LSR		; code used at a000
		STA		word_4+1	; code used at a000
		LDA		byte_6AA3,X	; code used at a000
		ROR		; code used at a000
		STA		word_4		; code used at a000
loc_6A708:				; CODE XREF: sub_6A6DF+1B-j
		LDA		#$BE       ; code used at a000
		JSR		sub_6A84F	; code used at a000
		BCS		sub_6A748	; code used at a000
		JSR		sub_6A823	; code used at a000
		JSR		sub_6A71B	; code used at a000
		JSR		sub_6A82E	; code used at a000
		BRK
		.BYTE $16, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6A71B:				; CODE XREF: sub_6A6DF+33-p
					; sub_6A74B+36-p
		SEC				; code used at a000
		LDA		word_6		; code used at a000
		SBC		word_4		; code used at a000
		STA		byte_8		; code used at a000
		LDA		word_6+1	; code used at a000
		SBC		word_4+1	; code used at a000
		STA		byte_9		; code used at a000
		BCS		loc_6A738	; code used at a000
		LDA		#0
		STA		byte_8
		STA		byte_9
		LDA		word_6
		STA		word_4
		LDA		word_6+1
		STA		word_4+1
loc_6A738:				; CODE XREF: sub_6A71B+D-j
		LDA		word_4		; code used at a000
		STA		byte_63F	; code used at a000
		LDA		word_4+1	; code used at a000
		STA		byte_640	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_641	; code used at a000
locret_6A747:				; CODE XREF: sub_6A6DF+10-j
					; sub_6A74B+10-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A748:				; CODE XREF: sub_6A6DF+2E-j
					; sub_6A74B+2D-j
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_6A74B:				; CODE XREF: sub_69F05+15-j sub_6A78A-p
		JSR		sub_6B398	; code used at a000
		BCC		loc_6A755	; code used at a000
		BNE		loc_6A755
		JMP		loc_6A6E9
loc_6A755:				; CODE XREF: sub_6A6DF+7-j sub_6A74B+3-j
					; sub_6A74B+5-j
		JSR		sub_6B5B7	; code used at a000
		JSR		sub_68F16	; code used at a000
		BPL		locret_6A747	; code used at a000
		JSR		sub_6B786	; code used at a000
		LDA		byte_47		; code used at a000
		BEQ		loc_6A76B	; code used at a000
		JSR		sub_6B777	; code used at a000
		LSR		byte_5A		; code used at a000
		ROR		byte_59		; code used at a000
loc_6A76B:				; CODE XREF: sub_6A74B+17-j
		LDA		byte_59		; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_5A		; code used at a000
		STA		word_4+1	; code used at a000
		LDA		#8		; code used at a000
		JSR		sub_6A337	; code used at a000
		BCC		sub_6A748	; code used at a000
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		JSR		sub_6A839	; code used at a000
		JSR		sub_6A71B	; code used at a000
		JSR		sub_6A844	; code used at a000
		BRK
		.BYTE $15, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6A78A:				; DATA XREF: BANK4:off_69F41-o
		JSR		sub_6A74B	; ind code used	at a000
		JMP		sub_6A3CB	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A790:				; CODE XREF: sub_69F43+B-j sub_69F7F-p
		JSR		sub_6B347
		BCC		loc_6A797
		BNE		loc_6A7C3
loc_6A797:				; CODE XREF: sub_6A790+3-j sub_6A7BC+5-j
		JSR		sub_6B3D2
		JSR		sub_68F0C
		BPL		locret_6A7BB
		JSR		_sram_bank0_sub18
		LDA		byte_47
		BEQ		loc_6A7AA
		LSR		word_4+1
		ROR		word_4
loc_6A7AA:				; CODE XREF: sub_6A790+14-j
		LDA		byte_CE
		ASL
		TAX
		CLC
		JSR		sub_6A823
		JSR		sub_6A7E9
		JSR		sub_6A82E
		BRK
		.BYTE $3B, $F		; _syscall10
locret_6A7BB:				; CODE XREF: sub_6A790+D-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A7BC:				; CODE XREF: sub_69346-p sub_69F43+1D-j
		JSR		sub_6B398	; code used at a000
		BCC		loc_6A7C3	; code used at a000
		BEQ		loc_6A797
loc_6A7C3:				; CODE XREF: sub_6A790+5-j sub_6A7BC+3-j
		JSR		sub_6B5B7	; code used at a000
		JSR		sub_6B786	; code used at a000
		LDA		byte_59		; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_5A		; code used at a000
		STA		word_4+1	; code used at a000
		LDA		byte_47		; code used at a000
		BEQ		loc_6A7D9	; code used at a000
		LSR		word_4+1
		ROR		word_4
loc_6A7D9:				; CODE XREF: sub_6A7BC+17-j
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		JSR		sub_6A839	; code used at a000
		JSR		sub_6A7E9	; code used at a000
		JSR		sub_6A844	; code used at a000
		BRK
		.BYTE $3B, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6A7E9:				; CODE XREF: sub_6A790+22-p
					; sub_6A7BC+24-p
		CLC				; code used at a000
		LDA		word_6		; code used at a000
		ADC		word_4		; code used at a000
		STA		byte_8		; code used at a000
		LDA		word_6+1	; code used at a000
		ADC		word_4+1	; code used at a000
		STA		byte_9		; code used at a000
		CMP		#3		; code used at a000
		BCC		loc_6A813	; code used at a000
		BNE		loc_6A802	; code used at a000
		LDA		byte_8		; code used at a000
		CMP		#$E7       ; code used at a000
		BCC		loc_6A813	; code used at a000
loc_6A802:				; CODE XREF: sub_6A7E9+11-j
		SEC				; code used at a000
		LDA		#$E7       ; code used at a000
		STA		byte_8		; code used at a000
		SBC		word_6		; code used at a000
		STA		word_4		; code used at a000
		LDA		#3		; code used at a000
		STA		byte_9		; code used at a000
		SBC		word_6+1	; code used at a000
		STA		word_4+1	; code used at a000
loc_6A813:				; CODE XREF: sub_6A7E9+F-j
					; sub_6A7E9+17-j
		LDA		word_4		; code used at a000
		STA		byte_63F	; code used at a000
		LDA		word_4+1	; code used at a000
		STA		byte_640	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_641	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A823:				; CODE XREF: sub_6A6DF+30-p
					; sub_6A790+1F-p
		LDA		byte_6AA3,X	; code used at a000
		STA		word_6		; code used at a000
		LDA		byte_6AA4,X	; code used at a000
		STA		word_6+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A82E:				; CODE XREF: sub_6A6DF+36-p
					; sub_6A790+25-p
		LDA		byte_8		; code used at a000
		STA		byte_6AA3,X	; code used at a000
		LDA		byte_9		; code used at a000
		STA		byte_6AA4,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A839:				; CODE XREF: sub_6A74B+33-p
					; sub_6A7BC+21-p
		LDA		byte_520,X	; code used at a000
		STA		word_6		; code used at a000
		LDA		byte_521,X	; code used at a000
		STA		word_6+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A844:				; CODE XREF: sub_6A74B+39-p
					; sub_6A7BC+27-p
		LDA		byte_8		; code used at a000
		STA		byte_520,X	; code used at a000
		LDA		byte_9		; code used at a000
		STA		byte_521,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A84F:				; CODE XREF: sub_68E1E+14-p
					; sub_68E69+14-p sub_68F21+3A-p
					; sub_69173+2D-p sub_691DF+14-p
					; sub_69225+2E-p sub_69C0B+1D-p
					; sub_69CA7+1B-p sub_69D77+24-p
					; sub_69DF6+1E-p sub_6A6DF+2B-p
		STA		byte_10		; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		word_4+1	; code used at a000
		PHA				; code used at a000
		LDA		byte_10		; code used at a000
		JSR		sub_6A86B	; code used at a000
		PLA				; code used at a000
		STA		word_4+1	; code used at a000
		PLA				; code used at a000
		STA		word_4		; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A86B:				; CODE XREF: sub_6A84F+E-p
		CMP		#$FF		; code used at a000
		BEQ		loc_6A8B1	; code used at a000
		PHA				; code used at a000
		JSR		_sram_bank0_sub15 ; code used at a000
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		#$80       ; code used at a000
		STA		word_4		; code used at a000
		LDA		#1		; code used at a000
		STA		word_4+1	; code used at a000
		LDX		#word_4		; code used at a000
		PLA				; code used at a000
		JSR		_add_8_to_neg16	; code used at a000
		LDA		#2		; code used at a000
		JSR		_div16_to_8	; code used at a000
		PLA				; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		#$80       ; code used at a000
		JSR		_div16_to_8	; code used at a000
		LDA		word_4+1	; code used at a000
		BNE		loc_6A8B1	; code used at a000
		LDA		byte_567	; code used at a000
		AND		#$10		; code used at a000
		BNE		loc_6A8B1	; code used at a000
		LDA		byte_567	; code used at a000
		AND		#$40       ; code used at a000
		BNE		loc_6A8AB	; code used at a000
		LDA		byte_566	; code used at a000
		AND		#$10		; code used at a000
		BNE		loc_6A8B1	; code used at a000
loc_6A8AB:				; CODE XREF: sub_6A86B+37-j
		JSR		sub_6ACBE	; code used at a000
		CMP		word_4		; code used at a000
		RTS				; code used at a000
loc_6A8B1:				; CODE XREF: sub_6A86B+2-j
					; sub_6A86B+29-j sub_6A86B+30-j
					; sub_6A86B+3E-j
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A8B3:				; CODE XREF: sub_68808+5-p
					; sub_69453+30-p sub_69840+57-p
					; sub_6990D+5-p	sub_69A2E+5-p
					; sub_69A80:loc_69A99-p	sub_69BA0+14-p
					; sub_69E7F+5-p	sub_69F05+9-p
					; sub_69F43:loc_69F51-p
					; sub_69FC5:loc_69FE6-p	sub_6A3AB+3-p
					; sub_6BCDE+A-p
		STA		byte_42		; code used as ind data	at a000
		LDA		#0		; code used at a000
loc_6A8B7:				; CODE XREF: sub_6A900+4-j
		STA		byte_10		; code used as ind data	at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		LDA		byte_64		; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		#1		; code used at a000
		STA		byte_43		; code used at a000
		LDX		#0		; code used as ind data	at a000
		STX		byte_44		; code used at a000
loc_6A8C8:				; CODE XREF: sub_6A8B3+41-j
		STX		byte_64		; code used as ind data	at a000
		TXA				; code used at a000
		ASL		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_10		; code used at a000
		BNE		loc_6A8D9	; code used at a000
		LDA		byte_530,X	; code used at a000
		AND		byte_531,X	; code used as ind data	at a000
		BPL		loc_6A8E7	; code used at a000
loc_6A8D9:				; CODE XREF: sub_6A8B3+1C-j
		LDA		byte_530,X	; code used at a000
		BPL		loc_6A8E7	; code used at a000
		JSR		sub_6B91D	; code used as ind data	at a000
		LDA		byte_59		; code used at a000
		CMP		byte_42		; code used as ind data	at a000
		BEQ		loc_6A8ED	; code used as ind data	at a000
loc_6A8E7:				; CODE XREF: sub_6A8B3+24-j
					; sub_6A8B3+29-j
		LDA		byte_43		; code used as ind data	at a000
		ORA		byte_44		; code used at a000
		STA		byte_44		; code used as ind data	at a000
loc_6A8ED:				; CODE XREF: sub_6A8B3+32-j
		LDX		byte_64		; code used as ind data	at a000
		ASL		byte_43		; code used at a000
		INX				; code used at a000
		CPX		#8		; code used as ind data	at a000
		BNE		loc_6A8C8	; code used as ind data	at a000
		PLA				; code used at a000
		STA		byte_64		; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_44		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A900:				; CODE XREF: sub_69C0B:loc_69C4C-p
		STA		byte_42
		LDA		#$FF
		BNE		loc_6A8B7

; =============== S U B	R O U T	I N E =======================================
_b4_s6:					; CODE XREF: _b2_sB:loc_3A355-P
					; sub_68C0A+19-j sub_68C26+19-j
					; sub_68E00+13-j sub_68E4B+13-j
					; sub_69053-p sub_691B7-j sub_69782+1D-p
					; sub_69973+27-p sub_69A80+16-j
					; sub_69C0B+3E-j sub_69CA7+33-j
					; sub_6A16D+1D-p sub_6A2CB+28-j
					; sub_6A30D+23-j sub_6A4E4:loc_6A4EE-p
					; sub_6A544+12-p sub_6A5F7+25-j
					; sub_6A61F+34-p sub_6A927+3-j
					; sub_6AF0E+10-p sub_6B0E5+2D-p
					; _bA_s12+39-P
					; DATA XREF: BANK4:800C-o
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		LDA		byte_6A63	; code used at a000
		BNE		loc_6A921	; code used at a000
		LDA		byte_CE		; code used at a000
		PHA				; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		CLC				; code used at a000
		ADC		#3		; code used at a000
		JSR		_b4_s7		; code used at a000
		PLA				; code used at a000
		STA		byte_CE		; code used at a000
loc_6A921:				; CODE XREF: _b4_s6+8-j
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A927:				; CODE XREF: sub_6926A+2D-p
		JSR		sub_6AA51
		JMP		_b4_s6

; =============== S U B	R O U T	I N E =======================================
_b4_s8:					; CODE XREF: _b1_sA+2A-P _b1_s9+60-P
					; _b1_s9+91-P _b2_sB:loc_3A6A8-P
					; _b2_sB+38A-P sub_3A93C-P
					; sub_68DB1+16-p sub_692D4+2-p
					; sub_69A2E:loc_69A63-p	sub_69E98+23-j
					; sub_6A263:loc_6A282-p
					; sub_6A30D:loc_6A32D-p	sub_6A3F8+DE-j
					; sub_6A61F+4D-j __syscall10+3-p
					; __syscall0F+3-j sub_6AE6C+57-p
					; sub_6AE6C+61-p sub_6AFB3+1A-p
					; sub_6B324+5-p
					; DATA XREF: BANK4:8010-o
		STA		_tmp12+1	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		word_4+1	; code used at a000
		PHA				; code used at a000
		LDA		word_6		; code used at a000
		PHA				; code used as ind data	at a000
		LDA		byte_64		; code used at a000
		PHA				; code used at a000
		LDA		byte_CE		; code used at a000
		PHA				; code used at a000
		LDX		#0		; code used as ind data	at a000
		LDA		_tmp12+1	; code used at a000
		BRK
		.BYTE 6, 7		; ofs 0x0015800c, -> dst _bE_s6_msg_mFF
		JSR		sub_6A9E0	; code used at a000
		PLA				; code used at a000
		STA		byte_CE		; code used at a000
		PLA				; code used at a000
		STA		byte_64		; code used at a000
		PLA				; code used at a000
		STA		word_6		; code used at a000
		PLA				; code used at a000
		STA		word_4+1	; code used at a000
		PLA				; code used at a000
		STA		word_4		; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
__syscall10:				; CODE XREF: _syscall10-j
		TYA				; code used at a000
		LDY		_irq_y_saved	; code used at a000
		JSR		_b4_s8		; code used at a000
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
__syscall0F:				; CODE XREF: _syscall0F-j
		TYA				; code used at a000
		LDY		_irq_y_saved	; code used at a000
		JMP		_b4_s8		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A96F:				; CODE XREF: sub_68C48+A-p
					; sub_6A3F8+A7-p sub_6A5B8+1B-j
		STA		_tmp12+1	; code used as ind data	at a000
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		word_4+1	; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		word_6		; code used at a000
		PHA				; code used as ind data	at a000
		LDA		byte_64		; code used at a000
		PHA				; code used at a000
		LDX		#0		; code used at a000
		LDA		_tmp12+1	; code used at a000
		BRK
		.BYTE 6, 7		; ofs 0x0015800c, -> dst _bE_s6_msg_mFF
		PLA				; code used at a000
		STA		byte_64		; code used at a000
		PLA				; code used at a000
		STA		word_6		; code used at a000
		PLA				; code used at a000
		STA		word_4+1	; code used at a000
		PLA				; code used at a000
		STA		word_4		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s9:					; CODE XREF: _b1_sD+19-P _b1_sD+2A-P
					; _b1_sD+3B-P _b1_sD+A4-P _b1_sD+F5-P
					; _b1_sD+102-P _b1_sD+120-P _b1_sD+131-P
					; _b1_sD+14D-P _b1_sD+157-P _b1_sD+15F-P
					; _b1_sD+171-P _b1_sD+1A1-P _b1_sD+200-P
					; _b1_sD+242-P _b1_sD+268-P _b1_sD+26D-P
					; _b1_sD+27A-P _b2_sB+208-P _b2_sB+26F-P
					; _b2_sB+2C3-P sub_68931+29-p
					; sub_68931+3B-p sub_68931+45-p
					; _bA_s12+A-P
					; DATA XREF: BANK4:8012-o
		LDX		#0		; code used at a000
		BRK
		.BYTE 8, 7		; ofs 0x00158010, -> dst _bE_s4_msg_m00
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_sB:					; CODE XREF: sub_68EC7+31-p
					; sub_68FF8+1D-p sub_69058:loc_6905D-p
					; sub_69453+44-p sub_694C1+B-p
					; sub_697DE+1D-p sub_69840+3B-p
					; sub_69840+8F-p sub_69840+BC-p
					; sub_69973+5-p	sub_699A0+14-p
					; sub_699A0:loc_699CB-p	sub_69BE5+4-p
					; sub_69F97+4-p	sub_6A049+9-p
					; sub_6A3B5+10-p sub_6A3F8+CA-p
					; sub_6A4E4+3F-p sub_6A4E4+58-p
					; sub_6AE6C+68-p sub_6B027+D-p
					; sub_6B347+38-p
					; DATA XREF: BANK4:8016-o
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE 3, 7		; ofs 0x00158006, -> dst _bE_s3
		LDX		#4		; code used at a000
		JSR		_vblank_count	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_sA:					; CODE XREF: _b1_sA-P _b1_s9+A-P
					; _b1_s9:loc_208AB-P _b1_s9:loc_208DC-P
					; _b1_s9:loc_208F6-P _b1_sC+D-P	_b1_sD-P
					; _b2_sB+33F-P sub_68A52+1A-p
					; sub_68A52+3A-p sub_694DA+25-p
					; sub_694DA+56-p sub_695C6+37-p
					; sub_6B0C1+14-p
					; DATA XREF: BANK4:8014-o
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE 2, 7		; ofs 0x00158004, -> dst _bE_s2
		BRK
		.BYTE 5, 7		; ofs 0x0015800a, -> dst _bE_s5
		JSR		_delay_n	; code used at a000
		JSR		_delay_n	; code used at a000
		JSR		_delay_n	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s7:					; CODE XREF: _b1_s9+7-P	_b1_sC+A-P
					; _b1_sD+164-P _b1_sD+176-P _b1_sD+25B-P
					; _b2_sB+85-P _b2_sB+92-P
					; _b2_sB:loc_3A459-P _b2_sB+14F-P
					; _b2_sB+203-P _b2_sB+236-P _b2_sB+266-P
					; _b2_sB+27C-P _b2_sB+2B4-P _b2_sB+2D8-P
					; _b2_sB+33C-P sub_6889C+2-p _b4_s6+15-p
					; DATA XREF: BANK4:800E-o
		STA		word_4		; code used at a000
		TXA				; code used as ind data	at a000
		PHA				; code used at a000
		TYA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		word_4		; code used at a000
		BRK
		.BYTE 0, 7		; ofs 0x00158000, -> dst _bE_s0
		STA		word_4		; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		word_4		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s21:				; CODE XREF: _b1_s9+27-P sub_68C48+19-j
					; sub_6975F+13-p sub_6A3F8+AD-p
					; sub_6A57F+33-p
					; DATA XREF: BANK4:8042-o
		LDA		byte_6DD	; code used at a000
		CMP		#7		; code used at a000
		BCS		loc_6A9EA	; code used at a000
		JMP		_b4_s16		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A9E0:				; CODE XREF: _b4_s8+1C-p
		LDA		byte_6DD	; code used at a000
		CMP		#7		; code used at a000
		BCS		loc_6A9EA	; code used at a000
		JMP		_b4_s5		; code used at a000
loc_6A9EA:				; CODE XREF: _b4_s21+5-j sub_6A9E0+5-j
					; sub_6A9E0+1C-j
		LDA		#$74       ; code used at a000
		JSR		sub_6A9FF	; code used at a000
		JSR		sub_6AA0D	; code used at a000
		BNE		locret_6A9FE	; code used at a000
		LDA		#0		; code used at a000
loc_6A9F6:				; code used at a000
		JSR		sub_6A9FF
		JSR		sub_6AA0D	; code used at a000
		BEQ		loc_6A9EA	; code used at a000
locret_6A9FE:				; CODE XREF: sub_6A9E0+12-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6A9FF:				; CODE XREF: sub_6A9E0+C-p
					; sub_6A9E0:loc_6A9F6-p
		PHA				; code used at a000
		LDA		#$1A		; code used at a000
		STA		word_4		; code used at a000
		STA		word_4+1	; code used at a000
		PLA				; code used at a000
		JSR		sub_1742C7	; code used at a000
		JMP		sub_1742BA	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AA0D:				; CODE XREF: sub_6A9E0+F-p
					; sub_6A9E0+19-p
		LDX		#$C		; code used at a000
loc_6AA0F:				; CODE XREF: sub_6AA0D:loc_6AA27-j
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		_vblank		; code used at a000
		JSR		_calc_pads	; code used at a000
		LDA		byte_577	; code used at a000
		BNE		loc_6AA21	; code used at a000
		JSR		sub_6AA2E	; code used at a000
		BNE		loc_6AA2A	; code used at a000
loc_6AA21:				; CODE XREF: sub_6AA0D+D-j
		JSR		sub_6AA2E	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		DEX				; code used at a000
loc_6AA27:				; code used at a000
		BNE		loc_6AA0F
		RTS				; code used at a000
loc_6AA2A:				; CODE XREF: sub_6AA0D+12-j
		PLA				; code used at a000
		LDA		#$FF		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AA2E:				; CODE XREF: sub_6AA0D+F-p
					; sub_6AA0D:loc_6AA21-p
		LDA		_pads		; code used at a000
		STA		byte_577	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AA34:				; CODE XREF: sub_68C64+D2-j
					; sub_69370+77-j
		LDA		#$62       ; code used at a000
		BNE		sub_6AA3E	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AA38:				; CODE XREF: sub_6ADB6-p sub_6ADBF-p
					; sub_6ADC8-p sub_6ADD1:loc_6ADDB-p
		LDA		#$63       ; code used at a000
		BNE		sub_6AA3E	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AA3C:				; CODE XREF: sub_6A3F8+AA-p
		LDA		#$64       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AA3E:				; CODE XREF: sub_6AA34+2-j sub_6AA38+2-j
		STA		byte_42		; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6B595	; code used at a000
		LDY		byte_42		; code used at a000
		JSR		_syscall00_safe	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AA51:				; CODE XREF: sub_68931+33-p sub_6A927-p
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6AAA5
		LDX		#4
loc_6AA5B:				; CODE XREF: sub_6AA51+21-j
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
_b4_sC:					; CODE XREF: _b2_sB:loc_3A3CF-P
					; DATA XREF: BANK4:8018-o
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6AAA5	; code used at a000
		LDX		#$D		; code used at a000
loc_6AA84:				; CODE XREF: _b4_sC+23-j
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ORA		#2		; code used at a000
		STA		byte_470	; code used at a000
		LDA		#$1C		; code used at a000
		STA		byte_471	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_17474C	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		DEX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6AA84	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AAA5:				; CODE XREF: sub_6AA51+5-p _b4_sC+5-p
		LDA		#0		; code used at a000
		TAX				; code used at a000
loc_6AAA8:				; CODE XREF: sub_6AAA5+9-j
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
		CPX		#$40       ; code used at a000
		BNE		loc_6AAA8	; code used at a000
		TAX				; code used at a000
loc_6AAB1:				; CODE XREF: sub_6AAA5+12-j
		STA		byte_460,X	; code used at a000
		INX				; code used at a000
		CPX		#$10		; code used at a000
		BNE		loc_6AAB1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AABA:				; CODE XREF: sub_69604+19-p sub_696E8-p
					; sub_6B04B:loc_6B050-p
		LDX		#0		; code used at a000
		LDA		#$FF		; code used at a000
loc_6AABE:				; CODE XREF: sub_6AABA+A-j
		STA		byte_677,X	; code used at a000
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6AABE	; code used at a000
		LDX		byte_51		; code used at a000
		LDA		byte_54C,X	; code used at a000
		BMI		loc_6AAD0	; code used at a000
		JMP		loc_6ABAE	; code used at a000
loc_6AAD0:				; CODE XREF: sub_6AABA+11-j
		AND		#3		; code used at a000
		TAX				; code used at a000
		STA		byte_43		; code used at a000
		LDA		byte_6A77,X	; code used at a000
		BPL		loc_6AB15	; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		#8		; code used at a000
		STA		byte_47		; code used at a000
loc_6AAE3:				; CODE XREF: sub_6AABA+4B-j
		LDA		byte_6A7B,Y	; code used at a000
		BPL		loc_6AB02	; code used at a000
		AND		#7		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_531,X	; code used at a000
		AND		byte_530,X	; code used at a000
		BPL		loc_6AB02	; code used at a000
		LDA		byte_530,X	; code used at a000
		AND		#$C		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		CMP		byte_43		; code used at a000
		BNE		loc_6AB02	; code used at a000
		JSR		sub_6AC36	; code used at a000
loc_6AB02:				; CODE XREF: sub_6AABA+2C-j
					; sub_6AABA+38-j sub_6AABA+43-j
		INY				; code used at a000
		DEC		byte_47		; code used as ind data	at a000
		BNE		loc_6AAE3	; code used at a000
		LDX		#0		; code used at a000
loc_6AB09:				; CODE XREF: sub_6AABA+59-j
		LDA		byte_677,X	; code used at a000
		CMP		#$FF		; code used at a000
		BNE		loc_6AB1A	; code used at a000
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6AB09	; code used at a000
loc_6AB15:				; CODE XREF: sub_6AABA+1E-j
					; sub_6AABA+106-j
		LDA		#$FF		; code used at a000
		STA		word_6		; code used at a000
		RTS				; code used at a000
loc_6AB1A:				; CODE XREF: sub_6AABA+54-j
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
		STA		word_4+1	; code used at a000
loc_6AB20:				; code used at a000
		LDX		#0
loc_6AB22:				; CODE XREF: sub_6AABA+7C-j
		LDA		byte_677,X	; code used at a000
		CMP		#$FF		; code used as ind data	at a000
		BEQ		loc_6AB33	; code used as ind data	at a000
		CMP		#$FE       ; code used at a000
		BNE		loc_6AB31	; code used at a000
		INC		word_4		; code used at a000
		BNE		loc_6AB33	; code used at a000
loc_6AB31:				; CODE XREF: sub_6AABA+71-j
		INC		word_4+1	; code used at a000
loc_6AB33:				; CODE XREF: sub_6AABA+6D-j
					; sub_6AABA+75-j
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6AB22	; code used at a000
		LDA		word_4		; code used at a000
		BNE		loc_6AB3F	; code used at a000
		JMP		loc_6AB94	; code used at a000
loc_6AB3F:				; CODE XREF: sub_6AABA+80-j
		LDX		#0		; code used at a000
loc_6AB41:				; CODE XREF: sub_6AABA+96-j
		LDA		byte_677,X	; code used at a000
		CMP		#$FE       ; code used at a000
		BEQ		loc_6AB4D	; code used at a000
		LDA		#$FF		; code used as ind data	at a000
		STA		byte_677,X	; code used at a000
loc_6AB4D:				; CODE XREF: sub_6AABA+8C-j
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6AB41	; code used at a000
		LDX		#0		; code used at a000
		STX		word_3C		; code used at a000
		STX		word_3C+1	; code used as ind data	at a000
loc_6AB58:				; CODE XREF: sub_6AABA+C9-j
		LDA		byte_677,X	; code used at a000
		CMP		#$FE       ; code used at a000
		BNE		loc_6AB80	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		STA		byte_64		; code used at a000
		JSR		sub_6B645	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		byte_5A		; code used at a000
		CMP		word_3C+1	; code used at a000
		BCC		loc_6AB80	; code used at a000
		BNE		loc_6AB76	; code used at a000
		LDA		byte_59		; code used at a000
		CMP		word_3C		; code used as ind data	at a000
		BCC		loc_6AB80	; code used as ind data	at a000
loc_6AB76:				; CODE XREF: sub_6AABA+B4-j
		LDA		byte_59		; code used at a000
		STA		word_3C		; code used at a000
		LDA		byte_5A		; code used at a000
		STA		word_3C+1	; code used at a000
		STX		word_6		; code used at a000
loc_6AB80:				; CODE XREF: sub_6AABA+A3-j
					; sub_6AABA+B2-j sub_6AABA+BA-j
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6AB58	; code used at a000
loc_6AB85:				; CODE XREF: sub_6AABA+F2-j
		LDA		word_6		; code used as ind data	at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_667,X	; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_668,X	; code used at a000
		STA		word_4+1	; code used at a000
		RTS				; code used at a000
loc_6AB94:				; CODE XREF: sub_6AABA+82-j
		LDX		#0		; code used at a000
		STX		byte_42		; code used at a000
loc_6AB98:				; CODE XREF: sub_6AABA+F0-j
		LDA		byte_677,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_6ABA7	; code used at a000
		CMP		byte_42		; code used as ind data	at a000
		BCC		loc_6ABA7	; code used at a000
		STA		byte_42		; code used at a000
		STX		word_6		; code used at a000
loc_6ABA7:				; CODE XREF: sub_6AABA+E3-j
					; sub_6AABA+E7-j
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6AB98	; code used at a000
		BEQ		loc_6AB85	; code used at a000
loc_6ABAE:				; CODE XREF: sub_6AABA+13-j
		LDX		byte_51		; code used at a000
		LDA		byte_54C,X	; code used at a000
		AND		#3		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4		; code used at a000
		AND		word_4+1	; code used at a000
		BMI		loc_6ABC3	; code used at a000
		JMP		loc_6AB15
loc_6ABC3:				; CODE XREF: sub_6AABA+104-j
		LDA		byte_CE		; code used at a000
		ASL		; code used at a000
		LDA		byte_6AA3,X	; code used at a000
		STA		byte_59		; code used at a000
		LDA		byte_6AA4,X	; code used at a000
		STA		byte_5A		; code used at a000
		LDA		byte_CE		; code used at a000
		PHA				; code used at a000
		JSR		sub_6ACD9	; code used at a000
		PLA				; code used at a000
		STA		byte_CE		; code used at a000
		LDA		word_4		; code used at a000
loc_6ABDB:				; code used at a000
		STA		byte_59
		LDA		word_4+1	; code used at a000
		STA		byte_5A		; code used at a000
		LDX		byte_CE		; code used at a000
loc_6ABE3:				; code used at a000
		LDA		byte_6A9B,X
		AND		#8		; code used at a000
		BNE		loc_6AC05	; code used at a000
		LDX		byte_CE		; code used at a000
		LDA		byte_6A9B,X	; code used at a000
		AND		#4		; code used at a000
		BNE		loc_6AC0D	; code used at a000
		LDA		byte_59		; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_5A		; code used at a000
loc_6ABF9:				; code used at a000
		STA		word_4+1
		LDX		byte_51		; code used at a000
		LDA		byte_54C,X	; code used at a000
		AND		#3		; code used at a000
		STA		word_6		; code used at a000
		RTS				; code used at a000
loc_6AC05:				; CODE XREF: sub_6AABA+12E-j
		JSR		sub_6AC15
		ORA		#8
		STA		word_6
		RTS
loc_6AC0D:				; CODE XREF: sub_6AABA+137-j
		JSR		sub_6AC15
		ORA		#$10
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AC15:				; CODE XREF: sub_6AABA:loc_6AC05-p
					; sub_6AABA:loc_6AC0D-p
		LDX		#3
loc_6AC17:				; CODE XREF: sub_6AC15+7-j
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
sub_6AC36:				; CODE XREF: sub_6AABA+45-p
		LDA		byte_6A7B,Y	; code used at a000
		AND		#7		; code used at a000
		STA		byte_64		; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6ACD6	; code used at a000
		PLA				; code used as ind data	at a000
		TAY				; code used as ind data	at a000
		LDA		byte_64		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		word_4		; code used as ind data	at a000
		STA		byte_667,X	; code used as ind data	at a000
		LDA		word_4+1	; code used as ind data	at a000
		STA		byte_668,X	; code used as ind data	at a000
		JSR		sub_6B2B3	; code used as ind data	at a000
		LDA		#$FF		; code used as ind data	at a000
		SEC				; code used as ind data	at a000
		SBC		byte_70C,X	; code used as ind data	at a000
		JSR		_b4_sF		; code used as ind data	at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LDX		#word_4		; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		byte_64		; code used at a000
		ASL		; code used as ind data	at a000
		TAX				; code used at a000
		CLC				; code used at a000
		LDA		word_4+1	; code used at a000
		ADC		byte_667,X	; code used at a000
		STA		word_3C		; code used at a000
		LDA		byte_668,X	; code used at a000
		ADC		#0		; code used at a000
		STA		word_3C+1	; code used at a000
		SEC				; code used at a000
		LDA		byte_500,X	; code used at a000
		SBC		word_3C		; code used at a000
		STA		word_3C		; code used as ind data	at a000
		LDA		byte_501,X	; code used at a000
		SBC		word_3C+1	; code used at a000
		STA		word_3C+1	; code used at a000
		BCS		loc_6AC8F	; code used at a000
		LDA		#$FE       ; code used at a000
		STA		word_3C		; code used at a000
		BNE		loc_6AC97	; code used at a000
loc_6AC8F:				; CODE XREF: sub_6AC36+51-j
		LSR		word_3C+1	; code used at a000
		ROR		word_3C		; code used at a000
		LSR		word_3C+1	; code used at a000
		ROR		word_3C		; code used at a000
loc_6AC97:				; CODE XREF: sub_6AC36+57-j
		LDA		byte_6A7B,Y	; code used as ind data	at a000
		AND		#7		; code used at a000
		TAX				; code used at a000
		LDA		word_3C		; code used at a000
		STA		byte_677,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_sF:					; CODE XREF: sub_9FF8+1A-P
					; sub_A3FB+105-P sub_A3FB+166-P
					; sub_B16B+6-P sub_B21E+8-P
					; sub_207B6+1F-P sub_68201+B-p
					; sub_68931+B9-p sub_697DE+22-p
					; sub_69BA0+27-p sub_6A017+F-p
					; sub_6A61F+16-p sub_6A676+18-p
					; sub_6AC36+25-p sub_6AD2B+56-p
					; sub_6ADA4+2-p	sub_6AF0E+2-p
					; sub_6AFF7+2-p	sub_6B04B+A-p
					; sub_6BACB+2A-p sub_6BEA4+7-p
					; sub_6BEB9+13-p _b4_s1E+C-p
					; sub_B2DBE+A8-P sub_B2DBE+B2-P
					; _bD_s29+2B-P _b1B_s0+1C-P
					; sub_294028:loc_294068-P
					; sub_2940D5+17-P sub_2940D5+4E-P
					; sub_2940D5+90-P sub_2940D5+B9-P
					; sub_2940D5+F0-P sub_2941FA+2-P
					; DATA XREF: BANK4:801E-o
		PHA				; code used as ind data	at a000
		JSR		sub_6ACBE	; code used as ind data	at a000
		STA		word_3C		; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000
		STA		word_3C+1	; code used as ind data	at a000
		LDX		#word_3C	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		JSR		_mul16_to_8	; code used as ind data	at a000
		LDA		word_3C+1	; code used as ind data	at a000
		STA		word_3C		; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000
		STA		word_3C+1	; code used at a000
		LDA		word_3C		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ACBE:				; CODE XREF: _b4_s27+23-p
					; _b4_s2B:loc_68550-p sub_68864+18-p
					; sub_68931+84-p sub_68B00+B-p
					; sub_68B3B+1B-p sub_68B3B+2D-p
					; sub_68BC9-p sub_68FF8:loc_69032-p
					; sub_69370+27-p sub_69589+E-p
					; sub_69604+33-p sub_69604+4A-p
					; sub_69604+84-p sub_69604+96-p
					; sub_69604+AB-p sub_69604+CC-p
					; sub_696E8+3B-p sub_696E8+58-p
					; sub_6A017:loc_6A038-p	sub_6A337+19-p
					; sub_6A3F8+4C-p sub_6A86B:loc_6A8AB-p
					; sub_6AC15+9-p	_b4_sF+1-p
					; sub_6ACD9:loc_6AD1F-p
					; sub_6AD2B:loc_6AD87-p
		TXA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		TYA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		byte_6A68	; code used as ind data	at a000
		AND		#$F		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
loc_6ACC9:				; CODE XREF: sub_6ACBE+F-j
		JSR		sub_1743B8	; code used as ind data	at a000
		DEX				; code used as ind data	at a000
		BNE		loc_6ACC9	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		TAY				; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		JMP		sub_1743B8	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ACD6:				; CODE XREF: sub_6AC36+9-p
		JSR		sub_6B777	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ACD9:				; CODE XREF: sub_6AABA+119-p
		LDX		byte_51		; code used at a000
		LDA		byte_540,X	; code used at a000
		AND		#3		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_bank0_sub17 ; code used at a000
		LSR		byte_5A		; code used at a000
		ROR		byte_59		; code used at a000
		LDA		word_4		; code used at a000
		SEC				; code used at a000
		SBC		byte_59		; code used at a000
		STA		word_4		; code used at a000
		LDA		word_4+1	; code used at a000
		SBC		byte_5A		; code used at a000
		BCC		loc_6AD1F	; code used at a000
		STA		word_4+1	; code used at a000
		BNE		loc_6AD00	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#2		; code used at a000
		BCC		loc_6AD1F	; code used at a000
loc_6AD00:				; CODE XREF: sub_6ACD9+1F-j
					; sub_6AD2B+2F-j sub_6AD2B+43-j
					; sub_6AD2B+4B-j
		JSR		sub_6BA64	; code used as ind data	at a000
		LDA		word_3C		; code used as ind data	at a000
		CMP		#$66       ; code used at a000
		BCS		loc_6AD0D	; code used as ind data	at a000
		LDA		#$66       ; code used at a000
		BNE		loc_6AD13	; code used as ind data	at a000
loc_6AD0D:				; CODE XREF: sub_6ACD9+2E-j
		CMP		#$99       ; code used as ind data at a000
		BCC		loc_6AD13	; code used as ind data	at a000
		LDA		#$99       ; code used at a000
loc_6AD13:				; CODE XREF: sub_6ACD9+32-j
					; sub_6ACD9+36-j
		LDX		#word_4		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		JSR		_mul16_to_8	; code used as ind data	at a000
		LDA		#$40       ; code used as ind data at a000
		JMP		_div16_to_8	; code used as ind data	at a000
loc_6AD1F:				; CODE XREF: sub_6ACD9+1B-j
					; sub_6ACD9+25-j
		JSR		sub_6ACBE	; code used at a000
		AND		#1		; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AD2B:				; CODE XREF: sub_68B3B-p
		LDX		byte_51		; code used at a000
		LDA		byte_54C,X	; code used at a000
		AND		#3		; code used at a000
		PHA				; code used at a000
		JSR		sub_6B763	; code used at a000
		PLA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_6AA3,X	; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_6AA4,X	; code used at a000
loc_6AD41:				; CODE XREF: sub_6AD8F+12-j
		STA		word_4+1	; code used at a000
		LSR		word_4+1	; code used as ind data	at a000
		ROR		word_4		; code used as ind data	at a000
		SEC				; code used as ind data	at a000
		LDA		byte_59		; code used at a000
		SBC		word_4		; code used as ind data	at a000
		STA		word_4		; code used at a000
		LDA		byte_5A		; code used as ind data	at a000
		SBC		word_4+1	; code used at a000
		BCS		loc_6AD58	; code used as ind data	at a000
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
loc_6AD58:				; CODE XREF: sub_6AD2B+27-j
		STA		word_4+1	; code used as ind data	at a000
		BNE		loc_6AD00	; code used as ind data	at a000
		LSR		byte_5A		; code used as ind data	at a000
		ROR		byte_59		; code used as ind data	at a000
		LSR		byte_5A		; code used as ind data	at a000
		ROR		byte_59		; code used as ind data	at a000
		LSR		byte_5A		; code used as ind data	at a000
		ROR		byte_59		; code used as ind data	at a000
		LDA		word_4+1	; code used as ind data	at a000
		CMP		byte_5A		; code used at a000
		BCC		loc_6AD79	; code used as ind data	at a000
		BNE		loc_6AD00	; code used as ind data	at a000
		LDA		byte_59		; code used at a000
		CMP		word_4		; code used at a000
		BCS		loc_6AD79	; code used at a000
		JMP		loc_6AD00	; code used as ind data	at a000
loc_6AD79:				; CODE XREF: sub_6AD2B+41-j
					; sub_6AD2B+49-j
		LDA		byte_59		; code used at a000
		BEQ		loc_6AD87	; code used at a000
		CMP		#1		; code used at a000
		BEQ		loc_6AD87	; code used at a000
		JSR		_b4_sF		; code used at a000
		STA		word_4		; code used at a000
		RTS				; code used at a000
loc_6AD87:				; CODE XREF: sub_6AD2B+50-j
					; sub_6AD2B+54-j
		JSR		sub_6ACBE	; code used at a000
		AND		#1		; code used at a000
		STA		word_4		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AD8F:				; CODE XREF: sub_68B3B+8-p
		JSR		sub_6B2A3	; code used at a000
		PHA				; code used at a000
		JSR		sub_6B763	; code used at a000
		PLA				; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_520,X	; code used at a000
		STA		word_4		; code used as ind data	at a000
		LDA		byte_521,X	; code used as ind data	at a000
		JMP		loc_6AD41	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ADA4:				; CODE XREF: sub_68BC9+21-p
					; sub_69604+BB-p
		LDA		#$B		; code used at a000
		JSR		_b4_sF		; code used at a000
		CLC				; code used at a000
		ADC		#$36       ; code used at a000
		LDX		#word_4		; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		#$40       ; code used at a000
		JMP		_div16_to_8	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ADB6:				; CODE XREF: sub_6A10F+E-p
					; sub_6A3D3+21-p sub_6A3F8+61-p
		JSR		sub_6AA38	; code used at a000
		LDA		byte_64		; code used at a000
		PHA				; code used at a000
		JMP		sub_6ADE4	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ADBF:				; CODE XREF: sub_68C48+D-p
					; sub_69058+1A-p sub_699A0+46-p
					; sub_69A2E+41-p sub_6A073-p
					; sub_6A3D3+1B-j
		JSR		sub_6AA38	; code used at a000
		LDA		byte_64		; code used at a000
		PHA				; code used at a000
		JMP		sub_6ADF9	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ADC8:				; CODE XREF: sub_6A1E8+3-j
		JSR		sub_6AA38
		LDA		byte_64
		PHA
		JMP		sub_6ADEC

; =============== S U B	R O U T	I N E =======================================
sub_6ADD1:				; CODE XREF: sub_6A3F8+B0-p
		JSR		sub_6B645	; code used at a000
		LDA		byte_59		; code used at a000
		ORA		byte_5A		; code used at a000
		BEQ		loc_6ADDB	; code used at a000
		RTS				; code used at a000
loc_6ADDB:				; CODE XREF: sub_6ADD1+7-j
		JSR		sub_6AA38	; code used at a000
		LDA		byte_64		; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE $D, $F7		; _syscall0F

; =============== S U B	R O U T	I N E =======================================
sub_6ADE4:				; CODE XREF: sub_6ADB6+6-j
		LDA		#$40       ; code used at a000
		JSR		sub_6B307	; code used at a000
		JSR		sub_6B7F2	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ADEC:				; CODE XREF: sub_6ADC8+6-j
		JSR		sub_6B81D	; code used at a000
		JSR		sub_6B91D	; code used at a000
		LDX		byte_59		; code used at a000
		LDA		byte_6A73,X	; code used at a000
		STA		byte_62		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6ADF9:				; CODE XREF: sub_6ADBF+6-j
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#0		; code used at a000
		STA		byte_531,X	; code used at a000
		DEC		byte_4D		; code used at a000
		BEQ		loc_6AE31	; code used at a000
		LDA		byte_530,X	; code used at a000
		AND		#$C		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		byte_59		; code used at a000
		JSR		sub_6B927	; code used at a000
		LDA		byte_5A		; code used at a000
		STA		byte_64		; code used at a000
		JSR		_b4_s2		; code used at a000
		LDA		byte_5A		; code used at a000
		BEQ		loc_6AE20	; code used at a000
		SEC				; code used at a000
		BCS		loc_6AE32	; code used at a000
loc_6AE20:				; CODE XREF: sub_6ADF9+22-j
		LDA		byte_64		; code used at a000
		STA		byte_59		; code used at a000
		JSR		_b4_s3		; code used at a000
		LDX		byte_5A		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6A77,X	; code used at a000
		SEC				; code used at a000
		BCS		loc_6AE32	; code used at a000
loc_6AE31:				; CODE XREF: sub_6ADF9+B-j
		CLC				; code used at a000
loc_6AE32:				; CODE XREF: sub_6ADF9+25-j
					; sub_6ADF9+36-j
		PLA				; code used at a000
		STA		byte_64		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AE36:				; CODE XREF: _b4_s0+37-p
		LDY		#0		; code used at a000
loc_6AE38:				; CODE XREF: sub_6AE36+18-j
		TYA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_73C,X	; code used as ind data	at a000
		AND		byte_73D,X	; code used as ind data	at a000
		BMI		loc_6AE4B	; code used as ind data	at a000
		LDA		byte_54C,Y	; code used at a000
		ORA		#$70       ; code used at a000
		STA		byte_54C,Y	; code used at a000
loc_6AE4B:				; CODE XREF: sub_6AE36+B-j
		INY				; code used at a000
		CPY		#4		; code used at a000
		BNE		loc_6AE38	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AE51:				; CODE XREF: _b4_s0+3A-p
		LDY		#0		; code used at a000
loc_6AE53:				; CODE XREF: sub_6AE51+18-j
		TYA				; code used as ind data	at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_530,X	; code used as ind data	at a000
		AND		byte_531,X	; code used as ind data	at a000
		BMI		loc_6AE66	; code used as ind data	at a000
		LDA		byte_550,Y	; code used as ind data	at a000
		ORA		#$70       ; code used at a000
		STA		byte_550,Y	; code used at a000
loc_6AE66:				; CODE XREF: sub_6AE51+B-j
		INY				; code used as ind data	at a000
		CPY		#8		; code used as ind data	at a000
		BNE		loc_6AE53	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AE6C:				; DATA XREF: BANK4:BE30-o
		JSR		sub_6B2FE	; ind code used	at a000
		JSR		sub_6B2A3	; code used at a000
		STA		byte_D4		; code used at a000
		BPL		loc_6AE7D	; code used at a000
		STA		byte_64		; code used at a000
		JSR		_b4_s12		; code used at a000
		STA		byte_D4		; code used at a000
loc_6AE7D:				; CODE XREF: sub_6AE6C+8-j
		LDX		byte_51		; code used at a000
		LDA		byte_558,X	; code used at a000
		STA		byte_D3		; code used at a000
		STA		word_4		; code used at a000
		CMP		#$70       ; code used at a000
		BEQ		loc_6AE97	; code used at a000
		CMP		#$5B       ; code used at a000
		BEQ		loc_6AE92	; code used at a000
		CMP		#$74       ; code used at a000
		BNE		loc_6AEA2	; code used at a000
loc_6AE92:				; CODE XREF: sub_6AE6C+20-j
		LDA		#$10
		JSR		sub_6B2F7
loc_6AE97:				; CODE XREF: sub_6AE6C+1C-j
		LDA		word_4
		CMP		#$70 
		BNE		loc_6AEA2
		LDA		#$1C
		JSR		sub_6B0DB
loc_6AEA2:				; CODE XREF: sub_6AE6C+24-j
					; sub_6AE6C+2F-j
		LDX		#0		; code used at a000
		LDY		#0		; code used at a000
loc_6AEA6:				; CODE XREF: sub_6AE6C+46-j
		LDA		#$90       ; code used at a000
		JSR		_get_syscall0_data_byte_X ; code used at a000
		AND		#$80       ; code used at a000
		BMI		loc_6AEBA	; code used at a000
loc_6AEAF:				; CODE XREF: sub_6AE6C+51-j
		INX				; code used at a000
		CPX		#$7F       ; code used at a000
		BNE		loc_6AEA6	; code used at a000
		BRK
		.BYTE 3, $F7		; _syscall0F
		BRK
		.BYTE $40, $F		; _syscall10
loc_6AEBA:				; CODE XREF: sub_6AE6C+41-j
		INY				; code used at a000
		CPX		word_4		; code used at a000
		BNE		loc_6AEAF	; code used at a000
		DEY				; code used at a000
		LDA		byte_6B23D,Y	; code used at a000
		JSR		_b4_s8		; code used at a000
		CPY		#$B		; code used at a000
		BCS		loc_6AED0	; code used at a000
		LDA		byte_6B265,Y	; code used at a000
		JSR		_b4_s8		; code used at a000
loc_6AED0:				; CODE XREF: sub_6AE6C+5C-j
		CPY		#4		; code used at a000
		BNE		loc_6AED7	; code used at a000
		JSR		_b4_sB
loc_6AED7:				; CODE XREF: sub_6AE6C+66-j
		LDA		byte_6B270,Y	; code used at a000
		STA		byte_49		; code used at a000
		LDA		#$90       ; code used at a000
		JSR		_get_syscall0_data_byte_X ; code used at a000
		AND		#4		; code used at a000
		BEQ		loc_6AEEC	; code used at a000
		TXA				; code used at a000
		JSR		_b4_s20		; code used at a000
		JSR		_sram_bank0_sub2A ; code used at a000
loc_6AEEC:				; CODE XREF: sub_6AE6C+77-j
		JMP		loc_697AA	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AEEF:				; DATA XREF: BANK4:BE84-o
		LDA		off_6AEFC
		STA		word_3E
		LDA		off_6AEFC+1
		STA		word_3E+1
		JMP		sub_694C1
off_6AEFC:
		.WORD sub_6AEFE		; DATA XREF: sub_6AEEF-r sub_6AEEF+5-r

; =============== S U B	R O U T	I N E =======================================
sub_6AEFE:				; DATA XREF: BANK4:off_6AEFC-o
		JSR		loc_69D3D
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6AF04:				; DATA XREF: BANK4:BE86-o
		LDX		byte_51
		LDA		byte_558,X
		STA		byte_42
		JMP		sub_6B076

; =============== S U B	R O U T	I N E =======================================
sub_6AF0E:				; DATA XREF: BANK4:BE88-o
		LDA		#$19		; ind code used	at a000
		JSR		_b4_sF		; code used at a000
		ADC		#$A		; code used at a000
		STA		byte_CF		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_D0		; code used at a000
		JSR		_sram_bank0_sub8 ; code	used at	a000
		JSR		_b4_s6		; code used at a000
		JSR		sub_1743B8	; code used at a000
loc_6AF24:				; code used at a000
		CMP		#$19
		BCS		locret_6AF33	; code used at a000
		BRK
		.BYTE $A6, $F7		; _syscall0F
		LDA		#$4E 
		JSR		_b4_s20
		JMP		_sram_bank0_sub2A
locret_6AF33:				; CODE XREF: sub_6AF0E+18-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6AF34:				; DATA XREF: BANK4:BE8A-o
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
		.WORD sub_6AF53		; DATA XREF: sub_6AF34-r sub_6AF34+3-r
off_6AF51:
		.WORD sub_6AF5C		; DATA XREF: sub_6AF34+C-r
					; sub_6AF34+11-r

; =============== S U B	R O U T	I N E =======================================
sub_6AF53:				; DATA XREF: BANK4:off_6AF4F-o
		JSR		sub_6B3D2
		BRK
		.BYTE $9C, $F7		; _syscall0F
		JMP		loc_694D2

; =============== S U B	R O U T	I N E =======================================
sub_6AF5C:				; DATA XREF: BANK4:off_6AF51-o
		JSR		sub_6B5B7
		BRK
		.BYTE $9C, $F7		; _syscall0F
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6AF65:				; DATA XREF: BANK4:BE8C-o
		JSR		sub_6B2A3
		STA		byte_CE
		JMP		sub_68E69

; =============== S U B	R O U T	I N E =======================================
sub_6AF6D:				; DATA XREF: BANK4:BE8E-o
		JSR		sub_6B2B3
		TAX
		LDA		byte_704,X
		JSR		sub_6AFB3
		STA		byte_704,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AF7B:				; DATA XREF: BANK4:BE90-o
		JSR		sub_6B2B3
		TAX
		LDA		byte_708,X
		JSR		sub_6AFB3
		STA		byte_708,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AF89:				; DATA XREF: BANK4:BE96-o
		JSR		sub_6B2B3
		TAX
		LDA		byte_70C,X
		JSR		sub_6AFB3
		STA		byte_70C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AF97:				; DATA XREF: BANK4:BE94-o
		JSR		sub_6B2B3
		TAX
		LDA		byte_710,X
		JSR		sub_6AFB3
		STA		byte_710,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AFA5:				; DATA XREF: BANK4:BE92-o
		JSR		sub_6B2B3
		TAX
		LDA		byte_714,X
		JSR		sub_6AFB3
		STA		byte_714,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AFB3:				; CODE XREF: sub_6AF6D+7-p sub_6AF7B+7-p
					; sub_6AF89+7-p	sub_6AF97+7-p
					; sub_6AFA5+7-p
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
loc_6AFC7:				; CODE XREF: sub_6AFB3+10-j
		PHA
		LDA		byte_49
		CLC
		ADC		#$65 
		JSR		_b4_s8
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AFD2:				; DATA XREF: BANK4:BE98-o
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
loc_6AFEF:				; CODE XREF: sub_6AFD2+18-j
		LDA		word_4
		JSR		sub_6B2CF
		BRK
		.BYTE $A8, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6AFF7:				; DATA XREF: BANK4:BE9A-o
		LDA		#$F		; ind code used	at a000
		JSR		_b4_sF		; code used at a000
		ADC		#$23       ; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		JMP		loc_69BA3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
nullsub_12:				; DATA XREF: BANK4:BE9C-o
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B008:				; DATA XREF: BANK4:BE9E-o
		LDA		#$1B
		JSR		sub_6B0DB
		LDA		off_6B01C
		STA		word_40
		LDA		off_6B01C+1
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1
off_6B01C:
		.WORD sub_6B01E		; DATA XREF: sub_6B008+5-r sub_6B008+A-r

; =============== S U B	R O U T	I N E =======================================
sub_6B01E:				; DATA XREF: BANK4:off_6B01C-o
		JSR		sub_6B5B7
		BRK
		.BYTE $B0, $F7		; _syscall0F
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6B027:				; DATA XREF: BANK4:BEA0-o
		LDA		byte_6A6F	; ind code used	at a000
		CMP		#$85       ; code used at a000
		BNE		loc_6B048	; code used at a000
		BRK
		.BYTE $B1, $F7		; _syscall0F
		BRK
		.BYTE $78, $17		; ofs 0x000f8010, -> dst _bA_s8
		JSR		_b4_sB		; code used at a000
		BRK
		.BYTE $B2, $F7		; _syscall0F
		JSR		_b4_s5		; code used at a000
		JSR		_b4_s5		; code used at a000
		LDA		#$86       ; code used at a000
		STA		_enemy_roster_index_list ; code	used at	a000
		JMP		_b4_s26		; code used at a000
loc_6B048:				; CODE XREF: sub_6B027+5-j
		BRK
		.BYTE $40, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6B04B:				; DATA XREF: BANK4:BEA2-o
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
loc_6B071:				; CODE XREF: sub_6B04B+3-j
		STA		byte_D2
loc_6B073:				; CODE XREF: sub_6B04B+21-j
		JMP		sub_6B3D8

; =============== S U B	R O U T	I N E =======================================
sub_6B076:				; CODE XREF: sub_6AF04+7-j sub_6B0C1+E-p
		LDA		byte_42		; code used at a000
		STA		byte_D3		; code used at a000
		JSR		sub_6B2B3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s1F:				; CODE XREF: sub_B143+1B-P
					; DATA XREF: BANK4:803E-o
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#8		; code used at a000
		STA		word_4		; code used at a000
loc_6B085:				; CODE XREF: _b4_s1F+18-j
		LDA		byte_77C,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_6B092	; code used at a000
		AND		#$7F       ; code used at a000
		CMP		byte_42		; code used at a000
		BEQ		loc_6B098	; code used at a000
loc_6B092:				; CODE XREF: _b4_s1F+D-j
		INX				; code used at a000
		DEC		word_4		; code used at a000
		BNE		loc_6B085	; code used at a000
		RTS
loc_6B098:				; CODE XREF: _b4_s1F+13-j
		LDA		byte_77C,X	; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_77C,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s20:				; CODE XREF: sub_B16B+20-P sub_68F73+5-p
					; sub_6AE6C+7A-p sub_6AF0E+1F-p
					; DATA XREF: BANK4:8040-o
		STA		word_4		; code used at a000
		LDA		byte_CE		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
loc_6B0AB:				; CODE XREF: _b4_s20+13-j
		LDA		byte_77C,X	; code used at a000
		CMP		word_4		; code used at a000
		BEQ		loc_6B0B6	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		BNE		loc_6B0AB	; code used at a000
loc_6B0B6:				; CODE XREF: _b4_s20+F-j
		STY		byte_CF		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B0B9:				; CODE XREF: sub_68F21+2F-p
					; sub_68F21+41-p sub_68F7E+2-p
					; sub_68FF8+27-p sub_694DA+3D-p
		STA		byte_CF		; code used at a000
		BRK
		.BYTE $9C, 7		; ofs 0x0000808a, -> dst _b0_s45
		LDA		word_4		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B0C1:				; DATA XREF: BANK4:BE36-o
		LDA		#0		; ind code used	at a000
		STA		byte_42		; code used at a000
		BRK
		.BYTE $30, $17		; ofs 0x000080c6, -> dst _b0_s63
		LDX		byte_51		; code used at a000
		LDA		byte_558,X	; code used at a000
		STA		byte_42		; code used at a000
		JSR		sub_6B076	; code used at a000
		BRK
		.BYTE 6, $F7		; _syscall0F
		JSR		_b4_sA		; code used at a000
		JMP		sub_695C6	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B0DB:				; CODE XREF: sub_6AE6C+33-p
					; sub_6B008+2-p
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $F0, 7		; ofs 0x00020020, -> dst _b1_s10
		BRK
		.BYTE $10, $2F		; _syscall12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B0E5:				; CODE XREF: sub_69604+E-p
		JSR		_sram_bank0_sub1E ; code used at a000
		LDY		#7		; code used at a000
loc_6B0EA:				; CODE XREF: sub_6B0E5+D-j
		DEY				; code used at a000
		BMI		loc_6B145	; code used at a000
		LDA		word_4		; code used at a000
		CMP		byte_6B156,Y	; code used at a000
		BNE		loc_6B0EA	; code used at a000
		LDA		byte_6B15D,Y	; code used at a000
		STY		byte_CF		; code used at a000
		DEY				; code used at a000
		STY		byte_D0		; code used at a000
loc_6B0FC:				; code used at a000
		BPL		loc_6B109
		JSR		loc_6B142
		BCS		locret_6B108
		JSR		sub_1743B8
		CMP		#$C0 
locret_6B108:				; CODE XREF: sub_6B0E5+1C-j
		RTS
loc_6B109:				; CODE XREF: sub_6B0E5:loc_6B0FC-j
		BNE		loc_6B118	; code used at a000
		LDA		#3
		STA		byte_CF
		JSR		_sram_bank0_sub9
		JSR		_b4_s6
		JMP		loc_6B145
loc_6B118:				; CODE XREF: sub_6B0E5:loc_6B109-j
		CPY		#4		; code used at a000
		BCC		loc_6B142	; code used at a000
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
loc_6B132:				; CODE XREF: sub_6B0E5+3E-j
		TAX
		LDA		byte_6A73,X
		LDY		#6
loc_6B138:				; CODE XREF: sub_6B0E5+59-j
		DEY
		BMI		loc_6B145
		CMP		byte_6B162,Y
		BNE		loc_6B138
loc_6B140:				; CODE XREF: sub_6B0E5+4B-j
		LDA		#$10
loc_6B142:				; CODE XREF: sub_6B0E5+19-p
					; sub_6B0E5+35-j
		JSR		sub_6B168	; code used at a000
loc_6B145:				; CODE XREF: sub_6B0E5+6-j
					; sub_6B0E5+30-j sub_6B0E5+3A-j
					; sub_6B0E5+49-j sub_6B0E5+54-j
		JSR		_sram_bank0_sub1E ; code used at a000
		LDA		word_4+1	; code used at a000
		CMP		#$AD       ; code used at a000
		BNE		loc_6B154	; code used at a000
		JSR		sub_1743B8
		CMP		#$AA 
		RTS
loc_6B154:				; CODE XREF: sub_6B0E5+67-j
		CLC				; code used at a000
		RTS				; code used at a000
byte_6B156:
		.BYTE $93,$95,$88,$8F,$94,$97,$9E ; DATA XREF: sub_6B0E5+A-r
					; data used at a000
byte_6B15D:
		.BYTE	2,  0,$80, $A,	4 ; DATA XREF: sub_6B0E5+F-r
byte_6B162:
		.BYTE $5B,$67,$7C,$3A,$71,$7E ;	DATA XREF: sub_6B0E5+56-r

; =============== S U B	R O U T	I N E =======================================
sub_6B168:				; CODE XREF: sub_6B0E5:loc_6B142-p
					; sub_6B1E8+47-p sub_6B1E8+4F-p
		ORA		byte_575	; code used at a000
		STA		byte_575	; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B170:				; CODE XREF: sub_6A579-p
		LDX		byte_51		; code used at a000
		LDY		byte_558,X	; code used at a000
loc_6B175:				; CODE XREF: sub_6B1E4+2-j
		LDA		word_4		; code used at a000
		STA		byte_59		; code used at a000
		LDA		word_4+1	; code used at a000
		STA		byte_5A		; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		_sram_bank0_sub1E ; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		LDA		word_4+1	; code used at a000
		CPY		#$13		; code used at a000
		BCC		loc_6B18E	; code used at a000
		CMP		#$AD       ; code used at a000
		BEQ		loc_6B1D2	; code used at a000
loc_6B18E:				; CODE XREF: sub_6B170+18-j
		CMP		#$AE       ; code used at a000
		BEQ		loc_6B1B2	; code used at a000
		CMP		#$A8       ; code used at a000
		BEQ		loc_6B1B2	; code used at a000
		CPY		#$13		; code used at a000
		BCC		loc_6B1A4	; code used at a000
		CMP		#$A6       ; code used at a000
		BEQ		loc_6B1B2	; code used at a000
		CMP		#$AC       ; code used at a000
		BEQ		loc_6B1B2	; code used at a000
		BNE		loc_6B1DB	; code used at a000
loc_6B1A4:				; CODE XREF: sub_6B170+28-j
		LDX		word_6		; code used at a000
		CPX		#$BB       ; code used at a000
		BEQ		loc_6B1B2	; code used at a000
		CPY		#$D		; code used at a000
		BCS		loc_6B1DB	; code used at a000
		CMP		#$B5       ; code used at a000
		BNE		loc_6B1DB	; code used at a000
loc_6B1B2:				; CODE XREF: sub_6B170+20-j
					; sub_6B170+24-j sub_6B170+2C-j
					; sub_6B170+30-j sub_6B170+38-j
		CPY		#$13		; code used at a000
		BCS		loc_6B1C1	; code used at a000
		LDA		byte_CE		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_73C,X	; code used at a000
		AND		#4		; code used at a000
		BNE		loc_6B1DB	; code used at a000
loc_6B1C1:				; CODE XREF: sub_6B170+44-j
		LDX		#byte_59	; code used at a000
		LDA		#2		; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		#3		; code used at a000
		JSR		_div16_to_8	; code used at a000
		INC		byte_59		; code used at a000
		JMP		loc_6B1DB	; code used at a000
loc_6B1D2:				; CODE XREF: sub_6B170+1C-j
		LDX		#byte_59
		LDA		#4
		JSR		_div16_to_8
		INC		byte_59
loc_6B1DB:				; CODE XREF: sub_6B170+32-j
					; sub_6B170+3C-j sub_6B170+40-j
					; sub_6B170+4F-j sub_6B170+5F-j
		LDA		byte_59		; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_5A		; code used at a000
		STA		word_4+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B1E4:				; CODE XREF: sub_6A57F-p
		LDY		#$13
		BNE		loc_6B175

; =============== S U B	R O U T	I N E =======================================
sub_6B1E8:				; CODE XREF: sub_68B3B+16-p
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		word_4+1	; code used at a000
		PHA				; code used at a000
		JSR		_sram_bank0_sub1E ; code used at a000
		LDA		word_4+1	; code used as ind data	at a000
		CMP		#$A7       ; code used as ind data at a000
		BEQ		loc_6B209	; code used as ind data	at a000
		CMP		#$B6       ; code used as ind data at a000
		BEQ		loc_6B211	; code used as ind data	at a000
		LDA		word_6		; code used as ind data	at a000
		CMP		#$BC       ; code used as ind data at a000
		BEQ		loc_6B235	; code used as ind data	at a000
loc_6B201:				; CODE XREF: sub_6B1E8+2C-j
					; sub_6B1E8+43-j sub_6B1E8+4A-j
					; sub_6B1E8+52-j
		CLC				; code used as ind data	at a000
loc_6B202:				; CODE XREF: sub_6B1E8+26-j
		PLA				; code used at a000
		STA		word_4+1	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		word_4		; code used as ind data	at a000
		RTS				; code used as ind data	at a000
loc_6B209:				; CODE XREF: sub_6B1E8+D-j
		JSR		sub_1743B8	; code used at a000
		CMP		#$CC       ; code used at a000
		JMP		loc_6B202	; code used at a000
loc_6B211:				; CODE XREF: sub_6B1E8+11-j
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
loc_6B235:				; CODE XREF: sub_6B1E8+17-j
		LDA		#$20 
		JSR		sub_6B168
		JMP		loc_6B201
byte_6B23D:
		.BYTE $8E,$8E,$8E,$8E,$8E,$8E,$8E,$8E,$8E,$94,$8E,$9A,$9F,$9F,$9F,$9F
					; DATA XREF: sub_6AE6C+54-r
		.BYTE $9F,$A5,$9B,$9A,$9E,  3,	3,  3,	3,  3,$A7,  3,	3,$9B,$AA,$AB
		.BYTE $AC,  3,$AE,$AF,	3,$9B,$B3,$9A
byte_6B265:
		.BYTE $8F,$90,$91,$97,$98,$99,$92,$93,$90,$95,$96 ; DATA XREF: sub_6AE6C+5E-r
byte_6B270:
		.BYTE	0,  5, $A,$24,$30,$27,	7,  4, $F,$2C, $D,$1B,$37,$37,$37,$37
					; DATA XREF: sub_6AE6C:loc_6AED7-r
		.BYTE $37,$38,$39,$1E,$3A,$3B,$3C,$3D,$3E,$3F,$40,$41,$34,$45,$26,$21
		.BYTE $42,$35,$22,$43,$44,$27,$18,$36

; =============== S U B	R O U T	I N E =======================================
_b4_s1A:				; CODE XREF: sub_A172+3-P _b4_s0+5-p
					; sub_68FF8+4D-p sub_69973+24-p
					; sub_69C0B+3B-p sub_6A4E4+7-p
					; sub_6A544+F-p	sub_6A5F7+22-p
					; _b7_s19+91-P _bA_s8+1B-P _bA_s12+36-P
					; sub_12B7C8+15-P sub_142589+193-P
					; sub_142CE7+A0-P sub_142CE7+138-P
					; sub_15B288+8-P sub_15B288+1B-P
					; DATA XREF: BANK4:8034-o
		BRK
		.BYTE $2F, $17		; ofs 0x00140050, -> dst _bD_s28
		LDX		#0		; code used at a000
		JSR		sub_17435B	; code used at a000
		JMP		_vblank		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2A3:				; CODE XREF: sub_68B3B+3-p
					; sub_68B3B:loc_68B94-p	sub_68BB6+8-p
					; sub_68BF0+E-p	sub_68C0A+11-p
					; sub_68C26+E-p	sub_68D8D+B-p
					; sub_68DB1+1C-p sub_68DEC+6-p
					; sub_68E96:loc_68EB8-p
					; sub_68EC7:loc_68EE6-p
					; sub_68F21:loc_68F2C-p	sub_68FBC-p
					; sub_68FE0+5-p	sub_68FF8+B-p
					; sub_69081-p sub_690A9-p sub_690D8-p
					; sub_690E9-p sub_69111-p sub_69135+B-p
					; sub_69173:loc_6917E-p	sub_691C3-p
					; sub_69225:loc_69230-p
					; sub_69322:loc_6932C-p	sub_6934C+A-p
					; sub_69370+B-p	sub_69443-p
					; sub_69453:loc_6947E-p	sub_69604-p
					; sub_69840:loc_69862-p
					; sub_69840:loc_69892-p
					; sub_69840:loc_698B4-p	sub_6990D-p
					; sub_6995B-p sub_699F1-p sub_69A2E-p
					; sub_69A80-p sub_69ABF-p sub_69B1B-p
					; sub_69BA0:loc_69BA3-p	sub_69BE0-p
					; sub_69C0B+2-p	sub_69C86-p sub_69D60-p
					; sub_69DDF-p sub_69E7F-p sub_69F05+4-p
					; sub_69F23+4-p	sub_69F43+4-p
					; sub_69F64+4-p	sub_69FC5-p sub_6A263-p
					; sub_6A2CB-p sub_6A2FF-p sub_6A3AB-p
					; sub_6A61F-p sub_6A6C7+A-p sub_6AD8F-p
					; sub_6AE6C+3-p	sub_6AF65-p sub_6B04B-p
					; sub_6B0E5+37-p sub_6B310+2-p
		LDX		byte_51		; code used as ind data	at a000
		LDA		byte_54C,X	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2A8:				; CODE XREF: sub_6B2B3+5-j
		PHP				; code used as ind data	at a000
		AND		#$87       ; code used as ind data at a000
		BMI		loc_6B2AF	; code used as ind data	at a000
		AND		#3		; code used at a000
loc_6B2AF:				; CODE XREF: sub_6B2A8+3-j
		AND		#7		; code used as ind data	at a000
		PLP				; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2B3:				; CODE XREF: sub_68931+7-p
					; sub_68931+94-p sub_68C48-p
					; sub_68C64+3-p	sub_69058+8-p
					; sub_69135:loc_6915E-p	sub_692B7+8-p
					; sub_694DA+11-p sub_694DA+44-p
					; sub_694DA+73-p sub_69777-p
					; sub_697DE+14-p sub_69840:loc_698E0-p
					; sub_69973+8-p	sub_699A0+24-p
					; sub_69A80:loc_69A8E-p	sub_69ECB-p
					; sub_69F85-p sub_6A158+3-p sub_6A35F-p
					; sub_6A35F+21-p sub_6A39F-p
					; sub_6A3F8+D6-p sub_6A4E4:loc_6A529-p
					; sub_6A61F+45-p sub_6AC36+1C-p
					; sub_6AF6D-p sub_6AF7B-p sub_6AF89-p
					; sub_6AF97-p sub_6AFA5-p sub_6AFD2+A-p
					; sub_6B076+4-p	sub_6B1E8:loc_6B211-p
					; sub_6B347+E-p	sub_6B347+3B-p
					; sub_6B398+11-p sub_6B3C7-p
		LDX		byte_51		; code used as ind data	at a000
		LDA		byte_540,X	; code used as ind data	at a000
		JMP		sub_6B2A8	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2BB:				; CODE XREF: sub_68BB6+2-p
					; sub_694DA+85-p sub_6A569+2-j
		PHA				; code used at a000
		ORA		byte_566	; code used at a000
		STA		byte_566	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2C4:				; CODE XREF: sub_68931+50-p
					; sub_6A57F+17-p
		PHA				; code used as ind data	at a000
		EOR		#$FF		; code used at a000
		AND		byte_566	; code used at a000
		STA		byte_566	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2CF:				; CODE XREF: sub_691DF+34-p
					; sub_69AE1+31-p sub_69B34+25-p
					; sub_69B74+26-p sub_6A61F+1D-p
					; sub_6AFB3+8-p	sub_6AFD2+1F-p
		STA		byte_63F	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_640	; code used at a000
		STA		byte_641	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2DB:				; CODE XREF: sub_69955-p sub_69A7A-p
					; sub_69ABF+14-p sub_69C03-p
					; sub_69C86+14-p sub_69D60+14-p
					; sub_69DDF+14-p sub_69EC5-p
					; sub_69F05:loc_69F1D-p	sub_69F23+18-p
		PHA
		LDA		byte_566
		ORA		#$10
		STA		byte_566
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2E6:				; CODE XREF: sub_68BF0+13-p
					; sub_68C0A+E-p	sub_68C26+13-p
					; sub_69A0F:loc_69A18-p
		LDA		#1		; code used at a000
		ORA		byte_568	; code used at a000
		STA		byte_568	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2EF:				; CODE XREF: sub_68E1E:loc_68E43-p
					; sub_68E69:loc_68E8E-p
					; sub_69CA7:loc_69CDD-p
		LDA		byte_568	; code used at a000
		AND		#3		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2F5:				; CODE XREF: sub_68A52:loc_68A92-p
					; sub_69782-p
		LDA		#$80       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2F7:				; CODE XREF: sub_6A017+5-p sub_6A134+5-j
					; sub_6AE6C+28-p sub_6B347+2D-p
		ORA		byte_567	; code used at a000
		STA		byte_567	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B2FE:				; CODE XREF: sub_68A52+4C-p
					; sub_68A52+56-p sub_694DA:loc_6953C-p
					; sub_6A017-p sub_6AE6C-p
		LDA		#$7F       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B300:				; CODE XREF: sub_68931+55-p
					; sub_6B347+2-p	sub_6B398+2-p
		AND		byte_567	; code used at a000
		STA		byte_567	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B307:				; CODE XREF: sub_68D8D+5-p
					; sub_699A0+40-p sub_6A10F+B-p
					; sub_6A3D3+E-p	sub_6ADE4+2-p
					; sub_6B3DB+23-j
		ORA		byte_568	; code used at a000
		STA		byte_568	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B30E:				; CODE XREF: sub_68B35+3-p sub_68BC9+D-p
					; sub_68BF0+3-p	sub_68C0A+3-p
					; sub_68C26+3-p	sub_68D8D+8-p
					; sub_68E96+1C-p sub_68F21+8-p
					; sub_690CD+8-p	sub_69135+8-p
					; sub_69173+8-p	sub_69225+8-p
					; sub_69370+8-p	sub_69415+28-p
		LDA		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B310:				; CODE XREF: sub_6B32F+2-j
		STA		word_4		; code used at a000
		JSR		sub_6B2A3	; code used at a000
		BMI		locret_6B32E	; code used at a000
		STA		byte_D2		; code used at a000
		LDA		byte_566	; code used at a000
		AND		#$C0       ; code used at a000
		BEQ		locret_6B32E	; code used at a000
		LDA		word_4
		BNE		sub_6B333

; =============== S U B	R O U T	I N E =======================================
sub_6B324:				; CODE XREF: sub_6B333+7-j
		LDX		#$52 
		JSR		_b4_s1D
		JSR		_b4_s8
		PLA
		PLA
locret_6B32E:				; CODE XREF: sub_6B310+5-j sub_6B310+E-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B32F:				; CODE XREF: sub_68DB1+19-p
					; sub_68DEC+3-p	sub_68E00+3-p
					; sub_68E4B+3-p	sub_68EC7+1C-p
					; sub_68FF8+8-p	sub_6933E-p
					; sub_69453+28-p sub_694B8+6-p
		LDA		#$80       ; code used at a000
		BNE		sub_6B310	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B333:				; CODE XREF: sub_6B310+12-j
		JSR		_b4_s1B
		STY		byte_D2
		LDA		#$53 
		BNE		sub_6B324

; =============== S U B	R O U T	I N E =======================================
_b4_s1B:				; CODE XREF: _b1_sC+10-P sub_6B333-p
					; DATA XREF: BANK4:8036-o
		LDY		#0		; code used at a000
loc_6B33E:				; CODE XREF: _b4_s1B+8-j
		JSR		sub_68F0C	; code used at a000
		BMI		locret_6B346	; code used at a000
		INY				; code used at a000
		BNE		loc_6B33E	; code used at a000
locret_6B346:				; CODE XREF: _b4_s1B+5-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B347:				; CODE XREF: sub_68F21:loc_68F37-p
					; sub_69173+12-p sub_691DF-p
					; sub_69225+15-p sub_699F1+16-p
					; sub_69B34-p sub_69C9D-p sub_69D35-p
					; sub_69D77-p sub_69DF6-p sub_69FC5+7-p
					; sub_6A2CB+7-p	sub_6A2FF+7-p
					; sub_6A57F:loc_6A582-p	sub_6A5F7+3-p
					; sub_6A61F+D-p	sub_6A6DF-p sub_6A790-p
		LDA		#$BF       ; code used at a000
		JSR		sub_6B300	; code used at a000
		LDA		byte_567	; code used at a000
		BPL		loc_6B3C5	; code used at a000
		LDA		byte_CE		; code used at a000
		STA		byte_42		; code used at a000
		JSR		sub_6B2B3	; code used at a000
		BMI		loc_6B35E	; code used at a000
		CMP		byte_42		; code used at a000
		BEQ		loc_6B3C5	; code used at a000
loc_6B35E:				; CODE XREF: sub_6B347+11-j
		JSR		sub_6B3D2	; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_73D,X	; code used at a000
		AND		#$F		; code used at a000
		BEQ		loc_6B3C5	; code used at a000
		LDA		byte_73C,X
		AND		byte_73D,X
		BPL		loc_6B3C5
loc_6B372:				; CODE XREF: sub_6B398+2B-j
		LDA		#$40 
		JSR		sub_6B2F7
		LDA		#$9A 
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $56, $F7		; _syscall0F
		JSR		_b4_sB
		JSR		sub_6B2B3
		BMI		loc_6B38F
		STA		byte_CE
		STA		byte_D2
		SEC
		LDA		#0
		RTS
loc_6B38F:				; CODE XREF: sub_6B347+3E-j
		STA		byte_64
		JSR		sub_6B5B7
		SEC
		LDA		#1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B398:				; CODE XREF: sub_69927-p sub_69A0F-p
					; sub_69A2E+11-p sub_69AE1-p sub_69B74-p
					; sub_69CED-p sub_69DAF-p sub_69E2E-p
					; sub_69E7F+F-p	sub_69FC5+2B-p
					; sub_6A2CB+2E-p sub_6A3F8-p sub_6A5D6-p
					; sub_6A676+8-p	sub_6A74B-p sub_6A7BC-p
		LDA		#$BF       ; code used at a000
		JSR		sub_6B300	; code used at a000
		LDA		byte_567	; code used at a000
loc_6B3A0:				; code used at a000
		BPL		loc_6B3C5
		JSR		sub_6B5B7	; code used at a000
		LDA		byte_64		; code used at a000
		STA		byte_42		; code used at a000
		JSR		sub_6B2B3	; code used at a000
		BPL		loc_6B3B2	; code used at a000
		CMP		byte_42		; code used at a000
		BEQ		loc_6B3C5	; code used at a000
loc_6B3B2:				; CODE XREF: sub_6B398+14-j
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_531,X	; code used at a000
		AND		#$F		; code used at a000
loc_6B3BB:				; code used at a000
		BEQ		loc_6B3C5
		LDA		byte_530,X
		AND		byte_531,X
		BMI		loc_6B372
loc_6B3C5:				; CODE XREF: sub_6B347+8-j
					; sub_6B347+15-j sub_6B347+21-j
					; sub_6B347+29-j sub_6B398:loc_6B3A0-j
					; sub_6B398+18-j sub_6B398:loc_6B3BB-j
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B3C7:				; CODE XREF: sub_68931+D9-p
					; sub_68931+F0-p sub_68A52+D-p
		JSR		sub_6B2B3	; code used at a000
		PHA				; code used at a000
		STA		byte_64		; code used at a000
		JSR		sub_6B5B7	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B3D2:				; CODE XREF: sub_68BB6+D-j sub_68E1E-p
					; sub_68E69-p sub_68F21:loc_68F41-p
					; sub_69173:loc_6918F-p
					; sub_691DF:loc_691E9-p	sub_695C6+2C-p
					; sub_69B34:loc_69B3E-p	sub_69CA7-p
					; sub_69D35:loc_69D3D-p
					; sub_69D77:loc_69D81-p
					; sub_69DF6:loc_69E00-p
					; sub_69FC5:loc_69FD3-p
					; sub_6A2CB:loc_6A2D9-p	sub_6A30D-p
					; sub_6A57F:loc_6A58C-p	sub_6A5F7-p
					; sub_6A61F+5-p	sub_6A6DF:loc_6A6E9-p
					; sub_6A790:loc_6A797-p	sub_6AF53-p
					; sub_6B347:loc_6B35E-p
		LDA		byte_CE		; code used at a000
		STA		byte_D2		; code used at a000
		TAY				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B3D8:				; CODE XREF: sub_68FF8:loc_6902C-p
					; sub_691BA-j sub_691DF:loc_6921A-j
					; sub_69225:loc_69264-j	sub_699A0+1A-p
					; sub_699F1+19-j sub_69A0F:loc_69A28-p
					; sub_69A2E:loc_69A5E-p
					; sub_69AE1:loc_69B18-j
					; sub_69D77:loc_69DAC-j
					; sub_69DF6:loc_69E25-j
					; sub_69E2E:loc_69E56-j
					; sub_69E98:loc_69EBE-j	sub_6A3F8+33-j
					; sub_6A748-j sub_6B04B:loc_6B073-j
		BRK
		.BYTE $12, $F		; _syscall10

; =============== S U B	R O U T	I N E =======================================
sub_6B3DB:				; CODE XREF: _b4_s26+57-p sub_68D39+3-j
		LDX		#3		; code used at a000
loc_6B3DD:				; CODE XREF: sub_6B3DB+D-j
		LDA		byte_6A77,X	; code used at a000
		BPL		loc_6B3E7	; code used as ind data	at a000
		LDA		byte_6A73,X	; code used at a000
		STA		word_4		; code used at a000
loc_6B3E7:				; CODE XREF: sub_6B3DB+5-j
		DEX				; code used as ind data	at a000
		BPL		loc_6B3DD	; code used as ind data	at a000
		INX				; code used at a000
loc_6B3EB:				; CODE XREF: sub_6B3DB+1F-j
		LDA		byte_6A77,X	; code used at a000
		BPL		loc_6B3F7	; code used at a000
		LDA		byte_6A73,X	; code used at a000
		CMP		word_4		; code used at a000
		BNE		loc_6B401	; code used at a000
loc_6B3F7:				; CODE XREF: sub_6B3DB+13-j
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_6B3EB	; code used at a000
		LDA		#$20       ; code used at a000
		JMP		sub_6B307	; code used at a000
loc_6B401:				; CODE XREF: sub_6B3DB+1A-j
		LDA		#$DF       ; code used at a000
		AND		byte_568	; code used at a000
		STA		byte_568	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s1C:				; CODE XREF: _b1_s9+5D-P _b1_s9+8E-P
					; _b1_sD+16-P _b1_sD+27-P _b1_sD+38-P
					; _b1_sD+F2-P
					; DATA XREF: BANK4:8038-o
		LDA		byte_568	; code used at a000
		AND		#$20       ; code used at a000
		BNE		loc_6B412	; code used at a000
		INX				; code used at a000
loc_6B412:				; CODE XREF: _b4_s1C+5-j
		TXA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s1D:				; CODE XREF: _b1_sC+19-P _b1_sD+12E-P
					; _b2_sB+350-P sub_6B324+2-p
					; DATA XREF: BANK4:803A-o
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		DEC		word_4		; code used at a000
		BEQ		loc_6B420	; code used at a000
		INX				; code used at a000
loc_6B420:				; CODE XREF: _b4_s1D+9-j
		TXA				; code used at a000
		RTS				; code used at a000
byte_6B422:
		.BYTE $20,$20,$20,$20,$20,$20,$20,$20 ;	DATA XREF: BANK4:off_68406-o
					; ind data used	at a000
byte_6B42A:
		.BYTE $12,$16,$1A,$1E,$22,$26,$2A,$2E ;	DATA XREF: BANK4:8408-o
					; ind data used	at a000
byte_6B432:
		.BYTE	2,  4,	6,  8, $A, $C, $E,$C8 ;	DATA XREF: BANK4:840A-o
					; ind data used	at a000
byte_6B43A:
		.BYTE $FF,$FF,$FF,$FF	; DATA XREF: BANK4:off_6855F-o
					; ind data used	at a000
byte_6B43E:
		.BYTE $91,$FF,$FF,$FF	; DATA XREF: BANK4:8561-o
					; ind data used	at a000
byte_6B442:
		.BYTE $71,$C6,$FF,$FF	; DATA XREF: BANK4:8563-o
					; ind data used	at a000
byte_6B446:
		.BYTE $70,$B3,$EA,$FF	; DATA XREF: BANK4:8565-o
					; ind data used	at a000
byte_6B44A:
		.BYTE $FF,$80,$55,$20	; DATA XREF: sub_69589+9-r
					; data used at a000
byte_6B44E:
		.BYTE $FF,$C0,$80,$40	; DATA XREF: sub_68B00+6-r
					; data used at a000
_b4_dD_spells_list:
		.BYTE $C2,$C6,$CC,$C4,$C6,$CC,$45,$49,$52,$C3,$C6,$CC,$49,$C4,$C6,$C9
					; DATA XREF: BANK4:801A-o sub_69782+D-r
		.BYTE $C8,$5E,$C7,$C7,$41,$C2,$C7,$C0,$C3,  3,$83,$85,$87,  0,$12,$3E ;	ind data used at a000
		.BYTE $8A,$94,$C3,  3,$C3,$C4,	8,$C5,$8C,$18,	6,$C3,$C4,$83,	4,  4
		.BYTE	8,  6,$86,$14,$82,$86,$D2,  4, $C,  0,	3,  8, $F,  2
byte_6B490:
		.BYTE	0,  1,	2,  9	; DATA XREF: sub_68E96+F-r
					; data used at a000
byte_6B494:
		.BYTE	3,  4,	8, $A, $B, $D, $E, $F ;	DATA XREF: sub_68EC7+F-r
					; data used at a000
byte_6B49C:
		.BYTE $1A,$1B,$1C	; DATA XREF: sub_69415+1D-r
					; data used at a000
byte_6B49F:
		.BYTE $1E,$1F		; DATA XREF: sub_69453+1D-r
word_6B4A1:
		.WORD  $608,$1446,$28A0, $810, $C1E,$1858, $810,$1034
					; DATA XREF: sub_6BEA4+B-r sub_6BEA4+4-r
		.WORD $2878, $A19,$102A,$1858,$143C,$1008,$1E19,$3C3C ;	data used at a000
		.WORD $1446,$32AF
word_6B4C5:
		.WORD  $507, $A34,$245C, $810, $80A, $C16,$143C, $A20
					; DATA XREF: sub_68DB1+2E-r
					; sub_6BEB9+17-r sub_68DB1+33-r
					; sub_6BEB9+10-r
		.WORD  $C37, $C06,$140E,$201E, $406, $A1E,$1450, $C09 ;	data used at a000
		.WORD $1428,$2864
_b4_d15:
		.WORD  $A1E,$144B,  $FF, $A1E,$103E,$FFFF ; DATA XREF: BANK4:802A-o
					; _b4_s1E+2-r _b4_s1E+10-r _b4_s1E+9-r
					; data used at a000
byte_6B4F5:
		.BYTE	0,  1,	2,  4,	5,  0,	1,  2,	4,  5 ;	DATA XREF: sub_6BEF5+9-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s1:					; CODE XREF: sub_158D3C:loc_158D68-P
					; DATA XREF: BANK4:8002-o
		LDX		#0		; code used at a000
		STX		byte_59		; code used at a000
loc_6B503:				; CODE XREF: _b4_s1+30-j
		LDA		byte_6A77,X	; code used at a000
		BPL		loc_6B52C	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#8		; code used at a000
		STA		byte_5A		; code used at a000
loc_6B512:				; CODE XREF: _b4_s1+25-j
		LDA		byte_6A7B,X	; code used at a000
		AND		#7		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_530,Y	; code used at a000
		AND		byte_531,Y	; code used at a000
		BMI		loc_6B528	; code used at a000
		INX				; code used at a000
		DEC		byte_5A		; code used at a000
		BNE		loc_6B512	; code used at a000
		BEQ		loc_6B52A
loc_6B528:				; CODE XREF: _b4_s1+20-j
		INC		byte_59		; code used at a000
loc_6B52A:				; CODE XREF: _b4_s1+27-j
		PLA				; code used at a000
		TAX				; code used at a000
loc_6B52C:				; CODE XREF: _b4_s1+7-j
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_6B503	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s2:					; CODE XREF: sub_6ADF9+1D-p sub_6B58D-p
					; sub_158AA6+1F-P sub_15A7B5+9D-P
					; DATA XREF: BANK4:8004-o
		LDY		byte_64		; code used at a000
		INY				; code used as ind data	at a000
		LDX		#0		; code used at a000
loc_6B537:				; CODE XREF: _b4_s2+D-j	_b4_s2+12-j
		LDA		byte_6A77,X	; code used at a000
		BMI		loc_6B542	; code used at a000
		INX				; code used at a000
loc_6B53D:				; code used at a000
		CPX		#4
		BCC		loc_6B537	; code used at a000
		RTS				; code used at a000
loc_6B542:				; CODE XREF: _b4_s2+8-j
		INX				; code used as ind data	at a000
		DEY				; code used at a000
		BNE		loc_6B537	; code used at a000
		DEX				; code used at a000
		STX		byte_42		; code used at a000
		STX		byte_5A		; code used at a000
		LDX		byte_42		; code used at a000
		LDA		byte_6A6F,X	; code used at a000
		STA		byte_59		; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
		LDA		#8		; code used as ind data	at a000
		STA		byte_42		; code used at a000
loc_6B55D:				; CODE XREF: _b4_s2+56-j
		LDA		byte_6A7B,X	; code used as ind data	at a000
		BPL		loc_6B585	; code used as ind data	at a000
		TXA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		byte_6A7B,X	; code used as ind data	at a000
		AND		#7		; code used as ind data	at a000
		ASL		; code used at a000
		TAX				; code used as ind data	at a000
		LDA		byte_530,X	; code used at a000
		LSR		; code used as ind data	at a000
		LSR		; code used at a000
		AND		#3		; code used at a000
		CMP		byte_5A		; code used as ind data	at a000
		BEQ		loc_6B579	; code used at a000
		CLC				; code used at a000
		BCC		loc_6B580	; code used at a000
loc_6B579:				; CODE XREF: _b4_s2+42-j
		LDA		byte_531,X	; code used as ind data	at a000
		AND		byte_530,X	; code used as ind data	at a000
		ROL		; code used as ind data	at a000
loc_6B580:				; CODE XREF: _b4_s2+45-j
		PLA				; code used at a000
		TAX				; code used as ind data	at a000
		BCC		loc_6B585	; code used at a000
		INY				; code used at a000
loc_6B585:				; CODE XREF: _b4_s2+2E-j _b4_s2+50-j
		INX				; code used as ind data	at a000
		DEC		byte_42		; code used as ind data	at a000
		BNE		loc_6B55D	; code used as ind data	at a000
		STY		byte_5A		; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B58D:
		JSR		_b4_s2
		LDA		byte_5A
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B595:				; CODE XREF: sub_6AA3E+6-p
		JSR		sub_6B91D	; code used at a000
		LDA		byte_59		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
loc_6B5A0:				; CODE XREF: sub_6B595+18-j
		LDA		byte_6A7B,X	; code used at a000
		BPL		loc_6B5AC	; code used at a000
		AND		#7		; code used at a000
		CMP		byte_64		; code used at a000
		BEQ		loc_6B5B0	; code used at a000
		INY				; code used at a000
loc_6B5AC:				; CODE XREF: sub_6B595+E-j
		INX				; code used at a000
		JMP		loc_6B5A0	; code used at a000
loc_6B5B0:				; CODE XREF: sub_6B595+14-j
		STY		byte_B9		; code used at a000
		LDA		byte_59		; code used at a000
		STA		word_B7+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B5B7:				; CODE XREF: sub_68BB6:loc_68BC6-j
					; sub_68C64+CA-p sub_69058+14-p
					; sub_692B7+17-p sub_69370+71-p
					; sub_69370+8D-p sub_69604+3D-p
					; sub_69604:loc_696DF-p	sub_69931-p
					; sub_699A0+17-p sub_699A0+2E-p
					; sub_69A2E+22-p sub_69AE1:loc_69AEB-p
					; sub_69B74:loc_69B7E-p
					; sub_69CED:loc_69CF7-p
					; sub_69DAF:loc_69DB9-p
					; sub_69E2E:loc_69E38-p	sub_69E98-p
					; sub_69FC5:loc_69FF7-p	sub_6A3B5+D-p
					; sub_6A3D3+9-p	sub_6A3F8+30-p
					; sub_6A3F8+44-p sub_6A5D6+1A-p
					; sub_6A6C7+F-j	sub_6A74B:loc_6A755-p
					; sub_6A7BC:loc_6A7C3-p	sub_6AF5C-p
					; sub_6B01E-p sub_6B04B+19-p
					; sub_6B347+4A-p sub_6B398+A-p
					; sub_6B3C7+6-p
		JSR		_b4_s12		; code used as ind data	at a000
		STA		byte_D2		; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s12:				; CODE XREF: sub_3A7E9+43-P
					; sub_3A7E9+50-P sub_6AE6C+C-p
					; sub_6B5B7-p _bD_sF+48-P _bD_sC+1C-P
					; _bD_s20_npc_hndl33+1F-P
					; DATA XREF: BANK4:8024-o
		JSR		sub_6B91D	; code used as ind data	at a000
		LDX		byte_59		; code used as ind data	at a000
		LDA		byte_6A6F,X	; code used as ind data	at a000
		STA		byte_5A		; code used as ind data	at a000
		LDY		#0		; code used as ind data	at a000
		LDX		#0		; code used at a000
loc_6B5CB:				; CODE XREF: _b4_s12+3F-j
		LDA		byte_6A6F,X	; code used as ind data	at a000
		CMP		byte_5A		; code used at a000
		BNE		loc_6B5F9	; code used at a000
		STX		byte_5B		; code used as ind data	at a000
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#8		; code used at a000
		STA		byte_5C		; code used at a000
loc_6B5DD:				; CODE XREF: _b4_s12+38-j
		LDA		byte_6A7B,X	; code used as ind data	at a000
		BPL		loc_6B5F2	; code used at a000
		LDA		byte_59		; code used at a000
		CMP		byte_5B		; code used as ind data	at a000
		BNE		loc_6B5F1	; code used as ind data	at a000
		LDA		byte_6A7B,X	; code used at a000
		AND		#7		; code used at a000
		CMP		byte_64		; code used at a000
		BEQ		loc_6B5FE	; code used as ind data	at a000
loc_6B5F1:				; CODE XREF: _b4_s12+29-j
		INY				; code used at a000
loc_6B5F2:				; CODE XREF: _b4_s12+23-j
		INX				; code used as ind data	at a000
		DEC		byte_5C		; code used at a000
		BNE		loc_6B5DD	; code used as ind data	at a000
		LDX		byte_5B		; code used at a000
loc_6B5F9:				; CODE XREF: _b4_s12+13-j
		INX				; code used at a000
		CPX		#4		; code used as ind data	at a000
		BNE		loc_6B5CB	; code used at a000
loc_6B5FE:				; CODE XREF: _b4_s12+32-j
		JSR		sub_6B927	; code used at a000
		TYA				; code used as ind data	at a000
		AND		#7		; code used at a000
		ASL		; code used at a000
		ASL		; code used as ind data	at a000
		ORA		#$80       ; code used at a000
		ORA		byte_5A		; code used at a000
		PHA				; code used at a000
		JSR		sub_6B91D	; code used at a000
		TAX				; code used at a000
		LDA		byte_6A6F,X	; code used at a000
		LDX		#3		; code used as ind data	at a000
		LDY		#0		; code used at a000
loc_6B616:				; CODE XREF: _b4_s12:loc_6B61D-j
		CMP		byte_6A6F,X	; code used as ind data	at a000
		BNE		loc_6B61C	; code used as ind data	at a000
		INY				; code used at a000
loc_6B61C:				; CODE XREF: _b4_s12+5C-j
		DEX				; code used as ind data	at a000
loc_6B61D:				; code used at a000
		BPL		loc_6B616
		DEY				; code used as ind data	at a000
		BNE		loc_6B641	; code used as ind data	at a000
		LDA		byte_59		; code used at a000
		ASL		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
		STY		byte_5A		; code used at a000
loc_6B62C:				; CODE XREF: _b4_s12+7A-j
		LDA		byte_6A7B,X	; code used as ind data	at a000
		BPL		loc_6B633	; code used as ind data	at a000
		INC		byte_5A		; code used at a000
loc_6B633:				; CODE XREF: _b4_s12+72-j
		INX				; code used as ind data	at a000
		INY				; code used as ind data	at a000
		CPY		#8		; code used as ind data	at a000
		BNE		loc_6B62C	; code used as ind data	at a000
		DEC		byte_5A		; code used at a000
		BNE		loc_6B641	; code used as ind data	at a000
		PLA				; code used at a000
		ORA		#$20       ; code used at a000
		PHA				; code used at a000
loc_6B641:				; CODE XREF: _b4_s12+63-j _b4_s12+7E-j
		PLA				; code used at a000
		STA		byte_59		; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B645:				; CODE XREF: sub_6AABA+A9-p sub_6ADD1-p
					; _b4_s19+B-p sub_6B697-p
		LDA		byte_64		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAX				; code used at a000
		LDA		byte_500,X	; code used at a000
		STA		byte_59		; code used at a000
		LDA		byte_501,X	; code used at a000
		STA		byte_5A		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s19:				; CODE XREF: sub_207B6+2E-P
					; sub_69370+63-p sub_6A5D6+17-p
					; DATA XREF: BANK4:8032-o
		JSR		sub_6B6B8	; code used at a000
		LDA		byte_59		; code used at a000
		STA		byte_5B		; code used at a000
		LDA		byte_5A		; code used at a000
		STA		byte_5C		; code used at a000
		JSR		sub_6B645	; code used at a000
		CLC				; code used at a000
		LDA		byte_65		; code used at a000
		ADC		byte_59		; code used at a000
		STA		byte_59		; code used at a000
		LDA		byte_66		; code used at a000
		ADC		byte_5A		; code used at a000
		STA		byte_5A		; code used at a000
		BCS		loc_6B68C	; code used at a000
		CMP		byte_5C		; code used at a000
		BEQ		loc_6B679	; code used at a000
		BCS		loc_6B68C	; code used at a000
		BCC		loc_6B681	; code used at a000
loc_6B679:				; CODE XREF: _b4_s19+1F-j
		LDA		byte_59		; code used at a000
		CMP		byte_5B		; code used at a000
		BEQ		loc_6B681	; code used at a000
		BCS		loc_6B68C	; code used at a000
loc_6B681:				; CODE XREF: _b4_s19+23-j _b4_s19+29-j
					; _b4_s19+40-j sub_6B697+16-j
					; sub_6B697+1E-j
		LDA		byte_59		; code used as ind data	at a000
		STA		byte_500,X	; code used at a000
		LDA		byte_5A		; code used as ind data	at a000
		STA		byte_501,X	; code used at a000
		RTS				; code used at a000
loc_6B68C:				; CODE XREF: _b4_s19+1B-j _b4_s19+21-j
					; _b4_s19+2B-j
		LDA		byte_5B		; code used at a000
		STA		byte_59		; code used at a000
		LDA		byte_5C		; code used at a000
		STA		byte_5A		; code used at a000
		JMP		loc_6B681	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B697:				; CODE XREF: sub_699A0+43-p
					; sub_69A2E+3E-p sub_6A10F+6-p
					; sub_6A3D3+6-p	sub_6A3F8+9F-p
		JSR		sub_6B645	; code used as ind data	at a000
		SEC				; code used as ind data	at a000
		LDA		byte_59		; code used as ind data	at a000
		SBC		byte_65		; code used at a000
		STA		byte_59		; code used as ind data	at a000
		LDA		byte_5A		; code used as ind data	at a000
		SBC		byte_66		; code used as ind data	at a000
		STA		byte_5A		; code used at a000
		BCC		loc_6B6AF	; code used as ind data	at a000
		ORA		byte_59		; code used at a000
		BEQ		loc_6B6AF	; code used at a000
		BNE		loc_6B681	; code used at a000
loc_6B6AF:				; CODE XREF: sub_6B697+10-j
					; sub_6B697+14-j
		LDA		#0		; code used at a000
		STA		byte_59		; code used at a000
		STA		byte_5A		; code used at a000
		JMP		loc_6B681	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B6B8:				; CODE XREF: sub_68C64+94-p
					; sub_69370+4E-p _b4_s19-p
					; sub_6BACB+13-p sub_6BC67-p sub_6BC86-p
		JSR		sub_6B888	; code used at a000
		LDY		#7		; code used at a000
		JSR		sub_6BB36	; code used at a000
		STA		byte_59		; code used at a000
		LDY		#$15		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#3		; code used as ind data	at a000
		STA		byte_5A		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s4:					; CODE XREF: sub_68567-p
					; DATA XREF: BANK4:8008-o
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6B888	; code used at a000
		LDY		#0		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#$3F       ; code used at a000
		STA		byte_59		; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B6E3:				; CODE XREF: _b4_s28+51-p sub_6A35F+D-p
					; sub_6A676+1F-p sub_6B6EB+7-p
					; sub_6B70B-p
		LDX		byte_64		; code used at a000
		LDA		byte_510,X	; code used at a000
		STA		byte_59		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B6EB:				; CODE XREF: sub_69135+2E-j
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
loc_6B700:				; CODE XREF: sub_6B6EB+1D-j
		STA		byte_510,X
locret_6B703:
		RTS
loc_6B704:				; CODE XREF: sub_6B6EB+F-j
					; sub_6B6EB+13-j
		LDA		byte_5A
		STA		byte_59
		JMP		loc_6B700

; =============== S U B	R O U T	I N E =======================================
sub_6B70B:				; CODE XREF: sub_6A35F:loc_6A37D-p
					; sub_6A676+2F-p
		JSR		sub_6B6E3	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_6B71F	; code used at a000
		SEC				; code used at a000
		SBC		byte_65		; code used at a000
		BCC		loc_6B722	; code used at a000
		LDX		byte_64		; code used at a000
		STA		byte_510,X	; code used at a000
		PHA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000
loc_6B71F:				; CODE XREF: sub_6B70B+5-j
		LDA		#$FF		; code used at a000
		RTS				; code used at a000
loc_6B722:				; CODE XREF: sub_6B70B+A-j
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B725:				; CODE XREF: sub_6A676:loc_6A6B2-p
		LDX		byte_64
		LDA		#0
		STA		byte_510,X
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B72F:				; CODE XREF: sub_68C64+A1-p sub_6B6EB-p
					; sub_6BACB+40-p
		JSR		sub_6B888	; code used as ind data	at a000
		LDY		#8		; code used as ind data	at a000
		JSR		sub_6BB36	; code used at a000
		STA		byte_59		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_5A		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B73E:				; CODE XREF: sub_68183+24-p sub_6B751-p
		LDX		byte_64		; code used as ind data	at a000
		LDA		byte_518,X	; code used at a000
		STA		byte_59		; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B746:				; CODE XREF: sub_68C64+B8-p
					; sub_69AE1+14-p sub_69B74+D-p
					; sub_6BACB+4A-p
		JSR		sub_6B888	; code used at a000
		LDY		#3		; code used at a000
		JSR		sub_6BB36	; code used at a000
		STA		byte_59		; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B751:
		JSR		sub_6B73E
		CLC
		LDA		byte_65
		ADC		byte_59
		BCC		loc_6B75D
		LDA		#$FF
loc_6B75D:				; CODE XREF: sub_6B751+8-j
		STA		byte_59
		STA		byte_518,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B763:				; CODE XREF: sub_68BC9+16-p
					; sub_6AD2B+8-p	sub_6AD8F+4-p
		JSR		sub_6B888	; code used at a000
		LDY		#5		; code used at a000
		JSR		sub_6BB36	; code used at a000
		STA		byte_59		; code used as ind data	at a000
		LDY		#$13		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#3		; code used as ind data	at a000
		STA		byte_5A		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B777:				; CODE XREF: sub_6A74B+19-p sub_6ACD6-p
					; sub_6B79A-p sub_6B79A+33-p
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_520,X	; code used at a000
		STA		byte_59		; code used at a000
		LDA		byte_521,X	; code used at a000
		STA		byte_5A		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B786:				; CODE XREF: sub_68C64+AB-p
					; sub_6A74B+12-p sub_6A7BC+A-p
					; sub_6BACB+54-p
		JSR		sub_6B888	; code used at a000
		LDY		#6		; code used at a000
		JSR		sub_6BB36	; code used at a000
		STA		byte_59		; code used at a000
		LDY		#$14		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#3		; code used as ind data	at a000
		STA		byte_5A		; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B79A:
		JSR		sub_6B777
		CLC
		LDA		byte_65
		ADC		byte_59
		STA		byte_59
		LDA		byte_66
		AND		#3
		ADC		byte_5A
		STA		byte_5A
		CMP		#3
		BEQ		loc_6B7C5
		BCC		loc_6B7BA
loc_6B7B2:				; CODE XREF: sub_6B79A+2F-j
		LDA		#3
		STA		byte_5A
		LDA		#$E7 
		STA		byte_59
loc_6B7BA:				; CODE XREF: sub_6B79A+16-j
					; sub_6B79A+31-j
		LDA		byte_59
		STA		byte_520,X
		LDA		byte_5A
		STA		byte_521,X
		RTS
loc_6B7C5:				; CODE XREF: sub_6B79A+14-j
		LDA		byte_59
		CMP		#$E7 
		BCS		loc_6B7B2
		BCC		loc_6B7BA
		JSR		sub_6B777
		SEC
		LDA		byte_59
		SBC		byte_65
		STA		byte_59
		LDA		byte_5A
		SBC		byte_66
		STA		byte_5A
		BCC		loc_6B7EA
loc_6B7DF:				; CODE XREF: sub_6B79A+56-j
		LDA		byte_59
		STA		byte_520,X
		LDA		byte_5A
		STA		byte_521,X
		RTS
loc_6B7EA:				; CODE XREF: sub_6B79A+43-j
		LDA		#0
		STA		byte_59
		STA		byte_5A
		BEQ		loc_6B7DF

; =============== S U B	R O U T	I N E =======================================
sub_6B7F2:				; CODE XREF: sub_6ADE4+5-p
		JSR		sub_6B8F3	; code used at a000
		BCS		locret_6B81C	; code used at a000
		JSR		sub_6B888	; code used at a000
		LDY		#1		; code used at a000
		JSR		sub_6BB36	; code used at a000
		CLC				; code used at a000
		ADC		byte_5D		; code used at a000
		STA		byte_5D		; code used at a000
		INY				; code used at a000
		PHP				; code used at a000
		JSR		sub_6BB36	; code used at a000
		PLP				; code used at a000
		ADC		word_5E		; code used at a000
		STA		word_5E		; code used at a000
		BCC		locret_6B81C	; code used at a000
		INC		word_5E+1
		BNE		locret_6B81C
		LDA		#$FF
		STA		byte_5D
		STA		word_5E
		STA		word_5E+1
locret_6B81C:				; CODE XREF: sub_6B7F2+3-j
					; sub_6B7F2+1C-j sub_6B7F2+20-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B81D:				; CODE XREF: sub_6ADEC-p
		JSR		sub_6B8F3	; code used at a000
		BCS		locret_6B83C	; code used at a000
		JSR		sub_6B888	; code used at a000
		LDY		#4		; code used at a000
		JSR		sub_6BB36	; code used at a000
		CLC				; code used at a000
		ADC		word_60		; code used at a000
		STA		word_60		; code used at a000
		LDY		#$12		; code used at a000
		PHP				; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#3		; code used at a000
		PLP				; code used at a000
		ADC		word_60+1	; code used at a000
		STA		word_60+1	; code used at a000
locret_6B83C:				; CODE XREF: sub_6B81D+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s17:				; CODE XREF: _b1_sD+CE-P
					; DATA XREF: BANK4:802E-o
		LDY		byte_64		; code used at a000
		JSR		loc_6B892	; code used at a000
		LDY		#9		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#$7F       ; code used at a000
		CMP		#$7F       ; code used at a000
		BEQ		loc_6B874	; code used at a000
		STA		byte_59		; code used at a000
		LDY		#$16		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#7		; code used at a000
		BEQ		locret_6B873	; code used at a000
		CMP		#7		; code used at a000
		BEQ		loc_6B879	; code used at a000
		STA		byte_5A		; code used at a000
		LDA		#7		; code used at a000
		SEC				; code used at a000
		SBC		byte_5A		; code used at a000
		TAY				; code used at a000
		LDA		#0		; code used at a000
loc_6B866:				; CODE XREF: _b4_s17+2B-j
		ROL		; code used at a000
		DEY				; code used at a000
		BNE		loc_6B866	; code used at a000
		STA		byte_5A		; code used at a000
		JSR		sub_1743B8	; code used at a000
		CMP		byte_5A		; code used at a000
		BCS		loc_6B874	; code used at a000
locret_6B873:				; CODE XREF: _b4_s17+19-j
		RTS				; code used at a000
loc_6B874:				; CODE XREF: _b4_s17+E-j _b4_s17+34-j
					; _b4_s17+41-j _b4_s17+48-j
		LDA		#$FF		; code used at a000
		STA		byte_59		; code used at a000
		RTS				; code used at a000
loc_6B879:				; CODE XREF: _b4_s17+1D-j
		JSR		sub_1743B8	; code used at a000
		STA		byte_5A		; code used at a000
		BNE		loc_6B874	; code used at a000
		JSR		sub_1743B8
		CMP		#$20 
		BCS		loc_6B874
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B888:				; CODE XREF: sub_6B6B8-p _b4_s4+5-p
					; sub_6B72F-p sub_6B746-p sub_6B763-p
					; sub_6B786-p sub_6B7F2+5-p
					; sub_6B81D+5-p	sub_6B974+2-p
					; sub_6B994-p sub_6B9D2-p sub_6B9F2+5-p
					; sub_6BA04-p
		JSR		sub_6B91D	; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDY		byte_6A73,X	; code used as ind data	at a000
		JMP		loc_6B892	; code used as ind data	at a000
loc_6B892:				; CODE XREF: _b4_s17+2-p
		LDA		#$17		; code used as ind data	at a000
		STA		word_4A		; code used at a000
		LDA		#0		; code used as ind data	at a000
		STA		word_4A+1	; code used as ind data	at a000
		LDX		#word_4A	; code used as ind data	at a000
		TYA				; code used as ind data	at a000
		JSR		_mul16_to_8	; code used as ind data	at a000
		LDA		#$6A       ; code used as ind data at a000
		LDX		#byte_5B	; code used as ind data	at a000
		JSR		_get_syscall0_bank_ptr_no_prg_change ; code used as ind	data at	a000
		CLC				; code used as ind data	at a000
		LDA		byte_5B		; code used at a000
		ADC		word_4A		; code used as ind data	at a000
		STA		word_4A		; code used as ind data	at a000
		LDA		byte_5C		; code used at a000
		ADC		word_4A+1	; code used as ind data	at a000
		STA		word_4A+1	; code used as ind data	at a000
		LDX		#word_4A	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B8B7:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA20
		BPL		loc_6B8C4
loc_6B8C1:				; CODE XREF: sub_6B8CB+C-j
					; sub_6B8CB+1A-j sub_6B8E7+A-j
					; sub_6B8F3+C-j	sub_6B901+C-j
					; sub_6B901+1A-j
		SEC				; code used at a000
		BCS		loc_6B8C5	; code used at a000
loc_6B8C4:				; CODE XREF: sub_6B8B7+8-j sub_6B8CB+A-j
					; sub_6B8CB+18-j sub_6B8E7+8-j
					; sub_6B8F3+A-j	sub_6B901+A-j
					; sub_6B901+18-j
		CLC				; code used at a000
loc_6B8C5:				; CODE XREF: sub_6B8B7+B-j
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B8CB:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA20
		AND		#$10
		BEQ		loc_6B8C4
		BNE		loc_6B8C1
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA20
		AND		#$F
		BEQ		loc_6B8C4
		BNE		loc_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B8E7:				; CODE XREF: _b4_s26+6D-p
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BA26	; code used at a000
		BPL		loc_6B8C4	; code used at a000
		BMI		loc_6B8C1	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B8F3:				; CODE XREF: sub_6B7F2-p sub_6B81D-p
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BA26	; code used at a000
		AND		#$40       ; code used at a000
		BEQ		loc_6B8C4	; code used at a000
		BNE		loc_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B901:				; CODE XREF: _b4_s28+7D-p sub_69DAF+D-p
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used as ind data	at a000
		JSR		sub_6BA26	; code used at a000
		AND		#$20       ; code used as ind data at a000
		BEQ		loc_6B8C4	; code used at a000
		BNE		loc_6B8C1	; code used at a000
loc_6B90F:				; CODE XREF: sub_69E2E+D-p
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BA26	; code used at a000
		AND		#$10		; code used at a000
		BEQ		loc_6B8C4	; code used at a000
		BNE		loc_6B8C1	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B91D:				; CODE XREF: sub_6843E-p sub_68453+C-p
					; _b4_s2B+8-p sub_68576+6-p
					; sub_6868C+4-p	sub_686BB+2-p
					; sub_686BB:loc_686CB-p
					; sub_6870D:loc_687CC-p	sub_687E3-p
					; sub_687E3+20-p sub_68C64+8-p
					; sub_69370:loc_6939C-p	sub_69370+66-p
					; sub_69370:loc_693ED-p	sub_69840+81-p
					; sub_6A8B3+2B-p sub_6ADEC+3-p
					; sub_6B595-p _b4_s12-p	_b4_s12+4E-p
					; sub_6B888-p
		JSR		sub_6BA26	; code used as ind data	at a000
		AND		#$C		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		STA		byte_59		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B927:				; CODE XREF: sub_6ADF9+16-p
					; _b4_s12:loc_6B5FE-p
		TYA				; code used at a000
		PHA				; code used at a000
		LDY		byte_59		; code used as ind data	at a000
		INY				; code used as ind data	at a000
		LDA		#$FF		; code used as ind data	at a000
		STA		byte_5A		; code used at a000
		LDX		#0		; code used at a000
loc_6B932:				; CODE XREF: sub_6B927+14-j
		LDA		byte_6A77,X	; code used at a000
		BPL		loc_6B939	; code used as ind data	at a000
		INC		byte_5A		; code used as ind data	at a000
loc_6B939:				; CODE XREF: sub_6B927+E-j
		INX				; code used as ind data	at a000
		DEY				; code used at a000
		BNE		loc_6B932	; code used at a000
		BEQ		loc_6B957	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s3:					; CODE XREF: _b2_sB+119-P _b2_sB+245-P
					; sub_6ADF9+2B-p
					; DATA XREF: BANK4:8006-o
		TYA				; code used at a000
		PHA				; code used at a000
		LDY		byte_59		; code used at a000
		INY				; code used at a000
		LDA		#0		; code used at a000
		STA		byte_5A		; code used at a000
loc_6B948:				; CODE XREF: _b4_s3+15-j
		LDX		byte_5A		; code used at a000
		LDA		byte_6A77,X	; code used at a000
		BPL		loc_6B952	; code used at a000
		DEY				; code used at a000
		BEQ		loc_6B957	; code used at a000
loc_6B952:				; CODE XREF: _b4_s3+E-j
		INC		byte_5A		; code used at a000
		JMP		loc_6B948	; code used at a000
loc_6B957:				; CODE XREF: sub_6B927+16-j _b4_s3+11-j
		PLA				; code used at a000
		TAY				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B95A:				; CODE XREF: sub_68931+F3-p
					; sub_69604+68-p sub_69CED+D-p
		JSR		sub_6BA20	; code used at a000
		AND		#$20       ; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B960:				; CODE XREF: _b4_s27-p
		LDY		#$C		; code used as ind data	at a000
		JMP		sub_6B974	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s29:				; CODE XREF: _b4_s28-p sub_686E1-p
					; sub_68931+A0-p sub_F824D:loc_F825C-P
					; DATA XREF: BANK4:8052-o
		LDY		#$A		; code used as ind data	at a000
		JMP		sub_6B974	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s2A:				; CODE XREF: sub_68931+A9-p
					; sub_F824D+16-P
					; DATA XREF: BANK4:8054-o
		LDY		#$E		; code used at a000
		JMP		sub_6B974	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s18:				; CODE XREF: sub_207B6+10-P
					; DATA XREF: BANK4:8030-o
		LDY		#$10		; code used at a000
		JMP		sub_6B974	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B974:				; CODE XREF: sub_6B960+2-j _b4_s29+2-j
					; _b4_s2A+2-j
		TYA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		JSR		sub_6B888	; code used as ind data	at a000
		PLA				; code used at a000
		TAY				; code used as ind data	at a000
		JSR		sub_6BB36	; code used as ind data	at a000
		AND		#$80       ; code used as ind data at a000
		ROL		; code used as ind data	at a000
		ROL		; code used at a000
		STA		byte_59		; code used as ind data	at a000
		INY				; code used as ind data	at a000
		JSR		sub_6BB36	; code used at a000
		AND		#$80       ; code used as ind data at a000
		ROL		; code used at a000
		ROL		; code used as ind data	at a000
		ROL		; code used as ind data	at a000
		ORA		byte_59		; code used as ind data	at a000
		AND		#3		; code used as ind data	at a000
		STA		byte_59		; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B994:				; CODE XREF: sub_697DE+31-p
					; sub_6A337:loc_6A345-p
		JSR		sub_6B888	; code used at a000
		LDA		byte_65		; code used at a000
		LDY		#$12		; code used at a000
loc_6B99B:				; CODE XREF: sub_6B994+B-j
		INY				; code used at a000
		SEC				; code used at a000
		SBC		#3		; code used at a000
		BCS		loc_6B99B	; code used at a000
		ADC		#3		; code used at a000
		TAX				; code used at a000
		STX		byte_59		; code used at a000
		DEY				; code used at a000
		LDA		byte_6B9CB,X	; code used at a000
		PHA				; code used at a000
		LDX		#word_4A	; code used at a000
		LDA		#0		; code used at a000
		JSR		_get_far_ptr_byte_safe ; code used at a000
		STA		byte_5A		; code used at a000
		PLA				; code used at a000
		AND		byte_5A		; code used at a000
		PHA				; code used at a000
		LDA		#3		; code used at a000
		SEC				; code used at a000
		SBC		byte_59		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
loc_6B9C0:				; CODE XREF: sub_6B994+2E-j
		LSR		; code used at a000
		DEX				; code used at a000
		BNE		loc_6B9C0	; code used at a000
		TAX				; code used at a000
		LDA		byte_6B9CE,X	; code used at a000
		STA		byte_59		; code used at a000
		RTS				; code used at a000
byte_6B9CB:
		.BYTE $C0,$30, $C	; DATA XREF: sub_6B994+13-r
					; data used at a000
byte_6B9CE:
		.BYTE	0,$4D,$B3,$FF	; DATA XREF: sub_6B994+31-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B9D2:				; CODE XREF: sub_69604+6D-p
		JSR		sub_6B888	; code used at a000
		LDY		#0		; code used at a000
		JSR		sub_6BB36	; code used as ind data	at a000
		AND		#$C0       ; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		byte_59		; code used at a000
		LDY		#9		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#$80       ; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		ORA		byte_59		; code used at a000
		STA		byte_59		; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6B9F2:				; CODE XREF: _b4_s27+54-p
		TYA				; code used as ind data	at a000
		CLC				; code used at a000
		ADC		#$A		; code used at a000
		PHA				; code used at a000
		JSR		sub_6B888	; code used as ind data	at a000
		PLA				; code used at a000
		TAY				; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#$7F       ; code used as ind data at a000
		STA		byte_59		; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA04:				; CODE XREF: _b4_s2B-p
		JSR		sub_6B888	; code used at a000
		LDY		#$16		; code used at a000
		JSR		sub_6BB36	; code used at a000
		AND		#8		; code used at a000
		STA		byte_59		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA11:				; CODE XREF: sub_6BA20-p sub_6BA26-p
		LDA		byte_64		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_530,X	; code used as ind data	at a000
		STA		byte_5B		; code used as ind data	at a000
		LDA		byte_531,X	; code used as ind data	at a000
		STA		byte_5C		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA20:				; CODE XREF: sub_6B8B7+5-p sub_6B8CB+5-p
					; sub_6B8CB+13-p sub_6B95A-p
		JSR		sub_6BA11	; code used as ind data	at a000
		LDA		byte_5C		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA26:				; CODE XREF: sub_6B8E7+5-p sub_6B8F3+5-p
					; sub_6B901+5-p	sub_6B901+13-p
					; sub_6B91D-p
		JSR		sub_6BA11	; code used as ind data	at a000
		LDA		byte_5B		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s16:				; CODE XREF: sub_3A93C+3-P _b4_s21+7-j
					; DATA XREF: BANK4:802C-o
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BA46	; code used at a000
		TXA				; code used at a000
		LSR		; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		JMP		loc_6BA3F	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s5:					; CODE XREF: _b1_s9+2A-P _b1_s9+63-P
					; _b1_s9+94-P _b1_sD+1C-P _b2_sB+20B-P
					; _b2_sB+20E-P _b2_sB+211-P _b2_sB+214-P
					; _b2_sB+380-P sub_69058+1D-p
					; sub_69E5B+7-p	sub_6A23B+3-j
					; sub_6A3F8+64-j sub_6A9E0+7-j
					; sub_6B027+13-p sub_6B027+16-p
					; DATA XREF: BANK4:800A-o
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BA46	; code used at a000
loc_6BA3F:				; CODE XREF: _b4_s16+A-j
		JSR		_vblank_count	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA46:				; CODE XREF: _b4_s16+3-p _b4_s5+3-p
		LDX		byte_6DD	; code used at a000
		CPX		#7		; code used at a000
		BCS		loc_6BA52	; code used at a000
		LDA		byte_6BA55,X	; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000
loc_6BA52:				; CODE XREF: sub_6BA46+5-j
		LDX		#1		; code used at a000
		RTS				; code used at a000
byte_6BA55:
		.BYTE $18,$24,$30,$3C,$48,$54,$64 ; DATA XREF: sub_6BA46+7-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_sE:					; CODE XREF: sub_A3FB+91-P _bD_s29+11-P
					; DATA XREF: BANK4:801C-o
		LDA		#$1F		; code used at a000
		STA		byte_42		; code used at a000
		LDX		#$10		; code used at a000
		BNE		sub_6BA6A	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA64:				; CODE XREF: sub_6ACD9:loc_6AD00-p
		LDA		#$F		; code used as ind data	at a000
		STA		byte_42		; code used as ind data	at a000
		LDX		#$20       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA6A:				; CODE XREF: _b4_sE+6-j	sub_6BA6A+2A-j
		TXA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		STX		word_3C		; code used at a000
		LSR		word_3C		; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000
		STA		word_3C+1	; code used as ind data	at a000
loc_6BA74:				; CODE XREF: sub_6BA6A+1B-j
		JSR		sub_1743B8	; code used as ind data	at a000
		LDA		byte_1C		; code used as ind data	at a000
		AND		byte_42		; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		ADC		word_3C		; code used as ind data	at a000
		STA		word_3C		; code used as ind data	at a000
		BCC		loc_6BA84	; code used as ind data	at a000
		INC		word_3C+1	; code used at a000
loc_6BA84:				; CODE XREF: sub_6BA6A+16-j
		DEX				; code used as ind data	at a000
		BNE		loc_6BA74	; code used as ind data	at a000
		PLA				; code used at a000
		TAX				; code used as ind data	at a000
		LDA		word_3C		; code used as ind data	at a000
		SEC				; code used as ind data	at a000
		SBC		#$80       ; code used at a000
		STA		word_3C		; code used as ind data	at a000
		LDA		word_3C+1	; code used as ind data	at a000
		SBC		#0		; code used as ind data	at a000
		BNE		sub_6BA6A	; code used as ind data	at a000
		STA		word_3C+1	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BA99:				; CODE XREF: _b4_s26+54-p
		LDX		#0		; code used at a000
loc_6BA9B:				; CODE XREF: sub_6BA99+11-j
		LDA		byte_6A77,X	; code used at a000
		BPL		loc_6BAA7	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BAAD	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
loc_6BAA7:				; CODE XREF: sub_6BA99+5-j
		INX				; code used at a000
		CPX		#4		; code used as ind data	at a000
		BNE		loc_6BA9B	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BAAD:				; CODE XREF: sub_6BA99+9-p
		ASL		; code used as ind data	at a000
		ASL		; code used at a000
		ASL		; code used at a000
		STA		byte_44		; code used at a000
		LDA		#8		; code used at a000
		STA		_tmp12+1	; code used at a000
loc_6BAB6:				; CODE XREF: sub_6BAAD+1B-j
		LDY		byte_44		; code used as ind data	at a000
		LDA		byte_6A7B,Y	; code used at a000
		BPL		loc_6BAC4	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BACB	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
loc_6BAC4:				; CODE XREF: sub_6BAAD+E-j
		INC		byte_44		; code used as ind data	at a000
		DEC		_tmp12+1	; code used as ind data	at a000
		BNE		loc_6BAB6	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BACB:				; CODE XREF: sub_6BAAD+12-p
		LDA		byte_6A7B,Y	; code used at a000
		AND		#7		; code used at a000
		STA		byte_43		; code used at a000
		STA		byte_64		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_530,Y	; code used as ind data	at a000
		JSR		sub_6B6B8	; code used as ind data	at a000
		LDA		byte_59		; code used as ind data	at a000
		STA		byte_5B		; code used at a000
		LDA		byte_5A		; code used at a000
		STA		byte_5C		; code used at a000
		LSR		byte_5C		; code used at a000
		ROR		byte_5B		; code used at a000
		LSR		byte_5C		; code used as ind data	at a000
		ROR		byte_5B		; code used as ind data	at a000
		INC		byte_5B		; code used as ind data	at a000
		LDA		byte_5B		; code used as ind data	at a000
		JSR		_b4_sF		; code used at a000
		LDX		#byte_59	; code used at a000
		JSR		_add_8_to_neg16	; code used at a000
		LDA		byte_43		; code used as ind data	at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_59		; code used at a000
		STA		byte_500,Y	; code used as ind data	at a000
		LDA		byte_5A		; code used at a000
		STA		byte_501,Y	; code used at a000
		JSR		sub_6B72F	; code used at a000
		LDY		byte_43		; code used as ind data	at a000
		LDA		byte_59		; code used at a000
		STA		byte_510,Y	; code used as ind data	at a000
		JSR		sub_6B746	; code used as ind data	at a000
		LDY		byte_43		; code used at a000
		LDA		byte_59		; code used as ind data	at a000
		STA		byte_518,Y	; code used at a000
		JSR		sub_6B786	; code used at a000
		LDA		byte_43		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_59		; code used at a000
		STA		byte_520,Y	; code used at a000
		LDA		byte_5A		; code used at a000
		STA		byte_521,Y	; code used as ind data	at a000
		LDA		#$80       ; code used at a000
		STA		byte_531,Y	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BB36:				; CODE XREF: sub_6B6B8+5-p sub_6B6B8+C-p
					; _b4_s4+A-p sub_6B72F+5-p sub_6B746+5-p
					; sub_6B763+5-p	sub_6B763+C-p
					; sub_6B786+5-p	sub_6B786+C-p
					; sub_6B7F2+A-p	sub_6B7F2+14-p
					; sub_6B81D+A-p	sub_6B81D+15-p
					; _b4_s17+7-p _b4_s17+14-p sub_6B974+7-p
					; sub_6B974+11-p sub_6B9D2+5-p
					; sub_6B9D2+11-p sub_6B9F2+A-p
					; sub_6BA04+5-p
		LDA		#0		; code used as ind data	at a000
		JMP		_get_far_ptr_byte_safe ; code used as ind data at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s23:				; CODE XREF: _b4_s28+D-p sub_685A0+2-p
					; sub_68638-p sub_68643+2-p
					; sub_68643+12-p sub_68660+C-p
					; sub_686E7+2-j	sub_686F4+2-j
					; sub_68701-p sub_6A0B4+2-p
					; sub_F846B+2-P
					; DATA XREF: BANK4:8046-o
		STA		word_4		; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		word_4		; code used as ind data	at a000
		JSR		sub_6BB4D	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		word_6+1	; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BB4D:				; CODE XREF: _b4_s23+8-p
		CMP		#2		; code used at a000
		BCS		loc_6BB5E	; code used at a000
		LDA		off_6BC0B	; code used at a000
		LDX		off_6BC0B+1	; code used at a000
		JSR		sub_6BBCB	; code used at a000
		LDA		#8		; code used at a000
		BNE		loc_6BB85	; code used at a000
loc_6BB5E:				; CODE XREF: sub_6BB4D+2-j
		CMP		#$10		; code used as ind data	at a000
		BCC		loc_6BB72	; code used as ind data	at a000
		SBC		#$10		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		off_6BC11,Y	; code used as ind data	at a000
		LDX		off_6BC11+1,Y	; code used at a000
		JSR		sub_6BBCB	; code used at a000
		JMP		loc_6BB85	; code used at a000
loc_6BB72:				; CODE XREF: sub_6BB4D+13-j
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used as ind data	at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		off_6BC0D,Y	; code used as ind data	at a000
		LDX		off_6BC0D+1,Y	; code used as ind data	at a000
		JSR		sub_6BBCB	; code used at a000
		LDX		word_4		; code used at a000
		LDA		byte_6BBFD-2,X	; code used as ind data	at a000
loc_6BB85:				; CODE XREF: sub_6BB4D+F-j
					; sub_6BB4D+22-j
		STA		word_4+1	; code used at a000
		JSR		sub_6BBD5	; code used as ind data	at a000
loc_6BB8A:				; CODE XREF: sub_6BB4D+50-j
		TXA				; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAY				; code used as ind data	at a000
		LDA		byte_73C,Y	; code used as ind data	at a000
		AND		byte_73D,Y	; code used as ind data	at a000
		BMI		loc_6BBA2	; code used as ind data	at a000
loc_6BB95:				; CODE XREF: sub_6BB4D+75-j
					; sub_6BB4D+7A-j sub_6BBF9-j
		JSR		sub_6BBDD	; code used at a000
loc_6BB98:				; CODE XREF: sub_6BB4D+77-j
					; sub_6BB4D+7C-j sub_6BBF9+2-j
		ASL		word_6		; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#4		; code used as ind data	at a000
		BNE		loc_6BB8A	; code used at a000
		LDA		word_6+1	; code used at a000
		RTS				; code used as ind data	at a000
loc_6BBA2:				; CODE XREF: sub_6BB4D+46-j
		TXA				; code used at a000
		LDY		word_4		; code used as ind data	at a000
		CPY		#$10		; code used as ind data	at a000
		BCC		loc_6BBAE	; code used as ind data	at a000
		ASL		; code used at a000
		TAY				; code used at a000
		JMP		(word_3C)	; code used at a000
loc_6BBAE:				; CODE XREF: sub_6BB4D+5A-j
		LDY		word_4		; code used as ind data	at a000
		CPY		#2		; code used as ind data	at a000
		BCC		loc_6BBB5	; code used as ind data	at a000
		ASL		; code used as ind data	at a000
loc_6BBB5:				; CODE XREF: sub_6BB4D+65-j
		TAY				; code used as ind data	at a000
		LDA		(word_3C),Y	; code used as ind data	at a000
		AND		word_4+1	; code used as ind data	at a000
		PHP				; code used as ind data	at a000
		LDA		word_4		; code used as ind data	at a000
		CMP		#$F		; code used as ind data	at a000
		BEQ		loc_6BBC6	; code used at a000
		PLP				; code used at a000
		BNE		loc_6BB95	; code used at a000
		BEQ		loc_6BB98	; code used at a000
loc_6BBC6:				; CODE XREF: sub_6BB4D+72-j
		PLP				; code used as ind data	at a000
		BEQ		loc_6BB95	; code used as ind data	at a000
		BNE		loc_6BB98	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBCB:				; CODE XREF: _b4_s28+8C-p sub_6BB4D+A-p
					; sub_6BB4D+1F-p sub_6BB4D+30-p
					; sub_6BC27+8-p
		STA		word_3C		; code used at a000
		STX		word_3C+1	; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBD0:				; CODE XREF: _b4_s2B+22-p sub_69B1B+B-p
					; sub_6AF34+6-p
		STA		word_3E		; code used at a000
		STX		word_3E+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBD5:				; CODE XREF: sub_6BB4D+3A-p
					; sub_6BC27+B-p	sub_6BCBF+2-p
		LDX		#1		; code used as ind data	at a000
		STX		word_6		; code used at a000
		DEX				; code used as ind data	at a000
		STX		word_6+1	; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBDD:				; CODE XREF: sub_6BB4D:loc_6BB95-p
					; sub_6BC27:loc_6BC3F-p	sub_6BCBF+10-p
		LDA		word_6		; code used as ind data	at a000
		ORA		word_6+1	; code used as ind data	at a000
		STA		word_6+1	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBE4:				; DATA XREF: BANK4:off_6BC11-o
		LDA		byte_6AA3,Y	; ind code used	at a000
		ORA		byte_6AA4,Y	; code used at a000
		JMP		sub_6BBF9	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBED:				; DATA XREF: BANK4:BC13-o
		LDA		byte_6A9F,X	; ind code used	at a000
		JMP		sub_6BBF9	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBF3:				; DATA XREF: BANK4:BC15-o
		LDA		byte_72C,Y	; ind code used	at a000
		ORA		byte_72D,Y	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BBF9:				; CODE XREF: sub_6BBE4+6-j sub_6BBED+3-j
		BEQ		loc_6BB95	; code used at a000
		BNE		loc_6BB98	; code used at a000
byte_6BBFD:
		.BYTE	4,  8,$10,$20,$40,$80, $F, $F, $F, $F,$10,$20,$40,$80
					; DATA XREF: sub_6BB4D+35-r
off_6BC0B:
		.WORD byte_6A9B		; DATA XREF: sub_6BB4D+4-r sub_6BB4D+7-r
					; data used at a000
off_6BC0D:
		.WORD byte_73C		; DATA XREF: sub_6BB4D+2A-r
					; sub_6BB4D+2D-r
					; data used at a000
		.WORD byte_73D
off_6BC11:
		.WORD sub_6BBE4		; DATA XREF: sub_6BB4D+19-r
					; sub_6BB4D+1C-r
					; data used at a000
		.WORD sub_6BBED		; data used at a000
		.WORD sub_6BBF3		; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BC17:				; CODE XREF: _b4_s28:loc_68490-p
					; sub_68675+E-p	sub_6868C+F-p
					; sub_686D5+3-p	sub_68707-p
					; sub_687E3+9-p	sub_69C0B+47-p
		STA		word_4		; code used at a000
		LDA		byte_64		; code used at a000
		PHA				; code used at a000
		LDA		word_4		; code used at a000
		JSR		sub_6BC27	; code used at a000
		PLA				; code used at a000
		STA		byte_64		; code used at a000
		LDA		word_6+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BC27:				; CODE XREF: sub_6BC17+7-p
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		off_6BCA2,Y	; code used at a000
		LDX		off_6BCA2+1,Y	; code used at a000
		JSR		sub_6BBCB	; code used at a000
		JSR		sub_6BBD5	; code used at a000
loc_6BC35:				; CODE XREF: sub_6BC27+22-j
		STX		byte_64		; code used at a000
		TXA				; code used as ind data	at a000
		ASL		; code used at a000
		TAY				; code used as ind data	at a000
		LDA		byte_530,Y	; code used at a000
		BMI		loc_6BC4E	; code used at a000
loc_6BC3F:				; CODE XREF: sub_6BC27+2E-j
					; sub_6BC60+5-j	sub_6BC67+14-j
					; sub_6BC67+1D-j sub_6BC90+5-j
					; sub_6BC99+7-j
		JSR		sub_6BBDD	; code used at a000
loc_6BC42:				; CODE XREF: sub_6BC27+34-j
					; sub_6BC60+3-j	sub_6BC67+12-j
					; sub_6BC67+1B-j sub_6BC90+7-j
					; sub_6BC99+5-j
		ASL		word_6		; code used at a000
		LDX		byte_64		; code used at a000
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_6BC35	; code used at a000
		LDA		word_6+1	; code used at a000
		RTS				; code used at a000
loc_6BC4E:				; CODE XREF: sub_6BC27+16-j
		LDA		word_4		; code used at a000
		BEQ		loc_6BC5D	; code used as ind data	at a000
		LDA		byte_531,Y	; code used at a000
		BPL		loc_6BC3F	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#5		; code used at a000
		BCS		loc_6BC42	; code used at a000
loc_6BC5D:				; CODE XREF: sub_6BC27+29-j
		JMP		(word_3C)	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BC60:				; DATA XREF: BANK4:off_6BCA2-o
		LDA		byte_531,Y
		BPL		loc_6BC42
		BMI		loc_6BC3F

; =============== S U B	R O U T	I N E =======================================
sub_6BC67:				; DATA XREF: BANK4:BCA4-o
		JSR		sub_6B6B8	; ind code used	at a000
loc_6BC6A:				; CODE XREF: sub_6BC86+7-j
		LSR		byte_5A		; code used at a000
		ROR		byte_59		; code used at a000
		LDA		byte_64		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_501,Y	; code used at a000
		CMP		byte_5A		; code used at a000
		BEQ		loc_6BC7D	; code used at a000
		BCC		loc_6BC42	; code used at a000
		BCS		loc_6BC3F	; code used at a000
loc_6BC7D:				; CODE XREF: sub_6BC67+10-j
		LDA		byte_500,Y	; code used at a000
		CMP		byte_59		; code used at a000
		BCC		loc_6BC42	; code used at a000
		BCS		loc_6BC3F	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BC86:				; DATA XREF: BANK4:BCA6-o
		JSR		sub_6B6B8	; ind code used	at a000
		LSR		byte_5A		; code used at a000
		ROR		byte_59		; code used at a000
		JMP		loc_6BC6A	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BC90:				; DATA XREF: BANK4:BCA8-o
		LDA		byte_521,Y	; ind code used	at a000
		CMP		#3		; code used at a000
		BCC		loc_6BC3F	; code used at a000
		BCS		loc_6BC42

; =============== S U B	R O U T	I N E =======================================
sub_6BC99:				; DATA XREF: BANK4:BCAA-o
		LDA		byte_531,Y
		AND		#$F
		BEQ		loc_6BC42
		BNE		loc_6BC3F
off_6BCA2:
		.WORD sub_6BC60		; DATA XREF: sub_6BC27+2-r sub_6BC27+5-r
		.WORD sub_6BC67		; data used at a000
		.WORD sub_6BC86		; data used at a000
		.WORD sub_6BC90		; data used at a000
		.WORD sub_6BC99

; =============== S U B	R O U T	I N E =======================================
_b4_s10:				; CODE XREF: _b4_s28+62-p sub_68675+6-p
					; sub_6868C+7-p	sub_687E3+3-p
					; sub_68808+B-p	sub_6A4E4+2A-p
					; sub_F846B+7-P
					; DATA XREF: BANK4:8020-o
		CMP		#8		; code used as data at a000
		BCS		loc_6BCBC	; code used at a000
		STA		word_4		; code used at a000
		SEC				; code used at a000
		LDX		word_4		; code used at a000
		LDA		#0		; code used at a000
loc_6BCB7:				; CODE XREF: _b4_s10+D-j
		ROL		; code used at a000
		DEX				; code used as ind data	at a000
		BPL		loc_6BCB7	; code used at a000
		RTS				; code used at a000
loc_6BCBC:				; CODE XREF: _b4_s10+2-j
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BCBF:				; CODE XREF: sub_6868C+12-p
					; sub_687E3+C-p
		STA		word_4		; code used at a000
		JSR		sub_6BBD5	; code used at a000
loc_6BCC4:				; CODE XREF: sub_6BCBF+1A-j
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_6BCDE	; code used at a000
		ORA		word_4		; code used at a000
		CMP		#$FF		; code used at a000
		BNE		loc_6BCD2	; code used at a000
		JSR		sub_6BBDD	; code used at a000
loc_6BCD2:				; CODE XREF: sub_6BCBF+E-j
		ASL		word_6		; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_6BCC4	; code used at a000
		LDA		word_6+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BCDE:				; CODE XREF: sub_686BB+5-p
					; sub_686BB+13-p sub_6BCBF+7-p
		STA		byte_10		; code used at a000
		LDA		byte_42		; code used at a000
		PHA				; code used at a000
		LDA		byte_43		; code used at a000
		PHA				; code used at a000
		LDA		byte_10		; code used at a000
		JSR		sub_6A8B3	; code used at a000
		STA		byte_10		; code used at a000
		PLA				; code used at a000
		STA		byte_43		; code used at a000
		PLA				; code used at a000
		STA		byte_42		; code used at a000
		LDA		byte_10		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BCF6:
		LDA		#$FF
		STA		byte_42
		LDA		#0
		STA		byte_55
		STA		byte_56
		TAX
		RTS
off_6BD02:
		.WORD sub_68505		; DATA XREF: _b4_s28+86-r _b4_s28+89-r
					; data used at a000
		.WORD sub_68509		; data used at a000
		.WORD _b4_s2B		; data used at a000
		.WORD _b4_s2B		; data used at a000
		.WORD _b4_s2B		; data used at a000
		.WORD _b4_s2B		; data used at a000
		.WORD _b4_s2B		; data used at a000
		.WORD sub_68567		; data used at a000
		.WORD sub_68576		; data used at a000
		.WORD sub_685A0		; data used at a000
		.WORD sub_68505		; data used at a000
		.WORD sub_68505
		.WORD sub_68505
		.WORD sub_68505
		.WORD sub_68505		; data used at a000
		.WORD sub_68505		; data used at a000
		.WORD sub_685A8		; data used at a000
		.WORD sub_685AD		; data used at a000
		.WORD sub_68505
		.WORD sub_685B2		; data used at a000
		.WORD sub_685B2
		.WORD sub_685B2
		.WORD sub_685B2		; data used at a000
		.WORD sub_685C0
		.WORD sub_685C0
		.WORD sub_685C0		; data used at a000
		.WORD sub_685C0
		.WORD sub_685C0		; data used at a000
		.WORD sub_685C0
		.WORD sub_685C0
		.WORD sub_685C0
		.WORD sub_685B2
		.WORD sub_685C0
		.WORD sub_685CB		; data used at a000
		.WORD sub_685A8		; data used at a000
		.WORD sub_685D5		; data used at a000
		.WORD sub_685DA
		.WORD sub_685DF		; data used at a000
		.WORD sub_685E4		; data used at a000
		.WORD sub_685A0
		.WORD sub_685E9
		.WORD sub_685EE		; data used at a000
		.WORD sub_685F3
		.WORD sub_68505		; data used at a000
		.WORD sub_685FF
		.WORD sub_68606		; data used at a000
		.WORD sub_6860D		; data used at a000
		.WORD sub_68619
		.WORD sub_68619
		.WORD sub_6861E		; data used at a000
		.WORD sub_6861E
		.WORD sub_6861E		; data used at a000
		.WORD sub_68625
		.WORD sub_68625
		.WORD sub_6862C
		.WORD sub_6862C
		.WORD sub_6862C
		.WORD sub_68631
		.WORD sub_68631
		.WORD sub_6858A		; data used at a000
		.WORD sub_6858A		; data used at a000
		.WORD sub_6858A		; data used at a000
		.WORD sub_6858A
		.WORD sub_6858A
byte_6BD82:
		.BYTE	2,  6, $C,  3,	4,  6,$12,  6, $C,  4,	6,  9,	5,  8,	1,  3
					; DATA XREF: _b4_s28+4D-r sub_6A35F+8-r
		.BYTE	4,  3,	4,  4,	0,  5,	3,  7,	0,  8,	4,  5, $A,$14,	3,  6 ;	data used at a000
		.BYTE	7,$12,$3E,  3,	6,  9,$12,$3E
off_6BDAA:
		.WORD sub_68B2F		; DATA XREF: sub_68A52+66-r
					; sub_68A52+6B-r
					; data used at a000
		.WORD sub_68B32		; data used at a000
		.WORD sub_68B35		; data used at a000
		.WORD sub_68BC9		; data used at a000
		.WORD sub_68BF0		; data used at a000
		.WORD sub_68C0A		; data used at a000
		.WORD sub_68C26		; data used at a000
		.WORD sub_68C48		; data used at a000
		.WORD sub_68C64		; data used at a000
		.WORD sub_68D8D		; data used at a000
		.WORD sub_68DB1		; data used at a000
		.WORD sub_68DB1		; data used at a000
		.WORD sub_68DB1
		.WORD sub_68DB1
		.WORD sub_68DB1		; data used at a000
		.WORD sub_68DB1		; data used at a000
		.WORD sub_68DEC		; data used at a000
		.WORD sub_68E00		; data used at a000
		.WORD sub_68E4B
		.WORD sub_68E96		; data used at a000
		.WORD sub_68E96
		.WORD sub_68E96
		.WORD sub_68E96		; data used at a000
		.WORD sub_68EC7		; data used at a000
		.WORD sub_68EC7
		.WORD sub_68EC7		; data used at a000
		.WORD sub_68EC7
		.WORD sub_68EC7		; data used at a000
		.WORD sub_68EC7
		.WORD sub_68EC7
		.WORD sub_68EC7
		.WORD sub_68F21
		.WORD sub_68FBC
		.WORD sub_68FF8
		.WORD sub_69081		; data used at a000
		.WORD sub_690A9		; data used at a000
		.WORD sub_690CD
		.WORD sub_690E9		; data used at a000
		.WORD sub_69111		; data used at a000
		.WORD sub_69135
		.WORD sub_69173
		.WORD sub_691C3		; data used at a000
		.WORD sub_69225
		.WORD sub_692D4		; data used at a000
		.WORD sub_692B7
		.WORD sub_69322
		.WORD sub_6934C		; data used at a000
		.WORD sub_6936E
		.WORD sub_6936A
		.WORD sub_69415		; data used at a000
		.WORD sub_69415
		.WORD sub_69415		; data used at a000
		.WORD sub_69453
		.WORD sub_69453
		.WORD sub_69415		; data used at a000
		.WORD sub_69415
		.WORD sub_69415
		.WORD sub_69453
		.WORD sub_69453
		.WORD sub_68D39		; data used at a000
		.WORD sub_68D39
		.WORD sub_68D39		; data used at a000
		.WORD sub_68D39
		.WORD sub_68D39
off_6BE2A:
		.WORD sub_695C6		; DATA XREF: sub_694DA+96-r
					; sub_694DA+9B-r
					; data used at a000
		.WORD sub_69782		; data used at a000
		.WORD sub_697CD		; data used at a000
		.WORD sub_6AE6C		; data used at a000
		.WORD sub_697D0
		.WORD sub_697D0
		.WORD sub_6B0C1		; data used at a000
		.WORD nullsub_11
off_6BE3A:
		.WORD sub_69840		; DATA XREF: sub_69782+36-r
					; sub_69782+3B-r
					; data used at a000
		.WORD sub_6990D
		.WORD sub_6995B		; data used at a000
		.WORD sub_69973
		.WORD sub_699F1		; data used at a000
		.WORD sub_69A2E
		.WORD sub_69A80
		.WORD sub_69ABF
		.WORD sub_69B1B
		.WORD sub_69BA0		; data used at a000
		.WORD sub_69BA0
		.WORD sub_69BA0		; data used at a000
		.WORD sub_69BE0
		.WORD sub_69BE0		; data used at a000
		.WORD sub_69BE0
		.WORD sub_69C09
		.WORD sub_69C81		; data used at a000
		.WORD sub_69C86		; data used at a000
		.WORD sub_69D20
		.WORD sub_69D60		; data used at a000
		.WORD sub_69DDF
		.WORD sub_69E5B		; data used at a000
		.WORD sub_69E7F
		.WORD sub_6A263
		.WORD sub_69ECB
		.WORD sub_69EF8
		.WORD sub_69F05		; data used at a000
		.WORD sub_69F23
		.WORD sub_69F43
		.WORD sub_69F64
		.WORD sub_69840
		.WORD sub_69F85
		.WORD sub_69F97
		.WORD sub_69FC5
		.WORD sub_6A017
		.WORD sub_6A2CB
		.WORD sub_6A2FF
		.WORD sub_6AEEF
		.WORD sub_6AF04
		.WORD sub_6AF0E		; data used at a000
		.WORD sub_6AF34
		.WORD sub_6AF65
		.WORD sub_6AF6D
		.WORD sub_6AF7B
		.WORD sub_6AFA5
		.WORD sub_6AF97
		.WORD sub_6AF89
		.WORD sub_6AFD2
		.WORD sub_6AFF7		; data used at a000
		.WORD nullsub_12
		.WORD sub_6B008
		.WORD sub_6B027		; data used at a000
		.WORD sub_6B04B

; =============== S U B	R O U T	I N E =======================================
sub_6BEA4:				; CODE XREF: sub_69840+3E-p
					; sub_69840:loc_6988C-p	sub_69840+6D-p
					; sub_69840+92-p sub_69840+BF-p
		LDA		byte_49		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		word_6B4A1+1,Y	; code used at a000
		JSR		_b4_sF		; code used at a000
		CLC				; code used at a000
		ADC		word_6B4A1,Y	; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BEB9:				; CODE XREF: sub_68E96+1F-p
					; sub_68EC7+34-p
		LDX		byte_51		; code used at a000
		LDA		byte_558,X	; code used at a000
		CMP		#$10		; code used at a000
		BCS		loc_6BEC4	; code used at a000
		ADC		#$15		; code used at a000
loc_6BEC4:				; CODE XREF: sub_6BEB9+7-j
		SEC				; code used at a000
		SBC		#$13		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		word_6B4C5+1,Y	; code used at a000
		JSR		_b4_sF		; code used at a000
		CLC				; code used at a000
		ADC		word_6B4C5,Y	; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		LDX		byte_51		; code used at a000
		LDA		byte_558,X	; code used at a000
		CMP		#$10		; code used at a000
		BCS		locret_6BEF4	; code used at a000
		LDA		byte_73C	; code used at a000
		AND		#4		; code used at a000
		BEQ		locret_6BEF4	; code used at a000
		ASL		word_4
		ROL		word_4+1
		LDX		#word_4
		LDA		#3
		JSR		_div16_to_8
locret_6BEF4:				; CODE XREF: sub_6BEB9+27-j
					; sub_6BEB9+2E-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BEF5:				; CODE XREF: sub_69415+2B-p
					; sub_69443+7-p	sub_69453+4E-p
		LDX		byte_51		; code used at a000
		LDA		byte_558,X	; code used at a000
		SEC				; code used at a000
		SBC		#$31       ; code used at a000
		TAX				; code used at a000
		LDA		byte_6B4F5,X	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b4_s1E:				; CODE XREF: sub_9FBE+C-P sub_6BF22+9-j
					; BANK4:BF30-j
					; DATA XREF: BANK4:803C-o
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		_b4_d15,Y	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_6BF1B	; code used at a000
		LDA		_b4_d15+1,Y	; code used at a000
		JSR		_b4_sF		; code used at a000
		CLC				; code used at a000
		ADC		_b4_d15,Y	; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		RTS				; code used at a000
loc_6BF1B:				; CODE XREF: _b4_s1E+7-j
		LDA		#$FF		; code used at a000
		STA		word_4		; code used at a000
		STA		word_4+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_6BF22:				; CODE XREF: sub_69453:loc_694A7-p
					; sub_69BA0-p sub_69BE5+C-p
		LDA		byte_49		; code used at a000
		CMP		#$1D		; code used at a000
		BCS		loc_6BF2E	; code used at a000
		SEC				; code used at a000
		SBC		#$1A		; code used at a000
		JMP		_b4_s1E		; code used at a000
loc_6BF2E:				; CODE XREF: sub_6BF22+4-j
		SBC		#$1D		; code used at a000
		BNE		_b4_s1E		; code used at a000

		ORG $BFD2
		
; =============== S U B	R O U T	I N E =======================================
_syscall0F:				; CODE XREF: sub_68A52+37-P
					; sub_68BC9+13-P sub_68C64-P
					; sub_68C64+CF-P sub_68D3F-P sub_68D8D-P
					; sub_68DEC-P sub_68E00-P sub_68E4B-P
					; sub_68E96+16-P sub_68EC7+16-P
					; sub_68F73-P sub_68FF8+52-P
					; sub_69058+17-P sub_69173+41-P
					; sub_691DF+37-P sub_69225:loc_69267-P
					; sub_692D4+10-P sub_69370+74-P
					; sub_69370+90-P sub_69415+22-P
					; sub_69453+22-P sub_694DA+53-P
					; sub_6957D-P sub_69604+B-P
					; sub_69604+B5-P sub_696E8:loc_69709-P
					; sub_696E8+4A-P sub_696E8:loc_6974C-P
					; sub_6975F+8-P	sub_697D0+3-P
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
					; sub_6A3D3:loc_6A3F1-P	sub_6A3F8+5B-P
					; sub_6A3F8+5E-P sub_6A544-P
					; sub_6A5F7+1F-P sub_6A676:loc_6A6BD-P
					; sub_6ADD1+10-P sub_6AE6C+48-P
					; sub_6AF0E+1A-P sub_6AF53+3-P
					; sub_6AF5C+3-P	sub_6B01E+3-P
					; sub_6B027+7-P	sub_6B027+10-P
					; sub_6B0C1+11-P sub_6B347+35-P
					; DATA XREF: BANKF:E7DE-o
		JMP		__syscall0F	; ind code used	at a000

; =============== S U B	R O U T	I N E =======================================
_syscall10:				; CODE XREF: sub_68B00+21-P
					; sub_68B00+2C-P sub_68B2F-P sub_68B32-P
					; sub_68B3B+37-P sub_68B3B+46-P
					; sub_68BB0+3-P	sub_68D3F:loc_68D56-P
					; sub_68E1E+21-P sub_68E1E+2A-P
					; sub_68E69+21-P sub_68E69+2A-P
					; sub_68F21:loc_68F6D-P	sub_68FEB+A-P
					; sub_691BA:loc_691BD-P	sub_692B7+1A-P
					; sub_69370:loc_693EA-P	sub_69589+28-P
					; sub_69589+3A-P sub_69604+13-P
					; sub_69604+40-P sub_69604+E1-P
					; sub_696E8+9-P	sub_696E8+1E-P
					; sub_696E8+61-P sub_69782+48-P
					; sub_697CD-P sub_69931:loc_6994B-P
					; sub_69AE1+34-P sub_69B34+28-P
					; sub_69B74+29-P sub_69C62+15-P
					; sub_69C62:loc_69C7A-P
					; sub_69C62:loc_69C7E-P	sub_69CA7+3B-P
					; sub_69D1D-P sub_69D35+24-P
					; sub_69D35:loc_69D5C-P
					; sub_69E5B:loc_69E7C-P	sub_69ECB+2A-P
					; sub_69EF8+A-P	sub_69F85+F-P
					; sub_69FC5+1E-P sub_69FC5+4F-P
					; sub_6A263:loc_6A2C5-P
					; sub_6A263:loc_6A2C8-P	sub_6A5D6+1D-P
					; sub_6A6DF+39-P sub_6A74B+3C-P
					; sub_6A790+28-P sub_6A7BC+2A-P
					; sub_6AE6C+4B-P sub_6AFD2+22-P
					; sub_6B027:loc_6B048-P	sub_6B3D8-P
					; DATA XREF: BANKF:E7E0-o
		JMP		__syscall10	; ind code used	at a000

		ECHO "bank 04 size", [.-$8000], "free space", [$BFD8-.]

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
