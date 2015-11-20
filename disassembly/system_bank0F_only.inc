
		ORG	END_OF_SHARED_ORG

; =============== S U B	R O U T	I N E =======================================
; PRG 0F SYSTEM	ROUTINES ONLY STARTS HERE
sub_176C99:				; CODE XREF: sub_83D08+14-P
					; sub_83E12+10-P sub_128972+4-J
					; sub_15A472+3C-P sub_175BE0-p
		LDA		_mmc_cur_prg_bank ; code used as ind data at e000
		PHA				; code used as ind data	at e000
		JSR		sub_176CB4	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		JMP		_mmc1_prg_set	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176CA4:				; CODE XREF: _bC_s3+4-P	sub_1419FB+8F-P
					; sub_1580AC+4-P
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used at e000
		JSR		sub_176D3A	; code used at e000
		STA		word_7C		; code used at e000
		PLA				; code used at e000
		JSR		_mmc1_prg_set	; code used at e000
		LDA		word_7C		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176CB4:				; CODE XREF: sub_176C99+4-p
		LDA		#5		; code used as ind data	at e000
		JSR		_mmc1_prg_set	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176CB9:				; CODE XREF: sub_17601F+4-p
		STX		byte_74		; code used as ind data	at e000
		STX		word_4A+1	; code used as ind data	at e000
		STY		byte_77		; code used as ind data	at e000
		JSR		sub_176F1C	; code used as ind data	at e000
		LDA		byte_2F		; code used as ind data	at e000
		BEQ		loc_176CCD	; code used as ind data	at e000
		CMP		#2		; code used as ind data	at e000
		BEQ		loc_176CE3	; code used as ind data	at e000
		JMP		sub_176F3E	; code used as ind data	at e000
loc_176CCD:				; CODE XREF: sub_176CB9+B-j
		CPX		#4		; code used as ind data	at e000
		BCC		loc_176CFA	; code used as ind data	at e000
		CPX		#$FC       ; code used as ind data at e000
		BCS		loc_176CFA	; code used as ind data	at e000
		CPY		#4		; code used as ind data	at e000
		BCC		loc_176CFA	; code used as ind data	at e000
		CPY		#$FC       ; code used as ind data at e000
		BCS		loc_176CFA	; code used as ind data	at e000
		JSR		sub_176D7D	; code used as ind data	at e000
		JMP		sub_176DC9	; code used as ind data	at e000
loc_176CE3:				; CODE XREF: sub_176CB9+F-j
		CPX		#3		; code used at e000
		BCC		loc_176CFD	; code used as ind data	at e000
		CPX		#$8D       ; code used at e000
		BCS		loc_176CFD	; code used at e000
		CPY		#3		; code used as ind data	at e000
		BCC		loc_176CFD	; code used at e000
		CPY		#$83       ; code used as ind data at e000
		BCS		loc_176CFD	; code used at e000
		JSR		sub_176D7D	; code used at e000
		JSR		sub_176DC9	; code used at e000
		RTS				; code used as ind data	at e000
loc_176CFA:				; CODE XREF: sub_176CB9+16-j
					; sub_176CB9+1A-j sub_176CB9+1E-j
					; sub_176CB9+22-j sub_176D3F+15-j
					; sub_176D3F+19-j sub_176D3F+1D-j
					; sub_176D3F+21-j
		LDA		#0		; code used at e000
		RTS				; code used at e000
loc_176CFD:				; CODE XREF: sub_176CB9+2C-j
					; sub_176CB9+30-j sub_176CB9+34-j
					; sub_176CB9+38-j
		DEX
		JSR		sub_17701E
		STA		byte_7B
		INX
		JSR		sub_17701E
		STA		word_7C
		INX
		JSR		sub_17701E
		STA		word_7C+1
		LDA		word_7C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176D12:				; CODE XREF: sub_176D3F+7-j
		STX		byte_74		; code used at e000
		STY		byte_77		; code used at e000
		LDA		#2		; code used at e000
		STA		byte_7A		; code used at e000
		CPX		#3		; code used at e000
		BCC		loc_176D34	; code used at e000
		CPX		#$8D       ; code used at e000
		BCS		loc_176D34	; code used at e000
		CPY		#3		; code used at e000
		BCC		loc_176D34	; code used at e000
		CPY		#$83       ; code used at e000
		BCS		loc_176D34	; code used at e000
		JSR		sub_176D7D	; code used at e000
		JSR		sub_176E01	; code used at e000
		TYA				; code used at e000
		STA		word_7C		; code used at e000
		RTS				; code used at e000
loc_176D34:				; CODE XREF: sub_176D12+A-j
					; sub_176D12+E-j sub_176D12+12-j
					; sub_176D12+16-j
		JSR		sub_17701E
		STA		word_7C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176D3A:				; CODE XREF: sub_1757C0+4-p
					; sub_176CA4+4-p
		LDA		#5		; code used at e000
		JSR		_mmc1_prg_set	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176D3F:				; CODE XREF: sub_175F30:loc_175F39-j
		JSR		sub_176F1C	; code used at e000
		LDA		byte_2F		; code used at e000
		CMP		#2		; code used at e000
		BEQ		sub_176D12	; code used at e000
		STX		byte_74		; code used at e000
		STX		word_4A+1	; code used at e000
		STY		byte_77		; code used at e000
		LDA		#2		; code used at e000
		STA		byte_7A		; code used at e000
		CPX		#4		; code used at e000
		BCC		loc_176CFA	; code used at e000
		CPX		#$FC       ; code used at e000
		BCS		loc_176CFA	; code used at e000
		CPY		#4		; code used at e000
		BCC		loc_176CFA	; code used at e000
		CPY		#$FC       ; code used at e000
		BCS		loc_176CFA	; code used at e000
		TXA				; code used at e000
		PHA				; code used at e000
		LDA		#$FF		; code used at e000
		STA		byte_4C		; code used at e000
		JSR		sub_176D7D	; code used at e000
		JSR		sub_176E01	; code used at e000
		PLA				; code used as ind data	at e000
		STA		word_4A+1	; code used at e000
		LDA		byte_78		; code used at e000
		ORA		byte_79		; code used at e000
		ORA		byte_7A		; code used at e000
		LDX		#1		; code used at e000
		JSR		sub_176F0B	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176D7D:				; CODE XREF: sub_176CB9+24-p
					; sub_176CB9+3A-p sub_176D12+18-p
					; sub_176D3F+29-p sub_176DC9+20-p
		LDA		byte_2F		; code used as ind data	at e000
		AND		#2		; code used as ind data	at e000
		BNE		loc_176D9E	; code used as ind data	at e000
		TYA				; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		TAX				; code used as ind data	at e000
		BCS		loc_176D93	; code used as ind data	at e000
		LDA		$8018,X		; code used as ind data	at e000
		STA		word_6C		; code used as ind data	at e000
		LDA		$8019,X		; code used as ind data	at e000
		STA		word_6C+1	; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_176D93:				; CODE XREF: sub_176D7D+9-j
		LDA		$8118,X		; code used as ind data	at e000
		STA		word_6C		; code used as ind data	at e000
		LDA		$8119,X		; code used as ind data	at e000
		STA		word_6C+1	; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_176D9E:				; CODE XREF: sub_176D7D+4-j
		TYA				; code used as ind data	at e000
		ASL		; code used at e000
		TAX				; code used at e000
		BCS		loc_176DAE	; code used at e000
		LDA		$9A95,X		; code used at e000
		STA		word_6C		; code used at e000
		LDA		$9A96,X		; code used as ind data	at e000
		STA		word_6C+1	; code used at e000
		RTS				; code used at e000
loc_176DAE:				; CODE XREF: sub_176D7D+24-j
		LDA		$9A95,X
		STA		word_6C
		LDA		$9A96,X
		STA		word_6C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176DB9:				; CODE XREF: sub_176DC9:loc_176DE3-p
		LDA		byte_2F		; code used as ind data	at e000
		AND		#2		; code used as ind data	at e000
		BEQ		loc_176DC4	; code used as ind data	at e000
		LDA		#$9D       ; code used at e000
		STA		byte_75		; code used at e000
		RTS				; code used at e000
loc_176DC4:				; CODE XREF: sub_176DB9+4-j
		STA		byte_75		; code used as ind data	at e000
		DEC		byte_75		; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176DC9:				; CODE XREF: sub_176CB9+27-j
					; sub_176CB9+3D-p
		LDY		#0		; code used as ind data	at e000
		STY		byte_75		; code used as ind data	at e000
		LDA		word_6C		; code used as ind data	at e000
		STA		byte_642	; code used as ind data	at e000
		LDA		word_6C+1	; code used as ind data	at e000
		STA		byte_643	; code used as ind data	at e000
		DEC		byte_74		; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		LDX		byte_74		; code used as ind data	at e000
		BPL		loc_176E19	; code used as ind data	at e000
		INC		byte_74		; code used as ind data	at e000
		INC		byte_74		; code used as ind data	at e000
loc_176DE3:				; CODE XREF: sub_176E01+16-j
		JSR		sub_176DB9	; code used as ind data	at e000
		LDY		byte_77		; code used as ind data	at e000
		INY				; code used as ind data	at e000
		JSR		sub_176D7D	; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		LDA		word_6C		; code used as ind data	at e000
		SBC		byte_642	; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		DEY				; code used as ind data	at e000
		LDA		byte_643	; code used as ind data	at e000
		STA		word_6C+1	; code used as ind data	at e000
		LDA		byte_642	; code used as ind data	at e000
		STA		word_6C		; code used as ind data	at e000
		JMP		sub_176E6A	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176E01:				; CODE XREF: sub_176D12+1B-p
					; sub_176D3F+2C-p
		DEC		word_4A+1	; code used at e000
		LDY		#0		; code used at e000
		STY		byte_75		; code used at e000
		LDA		word_6C		; code used at e000
		STA		byte_642	; code used at e000
		LDA		word_6C+1	; code used at e000
		STA		byte_643	; code used at e000
		LDY		#0		; code used at e000
		LDX		byte_74		; code used at e000
		BPL		loc_176E19	; code used at e000
		BMI		loc_176DE3	; code used at e000
loc_176E19:				; CODE XREF: sub_176DC9+14-j
					; sub_176E01+14-j sub_176E01+37-j
		LDA		(word_6C),Y	; code used as ind data	at e000
		STA		byte_79		; code used as ind data	at e000
		AND		#$E0       ; code used as ind data at e000
		CMP		#$E0       ; code used as ind data at e000
		BEQ		loc_176E3B	; code used as ind data	at e000
		LDA		byte_79		; code used as ind data	at e000
		AND		#$1F		; code used as ind data	at e000
loc_176E27:				; CODE XREF: sub_176E01+40-j
					; sub_176E01+44-j
		CLC				; code used as ind data	at e000
		ADC		#1		; code used as ind data	at e000
		STA		byte_78		; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		byte_75		; code used as ind data	at e000
		STA		byte_75		; code used as ind data	at e000
loc_176E31:				; CODE XREF: sub_176E01+58-j
		CMP		byte_74		; code used as ind data	at e000
		BEQ		loc_176E37	; code used as ind data	at e000
		BCS		loc_176E48	; code used as ind data	at e000
loc_176E37:				; CODE XREF: sub_176E01+32-j
		INY				; code used as ind data	at e000
		JMP		loc_176E19	; code used as ind data	at e000
loc_176E3B:				; CODE XREF: sub_176E01+20-j
		LDA		byte_79		; code used as ind data	at e000
		AND		#$1F		; code used as ind data	at e000
		CMP		#8		; code used as ind data	at e000
		BCC		loc_176E27	; code used as ind data	at e000
		LDA		#0		; code used as ind data	at e000
		JMP		loc_176E27	; code used as ind data	at e000
loc_176E48:				; CODE XREF: sub_176E01+34-j
		LDX		byte_7A		; code used as ind data	at e000
		LDA		byte_79		; code used as ind data	at e000
		STA		byte_7B,X	; code used as ind data	at e000
		INX				; code used as ind data	at e000
		STX		byte_7A		; code used as ind data	at e000
		CPX		#3		; code used as ind data	at e000
		BEQ		loc_176E5C	; code used as ind data	at e000
		INC		byte_74		; code used as ind data	at e000
		LDA		byte_75		; code used as ind data	at e000
		JMP		loc_176E31	; code used as ind data	at e000
loc_176E5C:				; CODE XREF: sub_176E01+52-j
		JSR		sub_176ED7	; code used as ind data	at e000
		JSR		sub_176EE3	; code used as ind data	at e000
		JSR		sub_176EDD	; code used as ind data	at e000
		LDY		word_7C+1	; code used as ind data	at e000
		JMP		sub_176F29	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176E6A:				; CODE XREF: sub_176DC9+35-j
					; sub_176E6A+21-j
		LDA		(word_6C),Y	; code used as ind data	at e000
		STA		byte_79		; code used as ind data	at e000
		AND		#$E0       ; code used as ind data at e000
		CMP		#$E0       ; code used as ind data at e000
		BEQ		loc_176E8E	; code used as ind data	at e000
		LDA		byte_79		; code used as ind data	at e000
		AND		#$1F		; code used as ind data	at e000
loc_176E78:				; CODE XREF: sub_176E6A+2A-j
					; sub_176E6A+2E-j
		CLC				; code used as ind data	at e000
		ADC		#1		; code used as ind data	at e000
		STA		byte_78		; code used as ind data	at e000
		LDA		byte_75		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		byte_78		; code used as ind data	at e000
		STA		byte_75		; code used as ind data	at e000
loc_176E84:				; CODE XREF: sub_176E6A+42-j
		CMP		byte_74		; code used as ind data	at e000
		BEQ		loc_176E8A	; code used as ind data	at e000
		BCC		loc_176E9B	; code used as ind data	at e000
loc_176E8A:				; CODE XREF: sub_176E6A+1C-j
		DEY				; code used as ind data	at e000
		JMP		sub_176E6A	; code used as ind data	at e000
loc_176E8E:				; CODE XREF: sub_176E6A+8-j
		LDA		byte_79		; code used as ind data	at e000
		AND		#$1F		; code used as ind data	at e000
		CMP		#8		; code used as ind data	at e000
		BCC		loc_176E78	; code used as ind data	at e000
		LDA		#0		; code used at e000
		JMP		loc_176E78	; code used as ind data	at e000
loc_176E9B:				; CODE XREF: sub_176E6A+1E-j
		LDX		byte_7A		; code used as ind data	at e000
		LDA		byte_79		; code used as ind data	at e000
		STA		byte_7B,X	; code used as ind data	at e000
		INX				; code used as ind data	at e000
		STX		byte_7A		; code used as ind data	at e000
		CPX		#3		; code used as ind data	at e000
		BEQ		loc_176EAF	; code used as ind data	at e000
		DEC		byte_74		; code used as ind data	at e000
		LDA		byte_75		; code used as ind data	at e000
		JMP		loc_176E84	; code used as ind data	at e000
loc_176EAF:				; CODE XREF: sub_176E6A+3C-j
		JSR		sub_176EC3	; code used as ind data	at e000
		JSR		sub_176ECF	; code used as ind data	at e000
		JSR		sub_176EC9	; code used as ind data	at e000
		LDX		byte_7B		; code used as ind data	at e000
		LDY		word_7C+1	; code used as ind data	at e000
		STX		word_7C+1	; code used as ind data	at e000
		STY		byte_7B		; code used as ind data	at e000
		JMP		sub_176F29	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176EC3:				; CODE XREF: sub_176E6A:loc_176EAF-p
		INC		word_4A+1	; code used as ind data	at e000
		LDX		#0		; code used as ind data	at e000
		BEQ		sub_176EE9	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176EC9:				; CODE XREF: sub_176E6A+4B-p
		INC		word_4A+1	; code used as ind data	at e000
		LDX		#1		; code used as ind data	at e000
		BNE		sub_176EE9	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176ECF:				; CODE XREF: sub_176E6A+48-p
		DEC		word_4A+1	; code used as ind data	at e000
		DEC		word_4A+1	; code used as ind data	at e000
		LDX		#2		; code used as ind data	at e000
		BNE		sub_176EE9	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176ED7:				; CODE XREF: sub_176E01:loc_176E5C-p
		DEC		word_4A+1	; code used as ind data	at e000
		LDX		#0		; code used as ind data	at e000
		BEQ		sub_176EE9	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176EDD:				; CODE XREF: sub_176E01+61-p
		DEC		word_4A+1	; code used as ind data	at e000
		LDX		#1		; code used as ind data	at e000
		BNE		sub_176EE9	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176EE3:				; CODE XREF: sub_176E01+5E-p
		INC		word_4A+1	; code used as ind data	at e000
		INC		word_4A+1	; code used as ind data	at e000
		LDX		#2		; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176EE9:				; CODE XREF: sub_176EC3+4-j
					; sub_176EC9+4-j sub_176ECF+6-j
					; sub_176ED7+4-j sub_176EDD+4-j
		LDA		byte_7B,X	; code used as ind data	at e000
		AND		#$E0       ; code used as ind data at e000
		CMP		#$E0       ; code used as ind data at e000
		BEQ		loc_176EF9	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ROL		; code used as ind data	at e000
		ROL		; code used as ind data	at e000
		ROL		; code used as ind data	at e000
		ROL		; code used as ind data	at e000
		JMP		loc_176F03	; code used as ind data	at e000
loc_176EF9:				; CODE XREF: sub_176EE9+6-j
		LDA		byte_7B,X	; code used as ind data	at e000
		AND		#$1F		; code used as ind data	at e000
		CMP		#8		; code used as ind data	at e000
		BCS		loc_176F03	; code used at e000
		LDA		#7		; code used at e000
loc_176F03:				; CODE XREF: sub_176EE9+D-j
					; sub_176EE9+16-j
		STA		byte_78,X	; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		LDA		byte_4C		; code used as ind data	at e000
		BNE		sub_176F1A	; code used as ind data	at e000
		PLA				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176F0B:				; CODE XREF: sub_176D3F+3A-p
		JSR		sub_176FDF	; code used as ind data	at e000
		JSR		sub_17707A	; code used as ind data	at e000
		JSR		sub_1770A0	; code used as ind data	at e000
		JSR		sub_1770D0	; code used as ind data	at e000
		STA		byte_7B,X	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176F1A:				; CODE XREF: sub_176EE9+1F-j
		PLA				; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176F1C:				; CODE XREF: sub_176CB9+6-p sub_176D3F-p
		LDA		#0		; code used as ind data	at e000
		STA		byte_7A		; code used as ind data	at e000
		STA		byte_7B		; code used as ind data	at e000
		STA		word_7C		; code used as ind data	at e000
		STA		word_7C+1	; code used as ind data	at e000
		STA		byte_4C		; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176F29:				; CODE XREF: sub_176E01+66-j
					; sub_176E6A+56-j
		LDX		byte_643	; code used as ind data	at e000
		STX		word_6C+1	; code used as ind data	at e000
		LDX		byte_642	; code used as ind data	at e000
		STX		word_6C		; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176F34:				; CODE XREF: sub_1280A6+26C-P
					; sub_128BF0+33-P _bC_s4+8C-P
					; _bC_s4+97-P _bC_s4+A2-P _bC_s4+AD-P
					; sub_129446+16-P sub_129446+2F-P
					; sub_1294A8+12-P sub_1294D0+22-P
					; sub_129600+4-P sub_12A133+4-P
					; _bD_sE+1D-P sub_141831+3-P
					; sub_141B50+A0-P sub_141C1C+30-P
					; _bD_sD+3F-P _bD_sD+4A-P
					; sub_158203+13-P sub_158203+64-P
					; sub_158678+F-P _bE_s21+20-P
					; sub_17532D+4-p sub_175467+27-p
					; sub_1757B6+4-p sub_175F30+6-j
					; sub_177116+B9-p sub_177619+4-p
		STX		byte_74		; code used as ind data	at e000
		STY		byte_77		; code used at e000
		JSR		sub_176F56	; code used as ind data	at e000
		STA		word_7C		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176F3E:				; CODE XREF: sub_176CB9+11-j
		DEC		byte_74		; code used as ind data	at e000
		JSR		sub_176F56	; code used as ind data	at e000
		STA		byte_7B		; code used as ind data	at e000
		INC		byte_74		; code used as ind data	at e000
		JSR		sub_176F56	; code used as ind data	at e000
		STA		word_7C		; code used as ind data	at e000
		INC		byte_74		; code used as ind data	at e000
		JSR		sub_176F56	; code used as ind data	at e000
		STA		word_7C+1	; code used as ind data	at e000
		LDA		word_7C		; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176F56:				; CODE XREF: sub_176F34+4-p
					; sub_176F3E+2-p sub_176F3E+9-p
					; sub_176F3E+10-p
		DEC		byte_88		; code used as ind data	at e000
		LDA		byte_88		; code used as ind data	at e000
		INC		byte_88		; code used as ind data	at e000
		CMP		byte_74		; code used as ind data	at e000
		BCC		loc_176F6D	; code used as ind data	at e000
		DEC		byte_89		; code used as ind data	at e000
		LDA		byte_89		; code used as ind data	at e000
		INC		byte_89		; code used as ind data	at e000
		CMP		byte_77		; code used as ind data	at e000
		BCC		loc_176F6D	; code used as ind data	at e000
		JMP		sub_176FB2	; code used as ind data	at e000
loc_176F6D:				; CODE XREF: sub_176F56+8-j
					; sub_176F56+12-j
		LDA		byte_9A		; code used as ind data	at e000
		CMP		#9		; code used as ind data	at e000
		BCS		loc_176F9F	; code used as ind data	at e000
		LDA		byte_8A		; code used as ind data	at e000
		CMP		#$19		; code used as ind data	at e000
		BEQ		loc_176F8A	; code used as ind data	at e000
		LDA		byte_8B		; code used as ind data	at e000
		CMP		#$A		; code used as ind data	at e000
		BNE		loc_176F9F	; code used as ind data	at e000
		LDA		byte_77
		CMP		#$15
		BCC		loc_176F9F
		BMI		loc_176F9F
		LDA		#$1C
		RTS
loc_176F8A:				; CODE XREF: sub_176F56+21-j
		LDA		byte_74		; code used as ind data	at e000
		AND		#7		; code used as ind data	at e000
		TAX				; code used at e000
		LDA		byte_77		; code used as ind data	at e000
		AND		#7		; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		LDA		byte_176FA2,X	; code used as ind data	at e000
		AND		byte_176FAA,Y	; code used as ind data	at e000
		BNE		loc_176F9F	; code used as ind data	at e000
		LDA		#$1A		; code used as ind data	at e000
		RTS				; code used at e000
loc_176F9F:				; CODE XREF: sub_176F56+1B-j
					; sub_176F56+27-j sub_176F56+2D-j
					; sub_176F56+2F-j sub_176F56+44-j
		LDA		byte_8A		; code used as ind data	at e000
		RTS				; code used as ind data	at e000
byte_176FA2:
		.BYTE	1,  2,	4,  8,$10,$20,$40,$80 ;	DATA XREF: sub_176F56+3E-r
					; data used at e000
byte_176FAA:
		.BYTE $44,$EE,$EE,$44,$11,$BB,$BB,$11 ;	DATA XREF: sub_176F56+41-r
					; data used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176FB2:				; CODE XREF: sub_176F56+14-j
		LDA		#0		; code used as ind data	at e000
		STA		byte_25		; code used as ind data	at e000
		LDA		byte_88		; code used as ind data	at e000
		STA		byte_24		; code used as ind data	at e000
		LDX		#byte_24	; code used as ind data	at e000
		LDY		byte_77		; code used as ind data	at e000
		INY				; code used as ind data	at e000
		TYA				; code used as ind data	at e000
		JSR		_mul16_to_8	; code used as ind data	at e000
		LDX		#byte_24	; code used as ind data	at e000
		LDA		byte_88		; code used as ind data	at e000
		JSR		_add_8_to_neg16	; code used as ind data	at e000
		LDA		byte_74		; code used as ind data	at e000
		LDX		#byte_24	; code used as ind data	at e000
		JSR		_add8_to_16	; code used as ind data	at e000
		LDY		#byte_74	; code used as ind data	at e000
		LDA		#0		; code used as ind data	at e000
		LDX		#byte_24	; code used as ind data	at e000
		JSR		_add_16_to_16	; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		LDA		(byte_24),Y	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176FDF:				; CODE XREF: sub_176F0B-p
		CMP		#1		; code used as ind data	at e000
		BNE		loc_176FFA	; code used as ind data	at e000
		PHA				; code used at e000
		LDA		byte_2F		; code used as ind data	at e000
		AND		#2		; code used as ind data	at e000
		BNE		loc_176FF8	; code used as ind data	at e000
		LDA		byte_77		; code used as ind data	at e000
		CMP		#$64       ; code used at e000
		BCC		loc_176FF4	; code used as ind data	at e000
		CMP		#$E6       ; code used as ind data at e000
		BCC		loc_176FF8	; code used as ind data	at e000
loc_176FF4:				; CODE XREF: sub_176FDF+F-j
		PLA				; code used at e000
		LDA		#$1E		; code used at e000
		RTS				; code used at e000
loc_176FF8:				; CODE XREF: sub_176FDF+9-j
					; sub_176FDF+13-j sub_176FDF+20-j
					; sub_176FDF+25-j sub_176FDF+2B-j
					; sub_176FDF+35-j sub_176FDF+39-j
		PLA				; code used as ind data	at e000
locret_176FF9:				; CODE XREF: sub_176FDF+2E-j
		RTS				; code used as ind data	at e000
loc_176FFA:				; CODE XREF: sub_176FDF+2-j
		PHA				; code used as ind data	at e000
		LDA		byte_2F		; code used as ind data	at e000
		AND		#2		; code used as ind data	at e000
		BEQ		loc_176FF8	; code used as ind data	at e000
		LDA		byte_60B6	; code used as ind data	at e000
		BPL		loc_176FF8	; code used as ind data	at e000
		LDA		byte_77		; code used as ind data	at e000
		CMP		#$3A       ; code used as ind data at e000
		BNE		loc_176FF8	; code used as data at e000
		PLA				; code used as data at e000
		BNE		locret_176FF9	; code used as data at e000
		PHA				; code used as data at e000
		LDA		byte_74		; code used as data at e000
		CMP		#$52       ; code used as data at e000
		BCC		loc_176FF8	; code used as data at e000
		CMP		#$55       ; code used as data at e000
		BCS		loc_176FF8	; code used as data at e000
		PLA				; code used as data at e000
		LDA		#$1B		; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_17701E:				; CODE XREF: sub_176CB9+45-p
					; sub_176CB9+4B-p sub_176CB9+51-p
					; sub_176D12:loc_176D34-p
		CPX		#$9D       ; pcm data
		BEQ		loc_177026	; pcm data
		BCS		loc_177037	; pcm data
		BCC		loc_17703A	; pcm data
loc_177026:				; CODE XREF: sub_17701E+2-j
		LDA		#$31       ; pcm data
		CPY		#0		; pcm data
		BEQ		locret_177036	; pcm data
		LDA		#$36       ; pcm data
		CPY		#$85       ; pcm data
		BEQ		locret_177036	; pcm data
		BCS		loc_177037	; pcm data
		LDA		#$33       ; pcm data
locret_177036:				; CODE XREF: sub_17701E+C-j
					; sub_17701E+12-j
		RTS				; pcm data
loc_177037:				; CODE XREF: sub_17701E+4-j
					; sub_17701E+14-j sub_17701E+20-j
		LDA		#$1D		; pcm data
		RTS				; pcm data
loc_17703A:				; CODE XREF: sub_17701E+6-j
		CPY		#$85       ; pcm data
		BEQ		loc_177042	; pcm data
		BCS		loc_177037	; pcm data
		BCC		loc_177051	; pcm data
loc_177042:				; CODE XREF: sub_17701E+1E-j
		LDA		#$34       ; pcm data
		CPX		#0		; pcm data
		BEQ		locret_177050	; pcm data
		LDA		#$36       ; pcm data
		CPX		#$9D       ; pcm data
		BEQ		locret_177050	; pcm data
		LDA		#$35       ; pcm data
locret_177050:				; CODE XREF: sub_17701E+28-j
					; sub_17701E+2E-j
		RTS				; pcm data
loc_177051:				; CODE XREF: sub_17701E+22-j
		CPX		#0		; pcm data
		BNE		loc_177064	; pcm data
		LDA		#$2F       ; pcm data
		CPY		#0		; pcm data
		BEQ		locret_177063	; pcm data
		LDA		#$34       ; pcm data
		CPY		#$85       ; pcm data
		BEQ		locret_177063	; pcm data
		LDA		#$32       ; pcm data
locret_177063:				; CODE XREF: sub_17701E+3B-j
					; sub_17701E+41-j
		RTS				; pcm data
loc_177064:				; CODE XREF: sub_17701E+35-j
		CPY		#0		; pcm data
		BNE		loc_177077	; pcm data
		LDA		#$2F       ; pcm data
		CPX		#0		; pcm data
		BEQ		locret_177076	; pcm data
		LDA		#$31       ; pcm data
		CPX		#$9D       ; pcm data
		BEQ		locret_177076	; pcm data
		LDA		#$30       ; pcm data
locret_177076:				; CODE XREF: sub_17701E+4E-j
					; sub_17701E+54-j
		RTS				; pcm data
loc_177077:				; CODE XREF: sub_17701E+48-j
		LDA		#0		; pcm data
		RTS				; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_17707A:				; CODE XREF: sub_176F0B+3-p
		PHA				; code used as ind data	at e000
		LDA		byte_60B6	; code used as ind data	at e000
		AND		#8		; code used as ind data	at e000
		BNE		loc_177084	; code used as ind data	at e000
loc_177082:				; CODE XREF: sub_17707A+12-j
					; sub_17707A+16-j sub_17707A+1C-j
					; sub_17707A+20-j
		PLA				; code used as ind data	at e000
locret_177083:				; CODE XREF: sub_17707A+B-j
		RTS				; code used as ind data	at e000
loc_177084:				; CODE XREF: sub_17707A+6-j
		PLA				; pcm data
		BNE		locret_177083	; pcm data
		PHA				; pcm data
		LDA		word_4A+1	; pcm data
		CMP		#$46       ; pcm data
		BCC		loc_177082	; pcm data
		CMP		#$49       ; pcm data
		BCS		loc_177082	; pcm data
		LDA		byte_77		; pcm data
		CMP		#$91       ; pcm data
		BCC		loc_177082	; pcm data
		CMP		#$95       ; pcm data
		BCS		loc_177082	; pcm data
		PLA				; pcm data
loc_17709D:				; CODE XREF: sub_1770D0+B-j
					; sub_1770D0+F-j sub_1770D0+13-j
					; sub_1770D0+17-j
		LDA		#1		; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1770A0:				; CODE XREF: sub_176F0B+6-p
		PHA				; code used as ind data	at e000
		LDA		byte_60B6	; code used as ind data	at e000
		AND		#4		; code used as ind data	at e000
		BNE		loc_1770AA	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_1770AA:				; CODE XREF: sub_1770A0+6-j
		PLA				; pcm data
		CMP		#$17		; pcm data
		BEQ		loc_1770B0	; pcm data
		RTS				; pcm data
loc_1770B0:				; CODE XREF: sub_1770A0+D-j
		LDA		byte_77		; pcm data
		CMP		#$39       ; pcm data
		BEQ		loc_1770CA	; pcm data
		CMP		#$3B       ; pcm data
		BEQ		loc_1770CD	; pcm data
		CMP		#$3A       ; pcm data
		BNE		loc_1770C7	; pcm data
		LDA		word_4A+1	; pcm data
		CMP		#$A2       ; pcm data
		BNE		loc_1770CA	; pcm data
		LDA		#$15		; pcm data
		RTS				; pcm data
loc_1770C7:				; CODE XREF: sub_1770A0+1C-j
		LDA		#$17		; pcm data
		RTS				; pcm data
loc_1770CA:				; CODE XREF: sub_1770A0+14-j
					; sub_1770A0+22-j
		LDA		#6		; pcm data
		RTS				; pcm data
loc_1770CD:				; CODE XREF: sub_1770A0+18-j
		LDA		#0		; pcm data
		RTS				; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_1770D0:				; CODE XREF: sub_176F0B+9-p
		PHA				; code used as ind data	at e000
		LDA		byte_60C5	; code used as ind data	at e000
		BMI		loc_1770D8	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_1770D8:				; CODE XREF: sub_1770D0+4-j
		PLA				; code used as data at e000
		CMP		#8		; code used as ind data	at e000
		BEQ		loc_17709D	; code used as data at e000
		CMP		#9		; code used as data at e000
		BEQ		loc_17709D	; code used as data at e000
		CMP		#$C		; code used as data at e000
		BEQ		loc_17709D	; code used as ind data	at e000
		CMP		#$D		; code used as data at e000
		BEQ		loc_17709D	; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1770EA:				; CODE XREF: sub_177116+4-j
		LDA		byte_90		; code used as ind data	at e000
		LDX		#0		; code used as data at e000
		AND		#$F		; code used as ind data	at e000
		CMP		#1		; code used as ind data	at e000
		BEQ		loc_1770FA	; code used as ind data	at e000
		LDX		#8		; code used as ind data	at e000
		CMP		#2		; code used as ind data	at e000
		BNE		locret_177112	; code used as data at e000
loc_1770FA:				; CODE XREF: sub_1770EA+8-j
		STX		word_72		; code used as data at e000
		LDA		#1		; code used as data at e000
		STA		word_72+1	; code used as data at e000
		LDA		byte_AC		; code used as data at e000
		AND		#$1F		; code used as data at e000
		BEQ		loc_177109	; code used as data at e000
		JMP		sub_177295	; pcm data
loc_177109:				; CODE XREF: sub_1770EA+1A-j
		JSR		sub_177113	; code used as data at e000
		JSR		sub_177113	; code used as data at e000
		JMP		sub_177295	; code used as data at e000
locret_177112:				; CODE XREF: sub_1770EA+E-j
					; sub_177116+A-j sub_177116+E-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177113:				; CODE XREF: sub_1770EA:loc_177109-p
					; sub_1770EA+22-p
		JMP		loc_1771A4	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177116:				; CODE XREF: sub_15B9FA+7-P
					; sub_15B9FA+C-P sub_174D56+21-p
		LDA		byte_2F		; code used as ind data	at e000
		AND		#1		; code used as data at e000
		BEQ		sub_1770EA	; code used as ind data	at e000
		LDA		byte_90		; code used as ind data	at e000
		AND		#$F		; code used as ind data	at e000
		BEQ		locret_177112	; code used as data at e000
		CMP		#$F		; code used as data at e000
		BEQ		locret_177112	; code used as data at e000
		SEC				; code used as data at e000
		SBC		#1		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		STA		word_72		; code used as ind data	at e000
		LDA		#1		; code used as data at e000
		STA		word_72+1	; code used as data at e000
		JSR		loc_177135	; code used as data at e000
loc_177135:				; code used as data at e000
		LDA		byte_176
		BEQ		loc_17714D	; code used as data at e000
		LDX		#0		; code used as data at e000
loc_17713C:				; CODE XREF: sub_177116+35-j
		LDA		byte_177,X	; code used as data at e000
		BEQ		loc_177148	; code used as data at e000
		CMP		word_72		; code used as data at e000
		BNE		loc_177148	; code used as data at e000
		JMP		sub_177204	; code used as data at e000
loc_177148:				; CODE XREF: sub_177116+29-j
					; sub_177116+2D-j
		INX				; code used as data at e000
		CPX		#4		; code used as data at e000
		BNE		loc_17713C	; code used as data at e000
loc_17714D:				; CODE XREF: sub_177116+22-j
		LDY		#2		; code used as ind data	at e000
		LDA		(word_72),Y	; code used as ind data	at e000
		CMP		#$FF		; code used as data at e000
		BNE		loc_177159	; code used as ind data	at e000
		RTS				; code used as data at e000
loc_177156:				; CODE XREF: sub_177116+6B-j
					; sub_177116+70-j
		JMP		sub_1771F8	; code used as data at e000
loc_177159:				; CODE XREF: sub_177116+3D-j
		LDY		#0		; code used as data at e000
		LDA		(word_72),Y	; code used as data at e000
		TAX				; code used as data at e000
		STX		byte_80		; code used as data at e000
		INY				; code used as data at e000
		LDA		(word_72),Y	; code used as data at e000
		TAY				; code used as data at e000
		STY		byte_81		; code used as data at e000
		LDA		byte_90		; code used as data at e000
		AND		#$F		; code used as data at e000
		CMP		#1		; code used as data at e000
		BEQ		loc_17718A	; code used as data at e000
		CMP		#2		; code used as data at e000
		BEQ		loc_17718A	; code used as data at e000
		LDA		byte_8B		; code used as data at e000
		CMP		#$B		; code used as data at e000
		BEQ		loc_17717C	; code used as data at e000
		CMP		#$78       ; code used as data at e000
		BNE		loc_177183	; code used as data at e000
loc_17717C:				; CODE XREF: sub_177116+60-j
		LDA		byte_60B7	; code used as data at e000
		AND		#4		; code used as data at e000
		BEQ		loc_177156	; code used as data at e000
loc_177183:				; CODE XREF: sub_177116+64-j
		JSR		sub_1777C2	; code used as data at e000
		BCC		loc_177156	; code used as data at e000
		BCS		loc_1771C5	; code used as data at e000
loc_17718A:				; CODE XREF: sub_177116+56-j
					; sub_177116+5A-j
		LDA		byte_AC		; code used as data at e000
		AND		#$1F		; code used as ind data	at e000
		BNE		sub_1771F8	; code used as data at e000
		LDA		byte_2C		; code used as data at e000
		BEQ		loc_1771A4	; code used as data at e000
		LDA		byte_8F		; pcm data
		BNE		loc_1771A4	; pcm data
		LDA		word_72		; pcm data
		CMP		#4		; pcm data
		BNE		sub_1771F8	; pcm data
		LDA		#$10		; pcm data
		STA		word_72		; pcm data
		BNE		loc_1771C5	; pcm data
loc_1771A4:				; CODE XREF: sub_177113-j
					; sub_177116+7C-j sub_177116+80-j
		LDA		word_72		; code used as data at e000
		LSR		; code used as data at e000
		TAX				; code used as data at e000
		LDA		byte_73C,X	; code used as data at e000
		BPL		sub_1771F8	; code used as ind data	at e000
		LDA		byte_73D,X	; code used as data at e000
		AND		#$40       ; code used as ind data at e000
		BEQ		loc_1771C5	; code used as data at e000
		LDA		byte_645	; code used as data at e000
		PHA				; code used as data at e000
		LDA		#0		; code used as data at e000
		STA		byte_645	; code used as data at e000
		JSR		sub_1771F5	; code used as data at e000
		PLA				; code used as data at e000
		STA		byte_645	; code used as data at e000
		RTS				; code used as data at e000
loc_1771C5:				; CODE XREF: sub_177116+72-j
					; sub_177116+8C-j sub_177116+9C-j
		LDA		word_72		; code used as ind data	at e000
		CMP		#$10		; code used as ind data	at e000
		BCC		sub_1771F5	; code used as data at e000
		LDX		byte_80		; code used as data at e000
		LDY		byte_81		; code used as data at e000
		JSR		sub_176F34	; code used as data at e000
		AND		#$E0       ; code used as data at e000
		CMP		byte_8C		; code used as data at e000
		BNE		sub_1771F8	; code used as data at e000
		LDA		byte_8E		; code used as data at e000
		BPL		sub_1771F5	; code used as data at e000
		LDA		byte_80		; code used as data at e000
		SEC				; code used as data at e000
		SBC		byte_30		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#8		; code used as data at e000
		STA		word_4		; code used as data at e000
		LDA		byte_81		; code used as data at e000
		SEC				; code used as data at e000
		SBC		byte_31		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#7		; code used as data at e000
		STA		word_4+1	; code used as data at e000
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		BCS		sub_1771F8	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1771F5:				; CODE XREF: sub_177116+A7-p
					; sub_177116+B3-j sub_177116+C4-j
		JSR		sub_177259	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1771F8:				; CODE XREF: sub_177116:loc_177156-j
					; sub_177116+78-j sub_177116+86-j
					; sub_177116+95-j sub_177116+C0-j
					; sub_177116+DD-j sub_177200+1-j
					; sub_177204+52-j
		LDA		word_72		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#4		; code used as data at e000
		STA		word_72		; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177200:				; CODE XREF: sub_177204+12-j
		PLA				; pcm data
		JMP		sub_1771F8	; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_177204:				; CODE XREF: sub_177116+2F-j
		TXA				; code used as data at e000
		PHA				; code used as data at e000
		LDY		#0		; code used as data at e000
		LDA		(word_72),Y	; code used as data at e000
		TAX				; code used as data at e000
		STX		byte_80		; code used as data at e000
		INY				; code used as data at e000
		LDA		(word_72),Y	; code used as data at e000
		TAY				; code used as data at e000
		STY		byte_81		; code used as data at e000
		JSR		sub_1777C2	; code used as data at e000
		BCC		sub_177200	; code used as data at e000
		LDY		#2		; code used as data at e000
		LDA		(word_72),Y	; code used as data at e000
		AND		#$F		; code used as data at e000
		JSR		sub_1778D7	; code used as data at e000
		LDY		#3		; code used as data at e000
		LDA		(word_72),Y	; code used as data at e000
		JSR		sub_177909	; code used as data at e000
		PLA				; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		TAX				; code used as data at e000
		LDA		byte_74		; code used as data at e000
		STA		byte_181,X	; code used as data at e000
		LDA		byte_75		; code used as data at e000
		STA		byte_182,X	; code used as data at e000
		LDA		byte_76		; code used as data at e000
		STA		byte_185,X	; code used as data at e000
		LDA		byte_77		; code used as data at e000
		STA		byte_186,X	; code used as data at e000
		LDA		byte_78		; code used as data at e000
		STA		byte_189,X	; code used as data at e000
		LDA		byte_79		; code used as data at e000
		STA		byte_18A,X	; code used as data at e000
		LDA		byte_7A		; code used as data at e000
		STA		byte_18D,X	; code used as data at e000
		LDA		byte_7B		; code used as data at e000
		STA		byte_18E,X	; code used as data at e000
		JMP		sub_1771F8	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177259:				; CODE XREF: _bE_s22:loc_15B02D-P
					; _bE_s32:loc_15B067-P sub_1771F5-p
		LDY		#2		; code used as data at e000
		LDA		(word_72),Y	; code used as ind data	at e000
		AND		#$F		; code used as data at e000
		JSR		sub_1778D7	; code used as data at e000
		LDY		#3		; code used as data at e000
		LDA		(word_72),Y	; code used as data at e000
		PHA				; code used as data at e000
		LDY		byte_6E1	; code used as data at e000
		CPY		#7		; code used as data at e000
		BCC		loc_177274	; code used as data at e000
		CPY		#$A		; code used as data at e000
		BCS		loc_177274	; code used as data at e000
		LDA		#2		; pcm data
loc_177274:				; CODE XREF: sub_177259+13-j
					; sub_177259+17-j
		JSR		sub_177909	; code used as data at e000
		PLA				; code used as data at e000
		AND		#$3C       ; code used as data at e000
		TAY				; code used as data at e000
		BNE		loc_177282	; code used as data at e000
		LDA		word_72		; code used as data at e000
		BEQ		loc_177282	; code used as data at e000
		RTS				; code used as data at e000
loc_177282:				; CODE XREF: sub_177259+22-j
					; sub_177259+26-j
		JSR		sub_177385	; code used as data at e000
		JMP		sub_17732F	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
; unused
nullsub_21:
		RTS				; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_177289:				; CODE XREF: _bD_sD:loc_141DB9-P
					; sub_177613-p
		LDA		word_6C		; code used as ind data	at e000
		CLC				; code used as data at e000
		ADC		#4		; code used as data at e000
		STA		word_6C		; code used as data at e000
		BCC		locret_177294	; code used as data at e000
		INC		word_6C+1	; pcm data
locret_177294:				; CODE XREF: sub_177289+7-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177295:				; CODE XREF: sub_1770EA+1C-j
					; sub_1770EA+25-j
		LDA		byte_2C		; code used as data at e000
		CMP		#1		; code used as data at e000
		BEQ		loc_1772A8	; code used as data at e000
		LDX		byte_2D		; code used as data at e000
		STX		byte_80		; code used as data at e000
		LDY		byte_2E		; code used as data at e000
		STY		byte_81		; code used as data at e000
		JSR		sub_1777B7	; code used as data at e000
		BCC		loc_1772C3	; code used as data at e000
loc_1772A8:				; CODE XREF: sub_177295+4-j
		LDA		byte_2A		; pcm data
		STA		byte_80		; pcm data
		LDA		byte_2B		; pcm data
		STA		byte_81		; pcm data
		LDA		#4		; pcm data
		JSR		sub_1778D7	; pcm data
		LDA		byte_6BA	; pcm data
		JSR		sub_177909	; pcm data
		JSR		sub_177385	; pcm data
		LDY		#$10		; pcm data
		JSR		sub_17732F	; pcm data
loc_1772C3:				; CODE XREF: sub_177295+11-j
		JSR		sub_1772F4	; code used as data at e000
		JSR		sub_1772CC	; code used as data at e000
		JSR		sub_177305	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1772CC:				; CODE XREF: sub_177295+31-p
		LDA		byte_2F		; code used as data at e000
		AND		#2		; code used as data at e000
		BNE		locret_1772F3	; code used as data at e000
		LDA		byte_2C		; code used as data at e000
		BNE		loc_1772DF	; code used as data at e000
		STX		byte_80		; code used as data at e000
		STY		byte_81		; code used as data at e000
		JSR		sub_1777B7	; code used as data at e000
		BCC		locret_1772F3	; code used as data at e000
loc_1772DF:				; CODE XREF: sub_1772CC+8-j
		LDA		word_3C		; pcm data
		JSR		sub_1778D7	; pcm data
		LDA		word_3E		; pcm data
		AND		#3		; pcm data
		JSR		sub_177909	; pcm data
		JSR		sub_177385	; pcm data
		LDY		word_3C+1	; pcm data
		JSR		sub_17732F	; pcm data
locret_1772F3:				; CODE XREF: sub_1772CC+4-j
					; sub_1772CC+11-j
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1772F4:				; CODE XREF: _bD_s1C-P
					; sub_177295:loc_1772C3-p sub_1773A6+9-p
		LDX		byte_9B		; code used as data at e000
		LDY		byte_9C		; code used as data at e000
		LDA		#4		; code used as data at e000
		STA		word_3C		; code used as data at e000
		LDA		#$14		; code used as ind data	at e000
		STA		word_3C+1	; code used as data at e000
		LDA		byte_9D		; code used as data at e000
		STA		word_3E		; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177305:				; CODE XREF: _bD_s1C:_bD_s1D-P
					; sub_177295+34-p sub_1773A6+F-p
		LDA		#5		; code used as data at e000
		STA		word_3C		; code used as data at e000
		LDX		#$18		; code used as data at e000
		LDA		byte_2C		; code used as ind data	at e000
		CMP		#2		; code used as data at e000
		BNE		loc_177313	; code used as data at e000
		LDX		#0		; pcm data
loc_177313:				; CODE XREF: sub_177305+A-j
		STX		word_3C+1	; code used as data at e000
		LDX		byte_9E		; code used as data at e000
		LDY		byte_9F		; code used as data at e000
		LDA		byte_A0		; code used as data at e000
		STA		word_3E		; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_17731E:				; CODE XREF: _bD_s1A+9-J _bD_s1E+4C-P
					; _bD_s1C+2C-P
		LDX		#4		; code used as ind data	at e000
		JSR		sub_174204	; code used as data at e000
		INY				; code used as ind data	at e000
		JSR		sub_174204	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		JSR		sub_174204	; code used as data at e000
		INY				; code used as ind data	at e000
		JMP		sub_174204	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_17732F:				; CODE XREF: _bD_sA+A-J	_bD_sE+62-P
					; sub_177259+2C-j sub_177295+2B-p
					; sub_1772CC+24-p
		LDX		#4		; code used as data at e000
		JSR		sub_1741F9	; code used as data at e000
		LDY		_tmp21		; code used as data at e000
		LDA		_spr_ram+4,Y	; code used as data at e000
		AND		_spr_ram+7,Y	; code used as ind data	at e000
		CMP		#$F8       ; code used as ind data at e000
		BEQ		loc_17734A	; code used as ind data	at e000
		LDA		byte_9		; code used as data at e000
		STA		_spr_ram+5,Y	; code used as data at e000
		LDA		byte_A		; code used as data at e000
		STA		_spr_ram+6,Y	; code used as data at e000
loc_17734A:				; CODE XREF: sub_17732F+F-j
		LDA		_spr_ram+8,Y	; code used as data at e000
		AND		_spr_ram+$B,Y	; code used as data at e000
		CMP		#$F8       ; code used as data at e000
		BEQ		loc_17735E	; code used as data at e000
		LDA		byte_D		; code used as ind data	at e000
		STA		_spr_ram+9,Y	; code used as data at e000
		LDA		byte_E		; code used as data at e000
		STA		_spr_ram+$A,Y	; code used as data at e000
loc_17735E:				; CODE XREF: sub_17732F+23-j
		LDA		_spr_ram+$C,Y	; code used as data at e000
		AND		_spr_ram+$F,Y	; code used as data at e000
		CMP		#$F8       ; code used as data at e000
		BEQ		locret_177372	; code used as data at e000
		LDA		byte_11		; code used as data at e000
		STA		_spr_ram+$D,Y	; code used as ind data	at e000
		LDA		_tmp12		; code used as data at e000
		STA		_spr_ram+$E,Y	; code used as data at e000
locret_177372:				; CODE XREF: sub_17732F+37-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177373:				; CODE XREF: _bD_s1A+6-P _bD_s1E+47-P
					; _bD_s1C+27-P
		LDA		byte_8		; code used as ind data	at e000
		STA		byte_C		; code used as data at e000
		STA		byte_10		; code used as ind data	at e000
		LDA		word_6+1	; code used as ind data	at e000
		STA		byte_F		; code used as data at e000
		LDA		byte_B		; code used as ind data	at e000
		STA		_tmp12+1	; code used as ind data	at e000
		LDA		word_4		; code used as ind data	at e000
		STA		byte_8		; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177385:				; CODE XREF: _bD_sA+7-P	_bD_sE+5F-P
					; sub_177259:loc_177282-p
					; sub_177295+26-p sub_1772CC+1F-p
		LDA		byte_74		; code used as ind data	at e000
		STA		word_4+1	; code used as ind data	at e000
		LDA		byte_75		; code used as ind data	at e000
		STA		word_6		; code used as ind data	at e000
		LDA		byte_76		; code used as ind data	at e000
		STA		byte_9		; code used as ind data	at e000
		LDA		byte_77		; code used as data at e000
		STA		byte_A		; code used as ind data	at e000
		LDA		byte_78		; code used as data at e000
		STA		byte_D		; code used as ind data	at e000
		LDA		byte_79		; code used as data at e000
		STA		byte_E		; code used as ind data	at e000
		LDA		byte_7A		; code used as ind data	at e000
		STA		byte_11		; code used as data at e000
		LDA		byte_7B		; code used as ind data	at e000
		STA		_tmp12		; code used as ind data	at e000
locret_1773A5:				; CODE XREF: sub_1773A6+7-j
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1773A6:				; CODE XREF: sub_174D89:loc_174DBD-j
		JSR		sub_1773CE	; code used as data at e000
		LDA		byte_2F		; code used as data at e000
		AND		#2		; code used as data at e000
		BNE		locret_1773A5	; code used as data at e000
		JSR		sub_1772F4	; code used as data at e000
		JSR		sub_1773B8	; code used as data at e000
		JSR		sub_177305	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1773B8:				; CODE XREF: sub_1773A6+C-p
		STX		byte_80		; code used as data at e000
		STY		byte_81		; code used as data at e000
		LDA		byte_9D		; code used as data at e000
		AND		#3		; code used as data at e000
		STA		byte_78		; code used as data at e000
		LDA		word_3C		; code used as data at e000
		STA		byte_79		; code used as data at e000
		LDA		word_3C+1	; code used as data at e000
		STA		byte_6BB	; code used as data at e000
		JMP		sub_1773E4	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1773CE:				; CODE XREF: sub_1773A6-p
		LDX		byte_2D		; code used as data at e000
		STX		byte_80		; code used as data at e000
		LDY		byte_2E		; code used as data at e000
		STY		byte_81		; code used as data at e000
		LDA		byte_6BA	; code used as data at e000
		STA		byte_78		; code used as data at e000
		LDA		#4		; code used as data at e000
		STA		byte_79		; code used as data at e000
		LDA		#$10		; code used as data at e000
		STA		byte_6BB	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1773E4:				; CODE XREF: sub_1773B8+13-j
		JSR		sub_177832	; code used as data at e000
		BCC		locret_17740C	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1773E9:				; CODE XREF: sub_177619+48-p
		LDA		byte_79		; code used as data at e000
		JSR		sub_1778D7	; code used as data at e000
		LDA		byte_78		; code used as data at e000
		JSR		sub_177909	; code used as data at e000
		LDA		byte_644	; code used as data at e000
		BEQ		loc_17740D	; code used as data at e000
		CMP		#1		; code used as data at e000
		BEQ		loc_17745E	; code used as data at e000
		CMP		#2		; code used as data at e000
		BEQ		loc_177410	; code used as data at e000
		LDA		byte_87		; code used as data at e000
		AND		#7		; code used as data at e000
		BNE		locret_17740C	; code used as data at e000
		LDA		byte_87		; code used as data at e000
		CMP		#$10		; code used as data at e000
		BNE		loc_177413	; code used as data at e000
locret_17740C:				; CODE XREF: sub_1773E4+3-j
					; sub_1773E9+1B-j
		RTS				; code used as data at e000
loc_17740D:				; CODE XREF: sub_1773E9+D-j
		JMP		loc_177484	; code used as data at e000
loc_177410:				; CODE XREF: sub_1773E9+15-j
		JMP		loc_1774E0	; code used as data at e000
loc_177413:				; CODE XREF: sub_1773E9+21-j
		JSR		sub_17787B	; code used as data at e000
		LDA		#0		; code used as data at e000
		STA		word_6+1	; code used as data at e000
		STA		byte_B		; code used as data at e000
		JSR		sub_17775E	; code used as data at e000
		LDX		#2		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
		INY				; code used as data at e000
		LDA		byte_87		; code used as data at e000
		BNE		loc_17742E	; code used as data at e000
		LDX		#0		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
loc_17742E:				; CODE XREF: sub_1773E9+3E-j
					; sub_1773E9+90-j sub_1773E9+98-j
		LDA		byte_74,X	; code used as data at e000
		STA		word_4+1	; code used as data at e000
		LDA		byte_75,X	; code used as data at e000
		STA		word_6		; code used as data at e000
		LDA		byte_78,X	; code used as data at e000
		STA		byte_9		; code used as data at e000
		LDA		byte_79,X	; code used as data at e000
		STA		byte_A		; code used as data at e000
		LDX		#4		; code used as data at e000
		JSR		sub_174204	; code used as data at e000
		LDA		_tmp21		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#8		; code used as data at e000
		TAY				; code used as data at e000
		LDA		byte_8		; code used as data at e000
		STA		_spr_ram,Y	; code used as data at e000
		LDA		byte_9		; code used as data at e000
		STA		_spr_ram+1,Y	; code used as data at e000
		LDA		byte_A		; code used as data at e000
		STA		_spr_ram+2,Y	; code used as data at e000
		LDA		byte_B		; code used as data at e000
		STA		_spr_ram+3,Y	; code used as data at e000
locret_17745D:				; CODE XREF: sub_1773E9+79-j
					; sub_1773E9+9F-j
		RTS				; code used as data at e000
loc_17745E:				; CODE XREF: sub_1773E9+11-j
		LDA		byte_87		; code used as data at e000
		AND		#7		; code used as data at e000
		BEQ		locret_17745D	; code used as data at e000
		JSR		sub_17787B	; code used as data at e000
		LDA		#$FF		; code used as data at e000
		STA		word_6+1	; code used as data at e000
		STA		byte_B		; code used as data at e000
		JSR		sub_17775E	; code used as data at e000
		LDX		#0		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
		LDA		byte_87		; code used as data at e000
		CMP		#$F		; code used as data at e000
		BEQ		loc_17742E	; code used as data at e000
		LDX		#2		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
		INY				; code used as data at e000
		JMP		loc_17742E	; code used as data at e000
loc_177484:				; CODE XREF: sub_1773E9:loc_17740D-j
		LDA		byte_87		; code used as data at e000
		AND		#7		; code used as data at e000
		BNE		locret_17745D	; code used as data at e000
		JSR		sub_1778B5	; code used as data at e000
		LDX		#$F7       ; code used as data at e000
		LDA		byte_2F		; code used as data at e000
		AND		#1		; code used as data at e000
		BEQ		loc_177497	; code used as data at e000
		LDX		#$F3       ; code used as data at e000
loc_177497:				; CODE XREF: sub_1773E9+AA-j
		STX		word_4		; code used as data at e000
		STX		byte_8		; code used as data at e000
		JSR		sub_17775E	; code used as data at e000
		LDX		#4		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
		INY				; code used as data at e000
		INY				; code used as data at e000
		LDA		byte_87		; code used as data at e000
		CMP		#$10		; code used as data at e000
		BEQ		loc_1774B0	; code used as data at e000
		LDX		#0		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
loc_1774B0:				; CODE XREF: sub_1773E9+C0-j
					; sub_1773E9+11A-j sub_1773E9+123-j
		LDA		byte_74,X	; code used as data at e000
		STA		word_4+1	; code used as data at e000
		LDA		byte_75,X	; code used as data at e000
		STA		word_6		; code used as data at e000
		LDA		byte_76,X	; code used as data at e000
		STA		byte_9		; code used as data at e000
		LDA		byte_77,X	; code used as data at e000
		STA		byte_A		; code used as data at e000
		LDX		#4		; code used as data at e000
		JSR		sub_174204	; code used as data at e000
		LDA		_tmp21		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#4		; code used as data at e000
		TAY				; code used as data at e000
		LDA		byte_8		; code used as data at e000
		STA		_spr_ram,Y	; code used as data at e000
		LDA		byte_9		; code used as data at e000
		STA		_spr_ram+1,Y	; code used as data at e000
		LDA		byte_A		; code used as ind data	at e000
		STA		_spr_ram+2,Y	; code used as data at e000
		LDA		byte_B		; code used as data at e000
		STA		_spr_ram+3,Y	; code used as data at e000
locret_1774DF:				; CODE XREF: sub_1773E9+FB-j
		RTS				; code used as data at e000
loc_1774E0:				; CODE XREF: sub_1773E9:loc_177410-j
		LDA		byte_87		; code used as data at e000
		AND		#7		; code used as data at e000
		BNE		locret_1774DF	; code used as data at e000
		JSR		sub_1778B5	; code used as data at e000
		LDX		#$EF       ; code used as data at e000
		LDA		byte_2F		; code used as data at e000
		AND		#1		; code used as data at e000
		BEQ		loc_1774F3	; code used as data at e000
		LDX		#$EB       ; code used as data at e000
loc_1774F3:				; CODE XREF: sub_1773E9+106-j
		STX		word_4		; code used as data at e000
		STX		byte_8		; code used as data at e000
		JSR		sub_17775E	; code used as data at e000
		LDX		#0		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
		LDA		byte_87		; code used as data at e000
		CMP		#$10		; code used as data at e000
		BEQ		loc_1774B0	; code used as data at e000
		LDX		#4		; code used as data at e000
		LDY		byte_6BB	; code used as data at e000
		INY				; code used as data at e000
		INY				; code used as data at e000
		JMP		loc_1774B0	; code used as data at e000
off_17750F:
		.WORD sub_177570	; DATA XREF: sub_177517+11-r
					; sub_177517+16-r
					; pcm data
		.WORD sub_1775C4	; pcm data
		.WORD sub_1775A3	; pcm data
		.WORD sub_1775F6	; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_177517:				; CODE XREF: sub_174D89+31-j
		LDA		#$FF		; code used as data at e000
		STA		byte_32		; code used as data at e000
		LDA		#$10		; code used as data at e000
		STA		word_6C		; code used as data at e000
		LDA		#1		; code used as data at e000
		STA		word_6C+1	; code used as data at e000
		LDA		byte_644	; code used as data at e000
		ASL		; code used as data at e000
		TAX				; code used as data at e000
		LDA		off_17750F,X	; code used as data at e000
		STA		word_6E		; code used as data at e000
		LDA		off_17750F+1,X	; code used as data at e000
		STA		word_6E+1	; code used as data at e000
		LDA		byte_30		; code used as data at e000
		SEC				; code used as data at e000
		SBC		#8		; code used as data at e000
		STA		byte_639	; code used as data at e000
		BCS		loc_17753E	; code used as data at e000
		LDA		#0		; code used as data at e000
loc_17753E:				; CODE XREF: sub_177517+23-j
		STA		byte_63A	; code used as data at e000
		LDA		byte_30		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#7		; code used as data at e000
		STA		byte_63B	; code used as data at e000
		LDA		byte_31		; code used as data at e000
		SEC				; code used as data at e000
		SBC		#7		; code used as data at e000
		STA		byte_638	; code used as data at e000
		BCS		loc_177555	; code used as data at e000
		LDA		#0		; code used as data at e000
loc_177555:				; CODE XREF: sub_177517+3A-j
		STA		byte_63C	; code used as data at e000
		LDA		byte_31		; code used as data at e000
		CLC				; code used as ind data	at e000
		ADC		#7		; code used as data at e000
		STA		byte_63D	; code used as data at e000
loc_177560:				; CODE XREF: sub_177613+3-j
		LDY		#0		; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		CMP		#$FF		; code used as ind data	at e000
		BNE		loc_17756D	; code used as ind data	at e000
		LDA		#0		; code used as data at e000
		STA		byte_32		; code used as data at e000
		RTS				; code used as data at e000
loc_17756D:				; CODE XREF: sub_177517+4F-j
		JMP		(word_6E)	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177570:				; DATA XREF: BANKF:off_17750F-o
		LDY		#3		; ind code used	as data	at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#$40       ; code used as ind data at e000
		BEQ		loc_177581	; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#3		; code used as data at e000
		BNE		loc_177581	; code used as data at e000
		JMP		sub_177613	; code used as data at e000
loc_177581:				; CODE XREF: sub_177570+6-j
					; sub_177570+C-j
		LDY		#1		; code used as ind data	at e000
		LDA		(word_6C),Y	; code used as data at e000
		STA		byte_81		; code used as data at e000
		CMP		byte_638	; code used as data at e000
		BEQ		loc_17758F	; code used as data at e000
		JMP		sub_177613	; code used as data at e000
loc_17758F:				; CODE XREF: sub_177570+1A-j
					; sub_1775A3+1E-j
		DEY				; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		STA		byte_80		; code used as data at e000
		CMP		byte_63A	; code used as data at e000
		BCC		sub_177613	; code used as data at e000
		CMP		byte_63B	; code used as data at e000
		BEQ		sub_177619	; code used as data at e000
		BCS		sub_177613	; code used as data at e000
		JMP		sub_177619	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1775A3:				; DATA XREF: BANKF:F513-o
		LDY		#3		; ind code used	as data	at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#$40       ; code used as ind data at e000
		BEQ		loc_1775B6	; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#3		; code used as data at e000
		CMP		#2		; code used as data at e000
		BNE		loc_1775B6	; code used as data at e000
		JMP		sub_177613	; code used as data at e000
loc_1775B6:				; CODE XREF: sub_1775A3+6-j
					; sub_1775A3+E-j
		LDY		#1		; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		STA		byte_81		; code used as data at e000
		CMP		byte_63D	; code used as data at e000
		BNE		sub_177613	; code used as data at e000
		JMP		loc_17758F	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1775C4:				; DATA XREF: BANKF:F511-o
		LDY		#3		; ind code used	as data	at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#$40       ; code used as data at e000
		BEQ		loc_1775D7	; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#3		; code used as data at e000
		CMP		#1		; code used as data at e000
		BNE		loc_1775D7	; code used as data at e000
		JMP		sub_177613	; code used as data at e000
loc_1775D7:				; CODE XREF: sub_1775C4+6-j
					; sub_1775C4+E-j
		LDY		#0		; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		STA		byte_80		; code used as data at e000
		CMP		byte_63B	; code used as data at e000
		BNE		sub_177613	; code used as data at e000
loc_1775E2:				; CODE XREF: sub_1775F6+1B-j
		INY				; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		STA		byte_81		; code used as data at e000
		CMP		byte_63C	; code used as data at e000
		BCC		sub_177613	; code used as data at e000
		CMP		byte_63D	; code used as data at e000
		BEQ		sub_177619	; code used as data at e000
		BCS		sub_177613	; code used as data at e000
		JMP		sub_177619	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1775F6:				; DATA XREF: BANKF:F515-o
		LDY		#3		; ind code used	as data	at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#$40       ; code used as data at e000
		BEQ		loc_177608	; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#3		; code used as data at e000
		CMP		#3		; code used as data at e000
		BNE		loc_177608	; code used as data at e000
		BEQ		sub_177613	; code used as data at e000
loc_177608:				; CODE XREF: sub_1775F6+6-j
					; sub_1775F6+E-j
		LDY		#0		; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		STA		byte_80		; code used as data at e000
		CMP		byte_639	; code used as data at e000
		BEQ		loc_1775E2	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177613:				; CODE XREF: sub_177570+E-j
					; sub_177570+1C-j sub_177570+27-j
					; sub_177570+2E-j sub_1775A3+10-j
					; sub_1775A3+1C-j sub_1775C4+10-j
					; sub_1775C4+1C-j sub_1775C4+26-j
					; sub_1775C4+2D-j sub_1775F6+10-j
					; sub_177619+B-j sub_177619+4B-j
		JSR		sub_177289	; code used as data at e000
		JMP		loc_177560	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177619:				; CODE XREF: sub_177570+2C-j
					; sub_177570+30-j sub_1775C4+2B-j
					; sub_1775C4+2F-j
		LDX		byte_80		; code used as data at e000
		LDY		byte_81		; code used as data at e000
		JSR		sub_176F34	; code used as data at e000
		AND		#$E0       ; code used as data at e000
		CMP		byte_8C		; code used as data at e000
		BNE		sub_177613	; code used as data at e000
		LDY		#2		; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#$F		; code used as data at e000
		STA		byte_79		; code used as data at e000
		INY				; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		PHA				; code used as data at e000
		AND		#$83       ; code used as data at e000
		STA		byte_78		; code used as data at e000
		PLA				; code used as data at e000
		AND		#$3C       ; code used as data at e000
		STA		byte_6BB	; code used as data at e000
		LDA		byte_87		; code used as data at e000
		CMP		#9		; code used as data at e000
		BCS		loc_17764D	; code used as data at e000
		CMP		#8		; code used as data at e000
		BNE		loc_177650	; code used as data at e000
		LDA		byte_644	; code used as data at e000
		CMP		#3		; code used as data at e000
		BNE		loc_177650	; code used as data at e000
loc_17764D:				; CODE XREF: sub_177619+27-j
		JSR		sub_177668	; code used as data at e000
loc_177650:				; CODE XREF: sub_177619+2B-j
					; sub_177619+32-j
		LDY		#3		; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		AND		#$C3       ; code used as data at e000
		ORA		byte_6BB	; code used as data at e000
		STA		(word_6C),Y	; code used as data at e000
		LDA		byte_6BB	; code used as data at e000
		BRK
		.BYTE $13, 7		; ofs 0x00080008, -> dst _b5_s4
		JSR		sub_1773E9	; code used as data at e000
		JMP		sub_177613	; code used as data at e000
		RTS				; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_177668:				; CODE XREF: _b6_s1A+F-P
					; _bA_s1:loc_F817B-P _bC_s33-P
					; _bD_sD+53-P sub_177619:loc_17764D-p
		LDA		word_4		; code used as ind data	at e000
		PHA				; code used as data at e000
		LDA		word_4+1	; code used as data at e000
		PHA				; code used as data at e000
		LDA		word_6		; code used as data at e000
		PHA				; code used as data at e000
		LDA		word_6+1	; code used as data at e000
		PHA				; code used as data at e000
		JSR		sub_177684	; code used as data at e000
		PLA				; code used as data at e000
		STA		word_6+1	; code used as data at e000
		PLA				; code used as ind data	at e000
		STA		word_6		; code used as data at e000
		PLA				; code used as data at e000
		STA		word_4+1	; code used as ind data	at e000
		PLA				; code used as data at e000
		STA		word_4		; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177684:				; CODE XREF: sub_177668+C-p
		LDA		byte_175	; code used as data at e000
		STA		word_4		; code used as data at e000
		LDA		byte_174	; code used as ind data	at e000
		STA		word_4+1	; code used as data at e000
		LDX		#0		; code used as data at e000
loc_177690:				; CODE XREF: sub_177684+17-j
		ASL		word_4		; code used as ind data	at e000
		ROL		word_4+1	; code used as ind data	at e000
		BCC		loc_17769D	; code used as ind data	at e000
		INX				; code used as ind data	at e000
		CPX		#$10		; code used as ind data	at e000
		BEQ		loc_1776A4	; code used as data at e000
		BNE		loc_177690	; code used as data at e000
loc_17769D:				; CODE XREF: sub_177684+10-j
		TXA				; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		STA		byte_6BB	; code used as data at e000
		RTS				; code used as data at e000
loc_1776A4:				; CODE XREF: sub_177684+15-j
		LDA		#1		; code used as data at e000
		STA		word_4+1	; code used as data at e000
		LDA		#$10		; code used as data at e000
		STA		word_4		; code used as data at e000
loc_1776AC:				; CODE XREF: sub_177684+38-j
		LDY		#3		; code used as data at e000
		LDA		(word_4),Y	; code used as data at e000
		TAX				; code used as data at e000
		AND		#$40       ; code used as data at e000
		BEQ		loc_1776BF	; code used as data at e000
loc_1776B5:				; CODE XREF: sub_177684+44-j
					; sub_177684+4B-j sub_177684+5B-j
					; sub_177684+62-j sub_177684+6C-j
					; sub_177684+73-j sub_177684+79-j
					; sub_177684+8D-j
		LDA		word_4		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#4		; code used as data at e000
		STA		word_4		; code used as data at e000
		JMP		loc_1776AC	; code used as data at e000
loc_1776BF:				; CODE XREF: sub_177684+2F-j
		TXA				; code used as data at e000
		CMP		#$FF		; code used as data at e000
		BEQ		loc_17772A	; code used as data at e000
		LDA		word_4		; code used as data at e000
		CMP		word_6C		; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		LDY		#0		; code used as data at e000
loc_1776CC:				; CODE XREF: sub_177684+50-j
		CMP		byte_177,Y	; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		INY				; code used as data at e000
		CPY		#4		; code used as data at e000
		BNE		loc_1776CC	; code used as data at e000
		LDA		byte_30		; code used as data at e000
		SEC				; code used as data at e000
		SBC		#8		; code used as data at e000
		LDY		#0		; code used as data at e000
		CMP		(word_4),Y	; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		CLC				; code used as data at e000
		ADC		#$F		; code used as data at e000
		CMP		(word_4),Y	; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		LDA		byte_31		; code used as data at e000
		SEC				; code used as data at e000
		SBC		#7		; code used as data at e000
		INY				; code used as data at e000
		CMP		(word_4),Y	; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		CLC				; code used as data at e000
		ADC		#$E		; code used as data at e000
		CMP		(word_4),Y	; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		TXA				; code used as data at e000
		AND		#$3C       ; code used as data at e000
		TAX				; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		LDY		#0		; code used as data at e000
loc_177701:				; CODE XREF: sub_177684+85-j
		LDA		byte_177,Y	; code used as data at e000
		BNE		loc_17770D	; code used as data at e000
loc_177706:				; CODE XREF: sub_177684+8F-j
		INY				; code used as data at e000
		CPY		#4		; code used as data at e000
		BNE		loc_177701	; code used as data at e000
		BEQ		loc_177715	; code used as data at e000
loc_17770D:				; CODE XREF: sub_177684+80-j
		TXA				; code used as data at e000
		CMP		byte_17B,Y	; code used as data at e000
		BEQ		loc_1776B5	; code used as data at e000
		BNE		loc_177706	; code used as data at e000
loc_177715:				; CODE XREF: sub_177684+87-j
		TXA				; code used as data at e000
		STA		byte_6BB	; code used as data at e000
		INC		byte_176	; code used as data at e000
		LDX		#0		; code used as data at e000
loc_17771E:				; CODE XREF: sub_177684+A4-j
		LDA		byte_177,X	; code used as data at e000
		BEQ		loc_177730	; code used as data at e000
		INX				; code used as data at e000
		CPX		#4		; code used as data at e000
		BEQ		loc_17772A	; code used as data at e000
		BNE		loc_17771E	; code used as data at e000
loc_17772A:				; CODE XREF: sub_177684+3E-j
					; sub_177684+A2-j
		LDA		#$10		; pcm data
		STA		byte_6BB	; pcm data
		RTS				; pcm data
loc_177730:				; CODE XREF: sub_177684+9D-j
		LDA		byte_6BB	; code used as data at e000
		TAY				; code used as data at e000
		STA		byte_17B,X	; code used as data at e000
		TXA				; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		PHA				; code used as data at e000
		LDA		word_4		; code used as data at e000
		STA		byte_177,X	; code used as data at e000
		LDX		#4		; code used as data at e000
		JSR		sub_1741FD	; code used as data at e000
		LDY		_tmp21		; code used as data at e000
		PLA				; code used as data at e000
		TAX				; code used as data at e000
loc_17774B:				; CODE XREF: sub_177684+D7-j
		LDA		_spr_ram,Y	; code used as data at e000
		STA		byte_180,X	; code used as data at e000
		LDA		#$F8       ; code used as data at e000
		STA		_spr_ram,Y	; code used as data at e000
		INY				; code used as data at e000
		INX				; code used as data at e000
		TXA				; code used as data at e000
		AND		#$F		; code used as data at e000
		BNE		loc_17774B	; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_17775E:				; CODE XREF: sub_1773E9+33-p
					; sub_1773E9+84-p sub_1773E9+B2-p
					; sub_1773E9+10E-p
		LDA		byte_2F		; code used as data at e000
		AND		#1		; code used as data at e000
		BEQ		locret_17776D	; code used as data at e000
		LDY		#3		; code used as data at e000
		LDA		(word_6C),Y	; code used as data at e000
		TAX				; code used as data at e000
		AND		#$40       ; code used as data at e000
		BNE		loc_17776E	; code used as data at e000
locret_17776D:				; CODE XREF: sub_17775E+4-j
		RTS				; code used as data at e000
loc_17776E:				; CODE XREF: sub_17775E+D-j
		TXA				; code used as data at e000
		AND		#3		; code used as data at e000
		BEQ		loc_177799	; code used as data at e000
		CMP		#1		; code used as data at e000
		BEQ		loc_17778A	; code used as data at e000
		CMP		#2		; pcm data
		BEQ		loc_1777A8	; pcm data
		LDA		word_6+1	; pcm data
		CLC				; pcm data
		ADC		byte_87		; pcm data
		STA		word_6+1	; pcm data
		LDA		byte_B		; pcm data
		CLC				; pcm data
		ADC		byte_87		; pcm data
		STA		byte_B		; pcm data
		RTS				; pcm data
loc_17778A:				; CODE XREF: sub_17775E+17-j
		LDA		word_6+1	; code used as data at e000
		SEC				; code used as data at e000
		SBC		byte_87		; code used as data at e000
		STA		word_6+1	; code used as data at e000
		LDA		byte_B		; code used as data at e000
		SEC				; code used as data at e000
		SBC		byte_87		; code used as data at e000
		STA		byte_B		; code used as data at e000
		RTS				; code used as data at e000
loc_177799:				; CODE XREF: sub_17775E+13-j
		LDA		word_4		; pcm data
		CLC				; pcm data
		ADC		byte_87		; pcm data
		STA		word_4		; pcm data
		LDA		byte_8		; pcm data
		CLC				; pcm data
		ADC		byte_87		; pcm data
		STA		byte_8		; pcm data
		RTS				; pcm data
loc_1777A8:				; CODE XREF: sub_17775E+1B-j
		LDA		word_4		; pcm data
		SEC				; pcm data
		SBC		byte_87		; pcm data
		STA		word_4		; pcm data
		LDA		byte_8		; pcm data
		SEC				; pcm data
		SBC		byte_87		; pcm data
		STA		byte_8		; pcm data
		RTS				; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_1777B7:				; CODE XREF: _bD_s1E+E-P _bD_s1C+13-P
					; sub_14193F+26-P sub_14193F+9C-P
					; sub_1419FB:loc_141A69-P
					; sub_141AB0:loc_141ADB-P sub_177295+E-p
					; sub_1772CC+E-p
		LDA		byte_2A		; code used as data at e000
		STA		word_6		; code used as data at e000
		LDA		byte_2B		; code used as data at e000
		STA		word_6+1	; code used as ind data	at e000
		JMP		sub_1777E0	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1777C2:				; CODE XREF: sub_1280A6+37-P
					; _bD_s1E:loc_1400B2-P _bD_sE+14-P
					; sub_1418F4+7-J sub_141924+7-P
					; sub_141B50:loc_141B95-P _bD_sD+36-P
					; sub_177116:loc_177183-p sub_177204+F-p
		LDA		byte_30		; code used as ind data	at e000
		STA		word_6		; code used as ind data	at e000
		LDA		byte_31		; code used as ind data	at e000
		STA		word_6+1	; code used as ind data	at e000
		JMP		sub_1777E0	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1777CD:				; CODE XREF: sub_1417DD+11-P
		LDA		byte_30		; code used as data at e000
		STA		word_6		; code used as data at e000
		LDA		byte_31		; code used as data at e000
		STA		word_6+1	; code used as data at e000
		LDA		#6		; code used as data at e000
		STA		byte_8		; code used as data at e000
		LDA		#5		; code used as data at e000
		STA		byte_9		; code used as data at e000
		JMP		loc_1777E8	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1777E0:				; CODE XREF: sub_1777B7+8-j
					; sub_1777C2+8-j sub_177832:loc_177877-p
		LDA		#8		; code used as ind data	at e000
		STA		byte_8		; code used as data at e000
		LDA		#7		; code used as ind data	at e000
		STA		byte_9		; code used as data at e000
loc_1777E8:				; CODE XREF: sub_1777CD+10-j
		STX		word_4		; code used as ind data	at e000
		STY		word_4+1	; code used as ind data	at e000
		LDA		word_6		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		byte_8		; code used as ind data	at e000
		BCS		loc_1777F5	; code used as ind data	at e000
		LDA		#0		; code used as data at e000
loc_1777F5:				; CODE XREF: sub_1777E0+11-j
		CMP		word_4		; code used as ind data	at e000
		BEQ		loc_1777FD	; code used as ind data	at e000
		BCC		loc_1777FD	; code used as ind data	at e000
		CLC				; code used as data at e000
locret_1777FC:				; CODE XREF: sub_1777E0+28-j
		RTS				; code used as data at e000
loc_1777FD:				; CODE XREF: sub_1777E0+17-j
					; sub_1777E0+19-j
		LDA		word_6		; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		byte_9		; code used as data at e000
		BCC		loc_177806	; code used as ind data	at e000
		LDA		#$FF		; pcm data
loc_177806:				; CODE XREF: sub_1777E0+22-j
		CMP		word_4		; code used as data at e000
		BCC		locret_1777FC	; code used as ind data	at e000
		LDA		word_6+1	; code used as data at e000
		SEC				; code used as ind data	at e000
		SBC		byte_9		; code used as ind data	at e000
		BCS		loc_177813	; code used as data at e000
		LDA		#0		; code used as data at e000
loc_177813:				; CODE XREF: sub_1777E0+2F-j
		CMP		word_4+1	; code used as data at e000
		BEQ		loc_17781B	; code used as ind data	at e000
		BCC		loc_17781B	; code used as ind data	at e000
		CLC				; code used as data at e000
		RTS				; code used as data at e000
loc_17781B:				; CODE XREF: sub_1777E0+35-j
					; sub_1777E0+37-j
		LDA		word_6+1	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		byte_9		; code used as ind data	at e000
		BCC		loc_177824	; code used as ind data	at e000
		LDA		#$FF		; pcm data
loc_177824:				; CODE XREF: sub_1777E0+40-j
		CMP		word_4+1	; code used as ind data	at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177827:
		LDA		byte_30		; pcm data
		STA		word_6		; pcm data
		LDA		byte_31		; pcm data
		STA		word_6+1	; pcm data
		JMP		loc_17783A	; pcm data

; =============== S U B	R O U T	I N E =======================================
sub_177832:				; CODE XREF: sub_1773E4-p
		LDA		byte_2A		; code used as data at e000
		STA		word_6		; code used as data at e000
		LDA		byte_2B		; code used as data at e000
		STA		word_6+1	; code used as data at e000
loc_17783A:				; CODE XREF: sub_177827+8-j
		STX		word_4		; code used as data at e000
		STY		word_4+1	; code used as data at e000
		LDA		byte_644	; code used as data at e000
		BEQ		loc_177856	; code used as data at e000
		CMP		#1		; code used as data at e000
		BEQ		loc_177861	; code used as data at e000
		CMP		#3		; code used as data at e000
		BEQ		loc_17786C	; code used as data at e000
		LDA		word_6+1	; code used as data at e000
		CLC				; code used as data at e000
		ADC		#7		; code used as data at e000
		CMP		word_4+1	; code used as data at e000
		BEQ		loc_177877	; code used as data at e000
		CLC				; code used as data at e000
		RTS				; code used as data at e000
loc_177856:				; CODE XREF: sub_177832+F-j
		LDA		word_6+1	; code used as data at e000
		SEC				; code used as data at e000
		SBC		#7		; code used as data at e000
		CMP		word_4+1	; code used as data at e000
		BEQ		loc_177877	; code used as data at e000
		CLC				; code used as data at e000
		RTS				; code used as data at e000
loc_177861:				; CODE XREF: sub_177832+13-j
		LDA		word_6		; code used as data at e000
		CLC				; code used as data at e000
		ADC		#7		; code used as data at e000
		CMP		word_4		; code used as data at e000
		BEQ		loc_177877	; code used as data at e000
		CLC				; code used as data at e000
		RTS				; code used as data at e000
loc_17786C:				; CODE XREF: sub_177832+17-j
		LDA		word_6		; code used as data at e000
		SEC				; code used as data at e000
		SBC		#8		; code used as data at e000
		CMP		word_4		; code used as data at e000
		BEQ		loc_177877	; code used as data at e000
		CLC				; code used as data at e000
		RTS				; code used as data at e000
loc_177877:				; CODE XREF: sub_177832+20-j
					; sub_177832+2B-j sub_177832+36-j
					; sub_177832+41-j
		JSR		sub_1777E0	; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_17787B:				; CODE XREF: sub_140192+3-J
					; sub_1773E9:loc_177413-p
					; sub_1773E9+7B-p
		LDA		byte_2F		; code used as data at e000
		AND		#1		; code used as ind data	at e000
		BEQ		loc_177889	; code used as ind data	at e000
		LDA		byte_81		; code used as data at e000
		SEC				; code used as data at e000
		SBC		byte_31		; code used as data at e000
		JMP		loc_17788E	; code used as ind data	at e000
loc_177889:				; CODE XREF: sub_17787B+4-j
		LDA		byte_81		; code used as data at e000
		SEC				; code used as data at e000
		SBC		byte_2B		; code used as data at e000
loc_17788E:				; CODE XREF: sub_17787B+B-j
		CLC				; code used as data at e000
		ADC		#7		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as data at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		STA		word_4		; code used as data at e000
		DEC		word_4		; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		#8		; code used as ind data	at e000
		STA		byte_8		; code used as ind data	at e000
		DEC		byte_8		; code used as ind data	at e000
		LDA		byte_2F		; code used as ind data	at e000
		AND		#1		; code used as ind data	at e000
		BEQ		locret_1778B4	; code used as ind data	at e000
		LDA		word_4		; code used as data at e000
		SEC				; code used as data at e000
		SBC		#4		; code used as ind data	at e000
		STA		word_4		; code used as data at e000
		LDA		byte_8		; code used as data at e000
		SEC				; code used as data at e000
		SBC		#4		; code used as ind data	at e000
		STA		byte_8		; code used as data at e000
locret_1778B4:				; CODE XREF: sub_17787B+29-j
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1778B5:				; CODE XREF: sub_140192-P
					; sub_1773E9+A1-p sub_1773E9+FD-p
		LDA		byte_2F		; code used as ind data	at e000
		AND		#1		; code used as ind data	at e000
		BEQ		loc_1778C3	; code used as ind data	at e000
		LDA		byte_80		; code used as data at e000
		SEC				; code used as ind data	at e000
		SBC		byte_30		; code used as data at e000
		JMP		loc_1778C8	; code used as ind data	at e000
loc_1778C3:				; CODE XREF: sub_1778B5+4-j
		LDA		byte_80		; code used as ind data	at e000
		SEC				; code used as data at e000
		SBC		byte_2A		; code used as data at e000
loc_1778C8:				; CODE XREF: sub_1778B5+B-j
		CLC				; code used as data at e000
		ADC		#8		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as data at e000
		STA		word_6+1	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		#8		; code used as ind data	at e000
		STA		byte_B		; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_1778D7:				; CODE XREF: sub_12A7AE+1-P
					; sub_14007C+6-P _bD_s1E+3E-P
					; _bD_s1C+1D-P _bD_s18+B-P _bD_sE+4E-P
					; sub_177204+1A-p sub_177259+6-p
					; sub_177295+1D-p sub_1772CC+15-p
					; sub_1773E9+2-p
		TAX				; code used as ind data	at e000
		LDA		word_4+1	; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		LDA		#0		; code used as ind data	at e000
		STA		word_4+1	; code used as ind data	at e000
		LDA		#<[byte_6E00] ; code	used as	data at	e000
		STA		word_7C		; code used as ind data	at e000
		LDA		#>[byte_6E00] ; code used as ind data at e000
		STA		word_7C+1	; code used as ind data	at e000
		TXA				; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ROL		word_4+1	; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ROL		word_4+1	; code used as data at e000
		ASL		; code used as ind data	at e000
		ROL		word_4+1	; code used as data at e000
		ASL		; code used as ind data	at e000
		ROL		word_4+1	; code used as data at e000
		ASL		; code used as ind data	at e000
		ROL		word_4+1	; code used as data at e000
		ASL		; code used as ind data	at e000
		ROL		word_4+1	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		word_7C		; code used as ind data	at e000
		STA		word_7C		; code used as data at e000
		LDA		word_4+1	; code used as ind data	at e000
		ADC		word_7C+1	; code used as ind data	at e000
		STA		word_7C+1	; code used as data at e000
		PLA				; code used as ind data	at e000
		STA		word_4+1	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177909:				; CODE XREF: sub_12A7AE+5-P
					; sub_14007C+D-P _bD_s1E+44-P
					; _bD_s1C+24-P _bD_s18+11-P _bD_sE+56-P
					; sub_177204+21-p
					; sub_177259:loc_177274-p
					; sub_177295+23-p sub_1772CC+1C-p
					; sub_1773E9+7-p
		AND		#3		; code used as data at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as data at e000
		TAY				; code used as data at e000
		LDA		byte_645	; code used as data at e000
		BPL		loc_17791A	; code used as ind data	at e000
		TYA				; code used as ind data	at e000
		CLC				; code used as data at e000
		ADC		#8		; code used as data at e000
		TAY				; code used as data at e000
loc_17791A:				; CODE XREF: sub_177909+A-j
		LDX		#0		; code used as ind data	at e000
loc_17791C:				; CODE XREF: sub_177909+1B-j
		LDA		(word_7C),Y	; code used as ind data	at e000
		STA		byte_74,X	; code used as ind data	at e000
		INX				; code used as ind data	at e000
		INY				; code used as ind data	at e000
		CPX		#8		; code used as ind data	at e000
		BNE		loc_17791C	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
; function not fit into	bank E so moved	to bank	F
_bE_sA:					; CODE XREF: sub_1754AD+3-p
					; sub_176C41+24-p
					; DATA XREF: BANKE:8014-o
		LDA		byte_9A		; code used as data at e000
		LDX		#6		; code used as data at e000
		CMP		#$C		; code used as data at e000
		BCC		loc_177930	; code used as data at e000
		INX				; code used as data at e000
loc_177930:				; CODE XREF: _bE_sA+6-j
		TXA				; code used as data at e000
		JSR		_mmc1_prg_set	; code used as data at e000
		JSR		sub_177960	; code used as data at e000
		JSR		sub_177981	; code used as data at e000
		JSR		sub_177CFC	; code used as ind data	at e000
		BRK
		.BYTE $E6, 7		; ofs 0x0015805c, -> dst _bE_s2E
		BRK
		.BYTE $E7, 7		; ofs 0x0015805e, -> dst _bE_s2F
		BRK
		.BYTE $E8, 7		; ofs 0x00158060, -> dst _bE_s30
		BRK
		.BYTE $1E, $17		; ofs 0x0015802c, -> dst _bE_s16
		BRK
		.BYTE $11, $17		; ofs 0x00008092, -> dst _b0_s49
		LDX		#0		; code used as data at e000
		LDA		#$80       ; code used as data at e000
loc_177950:				; CODE XREF: _bE_sA+2F-j
		STA		byte_100,X	; code used as ind data	at e000
		INX				; code used as ind data	at e000
		CPX		#$10		; code used as ind data	at e000
		BNE		loc_177950	; code used as data at e000
		BRK
		.BYTE $47, $17		; ofs 0x0012804e, -> dst _bC_s27
		LDA		#0		; code used as data at e000
		STA		byte_8E		; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177960:				; CODE XREF: _bE_sA+D-p
		JSR		sub_177994	; code used as data at e000
		JSR		sub_1779A8	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177966:				; CODE XREF: sub_177981+F-p
					; sub_177A2C+29-j sub_177A5B+C7-j
					; sub_177B44+6-j sub_177B56:loc_177B91-j
		JSR		sub_1779E7	; code used as ind data	at e000
loc_177969:				; CODE XREF: sub_177A2C:loc_177A58-j
		CMP		#0		; code used as ind data	at e000
		BEQ		loc_177978	; code used as data at e000
		CMP		#1		; code used as data at e000
		BEQ		loc_17797B	; code used as ind data	at e000
		CMP		#2		; code used as data at e000
		BEQ		loc_17797E	; code used as data at e000
		JMP		sub_177B44	; code used as data at e000
loc_177978:				; CODE XREF: sub_177966+5-j
		JMP		sub_177A2C	; code used as data at e000
loc_17797B:				; CODE XREF: sub_177966+9-j
		JMP		sub_177A5B	; code used as data at e000
loc_17797E:				; CODE XREF: sub_177966+D-j
		JMP		sub_177B4D	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177981:				; CODE XREF: _bE_sA+10-p
		LDA		#$FF		; code used as data at e000
		STA		byte_75		; code used as data at e000
		LDA		#2		; code used as data at e000
		JSR		sub_1779ED	; code used as data at e000
		CMP		#0		; code used as data at e000
		BEQ		locret_177993	; code used as data at e000
		STA		byte_8D		; code used as data at e000
		JSR		sub_177966	; code used as data at e000
locret_177993:				; CODE XREF: sub_177981+B-j
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_177994:				; CODE XREF: sub_177960-p
		CLC				; code used as data at e000
		LDA		#3		; code used as data at e000
		ADC		word_6C		; code used as data at e000
		STA		word_6C		; code used as data at e000
		BCC		loc_17799F	; code used as data at e000
		INC		word_6C+1	; code used as data at e000
loc_17799F:				; CODE XREF: sub_177994+7-j
		LDA		#0		; code used as data at e000
		STA		byte_74		; code used as data at e000
		STA		byte_75		; code used as data at e000
		STA		word_7C+1	; code used as data at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1779A8:				; CODE XREF: sub_177960+3-p
		JSR		sub_1779CD	; code used as data at e000
		PHA				; code used as data at e000
		LDA		#<[byte_7400] ; code	used as	data at	e000
		STA		word_72		; code used as data at e000
		LDA		#>[byte_7400] ; code used as data at e000
		STA		word_72+1	; code used as data at e000
		PLA				; code used as data at e000
		LDY		byte_89		; code used as data at e000
		STY		word_4		; code used as data at e000
		LDY		#0		; code used as data at e000
loc_1779BB:				; CODE XREF: sub_1779A8+22-j
		LDX		byte_88		; code used as ind data	at e000
loc_1779BD:				; CODE XREF: sub_1779A8+1E-j
		STA		(word_72),Y	; code used as ind data	at e000
		INC		word_72		; code used as ind data	at e000
		BNE		loc_1779C5	; code used as ind data	at e000
		INC		word_72+1	; code used as data at e000
loc_1779C5:				; CODE XREF: sub_1779A8+19-j
		DEX				; code used as ind data	at e000
		BNE		loc_1779BD	; code used as ind data	at e000
		DEC		word_4		; code used as ind data	at e000
		BNE		loc_1779BB	; code used as ind data	at e000
		RTS				; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1779CD:				; CODE XREF: sub_1779A8-p sub_177A2C+4-p
					; sub_177A2C+1A-p sub_177A2C+1F-p
					; sub_177A2C+24-p
		LDA		byte_8D		; code used as ind data	at e000
		JMP		sub_1779ED	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1779D2:				; CODE XREF: sub_177B44-p sub_177B4D-p
		JSR		sub_1779EB	; code used as ind data	at e000
		LDA		#0		; code used as data at e000
		LDY		#byte_74	; code used as data at e000
		LDX		#word_4		; code used as data at e000
		JSR		_add_16_to_16	; code used as ind data	at e000
		LDA		word_4		; code used as ind data	at e000
		STA		byte_C		; code used as ind data	at e000
		LDA		word_4+1	; code used as ind data	at e000
		STA		byte_D		; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_1779E7:				; CODE XREF: sub_177966-p sub_177A2C+9-p
		LDA		#2		; code used as ind data	at e000
		BNE		sub_1779ED	; code used as data at e000

; =============== S U B	R O U T	I N E =======================================
sub_1779EB:				; CODE XREF: sub_1779D2-p sub_177A5B-p
					; sub_177A5B+18-p
		LDA		byte_77		; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_1779ED:				; CODE XREF: sub_177981+6-p
					; sub_1779CD+2-j sub_1779E7+2-j
					; sub_177B56+A-p sub_177C1F+2-p
		TAX				; code used as ind data	at e000
		LDA		#0		; code used as ind data	at e000
		STA		word_4		; code used as ind data	at e000
		STA		word_4+1	; code used as ind data	at e000
loc_1779F4:				; CODE XREF: sub_1779ED+F-j
		JSR		sub_177A01	; code used as ind data	at e000
		ROL		word_4		; code used as ind data	at e000
		ROL		word_4+1	; code used as ind data	at e000
		DEX				; code used as ind data	at e000
		BNE		loc_1779F4	; code used as ind data	at e000
		LDA		word_4		; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177A01:				; CODE XREF: sub_1779ED:loc_1779F4-p
					; sub_177A2C+10-p sub_177B56-p
					; sub_177B56+19-p
					; sub_177B56:loc_177B94-p
		LDA		#$80       ; code used as ind data at e000
		LDY		byte_74		; code used as ind data	at e000
loc_177A05:				; CODE XREF: sub_177A01+8-j
		BEQ		loc_177A0C	; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		DEY				; code used as ind data	at e000
		JMP		loc_177A05	; code used as ind data	at e000
loc_177A0C:				; CODE XREF: sub_177A01:loc_177A05-j
		LDY		#0		; code used as ind data	at e000
		AND		(word_6C),Y	; code used as ind data	at e000
		STA		_tmp12+1	; code used as ind data	at e000
		INC		byte_74		; code used as ind data	at e000
		LDA		byte_74		; code used as ind data	at e000
		CMP		#8		; code used as ind data	at e000
		BCC		loc_177A24	; code used as ind data	at e000
		LDA		#0		; code used as ind data	at e000
		STA		byte_74		; code used as ind data	at e000
		INC		word_6C		; code used as ind data	at e000
		BNE		loc_177A24	; code used as ind data	at e000
		INC		word_6C+1	; code used as data at e000
loc_177A24:				; CODE XREF: sub_177A01+17-j
					; sub_177A01+1F-j
		LDA		_tmp12+1	; code used as ind data	at e000
		BEQ		loc_177A2A	; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_177A2A:				; CODE XREF: sub_177A01+25-j
		CLC				; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177A2C:				; CODE XREF: sub_177966:loc_177978-j
		LDA		#0		; code used as ind data	at e000
		STA		byte_76		; code used as data at e000
		JSR		sub_1779CD	; code used as ind data	at e000
		STA		byte_79		; code used as ind data	at e000
		JSR		sub_1779E7	; code used as ind data	at e000
		CMP		#0		; code used as ind data	at e000
		BNE		loc_177A58	; code used as data at e000
		JSR		sub_177A01	; code used as data at e000
		BCC		loc_177A42	; code used as data at e000
		RTS				; code used as data at e000
loc_177A42:				; CODE XREF: sub_177A2C+13-j
		LDA		#$FF		; code used as data at e000
		STA		byte_76		; code used as data at e000
		JSR		sub_1779CD	; code used as ind data	at e000
		STA		byte_7A		; code used as data at e000
		JSR		sub_1779CD	; code used as data at e000
		STA		byte_7B		; code used as ind data	at e000
		JSR		sub_1779CD	; code used as data at e000
		STA		word_7C		; code used as data at e000
		JMP		sub_177966	; code used as data at e000
loc_177A58:				; CODE XREF: sub_177A2C+E-j
		JMP		loc_177969	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177A5B:				; CODE XREF: sub_177966:loc_17797B-j
		JSR		sub_1779EB	; code used as data at e000
		LDA		word_4		; code used as ind data	at e000
		STA		byte_B		; code used as data at e000
		LDA		word_4+1	; code used as data at e000
		STA		byte_C		; code used as data at e000
		LDA		byte_88		; code used as ind data	at e000
		LDX		#word_4		; code used as data at e000
		JSR		_div16_to_8	; code used as data at e000
		STA		word_6+1	; code used as ind data	at e000
		LDA		word_4		; code used as data at e000
		STA		byte_8		; code used as ind data	at e000
		JSR		sub_1779EB	; code used as ind data	at e000
		LDA		byte_88		; code used as data at e000
		LDX		#word_4		; code used as ind data	at e000
		JSR		_div16_to_8	; code used as data at e000
		STA		byte_9		; code used as ind data	at e000
		LDA		word_4		; code used as ind data	at e000
		STA		byte_A		; code used as ind data	at e000
		LDA		#0		; code used as ind data	at e000
		LDY		#byte_74	; code used as ind data	at e000
		LDX		#byte_B		; code used as ind data	at e000
		JSR		_add_16_to_16	; code used as data at e000
		LDA		byte_A		; code used as data at e000
		SEC				; code used as data at e000
		SBC		byte_8		; code used as data at e000
		STA		byte_8		; code used as data at e000
		LDA		byte_9		; code used as ind data	at e000
		SEC				; code used as data at e000
		SBC		word_6+1	; code used as ind data	at e000
		STA		word_6+1	; code used as ind data	at e000
		LDA		byte_76		; code used as ind data	at e000
		BEQ		loc_177AA2	; code used as ind data	at e000
		LSR		word_6+1	; code used as data at e000
		LSR		byte_8		; code used as data at e000
loc_177AA2:				; CODE XREF: sub_177A5B+41-j
		INC		word_6+1	; code used as data at e000
		INC		byte_8		; code used as ind data	at e000
loc_177AA6:				; CODE XREF: sub_177A5B+C5-j
		LDA		byte_79		; code used as ind data	at e000
		LDX		word_6+1	; code used as ind data	at e000
loc_177AAA:				; CODE XREF: sub_177A5B+99-j
					; sub_177A5B+B3-j
		LDY		#0		; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		LDA		byte_75		; code used as ind data	at e000
		BEQ		loc_177AC6	; code used as ind data	at e000
		LDA		(byte_B),Y	; code used as ind data	at e000
		AND		#$1F		; code used as ind data	at e000
		STA		(byte_B),Y	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ORA		(byte_B),Y	; code used as ind data	at e000
		STA		(byte_B),Y	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		JMP		loc_177B0A	; code used as ind data	at e000
loc_177AC6:				; CODE XREF: sub_177A5B+54-j
		LDA		byte_76		; code used as ind data	at e000
		BEQ		loc_177B07	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		LDA		byte_79		; code used at e000
		STA		(byte_B),Y	; code used as ind data	at e000
		JSR		sub_177B25	; code used as ind data	at e000
		LDA		byte_B		; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		LDA		byte_C		; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		LDA		byte_7A		; code used at e000
		STA		(byte_B),Y	; code used at e000
		JSR		sub_177B38	; code used as ind data	at e000
		LDA		word_7C		; code used as ind data	at e000
		STA		(byte_B),Y	; code used as ind data	at e000
		JSR		sub_177B2C	; code used as ind data	at e000
		LDA		byte_7B		; code used as ind data	at e000
		STA		(byte_B),Y	; code used at e000
		PLA				; code used as ind data	at e000
		STA		byte_C		; code used at e000
		PLA				; code used at e000
		STA		byte_B		; code used as ind data	at e000
		JSR		sub_177B25	; code used as ind data	at e000
		DEX				; code used at e000
		BNE		loc_177AAA	; code used as ind data	at e000
		LDA		byte_88		; code used at e000
		SEC				; code used at e000
		SBC		word_6+1	; code used at e000
		SEC				; code used at e000
		SBC		word_6+1	; code used at e000
		JSR		sub_177B3A	; code used at e000
		JSR		sub_177B38	; code used at e000
		JMP		loc_177B1E	; code used at e000
loc_177B07:				; CODE XREF: sub_177A5B+6D-j
		PLA				; code used as ind data	at e000
		STA		(byte_B),Y	; code used as ind data	at e000
loc_177B0A:				; CODE XREF: sub_177A5B+68-j
		JSR		sub_177B25	; code used as ind data	at e000
		DEX				; code used as ind data	at e000
		BNE		loc_177AAA	; code used as ind data	at e000
		LDA		byte_88		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		word_6+1	; code used at e000
		CLC				; code used as ind data	at e000
		ADC		byte_B		; code used as ind data	at e000
		STA		byte_B		; code used at e000
		BCC		loc_177B1E	; code used as ind data	at e000
		INC		byte_C		; code used as ind data	at e000
loc_177B1E:				; CODE XREF: sub_177A5B+A9-j
					; sub_177A5B+BF-j
		DEC		byte_8		; code used as ind data	at e000
		BNE		loc_177AA6	; code used as ind data	at e000
		JMP		sub_177966	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177B25:				; CODE XREF: sub_177A5B+74-p
					; sub_177A5B+95-p
					; sub_177A5B:loc_177B0A-p
		INC		byte_B		; code used as ind data	at e000
		BNE		locret_177B2B	; code used as ind data	at e000
		INC		byte_C		; code used at e000
locret_177B2B:				; CODE XREF: sub_177B25+2-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177B2C:				; CODE XREF: sub_177A5B+88-p
		LDA		byte_B		; code used at e000
		SEC				; code used at e000
		SBC		#1		; code used as ind data	at e000
		STA		byte_B		; code used at e000
		BCS		locret_177B37	; code used as ind data	at e000
		DEC		byte_C
locret_177B37:				; CODE XREF: sub_177B2C+7-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177B38:				; CODE XREF: sub_177A5B+81-p
					; sub_177A5B+A6-p
		LDA		byte_88		; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177B3A:				; CODE XREF: sub_177A5B+A3-p
		CLC				; code used as ind data	at e000
		ADC		byte_B		; code used at e000
		STA		byte_B		; code used as ind data	at e000
		BCC		locret_177B43	; code used at e000
		INC		byte_C		; code used at e000
locret_177B43:				; CODE XREF: sub_177B3A+5-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177B44:				; CODE XREF: sub_177966+F-j
		JSR		sub_1779D2	; code used at e000
		JSR		sub_177C27	; code used as ind data	at e000
		JMP		sub_177966	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177B4D:				; CODE XREF: sub_177966:loc_17797E-j
					; sub_177B56+1E-j
		JSR		sub_1779D2	; code used as ind data	at e000
		JSR		sub_177C27	; code used at e000
		JSR		sub_177C1F	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177B56:				; CODE XREF: sub_177B56+38-j
					; sub_177B56+6A-j
		JSR		sub_177A01	; code used as ind data	at e000
		BCS		loc_177B5E	; code used as ind data	at e000
		JMP		loc_177BBA	; code used as ind data	at e000
loc_177B5E:				; CODE XREF: sub_177B56+3-j
		LDA		#2		; code used as ind data	at e000
		JSR		sub_1779ED	; code used as ind data	at e000
		CMP		#0		; code used as ind data	at e000
		BEQ		loc_177BA2	; code used at e000
		CMP		#1		; code used as ind data	at e000
		BEQ		loc_177BAE	; code used as ind data	at e000
		CMP		#2		; code used at e000
		BEQ		loc_177B94	; code used as ind data	at e000
		JSR		sub_177A01	; code used at e000
		BCS		loc_177B76	; code used at e000
		BCC		sub_177B4D	; code used as ind data	at e000
loc_177B76:				; CODE XREF: sub_177B56+1C-j
		LDX		word_7C+1	; code used as ind data	at e000
		BEQ		loc_177B91	; code used as ind data	at e000
		DEX				; code used as ind data	at e000
		LDA		byte_647,X	; code used at e000
		STA		byte_78		; code used at e000
		DEX				; code used at e000
		LDA		byte_647,X	; code used at e000
		STA		byte_D		; code used as ind data	at e000
		DEX				; code used as ind data	at e000
		LDA		byte_647,X	; code used at e000
		STA		byte_C		; code used at e000
		STX		word_7C+1	; code used at e000
		JMP		sub_177B56	; code used at e000
loc_177B91:				; CODE XREF: sub_177B56+22-j
		JMP		sub_177966	; code used at e000
loc_177B94:				; CODE XREF: sub_177B56+17-j
		JSR		sub_177A01	; code used at e000
		BCC		loc_177B9F	; code used as ind data	at e000
		JSR		sub_177C99	; code used as ind data	at e000
		JMP		loc_177BAE	; code used at e000
loc_177B9F:				; CODE XREF: sub_177B56+41-j
		JSR		sub_177C99	; code used at e000
loc_177BA2:				; CODE XREF: sub_177B56+F-j
		LDA		byte_78		; code used as ind data	at e000
		CLC				; code used at e000
		ADC		#1		; code used as ind data	at e000
		AND		#3		; code used at e000
		STA		byte_78		; code used at e000
		JMP		loc_177BBA	; code used at e000
loc_177BAE:				; CODE XREF: sub_177B56+13-j
					; sub_177B56+46-j
		LDA		byte_78		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		#1		; code used as ind data	at e000
		AND		#3		; code used as ind data	at e000
		STA		byte_78		; code used as ind data	at e000
		JMP		loc_177BBA	; code used as ind data	at e000
loc_177BBA:				; CODE XREF: sub_177B56+5-j
					; sub_177B56+55-j
		JSR		sub_177BC3	; code used as ind data	at e000
		JSR		sub_177C62	; code used as ind data	at e000
		JMP		sub_177B56	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177BC3:				; CODE XREF: sub_177B56:loc_177BBA-p
		LDX		byte_78		; code used as ind data	at e000
		BEQ		loc_177BCF	; code used as ind data	at e000
		DEX				; code used as ind data	at e000
		BEQ		loc_177BD9	; code used as ind data	at e000
		DEX				; code used as ind data	at e000
		BEQ		loc_177BE2	; code used as ind data	at e000
		BNE		loc_177BEB	; code used as ind data	at e000
loc_177BCF:				; CODE XREF: sub_177BC3+2-j
		JSR		sub_177BF4	; code used as ind data	at e000
		LDA		byte_76		; code used as ind data	at e000
		BEQ		locret_177BD8	; code used as ind data	at e000
		BNE		sub_177BF4	; code used as ind data	at e000
locret_177BD8:				; CODE XREF: sub_177BC3+11-j
					; sub_177BC3+1B-j sub_177BC3+24-j
					; sub_177BC3+2D-j
		RTS				; code used as ind data	at e000
loc_177BD9:				; CODE XREF: sub_177BC3+5-j
		JSR		sub_177C00	; code used at e000
		LDA		byte_76		; code used as ind data	at e000
		BEQ		locret_177BD8	; code used as ind data	at e000
		BNE		sub_177C00	; code used as ind data	at e000
loc_177BE2:				; CODE XREF: sub_177BC3+8-j
		JSR		sub_177C07	; code used as ind data	at e000
		LDA		byte_76		; code used as ind data	at e000
		BEQ		locret_177BD8	; code used as ind data	at e000
		BNE		sub_177C07	; code used at e000
loc_177BEB:				; CODE XREF: sub_177BC3+A-j
		JSR		sub_177C13	; code used as ind data	at e000
		LDA		byte_76		; code used as ind data	at e000
		BEQ		locret_177BD8	; code used as ind data	at e000
		BNE		sub_177C13	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177BF4:				; CODE XREF: sub_177BC3:loc_177BCF-p
					; sub_177BC3+13-j
		LDA		byte_C		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		byte_88		; code used as ind data	at e000
		STA		byte_C		; code used as ind data	at e000
		BCS		locret_177BFF	; code used as ind data	at e000
		DEC		byte_D		; code used as ind data	at e000
locret_177BFF:				; CODE XREF: sub_177BF4+7-j
					; sub_177C00+2-j sub_177C07+7-j
					; sub_177C13+7-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C00:				; CODE XREF: sub_177BC3:loc_177BD9-p
					; sub_177BC3+1D-j
		INC		byte_C		; code used as ind data	at e000
		BNE		locret_177BFF	; code used as ind data	at e000
		INC		byte_D		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C07:				; CODE XREF: sub_177BC3:loc_177BE2-p
					; sub_177BC3+26-j
		LDA		byte_C		; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		byte_88		; code used as ind data	at e000
		STA		byte_C		; code used as ind data	at e000
		BCC		locret_177BFF	; code used as ind data	at e000
		INC		byte_D		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C13:				; CODE XREF: sub_177BC3:loc_177BEB-p
					; sub_177BC3+2F-j
		LDA		byte_C		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		#1		; code used as ind data	at e000
		STA		byte_C		; code used as ind data	at e000
		BCS		locret_177BFF	; code used as ind data	at e000
		DEC		byte_D		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C1F:				; CODE XREF: sub_177B4D+6-p
		LDA		#2		; code used as ind data	at e000
		JSR		sub_1779ED	; code used at e000
		STA		byte_78		; code used at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C27:				; CODE XREF: sub_177B44+3-p
					; sub_177B4D+3-p
		LDA		byte_79		; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		JSR		sub_177C46	; code used as ind data	at e000
		LDA		byte_76		; code used as ind data	at e000
		BEQ		locret_177C45	; code used as ind data	at e000
		INY				; code used at e000
		LDA		byte_7A		; code used at e000
		JSR		sub_177C46	; code used at e000
		LDY		byte_88		; code used as ind data	at e000
		LDA		byte_7B		; code used at e000
		JSR		sub_177C46	; code used at e000
		INY				; code used at e000
		LDA		word_7C		; code used at e000
		JMP		sub_177C46	; code used at e000
locret_177C45:				; CODE XREF: sub_177C27+9-j
					; sub_177C62+9-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C46:				; CODE XREF: sub_177C27+4-p
					; sub_177C27+E-p sub_177C27+15-p
					; sub_177C27+1B-j
		PHA				; code used as ind data	at e000
		LDA		byte_75		; code used as ind data	at e000
		BEQ		loc_177C5E	; code used as ind data	at e000
		LDA		(word_4),Y	; code used as ind data	at e000
		AND		#$1F		; code used at e000
		STA		(word_4),Y	; code used at e000
		PLA				; code used at e000
		PHA				; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		ORA		(word_4),Y	; code used as ind data	at e000
		STA		(word_4),Y	; code used as ind data	at e000
		PLA				; code used at e000
		RTS				; code used at e000
loc_177C5E:				; CODE XREF: sub_177C46+3-j
		PLA				; code used at e000
		STA		(word_4),Y	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C62:				; CODE XREF: sub_177B56+67-p
		LDA		byte_79		; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		JSR		sub_177C7D	; code used as ind data	at e000
		LDA		byte_76		; code used as ind data	at e000
		BEQ		locret_177C45	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		LDA		byte_7A		; code used as ind data	at e000
		JSR		sub_177C7D	; code used as ind data	at e000
		LDY		byte_88		; code used as ind data	at e000
		LDA		byte_7B		; code used as ind data	at e000
		JSR		sub_177C7D	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		LDA		word_7C		; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C7D:				; CODE XREF: sub_177C62+4-p
					; sub_177C62+E-p sub_177C62+15-p
		PHA				; code used as ind data	at e000
		LDA		byte_75		; code used as ind data	at e000
		BEQ		loc_177C95	; code used as ind data	at e000
		LDA		(byte_C),Y	; code used at e000
		AND		#$1F		; code used as ind data	at e000
		STA		(byte_C),Y	; code used as ind data	at e000
		PLA				; code used at e000
		PHA				; code used at e000
		ASL		; code used at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		ASL		; code used at e000
		ORA		(byte_C),Y	; code used as ind data	at e000
		STA		(byte_C),Y	; code used at e000
		PLA				; code used at e000
		RTS				; code used as ind data	at e000
loc_177C95:				; CODE XREF: sub_177C7D+3-j
		PLA				; code used as ind data	at e000
		STA		(byte_C),Y	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177C99:				; CODE XREF: sub_177B56+43-p
					; sub_177B56:loc_177B9F-p
		LDX		word_7C+1	; code used at e000
		LDA		byte_C		; code used as ind data	at e000
		STA		byte_647,X	; code used at e000
		INX				; code used at e000
		LDA		byte_D		; code used as ind data	at e000
		STA		byte_647,X	; code used at e000
		INX				; code used at e000
		LDA		byte_78		; code used at e000
		STA		byte_647,X	; code used at e000
		INX				; code used as ind data	at e000
		STX		word_7C+1	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177CB0:				; CODE XREF: _bE_s2F+56-P _bE_s2F+60-P
		LDA		byte_88		; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		word_6C		; code used as ind data	at e000
		STA		word_6C		; code used as ind data	at e000
		BCC		locret_177CBB	; code used as ind data	at e000
		INC		word_6C+1	; code used as ind data	at e000
locret_177CBB:				; CODE XREF: sub_177CB0+7-j
					; sub_177CBC+7-j
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177CBC:				; CODE XREF: _bE_s2F:loc_15B516-P
					; _bE_s2F:loc_15B538-P
		LDA		word_6C		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		byte_88		; code used as ind data	at e000
		STA		word_6C		; code used as ind data	at e000
		BCS		locret_177CBB	; code used as ind data	at e000
		DEC		word_6C+1	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_177CC8:				; CODE XREF: sub_129526+9-P
					; sub_1295EB+5-P sub_12A133+62-P
					; sub_12A133+6A-P sub_12A133+72-P
					; sub_12A133+7A-P sub_12A133+83-P
					; sub_12A133+8C-P sub_12A133+95-P
					; sub_12A133+9E-P sub_15B698+B-J
					; sub_175467+3D-p
		PHA				; code used at e000
		JSR		sub_177CD6	; code used at e000
		AND		#$E0       ; code used at e000
		STA		(word_6),Y	; code used at e000
		PLA				; code used at e000
		ORA		(word_6),Y	; code used at e000
		STA		(word_6),Y	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177CD6:				; CODE XREF: sub_177CC8+1-p
		TXA				; code used at e000
		PHA				; code used at e000
		LDA		byte_88		; code used at e000
		STA		word_6		; code used at e000
		LDA		#0		; code used at e000
		STA		word_6+1	; code used at e000
		TYA				; code used at e000
		LDX		#word_6		; code used at e000
		JSR		_mul16_to_8	; code used at e000
		LDA		#0		; code used at e000
		LDY		#byte_74	; code used at e000
		LDX		#word_6		; code used at e000
		JSR		_add_16_to_16	; code used at e000
		PLA				; code used as ind data	at e000
		LDY		#0		; code used at e000
		LDX		#word_6		; code used at e000
		JSR		_add_16_to_16	; code used at e000
		LDY		#0		; code used at e000
		LDA		(word_6),Y	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177CFC:				; CODE XREF: _b5_s5+39-P _bC_s19+1C-P
					; sub_142504+47-P _npc_hndl2E+1B-P
					; sub_174C62+2B-p _bE_sA+13-p
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used at e000
		JSR		sub_177E1D	; code used at e000
		JSR		sub_177D53	; code used at e000
		PLA				; code used at e000
		JMP		_mmc1_prg_set	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177D0A:				; CODE XREF: sub_177D53+19-j
		LDA		byte_6AC2	; code used at e000
		CMP		#$FF		; code used at e000
		BEQ		locret_177D52	; code used at e000
		JSR		_vblank_and_render_off_flag10_set ; code used at e000
		JSR		sub_176285	; code used at e000
		LDX		#4		; code used at e000
loc_177D19:				; CODE XREF: sub_177D0A+45-j
		LDA		byte_6ABE,X	; code used at e000
		BPL		loc_177D3E	; code used at e000
		CMP		#$FF		; code used at e000
		BEQ		locret_177D52	; code used at e000
		AND		#$7F       ; code used at e000
		LSR		; code used at e000
		LSR		; code used at e000
		LDY		byte_8B		; code used at e000
		CPY		#$CB       ; code used at e000
		BNE		loc_177D3A	; code used at e000
		CMP		#4		; code used at e000
		BEQ		loc_177D38	; code used at e000
		CMP		#1		; code used at e000
		BNE		loc_177D3A	; code used at e000
		LDA		#$26       ; code used at e000
		BNE		loc_177D3A	; code used at e000
loc_177D38:				; CODE XREF: sub_177D0A+24-j
		LDA		#$25       ; code used at e000
loc_177D3A:				; CODE XREF: sub_177D0A+20-j
					; sub_177D0A+28-j sub_177D0A+2C-j
		ORA		#$80       ; code used at e000
		BNE		loc_177D43	; code used at e000
loc_177D3E:				; CODE XREF: sub_177D0A+12-j
		LSR		; code used at e000
		LSR		; code used at e000
		JSR		sub_177EB1	; code used at e000
loc_177D43:				; CODE XREF: sub_177D0A+32-j
		STX		byte_6ABE	; code used as ind data	at e000
		INC		byte_6ABE	; code used at e000
		JSR		sub_176299	; code used as ind data	at e000
		LDX		byte_6ABE	; code used at e000
		JMP		loc_177D19	; code used at e000
locret_177D52:				; CODE XREF: sub_177D0A+5-j
					; sub_177D0A+16-j
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177D53:				; CODE XREF: sub_177CFC+7-p
		LDX		#$10		; code used at e000
		LDA		#1		; code used at e000
		STA		word_3C		; code used at e000
		LDA		byte_6DF	; code used at e000
		CMP		#$78       ; code used at e000
		BCS		loc_177D62	; code used at e000
		ASL		word_3C		; code used at e000
loc_177D62:				; CODE XREF: sub_177D53+B-j
		ASL		word_3C		; code used at e000
		ASL		word_3C		; code used at e000
		ASL		word_3C		; code used at e000
loc_177D68:				; CODE XREF: sub_177D53+33-j
		LDY		#0		; code used at e000
		LDA		(word_6C),Y	; code used at e000
		BEQ		sub_177D0A	; code used at e000
		AND		word_3C		; code used as ind data	at e000
		BEQ		loc_177D83	; code used at e000
		CMP		#$10		; code used at e000
		BEQ		loc_177D89	; code used at e000
		LDA		(word_6C),Y	; code used at e000
		AND		#$10		; code used at e000
		BEQ		loc_177D89	; code used at e000
		JMP		loc_177DA8	; code used at e000
loc_177D7F:				; CODE XREF: sub_177D53+B9-j
					; sub_177D53+C7-j
		INX				; code used at e000
		INX				; code used at e000
		INX				; code used at e000
		INX				; code used at e000
loc_177D83:				; CODE XREF: sub_177D53+1D-j
		JSR		sub_177E87	; code used at e000
		JMP		loc_177D68	; code used at e000
loc_177D89:				; CODE XREF: sub_177D53+21-j
					; sub_177D53+27-j
		INY				; code used at e000
		LDA		(word_6C),Y	; code used at e000
		STA		word_4		; code used at e000
		LDY		#3		; code used at e000
		LDA		(word_6C),Y	; code used at e000
		STA		word_4+1	; code used as ind data	at e000
		STA		word_6+1	; code used at e000
		INY				; code used as ind data	at e000
		LDA		(word_6C),Y	; code used at e000
		STA		word_6		; code used at e000
		LDA		word_3C		; code used at e000
		AND		#$10		; code used at e000
		BNE		loc_177DCF	; code used at e000
		LDA		word_6		; code used at e000
		STA		word_6+1	; code used at e000
		JMP		loc_177DCF	; code used at e000
loc_177DA8:				; CODE XREF: sub_177D53+29-j
		LDA		(word_6C),Y	; code used at e000
		PHA				; code used at e000
		LDY		#4		; code used at e000
		LDA		(word_6C),Y	; code used at e000
		STA		word_6+1	; code used at e000
		PLA				; code used at e000
		PHA				; code used at e000
		AND		#1		; code used at e000
		TAY				; code used at e000
		LDA		byte_177EA3,Y	; code used at e000
		TAY				; code used at e000
		LDA		(word_6C),Y	; code used at e000
		STA		word_4		; code used at e000
		PLA				; code used at e000
		AND		#7		; code used at e000
		TAY				; code used at e000
		LDA		byte_177EA5,Y	; code used at e000
		TAY				; code used at e000
		LDA		(word_6C),Y	; code used at e000
		STA		word_4+1	; code used at e000
		INY				; code used at e000
		LDA		(word_6C),Y	; code used at e000
		STA		word_6		; code used at e000
loc_177DCF:				; CODE XREF: sub_177D53+4C-j
					; sub_177D53+52-j
		LDA		word_4		; code used at e000
		STA		word_3E+1	; code used as ind data	at e000
		AND		#3		; code used at e000
		STA		word_3E		; code used at e000
		LDA		word_6		; code used at e000
		AND		#$7F       ; code used at e000
		STA		byte_101,X	; code used at e000
		LDA		word_4+1	; code used at e000
		AND		#$7F       ; code used at e000
		STA		byte_100,X	; code used at e000
		LDA		word_6+1	; code used at e000
		AND		#$80       ; code used at e000
		ORA		word_3E		; code used as ind data	at e000
		STA		byte_103,X	; code used at e000
		LDY		#4		; code used at e000
loc_177DF0:				; CODE XREF: sub_177D53+B0-j
		LDA		word_4		; code used at e000
		AND		#$FC       ; code used at e000
		CMP		byte_6ABE,Y	; code used as ind data	at e000
		BEQ		loc_177E08	; code used as ind data	at e000
		LDA		byte_6ABE,Y	; code used at e000
		CMP		#$FF		; code used as ind data	at e000
		BEQ		loc_177E0F	; code used at e000
		INY				; code used at e000
		CPY		#$10		; code used at e000
		BNE		loc_177DF0	; code used as ind data	at e000
loc_177E05:				; CODE XREF: sub_177D53:loc_177E05-j
		JMP		loc_177E05
loc_177E08:				; CODE XREF: sub_177D53+A4-j
		TYA				; code used at e000
		STA		byte_102,X	; code used at e000
		JMP		loc_177D7F	; code used as ind data	at e000
loc_177E0F:				; CODE XREF: sub_177D53+AB-j
		LDA		word_4		; code used as ind data	at e000
		AND		#$FC       ; code used at e000
		STA		byte_6ABE,Y	; code used at e000
		TYA				; code used at e000
		STA		byte_102,X	; code used at e000
		JMP		loc_177D7F	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177E1D:				; CODE XREF: sub_177CFC+4-p
		JSR		sub_177E23	; code used at e000
		JMP		sub_177E5E	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177E23:				; CODE XREF: sub_177E1D-p sub_177EFC+4-p
		LDA		#9		; code used at e000
		JSR		_mmc1_prg_set	; code used at e000
		JSR		sub_E3C80	; code used at e000
		LDA		#$D		; code used at e000
		JSR		_mmc1_prg_set	; code used at e000
		LDA		#$FF		; code used at e000
		JSR		_get_syscall0_data_cur_byte0 ; code used at e000
		STA		word_6C		; code used at e000
		LDA		#$FF		; code used at e000
		JSR		_get_syscall0_data_cur_byte1 ; code used at e000
		STA		word_6C+1	; code used as ind data	at e000
		LDA		byte_8B		; code used at e000
		BEQ		locret_177E5D	; code used at e000
		LDA		word_3E		; code used as ind data	at e000
loc_177E44:				; CODE XREF: sub_177E23+28-j
					; sub_177E23+38-j
		JSR		sub_177E87	; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		LDA		(word_6C),Y	; code used as ind data	at e000
		BNE		loc_177E44	; code used as ind data	at e000
loc_177E4D:				; CODE XREF: sub_177E23+36-j
		INC		word_6C		; code used as ind data	at e000
		BNE		loc_177E53	; code used as ind data	at e000
		INC		word_6C+1
loc_177E53:				; CODE XREF: sub_177E23+2C-j
		DEC		word_3E		; code used as ind data	at e000
		BEQ		locret_177E5D	; code used as ind data	at e000
		LDA		(word_6C),Y	; code used as ind data	at e000
		BEQ		loc_177E4D	; code used as ind data	at e000
		BNE		loc_177E44	; code used as ind data	at e000
locret_177E5D:				; CODE XREF: sub_177E23+1D-j
					; sub_177E23+32-j
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177E5E:				; CODE XREF: sub_177E1D+3-j
		LDA		#$FF		; code used at e000
		LDX		#4		; code used at e000
loc_177E62:				; CODE XREF: sub_177E5E+A-j
		STA		byte_6ABE,X	; code used at e000
		INX				; code used at e000
		CPX		#$10		; code used at e000
		BNE		loc_177E62	; code used at e000
		LDX		#byte_10	; code used at e000
		LDA		#$FF		; code used at e000
loc_177E6E:				; CODE XREF: sub_177E5E+16-j
		STA		$100,X		; code used as ind data	at e000
		INX				; code used as ind data	at e000
		CPX		#$74       ; code used as ind data at e000
		BNE		loc_177E6E	; code used as ind data	at e000
		LDA		#$F0       ; code used at e000
		STA		$100,X		; code used at e000
		LDA		#0		; code used at e000
		STA		$101,X		; code used at e000
		STA		$102,X		; code used at e000
		STA		$103,X		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_177E87:				; CODE XREF: sub_177D53:loc_177D83-p
					; sub_177E23:loc_177E44-p
					; sub_177EFC:loc_177F1E-p
		LDY		#0		; code used as ind data	at e000
		LDA		(word_6C),Y	; code used as ind data	at e000
		AND		#7		; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		LDA		byte_177E9B,Y	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		word_6C		; code used as ind data	at e000
		STA		word_6C		; code used as ind data	at e000
		BCC		locret_177E9A	; code used as ind data	at e000
		INC		word_6C+1	; code used as ind data	at e000
locret_177E9A:				; CODE XREF: sub_177E87+F-j
		RTS				; code used as ind data	at e000
byte_177E9B:
		.BYTE	5,  6,	6,  7,	7,  8,	8,  9 ;	DATA XREF: sub_177E87+7-r
					; data used at e000
byte_177EA3:
		.BYTE	1,  5		; DATA XREF: sub_177D53+63-r
					; sub_177EFC+79-r
					; data used at e000
byte_177EA5:
		.BYTE	3,  3,	3,  3,	5,  6,	6,  7 ;	DATA XREF: sub_177D53+6F-r
					; data used at e000
byte_177EAD:
		.BYTE	2,  2,	5,  6	; DATA XREF: sub_177EFC+59-r

; =============== S U B	R O U T	I N E =======================================
sub_177EB1:				; CODE XREF: sub_177D0A+36-p
		LDY		byte_8B		; code used as ind data	at e000
		CMP		#4		; code used as ind data	at e000
		BEQ		loc_177ED1	; code used at e000
		CMP		#8		; code used as ind data	at e000
		BEQ		loc_177ED8	; code used at e000
		CMP		#$1F		; code used at e000
		BEQ		loc_177EF2	; code used at e000
		CMP		#$1C		; code used at e000
		BNE		locret_177ED0	; code used as ind data	at e000
		CPY		#$CF       ; code used at e000
		BEQ		loc_177ECB	; code used at e000
		CPY		#6		; code used at e000
		BNE		loc_177ECE	; code used at e000
loc_177ECB:				; CODE XREF: sub_177EB1+14-j
		LDA		#$24 
		RTS
loc_177ECE:				; CODE XREF: sub_177EB1+18-j
		LDA		#$1C		; code used at e000
locret_177ED0:				; CODE XREF: sub_177EB1+10-j
					; sub_177EB1+22-j
		RTS				; code used at e000
loc_177ED1:				; CODE XREF: sub_177EB1+4-j
		CPY		#$CB       ; code used as ind data at e000
		BNE		locret_177ED0	; code used at e000
		LDA		#$25       ; code used at e000
		RTS				; code used at e000
loc_177ED8:				; CODE XREF: sub_177EB1+8-j
		CPY		#$8D       ; code used at e000
		BNE		loc_177EEF	; code used at e000
		LDA		byte_60B9
		AND		#8
		BEQ		loc_177EEF
		STX		byte_6ABE
		JSR		sub_1743B8
		AND		#$F
		LDX		byte_6ABE
		RTS
loc_177EEF:				; CODE XREF: sub_177EB1+29-j
					; sub_177EB1+30-j
		LDA		#8		; code used at e000
		RTS				; code used at e000
loc_177EF2:				; CODE XREF: sub_177EB1+C-j
		CPY		#$25       ; code used at e000
		BEQ		loc_177EF9	; code used at e000
		LDA		#$23       ; code used at e000
		RTS				; code used at e000
loc_177EF9:				; CODE XREF: sub_177EB1+43-j
		LDA		#$1F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177EFC:				; CODE XREF: sub_AF9A+43-P
					; sub_158203+7F-P _bE_s21+3F-P
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used at e000
		JSR		sub_177E23	; code used at e000
		LDA		#$10		; code used at e000
		STA		word_4+1	; code used at e000
		LDA		byte_6DF	; code used at e000
		CMP		#$78       ; code used as ind data at e000
		BCC		loc_177F10	; code used at e000
		LSR		word_4+1	; code used at e000
loc_177F10:				; CODE XREF: sub_177EFC+10-j
		INC		word_4		; code used as ind data	at e000
loc_177F12:				; CODE XREF: sub_177EFC+25-j
		LDY		#0		; code used as ind data	at e000
		LDA		(word_6C),Y	; code used at e000
		AND		word_4+1	; code used as ind data	at e000
		BEQ		loc_177F1E	; code used as ind data	at e000
		DEC		word_4		; code used at e000
		BEQ		loc_177F24	; code used as ind data	at e000
loc_177F1E:				; CODE XREF: sub_177EFC+1C-j
		JSR		sub_177E87	; code used at e000
		JMP		loc_177F12	; code used at e000
loc_177F24:				; CODE XREF: sub_177EFC+20-j
		LDY		#0		; code used at e000
		LDA		(word_6C),Y	; code used at e000
		AND		#$C0       ; code used as ind data at e000
		CLC				; code used at e000
		ROL		; code used as ind data	at e000
		ROL		; code used at e000
		ROL		; code used at e000
		STA		word_4+1	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		INY				; code used at e000
		LDA		byte_6DF	; code used at e000
		CMP		#$78       ; code used at e000
		BCC		loc_177F61	; code used at e000
		LDY		#0		; code used at e000
		LDA		(word_6C),Y	; code used at e000
		LDY		#2		; code used at e000
		AND		#2		; code used at e000
		BEQ		loc_177F61	; code used at e000
		LDY		#0		; code used at e000
		LDA		(word_6C),Y	; code used at e000
		AND		#$20       ; code used at e000
		LSR		; code used at e000
		LSR		; code used at e000
		LSR		; code used at e000
		LSR		; code used at e000
		LSR		; code used at e000
		STA		word_4+1	; code used at e000
		LDA		(word_6C),Y	; code used at e000
		AND		#3		; code used at e000
		TAX				; code used at e000
		LDA		byte_177EAD,X	; code used at e000
		PHA				; code used at e000
		LDA		(word_6C),Y	; code used at e000
		AND		#1		; code used at e000
		BEQ		loc_177F5F	; code used at e000
loc_177F5F:				; code used at e000
		PLA
		TAY				; code used at e000
loc_177F61:				; CODE XREF: sub_177EFC+3B-j
					; sub_177EFC+45-j
		LDA		(word_6C),Y	; code used at e000
		STA		word_4		; code used at e000
		LDY		#1		; code used at e000
		LDA		byte_6DF	; code used at e000
		CMP		#$78       ; code used at e000
		BCC		loc_177F78	; code used at e000
		LDY		#0		; code used at e000
		LDA		(word_6C),Y	; code used at e000
		AND		#1		; code used at e000
		TAX				; code used at e000
		LDY		byte_177EA3,X	; code used at e000
loc_177F78:				; CODE XREF: sub_177EFC+70-j
		LDA		(word_6C),Y	; code used as ind data	at e000
		AND		#$FC       ; code used at e000
		LSR		; code used at e000
		LSR		; code used as ind data	at e000
		STA		word_6		; code used at e000
		PLA				; code used as ind data	at e000
		JMP		_mmc1_prg_set	; code used at e000
_unused_2:
		.BYTE $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
_debug_flags:
		.BYTE $FF		; DATA XREF: sub_1757C0:loc_1757D2-r
					; sub_175853:loc_175877-r
					; data used at e000
