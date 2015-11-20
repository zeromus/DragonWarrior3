
		ORG $8000

		.WORD _b18_s0		; data used at 8000
		.WORD _b18_s1		; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_b18_s0:				; CODE XREF: _b17_s1+46-P
					; DATA XREF: BANK18:8000-o
		JSR		sub_24C156	; code used at 8000
		JSR		sub_24C0CC	; code used at 8000
		JSR		sub_24C097	; code used at 8000
		JSR		sub_24C17A	; code used at 8000
		JSR		sub_24E747	; code used at 8000
		JSR		sub_24E91A	; code used at 8000
		JSR		nullsub_1	; code used at 8000
loc_24C019:				; CODE XREF: sub_24E747+14E-j
					; sub_24E91A+F-j
		LDX		#1		; code used at 8000
		JSR		sub_24C0F3	; code used at 8000
		JSR		sub_24C227	; code used at 8000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		LDA		#0		; code used at 8000
		STA		byte_F		; code used at 8000
		LDA		#4		; code used at 8000
		STA		byte_10		; code used at 8000
loc_24C02C:				; CODE XREF: _b18_s0+4F-j
		LDA		#$E		; code used at 8000
		STA		byte_11		; code used at 8000
		LDX		byte_F		; code used at 8000
		LDY		#0		; code used at 8000
loc_24C034:				; CODE XREF: _b18_s0+3A-j
		LDA		byte_24C2E1,X	; code used at 8000
		STA		_ram_pal_buf+1,Y ; code	used at	8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		#$18		; code used at 8000
		BCC		loc_24C034	; code used at 8000
		STX		byte_F		; code used at 8000
loc_24C042:				; CODE XREF: _b18_s0+4B-j
		JSR		sub_17435B	; code used at 8000
		LDX		#1		; code used at 8000
		JSR		sub_24C0F3	; code used at 8000
		JSR		sub_24C227	; code used at 8000
		DEC		byte_11		; code used at 8000
		BNE		loc_24C042	; code used at 8000
		DEC		byte_10		; code used at 8000
		BNE		loc_24C02C	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C055:				; CODE XREF: sub_24C084+10-j
					; sub_24E747+A8-j
		LDA		#0		; code used at 8000
		BRK
		.BYTE $A5, 7		; ofs 0x0002000e, -> dst _b1_s7
		LDA		#0		; code used at 8000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDX		#0		; code used at 8000
		LDA		#$F		; code used at 8000
loc_24C063:				; CODE XREF: sub_24C055+14-j
		STA		_ram_pal_buf,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$19		; code used at 8000
		BCC		loc_24C063	; code used at 8000
		JSR		sub_17435B	; code used at 8000
		LDX		#1		; code used at 8000
		JSR		sub_24C0F3	; code used at 8000
		LDA		#0		; code used at 8000
		TAX				; code used at 8000
loc_24C076:				; CODE XREF: sub_24C055+26-j
		STA		word_4,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$10		; code used at 8000
		BCC		loc_24C076	; code used at 8000
		STA		byte_6D0	; code used at 8000
		STA		byte_6D1	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C084:				; CODE XREF: sub_24E747+B2-j
		JSR		sub_174369
		LDX		#$14
		JSR		sub_24C0F3
		LDA		#$10
		BRK
		.BYTE $A5, 7		; ofs 0x0002000e, -> dst _b1_s7
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JMP		sub_24C055

; =============== S U B	R O U T	I N E =======================================
sub_24C097:				; CODE XREF: _b18_s0+6-p
		LDA		_PPU_STATUS	; code used at 8000
		LDY		#0		; code used at 8000
		STY		_PPU_ADDR	; code used at 8000
		STY		_PPU_ADDR	; code used at 8000
		LDA		off_24E745	; code used at 8000
		STA		_tmp12		; code used at 8000
		LDA		off_24E745+1	; code used at 8000
		STA		_tmp12+1	; code used at 8000
		LDX		#$10		; code used at 8000
		JSR		sub_24C0E5	; code used at 8000
		LDA		_PPU_STATUS	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		_PPU_ADDR	; code used at 8000
		LDY		#0		; code used at 8000
		STY		_PPU_ADDR	; code used at 8000
		LDA		off_24E743	; code used at 8000
		STA		_tmp12		; code used at 8000
		LDA		off_24E743+1	; code used at 8000
		STA		_tmp12+1	; code used at 8000
		LDX		#$10		; code used at 8000
		BNE		sub_24C0E5	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C0CC:				; CODE XREF: _b18_s0+3-p
		LDA		off_24C741	; code used at 8000
		STA		_tmp12		; code used at 8000
		LDA		off_24C741+1	; code used at 8000
		STA		_tmp12+1	; code used at 8000
		LDA		_PPU_STATUS	; code used at 8000
		LDA		#$20       ; code used at 8000
		STA		_PPU_ADDR	; code used at 8000
		LDY		#0		; code used at 8000
		STY		_PPU_ADDR	; code used at 8000
		LDX		#4		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C0E5:				; CODE XREF: sub_24C097+17-p
					; sub_24C097+33-j sub_24C0E5+6-j
					; sub_24C0E5+B-j
		LDA		(_tmp12),Y	; code used as ind data	at 8000
		STA		_PPU_DATA	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		BNE		sub_24C0E5	; code used as ind data	at 8000
		INC		_tmp12+1	; code used at 8000
		DEX				; code used at 8000
		BNE		sub_24C0E5	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C0F3:				; CODE XREF: _b18_s0+17-p _b18_s0+43-p
					; sub_24C055+1B-p sub_24C084+5-p
					; sub_24C0F3+19-j sub_24C156+1B-p
					; sub_24E747+10-p sub_24E747+2F-p
					; sub_24E747+41-p sub_24E747+62-p
					; sub_24E747+8A-p sub_24E747+115-p
					; sub_24E89C+11-p sub_24E8B1+12-p
		LDA		#$FD       ; code used at 8000
		STA		byte_32		; code used at 8000
		LDA		byte_60B7	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_33		; code used at 8000
		JSR		_vblank		; code used at 8000
		JSR		sub_24C20F	; code used at 8000
		BCS		loc_24C113	; code used at 8000
		DEX				; code used at 8000
		BNE		sub_24C0F3	; code used at 8000
		LDA		#$FF		; code used at 8000
		STA		word_6		; code used at 8000
		RTS				; code used at 8000
loc_24C113:				; CODE XREF: sub_24C0F3+16-j
		LDA		#0		; code used at 8000
		STA		word_6		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b18_s1:				; CODE XREF: _b18_s1+32-j
					; sub_24E747+12A-p _b19_s0+5C-P
					; sub_264077+7-P
					; DATA XREF: BANK18:8002-o
		JSR		sub_17435B	; code used at 8000
		LDA		#2		; code used at 8000
		JSR		sub_1740E9	; code used at 8000
		JSR		sub_24C20F	; code used at 8000
		BCS		loc_24C151	; code used at 8000
		JSR		sub_24C2B1	; code used at 8000
		LDA		#$FD       ; code used at 8000
		STA		byte_32		; code used at 8000
		LDA		byte_60B7	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_33		; code used at 8000
		JSR		_vblank		; code used at 8000
		JSR		sub_24C227	; code used at 8000
		LDA		_nmi_counter	; code used at 8000
		AND		#$F		; code used at 8000
		BNE		loc_24C148	; code used at 8000
		JSR		sub_24C29D	; code used at 8000
loc_24C148:				; CODE XREF: _b18_s1+2B-j
		DEC		word_6+1	; code used at 8000
		BNE		_b18_s1		; code used at 8000
		LDA		#$FF		; code used at 8000
		STA		word_6		; code used at 8000
		RTS				; code used at 8000
loc_24C151:				; CODE XREF: _b18_s1+B-j
		LDA		#0		; code used at 8000
		STA		word_6		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C156:				; CODE XREF: _b18_s0-p
		LDA		#$FD       ; code used at 8000
		STA		byte_32		; code used at 8000
		LDA		byte_60B7	; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_60B7	; code used at 8000
		LDA		#$F		; code used at 8000
		LDX		#$19		; code used at 8000
loc_24C166:				; CODE XREF: sub_24C156+14-j
		STA		_ram_pal_buf,X	; code used at 8000
		DEX				; code used at 8000
		BPL		loc_24C166	; code used at 8000
		JSR		sub_17435B	; code used at 8000
		LDX		#1		; code used at 8000
		JSR		sub_24C0F3	; code used at 8000
		JSR		_ppu_screen_clear ; code used at 8000
		JMP		_vblank_and_render_off_flag10_set ; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C17A:				; CODE XREF: _b18_s0+9-p
		LDA		#$F		; code used at 8000
		STA		_cur_mmc_cmd	; code used at 8000
		LDA		#$10		; code used at 8000
		STA		_cur_chr0_bank_prg_hi ;	code used at 8000
		JSR		_mmc1_chr_set	; code used at 8000
		JSR		__render_on_flag10_clear_reinit	; code used at 8000
		LDA		#$1E		; code used at 8000
		STA		byte_6D4	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_24C190:
		LDA		_nmi_counter
		AND		#$20 
		BNE		loc_24C19D
		LDA		#0
		STA		word_4
		BEQ		loc_24C1A1
loc_24C19D:				; CODE XREF: sub_24C190+5-j
		LDA		#8
		STA		word_4
loc_24C1A1:				; CODE XREF: sub_24C190+B-j
		LDY		#0
		LDA		#$A2 
		STA		byte_300,Y
		INY
		LDA		#4
		STA		byte_300,Y
		INY
		LDA		#$82 
		STA		byte_300,Y
		INY
		LDX		word_4
loc_24C1B7:				; CODE XREF: sub_24C190+31-j
		LDA		byte_24C1F7,X
		STA		byte_300,Y
		INY
		INX
		CPY		#7
		BCC		loc_24C1B7
		STY		byte_6D8
		INC		byte_6D9
		LDA		#$A2 
		STA		byte_300,Y
		INY
		LDA		#4
		STA		byte_300,Y
		INY
		LDA		#$A2 
		STA		byte_300,Y
		INY
		LDA		word_4
		CLC
		ADC		#4
		TAX
loc_24C1E1:				; CODE XREF: sub_24C190+5B-j
		LDA		byte_24C1F7,X
		STA		byte_300,Y
		INY
		INX
		CPY		#$E
		BCC		loc_24C1E1
		STY		byte_6D8
		INC		byte_6D9
		JSR		sub_1742BA
		RTS
byte_24C1F7:
		.BYTE $13,$14,$15,$16,$23,$24,$25,$26,	8,  9, $E, $F,$18,$19,$1E,$1F
					; DATA XREF: sub_24C190:loc_24C1B7-r
					; sub_24C190:loc_24C1E1-r
		.BYTE $A0,$A1,$B0,$B1,$BC,$BD,$CC,$CD

; =============== S U B	R O U T	I N E =======================================
sub_24C20F:				; CODE XREF: sub_24C0F3+13-p _b18_s1+8-p
					; sub_24E747+F1-p
		PHA				; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		JSR		_calc_pads	; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		LDA		_pads		; code used at 8000
		AND		#8		; code used at 8000
		BNE		loc_24C224	; code used at 8000
		PLA				; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_24C224:				; CODE XREF: sub_24C20F+10-j
		PLA				; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C227:				; CODE XREF: _b18_s0+1A-p _b18_s0+46-p
					; _b18_s1+23-p sub_24E747+118-p
		PHA				; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		TYA				; code used at 8000
		PHA				; code used at 8000
		LDX		#0		; code used at 8000
		STX		_tmp12		; code used at 8000
loc_24C230:				; CODE XREF: sub_24C227+C-j
		BIT		_PPU_STATUS	; code used at 8000
		BVC		loc_24C230	; code used at 8000
loc_24C235:				; CODE XREF: sub_24C227+30-j
		LDA		byte_9,X	; code used at 8000
		STA		_PPU_SCROLL	; code used at 8000
		LDA		#0		; code used at 8000
		STA		_PPU_SCROLL	; code used at 8000
		LDX		_tmp12		; code used at 8000
		LDA		byte_24C293,X	; code used at 8000
		TAY				; code used at 8000
loc_24C245:				; CODE XREF: sub_24C227+28-j
		LDX		_tmp12		; code used at 8000
		LDA		byte_24C298,X	; code used at 8000
		TAX				; code used at 8000
loc_24C24B:				; CODE XREF: sub_24C227+25-j
		DEX				; code used at 8000
		BNE		loc_24C24B	; code used at 8000
		DEY				; code used at 8000
		BNE		loc_24C245	; code used at 8000
		INC		_tmp12		; code used at 8000
		LDX		_tmp12		; code used at 8000
		CPX		#5		; code used at 8000
		BCC		loc_24C235	; code used at 8000
		LDY		_nmi_counter	; code used at 8000
		LDX		#0		; code used at 8000
loc_24C25E:				; CODE XREF: sub_24C227+4E-j
		TYA				; code used at 8000
		AND		byte_24C28B,X	; code used at 8000
		CMP		byte_24C28F,X	; code used at 8000
		BNE		loc_24C272	; code used at 8000
		CPX		#2		; code used at 8000
		BCS		loc_24C270	; code used at 8000
		INC		byte_9,X	; code used at 8000
		JMP		loc_24C272	; code used at 8000
loc_24C270:				; CODE XREF: sub_24C227+42-j
		DEC		byte_9,X	; code used at 8000
loc_24C272:				; CODE XREF: sub_24C227+3E-j
					; sub_24C227+46-j
		INX				; code used at 8000
		CPX		#4		; code used at 8000
		BCC		loc_24C25E	; code used at 8000
		LDA		_nmi_counter	; code used at 8000
		AND		#1		; code used at 8000
		BNE		loc_24C281	; code used at 8000
		INC		byte_6D0	; code used at 8000
loc_24C281:				; CODE XREF: sub_24C227+55-j
		PLA				; code used at 8000
		TAY				; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		RTS				; code used at 8000
_unused_30:
		.BYTE $30,  0,$23,$C0
byte_24C28B:
		.BYTE	3,  7, $F,  7	; DATA XREF: sub_24C227+38-r
					; data used at 8000
byte_24C28F:
		.BYTE	3,  7, $F,  7	; DATA XREF: sub_24C227+3B-r
					; data used at 8000
byte_24C293:
		.BYTE $15, $D,	9,  5,	1 ; DATA XREF: sub_24C227+1A-r
					; data used at 8000
byte_24C298:
		.BYTE $28,$27,$20,$26,	1 ; DATA XREF: sub_24C227+20-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C29D:				; CODE XREF: _b18_s1+2D-p
		LDX		byte_E		; code used at 8000
		CPX		#$B		; code used at 8000
		BCC		loc_24C2A7	; code used at 8000
		LDX		#0		; code used at 8000
		STX		byte_E		; code used at 8000
loc_24C2A7:				; CODE XREF: sub_24C29D+4-j
		LDA		byte_24C2D6,X	; code used at 8000
		STA		_ram_pal_buf+$A	; code used at 8000
		INX				; code used at 8000
		STX		byte_E		; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_24C2B1:				; CODE XREF: _b18_s1+D-p
		LDA		word_4+1	; code used at 8000
		BEQ		locret_24C2BC	; code used at 8000
		CMP		#$FF		; code used at 8000
		BEQ		locret_24C2BC	; code used at 8000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
locret_24C2BC:				; CODE XREF: sub_24C2B1+2-j
					; sub_24C2B1+6-j
		RTS				; code used at 8000
_unused_31:
		.BYTE $FF,$27,$18,  8,$1B,$18,	8,$1B, $C,$1C, $F,$18,	8,$11,$37,$30
		.BYTE  $B,$2B,$30,$16,$27,$37,$30,$2B,$30
byte_24C2D6:
		.BYTE  $F,  7,	6,$16,$15,$15,$15,$16,	6,  7, $F
					; DATA XREF: sub_24C29D:loc_24C2A7-r
					; data used at 8000
byte_24C2E1:
		.BYTE $27,$17,	7,$18,$17,  7,$18, $C,$1C, $F,$17,  7,$11,$37,$30, $A
					; DATA XREF: _b18_s0:loc_24C034-r
		.BYTE $2A,$30,$16,$27,$37,$30,$2A,$30,$17,  7, $F,  8,	7, $F,	8, $F ;	data used at 8000
		.BYTE  $C, $F,	7, $F,	1,$27,$20, $F,$1A,$20,	6,$17,$27,$20,$1A,$20
		.BYTE	7, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$17,$10, $F
		.BYTE  $A,$10, $F,  7,$17,$10, $A,$10, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE  $F, $F, $F, $F, $F,  7,	0, $F, $F,  0, $F, $F,	7,  0, $F,  0
byte_24C341:
		.BYTE $58,$59,$5A,$5B,$54,$55,$56,$57,$58,$59,$5A,$5B,$54,$55,$56,$57
					; DATA XREF: BANK18:off_24C741-o
		.BYTE $58,$59,$5A,$5B,$54,$55,$56,$57,$58,$59,$5A,$5B,$54,$55,$56,$57 ;	ind data used at 8000
		.BYTE $54,$55,$56,$57,$58,$59,$5A,$5B,$54,$55,$56,$57,$58,$59,$5A,$5B
		.BYTE $54,$55,$56,$57,$58,$59,$5A,$5B,$54,$55,$56,$57,$58,$59,$5A,$5B
		.BYTE $44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B
		.BYTE $44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B
		.BYTE $54,$55,$56,$57,$58,$59,$5A,$5B,$54,$55,$56,$57,$44,$45,$46,$47
		.BYTE $48,$49,$4A,$4B,$58,$59,$5A,$5B,$54,$55,$56,$57,$58,$59,$5A,$5B
		.BYTE $44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B
		.BYTE $44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B
		.BYTE $48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47
		.BYTE $48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47
		.BYTE $40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43
		.BYTE $40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43
		.BYTE $44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B
		.BYTE $44,$45,$46,$47,$48,$49,$4A,$4B,$44,$45,$46,$47,$48,$49,$4A,$4B
		.BYTE $40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43
		.BYTE $40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43
		.BYTE $42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41
		.BYTE $42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41,$42,$43,$40,$41
		.BYTE $1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B
		.BYTE $1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B
		.BYTE $1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D
		.BYTE $1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D
		.BYTE $1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B
		.BYTE $1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B,$1C,$1D,$1A,$1B
		.BYTE $66,$67,$65,$66,$66,$67,$65,$66,$66,$67,$65,$66,$66,$67,$65,$66
		.BYTE $66,$67,$65,$66,$66,$67,$65,$66,$66,$67,$65,$66,$66,$67,$65,$66
		.BYTE $60,$61,$60,$61,$60,$61,$60,$61,$60,$61,$60,$61,$60,$61,$60,$61
		.BYTE $60,$61,$60,$61,$60,$61,$60,$61,$60,$61,$60,$61,$60,$61,$60,$61
		.BYTE $2A,$29,$2A,$29,$2A,$29,$2A,$2A,$29,$2A,$29,$2A,$29,$2A,$2A,$29
		.BYTE $2A,$29,$2A,$29,$2A,$2A,$29,$2A,$29,$2A,$29,$2A,$2A,$29,$2A,$29
		.BYTE $28,$27,$28,$27,$28,$27,$28,$27,$28,$27,$28,$27,$28,$27,$28,$27
		.BYTE $28,$27,$28,$27,$28,$27,$28,$27,$28,$27,$28,$27,$28,$27,$28,$28
		.BYTE $73,$74,$75,$76,$77,$73,$74,$75,$76,$77,$73,$74,$75,$76,$77,$72
		.BYTE $72,$72,$72,$72,$72,$72,$72,$72,$72,$72,$72,$73,$74,$75,$76,$77
		.BYTE $83,$84,$85,$86,$87,$83,$84,$85,$86,$87,$83,$84,$85,$86,$5D,$90
		.BYTE $91,$92,$70,$71,$82,$81,$82,$70,$71,$88,$89,$5C,$84,$85,$86,$87
		.BYTE $A2,$A2,$94,$94,$94,$95,$95,$96,$96,$97,$96,$93,$97,$93,$6D,$6E
		.BYTE $6C,$6C,$6D,$6E,$6D,$6D,$6C,$6D,$6E,$6C,$6C,$6B,$A2,$94,$A2,$A2
		.BYTE $79,$79,$13,$14,$15,$16,$33,$33,$33,$A5,$A6,$A7,$A7,$B9,$B9,$B9
		.BYTE $B9,$B9,$B9,$A7,$A7,$A6,$A5,$32,$32,$33,$12,$32,$33,$33,$A0,$A1
		.BYTE $7E,$7F,$23,$24,$25,$26,$B2,$B3,$B4,$B5,$B6,$B7,$B7,$C9,$C9,$C9
		.BYTE $C9,$C9,$C9,$B7,$B7,$B6,$7A,$7B,$7C,$7D,$10,$32,$33,$12,$B0,$B1
		.BYTE $C0,$11,$11,$31,$C0,$C1,$C2,$C3,$C4,$C5,$C6,$C5,$C6,$C5,$C6,$C5
		.BYTE $C6,$C5,$C6,$C5,$C6,$C5,$8A,$8B,$8C,$8D,$8E,  0,$31,$10,$31,$8F
		.BYTE $20,$10,$10,$20,$D0,$D1,$D2,$D3,$D5,$D8,$C7,$C7,$C7,$C7,$C7,$C7
		.BYTE $C7,$C7,$C7,$C7,$C7,$C7,$99,$9A,$9C,$9D,$9E,$9F,$10,$10,$30,$31
		.BYTE $10,$20,$21,$3D,$E0,$E1,$E0,$E3,$E4,$E5,$E9,$EA,$EB,$E9,$EA,$E9
		.BYTE $EA,$E9,$EA,$E9,$EA,$E9,$AA,$AB,$AC,$AF,$AE,$AF,$3E,$20,$32,$20
		.BYTE $21,$32,$4C,$4D,$F0,$F1,$F0,$F1,$F4,$F5,$F9,$FA,$FB,$F9,$FA,$F9
		.BYTE $FA,$F9,$FA,$F9,$FA,$F9,$BA,$BB,$BE,$BF,$BE,$BF,$4E,$4F,	0,$32
		.BYTE $32,$3D,$E0,$E1,$E0,$E1,$E0,$E1,$E0,$E1,$EE,$EE,$EE,$F5,$DC,$DD
		.BYTE $DC,$DD,$BA,$EE,$EE,$EF,$AE,$AF,$AE,$AF,$AE,$AF,$AE,$AF,$3E,$30
		.BYTE $4C,$4D,$F0,$F1,$F0,$F1,$F0,$F1,$F0,$F1,$FE,$FF,$FE,$FF,$FE,$FF
		.BYTE $FE,$FF,$FE,$FF,$FE,$FF,$BE,$BF,$BE,$BF,$BE,$BF,$BE,$BF,$4E,$4F
		.BYTE $E0,$E1,$E0,$E1,$E0,$E1,$E0,$E1,$E0,$E1,$EE,$EF,$EE,$EF,$EE,$EF
		.BYTE $EE,$EF,$EE,$EF,$EE,$EF,$AE,$AF,$AE,$AF,$AE,$AF,$AE,$AF,$AE,$AF
		.BYTE $F0,$F1,$F0,$F1,$F0,$F1,$F0,$F1,$F0,$F1,$FE,$FF,$FE,$FF,$FE,$FF
		.BYTE $FE,$FF,$FE,$FF,$FE,$FF,$BE,$BF,$BE,$BF,$BE,$BF,$BE,$BF,$BE,$BF
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $5A,$5A,$5A,$9A,$AA,$AA,$AA,$5A,$59,$16,$F5,$F5,$F5,$F5,$45,$59
		.BYTE $15,  0,	0,  0,	0,  0,	0,$45,	0,  0,	0,  0,	0,  0,	0,  0
off_24C741:
		.WORD byte_24C341	; DATA XREF: sub_24C0CC-r sub_24C0CC+5-r
					; data used at 8000
byte_24C743:
		.BYTE $FF,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
					; DATA XREF: BANK18:off_24E745-o
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at 8000
		.BYTE	3, $F,$1F, $B,	6,  2,	0,  6,	0,  0,	0,  4,	1,  5,	7,  1
		.BYTE $F0,$FC,$FF,$FE,$FF,$BC,$BE,$F0,	0,  0,	0,  0,	0,$40,$40,  0
		.BYTE $1D,$3D,$3D,$8B,$70,$18,	0,  0, $A, $A,	6,$33,$88,$60,$18,  0
		.BYTE $FC,$EC,$F0,$3C,$10, $C,$38,  0,$20,$52,$8C,  0, $C,  2,	6,$38
		.BYTE $13,$1F, $F,  3,	6,  2,	0,  6,	0,  0,	0,  4,	1,  5,	7,  1
		.BYTE $F6,$FD,$FF,$FE,$FE,$BC,$BE,$F0,	0,  0,	0,  0,	0,$40,$40,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,$28,$14,$68
		.BYTE	0,  0,	0,  0,	0,  1,	3,  6,	0,  0,	0,  0,	0,  1,	3,  6
		.BYTE  $F,$1F,$39,$1D,$3A,$12,$30,$1B,	0,  0,	6,  2,	5, $D, $F,  4
		.BYTE $F0,$F8,$9C,$38,$DC,$48, $C,$D8,	0,  0,$60,$C0,$20,$B0,$F0,$20
		.BYTE	1,  7, $B,$17,$2F,$7F,$AF,$77,	0,  2,	5,  9,$10,$20,$51,$8A
		.BYTE $F0,$FC,$FF,$FE,$FE,$DF,$5E,$78,	0,  0,	0,$80,$80,$A0,$A0,$80
		.BYTE	0,  0,	0,  6, $B,$17,$2F,$7F,	0,  0,	0,  2,	5,  9,$10,$20
		.BYTE	0,  0,	0,$18,$F6,$FC,$FF,$FE,	0,  0,	0,  0,	0,$80,$80,$80
		.BYTE	1,  7,$87,$CF,$6D,$3D,$1D, $A,	2,  0,$80,$C7,$6A,$3A,$1A, $F
		.BYTE $80,$70,$88,$FC,$FC,$F8,$E0,$38,$70,$88,$70,$C0,$20,$20,$30,$E0
		.BYTE	1,$87,$C7,$6F,$3D,$1D, $D, $A,	2,$80,$C0,$67,$3A,$1A, $A, $F
		.BYTE $1D,$3D,$3D,$8B,$70,$18,	0,  0, $A, $A,	6,$33,$88,$60,$18,  0
		.BYTE	1,  7,$87,$CD,$6D,$3D,$1A, $D,	2,  0,$87,$CA,$6A,$3A,$1F, $A
		.BYTE $80,$70,$C8,$FC,$FC,$F8,$20,$F8,$70,$88,$F0,$20,$20,$20,$F0,$20
		.BYTE	0,  0,$FF,$3F,	0,  0,	0,  0,	0,  0,$FF,$3F,	0,  0,	0,  0
		.BYTE	1,$87,$7F,$FF,$9D, $D, $D, $A,	2,$80,$80,$C7,$8A, $A, $A, $F
		.BYTE	1,  7,	7, $F, $D,$1D,$1D,$2A,	2,  0,	0,  7, $A, $A,$2A,$3F
		.BYTE  $F,$1F,$1F,$BB,$66,$22,$50,$E6, $C,$10,	0,$B4,$61,$65,$77,$81
		.BYTE  $E,$35,$4E,$FF,$FF,$FF,$B3,$2F,$31,$4A,$31,  8,$18,$30,$7D,$60
		.BYTE $70,$AC,$77,$FE,$FE,$CE,$CE,$F9,$8C,$52,$8F, $D,	9,$39,$B9, $F
		.BYTE $FF,$73,	0,$47,$67,$37,$1F, $F,$8C,$70,	3,$40,$60,$30,$1E,  8
		.BYTE $E8,$B4,$CC,$FC,$F8,$F8,	0,$FC,$10,$48,$30,  0,	0,  0,$F8,  0
		.BYTE $AF,$77,$FF,$77,	3,$81,$CF,$6F,$51,$8A,$8C,$70,	0,$86,$C0,$60
		.BYTE $FE,$BC,$BE,$E0,$D0,$E8,$F8,$F8,	0,$40,$40,$10,$28,$10,	0,  0
		.BYTE  $D, $D,$1D,$3F,	8,$30,$F8,  0, $A, $A,	6,  3,$30,  8,	0,$F8
		.BYTE $FC,$EC,$F0,$3C,$10, $C,$38,  0,$20,$52,$8C,  0, $C,  2,	6,$38
		.BYTE  $D, $D, $D,$1F,	4,$18,$7C,  0, $A, $A,	6,  3,$18,  4,	0,$7C
		.BYTE $F8,$D8,$E0,$70,$40,$30,$F8,  0,$20,$64,$98,  0,$30,  8,	0,$F8
		.BYTE  $D, $D, $F,$1D,	4,$10,$7C,  0, $A,  6,	3,  0,$18, $C,	0,$7C
		.BYTE $F8,$D8,$E0,$80,$60,$20,$40,  0,$40,$A4,$18,$60,$90,$10,$20,  0
		.BYTE  $D, $D,	5,  3,	2,  1,	7,  0, $A, $A,	6,  3,	1,  0,	0,  7
		.BYTE $F8,$D8,$C0,$E0,$60,$80,	0,  0,$20,$64,$98,  0,$90,$60,$C0,  0
		.BYTE $1D,$3D,$35,$63,$62,$C1,$87,  0,$1A,$3A,$36,$63,$61,$C0,$80,  7
		.BYTE $61,$37,$3F,$1F, $D, $D, $D, $A,	2,  0,	0,  7, $A, $A, $A, $F
		.BYTE $1F,$19,	6, $F,	9,  6, $F,  0,	0,  6,$19,  0,	6,  9,	0, $F
		.BYTE $FE,$DE,$26,$73,$40,$30,$7C,  0,	9,$29,$DD,  3,$30,$40,	0,$7C
		.BYTE	7,  6,$18,$3C,	8,$30,$F8,  0,	0,  9,	6,  0,$30,  8,	0,$F8
		.BYTE $FC,$EC,$10,$3C,$10, $C,$38,  0,	0,$12,$EC,  0, $C,  2,	6,$38
		.BYTE $3E,$1F,$37,$4B,$7C, $C,$F0,  0,$3D,$10,	8,$34,	3,$30, $A,$F9
		.BYTE $70,$80,$F8,$B0,$48,$18,$70,  0,$80,$70,	0,$48,$B0,  4,$8C,$70
		.BYTE	0,  0,	1,  2,	4,  0,	1,$12,	0,  0,	1,  2,	4,  0,	1,$12
		.BYTE	1,  7,	7, $D, $D, $D, $A, $D,	2,  0,	7, $A, $A, $A, $F, $A
		.BYTE	0,  0,	0,  0,$13,$1F, $F,  3,	0,  0,	0,  0,	0,  0,	0,  4
		.BYTE	0,  0,	0,$12,$F6,$FD,$FF,$FE,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $17, $F, $D, $F,	2,  0, $D,  5,	0,  0,	2,  0,	5, $F,	2, $A
		.BYTE $F0,$FC,$FC,$FE,$FE,$BD,$BE,$FE,	0,  0,	0,  0,	0,$40,$40,  0
		.BYTE	0,  0,	0,  0,	0,  0,	3,$3C,	0,  0,	0,  0,	0,  0,	0,  3
		.BYTE	0,  0,	0,  0,	0,$3F,$C0, $E,	0,  0,	0,  0,	0,  0,$3F,$F1
		.BYTE	0,  1,	6,$78,$98,$B0,$F0,$31,	0,  0,	1,  7,$67,$4F,$8F,$CF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  1,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  1,	6,  8,	8,$10,$F0,$31,	0,  0,	1,  7,	7, $F, $F,$CF
		.BYTE $F0,$FE,$FC,$FE,$FE,$FF,$BC,$F8,	0,  0,	0,  0,	0,  0,$40,  0
		.BYTE $A8,$28,$B0,$A0,$C0,$80,	0,  0,$50,$D0,$C0,$40,$80,  0,	0,  0
		.BYTE	0,  1,	6,  8,	8,$10,$10,$31,	0,  0,	1,  7,	7, $F, $F, $F
		.BYTE	0,  0,$86,$59,$21,$C6,$18,$E0,	0,  0,	0,$86,$DE,$BA,$E8,  0
		.BYTE	4,$40,$90,$FF,$3F,  0,	0,  0,	4,$40,$90,$FF,$3F,  0,	0,  0
		.BYTE	1,$87,$8F,$3D,$7D,$8D,$8A, $D,	2,$80,$87,$CA,$EA,$8A,$8F, $A
		.BYTE	6,  2,	0,  6,	7,$8D,$CD,$6D,	1,  5,	7,  1,	7,$8A,$CA,$6A
		.BYTE $FE,$BC,$BE,$F0,$C0,$F0,$E8,$FC,	0,$40,$40,  0,$F0,$28,$30,$20
		.BYTE $61,$37,$3F,$1F, $D,$1D,$2D,$3A,	2,  0,	0,  7, $A,$2A,$1A, $F
		.BYTE $8A,$70,$88,$FC,$FC,$F8,$E0,$38,$70,$88,$70,$C0,$20,$20,$30,$E0
		.BYTE $41,$3F,	8,  7,	0,  0,	0,$20,$3E,  0,	7,  0,	0,  0,	0,  0
		.BYTE $FF,$FF,	3,  7,$F8,$1C,$22,$41,	0,  0,$FC,$F8,	0,  0,$1C,$3E
		.BYTE $89,$C8,$F1,$88,$88,$9B,$84,$C1,$77,$37, $F,$77,$77,$64,$7B,$3E
		.BYTE	0,  0,	0,  1,	2,  6,	9,$10,	0,  0,	0,  0,	1,  1,	6, $F
		.BYTE	6,$1A,$64,$84,$49,$32,$94,$68,	1,  5,$1B,$7B,$B6,$CC,$68,$90
		.BYTE	9,$48,$71,$88,$88,$9B,$84,$C1,$F7,$B7,$8F,$77,$77,$64,$7B,$3E
		.BYTE	0,  0,	0,  0,	0,  0,	0,$20,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	1,$1D,$23,$41,	0,  0,	0,  0,	0,  0,$1C,$3E
		.BYTE $49,$44,$85,$92,	9,  5,	6,$E5,$37,$3B,$7B,$6D,$F6,$FA,$F9,$1A
		.BYTE $E0,$F8,$FC,$3E, $C,  0,	0,  0,$C0,$E0,$38, $C,	0,  0,	0,  0
		.BYTE  $B,$1F, $F,  3,	6,  2,	0,  6,	0,  0,	0,  4,	1,  5,	7,  1
		.BYTE $E0,$F8,$FE,$FC,$FC,$BE,$BC,$F0,	0,  0,	0,  0,	0,$40,$40,  0
		.BYTE $3A,$1D, $D,$1D,$3F,$10,$7C,  0,$3F,$1A, $A,  6,	3, $C,	2,$7E
		.BYTE $3C,$F8,$E0,$98,$E8,$30,$E0,  0,$E0,$20,$50,$E0,$10,  8,$18,$E0
		.BYTE $3D,$3D, $D,$1B,$10,$30,	0,  0, $A, $A,$36,  3,	8,  8,$30,  0
		.BYTE $F8,$D8,$E0,$70,	8,$30,$E0,  0,$20,$64,$98,  0,$30,  8,$10,$E0
		.BYTE $50,$4C,$23,$30,$30,$18, $F,  7,$20,$30,$3C,$1F,$1F, $F,	7,  0
		.BYTE $80,$80, $C,$1F,$33,$E0,$C0,  0,$7F,$7F,$FF,$F3,$E0,$C0,	0,  0
		.BYTE	1,  7,$87,$CF,$6D,$3D,$1D, $A,	0,  0,$80,$C7,$6A,$3A,$1A, $F
		.BYTE $21,$7E,$81,$7E,	0,  0,	0,  0,$1E,  1,$7E,  0,	0,  0,	0,  0
		.BYTE $DB,$64,$C0,$60,$38,$1F,	7,  0,$20,$DB,$3F,$3F,$1F,  7,	0,  0
		.BYTE	7,$1F, $D, $F,	2,  0, $D,  5,	0,  0,	2,  0,	5, $F,	2, $A
		.BYTE $C8,  7,	8,  3,	0,  0,	0,  0,	7,  0,	7,  0,	0,  0,	0,  0
		.BYTE $80,$E0,$10,$F0,$A0,  0,	0,  0,	0,  0,$E0,$A0,	0,  0,	0,  0
		.BYTE $79,$32,$1A,$4A,$6E,$C6,$83,$87,$86,$CD,$E5,$B5,$91,$39,$7C,$78
		.BYTE $78,$D8,$F0,$B0,$90,$58,$58,$C8,$B0,$30,$40,$40,$60,$A0,$A0,$30
		.BYTE	0,  0,	7,$78,$87,$7F,$3E,  9,	0,  0,	0,  7,$7F,$3E,	1,  7
		.BYTE	1,$7E,$87,$67,$D3,$B5,$72,$F5,	0,  1,$7C,$D8,$AC,$6A,$ED,$EE
		.BYTE $C0,$61,$46,$A8,$A8,$D0,$D0,$31,	0,$C0,$81,$47,$47,$2F,$2F,$CF
		.BYTE $70,$FC,$7F,$1E, $C,  0,$A7,$FF,	0,$70,$9C,$ED,$F3,$FF,$F8,$F7
		.BYTE	0,  0,$80,$40,$3C,$C2,	5,$FF,	0,  0,	0,$80,$C0,$BC,$FA,$10
		.BYTE	0,  0,	0,  0,	7,$18,$F0,$30,	0,  0,	0,  0,	0,  7, $F,$CF
		.BYTE	0,  0,	1, $F,$F0,  0,	0,  0,	0,  0,	0,  0, $F,$FF,$FF,$FF
		.BYTE	0,$C0,$F0,$FE,$79,$30,	3,$9C,	0,  0,$C0,$70,$B6,$CF,$FE,$E3
		.BYTE	0,  0,	0,  0,	0,$F0,	8,$14,	0,  0,	0,  0,	0,  0,$F0,$E8
		.BYTE $E0,$F8,$FE,$FC,$FE,$F8,$BC,$F0,	0,  0,	0,  0,	0,  0,$40,  0
		.BYTE	0,  0,	0,  0,$FC,  3,	0,  0,	0,  0,	0,  0,	0,$FC,$FF,$FF
		.BYTE	0,  0,	0,  0,$70,$FC,$7F,$1E,	0,  0,	0,  0,	0,$70,$9C,$ED
		.BYTE	0,  0,	0,  0,	0,  0,$80,$40,	0,  0,	0,  0,	0,  0,	0,$80
		.BYTE	1,$87,$C7,$6F,$3D,$1D, $D, $A,	0,$80,$C0,$67,$3A,$1A, $A, $F
		.BYTE	8,$9C,$7E,$1F, $E,  0,$A4,$FE,	0,  8,$8C,$E4,$F7,$FF,$FB,$F7
		.BYTE	0,  0,	0,  0,$C0,$20,$90,$90,	0,  0,	0,  0,	0,$C0,$E0,$60
		.BYTE	7,  0,	0,  0,	0,  3,	4,  8,	0,  0,	0,  0,	0,  0,	3,  7
		.BYTE $EE,$EF,$6F,$59,$30,$80,$60,$10,$DF,$5F,$19,$30,	0,  0,$80,$E0
		.BYTE $89,$48,$71,$88,$88,$9B,$84,$C1,$77,$B7,$8F,$77,$77,$64,$7B,$3E
		.BYTE $FF,$CF,$E7,$F0,$30,$18,$BC,$DC,$8F,$87,$C0,$E0,$E0,$F0,$78,$B8
		.BYTE $FE,$FC,$80,  0,	0,  0,	0,  0,$FC,$80,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	3,$FF,$FC,$F0,$30,$18,$BC,$5C,$FF,$FC,$C0,$E0,$E0,$F0,$78,$B8
		.BYTE $FF,$FF,$3F,$1E,	0,  0,	0,  0,$DC,$3F,$1E,  0,	0,  0,	0,  0
		.BYTE $FC,$F8,$F0,  0,	0,  0,	0,  0,$40,$F0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $78,$FF,$E7,$F0,$30,$18,$BC,$DC,$87,$F8,$C7,$E0,$E0,$F0,$78,$B8
		.BYTE  $C,  0,$A7,$FF,$FF, $F,	7,  0,$F3,$FF,$F8,$F7, $F,  7,	0,  0
		.BYTE $3C,$C2,	5,$FF,$FE,$FC,$80,  0,$C0,$BC,$FA,$10,$FC,$80,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FF,$CF,$EF,$F7,$37,$1B,$BD,$DC,$8F,$86,$C6,$E2,$E3,$F1,$78,$B8
		.BYTE $38,$84,$62,$1E,$80,$80,	0,  0,$C0,$78,$5C,  8,	0,  0,	0,  0
		.BYTE $10,$13,$27,$2C,$38,$10,	0,  0, $F, $F,$1C,$18,$10,  0,	0,  0
		.BYTE  $B,$84,$C0,$60,$38,$1F,	7,  0,$F0,$FB,$7F,$3F,$1F,  7,	0,  0
		.BYTE $7F,$1F,$1C,$42,$E2,$C1,$81,$86,$81,$E0,$E3,$BD,$9D,$3E,$7E,$79
		.BYTE $B8,$18,$70,$50,$90,$20,$20,$40,$70,$F0,$E0,$E0,$E0,$C0,$C0,$80
		.BYTE $C0,$C0,$E0,$F0,$30,$18,$BC,$DC,$80,$80,$C0,$E0,$E0,$F0,$78,$B8
		.BYTE	1,  6,	8,$13,$2D,$52,$A4,$74,	0,  1,	7, $C,$12,$2D,$5B, $B
		.BYTE $C0,$61,$46,$A8,$A8,$50,$70,$F1,	0,$C0,$81,$47,$47,$AF,$8F, $F
		.BYTE	0,  6,	9,  9,	4,  4,	2,  5,	0,  0,	7,  6,	3,  3,	1,  2
		.BYTE	0,  0,	4, $E,$9E,$9C,$7C,$78,	0,  0,	0,  4,$8C,  8,$98,$B0
		.BYTE	0,  3,	4,  4,	2,  2,	1,  2,	0,  0,	3,  3,	1,  1,	0,  1
		.BYTE	0,  0,$82,$87,$4F,$4E,$3E,$BC,	0,  0,$80,  2,$C6,$84,$CC,$58
		.BYTE	0,  0,	0,  0,	0,  1,	2,  2,	0,  0,	0,  0,	0,  0,	1,  1
		.BYTE	0,  0,	0,  0,	0,$80,$60,$90,	0,  0,	0,  0,	0,  0,$80,$60
		.BYTE	0,  0,	0,  0,	0,  1,	2,  2,	0,  0,	0,  0,	0,  0,	1,  1
		.BYTE	0,  0,	0,  0,	0,$80,$60,$90,	0,  0,	0,  0,	0,  0,$80,$60
		.BYTE	0,  0,	1,  1,	1,  1,	2,  4,	0,  0,	0,  0,	0,  0,	1,  3
		.BYTE $7F,$1F,$1C,$42,$E2,$C1,$81,$86,$81,$E0,$E3,$BD,$9D,$3E,$7E,$79
		.BYTE $B8,$18,$70,$50,$90,$3C,$22,$5E,$70,$F0,$E0,$E0,$E0,$C0,$DC,$B4
		.BYTE $8B,$89,$C5,$34,$35,$14,$38,$10,$70,$F0,$38,  8,$18,  8,$10,  0
		.BYTE $A0,$20,$A0,$A0,$C0,$80,	0,  0,$40,$C0,$C0,$40,$80,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  3,	4,  8,	0,  0,	0,  0,	0,  0,	3,  7
		.BYTE	8,  7,	0,  0,	0,$80,$60,$10,	7,  0,	0,  0,	0,  0,$80,$E0
		.BYTE $E9,$C8,$F1,$88,$88,$9B,$84,$C1,$17,$37, $F,$77,$77,$64,$7B,$3E
		.BYTE	9,  8, $C,$1E,$1E,$3C,$38,$38,	7,  7,	3, $D, $D,$1B,$17,$17
		.BYTE $78,$F8,$F8,$F8,$70,$60,$E0,$60,$B0,$70,$70,$70,$A0,$C0,$C0,$C0
		.BYTE	4,  4,	6, $F, $F,$1E,$1C,$1C,	3,  3,	1,  6,	6, $D, $B, $B
		.BYTE $BC,$7C,$7C,$7C,$38,$30,$70,$30,$D8,$B8,$B8,$B8,$D0,$E0,$E0,$E0
		.BYTE	5,$3A,$75,$40,$4F,$57,$5B,$2D,	2,  5,$2B,$3F,$30,$2F,$37,$1B
		.BYTE $70,$E0,$E0,$F0,$18,$E8,$F0,$C0,$E0,$C0,$C0,$E0,$F0,$10,$C0,$80
		.BYTE	5,$3B,$76,$4E,$27,$18,	6,  1,	2,  4,$29,$31,$18,  7,	1,  0
		.BYTE $70,$E0,$E0,$10,	6,$F9,	6,$F8,$E0,$C0,$C0,$E0,$F8,  6,$F8,  0
		.BYTE	6, $C,$1C,$2C,$2C,$4E,$45,$57,	3,  7,	7,$17,$17,$33,$3B,$28
		.BYTE $8B,$8C,$C1,$3F, $A,  0,	0,  0,$70,$F3,$3E, $A,	0,  0,	0,  0
		.BYTE $B4,$40,$C0,$80,	0,  0,	0,  0,	0,$80,$80,  0,	0,  0,	0,  0
		.BYTE $23,$25,$1E, $F,	7,  6,$82,$42,$DC,$DA,$E1,$F0,$F8,$F9,$7D,$BD
		.BYTE $45,$3A,$C0,$80,$40,$40,$40,$80,$BA,$C0,	0,  0,$80,$80,$80,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	8,  7,	0,  0,	1,$1D,$23,$41,	7,  0,	0,  0,	0,  0,$1C,$3E
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $D8,$70,$50,$B1,$A0,$51,$70,$F1,	7,$CF,$8F,$4F,$5F,$AF,$8F, $F
		.BYTE $E0,$60,$E0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$80,$80,$80,$80,$80
		.BYTE $CC,$68,$48,$B0,$A0,$51,$70,$F1,	3,$C7,$87,$4F,$5F,$AF,$8F, $F
		.BYTE $70,$30,$E0,$60,$C0,$C0,$C0,$C0,$E0,$E0,$C0,$C0,$80,$80,$80,$80
		.BYTE $2D,$2E,$2E,$17,$16,$16,$14,  8,$1B,$1D,$1D, $C, $C, $C,	8,  0
		.BYTE $80,$80,$80,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  1,	2,  2,	0,  0,	0,  0,	0,  0,	1,  1
		.BYTE	0,  0,	0,  0,	0,$80,$E0,$9E,	0,  0,	0,  0,	0,  0,	0,$60
		.BYTE	0,$80,$40,$20,$20,$20,$20,$40,	0,  0,$80,$C0,$C0,$C0,$C0,$80
		.BYTE	0,  6,	9,$10,$16,$25,$29,$52,	0,  0,	6, $F,	9,$1A,$16,$2D
		.BYTE $18,$3D,$1E,$9C,$4C,$2B,$9C,$C8,	0,$18, $D, $B,$83,$C4,$63,$37
		.BYTE $18,$BC,$78,$38,$30,$D0,$38,$1C,	0,$18,$B0,$D0,$C0,$20,$C0,$E0
		.BYTE $22,$22,$36,$59,$70,$70,$CE,$3C,$DC,$DC,$C8,$A6,$AF,$8F,$31,$C7
		.BYTE	6,  9,$10,$16,$25,$29,$52,$A2,	0,  6, $F,  9,$1A,$16,$2D,$5D
		.BYTE	0,  0,$86,$4F,$27,$9C,$C8,$C4,	0,  0,	0,$86,$C0,$63,$37,$3B
		.BYTE	0,  0,$60,$F0,$E0,$38,$1C,$2A,	0,  0,	0,$60,	0,$C0,$E0,$D4
		.BYTE	0,  0,	0,  0,$80,$80,$40,$40,	0,  0,	0,  0,	0,  0,$80,$80
		.BYTE $7F,$2A,	0,  0,	0,  0,	0,  0,$2A,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FE,$54,	0,  0,	0,  0,	0,  0,$54,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,$60,$90,$88,$44,	0,  0,	0,  0,	0,$60,$70,$38
		.BYTE $C8,  6,	8,  8,	6,  4,	3,  1,	7,  1,	7,  7,	1,  3,	1,  0
		.BYTE $80,$80,$80,$40,$40,$20,$E0,$40,	0,  0,	0,$80,$80,$C0,$40,  0
		.BYTE	5,$39,$73,$46,$27,$18,	0,  0,	2,  6,$2C,$39,$18,  0,	0,  0
		.BYTE	1,$7E,$88,$30,$C0,  0,	0,  0,$FE,$80,$70,$C0,	0,  0,	0,  0
		.BYTE $40,$80,$80,$40,$20,$10,$88,$C8,$80,  0,	0,$80,$C0,$E0,$F0,$F0
		.BYTE $A2,$5C,	3,  1,	2,  2,	2,  1,$5D,  3,	0,  0,	1,  1,	1,  0
		.BYTE $C4,$A4,$78,$F0,$E0,$60,$41,$42,$3B,$5B,$87, $F,$1F,$9F,$BE,$BD
		.BYTE $2A,$23,$1E, $E,	6,  2,$82,$42,$D4,$DC,$E1,$F1,$F9,$FD,$7D,$BD
		.BYTE	0,  0,$80,$40,$40,$40,$40,$80,	0,  0,	0,$80,$80,$80,$80,  0
		.BYTE $5C,  3,	1,  2,	2,  2,	1,  1,	3,  0,	0,  1,	1,  1,	0,  0
		.BYTE $A4,$78,$F1,$E2,$64,$44,$E4,$12,$5B,$87, $E,$1D,$9B,$BB,$1B,$ED
		.BYTE $23,$1E,$8E,$46,$22,$22,$23,$48,$DC,$E1,$71,$B9,$DD,$DD,$DC,$B7
		.BYTE	0,$80,$40,$40,$40,$40,$80,$80,	0,  0,$80,$80,$80,$80,	0,  0
		.BYTE	0,  0,	7,  9,$11,$14,$16,$26,	0,  0,	0,  7, $E, $B,	9,$19
		.BYTE	0,  0,	0,$80,	1,$82,$84,$44,	0,  0,	0,  0,	0,  1,	3,$83
		.BYTE $26,$13,$23,$C3, $E,$1C,$68,$F0,$1C, $E,$1E,$3E,$FC,$F8,$F0,$C0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $D0,$70,$22,$5D,$4B,$AF,$D0,$97,	0,$84,$C0,$E0,$E0,$70,$3E,$78
		.BYTE $18,$BC,$78,$39,$32,$D4,$39,$13,	0,$18,$B0,$D0,$C1,$23,$C6,$EC
		.BYTE	0,$60,$90,  8,$68,$A4,$94,$4A,	0,  0,$60,$F0,$90,$58,$68,$B4
		.BYTE	0,  0,$80,$40,$28,$14,$28,$10,	0,  0,$80,$E0,$78,$38,$10,  0
		.BYTE	0,  0,	0,  0,	1,  1,	2,  2,	0,  0,	0,  0,	0,  0,	1,  1
		.BYTE $44,$44,$6C,$9A, $E, $E,$73,$3C,$3B,$3B,$13,$65,$F5,$F1,$8C,$E3
		.BYTE	0,  0,	0,  0,	1,  1,	2,  2,	0,  0,	0,  0,	0,  0,	1,  1
		.BYTE $44,$44,$6C,$9A, $E, $E,$73,$3C,$3B,$3B,$13,$65,$F5,$F1,$8C,$E3
		.BYTE	2,  7,	8,  7,	2,  0,	0,  0,	1,  0,	7,  2,	0,  0,	0,  0
		.BYTE $72,$3A,$17,$E0,$80,  0,	0,  0,$8D,$E5,$E0,$80,	0,  0,	0,  0
		.BYTE $4E,$5C,$E8,  7,	1,  0,	0,  0,$B1,$A7,	7,  1,	0,  0,	0,  0
		.BYTE $40,$E0,$10,$E0,$40,  0,	0,  0,$80,  0,$E0,$40,	0,  0,	0,  0
		.BYTE $2B,$2A,$29,$29,$17,  9,	1,  0,$14,$15,$16,$16,	8,  0,	0,  0
		.BYTE $29,$99,$8D,$5E,$A3,$43,$4E,$C1,$C7,$67,$73,$A1,$5C,$BC,$B1,$3E
		.BYTE $90,$90,$BC,$7A,$C5,$C2,$72,$83,$E0,$E0,$C0,$84,$3A,$3D,$8D,$7C
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $CC,$3A, $D,$5E,	6,$2B,	5,  3,$33,  7,$83,  1,$11,  0,	8,  0
		.BYTE $30,$B8,$18,$30,$F0,$A0,$80,  0,$80,$C0,$E0,$C0,	0,$40,	0,  0
		.BYTE $E2,$79,$9F,$CE,$9E,$1F,$37,$F1,	0,$80,$E0,$F0,$E0,$E0,$C8,$1E
		.BYTE	0,  0,	8,$24,$16,$50,$77,$B7,	0,$20,	0,  0,$40,  2,	0,  0
		.BYTE	1,  1,	1,  2,	2,  4,	7,  2,	0,  0,	0,  1,	1,  3,	2,  0
		.BYTE $13,$60,$10,$10,$60,$20,$C0,$80,$E0,$80,$E0,$E0,$80,$C0,$80,  0
		.BYTE	1,  7,	8, $F,	5,  0,	0,  0,	0,  0,	7,  5,	0,  0,	0,  0
		.BYTE $13,$E0,$10,$C0,	0,  0,	0,  0,$E0,  0,$E0,  0,	0,  0,	0,  0
		.BYTE	1,  7,	8, $F,	5,  0,	0,  0,	0,  0,	7,  5,	0,  0,	0,  0
		.BYTE $9E,$EE,$67,$37,$3B, $E,	5,  4,$7F,$5B,$1E, $B,$46,  7,$13,  3
		.BYTE $DB,$AE,$2F,$CB,$B7,$EA,$B2,$5C,	8,$D3,$F8,$F6,$DE,$FC,$FE,$F8
		.BYTE $27,$1F,	7,  0,	0,  0,	0,  0,	2,  1,	0,  0,	0,  0,	0,  0
		.BYTE $10,$E0,$80,  0,	0,  0,	0,  0,$E0,$60,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,$90,$5C,$2D,$12,$A1,$73,	0,  0,$82,$C0,$60,$3C,$1E, $C
		.BYTE	0,  0,	0,  0,	0,  0,$40,$C0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $F8,$58,$30,$98,$ED,$6C,$9F,$F3,	0,$80,$C4,$E0,$F0,$F0,$60, $C
		.BYTE	0,  0,	0,$20,$10,  0,$50,$A8,	0,  0,$40,  0,	4,  0,	0,  0
		.BYTE $DC,$EE,$67,$37,$3B,$6C,$85,$54,$3F,$1F,$1F, $F,$87,  3,$23,  3
		.BYTE $DB,$2E, $F,$43,$B7,$EA,$B2,$4C,	0,$D1,$F0,$FC,$F8,$FC,$FC,$F0
		.BYTE	0,  0,$80,$50,$29,$1A,$AD,$72,	0,  0,$80,$C8,$60,$3C,$1E, $F
		.BYTE	0,  0,	0,  0,	0,  0,$40,$C0,	0,  0,	0,  0,$20,  0,$10,  0
		.BYTE  $F, $A,$17,  9,	1,  3,	2,  1,	1,  7,$41,  0,	0,  9,	0,  0
		.BYTE $D0,$70,$62,$DA,$48,$AE,$F0,$9D,	4,$80,$80,$60,$F0,$50,$3E,$7E
		.BYTE	0,  0,	0,  0,	0,  0,$48,$A4,	0,  0,	0,$40,	4,$10,	0,  0
		.BYTE $EF,$3E, $D,$5E,	7,$2B,	5,  3,$39,  7,$82,  7,$11,  0,	8,  0
		.BYTE $F8,$58,$70,$D0,$ED,$7C,$97,$E7,	0,$80,$A4,$68,$F0,$F8,$F8,$58
		.BYTE $7C,$B2,$EB,$51,$1E,$42,$17, $B,$13, $F,$16, $F,	9,  9,	0,$40
		.BYTE $A8,$78,$D7,$CE,$88,$9F,$37,$F1,$40,$80,$A8,$F0,$F6,$60,$C8,$7E
		.BYTE	0,  0,	0,$80,$52,$80,$B9,$C7,	0,  0,	0,  0,	0,$1A,	8,  0
		.BYTE  $F,$1A,	2,  5,	1,  3,	2,  1,	0,  5,$25,  8,	0,  0,	0,  0
		.BYTE $30,$B0,$30,$60,$C0,  0,	0,  0,$80,$C0,$C0,$80,	0,  0,	0,  0
		.BYTE $70,$BA,$FB,$5D,$14,$42,$17, $B, $F,  7,	7,  3,	3,  9,	0,$40
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $3F,$1F,	7,  0,	0,  0,	0,  0,	0,  0,$50,  0,	0,  0,	0,  0
		.BYTE $10,$E0,$80,  0,	0,  0,	0,  0,$E0,  0,	0,  0,	0,  0,	0,  0
byte_24D743:
		.BYTE $FD,$BA,$5A,$5D,$B7,$EB,$EB,$D7,	0,  0,	0,  0,	0,  0,	0,  0
					; DATA XREF: BANK18:off_24E743-o
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at 8000
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FD,$DA,$AA,$AD,$DF,$B8,$40,$82,	0,  0,	0,  0,	0,  0,	7,$1F
		.BYTE $EF,$D7,$EF,$E0,	4,$1F,$CE,$7F,	0,  0,	0,  0,$1F,$FF,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FD,$DA,$AA,  0,$FB,$EF,$56,$D7,	0,  0,	0,  0,$FF,$EF,$C0,$80
		.BYTE $DB,$AF,$DF,$FB,$15,$E5,$3B,$7F,	0,  0,	0,  0,	0,$E0,$F8,$60
		.BYTE $55,$AA,$AA,$55,$55,$AA,$AA,$55,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FD,$FA,$EA,$D5,$D7,$EF,$BB,$55,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FA,$FD,$EF,$D7,$D7,$EF,$BB,$55,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FD,$DA,$AA,$AD,$DF,$B8,$40,$81,	0,  0,	0,  0,	0,  0,	7,$1F
		.BYTE $EF,$D7,$EF,$E0,	0,  7,$31,$FF,	0,  0,	0,  0,$1F,$FF,$FF,$FF
		.BYTE $FD,$DA,$AA,  0,$5F,$AD,$D6,$D7,	0,  0,	0,  0,$FF,$EF,$C0,$80
		.BYTE $DB,$AF,$DF,$FB,$15,$85,$F3,$7F,	0,  0,	0,  0,	0,$E0,$F8,$60
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $83,  7,$A1,$A3,$D0,$EB,$EB,$F7,$3F,$5F, $F, $F,	7,  0,	0,  0
		.BYTE $FD,$FC,$E7,$1B,$40,$4A,$AB,$F7,$FC,$FE,$FF,$BF,$16,  0,	0,  0
		.BYTE $8F,  4,$D0,$F9,$3E,$83,$17,$FC,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $D0,$FE,$27,  8,$A4,$82,$F5,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $51,$BF,$E4,$51,	0,$95,$6E,$F9,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $D0,  0,$19,$46,$18,$E2,$1D,$47,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $EF,$3C,$82,$5B,$B7,$8B,$6B,$B5,	0,  0,$83,$7F,$37,$23,	0,  0
		.BYTE $F0,  0,$FE,$BD,$5B,$55,$B5,$FB,	0,  6,$FC,$B8,	0,  0,	0,  0
		.BYTE $55,$AB,$97,$57,$6D,$FA,$FA,$FD,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $55,$AB,$EB,$F5,$D5,$AB,$AF,$DF,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $83,  1,$A6,$A3,$D0,$EB,$EB,$F7,$3F,$5F, $F, $F,	7,  0,	0,  0
		.BYTE $2D,$F4,$1F,$BB,$40,$4A,$AB,$F7,$FC,$FE,$FF,$BF,$16,  0,	0,  0
		.BYTE $EF,$3C,$83,$7B,$B4,$AB,$6B,$B5,	0,  0,$83,$7F,$37,$23,	0,  0
		.BYTE $F0,  6,$FE,$B5,$5B,$55,$B5,$FB,	0,  6,$FC,$B8,	0,  0,	0,  0
		.BYTE $82,$50,	6,  0,$88,$21,	0,  0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$DD
		.BYTE	2,  8,$A0,  0,$10,  2,	0,  0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$DD
		.BYTE	0,$24,$51,$EE,$10,$E6,	1,$20,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	4,$21, $E,$F0,	0, $A,$E0, $F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $EF,$D7,$D7,$6F,$7D,$BA,$BA,$7D,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $EA,$D4,$D6,$ED,$DD,$AA,$AA,$55,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FD,$DA,$AA,$AD,$D7,$EB,$EB,$F7,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FB,$F5,$F5,$BB,$5D,$5A,$BA,$FD,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	1,$52,$E8,$3F,$C4,$7A, $F,$50,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	1,$14,$E3,  8,$40,$A5,$FF,$7E,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,$44,$81,$7E,	1,$5E,$F0,  2,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FE,$FD,$F9,$E3,$CF,$8C,$98,$30,	0,  1,	3,  7,$1F,$3F,$3F,$7F
		.BYTE $17,$8F,$8E,$C5,$F1,$30,$18, $C,$80,$C0,$E0,$F0,$F8,$FC,$FE,$FF
		.BYTE $FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $F8,$C0,	4,$51,	0,$95,$EF,$F3,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $90,  4,$1B,$46,$18,$E2,	0,$58,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	8,  4,$E8,$FD,$1F,  7,$41, $B,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $7F,$23,	5,  0,$A4,$FE,$FF, $F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $40,$80,$12,$40,	2,$29,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,$21,	4,$40,$12,$29,$FF,$FC,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $20,  8,	0,$A5,$1F,$F2,$9F,  7,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,$53, $C,$70,$A2,$50,$AA,$F5,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $A9,$D4,$3F, $F,$41,  8,$A1,$5F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	2,$55,$EA,$FD,$FF, $F,$5C,$A0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $10,  0,$A8,$55,$AA,$FF,$FF,  7,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $7D,$22,	8,$10,$A4,$D9,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $FE,$FC,$F1,$E2,$C4,$8C,$BB,$63,	0,  1,	3, $F,$1F,$3F,$3F,$7F
		.BYTE $68,$F1,$A9,$43,$66,$85, $A,$34,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $16,$8F,$95,$C2,$66,$A1,$50,$2C,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $7F,$3F,$9F,$4F,$27,$3B,$DC,$C6,	0,$80,$C0,$E0,$F0,$F8,$FD,$FE
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $A9,$D4,$3F, $F,$21,$88,	1,$D6,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $20,$55,$EE,$FF,$FF,$1F,$A0,  0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $90,$50,$AE,$77,$FA,$FF,$FF,  0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,$22,$88,$D4,$EF,$BD,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $40,  2,	0,$A8,$52,$A9,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,$22,	4,$40,$12,$29,$FF,$20,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,  2,$54,$AB,$5F,$F8, $E,  1,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,$53, $C,$72,$80,$24, $A,$DD,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $3B,$FF,$F7,$DD,$FB,$F7,$FF,$FF,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $6D,$FE,$BD,$FB,$D7,$F7,$FF,$FF,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $A0,$D5,$3E,  7,$10,$43,$BC,$E2,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,  7,$BC,$E0,	8,$75,$1E,$43,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $48,$A2,$7F,  3,	8,$A0,$57,$F8,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $A2,  8,$55,$EA,$3F,$E7,	9,$A4,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE $28,$83,$5E,$F0,	5,$AA,$FD,$1F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FF,$FB,$F5,$BB,$5F,$BD,$FA,$FD,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FF,$AE,$55,$AE,$FF,$FB,$F5,$F5,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FD,$FA,$55,$AA,$DD,$AF,$DB,$F5,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FF,$BD,$5A,$BD,$FF,$BF,$5B,$B5,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  1,	6,$19,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,$F0,$DC,$EF,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,$77,$AA,$55,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  3,	7,$1D,$77,$AA,$55,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,$3E,$7F,$ED,$DB,$FD,$77,$AA,$41,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,$C0,$60,$B9,$77,$AA,$55,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  3, $F,$1F,$7F,$ED,$77,$AA,$54,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,$80,$C0,$B0,$FC,$DA,$77,$AA,$55,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $DF,$AD,$AA,$DA,$F5,$F5,$FB,$FF,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE  $A,$20,$C4,$93,$64,$16,$61,$4C,$FF,$FF,$FF,$BF,$6D,$37,$65,$4C
		.BYTE	2,$10,	0,$48,$B1,$A2,$68,$15,	0,$F8,$FF,$FF,$FF,$FF,$7F,$1F
		.BYTE $F5,$35,$82,  0,$10,$42,$95,$94,	0,  0,$C0,$F8,$FF,$FF,$FF,$D7
		.BYTE $7F,$6F,$D7,$D5,$2A, $A,	5,  2,	0,  0,	0,  0,	0,$C0,$F0,$F8
		.BYTE $FF,$BF,$5F,$5F,$BF,$BF,$5D,$AA,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $FB,$F5,$F5,$DB,$AF,$AF,$DD,$FA,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  7,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,$E0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $3B,$FF,$F7,$DD,$FB,$F7,$FF,$E6,	0,  0,	0,$10,	2,  1,	2,$59
		.BYTE $7E,$F7,$EB,$DB,$D4,$DE,$E5,$69,	2,  1,	0,$60,$21,$6B,$3B,$BF
		.BYTE $DD,$BE,$DB,$17,$98,$D9,$2C,$32,	1,  0,	0,$7A,$2E,$67,$F7,$FF
		.BYTE $FB,$D6,$7E,$BD,$5A,$4E,$AC,$27,	0,$80,$40,$20,$90,$E8,$FD,$FF
		.BYTE $6D,$FE,$BD,$FB,$57,$15, $A,$42,	1,  2,	4,$28,$91,$F3,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  7,$3F,$F7,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	7,$1D,$FB,$DF,$BB,$77,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $62,$2B,$9B,$49,$4A,$A5,$71,$95,$42,  1,	9,  1,$42,  0,$50,  0
		.BYTE $6A,$22,$66,$54,$9A,$94,$69,$28,$7F,$36,$27,$14, $A,$84,$40,  0
		.BYTE $51,$A8,$A4,$94,$40,  8,	0,$14,$57,$EC,$AC,$D5,$4A,  9,	3,$1F
		.BYTE $A0,$C4,	0,$22,	2,$42,	7,$24,$FC,$FE,$BF,$FF,$FF,$FF,$FF,$FF
		.BYTE $AA,$5D,$5F,$3B,$15,$55,$4B,$A7,	0,  0,	0,  0,$80,$C0,$E0,$F0
		.BYTE $FF,$FF,$BE,$5D,$5D,$BE,$D7,$AB,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,$E0,$F8,$BE,$DD,$DB,$EE,$F7,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,$70,$DC,$6B,$FD,$FF,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,$80,$E0,$FF,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $A0,  0,$52,$AD,$DF,$FF,$FB,$F5,$7F,$AD,	0,  9,$10,  0,	0,  0
		.BYTE $92,  0,$24,$33,$5F,$BD,$FA,$FD,$FF,$FB,$D1,$8A,	0,$20,	0,  1
		.BYTE $8A,  8,$51,$2A,$F7,$FB,$F5,$F5,$FF,$AE,	4,$AC,	8,  0,	0,  0
		.BYTE $91,  2,	5,$AA,$DD,$AF,$DB,$F5,$FD,$F8,$50,$80,	0,  0,	0,  0
		.BYTE $C8,$80,$42,$B5,$FF,$BF,$5B,$B5,$FF,$BD,$18,  8,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $75,$57,$AA,$7D,$E0,$80,	8,  0,$20,  0,	0,$41,	0, $E,$7F,$FF
		.BYTE $D6,$75,$B0,$80,$41,$10,	2,  0,$84,$24,$20, $F,$7F,$FF,$FF,$FF
		.BYTE $50,$80,$40,$30,	9,  0,$20,  4,	0, $E,$7F,$7F,$FF,$FF,$FF,$FF
		.BYTE	8,$23,$1A,  4,$40,$11,$40, $B,$3F,$FF,$FD,$FF,$FF,$EF,$FF,$FD
		.BYTE $33,$4C,	2,$17,$CB,$A8,$74,$CE,$FF,$FF,$FF,$FF,$FD,$7F,$FF,$FF
		.BYTE $82,$59,$20,$24,$90,$95,$9B,$46,$F8,$FC,$FE,$FF,$FF,$FF,$EF,$FF
		.BYTE $55,$AA,$2A,$15, $A,  0,$A1,$C0,	0,  0,	0,$80,$C0,$F0,$FC,$FE
		.BYTE $FD,$FA,$FA,$BD,$5C,$58,$B3,$87,	0,  0,	0,  0,	0,  0,	7, $F
		.BYTE $FD,$FA,$FA,$FD,$FC,$1F,$E3,$7C,	0,  0,	0,  0,	0,  0,$E0,$FC
		.BYTE	0,  0,$54,$2B,$5F,$B7,$EB,$F7,$FF,$AB,	1,$8A,	0,$20,	0,  4
		.BYTE $FF,$FF,$DE,$AD,$AD,$DA,$B5,$55,	0,  0,	0,  0,	0,  0,$30,  0
		.BYTE $F7,$EB,$EB,$77,$7E,$FD,$6A,$52,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $EA,$EA,$F5,$FF,$FF,$5D,$AA,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $DB,$AF,$AF,$DF,$AB,$55,	0,$21,	0,  0,	0,  0,	0,  0,	0,$FF
		.BYTE $EB,$F7,$FF,$DD,$AA,  0,	8,  0,	2,  0,	0,  0,	0,  0,$FF,$FF
		.BYTE $10,$40,	1,$44,	0,$65,$30,  6,$FF,$FF,$FF,$BB,$FF,$FA,$CF,$FF
		.BYTE $10,$11,$42,$20,$20,$80,$2A,  0,$FF,$EF,$BD,$FF,$DF,$7F,$F7,$FF
		.BYTE $23,$42,	0,$82,	0,$C5,$24,$3B,$FF,$FD,$FF,$7F,$FF,$FA,$DF,$FF
		.BYTE	0,$24,$22,$82,$1A,$24,$87,$69,$FF,$FB,$DF,$FD,$FF,$FF,$FF,$BF
		.BYTE $27,$89,$33,$E5,$7A,$D1,$A3,$98,$FF,$7F,$DF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $22,$AD,$96,$EF,$F6,$32,$58, $E,$FF,$FB,$FD,$DF,$FF,$FF,$BF,$FD
		.BYTE $18,$8C,$57,$A9,$74,$8E,$96,$46,$FF,$FF,$FF,$FF,$EF,$7D,$FF,$FF
		.BYTE $5A,$25,$EE,$D7,$D7,$EF,$E5,$FA,$7F,$7F, $F,  0,	0,  0,	0,  0
		.BYTE $D7,$6F,$B7,$EB,$EB,$F5,$F5,$FB,$FF,$FF,$F4,  0,	0,  0,	0,  0
		.BYTE $F5,$E5,$D3,$D7,$EA,$D0,$D0,$E0,	0,  0,	0,  0,	0,  1,	7, $F
		.BYTE $4A,$94,$C0,$80,	8,$42,$AB,$61,	0,  0,	3,$1F,$7F,$FF,$FF,$FB
		.BYTE $A0,  8,$80,$12,$87,$53,$6A,$58,$20,$1F,$FF,$FF,$FF,$FF,$EE,$58
		.BYTE $50,  4,$27,$9D,$A6,$CC,$A6,$32,$FF,$FF,$FF,$FD,$B6,$EC,$A6,$32
		.BYTE	0,$44,$35,$FB,$6A,$C8, $A,$68,$FF,$FF,$FF,$FB,$EA,$C8,$4A,$68
		.BYTE $10,$AB,$6D,$68,$4A,$3A,$10,$49,$FF,$FF,$7D,$6A,$6A,$3A,$10,$49
		.BYTE	0,$10,	0,  0,	2,  0,$40,  0,	0,$10,	0,  0,	2,  0,$40,  0
		.BYTE $FB,$DF,$AF,$DF,	0,$90,	0,$22,	0,  0,	0,  0,	0,$FF,$FF,$FF
		.BYTE $50, $B,$9C,$A6,$D6,  9,$BF,$EA,$FF,$FF,$7F,$FF,$FB,$FF,$FF,$FF
		.BYTE $F1,$9B,$D4,$7C,$D7,$A7,$C9,$75,$FF,$FE,$7F,$FF,$FB,$FD,$FF,$FF
		.BYTE $FD,$FA,$FA,$BD,$5C,$58,$B5,$8F,	0,  0,	0,  0,	0,  0,	7, $F
		.BYTE $FD,$FA,$FA,$FD,$FC,$1F,$C3,$7C,	0,  0,	0,  0,	0,  0,$E0,$FC
		.BYTE $16,$8F,$95,$CA,$66,$A1,$54,$2C,$FF,$FF,$FF,$F7,$FF,$FF,$FB,$FF
		.BYTE $1B,$11,$97,$C9,$24,$3E,$DE,$E7,$EF,$FF,$FF,$7F,$FF,$FD,$FF,$DF
		.BYTE $5A,$55,$AA,$AA,$55,$AA,$AA,$55,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $F5,$F5,$FA,$FE,$54,$AA,$A3,$44,	0,  0,	0,  0,	1,  3,	7,$1F
		.BYTE	5,$23,$41,$44,$40,$E2,$20,$14,$DF,$BF,$7D,$FF,$FE,$FF,$FF,$FF
		.BYTE $82,$14,$55,$89,$52,$10,	0,$2C,$CA,$D5,$75,$A9,$52,$50,$E0,$FC
		.BYTE $16,$24,$62,$28,$59,$23,$16,$A0,$C6,$60,$60,$80,$50,  1,	0,  0
		.BYTE $64,$C2,$54,$A0,$2A,$55,$4E,$21,$40,$80,	0,  0,	2,  0, $A,  0
		.BYTE $45,$31,$AA,$8A,$B2,$39,$8A,$55,	0,$10,	0,$82,$10,$10,	2,$40
		.BYTE $6B,$D4,$5D,$BA,$D5,$6F,$D5,$BA,	0,  0,	8,  0,	0,  0,	0,$20
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $A5,$77,$5D,$11,	9,$40, $A,$40,$FF,$7F,$5D,$19,	9,$40, $A,$40
		.BYTE	0,  0,	0,  0,	0,  0,	8,  4,	0,  0,	0,  0,	0,  0, $F,$3F
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $3D,$6F,$EB,$D7,$D7,$EF,$E5,$FA,$7F,$7F, $F,  0,	0,  0,	0,  0
		.BYTE $EB,$FF,$67,$EB,$EB,$F5,$F5,$FB,$FF,$FF,$F4,  0,	0,  0,	0,  0
		.BYTE $BC,$E6,$69,$D6,$A6,$D7,$9B,$B2,$DF,$FB,$FF,$FF,$FB,$FB,$FD,$FD
		.BYTE $F8,$9A,$AF,$53,$4D,$F8,$55,$E7,$FF,$FF,$F7,$FF,$FE,$F7,$FF,$BB
		.BYTE $AA,$AA,$54,$51,$21,$82,$85,  3,	0,  0,	0,  1,	7, $F,$3F,$7F
		.BYTE $89,$12,$14,$24,	9,$A9,$D9,$62,$3F,$7F,$FF,$FF,$FF,$FF,$F7,$FF
		.BYTE $CC,$32,$40,$E8,$D3,$15,$2E,$73,$FF,$FF,$FF,$FF,$BF,$FE,$FF,$FF
		.BYTE $10,$C3,$18,  1,	2,$88,	2,$D8,$FE,$FF,$FF,$FF,$FF,$F7,$FF,$BF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $D6,$BD,	7,$60,$84, $A,$44,  0,$54,$10,	1,$F0,$FE,$FF,$FF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $A8,$AA,$7A,$D5,$BB,$1E,	3,$20,	0,  0,$10,  0,	0,  0,$E0,$FC
		.BYTE	1,  0,$44,  0,$EB,$B0,	2,  4,	7,$DF,$BB,$FF,$F7,$DF,$FD,$FF
		.BYTE $70,$D8,$22, $C,$30,$41,$64,$10,$7F,$EF,$FD,$FF,$CF,$BF,$FB,$EF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  4,$53,$AF,$72,$7D,$CA, $D,$FF,$FB,$AF,$FE,$FD,$DF,$BF,$FE
		.BYTE	2,$80,$BC,$6F,$44,$EA,$7F,$C9,$FD,$7F,$FB,$DF,$FF,$FF,$DD,$FF
		.BYTE $EE,$E7,$35,$7B,$8D,$5A,$2D,$34,$FF,$7F,$FF,$DE,$FE,$EF,$FF,$FF
		.BYTE $29,$3F,$D5,$68,$4C,$6E,$D7,$E1,$FF,$DF,$FF,$FF,$FF,$F7,$FB,$FF
		.BYTE $18,$31,$EA,$95,$2E,$71,$69,$62,$FF,$FF,$FF,$FF,$F7,$BE,$FF,$FF
		.BYTE $44,$B5,$69,$F7,$6F,$4C,$1A,$70,$FF,$DF,$BF,$FB,$FF,$FF,$FD,$BF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $C4,$91,$CC,$A7,$5F,$BB,$E5,$19,$FF,$EE,$FB,$FF,$FE,$EF,$DF,$FF
		.BYTE	0,$26,$C4,$41,$18,$24,$F0,$96,$FF,$DF,$FB,$BF,$FF,$FF,$FF,$FD
		.BYTE $D4,$43,	0,$41,$10,$83,	2,$1C,$FF,$BF,$FF,$FE,$EF,$7F,$FD,$FF
		.BYTE  $A,$48,$40,$18,	0,$81,$54,  0,$FD,$F7,$BF,$FF,$FF,$FE,$EF,$FF
		.BYTE	0,  3,$D0,$22,	0,  2,	4,$60,$FF,$FF,$FF,$DD,$FF,$FF,$FB,$FF
		.BYTE	6,$11,$40,$31,	0,$82,$26,  0,$FE,$FF,$BF,$FF,$FF,$FD,$DF,$FF
		.BYTE $80,  0,	0,$10,$C6,  8,$42,$20,$E0,$FB,$FF,$EF,$FF,$FF,$BD,$FF
		.BYTE	0,  2,$21,$22, $A,$C0, $C,$42,	0,$CE,$FF,$FF,$F5,$FF,$FF,$BF
		.BYTE  $C,$16,$21,  2,$48,$C1, $C,$42,$7C,$FE,$FF,$FF,$B7,$FE,$FF,$BF
		.BYTE $1F,$59,$F5,$CA,$B2,$1F,$AA,$E7,$FF,$FF,$EF,$FF,$7F,$EF,$FF,$DD
		.BYTE $3D,$67,$96,$6B,$65,$EB,$D9,$4D,$FB,$DF,$FF,$FF,$DF,$DF,$BF,$BF
		.BYTE $E9,$79,$C7,$A7,$72,$7D,$CA, $D,$FF,$DF,$BF,$FE,$FD,$DF,$BF,$FE
		.BYTE $89,$87,$9C,$69,$44,$EA,$7F,$C9,$FF,$7F,$FB,$DF,$FF,$FF,$DD,$FF
		.BYTE $D8,$88,$E9,$93,$24,$7C,$7B,$E7,$F7,$FF,$FF,$FE,$FF,$BF,$FF,$FB
		.BYTE $68,$F1,$A9,$53,$66,$85,$2A,$34,$FF,$FF,$FF,$EF,$FF,$FF,$DF,$FF
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $8F,$DB,$2B,$3E,$EB,$C5,$93,$AE,$FF,$7F,$FE,$FF,$DF,$BF,$FF,$FF
		.BYTE $22,$54,$38,$65,$6B,$90,$FD,$57,$DF,$FB,$FF,$FF,$DF,$FF,$FF,$FF
		.BYTE $80,$22,$1C,$E6,$81,$F4,$B3,  6,$7F,$DD,$FF,$FF,$FE,$FF,$EF,$FD
		.BYTE $10,  0,$B1,  8,	0,$A8,$7C,$17,$FF,$FF,$7F,$FF,$FF,$F7,$BF,$FF
		.BYTE $80,  0,$60,  0,	3,$9A,$54,$96,$7F,$FF,$DF,$FF,$FF,$7D,$EF,$FF
		.BYTE	0,$40, $C,  2,$A0,  0,$80,$74,$FF,$BF,$FF,$FD,$FF,$FF,$7F,$FB
		.BYTE	0,  3,	0,  2,$1C,$80,$60,  0,$FF,$FF,$FF,$FD,$EF,$7F,$FF,$FF
		.BYTE	0,$12,	0,  0,	8,$80,$60,$41,$FF,$EF,$FF,$FF,$F7,$7F,$FF,$BE
		.BYTE $94,$FC,$AB,$16,$32,$76,$EB,$87,$FF,$FB,$FF,$FF,$FF,$EF,$DF,$FF
		.BYTE $77,$E7,$AC,$DE,$B8,$5A,$34,$2C,$FF,$FE,$FF,$7B,$77,$F7,$FF,$FF
		.BYTE $C5,$7E,$9D,$56,$4A,$47,$CB,$B4,$FF,$ED,$FB,$EF,$FF,$FE,$FF,$DF
		.BYTE $75,$F2,$AE,$DD,$2A,$41,$32,$E9,$FF,$EF,$FF,$7B,$F7,$FF,$FF,$7F
off_24E743:
		.WORD byte_24D743	; DATA XREF: sub_24C097+27-r
					; sub_24C097+2C-r
					; data used at a000
off_24E745:
		.WORD byte_24C743	; DATA XREF: sub_24C097+B-r
					; sub_24C097+10-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24E747:				; CODE XREF: _b18_s0+C-p
		LDX		#5		; code used at a000
		LDA		#0		; code used at a000
		STA		_tmp12+1	; code used at a000
loc_24E74D:				; CODE XREF: sub_24E747+9-j
		STA		byte_9,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_24E74D	; code used at a000
		JSR		sub_24E89C	; code used at a000
		LDX		#$14		; code used at a000
		JSR		sub_24C0F3	; code used at a000
		LDA		word_6		; code used at a000
		BNE		loc_24E761	; code used at a000
		JMP		loc_24E7E8
loc_24E761:				; CODE XREF: sub_24E747+15-j
		LDA		#$10		; code used at a000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDA		#0		; code used at a000
		BRK
		.BYTE $A5, 7		; ofs 0x0002000e, -> dst _b1_s7
		JSR		sub_24E8B1	; code used at a000
		JSR		sub_24E89C	; code used at a000
		BRK
		.BYTE $A6, $2F		; _syscall12
		LDX		#$96       ; code used at a000
		JSR		sub_24C0F3	; code used at a000
		LDA		word_6		; code used at a000
		BEQ		loc_24E7DB	; code used at a000
		JSR		sub_24E8CA	; code used at a000
		JSR		sub_24E8B1	; code used at a000
		JSR		sub_24E89C	; code used at a000
		LDX		#$A		; code used at a000
		JSR		sub_24C0F3	; code used at a000
		LDA		word_6		; code used at a000
		BEQ		loc_24E7DB	; code used at a000
		BRK
		.BYTE $A6, $2F		; _syscall12
		JSR		sub_24E8DA	; code used at a000
		JSR		sub_24E8B1	; code used at a000
		JSR		sub_24E89C	; code used at a000
		BRK
		.BYTE $A6, $2F		; _syscall12
		LDY		#0		; code used at a000
loc_24E7A0:				; CODE XREF: sub_24E747+6C-j
		TYA				; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE $A5, 7		; ofs 0x0002000e, -> dst _b1_s7
		PLA				; code used at a000
		TAY				; code used at a000
		LDX		#7		; code used at a000
		JSR		sub_24C0F3	; code used at a000
		LDA		word_6		; code used at a000
		BEQ		loc_24E7DB	; code used at a000
		INY				; code used at a000
		CPY		#$A		; code used at a000
		BCC		loc_24E7A0	; code used at a000
		LDA		off_24EA87	; code used at a000
		STA		word_6C		; code used at a000
		LDA		off_24EA87+1	; code used at a000
		STA		word_6C+1	; code used at a000
		LDX		#0		; code used at a000
loc_24E7C1:				; CODE XREF: sub_24E747+83-j
		LDA		byte_24EA27,X	; code used at a000
		STA		_ram_pal_buf,X	; code used at a000
		INX				; code used at a000
		CPX		#$19		; code used at a000
		BCC		loc_24E7C1	; code used at a000
		JSR		sub_17435B	; code used at a000
		LDX		#1		; code used at a000
		JSR		sub_24C0F3	; code used at a000
		JSR		sub_24E90E	; code used at a000
		LDX		#0		; code used at a000
		BEQ		loc_24E7FC	; code used at a000
loc_24E7DB:				; CODE XREF: sub_24E747+34-j
					; sub_24E747+46-j sub_24E747+67-j
		LDX		#$32 
loc_24E7DD:				; CODE XREF: sub_24E747+9F-j
		LDA		_nmi_counter
loc_24E7E0:				; CODE XREF: sub_24E747+9C-j
		CMP		_nmi_counter
		BEQ		loc_24E7E0
		DEX
		BNE		loc_24E7DD
loc_24E7E8:				; CODE XREF: sub_24E747+17-j
		LDA		#2
		STA		byte_6A36
		PLA
		PLA
		JMP		sub_24C055
		LDA		#2
		STA		byte_6A36
		PLA
		PLA
		JMP		sub_24C084
loc_24E7FC:				; CODE XREF: sub_24E747+92-j
					; sub_24E747+BE-j
		LDA		byte_24E898,X	; code used at a000
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BCC		loc_24E7FC	; code used at a000
		LDA		#9		; code used at a000
		STA		byte_8		; code used at a000
		LDA		#$18		; code used at a000
		STA		byte_F		; code used at a000
		LDA		#3		; code used at a000
		STA		byte_10		; code used at a000
loc_24E813:				; CODE XREF: sub_24E747+121-j
		LDA		#$E		; code used at a000
		STA		byte_11		; code used at a000
		LDX		byte_F		; code used at a000
		LDY		#0		; code used at a000
loc_24E81B:				; CODE XREF: sub_24E747+DE-j
		LDA		byte_24EA27,X	; code used at a000
		STA		_ram_pal_buf+1,Y ; code	used at	a000
		INX				; code used at a000
		INY				; code used at a000
		CPY		#$18		; code used at a000
		BCC		loc_24E81B	; code used at a000
		STX		byte_F		; code used at a000
loc_24E829:				; CODE XREF: sub_24E747+E7-j
					; sub_24E747+11D-j
		JSR		sub_24F4DC	; code used at a000
		BCS		locret_24E88D	; code used at a000
		BVS		loc_24E829	; code used at a000
		JSR		sub_17435B	; code used at a000
		LDA		#2		; code used at a000
		JSR		sub_1740E9	; code used at a000
		JSR		sub_24C20F	; code used at a000
		BCS		loc_24E88E	; code used at a000
		LDA		word_4+1	; code used at a000
		BEQ		loc_24E848	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_24E848	; code used at a000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
loc_24E848:				; CODE XREF: sub_24E747+F8-j
					; sub_24E747+FC-j
		LDA		_nmi_counter	; code used at a000
		AND		#7		; code used at a000
		BNE		loc_24E85A	; code used at a000
		LDA		byte_8		; code used at a000
		CMP		#$11		; code used at a000
		BCS		loc_24E85A	; code used at a000
		BRK
		.BYTE $A5, 7		; ofs 0x0002000e, -> dst _b1_s7
		INC		byte_8		; code used at a000
loc_24E85A:				; CODE XREF: sub_24E747+106-j
					; sub_24E747+10C-j
		LDX		#1		; code used at a000
		JSR		sub_24C0F3	; code used at a000
		JSR		sub_24C227	; code used at a000
		DEC		byte_11		; code used at a000
		BNE		loc_24E829	; code used at a000
		DEC		byte_10		; code used at a000
		BNE		loc_24E813	; code used at a000
loc_24E86A:				; CODE XREF: sub_24E747+128-j
					; sub_24E747:loc_24E88A-j
		JSR		sub_24F4DC	; code used at a000
		BCS		locret_24E88D	; code used at a000
		BVS		loc_24E86A	; code used at a000
		JSR		_b18_s1		; code used at a000
		LDA		word_6		; code used at a000
		BEQ		loc_24E88E	; code used at a000
		LDA		_nmi_counter	; code used at a000
		AND		#7		; code used at a000
		BNE		loc_24E88A	; code used at a000
		LDA		byte_8		; code used at a000
		CMP		#$11		; code used at a000
		BCS		loc_24E88A	; code used at a000
		BRK
		.BYTE $A5, 7		; ofs 0x0002000e, -> dst _b1_s7
		INC		byte_8		; code used at a000
loc_24E88A:				; CODE XREF: sub_24E747+136-j
					; sub_24E747+13C-j
		JMP		loc_24E86A	; code used at a000
locret_24E88D:				; CODE XREF: sub_24E747+E5-j
					; sub_24E747+126-j
		RTS				; code used at a000
loc_24E88E:				; CODE XREF: sub_24E747+F4-j
					; sub_24E747+12F-j
		LDA		#2
		STA		byte_6A36
		PLA
		PLA
		JMP		loc_24C019
byte_24E898:
		.BYTE $30,  0,$23,$C0	; DATA XREF: sub_24E747:loc_24E7FC-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24E89C:				; CODE XREF: sub_24E747+B-p
					; sub_24E747+27-p sub_24E747+3C-p
					; sub_24E747+51-p
		LDX		#0		; code used at a000
		LDA		#$F		; code used at a000
loc_24E8A0:				; CODE XREF: sub_24E89C+A-j
		STA		_ram_pal_buf,X	; code used at a000
		INX				; code used at a000
		CPX		#$19		; code used at a000
		BCC		loc_24E8A0	; code used at a000
		JSR		sub_17435B	; code used at a000
		LDX		#5		; code used at a000
		JSR		sub_24C0F3	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24E8B1:				; CODE XREF: sub_24E747+24-p
					; sub_24E747+39-p sub_24E747+4E-p
		LDX		#0		; code used at a000
loc_24E8B3:				; CODE XREF: sub_24E8B1+B-j
		LDA		byte_24E8C7,X	; code used at a000
		STA		_ram_pal_buf+7,X ; code	used at	a000
		INX				; code used at a000
		CPX		#3		; code used at a000
		BCC		loc_24E8B3	; code used at a000
		JSR		sub_17435B	; code used at a000
		LDX		#3		; code used at a000
		JSR		sub_24C0F3	; code used at a000
		RTS				; code used at a000
byte_24E8C7:
		.BYTE  $F,$30,$10	; DATA XREF: sub_24E8B1:loc_24E8B3-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24E8CA:				; CODE XREF: sub_24E747+36-p
		LDX		#0		; code used at a000
loc_24E8CC:				; CODE XREF: sub_24E8CA+D-j
		LDA		byte_24E945,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		locret_24E8D9	; code used at a000
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		BNE		loc_24E8CC	; code used at a000
locret_24E8D9:				; CODE XREF: sub_24E8CA+7-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24E8DA:				; CODE XREF: sub_24E747+4B-p
		LDX		#0		; code used at a000
loc_24E8DC:				; CODE XREF: sub_24E8DA+D-j
		LDA		byte_24E9B6,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		locret_24E8E9	; code used at a000
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		BNE		loc_24E8DC	; code used at a000
locret_24E8E9:				; CODE XREF: sub_24E8DA+7-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_24E8EA:
		LDY		#0
		LDX		#0
		LDA		(word_6C),Y
		CMP		#$FF
		BCS		locret_24E90D
		STA		_tmp12+1
		INC		word_6C
		BNE		loc_24E8FC
		INC		word_6C+1
loc_24E8FC:				; CODE XREF: sub_24E8EA+E-j
					; sub_24E8EA+20-j
		LDA		(word_6C),Y
		STA		_spr_ram,X
		INX
		INC		word_6C
		BNE		loc_24E908
		INC		word_6C+1
loc_24E908:				; CODE XREF: sub_24E8EA+1A-j
		DEC		_tmp12+1
		BNE		loc_24E8FC
		CLC
locret_24E90D:				; CODE XREF: sub_24E8EA+8-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24E90E:				; CODE XREF: sub_24E747+8D-p
		LDX		#0		; code used at a000
		LDA		#$F8       ; code used at a000
loc_24E912:				; CODE XREF: sub_24E90E+8-j
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		BNE		loc_24E912	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
nullsub_1:				; CODE XREF: _b18_s0+12-p
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24E91A:				; CODE XREF: _b18_s0+F-p
		BRK
		.BYTE 0, $9F		; ofs 0x00264000, -> dst _b19_s0
		LDA		word_6		; code used at a000
		BEQ		loc_24E922	; code used at a000
		RTS				; code used at a000
loc_24E922:				; CODE XREF: sub_24E91A+5-j
		LDA		#2		; code used at a000
		STA		byte_6A36	; code used at a000
		PLA				; code used at a000
		PLA				; code used at a000
		JMP		loc_24C019	; code used at a000
_unused_32:
		.BYTE  $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE  $F, $F, $F, $F, $F, $F, $F, $F, $F
byte_24E945:
		.BYTE $30,  0,$23,$C0,$78,  9,	0,$A8,$80,$19,	0,$A8,$80,$35,	0,$B0
					; DATA XREF: sub_24E8CA:loc_24E8CC-r
		.BYTE $88,$44,	0,$A8,$88,$45,	0,$B0,$90,$54,	0,$A8,$90,$55,	0,$B0 ;	data used at a000
		.BYTE $38,$36,	1,$40,$38,$37,	1,$48,$38,$38,	1,$50,$38,$63,	1,$58
		.BYTE $38,$64,	1,$60,$40,$46,	1,$40,$40,$47,	1,$48,$40,$48,	1,$50
		.BYTE $40,$73,	1,$58,$40,$74,	1,$60,$48,$56,	1,$40,$48,$57,	1,$48
		.BYTE $48,$82,	1,$50,$48,$83,	1,$58,$48,  1,	1,$60,$50,  1,	1,$40
		.BYTE $50,  1,	1,$48,$50,$92,	1,$50,$50,$93,	1,$58,$50,  1,	1,$60
		.BYTE $FF
byte_24E9B6:
		.BYTE $30,  0,$23,$C0,$70,  9,	0,$A0,$78,$19,	0,$A0,$78,$35,	0,$A8
					; DATA XREF: sub_24E8DA:loc_24E8DC-r
		.BYTE $80,$44,	0,$A0,$80,$45,	0,$A8,$88,$54,	0,$A0,$88,$55,	0,$A8 ;	data used at a000
		.BYTE $40,$36,	1,$48,$40,$37,	1,$50,$40,$38,	1,$58,$40,$63,	1,$60
		.BYTE $40,$64,	1,$68,$48,$46,	1,$48,$48,$47,	1,$50,$48,$48,	1,$58
		.BYTE $48,$73,	1,$60,$48,$74,	1,$68,$50,$56,	1,$48,$50,$57,	1,$50
		.BYTE $50,$82,	1,$58,$50,$83,	1,$60,$50,  1,	1,$68,$58,  1,	1,$48
		.BYTE $58,  1,	1,$50,$58,$92,	1,$58,$58,$93,	1,$60,$58,  1,	1,$68
		.BYTE $FF
byte_24EA27:
		.BYTE  $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,  7,	0, $F
					; DATA XREF: sub_24E747:loc_24E7C1-r
					; sub_24E747:loc_24E81B-r
		.BYTE  $F,  0, $F, $F,	7,  0, $F,  0,	7, $F, $F, $F, $F, $F, $F, $F ;	data used at a000
		.BYTE  $F, $F, $F, $F, $F,$17,$10, $F, $A,$10, $F,  7,$17,$10, $A,$10
		.BYTE $17,  7, $F,  8,	7, $F,	8, $F, $C, $F,	7, $F,	1,$27,$20, $F
		.BYTE $1A,$20,	6,$17,$27,$20,$1A,$20,$27,$17,	7,$18,$17,  7,$18, $C
		.BYTE $1C, $F,$17,  7,$11,$37,$30, $A,$2A,$30,$16,$27,$37,$30,$2A,$30
off_24EA87:
		.WORD byte_24EA89	; DATA XREF: sub_24E747+6E-r
					; sub_24E747+73-r
					; data used at a000
byte_24EA89:
		.BYTE	1,$EC,	0,  1,$48,$36,	1,$50,$48,$37,	1,$58,$48,$38,	1,$60
					; DATA XREF: BANK18:off_24EA87-o
		.BYTE $48,$63,	1,$68,$48,$64,	1,$70,$50,$46,	1,$50,$50,$47,	1,$58 ;	ind data used at a000
		.BYTE $50,$48,	1,$60,$50,$73,	1,$68,$50,$74,	1,$70,$58,$56,	1,$50
		.BYTE $58,$57,	1,$58,$58,$82,	1,$60,$58,$83,	1,$68,$60,$93,	1,$68
		.BYTE $40,  1,	1,$60,$40,  1,	1,$68,$60,$92,	1,$60,$F8,  1,	1,$78
		.BYTE $F8,  1,	1,$78,$70,$19,	0,$98,$70,$35,	0,$A0,$78,$44,	0,$98
		.BYTE $78,$45,	0,$A0,$80,$54,	0,$98,$80,$55,	0,$A0,$68,  9,	0,$98
		.BYTE $70,  1,	0,$90,$78,  1,	0,$90,$F8,  1,	2,$70,$F8,  1,	2,$78
		.BYTE $F8,  1,	2,$70,$F8,  1,	2,$78,$F8,  1,	2,$80,$F8,  1,	2,$78
		.BYTE $F8,  1,	2,$80,$F8,  1,	2,$88,$F8,  1,	2,$80,$F8,  1,	2,$88
		.BYTE $F8,  1,	2,$90,$F8,  1,	2,$80,$F8,  1,	2,$88,$F8,  1,	2,$90
		.BYTE $F8,  1,	2,$88,$F8,  1,	2,$90,$50,  1,$40,$50,$F8,  1,$40,$70
		.BYTE $F8,  1,$40,$90,$F8,  1,	0,$A8,$F8,  1,	1,$68,$F8,  1,	1,$70
		.BYTE $F8,  1,	1,$68,$F8,  1,	1,$70,$F8,  1,	1,$68,$F8,  1,	1,$70
		.BYTE $F8,  1,	1,$50,$F8,  1,	1,$58,$F8,  1,	1,$70,$F8,  1,	1,$70
		.BYTE $90,  2,	0,$40,$A0,$FF,$FF,  0,$90,  2,	2,$40,$A0,$FF,$FF,  0
		.BYTE $90,  2,	0,$40,$A0,$FF,$FF,  0,$90,  2,	2,$40,$A0,$FF,$FF,  0
		.BYTE $90,  2,	0,$40,$A0,$FF,$FF,  0,$90,  2,	2,$40,$A0,$FF,$FF,  0
		.BYTE $90,  2,	0,$40,$A0,$FF,$FF,  0,$90,  2,	2,$40,$A0,$FF,$FF,  0
		.BYTE $90,  1,	0,$40,$A0,$FF,	0,  0,$90,  1,	0,$40,$A0,$FF,	0,  0
		.BYTE $90,  1,	0,$40,$A0,$FF,	0,  0,$90,  1,	0,$40,$A0,$FF,	0,  0
		.BYTE $90,  1,	0,$40,$A0,$FF,	0,  0,$90,  1,	1,$40,$A0,$FF,	0,  0
		.BYTE $90,  1,	0,$40,$A0,$FF,	0,  0,$90,  1,	0,$40,$A0,$FF,	0,  0
		.BYTE $90,  1,	0,$40,$A0,$FF,	0,$40,$E0, $B,$90,  1,	0,$40,$A0,$FF
		.BYTE	0,$40,	2,  1,$A8,  1,	2,$90,	1,  0,$40,$A0,$FF,  0,	0,$90
		.BYTE	1,  1,$40,$A0,$FF,  0,$40,$E0, $C,$90,	1,  0,$40,$A0,$FF,  1
		.BYTE	0,$90,	1,  0,$40,$A0,$FF,  1,	0,$90,	1,  0,$40,$A0,$FF,  1
		.BYTE	0,$90,	2,  0,$40,$A0,$FF,  1,	0,$90,	1,  0,$40,$A0,$FF,  2
		.BYTE	0,$90,	1,$FF,$40,$A0,$FF,  2,	0,$90,	1,  0,$40,$A0,$FF,  2
		.BYTE	0,$90,	1,  0,$40,$A0,$FF,  2,	0,$90,	1,  0,$40,$A0,$FF,  2
		.BYTE	0,$90,	1,  0,$40,$A0,$FF,  2,	0,$90,	1,  0,$40,$A0,$FF,  2
		.BYTE	0,$90,	1,$FF,$40,$A0,$FF,  2,	0,$A0,$FF,  2,$40,$90,	1,  0
		.BYTE $40,$D0,	0,$90,	1,  0,$40,$A0,$FF,  2,$40,  2,	1,$A4,	1,  2
		.BYTE $A0,$FF,	2,$40,$90,  1,$FF,$40,$D0,  1,$90,  1,	0,$40,$A0,$FF
		.BYTE	2,  0,$A0,$FF,	3,$40,$90,  1,	0,$40,$D0,  2,$90,  1,$FF,$40
		.BYTE $A0,$FF,	3,  0,$A0,$FF,	3,$40,$90,  1,	0,$40,$D0,  3,$90,  1
		.BYTE	0,$40,$A0,$FF,	3,  0,$A0,$FF,	4,$40,$90,  1,$FF,$40,$D0,  2
		.BYTE $90,  1,	0,$40,$A0,$FF,	4,  0,$A0,$FF,	4,$40,$90,  1,	0,$40
		.BYTE $D0,  1,$90,  1,$FF,$40,$A0,$FF,	4,  0,$A0,$FF,	4,$40,$90,  1
		.BYTE	0,$40,$D0,  0,$90,  1,	0,$40,$A0,$FF,	4,$40,	2,  1,$A4,  1
		.BYTE	2,$A0,$FF,  4,$40,$90,	1,$FF,$40,$D0,	1,$90,	1,  0,$40,$A0
		.BYTE $FF,  4,$40,$E0,	9,$90,	1,  0,$40,$D0,	2,$90,	1,$FF,$40,$A0
		.BYTE $FF,  0,$40,  2,	1,$A9,	1,  3,$90,  1,	0,$40,$D0,  3,$90,  1
		.BYTE	0,  0,$90,  1,$FF,$40,$D0,  2,$90,  1,	0,  0,$90,  1,	0,$40
		.BYTE $D0,  1,$90,  1,$FF,  0,$90,  2,	0,$40,$D0,  0,$90,  2,$FE,$40
		.BYTE	2,  1,$A4,  1,	2,$90,	2,  0,$40,$D0,	1,$90,	2,$FE,	0,$90
		.BYTE	2,  0,$40,$D0,	2,$90,	2,$FE,$40,$A0,$FE,  0,$40,  2,	1,  0
		.BYTE	1,  6,$A0,$FE,	0,$40,$90,  2,	0,$40,$D0,  3,$90,  2,$FE,$40
		.BYTE $A0,$FF,	0,  0,$A0,$FF,	0,$40,$90,  2,	0,$40,$D0,  2,$90,  2
		.BYTE $FE,$40,$A0,$FF,	0,$40,$E0,  1,$A0,$FF,	0,$40,$90,  2,	0,$40
		.BYTE $D0,  1,$90,  2,$FE,$40,$A0,$FF,	0,$40,$E0,  3,$90,  2,	0,$40
		.BYTE $D0,  0,$90,  2,$FE,  0,$90,  2,	0,  0,$90,  2,$FE,$40,$D0,  1
		.BYTE $90,  2,	0,  0,$90,  2,$FE,$40,	0,  2,$90,  2,$FE,$40,$D0,  2
		.BYTE $90,  2,$FE,$40,$A0,$FF,	0,$40,$E0,  1,$90,  2,$FE,$40,$A0,$FF
		.BYTE	0,$40,	2,  1,	0,  1,	4,$90,	2,$FE,$40,$D0,	3,$90,	2,$FE
		.BYTE	0,$90,	2,$FE,	0,$90,	2,$FE,$40,$D0,	2,$90,	2,$FE,	0,$90
		.BYTE	2,$FE,	0,$90,	2,$FE,$40,$D0,	1,$90,	2,$FE,	0,$90,	2,$FE
		.BYTE	0,$90,	2,$FE,$40,$D0,	0,$90,	0,  0,$40,$E0,$16,$90,	0,  0
		.BYTE	0,$90,	0,  0,$40,$D0,	1,  7,$14,  0,	1,  1,$B0,$B1,$CD,$CE
		.BYTE	1,$C0,$C1,$A2,$A3,  1,$D0,$D1,$B3,$BB,	1,$E0,$E1,  1,	1,  0
		.BYTE	1,  0,	3,  7,$14,  0,	1,$36,$37,$38,$63,$64,$46,$47,$48,$73
		.BYTE $74,$56,$57,$82,$83,$93,	1,  1,$92,  1,	1,$90,	0,  1,	0,$90
		.BYTE $FF,  0,	0,$90,	0,  1,	0,$90,$FF,  0,$40,$D0,	0,$90,	0,  1
		.BYTE	0,$90,$FF,  0,	0,$90,	0,  1,	0,$90,$FF,  0,$40,$D0,	1,$90
		.BYTE	0,  1,	0,$90,$FF,  0,	0,$90,	0,  1,	0,$90,$FF,  0,$40,$D0
		.BYTE	2,$90,	0,  1,	0,$90,$FF,  0,	0,$90,	0,  1,	0,$90,$FF,  0
		.BYTE $40,$D0,	3,$90,	0,$FF,	0,$90,$FF,  0,	0,$90,	0,$FF,	0,$90
		.BYTE $FF,  0,$40,$D0,	2,$90,	0,$FF,	0,$90,$FF,  0,	0,$90,	0,$FF
		.BYTE	0,$90,$FF,  0,$40,$D0,	1,$90,	0,$FF,	0,$90,$FF,  0,	0,$90
		.BYTE	0,$FF,	0,$90,$FF,  0,$40,$D0,	0,$90,	0,$FF,	0,$90,$FF,  0
		.BYTE	0,$90,	0,$FF,	0,$90,$FF,  0,$40,$D0,	1,$90,	0,  1,	0,$90
		.BYTE	1,  0,	0,$90,	0,  1,$40,$A0,	1,  0,	0,$90,	1,  0,$40,$D0
		.BYTE	2,$90,	0,  1,	0,$90,	1,  0,	0,$90,	0,  1,	0,$90,	1,  0
		.BYTE $40,$D0,	3,$90,	0,  1,$40,$A0,	1,  0,	0,$90,	1,  0,	0,$90
		.BYTE	0,  1,	0,$90,	1,  0,$40,$D0,	2,$90,	0,  1,	0,$90,	1,  0
		.BYTE	0,$90,	0,  1,$40,$A0,	1,  0,	0,$90,	1,  0,$40,$D0,	1,$90
		.BYTE	0,$FF,	0,$90,	1,  0,	0,$90,	0,$FF,	0,$90,	1,  0,$40,$D0
		.BYTE	0,$90,	0,$FF,$40,$A0,	1,  0,$40,$E0,$15,$90,	1,  0,$40,$A0
		.BYTE	1,  0,	0,$90,	0,$FF,	0,$90,	1,  0,$40,$D0,	1,$90,	0,$FF
		.BYTE	0,$90,	1,  0,	0,$90,	0,$FF,	0,$90,	1,  0,$40,$D0,	2,$90
		.BYTE	0,$FF,$40,$A0,	1,  0,	0,$90,	1,  0,	0,$90,	0,$FF,	0,$90
		.BYTE	1,  0,$40,$D0,	3,$90,	0,  1,	0,$90,$FF,  0,	0,$90,	0,  1
		.BYTE $40,$A0,	1,  0,	0,$90,$FF,  0,$40,$D0,	2,$90,	0,  1,	0,$90
		.BYTE $FF,  0,	0,$90,	0,  1,	0,$90,$FF,  0,$40,$D0,	1,$90,	0,  1
		.BYTE $40,$A0,	1,  0,$40,$E0,$16,$90,$FF,  0,$40,$A0,	1,  0,	0,$90
		.BYTE	0,  1,	0,$90,$FF,  0,$40,$D0,	0,$90,	0,  1,	0,$90,$FF,  0
		.BYTE	0,$90,	0,  1,	0,$90,$FF,  0,$40,$D0,	1,$90,	0,$FF,$40,$A0
		.BYTE	1,  0,	0,$90,$FF,  0,	0,$90,	0,$FF,	0,$90,$FF,  0,$40,$D0
		.BYTE	2,$90,	0,$FF,	0,$90,$FF,  0,	0,$90,	0,$FF,$40,$A0,	1,  0
		.BYTE	0,$90,$FF,  0,$40,$D0,	3,$90,	0,$FF,	0,$90,$FF,  0,	0,$90
		.BYTE	0,$FF,	0,$90,$FF,  0,$40,$D0,	2,$90,	0,$FF,$40,$A0,	1,  0
		.BYTE $40,$E0,$15,$90,$FF,  0,$40,$A0,	1,  0,	0,$90,	0,$FF,	0,$90
		.BYTE $FF,  0,$40,$D0,	1,$90,	0,  1,	0,$90,	1,  0,	0,$90,	0,  1
		.BYTE	0,$90,	1,  0,$40,$D0,	0,$90,	0,  1,$40,$A0,	1,  0,	0,$90
		.BYTE	1,  0,	0,$90,	0,  1,	0,$90,	1,  0,$40,$D0,	1,$90,	0,  1
		.BYTE	0,$90,	1,  0,	0,$90,	0,  1,$40,$A0,	1,  0,	0,$90,	1,  0
		.BYTE $40,$D0,	2,$90,	0,  1,	0,$90,	1,  0,	0,$90,	0,  1,	0,$90
		.BYTE	1,  0,$40,$D0,	3,$90,	0,$FF,$40,$A0,	1,  0,$40,$E0,$16,$90
		.BYTE	1,  0,$40,$A0,	1,  0,	0,$90,	0,$FF,	0,$90,	1,  0,$40,$D0
		.BYTE	2,$90,	0,$FF,	0,$90,	1,  0,	0,$90,	0,$FF,	0,$90,	1,  0
		.BYTE $40,$D0,	1,$90,	0,$FF,$40,$A0,	1,  0,	0,$90,	1,  0,	0,$90
		.BYTE	0,$FF,	0,$90,	1,  0,$40,$D0,	0,$90,	0,$FF,	0,$90,	1,  0
		.BYTE	0,$90,	0,$FF,$40,$A0,	1,  0,	0,$90,	1,  0,$40,$D0,	1,$90
		.BYTE	0,  1,$40,$A0,	1,  0,$40,$E0,$15,$90,	1,  0,$40,$A0,	1,  0
		.BYTE	0,$90,	0,  1,	0,$90,	1,  0,$40,$D0,	2,$90,	0,  1,	0,$90
		.BYTE	1,  0,	0,$90,	0,  1,	0,$90,	1,  0,$40,$D0,	3,$90,	0,  1
		.BYTE $40,$A0,	1,  0,	0,$90,	1,  0,	0,$90,	0,  1,	0,$90,	1,  0
		.BYTE $40,$D0,	2,$90,	0,  1,	0,$90,	1,  0,	0,$90,	0,  1,$40,$A0
		.BYTE	1,  0,	0,$90,	1,  0,$40,$D0,	1,$90,	0,$FF,$40,$A0,	1,  0
		.BYTE $40,$E0,$16,$90,	1,  0,$40,$A0,	1,  0,	0,$90,	0,$FF,	0,$90
		.BYTE	1,  0,$40,$D0,	0,$90,	0,$FF,	0,$90,	1,  0,	0,$90,	0,$FF
		.BYTE	0,$90,	1,  0,$40,$D0,	1,$90,	0,$FF,$40,$A0,	1,  0,	0,$90
		.BYTE	1,  0,	0,$90,	0,$FF,	0,$90,	1,  0,$40,$D0,	2,$90,	0,$FF
		.BYTE	0,$90,	1,  0,	0,$90,	0,$FF,$40,$A0,	1,  0,	0,$90,	1,  0
		.BYTE $40,$D0,	3,$90,	0,  1,$40,$A0,	1,  0,$40,$E0,$15,$90,$FF,  0
		.BYTE $40,$A0,	1,  0,	0,$90,	0,  1,	0,$90,$FF,  0,$40,$D0,	2,$90
		.BYTE	0,  1,	0,$90,$FF,  0,	0,$90,	0,  1,	0,$90,$FF,  0,$40,$D0
		.BYTE	1,$90,	0,  1,$40,$A0,	1,  0,	0,$90,$FF,  0,	0,$90,	0,  1
		.BYTE	0,$90,$FF,  0,$40,$D0,	0,$90,	0,  1,	0,$90,$FF,  0,	0,$90
		.BYTE	0,  1,$40,$A0,	1,  0,	0,$90,$FF,  0,$40,$D0,	1,$90,	0,$FF
		.BYTE $40,$A0,	1,  0,$40,$E0,$16,$90,$FF,  0,$40,$A0,	1,  0,	0,$90
		.BYTE	0,$FF,	0,$90,$FF,  0,$40,$D0,	2,$90,	0,$FF,	0,$90,$FF,  0
		.BYTE	0,$90,	0,$FF,	0,$90,$FF,  0,$40,$D0,	3,$90,	0,$FF,$40,$A0
		.BYTE	1,  0,	0,$90,$FF,  0,	0,$90,	0,$FF,	0,$90,$FF,  0,$40,$D0
		.BYTE	2,$90,	0,$FF,	0,$90,$FF,  0,	0,$90,	0,$FF,$40,$A0,	1,  0
		.BYTE	0,$90,$FF,  0,$40,$D0,	1,$FF

; =============== S U B	R O U T	I N E =======================================
sub_24F261:
		JMP		sub_24F414

; =============== S U B	R O U T	I N E =======================================
sub_24F264:
		JMP		sub_24F431

; =============== S U B	R O U T	I N E =======================================
sub_24F267:
		JMP		sub_24F44E

; =============== S U B	R O U T	I N E =======================================
sub_24F26A:				; CODE XREF: sub_24F326+2-p
					; sub_24F4DC:loc_24F5AD-j
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		STA		word_4		; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F276	; code used at a000
		INC		word_6C+1	; code used at a000
loc_24F276:				; CODE XREF: sub_24F26A+8-j
		LDY		#$14		; code used at a000
		LDX		#7		; code used at a000
		JSR		sub_24F337	; code used at a000
		LDA		_spr_ram+$BB	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram+$BB	; code used at a000
		LDA		_spr_ram+$E3	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram+$E3	; code used at a000
		LDA		_spr_ram+$E7	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram+$E7	; code used at a000
		LDA		_spr_ram+$EB	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram+$EB	; code used at a000
		LDA		_spr_ram+$EF	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram+$EF	; code used at a000
		LDY		#$10		; code used at a000
		LDX		#$7B       ; code used at a000
		JSR		sub_24F337	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		STA		word_4		; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F2BD	; code used at a000
		INC		word_6C+1	; code used at a000
loc_24F2BD:				; CODE XREF: sub_24F26A+4F-j
		LDY		#$12		; code used at a000
		LDX		#4		; code used at a000
		JSR		sub_24F337	; code used at a000
		LDY		#$10		; code used at a000
		LDX		#$78       ; code used at a000
		JSR		sub_24F337	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F2D5	; code used at a000
		INC		word_6C+1	; code used at a000
loc_24F2D5:				; CODE XREF: sub_24F26A+67-j
		STA		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24F2DB:				; CODE XREF: sub_24F326+7-p
					; sub_24F4DC:loc_24F5B0-j
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		STA		word_4		; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F2E7	; code used at a000
		INC		word_6C+1
loc_24F2E7:				; CODE XREF: sub_24F2DB+8-j
		LDY		#9		; code used at a000
		LDX		#$57       ; code used at a000
		JSR		sub_24F337	; code used at a000
		LDA		_spr_ram+$C3	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram+$C3	; code used at a000
		LDA		_spr_ram+$C7	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram+$C7	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		STA		word_4		; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F30C	; code used at a000
		INC		word_6C+1	; code used at a000
loc_24F30C:				; CODE XREF: sub_24F2DB+2D-j
		LDY		#9		; code used at a000
		LDX		#$54       ; code used at a000
		JSR		sub_24F337	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_6C),Y	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F31D	; code used at a000
		INC		word_6C+1	; code used at a000
loc_24F31D:				; CODE XREF: sub_24F2DB+3E-j
		STA		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24F323:				; CODE XREF: sub_24F4DC:loc_24F5B3-j
		JMP		sub_24F3C7

; =============== S U B	R O U T	I N E =======================================
sub_24F326:				; CODE XREF: sub_24F4DC:loc_24F5BF-j
		TXA
		PHA
		JSR		sub_24F26A
		PLA
		TAX
		JSR		sub_24F2DB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F331:				; CODE XREF: sub_24F4DC:loc_24F5B6-j
		JMP		sub_24F35D	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24F334:				; CODE XREF: sub_24F4DC:loc_24F5BC-j
		JMP		sub_24F39D	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24F337:				; CODE XREF: sub_24F26A+10-p
					; sub_24F26A+44-p sub_24F26A+57-p
					; sub_24F26A+5E-p sub_24F2DB+10-p
					; sub_24F2DB+35-p sub_24F46B+10-p
					; sub_24F46B+44-p sub_24F46B+57-p
					; sub_24F46B+5E-p
		PHA				; code used at a000
loc_24F338:				; CODE XREF: sub_24F337+F-j
		LDA		_spr_ram,X	; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		DEY				; code used at a000
		BNE		loc_24F338	; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_24F34A:
		PHA
loc_24F34B:				; CODE XREF: sub_24F34A+F-j
		LDA		_spr_ram,X
		SEC
		SBC		word_4
		STA		_spr_ram,X
		INX
		INX
		INX
		INX
		DEY
		BNE		loc_24F34B
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F35D:				; CODE XREF: sub_24F331-j
		LDA		(word_6C),Y	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F365	; code used at a000
		INC		word_6C+1
loc_24F365:				; CODE XREF: sub_24F35D+4-j
		TAX				; code used at a000
		LDA		off_24F39B	; code used at a000
		STA		word_6E		; code used at a000
		LDA		off_24F39B+1	; code used at a000
		STA		word_6E+1	; code used at a000
		TXA				; code used at a000
		BEQ		loc_24F381	; code used at a000
loc_24F373:				; CODE XREF: sub_24F35D+22-j
		LDA		word_6E		; code used at a000
		CLC				; code used at a000
		ADC		#$14		; code used at a000
		STA		word_6E		; code used at a000
		BCC		loc_24F37E	; code used at a000
		INC		word_6E+1
loc_24F37E:				; CODE XREF: sub_24F35D+1D-j
		DEX				; code used at a000
		BNE		loc_24F373	; code used at a000
loc_24F381:				; CODE XREF: sub_24F35D+14-j
		LDY		#0		; code used at a000
		LDX		#0		; code used at a000
loc_24F385:				; CODE XREF: sub_24F35D+34-j
		LDA		(word_6E),Y	; code used at a000
		STA		_spr_ram+5,X	; code used at a000
		INY				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		CPY		#$14		; code used at a000
		BCC		loc_24F385	; code used at a000
		LDA		#0		; code used at a000
loc_24F395:				; code used at a000
		STA		word_4
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
off_24F39B:
		.WORD byte_24FAC1	; DATA XREF: sub_24F35D+9-r
					; sub_24F35D+E-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24F39D:				; CODE XREF: sub_24F334-j
		LDA		(word_6C),Y	; code used at a000
		INC		word_6C		; code used at a000
loc_24F3A1:				; code used at a000
		BNE		loc_24F3A5
		INC		word_6C+1
loc_24F3A5:				; CODE XREF: sub_24F39D:loc_24F3A1-j
		STA		word_4		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		TAY				; code used at a000
		LDX		#0		; code used at a000
loc_24F3B0:				; CODE XREF: sub_24F39D+20-j
		LDA		byte_24FBED,Y	; code used at a000
		STA		_spr_ram+$55,X	; code used at a000
		INY				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
loc_24F3BB:				; code used at a000
		CPX		#$24 
		BCC		loc_24F3B0	; code used at a000
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24F3C7:				; CODE XREF: sub_24F323-j
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24F3CF
		INC		word_6C+1
loc_24F3CF:				; CODE XREF: sub_24F3C7+4-j
		ASL
		ASL
		ASL
		ASL
		TAY
		LDX		#0
loc_24F3D6:				; CODE XREF: sub_24F3C7+1C-j
		LDA		byte_24FCBC,Y
		STA		_spr_ram+$79,X
		INY
		INX
		INX
		INX
		INX
		CPX		#$40 
		BCC		loc_24F3D6
		LDX		#0
		LDY		#0
loc_24F3E9:				; CODE XREF: sub_24F3C7+33-j
		LDA		byte_24F404,X
		CLC
		ADC		_spr_ram+$28
		STA		_spr_ram+$78,Y
		INY
		INY
		INY
		INY
		INX
		CPX		#$10
		BCC		loc_24F3E9
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS
byte_24F404:
		.BYTE	0,  0,	8,  8,	8,$10,$10,$10,$18,$18,$18,$20,$20,$20,$28,$28
					; DATA XREF: sub_24F3C7:loc_24F3E9-r

; =============== S U B	R O U T	I N E =======================================
sub_24F414:				; CODE XREF: sub_24F261-j sub_24F69A-p
					; sub_24F727-p
		LDX		#0		; code used at a000
loc_24F416:				; CODE XREF: sub_24F414+13-j
		LDA		(word_6C),Y	; code used at a000
		STA		_spr_ram+5,X	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F421	; code used at a000
		INC		word_6C+1
loc_24F421:				; CODE XREF: sub_24F414+9-j
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		CPX		#$50       ; code used at a000
		BCC		loc_24F416	; code used at a000
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_24F431:				; CODE XREF: sub_24F264-j sub_24F71C-p
		LDX		#0
loc_24F433:				; CODE XREF: sub_24F431+13-j
		LDA		(word_6C),Y
		STA		_spr_ram+$55,X
		INC		word_6C
		BNE		loc_24F43E
		INC		word_6C+1
loc_24F43E:				; CODE XREF: sub_24F431+9-j
		INX
		INX
		INX
		INX
		CPX		#$24 
		BCC		loc_24F433
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F44E:				; CODE XREF: sub_24F267-j
		LDX		#0
loc_24F450:				; CODE XREF: sub_24F44E+13-j
		LDA		(word_6C),Y
		STA		_spr_ram+$79,X
		INC		word_6C
		BNE		loc_24F45B
		INC		word_6C+1
loc_24F45B:				; CODE XREF: sub_24F44E+9-j
		INX
		INX
		INX
		INX
		CPX		#$40 
		BCC		loc_24F450
		LDA		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F46B:				; CODE XREF: sub_24F4DC:loc_24F5B9-j
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_24F477
		INC		word_6C+1
loc_24F477:				; CODE XREF: sub_24F46B+8-j
		LDY		#$14
		LDX		#7
		JSR		sub_24F337
		LDA		_spr_ram+$BB
		CLC
		ADC		word_4
		STA		_spr_ram+$BB
		LDA		_spr_ram+$E3
		CLC
		ADC		word_4
		STA		_spr_ram+$E3
		LDA		_spr_ram+$E7
		CLC
		ADC		word_4
		STA		_spr_ram+$E7
		LDA		_spr_ram+$EB
		CLC
		ADC		word_4
		STA		_spr_ram+$EB
		LDA		_spr_ram+$EF
		CLC
		ADC		word_4
		STA		_spr_ram+$EF
		LDY		#$10
		LDX		#$7B 
		JSR		sub_24F337
		LDY		#0
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_24F4BE
		INC		word_6C+1
loc_24F4BE:				; CODE XREF: sub_24F46B+4F-j
		LDY		#$14
		LDX		#4
		JSR		sub_24F337
		LDY		#$10
		LDX		#$78 
		JSR		sub_24F337
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24F4D6
		INC		word_6C+1
loc_24F4D6:				; CODE XREF: sub_24F46B+67-j
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F4DC:				; CODE XREF: sub_24E747:loc_24E829-p
					; sub_24E747:loc_24E86A-p
		LDY		#$FF		; code used at a000
		STY		word_4+1	; code used at a000
		LDY		#0		; code used at a000
		STY		word_6+1	; code used at a000
		INC		word_6+1	; code used at a000
		LDA		(word_6C),Y	; code used at a000
		BEQ		loc_24F537	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_24F564	; code used at a000
		TAX				; code used at a000
		BMI		loc_24F56C	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F4F7	; code used at a000
		INC		word_6C+1
loc_24F4F7:				; CODE XREF: sub_24F4DC+17-j
		LDA		(word_6C),Y	; code used at a000
		STA		word_4		; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F501	; code used at a000
		INC		word_6C+1
loc_24F501:				; CODE XREF: sub_24F4DC+21-j
		LDA		(word_6C),Y	; code used at a000
		STA		word_4+1	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F50B	; code used at a000
		INC		word_6C+1
loc_24F50B:				; CODE XREF: sub_24F4DC+2B-j
		LDA		(word_6C),Y	; code used at a000
		STA		word_6+1	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F515	; code used at a000
		INC		word_6C+1
loc_24F515:				; CODE XREF: sub_24F4DC+35-j
		TXA				; code used at a000
		LDX		#0		; code used at a000
		CMP		#1		; code used at a000
		BEQ		loc_24F598	; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_24F59B	; code used at a000
		CMP		#3		; code used at a000
		BEQ		loc_24F59E	; code used at a000
		CMP		#4		; code used at a000
		BEQ		loc_24F5A1	; code used at a000
		CMP		#5		; code used at a000
		BEQ		loc_24F5A4	; code used at a000
		CMP		#6		; code used at a000
		BEQ		loc_24F5A7	; code used at a000
		CMP		#7		; code used at a000
		BEQ		loc_24F5AA	; code used at a000
loc_24F534:				; CODE XREF: sub_24F4DC:loc_24F534-j
		JMP		loc_24F534
loc_24F537:				; CODE XREF: sub_24F4DC+C-j
		INC		word_6C		; code used at a000
		BNE		loc_24F53D	; code used at a000
		INC		word_6C+1
loc_24F53D:				; CODE XREF: sub_24F4DC+5D-j
		LDA		(word_6C),Y	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F545	; code used at a000
		INC		word_6C+1
loc_24F545:				; CODE XREF: sub_24F4DC+65-j
		CMP		#1		; code used at a000
		BEQ		loc_24F5C2	; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_24F5C5	; code used at a000
		CMP		#3		; code used at a000
		BEQ		loc_24F5C8	; code used at a000
		CMP		#4
		BEQ		loc_24F5CB
		CMP		#5
		BEQ		loc_24F5CE
		CMP		#6
		BEQ		loc_24F5D1
		CMP		#7
		BEQ		loc_24F5D4
loc_24F561:				; CODE XREF: sub_24F4DC:loc_24F561-j
		JMP		loc_24F561
loc_24F564:				; CODE XREF: sub_24F4DC+10-j
		INC		word_6C		; code used at a000
		BNE		loc_24F56A	; code used at a000
		INC		word_6C+1
loc_24F56A:				; CODE XREF: sub_24F4DC+8A-j
		SEC				; code used at a000
		RTS				; code used at a000
loc_24F56C:				; CODE XREF: sub_24F4DC+13-j
		INC		word_6C		; code used at a000
		BNE		loc_24F572	; code used at a000
		INC		word_6C+1
loc_24F572:				; CODE XREF: sub_24F4DC+92-j
		LDA		#1		; code used at a000
		STA		word_6+1	; code used at a000
		TXA				; code used at a000
		AND		#$70       ; code used at a000
		CMP		#$10		; code used at a000
		BEQ		loc_24F5AD	; code used at a000
		CMP		#$20       ; code used at a000
		BEQ		loc_24F5B0	; code used at a000
		CMP		#$30       ; code used at a000
		BEQ		loc_24F5BF	; code used at a000
		CMP		#$40       ; code used at a000
		BEQ		loc_24F5B3	; code used at a000
		CMP		#$50       ; code used at a000
		BEQ		loc_24F5B6	; code used at a000
		CMP		#$60       ; code used at a000
		BEQ		loc_24F5BC	; code used at a000
		CMP		#$70 
		BEQ		loc_24F5B9
loc_24F595:				; CODE XREF: sub_24F4DC:loc_24F595-j
		JMP		loc_24F595
loc_24F598:				; CODE XREF: sub_24F4DC+3E-j
		JMP		loc_24F5D7	; code used at a000
loc_24F59B:				; CODE XREF: sub_24F4DC+42-j
		JMP		loc_24F5EF	; code used at a000
loc_24F59E:				; CODE XREF: sub_24F4DC+46-j
		JMP		loc_24F654
loc_24F5A1:				; CODE XREF: sub_24F4DC+4A-j
		JMP		sub_24F69A
loc_24F5A4:				; CODE XREF: sub_24F4DC+4E-j
		JMP		sub_24F704
loc_24F5A7:				; CODE XREF: sub_24F4DC+52-j
		JMP		sub_24F71C
loc_24F5AA:				; CODE XREF: sub_24F4DC+56-j
		JMP		sub_24F727	; code used at a000
loc_24F5AD:				; CODE XREF: sub_24F4DC+9F-j
		JMP		sub_24F26A	; code used at a000
loc_24F5B0:				; CODE XREF: sub_24F4DC+A3-j
		JMP		sub_24F2DB	; code used at a000
loc_24F5B3:				; CODE XREF: sub_24F4DC+AB-j
		JMP		sub_24F323
loc_24F5B6:				; CODE XREF: sub_24F4DC+AF-j
		JMP		sub_24F331	; code used at a000
loc_24F5B9:				; CODE XREF: sub_24F4DC+B7-j
		JMP		sub_24F46B
loc_24F5BC:				; CODE XREF: sub_24F4DC+B3-j
		JMP		sub_24F334	; code used at a000
loc_24F5BF:				; CODE XREF: sub_24F4DC+A7-j
		JMP		sub_24F326
loc_24F5C2:				; CODE XREF: sub_24F4DC+6B-j
		JMP		sub_24F834	; code used at a000
loc_24F5C5:				; CODE XREF: sub_24F4DC+6F-j
		JMP		sub_24F8B1	; code used at a000
loc_24F5C8:				; CODE XREF: sub_24F4DC+73-j
		JMP		sub_24F904	; code used at a000
loc_24F5CB:				; CODE XREF: sub_24F4DC+77-j
		JMP		sub_24F95D
loc_24F5CE:				; CODE XREF: sub_24F4DC+7B-j
		JMP		sub_24F95D
loc_24F5D1:				; CODE XREF: sub_24F4DC+7F-j
		JMP		sub_24F9BD
loc_24F5D4:				; CODE XREF: sub_24F4DC+83-j
		JMP		sub_24F9D7
loc_24F5D7:				; CODE XREF: sub_24F4DC:loc_24F598-j
					; sub_24F4DC+109-j
		LDA		(word_6C),Y	; code used at a000
		STA		_spr_ram+4,X	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F5E2	; code used at a000
		INC		word_6C+1	; code used at a000
loc_24F5E2:				; CODE XREF: sub_24F4DC+102-j
		INX				; code used at a000
		DEC		word_4		; code used at a000
		BNE		loc_24F5D7	; code used at a000
		LDY		#0		; code used at a000
		STY		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_24F5EF:				; CODE XREF: sub_24F4DC:loc_24F59B-j
		LDA		(word_6C),Y	; code used at a000
		INC		word_6C		; code used at a000
		BNE		loc_24F5F7	; code used at a000
		INC		word_6C+1
loc_24F5F7:				; CODE XREF: sub_24F4DC+117-j
		CMP		#1		; code used at a000
		BEQ		loc_24F612	; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_24F61F	; code used at a000
		CMP		#3		; code used at a000
		BEQ		loc_24F626	; code used at a000
		CMP		#4		; code used at a000
		BEQ		loc_24F633	; code used at a000
		CMP		#5		; code used at a000
		BEQ		loc_24F63A	; code used at a000
		CMP		#6		; code used at a000
		BEQ		loc_24F647	; code used at a000
loc_24F60F:				; CODE XREF: sub_24F4DC:loc_24F60F-j
		JMP		loc_24F60F
loc_24F612:				; CODE XREF: sub_24F4DC+11D-j
		LDA		_spr_ram+$48
		STA		_spr_ram+$B8
		LDA		#8
		STA		_spr_ram+$B9
		BNE		loc_24F64C
loc_24F61F:				; CODE XREF: sub_24F4DC+121-j
		LDA		#1		; code used at a000
		STA		_spr_ram+$B9	; code used at a000
		BNE		loc_24F64C	; code used at a000
loc_24F626:				; CODE XREF: sub_24F4DC+125-j
		LDA		_spr_ram+$64	; code used at a000
		STA		_spr_ram+$C0	; code used at a000
		LDA		#8		; code used at a000
		STA		_spr_ram+$C1	; code used at a000
		BNE		loc_24F64C	; code used at a000
loc_24F633:				; CODE XREF: sub_24F4DC+129-j
		LDA		#1		; code used at a000
		STA		_spr_ram+$C1	; code used at a000
		BNE		loc_24F64C	; code used at a000
loc_24F63A:				; CODE XREF: sub_24F4DC+12D-j
		LDA		_spr_ram+$64
		STA		_spr_ram+$C4
		LDA		#8
		STA		_spr_ram+$C5
		BNE		loc_24F64C
loc_24F647:				; CODE XREF: sub_24F4DC+131-j
		LDA		#1		; code used at a000
		STA		_spr_ram+$C5	; code used at a000
loc_24F64C:				; CODE XREF: sub_24F4DC:loc_24F61D-j
					; sub_24F4DC+148-j sub_24F4DC+155-j
					; sub_24F4DC+15C-j sub_24F4DC+169-j
		LDY		#0		; code used at a000
		STY		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_24F654:				; CODE XREF: sub_24F4DC:loc_24F59E-j
		LDA		word_4
		PHA
loc_24F657:				; CODE XREF: sub_24F4DC+18C-j
		LDA		(word_6C),Y
		STA		_spr_ram+$79,X
		INC		word_6C
		BNE		loc_24F662
		INC		word_6C+1
loc_24F662:				; CODE XREF: sub_24F4DC+182-j
		INX
		INX
		INX
		INX
		DEC		word_4
		BNE		loc_24F657
		PLA
		STA		word_4
		LDX		#0
loc_24F66F:				; CODE XREF: sub_24F4DC+1A4-j
		LDA		byte_24F68A,X
		CLC
		ADC		_spr_ram+$28
		STA		_spr_ram+$78,Y
		INY
		INY
		INY
		INY
		INX
		DEC		word_4
		BNE		loc_24F66F
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
byte_24F68A:
		.BYTE	0,  0,	8,  8,	8,$10,$10,$10,$18,$18,$18,$20,$20,$20,$28,$28
					; DATA XREF: sub_24F4DC:loc_24F66F-r

; =============== S U B	R O U T	I N E =======================================
sub_24F69A:				; CODE XREF: sub_24F4DC:loc_24F5A1-j
		JSR		sub_24F414
		LDA		_spr_ram+$4C
		CMP		#$F8 
		BNE		loc_24F6D6
		LDA		_spr_ram+$14
		STA		_spr_ram+$4C
		LDA		_spr_ram+$28
		STA		_spr_ram+$50
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_24F6BA
		INC		word_6C+1
loc_24F6BA:				; CODE XREF: sub_24F69A+1C-j
		LDX		#0
loc_24F6BC:				; CODE XREF: sub_24F69A+32-j
		LDA		_spr_ram+6,X
		AND		#$FC 
		ORA		word_4
		STA		_spr_ram+6,X
		INX
		INX
		INX
		INX
		CPX		#$50 
		BCC		loc_24F6BC
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_24F6D6:				; CODE XREF: sub_24F69A+8-j
		LDA		#$F8 
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		(word_6C),Y
		STA		word_4
		INC		word_6C
		BNE		loc_24F6E8
		INC		word_6C+1
loc_24F6E8:				; CODE XREF: sub_24F69A+4A-j
		LDX		#0
loc_24F6EA:				; CODE XREF: sub_24F69A+60-j
		LDA		_spr_ram+6,X
		AND		#$FC 
		ORA		word_4
		STA		_spr_ram+6,X
		INX
		INX
		INX
		INX
		CPX		#$50 
		BCC		loc_24F6EA
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
locret_24F703:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F704:				; CODE XREF: sub_24F4DC:loc_24F5A4-j
					; sub_24F704+E-j
		LDA		(word_6C),Y
		STA		_spr_ram+$C8,X
		INC		word_6C
		BNE		loc_24F70F
		INC		word_6C+1
loc_24F70F:				; CODE XREF: sub_24F704+7-j
		INX
		DEC		word_4
		BNE		sub_24F704
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F71C:				; CODE XREF: sub_24F4DC:loc_24F5A7-j
		JSR		sub_24F431
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F727:				; CODE XREF: sub_24F4DC:loc_24F5AA-j
		JSR		sub_24F414	; code used at a000
		LDA		_spr_ram+6	; code used at a000
		AND		#$40       ; code used at a000
		BEQ		loc_24F734	; code used at a000
		JMP		loc_24F7B4	; code used at a000
loc_24F734:				; CODE XREF: sub_24F727+8-j
		LDA		_spr_ram+$C	; code used at a000
		CMP		_spr_ram+$40	; code used at a000
		BCS		loc_24F785	; code used at a000
		SEC
		SBC		#8
		STA		_spr_ram+$40
		STA		_spr_ram+$44
		LDA		#$F8 
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		_spr_ram+$43
		STA		_spr_ram+$E3
		LDA		_spr_ram+$47
		STA		_spr_ram+$E7
		LDA		_spr_ram+$4F
		STA		_spr_ram+$EB
		LDA		_spr_ram+$53
		STA		_spr_ram+$EF
		LDA		_spr_ram+$F
		STA		_spr_ram+$43
		LDA		_spr_ram+$13
		STA		_spr_ram+$47
		LDA		_spr_ram+$17
		CLC
		ADC		#8
		STA		_spr_ram+$4F
		STA		_spr_ram+$53
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS
loc_24F785:				; CODE XREF: sub_24F727+13-j
		LDA		_spr_ram+$48	; code used at a000
		STA		_spr_ram+$40	; code used at a000
		STA		_spr_ram+$44	; code used at a000
		STA		_spr_ram+$4C	; code used at a000
		STA		_spr_ram+$50	; code used at a000
		LDA		_spr_ram+$E3	; code used at a000
		STA		_spr_ram+$43	; code used at a000
		LDA		_spr_ram+$E7	; code used at a000
		STA		_spr_ram+$47	; code used at a000
		LDA		_spr_ram+$EB	; code used at a000
		STA		_spr_ram+$4F	; code used at a000
		LDA		_spr_ram+$EF	; code used at a000
		STA		_spr_ram+$53	; code used at a000
		LDY		#0		; code used at a000
		STY		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_24F7B4:				; CODE XREF: sub_24F727+A-j
		LDA		_spr_ram+$C	; code used at a000
		CMP		_spr_ram+$40	; code used at a000
		BCS		loc_24F805	; code used at a000
		SEC				; code used at a000
		SBC		#8		; code used at a000
		STA		_spr_ram+$40	; code used at a000
		STA		_spr_ram+$44	; code used at a000
		LDA		#$F8       ; code used at a000
		STA		_spr_ram+$4C	; code used at a000
		STA		_spr_ram+$50	; code used at a000
		LDA		_spr_ram+$43	; code used at a000
		STA		_spr_ram+$E3	; code used at a000
		LDA		_spr_ram+$47	; code used at a000
		STA		_spr_ram+$E7	; code used at a000
		LDA		_spr_ram+$4F	; code used at a000
		STA		_spr_ram+$EB	; code used at a000
		LDA		_spr_ram+$53	; code used at a000
		STA		_spr_ram+$EF	; code used at a000
		LDA		_spr_ram+$F	; code used at a000
		STA		_spr_ram+$43	; code used at a000
		LDA		_spr_ram+$13	; code used at a000
		STA		_spr_ram+$47	; code used at a000
		LDA		_spr_ram+$17	; code used at a000
		SEC				; code used at a000
		SBC		#8		; code used at a000
		STA		_spr_ram+$4F	; code used at a000
		STA		_spr_ram+$53	; code used at a000
		LDY		#0		; code used at a000
		STY		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_24F805:				; CODE XREF: sub_24F727+93-j
		LDA		_spr_ram+$48
		STA		_spr_ram+$40
		STA		_spr_ram+$44
		STA		_spr_ram+$4C
		STA		_spr_ram+$50
		LDA		_spr_ram+$E3
		STA		_spr_ram+$43
		LDA		_spr_ram+$E7
		STA		_spr_ram+$47
		LDA		_spr_ram+$EB
		STA		_spr_ram+$4F
		LDA		_spr_ram+$EF
		STA		_spr_ram+$53
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F834:				; CODE XREF: sub_24F4DC:loc_24F5C2-j
		LDX		#0		; code used at a000
loc_24F836:				; CODE XREF: sub_24F834+10-j
		LDA		_spr_ram+6,X	; code used at a000
		EOR		#$40       ; code used at a000
		STA		_spr_ram+6,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		CPX		#$50       ; code used at a000
		BCC		loc_24F836	; code used at a000
		LDX		#0		; code used at a000
		LDY		#0		; code used at a000
		LDA		_spr_ram+6	; code used at a000
		AND		#$40       ; code used at a000
		BEQ		loc_24F881	; code used at a000
loc_24F851:				; CODE XREF: sub_24F834+2E-j
		LDA		byte_24FA5F,X	; code used at a000
		CLC				; code used at a000
		ADC		_spr_ram+7,Y	; code used at a000
		STA		_spr_ram+7,Y	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		CPY		#$50       ; code used at a000
		BCC		loc_24F851	; code used at a000
		LDY		#0		; code used at a000
loc_24F866:				; CODE XREF: sub_24F834+43-j
		LDA		byte_24FA5F,X	; code used at a000
		CLC				; code used at a000
		ADC		_spr_ram+$E3,Y	; code used at a000
		STA		_spr_ram+$E3,Y	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		CPY		#$10		; code used at a000
		BCC		loc_24F866	; code used at a000
		LDY		#0		; code used at a000
		STY		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_24F881:				; CODE XREF: sub_24F834+1B-j
					; sub_24F834+5E-j
		LDA		byte_24FA77,X
		CLC
		ADC		_spr_ram+7,Y
		STA		_spr_ram+7,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$50 
		BCC		loc_24F881
		LDY		#0
loc_24F896:				; CODE XREF: sub_24F834+73-j
		LDA		byte_24FA77,X
		CLC
		ADC		_spr_ram+$E3,Y
		STA		_spr_ram+$E3,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$10
		BCC		loc_24F896
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F8B1:				; CODE XREF: sub_24F4DC:loc_24F5C5-j
		LDX		#0		; code used at a000
loc_24F8B3:				; CODE XREF: sub_24F8B1+10-j
		LDA		_spr_ram+$56,X	; code used at a000
		EOR		#$40       ; code used at a000
		STA		_spr_ram+$56,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
loc_24F8BF:				; code used at a000
		CPX		#$24 
		BCC		loc_24F8B3	; code used at a000
		LDX		#0		; code used at a000
		LDY		#0		; code used at a000
		LDA		_spr_ram+$56	; code used at a000
		AND		#$40       ; code used at a000
		BEQ		loc_24F8E9	; code used at a000
loc_24F8CE:				; CODE XREF: sub_24F8B1+2E-j
		LDA		byte_24FA8F,X	; code used at a000
		CLC				; code used at a000
		ADC		_spr_ram+$57,Y	; code used at a000
		STA		_spr_ram+$57,Y	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		CPY		#$24       ; code used at a000
		BCC		loc_24F8CE	; code used at a000
		LDY		#0		; code used at a000
		STY		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_24F8E9:				; CODE XREF: sub_24F8B1+1B-j
					; sub_24F8B1+49-j
		LDA		byte_24FA98,X
		CLC
		ADC		_spr_ram+$57,Y
		STA		_spr_ram+$57,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$24 
		BCC		loc_24F8E9
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F904:				; CODE XREF: sub_24F4DC:loc_24F5C8-j
		LDX		#0		; code used at a000
loc_24F906:				; CODE XREF: sub_24F904+10-j
		LDA		_spr_ram+$7A,X	; code used at a000
		EOR		#$40       ; code used at a000
		STA		_spr_ram+$7A,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
loc_24F911:				; code used at a000
		INX
		CPX		#$40       ; code used at a000
		BCC		loc_24F906	; code used at a000
		LDX		#0		; code used at a000
		LDY		#0		; code used at a000
loc_24F91A:				; code used at a000
		LDA		_spr_ram+$7A
loc_24F91D:				; code used at a000
		AND		#$40 
		BEQ		loc_24F93F	; code used at a000
loc_24F921:				; CODE XREF: sub_24F904+31-j
		LDA		byte_24FAA1,X	; code used at a000
		CLC				; code used at a000
		ADC		_spr_ram+$7B,Y	; code used at a000
		SEC				; code used at a000
		SBC		#$40       ; code used at a000
		STA		_spr_ram+$7B,Y	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		CPY		#$40       ; code used at a000
		BCC		loc_24F921	; code used at a000
		LDY		#0		; code used at a000
		STY		word_4		; code used at a000
		BIT		word_4		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_24F93F:				; CODE XREF: sub_24F904+1B-j
					; sub_24F904+4F-j
		LDA		byte_24FAB1,X
		CLC
		ADC		_spr_ram+$7B,Y
		CLC
		ADC		#$40 
		STA		_spr_ram+$7B,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$40 
		BCC		loc_24F93F
		LDY		#0
		STY		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F95D:				; CODE XREF: sub_24F4DC:loc_24F5CB-j
					; sub_24F4DC:loc_24F5CE-j
		LDX		#0
loc_24F95F:				; CODE XREF: sub_24F95D+9-j
		LDA		_spr_ram+$54,X
		PHA
		INX
		CPX		#$10
		BCC		loc_24F95F
		LDX		#0
loc_24F96A:				; CODE XREF: sub_24F95D+16-j
		LDA		_spr_ram+$A8,X
		STA		_spr_ram+$54,X
		INX
		CPX		#$10
		BCC		loc_24F96A
		LDX		#$F
loc_24F977:				; CODE XREF: sub_24F95D+1F-j
		PLA
		STA		_spr_ram+$A8,X
		DEX
		BPL		loc_24F977
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24F988
		INC		word_6C+1
loc_24F988:				; CODE XREF: sub_24F95D+27-j
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; unused
sub_24F98E:
		LDX		#0
loc_24F990:				; CODE XREF: sub_24F98E+9-j
		LDA		_spr_ram+$A8,X
		PHA
		INX
		CPX		#$10
		BCC		loc_24F990
		LDX		#0
		LDY		#$F
loc_24F99D:				; CODE XREF: sub_24F98E+1D-j
		LDA		_spr_ram+$54,X
		STA		_spr_ram+$A8,Y
		PLA
		STA		_spr_ram+$54,X
		DEY
		INX
		CPX		#$10
		BCC		loc_24F99D
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24F9B7
		INC		word_6C+1
loc_24F9B7:				; CODE XREF: sub_24F98E+25-j
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F9BD:				; CODE XREF: sub_24F4DC:loc_24F5D1-j
		LDX		#0
		LDY		#0
		LDA		#$F8 
loc_24F9C3:				; CODE XREF: sub_24F9BD+10-j
		STA		_spr_ram+$78,X
		INX
		INX
		INX
		INX
		INY
		CPY		#$10
		BCC		loc_24F9C3
		LDY		#0
		STA		word_4
		BIT		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_24F9D7:				; CODE XREF: sub_24F4DC:loc_24F5D4-j
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24F9E1
		INC		word_6C+1
loc_24F9E1:				; CODE XREF: sub_24F9D7+6-j
		CMP		#1
		BEQ		loc_24F9F0
		CMP		#2
		BEQ		loc_24FA17
		CMP		#3
		BEQ		loc_24FA3B
loc_24F9ED:				; CODE XREF: sub_24F9D7:loc_24F9ED-j
		JMP		loc_24F9ED
loc_24F9F0:				; CODE XREF: sub_24F9D7+C-j
		LDY		#0
		LDX		#0
loc_24F9F4:				; CODE XREF: sub_24F9D7+2E-j
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24F9FC
		INC		word_6C+1
loc_24F9FC:				; CODE XREF: sub_24F9D7+21-j
		STA		_spr_ram+4,X
		INX
		INX
		INX
		INX
		CPX		#$50 
		BCC		loc_24F9F4
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24FA11
		INC		word_6C+1
loc_24FA11:				; CODE XREF: sub_24F9D7+36-j
		STA		word_4
		BIT		word_4
		CLC
locret_24FA16:
		RTS
loc_24FA17:				; CODE XREF: sub_24F9D7+10-j
		LDY		#0
		LDX		#0
loc_24FA1B:				; CODE XREF: sub_24F9D7+52-j
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24FA23
		INC		word_6C+1
loc_24FA23:				; CODE XREF: sub_24F9D7+48-j
		STA		_spr_ram+$78,X
		INX
		CPX		#$40 
		BCC		loc_24FA1B
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24FA35
		INC		word_6C+1
loc_24FA35:				; CODE XREF: sub_24F9D7+5A-j
		STA		word_4
		BIT		word_4
		CLC
		RTS
loc_24FA3B:				; CODE XREF: sub_24F9D7+14-j
		LDY		#0
		LDX		#0
loc_24FA3F:				; CODE XREF: sub_24F9D7+76-j
		LDA		(word_6C),Y
		STA		_spr_ram+4,X
		INC		word_6C
		BNE		loc_24FA4A
		INC		word_6C+1
loc_24FA4A:				; CODE XREF: sub_24F9D7+6F-j
		INX
		CPX		#$50 
		BCC		loc_24FA3F
		LDY		#0
		LDA		(word_6C),Y
		INC		word_6C
		BNE		loc_24FA59
		INC		word_6C+1
loc_24FA59:				; CODE XREF: sub_24F9D7+7E-j
		STA		word_4
		BIT		word_4
		CLC
		RTS
byte_24FA5F:
		.BYTE $20,$10,	0,$F0,$E0,$20,$10,  0,$F0,$E0,$20,$10,	0,$F0,$F0,  0
					; DATA XREF: sub_24F834:loc_24F851-r
					; sub_24F834:loc_24F866-r
		.BYTE	8,  0,$D0,$D0,	0,  8,$E0,$E0 ;	data used at a000
byte_24FA77:
		.BYTE $E0,$F0,	0,$10,$20,$E0,$F0,  0,$10,$20,$E0,$F0,	0,$10,$10,  0
					; DATA XREF: sub_24F834:loc_24F881-r
					; sub_24F834:loc_24F896-r
		.BYTE $F8,  0,$30,$30,	0,$F8,$20,$20
byte_24FA8F:
		.BYTE	8,$F8,	8,$F8,	8,$F8,	8,$18,$18
					; DATA XREF: sub_24F8B1:loc_24F8CE-r
					; data used at a000
byte_24FA98:
		.BYTE $F8,  8,$F8,  8,$F8,  8,$F8,$E8,$E8
					; DATA XREF: sub_24F8B1:loc_24F8E9-r
byte_24FAA1:
		.BYTE $20,$10,$20,$10,	0,$10,	0,$F0,	0,$F0,$E0,  0,$F0,$E0,$F0,$E0
					; DATA XREF: sub_24F904:loc_24F921-r
					; data used at a000
byte_24FAB1:
		.BYTE $E0,$F0,$E0,$F0,	0,$F0,	0,$10,	0,$10,$20,  0,$10,$20,$10,$20
					; DATA XREF: sub_24F904:loc_24F93F-r
byte_24FAC1:
		.BYTE $60,$61,$62,$63,$64,$70,$71,$72,$73,$74,$80,$81,$82,$83,$93,  1
					; DATA XREF: BANK18:off_24F39B-o
		.BYTE	1,$92,	1,  1,$36,$37,$38,$63,$64,$46,$47,$48,$73,$74,$56,$57 ;	ind data used at a000
		.BYTE $82,$83,$93,  1,	1,$92,	1,  1,	1,  1,$3B,$63,$64,$49,$4A,$4B
		.BYTE $73,$74,$59,$5A,$82,$83,$93,  1,	1,$92,	1,  1,	1,  1,$3E,$63
		.BYTE $64,$4C,$4D,$4E,$73,$74,$56,$57,$5E,$5F,$3D,  1,	1,$92,	1,  1
		.BYTE $60,$61,$62,$6E,$6F,$70,$71,$72,$7E,$7F,$80,$81,$82,$83,$93,  1
		.BYTE	1,$92,	1,  1,$60,$61,$62,$63,$3F,$70,$71,$72,$73,$4F,$80,$81
		.BYTE $82,$83,$93,  1,	1,$92,	1,  1,$60,$61,$62,$63,$64,$70,$71,$72
		.BYTE $73,$74,$80,$81,$90,$91,$A1,  1,	1,$A0,	1,  1,	1,$85,$86,$63
		.BYTE $64,$94,$95,$96,$73,$74,$80,$81,$90,$91,$A1,  1,	1,$A0,	1,  1
		.BYTE $36,$37,$38,$63,$3F,$46,$47,$48,$73,$4F,$56,$57,$82,$83,$93,  1
		.BYTE	1,$92,	1,  1,$36,$37,$65,$6A,$6B,$46,$47,$48,$7A,$7B,$56,$57
		.BYTE $82,$83,$93,  1,	1,$92,$6C,$7C,$60,$61,$62,$6E,$6F,$70,$71,$72
		.BYTE $7E,$7F,$80,$81,$82,$83,$93,  1,	1,$92,	1,  1,$36,$37,$38,$6E
		.BYTE $6F,$46,$47,$48,$7E,$7F,$56,$57,$82,$83,$93,  1,	1,$92,	1,  1
		.BYTE	1,  1,$3B,$6E,$6F,$49,$4A,$4B,$7E,$7F,$59,$5A,$82,$83,$93,  1
		.BYTE	1,$92,	1,  1,	1,  1,$3E,$6E,$6F,$4C,$4D,$4E,$7E,$7F,$56,$57
		.BYTE $5E,$5F,$3D,  1,	1,$92,	1,  1,	1,$85,$86,$63,$3F,$94,$95,$96
		.BYTE $73,$4F,$80,$81,$90,$91,$A1,  1,	1,$A0,	1,  1
byte_24FBED:
		.BYTE $50,$51,$10,$11,$20,$21,	1,  1,	1,  2,	3,$12,$11,$22,$23,  1
					; DATA XREF: sub_24F39D:loc_24F3B0-r
		.BYTE	1,  1,$50,$51,$17,$11,$20,$21,	1,  1,$16, $A, $B,$1A,$1B,$2A
		.BYTE $2B,  1,	1,  1,$19,$51,$29,$11,	4,  5,	9,  1,	1,$50,$51,$18
		.BYTE $11,$28,$27,  1,	1,  1, $C, $D,$1C,$1D,$2C,$2D,	1,  1,	1, $C
		.BYTE  $D,$1C,$1D,$2C,$2D,  1,	1,  1, $E, $F,$1E,$1F,$2E,$2F,	1,  1
		.BYTE	1,$32,$33,$42,$43,$52,$53,  1,	1,  1,$19,$35,$44,$45,$54,$55
		.BYTE	9,  1,	1,  6,	7,$41,$15,$24,$25,  1,$30,$40,	6,  7,$31,$15
		.BYTE $24,$25,	1,  1,	1,$50,$51,$10,$11,  4,	5,  1,	1,  1,	2,  3
		.BYTE $14,$15,$24,$25,	1,  1,	1,$50,$51,$10,$11,$26,$27,  1,	1,  1
		.BYTE $50,$35,$10,$45,$54,$55,	1,  1,	1,  6,	7,$14,$15,$24,$25,  1
		.BYTE	1,  1,$19,  7,$44,$11,$54,$55,	9,  1,	1,  1,	1, $A, $B,$1A
		.BYTE $1B,  1,	1,  1,	1,  1,	1,  1,	1,  1,	1,  1,	1,$34,$3C,$58
		.BYTE $11,$20,$21,  1,	1,  1,$5B,$69,$6D,$11,$22,$23,	1,  1,	1
byte_24FCBC:
		.BYTE $EA,$EB,$FA,$FB,	1,  1,	1,  1,	1,  1,	1,  1,	1,  1,	1,  1
					; DATA XREF: sub_24F3C7:loc_24F3D6-r
		.BYTE $EA,$EB,$FA,$CC,$ED,$DC,$DD,  1,	1,  1,	1,  1,	1,  1,	1,  1
		.BYTE $EA,$EB,$FA,$CC,$ED,$DC,$EC,$ED,$FC,$DD,	1,  1,	1,  1,	1,  1
		.BYTE $EA,$EB,$FA,$CC,$ED,$DC,$EC,$ED,$FC,$DE,$DF,  1,$EE,$EF,$FD,$FE
		.BYTE $F0,$F1,$F2,$F3,$F4,$F5,$F6,$F4,$F7,$F8,$F9,$E4,$E5,$E6,$E7,$E8
		.BYTE	1,  1,	1,$EA,$EB,$DC,$CC,$ED,$FC,$DE,$DF,  1,$EE,$EF,$FD,$FE
		.BYTE	1,  1,	1,  1,	1,  1,$EA,$EB,$DC,$EC,$DF,  1,$EE,$EF,$FD,$FE
		.BYTE	1,  1,	1,  1,	1,  1,	1,  1,$EA,$EB,	1,$FA,$CC,$ED,$DC,$DD
		.BYTE	1,  1,	1,  1,	1,  1,	1,  1,	1,  1,	1,  1,$EA,$EB,$FA,$FB
		.BYTE	1,  1,	1,  1,	1,  1,	1,  1,	1,  1,	1,  1,	1,  1,	1,  1

		ECHO "bank 18 size", [.-$8000], "free space", [$BFD8-.]

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
