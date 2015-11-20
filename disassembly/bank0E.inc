
		ORG $8000

		.WORD _bE_s0		; data used at 8000
		.WORD _bE_s1		; data used at 8000
		.WORD _bE_s2		; data used at 8000
		.WORD _bE_s3		; data used at 8000
		.WORD _bE_s4_msg_m00	; data used at 8000
		.WORD _bE_s5		; data used at 8000
		.WORD _bE_s6_msg_mFF	; data used at 8000
		.WORD _bE_s6_msg_mFF
		.WORD _bE_s4_msg_m00	; data used at 8000
		.WORD _bE_s9		; data used at 8000
		.WORD _bE_sA		; function not fit into	bank E so moved	to bank	F
		.WORD _bE_sB		; data used at 8000
		.WORD _bE_sC		; data used at 8000
		.WORD _bE_sD		; data used at 8000
		.WORD _bE_sE		; data used at 8000
		.WORD _bE_sF		; data used at 8000
		.WORD _bE_s10		; data used at 8000
		.WORD _bE_s11		; data used at 8000
		.WORD _bE_s12		; data used at 8000
		.WORD _bE_s13		; data used at 8000
		.WORD _bE_s14
		.WORD 0
		.WORD _bE_s16		; data used at 8000
		.WORD _bE_s1C
		.WORD _bE_s18		; data used at 8000
		.WORD _bE_s19		; data used at 8000
		.WORD _bE_s1A		; data used at 8000
		.WORD _bE_s1B		; data used at 8000
		.WORD _bE_s1C		; data used at 8000
		.WORD _bE_s1D		; data used at 8000
		.WORD 0
		.WORD 0
		.WORD _bE_s20		; data used at 8000
		.WORD _bE_s21		; data used at 8000
		.WORD _bE_s22		; data used at 8000
		.WORD _bE_s23		; data used at 8000
		.WORD _bE_s24		; data used at 8000
		.WORD _bE_s25
		.WORD _bE_s26
		.WORD 0
		.WORD 0
		.WORD 0
		.WORD 0
		.WORD _bE_s2B
		.WORD 0
		.WORD 0
		.WORD _bE_s2E		; data used at 8000
		.WORD _bE_s2F		; data used at 8000
		.WORD _bE_s30		; data used at 8000
		.WORD _bE_s31		; data used at 8000
		.WORD _bE_s32
		.WORD _bE_s33		; data used at 8000
		.WORD _bE_s34		; data used at 8000
		.WORD 0
		.WORD _bE_s36		; data used at 8000
		.WORD 0
		.WORD _bE_s38		; data used at 8000
		
; =============== S U B	R O U T	I N E =======================================
_bE_s1:					; CODE XREF: sub_174D56-P
					; DATA XREF: BANKE:8002-o
		LDA		byte_87		; code used at 8000
		BNE		loc_158093	; code used at 8000
		LDA		byte_86		; code used at 8000
		BEQ		loc_158093	; code used at 8000
		LDA		byte_8F		; code used at 8000
		BNE		locret_158092	; code used at 8000
loc_15807E:				; CODE XREF: _bE_s1+2D-j
		JSR		_calc_pads	; code used at 8000
		LDA		_pads		; code used at 8000
		ORA		byte_6BD	; code used at 8000
		STA		byte_6BD	; code used at 8000
		LDA		byte_90		; code used at 8000
		AND		#$F		; code used at 8000
		BNE		locret_158092	; code used at 8000
		JMP		sub_15812C	; code used at 8000
locret_158092:				; CODE XREF: _bE_s1+A-j	_bE_s1+1B-j
					; _bE_s1+24-j _bE_s1+2B-j sub_1580A1+2-j
		RTS				; code used at 8000
loc_158093:				; CODE XREF: _bE_s1+2-j	_bE_s1+6-j
		LDA		byte_6E1	; code used at 8000
		BEQ		locret_158092	; code used at 8000
		LDA		byte_6E2	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		locret_158092	; code used at 8000
		BEQ		loc_15807E

; =============== S U B	R O U T	I N E =======================================
sub_1580A1:				; CODE XREF: sub_15812C+37-p
					; sub_158374-j sub_158377+48-j
					; _bE_s33+3-j sub_158409+15-j
					; sub_158409+3D-j
		LDA		byte_8E		; code used at 8000
		BPL		locret_158092	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_8E		; code used at 8000
		JMP		_bE_sB		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1580AC:				; CODE XREF: sub_15812C+24-j
		LDX		byte_9E
		LDY		byte_9F
		JSR		sub_176CA4
		TAX
		LDA		byte_6DE0,X
		AND		#$80 
		BNE		sub_15811B
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#1
		BEQ		sub_15811B
		CMP		#2
		BEQ		sub_15811B
		LDA		byte_9E
		STA		byte_74
		LDA		byte_9F
		STA		byte_75
		JSR		sub_175923
		BCS		sub_15811B
		LDA		byte_9E
		CMP		#$62 
		BCC		loc_1580E9
		CMP		#$6C 
		BCS		loc_1580E9
		LDA		byte_9F
		CMP		#$D5 
		BCC		loc_1580E9
		CMP		#$DB 
		BCC		sub_15811B
loc_1580E9:				; CODE XREF: sub_1580AC+2D-j
					; sub_1580AC+31-j sub_1580AC+37-j
		LDX		#0
loc_1580EB:				; CODE XREF: sub_1580AC+4C-j
		LDA		_spr_ram,X
		STA		word_3C,X
		LDA		#$F8 
		STA		_spr_ram,X
		INX
		CPX		#$10
		BNE		loc_1580EB
		LDX		#$3C 
		LDY		#$18
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		LDA		#0
		STA		byte_2C
		BRK
		.BYTE $23, $17		; ofs 0x00128064, -> dst _bC_s32
		BRK
		.BYTE $32, $17		; ofs 0x00140030, -> dst _bD_s18
		BRK
		.BYTE 4, $2F		; _syscall12
locret_15811A:				; CODE XREF: sub_15812C+5-j
					; sub_15812C+16-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15811B:				; CODE XREF: sub_1580AC+D-j
					; sub_1580AC+16-j sub_1580AC+1A-j
					; sub_1580AC+27-j sub_1580AC+3B-j
		JSR		_bE_sD
		JSR		sub_174DF2
		BRK
		.BYTE $BE, $67		; _msg_m00_arg0
		LDA		#0
		STA		byte_6BD
		JMP		_bE_s33

; =============== S U B	R O U T	I N E =======================================
sub_15812C:				; CODE XREF: _bE_s1+1D-j
		LDA		byte_6BD	; code used at 8000
		AND		#1		; code used at 8000
		BEQ		locret_15811A	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_6BD	; code used at 8000
		LDA		byte_6E1	; code used at 8000
		BEQ		loc_158144	; code used at 8000
		LDA		byte_6E2	; code used at 8000
		AND		#$40       ; code used at 8000
		BNE		locret_15811A	; code used at 8000
loc_158144:				; CODE XREF: sub_15812C+F-j
		LDA		_pads+2		; code used at 8000
		ORA		#1		; code used at 8000
		STA		_pads+2		; code used at 8000
		LDA		byte_2C		; code used at 8000
		CMP		#2		; code used at 8000
		BNE		loc_158153	; code used at 8000
		JMP		sub_1580AC
loc_158153:				; CODE XREF: sub_15812C+22-j
		LDA		byte_2A		; code used at 8000
		CMP		byte_9E		; code used at 8000
		BNE		sub_15819F	; code used at 8000
		LDA		byte_2B
		CMP		byte_9F
		BNE		sub_15819F
		LDA		byte_2F
		BNE		sub_15819F
		JSR		sub_1580A1
		BRK
		.BYTE $EB, 7		; ofs 0x00158064, -> dst _bE_s32
		LDX		#$10
loc_15816B:				; CODE XREF: sub_15812C+4A-j
		LDA		_spr_ram,X
		CMP		#$6F 
		BEQ		loc_158178
loc_158172:				; CODE XREF: sub_15812C+51-j
		INX
		INX
		INX
		INX
		BNE		loc_15816B
loc_158178:				; CODE XREF: sub_15812C+44-j
		LDA		_spr_ram+3,X
		CMP		#$80 
		BNE		loc_158172
		LDY		#0
loc_158181:				; CODE XREF: sub_15812C+64-j
		LDA		_spr_ram,X
		STA		_spr_ram,Y
		LDA		#$F8 
		STA		_spr_ram,X
		INX
		INY
		CPY		#$10
		BNE		loc_158181
		LDA		#2
		STA		byte_2C
		BRK
		.BYTE $E, $2F		; _syscall12
		LDA		#0
		STA		byte_6C9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15819F:				; CODE XREF: sub_15812C+2B-j
					; sub_15812C+31-j sub_15812C+35-j
		LDA		#$FF		; code used at 8000
		STA		byte_8E		; code used at 8000
		JSR		_bE_sD		; code used at 8000
		JSR		sub_15856C	; code used at 8000
		BRK
		.BYTE $85, $2F		; _syscall12
		BRK
		.BYTE $14, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		BNE		loc_1581B8	; code used at 8000
		LDA		#3		; code used at 8000
		JMP		_bE_sB		; code used at 8000
loc_1581B8:				; CODE XREF: sub_15819F+12-j
		CMP		#0		; code used at 8000
		BEQ		sub_1581E1	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		loc_1581D0	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		loc_1581D4	; code used at 8000
		CMP		#3		; code used at 8000
		BEQ		loc_1581D7	; code used at 8000
		CMP		#5		; code used at 8000
		BEQ		sub_1581DE	; code used at 8000
		BRK
		.BYTE $16, 7		; ofs 0x0012803a, -> dst _bC_s1D
		RTS				; code used at 8000
loc_1581D0:				; CODE XREF: sub_15819F+1F-j
		BRK
		.BYTE $E4, 7		; ofs 0x000080b6, -> dst _b0_s5B
		RTS				; code used at 8000
loc_1581D4:				; CODE XREF: sub_15819F+23-j
		JMP		sub_158377	; code used at 8000
loc_1581D7:				; CODE XREF: sub_15819F+27-j
		BRK
		.BYTE $EC, 7		; ofs 0x000080ba, -> dst _b0_s5D
		BRK
		.BYTE $49, $17		; ofs 0x000080a0, -> dst _b0_s50
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1581DE:				; CODE XREF: sub_15819F+2B-j
		JMP		sub_158409	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1581E1:				; CODE XREF: sub_15819F+1B-j
		LDA		byte_8B		; code used at 8000
		CMP		#$F		; code used at 8000
		BNE		sub_158203	; code used at 8000
		LDA		byte_31
		CMP		#3
		BNE		sub_158203
		LDA		byte_103
		AND		#3
		CMP		byte_644
		BEQ		sub_158203
		STA		byte_644
		JSR		sub_158203
		LDA		#0
		STA		byte_644
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158203:				; CODE XREF: sub_1581E1+4-j
					; sub_1581E1+A-j sub_1581E1+14-j
					; sub_1581E1+19-p
		LDA		byte_30		; code used at 8000
		STA		word_6		; code used at 8000
		LDA		byte_31		; code used at 8000
		STA		word_6+1	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_8		; code used at 8000
		JSR		sub_1582F8	; code used at 8000
		LDX		word_6		; code used at 8000
		LDY		word_6+1	; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$1F		; code used at 8000
		CMP		#$E		; code used at 8000
		BNE		loc_158227	; code used at 8000
		INC		byte_8		; code used at 8000
		JSR		sub_1582F8	; code used at 8000
		JMP		loc_158238	; code used at 8000
loc_158227:				; CODE XREF: sub_158203+1A-j
		TAX				; code used at 8000
		LDA		byte_6DE0,X	; code used at 8000
		AND		#$F		; code used at 8000
		CMP		#$D		; code used at 8000
		BNE		loc_158238	; code used at 8000
		INC		byte_8		; code used at 8000
		INC		byte_8		; code used at 8000
		JSR		sub_1582F8	; code used at 8000
loc_158238:				; CODE XREF: sub_158203+21-j
					; sub_158203+2C-j
		LDA		#$10		; code used at 8000
		STA		word_6C		; code used at 8000
		LDA		#1		; code used at 8000
		STA		word_6C+1	; code used at 8000
loc_158240:				; CODE XREF: sub_158203+50-j
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_158255	; code used at 8000
		CMP		word_6		; code used at 8000
		BEQ		loc_15825E	; code used at 8000
loc_15824C:				; CODE XREF: sub_158203+61-j
		LDA		word_6C		; code used at 8000
		CLC				; code used at 8000
		ADC		#4		; code used at 8000
		STA		word_6C		; code used at 8000
		BCC		loc_158240	; code used at 8000
loc_158255:				; CODE XREF: sub_158203+43-j
					; sub_158203+6B-j sub_158203+8C-j
		JSR		sub_174DF2	; code used at 8000
		BRK
		.BYTE $E, $77		; _msg_m00_arg1
		JMP		_bE_s33		; code used at 8000
loc_15825E:				; CODE XREF: sub_158203+47-j
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		CMP		word_6+1	; code used at 8000
		BNE		loc_15824C	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$E0       ; code used at 8000
		CMP		byte_8C		; code used at 8000
		BNE		loc_158255	; code used at 8000
		JSR		sub_15830F	; code used at 8000
		LDA		word_6C		; code used at 8000
		SEC				; code used at 8000
		SBC		#$10		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		word_6C		; code used at 8000
		PHA				; code used at 8000
		LDA		word_6C+1	; code used at 8000
		PHA				; code used at 8000
		JSR		sub_177EFC	; code used at 8000
		PLA				; code used as ind data	at 8000
		STA		word_6C+1	; code used at 8000
		PLA				; code used at 8000
		STA		word_6C		; code used at 8000
		LDA		word_4		; code used at 8000
		ORA		word_4+1	; code used at 8000
		BEQ		loc_158255	; code used at 8000
		LDA		word_6		; code used at 8000
		AND		#$20       ; code used at 8000
		BNE		loc_1582D6	; code used at 8000
		LDA		byte_8B		; code used at 8000
		CMP		#$60       ; code used at 8000
		BEQ		loc_1582AE	; code used at 8000
		CMP		#$B		; code used at 8000
		BEQ		loc_1582A5	; code used at 8000
		CMP		#$78       ; code used at 8000
		BNE		loc_1582BF	; code used at 8000
loc_1582A5:				; CODE XREF: sub_158203+9C-j
		LDA		byte_60B7	; code used at 8000
		AND		#4		; code used at 8000
		BNE		loc_1582BF	; code used at 8000
		BEQ		loc_1582D6	; code used at 8000
loc_1582AE:				; CODE XREF: sub_158203+98-j
		LDA		word_6C
		CMP		#$18
		BNE		loc_1582BF
		LDA		byte_644
		BNE		loc_1582D6
		LDA		#3
		STA		byte_8
		BNE		loc_1582D6
loc_1582BF:				; CODE XREF: sub_158203+A0-j
					; sub_158203+A7-j sub_158203+AF-j
		LDA		byte_8		; code used at 8000
		PHA				; code used at 8000
		LDA		byte_644	; code used at 8000
		EOR		#2		; code used at 8000
		STA		byte_8		; code used at 8000
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$FC       ; code used as ind data at 8000
		ORA		byte_8		; code used at 8000
		STA		(word_6C),Y	; code used at 8000
		PLA				; code used at 8000
		STA		byte_8		; code used at 8000
loc_1582D6:				; CODE XREF: sub_158203+92-j
					; sub_158203+A9-j sub_158203+B4-j
					; sub_158203+BA-j
		LDA		word_4		; code used at 8000
		PHA				; code used at 8000
		LDA		word_4+1	; code used at 8000
		PHA				; code used at 8000
		LDA		word_6		; code used at 8000
		PHA				; code used at 8000
		LDA		byte_8		; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		JSR		sub_174DF2	; code used at 8000
		PLA				; code used at 8000
		STA		byte_8		; code used at 8000
		PLA				; code used at 8000
		STA		word_6		; code used at 8000
		PLA				; code used at 8000
		STA		word_4+1	; code used at 8000
		PLA				; code used at 8000
		STA		word_4		; code used at 8000
		BRK
		.BYTE $27, $17		; ofs 0x0014002c, -> dst _bD_s16
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1582F8:				; CODE XREF: sub_158203+C-p
					; sub_158203+1E-p sub_158203+32-p
		LDX		byte_644	; code used at 8000
		BEQ		loc_158306	; code used at 8000
		DEX				; code used at 8000
		BEQ		loc_158309	; code used at 8000
		DEX				; code used at 8000
		BEQ		loc_15830C	; code used at 8000
		DEC		word_6		; code used at 8000
		RTS				; code used at 8000
loc_158306:				; CODE XREF: sub_1582F8+3-j
		DEC		word_6+1	; code used at 8000
		RTS				; code used at 8000
loc_158309:				; CODE XREF: sub_1582F8+6-j
		INC		word_6		; code used at 8000
		RTS				; code used at 8000
loc_15830C:				; CODE XREF: sub_1582F8+9-j
		INC		word_6+1	; code used at 8000
locret_15830E:				; CODE XREF: sub_15830F+B-j
					; sub_15830F+11-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15830F:				; CODE XREF: sub_158203+6D-p
		LDA		byte_8B		; code used at 8000
		CMP		#$C		; code used at 8000
		BNE		loc_158349	; code used at 8000
		LDA		byte_6DF	; code used at 8000
		CMP		#$78       ; code used at 8000
		BCC		locret_15830E	; code used at 8000
		LDA		word_6C		; code used at 8000
		CMP		#$54       ; code used at 8000
		BNE		locret_15830E	; code used at 8000
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F
		LDX		#1
		STX		byte_D2
		LDA		word_4
		BEQ		loc_158335
		LDA		#$9D 
		BNE		loc_158337
loc_158335:				; CODE XREF: sub_15830F+20-j
		LDA		#$9C 
loc_158337:				; CODE XREF: sub_15830F+24-j
					; sub_15830F+5E-j sub_15830F+62-j
		PHA
		TXA
		PHA
		JSR		sub_174CCF
		PLA
		TAX
		PLA
		JSR		_bE_s4_msg_m00
		JSR		_bE_s33
		PLA
		PLA
		RTS
loc_158349:				; CODE XREF: sub_15830F+4-j
		CMP		#$F		; code used at 8000
		BNE		locret_158373	; code used at 8000
		LDX		#$44 
		LDA		byte_6DF
		CMP		#$78 
		BCC		loc_158358
		LDX		#$2C 
loc_158358:				; CODE XREF: sub_15830F+45-j
		CPX		word_6C
		BNE		locret_158373
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F
		LDA		#1
		STA		byte_D2
		LDX		#6
		LDA		#$24 
		LDY		word_4
		BEQ		loc_158337
		LDA		#$25 
		BNE		loc_158337
locret_158373:				; CODE XREF: sub_15830F+3C-j
					; sub_15830F+4B-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158374:				; CODE XREF: sub_158377+13-j
					; sub_158377+22-j
		JMP		sub_1580A1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158377:				; CODE XREF: sub_15819F:loc_1581D4-j
		BIT		byte_60B7	; code used at 8000
		BVC		loc_158385	; code used at 8000
		JSR		sub_174DF2
		BRK
		.BYTE $66, $77		; _msg_m00_arg1
		JMP		_bE_s33
loc_158385:				; CODE XREF: sub_158377+3-j
		BRK
		.BYTE $1E, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		BEQ		sub_158374	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		sub_1583C2	; code used at 8000
		CMP		#2		; code used at 8000
		BEQ		sub_158405	; code used at 8000
		BRK
		.BYTE $23, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		BEQ		sub_158374	; code used at 8000
		STA		byte_CE		; code used at 8000
		BRK
		.BYTE $68, $D7		; _syscall0D
		BRK
		.BYTE 9, $D7		; _syscall0D
		JSR		__pause_or_skip	; code used at 8000
		BRK
		.BYTE $85, $2F		; _syscall12
		BRK
		.BYTE 8, $D7		; _syscall0D
		BRK
		.BYTE $A, $D7		; _syscall0D
		JSR		__pause_or_skip	; code used at 8000
		BRK
		.BYTE $85, $2F		; _syscall12
		LDA		#1		; code used at 8000
		STA		byte_D0		; code used at 8000
		JSR		sub_1583D0	; code used at 8000
		JSR		sub_1583D0	; code used at 8000
		JMP		sub_1580A1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1583C2:				; CODE XREF: sub_158377+17-j
		JSR		_sram_b0_s31	; code used at 8000
		LDA		word_4		; code used at 8000
		CLC				; code used at 8000
		ADC		#$D		; code used at 8000
		JSR		_bE_sC		; code used at 8000
		JMP		_bE_s33		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1583D0:				; CODE XREF: sub_158377+42-p
					; sub_158377+45-p
		JSR		_sram_bank0_sub39 ; code used at 8000
		LDA		word_4		; code used at 8000
		ORA		word_4+1	; code used at 8000
		ORA		word_6		; code used at 8000
		ORA		word_6+1	; code used at 8000
		BEQ		loc_1583FC	; code used at 8000
		JSR		_sram_b0_s2C	; code used at 8000
		LDA		word_4		; code used at 8000
		BEQ		loc_1583EA	; code used at 8000
		BRK
		.BYTE $B, $D7		; _syscall0D
		JMP		loc_1583ED	; code used at 8000
loc_1583EA:				; CODE XREF: sub_1583D0+12-j
		BRK
		.BYTE $65, $D7		; _syscall0D
loc_1583ED:				; CODE XREF: sub_1583D0+17-j
		JSR		__pause_or_skip	; code used at 8000
		BRK
		.BYTE $85, $2F		; _syscall12
		BRK
		.BYTE $C, $D7		; _syscall0D
		JSR		__pause_or_skip	; code used at 8000
		BRK
		.BYTE $85, $2F		; _syscall12
loc_1583FC:				; CODE XREF: sub_1583D0+B-j
		INC		byte_D0		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s33:				; CODE XREF: sub_8261:loc_8288-P
					; sub_AAEB+3-P sub_AE82+5-P _bA_s11+22-P
					; sub_129162+7C-P _bC_s11+27-P
					; sub_129446+5D-P _bC_s1D:loc_129745-P
					; _bC_s2B+32-P sub_12A4B6+3E-P
					; sub_12B01C+21-P
					; sub_12B1A2:loc_12B1FC-P
					; sub_12B2EB+1E-P sub_12B2EB+64-P
					; sub_12B3D1+59-P sub_12B518+8E-P
					; _bD_s16+3-P _bD_s20_npc_hndl31+E-P
					; _bD_s20_npc_hndl31+15-P _bD_s24+18-P
					; _bD_s23:loc_143E44-P _bD_s21+C-P
					; sub_15811B+E-j sub_158203+58-j
					; sub_15830F+34-p sub_158377+B-j
					; sub_1583C2+B-j sub_158409+B-j
					; sub_158409+E1-j sub_15B288+4B-p
					; sub_175853+1A-P
					; DATA XREF: BANKE:8066-o
		JSR		__pause_or_skip	; code used at 8000
		JMP		sub_1580A1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158405:				; CODE XREF: sub_158377+1B-j
		BRK
		.BYTE $96, $17		; ofs 0x0009803c, -> dst _b6_s1E
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158409:				; CODE XREF: sub_1581DE-j
		BIT		byte_60B7	; code used at 8000
		BVC		loc_158417	; code used at 8000
		BRK
		.BYTE $3E, $D7		; _syscall0D
		BRK
		.BYTE $65, $77		; _msg_m00_arg1
		JMP		_bE_s33
loc_158417:				; CODE XREF: sub_158409+3-j
		BRK
		.BYTE $24, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		BNE		loc_158421	; code used at 8000
		JMP		sub_1580A1	; code used at 8000
loc_158421:				; CODE XREF: sub_158409+13-j
		STA		byte_CE		; code used at 8000
		JSR		_sram_bank0_sub1E ; code used at 8000
		LDA		word_4+1	; code used at 8000
		STA		byte_6AB3	; code used at 8000
		SEC				; code used at 8000
loc_15842C:				; CODE XREF: sub_158409+6B-j
		JSR		sub_158516	; code used at 8000
loc_15842F:				; CODE XREF: sub_158409+4F-j
					; sub_158409+61-j
		PHP				; code used at 8000
		JSR		_sram_bank0_sub1F ; code used at 8000
		PLP				; code used at 8000
		LDX		word_4		; code used at 8000
		BNE		loc_15843C	; code used at 8000
		BCC		loc_158443	; code used at 8000
		BCS		loc_158461	; code used at 8000
loc_15843C:				; CODE XREF: sub_158409+2D-j
		BRK
		.BYTE $25, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		BNE		loc_158449	; code used at 8000
loc_158443:				; CODE XREF: sub_158409+2F-j
		JSR		sub_1584ED	; code used at 8000
		JMP		sub_1580A1	; code used at 8000
loc_158449:				; CODE XREF: sub_158409+38-j
		STA		byte_CF		; code used at 8000
		LDA		#0		; code used at 8000
		JSR		sub_15858D	; code used at 8000
		BCS		loc_158461	; code used at 8000
		JSR		_sram_bank0_sub1F ; code used at 8000
		JSR		sub_15851F	; code used at 8000
		BCC		loc_15842F	; code used at 8000
		JSR		_sram_bank0_sub23 ; code used at 8000
		SEC				; code used at 8000
loc_15845E:				; CODE XREF: sub_158409+98-j
		JSR		sub_158516	; code used at 8000
loc_158461:				; CODE XREF: sub_158409+31-j
					; sub_158409+47-j sub_158409+7C-j
					; sub_158409+8E-j
		PHP				; code used at 8000
		JSR		_sram_bank0_sub21 ; code used at 8000
		PLP				; code used at 8000
		LDX		word_4		; code used at 8000
		BNE		loc_15846E	; code used at 8000
		BCC		loc_15842F	; code used at 8000
		BCS		loc_15848E	; code used at 8000
loc_15846E:				; CODE XREF: sub_158409+5F-j
		BRK
		.BYTE $26, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		CLC				; code used at 8000
		BEQ		loc_15842C	; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		#1		; code used at 8000
		JSR		sub_15858D	; code used at 8000
		BCS		loc_15848E	; code used at 8000
		JSR		_sram_bank0_sub21 ; code used at 8000
		JSR		sub_15851F	; code used at 8000
		BCC		loc_158461	; code used at 8000
		JSR		_sram_bank0_sub25 ; code used at 8000
		SEC				; code used at 8000
loc_15848B:				; CODE XREF: sub_158409+C5-j
		JSR		sub_158516	; code used at 8000
loc_15848E:				; CODE XREF: sub_158409+63-j
					; sub_158409+74-j sub_158409+A9-j
					; sub_158409+BB-j
		PHP				; code used at 8000
		JSR		_sram_bank0_sub20 ; code used at 8000
		PLP				; code used at 8000
		LDX		word_4		; code used at 8000
		BNE		loc_15849B	; code used at 8000
		BCC		loc_158461	; code used at 8000
		BCS		loc_1584BB	; code used at 8000
loc_15849B:				; CODE XREF: sub_158409+8C-j
		BRK
		.BYTE $27, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		CLC				; code used at 8000
		BEQ		loc_15845E	; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		#2		; code used at 8000
		JSR		sub_15858D	; code used at 8000
		BCS		loc_1584BB	; code used at 8000
		JSR		_sram_bank0_sub20 ; code used at 8000
		JSR		sub_15851F	; code used at 8000
		BCC		loc_15848E	; code used at 8000
		JSR		_sram_bank0_sub24 ; code used at 8000
		SEC				; code used at 8000
		JSR		sub_158516	; code used at 8000
loc_1584BB:				; CODE XREF: sub_158409+90-j
					; sub_158409+A1-j sub_158409+D6-j
		PHP				; code used at 8000
		JSR		_sram_bank0_sub22 ; code used at 8000
		PLP				; code used at 8000
		LDX		word_4		; code used at 8000
		BNE		loc_1584C8	; code used at 8000
		BCC		loc_15848E	; code used at 8000
		BCS		loc_1584E7	; code used at 8000
loc_1584C8:				; CODE XREF: sub_158409+B9-j
		BRK
		.BYTE $28, $D7		; _syscall0D
		CMP		#$FF		; code used at 8000
		CLC				; code used at 8000
		BEQ		loc_15848B	; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		#3		; code used at 8000
		JSR		sub_15858D	; code used at 8000
		BCS		loc_1584E7	; code used at 8000
		JSR		_sram_bank0_sub22 ; code used at 8000
		JSR		sub_15851F	; code used at 8000
		BCC		loc_1584BB	; code used at 8000
		JSR		_sram_bank0_sub26 ; code used at 8000
		JSR		sub_158516	; code used at 8000
loc_1584E7:				; CODE XREF: sub_158409+BD-j
					; sub_158409+CE-j
		JSR		sub_1584ED	; code used at 8000
		JMP		_bE_s33		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1584ED:				; CODE XREF: sub_158409:loc_158443-p
					; sub_158409:loc_1584E7-p
		JSR		_sram_bank0_sub1E ; code used at 8000
		LDA		word_4+1	; code used at 8000
		CMP		byte_6AB3	; code used at 8000
		BEQ		loc_158507	; code used at 8000
		JSR		sub_15850B	; code used at 8000
		BEQ		loc_158504	; code used at 8000
		LDA		byte_6AB3	; code used at 8000
		JSR		sub_15850B	; code used at 8000
		BNE		loc_158507	; code used at 8000
loc_158504:				; CODE XREF: sub_1584ED+D-j
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
loc_158507:				; CODE XREF: sub_1584ED+8-j
					; sub_1584ED+15-j
		BRK
		.BYTE $49, $17		; ofs 0x000080a0, -> dst _b0_s50
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15850B:				; CODE XREF: sub_1584ED+A-p
					; sub_1584ED+12-p
		CMP		#$AA       ; code used at 8000
		BEQ		locret_158515	; code used at 8000
		CMP		#$B1       ; code used at 8000
		BEQ		locret_158515	; code used at 8000
		CMP		#$B2       ; code used at 8000
locret_158515:				; CODE XREF: sub_15850B+2-j
					; sub_15850B+6-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158516:				; CODE XREF: sub_158409:loc_15842C-p
					; sub_158409:loc_15845E-p
					; sub_158409:loc_15848B-p
					; sub_158409+AF-p sub_158409+DB-p
		PHP				; code used at 8000
		BRK
		.BYTE $D, $D7		; _syscall0D
		JSR		sub_158581	; code used at 8000
		PLP				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15851F:				; CODE XREF: sub_158409+4C-p
					; sub_158409+79-p sub_158409+A6-p
					; sub_158409+D3-p
		LDA		word_4+1	; code used at 8000
		AND		#$7F       ; code used at 8000
		CMP		#$7F       ; code used at 8000
		BEQ		loc_15854E	; code used at 8000
		STA		byte_D2		; code used at 8000
		STA		byte_D3		; code used at 8000
		TAX				; code used at 8000
		PHA				; code used at 8000
		LDA		byte_CF		; code used at 8000
		PHA				; code used at 8000
		STX		byte_CF		; code used at 8000
		BRK
		.BYTE 8, $17		; ofs 0x000080bc, -> dst _b0_s5E
		PLA				; code used at 8000
		STA		byte_CF		; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		BCC		loc_158550	; code used at 8000
		LDA		#$90       ; code used at 8000
		JSR		_get_syscall0_data_byte_X ; code used at 8000
		AND		#8		; code used at 8000
		BEQ		loc_15854E	; code used at 8000
		BRK
		.BYTE $3E, $D7		; _syscall0D
		BRK
		.BYTE $51, $77		; _msg_m00_arg1
		JSR		sub_1585B8
loc_15854E:				; CODE XREF: sub_15851F+6-j
					; sub_15851F+24-j
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_158550:				; CODE XREF: sub_15851F+1B-j
		BRK
		.BYTE $3E, $D7		; _syscall0D
		LDA		byte_CE		; code used at 8000
		STA		byte_D2		; code used at 8000
		BRK
		.BYTE $BC, $67		; _msg_m00_arg0
		JSR		sub_15855F	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15855F:				; CODE XREF: sub_15851F+3B-p
		JSR		__pause_or_skip	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158562:				; CODE XREF: sub_1585B8+3-j
		LDA		#$A		; code used at 8000
		JSR		_bE_sB		; code used at 8000
		LDA		#$E		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158569:				; CODE XREF: sub_15857D+2-j
		JSR		_bE_sB		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15856C:				; CODE XREF: sub_15819F+7-p
		LDA		byte_CE		; code used at 8000
		PHA				; code used at 8000
		JSR		_sram_b0_s31	; code used at 8000
		DEC		word_4		; code used at 8000
		LDA		word_4		; code used at 8000
		JSR		_bE_sC		; code used at 8000
		PLA				; code used at 8000
		STA		byte_CE		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15857D:
		LDA		#$A
		BNE		sub_158569

; =============== S U B	R O U T	I N E =======================================
sub_158581:				; CODE XREF: sub_158516+4-p
		LDA		byte_CE		; code used at 8000
		PHA				; code used at 8000
		LDA		#1		; code used at 8000
		JSR		_bE_sB		; code used at 8000
		PLA				; code used at 8000
		STA		byte_CE		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15858D:				; CODE XREF: sub_158409+44-p
					; sub_158409+71-p sub_158409+9E-p
					; sub_158409+CB-p
		PHA				; code used at 8000
		JSR		_sram_bank0_sub1E ; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		word_4,X	; code used at 8000
		AND		#$7F       ; code used at 8000
		STA		byte_D2		; code used at 8000
		TAX				; code used at 8000
		LDA		#$90       ; code used at 8000
		JSR		_get_syscall0_data_byte_X ; code used at 8000
		AND		#8		; code used at 8000
		BNE		loc_1585A5	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_1585A5:				; CODE XREF: sub_15858D+14-j
		BRK
		.BYTE $3E, $D7		; _syscall0D
		BRK
		.BYTE $52, $77		; _msg_m00_arg1
		JSR		sub_1585B8
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1585B0:				; CODE XREF: sub_1585B8-p
		BRK
		.BYTE $17, $2F		; _syscall12
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1585B8:				; CODE XREF: sub_15851F+2C-p
					; sub_15858D+1E-p
		JSR		sub_1585B0
		JMP		sub_158562

; =============== S U B	R O U T	I N E =======================================
_bE_s13:				; CODE XREF: sub_20162+A-P
					; sub_142504+59-P _bE_sC+5-p
					; DATA XREF: BANKE:8026-o
		PHA				; code used at 8000
		JSR		sub_1585C4	; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1585C4:				; CODE XREF: _bE_s13+1-p
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_1585CD	; code used at 8000
		JMP		sub_15868F	; code used at 8000
loc_1585CD:				; CODE XREF: sub_1585C4+4-j
		JSR		sub_158643	; code used at 8000
		JSR		sub_1585D6	; code used at 8000
		JMP		_vblank		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1585D6:				; CODE XREF: sub_1585C4+C-p
					; sub_1585D6+1B-j sub_15868F+3-p
		LDY		#2		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_1585DF	; code used at 8000
		RTS				; code used at 8000
loc_1585DF:				; CODE XREF: sub_1585D6+6-j
		LDY		#0		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		word_6		; code used at 8000
		CMP		#$10		; code used at 8000
		BCC		loc_1585F4	; code used at 8000
loc_1585EA:				; CODE XREF: sub_1585D6+2A-j
					; sub_1585D6+32-j sub_1585D6+3D-j
					; sub_1585D6+49-j
		LDA		word_6C		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		#4		; code used as ind data	at 8000
		STA		word_6C		; code used at 8000
		BPL		sub_1585D6	; code used at 8000
		RTS
loc_1585F4:				; CODE XREF: sub_1585D6+12-j
		STA		word_4		; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		word_6+1	; code used at 8000
		CMP		#$F		; code used at 8000
		BCC		loc_158603	; code used as ind data	at 8000
		JMP		loc_1585EA	; code used at 8000
loc_158603:				; CODE XREF: sub_1585D6+28-j
		STA		word_4+1	; code used at 8000
		JSR		_bE_s9		; code used at 8000
		BCC		loc_1585EA	; code used at 8000
		LDA		word_6C		; code used at 8000
		CMP		#$10		; code used at 8000
		BCC		loc_158615	; code used at 8000
		JSR		sub_158678	; code used at 8000
		BNE		loc_1585EA	; code used at 8000
loc_158615:				; CODE XREF: sub_1585D6+38-j
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$3C       ; code used at 8000
		TAY				; code used at 8000
		JSR		sub_158622	; code used at 8000
		JMP		loc_1585EA	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158622:				; CODE XREF: sub_1585D6+46-p
					; sub_15868F+12-p sub_15868F+21-p
					; sub_15868F+30-p
		LDA		#$F8       ; code used at 8000
		STA		byte_8		; code used at 8000
		STA		byte_9		; code used at 8000
		STA		byte_A		; code used at 8000
		STA		byte_B		; code used at 8000
		LDX		#8		; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		LDX		#8		; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		LDX		#8		; code used at 8000
		JSR		sub_174204	; code used at 8000
		INY				; code used at 8000
		LDX		#8		; code used at 8000
		JMP		sub_174204	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158643:				; CODE XREF: sub_1585C4:loc_1585CD-p
					; _bE_s34:loc_1586F5-p
		JSR		sub_158655	; code used at 8000
		LDA		byte_30		; code used at 8000
		SEC				; code used at 8000
		SBC		#8		; code used at 8000
		STA		word_6		; code used at 8000
		LDA		byte_31		; code used at 8000
		SEC				; code used at 8000
		SBC		#7		; code used at 8000
		STA		word_6+1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158655:				; CODE XREF: sub_158643-p sub_158666-p
		LDA		#1		; code used at 8000
		STA		word_6C+1	; code used at 8000
		LDX		#0		; code used at 8000
		LDA		byte_AC		; code used at 8000
		AND		#$1F		; code used at 8000
		BEQ		loc_158663	; code used at 8000
		LDX		#$10
loc_158663:				; CODE XREF: sub_158655+A-j
		STX		word_6C		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158666:				; CODE XREF: sub_15868F-p sub_15874F-p
					; sub_15874F:loc_158766-p
					; sub_15874F:loc_158776-p
		JSR		sub_158655	; code used at 8000
		LDA		byte_2A		; code used at 8000
		SEC				; code used at 8000
		SBC		#8		; code used at 8000
		STA		word_6		; code used at 8000
		LDA		byte_2B		; code used at 8000
		SEC				; code used at 8000
		SBC		#7		; code used at 8000
		STA		word_6+1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158678:				; CODE XREF: sub_1585D6+3A-p
					; sub_1586FE+3A-p
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BEQ		locret_15868E	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		TAX				; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		TAY				; code used at 8000
		JSR		sub_176F34	; code used at 8000
		AND		#$E0       ; code used as ind data at 8000
		CMP		byte_8C		; code used as ind data	at 8000
locret_15868E:				; CODE XREF: sub_158678+4-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15868F:				; CODE XREF: sub_1585C4+6-j
		JSR		sub_158666	; code used at 8000
		JSR		sub_1585D6	; code used at 8000
		JSR		sub_1586C5	; code used at 8000
		BCS		loc_1586A4	; code used at 8000
		JSR		_bE_s9
		BCC		loc_1586A4
		LDY		#$10
		JSR		sub_158622
loc_1586A4:				; CODE XREF: sub_15868F+9-j
					; sub_15868F+E-j
		JSR		sub_1586D5	; code used at 8000
		BCS		loc_1586B3	; code used at 8000
		JSR		_bE_s9
		BCC		loc_1586B3
		LDY		#$14
		JSR		sub_158622
loc_1586B3:				; CODE XREF: sub_15868F+18-j
					; sub_15868F+1D-j
		JSR		sub_1586CE	; code used at 8000
		BCS		loc_1586C2	; code used at 8000
		JSR		_bE_s9
		BCC		loc_1586C2
		LDY		#$18
		JSR		sub_158622
loc_1586C2:				; CODE XREF: sub_15868F+27-j
					; sub_15868F+2C-j
		JMP		_vblank		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1586C5:				; CODE XREF: sub_15868F+6-p
					; sub_15874F:loc_158759-p
		LDX		byte_2D		; code used at 8000
		LDY		byte_2E		; code used at 8000
		JMP		loc_1586D9	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1586CC:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1586CE:				; CODE XREF: sub_15868F:loc_1586B3-p
					; sub_15874F+2A-p
		LDX		byte_9E		; code used at 8000
		LDY		byte_9F		; code used at 8000
		JMP		loc_1586D9	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1586D5:				; CODE XREF: sub_15868F:loc_1586A4-p
					; sub_15874F+1A-p
		LDX		byte_9B		; code used at 8000
		LDY		byte_9C		; code used at 8000
loc_1586D9:				; CODE XREF: sub_1586C5+4-j
					; sub_1586CE+4-j
		TXA				; code used at 8000
		SEC				; code used at 8000
		SBC		word_6		; code used at 8000
		CMP		#$10		; code used at 8000
		BCS		locret_1586EB	; code used at 8000
		STA		word_4
		TYA
		SEC
		SBC		word_6+1
		CMP		#$F
		STA		word_4+1
locret_1586EB:				; CODE XREF: sub_1586D5+A-j
					; sub_1586FE+E-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s34:				; CODE XREF: sub_15A2DA:loc_15A322-j
					; sub_15B288+24-p sub_15B9FA+15-P
					; DATA XREF: BANKE:8068-o
		LDA		byte_2F		; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_1586F5	; code used at 8000
		JMP		sub_15874F	; code used at 8000
loc_1586F5:				; CODE XREF: _bE_s34+4-j
		JSR		sub_158643	; code used at 8000
		JSR		sub_1586FE	; code used at 8000
		JMP		_vblank		; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1586FE:				; CODE XREF: _bE_s34+C-p sub_15874F+7-p
		LDA		byte_2C		; code used at 8000
		BEQ		loc_158706	; code used at 8000
		LDA		#$10
		STA		word_6C
loc_158706:				; CODE XREF: sub_1586FE+2-j
					; sub_1586FE+22-j
		LDY		#2		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		CMP		#$FF		; code used as ind data	at 8000
		BEQ		locret_1586EB	; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		word_6		; code used at 8000
		CMP		#$10		; code used as ind data	at 8000
		BCC		loc_158723	; code used at 8000
loc_158719:				; CODE XREF: sub_1586FE+31-j
					; sub_1586FE+38-j sub_1586FE+3D-j
					; sub_1586FE+4E-j
		LDA		word_6C		; code used at 8000
		CLC				; code used at 8000
		ADC		#4		; code used at 8000
		STA		word_6C		; code used at 8000
		BPL		loc_158706	; code used at 8000
		RTS
loc_158723:				; CODE XREF: sub_1586FE+19-j
		STA		word_4		; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		SEC				; code used at 8000
		SBC		word_6+1	; code used at 8000
		CMP		#$F		; code used at 8000
		BCC		loc_158731	; code used at 8000
		BCS		loc_158719	; code used at 8000
loc_158731:				; CODE XREF: sub_1586FE+2F-j
		STA		word_4+1	; code used at 8000
		JSR		_bE_s9		; code used at 8000
		BCS		loc_158719	; code used at 8000
		JSR		sub_158678	; code used at 8000
		BNE		loc_158719	; code used at 8000
		LDA		word_6		; code used at 8000
		PHA				; code used at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		PHA				; code used at 8000
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		PLA				; code used as ind data	at 8000
		STA		word_6+1	; code used at 8000
		PLA				; code used as ind data	at 8000
		STA		word_6		; code used at 8000
		JMP		loc_158719	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15874F:				; CODE XREF: _bE_s34+6-j
		JSR		sub_158666	; code used at 8000
		LDA		byte_2C		; code used at 8000
		BNE		loc_158759	; code used at 8000
		JSR		sub_1586FE	; code used at 8000
loc_158759:				; CODE XREF: sub_15874F+5-j
		JSR		sub_1586C5	; code used at 8000
		BCS		loc_158766	; code used at 8000
		JSR		_bE_s9
		BCS		loc_158766
		BRK
		.BYTE $38, $17		; ofs 0x0014003c, -> dst _bD_s1E
loc_158766:				; CODE XREF: sub_15874F+D-j
					; sub_15874F+12-j
		JSR		sub_158666	; code used at 8000
		JSR		sub_1586D5	; code used at 8000
		BCS		loc_158776	; code used at 8000
		JSR		_bE_s9
		BCS		loc_158776
		BRK
		.BYTE $36, $17		; ofs 0x00140038, -> dst _bD_s1C
loc_158776:				; CODE XREF: sub_15874F+1D-j
					; sub_15874F+22-j
		JSR		sub_158666	; code used at 8000
		JSR		sub_1586CE	; code used at 8000
		BCS		loc_158786	; code used at 8000
		JSR		_bE_s9
		BCS		loc_158786
		BRK
		.BYTE $37, $17		; ofs 0x0014003a, -> dst _bD_s1D
loc_158786:				; CODE XREF: sub_15874F+2D-j
					; sub_15874F+32-j
		JMP		_vblank		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s1C:				; CODE XREF: _b6_s16+3-P sub_9BA66+3-P
					; sub_9BA85+3-P	sub_9BADD+F-P
					; sub_9BB26+BC-P sub_1280A6+80-P
					; sub_12908F:loc_1290C1-P
					; sub_129874+22-P sub_12B189+C-P
					; sub_12B3D1+51-P sub_12B493+23-P
					; sub_12B6AF+62-P sub_12B6AF+CF-P
					; sub_1420EE+3-P sub_142135+D-P
					; sub_142135+65-P sub_142135+83-P
					; sub_142135+B4-P sub_142135+156-P
					; sub_142135+16A-P sub_142135+1A0-P
					; sub_1422E1+75-P sub_1422E1+80-P
					; sub_1423CC:loc_1423CF-P
					; sub_14245C:loc_14245F-P
					; sub_142486+3D-P sub_142589+92-P
					; sub_1427A8+3-P sub_142923+ED-P
					; sub_142923+14B-P sub_142923+217-P
					; sub_142923+254-P sub_142923+295-P
					; sub_142BC0+3-P sub_142C17+3-P
					; sub_142C17+69-P sub_142C17+71-P
					; sub_142CE7+CC-P sub_142E22+3-P
					; _bD_sF+2C-P sub_14351B:loc_14351E-P
					; _npc_hndl1+18-P _npc_hndl3+43-P
					; _npc_hndl3+4B-P _npc_hndlE+31-P
					; _npc_hndl10+3-P _npc_hndl10+E-P
					; _npc_hndl19+8-P _npc_hndl1F+11-P
					; _npc_hndl22+19-P _npc_hndl22+2A-P
					; _npc_hndl26+3-P _npc_hndl2B+3-P
					; _npc_hndl2B+12-P _npc_hndl2E+3-P
					; _bD_s20_npc_hndl31+6-P
					; _bD_s20_npc_hndl33+3-P
					; _npc_hndl42+23-P _npc_hndl43+3-P
					; _npc_hndl43+E-P _npc_hndl47+21-P
					; _npc_hndl47+41-P _npc_hndl62+3-P
					; _npc_hndl6C+B-P _npc_hndl6C+1A-P
					; _npc_hndl6D+3-P _bD_s23+1A-P
					; sub_143EBD+34-P _bD_s21+3-P
					; DATA XREF: BANKE:802E-o BANKE:8038-o
		BRK
		.BYTE $86, $2F		; _syscall12
		BRK
		.BYTE $1D, $D7		; _syscall0D
		PHA				; code used at 8000
		LDA		byte_80		; code used at 8000
		PHA				; code used at 8000
		LDA		byte_81		; code used at 8000
		PHA				; code used at 8000
		LDA		#6		; code used at 8000
		JSR		_bE_sB		; code used at 8000
		LDX		#0		; code used at 8000
		TXA				; code used at 8000
loc_15879E:				; CODE XREF: _bE_s1C+1B-j
		STA		byte_460,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BNE		loc_15879E	; code used at 8000
		PLA				; code used at 8000
		STA		byte_81		; code used at 8000
		PLA				; code used at 8000
		STA		byte_80		; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_sC:					; CODE XREF: sub_A120+B-P sub_A169+2-P
					; sub_A172+E-P _b0_s46+55-P
					; _b0_s5D:loc_AB41-P sub_9BE69+E-P
					; sub_9BE69+9F-P sub_12A312+16-P
					; sub_1583C2+8-p sub_15856C+A-p
					; sub_174E52+19C-P _syscall0D+1-P
					; DATA XREF: BANKE:8018-o
		STA		byte_7E		; code used at 8000
		JSR		sub_159E55	; code used at 8000
		JSR		_bE_s13		; code used at 8000
		JMP		sub_1587BB	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s0:					; CODE XREF: sub_A8BB+14-P _b4_s7+8-P
					; sub_B2ABA+22-P sub_B2B48:loc_B2B58-P
					; sub_1587BB+10-j _syscall0E+1-P
					; DATA XREF: BANKE:8000-o
		STA		byte_7E		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1587BB:				; CODE XREF: _bE_sC+8-j
		JSR		sub_1587CF	; code used at 8000
		JSR		sub_159F6D	; code used at 8000
		CMP		#$40       ; code used at 8000
		BNE		locret_1587CE	; code used at 8000
		LDY		#7		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$7F       ; code used at 8000
		JMP		_bE_s0		; code used at 8000
locret_1587CE:				; CODE XREF: sub_1587BB+8-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1587CF:				; CODE XREF: sub_1587BB-p
		JSR		sub_158C9F	; code used at 8000
		JSR		sub_158DD7	; code used at 8000
		JSR		sub_158DFA	; code used as ind data	at 8000
		JSR		sub_158BAD	; code used at 8000
loc_1587DB:				; CODE XREF: sub_1587CF+1E-j
		JSR		sub_158DDD	; code used at 8000
		JSR		sub_158E26	; code used at 8000
		JSR		sub_1587F0	; code used at 8000
		JSR		sub_17474C	; code used as ind data	at 8000
		JSR		sub_158E57	; code used at 8000
		DEC		byte_6AEA	; code used at 8000
		BNE		loc_1587DB	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_1587F0:				; CODE XREF: sub_1587CF+12-p
		LDA		byte_6AEA	; code used at 8000
		CMP		#1		; code used at 8000
		BEQ		locret_15880C	; code used at 8000
		LDA		byte_6AC2	; code used at 8000
		JSR		sub_15881A	; code used as ind data	at 8000
		LDA		byte_6AEA	; code used as ind data	at 8000
		CMP		#2		; code used as ind data	at 8000
		BEQ		locret_15880C	; code used as ind data	at 8000
		LDY		#5		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$40       ; code used as ind data at 8000
		BNE		loc_15880D	; code used as ind data	at 8000
locret_15880C:				; CODE XREF: sub_1587F0+5-j
					; sub_1587F0+12-j
		RTS				; code used at 8000
loc_15880D:				; CODE XREF: sub_1587F0+1A-j
		LDA		byte_6AC2	; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6AE9	; code used at 8000
		STA		byte_6AEB	; code used at 8000
		JMP		loc_15883A	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_15881A:				; CODE XREF: sub_1587F0+A-p
					; sub_158BAD+50-p
		STA		byte_6AEB	; code used as ind data	at 8000
		LDY		#5		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		BPL		loc_15883A	; code used as ind data	at 8000
		LDX		byte_6AC1	; code used at 8000
		BNE		loc_158835	; code used as ind data	at 8000
		AND		#$40       ; code used at 8000
		BEQ		loc_158835	; code used at 8000
loc_15882C:				; CODE XREF: sub_15881A+17-j
		JSR		sub_158BA1	; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_15882C	; code used at 8000
		BEQ		loc_15883A	; code used at 8000
loc_158835:				; CODE XREF: sub_15881A+C-j
					; sub_15881A+10-j
		LDA		#$B		; code used at 8000
		STA		byte_6AC3	; code used at 8000
loc_15883A:				; CODE XREF: sub_1587F0+27-j
					; sub_15881A+7-j sub_15881A+19-j
					; sub_15881A+59-j sub_15881A+A6-j
					; sub_15881A+C0-j
					; sub_15881A:loc_15892F-j
					; sub_15881A:loc_158A5E-j
					; sub_158AA6:loc_158B0B-j sub_158B55+3-j
					; sub_158B8A+8-j sub_158F55+21-j
		JSR		sub_158BA1	; code used as ind data	at 8000
		BPL		loc_158870	; code used as ind data	at 8000
		CMP		#$FF		; code used as ind data	at 8000
		BEQ		loc_158876	; code used as ind data	at 8000
		AND		#$1F		; code used as ind data	at 8000
		CMP		#$10		; code used as ind data	at 8000
		BCC		loc_158895	; code used at 8000
		CMP		#$12		; code used at 8000
		BCC		loc_15887A	; code used at 8000
		CMP		#$14		; code used at 8000
		BCC		loc_158880	; code used at 8000
		CMP		#$16		; code used at 8000
		BCC		loc_158883	; code used at 8000
		CMP		#$17		; code used as ind data	at 8000
		BCC		loc_158886	; code used at 8000
		CMP		#$18		; code used at 8000
		BCC		loc_158889	; code used at 8000
		CMP		#$19		; code used at 8000
		BCC		loc_15888C	; code used at 8000
		CMP		#$1A		; code used at 8000
		BCC		loc_15888F	; code used at 8000
		CMP		#$1B		; code used at 8000
		BCC		loc_158892	; code used at 8000
		CMP		#$1F		; code used at 8000
		BCC		loc_15887D	; code used at 8000
		JMP		loc_158876
loc_158870:				; CODE XREF: sub_15881A+23-j
		JSR		sub_158DB9	; code used as ind data	at 8000
		JMP		loc_15883A	; code used as ind data	at 8000
loc_158876:				; CODE XREF: sub_15881A+27-j
					; sub_15881A+53-j
		INC		byte_6AC1	; code used as ind data	at 8000
		RTS				; code used at 8000
loc_15887A:				; CODE XREF: sub_15881A+31-j
		JMP		loc_1588F4	; code used at 8000
loc_15887D:				; CODE XREF: sub_15881A+51-j
		JMP		sub_158B81	; code used at 8000
loc_158880:				; CODE XREF: sub_15881A+35-j
		JMP		loc_15897F	; code used at 8000
loc_158883:				; CODE XREF: sub_15881A+39-j
		JMP		loc_158985	; code used at 8000
loc_158886:				; CODE XREF: sub_15881A+3D-j
		JMP		loc_1589E8	; code used at 8000
loc_158889:				; CODE XREF: sub_15881A+41-j
		JMP		loc_1588D3	; code used at 8000
loc_15888C:				; CODE XREF: sub_15881A+45-j
		JMP		sub_158AA6	; code used at 8000
loc_15888F:				; CODE XREF: sub_15881A+49-j
		JMP		loc_158970	; code used at 8000
loc_158892:				; CODE XREF: sub_15881A+4D-j
		JMP		loc_158B0E	; code used at 8000
loc_158895:				; CODE XREF: sub_15881A+2D-j
		CMP		#$E		; code used as ind data	at 8000
		BNE		loc_1588A3	; code used as ind data	at 8000
		LDA		byte_6AC4	; code used at 8000
		JSR		sub_158B47	; code used at 8000
		LDX		#$E		; code used at 8000
		BNE		loc_1588AF	; code used at 8000
loc_1588A3:				; CODE XREF: sub_15881A+7D-j
		PHA				; code used at 8000
		LDA		byte_6AC4	; code used at 8000
		JSR		sub_158B95	; code used as ind data	at 8000
		JSR		sub_158C89	; code used at 8000
		PLA				; code used as ind data	at 8000
		TAX				; code used at 8000
loc_1588AF:				; CODE XREF: sub_15881A+87-j
		LDA		byte_1588C3,X	; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		JSR		_sram_bank0_select_ex ;	code used at 8000
		PLA				; code used at 8000
		JSR		sub_158F55	; code used at 8000
loc_1588BA:				; CODE XREF: sub_15881A+D8-j
		JSR		sub_158BA1	; code used as ind data	at 8000
		JSR		sub_158E72	; code used as ind data	at 8000
		JMP		loc_15883A	; code used as ind data	at 8000
byte_1588C3:
		.BYTE	0,  4,	1,  5, $F,$10,$11,$12,$13,$14,$16,$19,$17, $A, $B,$67
					; DATA XREF: sub_15881A:loc_1588AF-r
					; data used at 8000
loc_1588D3:				; CODE XREF: sub_15881A:loc_158889-j
		LDA		byte_C9		; code used at 8000
		BNE		loc_1588DD	; code used at 8000
		JSR		sub_158BA1	; code used at 8000
		JMP		loc_15883A	; code used at 8000
loc_1588DD:				; CODE XREF: sub_15881A+BB-j
		LDA		byte_6AC1	; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		BRK
		.BYTE $E, $17		; ofs 0x0014002a, -> dst _bD_s15
		TAX				; code used at 8000
		BRK
		.BYTE 2, $17		; ofs 0x00140024, -> dst _bD_s12
		LDX		#2		; code used at 8000
loc_1588EB:				; CODE XREF: sub_15881A+D6-j
		LDA		byte_C0,X	; code used at 8000
		STA		word_4,X	; code used at 8000
		DEX				; code used at 8000
		BPL		loc_1588EB	; code used at 8000
		BMI		loc_1588BA	; code used at 8000
loc_1588F4:				; CODE XREF: sub_15881A:loc_15887A-j
		CMP		#$11		; code used at 8000
		BNE		loc_15893F	; code used at 8000
		LDA		byte_6AC4	; code used at 8000
		JSR		sub_158B47	; code used at 8000
		JSR		_sram_bank0_sub10 ; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_15890A	; code used at 8000
		JMP		sub_158B52	; code used at 8000
loc_15890A:				; CODE XREF: sub_15881A+EB-j
		LDX		#0		; code used at 8000
loc_15890C:				; CODE XREF: sub_15881A+F8-j
		JSR		sub_158BA1	; code used at 8000
		INX				; code used at 8000
		CPX		#$D		; code used at 8000
		BNE		loc_15890C	; code used at 8000
		LDA		byte_6ACA	; code used at 8000
		BNE		loc_15892F	; code used at 8000
		LDA		byte_C6		; code used at 8000
		CMP		#6		; code used at 8000
		BNE		loc_15892F	; code used at 8000
		LDY		#0		; code used at 8000
loc_158921:				; CODE XREF: sub_15881A+110-j
		LDA		byte_158932,Y	; code used at 8000
		JSR		sub_158DB9	; code used at 8000
		INY				; code used at 8000
		CPY		#$D		; code used at 8000
		BNE		loc_158921	; code used at 8000
		STY		byte_6ACA	; code used at 8000
loc_15892F:				; CODE XREF: sub_15881A+FD-j
					; sub_15881A+103-j
		JMP		loc_15883A	; code used at 8000
byte_158932:
		.BYTE $25,$32,$33,$38,$2C,$29,$36,  0,$3B,$33,$36,$30,$28
					; DATA XREF: sub_15881A:loc_158921-r
					; data used at 8000
loc_15893F:				; CODE XREF: sub_15881A+DC-j
		LDA		byte_6AC4	; code used at 8000
		PHA				; code used at 8000
		JSR		sub_158BA1	; code used at 8000
		LDX		byte_6AC1	; code used at 8000
		LSR		; code used at 8000
		PLA				; code used at 8000
		BCS		loc_158951	; code used at 8000
		JSR		sub_158B95	; code used at 8000
		TAX				; code used at 8000
loc_158951:				; CODE XREF: sub_15881A+131-j
		TXA				; code used at 8000
		JSR		sub_158C89	; code used at 8000
		JSR		_sram_bank0_subF ; code	used at	8000
		LDA		byte_CE		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDY		#0		; code used at 8000
		LDA		byte_73D,X	; code used at 8000
		BMI		loc_15896B	; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#$4E       ; code used at 8000
		BNE		loc_15896B	; code used at 8000
		LDY		#$5A       ; code used at 8000
loc_15896B:				; CODE XREF: sub_15881A+147-j
					; sub_15881A+14D-j
		STY		byte_8		; code used at 8000
		JMP		sub_158B55	; code used at 8000
loc_158970:				; CODE XREF: sub_15881A:loc_15888F-j
		LDA		byte_6AC4	; code used at 8000
		JSR		sub_158B95	; code used at 8000
		JSR		sub_158C89	; code used at 8000
		BRK
		.BYTE $66, $17		; ofs 0x000b001c, -> dst _b7_sE
		JMP		sub_158B52	; code used at 8000
loc_15897F:				; CODE XREF: sub_15881A:loc_158880-j
		LDX		#5		; code used at 8000
		LDA		#$2B       ; code used at 8000
		BNE		loc_158989	; code used at 8000
loc_158985:				; CODE XREF: sub_15881A:loc_158883-j
		LDX		#6		; code used at 8000
		LDA		#$2D       ; code used at 8000
loc_158989:				; CODE XREF: sub_15881A+169-j
		STX		byte_6AC5	; code used at 8000
		PHA				; code used at 8000
		LDA		byte_6AC4	; code used at 8000
		LSR		; code used at 8000
		LDA		byte_6AC4	; code used at 8000
		BCC		loc_1589A0	; code used at 8000
		JSR		sub_158B47	; code used at 8000
		TSX				; code used at 8000
		INC		byte_101,X	; code used at 8000
		JMP		loc_1589A6	; code used at 8000
loc_1589A0:				; CODE XREF: sub_15881A+17A-j
		JSR		sub_158B95	; code used at 8000
		JSR		sub_158C89	; code used at 8000
loc_1589A6:				; CODE XREF: sub_15881A+183-j
		PLA				; code used at 8000
		PHA				; code used at 8000
		JSR		_sram_bank0_select_ex ;	code used at 8000
		LDA		word_4		; code used at 8000
		PHA				; code used at 8000
		LDX		byte_6AC5	; code used at 8000
		JSR		sub_158B9D	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		CMP		#$2B       ; code used at 8000
		BNE		loc_1589D5	; code used at 8000
		JSR		sub_158BA1	; code used at 8000
		AND		#$F0       ; code used at 8000
		CMP		#$20       ; code used at 8000
		BNE		loc_1589D2	; code used at 8000
		TXA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_1589D8,X	; code used at 8000
		STA		word_4		; code used at 8000
		INX				; code used at 8000
		LDA		byte_1589D8,X	; code used at 8000
		STA		word_4+1	; code used at 8000
loc_1589D2:				; CODE XREF: sub_15881A+1A8-j
		JMP		sub_158B55	; code used at 8000
loc_1589D5:				; CODE XREF: sub_15881A+19F-j
		JMP		sub_158B52	; code used at 8000
byte_1589D8:
		.BYTE $40,$41,$46,$47,$44,$45,$4E,$4F,$42,$43,$4A,$4B,$48,$49,$4C,$4D
					; DATA XREF: sub_15881A+1AD-r
					; sub_15881A+1B3-r
					; data used at 8000
loc_1589E8:				; CODE XREF: sub_15881A:loc_158886-j
		LDA		byte_6AC4	; code used at 8000
		PHA				; code used as ind data	at 8000
		JSR		sub_158BA1	; code used at 8000
		AND		#$F		; code used at 8000
		TAX				; code used at 8000
		PHA				; code used at 8000
		LDA		byte_6AC1	; code used at 8000
		LSR		; code used at 8000
		CPX		#9		; code used at 8000
		BCC		loc_158A04	; code used at 8000
		TAX				; code used at 8000
		BRK
		.BYTE $E, $17		; ofs 0x0014002a, -> dst _bD_s15
		STA		word_4		; code used at 8000
		JMP		loc_158A15	; code used at 8000
loc_158A04:				; CODE XREF: sub_15881A+1DF-j
		CMP		#8		; code used at 8000
		BCS		loc_158A3D	; code used at 8000
		LDY		#$A		; code used at 8000
		CLC				; code used at 8000
		ADC		(word_6C),Y	; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		byte_158A6D,X	; code used at 8000
		JSR		_sram_bank0_select_ex ;	code used at 8000
loc_158A15:				; CODE XREF: sub_15881A+1E7-j
		PLA				; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		JSR		sub_158B95	; code used at 8000
		TAY				; code used at 8000
		LDA		byte_158A76,X	; code used at 8000
		TAX				; code used at 8000
		LDA		byte_0,X	; code used at 8000
		BPL		loc_158A31	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_158A43	; code used at 8000
		CPY		#1		; code used at 8000
		BEQ		loc_158A31	; code used at 8000
		PHA				; code used as ind data	at 8000
		JSR		sub_158A80	; code used at 8000
		PLA				; code used at 8000
loc_158A31:				; CODE XREF: sub_15881A+208-j
					; sub_15881A+210-j
		PHA				; code used at 8000
		TYA				; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		AND		#$7F       ; code used at 8000
		JSR		sub_158B9D	; code used at 8000
		JMP		sub_158B55	; code used at 8000
loc_158A3D:				; CODE XREF: sub_15881A+1EC-j
		PLA
		PLA
		JSR		sub_158B95
		TAY
loc_158A43:				; CODE XREF: sub_15881A+20C-j
		CPY		#1		; code used at 8000
		BEQ		loc_158A5E	; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#$25       ; code used at 8000
		BCC		loc_158A5E	; code used at 8000
		CMP		#$29       ; code used at 8000
		BCS		loc_158A5E	; code used at 8000
		LDY		#0		; code used at 8000
loc_158A53:				; CODE XREF: sub_15881A+242-j
		LDA		byte_158A61,Y	; code used at 8000
		JSR		sub_158DB9	; code used as ind data	at 8000
		INY				; code used at 8000
		CPY		#$C		; code used at 8000
		BNE		loc_158A53	; code used at 8000
loc_158A5E:				; CODE XREF: sub_15881A+22B-j
					; sub_15881A+231-j sub_15881A+235-j
		JMP		loc_15883A	; code used at 8000
byte_158A61:
		.BYTE $32,$33,$32,  0,$29,$35,$39,$2D,$34,$34,$29,$28
					; DATA XREF: sub_15881A:loc_158A53-r
					; data used at 8000
byte_158A6D:
		.BYTE $1D,$1F,$1E,$20,$26,$1C,$1C,$1C,$1C ; DATA XREF: sub_15881A+1F5-r
					; data used at 8000
byte_158A76:
		.BYTE	5,  5,	5,  5,	5,  4,	5,  6,	7,  4 ;	DATA XREF: sub_15881A+202-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158A80:				; CODE XREF: sub_15881A+213-p
		LDA		byte_6AEB	; code used at 8000
		PHA				; code used at 8000
		TAX				; code used at 8000
loc_158A85:				; CODE XREF: sub_158A80+11-j
		LDA		byte_400,X	; code used at 8000
		CMP		#$77       ; code used at 8000
		BEQ		loc_158A94	; code used at 8000
		CMP		#$5F       ; code used at 8000
		BEQ		loc_158A94	; code used at 8000
		DEX				; code used at 8000
		JMP		loc_158A85	; code used at 8000
loc_158A94:				; CODE XREF: sub_158A80+A-j
					; sub_158A80+E-j
		STX		byte_6AEB	; code used at 8000
		LDA		#$5F       ; code used at 8000
		JSR		sub_158DB9	; code used at 8000
		LDA		byte_6AC1	; code used at 8000
		STA		byte_7F		; code used at 8000
		PLA				; code used at 8000
		STA		byte_6AEB	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158AA6:				; CODE XREF: sub_15881A:loc_15888C-j
		LDA		byte_6AC1	; code used at 8000
		LSR		; code used at 8000
		LDX		byte_7E		; code used at 8000
		CPX		#$66       ; code used at 8000
		BNE		loc_158AC3	; code used at 8000
		TAX				; code used at 8000
		LDA		_enemy_roster_index_list,X ; code used at 8000
		STA		byte_59		; code used at 8000
		LDA		byte_6AD5,X	; code used at 8000
		STA		byte_5A		; code used at 8000
		LDA		byte_6AD9,X	; code used at 8000
		STA		byte_5B		; code used at 8000
		JMP		loc_158AC8	; code used at 8000
loc_158AC3:				; CODE XREF: sub_158AA6+8-j
		STA		byte_64		; code used at 8000
		BRK
		.BYTE $6D, 7		; ofs 0x00068004, -> dst _b4_s2
loc_158AC8:				; CODE XREF: sub_158AA6+1A-j
		LDA		byte_6AC4	; code used at 8000
		JSR		sub_158B95	; code used at 8000
		PHA				; code used at 8000
		CLC				; code used at 8000
		ADC		#2		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_59		; code used at 8000
		BRK
		.BYTE $A4, 7		; ofs 0x00038018, -> dst _b2_sC
		JSR		sub_158BA1	; code used at 8000
		JSR		sub_158B5B	; code used at 8000
		PLA				; code used as ind data	at 8000
		BNE		loc_158B0B	; code used as ind data	at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#$66       ; code used at 8000
		BNE		loc_158B04	; code used at 8000
		LDA		#$5A       ; code used at 8000
		JSR		sub_158DB9	; code used at 8000
		LDA		byte_5A		; code used at 8000
		STA		word_4		; code used at 8000
		LDA		#0		; code used at 8000
		STA		word_4+1	; code used at 8000
		STA		word_6		; code used at 8000
		LDA		#3		; code used at 8000
		JSR		sub_158E72	; code used at 8000
		LDA		#$6C       ; code used at 8000
		JSR		sub_158DB9	; code used at 8000
		LDA		byte_5B		; code used at 8000
		STA		byte_5A		; code used at 8000
loc_158B04:				; CODE XREF: sub_158AA6+3F-j
		INC		byte_5A		; code used at 8000
		LDA		byte_5A		; code used as ind data	at 8000
		JSR		sub_158DB9	; code used at 8000
loc_158B0B:				; CODE XREF: sub_158AA6+39-j
		JMP		loc_15883A	; code used as ind data	at 8000
loc_158B0E:				; CODE XREF: sub_15881A:loc_158892-j
		LDA		byte_6AC1	; code used at 8000
		STA		byte_CF		; code used at 8000
		LDA		byte_6AC4	; code used at 8000
		JSR		sub_158B95	; code used at 8000
		CMP		#0		; code used at 8000
		BEQ		loc_158B26	; code used at 8000
		ASL		byte_CF		; code used at 8000
		AND		#1		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_CF		; code used at 8000
		STA		byte_CF		; code used at 8000
loc_158B26:				; CODE XREF: sub_158AA6+75-j
		JSR		sub_158BA1	; code used at 8000
		AND		#1		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_158B45,X	; code used at 8000
		JSR		_sram_bank0_select_ex ;	code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_158B40	; code used at 8000
		LDX		#4		; code used at 8000
		JSR		sub_158B9D	; code used at 8000
		JMP		sub_158B55	; code used at 8000
loc_158B40:				; CODE XREF: sub_158AA6+90-j
		LDY		#9		; code used at 8000
		JMP		sub_158B8A	; code used at 8000
byte_158B45:
		.BYTE $32,$33		; DATA XREF: sub_158AA6+86-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B47:				; CODE XREF: sub_15881A+82-p
					; sub_15881A+E1-p sub_15881A+17C-p
		JSR		sub_158B95	; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6AC1	; code used at 8000
		STA		byte_CE		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B52:				; CODE XREF: sub_15881A+ED-j
					; sub_15881A+162-j
					; sub_15881A:loc_1589D5-j
		JSR		sub_158BA1	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B55:				; CODE XREF: sub_15881A+153-j
					; sub_15881A:loc_1589D2-j
					; sub_15881A+220-j sub_158AA6+97-j
		JSR		sub_158B5B	; code used at 8000
		JMP		loc_15883A	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B5B:				; CODE XREF: sub_158AA6+35-p
					; sub_158B55-p
		LSR		byte_6AC4	; code used as ind data	at 8000
		LSR		byte_6AC4	; code used as ind data	at 8000
		LSR		byte_6AC4	; code used as ind data	at 8000
		LSR		byte_6AC4	; code used as ind data	at 8000
		LDY		#0		; code used at 8000
loc_158B69:				; CODE XREF: sub_158B5B+23-j
		LDA		word_4,Y	; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		AND		#$F0       ; code used as ind data at 8000
		CMP		#$A0       ; code used as ind data at 8000
		BNE		loc_158B76	; code used as ind data	at 8000
		JMP		sub_158EF8	; code used at 8000
loc_158B76:				; CODE XREF: sub_158B5B+16-j
		PLA				; code used as ind data	at 8000
		JSR		sub_158DB9	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
loc_158B7B:				; CODE XREF: sub_158EF8+38-j
		CPY		byte_6AC4	; code used as ind data	at 8000
		BNE		loc_158B69	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B81:				; CODE XREF: sub_15881A:loc_15887D-j
		LDA		byte_6AC4	; code used at 8000
		JSR		sub_158B95	; code used at 8000
		TAY				; code used as ind data	at 8000
		INY				; code used at 8000
		INY				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B8A:				; CODE XREF: sub_158AA6+9C-j
		LDA		#0		; code used at 8000
loc_158B8C:				; CODE XREF: sub_158B8A+6-j
		JSR		sub_158DB9	; code used at 8000
		DEY				; code used at 8000
		BNE		loc_158B8C	; code used at 8000
		JMP		loc_15883A	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B95:				; CODE XREF: sub_15881A+8D-p
					; sub_15881A+133-p sub_15881A+159-p
					; sub_15881A:loc_1589A0-p
					; sub_15881A+1FE-p sub_15881A+225-p
					; sub_158AA6+25-p sub_158AA6+70-p
					; sub_158B47-p sub_158B81+3-p
		CLC				; code used at 8000
		AND		#$60       ; code used at 8000
		ROL		; code used as ind data	at 8000
		ROL		; code used at 8000
		ROL		; code used as ind data	at 8000
		ROL		; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158B9D:				; CODE XREF: sub_15881A+197-p
					; sub_15881A+21D-p sub_158AA6+94-p
					; sub_15A7B5+6C-p sub_15A7B5+B4-p
					; sub_15A96E+3-p
		BRK
		.BYTE $A4, 7		; ofs 0x00038018, -> dst _b2_sC
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158BA1:				; CODE XREF: sub_15881A:loc_15882C-p
					; sub_15881A:loc_15883A-p
					; sub_15881A:loc_1588BA-p
					; sub_15881A+BD-p
					; sub_15881A:loc_15890C-p
					; sub_15881A+129-p sub_15881A+1A1-p
					; sub_15881A+1D2-p sub_158AA6+32-p
					; sub_158AA6:loc_158B26-p sub_158B52-p
					; sub_158F55+1C-p
		LDY		byte_6AC3	; code used as ind data	at 8000
		INC		byte_6AC3	; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		STA		byte_6AC4	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158BAD:				; CODE XREF: sub_1587CF+9-p
		LDY		#3		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		BPL		loc_158C01	; code used at 8000
loc_158BB3:				; CODE XREF: sub_158BAD+76-j
		STA		byte_6AC0	; code used at 8000
		AND		#7		; code used as ind data	at 8000
		CMP		#7		; code used at 8000
		BNE		loc_158BBE	; code used at 8000
		LDA		#8		; code used at 8000
loc_158BBE:				; CODE XREF: sub_158BAD+D-j
		STA		byte_6AEB	; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		AND		#3		; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
		STX		byte_6ABE	; code used at 8000
		LDA		#4		; code used at 8000
		STA		byte_6ABF	; code used at 8000
loc_158BD4:				; CODE XREF: sub_158BAD+3F-j
		JSR		sub_158C26	; code used as ind data	at 8000
		LDA		byte_6AC0	; code used as ind data	at 8000
		AND		#$18		; code used as ind data	at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6AEB	; code used as ind data	at 8000
		STA		byte_6AEB	; code used at 8000
		INC		byte_6ABF	; code used as ind data	at 8000
		DEC		byte_6ABE	; code used as ind data	at 8000
		BNE		loc_158BD4	; code used as ind data	at 8000
loc_158BEE:				; CODE XREF: sub_158BAD+5C-j
					; sub_158BAD+65-j sub_158BAD+70-j
		LDY		#5		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		AND		#$40       ; code used at 8000
		BEQ		locret_158C00	; code used at 8000
		LDA		byte_6AC6	; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6AE9	; code used at 8000
		JSR		sub_15881A	; code used at 8000
locret_158C00:				; CODE XREF: sub_158BAD+47-j
		RTS				; code used at 8000
loc_158C01:				; CODE XREF: sub_158BAD+4-j
		LDA		byte_7E		; code used at 8000
		CMP		#$34       ; code used as ind data at 8000
		BEQ		loc_158C16	; code used as ind data	at 8000
		CMP		#$3B       ; code used at 8000
		BNE		loc_158BEE	; code used at 8000
		JSR		_sram_bank0_sub28 ; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#5		; code used at 8000
		BCC		loc_158BEE	; code used at 8000
		BCS		loc_158C1F	; code used at 8000
loc_158C16:				; CODE XREF: sub_158BAD+58-j
		JSR		_sram_bank0_sub32 ; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		byte_C6		; code used at 8000
		BCC		loc_158BEE	; code used at 8000
loc_158C1F:				; CODE XREF: sub_158BAD+67-j
		LDY		#3		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		JMP		loc_158BB3	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158C26:				; CODE XREF: sub_158BAD:loc_158BD4-p
		LDY		byte_6ABF	; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		AND		#$3F       ; code used as ind data at 8000
		CMP		#$20       ; code used at 8000
		BCC		loc_158C42	; code used at 8000
		CMP		#$24       ; code used at 8000
		BCC		loc_158C68	; code used as ind data	at 8000
		LDX		#4		; code used at 8000
		CMP		#$25       ; code used at 8000
		BCC		loc_158C6E	; code used at 8000
		LDX		#8		; code used at 8000
		CMP		#$26       ; code used at 8000
		BCC		loc_158C6E	; code used at 8000
		RTS
loc_158C42:				; CODE XREF: sub_158C26+9-j
		LDY		#0		; code used at 8000
		TAX				; code used at 8000
		CPX		#0		; code used at 8000
		BEQ		loc_158C54	; code used at 8000
loc_158C49:				; CODE XREF: sub_158C26+29-j
					; sub_158C26+2C-j
		LDA		_txt_window_names,Y	; code used at 8000
		INY				; code used at 8000
		CMP		#$FF		; code used at 8000
		BNE		loc_158C49	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_158C49	; code used at 8000
loc_158C54:				; CODE XREF: sub_158C26+21-j
		LDA		#$79       ; code used at 8000
		JSR		sub_158DB9	; code used at 8000
loc_158C59:				; CODE XREF: sub_158C26+3E-j
		LDA		_txt_window_names,Y	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		locret_158C67	; code used at 8000
		JSR		sub_158DB9	; code used at 8000
		INY				; code used at 8000
		JMP		loc_158C59	; code used at 8000
locret_158C67:				; CODE XREF: sub_158C26+38-j
		RTS				; code used at 8000
loc_158C68:				; CODE XREF: sub_158C26+D-j
		SBC		#$1F		; code used as ind data	at 8000
		STA		byte_CE		; code used at 8000
		LDX		#4		; code used as ind data	at 8000
loc_158C6E:				; CODE XREF: sub_158C26+13-j
					; sub_158C26+19-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		_sram_bank0_subF ; code	used as	ind data at 8000
		LDA		#$79       ; code used at 8000
		JSR		sub_158DB9	; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		STA		_tmp12+1	; code used as ind data	at 8000
		LDY		#0		; code used as ind data	at 8000
loc_158C7D:				; CODE XREF: sub_158C26+60-j
		LDA		word_4,Y	; code used as ind data	at 8000
		JSR		sub_158DB9	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		DEC		_tmp12+1	; code used as ind data	at 8000
		BNE		loc_158C7D	; code used as ind data	at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158C89:				; CODE XREF: sub_15881A+90-p
					; sub_15881A+138-p sub_15881A+15C-p
					; sub_15881A+189-p
		PHA				; code used as ind data	at 8000
		STA		byte_CE		; code used at 8000
		TYA				; code used at 8000
		PHA				; code used as ind data	at 8000
		LDY		#8		; code used at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		AND		#$40       ; code used at 8000
		BEQ		loc_158C9B	; code used as ind data	at 8000
		LDA		byte_6AC7	; code used at 8000
		STA		byte_CE		; code used at 8000
loc_158C9B:				; CODE XREF: sub_158C89+B-j
		PLA				; code used at 8000
		TAY				; code used at 8000
		PLA				; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158C9F:				; CODE XREF: sub_1587CF-p
		JSR		_window_display_init	; code used as ind data	at 8000
		LDA		byte_7E		; code used as ind data	at 8000
		CMP		#$3E       ; code used at 8000
		BEQ		loc_158CAC	; code used at 8000
		CMP		#$3D       ; code used at 8000
		BNE		locret_158CB8	; code used at 8000
loc_158CAC:				; CODE XREF: sub_158C9F+7-j
		LDX		#0		; code used at 8000
		STX		byte_80		; code used at 8000
		STX		byte_81		; code used as ind data	at 8000
		STX		byte_6ACB	; code used as ind data	at 8000
		JSR		_bE_s5		; code used as ind data	at 8000
locret_158CB8:				; CODE XREF: sub_158C9F+B-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_window_display_init:				; CODE XREF: sub_158C9F-p sub_159E55+3-p
		LDA		byte_7E		; code used as ind data	at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		_windows_lib,X	; code used as ind data	at 8000
		STA		word_6C		; code used at 8000
		LDA		_windows_lib+1,X	; code used at 8000
		STA		word_6C+1	; code used as ind data	at 8000
		LDA		byte_CE		; code used as ind data	at 8000
		STA		byte_6AC7	; code used as ind data	at 8000
		LDY		#2		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used as ind data	at 8000
		STA		byte_470	; code used as ind data	at 8000
		STA		byte_6AC8	; code used as ind data	at 8000
		LDY		#0		; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		BPL		loc_158CF5	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		LDA		(word_6C),Y	; code used at 8000
		STA		byte_470	; code used at 8000
		STA		byte_6AC8	; code used at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		PHA				; code used as ind data	at 8000
		INY				; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		STA		word_6C+1	; code used as ind data	at 8000
		PLA				; code used at 8000
		STA		word_6C		; code used at 8000
		LDY		#0		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
loc_158CF5:				; CODE XREF: _window_display_init+21-j
		STA		byte_6AE9	; code used at 8000
		LSR		; code used at 8000
		ORA		#$10		; code used at 8000
		STA		byte_471	; code used as ind data	at 8000
		JSR		sub_158D3C	; code used as ind data	at 8000
		LDA		#$FF		; code used at 8000
		STA		byte_8E		; code used as ind data	at 8000
		STA		byte_7F		; code used at 8000
		LDY		#4		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		CLC				; code used at 8000
		ROL		; code used at 8000
		ROL		; code used at 8000
		ROL		; code used at 8000
		AND		#3		; code used at 8000
		STA		byte_6AEB	; code used as ind data	at 8000
		STA		byte_6AC6	; code used at 8000
		LDA		byte_6AE9	; code used at 8000
		ASL		; code used as ind data	at 8000
		CLC				; code used at 8000
		ADC		byte_6AEB	; code used as ind data	at 8000
		STA		byte_6AC2	; code used as ind data	at 8000
		INC		byte_6AC2	; code used as ind data	at 8000
		INC		byte_6AC6	; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		byte_6AEB	; code used at 8000
		STA		byte_6AC1	; code used at 8000
		STA		byte_6AC9	; code used as ind data	at 8000
		STA		byte_6ACA	; code used as ind data	at 8000
		LDA		#$B		; code used at 8000
		STA		byte_6AC3	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158D3C:				; CODE XREF: _window_display_init+45-p
		LDY		#1		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		CMP		#$10		; code used as ind data	at 8000
		BCS		loc_158D4C	; code used as ind data	at 8000
		STA		byte_6AEA	; code used at 8000
		STA		word_7C+1	; code used as ind data	at 8000
		DEC		word_7C+1	; code used at 8000
		RTS				; code used at 8000
loc_158D4C:				; CODE XREF: sub_158D3C+6-j
		SBC		#$10		; code used at 8000
		CMP		#7		; code used at 8000
		BEQ		loc_158D60	; code used at 8000
		CMP		#8		; code used at 8000
		BEQ		loc_158D68	; code used at 8000
		CMP		#9		; code used at 8000
		BEQ		loc_158D72	; code used at 8000
		CMP		#$A		; code used at 8000
		BEQ		loc_158D85	; code used at 8000
		BNE		loc_158D98	; code used at 8000
loc_158D60:				; CODE XREF: sub_158D3C+14-j
		BRK
		.BYTE $D, $17		; ofs 0x00140028, -> dst _bD_s14
		STA		word_4		; code used at 8000
		JMP		loc_158DA7	; code used at 8000
loc_158D68:				; CODE XREF: sub_158D3C+18-j
		BRK
		.BYTE $6C, 7		; ofs 0x00068002, -> dst _b4_s1
		LDA		byte_59		; code used at 8000
		STA		word_4		; code used at 8000
		JMP		loc_158DA7	; code used at 8000
loc_158D72:				; CODE XREF: sub_158D3C+1C-j
		LDX		#1		; code used at 8000
loc_158D74:				; CODE XREF: sub_158D3C+42-j
		LDA		_enemy_roster_index_list,X ; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		loc_158D80	; code used at 8000
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BNE		loc_158D74	; code used at 8000
loc_158D80:				; CODE XREF: sub_158D3C+3D-j
		STX		word_4		; code used at 8000
		JMP		loc_158DA7	; code used at 8000
loc_158D85:				; CODE XREF: sub_158D3C+20-j
		JSR		_sram_bank0_sub32 ; code used at 8000
		LDA		#7		; code used at 8000
		STA		byte_6AEA	; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#6		; code used at 8000
		BCC		loc_158D95	; code used at 8000
		LDA		#6		; code used at 8000
loc_158D95:				; CODE XREF: sub_158D3C+55-j
		STA		word_7C+1	; code used at 8000
		RTS				; code used at 8000
loc_158D98:				; CODE XREF: sub_158D3C+22-j
		PHA				; code used at 8000
		TAX				; code used at 8000
		LDA		byte_158DB2,X	; code used at 8000
		JSR		_sram_bank0_select_ex ;	code used at 8000
		PLA				; code used at 8000
		CMP		#2		; code used at 8000
		BCC		loc_158DA7	; code used at 8000
		INC		word_4		; code used at 8000
loc_158DA7:				; CODE XREF: sub_158D3C+29-j
					; sub_158D3C+33-j sub_158D3C+46-j
					; sub_158D3C+67-j
		LDA		word_4		; code used at 8000
		STA		byte_6AEA	; code used at 8000
		STA		word_7C+1	; code used at 8000
		INC		byte_6AEA	; code used at 8000
		RTS				; code used at 8000
byte_158DB2:
		.BYTE $2F,$26,$1D,$1F,$1E,$20,$2F ; DATA XREF: sub_158D3C+5E-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158DB9:				; CODE XREF: sub_15881A:loc_158870-p
					; sub_15881A+10A-p sub_15881A+23C-p
					; sub_158A80+19-p sub_158AA6+43-p
					; sub_158AA6+57-p sub_158AA6+62-p
					; sub_158B5B+1C-p
					; sub_158B8A:loc_158B8C-p
					; sub_158C26+30-p sub_158C26+3A-p
					; sub_158C26+4F-p sub_158C26+5A-p
					; sub_158EA8+11-j sub_158EF8+26-p
					; sub_158F55+11-p sub_158F55+19-p
		LDX		byte_6AEB	; code used as ind data	at 8000
		BNE		loc_158DC2	; code used as ind data	at 8000
		CMP		#$79       ; code used at 8000
		BEQ		loc_158DC5	; code used at 8000
loc_158DC2:				; CODE XREF: sub_158DB9+3-j
		STA		byte_400,X	; code used as ind data	at 8000
loc_158DC5:				; CODE XREF: sub_158DB9+7-j
		INC		byte_6AEB	; code used as ind data	at 8000
		CMP		#$64       ; code used as ind data at 8000
		BNE		locret_158DD6	; code used as ind data	at 8000
		PHA				; code used at 8000
		LDA		byte_6AC9	; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_6AC9	; code used at 8000
		PLA				; code used at 8000
locret_158DD6:				; CODE XREF: sub_158DB9+11-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158DD7:				; CODE XREF: sub_1587CF+3-p
		LDY		#$6F       ; code used at 8000
		LDX		#0		; code used at 8000
		BEQ		loc_158DE4	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158DDD:				; CODE XREF: sub_1587CF:loc_1587DB-p
		LDA		byte_6AE9	; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		TAX				; code used at 8000
		TAY				; code used at 8000
		DEY				; code used at 8000
loc_158DE4:				; CODE XREF: sub_158DD7+4-j
		LDA		#0		; code used as ind data	at 8000
loc_158DE6:				; CODE XREF: sub_158DDD+E-j
		STA		byte_400,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		DEY				; code used as ind data	at 8000
		BPL		loc_158DE6	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_158DEE:
		LDA		#0
		TAX
loc_158DF1:				; CODE XREF: sub_158DEE+9-j
		STA		byte_460,X
		INX
		CPX		#$10
		BNE		loc_158DF1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158DFA:				; CODE XREF: sub_1587CF+6-p
		LDA		#$7A       ; code used as ind data at 8000
		STA		byte_400	; code used at 8000
		LDX		byte_6AE9	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		LDA		#$7D       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		DEX				; code used as ind data	at 8000
		LDA		#$78       ; code used as ind data at 8000
loc_158E0B:				; CODE XREF: sub_158DFA+15-j
		STA		byte_400,X	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		BNE		loc_158E0B	; code used as ind data	at 8000
		LDX		byte_6AE9	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158E14:				; CODE XREF: sub_158E26+5-p
					; sub_158E26+E-j
		LDA		#$77       ; code used as ind data at 8000
		STA		byte_400,X	; code used as ind data	at 8000
		TXA				; code used as ind data	at 8000
		CLC				; code used at 8000
		ADC		byte_6AE9	; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		DEX				; code used at 8000
		LDA		#$7C       ; code used as ind data at 8000
		STA		byte_400,X	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158E26:				; CODE XREF: sub_1587CF+F-p
		LDA		byte_6AE9	; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		JSR		sub_158E14	; code used at 8000
		INX				; code used as ind data	at 8000
		LDA		byte_6AEA	; code used as ind data	at 8000
		CMP		#2		; code used at 8000
		BNE		sub_158E14	; code used as ind data	at 8000
		LDA		#$7B       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		TXA				; code used at 8000
		CLC				; code used at 8000
		ADC		byte_6AE9	; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		LDA		#$7F       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		LDY		byte_6AE9	; code used at 8000
		DEY				; code used at 8000
		DEY				; code used at 8000
		LDA		#$7E       ; code used at 8000
loc_158E4F:				; CODE XREF: sub_158E26+2E-j
		STA		byte_400,X	; code used at 8000
		DEX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_158E4F	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158E57:				; CODE XREF: sub_1587CF+18-p
		LDA		byte_470	; code used at 8000
		CLC				; code used at 8000
		ADC		#$10		; code used at 8000
		STA		byte_470	; code used at 8000
		LDA		byte_6AE9	; code used at 8000
		ASL		; code used at 8000
		TAY				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
loc_158E67:				; CODE XREF: sub_158E57+18-j
		LDA		_ram_pal_buf+$18,X ; code used at 8000
		STA		_ram_pal_buf+$18,Y ; code used at 8000
		DEX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_158E67	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158E72:				; CODE XREF: sub_15881A+A3-p
					; sub_158AA6+52-p
		PHA				; code used at 8000
		JSR		_bE_s14		; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		word_6+1	; code used as ind data	at 8000
		LDX		#0		; code used as ind data	at 8000
loc_158E7C:				; CODE XREF: sub_158E72+F-j
		INC		byte_8,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#8		; code used as ind data	at 8000
		BNE		loc_158E7C	; code used as ind data	at 8000
		PLA				; code used at 8000
		EOR		#7		; code used as ind data	at 8000
		TAY				; code used at 8000
		TAX				; code used at 8000
loc_158E88:				; CODE XREF: sub_158E72+1B-j
		LDA		byte_8,X	; code used as ind data	at 8000
		BNE		loc_158E9C	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		BPL		loc_158E88	; code used as ind data	at 8000
		TYA				; code used at 8000
loc_158E90:				; CODE XREF: sub_158E72+27-j
		LDA		byte_9,Y	; code used as ind data	at 8000
		JSR		sub_158EA8	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		CPY		#7		; code used as ind data	at 8000
		BNE		loc_158E90	; code used as ind data	at 8000
		RTS				; code used at 8000
loc_158E9C:				; CODE XREF: sub_158E72+18-j
		TYA
		LDA		#$A
loc_158E9F:				; CODE XREF: sub_158E72+33-j
		JSR		sub_158EA8
		INY
		CPY		#7
		BNE		loc_158E9F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158EA8:				; CODE XREF: sub_158E72+21-p
					; sub_158E72:loc_158E9F-p
		PHA				; code used as ind data	at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		BEQ		loc_158EB8	; code used as ind data	at 8000
		PLA
		LDX		byte_6AEB
		STA		byte_580,X
		INC		byte_6AEB
		RTS
loc_158EB8:				; CODE XREF: sub_158EA8+3-j
		PLA				; code used as ind data	at 8000
		JMP		sub_158DB9	; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s14:				; CODE XREF: sub_206A9:loc_206C1-P
					; sub_158E72+1-p sub_15A91C+A-p
					; DATA XREF: BANKE:8028-o
		LDX		#$FF		; code used as ind data	at 8000
		TXA				; code used at 8000
loc_158EBF:				; CODE XREF: _bE_s14+8-j
		STA		byte_9,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#7		; code used as ind data	at 8000
		BNE		loc_158EBF	; code used as ind data	at 8000
loc_158EC6:				; CODE XREF: _bE_s14+1A-j
		JSR		sub_158ED9	; code used as ind data	at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		STA		byte_8,X	; code used as ind data	at 8000
		LDA		word_4		; code used as ind data	at 8000
		ORA		word_4+1	; code used as ind data	at 8000
		ORA		word_6		; code used as ind data	at 8000
		BEQ		locret_158ED8	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		BPL		loc_158EC6	; code used at 8000
locret_158ED8:				; CODE XREF: _bE_s14+17-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158ED9:				; CODE XREF: _bE_s14:loc_158EC6-p
		LDY		#$18		; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		word_6+1	; code used as ind data	at 8000
loc_158EDF:				; CODE XREF: sub_158ED9+1A-j
		ASL		word_4		; code used as ind data	at 8000
		ROL		word_4+1	; code used as ind data	at 8000
		ROL		word_6		; code used as ind data	at 8000
		ROL		word_6+1	; code used as ind data	at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		#$A		; code used as ind data	at 8000
		BCC		loc_158EF2	; code used as ind data	at 8000
		STA		word_6+1	; code used as ind data	at 8000
		INC		word_4		; code used at 8000
loc_158EF2:				; CODE XREF: sub_158ED9+13-j
		DEY				; code used as ind data	at 8000
		BNE		loc_158EDF	; code used as ind data	at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_158EF8:				; CODE XREF: sub_158B5B+18-j
		PLA				; code used at 8000
		AND		#$F		; code used at 8000
		STA		byte_6A34	; code used at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		PHA				; code used at 8000
		LDA		word_6		; code used at 8000
		PHA				; code used as ind data	at 8000
		LDA		byte_6A34	; code used as ind data	at 8000
		STY		byte_6A34	; code used at 8000
		ASL		; code used as ind data	at 8000
		TAX				; code used at 8000
		LDA		off_158F33,X	; code used at 8000
		STA		word_6		; code used as ind data	at 8000
		LDA		off_158F33+1,X	; code used at 8000
		STA		word_6+1	; code used at 8000
		LDY		#0		; code used at 8000
loc_158F18:				; CODE XREF: sub_158EF8+2D-j
		LDA		(word_6),Y	; code used as ind data	at 8000
		CMP		#$FE       ; code used as ind data at 8000
		BEQ		loc_158F27	; code used as ind data	at 8000
		JSR		sub_158DB9	; code used at 8000
		INY				; code used at 8000
		INC		byte_6A34	; code used at 8000
		BNE		loc_158F18	; code used as ind data	at 8000
loc_158F27:				; CODE XREF: sub_158EF8+24-j
		LDY		byte_6A34	; code used at 8000
		PLA				; code used at 8000
		STA		word_6		; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		STA		word_6+1	; code used at 8000
		JMP		loc_158B7B	; code used at 8000
off_158F33:
		.WORD byte_158F43	; DATA XREF: sub_158EF8+14-r
					; sub_158EF8+19-r
					; data used at 8000
		.WORD byte_158F45	; data used at 8000
		.WORD byte_158F48
		.WORD byte_158F4B
		.WORD byte_158F4D	; data used at 8000
		.WORD byte_158F4F	; data used at 8000
		.WORD byte_158F51
		.WORD byte_158F53
byte_158F43:
		.BYTE $23,$FE		; DATA XREF: BANKE:off_158F33-o
					; ind data used	at 8000
byte_158F45:
		.BYTE  $B,$18,$FE	; DATA XREF: BANKE:8F35-o
					; ind data used	at 8000
byte_158F48:
		.BYTE $19,$16,$FE	; DATA XREF: BANKE:8F37-o
byte_158F4B:
		.BYTE $13,$FE		; DATA XREF: BANKE:8F39-o
byte_158F4D:
		.BYTE	0,$FE		; DATA XREF: BANKE:8F3B-o
					; ind data used	at 8000
byte_158F4F:
		.BYTE	0,$FE		; DATA XREF: BANKE:8F3D-o
					; ind data used	at 8000
byte_158F51:
		.BYTE  $B,$FE		; DATA XREF: BANKE:8F3F-o
byte_158F53:
		.BYTE	0,$FE		; DATA XREF: BANKE:8F41-o

; =============== S U B	R O U T	I N E =======================================
sub_158F55:				; CODE XREF: sub_15881A+9D-p
		CMP		#$A		; code used at 8000
		BNE		locret_158F79	; code used at 8000
		LDX		word_4+1	; code used at 8000
		BEQ		locret_158F79	; code used at 8000
		DEX				; code used at 8000
		TXA				; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_158F7A,X	; code used at 8000
		STX		word_4+1	; code used at 8000
		JSR		sub_158DB9	; code used at 8000
		LDX		word_4+1	; code used at 8000
		LDA		byte_158F7A+1,X	; code used at 8000
		JSR		sub_158DB9	; code used at 8000
		JSR		sub_158BA1	; code used at 8000
		PLA				; code used at 8000
		PLA				; code used at 8000
		JMP		loc_15883A	; code used at 8000
locret_158F79:				; CODE XREF: sub_158F55+2-j
					; sub_158F55+6-j
		RTS				; code used at 8000
byte_158F7A:
		.BYTE $34,$33,$32,$31,$28,$29,$37,$30,$27,$2A ;	DATA XREF: sub_158F55+C-r
					; sub_158F55+16-r
					; data used at 8000
		
_windows_lib:
		.WORD byte_15905C	; DATA XREF: _window_display_init+4-r
					; _window_display_init+9-r
					; data used at 8000
		.WORD byte_159074
		.WORD byte_159099	; data used at 8000
		.WORD byte_1590CB	; data used at 8000
		.WORD byte_15910A	; data used at 8000
		.WORD byte_15910E
		.WORD byte_159112	; data used at 8000
		.WORD byte_159116	; data used at 8000
		.WORD byte_15911A	; data used at 8000
		.WORD byte_159147	; data used at 8000
		.WORD byte_1591FA	; data used at 8000
		.WORD byte_159222	; data used at 8000
		.WORD byte_159233	; data used at 8000
		.WORD byte_159241	; data used at 8000
		.WORD byte_159272	; data used at 8000
		.WORD byte_15929E
		.WORD byte_1592E3
		.WORD byte_159341	; data used at 8000
		.WORD byte_1593B8	; data used at 8000
		.WORD byte_1593C7	; data used at 8000
		.WORD byte_1593F1	; data used at 8000
		.WORD byte_159420	; data used at 8000
		.WORD byte_159440	; data used at 8000
		.WORD byte_159454	; data used at 8000
		.WORD byte_159479	; data used at 8000
		.WORD byte_159499	; data used at 8000
		.WORD byte_1594BB	; data used at 8000
		.WORD byte_1594DB	; data used at 8000
		.WORD byte_1594F7	; data used at 8000
		.WORD byte_1594FB	; data used at 8000
		.WORD byte_15950D	; data used at 8000
		.WORD byte_159531	; data used at 8000
		.WORD byte_15954A	; data used at 8000
		.WORD byte_15955F	; data used at 8000
		.WORD byte_159574
		.WORD byte_15958E	; data used at 8000
		.WORD byte_15959C	; data used at 8000
		.WORD byte_1595AA	; data used at 8000
		.WORD byte_1595BD	; data used at 8000
		.WORD byte_1595D0	; data used at 8000
		.WORD byte_1595E3	; data used at 8000
		.WORD byte_1595F6	; data used at 8000
		.WORD byte_159604
		.WORD byte_159604	; data used at 8000
		.WORD byte_159612	; data used at 8000
		.WORD byte_159620	; data used at 8000
		.WORD byte_159633	; data used at 8000
		.WORD byte_159641
		.WORD byte_159641
		.WORD byte_159641
		.WORD byte_159641
		.WORD byte_159641
		.WORD byte_159641	; data used at 8000
		.WORD byte_15965B
		.WORD byte_159675	; data used at 8000
		.WORD byte_15968A
		.WORD byte_15969B	; data used at 8000
		.WORD byte_1596A9	; data used at 8000
		.WORD byte_1596BC
		.WORD byte_1596BC	; data used at 8000
		.WORD byte_1596CF	; data used at 8000
		.WORD byte_1596DD	; data used at 8000
		.WORD byte_1596E9	; data used at 8000
		.WORD byte_1596ED	; data used at 8000
		.WORD byte_159700	; data used at 8000
		.WORD byte_15978C	; data used at 8000
		.WORD byte_1597A1	; data used at 8000
		.WORD byte_1597B8	; data used at 8000
		.WORD byte_1597F4	; data used at 8000
		.WORD byte_159819	; data used at 8000
		.WORD byte_15981D	; data used at 8000
		.WORD byte_159849
		.WORD byte_159881
		.WORD byte_159881
		.WORD byte_159890
		.WORD byte_1598A1	; data used at 8000
		.WORD byte_1598B4
		.WORD byte_15968A	; data used at 8000
		.WORD byte_1598DD	; data used at 8000
		.WORD byte_1598EB
		.WORD byte_15991E
		.WORD byte_159939
		.WORD byte_159954
		.WORD byte_15997F	; data used at 8000
		.WORD byte_15999A	; data used at 8000
		.WORD byte_1599C5	; data used at 8000
		.WORD byte_1599F0	; data used at 8000
		.WORD byte_159A2B	; data used at 8000
		.WORD byte_159A7F	; data used at 8000
		.WORD byte_159A9B	; data used at 8000
		.WORD byte_159AD8	; data used at 8000
		.WORD byte_159AF6
		.WORD byte_159B14	; data used at 8000
		.WORD byte_159B45	; data used at 8000
		.WORD byte_159B63
		.WORD byte_159B94	; data used at 8000
		.WORD byte_159BC5	; data used at 8000
		.WORD byte_159C09	; data used at 8000
		.WORD byte_159C67	; data used at 8000
		.WORD byte_159CA6	; data used at 8000
		.WORD byte_159819
		.WORD byte_159CC3	; data used at 8000
		.WORD byte_159CD4	; data used at 8000
		.WORD byte_159CE7	; data used at 8000
		.WORD byte_159CFA	; data used at 8000
		.WORD byte_159CFE	; data used at 8000
		.WORD byte_159D0A
		.WORD byte_159D18	; data used at 8000
byte_15905C:
		.BYTE	8,  4,$AA,$81,$60,$21,$22,$23,	0,  0,	0,$2C,$80,  3,$FF,$31
					; DATA XREF: BANKE:_windows_lib-o
					; BANKE:910Co
		.BYTE $81,  3,$FF,$92,$20,$8D,	2,$FF ;	ind data used at 8000
byte_159074:
		.BYTE  $C,  4,$A8,$A0,$20,$21,$22,$23,	0,  0,	0,$2C,$80,  3,	0,$2C
					; DATA XREF: BANKE:8F86-o BANKE:9110o
		.BYTE $A0,  3,$FF,$31,$81,  3,	0,$31,$A1,  3,$FF,$92,$20,$8D,	2,  0
		.BYTE $B2,$20,$AD,  2,$FF
byte_159099:
		.BYTE $12,  4,$A5,$C1,$60,$21,$22,$23,	0,  0,	0,$2C,$80,  3,	0,$2C
					; DATA XREF: BANKE:8F88-o BANKE:9114o
		.BYTE $A0,  3,	0,$2C,$C0,  3,$FF,$31,$81,  3,	0,$31,$A1,  3,	0,$31 ;	ind data used at 8000
		.BYTE $C1,  3,$FF,$92,$20,$8D,	2,  0,$B2,$20,$AD,  2,	0,$D2,$20,$CD
		.BYTE	2,$FF
byte_1590CB:
		.BYTE $16,  4,$A3,$E0,$20,$21,$22,$23,	0,  0,	0,$2C,$80,  3,	0,$2C
					; DATA XREF: BANKE:8F8A-o BANKE:9118o
		.BYTE $A0,  3,	0,$2C,$C0,  3,	0,$2C,$E0,  3,$FF,$31,$81,  3,	0,$31 ;	ind data used at 8000
		.BYTE $A1,  3,	0,$31,$C1,  3,	0,$31,$E1,  3,$FF,$92,$20,$8D,	2,  0
		.BYTE $B2,$20,$AD,  2,	0,$D2,$20,$CD,	2,  0,$F2,$20,$ED,  2,$FF
byte_15910A:
		.BYTE $80,$12		; DATA XREF: BANKE:8F8C-o
					; ind data used	at 8000
		.WORD byte_15905C
byte_15910E:
		.BYTE $80,$12		; DATA XREF: BANKE:8F8E-o
		.WORD byte_159074
byte_159112:
		.BYTE $80,$12		; DATA XREF: BANKE:8F90-o
					; ind data used	at 8000
		.WORD byte_159099
byte_159116:
		.BYTE $80,$12		; DATA XREF: BANKE:8F92-o
					; ind data used	at 8000
		.WORD byte_1590CB
byte_15911A:
		.BYTE  $C,  6,$32,$81,$25,$21,$22,$23,$40,  0,	0,  0,$92,$80,$FF,$37
					; DATA XREF: BANKE:8F94-o
		.BYTE $29,$3C,$75,$94,$60,$FF,$30,$29,$3A,$29,$30,$75,$8D,  2,$FF,$9E ;	ind data used at 8000
		.BYTE $2C,$34,$75,$80,	3,$FF,$9E,$31,$34,$75,$81,  3,$FF
byte_159147:
		.BYTE $14, $B,$34,  0,$20,$61,$22,$23,$40,  0,	0,$FE,	0,$37,$1E,$1C
					; DATA XREF: BANKE:8F96-o
		.BYTE  $F,$18,$11,$1E,$12,$75,$84,  3,$FF,$FF,$FE,$9E,$25,$11,$13,$16 ;	ind data used at 8000
		.BYTE $13,$1E,$23,$75,$85,  3,$FF,$FF,$FE,  0,$3A,$13,$1E, $B,$16,$13
		.BYTE $1E,$23,$75,$86,	3,$FF,$FF,$9E,$2D,$18,$1E, $F,$16,$16,$13,$11
		.BYTE  $F,$18, $D, $F,$75,$87,	3,$FF,$FF,$FE,$FE,$30,$1F, $D,$15,$75
		.BYTE $88,  3,$FF,$FF,$9E,$31, $B,$22,$13,$17,$1F,$17,	0,$2C,$6C,$34
		.BYTE $6C,$75,$82,  3,$FF,$FF,$9E,$31, $B,$22,$13,$17,$1F,$17,	0,$31
		.BYTE $6C,$34,$6C,$75,$83,  3,$FF,$FF,$9E,$25,$1E,$1E, $B, $D,$15,  0
		.BYTE $34,$19,$21, $F,$1C,$75,$89,  3,$FF,$FF,	0,$28, $F,$10, $F,$18
		.BYTE  $D, $F,	0,$34,$19,$21, $F,$1C,$75,$8A,	3,$FF,$FF,$29,$22,$1A
		.BYTE  $F,$1C,$13, $F,$18, $D, $F,$FF,$DE,$34,$19,$13,$18,$1E,$1D,$75
		.BYTE $8C,  7,$FF
byte_1591FA:
		.BYTE $10,  5,$92,  0,$60,$61,$22,$23,$C0,  0,	0,$96,$D5,$FF,$9E,$B6
					; DATA XREF: BANKE:8F98-o
		.BYTE $B5,$FF,$96,$D6,$FF,$9E,$B6,$B6,$FF,$96,$D7,$FF,$9E,$B6,$B7,$FF ;	ind data used at 8000
		.BYTE $96,$D8,$FF,$9E,$B6,$B8,$FF,$FF
byte_159222:
		.BYTE $18, $D,$12,$87,$4E,$A1,$22,$23,$40,  0,	0,$DA,$90,$9E,$FA,$90
					; DATA XREF: BANKE:8F9A-o
		.BYTE $FF		; ind data used	at 8000
byte_159233:
		.BYTE  $C,  9,$18,$82,$40,$A1,$22,$23,$40,  0,	0,$9A,$91,$FF
					; DATA XREF: BANKE:8F9C-o
					; ind data used	at 8000
byte_159241:
		.BYTE  $A,  4,$31,  0,$20,$61,$22,$23,$40,  0,	0,$25,$38,$38,$25,$27
					; DATA XREF: BANKE:8F9E-o
		.BYTE $2F,$FF,	0,$34,$33,$3B,$29,$36,$FF,$FE,$89,  3,$FF,$28,$29,$2A ;	ind data used at 8000
		.BYTE $29,$32,$27,$29,$FF,  0,$34,$33,$3B,$29,$36,$FF,$FE,$8A,	3,$FF
		.BYTE $FF
byte_159272:
		.BYTE	8,  6,$47,  0,$60,$61,$22,$23,	0,  0,	0,$FF,$90,$40,$FF,$FF
					; DATA XREF: BANKE:8FA0-o
		.BYTE $2C,$80,	3,$FF,	0,$58,$58,$58,$FF,  0,$82,  3,$FF,$FF,$31,$81 ;	ind data used at 8000
		.BYTE	3,$FF,	0,$58,$58,$58,$FF,  0,$83,  3,$FF,$FF
byte_15929E:
		.BYTE  $C,  6,$45,  0,$20,$61,$22,$23,	0,  0,	0,$FF,$90,$40,	0,$B0
					; DATA XREF: BANKE:8FA2-o
		.BYTE $40,$FF,$FF,$2C,$80,  3,	0,$2C,$A0,  3,$FF,  0,$58,$58,$58,$9E
		.BYTE $58,$58,$58,$FF,	0,$82,	3,$9E,$A2,  3,$FF,$FF,$31,$81,	3,  0
		.BYTE $31,$A1,	3,$FF,	0,$58,$58,$58,$9E,$58,$58,$58,$FF,  0,$83,  3
		.BYTE $9E,$A3,	3,$FF,$FF
byte_1592E3:
		.BYTE $12,  6,$44,  0,$60,$61,$22,$23,	0,  0,	0,$FF,$90,$40,	0,$B0
					; DATA XREF: BANKE:8FA4-o
		.BYTE $40,  0,$D0,$40,$FF,$FF,$2C,$80,	3,  0,$2C,$A0,	3,  0,$2C,$C0
		.BYTE	3,$FF,	0,$58,$58,$58,$9E,$58,$58,$58,$9E,$58,$58,$58,$FF,  0
		.BYTE $82,  3,$9E,$A2,	3,$9E,$C2,  3,$FF,$FF,$31,$81,	3,  0,$31,$A1
		.BYTE	3,  0,$31,$C1,	3,$FF,	0,$58,$58,$58,$9E,$58,$58,$58,$9E,$58
		.BYTE $58,$58,$FF,  0,$83,  3,$9E,$A3,	3,$9E,$C3,  3,$FF,$FF
byte_159341:
		.BYTE $16,  6,$42,  0,$20,$61,$22,$23,	0,  0,	0,$FF,$90,$40,	0,$B0
					; DATA XREF: BANKE:8FA6-o
		.BYTE $40,  0,$D0,$40,	0,$F0,$40,$FF,$FF,$2C,$80,  3,	0,$2C,$A0,  3 ;	ind data used at 8000
		.BYTE	0,$2C,$C0,  3,	0,$2C,$E0,  3,$FF,  0,$58,$58,$58,$9E,$58,$58
		.BYTE $58,$9E,$58,$58,$58,$9E,$58,$58,$58,$FF,	0,$82,	3,$9E,$A2,  3
		.BYTE $9E,$C2,	3,$9E,$E2,  3,$FF,$FF,$31,$81,	3,  0,$31,$A1,	3,  0
		.BYTE $31,$C1,	3,  0,$31,$E1,	3,$FF,	0,$58,$58,$58,$9E,$58,$58,$58
		.BYTE $9E,$58,$58,$58,$9E,$58,$58,$58,$FF,  0,$83,  3,$9E,$A3,	3,$9E
		.BYTE $C3,  3,$9E,$E3,	3,$FF,$FF
byte_1593B8:
		.BYTE	8,  2,$1B,  0,$20,$21,$22,$23,$40,  0,	0,$2B,$8B,  5,$FF
					; DATA XREF: BANKE:8FA8-o BANKE:9CFCo
					; ind data used	at 8000
byte_1593C7:
		.BYTE $10,$16,$54,  0,$60,$21,$22,$23,	0,  0,	0,$BE,$2B,$75,$9E,$8B
					; DATA XREF: BANKE:8FAA-o
		.BYTE	5,$FF,$90,$40,$75,$8C,	7,$FF,$B0,$40,$75,$AC,	7,$FF,$D0,$40 ;	ind data used at 8000
		.BYTE $75,$CC,	7,$FF,$F0,$40,$75,$EC,	7,$FF
byte_1593F1:
		.BYTE $10,  4,$12,$83,$40,  0,	0,$80,$11,$62,	0,$38,$25,$30,$2F,$DE
					; DATA XREF: BANKE:8FAC-o
		.BYTE $37,$34,$29,$30,$30,$FF,$37,$38,$25,$38,$39,$37,$9E,$2D,$38,$29 ;	ind data used at 8000
		.BYTE $31,$FF,$37,$29,$25,$36,$27,$2C,$9E,$29,$35,$39,$2D,$34,$FF
byte_159420:
		.BYTE  $C,  4,$53,  0,$A0,$21,$22,$A3,	2,  2,	0,$39,$37,$29,$FF,$38
					; DATA XREF: BANKE:8FAE-o
		.BYTE $36,$25,$32,$37,$2A,$29,$36,$FF,$28,$2D,$37,$27,$25,$36,$28,$FF ;	ind data used at 8000
byte_159440:
		.BYTE	8,  3,$3A,  0,$60,$21,$22,$A3,	1,  2,	0,$26,$39,$3D,$FF,$37
					; DATA XREF: BANKE:8FB0-o
		.BYTE $29,$30,$30,$FF	; ind data used	at 8000
byte_159454:
		.BYTE  $E,  4,$57,  0,$60,$21,$22,$A3,	1,  2,	0,$28,$29,$38,$33,$3C
					; DATA XREF: BANKE:8FB2-o
		.BYTE $2D,$27,$25,$38,$29,$FF,$39,$32,$27,$39,$36,$37,$29,$FF,$36,$29 ;	ind data used at 8000
		.BYTE $3A,$2D,$3A,$29,$FF
byte_159479:
		.BYTE	8,  5,$92,$81,$64,$21,$22,$A3,	1,  2,	0,$2A,$2D,$2B,$2C,$38
					; DATA XREF: BANKE:8FB4-o
		.BYTE $FF,$37,$34,$29,$30,$30,$FF,$36,$39,$32,$FF,$2D,$38,$29,$31,$FF ;	ind data used at 8000
byte_159499:
		.BYTE	8,  5,$92,$81,$64,$21,$22,$A3,	1,  2,	0,$2A,$2D,$2B,$2C,$38
					; DATA XREF: BANKE:8FB6-o
		.BYTE $FF,$37,$34,$29,$30,$30,$FF,$34,$25,$36,$36,$3D,$FF,$2D,$38,$29 ;	ind data used at 8000
		.BYTE $31,$FF
byte_1594BB:
		.BYTE	8,  5,$92,$81,$64,$21,$22,$A3,	1,  2,	0,$2A,$2D,$2B,$2C,$38
					; DATA XREF: BANKE:8FB8-o
		.BYTE $FF,$36,$39,$32,$FF,$34,$25,$36,$36,$3D,$FF,$2D,$38,$29,$31,$FF ;	ind data used at 8000
byte_1594DB:
		.BYTE	8,  4,$92,$81,$64,$21,$22,$A3,	1,  2,	0,$2A,$2D,$2B,$2C,$38
					; DATA XREF: BANKE:8FBA-o
		.BYTE $FF,$34,$25,$36,$36,$3D,$FF,$2D,$38,$29,$31,$FF ;	ind data used at 8000
byte_1594F7:
		.BYTE $80,$3B		; DATA XREF: BANKE:8FBC-o
					; ind data used	at 8000
		.WORD byte_159604
byte_1594FB:
		.BYTE	6,  3,$3B,  0,$60,$21,$22,$A3,	1,  2,	0,$3D,$29,$37,$FF,$32
					; DATA XREF: BANKE:8FBE-o BANKE:981Bo
		.BYTE $33,$FF		; ind data used	at 8000
byte_15950D:
		.BYTE  $C,  4,$32,$81,$41,$21,$22,$A3,	1,  2,	0,$2D,$32,$2A,$33,$FF
					; DATA XREF: BANKE:8FC0-o
		.BYTE $27,$33,$32,$28,$2D,$38,$2D,$33,$32,$FF,$2A,$33,$36,$31,$25,$38 ;	ind data used at 8000
		.BYTE $2D,$33,$32,$FF
byte_159531:
		.BYTE  $A,  3,$59,  0,$60,$21,$22,$A3,	1,  2,	0,$30, $F, $B,$20, $F
					; DATA XREF: BANKE:8FC2-o
		.BYTE $FF,$34,$13, $D,$15,  0,$39,$1A,$FF ; ind	data used at 8000
byte_15954A:
		.BYTE	8,  3,$3A,  0,$60,$21,$22,$A3,	1,  2,	0,$2B,$33,$30,$28,$FF
					; DATA XREF: BANKE:8FC4-o
		.BYTE $2D,$38,$29,$31,$FF ; ind	data used at 8000
byte_15955F:
		.BYTE	8,  3,$B3,  0,$60,$21,$22,$A3,	1,  2,	0,$39,$37,$29,$FF,$29
					; DATA XREF: BANKE:8FC6-o
		.BYTE $35,$39,$2D,$34,$FF ; ind	data used at 8000
byte_159574:
		.BYTE  $A,  3,$B2,$81,$44,$21,$22,$A3,	1,  2,	0,$3B,$13,$24, $B,$1C
					; DATA XREF: BANKE:8FC8-o
		.BYTE  $E,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF
byte_15958E:
		.BYTE	8,$10,$45,  0,$60,$A1,$22,$A3,	1,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FCA-o
					; ind data used	at 8000
byte_15959C:
		.BYTE  $A,$10,$46,$81,$85,$A1,$22,$A3,	2,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FCC-o
					; ind data used	at 8000
byte_1595AA:
		.BYTE $10,$12,$16,$84,$46,$E1,$22,$A3,$41,  1,	0,$9E,$B6,$B0,$FF,$96
					; DATA XREF: BANKE:8FCE-o
		.BYTE $D0,$FF,$FF	; ind data used	at 8000
byte_1595BD:
		.BYTE $10,$13,$16,$84,$47,$E1,$22,$A3,$41,  1,	0,$9E,$B6,$B1,$FF,$96
					; DATA XREF: BANKE:8FD0-o
		.BYTE $D1,$FF,$FF	; ind data used	at 8000
byte_1595D0:
		.BYTE $10,$14,$16,$84,$48,$E1,$22,$A3,$41,  1,	0,$9E,$B6,$B2,$FF,$96
					; DATA XREF: BANKE:8FD2-o
		.BYTE $D2,$FF,$FF	; ind data used	at 8000
byte_1595E3:
		.BYTE $10,$15,$16,$84,$49,$E1,$22,$A3,$41,  1,	0,$9E,$B6,$B3,$FF,$96
					; DATA XREF: BANKE:8FD4-o
		.BYTE $D3,$FF,$FF	; ind data used	at 8000
byte_1595F6:
		.BYTE  $A,$10,$26,$81,$84,$A1,$22,$A3,	2,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FD6-o
					; ind data used	at 8000
byte_159604:
		.BYTE	8,$10,$33,  0,$60,$A1,$22,$A3,	1,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FD8-o BANKE:8FDA-o
					; BANKE:94F9-o
					; ind data used	at 8000
byte_159612:
		.BYTE  $A,$10,$35,$83,$42,$A1,$22,$23,	0,  0,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FDC-o
					; ind data used	at 8000
byte_159620:
		.BYTE $10,$11,$16,  0,$60,$E1,$22,$A3,$41,  1,	0,$9E,$B6,$B4,$FF,$96
					; DATA XREF: BANKE:8FDE-o
		.BYTE $D4,$FF,$FF	; ind data used	at 8000
byte_159633:
		.BYTE  $A,$10,$25,$83,$8F,$A1,$22,$A3,	2,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FE0-o
					; ind data used	at 8000
byte_159641:
		.BYTE $18,$1A,$22,  0,$4D,$A1,$22,$B5,	1,  2,	0,$91,$81,  0,$30,$8E
					; DATA XREF: BANKE:8FE2-o BANKE:8FE4-o
					; BANKE:8FE6-o BANKE:8FE8-o BANKE:8FEA-o
					; BANKE:8FEC-o
		.BYTE	2,  0,$93,$31,	0,$6B,	0,$95,$11,$FF ;	ind data used at 8000
byte_15965B:
		.BYTE $18,  7,$22,$80,$4D,$A1,$22,$B4,	1,  2,	6,$F1,$80,  0,$30,$EE
					; DATA XREF: BANKE:8FEE-o
		.BYTE	2,  0,$F3,$30,	0,$6B,	0,$F5,$10,$FF
byte_159675:
		.BYTE $14,$17,$11,  0,$60,$E1,$22,$A3,	1,  1,	0,$9E,$B6,$A9,$FF,$96
					; DATA XREF: BANKE:8FF0-o
		.BYTE $C9,$97,	5,$FF,$FF ; ind	data used at 8000
byte_15968A:
		.BYTE	8,  2,$3A,  0,$60,$21,$22,$A3,	0,  0,	0,  1,	1,  1,	1,  1
					; DATA XREF: BANKE:8FF2-o BANKE:901E-o
		.BYTE $FF		; ind data used	at 8000
byte_15969B:
		.BYTE	8,$10,$9A,$80,$4D,$A1,	0,$B9,	1,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FF4-o
					; ind data used	at 8000
byte_1596A9:
		.BYTE $10,$18,$96,$80,$4D,$E1,	0,$B8,	1,$81,$80,  0,$B8,$C0,$FF,$98
					; DATA XREF: BANKE:8FF6-o
		.BYTE $C0,$FF,$FF	; ind data used	at 8000
byte_1596BC:
		.BYTE $10,  5,$96,  0,$4D,$E1,$22,$E7,$41,  1,	0,$9E,$B6,$B4,$FF,$96
					; DATA XREF: BANKE:8FF8-o BANKE:8FFA-o
		.BYTE $D4,$FF,$FF	; ind data used	at 8000
byte_1596CF:
		.BYTE	8,$10,$54,  0,$60,$A1,$22,$A3,	1,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:8FFC-o
					; ind data used	at 8000
byte_1596DD:
		.BYTE $18,  5,$92,  0,$60,$A1,$22,$23,	0,  0,	0,$FF
					; DATA XREF: BANKE:8FFE-o BANKE:96EBo
					; ind data used	at 8000
byte_1596E9:
		.BYTE $80,$92		; DATA XREF: BANKE:9000-o
					; ind data used	at 8000
		.WORD byte_1596DD
byte_1596ED:
		.BYTE $10,$18,$96,  0,$60,$E1,$22,$23,	1,$81,	0,  0,$B8,$C0,$FF,$98
					; DATA XREF: BANKE:9002-o
		.BYTE $C0,$FF,$FF	; ind data used	at 8000
byte_159700:
		.BYTE $18,  7,$42,  0,$60,$21,$22,$23,	0,  0,	0,$25,	0,$26,	0,$27
					; DATA XREF: BANKE:9004-o
		.BYTE	0,$28,	0,$29,	0,$2A,	0,$2B,	0,$2C,	0,$2D,	0,$2E,	0,$2F ;	ind data used at 8000
		.BYTE $FF,$30,	0,$31,	0,$32,	0,$33,	0,$34,	0,$35,	0,$36,	0,$37
		.BYTE	0,$38,	0,$39,	0,$3A,$FF,$3B,	0,$3C,	0,$3D,	0,$3E,	0,$6B
		.BYTE	0,$68,	0,$70,	0,$6F,	0,$6D,	0,$6E,$FF, $B,	0, $C,	0, $D
		.BYTE	0, $E,	0, $F,	0,$10,	0,$11,	0,$12,	0,$13,	0,$14,	0,$15
		.BYTE $FF,$16,	0,$17,	0,$18,	0,$19,	0,$1A,	0,$1B,	0,$1C,	0,$1D
		.BYTE	0,$1E,	0,$1F,	0,$20,$FF,$21,	0,$22,	0,$23,	0,$24,	0,$6A
		.BYTE	0,$6C,	0,$26,$25,$27,$2F,$9E,$29,$32,$28,$FF
byte_15978C:
		.BYTE  $C,  3,$25,$83,$4C,$21,$22,$23,	0,  0,	0,$5A,$5A,$5A,$5A,$5A
					; DATA XREF: BANKE:9006-o
		.BYTE $5A,$5A,$5A,$FF,$FF ; ind	data used at 8000
byte_1597A1:
		.BYTE  $A,  3,$68,$83,$4B,$21,$22,$A3,	1,  2,	0,$31,$25,$30,$29,$FF
					; DATA XREF: BANKE:9008-o
		.BYTE $2A,$29,$31,$25,$30,$29,$FF ; ind	data used at 8000
byte_1597B8:
		.BYTE  $C,  7,$54,$82,$4A,$21,$22,$A3,	1,  2,	0,$37,$19,$16, $E,$13
					; DATA XREF: BANKE:900A-o
		.BYTE  $F,$1C,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF,$3B,$13,$24, $B,$1C ;	ind data used at 8000
		.BYTE  $E,$FF,$2A,$13,$11,$12,$1E, $F,$1C,$FF,$31, $F,$1C, $D,$12, $B
		.BYTE $18,$1E,$FF,$2B,$19,$19,$10,$6B,$19,$10,$10,$FF
byte_1597F4:
		.BYTE $10,  2,$13,  0,$20,$61,$22,$23,	0,  0,	0,$2D,$1D,  0,$1E,$12
					; DATA XREF: BANKE:900C-o
		.BYTE $13,$1D,	0,$1E,$12, $F,$FF,$1C,$13,$11,$12,$1E,	0,$1A, $F,$1C ;	ind data used at 8000
		.BYTE $1D,$19,$18,$6F,$FF
byte_159819:
		.BYTE $80,$1B		; DATA XREF: BANKE:900E-o BANKE:904C-o
					; ind data used	at 8000
		.WORD byte_1594FB
byte_15981D:
		.BYTE $10,  4,$56,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$28,	0,$31
					; DATA XREF: BANKE:9010-o
		.BYTE $29,$31,$26,$29,$36,$FF,$30,$29,$25,$3A,$29,  0,$31,$29,$31,$26 ;	ind data used at 8000
		.BYTE $29,$36,$FF,$37,$29,$29,	0,$30,$2D,$37,$38,$FF
byte_159849:
		.BYTE  $C,  7,$18,$82,$4A,$21,$22,$A3,	1,  2,	0,$37,$19,$16, $E,$13
					; DATA XREF: BANKE:9012-o
		.BYTE  $F,$1C,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF,$3B,$13,$24, $B,$1C
		.BYTE  $E,$FF,$2A,$13,$11,$12,$1E, $F,$1C,$FF,$31, $F,$1C, $D,$12, $B
		.BYTE $18,$1E,$FF,$37, $B,$11, $F,$FF
byte_159881:
		.BYTE  $A,  3,$58,  0,$60,$21,$22,$23,	0,  0,	0,  2,$FF,  3,$FF
					; DATA XREF: BANKE:9014-o BANKE:9016-o
byte_159890:
		.BYTE  $A,  4,$58,  0,$60,$21,$22,$23,	0,  0,	0,  2,$FF,  3,$FF,  4
					; DATA XREF: BANKE:9018-o
		.BYTE $FF
byte_1598A1:
		.BYTE  $A,  5,$58,  0,$60,$21,$22,$23,	0,  0,	0,  2,$FF,  3,$FF,  4
					; DATA XREF: BANKE:901A-o
		.BYTE $FF,  5,$FF	; ind data used	at 8000
byte_1598B4:
		.BYTE  $C,  5,$53,  0,$A0,$21,$22,$A3,	2,  2,	0,$39,$37,$29,$FF,$38
					; DATA XREF: BANKE:901C-o
		.BYTE $36,$25,$32,$37,$2A,$29,$36,$FF,$28,$2D,$37,$27,$25,$36,$28,$FF
		.BYTE $25,$34,$34,$36,$25,$2D,$37,$29,$FF
byte_1598DD:
		.BYTE	8,$10,$3B,  0,$60,$A1,$22,$A3,	1,  2,	0,$90,$51,$FF
					; DATA XREF: BANKE:9020-o
					; ind data used	at 8000
byte_1598EB:
		.BYTE  $C,  6,$18,$82,$4A,$21,$22,$A3,	1,  2,	0,$37,$19,$16, $E,$13
					; DATA XREF: BANKE:9022-o
		.BYTE  $F,$1C,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF,$3B,$13,$24, $B,$1C
		.BYTE  $E,$FF,$2A,$13,$11,$12,$1E, $F,$1C,$FF,$31, $F,$1C, $D,$12, $B
		.BYTE $18,$1E,$FF
byte_15991E:
		.BYTE $14,  2,$95,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9024-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$FF
byte_159939:
		.BYTE $14,  2,$95,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9026-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  3,$FF
byte_159954:
		.BYTE $14,  3,$95,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9028-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$FF,$25,$28,$3A,$29,$32
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  3,$FF
byte_15997F:
		.BYTE $14,  2,$95,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:902A-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  4,$FF ; ind	data used at 8000
byte_15999A:
		.BYTE $14,  3,$95,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:902C-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$FF,$25,$28,$3A,$29,$32 ;	ind data used at 8000
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  4,$FF
byte_1599C5:
		.BYTE $14,  3,$95,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:902E-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  3,$FF,$25,$28,$3A,$29,$32 ;	ind data used at 8000
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  4,$FF
byte_1599F0:
		.BYTE $14,  4,$95,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9030-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$FF,$25,$28,$3A,$29,$32 ;	ind data used at 8000
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  3,$FF,$25,$28,$3A,$29,$32
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  4,$FF
byte_159A2B:
		.BYTE $12,  6,$74,  0,$20,$61,$22,$A3,$31,  8,	0,  0,$37, $F,$16, $F
					; DATA XREF: BANKE:9032-o
		.BYTE  $D,$1E,	0,$1E,$12, $F,$FF,$FF,	0,$17, $F,$1D,$1D, $B,$11, $F ;	ind data used at 8000
		.BYTE	0,$1D,$1A, $F, $F, $E,$FF,$FF,	0,$23,$19,$1F,	0,$16,$13,$15
		.BYTE  $F,$6C,$FF,$FF,$FF,  0,	2,  0,	3,  0,	4,  0,	5,  0,	6,  0
		.BYTE	7,  0,	8,  0,	9,$FF,$FF,  0,$2A, $B,$1D,$1E,$FE,$9E,$37,$16
		.BYTE $19,$21,$FF,$FF
byte_159A7F:
		.BYTE $14,  2,$73,  0,$60,$21,$22,$23,	0,  0,	0,$2D,$32,$34,$39,$38
					; DATA XREF: BANKE:9034-o
		.BYTE	0,$3D,$33,$39,$36,  0,$32,$25,$31,$29,$70,$FF ;	ind data used at 8000
byte_159A9B:
		.BYTE $14,  6,$73,  0,$20,$21,$22,$23,$40,  0,	0,  0,$99,$80,$FF,  0
					; DATA XREF: BANKE:9036-o
		.BYTE $30,$29,$3A,$29,$30,$9E,$8F,  2,$FF,  0,$28,$19,	0,$23,$19,$1F ;	ind data used at 8000
		.BYTE	0,$21, $B,$18,$1E,  0,$1E,$19,$FF,  0, $F,$1C, $B,$1D, $F,  0
		.BYTE $1E,$12,$13,$1D,$FF,  0,$1B,$1F, $F,$1D,$1E,$6F,$FF
byte_159AD8:
		.BYTE $18,  2,$63,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9038-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$75,$99,$40,$FF ;	ind data used at 8000
byte_159AF6:
		.BYTE $18,  2,$63,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:903A-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  3,$75,$B9,$40,$FF
byte_159B14:
		.BYTE $18,  3,$63,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:903C-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$75,$99,$40,$FF,$25,$28 ;	ind data used at 8000
		.BYTE $3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,	3,$75,$B9,$40
		.BYTE $FF
byte_159B45:
		.BYTE $18,  2,$63,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:903E-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  4,$75,$D9,$40,$FF ;	ind data used at 8000
byte_159B63:
		.BYTE $18,  3,$63,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9040-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$75,$99,$40,$FF,$25,$28
		.BYTE $3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,	4,$75,$D9,$40
		.BYTE $FF
byte_159B94:
		.BYTE $18,  3,$63,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9042-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  3,$75,$B9,$40,$FF,$25,$28 ;	ind data used at 8000
		.BYTE $3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,	4,$75,$D9,$40
		.BYTE $FF
byte_159BC5:
		.BYTE $18,  4,$63,  0,$60,$21,$22,$A3,	1,  2,	0,$25,$28,$3A,$29,$32
					; DATA XREF: BANKE:9044-o
		.BYTE $38,$39,$36,$29,	0,$30,$33,$2B,	0,  2,$75,$99,$40,$FF,$25,$28 ;	ind data used at 8000
		.BYTE $3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,	3,$75,$B9,$40
		.BYTE $FF,$25,$28,$3A,$29,$32,$38,$39,$36,$29,	0,$30,$33,$2B,	0,  4
		.BYTE $75,$D9,$40,$FF
byte_159C09:
		.BYTE $18,  6,$42,  0,$60,$21,$22,$A3,	1,  2,	0,$27,$33,$32,$38,$2D
					; DATA XREF: BANKE:9046-o
		.BYTE $32,$39,$29,  0,$25,  0,$35,$39,$29,$37,$38,$FF,$26,$29,$2B,$2D ;	ind data used at 8000
		.BYTE $32,  0,$25,  0,$32,$29,$3B,  0,$35,$39,$29,$37,$38,$FF,$27,$33
		.BYTE $34,$3D,	0,$25,	0,$35,$39,$29,$37,$38,$FF,$29,$36,$25,$37,$29
		.BYTE	0,$25,	0,$35,$39,$29,$37,$38,$FF,$27,$2C,$25,$32,$2B,$29,  0
		.BYTE $31,$29,$37,$37,$25,$2B,$29,  0,$37,$34,$29,$29,$28,$FF
byte_159C67:
		.BYTE $18,  4,$42,  0,$60,$21,$22,$A3,	1,  2,	0,$27,$33,$32,$38,$2D
					; DATA XREF: BANKE:9048-o
		.BYTE $32,$39,$29,  0,$25,  0,$35,$39,$29,$37,$38,$FF,$29,$36,$25,$37 ;	ind data used at 8000
		.BYTE $29,  0,$25,  0,$35,$39,$29,$37,$38,$FF,$27,$2C,$25,$32,$2B,$29
		.BYTE	0,$31,$29,$37,$37,$25,$2B,$29,	0,$37,$34,$29,$29,$28,$FF
byte_159CA6:
		.BYTE $18,  2,$42,  0,$60,$21,$22,$A3,	1,  2,	0,$26,$29,$2B,$2D,$32
					; DATA XREF: BANKE:904A-o
		.BYTE	0,$25,	0,$32,$29,$3B,	0,$35,$39,$29,$37,$38,$FF ; ind	data used at 8000
byte_159CC3:
		.BYTE $18,  9,$12,$87,$4E,$A1,$22,$23,	0,  0,	0,$DA,$90,$9E,$FA,$90
					; DATA XREF: BANKE:904E-o
		.BYTE $FF		; ind data used	at 8000
byte_159CD4:
		.BYTE $16,$19,$43,  0,$60,$E1,$22,$A3,	1,  1,	0,  0,$B8,$C0,$FF,$98
					; DATA XREF: BANKE:9050-o
		.BYTE $C0,$FF,$FF	; ind data used	at 8000
byte_159CE7:
		.BYTE $10,  5,$96,$80,$4D,$E1,$22,$BB,$41,  1,	4,$9E,$B6,$B4,$FF,$96
					; DATA XREF: BANKE:9052-o
		.BYTE $D4,$FF,$FF	; ind data used	at 8000
byte_159CFA:
		.BYTE $80,$1A		; DATA XREF: BANKE:9054-o
					; ind data used	at 8000
		.WORD byte_1593B8
byte_159CFE:
		.BYTE $10,  9,$18,  0,$60,$A1,$22,$23,	0,  0,	0,$FF
					; DATA XREF: BANKE:9056-o
					; ind data used	at 8000
byte_159D0A:
		.BYTE	8,$10,$35,$83,$42,$A1,$22,$A3,	1,  2,	0,$90,$41,$FF
					; DATA XREF: BANKE:9058-o
byte_159D18:
		.BYTE $10,  9,$18,  0,$60,$E1,$22,$A3,$41,  1,	0,$9E,$B6,$B4
					; DATA XREF: BANKE:905A-o
					; ind data used	at 8000
		.BYTE $FF
		.BYTE $96,$D4,$FF,$FF
_txt_window_names:
		.BYTE	$27,$33,$31,$31,$25,$32,$28,$FF	; DATA XREF: sub_158C26:loc_158C49-r
					; sub_158C26:loc_158C59-r
					; data used at 8000
		.BYTE $37,$38,$25,$38,$39,$37,$FF
		.BYTE $2D,$38,$29,$31,$FF
		.BYTE $3B,$2C,$33,$31,$FF
		.BYTE $37,$34,$29,$30,$30,$FF
		.BYTE $29,$35,$39,$2D,$34,$FF
		.BYTE $3B,$29,$25,$34,$33,$32,$FF
		.BYTE $25,$36,$31,$33,$36,$FF
		.BYTE $37,$2C,$2D,$29,$30,$28,$FF
		.BYTE $2C,$29,$30,$31,$29,$38,$FF
		.BYTE $27,$30,$25,$37,$37,$FF
		.BYTE $37,$29,$3C,$FF
		.BYTE $32,$25,$31,$29,$FF
		.BYTE	0,$64,$FF
		.BYTE $2A,$2D,$2B,$2C,$38,$FF
		.BYTE $38,$33,$FF

; =============== S U B	R O U T	I N E =======================================
sub_159D86:				; CODE XREF: sub_159DA4+6C-j
					; sub_159E4F+3-j sub_15A2DA+3-p
					; sub_15AADA-p
		TYA				; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		TXA				; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		JSR		sub_17474C	; code used as ind data	at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_159D92:
		STA		byte_76
		PHA
		TXA
		PHA
		TYA
		PHA
		LDA		byte_76
		JSR		_sram_bank0_select_ex
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; unused
sub_159DA4:
		LDA		#0
		STA		byte_80
		LDA		#1
		STA		byte_81
		LDA		#$2C 
		STA		byte_471
		LDA		#$92 
		STA		byte_470
		LDA		#$7A 
		STA		byte_74
		LDA		#$78 
		STA		byte_75
		LDA		#$7D 
		STA		byte_76
		LDA		#$17
		STA		byte_77
		LDX		#0
		JSR		sub_159E25
		LDA		#$2F 
		STA		byte_77
		JSR		sub_159E3C
		JSR		sub_159E4F
		JSR		sub_159E42
		LDA		#$B2 
		STA		byte_470
		LDA		#$2C 
		STA		byte_471
		LDX		#0
		JSR		sub_159E13
		JSR		sub_159E4F
		LDA		#$D2 
		STA		byte_470
		LDA		#$1C
		STA		byte_471
		LDA		#$17
		STA		byte_77
		LDX		#0
		JSR		sub_159E3C
		LDA		#$2F 
		STA		byte_77
		LDA		#$7B 
		STA		byte_74
		LDA		#$7E 
		STA		byte_75
		LDA		#$7F 
		STA		byte_76
		JSR		sub_159E25
		JMP		sub_159D86

; =============== S U B	R O U T	I N E =======================================
sub_159E13:				; CODE XREF: sub_159DA4+40-p
		LDA		#$17
		JSR		sub_159E23
		LDA		#$2F 
		BNE		sub_159E23

; =============== S U B	R O U T	I N E =======================================
sub_159E1C:				; CODE XREF: sub_159E4F-p
		LDA		#$47 
		JSR		sub_159E23
		LDA		#$5F 

; =============== S U B	R O U T	I N E =======================================
sub_159E23:				; CODE XREF: sub_159E13+2-p
					; sub_159E13+7-j sub_159E1C+2-p
		STA		byte_77

; =============== S U B	R O U T	I N E =======================================
sub_159E25:				; CODE XREF: sub_159DA4+24-p
					; sub_159DA4+69-p sub_159E3C+3-j
		LDA		byte_74
		STA		byte_400,X
		INX
		LDA		byte_75
loc_159E2D:				; CODE XREF: sub_159E25+E-j
		STA		byte_400,X
		INX
		CPX		byte_77
		BNE		loc_159E2D
		LDA		byte_76
		STA		byte_400,X
		INX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_159E3C:				; CODE XREF: sub_159DA4+2B-p
					; sub_159DA4+56-p
		JSR		sub_159E42
		JMP		sub_159E25

; =============== S U B	R O U T	I N E =======================================
sub_159E42:				; CODE XREF: sub_159DA4+31-p
					; sub_159E3C-p
		LDA		#$77 
		STA		byte_74
		LDA		#0
		STA		byte_75
		LDA		#$7C 
		STA		byte_76
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_159E4F:				; CODE XREF: sub_159DA4+2E-p
					; sub_159DA4+43-p
		JSR		sub_159E1C
		JMP		sub_159D86

; =============== S U B	R O U T	I N E =======================================
sub_159E55:				; CODE XREF: _bE_sC+2-p
					; sub_15A2DA:loc_15A319-p
					; sub_15A2DA+45-p
		PHA				; code used at 8000
		STA		byte_7E		; code used at 8000
		JSR		_window_display_init	; code used at 8000
		JSR		sub_159E63	; code used at 8000
		JSR		_bE_s12		; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_159E63:				; CODE XREF: sub_159E55+6-p
		LDA		byte_6AE9	; code used at 8000
		LSR		; code used at 8000
		STA		byte_75		; code used at 8000
		LDA		byte_6AEA	; code used at 8000
		STA		byte_74		; code used at 8000
		LDA		byte_470	; code used at 8000
		AND		#$F		; code used at 8000
		STA		byte_77		; code used at 8000
		LDA		byte_470	; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		STA		byte_76		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s12:				; CODE XREF: sub_20759+18-P
					; sub_159E55+9-p
					; DATA XREF: BANKE:8024-o
		LDA		byte_77		; code used at 8000
		CMP		#8		; code used at 8000
		BCS		loc_159EA1	; code used at 8000
		JSR		loc_159EAA	; code used at 8000
		JSR		loc_159EC5	; code used at 8000
		LDA		#8		; code used at 8000
		SEC				; code used at 8000
		SBC		byte_77		; code used at 8000
		TAX				; code used at 8000
loc_159E91:				; CODE XREF: _bE_s12+15-j
		DEC		byte_75		; code used at 8000
		DEX				; code used at 8000
		BNE		loc_159E91	; code used at 8000
		LDA		byte_75		; code used at 8000
		BMI		locret_159E9C	; code used at 8000
		BNE		loc_159E9D	; code used at 8000
locret_159E9C:				; CODE XREF: _bE_s12+19-j
		RTS				; code used at 8000
loc_159E9D:				; CODE XREF: _bE_s12+1B-j
		LDA		#8		; code used at 8000
		STA		byte_77		; code used at 8000
loc_159EA1:				; CODE XREF: _bE_s12+4-j
		JSR		loc_159EA7	; code used at 8000
		JMP		loc_159ECB	; code used at 8000
loc_159EA7:				; CODE XREF: _bE_s12:loc_159EA1-p
		SEC				; code used at 8000
		SBC		#8		; code used at 8000
loc_159EAA:				; CODE XREF: _bE_s12+6-p
		TAX				; code used at 8000
		LDA		#$80       ; code used at 8000
		CPX		#0		; code used at 8000
		BEQ		loc_159EB5	; code used at 8000
loc_159EB1:				; CODE XREF: _bE_s12+34-j
		LSR		; code used at 8000
		DEX				; code used at 8000
		BNE		loc_159EB1	; code used at 8000
loc_159EB5:				; CODE XREF: _bE_s12+30-j
		STA		byte_78		; code used at 8000
		LDX		byte_75		; code used at 8000
		LDA		#0		; code used at 8000
loc_159EBB:				; CODE XREF: _bE_s12+41-j
		ORA		byte_78		; code used at 8000
		LSR		byte_78		; code used at 8000
		DEX				; code used at 8000
		BNE		loc_159EBB	; code used at 8000
		STA		byte_78		; code used at 8000
		RTS				; code used at 8000
loc_159EC5:				; CODE XREF: _bE_s12+9-p
		LDA		byte_76		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		BNE		loc_159ED0	; code used at 8000
loc_159ECB:				; CODE XREF: _bE_s12+25-j
		LDA		byte_76		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		INX				; code used at 8000
loc_159ED0:				; CODE XREF: _bE_s12+4A-j
		LDA		byte_74		; code used at 8000
		TAY				; code used at 8000
loc_159ED3:				; CODE XREF: _bE_s12+5F-j
		LDA		byte_78		; code used at 8000
		ORA		byte_647,X	; code used at 8000
		STA		byte_647,X	; code used as ind data	at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_159ED3	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_sD:					; CODE XREF: sub_8261+12-P sub_A3FB+B-P
					; sub_12A312-P sub_12B3D1+29-P
					; sub_12B683:loc_12B6A2-P sub_12B877+6-P
					; sub_15811B-p sub_15819F+4-p
					; sub_15B288+1E-p sub_174CCF-P
					; sub_174E52+192-P
					; DATA XREF: BANKE:801A-o
		LDX		#$1E		; code used at 8000
		LDA		#0		; code used at 8000
loc_159EE5:				; CODE XREF: _bE_sD+8-j
		DEX				; code used at 8000
		STA		byte_647,X	; code used at 8000
		BNE		loc_159EE5	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s9:					; CODE XREF: sub_129526+1C-P
					; sub_12A3A6+27-P _bD_sE+41-P
					; sub_1418D5+19-P sub_141A92+18-P
					; sub_1585D6+2F-p sub_15868F+B-p
					; sub_15868F+1A-p sub_15868F+29-p
					; sub_1586FE+35-p sub_15874F+F-p
					; sub_15874F+1F-p sub_15874F+2F-p
					; sub_177116+DA-P
					; DATA XREF: BANKE:8012-o
		LDA		word_4+1	; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		TAX				; code used at 8000
		INC		word_4		; code used at 8000
		LDA		word_4		; code used at 8000
		CMP		#9		; code used as ind data	at 8000
		BCC		loc_159EFC	; code used at 8000
		SEC				; code used at 8000
		SBC		#8		; code used at 8000
		INX				; code used as ind data	at 8000
loc_159EFC:				; CODE XREF: _bE_s9+A-j
		TAY				; code used at 8000
		LDA		#$80       ; code used at 8000
loc_159EFF:				; CODE XREF: _bE_s9+15-j
		LSR		; code used as ind data	at 8000
		DEY				; code used at 8000
		BNE		loc_159EFF	; code used as ind data	at 8000
		ROL		; code used at 8000
		AND		byte_647,X	; code used at 8000
		CLC				; code used at 8000
		BEQ		locret_159F0B	; code used at 8000
		SEC				; code used at 8000
locret_159F0B:				; CODE XREF: _bE_s9+1C-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_bE_s38:				; CODE XREF: _name_entry_screen_data_enter+CF-P
					; sub_9B9D7+5-P	sub_9B9F8-P
					; sub_9B9FC+10-P sub_15A1A7-j
					; sub_15A2A3+1-j sub_15A918+1-j
					; sub_15A99E+26-p
					; DATA XREF: BANKE:8070-o
		STA		word_6+1	; code used as ind data	at 8000
		PHA				; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		TYA				; code used at 8000
		PHA				; code used as ind data	at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		JSR		sub_1742C7	; code used at 8000
		JSR		sub_1742BA	; code used at 8000
		LDA		#2		; code used as ind data	at 8000
		STA		byte_6D6	; code used as ind data	at 8000
		JSR		_vblank		; code used as ind data	at 8000
		LDA		#0		; code used at 8000
		STA		byte_6D6	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_159F2E:
		LDA		#$87 
		JSR		_get_syscall0_data_cur_byte0
		STA		byte_10
		LDA		#$87 
		JSR		_get_syscall0_data_cur_byte1
		STA		byte_11
loc_159F3C:				; CODE XREF: sub_159F5A+E-j
		TXA
		PHA
		LDA		#0
		STA		_tmp12+1
		LDX		byte_7A
		INX
		INX
		TXA
		LDX		#_tmp12
		JSR		_mul16_to_8
		LDY		#0
		LDA		_tmp12
		LDY		_tmp12+1
		LDX		#byte_10
		JSR		_add_16_to_16
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_159F5A:
		LDA		#$87 
		JSR		_get_syscall0_data_cur_byte0
		STA		byte_10
		LDA		#$87 
		JSR		_get_syscall0_data_cur_byte1
		STA		byte_11
		JMP		loc_159F3C

; =============== S U B	R O U T	I N E =======================================
nullsub_7:
		RTS

; =============== S U B	R O U T	I N E =======================================
nullsub_8:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_159F6D:				; CODE XREF: sub_1587BB+3-p
		LDY		#7		; code used at 8000
		LDA		(word_6C),Y	; code used at 8000
		BMI		loc_159F76	; code used at 8000
		LDA		#$FF		; code used at 8000
		RTS				; code used at 8000
loc_159F76:				; CODE XREF: sub_159F6D+4-j
		JSR		sub_15A0A4	; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#$37       ; code used at 8000
		BEQ		loc_159FAB	; code used at 8000
		CMP		#$4D       ; code used at 8000
		BEQ		loc_159FAB	; code used at 8000
		JSR		sub_15A0AC	; code used at 8000
		LDA		byte_7E		; code used at 8000
		CMP		#$6B       ; code used at 8000
		BNE		loc_159F93	; code used at 8000
		JSR		sub_15A185	; code used at 8000
		STA		word_7C+1	; code used at 8000
		DEC		word_7C+1	; code used at 8000
loc_159F93:				; CODE XREF: sub_159F6D+1D-j
					; sub_159F6D+3B-j
		JSR		_calc_pads	; code used at 8000
		JSR		sub_159FAE	; code used at 8000
		JSR		sub_159FEB	; code used at 8000
		JSR		sub_15A028	; code used at 8000
		JSR		sub_15A048	; code used at 8000
		JSR		sub_15A068	; code used at 8000
		JSR		sub_15A198	; code used at 8000
		JMP		loc_159F93	; code used at 8000
loc_159FAB:				; CODE XREF: sub_159F6D+10-j
					; sub_159F6D+14-j
		JMP		sub_15A1AA	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_159FAE:				; CODE XREF: sub_159F6D+29-p
		LDA		_pads		; code used at 8000
		AND		#$10		; code used at 8000
		BEQ		locret_159FCA	; code used at 8000
		LDA		byte_75		; code used at 8000
		BEQ		loc_159FCB	; code used at 8000
		LDA		_pads+2		; code used at 8000
		ORA		#$10		; code used at 8000
		STA		_pads+2		; code used at 8000
		JSR		sub_15A1A5	; code used at 8000
		DEC		byte_75		; code used at 8000
		DEC		word_4+1	; code used at 8000
		DEC		word_4+1	; code used at 8000
		JSR		sub_15A180	; code used at 8000
locret_159FCA:				; CODE XREF: sub_159FAE+4-j
					; sub_159FAE+20-j sub_159FAE+22-j
		RTS				; code used at 8000
loc_159FCB:				; CODE XREF: sub_159FAE+8-j
		BIT		byte_6AC9	; code used at 8000
		BPL		locret_159FCA	; code used at 8000
		BVS		locret_159FCA	; code used at 8000
		LDA		byte_6AC9	; code used at 8000
		ORA		#$40       ; code used at 8000
		STA		byte_6AC9	; code used at 8000
		LDA		_pads+2		; code used at 8000
		ORA		#$10		; code used at 8000
		STA		_pads+2		; code used at 8000
		JSR		sub_15A1A5	; code used at 8000
		LDA		byte_6ACA	; code used at 8000
		STA		word_4+1	; code used at 8000
		JMP		sub_15A180	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_159FEB:				; CODE XREF: sub_159F6D+2C-p
		LDA		_pads		; code used at 8000
		AND		#$20       ; code used at 8000
		BEQ		locret_15A00E	; code used at 8000
		BIT		byte_6AC9	; code used at 8000
		BVS		loc_15A00F	; code used at 8000
		LDA		byte_75		; code used at 8000
		CMP		word_7C+1	; code used at 8000
		BEQ		locret_15A00E	; code used at 8000
		LDA		_pads+2		; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		_pads+2		; code used at a000
		JSR		sub_15A1A5	; code used at a000
		INC		byte_75		; code used at a000
		INC		word_4+1	; code used at a000
		INC		word_4+1	; code used at a000
		JSR		sub_15A180	; code used at a000
locret_15A00E:				; CODE XREF: sub_159FEB+4-j
					; sub_159FEB+F-j
		RTS				; code used at a000
loc_15A00F:				; CODE XREF: sub_159FEB+9-j
		LDA		byte_6AC9
		AND		#$BF 
		STA		byte_6AC9
		LDA		_pads+2
		ORA		#$20 
		STA		_pads+2
		JSR		sub_15A1A5
		LDA		byte_6ACB
		STA		word_4+1
		JMP		sub_15A180

; =============== S U B	R O U T	I N E =======================================
sub_15A028:				; CODE XREF: sub_159F6D+2F-p
		LDA		_pads		; code used at a000
		AND		#$40       ; code used at a000
		BEQ		locret_15A047	; code used at a000
		LDA		byte_74		; code used at a000
		BEQ		locret_15A047	; code used at a000
		LDA		_pads+2		; code used at a000
		ORA		#$40       ; code used at a000
		STA		_pads+2		; code used at a000
		JSR		sub_15A1A5	; code used at a000
		DEC		byte_74		; code used at a000
		LDA		word_4		; code used at a000
		SEC				; code used at a000
		SBC		byte_79		; code used at a000
		STA		word_4		; code used at a000
		JSR		sub_15A180	; code used at a000
locret_15A047:				; CODE XREF: sub_15A028+4-j
					; sub_15A028+8-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A048:				; CODE XREF: sub_159F6D+32-p
		LDA		_pads		; code used at a000
		BPL		locret_15A067	; code used at a000
		LDA		byte_74		; code used at a000
		CMP		word_7C		; code used at a000
		BEQ		locret_15A067	; code used at a000
		LDA		_pads+2		; code used at a000
		ORA		#$80       ; code used at a000
		STA		_pads+2		; code used at a000
		JSR		sub_15A1A5	; code used at a000
		INC		byte_74		; code used at a000
		LDA		word_4		; code used at a000
		CLC				; code used at a000
		ADC		byte_79		; code used at a000
		STA		word_4		; code used at a000
		JSR		sub_15A180	; code used at a000
locret_15A067:				; CODE XREF: sub_15A048+2-j
					; sub_15A048+8-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A068:				; CODE XREF: sub_159F6D+35-p
		LDA		_pads		; code used at a000
		LSR		; code used at a000
		BCS		loc_15A075	; code used at a000
		LSR		; code used at a000
		BCC		locret_15A074	; code used at a000
		PLA				; code used at a000
		PLA				; code used at a000
		LDA		#$FF		; code used at a000
locret_15A074:				; CODE XREF: sub_15A068+6-j
		RTS				; code used at a000
loc_15A075:				; CODE XREF: sub_15A068+3-j
		BRK
		.BYTE $85, $2F		; _syscall12
		JSR		sub_15A1A1	; code used at a000
		PLA				; code used at a000
		PLA				; code used at a000
		BIT		byte_6AC9	; code used at a000
		BVS		loc_15A0A1	; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		LDX		word_7C		; code used at a000
		INX				; code used at a000
		STX		word_4		; code used at a000
		LDX		#word_4		; code used at a000
		LDA		byte_75		; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		word_4		; code used at a000
		CLC				; code used at a000
		ADC		byte_74		; code used at a000
		STA		word_4		; code used at a000
		LDY		#$A		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		RTS				; code used at a000
loc_15A0A1:				; CODE XREF: sub_15A068+18-j
		LDA		#$40       ; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A0A4:				; CODE XREF: sub_159F6D:loc_159F76-p
					; sub_15A0A4+5-j
		JSR		_calc_pads	; code used as ind data	at a000
		LDA		_pads		; code used as ind data	at a000
		BNE		sub_15A0A4	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A0AC:				; CODE XREF: sub_159F6D+16-p
		LDA		#0		; code used at a000
		STA		byte_74		; code used at a000
		STA		byte_75		; code used at a000
		LDA		byte_6AC8	; code used at a000
		PHA				; code used at a000
		AND		#$F		; code used at a000
		ASL		; code used at a000
		STA		word_4		; code used at a000
		LDY		#8		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		AND		#$F		; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		word_4		; code used at a000
		PLA				; code used at a000
		AND		#$F0       ; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		word_4+1	; code used at a000
		STA		byte_6ACA	; code used at a000
		INY				; code used at a000
		LDA		byte_7E		; code used at a000
		CMP		#$25       ; code used at a000
		BCC		loc_15A0F1	; code used at a000
		CMP		#$29       ; code used at a000
		BCS		loc_15A0F1	; code used at a000
		LDA		byte_7F		; code used at a000
		CMP		#$FF		; code used at a000
		BNE		loc_15A0E8	; code used at a000
		LDA		word_7C+1	; code used at a000
		SEC				; code used at a000
		SBC		#1		; code used at a000
		ASL		; code used at a000
loc_15A0E8:				; CODE XREF: sub_15A0AC+34-j
		STA		byte_75		; code used at a000
		LSR		byte_75		; code used at a000
		CLC				; code used at a000
		ADC		word_4+1	; code used at a000
		STA		word_4+1	; code used at a000
loc_15A0F1:				; CODE XREF: sub_15A0AC+2A-j
					; sub_15A0AC+2E-j
		LDA		(word_6C),Y	; code used at a000
		AND		#$F		; code used at a000
		CLC				; code used at a000
		ADC		word_4+1	; code used at a000
		STA		word_4+1	; code used at a000
		STA		byte_6ACB	; code used at a000
		LDA		(word_6C),Y	; code used at a000
		AND		#$70       ; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		CLC				; code used at a000
		ADC		#2		; code used at a000
		STA		byte_79		; code used at a000
		LDY		#8		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		AND		#$30       ; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		CMP		#3		; code used at a000
		BNE		loc_15A129	; code used at a000
		LDA		byte_6DD	; code used at a000
		STA		byte_74		; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		word_4		; code used at a000
		LDA		#1		; code used at a000
		STA		word_7C+1	; code used at a000
		LDA		#7		; code used at a000
loc_15A129:				; CODE XREF: sub_15A0AC+6A-j
		STA		word_7C		; code used at a000
		LDA		byte_7E		; code used at a000
		CMP		#$34       ; code used at a000
		BEQ		loc_15A15D	; code used at a000
		CMP		#$35       ; code used at a000
		BEQ		loc_15A13F	; code used at a000
		CMP		#$3B       ; code used at a000
		BEQ		loc_15A16B	; code used at a000
		CMP		#$67       ; code used at a000
		BEQ		loc_15A176	; code used at a000
		BNE		loc_15A17E	; code used at a000
loc_15A13F:				; CODE XREF: sub_15A0AC+87-j
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		_sram_bank0_sub32
		LDA		word_4
		SEC
		SBC		#6
		STA		word_7C+1
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		LDA		byte_C6
		CMP		#6
		BNE		loc_15A17E
		BEQ		sub_15A180
loc_15A15D:				; CODE XREF: sub_15A0AC+83-j
		LDA		word_7C+1	; code used at a000
		CMP		#6		; code used at a000
		BEQ		loc_15A17E	; code used at a000
		LDA		byte_C6		; code used at a000
		CMP		#6		; code used at a000
		BEQ		sub_15A180	; code used at a000
		BNE		loc_15A17E	; code used at a000
loc_15A16B:				; CODE XREF: sub_15A0AC+8B-j
		JSR		sub_15A185	; code used at a000
		CMP		#5		; code used at a000
		BCC		loc_15A17C	; code used at a000
		LDA		#4		; code used at a000
		BNE		loc_15A17C	; code used at a000
loc_15A176:				; CODE XREF: sub_15A0AC+8F-j
		JSR		sub_15A185	; code used at a000
		SEC				; code used at a000
		SBC		#4		; code used at a000
loc_15A17C:				; CODE XREF: sub_15A0AC+C4-j
					; sub_15A0AC+C8-j
		STA		word_7C+1	; code used at a000
loc_15A17E:				; CODE XREF: sub_15A0AC+91-j
					; sub_15A0AC+AD-j sub_15A0AC+B5-j
					; sub_15A0AC+BD-j
		DEC		word_7C+1	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A180:				; CODE XREF: sub_159FAE+19-p
					; sub_159FAE+3A-j sub_159FEB+20-p
					; sub_159FEB+3A-j sub_15A028+1C-p
					; sub_15A048+1C-p sub_15A0AC+AF-j
					; sub_15A0AC+BB-j sub_15A205+15-j
					; sub_15A21E+17-j
		LDA		#$F8       ; code used at a000
		STA		byte_76		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A185:				; CODE XREF: sub_159F6D+1F-p
					; sub_15A0AC:loc_15A16B-p
					; sub_15A0AC:loc_15A176-p
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		word_4+1	; code used at a000
		PHA				; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDX		word_4		; code used at a000
		PLA				; code used at a000
		STA		word_4+1	; code used at a000
		PLA				; code used at a000
		STA		word_4		; code used at a000
		TXA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A198:				; CODE XREF: sub_159F6D+38-p
		LDA		byte_76		; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		byte_76		; code used at a000
		BMI		sub_15A1A5	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A1A1:				; CODE XREF: sub_15A068+10-p
		LDA		#$73       ; code used at a000
		BNE		sub_15A1A7	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A1A5:				; CODE XREF: sub_159FAE+10-p
					; sub_159FAE+32-p sub_159FEB+17-p
					; sub_159FEB+32-p sub_15A028+10-p
					; sub_15A048+10-p sub_15A198+7-j
		LDA		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A1A7:				; CODE XREF: sub_15A1A1+2-j
		JMP		_bE_s38		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A1AA:				; CODE XREF: sub_159F6D:loc_159FAB-j
		JSR		sub_15A2B0	; code used at a000
loc_15A1AD:				; CODE XREF: sub_15A1AA+23-j
		LDA		byte_79		; code used at a000
		AND		#3		; code used at a000
		BEQ		loc_15A1C2	; code used at a000
		JSR		_calc_pads	; code used at a000
		JSR		sub_15A1D0	; code used at a000
		JSR		sub_15A1EC	; code used at a000
		JSR		sub_15A21E	; code used at a000
		JSR		sub_15A205	; code used at a000
loc_15A1C2:				; CODE XREF: sub_15A1AA+7-j
		JSR		sub_15A24B	; code used at a000
		JSR		sub_15A238	; code used at a000
		JSR		sub_15A291	; code used at a000
		INC		byte_79		; code used at a000
		JMP		loc_15A1AD	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A1D0:				; CODE XREF: sub_15A1AA+C-p
		LDA		_pads		; code used at a000
		AND		#$10		; code used at a000
		BEQ		locret_15A1EB	; code used at a000
		LDA		_pads+2
		ORA		#$10
		STA		_pads+2
		JSR		sub_15A2A7
		INY
		CPY		#$A
		BCC		loc_15A1E6
		LDY		#0
loc_15A1E6:				; CODE XREF: sub_15A1D0+12-j
		STY		byte_74,X
		JSR		sub_15A28C
locret_15A1EB:				; CODE XREF: sub_15A1D0+4-j
					; sub_15A1EC+4-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A1EC:				; CODE XREF: sub_15A1AA+F-p
		LDA		_pads		; code used at a000
		AND		#$20       ; code used at a000
		BEQ		locret_15A1EB	; code used at a000
		LDA		_pads+2
		ORA		#$20 
		STA		_pads+2
		JSR		sub_15A2A7
		DEY
		BPL		loc_15A200
		LDY		#9
loc_15A200:				; CODE XREF: sub_15A1EC+10-j
		STY		byte_74,X
		JMP		sub_15A28C

; =============== S U B	R O U T	I N E =======================================
sub_15A205:				; CODE XREF: sub_15A1AA+15-p
		LDA		_pads		; code used at a000
		BPL		locret_15A21D	; code used at a000
		LDA		word_4
		CMP		#$17
		BEQ		locret_15A21D
		LDA		_pads+2
		ORA		#$80 
		STA		_pads+2
		JSR		sub_15A29A
		INC		word_4
		JMP		sub_15A180
locret_15A21D:				; CODE XREF: sub_15A205+2-j
					; sub_15A205+8-j sub_15A21E+4-j
					; sub_15A21E+A-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A21E:				; CODE XREF: sub_15A1AA+12-p
		LDA		_pads		; code used at a000
		AND		#$40       ; code used at a000
		BEQ		locret_15A21D	; code used at a000
		LDA		word_4
		CMP		#$16
		BEQ		locret_15A21D
		LDA		_pads+2
		ORA		#$40 
		STA		_pads+2
		JSR		sub_15A29A
		DEC		word_4
		JMP		sub_15A180

; =============== S U B	R O U T	I N E =======================================
sub_15A238:				; CODE XREF: sub_15A1AA+1B-p
		LDA		_pads		; code used at a000
		AND		#2		; code used at a000
		BEQ		nullsub_17	; code used at a000
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
		STA		word_4+1	; code used at a000
		STA		word_6		; code used at a000
		PLA				; code used at a000
		PLA				; code used at a000
		LDA		#$FF		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A24B:				; CODE XREF: sub_15A1AA:loc_15A1C2-p
		LDA		_pads		; code used at a000
		LSR		; code used at a000
		BCC		nullsub_17	; code used at a000
		JSR		sub_15A2A1
		LDA		#0
		STA		word_4
		STA		word_4+1
		STA		word_6
		PLA
		PLA
		LDX		byte_74
		LDY		#0
		JSR		sub_15A268
		LDX		byte_75
		LDY		#2

; =============== S U B	R O U T	I N E =======================================
sub_15A268:				; CODE XREF: sub_15A24B+16-p
		CPX		#0
		BEQ		loc_15A284
loc_15A26C:				; CODE XREF: sub_15A268+1A-j
		LDA		byte_15A287,Y
		CLC
		ADC		word_4
		STA		word_4
		LDA		byte_15A287+1,Y
		ADC		word_4+1
		STA		word_4+1
		LDA		#0
		ADC		word_6
		STA		word_6
		DEX
		BNE		loc_15A26C
loc_15A284:				; CODE XREF: sub_15A268+2-j
		LDA		#0
		RTS
byte_15A287:
		.BYTE $10,$27,$E8,  3	; DATA XREF: sub_15A268:loc_15A26C-r
					; sub_15A268+C-r

; =============== S U B	R O U T	I N E =======================================
nullsub_17:				; CODE XREF: sub_15A238+4-j
					; sub_15A24B+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A28C:				; CODE XREF: sub_15A1D0+18-p
					; sub_15A1EC+16-j
		LDA		#$78 
		STA		byte_76
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A291:				; CODE XREF: sub_15A1AA+1E-p
		LDA		byte_76		; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		byte_76		; code used at a000
		BPL		sub_15A2A1	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A29A:				; CODE XREF: sub_15A205+10-p
					; sub_15A21E+12-p
		JSR		sub_15A2A7	; code used at a000
		INY				; code used at a000
		JMP		sub_15A2A3	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A2A1:				; CODE XREF: sub_15A24B+5-p
					; sub_15A291+7-j
		LDY		#$5A       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A2A3:				; CODE XREF: sub_15A29A+4-j
		TYA				; code used at a000
		JMP		_bE_s38		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A2A7:				; CODE XREF: sub_15A1D0+C-p
					; sub_15A1EC+C-p sub_15A29A-p
		LDA		word_4		; code used at a000
		SEC				; code used at a000
		SBC		#$16		; code used at a000
		TAX				; code used at a000
		LDY		byte_74,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A2B0:				; CODE XREF: sub_15A1AA-p
		LDA		#$17		; code used at a000
		STA		word_4		; code used at a000
		LDA		#8		; code used at a000
		STA		word_4+1	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_74		; code used at a000
		STA		byte_75		; code used at a000
		STA		byte_79		; code used at a000
		LDA		#$F8       ; code used at a000
		STA		byte_76		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_sB:					; CODE XREF: sub_9E92+2-P _b0_s46+5F-P
					; _b6_s10+5A-P _b6_s1E+12-P
					; sub_9BE69+39-P sub_9BE69+66-P
					; sub_9BE69+98-P sub_12911A+2-P
					; sub_1294D0+5-P sub_129EBC+16-P
					; _bC_s13+28-P _bC_s2B+5-P _bC_s24+12-P
					; _bC_s20+4-P sub_12B683+28-P
					; _bD_s10+2-P sub_1580A1+8-j
					; sub_15819F+16-j sub_158562+2-p
					; sub_158569-p sub_158581+5-p
					; _bE_s1C+F-p sub_1757A4+C-P
					; DATA XREF: BANKE:8016-o
		TAX				; code used at a000
		LDA		byte_80		; code used at a000
		PHA				; code used at a000
		LDA		byte_81		; code used at a000
		PHA				; code used at a000
		TXA				; code used at a000
		JSR		sub_15A325	; code used at a000
		JSR		sub_15A2DA	; code used at a000
		PLA				; code used at a000
		STA		byte_81		; code used at a000
		PLA				; code used at a000
		STA		byte_80		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A2DA:				; CODE XREF: _bE_sB+B-p	sub_15A2DA+13-j
		JSR		sub_15A38D	; code used at a000
		JSR		sub_159D86	; code used as ind data	at a000
		DEC		byte_7F		; code used at a000
		BEQ		loc_15A2F0	; code used at a000
		LDA		byte_470	; code used at a000
		SEC				; code used at a000
		SBC		#$10		; code used at a000
		STA		byte_470	; code used at a000
		JMP		sub_15A2DA	; code used at a000
loc_15A2F0:				; CODE XREF: sub_15A2DA+8-j
		JSR		sub_15A5F4	; code used at a000
		LDX		#$1E		; code used at a000
		LDA		byte_7E		; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_15A31E	; code used at a000
		CMP		#8		; code used at a000
		BEQ		loc_15A317	; code used at a000
		LDX		#$3E       ; code used at a000
		CMP		#$13		; code used at a000
		BEQ		loc_15A31E	; code used at a000
		CMP		#$E		; code used at a000
		BEQ		loc_15A31C	; code used at a000
		CMP		#1		; code used at a000
		BNE		loc_15A322	; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		DEC		word_4		; code used at a000
		LDA		word_4		; code used at a000
		JMP		loc_15A319	; code used at a000
loc_15A317:				; CODE XREF: sub_15A2DA+23-j
		LDA		#$3E 
loc_15A319:				; CODE XREF: sub_15A2DA+3A-j
		JSR		sub_159E55	; code used at a000
loc_15A31C:				; CODE XREF: sub_15A2DA+2D-j
		LDX		#$14		; code used at a000
loc_15A31E:				; CODE XREF: sub_15A2DA+1F-j
					; sub_15A2DA+29-j
		TXA				; code used at a000
		JSR		sub_159E55	; code used at a000
loc_15A322:				; CODE XREF: sub_15A2DA+31-j
		JMP		_bE_s34		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A325:				; CODE XREF: _bE_sB+8-p
		STA		byte_7E		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_15A346,X	; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		byte_7F		; code used at a000
		LDA		byte_15A346,X	; code used at a000
		STA		byte_82		; code used at a000
		AND		#$F		; code used at a000
		ORA		#$10		; code used at a000
		STA		byte_471	; code used at a000
		INX				; code used at a000
		LDA		byte_15A346,X	; code used at a000
		STA		byte_470	; code used at a000
		RTS				; code used at a000
byte_15A346:
		.BYTE $DF,$D1,$B8,$A6,$54,$94,$48,$42,$4B,$D3,$55,$98,$33,$5B,$8E,$81
					; DATA XREF: sub_15A325+4-r
					; sub_15A325+D-r sub_15A325+1A-r
		.BYTE $98,$96,$47,$87,$5C,$D2,$35,$79,$24,$4A,$34,$5A,$98,$86,$FE,$E1 ;	data used at a000
		.BYTE $8C,$82,$48,$86,$54,$7B,$98,$96

; =============== S U B	R O U T	I N E =======================================
sub_15A36E:				; CODE XREF: sub_15A38D+F-j
					; sub_15A38D+13-j
		LDA		byte_7F		; code used at a000
		CMP		#$B		; code used at a000
		BEQ		loc_15A381	; code used at a000
		CMP		#6		; code used at a000
		BCS		loc_15A3A6	; code used at a000
		CMP		#2		; code used at a000
		BCC		loc_15A3A6	; code used at a000
		SBC		#1		; code used at a000
		JMP		loc_15A3BB	; code used at a000
loc_15A381:				; CODE XREF: sub_15A36E+4-j
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		#$A		; code used at a000
		JMP		loc_15A3BC	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A38D:				; CODE XREF: sub_15A2DA-p
		JSR		sub_15A5DD	; code used at a000
		LDA		byte_7E		; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_15A3D4	; code used at a000
		CMP		#8		; code used at a000
		BEQ		loc_15A3B1	; code used at a000
		CMP		#1		; code used at a000
		BEQ		sub_15A36E	; code used at a000
		CMP		#$E		; code used at a000
		BEQ		sub_15A36E	; code used at a000
		CMP		#$13		; code used at a000
		BEQ		loc_15A3A9	; code used at a000
loc_15A3A6:				; CODE XREF: sub_15A36E+8-j
					; sub_15A36E+C-j sub_15A38D+22-j
					; sub_15A38D+2C-j sub_15A38D+4B-j
		JMP		sub_15A472	; code used at a000
loc_15A3A9:				; CODE XREF: sub_15A38D+17-j
		LDA		byte_7F		; code used at a000
		CMP		#9		; code used at a000
		BEQ		loc_15A3C5	; code used at a000
		BNE		loc_15A3A6	; code used at a000
loc_15A3B1:				; CODE XREF: sub_15A38D+B-j
		LDA		byte_7F
		CMP		#9
		BEQ		loc_15A3C5
		CMP		#5
		BCS		loc_15A3A6
loc_15A3BB:				; CODE XREF: sub_15A36E+10-j
		ASL		; code used at a000
loc_15A3BC:				; CODE XREF: sub_15A36E+1C-j
		TAX				; code used at a000
		LDY		#$20       ; code used at a000
		JSR		sub_15A3E1	; code used at a000
		JMP		loc_15A47E	; code used at a000
loc_15A3C5:				; CODE XREF: sub_15A38D+20-j
					; sub_15A38D+28-j
		LDX		#0		; code used at a000
		LDA		byte_595	; code used at a000
		CMP		#$7D       ; code used at a000
		BNE		loc_15A3D0	; code used at a000
		LDX		#$A
loc_15A3D0:				; CODE XREF: sub_15A38D+3F-j
		LDY		#$20       ; code used at a000
		BNE		sub_15A3E1	; code used at a000
loc_15A3D4:				; CODE XREF: sub_15A38D+7-j
		LDA		byte_7F		; code used at a000
		CMP		#3		; code used at a000
		BCS		loc_15A3A6	; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		#$12		; code used at a000
		TAX				; code used at a000
		LDY		#$10		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A3E1:				; CODE XREF: sub_15A38D+32-p
					; sub_15A38D+45-j
		STY		byte_6ABE	; code used at a000
		LDA		off_15A4F9,X	; code used at a000
		STA		word_6C		; code used at a000
		LDA		off_15A4F9+1,X	; code used at a000
		STA		word_6C+1	; code used at a000
		LDX		#0		; code used at a000
		LDY		#0		; code used at a000
loc_15A3F2:				; CODE XREF: sub_15A3E1+25-j
		LDA		(word_6C),Y	; code used at a000
		BEQ		loc_15A414	; code used at a000
		CMP		#$FB       ; code used at a000
		BCS		loc_15A41B	; code used at a000
		CMP		#$EC       ; code used at a000
		BCS		loc_15A442	; code used at a000
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
loc_15A402:				; CODE XREF: sub_15A3E1+5E-j
					; sub_15A3E1+71-j sub_15A3E1+8D-j
		INY				; code used at a000
		CPX		byte_6ABE	; code used at a000
		BCC		loc_15A3F2	; code used at a000
		LDX		#0		; code used at a000
		TXA				; code used at a000
loc_15A40B:				; CODE XREF: sub_15A3E1+30-j
		STA		byte_460,X	; code used at a000
		INX				; code used at a000
		CPX		#9		; code used at a000
		BNE		loc_15A40B	; code used at a000
		RTS				; code used at a000
loc_15A414:				; CODE XREF: sub_15A3E1+13-j
		LDA		#0		; code used at a000
		STA		byte_6AC0	; code used at a000
		BEQ		loc_15A45A	; code used at a000
loc_15A41B:				; CODE XREF: sub_15A3E1+17-j
		CMP		#$FF		; code used at a000
		BEQ		loc_15A455	; code used at a000
		SEC				; code used at a000
		SBC		#$FB       ; code used at a000
		STA		byte_CE		; code used at a000
		STY		byte_6ABF	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		_sram_bank0_subF ; code	used at	a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
loc_15A430:				; CODE XREF: sub_15A3E1+59-j
		LDA		word_4,Y	; code used at a000
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		CPY		#4		; code used at a000
		BCC		loc_15A430	; code used at a000
		LDY		byte_6ABF	; code used at a000
		JMP		loc_15A402	; code used at a000
loc_15A442:				; CODE XREF: sub_15A3E1+1B-j
		STY		byte_6ABF	; code used at a000
		SBC		#$E5       ; code used at a000
		TAY				; code used at a000
		LDA		byte_580,Y	; code used at a000
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
		LDY		byte_6ABF	; code used at a000
		JMP		loc_15A402	; code used at a000
loc_15A455:				; CODE XREF: sub_15A3E1+3C-j
		LDA		#$FF		; code used at a000
		STA		byte_6AC0	; code used at a000
loc_15A45A:				; CODE XREF: sub_15A3E1+38-j
		INY				; code used at a000
		STY		byte_6ABF	; code used at a000
		LDA		(word_6C),Y	; code used at a000
		TAY				; code used at a000
		LDA		byte_6AC0	; code used at a000
loc_15A464:				; CODE XREF: sub_15A3E1+88-j
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
		DEY				; code used at a000
		BNE		loc_15A464	; code used at a000
		LDY		byte_6ABF	; code used at a000
		JMP		loc_15A402	; code used at a000

; =============== S U B	R O U T	I N E =======================================
nullsub_9:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A472:				; CODE XREF: sub_15A38D:loc_15A3A6-j
		LDX		#0		; code used at a000
		LDA		#$FF		; code used at a000
loc_15A476:				; CODE XREF: sub_15A472+A-j
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
		CPX		#$40       ; code used at a000
		BNE		loc_15A476	; code used at a000
loc_15A47E:				; CODE XREF: sub_15A38D+35-j
		LDA		byte_470	; code used at a000
		TAY				; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		CLC				; code used at a000
		ADC		byte_75		; code used at a000
		SEC				; code used at a000
		SBC		#7		; code used at a000
		STA		byte_11		; code used at a000
		TYA				; code used at a000
		AND		#$F		; code used at a000
		CLC				; code used at a000
		ADC		byte_74		; code used at a000
		SEC				; code used at a000
		SBC		#8		; code used at a000
		STA		byte_10		; code used at a000
		LDA		byte_471	; code used at a000
		AND		#$F		; code used at a000
		STA		word_6		; code used at a000
		ASL		; code used at a000
		SEC				; code used at a000
		SBC		#1		; code used at a000
		STA		word_6+1	; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
loc_15A4AA:				; CODE XREF: sub_15A472+49-j
		LDX		byte_10		; code used as ind data	at a000
		LDY		byte_11		; code used as ind data	at a000
		JSR		sub_176C99	; code used as ind data	at a000
		JSR		sub_175B72	; code used as ind data	at a000
		JSR		sub_15A4BE	; code used as ind data	at a000
		INC		byte_10		; code used as ind data	at a000
		DEC		word_6		; code used as ind data	at a000
		BNE		loc_15A4AA	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A4BE:				; CODE XREF: sub_15A472+42-p
		LDA		byte_400,Y	; code used as ind data	at a000
		CMP		#$FF		; code used as ind data	at a000
		BNE		locret_15A4F8	; code used as ind data	at a000
		LDA		byte_7200,X	; code used as ind data	at a000
		STA		byte_400,Y	; code used as ind data	at a000
		INY				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		LDA		byte_7200,X	; code used as ind data	at a000
		STA		byte_400,Y	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		TYA				; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		ADC		word_6+1	; code used as ind data	at a000
		TAY				; code used as ind data	at a000
		LDA		byte_7200,X	; code used as ind data	at a000
		STA		byte_400,Y	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INY				; code used as ind data	at a000
		LDA		byte_7200,X	; code used as ind data	at a000
		STA		byte_400,Y	; code used as ind data	at a000
		TXA				; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_7300,X	; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		word_4+1	; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		TAY				; code used as ind data	at a000
		DEY				; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		byte_460,Y	; code used as ind data	at a000
locret_15A4F8:				; CODE XREF: sub_15A4BE+5-j
		RTS				; code used as ind data	at a000
off_15A4F9:
		.WORD byte_15A511	; DATA XREF: sub_15A3E1+3-r
					; sub_15A3E1+8-r
					; data used at a000
		.WORD byte_15A531	; data used at a000
		.WORD byte_15A540	; data used at a000
		.WORD byte_15A54F	; data used at a000
		.WORD byte_15A55F	; data used at a000
		.WORD byte_15A573
		.WORD byte_15A593	; data used at a000
		.WORD byte_15A5A0
		.WORD byte_15A5AE
		.WORD byte_15A5B8	; data used at a000
		.WORD byte_15A5C2	; data used at a000
		.WORD byte_15A5CD	; data used at a000
byte_15A511:
		.BYTE $78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$7D
					; DATA XREF: BANKE:off_15A4F9-o
		.BYTE $EC,$ED,$EE,$EF,$F0,$F1,$F2,$F3,$F4,$F5,$F6,$F7,$F8,$F9,$FA,$7C ;	ind data used at a000
byte_15A531:
		.BYTE $25,$32,$28,$78,$78,$78,$78,$7D,$FF,  8,	0,  7,$7C,$FF,	8
					; DATA XREF: BANKE:A4FB-o
					; ind data used	at a000
byte_15A540:
		.BYTE	0,  2,$37,$34,$29,$30,$30,$7C,$FF,  8,	0,  7,$7C,$FF,	8
					; DATA XREF: BANKE:A4FD-o
					; ind data used	at a000
byte_15A54F:
		.BYTE	0,  2,$2D,$38,$29,$31,	0,  1,$7C,$FF,	8,  0,	7,$7C,$FF,  8
					; DATA XREF: BANKE:A4FF-o
					; ind data used	at a000
byte_15A55F:
		.BYTE	0,  2,$29,$35,$39,$2D,$34,$7C,$FF,  8,$7E,$7E,$7E,$7E,$7E,$7E
					; DATA XREF: BANKE:A501-o
		.BYTE $7E,$7F,$FF,  8	; ind data used	at a000
byte_15A573:
		.BYTE $78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$7D
					; DATA XREF: BANKE:A503-o
		.BYTE $EC,$ED,$EE,$EF,$F0,$F1,$F2,$F3,$7A,$78,$78,$78,$78,$78,$7D,$7C
byte_15A593:
		.BYTE $FF,  8,$7A,$79,$FB,$78,$7D,$FF,	8,$77,	0,  6,$7C
					; DATA XREF: BANKE:A505-o
					; ind data used	at a000
byte_15A5A0:
		.BYTE $FF,  4,$7A,$FB,$79,$FC,$78,$7D,$FF,  4,$77,  0, $A,$7C
					; DATA XREF: BANKE:A507-o
byte_15A5AE:
		.BYTE $FB,$79,$FC,$79,$FD,$78,$7D,  0, $F,$7C ;	DATA XREF: BANKE:A509-o
byte_15A5B8:
		.BYTE $FC,$79,$FD,$79,$FE,$78,$7D,  0, $F,$7C ;	DATA XREF: BANKE:A50B-o
					; ind data used	at a000
byte_15A5C2:
		.BYTE $32,$28,$2D,$38,$2D,$33,$32,$7C,	0,  7,$7C ; DATA XREF: BANKE:A50D-o
					; ind data used	at a000
byte_15A5CD:
		.BYTE $36,$31,$25,$38,$2D,$33,$32,$7C,$7E,$7E,$7E,$7E,$7E,$7E,$7E,$7F
					; DATA XREF: BANKE:A50F-o
					; ind data used	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A5DD:				; CODE XREF: sub_15A38D-p
		LDA		byte_2A		; code used at a000
		STA		byte_74		; code used at a000
		LDA		byte_2B		; code used at a000
		STA		byte_75		; code used at a000
		LDA		byte_2F		; code used at a000
		AND		#1		; code used at a000
		BEQ		locret_15A5F3	; code used at a000
		LDA		byte_30		; code used at a000
		STA		byte_74		; code used at a000
		LDA		byte_31		; code used at a000
		STA		byte_75		; code used at a000
locret_15A5F3:				; CODE XREF: sub_15A5DD+C-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A5F4:				; CODE XREF: sub_15A2DA:loc_15A2F0-p
		LDA		byte_470	; code used at a000
		AND		#$F		; code used at a000
		STA		byte_77		; code used at a000
		LDA		byte_470	; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		byte_76		; code used at a000
		LDA		byte_82		; code used at a000
		AND		#$F		; code used at a000
		STA		byte_75		; code used at a000
		LDA		byte_82		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		byte_74		; code used at a000
		LDA		byte_77		; code used at a000
		CMP		#8		; code used at a000
		BCS		loc_15A63B	; code used at a000
		CMP		#7		; code used at a000
		BEQ		loc_15A61F	; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		TXA				; code used at a000
loc_15A61F:				; CODE XREF: sub_15A5F4+26-j
		JSR		sub_15A644	; code used at a000
		JSR		sub_15A65C	; code used at a000
		LDA		#8		; code used at a000
		SEC				; code used at a000
		SBC		byte_77		; code used at a000
		TAX				; code used at a000
loc_15A62B:				; CODE XREF: sub_15A5F4+3A-j
		DEC		byte_75		; code used at a000
		DEX				; code used at a000
		BNE		loc_15A62B	; code used at a000
		LDA		byte_75		; code used at a000
		BMI		locret_15A636	; code used at a000
		BNE		loc_15A637	; code used at a000
locret_15A636:				; CODE XREF: sub_15A5F4+3E-j
		RTS				; code used at a000
loc_15A637:				; CODE XREF: sub_15A5F4+40-j
		LDA		#8		; code used at a000
		STA		byte_77		; code used at a000
loc_15A63B:				; CODE XREF: sub_15A5F4+22-j
		JSR		sub_15A641	; code used at a000
		JMP		loc_15A663	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A641:				; CODE XREF: sub_15A5F4:loc_15A63B-p
		SEC				; code used at a000
		SBC		#7		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A644:				; CODE XREF: sub_15A5F4:loc_15A61F-p
		TAX				; code used at a000
		LDA		#$80       ; code used at a000
loc_15A647:				; CODE XREF: sub_15A644+5-j
		LSR		; code used at a000
		DEX				; code used at a000
		BNE		loc_15A647	; code used at a000
		ASL		; code used at a000
		STA		byte_78		; code used at a000
		LDX		byte_75		; code used at a000
		LDA		#0		; code used at a000
loc_15A652:				; CODE XREF: sub_15A644+13-j
		ORA		byte_78		; code used at a000
		LSR		byte_78		; code used at a000
		DEX				; code used at a000
		BNE		loc_15A652	; code used at a000
		STA		byte_78		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A65C:				; CODE XREF: sub_15A5F4+2E-p
		LDA		byte_76		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		JMP		loc_15A668	; code used at a000
loc_15A663:				; CODE XREF: sub_15A5F4+4A-j
		LDA		byte_76		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
loc_15A668:				; CODE XREF: sub_15A65C+4-j
		LDA		byte_74		; code used at a000
		TAY				; code used at a000
loc_15A66B:				; CODE XREF: sub_15A65C+1C-j
		LDA		byte_78		; code used at a000
		EOR		#$FF		; code used at a000
		AND		byte_647,X	; code used at a000
		STA		byte_647,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		DEY				; code used at a000
		BNE		loc_15A66B	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s4_msg_m00:				; CODE XREF: sub_A10E+A-P sub_A8A2+2-P
					; _b1_sD+138-P _b1_sD+1AF-P _b4_s9+2-P
					; sub_12A312+30-P sub_12A4B6+3B-P
					; sub_141FC8+17-P _bD_sC+28-P
					; _bD_sC+91-P _bD_sC+9B-P
					; _far_bE_s4_msg_m00_delta3+3-P
					; sub_15830F+31-p sub_15B288+42-p
					; _far_bE_s4_msg_m00+1-P sub_176C72-P
					; DATA XREF: BANKE:8008-o BANKE:8010-o
		STA		byte_6A33	; code used at a000
		LDA		byte_CE		; code used at a000
		PHA				; code used at a000
		LDA		byte_6A33	; code used at a000
		LDY		#0		; code used at a000
		JSR		_msg_display	; code used at a000
		PLA				; code used at a000
		STA		byte_CE		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s6_msg_mFF:				; CODE XREF: _b1_s9+CC-P _b1_sC+26-P
					; _b4_s8+19-P sub_6A96F+12-P
					; DATA XREF: BANKE:800C-o BANKE:800E-o
		STA		byte_6A33	; code used at a000
		LDA		byte_CE		; code used at a000
		PHA				; code used as ind data	at a000
		LDA		byte_6A33	; code used at a000
		LDY		#$FF		; code used at a000
		JSR		_msg_display	; code used at a000
		PLA				; code used at a000
		STA		byte_CE		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_msg_display:				; CODE XREF: _bE_s4_msg_m00+B-p
					; _bE_s6_msg_mFF+B-p
		STY		byte_78		; code used as ind data	at a000
		JSR		_get_msg_ptr	; code used as ind data	at a000
		JSR		sub_15AB4F	; code used as ind data	at a000
loc_15A6A7:				; CODE XREF: _msg_display+14-j
		JSR		sub_15A6B6	; code used as ind data	at a000
		JSR		sub_15AB9E	; code used as ind data	at a000
		JSR		sub_15A6F5	; code used as ind data	at a000
		JSR		sub_15AB31	; code used as ind data	at a000
		JMP		loc_15A6A7	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A6B6:				; CODE XREF: _msg_display:loc_15A6A7-p
					; sub_15A6B6+F-j sub_15A6B6+27-j
					; sub_15AA0B:loc_15AA14-p
					; sub_15AB4F:loc_15AB5E-p
					; sub_15AC41+99-j
		JSR		sub_15AF01	; code used as ind data	at a000
		BCC		loc_15A6D4	; code used as ind data	at a000
loc_15A6BB:				; CODE XREF: sub_15A6B6+3C-j
					; sub_15ACE2+4C-j
		JSR		sub_15A95A	; code used as ind data	at a000
		CMP		#$EC       ; code used as ind data at a000
		BNE		loc_15A6C8	; code used as ind data	at a000
		JSR		sub_15A787	; code used as ind data	at a000
		JMP		sub_15A6B6	; code used as ind data	at a000
loc_15A6C8:				; CODE XREF: sub_15A6B6+A-j
		PHA				; code used as ind data	at a000
		AND		#$F0       ; code used as ind data at a000
		CMP		#$A0       ; code used as ind data at a000
		BNE		loc_15A6D2	; code used as ind data	at a000
		JMP		sub_15ACE2	; code used at a000
loc_15A6D2:				; CODE XREF: sub_15A6B6+17-j
		PLA				; code used as ind data	at a000
locret_15A6D3:				; CODE XREF: sub_15A6B6+23-j
					; sub_15A6B6+2B-j sub_15A6B6+2F-j
					; sub_15A6B6+33-j sub_15A6B6+37-j
		RTS				; code used as ind data	at a000
loc_15A6D4:				; CODE XREF: sub_15A6B6+3-j
		BMI		loc_15A6D7	; code used as ind data	at a000
		RTS				; code used as ind data	at a000
loc_15A6D7:				; CODE XREF: sub_15A6B6:loc_15A6D4-j
		CMP		#$FF		; code used as ind data	at a000
		BEQ		locret_15A6D3	; code used as ind data	at a000
		CMP		#$FE       ; code used as ind data at a000
		BEQ		sub_15A6B6	; code used as ind data	at a000
		CMP		#$FD       ; code used as ind data at a000
		BEQ		locret_15A6D3	; code used as ind data	at a000
		CMP		#$EF       ; code used as ind data at a000
		BEQ		locret_15A6D3	; code used as ind data	at a000
		CMP		#$EE       ; code used as ind data at a000
		BEQ		locret_15A6D3	; code used as ind data	at a000
		CMP		#$EB       ; code used as ind data at a000
		BEQ		locret_15A6D3	; code used as ind data	at a000
		JSR		sub_15A7B5	; code used as ind data	at a000
		JMP		loc_15A6BB	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A6F5:				; CODE XREF: _msg_display+E-p
		JSR		sub_15AC10	; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		BPL		loc_15A6FE	; code used as ind data	at a000
		JMP		sub_15A79E	; code used as ind data	at a000
loc_15A6FE:				; CODE XREF: sub_15A6F5+4-j
		CMP		#$66       ; code used as ind data at a000
		BNE		loc_15A709	; code used as ind data	at a000
loc_15A702:				; CODE XREF: sub_15A6F5+16-j
		PHA				; code used at a000
		JSR		sub_15AC05	; code used at a000
		PLA				; code used at a000
		BNE		loc_15A70D	; code used at a000
loc_15A709:				; CODE XREF: sub_15A6F5+B-j
		CMP		#$51       ; code used as ind data at a000
		BEQ		loc_15A702	; code used as ind data	at a000
loc_15A70D:				; CODE XREF: sub_15A6F5+12-j
		PHA				; code used as ind data	at a000
		LDA		word_4		; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		byte_80		; code used as ind data	at a000
		STA		word_4		; code used as ind data	at a000
		TXA				; code used as ind data	at a000
		LDX		#0		; code used as ind data	at a000
loc_15A718:				; CODE XREF: sub_15A6F5+4F-j
		CMP		#0		; code used as ind data	at a000
		BEQ		loc_15A74A	; code used as ind data	at a000
		CMP		#$60       ; code used as ind data at a000
		BEQ		loc_15A74A	; code used as ind data	at a000
		CMP		#$61       ; code used as ind data at a000
		BEQ		loc_15A74A	; code used as ind data	at a000
		CMP		#$EF       ; code used as ind data at a000
		BEQ		loc_15A74A	; code used as ind data	at a000
		CMP		#$FF		; code used as ind data	at a000
		BEQ		loc_15A74A	; code used as ind data	at a000
		CMP		#$EE       ; code used as ind data at a000
		BEQ		loc_15A74A	; code used as ind data	at a000
		CMP		#$EB       ; code used as ind data at a000
		BEQ		loc_15A74A	; code used as ind data	at a000
		CMP		#$FD       ; code used as ind data at a000
		BEQ		loc_15A73A	; code used as ind data	at a000
		INC		word_4		; code used as ind data	at a000
loc_15A73A:				; CODE XREF: sub_15A6F5+41-j
		LDA		word_4		; code used as ind data	at a000
		CMP		#$17		; code used as ind data	at a000
		BCS		loc_15A747	; code used as ind data	at a000
		LDA		byte_6B0A,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		JMP		loc_15A718	; code used as ind data	at a000
loc_15A747:				; CODE XREF: sub_15A6F5+49-j
		JSR		sub_15A75A	; code used as ind data	at a000
loc_15A74A:				; CODE XREF: sub_15A6F5+25-j
					; sub_15A6F5+29-j sub_15A6F5+2D-j
					; sub_15A6F5+31-j sub_15A6F5+35-j
					; sub_15A6F5+39-j sub_15A6F5+3D-j
		PLA				; code used as ind data	at a000
		STA		word_4		; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		byte_6ACD	; code used as ind data	at a000
		JMP		sub_15A99E	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A754:				; CODE XREF: sub_15AC05:loc_15AC0C-p
		JSR		sub_15AA07	; code used at a000
		JMP		loc_15A76E	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A75A:				; CODE XREF: sub_15A6F5:loc_15A747-p
					; sub_15A781-p sub_15A79E+6-j
					; sub_15A8D3+6-p sub_15AB31+1A-p
		BIT		byte_6A32	; code used at a000
		BPL		loc_15A765	; code used as ind data	at a000
		LDA		byte_80		; code used as ind data	at a000
		BEQ		nullsub_18	; code used as ind data	at a000
		BNE		sub_15A76B	; code used as ind data	at a000
loc_15A765:				; CODE XREF: sub_15A75A+3-j
		LDA		byte_80		; code used at a000
		CMP		#2		; code used at a000
		BCC		nullsub_18	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A76B:				; CODE XREF: sub_15A75A+9-j sub_15A77B-p
		JSR		sub_15A9E8	; code used as ind data	at a000
loc_15A76E:				; CODE XREF: sub_15A754+3-j
		JSR		sub_15A999	; code used as ind data	at a000
		BCS		loc_15A777	; code used at a000
		JSR		sub_15AA5F	; code used at a000
		RTS				; code used as ind data	at a000
loc_15A777:				; CODE XREF: sub_15A76B+6-j
		JSR		sub_15AA51	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A77B:				; CODE XREF: sub_15A79E+E-j
		JSR		sub_15A76B	; code used at a000
		JMP		sub_15A791	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A781:				; CODE XREF: sub_15A79E+12-j
		JSR		sub_15A75A	; code used at a000
		JMP		sub_15A791	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A787:				; CODE XREF: sub_15A6B6+C-p
		LDA		byte_82		; code used as ind data	at a000
		AND		#$7F       ; code used as ind data at a000
		STA		byte_82		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A78E:				; CODE XREF: sub_15A79E+2-j
		JSR		sub_15AA51	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A791:				; CODE XREF: sub_15A77B+3-j
					; sub_15A781+3-j
		LDA		byte_6ACB	; code used at a000
		BNE		loc_15A79B	; code used at a000
		LDA		byte_81		; code used at a000
		STA		byte_6ACB	; code used at a000
loc_15A79B:				; CODE XREF: sub_15A791+3-j
		PLA				; code used at a000
		PLA				; code used at a000

; =============== S U B	R O U T	I N E =======================================
nullsub_18:				; CODE XREF: sub_15A75A+7-j
					; sub_15A75A+F-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A79E:				; CODE XREF: sub_15A6F5+6-j
		CMP		#$FF		; code used at a000
		BEQ		sub_15A78E	; code used as ind data	at a000
		CMP		#$EB       ; code used at a000
		BEQ		sub_15A75A	; code used at a000
		CMP		#$FD       ; code used at a000
		BEQ		loc_15A7EC	; code used at a000
		CMP		#$EF       ; code used at a000
		BEQ		sub_15A77B	; code used at a000
		CMP		#$EE       ; code used at a000
		BEQ		sub_15A781	; code used at a000
loc_15A7B2:				; CODE XREF: sub_15A79E:loc_15A7B2-j
		JMP		loc_15A7B2

; =============== S U B	R O U T	I N E =======================================
sub_15A7B5:				; CODE XREF: sub_15A6B6+39-p
		CMP		#$F9       ; code used as ind data at a000
		BCS		loc_15A7EF	; code used as ind data	at a000
		CMP		#$F8       ; code used as ind data at a000
		BEQ		loc_15A7F2	; code used as ind data	at a000
		CMP		#$F5       ; code used as ind data at a000
		BEQ		loc_15A7F5	; code used as ind data	at a000
		CMP		#$F4       ; code used as ind data at a000
		BEQ		loc_15A80C	; code used as ind data	at a000
		CMP		#$F3       ; code used as ind data at a000
		BEQ		loc_15A836	; code used as ind data	at a000
		CMP		#$F2       ; code used as ind data at a000
		BEQ		loc_15A7F8	; code used as ind data	at a000
		CMP		#$F1       ; code used at a000
		BEQ		loc_15A7FB	; code used at a000
		CMP		#$F0       ; code used as ind data at a000
		BEQ		loc_15A841	; code used at a000
		CMP		#$ED       ; code used at a000
		BEQ		loc_15A7FE	; code used at a000
		CMP		#$F7       ; code used as ind data at a000
		BEQ		loc_15A801	; code used as ind data	at a000
		PHA				; code used at a000
		AND		#$F0       ; code used as ind data at a000
		CMP		#$B0       ; code used at a000
		BEQ		loc_15A804	; code used at a000
		CMP		#$C0       ; code used as ind data at a000
		BEQ		loc_15A808	; code used at a000
		PLA
		AND		#$7F 
		RTS
loc_15A7EC:				; CODE XREF: sub_15A79E+A-j
		JMP		sub_15A8D3	; code used at a000
loc_15A7EF:				; CODE XREF: sub_15A7B5+2-j
		JMP		loc_15A8AE	; code used at a000
loc_15A7F2:				; CODE XREF: sub_15A7B5+6-j
		JMP		sub_15A91C	; code used at a000
loc_15A7F5:				; CODE XREF: sub_15A7B5+A-j
		JMP		loc_15A849	; code used at a000
loc_15A7F8:				; CODE XREF: sub_15A7B5+16-j
		JMP		loc_15A87B	; code used as ind data	at a000
loc_15A7FB:				; CODE XREF: sub_15A7B5+1A-j
		JMP		loc_15A8A3
loc_15A7FE:				; CODE XREF: sub_15A7B5+22-j
		JMP		sub_15A946
loc_15A801:				; CODE XREF: sub_15A7B5+26-j
		JMP		sub_15AD6E	; code used at a000
loc_15A804:				; CODE XREF: sub_15A7B5+2D-j
		PLA				; code used at a000
		JMP		sub_15AC41	; code used at a000
loc_15A808:				; CODE XREF: sub_15A7B5+31-j
		PLA				; code used as ind data	at a000
		JMP		loc_15ACD3	; code used as ind data	at a000
loc_15A80C:				; CODE XREF: sub_15A7B5+E-j
		JSR		sub_15A987	; code used at a000
		LDX		#0		; code used at a000
		JSR		sub_15A96C	; code used at a000
		PHA				; code used at a000
		LDA		#$60       ; code used at a000
		STA		byte_6AEC,Y	; code used at a000
		INY				; code used at a000
		PLA				; code used at a000
		LDX		#1		; code used at a000
		STY		byte_83		; code used at a000
		PHA				; code used at a000
		JSR		sub_158B9D	; code used at a000
		PLA				; code used at a000
		LDY		byte_83		; code used at a000
		LDX		word_4		; code used at a000
		CPX		#$60       ; code used at a000
		BNE		loc_15A82E	; code used at a000
		DEY				; code used at a000
loc_15A82E:				; CODE XREF: sub_15A7B5+76-j
		LDX		#1		; code used at a000
loc_15A830:				; CODE XREF: sub_15A7B5+C3-j
		JSR		sub_15A96E	; code used as ind data	at a000
loc_15A833:				; CODE XREF: sub_15A7B5+89-j
		JMP		sub_15A962	; code used as ind data	at a000
loc_15A836:				; CODE XREF: sub_15A7B5+12-j
		JSR		sub_15A987	; code used at a000
		LDX		#4		; code used at a000
loc_15A83B:				; CODE XREF: sub_15A7B5+91-j
		JSR		sub_15A96C	; code used at a000
		JMP		loc_15A833	; code used at a000
loc_15A841:				; CODE XREF: sub_15A7B5+1E-j
		JSR		sub_15A987
		LDX		#5
		JMP		loc_15A83B
loc_15A849:				; CODE XREF: sub_15A7B5:loc_15A7F5-j
		JSR		sub_15A987	; code used as ind data	at a000
		BPL		loc_15A8B1	; code used as ind data	at a000
		AND		#3		; code used as ind data	at a000
		STA		byte_64		; code used at a000
		BRK
		.BYTE $6D, 7		; ofs 0x00068004, -> dst _b4_s2
		LDA		byte_59		; code used as ind data	at a000
		LDX		#2		; code used as ind data	at a000
		JSR		sub_15A96C	; code used at a000
		PHA				; code used as ind data	at a000
		LDA		#$60       ; code used at a000
		STA		byte_6AEC,Y	; code used as ind data	at a000
		INY				; code used at a000
		PLA				; code used at a000
		LDX		#3		; code used as ind data	at a000
		STY		byte_83		; code used as ind data	at a000
		PHA				; code used at a000
		JSR		sub_158B9D	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		LDY		byte_83		; code used as ind data	at a000
		LDX		word_4		; code used as ind data	at a000
		CPX		#$60       ; code used as ind data at a000
		BNE		loc_15A876	; code used as ind data	at a000
		DEY				; code used as ind data	at a000
loc_15A876:				; CODE XREF: sub_15A7B5+BE-j
		LDX		#3		; code used at a000
		JMP		loc_15A830	; code used at a000
loc_15A87B:				; CODE XREF: sub_15A7B5:loc_15A7F8-j
		LDA		byte_82		; code used as ind data	at a000
		AND		#$7F       ; code used as ind data at a000
		TAX				; code used as ind data	at a000
		DEX				; code used as ind data	at a000
		LDY		#0		; code used as ind data	at a000
		LDA		byte_D2,X	; code used as ind data	at a000
		BPL		loc_15A89D	; code used as ind data	at a000
		AND		#$3C       ; code used as ind data at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		CMP		#8		; code used at a000
		BCS		loc_15A89D	; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		#$6B       ; code used as ind data at a000
		STA		byte_6AEC,Y	; code used as ind data	at a000
		INY				; code used as ind data	at a000
		PLA				; code used at a000
		ADC		#$25       ; code used as ind data at a000
		STA		byte_6AEC,Y	; code used at a000
		INY				; code used as ind data	at a000
loc_15A89D:				; CODE XREF: sub_15A7B5+D0-j
					; sub_15A7B5+D8-j
		JSR		sub_15A992	; code used as ind data	at a000
		JMP		sub_15A962	; code used as ind data	at a000
loc_15A8A3:				; CODE XREF: sub_15A7B5:loc_15A7FB-j
		JSR		sub_15A987
		STA		byte_CE
		JSR		_sram_bank0_sub10
		JMP		loc_15A8B9
loc_15A8AE:				; CODE XREF: sub_15A7B5:loc_15A7EF-j
		SEC				; code used at a000
		SBC		#$F9       ; code used at a000
loc_15A8B1:				; CODE XREF: sub_15A7B5+97-j
		STA		byte_CE		; code used as ind data	at a000
		STA		byte_6A35	; code used at a000
		JSR		_sram_bank0_subF ; code	used as	ind data at a000
loc_15A8B9:				; CODE XREF: sub_15A7B5+F6-j
		LDY		#0		; code used as ind data	at a000
loc_15A8BB:				; CODE XREF: sub_15A7B5+10F-j
		LDA		word_4,Y	; code used as ind data	at a000
		STA		byte_6AEC,Y	; code used as ind data	at a000
		INY				; code used as ind data	at a000
		CPY		#8		; code used as ind data	at a000
		BNE		loc_15A8BB	; code used as ind data	at a000
loc_15A8C6:				; CODE XREF: sub_15A7B5+115-j
		DEY				; code used as ind data	at a000
		LDA		byte_6AEC,Y	; code used as ind data	at a000
		BEQ		loc_15A8C6	; code used as ind data	at a000
		INY				; code used as ind data	at a000
loc_15A8CD:				; CODE XREF: sub_15A91C+27-j
					; sub_15A946:loc_15A957-j
					; sub_15AD6E+2C-j
		JSR		sub_15A962	; code used as ind data	at a000
		JMP		sub_15A992	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A8D3:				; CODE XREF: sub_15A7B5:loc_15A7EC-j
		LDA		byte_80		; code used at a000
		CMP		#2		; code used at a000
		BCC		loc_15A8DC	; code used at a000
		JSR		sub_15A75A	; code used at a000
loc_15A8DC:				; CODE XREF: sub_15A8D3+4-j
		JSR		sub_15AA2A	; code used at a000
		LDA		#$F8       ; code used as ind data at a000
		STA		byte_76		; code used as ind data	at a000
		LDA		#$F		; code used at a000
		STA		word_4		; code used at a000
loc_15A8E7:				; CODE XREF: sub_15A8D3+1A-j
		JSR		sub_15A8F0	; code used at a000
		JSR		sub_15A90B	; code used at a000
		JMP		loc_15A8E7	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A8F0:				; CODE XREF: sub_15A8D3:loc_15A8E7-p
		JSR		_calc_pads	; code used as ind data	at a000
		LDA		_pads		; code used as ind data	at a000
		AND		#3		; code used at a000
		BNE		loc_15A8FA	; code used at a000
		RTS				; code used at a000
loc_15A8FA:				; CODE XREF: sub_15A8F0+7-j
		JSR		sub_15A916	; code used at a000
		BRK
		.BYTE $85, $2F		; _syscall12
		LDX		#2		; code used at a000
		JSR		_vblank_count	; code used at a000
		LDA		byte_580	; code used at a000
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A90B:				; CODE XREF: sub_15A8D3+17-p
		LDX		#$74       ; code used at a000
		LDA		byte_76		; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
		STA		byte_76		; code used at a000
		BPL		sub_15A918	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A916:				; CODE XREF: sub_15A8F0:loc_15A8FA-p
		LDX		#0		; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A918:				; CODE XREF: sub_15A90B+9-j
		TXA				; code used at a000
		JMP		_bE_s38		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A91C:				; CODE XREF: sub_15A7B5:loc_15A7F2-j
		LDX		#2		; code used at a000
loc_15A91E:				; CODE XREF: sub_15A91C+8-j
		LDA		byte_63F,X	; code used as ind data	at a000
		STA		word_4,X	; code used as ind data	at a000
		DEX				; code used at a000
		BPL		loc_15A91E	; code used at a000
		JSR		_bE_s14		; code used at a000
		LDX		#0		; code used as ind data	at a000
loc_15A92B:				; CODE XREF: sub_15A91C+14-j
		INC		byte_9,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#7		; code used as ind data	at a000
		BNE		loc_15A92B	; code used at a000
		LDX		#0		; code used as ind data	at a000
		LDY		#0		; code used at a000
loc_15A936:				; CODE XREF: sub_15A91C+25-j
		LDA		byte_9,X	; code used as ind data	at a000
		BEQ		loc_15A93E	; code used as ind data	at a000
		STA		byte_6AEC,Y	; code used at a000
		INY				; code used as ind data	at a000
loc_15A93E:				; CODE XREF: sub_15A91C+1C-j
		INX				; code used as ind data	at a000
		CPX		#7		; code used as ind data	at a000
		BNE		loc_15A936	; code used as ind data	at a000
		JMP		loc_15A8CD	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A946:				; CODE XREF: sub_15A7B5:loc_15A7FE-j
		LDY		#0
loc_15A948:				; CODE XREF: sub_15A946+F-j
		LDA		byte_6AD1,Y
		CMP		#$FF
		BEQ		loc_15A957
		STA		byte_6AEC,Y
		INY
		CPY		#8
		BNE		loc_15A948
loc_15A957:				; CODE XREF: sub_15A946+7-j
		JMP		loc_15A8CD

; =============== S U B	R O U T	I N E =======================================
sub_15A95A:				; CODE XREF: sub_15A6B6:loc_15A6BB-p
		LDX		byte_83		; code used as ind data	at a000
		INC		byte_83		; code used as ind data	at a000
		LDA		byte_6AEC,X	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A962:				; CODE XREF: sub_15A7B5:loc_15A833-j
					; sub_15A7B5+EB-j
					; sub_15A7B5:loc_15A8CD-p
					; sub_15AC41+6F-j
		LDA		#$EC       ; code used as ind data at a000
		STA		byte_6AEC,Y	; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000
		STA		byte_83		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A96C:				; CODE XREF: sub_15A7B5+5C-p
					; sub_15A7B5:loc_15A83B-p
					; sub_15A7B5+A4-p
		LDY		#0		; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A96E:				; CODE XREF: sub_15A7B5:loc_15A830-p
		STY		byte_83		; code used as ind data	at a000
		PHA				; code used at a000
		JSR		sub_158B9D	; code used at a000
		LDY		byte_83		; code used as ind data	at a000
		LDX		#0		; code used as ind data	at a000
loc_15A978:				; CODE XREF: sub_15A96E+15-j
		LDA		word_4,X	; code used as ind data	at a000
		CMP		#$60       ; code used as ind data at a000
		BEQ		loc_15A985	; code used as ind data	at a000
		STA		byte_6AEC,Y	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INY				; code used as ind data	at a000
		BNE		loc_15A978	; code used as ind data	at a000
loc_15A985:				; CODE XREF: sub_15A96E+E-j
		PLA				; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A987:				; CODE XREF: sub_15A7B5:loc_15A80C-p
					; sub_15A7B5:loc_15A836-p
					; sub_15A7B5:loc_15A841-p
					; sub_15A7B5:loc_15A849-p
					; sub_15A7B5:loc_15A8A3-p
		JSR		sub_15A992	; code used as ind data	at a000
		INC		byte_82		; code used as ind data	at a000
		AND		#$7F       ; code used as ind data at a000
		TAX				; code used as ind data	at a000
		LDA		byte_D2,X	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A992:				; CODE XREF: sub_15A7B5:loc_15A89D-p
					; sub_15A7B5+11B-j sub_15A987-p
					; sub_15AC41:loc_15ACA5-p
		LDA		byte_82		; code used as ind data	at a000
		ORA		#$80       ; code used as ind data at a000
		STA		byte_82		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A999:				; CODE XREF: sub_15A76B:loc_15A76E-p
					; sub_15A9E8-p sub_15AA51-p
		LDA		byte_78		; code used as ind data	at a000
		CMP		#$80       ; code used as ind data at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A99E:				; CODE XREF: sub_15A6F5+5C-j
		PHA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		JSR		sub_15AA2A	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		byte_580,X	; code used as ind data	at a000
		LDA		word_4		; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		word_4+1	; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		JSR		sub_15A9D9	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		word_4+1	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		word_4		; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		LDX		byte_78		; code used as ind data	at a000
		BEQ		loc_15A9C3	; code used as ind data	at a000
		BCC		loc_15A9D6	; code used as ind data	at a000
		JSR		sub_1742C7	; code used at a000
		JMP		loc_15AA56	; code used at a000
loc_15A9C3:				; CODE XREF: sub_15A99E+1B-j
		PHP				; code used as ind data	at a000
		JSR		_bE_s38		; code used as ind data	at a000
		LDA		byte_6AD0	; code used at a000
		BEQ		loc_15A9CF	; code used at a000
		BRK
		.BYTE $96, $2F		; _syscall12
loc_15A9CF:				; CODE XREF: sub_15A99E+2C-j
		PLP				; code used at a000
		BCC		locret_15A9D5	; code used at a000
		JSR		sub_15AA5F	; code used at a000
locret_15A9D5:				; CODE XREF: sub_15A99E+32-j
		RTS				; code used at a000
loc_15A9D6:				; CODE XREF: sub_15A99E+1D-j
		JMP		sub_1742C7	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A9D9:				; CODE XREF: sub_15A99E+F-p
		INC		byte_80		; code used as ind data	at a000
		LDX		byte_80		; code used as ind data	at a000
		CPX		#$16		; code used as ind data	at a000
		BCC		nullsub_19	; code used as ind data	at a000
		LDA		byte_6B0A	; code used at a000
		CMP		#$FD       ; code used at a000
		BEQ		nullsub_19	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15A9E8:				; CODE XREF: sub_15A76B-p
		JSR		sub_15A999	; code used as ind data	at a000
		BCS		sub_15AA0B	; code used as ind data	at a000
		BIT		byte_6A32	; code used at a000
		BMI		sub_15AA0B	; code used at a000
		LDA		byte_6B0A	; code used at a000
		BEQ		sub_15AA07	; code used at a000
		CMP		#$66       ; code used at a000
		BEQ		sub_15AA07	; code used at a000
		CMP		#$51       ; code used at a000
		BEQ		sub_15AA07	; code used at a000
		CMP		#$60       ; code used at a000
		BEQ		sub_15AA07	; code used at a000
		LDA		#1		; code used at a000
		BNE		sub_15AA1C	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AA07:				; CODE XREF: sub_15A754-p sub_15A9E8+D-j
					; sub_15A9E8+11-j sub_15A9E8+15-j
					; sub_15A9E8+19-j sub_15AA0B+7-j
		LDA		#0		; code used as ind data	at a000
		BEQ		sub_15AA1C	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AA0B:				; CODE XREF: sub_15A9E8+3-j
					; sub_15A9E8+8-j
		LDA		byte_6B0A	; code used as ind data	at a000
		BEQ		loc_15AA14	; code used as ind data	at a000
		CMP		#$60       ; code used at a000
		BNE		sub_15AA07	; code used at a000
loc_15AA14:				; CODE XREF: sub_15AA0B+3-j
		JSR		sub_15A6B6	; code used at a000
		JSR		sub_15AB9E	; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AA1C:				; CODE XREF: sub_15A9E8+1D-j
					; sub_15AA07+2-j
		STA		byte_80		; code used as ind data	at a000
		INC		byte_81		; code used as ind data	at a000
		LDA		byte_6A32	; code used as ind data	at a000
		AND		#$FE       ; code used as ind data at a000
		STA		byte_6A32	; code used as ind data	at a000
		SEC				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
nullsub_19:				; CODE XREF: sub_15A9D9+6-j
					; sub_15A9D9+D-j
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AA2A:				; CODE XREF: sub_15A8D3:loc_15A8DC-p
					; sub_15A99E+2-p
		LDA		#$16		; code used as ind data	at a000
		STA		word_4		; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000
		STA		word_4+1	; code used as ind data	at a000
		LDA		byte_81		; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDX		#word_4		; code used as ind data	at a000
		JSR		_mul16_to_8	; code used as ind data	at a000
		LDA		byte_80		; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDX		#word_4		; code used as ind data	at a000
		JSR		_add8_to_16	; code used as ind data	at a000
		LDX		word_4		; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		ADC		#5		; code used as ind data	at a000
		STA		word_4		; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		ADC		#$13		; code used as ind data	at a000
		STA		word_4+1	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AA51:				; CODE XREF: sub_15A76B:loc_15A777-p
					; sub_15A78E-p
		JSR		sub_15A999	; code used as ind data	at a000
		BCC		locret_15AA5E	; code used as ind data	at a000
loc_15AA56:				; CODE XREF: sub_15A99E+22-j
		LDA		byte_6D9	; code used as ind data	at a000
		BEQ		locret_15AA5E	; code used as ind data	at a000
		JSR		sub_1742B0	; code used at a000
locret_15AA5E:				; CODE XREF: sub_15AA51+3-j
					; sub_15AA51+8-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AA5F:				; CODE XREF: sub_15A76B+8-p
					; sub_15A99E+34-p
		LDA		byte_81		; code used at a000
		CMP		#8		; code used as ind data	at a000
		BCC		locret_15AA83	; code used at a000
		LDA		#$1C		; code used at a000
		STA		byte_471	; code used at a000
		LDA		#$92       ; code used at a000
		STA		byte_470	; code used at a000
		JSR		sub_15AB15	; code used at a000
		JSR		sub_15AA84	; code used as ind data	at a000
		JSR		sub_15AAA2	; code used at a000
		JSR		sub_15AAA6	; code used at a000
		JSR		sub_15AAAA	; code used at a000
		JSR		sub_15AABF	; code used at a000
		DEC		byte_81		; code used at a000
locret_15AA83:				; CODE XREF: sub_15AA5F+4-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AA84:				; CODE XREF: sub_15AA5F+13-p
		LDA		#$7A       ; code used at a000
		STA		byte_400	; code used at a000
		LDX		#1		; code used at a000
		LDA		#$78       ; code used at a000
		JSR		sub_15AB09	; code used at a000
		LDA		#$7D       ; code used as ind data at a000
		STA		byte_400,X	; code used at a000
		JSR		sub_15AAFC	; code used at a000
		LDX		#$19		; code used as ind data	at a000
		LDY		#0		; code used at a000
		JSR		sub_15AAE7	; code used at a000
		JMP		sub_15AADA	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AAA2:				; CODE XREF: sub_15AA5F+16-p
		LDY		#$16		; code used at a000
		BNE		sub_15AAAC	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AAA6:				; CODE XREF: sub_15AA5F+19-p
		LDY		#$42       ; code used at a000
		BNE		sub_15AAAC	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AAAA:				; CODE XREF: sub_15AA5F+1C-p
		LDY		#$6E       ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AAAC:				; CODE XREF: sub_15AAA2+2-j
					; sub_15AAA6+2-j
		LDX		#1		; code used at a000
		JSR		sub_15AAE7	; code used at a000
		LDX		#$19		; code used at a000
		JSR		sub_15AAE7	; code used at a000
		JSR		sub_15AAF8	; code used at a000
		JSR		sub_15AAFC	; code used at a000
		JMP		sub_15AADA	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AABF:				; CODE XREF: sub_15AA5F+1F-p
		JSR		sub_15AAFC	; code used at a000
		LDX		#1		; code used at a000
		LDA		#0		; code used at a000
		JSR		sub_15AB09	; code used at a000
		LDA		#$7B       ; code used at a000
		STA		byte_418	; code used at a000
		LDA		#$7E       ; code used at a000
		LDX		#$19		; code used at a000
		JSR		sub_15AB09	; code used at a000
		LDA		#$7F       ; code used at a000
		STA		byte_400,X	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AADA:				; CODE XREF: sub_15AA84+1B-j
					; sub_15AAAC+10-j
		JSR		sub_159D86	; code used at a000
		LDA		byte_470	; code used at a000
		CLC				; code used at a000
		ADC		#$10		; code used at a000
		STA		byte_470	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AAE7:				; CODE XREF: sub_15AA84+18-p
					; sub_15AAAC+2-p sub_15AAAC+7-p
		LDA		#$16		; code used as ind data	at a000
		STA		word_4		; code used at a000
loc_15AAEB:				; CODE XREF: sub_15AAE7+E-j
		LDA		byte_580,Y	; code used as ind data	at a000
		STA		byte_400,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INY				; code used as ind data	at a000
		DEC		word_4		; code used as ind data	at a000
		BNE		loc_15AAEB	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AAF8:				; CODE XREF: sub_15AAAC+A-p
		LDX		#0		; code used at a000
		BEQ		loc_15AAFE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AAFC:				; CODE XREF: sub_15AA84+11-p
					; sub_15AAAC+D-p sub_15AABF-p
		LDX		#$18		; code used at a000
loc_15AAFE:				; CODE XREF: sub_15AAF8+2-j
		LDA		#$77       ; code used at a000
		STA		byte_400,X	; code used at a000
		LDA		#$7C       ; code used at a000
		STA		byte_417,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AB09:				; CODE XREF: sub_15AA84+9-p
					; sub_15AABF+7-p sub_15AABF+13-p
		LDY		#0		; code used at a000
loc_15AB0B:				; CODE XREF: sub_15AB09+9-j
		STA		byte_400,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INY				; code used as ind data	at a000
		CPY		#$16		; code used as ind data	at a000
		BNE		loc_15AB0B	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AB15:				; CODE XREF: sub_15AA5F+10-p
		LDA		byte_595	; code used at a000
		LDX		#0		; code used at a000
loc_15AB1A:				; CODE XREF: sub_15AB15+E-j
		LDA		byte_596,X	; code used as ind data	at a000
		STA		byte_580,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$9A       ; code used as ind data at a000
		BNE		loc_15AB1A	; code used as ind data	at a000
		LDA		#0		; code used at a000
		TAX				; code used at a000
loc_15AB28:				; CODE XREF: sub_15AB15+19-j
		STA		byte_61A,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$16		; code used as ind data	at a000
		BNE		loc_15AB28	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AB31:				; CODE XREF: _msg_display+11-p
		LDA		byte_6ACD	; code used as ind data	at a000
		BNE		locret_15AB4E	; code used as ind data	at a000
		LDX		#0
loc_15AB38:				; CODE XREF: sub_15AB31+F-j
		LDA		byte_6B0A,X
		BMI		loc_15AB43
		BEQ		loc_15AB43
		INX
		JMP		loc_15AB38
loc_15AB43:				; CODE XREF: sub_15AB31+A-j
					; sub_15AB31+C-j
		TXA
		CLC
		ADC		byte_80
		CMP		#$17
		BCC		locret_15AB4E
		JSR		sub_15A75A
locret_15AB4E:				; CODE XREF: sub_15AB31+3-j
					; sub_15AB31+18-j
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AB4F:				; CODE XREF: _msg_display+5-p
		LDA		#0		; code used as ind data	at a000
		STA		byte_82		; code used as ind data	at a000
		STA		byte_6ACC	; code used at a000
		LDA		byte_6A32	; code used as ind data	at a000
		AND		#$DF       ; code used as ind data at a000
		STA		byte_6A32	; code used at a000
loc_15AB5E:				; CODE XREF: sub_15AB4F+21-j
		JSR		sub_15A6B6	; code used as ind data	at a000
		JSR		sub_15ABC3	; code used as ind data	at a000
		LDX		byte_6ACC	; code used as ind data	at a000
		STA		byte_6B0A,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		STX		byte_6ACC	; code used as ind data	at a000
		CPX		#$16		; code used as ind data	at a000
		BNE		loc_15AB5E	; code used as ind data	at a000
		LDA		byte_6B0A	; code used as ind data	at a000
		CMP		#$66       ; code used as ind data at a000
		BEQ		loc_15AB86	; code used as ind data	at a000
		CMP		#$51       ; code used as ind data at a000
		BEQ		loc_15AB86	; code used at a000
		LDY		#0		; code used as ind data	at a000
		LDA		byte_6A32	; code used as ind data	at a000
		ORA		#$80       ; code used as ind data at a000
		BNE		loc_15AB8D	; code used as ind data	at a000
loc_15AB86:				; CODE XREF: sub_15AB4F+28-j
					; sub_15AB4F+2C-j
		LDY		#1		; code used at a000
		LDA		byte_6A32	; code used at a000
		AND		#$7F       ; code used at a000
loc_15AB8D:				; CODE XREF: sub_15AB4F+35-j
		LDX		byte_81		; code used at a000
		BNE		loc_15AB95	; code used as ind data	at a000
		ORA		#1		; code used at a000
		BNE		loc_15AB97	; code used at a000
loc_15AB95:				; CODE XREF: sub_15AB4F+40-j
		AND		#$FE       ; code used as ind data at a000
loc_15AB97:				; CODE XREF: sub_15AB4F+44-j
		STY		byte_6AD0	; code used as ind data	at a000
		STA		byte_6A32	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AB9E:				; CODE XREF: _msg_display+B-p
					; sub_15AA0B+C-p
		PHA				; code used as ind data	at a000
		LDY		byte_6B0A	; code used as ind data	at a000
		LDX		#1		; code used as ind data	at a000
loc_15ABA4:				; CODE XREF: sub_15AB9E+F-j
		LDA		byte_6B0A,X	; code used as ind data	at a000
		STA		byte_6B09,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$16		; code used as ind data	at a000
		BNE		loc_15ABA4	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		byte_6B1F	; code used as ind data	at a000
		JSR		sub_15ABC3	; code used as ind data	at a000
		TYA				; code used as ind data	at a000
		BPL		loc_15ABBF	; code used as ind data	at a000
		CMP		#$FE       ; code used at a000
		BNE		loc_15ABBF	; code used at a000
		LDA		#0
loc_15ABBF:				; CODE XREF: sub_15AB9E+19-j
					; sub_15AB9E+1D-j
		STA		byte_6ACD	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15ABC3:				; CODE XREF: sub_15AB4F+12-p
					; sub_15AB9E+15-p
		CMP		#$EF       ; code used as ind data at a000
		BEQ		loc_15ABD0	; code used as ind data	at a000
		CMP		#$FF		; code used as ind data	at a000
		BEQ		loc_15ABD0	; code used as ind data	at a000
		CMP		#$EE       ; code used as ind data at a000
		BEQ		loc_15ABD0	; code used as ind data	at a000
		RTS				; code used as ind data	at a000
loc_15ABD0:				; CODE XREF: sub_15ABC3+2-j
					; sub_15ABC3+6-j sub_15ABC3+A-j
		PHA				; code used as ind data	at a000
		LDA		byte_6A32	; code used as ind data	at a000
		ORA		#$20       ; code used as ind data at a000
		STA		byte_6A32	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s2:					; CODE XREF: _b2_sB+2B7-P _b4_sA+5-P
					; DATA XREF: BANKE:8004-o
		LDX		#0		; code used at a000
		STX		byte_6ACB	; code used at a000
		LDY		#2		; code used at a000
		BNE		loc_15ABED	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s3:					; CODE XREF: _b4_sB+4-P
					; DATA XREF: BANKE:8006-o
		LDA		byte_6ACB	; code used at a000
		TAX				; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		#2		; code used at a000
		TAY				; code used at a000
loc_15ABED:				; CODE XREF: _bE_s2+7-j
		STX		byte_81		; code used as ind data	at a000
		STY		byte_28		; code used at a000
		JSR		_vblank		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_80		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s5:					; CODE XREF: sub_9E7E+5-P sub_A169+5-P
					; _b2_sB+2BA-P _b4_s0+1A-P
					; sub_68931:loc_6897C-P	_b4_sA+8-P
					; sub_F8DFC-P sub_158C9F+16-p
					; DATA XREF: BANKE:800A-o
		LDA		#0		; code used as ind data	at a000
		TAX				; code used at a000
loc_15ABFC:				; CODE XREF: _bE_s5+9-j
		STA		byte_580,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$B0       ; code used as ind data at a000
		BNE		loc_15ABFC	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AC05:				; CODE XREF: sub_15A6F5+E-p
		LDA		byte_6A32	; code used at a000
		LSR		; code used at a000
		BCC		loc_15AC0C	; code used at a000
		RTS				; code used at a000
loc_15AC0C:				; CODE XREF: sub_15AC05+4-j
		JSR		sub_15A754	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AC10:				; CODE XREF: sub_15A6F5-p
		PHA				; code used as ind data	at a000
		CMP		#$66       ; code used as ind data at a000
		BEQ		loc_15AC32	; code used as ind data	at a000
		CMP		#$51       ; code used as ind data at a000
		BEQ		loc_15AC32	; code used as ind data	at a000
		CMP		#$67       ; code used as ind data at a000
		BEQ		loc_15AC23	; code used as ind data	at a000
		CMP		#$69       ; code used as ind data at a000
		BEQ		loc_15AC23	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		RTS				; code used as ind data	at a000
loc_15AC23:				; CODE XREF: sub_15AC10+B-j
					; sub_15AC10+F-j
		LDA		byte_6A32	; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_6A32	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6AD0	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000
loc_15AC32:				; CODE XREF: sub_15AC10+3-j
					; sub_15AC10+7-j
		LDA		byte_6A32	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_6A32	; code used as ind data	at a000
		LDA		#1		; code used at a000
		STA		byte_6AD0	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AC41:				; CODE XREF: sub_15A7B5+50-j
		TAX				; code used at a000
		LDA		word_6+1	; code used at a000
		PHA				; code used at a000
		LDA		word_6		; code used at a000
		PHA				; code used at a000
		TXA				; code used at a000
		AND		#$F		; code used at a000
		CMP		#8		; code used at a000
		BEQ		loc_15ACB3	; code used at a000
		CMP		#7		; code used at a000
		BEQ		loc_15ACB6	; code used at a000
		PHA				; code used at a000
		CMP		#6		; code used at a000
		BNE		loc_15AC63	; code used at a000
		PHA
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		PLA
		LDA		word_6+1
		BEQ		loc_15AC77
		BNE		loc_15AC87
loc_15AC63:				; CODE XREF: sub_15AC41+15-j
		CMP		#4		; code used at a000
		BNE		loc_15AC6B	; code used at a000
		LDY		#0		; code used at a000
		BEQ		loc_15AC6E	; code used at a000
loc_15AC6B:				; CODE XREF: sub_15AC41+24-j
		LDY		byte_6A35	; code used at a000
loc_15AC6E:				; CODE XREF: sub_15AC41+28-j
		LDA		byte_718,Y	; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		BCS		loc_15AC87	; code used at a000
loc_15AC77:				; CODE XREF: sub_15AC41+1E-j
		PLA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_15AD9D,X	; code used at a000
		STA		word_6		; code used at a000
		LDA		off_15AD9D+1,X	; code used at a000
		STA		word_6+1	; code used at a000
		JMP		loc_15AC94	; code used at a000
loc_15AC87:				; CODE XREF: sub_15AC41+20-j
					; sub_15AC41+34-j
		PLA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_15ADAB,X	; code used at a000
		STA		word_6		; code used at a000
		LDA		off_15ADAB+1,X	; code used at a000
		STA		word_6+1	; code used at a000
loc_15AC94:				; CODE XREF: sub_15AC41+43-j
		LDY		#0		; code used at a000
		LDX		#0		; code used at a000
loc_15AC98:				; CODE XREF: sub_15AC41+62-j
		LDA		(word_6),Y	; code used at a000
		CMP		#$FE       ; code used at a000
		BEQ		loc_15ACA5	; code used at a000
		STA		byte_6AEC,X	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		BNE		loc_15AC98	; code used at a000
loc_15ACA5:				; CODE XREF: sub_15AC41+5B-j
		JSR		sub_15A992	; code used at a000
		TXA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		STA		word_6		; code used at a000
		PLA				; code used at a000
		STA		word_6+1	; code used at a000
		JMP		sub_15A962	; code used at a000
loc_15ACB3:				; CODE XREF: sub_15AC41+C-j
		JMP		sub_15AE80
loc_15ACB6:				; CODE XREF: sub_15AC41+10-j
		PLA				; code used at a000
		PLA				; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#3		; code used at a000
		BCC		loc_15ACC8	; code used at a000
		LDA		#2		; code used at a000
		STA		byte_63F	; code used at a000
		BNE		loc_15ACD3	; code used at a000
loc_15ACC8:				; CODE XREF: sub_15AC41+7E-j
		LDA		#0
		STA		byte_63F
		STA		byte_640
		STA		byte_641
loc_15ACD3:				; CODE XREF: sub_15A7B5+54-j
					; sub_15AC41+85-j
		JSR		sub_15AD31	; code used at a000
		BCC		loc_15ACDD	; code used as ind data	at a000
		PLA				; code used at a000
		PLA				; code used at a000
		JMP		sub_15A6B6	; code used at a000
loc_15ACDD:				; CODE XREF: sub_15AC41+95-j
		PLA				; code used at a000
		PLA				; code used at a000
		LDA		#$1D		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15ACE2:				; CODE XREF: sub_15A6B6+19-j
		PLA				; code used at a000
		AND		#$F		; code used as ind data	at a000
		STA		byte_6A33	; code used as ind data	at a000
		LDA		word_6+1	; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		word_6		; code used at a000
		PHA				; code used as ind data	at a000
		LDA		byte_6A33	; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		BIT		byte_6A32	; code used at a000
		BVC		loc_15ACFD	; code used at a000
		JSR		sub_15AD31	; code used at a000
		BCC		loc_15AD0A	; code used at a000
loc_15ACFD:				; CODE XREF: sub_15ACE2+14-j
		LDA		off_15ADB9,X	; code used at a000
		STA		word_6		; code used as ind data	at a000
		LDA		off_15ADB9+1,X	; code used at a000
		STA		word_6+1	; code used as ind data	at a000
		JMP		loc_15AD14	; code used as ind data	at a000
loc_15AD0A:				; CODE XREF: sub_15ACE2+19-j
		LDA		off_15ADC9,X	; code used at a000
		STA		word_6		; code used at a000
		LDA		off_15ADC9+1,X	; code used at a000
		STA		word_6+1	; code used at a000
loc_15AD14:				; CODE XREF: sub_15ACE2+25-j
		LDX		byte_83		; code used at a000
		LDY		#0		; code used as ind data	at a000
loc_15AD18:				; CODE XREF: sub_15ACE2+44-j
		LDA		(word_6),Y	; code used as ind data	at a000
		CMP		#$FE       ; code used as ind data at a000
		BEQ		loc_15AD28	; code used as ind data	at a000
		JSR		sub_15AD4C	; code used at a000
		STA		byte_6AEC,X	; code used as ind data	at a000
		INX				; code used at a000
		INY				; code used at a000
		BNE		loc_15AD18	; code used at a000
loc_15AD28:				; CODE XREF: sub_15ACE2+3A-j
		PLA				; code used as ind data	at a000
		STA		word_6		; code used as ind data	at a000
		PLA				; code used at a000
		STA		word_6+1	; code used at a000
		JMP		loc_15A6BB	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AD31:				; CODE XREF: sub_15AC41:loc_15ACD3-p
					; sub_15ACE2+16-p
		PHA				; code used as ind data	at a000
		TXA				; code used at a000
		PHA				; code used at a000
		LDA		byte_641	; code used as ind data	at a000
		ORA		byte_640	; code used at a000
		BNE		loc_15AD47	; code used at a000
		LDX		byte_63F	; code used at a000
		BEQ		loc_15AD44	; code used as ind data	at a000
		DEX				; code used as ind data	at a000
		BNE		loc_15AD47	; code used as ind data	at a000
loc_15AD44:				; CODE XREF: sub_15AD31+E-j
		SEC				; code used at a000
		BCS		loc_15AD48	; code used at a000
loc_15AD47:				; CODE XREF: sub_15AD31+9-j
					; sub_15AD31+11-j
		CLC				; code used at a000
loc_15AD48:				; CODE XREF: sub_15AD31+14-j
		PLA				; code used as ind data	at a000
		TAX				; code used at a000
		PLA				; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AD4C:				; CODE XREF: sub_15ACE2+3C-p
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		LDY		#0		; code used at a000
loc_15AD53:				; CODE XREF: sub_15AD4C+10-j
		LDA		byte_6AEC,X	; code used at a000
		CMP		#$EC       ; code used at a000
		BEQ		loc_15AD5E	; code used at a000
		INX
		INY
		BNE		loc_15AD53
loc_15AD5E:				; CODE XREF: sub_15AD4C+C-j
					; sub_15AD4C+1A-j
		LDA		byte_6AEC,X	; code used at a000
		STA		byte_6AED,X	; code used at a000
		DEX				; code used at a000
		DEY				; code used at a000
		BPL		loc_15AD5E	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AD6E:				; CODE XREF: sub_15A7B5:loc_15A801-j
		LDA		word_4		; code used at a000
		PHA				; code used at a000
		LDA		word_4+1	; code used at a000
		PHA				; code used at a000
		LDA		byte_63F	; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_15ADD9,X	; code used at a000
		STA		word_4		; code used at a000
		LDA		off_15ADD9+1,X	; code used at a000
		STA		word_4+1	; code used at a000
		LDY		#0		; code used at a000
		LDX		#0		; code used at a000
loc_15AD87:				; CODE XREF: sub_15AD6E+24-j
		LDA		(word_4),Y	; code used at a000
		CMP		#$FE       ; code used at a000
		BEQ		loc_15AD94	; code used at a000
		STA		byte_6AEC,X	; code used as ind data	at a000
		INY				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		BNE		loc_15AD87	; code used as ind data	at a000
loc_15AD94:				; CODE XREF: sub_15AD6E+1D-j
		PLA				; code used at a000
		STA		word_4+1	; code used at a000
		PLA				; code used at a000
		STA		word_4		; code used at a000
		JMP		loc_15A8CD	; code used at a000
off_15AD9D:
		.WORD byte_15ADEB	; DATA XREF: sub_15AC41+39-r
					; sub_15AC41+3E-r
					; data used at a000
		.WORD byte_15ADEF	; data used at a000
		.WORD byte_15ADF7
		.WORD byte_15ADFA	; data used at a000
		.WORD byte_15ADFE	; data used at a000
		.WORD byte_15AE02
		.WORD byte_15AE07
off_15ADAB:
		.WORD byte_15AE0B	; DATA XREF: sub_15AC41+49-r
					; sub_15AC41+4E-r
					; data used at a000
		.WORD byte_15AE0F
		.WORD byte_15AE17
		.WORD byte_15AE1B
		.WORD byte_15AE1F
		.WORD byte_15AE24
		.WORD byte_15AE2A
off_15ADB9:
		.WORD byte_15AE33	; DATA XREF: sub_15ACE2:loc_15ACFD-r
					; sub_15ACE2+20-r
					; data used at a000
		.WORD byte_15AE35	; data used at a000
		.WORD byte_15AE38
		.WORD byte_15AE3B
		.WORD byte_15AE3D	; data used at a000
		.WORD byte_15AE3E	; data used at a000
		.WORD byte_15AE3F
		.WORD byte_15AE41
off_15ADC9:
		.WORD byte_15AE42	; DATA XREF: sub_15ACE2:loc_15AD0A-r
					; sub_15ACE2+2D-r
					; data used at a000
		.WORD byte_15AE46	; data used at a000
		.WORD byte_15AE49
		.WORD byte_15AE4D
		.WORD byte_15AE50	; data used at a000
		.WORD byte_15AE53	; data used at a000
		.WORD byte_15AE55
		.WORD byte_15AE57
off_15ADD9:
		.WORD byte_15AE58	; DATA XREF: sub_15AD6E+B-r
					; sub_15AD6E+10-r
		.WORD byte_15AE58	; data used at a000
		.WORD byte_15AE5C	; data used at a000
		.WORD byte_15AE60	; data used at a000
		.WORD byte_15AE66	; data used at a000
		.WORD byte_15AE6B	; data used at a000
		.WORD byte_15AE70	; data used at a000
		.WORD byte_15AE74	; data used at a000
		.WORD byte_15AE7A
byte_15ADEB:
		.BYTE $12,$13,$1D,$FE	; DATA XREF: BANKE:off_15AD9D-o
					; ind data used	at a000
byte_15ADEF:
		.BYTE $12,$13,$17,$1D, $F,$16,$10,$FE ;	DATA XREF: BANKE:AD9F-o
					; ind data used	at a000
byte_15ADF7:
		.BYTE $12, $F,$FE	; DATA XREF: BANKE:ADA1-o
byte_15ADFA:
		.BYTE $12,$13,$17,$FE	; DATA XREF: BANKE:ADA3-o
					; ind data used	at a000
byte_15ADFE:
		.BYTE $17, $B,$18,$FE	; DATA XREF: BANKE:ADA5-o
					; ind data used	at a000
byte_15AE02:
		.BYTE $2C, $F,$68,$1D,$FE ; DATA XREF: BANKE:ADA7-o
byte_15AE07:
		.BYTE $1D,$19,$18,$FE	; DATA XREF: BANKE:ADA9-o
byte_15AE0B:
		.BYTE $12, $F,$1C,$FE	; DATA XREF: BANKE:off_15ADAB-o
					; ind data used	at a000
byte_15AE0F:
		.BYTE $12, $F,$1C,$1D, $F,$16,$10,$FE ;	DATA XREF: BANKE:ADAD-o
byte_15AE17:
		.BYTE $1D,$12, $F,$FE	; DATA XREF: BANKE:ADAF-o
byte_15AE1B:
		.BYTE $12, $F,$1C,$FE	; DATA XREF: BANKE:ADB1-o
byte_15AE1F:
		.BYTE $16, $B, $E,$23,$FE ; DATA XREF: BANKE:ADB3-o
byte_15AE24:
		.BYTE $37,$12, $F,$68,$1D,$FE ;	DATA XREF: BANKE:ADB5-o
byte_15AE2A:
		.BYTE  $E, $B,$1F,$11,$12,$1E, $F,$1C,$FE ; DATA XREF: BANKE:ADB7-o
byte_15AE33:
		.BYTE $23,$FE		; DATA XREF: BANKE:off_15ADB9-o
					; ind data used	at a000
byte_15AE35:
		.BYTE  $B,$18,$FE	; DATA XREF: BANKE:ADBB-o
					; ind data used	at a000
byte_15AE38:
		.BYTE $19,$16,$FE	; DATA XREF: BANKE:ADBD-o
byte_15AE3B:
		.BYTE $13,$FE		; DATA XREF: BANKE:ADBF-o
byte_15AE3D:
		.BYTE $FE		; DATA XREF: BANKE:ADC1-o
					; ind data used	at a000
byte_15AE3E:
		.BYTE $FE		; DATA XREF: BANKE:ADC3-o
					; ind data used	at a000
byte_15AE3F:
		.BYTE  $B,$FE		; DATA XREF: BANKE:ADC5-o
byte_15AE41:
		.BYTE $FE		; DATA XREF: BANKE:ADC7-o
byte_15AE42:
		.BYTE $13, $F,$1D,$FE	; DATA XREF: BANKE:off_15ADC9-o
					; ind data used	at a000
byte_15AE46:
		.BYTE  $F,$18,$FE	; DATA XREF: BANKE:ADCB-o
					; ind data used	at a000
byte_15AE49:
		.BYTE $16,$16,$1D,$FE	; DATA XREF: BANKE:ADCD-o
byte_15AE4D:
		.BYTE $16,$1D,$FE	; DATA XREF: BANKE:ADCF-o
byte_15AE50:
		.BYTE  $F,$1D,$FE	; DATA XREF: BANKE:ADD1-o
					; ind data used	at a000
byte_15AE53:
		.BYTE $1D,$FE		; DATA XREF: BANKE:ADD3-o
					; ind data used	at a000
byte_15AE55:
		.BYTE  $F,$FE		; DATA XREF: BANKE:ADD5-o
byte_15AE57:
		.BYTE $FE		; DATA XREF: BANKE:ADD7-o
byte_15AE58:
		.BYTE $33,$18, $F,$FE	; DATA XREF: BANKE:off_15ADD9-o
					; BANKE:ADDB-o
					; ind data used	at a000
byte_15AE5C:
		.BYTE $38,$21,$19,$FE	; DATA XREF: BANKE:ADDD-o
					; ind data used	at a000
byte_15AE60:
		.BYTE $38,$12,$1C, $F, $F,$FE ;	DATA XREF: BANKE:ADDF-o
					; ind data used	at a000
byte_15AE66:
		.BYTE $2A,$19,$1F,$1C,$FE ; DATA XREF: BANKE:ADE1-o
					; ind data used	at a000
byte_15AE6B:
		.BYTE $2A,$13,$20, $F,$FE ; DATA XREF: BANKE:ADE3-o
					; ind data used	at a000
byte_15AE70:
		.BYTE $37,$13,$22,$FE	; DATA XREF: BANKE:ADE5-o
					; ind data used	at a000
byte_15AE74:
		.BYTE $37, $F,$20, $F,$18,$FE ;	DATA XREF: BANKE:ADE7-o
					; ind data used	at a000
byte_15AE7A:
		.BYTE $29,$13,$11,$12,$1E,$FE ;	DATA XREF: BANKE:ADE9-o

; =============== S U B	R O U T	I N E =======================================
sub_15AE80:				; CODE XREF: sub_15AC41:loc_15ACB3-j
		PLA
		PLA
		PLA
		PLA
		LDA		byte_6A32
		AND		#$7F 
		STA		byte_6A32
		LDA		#$51 
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_msg_ptr:				; CODE XREF: _msg_display+2-p
		NOP				; code used as ind data	at a000
		TAY				; code used at a000
		CMP		#$96       ; code used at a000
		TXA				; code used as ind data	at a000
		SBC		#1		; code used as ind data	at a000
		BCC		loc_15AED2	; code used as ind data	at a000
		TYA				; code used at a000
		CMP		#$66       ; code used at a000
		TXA				; code used at a000
		SBC		#3		; code used at a000
		BCC		loc_15AED6	; code used at a000
		TYA				; code used at a000
		CMP		#$44       ; code used at a000
		TXA				; code used at a000
		SBC		#4		; code used at a000
		BCC		loc_15AEE3	; code used at a000
		TYA				; code used at a000
		CMP		#$A3       ; code used at a000
		TXA				; code used at a000
		SBC		#5		; code used at a000
		BCC		loc_15AEF0	; code used at a000
		TYA				; code used at a000
		CMP		#$7E       ; code used at a000
		TXA				; code used at a000
		SBC		#6		; code used at a000
		BCC		loc_15AEC5	; code used at a000
		TYA				; code used at a000
		SEC				; code used at a000
		SBC		#$7E       ; code used at a000
		TAY				; code used at a000
		TXA				; code used at a000
		SBC		#6		; code used at a000
		TAX				; code used at a000
		LDA		#$15		; code used at a000
		BNE		loc_15AEFB	; code used at a000
loc_15AEC5:				; CODE XREF: _get_msg_ptr+27-j
		TYA				; code used at a000
		SEC				; code used at a000
		SBC		#$A3       ; code used at a000
		TAY				; code used at a000
		TXA				; code used at a000
		SBC		#5		; code used at a000
		TAX				; code used at a000
		LDA		#$14		; code used at a000
		BNE		loc_15AEFB	; code used at a000
loc_15AED2:				; CODE XREF: _get_msg_ptr+7-j
		LDA		#$10		; code used as ind data	at a000
		BNE		loc_15AEFB	; code used at a000
loc_15AED6:				; CODE XREF: _get_msg_ptr+F-j
		TYA				; code used at a000
		SEC				; code used at a000
		SBC		#$96       ; code used at a000
		TAY				; code used at a000
		TXA				; code used at a000
		SBC		#1		; code used at a000
		TAX				; code used at a000
		LDA		#$11		; code used at a000
		BNE		loc_15AEFB	; code used at a000
loc_15AEE3:				; CODE XREF: _get_msg_ptr+17-j
		TYA				; code used at a000
		SEC				; code used at a000
		SBC		#$66       ; code used at a000
		TAY				; code used at a000
		TXA				; code used at a000
		SBC		#3		; code used at a000
		TAX				; code used at a000
		LDA		#$12		; code used at a000
		BNE		loc_15AEFB	; code used at a000
loc_15AEF0:				; CODE XREF: _get_msg_ptr+1F-j
		TYA				; code used at a000
		SEC				; code used at a000
		SBC		#$44       ; code used at a000
		TAY				; code used at a000
		TXA				; code used at a000
		SBC		#4		; code used at a000
		TAX				; code used at a000
		LDA		#$13		; code used at a000
loc_15AEFB:				; CODE XREF: _get_msg_ptr+34-j
					; _get_msg_ptr+41-j _get_msg_ptr+45-j
					; _get_msg_ptr+52-j _get_msg_ptr+5F-j
		STA		word_7C		; code used at a000
		TYA				; code used as ind data	at a000
		JMP		_get_msg_ptr_by_idx ; code used	as ind data at a000

; =============== S U B	R O U T	I N E =======================================
sub_15AF01:				; CODE XREF: sub_15A6B6-p
		LDA		byte_6A32	; code used as ind data	at a000
		AND		#$20       ; code used as ind data at a000
		BNE		loc_15AF20	; code used as ind data	at a000
		LDA		byte_82		; code used as ind data	at a000
		BMI		loc_15AF1E	; code used as ind data	at a000
		LDA		word_7C		; code used as ind data	at a000
		LDX		#word_72	; code used as ind data	at a000
		LDY		#0		; code used as ind data	at a000
		JSR		_get_far_ptr_byte_safe ; code used as ind data at a000
		INC		word_72		; code used as ind data	at a000
		BNE		loc_15AF1B	; code used as ind data	at a000
		INC		word_72+1	; code used at a000
loc_15AF1B:				; CODE XREF: sub_15AF01+16-j
					; sub_15AF01+21-j
		TAX				; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		RTS				; code used as ind data	at a000
loc_15AF1E:				; CODE XREF: sub_15AF01+9-j
		SEC				; code used as ind data	at a000
		RTS				; code used as ind data	at a000
loc_15AF20:				; CODE XREF: sub_15AF01+5-j
		LDA		#$60       ; code used as ind data at a000
		BNE		loc_15AF1B	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s1D:				; CODE XREF: sub_12B877-P _bE_s30-P
					; _bE_s16-P sub_1750D0+2-P
					; DATA XREF: BANKE:803A-o
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
		STA		word_6C+1	; code used at a000
		LDA		byte_88		; code used at a000
		STA		word_6C		; code used at a000
		LDA		byte_89		; code used at a000
		LDX		#word_6C	; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		#<[byte_7400-1] ; code used as ind data at a000
		CLC				; code used at a000
		ADC		word_6C		; code used at a000
		STA		word_6C		; code used at a000
		LDA		#>[byte_7400-1] ; code used	at a000
		ADC		word_6C+1	; code used at a000
		STA		word_6C+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s20:				; CODE XREF: sub_1299B6+1A-P
					; _bE_s30:loc_15B572-P
					; sub_17542F:loc_175449-P
					; sub_1754B6+30-P
					; DATA XREF: BANKE:8040-o
		LDA		word_6C		; code used as ind data	at a000
		PHA				; code used at a000
		LDA		word_6C+1	; code used at a000
		PHA				; code used at a000
		LDX		#word_6C	; code used at a000
		LDY		#>[byte_7400] ; code used at a000
		LDA		#<[byte_7400] ; code	used at	a000
		JSR		_add_16_to_neg16 ; code	used at	a000
		LDA		byte_88		; code used at a000
		JSR		_div16_to_8	; code used at a000
		TAX				; code used at a000
		LDA		word_6C		; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		STA		word_6C+1	; code used at a000
		PLA				; code used as ind data	at a000
		STA		word_6C		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s21:				; CODE XREF: sub_175853+B4-P
					; DATA XREF: BANKE:8042-o
		LDX		word_3C		; code used at a000
		LDY		word_3C+1	; code used at a000
		STX		byte_74		; code used at a000
		STY		byte_77		; code used at a000
		DEC		byte_88		; code used at a000
		LDA		byte_88		; code used at a000
		INC		byte_88		; code used at a000
		CMP		byte_74		; code used at a000
		BCC		loc_15AF96	; code used at a000
		DEC		byte_89		; code used at a000
		LDA		byte_89		; code used at a000
		INC		byte_89		; code used at a000
		CMP		byte_77		; code used at a000
		BCC		loc_15AF96	; code used at a000
		LDX		word_3C		; code used at a000
		LDY		word_3C+1	; code used at a000
		JSR		sub_176F34	; code used at a000
		AND		#$1F		; code used at a000
		TAX				; code used at a000
		LDA		byte_6DE0,X	; code used at a000
		AND		#$F		; code used at a000
		CMP		#4		; code used at a000
		BEQ		loc_15AF98	; code used at a000
		LDA		byte_6DE0,X	; code used at a000
		BPL		loc_15AF98	; code used at a000
loc_15AF96:				; CODE XREF: _bE_s21+10-j _bE_s21+1A-j
		SEC				; code used at a000
		RTS				; code used at a000
loc_15AF98:				; CODE XREF: _bE_s21+2D-j _bE_s21+32-j
		LDA		word_72		; code used at a000
		SEC				; code used at a000
		SBC		#$10		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		STA		word_4		; code used at a000
		JSR		sub_177EFC	; code used at a000
		LDA		word_6		; code used at a000
		CMP		#$1D		; code used at a000
		BEQ		loc_15AFAC	; code used at a000
		SEC				; code used at a000
		RTS				; code used at a000
loc_15AFAC:				; CODE XREF: _bE_s21+46-j
		LDX		word_72		; code used at a000
		LDY		#1		; code used at a000
		STY		word_72+1	; code used at a000
		DEY				; code used at a000
		STY		word_72		; code used at a000
loc_15AFB5:				; CODE XREF: _bE_s21+63-j
		LDA		(word_72),Y	; code used at a000
		CMP		word_3C		; code used at a000
		BEQ		loc_15AFC9	; code used at a000
		INY				; code used at a000
loc_15AFBC:				; CODE XREF: _bE_s21+6C-j
		INY				; code used at a000
		LDA		(word_72),Y	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_15AFD2	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		BNE		loc_15AFB5	; code used at a000
		BEQ		loc_15AFD2
loc_15AFC9:				; CODE XREF: _bE_s21+57-j
		INY				; code used at a000
		LDA		(word_72),Y	; code used at a000
		CMP		word_3C+1	; code used at a000
		BNE		loc_15AFBC	; code used at a000
		SEC
		RTS
loc_15AFD2:				; CODE XREF: _bE_s21+5F-j _bE_s21+65-j
		STX		word_72		; code used at a000
		STX		byte_91		; code used at a000
		LDA		word_3C		; code used at a000
		LDY		#0		; code used at a000
		STA		(word_72),Y	; code used at a000
		STA		byte_6BF	; code used at a000
		INY				; code used at a000
		LDA		word_3C+1	; code used at a000
		STA		(word_72),Y	; code used at a000
		STA		byte_6C0	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		LDA		(word_72),Y	; code used at a000
		ORA		#$40       ; code used at a000
		AND		#$FC       ; code used at a000
		STA		(word_72),Y	; code used at a000
		LDA		byte_6AE6	; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_6AE6	; code used at a000
		LDA		byte_8B		; code used at a000
		CMP		#9		; code used at a000
		BNE		loc_15B007	; code used at a000
		LDA		byte_60B7	; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_60B7	; code used at a000
loc_15B007:				; CODE XREF: _bE_s21+9B-j
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s22:				; CODE XREF: _bC_s34+17-P
					; sub_129162+4B-P _bC_s21-P
					; sub_1750D0+64-P sub_1753AA+24-P
					; sub_1753AA:loc_1753D4-P
					; DATA XREF: BANKE:8044-o
		BRK
		.BYTE $D, 7		; ofs 0x0014000a, -> dst _bD_s5
		BRK
		.BYTE $93, $2F		; _syscall12
		LDA		#$F8       ; code used at a000
		LDX		#0		; code used at a000
loc_15B013:				; CODE XREF: _bE_s22+10-j
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		CPX		#$10		; code used at a000
		BNE		loc_15B013	; code used at a000
		LDA		#2		; code used at a000
		STA		byte_8F		; code used at a000
loc_15B01F:				; CODE XREF: _bE_s22+46-j
		BRK
		.BYTE $F, 7		; ofs 0x0014000e, -> dst _bD_s7
		BRK
		.BYTE $F, 7		; ofs 0x0014000e, -> dst _bD_s7
		LDA		#1		; code used at a000
		STA		word_72+1	; code used at a000
		LDA		#0		; code used at a000
		STA		word_72		; code used at a000
loc_15B02D:				; CODE XREF: _bE_s22+36-j
		JSR		sub_177259	; code used at a000
		JSR		sub_174E10	; code used at a000
		JSR		sub_174E10	; code used at a000
		LDA		word_72		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		word_72		; code used at a000
		CMP		#$10		; code used at a000
		BNE		loc_15B02D	; code used at a000
		JSR		_vblank		; code used at a000
		INC		byte_8F		; code used at a000
		INC		byte_8F		; code used at a000
		LDA		byte_8F		; code used at a000
		JSR		sub_15B08E	; code used at a000
		LDA		byte_8F		; code used at a000
		BNE		loc_15B01F	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s32:				; CODE XREF: sub_15812C+3A-P
					; sub_175342-P
					; DATA XREF: BANKE:8064-o
		BRK
		.BYTE $D, 7		; ofs 0x0014000a, -> dst _bD_s5
		JSR		sub_15B0EF
		LDA		#2
		STA		byte_8F
loc_15B05C:				; CODE XREF: _bE_s32+32-j
		BRK
		.BYTE $F, 7		; ofs 0x0014000e, -> dst _bD_s7
		LDA		#1
		STA		word_72+1
		LDA		#0
		STA		word_72
loc_15B067:				; CODE XREF: _bE_s32+24-j
		JSR		sub_177259
		JSR		sub_174E10
		LDA		word_72
		CLC
		ADC		#4
		STA		word_72
		CMP		#$10
		BNE		loc_15B067
		JSR		_vblank
		INC		byte_8F
		LDA		byte_8F
		JSR		sub_15B08E
		LDA		byte_8F
		BNE		loc_15B05C
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s26:				; CODE XREF: sub_174E1A:loc_174E21-P
					; DATA XREF: BANKE:804C-o
		BRK
		.BYTE $F, 7		; ofs 0x0014000e, -> dst _bD_s7
		INC		byte_8F
		LDA		byte_8F

; =============== S U B	R O U T	I N E =======================================
sub_15B08E:				; CODE XREF: _bE_s22+41-p _bE_s32+2D-p
		CMP		#$12		; code used at a000
		BEQ		loc_15B09B	; code used at a000
		CMP		#$22       ; code used at a000
		BEQ		loc_15B0A2	; code used at a000
		CMP		#$32       ; code used at a000
		BEQ		loc_15B0A9	; code used at a000
		RTS				; code used at a000
loc_15B09B:				; CODE XREF: sub_15B08E+2-j
		BRK
		.BYTE $D, 7		; ofs 0x0014000a, -> dst _bD_s5
		LDY		#4		; code used at a000
		BNE		sub_15B0D5	; code used at a000
loc_15B0A2:				; CODE XREF: sub_15B08E+6-j
		BRK
		.BYTE $D, 7		; ofs 0x0014000a, -> dst _bD_s5
		LDY		#8		; code used at a000
		BNE		sub_15B0D5	; code used at a000
loc_15B0A9:				; CODE XREF: sub_15B08E+A-j
		BRK
		.BYTE $D, 7		; ofs 0x0014000a, -> dst _bD_s5
		LDY		#$C		; code used at a000
		JSR		sub_15B0D5	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_8F		; code used at a000
		LDA		byte_2C		; code used at a000
		CMP		#1		; code used at a000
		BNE		locret_15B0D4	; code used at a000
		BRK
		.BYTE $B, $2F		; _syscall12
		LDA		byte_2A
		CMP		#$A2 
		BNE		locret_15B0D4
		LDA		byte_2B
		CMP		#$3B 
		BNE		locret_15B0D4
		LDA		byte_60B6
		AND		#4
		BEQ		locret_15B0D4
		BRK
		.BYTE $FB, 7		; ofs 0x0012804a, -> dst _bC_s25
locret_15B0D4:				; CODE XREF: sub_15B08E+2B-j
					; sub_15B08E+34-j sub_15B08E+3A-j
					; sub_15B08E+41-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B0D5:				; CODE XREF: sub_15B08E+12-j
					; sub_15B08E+19-j sub_15B08E+20-p
		LDA		#$F8       ; code used at a000
		STA		word_4		; code used at a000
		STA		word_4+1	; code used at a000
		STA		word_6		; code used at a000
		STA		word_6+1	; code used at a000
		JSR		sub_15B0E8	; code used at a000
		JSR		sub_15B0E8	; code used at a000
		JSR		sub_15B0E8	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B0E8:				; CODE XREF: sub_15B0D5+A-p
					; sub_15B0D5+D-p
		LDX		#4		; code used at a000
		JSR		sub_174204	; code used at a000
		INY				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B0EF:				; CODE XREF: _bE_s32+3-p _bE_s25-p
		LDX		#0
		LDA		#$F8 
loc_15B0F3:				; CODE XREF: sub_15B0EF+A-j
		STA		_spr_ram,X
		INX
		CPX		#$10
		BNE		loc_15B0F3
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s25:				; CODE XREF: sub_175229-P sub_17536E+4-P
					; DATA XREF: BANKE:804A-o
		JSR		sub_15B0EF
		LDA		#1
		STA		byte_2C
		LDA		byte_60CD
		AND		#1
		BEQ		loc_15B112
		LDA		byte_60CD
		ORA		#2
		STA		byte_60CD
loc_15B112:				; CODE XREF: _bE_s25+C-j
		INC		byte_8F
		BRK
		.BYTE $D, 7		; ofs 0x0014000a, -> dst _bD_s5
locret_15B117:				; CODE XREF: _bE_s23+8-j _bE_s23+18-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s23:				; CODE XREF: sub_17522D:loc_17527F-P
					; DATA XREF: BANKE:8046-o
		JSR		_bE_s24		; code used at a000
loc_15B11B:				; CODE XREF: sub_15B1EE+37-j
		LDA		byte_6ACE	; code used at a000
		AND		#3		; code used at a000
		BNE		locret_15B117	; code used at a000
		LDA		byte_73D	; code used at a000
		ORA		byte_73F	; code used at a000
		ORA		byte_741	; code used at a000
		ORA		byte_743	; code used at a000
		AND		#$20       ; code used at a000
		BEQ		locret_15B117	; code used at a000
		JSR		sub_15B1BD	; code used at a000
		LDY		#1		; code used at a000
		STY		byte_64		; code used at a000
		LDA		#$16		; code used at a000
		STA		byte_63		; code used at a000
		DEY				; code used at a000
		STY		byte_62		; code used at a000
loc_15B140:				; CODE XREF: _bE_s23+4F-j
		LDY		byte_67		; code used at a000
		LDA		byte_68,Y	; code used at a000
		STA		byte_CE		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_73D,Y	; code used at a000
		AND		#$20       ; code used at a000
		BEQ		loc_15B161	; code used at a000
		LDA		byte_62		; code used at a000
		BNE		loc_15B15E	; code used at a000
		JSR		sub_15B24B	; code used at a000
		JSR		sub_15B276	; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_62		; code used at a000
loc_15B15E:				; CODE XREF: _bE_s23+3A-j
		JSR		sub_15B288	; code used at a000
loc_15B161:				; CODE XREF: _bE_s23+36-j
		INC		byte_67		; code used at a000
		LDA		byte_67		; code used at a000
		CMP		byte_66		; code used at a000
		BNE		loc_15B140	; code used at a000
locret_15B169:				; CODE XREF: _bE_s24+3-j _bE_s24+C-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s24:				; CODE XREF: _bE_s23-p sub_17536E+1B-P
					; DATA XREF: BANKE:8048-o
		LDA		byte_60C5	; code used at a000
		BMI		locret_15B169	; code used at a000
		LDA		byte_60CB	; code used at a000
		AND		#$90       ; code used at a000
		CMP		#$80       ; code used at a000
		BEQ		locret_15B169	; code used at a000
		LDA		byte_73D	; code used at a000
		ORA		byte_73F	; code used at a000
		ORA		byte_741	; code used at a000
		ORA		byte_743	; code used at a000
		AND		#$40       ; code used at a000
		BEQ		loc_15B1B7	; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		ASL		; code used at a000
		STA		byte_65		; code used at a000
		LDX		#0		; code used at a000
loc_15B192:				; CODE XREF: _bE_s24+4B-j
		TXA				; code used at a000
		PHA				; code used at a000
		LDA		byte_73D,X	; code used at a000
		AND		#$40       ; code used at a000
		BEQ		loc_15B1AF	; code used at a000
		JSR		sub_1743B8	; code used at a000
		AND		#$F		; code used at a000
		BNE		loc_15B1AF	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		byte_73D,X	; code used at a000
		AND		#$BF       ; code used at a000
		STA		byte_73D,X	; code used at a000
		JMP		loc_15B1B1	; code used at a000
loc_15B1AF:				; CODE XREF: _bE_s24+2F-j _bE_s24+36-j
		PLA				; code used at a000
		TAX				; code used at a000
loc_15B1B1:				; CODE XREF: _bE_s24+42-j
		INX				; code used at a000
		INX				; code used at a000
		CPX		byte_65		; code used at a000
		BNE		loc_15B192	; code used at a000
loc_15B1B7:				; CODE XREF: _bE_s24+1C-j
		JSR		sub_15B1BD	; code used at a000
		JMP		sub_15B1EE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B1BD:				; CODE XREF: _bE_s23+1A-p
					; _bE_s24:loc_15B1B7-p
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_65		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_66		; code used at a000
		STA		byte_CE		; code used at a000
loc_15B1CA:				; CODE XREF: sub_15B1BD+22-j
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4+1	; code used at a000
		BPL		loc_15B1D9	; code used at a000
		LDX		byte_66		; code used at a000
		LDA		byte_CE		; code used at a000
		STA		byte_68,X	; code used at a000
		INC		byte_66		; code used at a000
loc_15B1D9:				; CODE XREF: sub_15B1BD+12-j
		INC		byte_CE		; code used at a000
		LDA		byte_CE		; code used at a000
		CMP		byte_65		; code used at a000
		BNE		loc_15B1CA	; code used at a000
		LDA		byte_66		; code used at a000
		STA		byte_48		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_67		; code used at a000
		STA		byte_62		; code used at a000
		STA		byte_D0		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B1EE:				; CODE XREF: _bE_s24+50-j
					; sub_15B1EE+2F-j
		LDY		byte_67		; code used at a000
		LDX		byte_93,Y	; code used at a000
		LDA		byte_9A		; code used at a000
		BNE		loc_15B200	; code used at a000
		CPX		#7		; code used at a000
		BNE		loc_15B217	; code used at a000
		LDX		#2		; code used at a000
		LDY		#$16		; code used at a000
		BNE		loc_15B229	; code used at a000
loc_15B200:				; CODE XREF: sub_15B1EE+6-j
		TXA				; code used at a000
		AND		#$1F		; code used at a000
		TAX				; code used at a000
		LDA		byte_6DE0,X	; code used at a000
		LDX		#2		; code used at a000
		LDY		#$16		; code used at a000
		CMP		#5		; code used at a000
		BEQ		loc_15B229	; code used at a000
		LDX		#$F		; code used at a000
		LDY		#$10		; code used at a000
		CMP		#6		; code used at a000
		BEQ		loc_15B229	; code used at a000
loc_15B217:				; CODE XREF: sub_15B1EE+A-j
					; sub_15B1EE+4B-j sub_15B282+3-j
		INC		byte_67		; code used at a000
		LDA		byte_67		; code used at a000
		CMP		byte_66		; code used at a000
		BNE		sub_15B1EE	; code used at a000
		LDA		byte_9A		; code used at a000
		CMP		#$C		; code used at a000
		BCC		locret_15B228	; code used at a000
		JMP		loc_15B11B	; code used at a000
locret_15B228:				; CODE XREF: sub_15B1EE+35-j
		RTS				; code used at a000
loc_15B229:				; CODE XREF: sub_15B1EE+10-j
					; sub_15B1EE+1F-j sub_15B1EE+27-j
		STX		byte_64		; code used at a000
		STY		byte_63		; code used at a000
		LDX		byte_67		; code used at a000
		LDY		byte_68,X	; code used at a000
		STY		byte_CE		; code used at a000
		LDA		byte_AC		; code used at a000
		ORA		#$20       ; code used at a000
		STA		byte_AC		; code used at a000
		BMI		loc_15B217	; code used at a000
		LDA		byte_62		; code used at a000
		BNE		sub_15B282	; code used at a000
		JSR		sub_15B24B	; code used at a000
		JSR		sub_15B265	; code used at a000
		JSR		sub_15B276	; code used at a000
		JMP		sub_15B282	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B24B:				; CODE XREF: _bE_s23+3C-p
					; sub_15B1EE+51-p
		JSR		_vblank		; code used at a000
		LDA		#$F		; code used at a000
		STA		_ram_pal_buf	; code used at a000
		LDX		#0		; code used at a000
		LDA		byte_63		; code used at a000
loc_15B257:				; CODE XREF: sub_15B24B+12-j
		STA		_ram_pal_buf+1,X ; code	used at	a000
		INX				; code used at a000
		CPX		#$C		; code used at a000
		BNE		loc_15B257	; code used at a000
		JSR		sub_17435B	; code used at a000
		JMP		_vblank		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B265:				; CODE XREF: sub_15B1EE+54-p
		LDX		#$84       ; code used at a000
		LDA		byte_63		; code used at a000
		CMP		#$16		; code used at a000
		BEQ		loc_15B26F	; code used at a000
		LDX		#$81 
loc_15B26F:				; CODE XREF: sub_15B265+6-j
		TXA				; code used at a000
		STA		byte_62		; code used at a000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
locret_15B275:				; CODE XREF: sub_15B288+C-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B276:				; CODE XREF: _bE_s23+3F-p
					; sub_15B1EE+57-p
		JSR		_vblank		; code used at a000
		JSR		sub_1743B5	; code used at a000
		JSR		sub_17435B	; code used at a000
		JMP		_vblank		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B282:				; CODE XREF: sub_15B1EE+4F-j
					; sub_15B1EE+5A-j
		JSR		sub_15B288	; code used at a000
		JMP		loc_15B217	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B288:				; CODE XREF: _bE_s23:loc_15B15E-p
					; sub_15B282-p
		LDA		byte_64		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_sram_bank0_sub5 ; code	used at	a000
		PHA				; code used at a000
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		PLA				; code used at a000
		BNE		locret_15B275	; code used at a000
		LDA		byte_CE		; code used at a000
		STA		byte_D2		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#0		; code used at a000
		STA		byte_73D,X	; code used at a000
		DEC		byte_48		; code used at a000
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		JSR		_bE_sD		; code used at a000
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		JSR		_bE_s34		; code used at a000
		JSR		sub_174DF2	; code used at a000
		LDA		byte_48		; code used at a000
		BNE		loc_15B2D0	; code used at a000
		BRK
		.BYTE $13, $2F		; _syscall12
		LDA		#0
		STA		byte_D2
		LDX		#$27 
		LDA		byte_65
		CMP		#1
		BEQ		loc_15B2C7
		LDX		#$2B 
loc_15B2C7:				; CODE XREF: sub_15B288+3B-j
		TXA
		LDX		#0
		JSR		_bE_s4_msg_m00
		JMP		sub_174BB3
loc_15B2D0:				; CODE XREF: sub_15B288+2C-j
		BRK
		.BYTE $27, $67		; _msg_m00_arg0
		JSR		_bE_s33		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_62		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s31:				; CODE XREF: sub_A3FB+37-P sub_20A1A+6-P
					; _b1_sD:loc_20A76-P _b4_s0:loc_680D6-P
					; _b6_s6+7B-P _bA_sD+F-P sub_1292B0+29-P
					; _bD_s22+3-P sub_142504+62-P
					; sub_175212-P sub_17522D+CC-P
					; sub_175596-P sub_175853+97-P
					; DATA XREF: BANKE:8062-o
		LDA		byte_60C5	; code used at a000
		BPL		loc_15B2F5	; code used as ind data	at a000
		LDA		byte_8B		; code used at a000
		CMP		#$6B       ; code used at a000
		BNE		loc_15B2F5	; code used at a000
		LDA		#$32       ; code used at a000
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
		LDA		#$1C		; code used at a000
		STA		byte_6EF	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6EB	; code used at a000
loc_15B2F5:				; CODE XREF: _bE_s31+3-j _bE_s31+9-j
		LDA		byte_2F		; code used at a000
		AND		#2		; code used at a000
		BNE		loc_15B30A	; code used at a000
		LDA		byte_2A		; code used at a000
		CMP		byte_9B		; code used at a000
		BNE		loc_15B30A	; code used at a000
		LDA		byte_2B
		CMP		byte_9C
		BNE		loc_15B30A
		LDA		#$11
		RTS
loc_15B30A:				; CODE XREF: _bE_s31+1E-j _bE_s31+24-j
					; _bE_s31+2A-j
		LDA		byte_2C		; code used at a000
		BEQ		loc_15B318	; code used at a000
		LDX		#$B
		CMP		#1
		BEQ		loc_15B316
		LDX		#$E
loc_15B316:				; CODE XREF: _bE_s31+37-j _bE_s31+47-j
					; _bE_s31+58-j
		TXA				; code used at a000
		RTS				; code used at a000
loc_15B318:				; CODE XREF: _bE_s31+31-j
		LDA		byte_9A		; code used at a000
		BNE		loc_15B327	; code used at a000
		LDA		byte_2F		; code used at a000
		LDX		#4		; code used at a000
		AND		#2		; code used at a000
		BEQ		loc_15B316	; code used at a000
		LDA		#5		; code used at a000
		RTS				; code used at a000
loc_15B327:				; CODE XREF: _bE_s31+3F-j
		LDA		byte_8B		; code used at a000
		LDY		#0		; code used as ind data	at a000
loc_15B32B:				; CODE XREF: _bE_s31+5B-j
		LDX		byte_15B388,Y	; code used as ind data	at a000
		BEQ		loc_15B338	; code used as ind data	at a000
		CMP		byte_15B37C,Y	; code used at a000
		BEQ		loc_15B316	; code used at a000
		INY				; code used at a000
		BNE		loc_15B32B	; code used as ind data	at a000
loc_15B338:				; CODE XREF: _bE_s31+53-j
		LDX		#0		; code used at a000
loc_15B33A:				; CODE XREF: _bE_s31+65-j
		CMP		byte_15B346,X	; code used as ind data	at a000
		BCC		loc_15B342	; code used as ind data	at a000
		INX				; code used at a000
		BNE		loc_15B33A	; code used as ind data	at a000
loc_15B342:				; CODE XREF: _bE_s31+62-j
		LDA		byte_15B361,X	; code used at a000
		RTS				; code used at a000
byte_15B346:
		.BYTE	1,  4,$13,$1B,$2D,$3B,$3C,$41,$45,$50,$53,$58,$5D,$5F,$65,$68
					; DATA XREF: _bE_s31:loc_15B33A-r
		.BYTE $6D,$82,$8F,$96,$97,$99,$9B,$9F,$CD,$D6,$FF ; data used at a000
byte_15B361:
		.BYTE  $F,  3, $F, $D, $A,  7,	9,  8, $F,  3, $F,  3,	7, $F,	3, $F
					; DATA XREF: _bE_s31:loc_15B342-r
		.BYTE	3, $F, $D, $A, $F,  7, $F,  3,	7,  9,	8 ; data used at a000
byte_15B37C:
		.BYTE	4,  8,$17,$71,$87,$8A,$33,  3,$5C,$6D,$6E,  9
					; DATA XREF: _bE_s31+55-r
					; data used at a000
byte_15B388:
		.BYTE  $A,  7,	6,  3, $F,  6,	3,  7,	3, $D, $D, $D,	0
					; DATA XREF: _bE_s31:loc_15B32B-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s2B:				; DATA XREF: BANKE:8056-o
		ASL
		ASL
		TAY
		LDA		byte_110,Y
		TAX
		LDA		byte_111,Y
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s2E:				; CODE XREF: _bE_sA+16-P
					; DATA XREF: BANKE:805C-o
		LDX		#0		; code used at a000
loc_15B3A3:				; CODE XREF: _bE_s2E+E-j
		LDA		byte_15B3C2,X	; code used as ind data	at a000
		CMP		byte_8B		; code used as ind data	at a000
		BEQ		loc_15B3B2	; code used as ind data	at a000
		CMP		#$FF		; code used at a000
		BEQ		locret_15B3B1	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		BNE		loc_15B3A3	; code used at a000
locret_15B3B1:				; CODE XREF: _bE_s2E+B-j
		RTS				; code used at a000
loc_15B3B2:				; CODE XREF: _bE_s2E+7-j
		TXA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_15B3D7,X	; code used at a000
		STA		word_6C		; code used at a000
		LDA		off_15B3D7+1,X	; code used at a000
		STA		word_6C+1	; code used at a000
		JMP		(word_6C)	; code used at a000
byte_15B3C2:
		.BYTE $A0,$2F,$30,  6,$73,$74,$75,$D2,	8,$EF,$CC,$C3,$BB,$48,$87,$99
					; DATA XREF: _bE_s2E:loc_15B3A3-r
		.BYTE $9A,$62,$EB,$17,$FF ; data used at a000
off_15B3D7:
		.WORD sub_15B445	; DATA XREF: _bE_s2E+14-r _bE_s2E+19-r
					; data used at a000
		.WORD sub_15B435
		.WORD sub_15B435
		.WORD sub_15B46D
		.WORD sub_15B3FF
		.WORD sub_15B403
		.WORD sub_15B407
		.WORD sub_15B41D	; data used at a000
		.WORD sub_15B64C	; data used at a000
		.WORD sub_15B688
		.WORD sub_15B698	; data used at a000
		.WORD sub_15B6A6	; data used at a000
		.WORD sub_15B6B1
		.WORD sub_15B6BC	; data used at a000
		.WORD sub_15B6BC	; data used at a000
		.WORD sub_15B6BC
		.WORD sub_15B6BC
		.WORD sub_15B6C0
		.WORD sub_15B6CD	; data used at a000
		.WORD sub_15B6D8

; =============== S U B	R O U T	I N E =======================================
sub_15B3FF:				; DATA XREF: BANKE:B3DF-o
		LDA		#4
		BNE		sub_15B416

; =============== S U B	R O U T	I N E =======================================
sub_15B403:				; DATA XREF: BANKE:B3E1-o
		LDA		#$10
		BNE		sub_15B416

; =============== S U B	R O U T	I N E =======================================
sub_15B407:				; DATA XREF: BANKE:B3E3-o
		BIT		byte_60CD
		BVS		nullsub_20
		LDA		#$80 
		ORA		byte_60B7
		STA		byte_60B7
		LDA		#$40 

; =============== S U B	R O U T	I N E =======================================
sub_15B416:				; CODE XREF: sub_15B3FF+2-j
					; sub_15B403+2-j
		ORA		byte_60CD
		STA		byte_60CD

; =============== S U B	R O U T	I N E =======================================
nullsub_20:				; CODE XREF: sub_15B407+3-j
					; sub_15B41D+7-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B41D:				; DATA XREF: BANKE:B3E5-o
		LDA		byte_60B7	; ind code used	at a000
		AND		#$18		; code used at a000
		CMP		#$18		; code used at a000
		BNE		nullsub_20	; code used at a000
		LDA		#$13
		STA		byte_753A
		STA		byte_753B
		STA		byte_7558
		STA		byte_7559
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B435:				; DATA XREF: BANKE:B3D9-o BANKE:B3DB-o
		LDA		byte_60B6
		AND		#$20 
		BEQ		locret_15B444
		LDA		#$27 
		STA		byte_7C71
		STA		byte_7CD1
locret_15B444:				; CODE XREF: sub_15B435+5-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B445:				; DATA XREF: BANKE:off_15B3D7-o
		LDA		byte_60B6	; ind code used	at a000
		AND		#2		; code used at a000
		BEQ		locret_15B46C	; code used at a000
		LDA		#$D		; code used at a000
		STA		byte_75C8	; code used at a000
		STA		byte_75C9	; code used at a000
		STA		byte_75E8	; code used at a000
		STA		byte_75E9	; code used at a000
		LDX		#1		; code used at a000
		STX		byte_75C7	; code used at a000
		INX				; code used at a000
		STX		byte_75CA	; code used at a000
		LDX		#5		; code used at a000
		STX		byte_75E7	; code used at a000
		INX				; code used at a000
		STX		byte_75EA	; code used at a000
locret_15B46C:				; CODE XREF: sub_15B445+5-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B46D:				; DATA XREF: BANKE:B3DD-o
		LDA		byte_30
		CMP		#$17
		BNE		locret_15B481
		LDA		byte_31
		CMP		#1
		BNE		locret_15B481
		LDA		byte_60B7
		ORA		#2
		STA		byte_60B7
locret_15B481:				; CODE XREF: sub_15B46D+4-j
					; sub_15B46D+A-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s2F:				; CODE XREF: _bE_sA+19-P
					; DATA XREF: BANKE:805E-o
		LDA		#<[byte_7400] ; code	used at	a000
		STA		word_6C		; code used at a000
		LDA		#>[byte_7400] ; code used at a000
		STA		word_6C+1	; code used at a000
		LDX		#0		; code used at a000
loc_15B48C:				; CODE XREF: _bE_s2F+1E-j
		LDA		byte_6DE0,X	; code used as ind data	at a000
		AND		#$70       ; code used as ind data at a000
		CMP		#$50       ; code used as ind data at a000
		BEQ		loc_15B4A4	; code used as ind data	at a000
		CMP		#$60       ; code used as ind data at a000
		BEQ		loc_15B4A4	; code used as ind data	at a000
		CMP		#$70       ; code used as ind data at a000
		BEQ		loc_15B4A4	; code used as ind data	at a000
loc_15B49D:				; CODE XREF: _bE_s2F+2E-j
		INX				; code used as ind data	at a000
		CPX		#$20       ; code used at a000
		BNE		loc_15B48C	; code used as ind data	at a000
		BEQ		loc_15B4B3	; code used at a000
loc_15B4A4:				; CODE XREF: _bE_s2F+11-j _bE_s2F+15-j
					; _bE_s2F+19-j
		AND		#$30       ; code used at a000
		SEC				; code used at a000
		SBC		#$10		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		TAY				; code used at a000
		STX		word_6,Y	; code used as ind data	at a000
		JMP		loc_15B49D	; code used at a000
loc_15B4B3:				; CODE XREF: _bE_s2F+20-j
		LDA		byte_89		; code used at a000
		STA		word_4+1	; code used at a000
loc_15B4B7:				; CODE XREF: _bE_s2F+5B-j
		LDY		#0		; code used as ind data	at a000
		LDA		byte_88		; code used as ind data	at a000
		STA		word_4		; code used as ind data	at a000
loc_15B4BD:				; CODE XREF: _bE_s2F+54-j
		LDA		(word_6C),Y	; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		AND		#$E0       ; code used as ind data at a000
		STA		byte_A		; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		AND		#$1F		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_6DE0,X	; code used as ind data	at a000
		AND		#$70       ; code used as ind data at a000
		BEQ		loc_15B4D3	; code used as ind data	at a000
		CMP		#$40       ; code used as ind data at a000
		BCC		loc_15B4E0	; code used as ind data	at a000
loc_15B4D3:				; CODE XREF: _bE_s2F+4B-j _bE_s2F+AB-j
					; _bE_s2F+B9-j
		INY				; code used as ind data	at a000
		DEC		word_4		; code used as ind data	at a000
		BNE		loc_15B4BD	; code used as ind data	at a000
		JSR		sub_177CB0	; code used as ind data	at a000
		DEC		word_4+1	; code used at a000
		BNE		loc_15B4B7	; code used as ind data	at a000
		RTS				; code used at a000
loc_15B4E0:				; CODE XREF: _bE_s2F+4F-j
		STA		byte_9		; code used as ind data	at a000
		JSR		sub_177CB0	; code used as ind data	at a000
		LDA		word_4+1	; code used as ind data	at a000
		CMP		#1		; code used as ind data	at a000
		BNE		loc_15B4F0	; code used as ind data	at a000
		LDA		byte_8A		; code used at a000
		JMP		loc_15B50C	; code used at a000
loc_15B4F0:				; CODE XREF: _bE_s2F+67-j
		LDA		(word_6C),Y	; code used as ind data	at a000
		STA		byte_B		; code used as ind data	at a000
		AND		#$E0       ; code used as ind data at a000
		CMP		byte_A		; code used as ind data	at a000
		BEQ		loc_15B50A	; code used as ind data	at a000
		LDA		byte_9A		; code used at a000
		CMP		#$19		; code used at a000
		BCS		loc_15B530	; code used as ind data	at a000
		CMP		#$C		; code used at a000
		BCS		loc_15B516	; code used at a000
		LDA		byte_A		; code used at a000
		BEQ		loc_15B538	; code used as ind data	at a000
		BNE		loc_15B516	; code used as ind data	at a000
loc_15B50A:				; CODE XREF: _bE_s2F+76-j _bE_s2F+B4-j
		LDA		byte_B		; code used as ind data	at a000
loc_15B50C:				; CODE XREF: _bE_s2F+6B-j
		AND		#$1F		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_6DE0,X	; code used as ind data	at a000
		AND		#$70       ; code used as ind data at a000
		BNE		loc_15B538	; code used as ind data	at a000
loc_15B516:				; CODE XREF: _bE_s2F+80-j _bE_s2F+86-j
		JSR		sub_177CBC	; code used as ind data	at a000
		LDA		byte_9		; code used as ind data	at a000
		AND		#$30       ; code used as ind data at a000
		SEC				; code used as ind data	at a000
		SBC		#$10		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		(word_6C),Y	; code used as ind data	at a000
		AND		#$E0       ; code used as ind data at a000
		ORA		word_6,X	; code used as ind data	at a000
		STA		(word_6C),Y	; code used as ind data	at a000
		JMP		loc_15B4D3	; code used as ind data	at a000
loc_15B530:				; CODE XREF: _bE_s2F+7C-j
		LDA		byte_B		; code used at a000
		AND		#$1F		; code used at a000
		CMP		byte_8A		; code used at a000
		BEQ		loc_15B50A	; code used at a000
loc_15B538:				; CODE XREF: _bE_s2F+84-j _bE_s2F+92-j
		JSR		sub_177CBC	; code used as ind data	at a000
		JMP		loc_15B4D3	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s30:				; CODE XREF: _bE_sA+1C-P
					; DATA XREF: BANKE:8060-o
		BRK
		.BYTE $AB, 7		; ofs 0x0015803a, -> dst _bE_s1D
		LDA		#<[byte_6D40] ; code	used at	a000
		STA		word_3C		; code used at a000
		LDA		#>[byte_6D40] ; code used at a000
		STA		word_3C+1	; code used at a000
loc_15B549:				; CODE XREF: _bE_s30+29-j _bE_s30+31-j
		LDY		#0		; code used as ind data	at a000
		LDA		(word_6C),Y	; code used as ind data	at a000
		AND		#$1F		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_6DE0,X	; code used as ind data	at a000
		AND		#$F		; code used as ind data	at a000
		CMP		#$B		; code used as ind data	at a000
		BEQ		loc_15B572	; code used as ind data	at a000
		CMP		#$C		; code used as ind data	at a000
		BEQ		loc_15B572	; code used as ind data	at a000
		CMP		#$D		; code used as ind data	at a000
		BEQ		loc_15B572	; code used as ind data	at a000
loc_15B561:				; CODE XREF: _bE_s30+45-j _bE_s30+4F-j
					; _bE_s30+70-j
		DEC		word_6C		; code used as ind data	at a000
		LDA		word_6C		; code used as ind data	at a000
		CMP		#$FF		; code used as ind data	at a000
		BNE		loc_15B549	; code used as ind data	at a000
		DEC		word_6C+1	; code used at a000
		LDA		word_6C+1	; code used at a000
		CMP		#$73       ; code used at a000
		BNE		loc_15B549	; code used at a000
		RTS				; code used at a000
loc_15B572:				; CODE XREF: _bE_s30+19-j _bE_s30+1D-j
					; _bE_s30+21-j
		BRK
		.BYTE $AE, 7		; ofs 0x00158040, -> dst _bE_s20
		STX		word_3E		; code used as ind data	at a000
		STY		word_3E+1	; code used at a000
		LDY		#0		; code used at a000
loc_15B57B:				; CODE XREF: _bE_s30+4D-j
		LDA		(word_3C),Y	; code used at a000
		CMP		byte_8B		; code used at a000
		BEQ		loc_15B58F	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_15B561	; code used at a000
		INY				; code used at a000
loc_15B586:				; CODE XREF: _bE_s30+56-j
		INY				; code used at a000
loc_15B587:				; CODE XREF: _bE_s30+5D-j
		INY				; code used at a000
		INY				; code used at a000
		CPY		#$A0       ; code used at a000
		BCC		loc_15B57B	; code used at a000
		BCS		loc_15B561
loc_15B58F:				; CODE XREF: _bE_s30+41-j
		INY				; code used at a000
		LDA		(word_3C),Y	; code used at a000
		CMP		word_3E		; code used at a000
		BNE		loc_15B586	; code used at a000
		INY				; code used at a000
		LDA		(word_3C),Y	; code used at a000
		CMP		word_3E+1	; code used at a000
		BNE		loc_15B587	; code used at a000
		INY				; code used at a000
		LDA		(word_3C),Y	; code used at a000
		PHA				; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		AND		#$E0       ; code used at a000
		STA		(word_6C),Y	; code used at a000
		PLA				; code used at a000
		ORA		(word_6C),Y	; code used at a000
		STA		(word_6C),Y	; code used at a000
		JMP		loc_15B561	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s16:				; CODE XREF: _bE_sA+1F-P
					; DATA XREF: BANKE:802C-o
		BRK
		.BYTE $AB, 7		; ofs 0x0015803a, -> dst _bE_s1D
		LDA		#<[byte_7400] ; code	used at	a000
		STA		word_6E		; code used at a000
		LDA		#>[byte_7400] ; code used at a000
		STA		word_6E+1	; code used at a000
		LDA		#0		; code used as ind data	at a000
		STA		word_3C		; code used at a000
		STA		word_3C+1	; code used at a000
loc_15B5C2:				; CODE XREF: _bE_s16+2B-j _bE_s16+31-j
		LDY		#0		; code used as ind data	at a000
		LDA		(word_6E),Y	; code used as ind data	at a000
		AND		#$1F		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_6DE0,X	; code used as ind data	at a000
		AND		#$F		; code used as ind data	at a000
		CMP		#3		; code used as ind data	at a000
		BEQ		loc_15B5E5	; code used as ind data	at a000
loc_15B5D2:				; CODE XREF: _bE_s16+3B-j _bE_s16+4B-j
		INC		word_6E		; code used as ind data	at a000
		BNE		loc_15B5D8	; code used as ind data	at a000
		INC		word_6E+1	; code used at a000
loc_15B5D8:				; CODE XREF: _bE_s16+23-j
		LDA		word_6C		; code used as ind data	at a000
		CMP		word_6E		; code used as ind data	at a000
		BNE		loc_15B5C2	; code used as ind data	at a000
		LDA		word_6C+1	; code used at a000
		CMP		word_6E+1	; code used at a000
		BNE		loc_15B5C2	; code used at a000
		RTS				; code used at a000
loc_15B5E5:				; CODE XREF: _bE_s16+1F-j
		LDA		word_3C		; code used at a000
		INC		word_3C		; code used at a000
		BRK
		.BYTE $17, 7		; ofs 0x0012803e, -> dst _bC_s1F
		BCC		loc_15B5D2	; code used at a000
		LDA		#$1F		; code used at a000
		STA		word_3E		; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_6E),Y	; code used at a000
		AND		#$E0       ; code used at a000
		ORA		word_3E		; code used at a000
		STA		(word_6E),Y	; code used at a000
		BNE		loc_15B5D2	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s36:				; CODE XREF: sub_174BB3:loc_174C2F-P
					; DATA XREF: BANKE:806C-o
		LDA		byte_60C3	; code used at a000
		AND		#7		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_15B630,X	; code used at a000
		STA		word_4+1	; code used at a000
		LDA		byte_15B630+1,X	; code used at a000
		STA		byte_30		; code used at a000
		LDA		byte_15B630+2,X	; code used at a000
		STA		byte_31		; code used at a000
		LDA		byte_15B630+3,X	; code used at a000
		STA		byte_8B		; code used at a000
		BRK
		.BYTE $53, $17		; ofs 0x00098026, -> dst _b6_s13
loc_15B61D:				; code used at a000
		DEC		byte_2B
		LDA		#$40       ; code used at a000
		STA		byte_9B		; code used at a000
		LDA		#$6C       ; code used at a000
		STA		byte_9C		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_644	; code used at a000
		STA		byte_6BC	; code used at a000
		RTS				; code used at a000
byte_15B630:
		.BYTE	0,  9,	5,$47,	2,$12,	4,$4A, $C, $F,	8,$4F,	6, $A,	5,$56
					; DATA XREF: _bE_s36+8-r _bE_s36+D-r
					; _bE_s36+12-r _bE_s36+17-r
		.BYTE	9, $F,$25,$33, $D, $E, $C,$61, $F, $A,	5,$6B ;	data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B64C:				; DATA XREF: BANKE:B3E7-o
		LDA		byte_60C4	; ind code used	at a000
		BPL		locret_15B677	; code used at a000
		LDX		#0
loc_15B653:				; CODE XREF: sub_15B64C+18-j
		LDA		off_15B678,X
		STA		word_4
		LDA		off_15B678+1,X
		STA		word_4+1
		JSR		sub_15B667
		INX
		INX
		CPX		#$10
		BNE		loc_15B653
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B667:				; CODE XREF: sub_15B64C+11-p
		LDA		#$13
		LDY		#0
		STA		(word_4),Y
		INY
		STA		(word_4),Y
		LDY		byte_88
		STA		(word_4),Y
		INY
		STA		(word_4),Y
locret_15B677:				; CODE XREF: sub_15B64C+3-j
		RTS				; code used at a000
off_15B678:
		.WORD byte_76D4		; DATA XREF: sub_15B64C:loc_15B653-r
					; sub_15B64C+C-r
		.WORD byte_79F4
		.WORD byte_779A
		.WORD byte_779E
		.WORD byte_7862
		.WORD byte_7866
		.WORD byte_792A
		.WORD byte_792E

; =============== S U B	R O U T	I N E =======================================
sub_15B688:				; DATA XREF: BANKE:B3E9-o
		LDA		byte_60BA
		AND		#$20 
		BEQ		locret_15B697
		LDA		#$13
		STA		byte_7673
		STA		byte_7697
locret_15B697:				; CODE XREF: sub_15B688+5-j
					; sub_15B698+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B698:				; DATA XREF: BANKE:B3EB-o
		LDA		byte_60C5	; ind code used	at a000
		BPL		locret_15B697	; code used at a000
		LDX		#$B
		LDY		#$13
		LDA		#5
		JMP		sub_177CC8

; =============== S U B	R O U T	I N E =======================================
sub_15B6A6:				; DATA XREF: BANKE:B3ED-o
		LDA		byte_60C5	; ind code used	at a000
		AND		#$20       ; code used at a000
		BEQ		locret_15B6B0	; code used at a000
		BRK
		.BYTE $5E, $17		; ofs 0x00128036, -> dst _bC_s1B
locret_15B6B0:				; CODE XREF: sub_15B6A6+5-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B6B1:				; DATA XREF: BANKE:B3EF-o
		LDA		byte_60B7
		BPL		locret_15B6BB
		LDA		#$AC 
		STA		byte_7633
locret_15B6BB:				; CODE XREF: sub_15B6B1+3-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B6BC:				; DATA XREF: BANKE:B3F1-o BANKE:B3F3-o
					; BANKE:B3F5-o BANKE:B3F7-o
		BRK
		.BYTE $4C, $17		; ofs 0x000080a2, -> dst _b0_s51
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B6C0:				; DATA XREF: BANKE:B3F9-o
		LDA		byte_60CD
		AND		#$20 
		BEQ		locret_15B6CC
		LDA		#$F
		STA		byte_7464
locret_15B6CC:				; CODE XREF: sub_15B6C0+5-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B6CD:				; DATA XREF: BANKE:B3FB-o
		LDA		byte_60C8	; ind code used	at a000
		BPL		locret_15B6D7	; code used at a000
		LDA		#$12
		STA		byte_7579
locret_15B6D7:				; CODE XREF: sub_15B6CD+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B6D8:				; DATA XREF: BANKE:B3FD-o
		LDA		byte_60B9
		BPL		locret_15B6E2
		LDA		#$F
		STA		byte_7522
locret_15B6E2:				; CODE XREF: sub_15B6D8+3-j
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s1B:				; CODE XREF: _b6_s6+4F-P sub_142504+44-P
					; sub_175917+7-P sub_176C41+21-P
					; DATA XREF: BANKE:8036-o
		LDA		byte_60CA	; code used at a000
		AND		#$50       ; code used at a000
		LSR		; code used at a000
		ORA		byte_60CA	; code used at a000
		STA		byte_60CA	; code used at a000
		LDA		byte_60B9	; code used at a000
		AND		#4		; code used at a000
		ORA		byte_60CA	; code used at a000
		STA		byte_60CA	; code used at a000
		LDA		byte_60C5	; code used at a000
		AND		#$E0       ; code used at a000
		STA		byte_60C5	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_sE:					; CODE XREF: sub_1753AA+2D-P
					; DATA XREF: BANKE:801C-o
		LDY		#$16		; code used at a000
loc_15B705:				; CODE XREF: _bE_sE+A-j
		LDA		byte_15B8FB,Y	; code used at a000
		CMP		byte_8B		; code used at a000
		BEQ		loc_15B711	; code used at a000
		DEY				; code used at a000
		BPL		loc_15B705	; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_15B711:				; CODE XREF: _bE_sE+7-j
		TYA				; code used at a000
		SBC		#9		; code used at a000
		TAX				; code used at a000
		BMI		loc_15B751	; code used at a000
		BEQ		loc_15B744	; code used at a000
		DEY				; code used at a000
		DEX				; code used at a000
		BEQ		loc_15B746	; code used at a000
		LDY		#$D		; code used at a000
		DEX				; code used at a000
		BEQ		loc_15B746	; code used at a000
		LDY		#$2A       ; code used at a000
		DEX				; code used at a000
		BEQ		loc_15B76D	; code used at a000
		LDY		#$24       ; code used at a000
		DEX				; code used at a000
		BEQ		loc_15B75B	; code used at a000
		DEX				; code used at a000
		BEQ		loc_15B765	; code used at a000
		DEX				; code used at a000
		BEQ		loc_15B775	; code used at a000
		DEX				; code used at a000
		BEQ		loc_15B782	; code used at a000
		DEX
		BEQ		loc_15B795
		DEX
		BEQ		loc_15B791
		DEX
		BEQ		loc_15B791
		DEX
		BEQ		loc_15B7B5
		JMP		loc_15B7DD
loc_15B744:				; CODE XREF: _bE_sE+14-j
		LDY		#$26 
loc_15B746:				; CODE XREF: _bE_sE+18-j _bE_sE+1D-j
		LDX		byte_644
loc_15B749:				; CODE XREF: _bE_sE+4A-j
		BEQ		loc_15B751
		INY
		DEX
		BPL		loc_15B749
loc_15B74F:				; CODE XREF: _bE_sE:loc_15B7B3-j
		INY				; code used at a000
loc_15B750:				; CODE XREF: _bE_sE+68-j _bE_sE+70-j
					; _bE_sE:loc_15B7B1-j
		INY				; code used at a000
loc_15B751:				; CODE XREF: _bE_sE+12-j
					; _bE_sE:loc_15B749-j _bE_sE+5A-j
					; _bE_sE+66-j _bE_sE+6E-j _bE_sE+78-j
					; _bE_sE+85-j _bE_sE+AA-j _bE_sE+C2-j
		JSR		sub_15B809	; code used at a000
loc_15B754:				; CODE XREF: _bE_sE+60-j _bE_sE+103-j
		JSR		sub_174369	; code used at a000
		LDA		#4		; code used at a000
		SEC				; code used at a000
		RTS				; code used at a000
loc_15B75B:				; CODE XREF: _bE_sE+27-j
		LDA		byte_31		; code used at a000
		BEQ		loc_15B751	; code used at a000
		LDA		#$EC       ; code used at a000
		STA		byte_8B		; code used at a000
		BNE		loc_15B754	; code used at a000
loc_15B765:				; CODE XREF: _bE_sE+2A-j
		LDA		byte_644	; code used at a000
		LSR		; code used at a000
		BEQ		loc_15B751	; code used at a000
		BNE		loc_15B750
loc_15B76D:				; CODE XREF: _bE_sE+22-j
		LDA		byte_30
		CMP		#$10
		BCC		loc_15B751
		BCS		loc_15B750
loc_15B775:				; CODE XREF: _bE_sE+2D-j
		LDY		#$21 
		LDA		byte_30
		CMP		#$1E
		BCS		loc_15B751
		CMP		#$C
		JMP		loc_15B7B1
loc_15B782:				; CODE XREF: _bE_sE+30-j
		LDY		#$11		; code used at a000
		LDA		byte_30		; code used at a000
		CMP		#$14		; code used at a000
		BCC		loc_15B751	; code used at a000
		LDA		byte_31		; code used at a000
		CMP		#$14		; code used at a000
		JMP		loc_15B7B1	; code used at a000
loc_15B791:				; CODE XREF: _bE_sE+36-j _bE_sE+39-j
		LDA		#6
		BNE		loc_15B797
loc_15B795:				; CODE XREF: _bE_sE+33-j
		LDA		#$A
loc_15B797:				; CODE XREF: _bE_sE+90-j
		STA		word_4
		LDY		#$14
		LDA		byte_30
		CMP		word_4
		BCC		loc_15B7A9
		LDY		#$17
		CMP		#$E
		BCC		loc_15B7A9
		LDY		#$1A
loc_15B7A9:				; CODE XREF: _bE_sE+9C-j _bE_sE+A2-j
		LDA		byte_31
		CMP		word_4
		BCC		loc_15B751
		CMP		#$E
loc_15B7B1:				; CODE XREF: _bE_sE+7C-j _bE_sE+8B-j
					; _bE_sE+D6-j _bE_sE+EE-j
		BCC		loc_15B750	; code used at a000
loc_15B7B3:				; CODE XREF: _bE_sE+E0-j
		BCS		loc_15B74F	; code used at a000
loc_15B7B5:				; CODE XREF: _bE_sE+3C-j
		LDY		#$1D
		LDA		byte_30
		CMP		#8
		BCC		loc_15B7C7
		CMP		#$17
		BCS		loc_15B7C7
		LDA		byte_31
		CMP		#8
		BCC		loc_15B751
loc_15B7C7:				; CODE XREF: _bE_sE+B8-j _bE_sE+BC-j
		LDA		byte_30
		CMP		#$10
		BCC		loc_15B7DB
		CMP		#$15
		BCS		loc_15B7DB
		LDA		byte_31
		CMP		#$C
		BCC		loc_15B7DB
		CMP		#$13
		BCC		loc_15B7B1
loc_15B7DB:				; CODE XREF: _bE_sE+C8-j _bE_sE+CC-j
					; _bE_sE+D2-j
		CLC
		RTS
loc_15B7DD:				; CODE XREF: _bE_sE+3E-j
		LDY		#$1F
		LDA		byte_30
		CMP		#$1C
		BCS		loc_15B7B3
		CMP		#$12
		BCC		loc_15B7F3
		CMP		#$17
		BCS		loc_15B7F3
		LDA		byte_31
		CMP		#8
		BCC		loc_15B7B1
loc_15B7F3:				; CODE XREF: _bE_sE+E4-j _bE_sE+E8-j
		JSR		sub_15B809
		LDA		byte_644
		LSR
		BCS		loc_15B800
		DEC		byte_30
		DEC		byte_30
loc_15B800:				; CODE XREF: _bE_sE+F7-j
		LDA		byte_31
		ADC		#$A
		STA		byte_31
		JMP		loc_15B754

; =============== S U B	R O U T	I N E =======================================
sub_15B809:				; CODE XREF: _bE_sE:loc_15B751-p
					; _bE_sE:loc_15B7F3-p
		TYA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_15B84B,Y	; code used at a000
		STA		byte_8B		; code used at a000
		LDA		byte_15B84B+3,Y	; code used at a000
		STA		word_6		; code used at a000
		JSR		sub_15B82E	; code used at a000
		CLC				; code used at a000
		ADC		byte_15B84B+1,Y	; code used at a000
		BMI		loc_15B822	; code used at a000
		STA		byte_30		; code used at a000
loc_15B822:				; CODE XREF: sub_15B809+15-j
		JSR		sub_15B82E	; code used at a000
		CLC				; code used at a000
		ADC		byte_15B84B+2,Y	; code used at a000
		BMI		locret_15B82D	; code used at a000
		STA		byte_31		; code used at a000
locret_15B82D:				; CODE XREF: sub_15B809+20-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B82E:				; CODE XREF: sub_15B809+E-p
					; sub_15B809:loc_15B822-p
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
		STA		word_4+1	; code used at a000
		LDX		#4		; code used at a000
loc_15B836:				; CODE XREF: sub_15B82E+1A-j
		SEC				; code used at a000
		ROL		word_4		; code used at a000
		LSR		word_6		; code used at a000
		BCC		loc_15B847	; code used at a000
		JSR		sub_1743B8	; code used at a000
		AND		word_4		; code used at a000
		CLC				; code used at a000
		ADC		word_4+1	; code used at a000
		STA		word_4+1	; code used at a000
loc_15B847:				; CODE XREF: sub_15B82E+D-j
		DEX				; code used at a000
		BNE		loc_15B836	; code used at a000
		RTS				; code used at a000
byte_15B84B:
		.BYTE $CA,$12,$16,$45,$15,  3,$1E,  0,$D1,$19,$15,  0,$A2, $E,$1E,$64
					; DATA XREF: sub_15B809+4-r
					; sub_15B809+12-r sub_15B809+1D-r
					; sub_15B809+9-r
		.BYTE $A8, $C,$18,$33,$BF,$10,$10,  0,$BF,$30,	3,  0,$40, $F,	2,  0
		.BYTE $F1, $E, $C,$94,	6,  6,$1D,  0,	6,  7,$1E,  0,$62,$19,	8,  0
		.BYTE $62,$14,	3,  0,	6,  5,$1D,  0,	6,  7,$1F,  0,	6,  6,$20,  0
		.BYTE	6,  4,$1F,  0,$D0, $B,	9,$33,$D0,$1D,	9,$33,$D0,$1D,$1B,$33
		.BYTE $E4,  5,	6,  0,$E4,  7, $D,  0,$E4,  5,$13,  0,$E4, $D,	7,  0
		.BYTE $E5, $B, $D,  0,$E4, $D,$12,  0,$E4,$14,	6,  0,$E4,$12, $D,  0
		.BYTE $E4,$14,$13,  0,$3D,  6,	0,$34,$3D, $A, $E,$30,$DB,$FF,$FF,  0
		.BYTE $DC,$12,	6,$54,$DB,$1E, $E,$32,$DB,$FF,	8,  0,$DD,$FF,	8,  0
		.BYTE $EB,$11, $B,  0,$EB,  1, $E,  0,$40, $C,	2,$16,$40,$22,$10,$71
		.BYTE $40, $C,$2C,$16,$40,  0,$10,$71,$A9,$18,$22,$21,$A9,$26,	4,$58
byte_15B8FB:
		.BYTE $C9,$86,$D2,$A1,$A9,$BE,$BF,$F1,$F2,$F0,$64,$62,$AA,$EE,$EC,$DE
					; DATA XREF: _bE_sE:loc_15B705-r
		.BYTE $3B,$E5,$E6,$E7,$DB,$DD ;	data used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_sF:					; CODE XREF: _b6_s6+72-P _bA_sF-P
					; sub_174BB3+51-P sub_1750D0+F7-P
					; DATA XREF: BANKE:801E-o
		JSR		__render_on_flag10_clear_reinit	; code used as data at a000
		JSR		_bE_s10		; code used at a000
		JMP		_bE_s18		; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s11:				; CODE XREF: sub_174C62+34-P
					; DATA XREF: BANKE:8022-o
		LDA		#$FF		; code used at a000
		BNE		sub_15B920	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s10:				; CODE XREF: sub_A039+39-P
					; sub_AC57:loc_AC70-P _b6_s15+30-P
					; _b6_s1E+5-P _b7_s19+69-P _bC_s22+A8-P
					; _bC_s19+62-P sub_12B01C+18-P
					; sub_142780+6-P sub_142923+13F-P
					; sub_1584ED:loc_158504-P
					; sub_15B288+21-P _bE_sF+3-p
					; DATA XREF: BANKE:8020-o
		LDA		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B920:				; CODE XREF: _bE_s11+2-j
		STA		byte_6AC2	; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_6ABE	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6AC0	; code used at a000
		STA		byte_6AC1	; code used at a000
loc_15B933:				; CODE XREF: sub_15B920:loc_15B9AD-j
		LDA		byte_6AC1	; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4		; code used at a000
		BPL		loc_15B9B6	; code used at a000
		LDA		word_4+1	; code used at a000
		BPL		loc_15B9B6	; code used at a000
		LDA		byte_60C9	; code used at a000
		AND		#$3F       ; code used at a000
		BEQ		loc_15B957	; code used at a000
		LDA		byte_60B8
		AND		#$3F 
		CLC
		ADC		#$F
loc_15B952:				; CODE XREF: sub_15B920+3C-j
		STA		byte_6ABF
		BNE		loc_15B99C
loc_15B957:				; CODE XREF: sub_15B920+28-j
		BIT		byte_60B7	; code used at a000
		LDA		#$F		; code used at a000
		BVS		loc_15B952	; code used at a000
		JSR		_sram_b0_s2C	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_6ABF	; code used at a000
		JSR		_sram_bank0_sub1E ; code used at a000
		LDA		word_4+1	; code used at a000
		CMP		#$AA       ; code used at a000
		BNE		loc_15B976	; code used at a000
		LDA		#$1F
		STA		byte_6ABF
		BNE		loc_15B99C
loc_15B976:				; CODE XREF: sub_15B920+4D-j
		JSR		_sram_b0_s2F	; code used at a000
loc_15B979:				; code used at a000
		LDA		word_4
		BEQ		loc_15B99C	; code used at a000
		JSR		_sram_bank0_sub1E ; code used at a000
		LDA		word_4+1	; code used at a000
		CMP		#$B1       ; code used at a000
		BEQ		loc_15B98A	; code used at a000
		CMP		#$B2       ; code used at a000
		BNE		loc_15B991	; code used at a000
loc_15B98A:				; CODE XREF: sub_15B920+64-j
		LDA		#$30 
		STA		byte_6ABF
		BNE		loc_15B99C
loc_15B991:				; CODE XREF: sub_15B920+68-j
		LDA		byte_6ABF	; code used at a000
		BEQ		loc_15B99C	; code used at a000
		CLC
		ADC		#7
		STA		byte_6ABF
loc_15B99C:				; CODE XREF: sub_15B920+35-j
					; sub_15B920+54-j sub_15B920+5B-j
					; sub_15B920+6F-j sub_15B920+74-j
		LDY		byte_6AC0	; code used at a000
		LDA		byte_6ABF	; code used at a000
		BIT		byte_6AC2	; code used at a000
		BVS		loc_15B9B0	; code used at a000
		JSR		sub_1762C3	; code used at a000
		JMP		loc_15B9B3	; code used at a000
loc_15B9AD:				; CODE XREF: sub_15B920+9F-j
		JMP		loc_15B933	; code used at a000
loc_15B9B0:				; CODE XREF: sub_15B920+85-j
		JSR		sub_1762A8	; code used at a000
loc_15B9B3:				; CODE XREF: sub_15B920+8A-j
		JSR		sub_15B9FA	; code used at a000
loc_15B9B6:				; CODE XREF: sub_15B920+1D-j
					; sub_15B920+21-j
		INC		byte_6AC1	; code used at a000
		LDA		byte_6AC1	; code used at a000
		CMP		byte_6ABE	; code used at a000
		BNE		loc_15B9AD	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6AC1	; code used at a000
loc_15B9C6:				; CODE XREF: sub_15B920+D5-j
		LDA		byte_6AC1	; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_b0_sE	; code used at a000
		LDA		word_4		; code used at a000
		BPL		loc_15B9EC	; code used at a000
		LDA		word_4+1	; code used at a000
		BMI		loc_15B9EC	; code used at a000
		LDA		#$31       ; code used at a000
		LDY		byte_6AC0	; code used at a000
		BIT		byte_6AC2	; code used at a000
		BVS		loc_15B9E6	; code used at a000
		JSR		sub_1762C3	; code used at a000
		JMP		loc_15B9E9	; code used at a000
loc_15B9E6:				; CODE XREF: sub_15B920+BE-j
		JSR		sub_1762A8	; code used at a000
loc_15B9E9:				; CODE XREF: sub_15B920+C3-j
		JSR		sub_15B9FA	; code used at a000
loc_15B9EC:				; CODE XREF: sub_15B920+B0-j
					; sub_15B920+B4-j
		INC		byte_6AC1	; code used at a000
		LDA		byte_6AC1	; code used at a000
		CMP		byte_6ABE	; code used at a000
		BNE		loc_15B9C6	; code used at a000
		JMP		__render_on_flag10_clear_reinit	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_15B9FA:				; CODE XREF: sub_15B920:loc_15B9B3-p
					; sub_15B920:loc_15B9E9-p
		LDA		byte_90		; code used at a000
		PHA				; code used as ind data	at a000
		LDA		#1		; code used at a000
		STA		byte_90		; code used at a000
		JSR		sub_177116	; code used at a000
		INC		byte_90		; code used at a000
		JSR		sub_177116	; code used at a000
		JSR		_vblank		; code used at a000
		PLA				; code used at a000
		STA		byte_90		; code used at a000
		BRK
		.BYTE $25, $17		; ofs 0x00158068, -> dst _bE_s34
		INC		byte_6AC0	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s18:				; CODE XREF: _bE_sF+6-j	sub_174C62+19-P
					; sub_174C62:loc_174C84-P
					; DATA XREF: BANKE:8030-o
		JSR		_vblank_and_render_off_flag10_set ; code used at a000
		JSR		sub_176285	; code used at a000
		LDA		#$12		; code used at a000
		JSR		sub_176299	; code used at a000
		LDA		#$1F		; code used at a000
		JSR		sub_176299	; code used at a000
		LDX		#0		; code used at a000
loc_15BA28:				; CODE XREF: _bE_s18+1B-j
		LDA		byte_15BA34,X	; code used as ind data	at a000
		STA		_ram_pal_buf+$D,X ; code used as ind data at a000
		INX				; code used as ind data	at a000
		CPX		#$C		; code used as ind data	at a000
		BNE		loc_15BA28	; code used at a000
		RTS				; code used at a000
byte_15BA34:
		.BYTE $36,$30,$11,$36,$15,  3,$36,$30,$1B,$36,$1A,  6
					; DATA XREF: _bE_s18:loc_15BA28-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s19:				; CODE XREF: sub_1750D0:loc_1750D5-P
					; sub_17542F:loc_17543E-P
					; sub_1754B6:loc_1754CA-P
					; DATA XREF: BANKE:8032-o
		LDY		#0		; code used as ind data	at a000
		LDA		(word_6C),Y	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_15BA44:				; CODE XREF: _bE_s1A-p
		AND		#$1F		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		byte_6DE0,X	; code used as ind data	at a000
		LDX		#3		; code used as ind data	at a000
		AND		#$F		; code used as ind data	at a000
		CMP		#1		; code used as ind data	at a000
		BEQ		loc_15BA5E	; code used as ind data	at a000
		LDX		#1		; code used as ind data	at a000
		CMP		#$A		; code used as ind data	at a000
		BEQ		loc_15BA5E	; code used as ind data	at a000
		CMP		#$F		; code used as ind data	at a000
		BEQ		loc_15BA5E	; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		RTS				; code used as ind data	at a000
loc_15BA5E:				; CODE XREF: sub_15BA44+C-j
					; sub_15BA44+12-j sub_15BA44+16-j
					; _bE_s1A+7-j
		SEC				; code used as ind data	at a000
locret_15BA5F:				; CODE XREF: _bE_s1A+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_bE_s1A:				; CODE XREF: sub_17536E+A-P
					; DATA XREF: BANKE:8034-o
		JSR		sub_15BA44	; code used at a000
		BCC		locret_15BA5F	; code used at a000
		CMP		#$F		; code used at a000
		BNE		loc_15BA5E	; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

		ECHO "bank 0E size", [.-$8000], "free space", [$BFD8-.]

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
