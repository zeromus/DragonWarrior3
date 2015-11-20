
		ORG $8000

		.WORD _bC_s0		; data used at 8000
		.WORD _bC_s1		; data used at 8000
		.WORD _bC_s2		; data used at 8000
		.WORD _bC_s3		; data used at 8000
		.WORD _bC_s4		; data used at 8000
		.WORD _bC_s5		; data used at 8000
		.WORD _bC_s6
		.WORD 0
		.WORD 0
		.WORD _bC_s9
		.WORD _bC_sA		; data used at 8000
		.WORD _bC_sB
		.WORD _bC_sC
		.WORD _bC_sD		; data used at 8000
		.WORD _bC_sE		; data used at 8000
		.WORD _bC_sF
		.WORD _bC_s10
		.WORD _bC_s11
		.WORD _bC_s12_vblank_count_50 ;	data used at 8000
		.WORD _bC_s13		; data used at 8000
		.WORD _bC_s14		; data used at 8000
		.WORD _bC_s15
		.WORD _bC_s16
		.WORD _bC_s17		; data used at 8000
		.WORD _bC_s18		; data used at 8000
		.WORD _bC_s19		; data used at 8000
		.WORD _bC_s1A		; data used at 8000
		.WORD _bC_s1B
		.WORD _bC_s1C		; data used at 8000
		.WORD _bC_s1D		; data used at 8000
		.WORD _bC_s1E
		.WORD _bC_s1F		; data used at 8000
		.WORD _bC_s20		; data used at 8000
		.WORD _bC_s21
		.WORD _bC_s22
		.WORD _bC_s23
		.WORD _bC_s24
		.WORD _bC_s25
		.WORD _bC_s26
		.WORD _bC_s27		; data used at 8000
		.WORD _bC_s28
		.WORD _bC_s29
		.WORD _bC_s2A		; data used at 8000
		.WORD _bC_s2B
		.WORD _bC_s2C
		.WORD _bC_s2D
		.WORD _bC_s2E_vblank_count_50_wait_50_or_skip ;	data used at 8000
		.WORD _bC_s2F
		.WORD _bC_s30		; data used at 8000
		.WORD _bC_s31
		.WORD _bC_s32
		.WORD _bC_s33
		.WORD _bC_s34		; data used at 8000
		.WORD _bC_s35		; data used at 8000
		.WORD _bC_s36
		.WORD _bC_s37
		.WORD _bC_s38		; data used at 8000
		.WORD _bC_s39
		.WORD _bC_s3A
		.WORD _bC_s3B

; =============== S U B	R O U T	I N E =======================================
_bC_s1:					; CODE XREF: sub_1280A6+AB-j
					; sub_1280A6+1D2-j sub_174D56+F-P
					; DATA XREF: BANKC:8002-o
		LDA		byte_6E1	; code used as ind data	at 8000
		BEQ		locret_128081	; code used at 8000
		CMP		#$40       ; code used at 8000
		BCC		loc_128082	; code used at 8000
locret_128081:				; CODE XREF: _bC_s1+3-j	_bC_s1+15-j
		RTS				; code used at 8000
loc_128082:				; CODE XREF: _bC_s1+7-j
		CMP		#2		; code used at 8000
		BNE		loc_128089	; code used at 8000
		JSR		_vblank		; code used at 8000
loc_128089:				; CODE XREF: _bC_s1+C-j
		LDA		byte_90		; code used at 8000
		AND		#$F		; code used at 8000
		BNE		locret_128081	; code used at 8000
		LDA		byte_6E3	; code used at 8000
		STA		word_3C		; code used at 8000
		LDX		#0		; code used at 8000
loc_128096:				; CODE XREF: _bC_s1+28-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		sub_1280A6	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
		CPX		word_3C		; code used at 8000
		BNE		loc_128096	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1280A3:				; CODE XREF: sub_1280A6+3-j
		JMP		loc_1282F0	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1280A6:				; CODE XREF: _bC_s1+20-p
		LDA		byte_6E8,X	; code used at 8000
		BNE		sub_1280A3	; code used at 8000
		INC		byte_6EC,X	; code used at 8000
		JSR		sub_1283A6	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_1280B8	; code used at 8000
		JMP		loc_1282BB	; code used at 8000
loc_1280B8:				; CODE XREF: sub_1280A6+D-j
		LDA		byte_6E2	; code used at 8000
		AND		#8		; code used at 8000
		BEQ		loc_1280CA	; code used at 8000
		JSR		sub_128375	; code used at 8000
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		(word_6C),Y	; code used at 8000
loc_1280CA:				; CODE XREF: sub_1280A6+17-j
		LDA		byte_6E2	; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		loc_1280F5	; code used at 8000
		JSR		sub_128375	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_1777C2	; code used at 8000
		BCC		loc_1280E5	; code used at 8000
		JSR		sub_12837F	; code used at 8000
loc_1280E5:				; CODE XREF: sub_1280A6+3A-j
		LDA		byte_6E2	; code used at 8000
		AND		#4		; code used at 8000
		BNE		loc_1280F5	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		(word_6C),Y	; code used at 8000
		INY				; code used at 8000
		STA		(word_6C),Y	; code used at 8000
loc_1280F5:				; CODE XREF: sub_1280A6+29-j
					; sub_1280A6+44-j
		DEC		byte_6E3	; code used at 8000
		BEQ		loc_1280FB	; code used at 8000
		RTS				; code used at 8000
loc_1280FB:				; CODE XREF: sub_1280A6+52-j
		LDA		byte_6E2	; code used at 8000
		AND		#2		; code used at 8000
		BEQ		loc_128119	; code used at 8000
		INC		byte_6E1	; code used at 8000
		LDA		byte_6E1	; code used at 8000
		CMP		#8		; code used at 8000
		BCC		loc_128113	; code used at 8000
		CMP		#$B		; code used at 8000
		BCS		loc_128116	; code used at 8000
		JSR		sub_1283C3
loc_128113:				; CODE XREF: sub_1280A6+64-j
		JMP		loc_12820F
loc_128116:				; CODE XREF: sub_1280A6+68-j
		JMP		loc_1281FA	; code used at 8000
loc_128119:				; CODE XREF: sub_1280A6+5A-j
		LDA		byte_6E1	; code used at 8000
		CMP		#$1F		; code used at 8000
		BNE		loc_128154	; code used at 8000
		JSR		sub_174CCF
		BRK
		.BYTE $71, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_128139
		BRK
		.BYTE $72, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$20 
		JSR		_bC_s0
		JMP		loc_12814E
loc_128139:				; CODE XREF: sub_1280A6+83-j
		BRK
		.BYTE $73, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$21 
		JSR		_bC_s0
		LDA		#0
		STA		byte_6EB
		LDA		#$E
		STA		byte_6EF
loc_12814E:				; CODE XREF: sub_1280A6+90-j
		PLA
		PLA
		PLA
		JMP		_bC_s1
loc_128154:				; CODE XREF: sub_1280A6+78-j
		CMP		#$20       ; code used at 8000
		BNE		loc_128175	; code used at 8000
		LDA		#4
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		byte_60BA
		ORA		#$40 
		STA		byte_60BA
		LDA		#$80 
		STA		byte_110
		STA		byte_114
		STA		byte_118
		STA		byte_11C
		BNE		loc_1281BE
loc_128175:				; CODE XREF: sub_1280A6+B0-j
		LDA		byte_6E1	; code used at 8000
		CMP		#$23       ; code used at 8000
		BNE		loc_128185	; code used at 8000
		JSR		sub_174CCF
		BRK
		.BYTE $75, $77		; _msg_m00_arg1
		JSR		sub_174D4F
loc_128185:				; CODE XREF: sub_1280A6+D4-j
		LDA		byte_6E1	; code used at 8000
		CMP		#$2C       ; code used at 8000
		BNE		loc_12819A	; code used at 8000
		LDA		#$C0       ; code used at 8000
		STA		byte_60C6	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $86, $77		; _msg_m00_arg1
		JSR		sub_174D4F	; code used at 8000
loc_12819A:				; CODE XREF: sub_1280A6+E4-j
		LDA		byte_6E1	; code used at 8000
		CMP		#$31       ; code used at 8000
		BNE		loc_1281C4	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		LDA		byte_D2		; code used at 8000
		STA		byte_D3		; code used at 8000
		BRK
		.BYTE $81, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip	; code used at 8000
		LDA		#$F		; code used at 8000
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_12B91A	; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_60C5	; code used at 8000
loc_1281BE:				; CODE XREF: sub_1280A6+CD-j
		JSR		sub_174CBD	; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
loc_1281C4:				; CODE XREF: sub_1280A6+F9-j
		LDA		byte_6E1	; code used at 8000
		CMP		#$32       ; code used at 8000
		BNE		loc_1281D3	; code used at 8000
		LDA		byte_60CC	; code used at 8000
		ORA		#$40       ; code used at 8000
		STA		byte_60CC	; code used at 8000
loc_1281D3:				; CODE XREF: sub_1280A6+123-j
		LDA		byte_6E1	; code used at 8000
		CMP		#2		; code used at 8000
		BNE		loc_1281E4	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6E1	; code used at 8000
		LDY		#$F6       ; code used at 8000
		JMP		_syscall0_unsafe ; code	used at	8000
loc_1281E4:				; CODE XREF: sub_1280A6+132-j
		CMP		#$33       ; code used at 8000
		BNE		loc_1281F4	; code used at 8000
		BRK
		.BYTE $4D, $17		; ofs 0x000080a4, -> dst _b0_s52
		BRK
		.BYTE $4C, $17		; ofs 0x000080a2, -> dst _b0_s51
		JSR		sub_174CBD	; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
loc_1281F4:				; CODE XREF: sub_1280A6+140-j
		LDA		#0		; code used at 8000
		STA		byte_6E1	; code used at 8000
		RTS				; code used at 8000
loc_1281FA:				; CODE XREF: sub_1280A6:loc_128116-j
		CMP		#$D		; code used at 8000
		BNE		loc_12820F	; code used at 8000
		JSR		sub_174CCF
		BRK
		.BYTE $6C, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$D
		JSR		_bC_s0
		JMP		loc_128275
loc_12820F:				; CODE XREF: sub_1280A6:loc_128113-j
					; sub_1280A6+156-j
		CMP		#$18		; code used at 8000
		BNE		loc_12821D	; code used at 8000
loc_128213:				; CODE XREF: sub_1280A6+179-j
		PHA
		JSR		sub_174CCF
		BRK
		.BYTE $3E, $17		; ofs 0x00140042, -> dst _bD_s21
		PLA
		BNE		loc_12825F
loc_12821D:				; CODE XREF: sub_1280A6+16B-j
		CMP		#$38       ; code used at 8000
		BEQ		loc_128213	; code used at 8000
		CMP		#$25       ; code used at 8000
		BNE		loc_128233	; code used at 8000
		JSR		sub_174CCF
		BRK
		.BYTE $76, $77		; _msg_m00_arg1
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#$25 
loc_128233:				; CODE XREF: sub_1280A6+17D-j
		CMP		#$26       ; code used at 8000
		BNE		loc_128242	; code used at 8000
		JSR		sub_174CCF
		BRK
		.BYTE $77, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$26 
loc_128242:				; CODE XREF: sub_1280A6+18F-j
		CMP		#$27       ; code used at 8000
		BNE		loc_128251	; code used at 8000
		JSR		sub_174CCF
		BRK
		.BYTE $78, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$27 
loc_128251:				; CODE XREF: sub_1280A6+19E-j
		CMP		#$2C       ; code used at 8000
		BNE		loc_12825F	; code used at 8000
		JSR		_bC_s0		; code used at 8000
		LDA		#$14		; code used at 8000
		STA		byte_6EF	; code used at 8000
		BNE		loc_128275	; code used at 8000
loc_12825F:				; CODE XREF: sub_1280A6+175-j
					; sub_1280A6+1AD-j
		JSR		_bC_s0		; code used at 8000
		LDA		byte_6E1	; code used at 8000
		CMP		#$E		; code used at 8000
		BEQ		loc_1282B2	; code used at 8000
		CMP		#$F		; code used at 8000
		BEQ		loc_1282A7	; code used at 8000
		CMP		#$10		; code used at 8000
		BEQ		loc_12827B	; code used at 8000
		CMP		#$11		; code used at 8000
		BEQ		loc_12828A	; code used at 8000
loc_128275:				; CODE XREF: sub_1280A6+166-j
					; sub_1280A6+1B7-j sub_1280A6+212-j
		PLA				; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
		JMP		_bC_s1		; code used at 8000
loc_12827B:				; CODE XREF: sub_1280A6+1C9-j
		PHA
		LDA		#8
		STA		byte_74C0
		JSR		sub_174CCF
		BRK
		.BYTE $6E, $77		; _msg_m00_arg1
		JMP		loc_128296
loc_12828A:				; CODE XREF: sub_1280A6+1CD-j
		PHA
		LDA		#0
		STA		byte_74C0
		JSR		sub_174CCF
		BRK
		.BYTE $6F, $77		; _msg_m00_arg1
loc_128296:				; CODE XREF: sub_1280A6+1E1-j
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$95 
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		PLA
		SEC
		SBC		#8
		BNE		loc_1282B5
loc_1282A7:				; CODE XREF: sub_1280A6+1C5-j
		PHA
		JSR		sub_174CCF
		BRK
		.BYTE $6D, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		PLA
loc_1282B2:				; CODE XREF: sub_1280A6+1C1-j
		SEC
		SBC		#9
loc_1282B5:				; CODE XREF: sub_1280A6+1FF-j
		STA		byte_6EF
		JMP		loc_128275
loc_1282BB:				; CODE XREF: sub_1280A6+F-j
		AND		#$1F		; code used at 8000
		STA		byte_6E8,X	; code used at 8000
		LDA		(byte_37),Y	; code used at 8000
		PHA				; code used at 8000
		CLC				; code used at 8000
		AND		#$C0       ; code used at 8000
		ROL		; code used at 8000
		ROL		; code used at 8000
		ROL		; code used at 8000
		PHA				; code used at 8000
		JSR		sub_128375	; code used at 8000
		LDY		#3		; code used at 8000
		LDA		byte_6E1	; code used at 8000
		CMP		#$31       ; code used at 8000
		BEQ		loc_1282E5	; code used at 8000
		LDA		#$7C       ; code used at 8000
		AND		(word_6C),Y	; code used at 8000
		STA		(word_6C),Y	; code used at 8000
		PLA				; code used at 8000
		ORA		(word_6C),Y	; code used at 8000
		STA		(word_6C),Y	; code used at 8000
		PLA				; code used at 8000
		JMP		loc_1282F3	; code used at 8000
loc_1282E5:				; CODE XREF: sub_1280A6+22E-j
		LDA		#$7F       ; code used at 8000
		AND		(word_6C),Y	; code used at 8000
		STA		(word_6C),Y	; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
		JMP		loc_1282F3	; code used at 8000
loc_1282F0:				; CODE XREF: sub_1280A3-j
		JSR		sub_1283A6	; code used at 8000
loc_1282F3:				; CODE XREF: sub_1280A6+23C-j
					; sub_1280A6+247-j
		AND		#$20       ; code used at 8000
		BNE		loc_128371	; code used at 8000
		JSR		sub_128375	; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		LDX		#$40       ; code used at 8000
		LDA		byte_6E1	; code used at 8000
		CMP		#$2C       ; code used at 8000
		BEQ		loc_12831F	; code used at 8000
		CMP		#$28       ; code used at 8000
		BEQ		loc_12831F	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_176F34	; code used at 8000
		LDX		#$40       ; code used at 8000
		AND		#$E0       ; code used at 8000
		CMP		byte_8C		; code used at 8000
		BEQ		loc_12831F	; code used at 8000
		LDX		#0		; code used at 8000
loc_12831F:				; CODE XREF: sub_1280A6+25D-j
					; sub_1280A6+261-j sub_1280A6+275-j
		LDY		#3		; code used at 8000
		TXA				; code used at 8000
		ORA		(word_6C),Y	; code used at 8000
		STA		(word_6C),Y	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6E1	; code used at 8000
		CMP		#$31       ; code used at 8000
		BEQ		loc_128368	; code used at 8000
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$3C       ; code used at 8000
		BEQ		loc_128344	; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$40       ; code used at 8000
		BEQ		loc_128344	; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		BRK
		.BYTE $58, $17		; ofs 0x00140014, -> dst _bD_sA
		PLA				; code used at 8000
		TAX				; code used at 8000
loc_128344:				; CODE XREF: sub_1280A6+28F-j
					; sub_1280A6+295-j
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#3		; code used at 8000
		BEQ		loc_128358	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_128364	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_128368	; code used at 8000
		LDY		#0		; code used at 8000
		BEQ		loc_12835A	; code used at 8000
loc_128358:				; CODE XREF: sub_1280A6+2A4-j
		LDY		#1		; code used at 8000
loc_12835A:				; CODE XREF: sub_1280A6+2B0-j
		LDA		(word_6C),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		#1		; code used at 8000
		STA		(word_6C),Y	; code used at 8000
		JMP		loc_128371	; code used at 8000
loc_128364:				; CODE XREF: sub_1280A6+2A8-j
		LDY		#0		; code used at 8000
		BEQ		loc_12836A	; code used at 8000
loc_128368:				; CODE XREF: sub_1280A6+287-j
					; sub_1280A6+2AC-j
		LDY		#1		; code used at 8000
loc_12836A:				; CODE XREF: sub_1280A6+2C0-j
		LDA		(word_6C),Y	; code used at 8000
		CLC				; code used at 8000
		ADC		#1		; code used at 8000
		STA		(word_6C),Y	; code used at 8000
loc_128371:				; CODE XREF: sub_1280A6+24F-j
					; sub_1280A6+2BB-j
		DEC		byte_6E8,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128375:				; CODE XREF: sub_1280A6+19-p
					; sub_1280A6+2B-p sub_1280A6+224-p
					; sub_1280A6+251-p
		LDA		byte_6E4,X	; code used at 8000
		STA		word_6C		; code used at 8000
		LDA		#1		; code used at 8000
		STA		word_6C+1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12837F:				; CODE XREF: sub_1280A6+3C-p
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$3C       ; code used at 8000
		BEQ		locret_1283A5	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s9:					; CODE XREF: _bC_s38+8-j sub_141B50+BC-P
					; DATA XREF: BANKC:8012-o
		AND		#$3C       ; code used at 8000
		PHA				; code used at 8000
		BRK
		.BYTE $99, 7		; ofs 0x00080006, -> dst _b5_s3
		LDX		#0		; code used at 8000
		LDA		#$F8       ; code used at 8000
loc_128391:				; CODE XREF: _bC_s9+F-j
		STA		word_4,X	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_128391	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
loc_12839A:				; CODE XREF: _bC_s9+1C-j
		LDX		#4		; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		TYA				; code used at 8000
		AND		#3		; code used at 8000
		BNE		loc_12839A	; code used at 8000
locret_1283A5:				; CODE XREF: sub_12837F+6-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1283A6:				; CODE XREF: sub_1280A6+8-p
					; sub_1280A6:loc_1282F0-p
		TXA				; code used at 8000
		PHA				; code used at 8000
		LDY		#0		; code used at 8000
		CPX		#0		; code used at 8000
		BEQ		loc_1283B8	; code used at 8000
loc_1283AE:				; CODE XREF: sub_1283A6+D-j
					; sub_1283A6+10-j
		LDA		(byte_37),Y	; code used at 8000
		INY				; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_1283AE	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_1283AE	; code used at 8000
loc_1283B8:				; CODE XREF: sub_1283A6+6-j
		PLA				; code used at 8000
		TAX				; code used at 8000
		TYA				; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6EC,X	; code used at 8000
		TAY				; code used at 8000
		LDA		(byte_37),Y	; code used at 8000
locret_1283C2:				; CODE XREF: sub_1283C3+17-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1283C3:				; CODE XREF: sub_1280A6+6A-p
		LDA		#$95 
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDX		#$1C
loc_1283CA:				; CODE XREF: sub_1283C3+10-j
		TXA
		LSR
		LSR
		STA		word_3C+1
		JSR		sub_12841D
		DEX
		BNE		loc_1283CA
		LDA		byte_6E1
		CMP		#$A
		BNE		locret_1283C2
		LDA		#$27 
		STA		byte_7C71
		STA		byte_7CD1
		LDA		byte_30
		SEC
		SBC		#$2F 
		TAX
		LDA		byte_128435,X
		STA		word_4
		LDA		#$18
		STA		word_4+1
		LDA		#7
		JSR		_bC_sA
		INC		word_4+1
		INC		word_4+1
		LDA		#7
		JSR		_bC_sA
		JSR		sub_1742BA
		LDX		#$F
		JSR		_vblank_count
		JSR		sub_174CCF
		BRK
		.BYTE $A5, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		byte_60B6
		ORA		#$20 
		STA		byte_60B6
		LDA		#$A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12841D:				; CODE XREF: sub_1283C3+C-p
		LDA		byte_6D1
		SEC
		SBC		word_3C+1
		STA		byte_6D1
		JSR		_vblank
		LDA		byte_6D1
		CLC
		ADC		word_3C+1
		STA		byte_6D1
		JMP		_vblank
byte_128435:
		.BYTE $14,$12,$10, $E, $C ; DATA XREF: sub_1283C3+27-r

; =============== S U B	R O U T	I N E =======================================
_bC_s0:					; CODE XREF: sub_AEF1+3C-P _b7_s1A+40-P
					; _bA_sF+4C-P _bA_s10+20-P
					; sub_1280A6+8D-p sub_1280A6+9B-p
					; sub_1280A6+163-p sub_1280A6+1AF-p
					; sub_1280A6:loc_12825F-p
					; sub_1290E1:loc_129117-p
					; sub_129162+33-j _bC_s33+25-p
					; _bC_s28+17-j _bC_s30+A-j _bC_s2A+21-P
					; sub_12B200+3B-p sub_12B241+1E-p
					; sub_12B263+32-j sub_12B263+37-j
					; sub_12B29D+1C-p sub_12B2BD+2B-j
					; sub_12B3D1+74-j sub_12B493+81-j
					; sub_12B6AF+17-j
					; sub_12B6AF:loc_12B764-j
					; sub_12B6AF+FB-j sub_12B877+4D-j
					; _bD_sF+60-P _npc_hndl18+14-P
					; _npc_hndl24:loc_1438E0-P _bE_s31+D-P
					; DATA XREF: BANKC:8000-o
		STA		byte_6E1	; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		DEX				; code used at 8000
		LDA		off_12849C,X	; code used at 8000
		STA		word_6C		; code used at 8000
		LDA		off_12849C+1,X	; code used at 8000
		STA		word_6C+1	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		STA		byte_6E2	; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		STA		byte_6E3	; code used at 8000
		LDX		#0		; code used at 8000
loc_12845A:				; CODE XREF: _bC_s0+2A-j
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		STA		byte_6E4,X	; code used at 8000
		INX				; code used at 8000
		CPX		byte_6E3	; code used at 8000
		BNE		loc_12845A	; code used at 8000
		INY				; code used at 8000
		TYA				; code used at 8000
		CLC				; code used at 8000
		ADC		word_6C		; code used at 8000
		STA		byte_37		; code used at 8000
		LDA		word_6C+1	; code used at 8000
		ADC		#0		; code used at 8000
		STA		byte_38		; code used at 8000
		LDX		#0		; code used at 8000
		TXA				; code used at 8000
loc_128476:				; CODE XREF: _bC_s0+42-j
		STA		byte_6E8,X	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_128476	; code used at 8000
		LDA		#$FF		; code used at 8000
loc_128480:				; CODE XREF: _bC_s0+4C-j
		STA		byte_6E8,X	; code used at 8000
		INX				; code used at 8000
		CPX		#8		; code used at 8000
		BNE		loc_128480	; code used at 8000
		LDA		byte_6E1	; code used at 8000
		CMP		#$2B       ; code used at 8000
		BNE		locret_12849B	; code used at 8000
		LDX		#$11		; code used at 8000
		LDA		byte_31		; code used at 8000
		CMP		#8		; code used at 8000
		BNE		loc_128498	; code used at 8000
		INX				; code used at 8000
loc_128498:				; CODE XREF: _bC_s0+5B-j
		STX		byte_6EF	; code used at 8000
locret_12849B:				; CODE XREF: _bC_s0+53-j
		RTS				; code used at 8000
off_12849C:
		.WORD byte_128510	; DATA XREF: _bC_s0+7-r	_bC_s0+C-r
		.WORD byte_12851C	; data used at 8000
		.WORD byte_128534
		.WORD byte_128534
		.WORD byte_12853C
		.WORD byte_128548
		.WORD byte_12854D
		.WORD byte_128556
		.WORD byte_12855F
		.WORD byte_128568
		.WORD byte_12856E
		.WORD byte_12857A
		.WORD byte_128582
		.WORD byte_128592
		.WORD byte_128598
		.WORD byte_12859E
		.WORD byte_1285A3
		.WORD byte_1285A8
		.WORD byte_1285B2
		.WORD byte_1285B9
		.WORD byte_1285BF
		.WORD byte_1285C5	; data used at 8000
		.WORD byte_1285CF
		.WORD byte_1285D5
		.WORD byte_1285DB
		.WORD byte_1285E1
		.WORD byte_1285E8	; data used at 8000
		.WORD byte_1285EE	; data used at 8000
		.WORD byte_1285F4	; data used at 8000
		.WORD byte_1285F9	; data used at 8000
		.WORD byte_1285FF
		.WORD byte_128609
		.WORD byte_128612
		.WORD byte_12861C
		.WORD byte_128628
		.WORD byte_12862D
		.WORD byte_128635
		.WORD byte_12864B
		.WORD byte_128653
		.WORD byte_12865B
		.WORD byte_128666	; data used at 8000
		.WORD byte_12866D
		.WORD byte_128672	; data used at 8000
		.WORD byte_128678	; data used at 8000
		.WORD byte_128684	; data used at 8000
		.WORD byte_12868A	; data used at 8000
		.WORD byte_128693	; data used at 8000
		.WORD byte_1286A8
		.WORD byte_1286A8	; data used at 8000
		.WORD byte_1286D6	; data used at 8000
		.WORD byte_1286DB	; data used at 8000
		.WORD byte_1286E0
		.WORD byte_1286EA
		.WORD byte_1286F0
		.WORD byte_1286F6
		.WORD byte_1286FC
		.WORD byte_128702
		.WORD byte_128708
byte_128510:
		.BYTE $58,  1,$28,$C2,	2,$41,	5,$C1,	6,$4F,$46,$FF
					; DATA XREF: BANKC:off_12849C-o
byte_12851C:
		.BYTE $CC,  4,	4,  8, $C,$10,$C1,  1,$23,$FF,	1,$41,	1,$22,$FF,  2
					; DATA XREF: BANKC:849E-o
		.BYTE $C2,  1,$FF,$41,	1,$E1,$A2,$FF ;	ind data used at 8000
byte_128534:
		.BYTE $CA,  1,$10,$42,	1,$44,$81,$FF ;	DATA XREF: BANKC:84A0-o
					; BANKC:84A2-o
byte_12853C:
		.BYTE $5E,  1,$10,$41,$81,$41,$81,$41,$82,$41,$83,$FF
					; DATA XREF: BANKC:84A4-o
byte_128548:
		.BYTE $48,  1,$10,$88,$FF ; DATA XREF: BANKC:84A6-o
byte_12854D:
		.BYTE $CA,  1,$10,  1,$21,  1,$21,$82,$FF ; DATA XREF: BANKC:84A8-o
byte_128556:
		.BYTE $CA,  1,$10,  1,$21,  1,$21,$82,$FF ; DATA XREF: BANKC:84AA-o
byte_12855F:
		.BYTE $CA,  1,$10,  1,$21,  1,$21,$82,$FF ; DATA XREF: BANKC:84AC-o
byte_128568:
		.BYTE $C8,  1,$10,$41,$E1,$FF ;	DATA XREF: BANKC:84AE-o
byte_12856E:
		.BYTE $D8,  1,$2C,$41,$81,$C2,	4,$45,$86,$C8, $A,$FF
					; DATA XREF: BANKC:84B0-o
byte_12857A:
		.BYTE $C2,  2,$3C,$40,$81,$FF,$81,$FF ;	DATA XREF: BANKC:84B2-o
byte_128582:
		.BYTE $E2,  2,$3C,$40,$A1,$87,$E4,$C9,$24,$12,$FF,$A1,$89,$CD,$14,$FF
					; DATA XREF: BANKC:84B4-o
byte_128592:
		.BYTE $E2,  1,$18,  2,$62,$FF ;	DATA XREF: BANKC:84B6-o
byte_128598:
		.BYTE $E2,  1,$18,$89,$A1,$FF ;	DATA XREF: BANKC:84B8-o
byte_12859E:
		.BYTE $E2,  1,$18,$28,$FF ; DATA XREF: BANKC:84BA-o
byte_1285A3:
		.BYTE $E8,  1,$18,  7,$FF ; DATA XREF: BANKC:84BC-o
byte_1285A8:
		.BYTE $CC,  2,$14,$10,$C1,$A1,$FF,$41,$A1,$FF ;	DATA XREF: BANKC:84BE-o
byte_1285B2:
		.BYTE $4C,  1,$10,$81,$42,$21,$FF ; DATA XREF: BANKC:84C0-o
byte_1285B9:
		.BYTE $CC,  1,$14,$41,$A1,$FF ;	DATA XREF: BANKC:84C2-o
byte_1285BF:
		.BYTE $CC,  1,$14,$C1,$A1,$FF ;	DATA XREF: BANKC:84C4-o
byte_1285C5:
		.BYTE $CC,  2,$28,$20,$41,$21,$FF,$C1,$21,$FF ;	DATA XREF: BANKC:84C6-o
					; ind data used	at 8000
byte_1285CF:
		.BYTE $CE,  1,$18,$81,$61,$FF ;	DATA XREF: BANKC:84C8-o
byte_1285D5:
		.BYTE $CC,  1,$18,  1,$A1,$FF ;	DATA XREF: BANKC:84CA-o
byte_1285DB:
		.BYTE $5E,  1,$10,$21,	1,$FF ;	DATA XREF: BANKC:84CC-o
byte_1285E1:
		.BYTE $4C,  1,$10,  7,$41,$E1,$FF ; DATA XREF: BANKC:84CE-o
byte_1285E8:
		.BYTE $CC,  1,$44,$C6,	2,$FF ;	DATA XREF: BANKC:84D0-o
					; ind data used	at 8000
byte_1285EE:
		.BYTE $D8,  1,$44,  1,$41,$FF ;	DATA XREF: BANKC:84D2-o
					; ind data used	at 8000
byte_1285F4:
		.BYTE $DE,  1,$10,$C2,$FF ; DATA XREF: BANKC:84D4-o
					; ind data used	at 8000
byte_1285F9:
		.BYTE $CC,  1,$10,$C3,$81,$FF ;	DATA XREF: BANKC:84D6-o
					; ind data used	at 8000
byte_1285FF:
		.BYTE $CC,  2,$10,$14,$41,$21,$FF,$C1,$21,$FF ;	DATA XREF: BANKC:84D8-o
byte_128609:
		.BYTE $CC,  2,$18,$1C,	3,$21,$FF,  4,$FF ; DATA XREF: BANKC:84DA-o
byte_128612:
		.BYTE $FE,  2,$10,$14,	5,$82,$FF,  5,$82,$FF ;	DATA XREF: BANKC:84DC-o
byte_12861C:
		.BYTE $CC,  2,$10,$14,$83,$C1,$61,$FF,$83,$41,$E1,$FF
					; DATA XREF: BANKC:84DE-o
byte_128628:
		.BYTE $CC,  1,$28,$43,$FF ; DATA XREF: BANKC:84E0-o
byte_12862D:
		.BYTE $CE,  2,$28,$24,$41,$FF,$C1,$FF ;	DATA XREF: BANKC:84E2-o
byte_128635:
		.BYTE $CE,  2,$28,$24,	1,$43,$81,$C1,	1,$41,$81,$E1,$FF,$C2,$81,$C1
					; DATA XREF: BANKC:84E4-o
		.BYTE	1,$41,$81,$C1,$62,$FF
byte_12864B:
		.BYTE $CE,  2,$28,$24,$A1,$FF,$A1,$FF ;	DATA XREF: BANKC:84E6-o
byte_128653:
		.BYTE $4C,  2,$28,$24, $B,$FF, $B,$FF ;	DATA XREF: BANKC:84E8-o
byte_12865B:
		.BYTE $58,  3,$20,$2C,$30,  2,$FF,  2,$FF,  2,$FF ; DATA XREF: BANKC:84EA-o
byte_128666:
		.BYTE $CC,  1,$10,$C3,$83,$47,$FF ; DATA XREF: BANKC:84EC-o
					; ind data used	at 8000
byte_12866D:
		.BYTE $D8,  1,$10,$41,$FF ; DATA XREF: BANKC:84EE-o
byte_128672:
		.BYTE $EA,  1,$10,$41,$61,$FF ;	DATA XREF: BANKC:84F0-o
					; ind data used	at 8000
byte_128678:
		.BYTE $EC,  1,$20,$61,$C1,  6,$42,  3,$4A,  7,$E1,$FF
					; DATA XREF: BANKC:84F2-o
					; ind data used	at 8000
byte_128684:
		.BYTE $CC,  1,$10,$82,$C1,$FF ;	DATA XREF: BANKC:84F4-o
					; ind data used	at 8000
byte_12868A:
		.BYTE $D8,  2,$14,$10,$85,$41,$FF,$84,$FF ; DATA XREF: BANKC:84F6-o
					; ind data used	at 8000
byte_128693:
		.BYTE $58,  4,$10,$14,$18,$1C,$81,$47,$FF,$62,$46,$FF,$21,  1,$61,$45
					; DATA XREF: BANKC:84F8-o
		.BYTE $FF,  1,$61,$46,$FF ; ind	data used at 8000
byte_1286A8:
		.BYTE $CC,  4,$38,$3C,$40,$44,$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
					; DATA XREF: BANKC:84FA-o BANKC:84FC-o
		.BYTE $81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF,$81,$A1,$81,$A1,$81,$A1 ;	ind data used at 8000
		.BYTE $81,$A1,$81,$FF,$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
byte_1286D6:
		.BYTE $EC,  1,$10,$B3,$FF ; DATA XREF: BANKC:84FE-o
					; ind data used	at 8000
byte_1286DB:
		.BYTE $E4,  1,$10,$A5,$FF ; DATA XREF: BANKC:8500-o
					; ind data used	at 8000
byte_1286E0:
		.BYTE $CC,  2,$14,$10,$C1,$A1,$FF,$41,$A1,$FF ;	DATA XREF: BANKC:8502-o
byte_1286EA:
		.BYTE $CC,  1,$14,$41,$A1,$FF ;	DATA XREF: BANKC:8504-o
byte_1286F0:
		.BYTE $CC,  1,$14,$C1,$A1,$FF ;	DATA XREF: BANKC:8506-o
byte_1286F6:
		.BYTE $CE,  1,$18,$81,$61,$FF ;	DATA XREF: BANKC:8508-o
byte_1286FC:
		.BYTE $CC,  1,$18,  1,$A1,$FF ;	DATA XREF: BANKC:850A-o
byte_128702:
		.BYTE $5E,  1,$10,$21,	1,$FF ;	DATA XREF: BANKC:850C-o
byte_128708:
		.BYTE $4C,  1,$10,  7,$41,$E1,$FF ; DATA XREF: BANKC:850E-o

; =============== S U B	R O U T	I N E =======================================
_bC_sA:					; CODE XREF: sub_9BFC3+10-P
					; sub_1283C3+32-p
					; sub_1283C3:loc_1283FE-p sub_128F89+A-P
					; sub_129060+5-P sub_129060+10-P
					; sub_129120+2C-P sub_129526+2B-P
					; sub_1295EB+11-P sub_129E07+24-P
					; sub_129E07+31-P sub_129E07+3A-P
					; sub_129E07+43-P sub_12A133+1F-P
					; sub_12A133+27-P sub_12A133+2F-P
					; sub_12A133+38-P sub_12A133+41-P
					; sub_12A133+49-P sub_12A133+51-P
					; sub_12A133+5A-P sub_12A488+20-p
					; sub_12A488+28-p sub_12AC69+A-p
					; sub_12AC79+4E-p sub_141C1C+4D-P
					; sub_141C1C+59-P sub_1753AA+10-P
					; DATA XREF: BANKC:8014-o
		PHA				; code used at 8000
		JSR		sub_1742CF	; code used at 8000
		PLA				; code used at 8000
		JSR		sub_12871A	; code used at 8000
		JMP		sub_12874C	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12871A:				; CODE XREF: _bC_sA+5-p
		ASL		; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		LDX		byte_6D8	; code used at 8000
		JSR		sub_12872A	; code used at 8000
		LDA		byte_1F		; code used at 8000
		CLC				; code used at 8000
		ADC		#$1F		; code used at 8000
		STA		byte_1F		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12872A:				; CODE XREF: sub_12871A+6-p
		JSR		sub_128735	; code used at 8000
		INC		byte_1F		; code used at 8000
		INY				; code used at 8000
		JSR		sub_128735	; code used at 8000
		INY				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128735:				; CODE XREF: sub_12872A-p sub_12872A+6-p
		LDA		byte_20		; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		LDA		byte_1F		; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		LDA		byte_7200,Y	; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		INC		byte_6D9	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12874C:				; CODE XREF: _bC_sA+8-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		DEY				; code used at 8000
		TYA				; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_7300,Y	; code used at 8000
		STA		byte_A		; code used at 8000
		JSR		sub_174690	; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		byte_20		; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		LDA		byte_1F		; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		TYA				; code used at 8000
		STA		byte_300,X	; code used at 8000
		INX				; code used at 8000
		INC		byte_6D9	; code used at 8000
		STX		byte_6D8	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s2:					; CODE XREF: sub_17590B+8-P
					; DATA XREF: BANKC:8004-o
		JSR		sub_128BF0	; code used at 8000
		LDA		byte_6D9	; code used at 8000
		BEQ		loc_128784	; code used at 8000
		JSR		sub_1742BA
		JSR		_vblank
loc_128784:				; CODE XREF: _bC_s2+6-j
		JSR		sub_1287A7	; code used at 8000
		JSR		sub_128A2C	; code used at 8000
		JSR		sub_128A49	; code used at 8000
		JSR		sub_128BCC	; code used at 8000
		JSR		sub_128A7E	; code used at 8000
		JSR		sub_128A91	; code used at 8000
		JSR		sub_128ABE	; code used at 8000
		JSR		sub_128B2B	; code used at 8000
		JSR		sub_128B3D	; code used at 8000
		JSR		_vblank		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_28		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1287A7:				; CODE XREF: _bC_s2:loc_128784-p
					; sub_12B877+27-p
		JSR		sub_128979	; code used at 8000
		JSR		sub_1289A4	; code used at 8000
loc_1287AD:				; CODE XREF: sub_1287A7+12-j
		JSR		sub_128972	; code used as ind data	at 8000
		JSR		sub_128917	; code used as ind data	at 8000
		JSR		sub_128895	; code used as ind data	at 8000
		JSR		sub_1287BC	; code used as ind data	at 8000
		JMP		loc_1287AD	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1287BC:				; CODE XREF: sub_1287A7+F-p
		DEC		byte_45		; code used as ind data	at 8000
		BNE		loc_1287EF	; code used as ind data	at 8000
		INC		byte_46		; code used as ind data	at 8000
		INC		word_40+1	; code used as ind data	at 8000
		LDA		word_40+1	; code used as ind data	at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_1287D3	; code used as ind data	at 8000
loc_1287CA:				; CODE XREF: sub_1287BC+1F-j
		AND		#1		; code used as ind data	at 8000
		BNE		loc_1287E2	; code used at 8000
		INC		byte_42		; code used at 8000
		JMP		loc_1287E2	; code used at 8000
loc_1287D3:				; CODE XREF: sub_1287BC+C-j
		LDA		byte_42		; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_1287DE	; code used at 8000
		LDA		word_40+1
		JMP		loc_1287CA
loc_1287DE:				; CODE XREF: sub_1287BC+1B-j
		LDA		#1		; code used at 8000
		STA		byte_42		; code used at 8000
loc_1287E2:				; CODE XREF: sub_1287BC+10-j
					; sub_1287BC+14-j
		LDA		byte_42		; code used as ind data	at 8000
		CMP		#$F		; code used as ind data	at 8000
		BNE		loc_1287EB	; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000
loc_1287EB:				; CODE XREF: sub_1287BC+2A-j
		LDA		byte_42		; code used at 8000
		STA		byte_45		; code used as ind data	at 8000
loc_1287EF:				; CODE XREF: sub_1287BC+2-j
					; sub_128AD0:loc_128AF3-j
		LDA		byte_46		; code used as ind data	at 8000
		AND		#3		; code used as ind data	at 8000
		BEQ		sub_128835	; code used as ind data	at 8000
		CMP		#1		; code used as ind data	at 8000
		BEQ		sub_128818	; code used as ind data	at 8000
		CMP		#2		; code used as ind data	at 8000
		BEQ		sub_128860	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1287FD:				; CODE XREF: sub_128A91-p
					; sub_128B7E+23-j
		DEC		byte_48		; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		AND		#$1F		; code used as ind data	at 8000
		BNE		loc_128813	; code used as ind data	at 8000
		LDA		word_3C+1	; code used at 8000
		CLC				; code used at 8000
		ADC		#$1E		; code used as ind data	at 8000
		STA		word_3C+1	; code used as ind data	at 8000
		LDA		word_3C		; code used at 8000
		EOR		#4		; code used at 8000
		STA		word_3C		; code used at 8000
		RTS				; code used at 8000
loc_128813:				; CODE XREF: sub_1287FD+6-j
		DEC		word_3C+1	; code used as ind data	at 8000
		DEC		word_3C+1	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128818:				; CODE XREF: sub_1287BC+3B-j
					; sub_128A49-p sub_128BA4+25-j
		INC		byte_48		; code used as ind data	at 8000
		LDA		word_3C+1	; code used at 8000
		AND		#$1F		; code used as ind data	at 8000
		CMP		#$1E		; code used at 8000
		BNE		loc_128830	; code used as ind data	at 8000
		LDA		word_3C+1	; code used at 8000
		SEC				; code used at 8000
		SBC		#$1E		; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		word_3C		; code used at 8000
		EOR		#4		; code used at 8000
		STA		word_3C		; code used at 8000
		RTS				; code used at 8000
loc_128830:				; CODE XREF: sub_128818+8-j
		INC		word_3C+1	; code used as ind data	at 8000
		INC		word_3C+1	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128835:				; CODE XREF: sub_1287BC+37-j
					; sub_128A6C+4-j sub_128AB4+4-j
		DEC		byte_49		; code used as ind data	at 8000
		LDA		word_3C		; code used as ind data	at 8000
		AND		#3		; code used as ind data	at 8000
		BNE		loc_128852	; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		CMP		#$3F       ; code used at 8000
		BCS		loc_128852	; code used at 8000
		LDA		word_3C+1	; code used at 8000
		CLC				; code used at 8000
		ADC		#$80       ; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		word_3C		; code used at 8000
		CLC				; code used at 8000
		ADC		#3		; code used at 8000
		STA		word_3C		; code used at 8000
		RTS				; code used at 8000
loc_128852:				; CODE XREF: sub_128835+6-j
					; sub_128835+C-j
		LDA		word_3C+1	; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		#$40       ; code used as ind data at 8000
		STA		word_3C+1	; code used as ind data	at 8000
		LDA		word_3C		; code used as ind data	at 8000
		SBC		#0		; code used as ind data	at 8000
		STA		word_3C		; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128860:				; CODE XREF: sub_1287BC+3F-j
					; sub_128A3F+4-j sub_128B43+4-j
		INC		byte_49		; code used as ind data	at 8000
		LDA		word_3C		; code used as ind data	at 8000
		AND		#3		; code used as ind data	at 8000
		CMP		#3		; code used at 8000
		BNE		loc_12887F	; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		AND		#$80       ; code used at 8000
		BEQ		loc_12887F	; code used as ind data	at 8000
		LDA		word_3C+1	; code used at 8000
		SEC				; code used at 8000
		SBC		#$80       ; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		word_3C		; code used at 8000
		SEC				; code used at 8000
		SBC		#3		; code used at 8000
		STA		word_3C		; code used at 8000
		RTS				; code used at 8000
loc_12887F:				; CODE XREF: sub_128860+8-j
					; sub_128860+E-j
		LDA		word_3C+1	; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#$40       ; code used as ind data at 8000
		STA		word_3C+1	; code used as ind data	at 8000
		LDA		word_3C		; code used as ind data	at 8000
		ADC		#0		; code used as ind data	at 8000
		STA		word_3C		; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12888D:				; CODE XREF: sub_128895:loc_128914-j
		LDA		#0		; code used as ind data	at 8000
		STA		byte_32		; code used as ind data	at 8000
		JSR		_vblank		; code used as ind data	at 8000
locret_128894:				; CODE XREF: sub_128895-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128895:				; CODE XREF: sub_1287A7+C-p
					; sub_128A2C+A-p sub_128A49+1A-p
					; sub_128A7E+A-p sub_128A91+1A-p
					; sub_128ABE+9-p sub_128B2B+9-p
		BCS		locret_128894	; code used as ind data	at 8000
		LDA		#$FF		; code used at 8000
		STA		byte_32		; code used as ind data	at 8000
		LDY		byte_6D8	; code used as ind data	at 8000
		LDA		word_3C		; code used as ind data	at 8000
		ORA		#$C0       ; code used as ind data at 8000
		STA		byte_300,Y	; code used as ind data	at 8000
		STA		byte_305,Y	; code used as ind data	at 8000
		LDA		#2		; code used as ind data	at 8000
		STA		byte_301,Y	; code used as ind data	at 8000
		STA		byte_306,Y	; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		STA		byte_302,Y	; code used as ind data	at 8000
		LDA		byte_7200,X	; code used as ind data	at 8000
		STA		byte_303,Y	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		LDA		byte_7200,X	; code used as ind data	at 8000
		STA		byte_304,Y	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#1		; code used as ind data	at 8000
		STA		byte_307,Y	; code used as ind data	at 8000
		LDA		byte_7200,X	; code used as ind data	at 8000
		STA		byte_308,Y	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		LDA		byte_7200,X	; code used as ind data	at 8000
		STA		byte_309,Y	; code used as ind data	at 8000
		TXA				; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_7300,X	; code used as ind data	at 8000
		STA		word_40		; code used as ind data	at 8000
		JSR		sub_1289B8	; code used as ind data	at 8000
		LDA		word_3E		; code used as ind data	at 8000
		STA		byte_30A,Y	; code used as ind data	at 8000
		LDA		word_3E+1	; code used as ind data	at 8000
		STA		byte_30B,Y	; code used as ind data	at 8000
		LDA		word_40		; code used as ind data	at 8000
		STA		byte_30C,Y	; code used as ind data	at 8000
		LDA		byte_6D8	; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#$D		; code used as ind data	at 8000
		STA		byte_6D8	; code used as ind data	at 8000
		INC		byte_6D9	; code used as ind data	at 8000
		INC		byte_6D9	; code used as ind data	at 8000
		INC		byte_6D9	; code used as ind data	at 8000
		INC		byte_44		; code used as ind data	at 8000
		LDA		byte_44		; code used as ind data	at 8000
		CMP		byte_47		; code used as ind data	at 8000
		BEQ		loc_128914	; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		byte_32		; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000
loc_128914:				; CODE XREF: sub_128895+78-j
		JMP		sub_12888D	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128917:				; CODE XREF: sub_1287A7+9-p
					; sub_128A2C+7-p sub_128A49+17-p
		LDA		byte_9A		; code used as ind data	at 8000
		CMP		#$C		; code used as ind data	at 8000
		BCC		loc_128939	; code used as ind data	at 8000
		CMP		#$19		; code used as ind data	at 8000
		BCC		loc_12892F	; code used at 8000
		LDA		word_7C		; code used at 8000
		AND		#$1F		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_6DE0,X	; code used as ind data	at 8000
		AND		#$F		; code used as ind data	at 8000
		CMP		#7		; code used at 8000
		BEQ		loc_128965	; code used as ind data	at 8000
loc_12892F:				; CODE XREF: sub_128917+8-j
		LDA		word_7C		; code used as ind data	at 8000
		AND		#$E0       ; code used as ind data at 8000
		CMP		byte_8C		; code used as ind data	at 8000
		BEQ		loc_128967	; code used as ind data	at 8000
		BNE		loc_128965	; code used at 8000
loc_128939:				; CODE XREF: sub_128917+4-j
		LDA		byte_43		; code used as ind data	at 8000
		BNE		loc_128947	; code used as ind data	at 8000
		LDA		word_7C		; code used as ind data	at 8000
		AND		#$E0       ; code used as ind data at 8000
		CMP		byte_8C		; code used at 8000
		BEQ		loc_128967	; code used at 8000
		BNE		loc_128965	; code used as ind data	at 8000
loc_128947:				; CODE XREF: sub_128917+24-j
		LDA		byte_8C		; code used at 8000
		BNE		loc_128957	; code used as ind data	at 8000
		LDA		word_7C		; code used as ind data	at 8000
		AND		#$E0       ; code used as ind data at 8000
		BEQ		loc_128967	; code used as ind data	at 8000
		CMP		byte_43		; code used as ind data	at 8000
		BEQ		loc_128965	; code used as ind data	at 8000
		BNE		loc_128961	; code used at 8000
loc_128957:				; CODE XREF: sub_128917+32-j
		LDA		word_7C		; code used at 8000
		AND		#$E0       ; code used at 8000
		CMP		byte_8C		; code used at 8000
		BEQ		loc_128967	; code used at 8000
		BNE		loc_128965	; code used as ind data	at 8000
loc_128961:				; CODE XREF: sub_128917+3E-j
		LDX		#$80       ; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_128965:				; CODE XREF: sub_128917+16-j
					; sub_128917+20-j sub_128917+2E-j
					; sub_128917+3C-j sub_128917+48-j
		SEC				; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000
loc_128967:				; CODE XREF: sub_128917+1E-j
					; sub_128917+2C-j sub_128917+38-j
					; sub_128917+46-j
					; sub_128B55:loc_128B7B-j
		LDA		word_7C		; code used as ind data	at 8000
		AND		#$1F		; code used as ind data	at 8000
		STA		word_7C		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		CLC				; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128972:				; CODE XREF: sub_1287A7:loc_1287AD-p
					; sub_128A2C:loc_128A30-p
					; sub_128A49:loc_128A5D-p
					; sub_128A7E:loc_128A82-p
					; sub_128A91:loc_128AA5-p
					; sub_128ABE:loc_128AC1-p
					; sub_128B2B:loc_128B2E-p
		LDX		byte_48		; code used as ind data	at 8000
		LDY		byte_49		; code used as ind data	at 8000
		JMP		sub_176C99	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128979:				; CODE XREF: sub_1287A7-p
		LDA		byte_30		; code used at 8000
		STA		byte_48		; code used at 8000
		LDA		byte_31		; code used at 8000
		STA		byte_49		; code used at 8000
		LDA		#8		; code used at 8000
		STA		word_4A		; code used at 8000
		LDA		#$C		; code used at 8000
		STA		byte_47		; code used at 8000
		LDA		#7		; code used at 8000
		STA		word_4A+1	; code used at 8000
		LDA		#2		; code used at 8000
		STA		byte_46		; code used at 8000
		STA		byte_42		; code used at 8000
		STA		byte_45		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_40+1	; code used at 8000
		STA		byte_44		; code used at 8000
		LDA		byte_B		; code used at 8000
		STA		byte_43		; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_28		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1289A4:				; CODE XREF: sub_1287A7+3-p
		LDA		#$10		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#$E		; code used at 8000
		STA		word_4+1	; code used at 8000
		JSR		sub_1742CF	; code used at 8000
		LDA		byte_20		; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		byte_1F		; code used at 8000
		STA		word_3C+1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1289B8:				; CODE XREF: sub_128895+4E-p
		LDA		word_3C		; code used as ind data	at 8000
		STA		word_4		; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		STA		word_4+1	; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ROL		word_4		; code used as ind data	at 8000
		LDA		word_4		; code used as ind data	at 8000
		AND		#7		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		STA		word_3E+1	; code used at 8000
		LDA		word_4+1	; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		AND		#7		; code used as ind data	at 8000
		ORA		word_3E+1	; code used as ind data	at 8000
		ORA		#$C0       ; code used as ind data at 8000
		STA		word_3E+1	; code used as ind data	at 8000
		LDA		word_3C		; code used as ind data	at 8000
		AND		#4		; code used as ind data	at 8000
		ORA		#$23       ; code used as ind data at 8000
		STA		word_3E		; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		AND		#$40       ; code used as ind data at 8000
		STA		word_4		; code used as ind data	at 8000
		LDA		word_3C+1	; code used as ind data	at 8000
		AND		#2		; code used as ind data	at 8000
		STA		word_4+1	; code used as ind data	at 8000
		LDX		#3		; code used as ind data	at 8000
		LDA		word_4		; code used as ind data	at 8000
		BEQ		loc_1289FC	; code used as ind data	at 8000
		ASL		word_40		; code used as ind data	at 8000
		ASL		word_40		; code used as ind data	at 8000
		ASL		word_40		; code used as ind data	at 8000
		ASL		word_40		; code used as ind data	at 8000
		LDX		#$30       ; code used as ind data at 8000
loc_1289FC:				; CODE XREF: sub_1289B8+38-j
		LDA		word_4+1	; code used as ind data	at 8000
		BEQ		loc_128A08	; code used as ind data	at 8000
		ASL		word_40		; code used as ind data	at 8000
		ASL		word_40		; code used as ind data	at 8000
		TXA				; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used at 8000
		TAX				; code used as ind data	at 8000
loc_128A08:				; CODE XREF: sub_1289B8+46-j
		TXA				; code used as ind data	at 8000
		EOR		#$FF		; code used as ind data	at 8000
		STA		word_4+1	; code used as ind data	at 8000
		LDA		word_3E+1	; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		#$C0       ; code used as ind data at 8000
		STA		word_4		; code used as ind data	at 8000
		LDA		word_3E		; code used as ind data	at 8000
		AND		#4		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ORA		word_4		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_480,X	; code used as ind data	at 8000
		AND		word_4+1	; code used as ind data	at 8000
		ORA		word_40		; code used as ind data	at 8000
		STA		byte_480,X	; code used as ind data	at 8000
		STA		word_40		; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128A2C:				; CODE XREF: _bC_s2+11-p sub_12B877+2A-p
		LDA		#$F		; code used at 8000
		STA		byte_45		; code used at 8000
loc_128A30:				; CODE XREF: sub_128A2C+10-j
		JSR		sub_128972	; code used as ind data	at 8000
		JSR		sub_128917	; code used as ind data	at 8000
		JSR		sub_128895	; code used as ind data	at 8000
		JSR		sub_128A3F	; code used at 8000
		JMP		loc_128A30	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128A3F:				; CODE XREF: sub_128A2C+D-p
					; sub_128A7E+D-p
		DEC		byte_45		; code used as ind data	at 8000
		BEQ		loc_128A46	; code used as ind data	at 8000
		JMP		sub_128860	; code used as ind data	at 8000
loc_128A46:				; CODE XREF: sub_128A3F+2-j
		PLA				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128A49:				; CODE XREF: _bC_s2+14-p sub_12B877+2D-p
		JSR		sub_128818	; code used at 8000
		LDA		word_3C		; code used at 8000
		EOR		#4		; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		byte_48		; code used at 8000
		SEC				; code used at 8000
		SBC		#$10		; code used at 8000
		STA		byte_48		; code used at 8000
		LDA		#$F		; code used at 8000
		STA		byte_45		; code used at 8000
loc_128A5D:				; CODE XREF: sub_128A49+20-j
		JSR		sub_128972	; code used as ind data	at 8000
		JSR		sub_128917	; code used at 8000
		JSR		sub_128895	; code used at 8000
		JSR		sub_128A6C	; code used as ind data	at 8000
		JMP		loc_128A5D	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128A6C:				; CODE XREF: sub_128A49+1D-p
		DEC		byte_45		; code used at 8000
		BEQ		loc_128A73	; code used at 8000
		JMP		sub_128835	; code used as ind data	at 8000
loc_128A73:				; CODE XREF: sub_128A6C+2-j
		LDA		byte_6D9	; code used at 8000
		BEQ		loc_128A7B	; code used at 8000
		JSR		_vblank		; code used at 8000
loc_128A7B:				; CODE XREF: sub_128A6C+A-j
		PLA				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128A7E:				; CODE XREF: _bC_s2+1A-p
		LDA		#$F		; code used at 8000
		STA		byte_45		; code used at 8000
loc_128A82:				; CODE XREF: sub_128A7E+10-j
		JSR		sub_128972	; code used at 8000
		JSR		sub_128B03	; code used as ind data	at 8000
		JSR		sub_128895	; code used as ind data	at 8000
		JSR		sub_128A3F	; code used at 8000
		JMP		loc_128A82	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128A91:				; CODE XREF: _bC_s2+1D-p
		JSR		sub_1287FD	; code used at 8000
		LDA		word_3C		; code used at 8000
		EOR		#4		; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		byte_48		; code used at 8000
		CLC				; code used at 8000
		ADC		#$10		; code used at 8000
		STA		byte_48		; code used at 8000
		LDA		#$F		; code used at 8000
		STA		byte_45		; code used at 8000
loc_128AA5:				; CODE XREF: sub_128A91+20-j
		JSR		sub_128972	; code used at 8000
		JSR		sub_128B03	; code used as ind data	at 8000
		JSR		sub_128895	; code used at 8000
		JSR		sub_128AB4	; code used at 8000
		JMP		loc_128AA5	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128AB4:				; CODE XREF: sub_128A91+1D-p
		DEC		byte_45		; code used at 8000
		BEQ		loc_128ABB	; code used at 8000
		JMP		sub_128835	; code used at 8000
loc_128ABB:				; CODE XREF: sub_128AB4+2-j
		PLA				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128ABE:				; CODE XREF: _bC_s2+20-p
		JSR		sub_128AF6	; code used at 8000
loc_128AC1:				; CODE XREF: sub_128ABE+F-j
		JSR		sub_128972	; code used as ind data	at 8000
		JSR		sub_128B03	; code used as ind data	at 8000
		JSR		sub_128895	; code used as ind data	at 8000
		JSR		sub_128AD0	; code used as ind data	at 8000
		JMP		loc_128AC1	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128AD0:				; CODE XREF: sub_128ABE+C-p
		DEC		byte_45		; code used as ind data	at 8000
		BNE		loc_128AF3	; code used as ind data	at 8000
		DEC		byte_46		; code used at 8000
		INC		word_40+1	; code used as ind data	at 8000
		LDA		word_40+1	; code used at 8000
		AND		#1		; code used as ind data	at 8000
		BNE		loc_128AE0	; code used as ind data	at 8000
		DEC		byte_42		; code used at 8000
loc_128AE0:				; CODE XREF: sub_128AD0+C-j
		LDA		byte_42		; code used as ind data	at 8000
		BNE		loc_128AEF	; code used as ind data	at 8000
		LDA		byte_6D9	; code used at 8000
		BEQ		loc_128AEC	; code used at 8000
		JSR		_vblank		; code used at 8000
loc_128AEC:				; CODE XREF: sub_128AD0+17-j
		PLA				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000
loc_128AEF:				; CODE XREF: sub_128AD0+12-j
		LDA		byte_42		; code used as ind data	at 8000
		STA		byte_45		; code used as ind data	at 8000
loc_128AF3:				; CODE XREF: sub_128AD0+2-j
		JMP		loc_1287EF	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128AF6:				; CODE XREF: sub_128ABE-p
		LDA		#$E		; code used at 8000
		STA		byte_42		; code used at 8000
		LDA		#$F		; code used at 8000
		STA		byte_45		; code used at 8000
		LDA		#3		; code used at 8000
		STA		byte_46		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128B03:				; CODE XREF: sub_128A7E+7-p
					; sub_128A91+17-p sub_128ABE+6-p
		LDA		byte_9A		; code used as ind data	at 8000
		CMP		#$19		; code used as ind data	at 8000
		BCC		loc_128B17	; code used as ind data	at 8000
		LDA		word_7C		; code used at 8000
		AND		#$1F		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used as ind data	at 8000
		CMP		#7		; code used at 8000
		BEQ		loc_128B29	; code used as ind data	at 8000
loc_128B17:				; CODE XREF: sub_128B03+4-j
		LDA		word_7C		; code used as ind data	at 8000
		AND		#$E0       ; code used as ind data at 8000
		CMP		byte_8C		; code used as ind data	at 8000
		BEQ		loc_128B29	; code used as ind data	at 8000
		LDX		#$80       ; code used as ind data at 8000
		LDA		byte_8C		; code used at 8000
		BEQ		loc_128B27	; code used as ind data	at 8000
		LDX		#$84       ; code used as ind data at 8000
loc_128B27:				; CODE XREF: sub_128B03+20-j
		CLC				; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000
loc_128B29:				; CODE XREF: sub_128B03+12-j
					; sub_128B03+1A-j
		SEC				; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128B2B:				; CODE XREF: _bC_s2+23-p
		JSR		sub_128B7E	; code used at 8000
loc_128B2E:				; CODE XREF: sub_128B2B+F-j
					; sub_128B3D+3-j
		JSR		sub_128972	; code used at 8000
		JSR		sub_128B55	; code used at 8000
		JSR		sub_128895	; code used at 8000
		JSR		sub_128B43	; code used at 8000
		JMP		loc_128B2E	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128B3D:				; CODE XREF: _bC_s2+26-p
		JSR		sub_128BA4	; code used at 8000
		JMP		loc_128B2E	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128B43:				; CODE XREF: sub_128B2B+C-p
		DEC		byte_45		; code used as ind data	at 8000
		BEQ		loc_128B4A	; code used at 8000
		JMP		sub_128860	; code used at 8000
loc_128B4A:				; CODE XREF: sub_128B43+2-j
		LDA		byte_6D9	; code used at 8000
		BEQ		loc_128B52	; code used at 8000
		JSR		_vblank		; code used at 8000
loc_128B52:				; CODE XREF: sub_128B43+A-j
		PLA				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128B55:				; CODE XREF: sub_128B2B+6-p
		LDA		byte_9A		; code used at 8000
		CMP		#$19		; code used at 8000
		BCC		loc_128B69	; code used at 8000
		LDA		word_7C		; code used at 8000
		AND		#$1F		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used at 8000
		CMP		#7		; code used at 8000
		BEQ		loc_128B7B	; code used at 8000
loc_128B69:				; CODE XREF: sub_128B55+4-j
		LDA		word_7C		; code used at 8000
		AND		#$E0       ; code used at 8000
		CMP		byte_8C		; code used at 8000
		BEQ		loc_128B7B	; code used at 8000
		LDX		#$80       ; code used at 8000
		LDA		byte_8C		; code used at 8000
		BEQ		loc_128B79	; code used at 8000
		LDX		#$84       ; code used at 8000
loc_128B79:				; CODE XREF: sub_128B55+20-j
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_128B7B:				; CODE XREF: sub_128B55+12-j
					; sub_128B55+1A-j
		JMP		loc_128967	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128B7E:				; CODE XREF: sub_128B2B-p
		LDA		#0		; code used at 8000
		STA		word_4		; code used at 8000
		STA		word_4+1	; code used at 8000
		JSR		sub_1742CF	; code used at 8000
		LDA		byte_20		; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		byte_1F		; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		byte_48		; code used at 8000
		SEC				; code used at 8000
		SBC		#8		; code used at 8000
		STA		byte_48		; code used at 8000
		LDA		byte_49		; code used at 8000
		SEC				; code used at 8000
		SBC		#7		; code used at 8000
		STA		byte_49		; code used at 8000
		LDA		#$F		; code used at 8000
		STA		byte_45		; code used at 8000
		JMP		sub_1287FD	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128BA4:				; CODE XREF: sub_128B3D-p
		LDA		#$1E		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		JSR		sub_1742CF	; code used at 8000
		LDA		byte_20		; code used at 8000
		STA		word_3C		; code used at 8000
		LDA		byte_1F		; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		byte_48		; code used at 8000
		CLC				; code used at 8000
		ADC		#$10		; code used at 8000
		STA		byte_48		; code used at 8000
		LDA		byte_49		; code used at 8000
		SEC				; code used at 8000
		SBC		#$E		; code used at 8000
		STA		byte_49		; code used at 8000
		LDA		#$F		; code used at 8000
		STA		byte_45		; code used at 8000
		JMP		sub_128818	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128BCC:				; CODE XREF: _bC_s2+17-p
		LDA		#$F8       ; code used at 8000
		LDX		#0		; code used at 8000
loc_128BD0:				; CODE XREF: sub_128BCC+8-j
		STA		_spr_ram,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		BNE		loc_128BD0	; code used as ind data	at 8000
		STX		byte_175	; code used at 8000
		LDA		#$F0       ; code used at 8000
		STA		byte_174	; code used at 8000
		JSR		_bC_s5		; code used at 8000
		BRK
		.BYTE $DD, 7		; ofs 0x0014001a, -> dst _bD_sD
		LDA		#0		; code used at 8000
		STA		byte_28		; code used at 8000
		JSR		_vblank		; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_28		; code used at 8000
locret_128BEF:				; CODE XREF: sub_128BF0+4-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128BF0:				; CODE XREF: _bC_s2-p
		LDA		byte_8B		; code used at 8000
		CMP		#$CC       ; code used at 8000
		BNE		locret_128BEF	; code used at 8000
		LDX		#$19
loc_128BF8:				; CODE XREF: sub_128BF0+1C-j
		LDA		byte_30
		AND		#$FE 
		CMP		byte_128C2B,X
		BNE		loc_128C0A
		LDA		byte_31
		AND		#$FE 
		CMP		byte_128C2B-1,X
		BEQ		loc_128C0F
loc_128C0A:				; CODE XREF: sub_128BF0+F-j
		DEX
		DEX
		BPL		loc_128BF8
		RTS
loc_128C0F:				; CODE XREF: sub_128BF0+18-j
		LDA		byte_31
		AND		#1
		ORA		byte_128C45-1,X
		STA		byte_31
		TAY
		LDA		byte_30
		AND		#1
		ORA		byte_128C45,X
		STA		byte_30
		TAX
		JSR		sub_176F34
		AND		#$E0 
		STA		byte_8C
		RTS
byte_128C2B:
		.BYTE	0,  8,	8,  0,	8,$10, $E,  8,$10,  8,$14,  2,$14, $E,$20,  0
					; DATA XREF: sub_128BF0+C-r
					; sub_128BF0+15-r
		.BYTE $26,  8,$28,  8,$2C,  2,$2C, $E,$32,  8
byte_128C45:
		.BYTE $18,  8,$14, $C,$14,  4,$26,  8,$28,  8,	8, $E,	8,  2,$2C, $C
					; DATA XREF: sub_128BF0+23-r
					; sub_128BF0+2D-r
		.BYTE  $E,  8,$10,  8,$20, $E,$20,  2,	2,  8

; =============== S U B	R O U T	I N E =======================================
_bC_s5:					; CODE XREF: sub_128BCC+12-p
					; sub_12A743+3C-p
					; sub_17530A:loc_175324-P
					; sub_175516+2E-P
					; DATA XREF: BANKC:800A-o
		LDX		byte_30		; code used at 8000
		LDY		byte_31		; code used at 8000
		JMP		sub_128CC1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s6:					; CODE XREF: sub_1757C0+61-P
					; sub_1757C0+88-P
					; DATA XREF: BANKC:800C-o
		JSR		sub_128CAB
		LDX		byte_2D
		LDY		byte_2E
		JMP		sub_128C77

; =============== S U B	R O U T	I N E =======================================
_bC_s32:				; CODE XREF: sub_1580AC+65-P
					; DATA XREF: BANKC:8064-o
		JSR		sub_128CAB
		LDX		byte_9E
		LDY		byte_9F

; =============== S U B	R O U T	I N E =======================================
sub_128C77:				; CODE XREF: _bC_s6+7-j
		STX		byte_2A
		STY		byte_2B
		JSR		sub_128CC1
		LDA		word_3C+1
		STA		byte_2B
		STA		byte_101
		LDA		word_3C
		STA		byte_2A
		STA		byte_100
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s31:				; CODE XREF: sub_175853+94-P
					; DATA XREF: BANKC:8062-o
		LDA		byte_30
		PHA
		LDA		byte_31
		PHA
		LDX		byte_2D
		STX		byte_30
		LDY		byte_2E
		STY		byte_31
		JSR		sub_128CC1
		PLA
		STA		byte_31
		STA		byte_101
		PLA
		STA		byte_30
		STA		byte_100
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128CAB:				; CODE XREF: _bC_s6-p _bC_s32-p
		LDA		byte_2A
		STA		word_3C
		LDA		byte_2B
		STA		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s3:					; CODE XREF: _b6_s6+78-P
					; sub_1750D0:loc_1751E5-P
					; DATA XREF: BANKC:8006-o
		LDX		byte_2A		; code used at 8000
		LDY		byte_2B		; code used at 8000
		JSR		sub_176CA4	; code used at 8000
		STA		byte_92		; code used at 8000
		LDX		byte_2A		; code used at 8000
		LDY		byte_2B		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128CC1:				; CODE XREF: _bC_s5+4-j	sub_128C77+4-p
					; _bC_s31+E-p
		STX		byte_100	; code used at 8000
		STY		byte_101	; code used at 8000
		LDA		byte_73E	; code used at 8000
		BPL		loc_128CD5	; code used at 8000
		STX		byte_104	; code used at 8000
		STY		byte_105	; code used at 8000
		JMP		loc_128CE1	; code used at 8000
loc_128CD5:				; CODE XREF: sub_128CC1+9-j
		TXA				; code used at 8000
		EOR		#$80       ; code used at 8000
		STA		byte_104	; code used at 8000
		TYA				; code used at 8000
		EOR		#$80       ; code used at 8000
		STA		byte_105	; code used at 8000
loc_128CE1:				; CODE XREF: sub_128CC1+11-j
		LDA		byte_740	; code used at 8000
		BPL		loc_128CEF	; code used at 8000
		STX		byte_108	; code used at 8000
		STY		byte_109	; code used as ind data	at 8000
		JMP		loc_128CFB	; code used at 8000
loc_128CEF:				; CODE XREF: sub_128CC1+23-j
		TXA				; code used at 8000
		EOR		#$80       ; code used at 8000
		STA		byte_108	; code used at 8000
		TYA				; code used at 8000
		EOR		#$80       ; code used at 8000
		STA		byte_109	; code used at 8000
loc_128CFB:				; CODE XREF: sub_128CC1+2B-j
		LDA		byte_742	; code used at 8000
		BPL		loc_128D09	; code used at 8000
		STX		byte_10C	; code used at 8000
		STY		byte_10D	; code used at 8000
		JMP		loc_128D15	; code used at 8000
loc_128D09:				; CODE XREF: sub_128CC1+3D-j
		TXA				; code used at 8000
		EOR		#$80       ; code used at 8000
		STA		byte_10C	; code used at 8000
		TYA				; code used at 8000
		EOR		#$80       ; code used at 8000
		STA		byte_10D	; code used at 8000
loc_128D15:				; CODE XREF: sub_128CC1+45-j
		LDA		byte_92		; code used at 8000
		STA		byte_93		; code used at 8000
		STA		byte_94		; code used at 8000
		STA		byte_95		; code used at 8000
		STA		byte_96		; code used at 8000
		LDA		byte_644	; code used at 8000
		STA		byte_103	; code used as ind data	at 8000
		STA		byte_6BC	; code used at 8000
		LDA		#4		; code used as ind data	at 8000
		ORA		byte_644	; code used at 8000
		STA		byte_107	; code used at 8000
		LDA		#8		; code used at 8000
		ORA		byte_644	; code used at 8000
		STA		byte_10B	; code used at 8000
		LDA		#$C		; code used at 8000
		ORA		byte_644	; code used at 8000
		STA		byte_10F	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_97		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128D44:				; CODE XREF: _bC_s4:loc_128E80-j
		LDA		#0		; code used at 8000
		STA		byte_102	; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_106	; code used at 8000
		LDA		#2		; code used at 8000
		STA		byte_10A	; code used at 8000
		LDA		#3		; code used at 8000
		STA		byte_10E	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s35:				; CODE XREF: sub_1424E4:loc_142500-P
					; sub_174C62+55-P sub_174CBD+7-P
					; DATA XREF: BANKC:806A-o
		LDA		byte_AC		; code used at 8000
		AND		#$1F		; code used at 8000
		BNE		locret_128D96	; code used at 8000
		BIT		byte_60C5	; code used as ind data	at 8000
		BVS		locret_128D96	; code used at 8000
		LDA		byte_2C		; code used at 8000
		BNE		locret_128D96	; code used at 8000
		LDA		#1		; code used at 8000
		STA		word_6C+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_6C		; code used at 8000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		LDA		byte_73E	; code used as ind data	at 8000
		BPL		loc_128D7E	; code used at 8000
		LDA		#4		; code used at 8000
		STA		word_6C		; code used at 8000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
loc_128D7E:				; CODE XREF: _bC_s35+1D-j
		LDA		byte_740	; code used at 8000
		BPL		loc_128D8A	; code used at 8000
		LDA		#8		; code used at 8000
		STA		word_6C		; code used at 8000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
loc_128D8A:				; CODE XREF: _bC_s35+29-j
		LDA		byte_742	; code used at 8000
		BPL		locret_128D96	; code used at 8000
		LDA		#$C		; code used at 8000
		STA		word_6C		; code used at 8000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
locret_128D96:				; CODE XREF: _bC_s35+4-j _bC_s35+9-j
					; _bC_s35+D-j _bC_s35+35-j _bC_s4+2-j
		RTS				; code used at 8000
		.BYTE $6F,  0,	0,$80,$6F,  0,	0,$88,$77,  0,	0,$80,$77,  0,	0,$88

; =============== S U B	R O U T	I N E =======================================
_bC_s4:					; CODE XREF: sub_1424E4+15-P
					; sub_17530A+A-P
					; DATA XREF: BANKC:8008-o
		LDA		byte_2C		; code used at 8000
		BNE		locret_128D96	; code used at 8000
		LDA		byte_644	; code used at 8000
		BEQ		loc_128DE6	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_128DCF	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_128DFD	; code used at 8000
		JSR		sub_128E92	; code used at 8000
		LDX		byte_30		; code used at 8000
		STX		byte_100	; code used at 8000
		INX				; code used at 8000
		STX		byte_104	; code used at 8000
		INX				; code used at 8000
		STX		byte_108	; code used at 8000
		INX				; code used at 8000
		STX		byte_10C	; code used at 8000
		JMP		loc_128E11	; code used at 8000
loc_128DCF:				; CODE XREF: _bC_s4+B-j
		JSR		sub_128E92	; code used at 8000
		LDX		byte_30		; code used at 8000
		STX		byte_100	; code used at 8000
		DEX				; code used at 8000
		STX		byte_104	; code used at 8000
		DEX				; code used at 8000
		STX		byte_108	; code used at 8000
		DEX				; code used at 8000
		STX		byte_10C	; code used at 8000
		JMP		loc_128E11	; code used as ind data	at 8000
loc_128DE6:				; CODE XREF: _bC_s4+7-j
		JSR		sub_128E83	; code used at 8000
		LDY		byte_31		; code used at 8000
		STY		byte_101	; code used at 8000
		INY				; code used at 8000
		STY		byte_105	; code used at 8000
		INY				; code used at 8000
		STY		byte_109	; code used at 8000
		INY				; code used at 8000
		STY		byte_10D	; code used at 8000
		JMP		loc_128E11	; code used at 8000
loc_128DFD:				; CODE XREF: _bC_s4+F-j
		JSR		sub_128E83	; code used at 8000
		LDY		byte_31		; code used at 8000
		STY		byte_101	; code used at 8000
		DEY				; code used at 8000
		STY		byte_105	; code used at 8000
		DEY				; code used at 8000
		STY		byte_109	; code used at 8000
		DEY				; code used at 8000
		STY		byte_10D	; code used at 8000
loc_128E11:				; CODE XREF: _bC_s4+25-j _bC_s4+3C-j
					; _bC_s4+53-j
		LDA		#4		; code used at 8000
		ORA		byte_644	; code used at 8000
		STA		byte_107	; code used at 8000
		LDA		#8		; code used at 8000
		ORA		byte_644	; code used at 8000
		STA		byte_10B	; code used at 8000
		LDA		#$C		; code used at 8000
		ORA		byte_644	; code used at 8000
		STA		byte_10F	; code used at 8000
		LDA		#$F0       ; code used at 8000
		STA		byte_97		; code used at 8000
		LDX		byte_100	; code used at 8000
		LDY		byte_101	; code used at 8000
		JSR		sub_176F34	; code used at 8000
		STA		byte_93		; code used at 8000
		LDX		byte_104	; code used at 8000
		LDY		byte_105	; code used as ind data	at 8000
		JSR		sub_176F34	; code used at 8000
		STA		byte_94		; code used at 8000
		LDX		byte_108	; code used at 8000
		LDY		byte_109	; code used at 8000
		JSR		sub_176F34	; code used at 8000
		STA		byte_95		; code used at 8000
		LDX		byte_10C	; code used at 8000
		LDY		byte_10D	; code used as ind data	at 8000
		JSR		sub_176F34	; code used at 8000
		STA		byte_96		; code used at 8000
		LDA		byte_73E	; code used at 8000
		BMI		loc_128E66	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_104	; code used at 8000
		STA		byte_105	; code used at 8000
loc_128E66:				; CODE XREF: _bC_s4+B5-j
		LDA		byte_740	; code used at 8000
		BMI		loc_128E73	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_108	; code used at 8000
		STA		byte_109	; code used at 8000
loc_128E73:				; CODE XREF: _bC_s4+C2-j
		LDA		byte_742	; code used at 8000
		BMI		loc_128E80	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_10C	; code used at 8000
		STA		byte_10D	; code used at 8000
loc_128E80:				; CODE XREF: _bC_s4+CF-j
		JMP		sub_128D44	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128E83:				; CODE XREF: _bC_s4:loc_128DE6-p
					; _bC_s4:loc_128DFD-p
		LDX		byte_30		; code used at 8000
		STX		byte_100	; code used at 8000
		STX		byte_104	; code used at 8000
		STX		byte_108	; code used at 8000
		STX		byte_10C	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128E92:				; CODE XREF: _bC_s4+11-p
					; _bC_s4:loc_128DCF-p
		LDY		byte_31		; code used at 8000
		STY		byte_101	; code used at 8000
		STY		byte_105	; code used at 8000
		STY		byte_109	; code used at 8000
		STY		byte_10D	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s34:				; CODE XREF: sub_12B7E1:loc_12B819-P
					; DATA XREF: BANKC:8068-o
		LDA		byte_31		; code used at 8000
		CMP		#$C		; code used at 8000
		BNE		locret_128F02	; code used at 8000
		BIT		byte_60C5	; code used at 8000
		BVC		locret_128F02	; code used at 8000
		BRK
		.BYTE $21, $2F		; _syscall12
		JSR		sub_128F03	; code used at 8000
		JSR		sub_128F24	; code used at 8000
		JSR		sub_128F4F	; code used at 8000
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22
		JSR		sub_174369	; code used at 8000
		LDA		#$C5       ; code used at 8000
		STA		byte_8B		; code used at 8000
		LDA		#7		; code used at 8000
		STA		byte_30		; code used at 8000
		LDA		#5		; code used at 8000
		STA		byte_31		; code used at 8000
		LDA		#$2F       ; code used at 8000
		STA		byte_2A		; code used at 8000
		LDA		#$15		; code used at 8000
		STA		byte_2B		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_644	; code used at 8000
		JSR		loc_1752EB	; code used at 8000
		JSR		_bC_s1A		; code used at 8000
		JSR		sub_175B0E	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_60C5	; code used at 8000
		LDA		#$A		; code used at 8000
		STA		byte_92		; code used at 8000
		LDX		#$B		; code used at 8000
loc_128EEB:				; CODE XREF: _bC_s34+5C-j
		LDA		#$F		; code used at 8000
		STA		byte_750,X	; code used at 8000
		DEX				; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_750,X	; code used at 8000
		DEX				; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_750,X	; code used at 8000
		DEX				; code used at 8000
		BPL		loc_128EEB	; code used at 8000
		JSR		sub_12A743	; code used at 8000
locret_128F02:				; CODE XREF: _bC_s34+4-j _bC_s34+9-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F03:				; CODE XREF: _bC_s34+E-p sub_129007+E-p
		LDX		#$28       ; code used at 8000
		STX		word_3C		; code used at 8000
		JSR		sub_128F10	; code used at 8000
		JSR		sub_128F10	; code used at 8000
		JSR		sub_128F10	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F10:				; CODE XREF: sub_128F03+4-p
					; sub_128F03+7-p
		JSR		sub_128F1F	; code used at 8000
		JSR		sub_128F1F	; code used at 8000
		JSR		sub_128F1F	; code used at 8000
		JSR		sub_128F1F	; code used at 8000
		JSR		sub_128F1F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F1F:				; CODE XREF: sub_128F10-p sub_128F10+3-p
					; sub_128F10+6-p sub_128F10+9-p
		LDX		word_3C		; code used at 8000
		JMP		sub_12A92F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F24:				; CODE XREF: _bC_s34+11-p
		LDA		#$1E		; code used at 8000
		STA		word_3C		; code used at 8000
loc_128F28:				; CODE XREF: sub_128F24+9-j
		JSR		sub_128F30	; code used at 8000
		DEC		word_3C		; code used at 8000
		BNE		loc_128F28	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F30:				; CODE XREF: sub_128F24:loc_128F28-p
		JSR		sub_1743B8	; code used at 8000
		AND		#$F		; code used at 8000
		ASL		; code used at 8000
		STA		word_4		; code used at 8000
		JSR		sub_1743B8	; code used at 8000
		AND		#$F		; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		TAX				; code used at 8000
		ASL		; code used at 8000
		STA		word_4+1	; code used at 8000
		JSR		sub_129074	; code used at 8000
		BRK
		.BYTE $95, $2F		; _syscall12
locret_128F49:				; CODE XREF: sub_128F4F+2B-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F4A:				; CODE XREF: sub_129007+56-j
		LDX		#$28       ; code used at 8000
		JMP		sub_12ABB4	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F4F:				; CODE XREF: _bC_s34+14-p
		LDA		#$A		; code used at 8000
		STA		word_3C		; code used at 8000
		STA		word_3E		; code used at 8000
		LDA		#$1C		; code used at 8000
		STA		word_3C+1	; code used at 8000
		STA		word_3E+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_7200	; code used at 8000
		STA		byte_7201	; code used at 8000
		STA		byte_7202	; code used at 8000
		STA		byte_7203	; code used at 8000
		STA		word_40		; code used at 8000
loc_128F6B:				; CODE XREF: sub_128F4F+30-j
		JSR		sub_128F82	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
		INC		word_40		; code used at 8000
		LDY		word_40		; code used at 8000
		CPY		#$15		; code used at 8000
		BEQ		locret_128F49	; code used at 8000
		JSR		sub_128F97	; code used at 8000
		JMP		loc_128F6B	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F82:				; CODE XREF: sub_128F4F:loc_128F6B-p
		LDX		#0		; code used at 8000
		JSR		sub_128F89	; code used at 8000
		LDX		#2		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F89:				; CODE XREF: sub_128F82+2-p
		LDA		word_3C,X	; code used at 8000
		STA		word_4		; code used at 8000
		LDA		word_3C+1,X	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128F97:				; CODE XREF: sub_128F4F+2D-p
		LDX		#0		; code used at 8000
		LDA		byte_128FB9,Y	; code used at 8000
		JSR		sub_128FA4	; code used at 8000
		LDX		#2		; code used at 8000
		LDA		byte_128FCE,Y	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_128FA4:				; CODE XREF: sub_128F97+5-p
		BEQ		loc_128FAF	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_128FB4	; code used at 8000
		DEC		word_3C,X	; code used at 8000
		DEC		word_3C,X	; code used at 8000
		RTS				; code used at 8000
loc_128FAF:				; CODE XREF: sub_128FA4-j
		DEC		word_3C+1,X	; code used at 8000
		DEC		word_3C+1,X	; code used at 8000
		RTS				; code used at 8000
loc_128FB4:				; CODE XREF: sub_128FA4+4-j
		INC		word_3C,X	; code used at 8000
		INC		word_3C,X	; code used at 8000
		RTS				; code used at 8000
byte_128FB9:
		.BYTE	0,  0,	0,  0,	1,  0,	0,  1,	0,  0,	1,  1,	0,  0,	0,  1
					; DATA XREF: sub_128F97+2-r
		.BYTE	0,  0,	0,  1,	0
byte_128FCE:
		.BYTE	0,  0,	0,  0,	1,  0,	0,  1,	0,  0,	0,  0,	3,  0,	0,  0
					; DATA XREF: sub_128F97+A-r
		.BYTE	3,  0,	0,  3,	3

; =============== S U B	R O U T	I N E =======================================
_bC_s1B:				; CODE XREF: sub_129007+8-p
					; sub_15B6A6+7-P
					; DATA XREF: BANKC:8036-o
		LDX		#0		; code used at 8000
		LDA		#$D		; code used at 8000
loc_128FE7:				; CODE XREF: _bC_s1B+A-j
		STA		byte_7400,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$60       ; code used at 8000
		BNE		loc_128FE7	; code used at 8000
		LDA		#$2E       ; code used at 8000
		STA		byte_7400	; code used at 8000
		LDX		#1		; code used at 8000
		STX		byte_7474	; code used at 8000
		INX				; code used at 8000
		STX		byte_7475	; code used at 8000
		LDX		#5		; code used at 8000
		STX		byte_748C	; code used at 8000
		INX				; code used at 8000
		STX		byte_748D	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129007:				; CODE XREF: sub_12B97E+17-p
		LDA		byte_60C5	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_60C5	; code used at 8000
		JSR		_bC_s1B		; code used at 8000
		BRK
		.BYTE $F2, 7		; ofs 0x00080014, -> dst _b5_sA
		JSR		sub_128F03	; code used at 8000
		LDA		byte_31		; code used at 8000
		AND		#1		; code used at 8000
		EOR		#1		; code used at 8000
		ASL		; code used at 8000
		STA		word_3C+1	; code used at 8000
		LDA		#$78       ; code used at 8000
		STA		byte_6DF	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4		; code used at 8000
loc_12902A:				; CODE XREF: sub_129007+40-j
		LDA		word_3C+1	; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_3E		; code used at 8000
loc_129032:				; CODE XREF: sub_129007+36-j
		JSR		sub_129074	; code used at 8000
		INC		word_4+1	; code used at 8000
		INC		word_3E		; code used at 8000
		LDA		word_3E		; code used at 8000
		CMP		#4		; code used at 8000
		BNE		loc_129032	; code used at 8000
		INC		word_4		; code used at 8000
		INC		word_4		; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#$1E		; code used at 8000
		BNE		loc_12902A	; code used at 8000
		LDA		#1		; code used at 8000
		JSR		sub_129060	; code used at 8000
		INC		word_4+1	; code used at 8000
		INC		word_4+1	; code used at 8000
		LDA		#5		; code used at 8000
		JSR		sub_129060	; code used at 8000
loc_129057:				; CODE XREF: sub_129087+5-j
		JSR		sub_1742BA	; code used at 8000
		BRK
		.BYTE $95, $2F		; _syscall12
		JMP		sub_128F4A	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129060:				; CODE XREF: sub_129007+44-p
					; sub_129007+4D-p
		PHA				; code used at 8000
		LDX		#$16		; code used at 8000
		STX		word_4		; code used at 8000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4		; code used at 8000
		INC		word_4		; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
		TXA				; code used at 8000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129074:				; CODE XREF: sub_128F30+13-p
					; sub_129007:loc_129032-p
		JSR		sub_129087	; code used at 8000
		INC		word_4		; code used at 8000
		INC		word_4+1	; code used at 8000
		JSR		sub_129087	; code used at 8000
		DEC		word_4+1	; code used at 8000
		JSR		sub_129087	; code used at 8000
		INC		word_4+1	; code used at 8000
		DEC		word_4		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129087:				; CODE XREF: sub_129074-p sub_129074+7-p
					; sub_129074+C-p
		LDA		#0		; code used at 8000
		JSR		sub_1742C7	; code used at 8000
		JMP		loc_129057	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12908F:				; DATA XREF: BANKC:B012-o
		LDA		byte_60C8	; ind code used	at 8000
		AND		#4		; code used at 8000
		BEQ		locret_1290E0	; code used at 8000
		LDA		byte_30		; code used at 8000
		CMP		#$10		; code used at 8000
		BCC		locret_1290E0	; code used at 8000
		CMP		#$14		; code used at 8000
		BCS		locret_1290E0	; code used at 8000
		LDA		byte_31		; code used at 8000
		CMP		#$D		; code used at 8000
		BCC		locret_1290E0	; code used at 8000
		CMP		#$11		; code used at 8000
		BCS		locret_1290E0	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $93, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip	; code used at 8000
		LDA		#2		; code used at 8000
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $94, $77		; _msg_m00_arg1
loc_1290C1:				; CODE XREF: sub_12908F+3A-j
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1290CC	; code used at 8000
		BRK
		.BYTE $91, $77		; _msg_m00_arg1
		JMP		loc_1290C1	; code used at 8000
loc_1290CC:				; CODE XREF: sub_12908F+35-j
		BRK
		.BYTE $92, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip	; code used at 8000
		LDA		#$80       ; code used at 8000
		STA		byte_60C8	; code used at 8000
		LDA		#$12		; code used at 8000
		STA		byte_7579	; code used at 8000
		LDA		#$2F       ; code used at 8000
		BNE		loc_129117	; code used at 8000
locret_1290E0:				; CODE XREF: sub_12908F+5-j
					; sub_12908F+B-j sub_12908F+F-j
					; sub_12908F+15-j sub_12908F+19-j
					; sub_1290E1+5-j sub_1290E1+D-j
					; sub_1290E1+20-j sub_1290E1+24-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1290E1:				; DATA XREF: BANKC:B014-o
		LDY		byte_31		; ind code used	at 8000
		LDA		byte_60C8	; code used at 8000
		BMI		locret_1290E0	; code used at 8000
		CMP		#1		; code used at 8000
		BCS		loc_1290FF	; code used at 8000
		CPY		#4		; code used at 8000
		BNE		locret_1290E0	; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_60C8	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $8E, $77		; _msg_m00_arg1
		LDA		#$2D       ; code used at 8000
		BNE		loc_129117	; code used at 8000
loc_1290FF:				; CODE XREF: sub_1290E1+9-j
		CMP		#3		; code used at 8000
		BCS		locret_1290E0	; code used at 8000
		CPY		#6		; code used at 8000
		BNE		locret_1290E0	; code used at 8000
		LDA		#3		; code used at 8000
		STA		byte_60C8	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $8F, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip	; code used at 8000
		LDA		#$2E       ; code used at 8000
loc_129117:				; CODE XREF: sub_12908F+4F-j
					; sub_1290E1+1C-j
		JSR		_bC_s0		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12911A:				; CODE XREF: sub_129120+1D-p
		LDA		#0		; code used at 8000
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
locret_12911F:				; CODE XREF: sub_129120+3-j
					; sub_129120+7-j sub_129120+D-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129120:				; DATA XREF: BANKC:B016-o
		LDA		byte_60C8	; ind code used	at 8000
		BMI		locret_12911F	; code used at 8000
		AND		#4		; code used at 8000
		BNE		locret_12911F	; code used at 8000
		LDA		byte_31		; code used at 8000
		CMP		#8		; code used at 8000
		BNE		locret_12911F	; code used at 8000
		LDA		#7		; code used at 8000
		STA		byte_60C8	; code used at 8000
		JSR		sub_174CCF	; code used at 8000
		BRK
		.BYTE $90, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip	; code used at 8000
		JSR		sub_12911A	; code used at 8000
		LDA		#$1E		; code used at 8000
		STA		byte_92		; code used at 8000
		LDX		#$10		; code used at 8000
		STX		word_4		; code used at 8000
		LDY		#$E		; code used at 8000
		STY		word_4+1	; code used at 8000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		LDA		#0		; code used at 8000
		JSR		sub_12915C	; code used at 8000
		LDA		#1		; code used at 8000
		JSR		sub_12915C	; code used at 8000
		JMP		sub_1742B0	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12915C:				; CODE XREF: sub_129120+31-p
					; sub_129120+36-p
		JSR		_bC_s1F		; code used at 8000
		JMP		sub_129A38	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129162:				; DATA XREF: BANKC:B018-o
		LDA		byte_60B7
		BMI		loc_129199
		ORA		byte_60B9
		ORA		byte_60CA
		BMI		locret_129198
		LDA		byte_30
		CMP		#$21 
		BNE		locret_129198
		LDA		byte_31
		CMP		#$C
		BNE		locret_129198
		LDA		#1
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		byte_60B7
		ORA		#$80 
		STA		byte_60B7
		LDA		#$AC 
		STA		byte_7633
		JSR		sub_174CBD
		JSR		_bC_s12_vblank_count_50
		LDA		#$2A 
		JMP		_bC_s0
locret_129198:				; CODE XREF: sub_129162+B-j
					; sub_129162+11-j sub_129162+17-j
					; sub_129162+3B-j sub_129162+41-j
		RTS
loc_129199:				; CODE XREF: sub_129162+3-j
		LDA		byte_30
		CMP		#$23 
		BNE		locret_129198
		LDA		byte_31
		CMP		#$C
		BNE		locret_129198
		LDA		byte_60CA
		ORA		#$80 
		STA		byte_60CA
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22
		JSR		sub_174369
		LDA		#$9D 
		STA		byte_2A
		LDA		#$93 
		STA		byte_2B
		LDA		#$15
		STA		byte_30
		LDA		#8
		STA		byte_31
		LDA		#$17
		STA		byte_8B
		LDA		#2
		STA		byte_644
		LDA		#$12
		STA		byte_92
		LDA		#$78 
		STA		byte_6DF
		JSR		loc_1752EB
		JSR		sub_174CCF
		BRK
		.BYTE $98, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s10:				; CODE XREF: sub_A0E0-P
					; DATA XREF: BANKC:8020-o
		JSR		sub_1293DA
		BCS		loc_12923A
		LDA		byte_60B7
		BPL		loc_1291F6
		LDA		byte_8B
		CMP		#$C
		BEQ		loc_12923A
		CMP		#$7A 
		BEQ		loc_12923A
loc_1291F6:				; CODE XREF: _bC_s10+8-j
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		byte_6DF
		STA		byte_C5
		CMP		#$78 
		LDA		#$97 
		BCC		loc_129206
		LDA		#$3D 
loc_129206:				; CODE XREF: _bC_s10+20-j
		STA		byte_6DF
		JSR		sub_12923C
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s11:				; CODE XREF: sub_AEB9+3-P
					; DATA XREF: BANKC:8022-o
		JSR		sub_1293DA
		BCS		loc_12923A
		LDA		byte_6DF
		STA		byte_C5
		CMP		#$78 
		BCS		loc_129232
		LDA		#$97 
		STA		byte_6DF
		BRK
		.BYTE 4, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		JSR		sub_12923C
		SEC
		RTS
loc_129232:				; CODE XREF: _bC_s11+C-j
		BRK
		.BYTE 2, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		SEC
		RTS
loc_12923A:				; CODE XREF: _bC_s10+3-j _bC_s10+E-j
					; _bC_s10+12-j _bC_s11+3-j
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12923C:				; CODE XREF: _bC_s10+27-p _bC_s11+1F-p
		LDA		#0
		STA		byte_AA
		LDA		byte_9A
		BNE		sub_1292B0
		LDX		#6
loc_129246:				; CODE XREF: sub_12923C+16-j
		LDA		#$89 
		JSR		_get_syscall0_data_byte_X
		CMP		byte_C5
		BCC		loc_129254
		BEQ		loc_129254
		DEX
		BNE		loc_129246
loc_129254:				; CODE XREF: sub_12923C+11-j
					; sub_12923C+13-j
		STX		byte_C5
		LDA		#$8A 
		JSR		_get_syscall0_data_byte_X
		TAY
		CPX		#4
		BCS		loc_129264
		LDA		#$2A 
		BNE		loc_129266
loc_129264:				; CODE XREF: sub_12923C+22-j
		LDA		#$2D 
loc_129266:				; CODE XREF: sub_12923C+26-j
		SBC		byte_C5
		STA		byte_C5
loc_12926A:				; CODE XREF: sub_12923C+62-j
		LDX		#0
loc_12926C:				; CODE XREF: sub_12923C+4A-j
		TXA
		PHA
		TYA
		PHA
		LDA		#$8B 
		JSR		_get_syscall0_data_byte_Y
		PHA
		LDA		byte_1292A4,X
		TAY
		PLA
		STA		_ram_pal_buf,Y
		PLA
		TAY
		PLA
		TAX
		INY
		INX
		CPX		#$C
		BNE		loc_12926C
		TYA
		PHA
		JSR		sub_17435B
		LDX		#3
		JSR		_vblank_count
		PLA
		TAY
		CPY		#$54 
		BNE		loc_12929A
		LDY		#0
loc_12929A:				; CODE XREF: sub_12923C+5A-j
		DEC		byte_C5
		LDA		byte_C5
		BNE		loc_12926A
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		RTS
byte_1292A4:
		.BYTE	1,  4,	7, $A,	2,  5,	8, $B,	3,  6,	9, $C
					; DATA XREF: sub_12923C+3A-r

; =============== S U B	R O U T	I N E =======================================
sub_1292B0:				; CODE XREF: sub_12923C+6-j
		JSR		sub_129323
		LDY		#0
loc_1292B5:				; CODE XREF: sub_1292B0+A-j
		JSR		sub_1292F5
		CPY		#$C
		BNE		loc_1292B5
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369
		JSR		_vblank_and_render_off_flag10_set
		JSR		sub_176C41
		JSR		sub_129323
		JSR		sub_12932E
		JSR		_clear_nmi_flag_10
		LDA		#$FF
		STA		byte_6F0
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		JSR		_pal_fade_in
		JSR		sub_17435B
		JSR		_vblank
		JSR		sub_17443A
		LDY		#$C
loc_1292ED:				; CODE XREF: sub_1292B0+42-j
		JSR		sub_1292F5
		CPY		#$1B
		BNE		loc_1292ED
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1292F5:				; CODE XREF: sub_1292B0:loc_1292B5-p
					; sub_1292B0:loc_1292ED-p
		LDX		#3
loc_1292F7:				; CODE XREF: sub_1292F5+9-j
		LDA		byte_129308,Y
		STA		byte_C1,X
		INY
		DEX
		BNE		loc_1292F7
		TYA
		PHA
		JSR		sub_129339
		PLA
		TAY
		RTS
byte_129308:
		.BYTE	1,  8,	1,  5,	8,  0,	5,  8,	0,  5,	4,  1,	5,  4,	2,  1
					; DATA XREF: sub_1292F5:loc_1292F7-r
		.BYTE	4,  0,	1,  8,	0,  5,	4,  8,	1,  8,	4

; =============== S U B	R O U T	I N E =======================================
sub_129323:				; CODE XREF: sub_1292B0-p
					; sub_1292B0+1B-p
		LDX		#$C
loc_129325:				; CODE XREF: sub_129323+8-j
		LDA		_ram_pal_buf,X
		STA		_pak_data_ptr+1,X
		DEX
		BNE		loc_129325
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12932E:				; CODE XREF: sub_1292B0+1E-p
		LDA		#$F
		LDX		#$C
loc_129332:				; CODE XREF: sub_12932E+8-j
		STA		_ram_pal_buf,X
		DEX
		BNE		loc_129332
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129339:				; CODE XREF: sub_1292F5+D-p
					; sub_129339+32-j
		LDY		byte_C4
		LDX		#1
		JSR		sub_12937E
		DEY
		BPL		loc_129345
		LDY		#8
loc_129345:				; CODE XREF: sub_129339+8-j
		INX
		JSR		sub_12937E
		JSR		sub_12936E
		JSR		sub_12936E
		JSR		sub_12936E
		DEY
		BPL		loc_129357
		LDY		#8
loc_129357:				; CODE XREF: sub_129339+1A-j
		INX
		JSR		sub_12937E
		TYA
		PHA
		JSR		sub_17435B
		LDX		#3
		JSR		_vblank_count
		PLA
		TAY
		INC		byte_C4
		CPY		byte_C3
		BNE		sub_129339
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12936E:				; CODE XREF: sub_129339+10-p
					; sub_129339+13-p sub_129339+16-p
		INX
		INX
		JSR		sub_12937E
		DEY
		BPL		loc_129378
		LDY		#8
loc_129378:				; CODE XREF: sub_12936E+6-j
		DEX
		JSR		sub_12937E
		INX
		INX

; =============== S U B	R O U T	I N E =======================================
sub_12937E:				; CODE XREF: sub_129339+4-p
					; sub_129339+D-p sub_129339+1F-p
					; sub_12936E+2-p sub_12936E+B-p
		TYA
		BEQ		locret_1293C9
		LDA		byte_C2
		BEQ		loc_129394
		LSR
		BCS		loc_12939A
		LSR
		BCS		loc_1293A4
		LSR
		BCS		loc_1293AE
		JSR		loc_12939A
		JMP		loc_1293AE
loc_129394:				; CODE XREF: sub_12937E+5-j
		JSR		loc_12939A
		JMP		loc_1293A4
loc_12939A:				; CODE XREF: sub_12937E+8-j
					; sub_12937E+10-p
					; sub_12937E:loc_129394-p
		LDA		_ram_pal_buf,X
		CPY		#4
		BCC		loc_1293B8
		BEQ		loc_1293BE
		RTS
loc_1293A4:				; CODE XREF: sub_12937E+B-j
					; sub_12937E+19-j
		LDA		_ram_pal_buf,X
		CPY		#5
		BEQ		loc_1293C2
		BCS		loc_1293CA
		RTS
loc_1293AE:				; CODE XREF: sub_12937E+E-j
					; sub_12937E+13-j
		LDA		_ram_pal_buf,X
		CPY		#5
		BEQ		loc_1293C2
		BCS		loc_1293D2
		RTS
loc_1293B8:				; CODE XREF: sub_12937E+21-j
		SEC
		SBC		#$10
		BCS		loc_1293C6
		RTS
loc_1293BE:				; CODE XREF: sub_12937E+23-j
		LDA		#$F
		BNE		loc_1293C6
loc_1293C2:				; CODE XREF: sub_12937E+2B-j
					; sub_12937E+35-j
		LDA		_pak_data_ptr+1,X
		AND		#$F
loc_1293C6:				; CODE XREF: sub_12937E+3D-j
					; sub_12937E+42-j sub_12937E+52-j
					; sub_12937E+5A-j
		STA		_ram_pal_buf,X
locret_1293C9:				; CODE XREF: sub_12937E+1-j
					; sub_12937E+4E-j sub_12937E+56-j
		RTS
loc_1293CA:				; CODE XREF: sub_12937E+2D-j
		CMP		#$30 
		BCS		locret_1293C9
		ADC		#$10
		BNE		loc_1293C6
loc_1293D2:				; CODE XREF: sub_12937E+37-j
		CMP		_pak_data_ptr+1,X
		BCS		locret_1293C9
		ADC		#$10
		BNE		loc_1293C6

; =============== S U B	R O U T	I N E =======================================
sub_1293DA:				; CODE XREF: _bC_s10-p _bC_s11-p
		LDA		byte_2F
		AND		#2
		BNE		loc_129436
		LDA		byte_2C
		CMP		#1
		BNE		loc_1293ED
		BIT		byte_60B8
		BVC		loc_1293ED
		SEC
		RTS
loc_1293ED:				; CODE XREF: sub_1293DA+A-j
					; sub_1293DA+F-j
		LDA		byte_8B
		CMP		#$9C 
		BEQ		loc_129436
		CMP		#$9D 
		BEQ		loc_129436
		CMP		#$60 
		BEQ		loc_129436
		CMP		#$72 
		BNE		sub_129404
		LDA		byte_60B7
		BMI		loc_129436

; =============== S U B	R O U T	I N E =======================================
sub_129404:				; CODE XREF: sub_1293DA+23-j
					; sub_1295B8-p
		LDA		byte_9A		; code used at 8000
		BEQ		loc_129438	; code used at 8000
		LDA		byte_8B		; code used at 8000
		CMP		#8		; code used at 8000
		BEQ		loc_129436	; code used at 8000
		CMP		#$2D       ; code used at 8000
		BCC		loc_129438	; code used at 8000
		CMP		#$3C       ; code used at 8000
		BCC		loc_129436	; code used at 8000
		CMP		#$58       ; code used at 8000
		BEQ		loc_129436	; code used at 8000
		CMP		#$5B       ; code used at 8000
		BEQ		loc_129436	; code used at 8000
		CMP		#$85       ; code used at 8000
		BEQ		loc_129436	; code used at 8000
		CMP		#$9F       ; code used at 8000
		BCC		loc_129438	; code used at 8000
		CMP		#$A6       ; code used at 8000
		BEQ		loc_129438	; code used at 8000
		CMP		#$C6       ; code used at 8000
		BCC		loc_129436	; code used at 8000
		CMP		#$CF       ; code used at 8000
		BCC		loc_129438	; code used at 8000
		CMP		#$D6       ; code used at 8000
		BCS		loc_129438	; code used at 8000
loc_129436:				; CODE XREF: sub_1293DA+4-j
					; sub_1293DA+17-j sub_1293DA+1B-j
					; sub_1293DA+1F-j sub_1293DA+28-j
					; sub_129404+8-j sub_129404+10-j
					; sub_129404+14-j sub_129404+18-j
					; sub_129404+1C-j sub_129404+28-j
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_129438:				; CODE XREF: sub_129404+2-j
					; sub_129404+C-j sub_129404+20-j
					; sub_129404+24-j sub_129404+2C-j
					; sub_129404+30-j
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_sF:					; CODE XREF: sub_A0E4-P	sub_AEE0-P
					; DATA XREF: BANKC:801E-o
		LDA		#3
		BNE		sub_129446

; =============== S U B	R O U T	I N E =======================================
_bC_sE:					; CODE XREF: sub_AEDC-P
					; DATA XREF: BANKC:801C-o
		LDA		#1		; code used at 8000
		BNE		sub_129446	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_sD:					; CODE XREF: sub_AED8-P
					; DATA XREF: BANKC:801A-o
		LDA		#0		; code used at 8000
		BEQ		sub_129446	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129446:				; CODE XREF: _bC_sF+2-j	_bC_sE+2-j
		STA		_tmp_pak_data_bank ; code used at 8000
		LDA		#$10		; code used at 8000
		STA		byte_BA		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#$E		; code used at 8000
		STA		byte_BB		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDX		byte_30		; code used at 8000
		STX		word_B7+1	; code used at 8000
		LDY		byte_31		; code used at 8000
		STY		byte_B9		; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$1F		; code used at 8000
		STA		word_B7		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used at 8000
		BEQ		loc_12946E	; code used at 8000
		JSR		sub_1294A8	; code used at 8000
loc_12946E:				; CODE XREF: sub_129446+23-j
		JSR		sub_129581	; code used at 8000
		LDX		word_B7+1	; code used at 8000
		LDY		byte_B9		; code used at 8000
		JSR		sub_176F34	; code used at 8000
		TAX				; code used at 8000
		AND		#$E0       ; code used at 8000
		STA		byte_BC		; code used at 8000
		TXA				; code used at 8000
		AND		#$1F		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used at 8000
		CMP		#$D		; code used at 8000
		BNE		loc_129490	; code used at 8000
		LSR		_tmp_pak_data_bank ; code used at 8000
		BNE		sub_1294D0	; code used at 8000
		BEQ		loc_1294A0	; code used at 8000
loc_129490:				; CODE XREF: sub_129446+42-j
		CMP		#$C		; code used at 8000
		BNE		loc_12949A	; code used at 8000
		LSR		_tmp_pak_data_bank ; code used at 8000
		BCS		sub_1294D0	; code used at 8000
		BCC		loc_1294A0	; code used at 8000
loc_12949A:				; CODE XREF: sub_129446+4C-j
		CMP		#$B		; code used at 8000
		BEQ		sub_1294D0	; code used at 8000
		CLC
		RTS
loc_1294A0:				; CODE XREF: sub_129446+48-j
					; sub_129446+52-j
		BRK
		.BYTE 0, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1294A8:				; CODE XREF: sub_129446+25-p
		JSR		sub_1295B8	; code used at 8000
		BCC		loc_1294B0	; code used at 8000
		JSR		sub_129581	; code used at 8000
loc_1294B0:				; CODE XREF: sub_1294A8+3-j
		JSR		sub_129581	; code used at 8000
		JSR		sub_129581	; code used at 8000
		LDX		word_B7+1	; code used at 8000
		LDY		byte_B9		; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$1F		; code used at 8000
		STA		word_B7		; code used at 8000
		JSR		sub_1295B8	; code used at 8000
		BCC		loc_1294C9	; code used at 8000
		JSR		sub_129589	; code used at 8000
loc_1294C9:				; CODE XREF: sub_1294A8+1C-j
		JSR		sub_129589	; code used at 8000
		JSR		sub_129589	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1294D0:				; CODE XREF: sub_129446+46-j
					; sub_129446+50-j sub_129446+56-j
		JSR		sub_176C3C	; code used at 8000
		LDA		#0		; code used at 8000
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		LDA		#$90       ; code used at 8000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		JSR		sub_129526	; code used at 8000
		JSR		sub_1295B8	; code used at 8000
		BCC		loc_129518	; code used at 8000
		JSR		sub_129581	; code used at 8000
		JSR		sub_129526	; code used at 8000
		JSR		sub_129585	; code used at 8000
		LDX		word_B7+1	; code used at 8000
		LDY		byte_B9		; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$1F		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used at 8000
		CMP		#$B		; code used at 8000
		BEQ		loc_12950F	; code used at 8000
		CMP		#$C		; code used at 8000
		BEQ		loc_12950F	; code used at 8000
		CMP		#$D		; code used at 8000
		BEQ		loc_12950F	; code used at 8000
		JSR		sub_12958D	; code used at 8000
		JSR		sub_12958D	; code used at 8000
loc_12950F:				; CODE XREF: sub_1294D0+2F-j
					; sub_1294D0+33-j sub_1294D0+37-j
		JSR		sub_129526	; code used at 8000
		JSR		sub_129589	; code used at 8000
		JSR		sub_129526	; code used at 8000
loc_129518:				; CODE XREF: sub_1294D0+13-j
		LDA		byte_BC		; code used at 8000
		CMP		byte_8C		; code used at 8000
		BNE		loc_129524	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		JSR		_vblank		; code used at 8000
loc_129524:				; CODE XREF: sub_1294D0+4C-j
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129526:				; CODE XREF: sub_1294D0+D-p
					; sub_1294D0+18-p
					; sub_1294D0:loc_12950F-p
					; sub_1294D0+45-p
		JSR		sub_129555	; code used at 8000
		LDA		word_B7		; code used at 8000
		LDX		word_B7+1	; code used at 8000
		LDY		byte_B9		; code used at 8000
		JSR		sub_177CC8	; code used at 8000
		LDA		byte_BC		; code used at 8000
		CMP		byte_8C		; code used at 8000
		BNE		locret_129554	; code used at 8000
		LDA		byte_BA		; code used at 8000
		LSR		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_BB		; code used at 8000
		LSR		; code used at 8000
		STA		word_4+1	; code used at 8000
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		BCS		locret_129554	; code used at 8000
		LDA		byte_BA		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_BB		; code used at 8000
		STA		word_4+1	; code used at 8000
		LDA		word_B7		; code used at 8000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
locret_129554:				; CODE XREF: sub_129526+10-j
					; sub_129526+1F-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129555:				; CODE XREF: sub_129526-p
		LDX		#0		; code used at 8000
loc_129557:				; CODE XREF: sub_129555+F-j
		LDA		byte_6D40,X	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_129568	; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$A0       ; code used at 8000
		BNE		loc_129557	; code used at 8000
		CLC
		RTS
loc_129568:				; CODE XREF: sub_129555+7-j
		LDA		byte_8B		; code used at 8000
		STA		byte_6D40,X	; code used at 8000
		INX				; code used at 8000
		LDA		word_B7+1	; code used at 8000
		STA		byte_6D40,X	; code used at 8000
		INX				; code used at 8000
		LDA		byte_B9		; code used at 8000
		STA		byte_6D40,X	; code used at 8000
		INX				; code used at 8000
		LDA		word_B7		; code used at 8000
		STA		byte_6D40,X	; code used at 8000
		INX				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129581:				; CODE XREF: sub_129446:loc_12946E-p
					; sub_1294A8+5-p sub_1294A8:loc_1294B0-p
					; sub_1294A8+B-p sub_1294D0+15-p
		LDA		#0		; code used at 8000
		BEQ		sub_12958F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129585:				; CODE XREF: sub_1294D0+1B-p
		LDA		#1		; code used at 8000
		BNE		sub_12958F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129589:				; CODE XREF: sub_1294A8+1E-p
					; sub_1294A8:loc_1294C9-p
					; sub_1294A8+24-p sub_1294D0+42-p
		LDA		#2		; code used at 8000
		BNE		sub_12958F	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12958D:				; CODE XREF: sub_1294D0+39-p
					; sub_1294D0+3C-p
		LDA		#3		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_12958F:				; CODE XREF: sub_129581+2-j
					; sub_129585+2-j sub_129589+2-j
		CLC				; code used at 8000
		ADC		byte_644	; code used at 8000
		AND		#3		; code used at 8000
		BEQ		loc_1295AA	; code used at 8000
		LSR		; code used at 8000
		BEQ		loc_1295A3	; code used at 8000
		BCC		loc_1295B1	; code used at 8000
		DEC		word_B7+1	; code used at 8000
		DEC		byte_BA		; code used at 8000
		DEC		byte_BA		; code used at 8000
		RTS				; code used at 8000
loc_1295A3:				; CODE XREF: sub_12958F+9-j
		INC		word_B7+1	; code used at 8000
		INC		byte_BA		; code used at 8000
		INC		byte_BA		; code used at 8000
		RTS				; code used at 8000
loc_1295AA:				; CODE XREF: sub_12958F+6-j
		DEC		byte_B9		; code used at 8000
		DEC		byte_BB		; code used at 8000
		DEC		byte_BB		; code used at 8000
		RTS				; code used at 8000
loc_1295B1:				; CODE XREF: sub_12958F+B-j
		INC		byte_B9		; code used at 8000
		INC		byte_BB		; code used at 8000
		INC		byte_BB		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1295B8:				; CODE XREF: sub_1294A8-p
					; sub_1294A8+19-p sub_1294D0+10-p
		JSR		sub_129404	; code used at 8000
		BCS		locret_1295CC	; code used at 8000
		LDA		byte_8B		; code used at 8000
		CMP		#$9F       ; code used at 8000
		BCS		locret_1295CC	; code used at 8000
		CMP		#$41       ; code used at 8000
		BCS		loc_1295CB	; code used at 8000
		CMP		#$2D       ; code used at 8000
		BCS		locret_1295CC	; code used at 8000
loc_1295CB:				; CODE XREF: sub_1295B8+D-j
		CLC				; code used at 8000
locret_1295CC:				; CODE XREF: sub_1295B8+3-j
					; sub_1295B8+9-j sub_1295B8+11-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s36:				; DATA XREF: BANKC:806C-o
		STA		_pak_data_ptr
		STA		byte_CE
		JMP		sub_129874

; =============== S U B	R O U T	I N E =======================================
_bC_s37:				; CODE XREF: sub_175467+36-P
					; DATA XREF: BANKC:806E-o
		LDX		#$C
		LDA.W		byte_8B
loc_1295D9:				; CODE XREF: _bC_s37+E-j
		CMP		byte_129B5D,X
		BEQ		loc_1295E5
		DEX
		DEX
		DEX
		DEX
		BPL		loc_1295D9
		RTS
loc_1295E5:				; CODE XREF: _bC_s37+8-j
		LDA		byte_129B5D+3,X
		AND		#$7F 
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1295EB:				; CODE XREF: _bC_s1D+52-p _bC_s1D+151-p
		PHA				; code used at 8000
		LDX		byte_30		; code used at 8000
		LDY		byte_31		; code used at 8000
		JSR		sub_177CC8	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#$E		; code used at 8000
		STA		word_4+1	; code used at 8000
		PLA				; code used at 8000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129600:				; CODE XREF: _bC_s1D:loc_12963D-p
					; _bC_s1D+137-p	_bC_s1E-p
		LDX		byte_30		; code used at 8000
		LDY		byte_31		; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$1F		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129610:				; CODE XREF: _bC_s1D+8-j
		BRK
		.BYTE $68, $77		; _msg_m00_arg1
		JMP		loc_129745	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129616:				; CODE XREF: _bC_s1D+18-j
		BRK
		.BYTE $1C, $77		; _msg_m00_arg1
		JMP		loc_129742

; =============== S U B	R O U T	I N E =======================================
_bC_s1D:				; CODE XREF: sub_15819F+2D-P
					; DATA XREF: BANKC:803A-o
		JSR		sub_174DF2	; code used at 8000
		LDA		byte_60B7	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		sub_129610	; code used at 8000
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2		; code used at 8000
		STA		byte_CE		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_B9		; code used at 8000
		LDA		byte_2C		; code used at 8000
		LSR		; code used at 8000
		BCS		sub_129616	; code used at 8000
		LDA		byte_9A		; code used at 8000
		BNE		loc_12963D	; code used at 8000
		JMP		loc_1297EA	; code used at 8000
loc_12963D:				; CODE XREF: _bC_s1D+1C-j
		JSR		sub_129600	; code used at 8000
		CMP		#3		; code used at 8000
		BEQ		loc_129647	; code used at 8000
		JMP		loc_12970F	; code used at 8000
loc_129647:				; CODE XREF: _bC_s1D+26-j
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
		JSR		sub_1299B6	; code used at 8000
		JSR		_bC_s1F		; code used at 8000
		PHP				; code used at 8000
		TXA				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ADC		word_4		; code used at 8000
		TAY				; code used at 8000
		LDA		#$B7       ; code used at 8000
		JSR		_get_syscall0_data_byte_Y ; code used at 8000
		STA		_pak_data_ptr	; code used at 8000
		LDY		word_4		; code used at 8000
		PLP				; code used at 8000
		BCS		loc_129688	; code used at 8000
		JSR		sub_129A38	; code used at 8000
		LDA		#$8F       ; code used at 8000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDA		#$1F		; code used at 8000
		JSR		sub_1295EB	; code used at 8000
		BRK
		.BYTE $64, $67		; _msg_m00_arg0
		LDA		byte_8B		; code used at 8000
		CMP		#$D3       ; code used at 8000
		BNE		loc_12967D	; code used at 8000
		JSR		loc_1296F5
loc_12967D:				; CODE XREF: _bC_s1D+5C-j
		LDA		_pak_data_ptr	; code used at 8000
		BMI		loc_12968B	; code used at 8000
		CMP		#$7F       ; code used at 8000
		BEQ		loc_129698	; code used at 8000
		JMP		loc_12986B	; code used at 8000
loc_129688:				; CODE XREF: _bC_s1D+46-j
		JMP		loc_129847
loc_12968B:				; CODE XREF: _bC_s1D+63-j
		TAY				; code used at 8000
		INY				; code used at 8000
		BEQ		loc_1296BD	; code used at 8000
		INY				; code used at 8000
		BEQ		loc_1296C3	; code used at 8000
		INY				; code used at 8000
		BEQ		loc_1296D2	; code used at 8000
		INY				; code used at 8000
		BEQ		loc_1296E8	; code used at 8000
loc_129698:				; CODE XREF: _bC_s1D+67-j
		LDX		#0		; code used at 8000
		STX		byte_641	; code used at 8000
		STX		byte_D0		; code used at 8000
		STX		byte_CF		; code used at 8000
		LDA		_pak_data_ptr	; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ROL		byte_CF		; code used at 8000
		ASL		; code used at 8000
		ROL		byte_CF		; code used at 8000
		STA		byte_63F	; code used at 8000
		STA		byte_CE		; code used at 8000
		LDA		byte_CF		; code used at 8000
		STA		byte_640	; code used at 8000
		JSR		_sram_bank0_sub1C ; code used at 8000
		BRK
		.BYTE $26, $67		; _msg_m00_arg0
		JMP		loc_129745	; code used at 8000
loc_1296BD:				; CODE XREF: _bC_s1D+71-j _bC_s1D+AA-j
					; _bC_s1D+B9-j
		BRK
		.BYTE $49, $77		; _msg_m00_arg1
		JMP		loc_129745	; code used at 8000
loc_1296C3:				; CODE XREF: _bC_s1D+74-j
		LDA		byte_60C5
		BMI		loc_1296BD
		BRK
		.BYTE $AC, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#$C
		BNE		loc_1296DF
loc_1296D2:				; CODE XREF: _bC_s1D+77-j
		LDA		byte_60C5	; code used at 8000
		BMI		loc_1296BD	; code used at 8000
		BRK
		.BYTE $AD, $77		; _msg_m00_arg1
		JSR		sub_176C3C	; code used at 8000
		LDA		#$12		; code used at 8000
loc_1296DF:				; CODE XREF: _bC_s1D+B4-j
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD	; code used at 8000
		JMP		loc_129745	; code used at 8000
loc_1296E8:				; CODE XREF: _bC_s1D+7A-j
		LDA		#$4B 
		STA		_pak_data_ptr
		JSR		loc_12986F
		BRK
		.BYTE $7F, $17		; ofs 0x00098030, -> dst _b6_s18
		JMP		loc_129745
loc_1296F5:				; CODE XREF: _bC_s1D+5E-p
		LDA		_pak_data_ptr
		PHA
		BRK
		.BYTE $3E, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#$B
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD
		JSR		sub_174CCF
		PLA
		STA		_pak_data_ptr
		STA		byte_CE
		RTS
loc_12970F:				; CODE XREF: _bC_s1D+28-j
		LDX		#0		; code used at 8000
loc_129711:				; CODE XREF: _bC_s1D+121-j
		LDA		byte_129B25,X	; code used at 8000
		INX				; code used at 8000
		CMP		byte_8B		; code used at 8000
		BNE		loc_129738	; code used at 8000
		LDA		byte_129B25,X	; code used at 8000
		INX				; code used at 8000
		CMP		byte_30		; code used at 8000
		BNE		loc_129739	; code used at 8000
		LDA		byte_129B25,X	; code used at 8000
		INX				; code used at 8000
		CMP		byte_31		; code used at 8000
		BEQ		loc_129777	; code used at 8000
		AND		#$7F       ; code used at 8000
		CMP		byte_31		; code used at 8000
		BEQ		loc_129749	; code used at 8000
		AND		#$3F 
		CMP		byte_31
		BNE		loc_12973A
		JMP		loc_129807
loc_129738:				; CODE XREF: _bC_s1D+FB-j
		INX				; code used at 8000
loc_129739:				; CODE XREF: _bC_s1D+103-j
		INX				; code used at 8000
loc_12973A:				; CODE XREF: _bC_s1D+117-j
		INX				; code used at 8000
		CPX		#$68       ; code used at 8000
		BNE		loc_129711	; code used at 8000
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
loc_129742:				; CODE XREF: sub_129616+3-j
					; _bC_s1D+13C-j	_bC_s1D+140-j
					; _bC_s1D+14B-j	_bC_s1D+16C-j
					; _bC_s1D:loc_129804-j
		BRK
		.BYTE $46, $77		; _msg_m00_arg1
loc_129745:				; CODE XREF: sub_129610+3-j _bC_s1D+9E-j
					; _bC_s1D+A4-j _bC_s1D+C9-j _bC_s1D+D6-j
					; _bC_s1D+198-j	_bC_s1D+1A8-j
					; sub_129874:loc_129950-j
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS				; code used at 8000
loc_129749:				; CODE XREF: _bC_s1D+111-j
		LDA		byte_129B25,X	; code used at 8000
		PHA				; code used at 8000
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
		PLA				; code used at 8000
		STA		word_6+1	; code used at 8000
		JSR		sub_129600	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_129742	; code used at 8000
		CMP		#$A		; code used at 8000
		BEQ		loc_129742	; code used at 8000
		LDA		word_6+1	; code used at 8000
		BPL		loc_12976B	; code used at 8000
		LDA		byte_60B7
		AND		#2
		BEQ		loc_129742
		LDA		word_6+1
loc_12976B:				; CODE XREF: _bC_s1D+144-j
		AND		#$7F       ; code used at 8000
		JSR		sub_1295EB	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		LDA		#$F		; code used at 8000
		BNE		loc_1297C1	; code used at 8000
loc_129777:				; CODE XREF: _bC_s1D+10B-j
		LDY		byte_129B25,X
		BEQ		loc_12978A
		DEY
		BEQ		loc_1297B7
		DEY
		BEQ		loc_1297C7
		DEY
		BEQ		loc_1297D2
		DEY
		BEQ		loc_1297D9
		BNE		loc_129742
loc_12978A:				; CODE XREF: _bC_s1D+15E-j
		LDA		byte_60B9
		BMI		loc_129801
		LDA		byte_110
		CMP		#5
		BEQ		loc_129801
		BRK
		.BYTE $B2, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#$92 
		STA		byte_113
		LDA		#5
		STA		byte_110
		LSR
		STA		byte_111
		LSR
		STA		word_6C+1
		LDA		#$10
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		JMP		loc_129745
loc_1297B7:				; CODE XREF: _bC_s1D+161-j
		LDA		byte_644
		BNE		loc_129801
		BRK
		.BYTE $3B, $77		; _msg_m00_arg1
		LDA		#$3D 
loc_1297C1:				; CODE XREF: _bC_s1D+159-j _bC_s1D+1B4-j
					; _bC_s1D+1BB-j
		JSR		sub_176C70	; code used at 8000
		JMP		loc_129745	; code used at 8000
loc_1297C7:				; CODE XREF: _bC_s1D+164-j
		LDA		byte_644
		CMP		#2
		BNE		loc_129801
		LDA		#$42 
		BNE		loc_1297C1
loc_1297D2:				; CODE XREF: _bC_s1D+167-j
		BRK
		.BYTE $44, $77		; _msg_m00_arg1
		LDA		#$A9 
		BNE		loc_1297C1
loc_1297D9:				; CODE XREF: _bC_s1D+16A-j
		LDA		byte_60CA
		AND		#2
		BNE		loc_129801
		BRK
		.BYTE $44, $77		; _msg_m00_arg1
		LDA		#$4A 
		STA		_pak_data_ptr
		JMP		loc_12986B
loc_1297EA:				; CODE XREF: _bC_s1D+1E-j
		LDX		#$68       ; code used at 8000
loc_1297EC:				; CODE XREF: _bC_s1D+1E3-j
		LDA		byte_129B25,X	; code used at 8000
		INX				; code used at 8000
		CMP		byte_2A		; code used at 8000
		BNE		loc_1297FB	; code used at 8000
		LDA		byte_129B25,X
		CMP		byte_2B
		BEQ		loc_12980E
loc_1297FB:				; CODE XREF: _bC_s1D+1D6-j
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$6B       ; code used at 8000
		BCC		loc_1297EC	; code used at 8000
loc_129801:				; CODE XREF: _bC_s1D+171-j _bC_s1D+178-j
					; _bC_s1D+19E-j	_bC_s1D+1B0-j
					; _bC_s1D+1C2-j
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
loc_129804:				; CODE XREF: _bC_s1D:loc_129856-j
					; _bC_s1D+243-j	_bC_s1D+251-j
		JMP		loc_129742	; code used at 8000
loc_129807:				; CODE XREF: _bC_s1D+119-j
		DEX
		LDA		byte_129B25,X
		ASL
		ROR		byte_B9
loc_12980E:				; CODE XREF: _bC_s1D+1DD-j
		INX
		LDA		byte_129B25,X
		PHA
		AND		#$7F 
		STA		_pak_data_ptr
		CMP		#$79 
		BNE		loc_12982B
		LDA		byte_60CD
		CMP		#$FF
		BNE		loc_129827
		LDA		byte_60B7
		BPL		loc_12982B
loc_129827:				; CODE XREF: _bC_s1D+204-j
		LDA		#$FF
		STA		_pak_data_ptr
loc_12982B:				; CODE XREF: _bC_s1D+1FD-j _bC_s1D+209-j
		TXA
		LSR
		LSR
		CLC
		ADC		#$B6 
		STA		byte_60A8
		PHA
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
		PLA
		STA		word_4
		PLA
		BMI		loc_12984F
		ASL		byte_B9
		BCS		loc_12985A
		JSR		loc_129A20
		BCC		loc_129868
loc_129847:				; CODE XREF: _bC_s1D:loc_129688-j
		LDA		_pak_data_ptr
		JSR		sub_129A62
		JMP		loc_129856
loc_12984F:				; CODE XREF: _bC_s1D+220-j
		LDX		#0
		LDA		_pak_data_ptr
		JSR		sub_129A69
loc_129856:				; CODE XREF: _bC_s1D+230-j
		BCS		loc_129804
		BCC		loc_12986B
loc_12985A:				; CODE XREF: _bC_s1D+224-j
		LDA		byte_6AE6
		AND		#1
		BNE		loc_129804
		ORA		#1
		STA		byte_6AE6
		BNE		loc_12986B
loc_129868:				; CODE XREF: _bC_s1D+229-j
		JSR		sub_129A38
loc_12986B:				; CODE XREF: _bC_s1D+69-j _bC_s1D+1CB-j
					; _bC_s1D+23C-j	_bC_s1D+24A-j
		LDA		_pak_data_ptr	; code used at 8000
		BMI		loc_129804	; code used at 8000
loc_12986F:				; CODE XREF: _bC_s1D+D0-p
		STA		byte_D3		; code used at 8000
		BRK
		.BYTE $65, $67		; _msg_m00_arg0

; =============== S U B	R O U T	I N E =======================================
sub_129874:				; CODE XREF: _bC_s36+4-j
		JSR		_sram_b0_s31	; code used at 8000
		LDY		word_4		; code used at 8000
		DEY				; code used at 8000
		STY		_pak_data_ptr+1	; code used at 8000
		BRK
		.BYTE $68, 7		; ofs 0x00008078, -> dst _b0_s3C
		BCC		loc_129888	; code used at 8000
		LDA		word_4		; code used at 8000
		STA		byte_CE		; code used at 8000
		JMP		loc_129939	; code used at 8000
loc_129888:				; CODE XREF: sub_129874+B-j
		LDY		#$67 
		LDA		_pak_data_ptr+1
		BNE		loc_12988F
		DEY
loc_12988F:				; CODE XREF: sub_129874+18-j
		TYA
		JSR		sub_176C6C
		BRK
		.BYTE $45, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1298D1
		LDA		_pak_data_ptr+1
		BEQ		loc_1298A9
loc_12989F:				; CODE XREF: sub_129874+5B-j
		BRK
		.BYTE $6A, $67		; _msg_m00_arg0
		BRK
		.BYTE $1C, $D7		; _syscall0D
		CMP		#$FF
		BEQ		loc_1298D1
loc_1298A9:				; CODE XREF: sub_129874+29-j
		STA		_tmp_pak_data_bank
		STA		byte_CE
		BRK
		.BYTE $68, $67		; _msg_m00_arg0
		BRK
		.BYTE $2D, $D7		; _syscall0D
		CMP		#$FF
		BEQ		loc_1298CD
		STA		byte_CF
		BRK
		.BYTE $49, 7		; ofs 0x00008050, -> dst _b0_s28
		LDA		word_4+1
		AND		#$7F 
		TAX
		LDA		#$90 
		JSR		_get_syscall0_data_byte_X
		AND		#$10
		BEQ		loc_1298E5
		BRK
		.BYTE $2A, $77		; _msg_m00_arg1
loc_1298CD:				; CODE XREF: sub_129874+41-j
		LDA		_pak_data_ptr+1
		BNE		loc_12989F
loc_1298D1:				; CODE XREF: sub_129874+25-j
					; sub_129874+33-j
		JSR		loc_129A20
		JSR		sub_129A46
		LDA		#0
		STA		byte_D2
		LDA		_pak_data_ptr
		STA		byte_D3
		BRK
		.BYTE $69, $67		; _msg_m00_arg0
		JMP		loc_129943
loc_1298E5:				; CODE XREF: sub_129874+54-j
		LDA		_tmp_pak_data_bank
		STA		byte_CE
		JSR		_sram_bank0_sub28
		LDA		word_4+1
		AND		#$7F 
		STA		byte_D3
		STA		byte_D4
		JSR		_sram_bank0_sub2A
		LDY		#$3F 
		LDA		_tmp_pak_data_bank
		ASL
		TAX
		LDA		byte_73D,X
		ASL
		BCC		loc_129914
		BMI		loc_129913
		TXA
		LSR
		STA		byte_D2
		LDA		_pak_data_ptr
		STA		byte_D4
		BRK
		.BYTE $4A, $77		; _msg_m00_arg1
		JMP		loc_129935
loc_129913:				; CODE XREF: sub_129874+8F-j
		INY
loc_129914:				; CODE XREF: sub_129874+8D-j
		TXA
		LSR
		STA		byte_D3
		LDA		_pak_data_ptr
		STA		byte_D5
		LDX		#0
loc_12991E:				; CODE XREF: sub_129874+B6-j
		LDA		byte_73D,X
		ASL
		BCC		loc_129926
		BPL		loc_12992D
loc_129926:				; CODE XREF: sub_129874+AE-j
		INX
		INX
		CPX		#8
		BNE		loc_12991E
		RTS
loc_12992D:				; CODE XREF: sub_129874+B0-j
		TXA
		LSR
		STA		byte_D2
		TYA
		JSR		sub_176C70
loc_129935:				; CODE XREF: sub_129874+9C-j
		LDA		_tmp_pak_data_bank
		STA		byte_CE
loc_129939:				; CODE XREF: sub_129874+11-j
		LDA		_pak_data_ptr	; code used at 8000
		STA		byte_CF		; code used at 8000
		JSR		_sram_bank0_sub29 ; code used at 8000
		JSR		loc_129953	; code used at 8000
loc_129943:				; CODE XREF: sub_129874+6E-j
		LDA		_pak_data_ptr	; code used at 8000
		CMP		#$5B       ; code used at 8000
		BNE		loc_129950	; code used at 8000
		LDA		_tmp_pak_data_bank ; code used at 8000
		STA		byte_D2		; code used at 8000
		BRK
		.BYTE $4B, $77		; _msg_m00_arg1
loc_129950:				; CODE XREF: sub_129874+D3-j
		JMP		loc_129745	; code used at 8000
loc_129953:				; CODE XREF: sub_129874+CC-p
		LDA		_pak_data_ptr	; code used at 8000
		CMP		#$7A       ; code used at 8000
		BNE		loc_129961	; code used at 8000
		LDA		byte_60CD
		ORA		#8
		STA		byte_60CD
loc_129961:				; CODE XREF: sub_129874+E3-j
		LDA		_pak_data_ptr	; code used at 8000
		AND		#$7F       ; code used at 8000
		CMP		#$77       ; code used at 8000
		BCC		loc_12997D	; code used at 8000
		SBC		#$76 
		TAX
		LDA		#0
		SEC
loc_12996F:				; CODE XREF: sub_129874+FD-j
		ROL
		DEX
		BNE		loc_12996F
		ORA		byte_60CE
		STA		byte_60CE
		JSR		_bC_s23
		RTS
loc_12997D:				; CODE XREF: sub_129874+F3-j
		CMP		#$4E       ; code used at 8000
		BNE		loc_12998F	; code used at 8000
		LDA		byte_8B
		CMP		#$57 
		BNE		loc_12998F
		LSR		byte_60CA
		SEC
		ROL		byte_60CA
		RTS
loc_12998F:				; CODE XREF: sub_129874+10B-j
					; sub_129874+111-j
		CMP		#$4A       ; code used at 8000
		BNE		locret_12999B	; code used at 8000
		LDA		byte_60CA
		ORA		#2
		STA		byte_60CA
locret_12999B:				; CODE XREF: sub_129874+11D-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s23:				; CODE XREF: sub_129874+105-p
					; _npc_hndl1E+19-P _npc_hndl25+1E-P
					; DATA XREF: BANKC:8046-o
		LDY		#6
		LDX		#0
		LDA		byte_60CE
loc_1299A3:				; CODE XREF: _bC_s23+C-j
		LSR
		BCC		loc_1299A7
		INX
loc_1299A7:				; CODE XREF: _bC_s23+8-j
		DEY
		BNE		loc_1299A3
		CPX		#3
		BCC		locret_1299B5
		ASL		byte_60CD
		SEC
		ROR		byte_60CD
locret_1299B5:				; CODE XREF: _bC_s23+10-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1299B6:				; CODE XREF: _bC_s1D+2E-p _bC_s1E+7-p
		LDA		#$74       ; code used at 8000
		STA		word_6C+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_6C		; code used at 8000
		STA		word_4		; code used at 8000
loc_1299C0:				; CODE XREF: sub_1299B6:loc_1299E3-j
		LDY		#0		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		AND		#$1F		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_6DE0,X	; code used as ind data	at 8000
		AND		#$F		; code used as ind data	at 8000
		CMP		#3		; code used as ind data	at 8000
		BNE		loc_1299DD	; code used as ind data	at 8000
		BRK
		.BYTE $AE, 7		; ofs 0x00158040, -> dst _bE_s20
		CPY		byte_31		; code used at 8000
		BNE		loc_1299DB	; code used at 8000
		CPX		byte_30		; code used at 8000
		BEQ		loc_1299E5	; code used at 8000
loc_1299DB:				; CODE XREF: sub_1299B6+1F-j
		INC		word_4		; code used at 8000
loc_1299DD:				; CODE XREF: sub_1299B6+18-j
		INC		word_6C		; code used as ind data	at 8000
		BNE		loc_1299E3	; code used as ind data	at 8000
		INC		word_6C+1	; code used at 8000
loc_1299E3:				; CODE XREF: sub_1299B6+29-j
		BNE		loc_1299C0	; code used as ind data	at 8000
loc_1299E5:				; CODE XREF: sub_1299B6+23-j
		LDA		word_4		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bC_s1F:				; CODE XREF: sub_12915C-p _bC_s1D+31-p
					; _bC_s1E+A-p _bE_s16+38-P
					; DATA XREF: BANKC:803E-o
		TAX				; code used at 8000
		LDA		byte_8B		; code used at 8000
		CMP		#$75       ; code used at 8000
		BNE		loc_1299FD	; code used at 8000
		LDA		byte_60CD
		CMP		#$FF
		BNE		loc_1299FD
		LDA		byte_60B7
		BMI		loc_1299FD
		INX
		INX
loc_1299FD:				; CODE XREF: _bC_s1F+5-j _bC_s1F+C-j
					; _bC_s1F+11-j
		TXA				; code used at 8000
		STA		word_4		; code used at 8000
		LDX		#0		; code used at 8000
loc_129A02:				; CODE XREF: _bC_s1F+31-j
		LDA		#$B6       ; code used as ind data at 8000
		JSR		_get_syscall0_data_byte_X ; code used as ind data at 8000
		INX				; code used as ind data	at 8000
		CMP		byte_8B		; code used as ind data	at 8000
		BEQ		loc_129A1B	; code used as ind data	at 8000
		LDA		#$B6       ; code used as ind data at 8000
		JSR		_get_syscall0_data_byte_X ; code used as ind data at 8000
		INX				; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		word_4		; code used as ind data	at 8000
		STA		word_4		; code used as ind data	at 8000
		CPX		#$80       ; code used as ind data at 8000
		BCC		loc_129A02	; code used as ind data	at 8000
loc_129A1B:				; CODE XREF: _bC_s1F+22-j
		LDA		word_4		; code used at 8000
		STA		byte_60A8	; code used at 8000
loc_129A20:				; CODE XREF: _bC_s1D+226-p
					; sub_129874:loc_1298D1-p
		LDA		byte_60A8	; code used at 8000
		PHA				; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		AND		#7		; code used as ind data	at 8000
		TAY				; code used at 8000
		STA		word_4		; code used at 8000
		LDA		byte_608E,X	; code used at 8000
loc_129A31:				; CODE XREF: _bC_s1F+4B-j
		ASL		; code used at 8000
		DEY				; code used at 8000
		BPL		loc_129A31	; code used at 8000
		LDY		word_4		; code used as ind data	at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129A38:				; CODE XREF: sub_12915C+3-j _bC_s1D+48-p
					; _bC_s1D:loc_129868-p
		SEC				; code used at 8000
		LDA		#0		; code used at 8000
loc_129A3B:				; CODE XREF: sub_129A38+5-j
		ROR		; code used at 8000
		DEY				; code used at 8000
		BPL		loc_129A3B	; code used at 8000
		ORA		byte_608E,X	; code used at 8000
		STA		byte_608E,X	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129A46:				; CODE XREF: sub_129874+60-p
		CLC
		LDA		#$FF
loc_129A49:				; CODE XREF: sub_129A46+5-j
		ROR
		DEY
		BPL		loc_129A49
		AND		byte_608E,X
		STA		byte_608E,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A54:				; CODE XREF: sub_129A54+8-j
					; sub_129A62+2-p
		CMP		byte_129B93-3,X
		BEQ		loc_129A60
		DEX
		DEX
		DEX
		BPL		sub_129A54
		CLC
		RTS
loc_129A60:				; CODE XREF: sub_129A54+3-j
					; sub_129A62+5-j sub_129A69+F-j
					; sub_129A69+14-j sub_129A82+5-j
					; sub_129ABA+5-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A62:				; CODE XREF: _bC_s1D+22D-p
					; sub_129A97+2-j sub_129AA0+2-j
					; sub_129AA4+2-j sub_129AA8+2-j
					; sub_129ABA+9-j sub_129AD2+2-j
		LDX		#$51 
		JSR		sub_129A54
		BCC		loc_129A60

; =============== S U B	R O U T	I N E =======================================
sub_129A69:				; CODE XREF: _bC_s1D+237-p
		STA		byte_CE
		LDY		off_129B91,X
		STY		word_B7
		LDY		off_129B91+1,X
		STY		word_B7+1
		BRK
		.BYTE $28, $17		; ofs 0x0014002e, -> dst _bD_s17
		BCC		loc_129A60
		BRK
		.BYTE $2C, $17		; ofs 0x0000809a, -> dst _b0_s4D
		BCS		loc_129A60
		JMP		(word_B7)

; =============== S U B	R O U T	I N E =======================================
sub_129A82:				; DATA XREF: BANKC:9B97-o
		LDA		byte_60B6
		AND		#8
		BNE		loc_129A60

; =============== S U B	R O U T	I N E =======================================
sub_129A89:				; DATA XREF: BANKC:off_129B91-o
					; BANKC:9BA3-o BANKC:9BB2-o BANKC:9BC4-o
					; BANKC:9BCA-o
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A8B:				; DATA XREF: BANKC:9B9D-o
		LDA		byte_60B8
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A90:				; DATA XREF: BANKC:9BA0-o
		LDA		byte_60CD
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A97:				; DATA XREF: BANKC:9BA6-o
		LDA		#$6E 
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129A9B:				; DATA XREF: BANKC:9BA9-o
		LDA		byte_60B6
		LSR
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129AA0:				; DATA XREF: BANKC:9BAF-o
		LDA		#$5A 
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AA4:				; DATA XREF: BANKC:9BAC-o
		LDA		#$59 
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AA8:				; DATA XREF: BANKC:9BB5-o
		LDA		#$5C 
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AAC:				; DATA XREF: BANKC:9BB8-o
		LDA		byte_60B7
		LSR
		LSR
		LSR
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129AB3:				; DATA XREF: BANKC:9BBB-o
		LDA		byte_60B6
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129ABA:				; DATA XREF: BANKC:9BBE-o
		LDA		byte_60B9
		AND		#$20 
		BNE		loc_129A60
		LDA		#$1C
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AC5:				; DATA XREF: BANKC:9BC1-o
		LDA		byte_60B6
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129ACB:				; DATA XREF: BANKC:9BC7-o
		LDA		byte_60BA
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129AD2:				; DATA XREF: BANKC:9B94-o BANKC:9B9A-o
					; BANKC:9BCD-o
		LDA		#$76 
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AD6:				; DATA XREF: BANKC:9BD0-o
		LDA		byte_60B6
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129ADB:				; DATA XREF: BANKC:9BD3-o BANKC:9BD6-o
					; BANKC:9BD9-o BANKC:9BDC-o BANKC:9BDF-o
					; BANKC:9BE2-o
		LDA		_pak_data_ptr
		AND		#$7F 
		SEC
		SBC		#$76 
		TAY
		LDA		byte_60CF
loc_129AE6:				; CODE XREF: sub_129ADB+D-j
		LSR
		DEY
		BNE		loc_129AE6
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s1E:				; CODE XREF: sub_A0E8-P
					; DATA XREF: BANKC:803C-o
		JSR		sub_129600
		CMP		#3
		BNE		loc_129B23
		JSR		sub_1299B6
		JSR		_bC_s1F
		LDY		#$3A 
		BCC		loc_129AFE
		BNE		loc_129B1D
loc_129AFE:				; CODE XREF: _bC_s1E+F-j
		TXA
		ASL
		ASL
		ASL
		ADC		word_4
		TAX
		LDA		#$B7 
		JSR		_get_syscall0_data_byte_X
		TAX
		LDA		byte_8B
		CMP		#$D3 
		BEQ		loc_129B1B
		INX
		BEQ		loc_129B1D
		INX
		BEQ		loc_129B1A
		INX
		BNE		loc_129B1C
loc_129B1A:				; CODE XREF: _bC_s1E+2A-j
		DEY
loc_129B1B:				; CODE XREF: _bC_s1E+24-j
		DEY
loc_129B1C:				; CODE XREF: _bC_s1E+2D-j
		DEY
loc_129B1D:				; CODE XREF: _bC_s1E+11-j _bC_s1E+27-j
		TYA
		JSR		sub_176C70
		SEC
		RTS
loc_129B23:				; CODE XREF: _bC_s1E+5-j
		CLC
		RTS
byte_129B25:
		.BYTE $8A,  5,	3,  0,$3B,$16, $C,  1,$3B,$17, $C,  1,$D3, $B,	5,  2
					; DATA XREF: _bC_s1D:loc_129711-r
					; _bC_s1D+FD-r _bC_s1D+105-r
					; _bC_s1D:loc_129749-r
					; _bC_s1D:loc_129777-r
					; _bC_s1D:loc_1297EC-r _bC_s1D+1D8-r
					; _bC_s1D+1EC-r	_bC_s1D+1F3-r
		.BYTE $D3, $C,	5,  2,$D3,  6,	9,  3,$D3,  5, $C,  3,$D3,  5, $F,  3 ;	data used at 8000
		.BYTE $D3,  6,$12,  3,$D3,$11,	9,  3,$D3,$12, $C,  3,$D3,$12, $F,  3
		.BYTE $D3,$11,$12,  3,$CF,$16, $C,  4
byte_129B5D:
		.BYTE	6,$1C,$86,$89	; DATA XREF: _bC_s37:loc_1295D9-r
					; _bC_s37:loc_1295E5-r
		.BYTE	8,$19,$85, $E	; data used at 8000
		.BYTE $D0,$10,$9B, $E
		.BYTE $18,$1A,$8B,  9
		.BYTE $75,  4,$42,$79
		.BYTE $1D, $E,$50,$11
		.BYTE $1A, $B,$4C,$70
		.BYTE $19, $F,$50,$1B
		.BYTE $12,$17,$63,$5E
		.BYTE $85,  4,$45,$64
		.BYTE $13,$12,$4D,$63
		.BYTE $57,  6,$45,$4E
		.BYTE $7B,$4C,$E9,$1C
off_129B91:
		.WORD sub_129A89	; DATA XREF: sub_129A69+2-r
					; sub_129A69+7-r
byte_129B93:
		.BYTE $10
		.WORD sub_129AD2
		.BYTE $11
		.WORD sub_129A82
		.BYTE $47
		.WORD sub_129AD2
		.BYTE $4F
		.WORD sub_129A8B
		.BYTE $51
		.WORD sub_129A90
		.BYTE $52
		.WORD sub_129A89
		.BYTE $54
		.WORD sub_129A97
		.BYTE $57
		.WORD sub_129A9B
		.BYTE $58
		.WORD sub_129AA4
		.BYTE $59
		.WORD sub_129AA0
		.BYTE $5A
		.WORD sub_129A89
		.BYTE $5B
		.WORD sub_129AA8
		.BYTE $5C
		.WORD sub_129AAC
		.BYTE $5D
		.WORD sub_129AB3
		.BYTE $5E
		.WORD sub_129ABA
		.BYTE $6B
		.WORD sub_129AC5
		.BYTE $6E
		.WORD sub_129A89
		.BYTE $70
		.WORD sub_129ACB
		.BYTE $72
		.WORD sub_129A89
		.BYTE $75
		.WORD sub_129AD2
		.BYTE $76
		.WORD sub_129AD6
		.BYTE $77
		.WORD sub_129ADB
		.BYTE $78
		.WORD sub_129ADB
		.BYTE $79
		.WORD sub_129ADB
		.BYTE $7A
		.WORD sub_129ADB
		.BYTE $7B
		.WORD sub_129ADB
		.BYTE $7C
		.WORD sub_129ADB

; =============== S U B	R O U T	I N E =======================================
_bC_s22:				; CODE XREF: sub_AEB5-P
					; DATA XREF: BANKC:8044-o
		LDA		byte_2C
		EOR		#1
		CLC
		ADC		#$5D 
		JSR		sub_176C70
		LDA		byte_2F
		LSR
		BCS		loc_129C0E
		LDA		byte_2A
		CMP		#$A1 
		BCC		loc_129C0E
		CMP		#$A4 
		BCS		loc_129C0E
		LDA		byte_2B
		CMP		#$38 
		BCC		loc_129C0E
		CMP		#$3D 
		BCS		loc_129C0E
		LDA		byte_60B6
		AND		#4
		BEQ		loc_129C16
loc_129C0E:				; CODE XREF: _bC_s22+D-j _bC_s22+13-j
					; _bC_s22+17-j _bC_s22+1D-j _bC_s22+21-j
		JSR		sub_176C3C
		BRK
		.BYTE 1, $77		; _msg_m00_arg1
		CLC
		RTS
loc_129C16:				; CODE XREF: _bC_s22+28-j
		JSR		sub_176C3C
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		LDA		_ram_pal_buf+$D
		PHA
		LDA		_ram_pal_buf+$E
		PHA
		LDA		_ram_pal_buf+$F
		PHA
		LDA		byte_60B6
		ORA		#4
		STA		byte_60B6
		JSR		sub_129E5D
		BRK
		.BYTE $24, $2F		; _syscall12
		JSR		sub_129C94
		JSR		sub_129F07
		LDY		#$10
		JSR		sub_129EA1
		JSR		sub_129CAD
		LDX		#$20 
		JSR		sub_12A1F1
		JSR		sub_129D3A
		LDX		#$20 
		JSR		sub_12A1F1
		JSR		sub_129CA1
		LDX		#$20 
		JSR		sub_12A1F1
		LDX		#0
		JSR		sub_129E07
		LDX		#$20 
		JSR		sub_12A1F1
		JSR		sub_129D1B
		BRK
		.BYTE $25, $2F		; _syscall12
		JSR		sub_129EBC
		JSR		sub_129EEB
loc_129C72:				; CODE XREF: _bC_s25+3C-j
		JSR		sub_129E9B
		JSR		sub_129F24
		LDY		#0
		JSR		sub_129EA1
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		PLA
		STA		_ram_pal_buf+$F
		PLA
		STA		_ram_pal_buf+$E
		PLA
		STA		_ram_pal_buf+$D
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
loc_129C8F:				; CODE XREF: sub_129C94+B-j
		JSR		sub_17435B
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129C94:				; CODE XREF: _bC_s22+55-p _bC_s25+1D-p
		LDX		#3
loc_129C96:				; CODE XREF: sub_129C94+9-j
		LDA		_ram_pal_buf,X
		STA		_ram_pal_buf+$C,X
		DEX
		BNE		loc_129C96
		BEQ		loc_129C8F

; =============== S U B	R O U T	I N E =======================================
sub_129CA1:				; CODE XREF: _bC_s22+70-p _bC_s25+2E-p
		LDA		#$2C 
		STA		byte_A
		STA		byte_B
		JSR		sub_129D73
loc_129CAA:				; CODE XREF: sub_129CAD+48-j
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_129CAD:				; CODE XREF: _bC_s22+60-p _bC_s25+28-p
		JSR		sub_129D63
		LDX		#0
loc_129CB2:				; CODE XREF: sub_129CAD+46-j
		STX		byte_D
		JSR		sub_129D90
		LDA		#$2C 
		STA		word_4
		LDA		byte_129CF7,X
		PHA
		CLC
		ADC		word_6+1
		STA		word_6+1
		PLA
		AND		#8
		BEQ		loc_129CCB
		INC		word_4
loc_129CCB:				; CODE XREF: sub_129CAD+1A-j
		LDA		byte_129CF7+1,X
		PHA
		CLC
		ADC		byte_8
		STA		byte_8
		PLA
		AND		#8
		BEQ		loc_129CDD
		INC		word_4
		INC		word_4
loc_129CDD:				; CODE XREF: sub_129CAD+2A-j
		LDX		#0
		JSR		sub_129DF0
		LDA		byte_D
		LSR
		ADC		#$2E 
		TAY
		LDX		#$3C 
		JSR		sub_174204
		LDX		byte_D
		INX
		INX
		CPX		#$24 
		BNE		loc_129CB2
		BEQ		loc_129CAA
byte_129CF7:
		.BYTE	0,$F8,	8,$F8,$F8,  0,$10,  0,$F0,  8,$F8,  8,$10,  8,$18,  8
					; DATA XREF: sub_129CAD+E-r
					; sub_129CAD:loc_129CCB-r
		.BYTE $E8,$10,$20,$10,$E8,$18,$20,$18,$F0,$20,$F8,$20,	0,$20,	8,$20
		.BYTE $10,$20,$18,$20

; =============== S U B	R O U T	I N E =======================================
sub_129D1B:				; CODE XREF: _bC_s22+82-p
		LDX		#0
loc_129D1D:				; CODE XREF: sub_129D1B+1C-j
		LDA		byte_129D57,X
		STA		byte_A
		INX
		LDA		byte_129D57,X
		STA		byte_B
		INX
		TXA
		PHA
		JSR		sub_129D73
		LDX		#0
		JSR		sub_12A1E9
		PLA
		TAX
		CPX		#$C
		BNE		loc_129D1D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129D3A:				; CODE XREF: _bC_s22+68-p _bC_s25+2B-p
		LDX		#$C
loc_129D3C:				; CODE XREF: sub_129D3A+1A-j
		LDA		byte_129D57-1,X
		STA		byte_B
		DEX
		LDA		byte_129D57-1,X
		STA		byte_A
		DEX
		TXA
		PHA
		JSR		sub_129D73
		LDX		#0
		JSR		sub_12A1E9
		PLA
		TAX
		BNE		loc_129D3C
		RTS
byte_129D57:
		.BYTE $30,$34,$38,$3C,$40,$44,$48,$4C,$50,$54,$58,$5C
					; DATA XREF: sub_129D1B:loc_129D1D-r
					; sub_129D1B+8-r sub_129D3A:loc_129D3C-r
					; sub_129D3A+8-r

; =============== S U B	R O U T	I N E =======================================
sub_129D63:				; CODE XREF: sub_129CAD-p sub_129D73-p
		LDA		#$AA 
		SEC
		SBC		byte_2A
		STA		word_4+1
		LDA		#$40 
		SEC
		SBC		byte_2B
		ASL
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129D73:				; CODE XREF: sub_129CA1+6-p
					; sub_129D1B+10-p sub_129D3A+10-p
		JSR		sub_129D63
		LDA		#$1E
		STA		byte_9
		JSR		sub_129DA2
		DEC		word_4+1
		INC		word_6
		INC		word_6
		JSR		sub_129DA2
		INC		word_4+1
		JSR		sub_129DA6
		INC		word_4+1
		JMP		sub_129DA2

; =============== S U B	R O U T	I N E =======================================
sub_129D90:				; CODE XREF: sub_129CAD+7-p
					; sub_129DA8+2-p
		LDA		word_4+1	; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		STA		word_6+1	; code used at 8000
		LDA		word_6		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		STA		byte_8		; code used at 8000
		DEC		byte_8		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129DA2:				; CODE XREF: sub_129D73+7-p
					; sub_129D73+10-p sub_129D73+1A-j
					; sub_12A0ED+11-p
		LDA		byte_A		; code used at 8000
		BNE		sub_129DA8	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129DA6:				; CODE XREF: sub_129D73+15-p
					; sub_12A0ED+16-p
		LDA		byte_B		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129DA8:				; CODE XREF: sub_129DA2+2-j
					; sub_129FE2+18-p sub_129FE2+26-p
					; sub_129FE2+38-p
		STA		word_4		; code used at 8000
		JSR		sub_129D90	; code used at 8000
		LDX		#0		; code used at 8000
		JSR		sub_129DF0	; code used at 8000
		LDA		word_6+1	; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		word_6+1	; code used at 8000
		PHA				; code used at 8000
		JSR		sub_129DF0	; code used at 8000
		LDA		word_4+1	; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		STA		word_6+1	; code used at 8000
		LDA		byte_8		; code used at 8000
		CLC				; code used at 8000
		ADC		#8		; code used at 8000
		STA		byte_8		; code used at 8000
		JSR		sub_129DF0	; code used at 8000
		PLA				; code used at 8000
		STA		word_6+1	; code used at 8000
		JSR		sub_129DF0	; code used at 8000
		LDX		#$3C       ; code used at 8000
		LDY		byte_9		; code used at 8000
		JSR		sub_129DDF	; code used at 8000
		STY		byte_9		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129DDF:				; CODE XREF: sub_129DA8+31-p
					; sub_12A117+12-p sub_12A117+17-p
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129DF0:				; CODE XREF: sub_129CAD+32-p
					; sub_129DA8+7-p sub_129DA8+12-p
					; sub_129DA8+24-p sub_129DA8+2A-p
		LDA		byte_8		; code used at 8000
		STA		word_3C,X	; code used at 8000
		INX				; code used at 8000
		LDA		word_4		; code used at 8000
		STA		word_3C,X	; code used at 8000
		INX				; code used at 8000
		LDA		byte_E		; code used at 8000
		STA		word_3C,X	; code used at 8000
		INX				; code used at 8000
		LDA		word_6+1	; code used at 8000
		STA		word_3C,X	; code used at 8000
		INX				; code used at 8000
		INC		word_4		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129E07:				; CODE XREF: _bC_s22+7A-p _bC_s25+33-p
		LDY		#0
loc_129E09:				; CODE XREF: sub_129E07+C-j
		LDA		byte_129E55,X
		STA		word_3C,Y
		INX
		INY
		CPY		#4
		BNE		loc_129E09
		LDA		#$A9 
		SEC
		SBC		byte_2A
		ASL
		STA		word_4
		LDA		#$40 
		SEC
		SBC		byte_2B
		ASL
		STA		word_4+1
		INC		word_4
		INC		word_4
		LDA		word_3C
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4
		DEC		word_4
		INC		word_4+1
		INC		word_4+1
		LDA		word_3C+1
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		LDA		word_3E
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		LDA		word_3E+1
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		JSR		sub_1742BA
		LDX		#$20 
		JMP		sub_12A1F1
byte_129E55:
		.BYTE	6,  6,$15,  6,$17,$17,$17,$17 ;	DATA XREF: sub_129E07:loc_129E09-r

; =============== S U B	R O U T	I N E =======================================
sub_129E5D:				; CODE XREF: _bC_s22+4F-p _bC_s25+17-p
		LDA		#0
		STA		byte_E
		LDA		#2
		STA		_tmp21+2
		LDA		#$C0 
		STA		byte_24
		LDA		#0
		STA		byte_25
		LDA		#1
		JSR		sub_17415B
		INC		_tmp21+2
		LDX		#$28 
		JSR		sub_12A1ED
		LDA		#2
		JSR		sub_17415B
		INC		_tmp21+2
		LDX		#$28 
		JSR		sub_12A1ED
		LDA		#3
		JSR		sub_17415B
		INC		_tmp21+2
		LDX		#$20 
		JSR		sub_12A1ED
		LDA		#4
		JSR		sub_17415B
		LDX		#$20 
		JMP		sub_12A1ED

; =============== S U B	R O U T	I N E =======================================
sub_129E9B:				; CODE XREF: _bC_s22:loc_129C72-p
		LDY		#$1E
		LDA		#$22 
		BNE		loc_129EA3

; =============== S U B	R O U T	I N E =======================================
sub_129EA1:				; CODE XREF: _bC_s22+5D-p _bC_s22+96-p
					; _bC_s25+25-p
		LDA		#4
loc_129EA3:				; CODE XREF: sub_129E9B+4-j
		STA		byte_8
		LDA		#$F8 
		STA		word_4
		STA		word_4+1
		STA		word_6
		STA		word_6+1
loc_129EAF:				; CODE XREF: sub_129EA1+16-j
		LDX		#4
		JSR		sub_174204
		INY
		DEC		byte_8
		BNE		loc_129EAF
		JMP		sub_1742BA

; =============== S U B	R O U T	I N E =======================================
sub_129EBC:				; CODE XREF: _bC_s22+88-p _bC_s25+39-p
		LDX		#8
		JSR		sub_12A1ED
		LDX		#$10
		JSR		sub_12A1ED
		LDX		#$20 
		JSR		sub_12A1ED
		LDX		#$28 
		JSR		sub_12A1ED
		LDA		#0
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		LDA		#1
		STA		word_40+1
		LDA		#$40 
		STA		word_40
		JSR		sub_176C76
		LDA		#$C0 
		STA		word_3E
		LDA		#2
		STA		word_3E+1
		JMP		sub_12AE93

; =============== S U B	R O U T	I N E =======================================
sub_129EEB:				; CODE XREF: _bC_s22+8B-p
		JSR		sub_176C7A
		LDA		#$80 
		STA		word_3E
		LDA		#5
		STA		word_3E+1
		JSR		sub_12AE93
		JSR		sub_176C7E
		LDA		#$C0 
		STA		word_3E
		LDA		#5
		STA		word_3E+1
		JMP		sub_12AE93

; =============== S U B	R O U T	I N E =======================================
sub_129F07:				; CODE XREF: _bC_s22+58-p _bC_s25+20-p
		LDA		#0
		STA		word_4
loc_129F0B:				; CODE XREF: sub_129F07+1A-j
		CLC
		ADC		#$10
		TAY
		LDX		#$3C 
		JSR		sub_1741FD
		LDY		word_4
		LDX		#$3C 
		JSR		sub_174204
		INC		word_4
		LDA		word_4
		CMP		#4
		BNE		loc_129F0B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129F24:				; CODE XREF: _bC_s22+91-p
		LDA		#0
		STA		word_4
loc_129F28:				; CODE XREF: sub_129F24+1C-j
		LDY		word_4
		LDX		#$3C 
		JSR		sub_1741FD
		LDA		word_4
		CLC
		ADC		#$10
		TAY
		LDX		#$3C 
		JSR		sub_174204
		INC		word_4
		LDA		word_4
		CMP		#4
		BNE		loc_129F28
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s25:				; CODE XREF: sub_15B08E+43-P
					; DATA XREF: BANKC:804A-o
		LDA		byte_60B6
		AND		#$FB 
		STA		byte_60B6
		LDA		_ram_pal_buf+$D
		PHA
		LDA		_ram_pal_buf+$E
		PHA
		LDA		_ram_pal_buf+$F
		PHA
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_129E5D
		BRK
		.BYTE $24, $2F		; _syscall12
		JSR		sub_129C94
		JSR		sub_129F07
		LDY		#$10
		JSR		sub_129EA1
		JSR		sub_129CAD
		JSR		sub_129D3A
		JSR		sub_129CA1
		LDX		#4
		JSR		sub_129E07
		BRK
		.BYTE $25, $2F		; _syscall12
		JSR		sub_129EBC
		JMP		loc_129C72

; =============== S U B	R O U T	I N E =======================================
_bC_s13:				; CODE XREF: sub_AED4-P
					; DATA XREF: BANKC:8026-o
		LDA		byte_2F		; code used at 8000
		LSR		; code used at 8000
		BCC		loc_129F9D	; code used at 8000
		LDA		byte_8B		; code used at 8000
		CMP		#$A0       ; code used at 8000
		BNE		loc_129F9D	; code used at 8000
		LDA		byte_31		; code used at 8000
		CMP		#$D		; code used at 8000
		BNE		loc_129F9D	; code used at 8000
		LDA		byte_30		; code used at 8000
		CMP		#8		; code used at 8000
		BEQ		loc_129FA2	; code used at 8000
		CMP		#9		; code used at 8000
		BEQ		loc_129FA2	; code used at 8000
loc_129F9D:				; CODE XREF: _bC_s13+3-j _bC_s13+9-j
					; _bC_s13+F-j
		BRK
		.BYTE $18, $77		; _msg_m00_arg1
		CLC
		RTS
loc_129FA2:				; CODE XREF: _bC_s13+15-j _bC_s13+19-j
		BRK
		.BYTE $17, $77		; _msg_m00_arg1
		JSR		sub_176C3C	; code used at 8000
		LDA		#0		; code used at 8000
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		JSR		sub_129FC3	; code used at 8000
		BRK
		.BYTE $97, $2F		; _syscall12
		BRK
		.BYTE $EA, 7		; ofs 0x00038010, -> dst _b2_s8_screen_hit_blink
		JSR		sub_129FE2	; code used at 8000
		LDA		byte_60B6	; code used at 8000
		ORA		#2		; code used at 8000
		STA		byte_60B6	; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129FC3:				; CODE XREF: _bC_s13+2B-p
		LDA		#$C		; code used at 8000
		STA		_tmp21+2	; code used at 8000
		LDA		#$C0       ; code used at 8000
		STA		byte_24		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_25		; code used at 8000
		LDA		#5		; code used at 8000
		JSR		sub_17415B	; code used at 8000
		INC		_tmp21+2	; code used at 8000
		LDA		#6		; code used at 8000
		JSR		sub_17415B	; code used at 8000
		INC		_tmp21+2	; code used at 8000
		LDA		#7		; code used at 8000
		JMP		sub_17415B	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_129FE2:				; CODE XREF: _bC_s13+34-p
		LDA		#$20       ; code used at 8000
		PHA				; code used at 8000
		PHA				; code used at 8000
		PHA				; code used at 8000
		PHA				; code used at 8000
		PHA				; code used at 8000
		PHA				; code used at 8000
		STA		byte_9		; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_E		; code used at 8000
		LDA		#8		; code used at 8000
		STA		word_4+1	; code used at 8000
		ASL		; code used at 8000
		STA		word_6		; code used at 8000
		LDA		byte_12A1DA	; code used at 8000
		JSR		sub_129DA8	; code used at 8000
		LDX		#$30       ; code used at 8000
		JSR		sub_12A1F1	; code used as data at 8000
		PLA				; code used at a000
		STA		byte_9		; code used at a000
		LDA		byte_12A1DB	; code used at a000
		JSR		sub_129DA8	; code used at a000
		LDX		#$30       ; code used at a000
		JSR		sub_12A1F1	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_E		; code used at a000
		PLA				; code used at a000
		STA		byte_9		; code used at a000
		LDA		byte_12A1DC	; code used at a000
		JSR		sub_129DA8	; code used at a000
		LDX		#$30       ; code used at a000
		JSR		sub_12A1F1	; code used at a000
		DEC		word_4+1	; code used at a000
		LDA		byte_12A1DD	; code used at a000
		STA		byte_A		; code used at a000
		LDA		byte_12A1DE	; code used at a000
		STA		byte_B		; code used at a000
		LDA		#9		; code used at a000
		SEC				; code used at a000
		SBC		byte_30		; code used at a000
		STA		byte_C		; code used at a000
		PLA				; code used at a000
		STA		byte_9		; code used at a000
		LDX		#0		; code used at a000
		JSR		sub_12A0ED	; code used at a000
		LDX		#$30       ; code used at a000
		JSR		sub_12A1F1	; code used at a000
		JSR		sub_12A108	; code used at a000
		PLA				; code used at a000
		STA		byte_9		; code used at a000
		LDX		#2		; code used at a000
loc_12A04A:				; CODE XREF: sub_129FE2+75-j
		JSR		sub_12A0ED	; code used at a000
		PHA				; code used at a000
		LDX		#$30       ; code used at a000
		JSR		sub_12A1F1	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		CPX		#$A		; code used at a000
		BCC		loc_12A04A	; code used at a000
		LDA		byte_C		; code used at a000
		PHA				; code used at a000
		JSR		sub_12A133	; code used at a000
		PLA				; code used at a000
		STA		byte_C		; code used at a000
		LDA		byte_12A1DD	; code used at a000
		STA		byte_A		; code used at a000
		LDA		byte_12A1DE	; code used at a000
		STA		byte_B		; code used at a000
		JSR		sub_12A108	; code used at a000
		JSR		sub_12A108	; code used at a000
		PLA				; code used at a000
		STA		byte_D		; code used at a000
		LDX		#5		; code used at a000
loc_12A077:				; CODE XREF: sub_129FE2+B2-j
		TXA				; code used at a000
		PHA				; code used at a000
		LDA		byte_D		; code used at a000
		STA		byte_9		; code used at a000
		LDX		#2		; code used at a000
loc_12A07F:				; CODE XREF: sub_129FE2+AD-j
		JSR		sub_12A0ED	; code used at a000
		PHA				; code used at a000
		LDX		#$30       ; code used at a000
		JSR		sub_12A1F1	; code used at a000
		PLA				; code used at a000
		JSR		sub_12A0B7	; code used at a000
		TAX				; code used at a000
		CPX		#$A		; code used at a000
		BCC		loc_12A07F	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		DEX				; code used at a000
		BNE		loc_12A077	; code used at a000
		PLA				; code used at a000
		STA		byte_9		; code used at a000
		LDX		#2		; code used at a000
loc_12A09B:				; CODE XREF: sub_129FE2+C9-j
		JSR		sub_12A0ED	; code used at a000
		JSR		sub_12A117	; code used at a000
		PHA				; code used at a000
		LDX		#0		; code used at a000
		JSR		sub_12A1ED	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		CPX		#$A		; code used at a000
		BCC		loc_12A09B	; code used at a000
		LDX		#8		; code used at a000
		JSR		sub_12A1ED	; code used at a000
		LDX		#$20       ; code used at a000
		JMP		sub_12A1E9	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A0B7:				; CODE XREF: sub_129FE2+A7-p
		PHA				; code used at a000
		TAX				; code used at a000
		LDA		byte_9		; code used at a000
		PHA				; code used at a000
		LDA		byte_A		; code used at a000
		PHA				; code used at a000
		LDA		byte_B		; code used at a000
		PHA				; code used at a000
		DEX				; code used at a000
		DEX				; code used at a000
		DEX				; code used at a000
		DEX				; code used at a000
		BNE		loc_12A0CA	; code used at a000
		LDX		#8		; code used at a000
loc_12A0CA:				; CODE XREF: sub_12A0B7+F-j
		TXA				; code used at a000
		CLC				; code used at a000
		ADC		#6		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		STA		byte_9		; code used at a000
		LDA		#$E0       ; code used at a000
		STA		byte_A		; code used at a000
		LDA		#$E4       ; code used at a000
		STA		byte_B		; code used at a000
		JSR		sub_12A0ED	; code used at a000
		LDX		#$30       ; code used at a000
		JSR		sub_12A1F1	; code used at a000
		PLA				; code used at a000
		STA		byte_B		; code used at a000
		PLA				; code used at a000
		STA		byte_A		; code used at a000
		PLA				; code used at a000
		STA		byte_9		; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A0ED:				; CODE XREF: sub_129FE2+58-p
					; sub_129FE2:loc_12A04A-p
					; sub_129FE2:loc_12A07F-p
					; sub_129FE2:loc_12A09B-p
					; sub_12A0B7+23-p
		LDA		byte_12A1DF,X	; code used at a000
		CLC				; code used at a000
		ADC		byte_C		; code used at a000
		STA		word_4+1	; code used at a000
		INX				; code used at a000
		LDA		byte_12A1DF,X	; code used at a000
		STA		word_6		; code used at a000
		INX				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_129DA2	; code used at a000
		INC		word_4+1	; code used at a000
		JSR		sub_129DA6	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A108:				; CODE XREF: sub_129FE2+60-p
					; sub_129FE2+8A-p sub_129FE2+8D-p
		LDA		byte_A		; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		byte_A		; code used at a000
		LDA		byte_B		; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		byte_B		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A117:				; CODE XREF: sub_129FE2+BC-p
		PHA				; code used at a000
		LDA		byte_9		; code used at a000
		SEC				; code used at a000
		SBC		#8		; code used at a000
		TAY				; code used at a000
		LDA		#$F8       ; code used at a000
		LDX		#$F		; code used at a000
loc_12A122:				; CODE XREF: sub_12A117+E-j
		STA		word_3C,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_12A122	; code used at a000
		LDX		#$3C       ; code used at a000
		JSR		sub_129DDF	; code used at a000
		LDX		#$3C       ; code used at a000
		JSR		sub_129DDF	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A133:				; CODE XREF: sub_129FE2+7A-p
		LDX		byte_30		; code used at a000
		LDY		byte_31		; code used at a000
		JSR		sub_176F34	; code used at a000
		AND		#$1F		; code used at a000
		PHA				; code used at a000
		PHA				; code used at a000
		PHA				; code used at a000
		PHA				; code used at a000
		PHA				; code used at a000
		PHA				; code used at a000
		PHA				; code used at a000
		PHA				; code used at a000
		LDA		#6		; code used at a000
		CLC				; code used at a000
		ADC		byte_C		; code used at a000
		ASL		; code used at a000
		STA		word_4		; code used at a000
		LDA		#$10		; code used at a000
		STA		word_4+1	; code used at a000
		LDA		#1		; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4		; code used at a000
		INC		word_4		; code used at a000
		PLA				; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4		; code used at a000
		INC		word_4		; code used at a000
		PLA				; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4		; code used at a000
		INC		word_4		; code used at a000
		LDA		#2		; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4+1	; code used at a000
		INC		word_4+1	; code used at a000
		LDA		#6		; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4		; code used at a000
		DEC		word_4		; code used at a000
		PLA				; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4		; code used at a000
		DEC		word_4		; code used at a000
		PLA				; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4		; code used at a000
		DEC		word_4		; code used at a000
		LDA		#5		; code used at a000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		LDX		#8		; code used at a000
		LDY		#$E		; code used at a000
		PLA				; code used at a000
		JSR		sub_177CC8	; code used at a000
		LDX		#9		; code used at a000
		LDY		#$E		; code used at a000
		PLA				; code used at a000
		JSR		sub_177CC8	; code used at a000
		LDX		#8		; code used at a000
		LDY		#$F		; code used at a000
		PLA				; code used at a000
		JSR		sub_177CC8	; code used at a000
		LDX		#9		; code used at a000
		LDY		#$F		; code used at a000
		PLA				; code used at a000
		JSR		sub_177CC8	; code used at a000
		LDX		#7		; code used at a000
		LDY		#$E		; code used at a000
		LDA		#1		; code used at a000
		JSR		sub_177CC8	; code used at a000
		LDX		#7		; code used at a000
		LDY		#$F		; code used at a000
		LDA		#5		; code used at a000
		JSR		sub_177CC8	; code used at a000
		LDX		#$A		; code used at a000
		LDY		#$E		; code used at a000
		LDA		#2		; code used at a000
		JSR		sub_177CC8	; code used at a000
		LDX		#$A		; code used at a000
		LDY		#$F		; code used at a000
		LDA		#6		; code used at a000
		JSR		sub_177CC8	; code used at a000
		JSR		sub_1742BA	; code used at a000
		JMP		_vblank		; code used at a000
byte_12A1DA:
		.BYTE $CC		; DATA XREF: sub_129FE2+15-r
					; data used at a000
byte_12A1DB:
		.BYTE $D0		; DATA XREF: sub_129FE2+23-r
					; data used at a000
byte_12A1DC:
		.BYTE $D4		; DATA XREF: sub_129FE2+35-r
					; data used at a000
byte_12A1DD:
		.BYTE $D8		; DATA XREF: sub_129FE2+42-r
					; sub_129FE2+80-r
					; data used at a000
byte_12A1DE:
		.BYTE $DC		; DATA XREF: sub_129FE2+47-r
					; sub_129FE2+85-r
					; data used at a000
byte_12A1DF:
		.BYTE	7,$10,	7, $F,	6,$10,	8,$11,	7,$12 ;	DATA XREF: sub_12A0ED-r
					; sub_12A0ED+9-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A1E9:				; CODE XREF: sub_129D1B+15-p
					; sub_129D3A+15-p sub_129FE2+D2-j
		LDA		#$A		; code used at a000
		BNE		sub_12A1F3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A1ED:				; CODE XREF: sub_129E5D+19-p
					; sub_129E5D+25-p sub_129E5D+31-p
					; sub_129E5D+3B-j sub_129EBC+2-p
					; sub_129EBC+7-p sub_129EBC+C-p
					; sub_129EBC+11-p sub_129FE2+C2-p
					; sub_129FE2+CD-p
		LDA		#5		; code used at a000
		BNE		sub_12A1F3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A1F1:				; CODE XREF: _bC_s22+65-p _bC_s22+6D-p
					; _bC_s22+75-p _bC_s22+7F-p
					; sub_129E07+4B-j sub_129FE2+1D-p
					; sub_129FE2+2B-p sub_129FE2+3D-p
					; sub_129FE2+5D-p sub_129FE2+6E-p
					; sub_129FE2+A3-p sub_12A0B7+28-p
		LDA		#1		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A1F3:				; CODE XREF: sub_12A1E9+2-j
					; sub_12A1ED+2-j
		STX		word_4		; code used at a000
		TAX				; code used at a000
loc_12A1F6:				; CODE XREF: sub_12A1F3+22-j
		TXA				; code used at a000
		PHA				; code used at a000
		LDX		word_4		; code used at a000
		JSR		sub_12A93B	; code used at a000
		JSR		_vblank		; code used at a000
		JSR		sub_12A93B	; code used at a000
		JSR		_vblank		; code used at a000
loc_12A206:				; code used at a000
		JSR		sub_12A93B
		JSR		_vblank		; code used at a000
		JSR		sub_12A93B	; code used at a000
		JSR		_vblank		; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		DEX				; code used at a000
		BNE		loc_12A1F6	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_sC:					; CODE XREF: sub_B026:sub_B068-P
					; DATA XREF: BANKC:8018-o
		LDA		byte_2F
		BEQ		loc_12A239
		LDA		byte_60CE
		LDX		#6
loc_12A221:				; CODE XREF: _bC_sC+12-j
		LDY		byte_12A261-1,X
		CPY		byte_8B
		BEQ		loc_12A247
		LSR
		DEX
		BNE		loc_12A221
		LDY		#$18
		CPY		byte_8B
		BNE		loc_12A239
		LDA		byte_60CE
		AND		#2
		BEQ		loc_12A259
loc_12A239:				; CODE XREF: _bC_sC+2-j	_bC_sC+18-j
					; _bC_sC+30-j _bC_sC+3A-j _bC_sC+3F-j
		BRK
		.BYTE $1E, $2F		; _syscall12
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		BRK
		.BYTE $D, $77		; _msg_m00_arg1
		JSR		__pause_or_skip
		SEC
		RTS
loc_12A247:				; CODE XREF: _bC_sC+E-j
		LSR
		BCS		loc_12A239
		CPX		#4
		BNE		loc_12A259
		LDY		byte_60CD
		INY
		BNE		loc_12A239
		LDA		byte_60B7
		BMI		loc_12A239
loc_12A259:				; CODE XREF: _bC_sC+1F-j _bC_sC+34-j
		BRK
		.BYTE $1D, $2F		; _syscall12
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		SEC
		RTS
byte_12A261:
		.BYTE $15,$BD,$17,$75,$8B,$20 ;	DATA XREF: _bC_sC:loc_12A221-r

; =============== S U B	R O U T	I N E =======================================
_bC_s26:				; CODE XREF: sub_B0C1-P
					; DATA XREF: BANKC:804C-o
		LDA		byte_8B
		CMP		#$25 
		BNE		loc_12A281
		LDX		#$C
loc_12A26F:				; CODE XREF: _bC_s26+18-j
		LDA		byte_12A2CB-1,X
		DEX
		CMP		byte_31
		BNE		loc_12A27E
		LDA		byte_12A2CB-1,X
		CMP		byte_30
		BEQ		loc_12A283
loc_12A27E:				; CODE XREF: _bC_s26+E-j
		DEX
		BNE		loc_12A26F
loc_12A281:				; CODE XREF: _bC_s26+4-j _bC_s26+2B-j
					; _bC_s26+3F-j
		CLC
		RTS
loc_12A283:				; CODE XREF: _bC_s26+15-j
		STX		word_6
		SEC
		LDA		#0
loc_12A288:				; CODE XREF: _bC_s26+24-j
		ROL
		DEX
		DEX
		BPL		loc_12A288
		STA		word_4
		AND		byte_60D0
		BNE		loc_12A281
		LDA		byte_48
		SEC
		SBC		#$76 
		TAX
		SEC
		LDA		#0
loc_12A29D:				; CODE XREF: _bC_s26+38-j
		ROL
		DEX
		BNE		loc_12A29D
		STA		word_4+1
		AND		byte_60CF
		BNE		loc_12A281
		LDA		byte_60CF
		ORA		word_4+1
		STA		byte_60CF
		LDA		byte_60D0
		ORA		word_4
		STA		byte_60D0
		LDA		word_6
		PHA
		JSR		sub_176C3C
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		JSR		sub_176C3C
		PLA
		LSR
		BRK
		.BYTE $94, $17		; ofs 0x00098034, -> dst _b6_s1A
		SEC
		RTS
byte_12A2CB:
		.BYTE	7,  4,	3,  6, $B,  6,	3, $A, $B, $A,	7, $C
					; DATA XREF: _bC_s26:loc_12A26F-r
					; _bC_s26+10-r

; =============== S U B	R O U T	I N E =======================================
_bC_s2B:				; CODE XREF: sub_B06C+27-P
					; DATA XREF: BANKC:8056-o
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#0
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		BRK
		.BYTE $3B, $17		; ofs 0x00128074, -> dst _bC_s3A
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		JSR		sub_174CCF
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		BRK
		.BYTE $B0, $77		; _msg_m00_arg1
		LDA		#$47 
		BRK
		.BYTE $A3, 7		; ofs 0x0014004e, -> dst _bD_s27
		BCC		loc_12A2FE
		BRK
		.BYTE $B1, $77		; _msg_m00_arg1
		LDA		#0
		BEQ		loc_12A308
loc_12A2FE:				; CODE XREF: _bC_s2B+1E-j
		LDA		byte_60BA
		AND		#$DF 
		STA		byte_60BA
		LDA		#1
loc_12A308:				; CODE XREF: _bC_s2B+25-j
		PHA
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		PLA
		BRK
		.BYTE $41, $17		; ofs 0x00128076, -> dst _bC_s3B
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A312:				; CODE XREF: sub_12B041:loc_12B07C-p
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		LDA		byte_2C
		BNE		loc_12A326
		LDX		#$CA 
		STX		word_3C
		DEX
		STX		word_3C+1
		BRK
		.BYTE $9F, $2F		; _syscall12
		JSR		_bC_s17
loc_12A326:				; CODE XREF: sub_12A312+5-j
		LDA		#$3E 
		BRK
		.BYTE $20, 7		; ofs 0x00158018, -> dst _bE_sC
		LDX		#1
		LDY		#5
		BIT		byte_AC
		BVC		loc_12A341
		LDA		byte_AC
		AND		#$A0 
		STA		byte_AC
		LDA		#$3C 
		STA		byte_D2
		LDX		#0
		LDY		#$78 
loc_12A341:				; CODE XREF: sub_12A312+1F-j
		TYA
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		JSR		__pause_or_skip
		JMP		_bC_s20

; =============== S U B	R O U T	I N E =======================================
sub_12A34B:				; CODE XREF: _bC_s18-p _bC_s1C-p
		LDA		#$38       ; code used at a000
		STA		word_6C		; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s18:				; DATA XREF: BANKC:8030-o
		JSR		sub_12A34B	; code used at a000
		BNE		sub_12A35C	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s15:				; DATA XREF: BANKC:802A-o
		JSR		sub_12A39D

; =============== S U B	R O U T	I N E =======================================
sub_12A35C:				; CODE XREF: _bC_s18+3-j
		JSR		sub_12A365	; code used at a000
		JSR		sub_12A365	; code used at a000
		JSR		sub_12A365	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A365:				; CODE XREF: sub_12A35C-p sub_12A35C+3-p
		JSR		sub_12A3A6	; code used at a000
		BCS		loc_12A36D	; code used at a000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
loc_12A36D:				; CODE XREF: sub_12A365+3-j
					; sub_12A392+3-j sub_12A392+8-j
		LDA		#4		; code used at a000
		CLC				; code used at a000
		ADC		word_6C		; code used at a000
		STA		word_6C		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s1C:				; DATA XREF: BANKC:8038-o
		JSR		sub_12A34B	; code used at a000
		BNE		sub_12A37D	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s16:				; DATA XREF: BANKC:802C-o
		JSR		sub_12A39D

; =============== S U B	R O U T	I N E =======================================
sub_12A37D:				; CODE XREF: _bC_s1C+3-j
		JSR		sub_12A392	; code used at a000
		JSR		sub_12A392	; code used at a000
		JSR		sub_12A392	; code used at a000
		JSR		sub_12A392	; code used at a000
		LDA		#$F0       ; code used at a000
		ORA		byte_174	; code used at a000
		STA		byte_174	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A392:				; CODE XREF: sub_12A37D-p sub_12A37D+3-p
					; sub_12A37D+6-p sub_12A37D+9-p
		JSR		sub_12A3A6	; code used at a000
		BCS		loc_12A36D	; code used at a000
		JSR		_bC_s38		; code used at a000
		JMP		loc_12A36D	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A39D:				; CODE XREF: _bC_s15-p _bC_s16-p
		LDA		#0
		STA		word_6C
		LDA		#1
		STA		word_6C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A3A6:				; CODE XREF: sub_12A365-p sub_12A392-p
					; _bC_sB+E-p
		LDA		word_6C		; code used at a000
		CMP		#$10		; code used at a000
		BCS		loc_12A3B4	; code used at a000
		LSR
		LSR
		TAX
		LDA		byte_7C1,X
		BMI		sub_12A3DC
loc_12A3B4:				; CODE XREF: sub_12A3A6+4-j
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		SEC				; code used at a000
		SBC		byte_100	; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		word_4		; code used at a000
		INY				; code used at a000
		LDA		(word_6C),Y	; code used at a000
		SEC				; code used at a000
		SBC		byte_101	; code used at a000
		CLC				; code used at a000
		ADC		#7		; code used at a000
		STA		word_4+1	; code used at a000
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s38:				; CODE XREF: _b6_s19+4-P _b6_s1B+47-P
					; sub_12A392+5-p sub_12B353+34-p
					; sub_12B518+5F-p sub_12B518+83-p
					; sub_12B8E4+2-j sub_142E3C+18-P
					; sub_142E3C+21-P
					; DATA XREF: BANKC:8070-o
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		LDY		#3		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		JMP		_bC_s9		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A3DC:				; CODE XREF: sub_12A3A6+C-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s17:				; CODE XREF: _b6_sE+1A-P sub_12A312+11-p
					; _bC_s3B+24-j _bC_s3A+8-p _bC_sB+13-p
					; sub_12B820+3A-P
					; DATA XREF: BANKC:802E-o
		LDX		#1		; code used at a000
loc_12A3E0:				; CODE XREF: _bC_s17+1E-j
		TXA				; code used at a000
		PHA				; code used at a000
		LDY		word_3C		; code used at a000
		JSR		_syscall00_safe	; code used at a000
		LDX		#4		; code used at a000
		JSR		_vblank_count	; code used at a000
		LDY		word_3C+1	; code used at a000
		JSR		_syscall00_safe	; code used at a000
		PLA				; code used at a000
		PHA				; code used at a000
		TAX				; code used at a000
		JSR		_vblank_count	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#9		; code used at a000
		BNE		loc_12A3E0	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s39:				; CODE XREF: _npc_hndl11+3-P
					; DATA XREF: BANKC:8072-o
		LDA		#$38 
		STA		word_6C
		LDX		#2
		JSR		_bC_sB
		LDA		#$80 
		STA		byte_138
locret_12A40D:				; CODE XREF: _bC_s3B+10-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s3B:				; CODE XREF: _bC_s2B+36-P
					; DATA XREF: BANKC:8076-o
		PHA
		LDA		#$10
		STA		word_6C
		LDX		#2
		JSR		_bC_sB
		LDA		#$80 
		STA		byte_111
		PLA
		BEQ		locret_12A40D
		LDA		#3
		STA		byte_7673
		LDA		#7
		STA		byte_7697
		LDA		#$E2 
		STA		word_3C
		LDA		#$FE 
		STA		word_3C+1
		JMP		_bC_s17

; =============== S U B	R O U T	I N E =======================================
_bC_s3A:				; CODE XREF: _bC_s2B+8-P
					; DATA XREF: BANKC:8074-o
		LDA		#$FE 
		STA		word_3C
		LDA		#$E2 
		STA		word_3C+1
		JSR		_bC_s17
		LDA		#$13
		STA		byte_7673
		STA		byte_7697
		LDA		#$F
		STA		byte_110
		LDA		#$12
		STA		byte_111
		LDA		#$92 
		STA		byte_113
		LDA		#$10
		STA		word_6C
		ASL
		ORA		byte_60BA
		STA		byte_60BA
		LDX		#0

; =============== S U B	R O U T	I N E =======================================
_bC_sB:					; CODE XREF: _b5_s5+C-P	_b5_s5+20-P
					; _b6_s18+16-P _b6_s18+1C-P _bC_s39+6-p
					; _bC_s3B+7-p
					; DATA XREF: BANKC:8016-o
		LDA		#1
		STA		word_6C+1
		LDA		byte_12A47B,X
		STA		word_3C
		LDA		byte_12A47B+1,X
		STA		word_3C+1
		JSR		sub_12A3A6
		BCS		locret_12A47A
		JSR		_bC_s17
locret_12A47A:				; CODE XREF: _bC_sB+11-j
		RTS
byte_12A47B:
		.BYTE $FA,$FD,$FD,$FA	; DATA XREF: _bC_sB+4-r	_bC_sB+9-r

; =============== S U B	R O U T	I N E =======================================
_bC_s2C:				; DATA XREF: BANKC:8058-o
		LDX		#3
		LDA		#7
		BNE		sub_12A488

; =============== S U B	R O U T	I N E =======================================
_bC_s2D:				; DATA XREF: BANKC:805A-o
		LDX		#$13
		TXA

; =============== S U B	R O U T	I N E =======================================
sub_12A488:				; CODE XREF: _bC_s2C+4-j
		PHA
		LDA		#$F
		SEC
		SBC		byte_30
		ASL
		STA		word_4
		LDA		#$10
		CLC
		ADC		word_4
		STA		word_4
		LDA		#$11
		SEC
		SBC		byte_31
		ASL
		STA		word_4+1
		LDA		#$E
		CLC
		ADC		word_4+1
		STA		word_4+1
		TXA
		JSR		_bC_sA
		INC		word_4+1
		INC		word_4+1
		PLA
		JSR		_bC_sA
		JMP		sub_1742BA

; =============== S U B	R O U T	I N E =======================================
sub_12A4B6:				; DATA XREF: BANKC:off_12AFEE-o
		LDA		byte_31
		AND		#$FE 
		STA		word_3C+1
		LDY		#0
loc_12A4BE:				; CODE XREF: sub_12A4B6+23-j
		LDA		byte_12A4F8,Y
		CMP		byte_30
		BNE		loc_12A4D4
		LDA		byte_12A4F8+1,Y
		CMP		word_3C+1
		BNE		loc_12A4D4
		LDA		byte_12A4F8+2,Y
		CMP		byte_644
		BEQ		loc_12A4DC
loc_12A4D4:				; CODE XREF: sub_12A4B6+D-j
					; sub_12A4B6+14-j
		INY
		INY
		INY
		CPY		#$27 
		BNE		loc_12A4BE
		RTS
loc_12A4DC:				; CODE XREF: sub_12A4B6+1C-j
		LDA		#$95 
		CPY		#$12
		BCC		loc_12A4EA
		LDA		#$96 
		CPY		#$24 
		BCC		loc_12A4EA
		LDA		#$97 
loc_12A4EA:				; CODE XREF: sub_12A4B6+2A-j
					; sub_12A4B6+30-j
		PHA
		JSR		sub_174CCF
		PLA
		LDX		#1
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS
byte_12A4F8:
		.BYTE $23,  2,	3	; DATA XREF: sub_12A4B6:loc_12A4BE-r
					; sub_12A4B6+F-r sub_12A4B6+16-r
		.BYTE  $E,  8,	1
		.BYTE	8, $E,	1
		.BYTE  $A, $E,	1
		.BYTE  $D,$14,	3
		.BYTE $1F,$14,	3
		.BYTE $12,  2,	3
		.BYTE	4, $E,	1
		.BYTE  $C, $E,	1
		.BYTE  $E, $E,	1
		.BYTE	7,$14,	3
		.BYTE $14,$14,	3
		.BYTE $14, $E,	3

; =============== S U B	R O U T	I N E =======================================
_bC_s33:				; CODE XREF: _npc_hndl28+1C-P
					; DATA XREF: BANKC:8066-o
		JSR		sub_177668
		LDA		byte_6BB
		ORA		byte_12F
		AND		#$FC 
		STA		byte_12F
		BRK
		.BYTE $9E, $2F		; _syscall12
		JSR		sub_12A55D
		JSR		sub_12A58F
		JSR		sub_12A59F
		BRK
		.BYTE $A0, $2F		; _syscall12
		JSR		sub_12A5CA
		JSR		sub_12A5DB
		LDA		#$B
		JSR		_bC_s0
		LDA		#$80 
		STA		byte_118
		LDA		#$35 
		STA		byte_9E
		LDA		#$F4 
		STA		byte_9F
		LDA		byte_60B9
		ORA		#$40 
		STA		byte_60B9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A55D:				; CODE XREF: _bC_s33+11-p
		LDA		#$F
		STA		byte_4D
loc_12A561:				; CODE XREF: sub_12A55D+C-j
		JSR		sub_12A56C
		JSR		sub_12A570
		DEC		byte_4D
		BNE		loc_12A561
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A56C:				; CODE XREF: sub_12A55D:loc_12A561-p
		LDA		#2
		BNE		loc_12A572

; =============== S U B	R O U T	I N E =======================================
sub_12A570:				; CODE XREF: sub_12A55D+7-p
		LDA		#$FE 
loc_12A572:				; CODE XREF: sub_12A56C+2-j
		STA		byte_4C
		JSR		sub_12A5F3
		LDA		word_3E+1
		CLC
		ADC		byte_4C
		STA		word_3E+1
		STA		byte_47
		CLC
		ADC		#8
		STA		byte_43
		STA		word_4A+1
		JSR		sub_12A60A
		LDX		#3
		JMP		_vblank_count

; =============== S U B	R O U T	I N E =======================================
sub_12A58F:				; CODE XREF: _bC_s33+14-p
		LDA		#7
		STA		byte_12C
		STA		byte_12D
		LDA		#$2C 
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A59F:				; CODE XREF: _bC_s33+17-p
		LDA		#$19
		STA		byte_4C
loc_12A5A3:				; CODE XREF: sub_12A59F+18-j
		JSR		sub_12A5F3
		JSR		sub_12A621
		JSR		sub_12A621
		JSR		sub_12A621
		JSR		sub_12A60A
		JSR		_vblank
		DEC		byte_4C
		BNE		loc_12A5A3
		LDX		#0
		LDA		#$F8 
loc_12A5BD:				; CODE XREF: sub_12A59F+23-j
		STA		word_3C,X
		INX
		CPX		#$10
		BNE		loc_12A5BD
		JSR		sub_12A60A
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_12A5CA:				; CODE XREF: _bC_s33+1D-p
		JSR		loc_12A5CD
loc_12A5CD:
		LDX		#$1E
		JSR		_vblank_count
		INC		byte_12F

; =============== S U B	R O U T	I N E =======================================
sub_12A5D5:				; CODE XREF: sub_12A5E7+9-j
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_12A5DB:				; CODE XREF: _bC_s33+20-p
		LDA		#$64 
		STA		word_3C
loc_12A5DF:				; CODE XREF: sub_12A5DB+9-j
		JSR		sub_12A5E7
		DEC		word_3C
		BNE		loc_12A5DF
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A5E7:				; CODE XREF: sub_12A5DB:loc_12A5DF-p
		LDA		byte_645
		CLC
		ADC		#$40 
		STA		byte_645
		JMP		sub_12A5D5

; =============== S U B	R O U T	I N E =======================================
sub_12A5F3:				; CODE XREF: sub_12A570+4-p
					; sub_12A59F:loc_12A5A3-p
		LDA		byte_11B
		AND		#$3C 
		TAY
		LDX		#$3C 
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JMP		sub_1741FD

; =============== S U B	R O U T	I N E =======================================
sub_12A60A:				; CODE XREF: sub_12A570+17-p
					; sub_12A59F+10-p sub_12A59F+25-p
		LDA		byte_11B
		AND		#$3C 
		TAY
		LDX		#$3C 
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JMP		sub_174204

; =============== S U B	R O U T	I N E =======================================
sub_12A621:				; CODE XREF: sub_12A59F+7-p
					; sub_12A59F+A-p sub_12A59F+D-p
		DEC		word_3C
		DEC		word_3E+1
		DEC		word_40
		INC		byte_43
		DEC		byte_47
		INC		byte_44
		INC		word_4A+1
		INC		byte_48
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s19:				; CODE XREF: sub_143AEA+19-P
					; _npc_hndl43+1F-P
					; DATA XREF: BANKC:8032-o
		BIT		byte_60B7	; code used at a000
		BVS		loc_12A686	; code used at a000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369	; code used at a000
		BRK
		.BYTE 1, $2F		; _syscall12
		BRK
		.BYTE $7B, $17		; ofs 0x000080ac, -> dst _b0_s56
		LDA		byte_60B7	; code used at a000
		ORA		#$40       ; code used at a000
		STA		byte_60B7	; code used at a000
		BRK
		.BYTE $F0, 7		; ofs 0x00020020, -> dst _b1_s10
		JSR		sub_177CFC	; code used at a000
		JSR		_vblank_and_render_off_flag10_set ; code used at a000
		LDA		#$F		; code used at a000
		LDY		#0		; code used at a000
		JSR		sub_1762A8	; code used at a000
		LDA		#2		; code used at a000
		STA		byte_644	; code used at a000
		STA		byte_103	; code used at a000
		LDA		#$12		; code used at a000
		STA		byte_30		; code used at a000
		STA		byte_100	; code used at a000
		LDA		#3		; code used at a000
		STA		byte_31		; code used at a000
		STA		byte_101	; code used at a000
		JSR		sub_12A6F1	; code used at a000
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		LDA		#0		; code used at a000
		STA		byte_8E		; code used at a000
		STA		word_6C		; code used at a000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		BRK
		.BYTE 3, $2F		; _syscall12
		JMP		sub_175B0E	; code used at a000
loc_12A686:				; CODE XREF: _bC_s19+3-j
		JSR		sub_174369	; code used at a000
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		LDA		byte_60B7	; code used at a000
		AND		#$BF       ; code used at a000
		STA		byte_60B7	; code used at a000
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		LDA		#$12		; code used at a000
		STA		byte_30		; code used at a000
		LDA		#4		; code used at a000
		STA		byte_31		; code used at a000
		LDA		#$4A       ; code used at a000
		STA		byte_8B		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_644	; code used at a000
		STA		byte_6BC	; code used at a000
		JMP		loc_1752EB	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s28:				; CODE XREF: _npc_hndl1F+1C-P
					; _bD_s20_npc_hndl31:loc_143A64-P
					; DATA XREF: BANKC:8050-o
		LDA		byte_60BA
		ORA		#1
		STA		byte_60BA
		JSR		sub_12A6C8
		LDY		#$19
		LDA		byte_6DF
		CMP		#$78 
		BCC		loc_12A6C4
		LDY		#$39 
loc_12A6C4:				; CODE XREF: _bC_s28+12-j
		TYA
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12A6C8:				; CODE XREF: _bC_s28+8-p sub_12B3D1+5F-p
		BRK
		.BYTE $45, $17		; ofs 0x0000809c, -> dst _b0_s4E
		JSR		sub_12A6FD	; code used at a000
		LDY		#4		; code used at a000
loc_12A6D0:				; CODE XREF: sub_12A6C8+27-j
		LDA		byte_100,Y	; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		AND		#3		; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_12A6E7	; code used at a000
		BCC		loc_12A6E2	; code used at a000
		PLA				; code used at a000
		ORA		#$80       ; code used at a000
		BNE		loc_12A6E8	; code used at a000
loc_12A6E2:				; CODE XREF: sub_12A6C8+13-j
		LDA		#$80       ; code used at a000
		STA		byte_100,Y	; code used at a000
loc_12A6E7:				; CODE XREF: sub_12A6C8+11-j
		PLA				; code used at a000
loc_12A6E8:				; CODE XREF: sub_12A6C8+18-j
		STA		byte_100,X	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		CPY		#$10		; code used at a000
		BNE		loc_12A6D0	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A6F1:				; CODE XREF: _bC_s19+3F-p
		LDA		#$80       ; code used at a000
		STA		byte_104	; code used at a000
		STA		byte_108	; code used at a000
		STA		byte_10C	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A6FD:				; CODE XREF: sub_12A6C8+3-p
					; sub_12B353+13-p sub_12BA11+26-p
		LDX		#$10		; code used at a000
loc_12A6FF:				; CODE XREF: sub_12A6FD+D-j
		LDA		byte_102,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		locret_12A70C	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		BNE		loc_12A6FF	; code used at a000
locret_12A70C:				; CODE XREF: sub_12A6FD+7-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s2F:				; CODE XREF: _b1_sC+53-P
					; DATA XREF: BANKC:805E-o
		LDA		#0
		STA		byte_644
		STA		byte_6BC
		LDA		#$E
		STA		byte_30
		LDA		#$C
		STA		byte_31
		LDA		#1
		STA		byte_2F
		LDA		#$F
		STA		byte_8B
		LDA		#$6C 
		STA		byte_2A
		LDA		#$D6 
		STA		byte_2B
		LDX		#$FF
		TXS
		JMP		loc_174BBB

; =============== S U B	R O U T	I N E =======================================
_bC_s30:				; CODE XREF: _npc_hndlE+3C-P
					; DATA XREF: BANKC:8060-o
		LDA		byte_60B7	; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_60B7	; code used at a000
		LDA		#$1B		; code used at a000
		JMP		_bC_s0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s21:				; CODE XREF: sub_1753AA+1C-P
					; DATA XREF: BANKC:8042-o
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22

; =============== S U B	R O U T	I N E =======================================
sub_12A743:				; CODE XREF: _bC_s34+5E-p
		BRK
		.BYTE $22, $2F		; _syscall12
		LDA		byte_AC		; code used at a000
		AND		#$E0       ; code used at a000
		STA		byte_AC		; code used at a000
		JSR		_bC_s1A		; code used at a000
		JSR		_vblank		; code used at a000
		JSR		sub_12A89C	; code used at a000
		JSR		sub_12A8C5	; code used at a000
		JSR		sub_12A8AE	; code used at a000
		JSR		sub_12A78C	; code used at a000
		JSR		sub_12A795	; code used at a000
		JSR		sub_12A79E	; code used at a000
		JSR		sub_12A7A7	; code used at a000
		JSR		_bC_s1A		; code used at a000
		JSR		_vblank		; code used at a000
		JSR		sub_12A91B	; code used at a000
		JSR		sub_12AA18	; code used at a000
		JSR		sub_12A9DC	; code used at a000
		JSR		sub_12A9D3	; code used at a000
		JSR		sub_12A9CA	; code used at a000
		JSR		sub_12A9C1	; code used at a000
		JSR		_bC_s5		; code used at a000
		BRK
		.BYTE $21, $2F		; _syscall12
		JSR		sub_12AA57	; code used at a000
		BRK
		.BYTE 7, $2F		; _syscall12
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A78C:				; CODE XREF: sub_12A743+18-p
		LDA		byte_73C	; code used at a000
		BPL		locret_12A7C0	; code used at a000
		LDA		#0		; code used at a000
		BEQ		sub_12A7AE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A795:				; CODE XREF: sub_12A743+1B-p
		LDA		byte_73E	; code used at a000
		BPL		locret_12A7C0	; code used at a000
		LDA		#1		; code used at a000
		BNE		sub_12A7AE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A79E:				; CODE XREF: sub_12A743+1E-p
		LDA		byte_740	; code used at a000
		BPL		locret_12A7C0	; code used at a000
		LDA		#2		; code used at a000
		BNE		sub_12A7AE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A7A7:				; CODE XREF: sub_12A743+21-p
		LDA		byte_742	; code used at a000
		BPL		locret_12A7C0	; code used at a000
		LDA		#3		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A7AE:				; CODE XREF: sub_12A78C+7-j
					; sub_12A795+7-j sub_12A79E+7-j
		PHA				; code used at a000
		JSR		sub_1778D7	; code used at a000
		PLA				; code used at a000
		JSR		sub_177909	; code used at a000
		JSR		sub_12A7DD	; code used at a000
loc_12A7B9:				; CODE XREF: sub_12A7AE+E-j
		JSR		sub_12A7C1	; code used at a000
		BCC		loc_12A7B9	; code used at a000
		INC		word_40		; code used at a000
locret_12A7C0:				; CODE XREF: sub_12A78C+3-j
					; sub_12A795+3-j sub_12A79E+3-j
					; sub_12A7A7+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A7C1:				; CODE XREF: sub_12A7AE:loc_12A7B9-p
		LDX		#0		; code used at a000
loc_12A7C3:				; CODE XREF: sub_12A7C1+15-j
		JSR		sub_12A93B	; code used at a000
		STX		byte_43		; code used at a000
		JSR		sub_12A828	; code used at a000
		LDX		byte_43		; code used at a000
		PHP				; code used at a000
		PLA				; code used at a000
		STA		byte_43		; code used at a000
		JSR		_vblank		; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_12A7C3	; code used at a000
		LDA		byte_43		; code used at a000
		PHA				; code used at a000
		PLP				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A7DD:				; CODE XREF: sub_12A7AE+8-p
		LDA		byte_42		; code used at a000
		STA		_spr_ram	; code used at a000
		STA		_spr_ram+4	; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		_spr_ram+8	; code used at a000
		STA		_spr_ram+$C	; code used at a000
		LDA		word_40+1	; code used at a000
		STA		_spr_ram+3	; code used at a000
		STA		_spr_ram+$B	; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		_spr_ram+7	; code used at a000
		STA		_spr_ram+$F	; code used at a000
		LDA		byte_74		; code used at a000
		STA		_spr_ram+1	; code used at a000
		LDA		byte_75		; code used at a000
		STA		_spr_ram+2	; code used at a000
		LDA		byte_76		; code used at a000
		STA		_spr_ram+5	; code used at a000
		LDA		byte_77		; code used at a000
		STA		_spr_ram+6	; code used at a000
		LDA		byte_78		; code used at a000
		STA		_spr_ram+9	; code used at a000
		LDA		byte_79		; code used at a000
		STA		_spr_ram+$A	; code used at a000
		LDA		byte_7A		; code used at a000
		STA		_spr_ram+$D	; code used at a000
		LDA		byte_7B		; code used at a000
		STA		_spr_ram+$E	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A828:				; CODE XREF: sub_12A7C1+7-p
		JSR		sub_12A851	; code used at a000
		LDA		_spr_ram	; code used at a000
		CMP		#$F7       ; code used at a000
		BCC		loc_12A834	; code used at a000
		LDA		#$FD       ; code used at a000
loc_12A834:				; CODE XREF: sub_12A828+8-j
		SEC				; code used at a000
		SBC		#6		; code used at a000
		STA		_spr_ram	; code used at a000
		STA		_spr_ram+4	; code used at a000
		LDA		_spr_ram+8	; code used at a000
		CMP		#$F7       ; code used at a000
		BCS		loc_12A84F	; code used at a000
		SEC				; code used at a000
		SBC		#6		; code used at a000
		STA		_spr_ram+8	; code used at a000
		STA		_spr_ram+$C	; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_12A84F:				; CODE XREF: sub_12A828+1A-j
		SEC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A851:				; CODE XREF: sub_12A828-p
		JSR		sub_12A86B	; code used at a000
		TAX				; code used at a000
		CLC				; code used at a000
		ADC		_spr_ram+3	; code used at a000
		STA		_spr_ram+3	; code used at a000
		STA		_spr_ram+$B	; code used at a000
		TXA				; code used at a000
		CLC				; code used at a000
		ADC		_spr_ram+7	; code used at a000
		STA		_spr_ram+7	; code used at a000
		STA		_spr_ram+$F	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A86B:				; CODE XREF: sub_12A851-p
		LDA		_spr_ram+8	; code used at a000
		EOR		#$FF		; code used at a000
		SEC				; code used at a000
		SBC		#$78       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A873:				; CODE XREF: sub_12AC0E+12-p
		PHA				; code used at a000
		LDX		word_40		; code used at a000
		LDA		word_3C,X	; code used at a000
		TAY				; code used at a000
		AND		#4		; code used at a000
		BNE		loc_12A87F	; code used at a000
		LDA		#6		; code used at a000
loc_12A87F:				; CODE XREF: sub_12A873+8-j
		TAX				; code used at a000
		PLA				; code used at a000
loc_12A881:				; CODE XREF: sub_12A873+10-j
		LSR		; code used at a000
		DEX				; code used at a000
		BNE		loc_12A881	; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		AND		#1		; code used at a000
		BNE		loc_12A88F	; code used at a000
		PLA				; code used at a000
		EOR		#$FF		; code used at a000
		RTS				; code used at a000
loc_12A88F:				; CODE XREF: sub_12A873+16-j
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s1A:				; CODE XREF: _b5_s9+6-P	sub_9BC74+9-P
					; sub_B34E4+1F-P sub_F8682-P _bA_sF+3-P
					; _bC_s34+39-p sub_12A743+9-p
					; sub_12A743+24-p sub_12B493+37-P
					; sub_142504+50-P
					; DATA XREF: BANKC:8034-o
		LDX		#0		; code used at a000
		LDA		#$F8       ; code used at a000
loc_12A895:				; CODE XREF: _bC_s1A+8-j
		STA		_spr_ram,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		BNE		loc_12A895	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A89C:				; CODE XREF: sub_12A743+F-p
		LDX		#4		; code used at a000
loc_12A89E:				; CODE XREF: sub_12A89C+D-j
		STX		word_40		; code used at a000
		JSR		sub_1743B8	; code used at a000
		LDX		word_40		; code used at a000
		STA.WX		byte_3B,X	; code used at a000
		DEX				; code used at a000
		BNE		loc_12A89E	; code used at a000
		STX		word_40		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A8AE:				; CODE XREF: sub_12A743+15-p
		LDA		#$10		; code used at a000
		STA		byte_87		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_85		; code used at a000
loc_12A8B6:				; CODE XREF: sub_12A8AE+10-j
		JSR		sub_175B03	; code used at a000
		JSR		sub_12A92A	; code used at a000
		LDA		byte_87		; code used at a000
		BNE		loc_12A8B6	; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_86		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A8C5:				; CODE XREF: sub_12A743+12-p
		LDA		byte_644	; code used at a000
		EOR		#2		; code used at a000
		STA		byte_644	; code used at a000
		LDA		#$80       ; code used at a000
		STA		word_40+1	; code used at a000
		LDA		#$6F       ; code used at a000
		STA		byte_42		; code used at a000
		LDA		byte_644	; code used at a000
		AND		#1		; code used at a000
		BEQ		loc_12A8EE	; code used at a000
		JSR		sub_12A900
		ADC		word_40+1
		STA		word_40+1
		JSR		sub_12A90F
		ADC		byte_30
		STA		byte_30
		STA		byte_100
		RTS
loc_12A8EE:				; CODE XREF: sub_12A8C5+15-j
		JSR		sub_12A900	; code used at a000
		ADC		byte_42		; code used at a000
		STA		byte_42		; code used at a000
		JSR		sub_12A90F	; code used at a000
		ADC		byte_31		; code used at a000
		STA		byte_31		; code used at a000
		STA		byte_101	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A900:				; CODE XREF: sub_12A8C5+17-p
					; sub_12A8C5:loc_12A8EE-p
		LDX		#$10		; code used at a000
		ASL		; code used at a000
		EOR		byte_644	; code used at a000
		AND		#2		; code used at a000
		BEQ		loc_12A90C	; code used at a000
		LDX		#$F0       ; code used at a000
loc_12A90C:				; CODE XREF: sub_12A900+8-j
		TXA				; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A90F:				; CODE XREF: sub_12A8C5+1E-p
					; sub_12A8C5+30-p
		TXA				; code used at a000
		AND		#$80       ; code used at a000
		CLC				; code used at a000
		ROL		; code used at a000
		ROL		; code used at a000
		ROL		; code used at a000
		SEC				; code used at a000
		SBC		#1		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A91B:				; CODE XREF: sub_12A743+2A-p
		LDX		#0		; code used at a000
loc_12A91D:				; CODE XREF: sub_12A91B+C-j
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_12A92A	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_12A91D	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A92A:				; CODE XREF: sub_12A8AE+B-p
					; sub_12A91B+4-p
		JSR		sub_12A92D	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A92D:
		LDX		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A92F:				; CODE XREF: sub_128F1F+2-j
					; sub_12A92F+9-j sub_12AA67+6-p
					; sub_12AAEA+6-p
		JSR		sub_12A93B	; code used at a000
		JSR		_vblank		; code used at a000
		TXA				; code used at a000
		AND		#7		; code used at a000
		BNE		sub_12A92F	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A93B:				; CODE XREF: sub_12A1F3+7-p
					; sub_12A1F3+D-p sub_12A1F3:loc_12A206-p
					; sub_12A1F3+19-p
					; sub_12A7C1:loc_12A7C3-p sub_12A92F-p
					; sub_12A9DC+11-p
					; sub_12AB49:loc_12AB4B-p sub_12ABBD-p
					; sub_12ABC3+1D-p sub_12ACEB+6-p
		LDY		#0		; code used at a000
		JSR		sub_12A941	; code used at a000
		INY				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A941:				; CODE XREF: sub_12A93B+2-p
		LDA		byte_6D0,Y	; code used at a000
		PHA				; code used at a000
		CLC				; code used at a000
		ADC		byte_12A967,X	; code used at a000
		STA		byte_6D0,Y	; code used at a000
		JSR		sub_12A99F	; code used at a000
		PLA				; code used at a000
		CPY		#0		; code used at a000
		BEQ		loc_12A956	; code used at a000
loc_12A954:				; CODE XREF: sub_12A941+1A-j
		INX				; code used at a000
		RTS				; code used at a000
loc_12A956:				; CODE XREF: sub_12A941+11-j
		EOR		byte_6D0,Y	; code used at a000
		AND		#$80       ; code used at a000
		BEQ		loc_12A954	; code used at a000
		LDA		byte_6D3
		EOR		#1
		STA		byte_6D3
		INX
		RTS
byte_12A967:
		.BYTE	3,  3,	0,$FE,$FD,  2,	0,$FD ;	DATA XREF: sub_12A941+5-r
					; sub_12A9A7+C-r
		.BYTE	2,  2,	0,$FF,$FE,  2,	0,$FD ;	data used at a000
		.BYTE	2,  2,	0,$FF,$FE,  1,	0,$FE
		.BYTE	2,  2,	0,$FF,$FE,  1,	0,$FE
		.BYTE	1,  1,	0,  0,$FF,  0,	0,$FF
		.BYTE	1,  0,$FF,  0,	0,  0,	0,  0
		.BYTE	4,  4,	0,$FD,$FC,  3,	0,$FC

; =============== S U B	R O U T	I N E =======================================
sub_12A99F:				; CODE XREF: sub_12A941+B-p
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		sub_12A9A7	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A9A7:				; CODE XREF: sub_12A99F+2-p
		LDY		#0		; code used at a000
		CMP		#0		; code used at a000
		BNE		loc_12A9AF	; code used at a000
		LDY		#3		; code used at a000
loc_12A9AF:				; CODE XREF: sub_12A9A7+4-j
					; sub_12A9A7+17-j
		LDA		_spr_ram,Y	; code used at a000
		SEC				; code used at a000
		SBC		byte_12A967,X	; code used at a000
		STA		_spr_ram,Y	; code used at a000
		TYA				; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		TAY				; code used at a000
		BCC		loc_12A9AF	; code used at a000
locret_12A9C0:				; CODE XREF: sub_12A9C1+3-j
					; sub_12A9CA+3-j sub_12A9D3+3-j
					; sub_12A9DC+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A9C1:				; CODE XREF: sub_12A743+39-p
		LDA		byte_73C	; code used at a000
		BPL		locret_12A9C0	; code used at a000
		LDA		#0		; code used at a000
		BEQ		loc_12A9E3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A9CA:				; CODE XREF: sub_12A743+36-p
		LDA		byte_73E	; code used at a000
		BPL		locret_12A9C0	; code used at a000
		LDA		#4		; code used at a000
		BNE		loc_12A9E3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A9D3:				; CODE XREF: sub_12A743+33-p
		LDA		byte_740	; code used at a000
		BPL		locret_12A9C0	; code used at a000
		LDA		#8		; code used at a000
		BNE		loc_12A9E3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A9DC:				; CODE XREF: sub_12A743+30-p
		LDA		byte_742	; code used at a000
		BPL		locret_12A9C0	; code used at a000
		LDA		#$C		; code used at a000
loc_12A9E3:				; CODE XREF: sub_12A9C1+7-j
					; sub_12A9CA+7-j sub_12A9D3+7-j
		STA		byte_44		; code used at a000
		LDX		#0		; code used at a000
loc_12A9E7:				; CODE XREF: sub_12A9DC+1F-j
		TXA				; code used at a000
		PHA				; code used at a000
		ASL		; code used at a000
		AND		#6		; code used at a000
		TAX				; code used at a000
		JSR		sub_12A93B	; code used at a000
		JSR		sub_12A9FE	; code used at a000
		JSR		_vblank		; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#$20       ; code used at a000
		BNE		loc_12A9E7	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12A9FE:				; CODE XREF: sub_12A9DC+14-p
		LDY		byte_44		; code used at a000
loc_12AA00:				; CODE XREF: sub_12A9FE+17-j
		LDX		#$45       ; code used at a000
		JSR		sub_1741FD	; code used at a000
		LDA		byte_45		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		byte_45		; code used at a000
		LDX		#$45       ; code used at a000
		JSR		sub_174204	; code used at a000
		INY				; code used at a000
		TYA				; code used at a000
		AND		#3		; code used at a000
		BNE		loc_12AA00	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12AA18:				; CODE XREF: sub_12A743+2D-p
		LDA		#0		; code used at a000
		STA		word_6C		; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		LDA		#2		; code used at a000
		STA		byte_644	; code used at a000
		JSR		sub_12AA2E	; code used at a000
		JSR		sub_12AA2E	; code used at a000
		JSR		sub_12AA2E	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12AA2E:				; CODE XREF: sub_12AA18+D-p
					; sub_12AA18+10-p
		LDA		word_6C		; code used at a000
		LSR		; code used at a000
		TAX				; code used at a000
		LDA		byte_73C,X	; code used at a000
		BPL		loc_12AA4F	; code used at a000
		LDA		byte_30		; code used at a000
		STA		byte_80		; code used at a000
		LDA		byte_31		; code used at a000
		SEC				; code used at a000
		SBC		#8		; code used at a000
		STA		byte_81		; code used at a000
		LDY		#3		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		AND		#$FC       ; code used at a000
		ORA		#2		; code used at a000
		STA		(word_6C),Y	; code used at a000
		BRK
		.BYTE $34, $17		; ofs 0x00140034, -> dst _bD_s1A
loc_12AA4F:				; CODE XREF: sub_12AA2E+7-j
		LDA		word_6C		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		word_6C		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12AA57:				; CODE XREF: sub_12A743+42-p
		LDX		#8		; code used at a000
		STX		word_3C		; code used at a000
		JSR		sub_12AA67	; code used at a000
		JSR		sub_12AA67	; code used at a000
		JSR		sub_12AA67	; code used at a000
		JSR		sub_12AA67	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12AA67:				; CODE XREF: sub_12AA57+4-p
					; sub_12AA57+7-p sub_12AA57+A-p
		LDA		#0		; code used at a000
		STA		word_3C+1	; code used at a000
loc_12AA6B:				; CODE XREF: sub_12AA67+F-j
		LDX		word_3C		; code used at a000
		JSR		sub_12A92F	; code used at a000
		INC		word_3C+1	; code used at a000
		LDA		word_3C+1	; code used at a000
		CMP		#$C		; code used at a000
		BNE		loc_12AA6B	; code used at a000
		LDA		word_3C		; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		word_3C		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s24:				; CODE XREF: sub_AE6C+12-P
					; DATA XREF: BANKC:8048-o
		LDA		byte_2A
		CMP		#$4A 
		BNE		loc_12AA8C
		LDA		byte_2B
		CMP		#$90 
		BEQ		loc_12AA8E
loc_12AA8C:				; CODE XREF: _bC_s24+4-j
		CLC
		RTS
loc_12AA8E:				; CODE XREF: _bC_s24+A-j
		LDA		#0
		STA		byte_8E
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		JSR		sub_12AE73
		JSR		sub_12AB1E
		JSR		sub_12AAD4
		BRK
		.BYTE $22, $2F		; _syscall12
		JSR		sub_12AB31
		JSR		sub_12AB90
		JSR		sub_12AC5C
		JSR		sub_12ADB1
		JSR		sub_12AD96
		BRK
		.BYTE $23, $2F		; _syscall12
		JSR		sub_12AC79
		JSR		sub_12ADD7
		JSR		sub_12AC69
		LDX		#$2D 
		JSR		_vblank_count
		JSR		sub_12AE80
		JSR		sub_12AF78
		BRK
		.BYTE 4, $2F		; _syscall12
		LDA		byte_60B6
		ORA		#8
		STA		byte_60B6
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AAD4:				; CODE XREF: _bC_s24+1B-p
		LDX		#$28 
		STX		word_3C
		BRK
		.BYTE $20, $2F		; _syscall12
		JSR		sub_12AAEA
		JSR		sub_12AAEA
		BRK
		.BYTE $21, $2F		; _syscall12
		JSR		sub_12AAEA
		JSR		sub_12AAEA

; =============== S U B	R O U T	I N E =======================================
sub_12AAEA:				; CODE XREF: sub_12AAD4+7-p
					; sub_12AAD4+A-p sub_12AAD4+10-p
		LDA		#0
		STA		word_3C+1
loc_12AAEE:				; CODE XREF: sub_12AAEA+18-j
		LDX		word_3C
		JSR		sub_12A92F
		INC		word_3C+1
		LDA		word_3C+1
		AND		#3
		BNE		loc_12AAFE
		JSR		sub_12AB0C
loc_12AAFE:				; CODE XREF: sub_12AAEA+F-j
		LDA		word_3C+1
		CMP		#$10
		BNE		loc_12AAEE
		LDA		word_3C
		SEC
		SBC		#8
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB0C:				; CODE XREF: sub_12AAEA+11-p
		LDA		word_3C+1
		AND		#4
		LSR
		LSR

; =============== S U B	R O U T	I N E =======================================
sub_12AB12:				; CODE XREF: sub_12AB31+E-p
					; sub_12ABC3+D-p sub_12ABC3+3D-p
		CLC
		ADC		#$F
		STA		byte_45
		LDY		#$18
		STY		byte_46
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12AB1E:				; CODE XREF: _bC_s24+18-p
		JSR		sub_12ADB7
		LDY		#$18
		JSR		sub_12ADC6
		LDY		#$18
		STY		byte_46
		LDA		#$10
		STA		byte_45
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12AB31:				; CODE XREF: _bC_s24+21-p
		LDA		#0
		STA		word_3C
loc_12AB35:				; CODE XREF: sub_12AB31+15-j
		JSR		sub_12AB49
		INC		word_3C
		LDA		word_3C
		AND		#2
		LSR
		JSR		sub_12AB12
		LDA		word_3C
		CMP		#$20 
		BNE		loc_12AB35
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB49:				; CODE XREF: sub_12AB31:loc_12AB35-p
		LDX		#$30 
loc_12AB4B:				; CODE XREF: sub_12AB49+B-j
		JSR		sub_12A93B
		JSR		_vblank
		TXA
		AND		#7
		BNE		loc_12AB4B
		LDA		byte_6D4
		EOR		#1
		STA		byte_6D4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB5F:				; CODE XREF: sub_12ABC3-p
		LDA		#0
		STA		word_3C
loc_12AB63:				; CODE XREF: sub_12AB5F+10-j
		JSR		sub_1743B8
		LDX		word_3C
		STA		word_40+1,X
		INX
		STX		word_3C
		CPX		#$10
		BCC		loc_12AB63
		LDA		#$7F 
		STA		word_4
		LDA		#$FF
		STA		word_4+1
		LDA		#1
		STA		word_6
		LDA		#$84 
		STA		word_6+1
loc_12AB81:				; CODE XREF: sub_12AC5C+A-j
		LDY		#$30 
		STY		word_3C
loc_12AB85:				; CODE XREF: sub_12AB5F+2E-j
		LDX		#4
		JSR		sub_174204
		INY
		CPY		#$40 
		BNE		loc_12AB85
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB90:				; CODE XREF: _bC_s24+24-p
		LDA		#0
		STA		word_3E+1
loc_12AB94:				; CODE XREF: sub_12AB90+21-j
		BRK
		.BYTE $98, $2F		; _syscall12
		JSR		sub_12ABC3
		INC		word_3E+1
		LDA		word_3E+1
		ASL
		ASL
		TAX
loc_12ABA1:				; CODE XREF: sub_12AB90+1B-j
		TXA
		PHA
		LDX		#$10
		JSR		sub_12ABB4
		PLA
		TAX
		DEX
		BNE		loc_12ABA1
		LDA		word_3E+1
		CMP		#4
		BNE		loc_12AB94
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12ABB4:				; CODE XREF: sub_128F4A+2-j
					; sub_12AB90+15-p
		JSR		sub_12ABBD	; code used at a000
		JSR		sub_12ABBD	; code used at a000
		JSR		sub_12ABBD	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12ABBD:				; CODE XREF: sub_12ABB4-p sub_12ABB4+3-p
		JSR		sub_12A93B	; code used at a000
		JMP		_vblank		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12ABC3:				; CODE XREF: sub_12AB90+7-p
		JSR		sub_12AB5F
		LDA		#0
		STA		word_3C+1
		LDA		#$30 
		STA		word_3E
		LDA		#0
		JSR		sub_12AB12
loc_12ABD3:				; CODE XREF: sub_12ABC3+35-j
					; sub_12ABC3+39-j sub_12ABC3+48-j
		LDA		#5
		STA		word_40
		LDA		#$30 
		STA		word_3C
		JSR		sub_12AC0E
		LDX		word_3E
		JSR		sub_12A93B
		TXA
		AND		#7
		BNE		loc_12ABED
		TXA
		SEC
		SBC		#8
		TAX
loc_12ABED:				; CODE XREF: sub_12ABC3+23-j
		STX		word_3E
		JSR		_vblank
		INC		word_3C+1
		LDA		word_3C+1
		CMP		#$10
		BCC		loc_12ABD3
		AND		#7
		BNE		loc_12ABD3
		LDA		#1
		JSR		sub_12AB12
		LDA		#8
		STA		word_3E
		LDA		word_3C+1
		CMP		#$40 
		BNE		loc_12ABD3
locret_12AC0D:				; CODE XREF: sub_12AC0E+5-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AC0E:				; CODE XREF: sub_12ABC3+18-p
					; sub_12AC0E+2B-j
		LDA		_nmi_counter
		AND		#1
		BEQ		locret_12AC0D
		LDY		word_3C
		LDX		#4
		JSR		sub_1741FD
		LDA		word_4
		EOR		#$7F 
		JSR		sub_12A873
		CLC
		ADC		word_6+1
		STA		word_6+1
		JSR		sub_12AC3C
		LDY		word_3C
		LDX		#4
		JSR		sub_174204
		INC		word_40
		INY
		STY		word_3C
		CPY		#$40 
		BNE		sub_12AC0E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AC3C:				; CODE XREF: sub_12AC0E+1A-p
		LDA		word_4
		CMP		#$F0 
		BCS		loc_12AC55
		LDX		word_40
		LDA		word_3C,X
		AND		#$F
		CMP		#4
		BCS		loc_12AC4E
		ORA		#4
loc_12AC4E:				; CODE XREF: sub_12AC3C+E-j
		SBC		word_4
		EOR		#$FF
		STA		word_4
		RTS
loc_12AC55:				; CODE XREF: sub_12AC3C+4-j
		LDA		#$F8 
		STA		word_4
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AC5C:				; CODE XREF: _bC_s24+27-p
		LDA		#$F8 
		STA		word_4
		STA		word_4+1
		STA		word_6
		STA		word_6+1
		JMP		loc_12AB81

; =============== S U B	R O U T	I N E =======================================
sub_12AC69:				; CODE XREF: _bC_s24+39-p
		LDA		#8
		STA		word_4
		LDA		#$18
		STA		word_4+1
		LDA		#$26 
		JSR		_bC_sA
		JMP		sub_1742B0

; =============== S U B	R O U T	I N E =======================================
sub_12AC79:				; CODE XREF: _bC_s24+33-p
		LDA		#0
		STA		word_3C
		STA		word_3C+1
		LDA		#$18
		STA		word_3E
		LDA		#$20 
		STA		word_3E+1
loc_12AC87:				; CODE XREF: sub_12AC79+2D-j
					; sub_12AC79+6F-j
		JSR		sub_12AD00
		LDA		word_3E
		AND		#$38 
		LSR
		LSR
		LSR
		TAX
		INX
loc_12AC93:				; CODE XREF: sub_12AC79+25-j
		TXA
		PHA
		JSR		sub_12ACEB
		JSR		_vblank
		PLA
		TAX
		DEX
		BNE		loc_12AC93
		INC		word_3C
		LDA		word_3C
		AND		#$F
		BNE		loc_12AC87
		LDX		word_3C+1
		LDA		byte_12ADF4,X
		CMP		#2
		BEQ		loc_12ACB8
		DEC		word_4
		DEC		word_4
		JMP		loc_12ACBC
loc_12ACB8:				; CODE XREF: sub_12AC79+36-j
		INC		word_4+1
		INC		word_4+1
loc_12ACBC:				; CODE XREF: sub_12AC79+3C-j
		LDX		#1
		LDA		word_3C
		CMP		#$11
		BCS		loc_12ACC6
		LDX		#5
loc_12ACC6:				; CODE XREF: sub_12AC79+49-j
		TXA
		JSR		_bC_sA
		JSR		sub_1742BA
		JSR		sub_12AD3F
		JSR		sub_12AE3D
		INC		word_3C+1
		LDA		word_3C
		AND		#$10
		BEQ		loc_12ACE4
		LDA		word_3E+1
		STA		word_3E
		CLC
		ADC		#8
		STA		word_3E+1
loc_12ACE4:				; CODE XREF: sub_12AC79+60-j
		LDA		word_3C
		CMP		#$70 
		BCC		loc_12AC87
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12ACEB:				; CODE XREF: sub_12AC79+1C-p
		LDX		word_3E
		CPX		#$30 
		BCS		locret_12ACFF
		JSR		sub_12A93B
		TXA
		CMP		word_3E+1
		BCC		loc_12ACFD
		LDA		word_3E
		AND		#$38 
loc_12ACFD:				; CODE XREF: sub_12ACEB+C-j
		STA		word_3E
locret_12ACFF:				; CODE XREF: sub_12ACEB+4-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AD00:				; CODE XREF: sub_12AC79:loc_12AC87-p
		LDY		#$3C 
		LDX		word_3C+1
		LDA		byte_12ADF4,X
		CMP		#2
		BEQ		loc_12AD17
		JSR		sub_12AD23
		JSR		sub_12AD23
		JSR		sub_12AD23
		JMP		sub_12AD23
loc_12AD17:				; CODE XREF: sub_12AD00+9-j
		JSR		sub_12AD31
		JSR		sub_12AD31
		JSR		sub_12AD31
		JMP		sub_12AD31

; =============== S U B	R O U T	I N E =======================================
sub_12AD23:				; CODE XREF: sub_12AD00+B-p
					; sub_12AD00+E-p sub_12AD00+11-p
					; sub_12AD00+14-j
		LDX		#$48 
		JSR		sub_1741FD
		DEC		word_4A+1
		LDX		#$48 
		JSR		sub_174204
		INY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AD31:				; CODE XREF: sub_12AD00:loc_12AD17-p
					; sub_12AD00+1A-p sub_12AD00+1D-p
					; sub_12AD00+20-j
		LDX		#$48 
		JSR		sub_1741FD
		INC		byte_48
		LDX		#$48 
		JSR		sub_174204
		INY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AD3F:				; CODE XREF: sub_12AC79+54-p
		LDA		word_3C+1
		ASL
		ASL
		CLC
		ADC		#$18
		TAY
		LDX		#$48 
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		STY		byte_46
		LDA		word_3C+1
		TAX
		CLC
		ADC		#8
		STA		byte_45
		LDA		byte_12ADF4,X
		CMP		#2
		BEQ		loc_12AD7D
		LDX		#3
loc_12AD6C:				; CODE XREF: sub_12AD3F+3A-j
		LDA		byte_48,X
		SEC
		SBC		#$10
		STA		byte_48,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_12AD6C
		BCS		loc_12AD8E
loc_12AD7D:				; CODE XREF: sub_12AD3F+29-j
		LDX		#0
loc_12AD7F:				; CODE XREF: sub_12AD3F+4D-j
		LDA		byte_48,X
		CLC
		ADC		#$10
		STA		byte_48,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_12AD7F
loc_12AD8E:				; CODE XREF: sub_12AD3F+3C-j
		JSR		sub_12ADC6
		LDY		byte_46
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12AD96:				; CODE XREF: _bC_s24+2D-p
		LDA		#$10
		STA		word_4
		LDA		#$10
		STA		word_4+1
		JSR		sub_12ADB7
		LDY		#$18
		JSR		sub_12ADC6
		LDY		#$18
		STY		byte_46
		LDA		#8
		STA		byte_45
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12ADB1:				; CODE XREF: _bC_s24+2A-p
		JSR		sub_12ADB7
		JMP		sub_12ADC4

; =============== S U B	R O U T	I N E =======================================
sub_12ADB7:				; CODE XREF: sub_12AB1E-p sub_12AD96+8-p
					; sub_12ADB1-p
		LDX		#0
loc_12ADB9:				; CODE XREF: sub_12ADB7+A-j
		LDA		byte_12ADE4,X
		STA		byte_48,X
		INX
		CPX		#$10
		BNE		loc_12ADB9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12ADC4:				; CODE XREF: sub_12ADB1+3-j
					; sub_12ADD7+B-j
		LDY		#$3C 

; =============== S U B	R O U T	I N E =======================================
sub_12ADC6:				; CODE XREF: sub_12AB1E+5-p
					; sub_12AD3F:loc_12AD8E-p sub_12AD96+D-p
		LDX		#$48 
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JMP		sub_174204

; =============== S U B	R O U T	I N E =======================================
sub_12ADD7:				; CODE XREF: _bC_s24+36-p
		LDX		#0
		LDA		#$F8 
loc_12ADDB:				; CODE XREF: sub_12ADD7+9-j
		STA		byte_48,X
		INX
		CPX		#$10
		BNE		loc_12ADDB
		BEQ		sub_12ADC4
byte_12ADE4:
		.BYTE $7F,$F4,	1,$80,$7F,$F5,	1,$88,$87,$F5,$81,$80,$87,$F4,$81,$88
					; DATA XREF: sub_12ADB7:loc_12ADB9-r
byte_12ADF4:
		.BYTE	3,  3,	2,  3,	2,  3,	2,  2 ;	DATA XREF: sub_12AC79+31-r
					; sub_12AD00+4-r sub_12AD3F+24-r
byte_12ADFC:
		.BYTE	1,  0,	1,  0,	1,  0,	1,  0,	1,  2,	3,  2,	3,  2,	0,  4
					; DATA XREF: sub_12AE45+7-r
		.BYTE	5
word_12AE0D:
		.WORD  $1F1,$41F0, $1F0,$41F1, $1F4, $1F5,$81F5,$81F4
					; DATA XREF: sub_12AE45+18-r
					; sub_12AE45+1D-r
		.WORD  $1F3, $1F5, $1F0, $1F2,$C1F2,$C1F0,$C1F5,$C1F3
		.WORD  $1FA, $1FB, $1F6, $1F7, $1FC, $1FD, $1F8, $1F9

; =============== S U B	R O U T	I N E =======================================
sub_12AE3D:				; CODE XREF: sub_12AC79+57-p
		LDY		#$3C 
		STY		byte_46
		LDA		word_3C+1
		STA		byte_45

; =============== S U B	R O U T	I N E =======================================
sub_12AE45:				; CODE XREF: sub_12AB12+9-j
					; sub_12AB1E+10-j sub_12AD3F+54-j
					; sub_12AD96+18-j sub_12AE45+2B-j
		LDX		#$48 
		JSR		sub_1741FD
		LDX		byte_45
		LDA		byte_12ADFC,X
		ASL
		ASL
		ASL
		STA		byte_47
		TYA
		SEC
		SBC		byte_46
		ASL
		CLC
		ADC		byte_47
		TAX
		LDA		word_12AE0D,X
		STA		byte_49
		LDA		word_12AE0D+1,X
		STA		word_4A
		LDX		#$48 
		JSR		sub_174204
		INY
		TYA
		AND		#3
		BNE		sub_12AE45
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AE73:				; CODE XREF: _bC_s24+15-p
		LDA		#$F
		STA		_tmp21+2
		LDA		#0
		STA		byte_24
		STA		byte_25
		JMP		sub_17415B

; =============== S U B	R O U T	I N E =======================================
sub_12AE80:				; CODE XREF: _bC_s24+41-p
		JSR		sub_174DF6
		LDA		#0
		STA		word_3E
		LDA		#$F
		STA		word_3E+1
		LDA		#$60 
		STA		word_40
		LDA		#6
		STA		word_40+1

; =============== S U B	R O U T	I N E =======================================
sub_12AE93:				; CODE XREF: sub_129EBC+2C-j
					; sub_129EEB+B-p sub_129EEB+19-j
		LDX		#0
		STX		word_3C
loc_12AE97:				; CODE XREF: sub_12AE93+62-j
		LDA		word_3C
		ASL
		TAY
		LDA		word_12AEF8,Y
		STA		word_3C+1
		TAX
loc_12AEA1:				; CODE XREF: sub_12AE93+1E-j
		LDA		byte_7800,X
		AND		word_12AEF8+1,Y
		STA		byte_7800,X
		TXA
		CLC
		ADC		#8
		TAX
		CPX		word_40
		BCC		loc_12AEA1
		LDX		byte_6D8
loc_12AEB6:				; CODE XREF: sub_12AE93+43-j
		LDA		word_3E+1
		STA		byte_300,X
		INX
		LDA		word_3C+1
		TAY
		CLC
		ADC		word_3E
		STA		byte_300,X
		INX
		LDA		byte_7800,Y
		STA		byte_300,X
		INX
		TYA
		CLC
		ADC		#8
		TAY
		STY		word_3C+1
		CPY		word_40
		BCC		loc_12AEB6
		STX		byte_6D8
		LDA		word_40
		LSR
		LSR
		LSR
		CLC
		ADC		byte_6D9
		STA		byte_6D9
		JSR		sub_1742BA
		LDX		word_40+1
		JSR		_vblank_count
		INC		word_3C
		LDA		word_3C
		CMP		#$40 
		BNE		loc_12AE97
		RTS
word_12AEF8:
		.WORD $7F01,$7F06,$BF03,$7F00,$FE05,$FE01,$FD07,$F702
					; DATA XREF: sub_12AE93+8-r
					; sub_12AE93+11-r
		.WORD $BF06,$7F03,$FE06,$BF04,$F707,$FD04,$F701,$7F07
		.WORD $7F02,$FB07,$F700,$7F05,$FB04,$FD01,$FB02,$F706
		.WORD $FB05,$FB06,$DF03,$FE04,$BF01,$FD02,$FE00,$EF02
		.WORD $FE03,$7F04,$EF01,$BF05,$F704,$FE07,$EF00,$EF06
		.WORD $F705,$DF01,$FE02,$BF07,$BF02,$FD06,$FD05,$F703
		.WORD $FD03,$FB03,$FD00,$DF04,$EF05,$FB00,$FB01,$DF00
		.WORD $DF02,$DF07,$DF06,$EF03,$EF07,$EF04,$DF05,$BF00

; =============== S U B	R O U T	I N E =======================================
sub_12AF78:				; CODE XREF: _bC_s24+44-p
		LDA		#$18
		STA		word_3C
		LDA		#$F8 
		STA		word_3C+1
		STA		word_3E
		STA		word_3E+1
		STA		word_40
		LDY		word_3C
loc_12AF88:				; CODE XREF: sub_12AF78+18-j
		LDX		#$3D 
		JSR		sub_174204
		INY
		CPY		#$40 
		BNE		loc_12AF88
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
_bC_s14:				; CODE XREF: sub_174E52+2D-P
					; DATA XREF: BANKC:8028-o
		LDA		byte_6E1	; code used at a000
		BNE		loc_12AFA9	; code used at a000
		JSR		sub_12B041	; code used at a000
		JSR		sub_12B080	; code used at a000
		JSR		sub_12B0B0	; code used at a000
		JSR		sub_12B01C	; code used at a000
		JSR		sub_12B0FA	; code used at a000
loc_12AFA9:				; CODE XREF: _bC_s14+3-j
		LDA		byte_9A		; code used at a000
		BNE		loc_12AFB3	; code used at a000
		JSR		_bC_s29		; code used at a000
		JMP		locret_12AFC6	; code used at a000
loc_12AFB3:				; CODE XREF: _bC_s14+16-j
		LDX		#0		; code used at a000
		LDA		byte_8B		; code used at a000
loc_12AFB7:				; CODE XREF: _bC_s14+2A-j
		CMP		byte_12AFC7,X	; code used at a000
		BEQ		loc_12AFC3	; code used at a000
		INX				; code used at a000
		CPX		#$17		; code used at a000
		BNE		loc_12AFB7	; code used at a000
		BEQ		locret_12AFC6	; code used at a000
loc_12AFC3:				; CODE XREF: _bC_s14+25-j
		JSR		sub_12AFDE	; code used at a000
locret_12AFC6:				; CODE XREF: _bC_s14+1B-j _bC_s14+2C-j
		RTS				; code used at a000
byte_12AFC7:
		.BYTE $BD,$D2,$61,$4F,	2,  1,$75, $F, $C,$7A,$CB,  8,$B2,$A3,$CC,$C3
					; DATA XREF: _bC_s14:loc_12AFB7-r
		.BYTE $41,$47,$EB,$EC,$EE,$BB,$6B ; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12AFDE:				; CODE XREF: _bC_s14:loc_12AFC3-p
		TXA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_12AFEE,X	; code used at a000
		STA		word_3C		; code used at a000
		LDA		off_12AFEE+1,X	; code used at a000
		STA		word_3C+1	; code used at a000
		JMP		(word_3C)	; code used at a000
off_12AFEE:
		.WORD sub_12A4B6	; DATA XREF: sub_12AFDE+3-r
					; sub_12AFDE+8-r
		.WORD sub_12B189	; data used at a000
		.WORD sub_12B200
		.WORD sub_12B241
		.WORD sub_12B263
		.WORD sub_12B29D	; data used at a000
		.WORD sub_12B2BD
		.WORD sub_12B2EB
		.WORD sub_12B3D1	; data used at a000
		.WORD sub_12B493	; data used at a000
		.WORD sub_12B518	; data used at a000
		.WORD sub_12B5AD	; data used at a000
		.WORD sub_12B6AF
		.WORD sub_12B7C8	; data used at a000
		.WORD sub_12B7E1	; data used at a000
		.WORD sub_12B97E	; data used at a000
		.WORD sub_12B999	; data used at a000
		.WORD sub_12B99D	; data used at a000
		.WORD sub_12908F	; data used at a000
		.WORD sub_1290E1	; data used at a000
		.WORD sub_129120	; data used at a000
		.WORD sub_129162
		.WORD sub_12B9A1	; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B01C:				; CODE XREF: _bC_s14+E-p
		LDA		byte_2C		; code used at a000
		BNE		locret_12B040	; code used at a000
		LDA		byte_60C9	; code used at a000
		AND		#$3F       ; code used at a000
		BEQ		locret_12B040	; code used at a000
		DEC		byte_60C9
		LDA		byte_60C9
		AND		#$3F 
		BNE		locret_12B040
		JSR		_vblank
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		JSR		sub_174CCF
		BRK
		.BYTE $AF, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
locret_12B040:				; CODE XREF: sub_12B01C+2-j
					; sub_12B01C+9-j sub_12B01C+13-j
					; sub_12B041+2-j sub_12B041+8-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B041:				; CODE XREF: _bC_s14+5-p
		LDA		byte_2C		; code used at a000
		BNE		locret_12B040	; code used at a000
		LDA		byte_AC		; code used at a000
		AND		#$1F		; code used at a000
		BEQ		locret_12B040	; code used at a000
		LDA		byte_9A
		BEQ		loc_12B070
		LDA		byte_8B
		CMP		#$61 
		BNE		loc_12B070
		LDA		byte_30
		CMP		#$E
		BNE		loc_12B070
		LDA		byte_31
		CMP		#$D
		BNE		loc_12B070
		LDA		byte_6DF
		CMP		#$78 
		BCS		loc_12B070
		LDA		byte_AC
		AND		#$E0 
		ORA		#1
		STA		byte_AC
loc_12B070:				; CODE XREF: sub_12B041+C-j
					; sub_12B041+12-j sub_12B041+18-j
					; sub_12B041+1E-j sub_12B041+25-j
		LDA		byte_AC
		SEC
		SBC		#1
		STA		byte_AC
		AND		#$1F
		BEQ		loc_12B07C
		RTS
loc_12B07C:				; CODE XREF: sub_12B041+38-j
		JSR		sub_12A312
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B080:				; CODE XREF: _bC_s14+8-p
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		word_3C		; code used at a000
		JSR		sub_12B0EB	; code used at a000
loc_12B08A:				; CODE XREF: sub_12B080+23-j
		JSR		sub_12B0A6	; code used at a000
		BPL		loc_12B09D	; code used at a000
		LDY		word_3C+1	; code used at a000
		LDA		byte_B0,Y	; code used at a000
		AND		#2		; code used at a000
		BEQ		loc_12B09D	; code used at a000
		STY		byte_CE		; code used at a000
		JSR		_sram_bank0_sub4 ; code	used at	a000
loc_12B09D:				; CODE XREF: sub_12B080+D-j
					; sub_12B080+16-j
		INC		word_3C+1	; code used at a000
		LDA		word_3C+1	; code used at a000
		CMP		word_3C		; code used at a000
		BNE		loc_12B08A	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B0A6:				; CODE XREF: sub_12B080:loc_12B08A-p
					; sub_12B0B0:loc_12B0C4-p
		LDX		word_3E		; code used at a000
		INC		word_3E		; code used at a000
		INC		word_3E		; code used at a000
		LDA		byte_73D,X	; code used at a000
locret_12B0AF:				; CODE XREF: sub_12B0B0+2-j
					; sub_12B0B0+6-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B0B0:				; CODE XREF: _bC_s14+B-p
		LDA		byte_9A		; code used at a000
		BNE		locret_12B0AF	; code used at a000
		LDA		byte_2C		; code used at a000
		BNE		locret_12B0AF	; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		word_3C		; code used at a000
		JSR		sub_12B0EB	; code used at a000
		STA		word_3E+1	; code used at a000
loc_12B0C4:				; CODE XREF: sub_12B0B0+31-j
		JSR		sub_12B0A6	; code used at a000
		BPL		loc_12B0DB	; code used at a000
		LDY		word_3E+1	; code used at a000
		LDA		byte_B0,Y	; code used at a000
		AND		#4		; code used at a000
		BEQ		loc_12B0DB	; code used at a000
		STY		byte_CE
		JSR		_sram_bank0_sub1A
		LDA		#$FF
		STA		word_3C+1
loc_12B0DB:				; CODE XREF: sub_12B0B0+17-j
					; sub_12B0B0+20-j
		INC		word_3E+1	; code used at a000
		LDA		word_3E+1	; code used at a000
		CMP		word_3C		; code used at a000
		BNE		loc_12B0C4	; code used at a000
		LDA		word_3C+1	; code used at a000
		BEQ		locret_12B0EA	; code used at a000
		BRK
		.BYTE $A9, 7		; ofs 0x0000808c, -> dst _b0_s46
locret_12B0EA:				; CODE XREF: sub_12B0B0+35-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B0EB:				; CODE XREF: sub_12B080+7-p
					; sub_12B0B0+F-p
		LDA		#1		; code used at a000
		STA		byte_CF		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_D0		; code used at a000
		STA		byte_D1		; code used at a000
		STA		word_3C+1	; code used at a000
		STA		word_3E		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B0FA:				; CODE XREF: _bC_s14+11-p
		JSR		_sram_b0_s31	; code used at a000
		LDY		#0		; code used at a000
loc_12B0FF:				; CODE XREF: sub_12B0FA+19-j
		LDA		byte_93,Y	; code used at a000
		AND		#$1F		; code used at a000
		TAX				; code used at a000
		LDA		byte_6DE0,X	; code used at a000
		CMP		#5		; code used at a000
		BEQ		locret_12B123	; code used at a000
		CMP		#6		; code used at a000
		BEQ		locret_12B123	; code used at a000
		INY				; code used at a000
		CPY		word_4		; code used at a000
		BNE		loc_12B0FF	; code used at a000
		LDA		byte_AC		; code used at a000
		AND		#$A0       ; code used at a000
		CMP		#$A0       ; code used at a000
		BNE		locret_12B123	; code used at a000
		LDA		byte_AC		; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_AC		; code used at a000
locret_12B123:				; CODE XREF: sub_12B0FA+10-j
					; sub_12B0FA+14-j sub_12B0FA+21-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s29:				; CODE XREF: _bC_s14+18-p
					; DATA XREF: BANKC:8052-o
		LDA		byte_60B6	; code used at a000
		AND		#$40       ; code used at a000
		BNE		locret_12B163	; code used at a000
		LDA		byte_2A		; code used at a000
		CMP		#$56       ; code used at a000
		BNE		locret_12B163	; code used at a000
		LDA		byte_2B		; code used at a000
		CMP		#$48       ; code used at a000
		BNE		locret_12B163	; code used at a000
		LDA		byte_2C
		CMP		#1
		BNE		locret_12B163
		JSR		sub_174CCF
		BRK
		.BYTE $A, $77		; _msg_m00_arg1
		BRK
		.BYTE 0, $2F		; _syscall12
		BRK
		.BYTE $C, $2F		; _syscall12
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#0
		STA		byte_6EB
		LDA		#$C
		STA		byte_6EF
		LDA		#$40 
		STA		byte_6E1
		LDA		#$A8 
		STA		byte_6E2
locret_12B163:				; CODE XREF: _bC_s29+5-j _bC_s29+B-j
					; _bC_s29+11-j _bC_s29+17-j _bC_s2A+4-j
					; _bC_s2A+A-j _bC_s2A+11-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s2A:				; CODE XREF: sub_175049+6F-P
					; DATA XREF: BANKC:8054-o
		LDA		byte_8B		; code used at a000
		CMP		#$2F       ; code used at a000
		BNE		locret_12B163	; code used at a000
		LDA		byte_31
		CMP		#$11
		BNE		locret_12B163
		LDA		byte_110
		CMP		#$31 
		BNE		locret_12B163
		JSR		sub_174CCF
		BRK
		.BYTE $A4, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#7
		STA		byte_6E1
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B189:				; DATA XREF: BANKC:AFF0-o
		LDA		byte_31		; ind code used	at a000
		CMP		#$1A		; code used at a000
		BNE		locret_12B1A1	; code used at a000
		JSR		sub_174CCF
		BRK
		.BYTE $41, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		sub_12B1A2

; =============== S U B	R O U T	I N E =======================================
_bC_s20:				; CODE XREF: _b0_s5D:loc_AC4E-P
					; sub_AC9F:loc_ACA2-P sub_AEC0+8-P
					; sub_AF9A+64-P	_b6_sE+9-P _b6_s1F+5-P
					; _b7_s19+17-P _b7_s19+97-P _b7_s1A+35-P
					; _bA_sF+42-P _bA_s10+1B-P
					; sub_1280A6+188-P sub_1280A6+1F8-P
					; _bC_s10:loc_1291F6-P _bC_s11+1C-P
					; sub_12923C+64-P sub_1292B0+C-P
					; _bC_s22+35-P _bC_s26+57-P
					; sub_12A312+36-j _bC_s29+28-P
					; sub_12B3D1+6F-p sub_12B6AF+D4-j
					; sub_12B6AF+F6-p _npc_hndl28+19-P
					; sub_174D4F+3-P
					; DATA XREF: BANKC:8040-o
		LDA		#0		; code used at a000
		STA		byte_8E		; code used at a000
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
locret_12B1A1:				; CODE XREF: sub_12B189+4-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B1A2:				; CODE XREF: sub_12B189+F-j
		LDA		byte_30
		CMP		#$1A
		BEQ		loc_12B1B2
		CMP		#3
		BEQ		loc_12B1CB
loc_12B1AC:				; CODE XREF: sub_12B1A2+2F-j
		LDA		#8
		STA		byte_6DF3
		RTS
loc_12B1B2:				; CODE XREF: sub_12B1A2+4-j
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		BRK
		.BYTE $AE, $77		; _msg_m00_arg1
		LDA		byte_60B7
		AND		#8
		BNE		loc_12B1F9
		LDA		#8
		ORA		byte_60B7
		STA		byte_60B7
		BNE		loc_12B1FC
loc_12B1CB:				; CODE XREF: sub_12B1A2+8-j
		LDA		byte_60B7
		TAX
		AND		#8
		BEQ		loc_12B1AC
		TXA
		AND		#$10
		BNE		loc_12B1F9
		TXA
		ORA		#$10
		STA		byte_60B7
		BRK
		.BYTE $A3, $2F		; _syscall12
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		BRK
		.BYTE $80, $77		; _msg_m00_arg1
		LDA		#$13
		STA		byte_753A
		STA		byte_753B
		STA		byte_7558
		STA		byte_7559
		BNE		loc_12B1FC
loc_12B1F9:				; CODE XREF: sub_12B1A2+1D-j
					; sub_12B1A2+34-j
		BRK
		.BYTE $40, $67		; _msg_m00_arg0
loc_12B1FC:				; CODE XREF: sub_12B1A2+27-j
					; sub_12B1A2+55-j
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B200:				; DATA XREF: BANKC:AFF2-o
		LDA		byte_30
		CMP		#$E
		BNE		locret_12B21A
		LDA		byte_31
		CMP		#$D
		BNE		locret_12B21A
		LDA		byte_60CD
		AND		#$20 
		BNE		locret_12B21A
		LDA		byte_6DF
		CMP		#$78 
		BCC		loc_12B21B
locret_12B21A:				; CODE XREF: sub_12B200+4-j
					; sub_12B200+A-j sub_12B200+11-j
		RTS
loc_12B21B:				; CODE XREF: sub_12B200+18-j
		JSR		sub_174CCF
		LDA		byte_60B9
		AND		#1
		BEQ		loc_12B22B
		BRK
		.BYTE $70, $77		; _msg_m00_arg1
		JMP		loc_12B236
loc_12B22B:				; CODE XREF: sub_12B200+23-j
		LDA		byte_60B9
		ORA		#1
		STA		byte_60B9
		BRK
		.BYTE $6A, $77		; _msg_m00_arg1
loc_12B236:				; CODE XREF: sub_12B200+28-j
		BRK
		.BYTE $6B, $77		; _msg_m00_arg1
		LDA		#$C
		JSR		_bC_s0
		JMP		sub_174D4F

; =============== S U B	R O U T	I N E =======================================
sub_12B241:				; DATA XREF: BANKC:AFF4-o
		LDA		byte_30
		CMP		#$B
		BCC		locret_12B262
		LDA		byte_31
		AND		#$FE 
		CMP		#$A
		BNE		locret_12B262
		LDA		byte_111
		CMP		#7
		BNE		locret_12B262
		LDA		byte_6DF
		CMP		#$78 
		BCC		locret_12B262
		LDA		#$13
		JSR		_bC_s0
locret_12B262:				; CODE XREF: sub_12B241+4-j
					; sub_12B241+C-j sub_12B241+13-j
					; sub_12B241+1A-j sub_12B263+4-j
					; sub_12B263+B-j sub_12B263+11-j
					; sub_12B263+27-j sub_12B263+2F-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B263:				; DATA XREF: BANKC:AFF6-o
		LDA		byte_31
		CMP		#$25 
		BNE		locret_12B262
		LDA		byte_644
		CMP		#2
		BEQ		locret_12B262
		LDA		byte_AC
		AND		#$1F
		BNE		locret_12B262
		LDX		#$14
		LDY		#$14
		LDA		byte_6DF
		CMP		#$78 
		BCC		loc_12B285
		LDX		#$14
		LDY		#$35 
loc_12B285:				; CODE XREF: sub_12B263+1C-j
		LDA		byte_30
		CMP		byte_100,X
		BEQ		locret_12B262
		CMP		#$D
		BEQ		loc_12B298
		CMP		#$E
		BNE		locret_12B262
		TYA
		JMP		_bC_s0
loc_12B298:				; CODE XREF: sub_12B263+2B-j
		INY
		TYA
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12B29D:				; DATA XREF: BANKC:AFF8-o
		BIT		byte_60B7	; ind code used	at a000
		BVC		locret_12B2BC	; code used at a000
		LDA		byte_30		; code used at a000
		AND		#$FE       ; code used at a000
		CMP		#$10		; code used at a000
		BNE		locret_12B2BC	; code used at a000
		LDA		byte_31		; code used at a000
		CMP		#$2D       ; code used at a000
		BNE		locret_12B2BC	; code used at a000
		LDA		byte_128	; code used at a000
		CMP		#$F		; code used at a000
		BNE		locret_12B2BC	; code used at a000
		LDA		#$16		; code used at a000
		JSR		_bC_s0		; code used at a000
locret_12B2BC:				; CODE XREF: sub_12B29D+3-j
					; sub_12B29D+B-j sub_12B29D+11-j
					; sub_12B29D+18-j sub_12B2BD+5-j
					; sub_12B2BD+11-j sub_12B2BD+17-j
					; sub_12B2BD+1D-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B2BD:				; DATA XREF: BANKC:AFFA-o
		LDA		byte_644
		CMP		#3
		BNE		locret_12B2BC
		LDA		byte_60CD
		CMP		#$FF
		BNE		loc_12B2D0
		LDA		byte_60B7
		BPL		locret_12B2BC
loc_12B2D0:				; CODE XREF: sub_12B2BD+C-j
		LDA		byte_30
		CMP		#$1C
		BNE		locret_12B2BC
		LDA		byte_31
		CMP		#$18
		BNE		locret_12B2BC
		LDY		#$17
		LDA		byte_6DF
		CMP		#$78 
		BCC		loc_12B2E7
		LDY		#$37 
loc_12B2E7:				; CODE XREF: sub_12B2BD+26-j
		TYA
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12B2EB:				; DATA XREF: BANKC:AFFC-o
		LDA		byte_30
		CMP		#$E
		BNE		locret_12B30C
		LDA		byte_31
		CMP		#3
		BNE		locret_12B30C
		LDA		byte_60BA
		AND		#2
		BNE		loc_12B30D
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		JSR		sub_174CCF
		BRK
		.BYTE $26, $3F		; _msg_m00_arg6
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
locret_12B30C:				; CODE XREF: sub_12B2EB+4-j
					; sub_12B2EB+A-j
		RTS
loc_12B30D:				; CODE XREF: sub_12B2EB+11-j
		LDA		#0
		STA		byte_6BC
		STA		byte_644
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		LDA		byte_60BA
		AND		#$FC 
		STA		byte_60BA
		LDA		#0
		JSR		sub_12B353
		JSR		sub_174CCF
		JSR		_sram_b0_s31
		LDA		word_4
		CMP		#1
		BEQ		loc_12B34C
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F
		LDA		#1
		STA		byte_D2
		LDA		word_4
		BNE		loc_12B346
		BRK
		.BYTE $29, $3F		; _msg_m00_arg6
		JMP		loc_12B349
loc_12B346:				; CODE XREF: sub_12B2EB+53-j
		BRK
		.BYTE $2A, $3F		; _msg_m00_arg6
loc_12B349:				; CODE XREF: sub_12B2EB+58-j
		BRK
		.BYTE $2B, $3F		; _msg_m00_arg6
loc_12B34C:				; CODE XREF: sub_12B2EB+44-j
		BRK
		.BYTE $2C, $3F		; _msg_m00_arg6
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B353:				; CODE XREF: sub_12B2EB+37-p
					; sub_12B3D1+96-p
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_12B3CD,X	; code used at a000
		STA		word_6E		; code used at a000
		LDA		off_12B3CD+1,X	; code used at a000
		STA		word_6E+1	; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		JSR		sub_12A6FD	; code used at a000
		LDA		word_4		; code used at a000
		SEC				; code used at a000
		SBC		#1		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		STA		word_6C		; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		SEC				; code used at a000
		SBC		word_6C		; code used at a000
		STA		word_6C		; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_6ABE	; code used at a000
		PHA				; code used at a000
loc_12B382:				; CODE XREF: sub_12B353+3E-j
		DEC		byte_6ABE	; code used at a000
		BEQ		loc_12B393	; code used at a000
		JSR		_bC_s38		; code used at a000
		LDA		word_6C		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		word_6C		; code used at a000
		BNE		loc_12B382	; code used at a000
loc_12B393:				; CODE XREF: sub_12B353+32-j
		PLA				; code used at a000
		SEC				; code used at a000
loc_12B395:				; code used at a000
		SBC		#1
		ASL		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		DEY				; code used at a000
		BMI		loc_12B3AF	; code used at a000
loc_12B39F:				; CODE XREF: sub_12B353+5A-j
		LDA		#$FF		; code used at a000
loc_12B3A1:				; code used at a000
		STA.WX		word_FE+1,X
		LDA		(word_6E),Y	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_104,Y	; code used at a000
		DEX				; code used at a000
		DEY				; code used at a000
		BPL		loc_12B39F	; code used at a000
loc_12B3AF:				; CODE XREF: sub_12B353+4A-j
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_6ABE	; code used at a000
		LDA		#4		; code used at a000
		STA		word_6C		; code used at a000
loc_12B3BB:				; CODE XREF: sub_12B353+77-j
		DEC		byte_6ABE	; code used at a000
		BEQ		locret_12B3CC	; code used at a000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		LDA		word_6C		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		word_6C		; code used at a000
		BNE		loc_12B3BB	; code used at a000
locret_12B3CC:				; CODE XREF: sub_12B353+6B-j
		RTS				; code used at a000
off_12B3CD:
		.WORD byte_12BA57	; DATA XREF: sub_12B353+2-r
					; sub_12B353+7-r
		.WORD byte_12BB12	; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B3D1:				; DATA XREF: BANKC:AFFE-o
		LDA		byte_60B7	; ind code used	at a000
		BPL		locret_12B42D	; code used at a000
		LDA		byte_30		; code used at a000
		CMP		#7		; code used at a000
		BNE		locret_12B42D	; code used at a000
		LDA		byte_31		; code used at a000
		CMP		#$12		; code used at a000
		BNE		locret_12B42D	; code used at a000
		LDA		byte_60BA	; code used at a000
		AND		#$10		; code used at a000
		BNE		loc_12B453	; code used at a000
		LDA		byte_144	; code used at a000
		BMI		locret_12B42D	; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_6A62	; code used at a000
		CMP		#1		; code used at a000
		BEQ		loc_12B443	; code used at a000
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		LDA		#$44       ; code used at a000
		STA		word_6C		; code used at a000
		LDA		byte_147	; code used at a000
		AND		#3		; code used at a000
		BNE		loc_12B41C	; code used at a000
		LDA		byte_147	; code used at a000
		AND		#$FC       ; code used at a000
		ORA		#1		; code used at a000
		JSR		loc_12B448	; code used at a000
		LDA		byte_147	; code used at a000
		AND		#$FC       ; code used at a000
		ORA		#2		; code used at a000
		JSR		loc_12B448	; code used at a000
loc_12B41C:				; CODE XREF: sub_12B3D1+35-j
		JSR		sub_174DF2	; code used at a000
		BRK
		.BYTE $99, $3F		; _msg_m00_arg6
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B42E	; code used at a000
		BRK
		.BYTE $9A, $3F		; _msg_m00_arg6
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
locret_12B42D:				; CODE XREF: sub_12B3D1+3-j
					; sub_12B3D1+9-j sub_12B3D1+F-j
					; sub_12B3D1+1B-j
		RTS				; code used at a000
loc_12B42E:				; CODE XREF: sub_12B3D1+54-j
		LDA		#0		; code used at a000
		JSR		sub_12A6C8	; code used at a000
		LDA		#$64       ; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		STA		word_6		; code used at a000
		JSR		_sram_bank0_sub1D ; code used at a000
		JSR		_bC_s20		; code used at a000
loc_12B443:				; CODE XREF: sub_12B3D1+27-j
		LDA		#$1C		; code used at a000
		JMP		_bC_s0		; code used at a000
loc_12B448:				; CODE XREF: sub_12B3D1+3E-p
					; sub_12B3D1+48-p
		STA		byte_147	; code used at a000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		LDX		#$A		; code used at a000
		JMP		_vblank_count	; code used at a000
loc_12B453:				; CODE XREF: sub_12B3D1+16-j
		LDA		byte_6A62	; code used at a000
		CMP		#1		; code used at a000
		BEQ		locret_12B492	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6BC	; code used at a000
		STA		byte_644	; code used at a000
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		LDA		#1		; code used at a000
		JSR		sub_12B353	; code used at a000
		JSR		sub_174CCF	; code used at a000
		LDA		#1		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_b0_s2F	; code used at a000
		LDA		#1		; code used at a000
		STA		byte_D2		; code used at a000
		STA		byte_D4		; code used at a000
		LDA		word_4		; code used at a000
		BEQ		loc_12B484	; code used at a000
		BRK
		.BYTE $AA, $3F		; _msg_m00_arg6
		JMP		loc_12B487
loc_12B484:				; CODE XREF: sub_12B3D1+AB-j
		BRK
		.BYTE $A5, $3F		; _msg_m00_arg6
loc_12B487:				; CODE XREF: sub_12B3D1:loc_12B481-j
		JSR		sub_174D4F	; code used at a000
		LDA		byte_60B7	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_60B7	; code used at a000
locret_12B492:				; CODE XREF: sub_12B3D1+87-j
					; sub_12B493+5-j sub_12B493+B-j
					; sub_12B493+10-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B493:				; DATA XREF: BANKC:B000-o
		LDA		byte_60BA	; ind code used	at a000
		AND		#$10		; code used at a000
		BNE		locret_12B492	; code used at a000
		LDA		byte_30		; code used at a000
		CMP		#7		; code used at a000
		BNE		locret_12B492	; code used at a000
		LDA		byte_114	; code used at a000
		BMI		locret_12B492	; code used at a000
		LDA		byte_60BA	; code used at a000
		ORA		#$10		; code used at a000
		STA		byte_60BA	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $9D, $3F		; _msg_m00_arg6
		BRK
		.BYTE $9E, $3F		; _msg_m00_arg6
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B4BE	; code used at a000
		BRK
		.BYTE $9F, $3F		; _msg_m00_arg6
loc_12B4BE:				; CODE XREF: sub_12B493+26-j
		BRK
		.BYTE $A0, $3F		; _msg_m00_arg6
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		JSR		sub_174369	; code used at a000
		JSR		_ppu_screen_clear ; code used at a000
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JSR		sub_174DF2	; code used at a000
		JSR		_pal_fade_in	; code used at a000
		BRK
		.BYTE $A1, $3F		; _msg_m00_arg6
		JSR		sub_174369	; code used at a000
		LDA		#8		; code used at a000
		STA		byte_30		; code used at a000
		STA		byte_100	; code used at a000
		LDA		#3		; code used at a000
		STA		byte_31		; code used at a000
		STA		byte_101	; code used at a000
		LDA		#7		; code used at a000
		STA		byte_110	; code used at a000
		DEC		byte_111	; code used at a000
		DEC		byte_115	; code used at a000
		LDA		byte_113	; code used at a000
		AND		#$FC       ; code used at a000
		ORA		#1		; code used at a000
		STA		byte_113	; code used at a000
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		LDA		#0		; code used at a000
		STA		word_6C		; code used at a000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		JSR		sub_175B0E	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $A2, $3F		; _msg_m00_arg6
		JSR		sub_174D4F	; code used at a000
		LDA		#$1D		; code used at a000
		JMP		_bC_s0		; code used at a000
locret_12B517:				; CODE XREF: sub_12B518+5-j
					; sub_12B518+B-j sub_12B518+13-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B518:				; DATA XREF: BANKC:B002-o
		LDA		byte_60B9	; ind code used	at a000
		AND		#$10		; code used at a000
		BNE		locret_12B517	; code used at a000
		LDA		byte_30		; code used at a000
		CMP		#$E		; code used at a000
		BNE		locret_12B517	; code used at a000
		LDA		byte_31		; code used at a000
		AND		#$FE       ; code used at a000
		CMP		#$1C		; code used at a000
		BNE		locret_12B517	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $8A, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		byte_6DD	; code used at a000
		PHA				; code used at a000
		LDA		#3		; code used at a000
		STA		byte_6DD	; code used at a000
		LDA		#0		; code used at a000
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		PLA				; code used at a000
		STA		byte_6DD	; code used at a000
		LDA		#$80       ; code used at a000
		STA		byte_110	; code used at a000
		STA		byte_114	; code used at a000
		LDY		byte_31		; code used at a000
		INY				; code used at a000
		STY		byte_119	; code used at a000
		JSR		sub_174CBD	; code used at a000
		JSR		sub_174CCF	; code used at a000
		LDA		byte_6A65	; code used at a000
		BNE		loc_12B564	; code used at a000
		BRK
		.BYTE $8B, $77		; _msg_m00_arg1
loc_12B564:				; CODE XREF: sub_12B518+47-j
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		BRK
		.BYTE $8C, $77		; _msg_m00_arg1
		LDA		#$80       ; code used at a000
		STA		byte_118	; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		LDA		#$18		; code used at a000
		STA		word_6C		; code used at a000
		JSR		_bC_s38		; code used at a000
		LDY		byte_31		; code used at a000
		INY				; code used at a000
		STY		byte_11D	; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		LDA		#0		; code used at a000
		STA		word_6C		; code used at a000
		BRK
		.BYTE $DD, 7		; ofs 0x0014001a, -> dst _bD_sD
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$80       ; code used at a000
		STA		byte_11C	; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		LDA		#$1C		; code used at a000
		STA		word_6C		; code used at a000
		JSR		_bC_s38		; code used at a000
		LDA		byte_60B9	; code used at a000
		ORA		#$10		; code used at a000
		STA		byte_60B9	; code used at a000
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		BRK
		.BYTE 7, $2F		; _syscall12
locret_12B5AC:				; CODE XREF: sub_12B5AD+3-j
					; sub_12B5AD+1E-j sub_12B5AD+4B-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B5AD:				; DATA XREF: BANKC:B004-o
		LDA		byte_60C4	; ind code used	at a000
		BMI		locret_12B5AC	; code used at a000
		LDA		byte_30		; code used at a000
		CMP		#$14		; code used at a000
		BCC		loc_12B5F3	; code used at a000
		CMP		#$1E		; code used at a000
		BCS		loc_12B5F3	; code used at a000
		LDA		byte_31		; code used at a000
		CMP		#$1E		; code used at a000
		BCS		loc_12B5EA	; code used at a000
		CMP		#$1A		; code used at a000
		BNE		loc_12B5F3	; code used at a000
		LDA		byte_60C4	; code used at a000
		AND		#$1F		; code used at a000
		BNE		locret_12B5AC	; code used at a000
		LDX		#$10		; code used at a000
		STX		byte_79F4	; code used at a000
		INX				; code used at a000
		STX		byte_79F5	; code used at a000
		LDX		#$14		; code used at a000
		STX		byte_7A26	; code used at a000
		INX				; code used at a000
		STX		byte_7A27	; code used at a000
		LDA		#1		; code used at a000
		STA		byte_60C4	; code used at a000
		BRK
		.BYTE $95, $2F		; _syscall12
		JMP		loc_12B6A2	; code used at a000
loc_12B5EA:				; CODE XREF: sub_12B5AD+13-j
		LDA		byte_60C4	; code used at a000
		AND		#$80       ; code used at a000
		STA		byte_60C4	; code used at a000
		RTS				; code used at a000
loc_12B5F3:				; CODE XREF: sub_12B5AD+9-j
					; sub_12B5AD+D-j sub_12B5AD+17-j
		LDA		byte_60C4	; code used at a000
		AND		#$1F		; code used at a000
		BEQ		locret_12B5AC	; code used at a000
		INC		byte_60C4	; code used at a000
		LDA		byte_60C4	; code used at a000
		AND		#$1F		; code used at a000
		CMP		#$1B		; code used at a000
		BNE		loc_12B615	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $7F, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip	; code used at a000
		JMP		loc_12B61D	; code used at a000
byte_12B612:
		.BYTE  $E, $E, $E	; DATA XREF: sub_12B5AD+7A-r
					; data used at a000
loc_12B615:				; CODE XREF: sub_12B5AD+57-j
		CMP		#$1D		; code used at a000
		BEQ		loc_12B61D	; code used at a000
		CMP		#$1F		; code used at a000
		BNE		locret_12B682	; code used at a000
loc_12B61D:				; CODE XREF: sub_12B5AD+62-j
					; sub_12B5AD+6A-j
		LDA		byte_60C4	; code used at a000
		AND		#$1F		; code used at a000
		SEC				; code used at a000
		SBC		#$1B		; code used at a000
		LSR		; code used at a000
		TAX				; code used at a000
		LDA		byte_12B612,X	; code used at a000
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD	; code used at a000
		LDA		byte_60C4	; code used at a000
		CLC				; code used at a000
		ADC		#$20       ; code used at a000
		STA		byte_60C4	; code used at a000
		AND		#$60       ; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		CLC				; code used at a000
		ADC		#$E		; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		LDX		#word_4		; code used at a000
		LDA		byte_88		; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		#$16		; code used at a000
		LDY		#byte_74	; code used at a000
		JSR		_add_16_to_16	; code used at a000
		JSR		sub_12B672	; code used at a000
		JSR		sub_12B667	; code used at a000
		LDA		byte_60C4	; code used at a000
		AND		#$60       ; code used at a000
		CMP		#$60       ; code used at a000
		BEQ		sub_12B683	; code used at a000
		JMP		loc_12B6A2	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B667:				; CODE XREF: sub_12B5AD+AB-p
		LDA		word_4		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		word_4		; code used at a000
		BCC		sub_12B672	; code used at a000
		INC		word_4+1

; =============== S U B	R O U T	I N E =======================================
sub_12B672:				; CODE XREF: sub_12B5AD+A8-p
					; sub_12B667+7-j
		LDA		#$13		; code used at a000
		LDY		#0		; code used at a000
		STA		(word_4),Y	; code used at a000
		INY				; code used at a000
		STA		(word_4),Y	; code used at a000
		LDY		byte_88		; code used at a000
		STA		(word_4),Y	; code used at a000
		INY				; code used at a000
		STA		(word_4),Y	; code used at a000
locret_12B682:				; CODE XREF: sub_12B5AD+6E-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B683:				; CODE XREF: sub_12B5AD+B5-j
		LDA		#$80       ; code used at a000
		STA		byte_60C4	; code used at a000
		LDA		#$13		; code used at a000
		STA		byte_76D4	; code used at a000
		STA		byte_76D5	; code used at a000
		STA		byte_7706	; code used at a000
		STA		byte_7707	; code used at a000
		STA		byte_79F4	; code used at a000
		STA		byte_79F5	; code used at a000
		STA		byte_7A26	; code used at a000
		STA		byte_7A27	; code used at a000
loc_12B6A2:				; CODE XREF: sub_12B5AD+3A-j
					; sub_12B5AD+B7-j
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		LDA		#0		; code used at a000
		STA		byte_8E		; code used at a000
		LDA		#$F		; code used at a000
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
locret_12B6AE:				; CODE XREF: sub_12B6AF+3-j
					; sub_12B6AF+13-j sub_12B6AF+1F-j
					; sub_12B6AF+2B-j sub_12B6AF+31-j
					; sub_12B6AF+35-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B6AF:				; DATA XREF: BANKC:B006-o
		BIT		byte_60BA
		BMI		locret_12B6AE
		BVS		loc_12B71C
		LDA		byte_31
		CMP		#$D
		BNE		loc_12B6C9
		LDA		byte_30
		AND		#$FE 
		CMP		#$C
		BNE		locret_12B6AE
		LDA		#$1F
		JMP		_bC_s0
loc_12B6C9:				; CODE XREF: sub_12B6AF+B-j
		LDA		byte_124
		CMP		#$C
		BNE		locret_12B6AE
		LDA		byte_31
		CMP		#$11
		BEQ		loc_12B73A
		AND		#$FE 
		CMP		#$E
		BNE		locret_12B6AE
		LDA		byte_30
		CMP		#$B
		BCC		locret_12B6AE
		CMP		#$F
		BCS		locret_12B6AE
		JSR		sub_174CCF
		BRK
		.BYTE $7A, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#3
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		#$80 
		STA		byte_124
		STA		byte_128
		ORA		byte_60BA
		STA		byte_60BA
		JSR		sub_12B7AD
		JSR		sub_174CBD
		JSR		sub_174CCF
		BRK
		.BYTE $7B, $77		; _msg_m00_arg1
loc_12B70E:				; CODE XREF: sub_12B6AF+6A-j
		BRK
		.BYTE $7C, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B74D
		BRK
		.BYTE $7D, $77		; _msg_m00_arg1
		JMP		loc_12B70E
loc_12B71C:				; CODE XREF: sub_12B6AF+5-j
		LDA		byte_644
		CMP		#2
		BNE		locret_12B739
		LDA		byte_31
		CMP		#$17
		BNE		loc_12B757
		LDA		byte_124
		CMP		#$10
		BNE		locret_12B739
		JSR		sub_174CCF
		BRK
		.BYTE $74, $77		; _msg_m00_arg1
		JSR		sub_174D4F
locret_12B739:				; CODE XREF: sub_12B6AF+72-j
					; sub_12B6AF+7F-j sub_12B6AF+8E-j
					; sub_12B6AF+B1-j sub_12B6AF+BA-j
					; sub_12B6AF+C0-j sub_12B6AF+C7-j
		RTS
loc_12B73A:				; CODE XREF: sub_12B6AF+25-j
		LDA		byte_60B7
		BMI		locret_12B739
		ORA		#$80 
		STA		byte_60B7
		JSR		sub_174CCF
		BRK
		.BYTE $79, $77		; _msg_m00_arg1
		JMP		sub_174D4F
loc_12B74D:				; CODE XREF: sub_12B6AF+65-j
		BRK
		.BYTE $7E, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$28 
		BNE		loc_12B764
loc_12B757:				; CODE XREF: sub_12B6AF+78-j
		CMP		#$18
		BNE		loc_12B767
		LDA		byte_128
		CMP		#6
		BNE		locret_12B739
		LDA		#$23 
loc_12B764:				; CODE XREF: sub_12B6AF+A6-j
		JMP		_bC_s0
loc_12B767:				; CODE XREF: sub_12B6AF+AA-j
		CMP		#$1D
		BNE		locret_12B739
		LDA		byte_30
		CMP		#$D
		BNE		locret_12B739
		LDA		byte_124
		CMP		#$10
		BNE		locret_12B739
		JSR		sub_174CCF
		BRK
		.BYTE $41, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B786
		JMP		_bC_s20
loc_12B786:				; CODE XREF: sub_12B6AF+D2-j
		LDA		#$73 
		LDX		#0
loc_12B78A:				; CODE XREF: sub_12B6AF+E1-j
		STA		byte_767A,X
		INX
		CPX		#6
		BNE		loc_12B78A
loc_12B792:				; CODE XREF: sub_12B6AF+E9-j
		STA		byte_768E,X
		INX
		CPX		#$C
		BNE		loc_12B792
		JSR		sub_12B7AD
		LDA		byte_60BA
		AND		#$BF 
		STA		byte_60BA
		JSR		_bC_s20
		LDA		#$24 
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12B7AD:				; CODE XREF: sub_12B6AF+53-p
					; sub_12B6AF+EB-p
		LDY		#$C
		STY		byte_131
		STY		byte_12D
		INY
		STY		byte_121
		LDA		#$80 
		STA		byte_110
		STA		byte_114
		STA		byte_118
		STA		byte_11C
locret_12B7C7:				; CODE XREF: sub_12B7C8+4-j
					; sub_12B7C8+A-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B7C8:				; DATA XREF: BANKC:B008-o
		LDA		byte_30		; ind code used	at a000
		CMP		#$19		; code used at a000
		BNE		locret_12B7C7	; code used at a000
		LDA		byte_31		; code used at a000
		CMP		#$25       ; code used at a000
		BNE		locret_12B7C7	; code used at a000
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		BRK
		.BYTE $55, $17		; ofs 0x000080a8, -> dst _b0_s54
		BRK
		.BYTE $8B, $17		; ofs 0x00140022, -> dst _bD_s11
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
locret_12B7E0:				; CODE XREF: sub_12B7E1+22-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B7E1:				; DATA XREF: BANKC:B00A-o
		LDA		byte_60C5	; ind code used	at a000
		ASL		; code used at a000
		BCS		loc_12B819	; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		BCS		sub_12B820	; code used at a000
		LDX		#0		; code used at a000
		LDY		#9		; code used at a000
loc_12B7F2:				; CODE XREF: sub_12B7E1+1D-j
		ASL		; code used at a000
		BCS		loc_12B801	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INX				; code used at a000
		CPX		#2		; code used at a000
		BNE		loc_12B7F2	; code used at a000
		DEY				; code used at a000
loc_12B801:				; CODE XREF: sub_12B7E1+12-j
		CPY		byte_31		; code used at a000
		BNE		locret_12B7E0	; code used at a000
		CPY		#$14		; code used at a000
		BEQ		sub_12B877	; code used at a000
		LDA		byte_12B81D,X	; code used at a000
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_12B91A	; code used at a000
		JSR		sub_174CBD	; code used at a000
		ASL		byte_60C5	; code used at a000
		RTS				; code used at a000
loc_12B819:				; CODE XREF: sub_12B7E1+4-j
		BRK
		.BYTE $59, $17		; ofs 0x00128068, -> dst _bC_s34
locret_12B81C:				; CODE XREF: sub_12B820+7-j
					; sub_12B820+10-j
		RTS				; code used at a000
byte_12B81D:
		.BYTE	7,  9, $F	; DATA XREF: sub_12B7E1+28-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B820:				; CODE XREF: sub_12B7E1+B-j
		LDA		byte_30		; code used at a000
		SEC				; code used at a000
		SBC		#$A		; code used at a000
		CMP		#4		; code used at a000
		BCS		locret_12B81C	; code used at a000
		LDA		byte_31		; code used at a000
		SEC				; code used at a000
		SBC		#4		; code used at a000
		CMP		#4		; code used at a000
		BCS		locret_12B81C	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		BRK
		.BYTE $82, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip	; code used at a000
		LDA		#8		; code used at a000
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_12B91A	; code used at a000
		JSR		sub_174CBD	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		BRK
		.BYTE $A7, $77		; _msg_m00_arg1
		LDA		#$CF       ; code used at a000
		STA		word_3C		; code used at a000
		LDA		#$F3       ; code used at a000
		STA		word_3C+1	; code used at a000
		BRK
		.BYTE $CE, 7		; ofs 0x0012802e, -> dst _bC_s17
		LDA		#$80       ; code used at a000
		STA		byte_138	; code used at a000
		STA		byte_13C	; code used at a000
		STA		byte_140	; code used at a000
		STA		byte_144	; code used at a000
		JSR		_vblank		; code used at a000
		JSR		sub_174D4F	; code used at a000
		LDA		#$C0       ; code used at a000
		STA		byte_60C5	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B877:				; CODE XREF: sub_12B7E1+26-j
		BRK
		.BYTE $AB, 7		; ofs 0x0015803a, -> dst _bE_s1D
		JSR		sub_12B8F4	; code used at a000
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		JSR		sub_12B92A	; code used at a000
		LDA		#$10		; code used at a000
		STA		word_6C		; code used at a000
		JSR		_bC_s12_vblank_count_50	; code used at a000
loc_12B88A:				; CODE XREF: sub_12B877+25-j
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		BRK
		.BYTE $9B, $2F		; _syscall12
		JSR		_bC_s12_vblank_count_50	; code used at a000
		LDA		word_6C		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		word_6C		; code used at a000
		CMP		#$28       ; code used at a000
		BNE		loc_12B88A	; code used at a000
		JSR		sub_1287A7	; code used at a000
		JSR		sub_128A2C	; code used at a000
		JSR		sub_128A49	; code used at a000
		LDA		#1		; code used at a000
		STA		word_6C+1	; code used at a000
		LDA		#$38       ; code used at a000
		STA		word_6C		; code used at a000
		JSR		sub_12B8E9	; code used at a000
		JSR		sub_12B8E9	; code used at a000
		JSR		sub_12B8E9	; code used at a000
		JSR		sub_12B8E9	; code used at a000
		JSR		_vblank		; code used at a000
loc_12B8BE:				; code used at a000
		LDA		#0
		STA		byte_28		; code used at a000
		LDA		#$31       ; code used at a000
		JMP		_bC_s0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s2E_vblank_count_50_wait_50_or_skip: ; CODE	XREF: sub_AEF1+37-P
					; sub_680FE+3D-P _b5_s5+29-P sub_9BC74-P
					; _b6_s1C-P _b7_s19+14-P _b7_s19+94-P
					; _b7_s1A+23-P _b7_s1A+3B-P _b7_s1B+9-P
					; _b7_s1B+C-P _b7_s1B+F-P _bA_sF+15-P
					; _bA_sF+1B-P _bA_sF+3C-P _bA_s10+18-P
					; sub_1280A6+108-p
					; sub_1280A6:loc_128296-P
					; sub_12908F+21-p sub_12908F+40-p
					; sub_1290E1+31-p sub_129120+1A-p
					; _bC_s11+19-P _bC_s2B-P _bC_s29+25-P
					; sub_12B518+1B-P sub_12B518+73-P
					; sub_12B5AD+5F-p sub_12B6AF+3D-P
					; sub_12B820+1B-p _bD_sF+56-P
					; _npc_hndlD+3-P _npc_hndl28+16-P
					; _npc_hndl29+4-P _npc_hndl2E+E-P
					; sub_143AEA+11-P _npc_hndl43+1C-P
					; _npc_hndl47+4B-P _npc_hndl64+3-P
					; sub_174D4F-P
					; DATA XREF: BANKC:805C-o
		JSR		_bC_s12_vblank_count_50	; code used at a000
		LDA		#$3C       ; code used at a000
		STA		byte_6AE8	; code used at a000
loc_12B8CF:				; CODE XREF: _bC_s2E_vblank_count_50_wait_50_or_skip+15-j
		JSR		_vblank		; code used at a000
		JSR		_calc_pads	; code used at a000
		LDA		_pads		; code used at a000
		BNE		locret_12B8DE	; code used at a000
		DEC		byte_6AE8	; code used at a000
		BNE		loc_12B8CF	; code used at a000
locret_12B8DE:				; CODE XREF: _bC_s2E_vblank_count_50_wait_50_or_skip+10-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s12_vblank_count_50:		; CODE XREF: sub_AEB9-P	sub_AF9A+61-P
					; _bA_sF+C-P _bA_sF+3F-P
					; sub_1280A6+185-P sub_129162+2E-p
					; sub_12B493+2E-P sub_12B877+10-p
					; sub_12B877+19-p
					; _bC_s2E_vblank_count_50_wait_50_or_skip-p
					; DATA XREF: BANKC:8024-o
		LDX		#$3C       ; code used at a000
		JMP		_vblank_count	; code used at a000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_12B8E4:
		STA		word_6C
		JMP		_bC_s38

; =============== S U B	R O U T	I N E =======================================
sub_12B8E9:				; CODE XREF: sub_12B877+38-p
					; sub_12B877+3B-p sub_12B877+3E-p
					; sub_12B877+41-p
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		LDA		word_6C		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		word_6C		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B8F4:				; CODE XREF: sub_12B877+3-p
		LDY		#0		; code used at a000
loc_12B8F6:				; CODE XREF: sub_12B8F4+10-j
					; sub_12B8F4+18-j
		LDA		(word_6C),Y	; code used at a000
		AND		#$E0       ; code used at a000
		CMP		#$40       ; code used at a000
		BEQ		loc_12B90F	; code used at a000
loc_12B8FE:				; CODE XREF: sub_12B8F4+23-j
		DEC		word_6C		; code used at a000
		LDA		word_6C		; code used as ind data	at a000
		CMP		#$FF		; code used at a000
		BNE		loc_12B8F6	; code used at a000
		DEC		word_6C+1	; code used at a000
		LDA		word_6C+1	; code used at a000
		CMP		#$73       ; code used at a000
		BNE		loc_12B8F6	; code used at a000
		RTS				; code used at a000
loc_12B90F:				; CODE XREF: sub_12B8F4+8-j
		LDA		(word_6C),Y	; code used at a000
		AND		#$1F		; code used at a000
		ORA		#$20       ; code used at a000
		STA		(word_6C),Y	; code used at a000
		JMP		loc_12B8FE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B91A:				; CODE XREF: sub_1280A6+110-p
					; sub_12B7E1+2E-p sub_12B820+23-p
		LDA		#$28       ; code used at a000
		STA		byte_6ABF	; code used at a000
		BNE		sub_12B92F	; code used at a000
		LDA		#$38 
		STA		byte_6ABF
		LDA		#$FF
		BNE		sub_12B931

; =============== S U B	R O U T	I N E =======================================
sub_12B92A:				; CODE XREF: sub_12B877+9-p
		LDA		#$38       ; code used at a000
		STA		byte_6ABF	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B92F:				; CODE XREF: sub_12B91A+5-j
		LDA		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B931:				; CODE XREF: sub_12B91A+E-j
		STA		byte_6ABE	; code used at a000
		LDX		#0		; code used at a000
loc_12B936:				; CODE XREF: sub_12B931+12-j
		LDA		byte_12B946,X	; code used at a000
		ORA		byte_6ABE	; code used at a000
		STA		byte_110,X	; code used at a000
		INX				; code used at a000
		CPX		byte_6ABF	; code used at a000
		BNE		loc_12B936	; code used at a000
		RTS				; code used at a000
byte_12B946:
		.BYTE	9, $E,	4,$92, $D, $E,	4,$96,	9,$11,	4,$9A, $D,$11,	4,$9E
					; DATA XREF: sub_12B931:loc_12B936-r
		.BYTE	8,$14,	4,$A2, $E,$14,	4,$A6,	9,  8,	4,$82, $D,  8,	4,$82 ;	data used at a000
		.BYTE	9, $B,	4,$82, $D, $B,	4,$82, $B, $D,	5,$A8, $C, $D,	5,$AD
		.BYTE  $B, $E,	5,$B2, $C, $E,	5,$B7

; =============== S U B	R O U T	I N E =======================================
sub_12B97E:				; DATA XREF: BANKC:B00C-o
		LDA		byte_60C5	; ind code used	at a000
		BPL		locret_12B998	; code used at a000
		AND		#$20       ; code used at a000
		BNE		locret_12B998	; code used at a000
		LDA		byte_30		; code used at a000
		CMP		#$11		; code used at a000
		BNE		locret_12B998	; code used at a000
		LDA		byte_31		; code used at a000
		AND		#$FE       ; code used at a000
		CMP		#6		; code used at a000
		BNE		locret_12B998	; code used at a000
		JSR		sub_129007	; code used at a000
locret_12B998:				; CODE XREF: sub_12B97E+3-j
					; sub_12B97E+7-j sub_12B97E+D-j
					; sub_12B97E+15-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B999:				; DATA XREF: BANKC:B00E-o
		BRK
		.BYTE $75, $17		; ofs 0x000f8020, -> dst _bA_s10
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B99D:				; DATA XREF: BANKC:B010-o
		BRK
		.BYTE $76, $17		; ofs 0x000f8022, -> dst _bA_s11
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12B9A1:				; DATA XREF: BANKC:B01A-o
		BRK
		.BYTE $7E, $17		; ofs 0x000b0034, -> dst _b7_s1A
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bC_s27:				; CODE XREF: sub_142504+4D-P
					; sub_174C62+2E-P _bE_sA+31-P
					; DATA XREF: BANKC:804E-o
		LDX		#0		; code used at a000
loc_12B9A7:				; CODE XREF: _bC_s27+C-j
		LDA		byte_12B9B4,X	; code used as ind data	at a000
		CMP		byte_8B		; code used as ind data	at a000
		BEQ		loc_12B9CE	; code used as ind data	at a000
		INX				; code used at a000
		CMP		#$FF		; code used at a000
		BNE		loc_12B9A7	; code used as ind data	at a000
		RTS				; code used at a000
byte_12B9B4:
		.BYTE $4A, $F, $A,$91, $C,$7A,$CB,$EF,$B2,  0,$EB,$EC,$EE,$BB,$2F,$30
					; DATA XREF: _bC_s27:loc_12B9A7-r
		.BYTE $70,$58, $E,$25,$47,$18,$17,$79,$41,$FF ;	data used at a000
loc_12B9CE:				; CODE XREF: _bC_s27+7-j
		TXA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_12B9DE,X	; code used at a000
		STA		word_6C		; code used at a000
		LDA		off_12B9DE+1,X	; code used at a000
		STA		word_6C+1	; code used at a000
		JMP		(word_6C)	; code used at a000
off_12B9DE:
		.WORD nullsub_14	; DATA XREF: _bC_s27+2C-r _bC_s27+31-r
					; data used at a000
		.WORD sub_12BA11
		.WORD sub_12BA63
		.WORD sub_12BAC3
		.WORD sub_12BAD3	; data used at a000
		.WORD sub_12BB1E	; data used at a000
		.WORD sub_12BB2F	; data used at a000
		.WORD nullsub_16
		.WORD sub_12BB41
		.WORD sub_12BB64	; data used at a000
		.WORD sub_12BB96	; data used at a000
		.WORD sub_12BBAC	; data used at a000
		.WORD sub_12BBBF	; data used at a000
		.WORD sub_12BBC9
		.WORD sub_12BBDA
		.WORD sub_12BBDA
		.WORD sub_12BAB8
		.WORD sub_12BBF1
		.WORD nullsub_15
		.WORD sub_12BBFD
		.WORD sub_174D1B	; data used at a000
		.WORD sub_174D26
		.WORD sub_174D31
		.WORD sub_12BC2A
		.WORD sub_12BC33	; data used at a000

; =============== S U B	R O U T	I N E =======================================
nullsub_14:				; CODE XREF: sub_12BA11+5-j
					; DATA XREF: BANKC:off_12B9DE-o
		RTS				; ind code used	at a000

; =============== S U B	R O U T	I N E =======================================
sub_12BA11:				; DATA XREF: BANKC:B9E0-o
		LDA		byte_60BA
		AND		#1
		BEQ		nullsub_14
		LDX		#$10
		LDA		byte_6DF
		CMP		#$78 
		BCC		loc_12BA23
		LDX		#$10
loc_12BA23:				; CODE XREF: sub_12BA11+E-j
		LDA		#$F
		STA		byte_100,X
		LDA		#3
		STA		byte_101,X
		LDA		byte_103,X
		AND		#$FC 
		ORA		#3
		STA		byte_103,X
		JSR		sub_12A6FD
		LDY		#0
		LDA		byte_6A62
		STA		byte_6ABE
loc_12BA42:				; CODE XREF: sub_12BA11+43-j
		DEC		byte_6ABE
		BEQ		locret_12BA56
loc_12BA47:				; CODE XREF: sub_12BA11+41-j
		LDA		byte_12BA57,Y
		STA		byte_100,X
		INX
		INY
		TYA
		AND		#3
		BNE		loc_12BA47
		BEQ		loc_12BA42
locret_12BA56:				; CODE XREF: sub_12BA11+34-j
		RTS
byte_12BA57:
		.BYTE  $E,  4,	1,$84, $E,  5,	2,$88, $E,  6,	3,$8C
					; DATA XREF: BANKC:off_12B3CD-o
					; sub_12BA11:loc_12BA47-r

; =============== S U B	R O U T	I N E =======================================
sub_12BA63:				; DATA XREF: BANKC:B9E2-o
		LDY		#$18
		LDY		#$18
loc_12BA67:				; CODE XREF: sub_12BAC3+4-j
					; sub_12BAC3+E-j
		LDX		#0
loc_12BA69:				; CODE XREF: sub_12BA63+18-j
		LDA		byte_110,X
		PHA
		LDA		byte_100,Y
		STA		byte_110,X
		PLA
		STA		byte_100,Y
		INY
		INX
		CPX		#4
		BNE		loc_12BA69
		LDA		byte_8B
		CMP		#$91 
		BEQ		sub_12BA9A
		LDA		byte_60B8
		BPL		sub_12BAA5
		AND		#$40 
		BEQ		sub_12BAA5
		LDA		#3
		STA		byte_2D
		LDA		#8
		STA		byte_2E
		JSR		sub_12BA9A
		JMP		sub_12BAA5

; =============== S U B	R O U T	I N E =======================================
sub_12BA9A:				; CODE XREF: sub_12BA63+1E-j
					; sub_12BA63+31-p
		LDA		byte_2D
		STA		byte_110
		LDA		byte_2E
		STA		byte_111
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAA5:				; CODE XREF: sub_12BA63+23-j
					; sub_12BA63+27-j sub_12BA63+34-j
		LDA		byte_60CB
		BPL		locret_12BAB7
		LDA		#$80 
		STA		byte_124
		LDA		#$19
		STA		byte_11D
		STA		byte_121
locret_12BAB7:				; CODE XREF: sub_12BAA5+3-j
					; sub_12BAB8+3-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAB8:				; DATA XREF: BANKC:B9FE-o
		LDA		byte_60CB
		BPL		locret_12BAB7
		LDA		#$80 
		STA		byte_110
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAC3:				; DATA XREF: BANKC:B9E4-o
		LDY		#$18
		LDA		byte_2C
		BNE		loc_12BA67
		LDA		#$A
		STA		byte_2D
		LDA		#$13
		STA		byte_2E
		BNE		loc_12BA67

; =============== S U B	R O U T	I N E =======================================
sub_12BAD3:				; DATA XREF: BANKC:B9E6-o
		LDA		byte_60B7	; ind code used	at a000
		BMI		loc_12BAE1	; code used at a000
		LDA		byte_60BA	; code used at a000
		AND		#$10		; code used at a000
		BNE		loc_12BB0C	; code used at a000
		BEQ		locret_12BB11	; code used at a000
loc_12BAE1:				; CODE XREF: sub_12BAD3+3-j
		LDA		byte_6DF	; code used at a000
		CMP		#$78       ; code used at a000
		BCS		loc_12BAF1	; code used at a000
		LDA		byte_60B7
		AND		#$7F 
		STA		byte_60B7
		RTS
loc_12BAF1:				; CODE XREF: sub_12BAD3+13-j
		LDA		byte_6A62	; code used at a000
		STA		byte_6ABE	; code used at a000
		LDX		#0		; code used at a000
loc_12BAF9:				; CODE XREF: sub_12BAD3+37-j
		DEC		byte_6ABE	; code used at a000
		BEQ		loc_12BB0C	; code used at a000
loc_12BAFE:				; CODE XREF: sub_12BAD3+35-j
		LDA		byte_12BB12,X	; code used at a000
		STA		byte_154,X	; code used at a000
		INX				; code used at a000
		TXA				; code used at a000
		AND		#3		; code used at a000
		BNE		loc_12BAFE	; code used at a000
		BEQ		loc_12BAF9	; code used at a000
loc_12BB0C:				; CODE XREF: sub_12BAD3+A-j
					; sub_12BAD3+29-j
		LDX		#$44       ; code used at a000
		JSR		sub_12BB5E	; code used at a000
locret_12BB11:				; CODE XREF: sub_12BAD3+C-j
					; sub_12BB1E+3-j sub_12BB1E+A-j
					; sub_12BB2F+5-j
		RTS				; code used at a000
byte_12BB12:
		.BYTE	7,$13,	1,$84,	7,$14,	2,$8B,	8,$14,	3,$8F
					; DATA XREF: BANKC:B3CF-o
					; sub_12BAD3:loc_12BAFE-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12BB1E:				; DATA XREF: BANKC:B9E8-o
		LDA		byte_60B7	; ind code used	at a000
		BMI		locret_12BB11	; code used at a000
		LDA		byte_60BA	; code used at a000
		AND		#$10		; code used at a000
		BNE		locret_12BB11	; code used at a000
		LDX		#$14		; code used at a000
		JMP		sub_12BB5E	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12BB2F:				; DATA XREF: BANKC:B9EA-o
		LDA		byte_60B9	; ind code used	at a000
		AND		#$10		; code used at a000
		BEQ		locret_12BB11	; code used at a000
		LDX		#$10
		JSR		sub_12BB5E
		LDX		#$14
		JMP		sub_12BB5E

; =============== S U B	R O U T	I N E =======================================
nullsub_16:				; DATA XREF: BANKC:B9EC-o
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BB41:				; DATA XREF: BANKC:B9EE-o
		LDA		#$80 
		BIT		byte_60BA
		BMI		loc_12BB4B
		BVS		loc_12BB51
		RTS
loc_12BB4B:				; CODE XREF: sub_12BB41+5-j
		STA		byte_128
		STA		byte_124
loc_12BB51:				; CODE XREF: sub_12BB41+7-j
		STA		byte_110
		STA		byte_114
		STA		byte_118
		STA		byte_11C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BB5E:				; CODE XREF: sub_12BAD3+3B-p
					; sub_12BB1E+E-j sub_12BB2F+9-p
					; sub_12BB2F+E-j
		LDA		#$80       ; code used at a000
		STA		byte_100,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12BB64:				; DATA XREF: BANKC:B9F0-o
		LDA		byte_6E1	; ind code used	at a000
		BEQ		loc_12BB89	; code used at a000
		CMP		#$2B       ; code used at a000
		BEQ		loc_12BB71	; code used at a000
		CMP		#$2C       ; code used at a000
		BNE		loc_12BB80	; code used at a000
loc_12BB71:				; CODE XREF: sub_12BB64+7-j
		LDX		#5		; code used at a000
		LDY		#$27       ; code used at a000
		LDA		#3		; code used at a000
loc_12BB77:				; CODE XREF: sub_12BB64+30-j
		STX		byte_120	; code used at a000
		STY		byte_121	; code used at a000
		STA		byte_123	; code used at a000
loc_12BB80:				; CODE XREF: sub_12BB64+B-j
					; sub_12BB64+28-j
		LDA		byte_60B7	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_60B7	; code used at a000
		RTS				; code used at a000
loc_12BB89:				; CODE XREF: sub_12BB64+3-j
		LDA		byte_60C6	; code used at a000
		BPL		loc_12BB80	; code used at a000
		LDX		#$10
		LDY		#$17
		LDA		#$80 
		BNE		loc_12BB77

; =============== S U B	R O U T	I N E =======================================
sub_12BB96:				; DATA XREF: BANKC:B9F2-o
		LDA		byte_60C8	; ind code used	at a000
		AND		#4		; code used at a000
		BNE		locret_12BBAB	; code used at a000
loc_12BB9D:				; CODE XREF: sub_12BBBF+3-j
					; sub_12BBBF+7-j
		LDA		#$80       ; code used at a000
		STA		byte_118	; code used at a000
		STA		byte_11C	; code used at a000
loc_12BBA5:				; CODE XREF: sub_12BBAC+3-j
					; sub_12BBAC+B-j
		STA		byte_110	; code used at a000
		STA		byte_114	; code used at a000
locret_12BBAB:				; CODE XREF: sub_12BB96+5-j
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_12BBAC:				; DATA XREF: BANKC:B9F4-o
		LDA		byte_60C8	; ind code used	at a000
		BMI		loc_12BBA5	; code used at a000
		AND		#3		; code used at a000
		ORA		#$80       ; code used at a000
		CMP		#$83       ; code used at a000
		BEQ		loc_12BBA5	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_60C8	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12BBBF:				; DATA XREF: BANKC:B9F6-o
		LDA		byte_60C8	; ind code used	at a000
		BMI		loc_12BB9D	; code used at a000
		AND		#4		; code used at a000
		BNE		loc_12BB9D	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_12BBC9:				; DATA XREF: BANKC:B9F8-o
		LDA		byte_60B9
		ORA		byte_60B7
		ORA		byte_60CA
		BPL		locret_12BBD9
		LDA		#$80 
		STA		byte_110
locret_12BBD9:				; CODE XREF: sub_12BBC9+9-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBDA:				; DATA XREF: BANKC:B9FA-o BANKC:B9FC-o
		LDA		byte_60B6
		AND		#$20 
		BEQ		locret_12BBF0
		LDA		#$32 
		STA		byte_110
		LDA		#$15
		STA		byte_111
		LDA		#$83 
		STA		byte_113
locret_12BBF0:				; CODE XREF: sub_12BBDA+5-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBF1:				; DATA XREF: BANKC:BA00-o
		LDA		byte_60CB
		BPL		locret_12BBFB
		LDA		#$80 
		STA		byte_110
locret_12BBFB:				; CODE XREF: sub_12BBF1+3-j
		RTS

; =============== S U B	R O U T	I N E =======================================
nullsub_15:				; DATA XREF: BANKC:BA02-o
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBFD:				; DATA XREF: BANKC:BA04-o
		LDX		#0
		LDA		byte_60D0
		STA		word_4
loc_12BC04:				; CODE XREF: sub_12BBFD+1A-j
		LSR		word_4
		BCC		loc_12BC14
		LDY		byte_12BC24,X
		LDA		byte_101,Y
		SEC
		SBC		#$34 
		STA		byte_101,Y
loc_12BC14:				; CODE XREF: sub_12BBFD+9-j
		INX
		CPX		#6
		BNE		loc_12BC04
		BIT		byte_60B9
		BVC		locret_12BC23
		LDA		#$80 
		STA		byte_118
locret_12BC23:				; CODE XREF: sub_12BBFD+1F-j
		RTS
byte_12BC24:
		.BYTE $24,$34,$30,$20,$1C,$28 ;	DATA XREF: sub_12BBFD+B-r

; =============== S U B	R O U T	I N E =======================================
sub_12BC2A:				; DATA XREF: BANKC:BA0C-o
		LDA		byte_60B7
		AND		#$7F 
		STA		byte_60B7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BC33:				; DATA XREF: BANKC:BA0E-o
		BIT		byte_60C6	; ind code used	at a000
		BVC		locret_12BC40	; code used at a000
		LDA		byte_113	; code used at a000
		AND		#$FC       ; code used at a000
		STA		byte_113	; code used at a000
locret_12BC40:				; CODE XREF: sub_12BC33+3-j
		RTS				; code used at a000

		ECHO "bank 0C size", [.-$8000], "free space", [$BFD8-.]

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
