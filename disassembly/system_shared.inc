	
		ORG SYSTEM_SHARED_ORG

;		.BYTE $FF
		
; =============== S U B	R O U T	I N E =======================================
; SYSTEM ROUTINES BLOCK	SHARED BETWEEN 0F and 1F
; the same data	in both	banks
; 0F:C000-0F:EC98 == 1F:C000-1F:EC98
sub_174000:				; CODE XREF: _ppu_screen_clear+3-p
					; _RESET+5C-p
		LDA		#0		; code used at c000
		STA		byte_6D8	; code used at c000
		STA		byte_6D9	; code used at c000
		STA		byte_6DA	; code used at c000
		STA		byte_6D7	; code used at c000
		STA		_nmi_flags	; code used at c000
		STA		_pads+2		; code used at c000
		STA		_pads+3		; code used at c000
		STA		_pads+4		; code used at c000
		STA		byte_28		; code used at c000
		STA		byte_29		; code used at c000
		STA		byte_32		; code used at c000
		STA		byte_6D6	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_get_data_next_byte:			; CODE XREF: sub_39AA9+56-P
					; sub_39AA9+5C-P sub_39AA9+62-P
					; sub_39AA9+68-P sub_39AA9+6C-P
					; sub_39AA9+74-P
					; _b5_sB_ppu_font_load:loc_83EBB-P
					; sub_1741E4:loc_1741E6-p sub_1744E4+9-p
		LDA		(0,X)		; code used as ind data	at c000
		INC		0,X		; code used as ind data	at c000
		BNE		locret_174028	; code used as ind data	at c000
		INC		1,X		; code used at c000
locret_174028:				; CODE XREF: _get_data_next_byte+4-j
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_add_16_to_neg16:			; CODE XREF: _bE_s20+C-P
		JSR		_add_8_to_neg16	; code used at c000
		TYA				; code used at c000
		EOR		#$FF		; code used at c000
		SEC				; code used at c000
		ADC		1,X		; code used at c000
		STA		1,X		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_add_8_to_neg16:			; CODE XREF: _b0_s16+4B-P sub_6A86B+16-P
					; sub_6BACB+2F-P sub_B2A29+22-P
					; sub_B2A9D+7-P	sub_B2B3C+4-P
					; sub_B2CD0+B-P	_add_16_to_neg16-p
					; sub_176FB2+15-p
		EOR		#$FF		; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		ADC		0,X		; code used as ind data	at c000
		STA		0,X		; code used as ind data	at c000
		BCS		locret_174040	; code used as ind data	at c000
		DEC		1,X		; code used as ind data	at c000
locret_174040:				; CODE XREF: _add_8_to_neg16+7-j
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_add_16_to_16:				; CODE XREF: _get_enemy_info_ptr+13-J
					; sub_8261+10C-P sub_8261+1B5-P
					; sub_8261+202-P sub_3A267+33-P
					; sub_B2A29+4B-P sub_B2BB5+16-J
					; sub_B2C46+8-P	sub_B2C66+1B-P
					; _b7_sE+E-P _b7_sF+E-P	sub_12B5AD+A5-P
					; sub_159F2E+26-P sub_176488+16-p
					; sub_176488+35-p sub_1764E3+26-p
					; sub_1764E3+C4-p sub_176FB2+25-p
					; sub_1779D2+9-p sub_177A5B+2E-p
					; sub_177CD6+16-p sub_177CD6+1E-p
		JSR		_add8_to_16	; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		1,X		; code used as ind data	at c000
		STA		1,X		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
; A = value
; X = ram var ofs
_add8_to_16:				; CODE XREF: sub_81FE+18-P
					; sub_8261+1BC-P sub_87D0+2A-P
					; sub_87D0+32-P	_b0_s16:loc_9500-P
					; _b0_s18+1C-P _b0_s18+2D-P _b0_s18+3E-P
					; sub_9B31+3F-P	_b0_s67+1E-J
					; sub_A5A4+D-P sub_A5A4+12-J
					; sub_A5B9+D9-P	sub_A725+1C-P
					; _b1_sD+230-P _b2_sE+11-J
					; sub_68F98+1E-P sub_69604+C2-P
					; sub_69604+D5-P
					; _name_entry_screen_data_enter+40-P
					; sub_15AA2A+15-P _add_16_to_16-p
					; sub_17646E+9-p sub_17646E+D-p
					; sub_176488+48-p sub_1764E3+42-p
					; sub_1764E3+BB-p sub_1764E3+16B-p
					; sub_1764E3+192-j sub_176FB2+1C-p
		CLC				; code used as ind data	at c000
		ADC		0,X		; code used as ind data	at c000
		STA		0,X		; code used as ind data	at c000
		BCC		locret_174054	; code used as ind data	at c000
		INC		1,X		; code used as ind data	at c000
locret_174054:				; CODE XREF: _add8_to_16+5-j
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_mul16_to_8:				; CODE XREF: _get_enemy_info_ptr+A-P
					; sub_8261+103-P sub_8261+16A-P
					; sub_8261+1AC-P sub_8261+1F9-P
					; sub_9B31+38-P	sub_9B78+A-J
					; _b0_s67+14-P sub_A3FB+98-P
					; sub_A5A4+8-P sub_3A267+23-P
					; sub_68F98+C-P	sub_68F98+19-P
					; sub_697DE+3D-P sub_6A86B+1F-P
					; sub_6AC36+2C-P _b4_sF+D-P
					; sub_6ACD9+3E-P sub_6ADA4+A-P
					; sub_6B170+55-P sub_6B888+15-P
					; _name_entry_screen_data_enter+39-P
					; sub_B2BB5+D-P	sub_B31EA+A-P
					; sub_12B5AD+9E-P _bD_s29+19-P
					; sub_142486+2F-P sub_142589+C8-P
					; sub_142589+135-P sub_142728+38-P
					; sub_143E48+A-P sub_159F2E+1B-P
					; sub_15A068+27-P sub_15AA2A+D-P
					; _bE_s1D+E-P sub_175A32+64-p
					; sub_176FB2+E-p sub_177CD6+D-p
		STA		_tmp21		; code used as ind data	at c000
		LDA		#0		; code used as ind data	at c000
		STA		_tmp21+1	; code used as ind data	at c000
		STA		_tmp21+2	; code used as ind data	at c000
loc_17405D:				; CODE XREF: _mul16_to_8+1F-j
		LSR		_tmp21		; code used as ind data	at c000
		BCC		loc_17406E	; code used as ind data	at c000
		LDA		0,X		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		_tmp21+1	; code used as ind data	at c000
		STA		_tmp21+1	; code used as ind data	at c000
		LDA		1,X		; code used as ind data	at c000
		ADC		_tmp21+2	; code used as ind data	at c000
		STA		_tmp21+2	; code used as ind data	at c000
loc_17406E:				; CODE XREF: _mul16_to_8+A-j
		ASL		0,X		; code used as ind data	at c000
		ROL		1,X		; code used as ind data	at c000
		LDA		_tmp21		; code used as ind data	at c000
		BNE		loc_17405D	; code used as ind data	at c000
		LDA		_tmp21+1	; code used as ind data	at c000
		STA		0,X		; code used as ind data	at c000
		LDA		_tmp21+2	; code used as ind data	at c000
		STA		1,X		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_div16_to_8:				; CODE XREF: sub_80D4+83-P _b0_s67+19-P
					; sub_A3FB+9D-P	_b1_sD+1C9-P
					; _b1_sD+22B-P sub_6840C+1E-P
					; sub_68864+15-P sub_68F98+7-P
					; sub_6A86B+1B-P sub_6A86B+24-P
					; sub_6ACD9+43-J sub_6ADA4+F-J
					; sub_6B170+5A-P sub_6B170+66-P
					; sub_6BEB9+38-P _bA_sB+20-P
					; _bD_s29+1E-P _bE_s20+11-P
					; sub_177A5B+F-p sub_177A5B+1F-p
		STA		_tmp21+2	; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDY		#$10		; code used as ind data	at c000
		LDA		#0		; code used as ind data	at c000
		STA		byte_24		; code used at c000
		STA		_tmp21		; code used as ind data	at c000
		STA		_tmp21+1	; code used as ind data	at c000
loc_17408D:				; CODE XREF: _div16_to_8+30-j
		ASL		0,X		; code used as ind data	at c000
		ROL		1,X		; code used as ind data	at c000
		ROL		_tmp21		; code used as ind data	at c000
		ROL		_tmp21+1	; code used as ind data	at c000
		INC		0,X		; code used as ind data	at c000
		LDA		_tmp21		; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		_tmp21+2	; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDA		_tmp21+1	; code used as ind data	at c000
		SBC		byte_24		; code used as ind data	at c000
		BCS		loc_1740A9	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		DEC		0,X		; code used as ind data	at c000
		JMP		loc_1740AE	; code used as ind data	at c000
loc_1740A9:				; CODE XREF: _div16_to_8+22-j
		STA		_tmp21+1	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		STA		_tmp21		; code used as ind data	at c000
loc_1740AE:				; CODE XREF: _div16_to_8+27-j
		DEY				; code used as ind data	at c000
		BNE		loc_17408D	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		_tmp21		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_ppu_screen_clear:			; CODE XREF: sub_8683:loc_86C2-P
					; sub_B28ED+6-P	_b7_s8-P _b7_s1E+1C-P
					; sub_B34E4-P sub_B36B5+A-P _bA_s16+3-P
					; sub_12B493+34-P _npc_hndl47+54-P
					; _b17_s0_copyrights_screen+2A-J
					; _copyrights_screen_prepare+D-P
					; sub_24C156+1E-P sub_27E73A+10-P
		JSR		_vblank_and_render_off_flag10_set ; code used at c000
		JSR		sub_174000	; code used at c000
		LDA		#$F8       ; code used at c000
		LDX		#0		; code used at c000
		STX		_PPU_OAM_ADDR	; code used at c000
loc_1740C3:				; CODE XREF: _ppu_screen_clear+14-j
		STA		_spr_ram,X	; code used at c000
		STA		_PPU_OAM_DATA	; code used at c000
		INX				; code used at c000
		BNE		loc_1740C3	; code used at c000
		LDA		_PPU_STATUS	; code used at c000
		LDA		#$20       ; code used at c000
		STA		_PPU_ADDR	; code used at c000
		LDA		#0		; code used at c000
		STA		_PPU_ADDR	; code used at c000
		LDX		#8		; code used at c000
		LDY		#0		; code used at c000
loc_1740DD:				; CODE XREF: _ppu_screen_clear+2B-j
					; _ppu_screen_clear+2E-j
		STA		_PPU_DATA	; code used at c000
		DEY				; code used at c000
		BNE		loc_1740DD	; code used at c000
		DEX				; code used at c000
		BNE		loc_1740DD	; code used at c000
		JMP		__render_on_flag10_clear_reinit	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1740E9:				; CODE XREF: sub_17443A+11-p
					; sub_235B3E+5C-P _b18_s1+5-P
					; sub_24E747+EE-P
		TAX				; code used at c000
		LDA		byte_6D6	; code used at c000
		STX		byte_6D6	; code used at c000
		AND		#3		; code used at c000
		CMP		#2		; code used at c000
		BEQ		locret_1740F9	; code used as ind data	at c000
		JSR		sub_1742B0	; code used at c000
locret_1740F9:				; CODE XREF: sub_1740E9+B-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1740FA:
		JSR		_vblank_and_render_off_flag10_set
		JSR		sub_1741D7
		JMP		__render_on_flag10_clear_reinit

; =============== S U B	R O U T	I N E =======================================
sub_174103:				; CODE XREF: sub_1766E2:loc_176712-p
		LDX		#0		; code used at c000
loc_174105:				; CODE XREF: sub_174103+8-j
		JSR		sub_17410E	; code used at c000
		INX				; code used at c000
		CPX		#8		; code used at c000
		BNE		loc_174105	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17410E:				; CODE XREF: sub_174103:loc_174105-p
		ASL		word_4,X	; code used as ind data	at c000
		ROR		byte_C		; code used at c000
		ASL		word_4,X	; code used at c000
		ROR		byte_D		; code used as ind data	at c000
		ASL		word_4,X	; code used at c000
		ROR		byte_E		; code used as ind data	at c000
		ASL		word_4,X	; code used as ind data	at c000
		ROR		byte_F		; code used at c000
		ASL		word_4,X	; code used as ind data	at c000
		ROR		byte_10		; code used as ind data	at c000
		ASL		word_4,X	; code used at c000
		ROR		byte_11		; code used as ind data	at c000
		ASL		word_4,X	; code used at c000
		ROR		_tmp12		; code used as ind data	at c000
		ASL		word_4,X	; code used at c000
		ROR		_tmp12+1	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_17412F:				; CODE XREF: sub_1766E2+1C-p
					; sub_1766E2:loc_17670C-p
		LDX		#0		; code used at c000
loc_174131:				; CODE XREF: sub_17412F+8-j
		JSR		sub_17413A	; code used as ind data	at c000
		INX				; code used at c000
		CPX		#8		; code used at c000
		BNE		loc_174131	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17413A:				; CODE XREF: sub_17412F:loc_174131-p
		LSR		word_4,X	; code used as ind data	at c000
		ROL		byte_C		; code used as ind data	at c000
		LSR		word_4,X	; code used as ind data	at c000
		ROL		byte_D		; code used as ind data	at c000
		LSR		word_4,X	; code used as ind data	at c000
		ROL		byte_E		; code used as ind data	at c000
		LSR		word_4,X	; code used at c000
		ROL		byte_F		; code used as ind data	at c000
		LSR		word_4,X	; code used as ind data	at c000
		ROL		byte_10		; code used as ind data	at c000
		LSR		word_4,X	; code used at c000
		ROL		byte_11		; code used at c000
		LSR		word_4,X	; code used as ind data	at c000
		ROL		_tmp12		; code used at c000
		LSR		word_4,X	; code used as ind data	at c000
		ROL		_tmp12+1	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_17415B:				; CODE XREF: sub_129E5D+12-P
					; sub_129E5D+1E-P sub_129E5D+2A-P
					; sub_129E5D+36-P sub_129FC3+E-P
					; sub_129FC3+15-P sub_129FC3+1C-J
					; sub_12AE73+A-J
		STA		_tmp21		; code used at c000
		ASL		; code used at c000
		CLC				; code used at c000
		ADC		_tmp21		; code used at c000
		TAX				; code used at c000
		LDA		off_1741BC,X	; code used at c000
		STA		_tmp21		; code used at c000
		LDA		off_1741BC+1,X	; code used at c000
		STA		_tmp21+1	; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		LDA		byte_1741BE,X	; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		JSR		_vblank		; code used at c000
		LDA		#0		; code used at c000
		STA		byte_26		; code used at c000
loc_17417D:				; CODE XREF: sub_17415B+5B-j
		LDX		byte_6D8	; code used at c000
		LDA		_tmp21+2	; code used at c000
		ORA		#$80       ; code used at c000
		STA		byte_300,X	; code used at c000
		INX				; code used at c000
		LDA		#$10		; code used at c000
		STA		byte_300,X	; code used at c000
		INX				; code used at c000
		LDA		byte_24		; code used at c000
		STA		byte_300,X	; code used at c000
		LDY		byte_26		; code used at c000
		INX				; code used at c000
loc_174196:				; CODE XREF: sub_17415B+47-j
		LDA		(_tmp21),Y	; code used at c000
		STA		byte_300,X	; code used at c000
		INC		byte_24		; code used at c000
		INY				; code used at c000
		INX				; code used at c000
		TYA				; code used at c000
		AND		#$F		; code used at c000
		BNE		loc_174196	; code used at c000
		STX		byte_6D8	; code used at c000
		STY		byte_26		; code used at c000
		INC		byte_6D9	; code used at c000
		JSR		sub_1742BA	; code used at c000
		JSR		_vblank		; code used at c000
		LDA		byte_24		; code used at c000
		CMP		byte_25		; code used at c000
		BNE		loc_17417D	; code used at c000
		PLA				; code used at c000
		JMP		_mmc1_prg_set	; code used at c000
off_1741BC:
		.WORD _chr_data_unk0	; DATA XREF: sub_17415B+7-r
					; sub_17415B+C-r
byte_1741BE:
		.BYTE $A		; DATA XREF: sub_17415B+15-r
		.WORD _chr_data_unk1
		.BYTE $A
		.WORD _chr_data_unk2
		.BYTE $A
		.WORD _chr_data_unk3
		.BYTE $A
		.WORD _chr_data_unk4
		.BYTE $A
		.WORD _chr_data_unk5	; data used at c000
		.BYTE 9			; data used at c000
		.WORD _chr_data_unk6	; data used at c000
		.BYTE 9			; data used at c000
		.WORD _chr_data_unk7	; data used at c000
		.BYTE 9			; data used at c000
		.WORD _chr_terrain_bg_data1+$470
		.BYTE 9

; =============== S U B	R O U T	I N E =======================================
sub_1741D7:				; CODE XREF: sub_39C5F+11C-P
					; sub_1740FA+3-p
		LDA		_PPU_STATUS	; code used at c000
		LDA		byte_20		; code used as ind data	at c000
		STA		_PPU_ADDR	; code used as ind data	at c000
		LDA		byte_1F		; code used as ind data	at c000
		STA		_PPU_ADDR	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1741E4:				; CODE XREF: sub_176305+BE-p
		LDX		#_tmp21		; code used as ind data	at c000
loc_1741E6:				; CODE XREF: sub_1741E4+C-j
					; sub_1741E4+12-j
		JSR		_get_data_next_byte ; code used	as ind data at c000
		STA		_PPU_DATA	; code used as ind data	at c000
		LDA		_tmp21+2	; code used as ind data	at c000
		EOR		_tmp21		; code used as ind data	at c000
		BNE		loc_1741E6	; code used as ind data	at c000
		LDA		_tmp21+1	; code used as ind data	at c000
		EOR		byte_24		; code used as ind data	at c000
		BNE		loc_1741E6	; code used as ind data	at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1741F9:				; CODE XREF: sub_17732F+2-p
		LDA		#$80       ; code used as ind data at c000
		BNE		sub_1741FF	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1741FD:				; CODE XREF: sub_F81F8+7-P
					; sub_129F07+A-P sub_129F24+8-P
					; sub_12A5F3+8-P sub_12A5F3+C-P
					; sub_12A5F3+10-P sub_12A5F3+14-J
					; sub_12A9FE+4-P sub_12AC0E+B-P
					; sub_12AD23+2-P sub_12AD31+2-P
					; sub_12AD3F+A-P sub_12AD3F+E-P
					; sub_12AD3F+12-P sub_12AD3F+16-P
					; sub_12AE45+2-P sub_141C7E+F-P
					; _bD_s7+12-P sub_177684+C0-p
		LDA		#$FF		; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1741FF:				; CODE XREF: sub_1741F9+2-j
		STA		_tmp21+1	; code used as ind data	at c000
		JMP		sub_174208	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_174204:				; CODE XREF: _bA_s1+56-P _bA_s1+5A-P
					; _bA_s1+5E-P _bA_s1+62-P _bC_s9+15-P
					; sub_129CAD+3D-P sub_129DDF-P
					; sub_129DDF+4-P sub_129DDF+8-P
					; sub_129DDF+C-P sub_129EA1+10-P
					; sub_129F07+11-P sub_129F24+13-P
					; sub_12A60A+8-P sub_12A60A+C-P
					; sub_12A60A+10-P sub_12A60A+14-J
					; sub_12A9FE+10-P sub_12AB5F+28-P
					; sub_12AC0E+21-P sub_12AD23+9-P
					; sub_12AD31+9-P sub_12ADC6+2-P
					; sub_12ADC6+6-P sub_12ADC6+A-P
					; sub_12ADC6+E-J sub_12AE45+24-P
					; sub_12AF78+12-P sub_1580AC+52-P
					; sub_1580AC+56-P sub_1580AC+5A-P
					; sub_1580AC+5E-P sub_158622+C-P
					; sub_158622+12-P sub_158622+18-P
					; sub_158622+1E-J sub_15B0E8+2-P
					; sub_17731E+2-p sub_17731E+6-p
					; sub_17731E+A-p sub_17731E+E-j
					; sub_1773E9+57-p sub_1773E9+D9-p
		LDA		#0		; code used as ind data	at c000
		STA		_tmp21+1	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_174208:				; CODE XREF: sub_1741FF+2-j
		TXA				; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDA		#1		; code used as ind data	at c000
		ORA		_nmi_flags	; code used as ind data	at c000
		STA		_nmi_flags	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		LDY		#0		; code used as ind data	at c000
		STY		_tmp21		; code used as ind data	at c000
		LDY		#5		; code used as ind data	at c000
loc_17421A:				; CODE XREF: sub_174208+18-j
		DEY				; code used as ind data	at c000
		BMI		loc_174251	; code used as ind data	at c000
		CMP		byte_1742AB,Y	; code used as ind data	at c000
		BCC		loc_17421A	; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		ROL		; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		byte_6D7	; code used as ind data	at c000
		BPL		loc_17422F	; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#$A		; code used as ind data	at c000
loc_17422F:				; CODE XREF: sub_174208+22-j
		LSR		; code used as ind data	at c000
		BCS		loc_174237	; code used as ind data	at c000
		EOR		#$7F       ; code used as ind data at c000
		CLC				; code used as ind data	at c000
		ADC		#$85       ; code used at c000
loc_174237:				; CODE XREF: sub_174208+28-j
		STA		_tmp21		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		_tmp21		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#$10		; code used as ind data	at c000
		STA		_tmp21		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		#4		; code used as ind data	at c000
loc_17424A:				; CODE XREF: sub_174208+45-j
		SEC				; code used as ind data	at c000
		SBC		#$C		; code used as ind data	at c000
		BCS		loc_17424A	; code used as ind data	at c000
		ADC		#$C		; code used as ind data	at c000
loc_174251:				; CODE XREF: sub_174208+13-j
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		_tmp21		; code used as ind data	at c000
		BCC		loc_17425A	; code used as ind data	at c000
		ADC		#$F
loc_17425A:				; CODE XREF: sub_174208+4E-j
		TAY				; code used as ind data	at c000
		STY		_tmp21		; code used as ind data	at c000
		LDA		_tmp21+1	; code used as ind data	at c000
		BEQ		loc_17428F	; code used as ind data	at c000
		CMP		#$80       ; code used as ind data at c000
		BEQ		loc_174274	; code used as ind data	at c000
loc_174265:				; CODE XREF: sub_174208+67-j
		LDA		_spr_ram,Y	; code used as ind data	at c000
		STA		byte_0,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		INY				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		AND		#3		; code used as ind data	at c000
		BNE		loc_174265	; code used as ind data	at c000
		JMP		loc_17429B	; code used as ind data	at c000
loc_174274:				; CODE XREF: sub_174208+5B-j
		LDA		_spr_ram,Y	; code used at c000
		AND		_spr_ram+3,Y	; code used as ind data	at c000
		CMP		#$F8       ; code used at c000
		BEQ		loc_17428C	; code used as ind data	at c000
		INX				; code used at c000
		INY				; code used at c000
		LDA		byte_0,X	; code used at c000
		STA		_spr_ram,Y	; code used at c000
		INX				; code used as ind data	at c000
		INY				; code used at c000
		LDA		byte_0,X	; code used at c000
		STA		_spr_ram,Y	; code used at c000
loc_17428C:				; CODE XREF: sub_174208+74-j
		JMP		loc_17429B	; code used as ind data	at c000
loc_17428F:				; CODE XREF: sub_174208+57-j
					; sub_174208+91-j
		LDA		byte_0,X	; code used as ind data	at c000
		STA		_spr_ram,Y	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		INY				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		AND		#3		; code used as ind data	at c000
		BNE		loc_17428F	; code used as ind data	at c000
loc_17429B:				; CODE XREF: sub_174208+69-j
					; sub_174208:loc_17428C-j
		LDA		#1		; code used as ind data	at c000
		EOR		#$FF		; code used as ind data	at c000
		AND		_nmi_flags	; code used as ind data	at c000
		STA		_nmi_flags	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#4		; code used as ind data	at c000
		TAX				; code used as ind data	at c000
		RTS				; code used as ind data	at c000
byte_1742AB:
		.BYTE	4,$10,$1C,$28,$34 ; DATA XREF: sub_174208+15-r
					; data used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1742B0:				; CODE XREF: sub_8683+31-P sub_8841+16-P
					; sub_20441+4-J	sub_F8FC7+C-P
					; _bA_s17+27-P sub_129120+39-J
					; sub_12AC69+D-J sub_15AA51+A-P
					; sub_1740E9+D-p sub_1747F4+C-p
					; sub_1753AA+13-p sub_1764E3+18B-p
		JSR		sub_1742BA	; code used as ind data	at c000
loc_1742B3:				; CODE XREF: sub_1742B0+7-j
		LDA		#4		; code used as ind data	at c000
		AND		_nmi_flags	; code used as ind data	at c000
		BNE		loc_1742B3	; code used as ind data	at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1742BA:				; CODE XREF: sub_6A9FF+B-J _b7_s19+30-P
					; sub_B32D7-J sub_F86D5+50-J _bA_sE+20-P
					; _bA_sE+4E-P _bA_sE+D2-P sub_F8D82+14-P
					; sub_F8D82+31-P sub_F8DBF+14-P
					; sub_F8DBF+31-P sub_F8F21+3-P
					; _bA_s16:loc_F92F6-P _bA_s17+63-P
					; sub_1283C3+3E-P _bC_s2+8-P
					; sub_128F4F+1F-P
					; sub_129007:loc_129057-P
					; sub_1294D0+4E-P _bC_s1D+154-P
					; sub_129E07+46-P sub_129EA1+18-J
					; sub_12A133+A1-P sub_12A488+2B-J
					; sub_12AC79+51-P sub_12AE93+54-P
					; sub_141C1C+5F-J _bE_s38+C-P
					; sub_17415B+51-p sub_1742B0-p
					; sub_1742BA+4-j sub_17430A+D-p
					; sub_174383+2E-p sub_17474E+3-p
					; sub_174DCF+1F-p sub_235B3E+5F-P
					; sub_24C190+63-P
		LDA		#4		; code used as ind data	at c000
		AND		_nmi_flags	; code used as ind data	at c000
		BNE		sub_1742BA	; code used as ind data	at c000
		LDA		#4		; code used as ind data	at c000
		ORA		_nmi_flags	; code used as ind data	at c000
		STA		_nmi_flags	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1742C7:				; CODE XREF: sub_87D0+4C-P sub_20441+1-P
					; sub_6A9FF+8-P	sub_9BF2C+1E-P
					; _bA_sE+1D-P _bA_sE+4B-P _bA_sE+CF-P
					; sub_F8D82+11-P sub_F8D82+2E-P
					; sub_F8DBF+11-P sub_F8DBF+2E-P
					; sub_129087+2-P _bE_s38+9-P
					; sub_15A99E+1F-P
					; sub_15A99E:loc_15A9D6-J
		STA		byte_1E		; code used as ind data	at c000
		JSR		sub_1742CF	; code used as ind data	at c000
		JMP		sub_17430A	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1742CF:				; CODE XREF: sub_F9014+14-J
					; sub_F93B1+7-P	_bC_sA+1-P
					; sub_1289A4+8-P sub_128B7E+6-P
					; sub_128BA4+8-P sub_1742C7+2-p
					; sub_174887+12-j sub_175D75+27-p
					; sub_175E62+61-p sub_1760DE+1C-p
		LDA		byte_6D3	; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		AND		#4		; code used as ind data	at c000
		ORA		#$20       ; code used as ind data at c000
		STA		byte_20		; code used as ind data	at c000
		LDA		word_4		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		byte_6D0	; code used as ind data	at c000
		STA		byte_1F		; code used as ind data	at c000
		BCC		loc_1742ED	; code used as ind data	at c000
		LDA		byte_20		; code used as ind data	at c000
		EOR		#4		; code used as ind data	at c000
		STA		byte_20		; code used as ind data	at c000
loc_1742ED:				; CODE XREF: sub_1742CF+16-j
		LDA		byte_6D1	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		word_4+1	; code used as ind data	at c000
		CMP		#$1E		; code used as ind data	at c000
		BCC		loc_1742FC	; code used as ind data	at c000
		SBC		#$1E		; code used as ind data	at c000
loc_1742FC:				; CODE XREF: sub_1742CF+29-j
		LSR		; code used as ind data	at c000
		ROR		byte_1F		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		ROR		byte_1F		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		ROR		byte_1F		; code used as ind data	at c000
		ORA		byte_20		; code used as ind data	at c000
		STA		byte_20		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_17430A:				; CODE XREF: sub_1742C7+5-j
					; sub_17430A+4-j sub_17430A+10-j
					; sub_174383+25-p
		LDA		#4		; code used as ind data	at c000
		AND		_nmi_flags	; code used as ind data	at c000
		BNE		sub_17430A	; code used as ind data	at c000
		LDA		byte_6D9	; code used as ind data	at c000
		CMP		#$28       ; code used as ind data at c000
		BCC		loc_17431D	; code used as ind data	at c000
		JSR		sub_1742BA	; code used at c000
		JMP		sub_17430A	; code used as ind data	at c000
loc_17431D:				; CODE XREF: sub_17430A+B-j
		LDX		byte_6D8	; code used as ind data	at c000
		LDA		byte_20		; code used as ind data	at c000
		AND		#$3F       ; code used as ind data at c000
		STA		byte_300,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		LDA		byte_1F		; code used as ind data	at c000
		STA		byte_300,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		LDA		byte_1E		; code used as ind data	at c000
		STA		byte_300,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		STX		byte_6D8	; code used as ind data	at c000
		INC		byte_6D9	; code used as ind data	at c000
		INC		byte_1F		; code used as ind data	at c000
		BNE		locret_174340	; code used as ind data	at c000
		INC		byte_20		; code used at c000
locret_174340:				; CODE XREF: sub_17430A+32-j
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_vblank:				; CODE XREF: sub_8261+2A-P sub_88BD+1E-J
					; sub_203A7-P
					; _b2_s6_screen_damage_shake-P
					; sub_39E9E+74-P sub_39E9E:loc_3A042-P
					; sub_3A056+6E-P sub_6AA0D+4-P
					; _b4_s1A+8-J _b6_s19+1D-J
					; sub_B3538+39-J sub_B362D+A-P
					; sub_B3666+B-P	_bA_s1+74-P
					; sub_F8682+3-J	_bA_sE+23-P _bA_sE+51-P
					; _bA_sE+D5-P sub_F8D82+17-P
					; sub_F8D82+34-P sub_F8DBF+17-P
					; sub_F8DBF+34-P sub_F8F21+6-J
					; sub_F8F2A+6-P	_bA_s17+2D-P _bC_s1+E-P
					; sub_12841D+9-P sub_12841D+15-J
					; _bC_s2+B-P _bC_s2+29-P sub_12888D+4-P
					; sub_128A6C+C-P sub_128AD0+19-P
					; sub_128B43+C-P sub_128BCC+1C-P
					; sub_128F4F+22-P sub_1292B0+35-P
					; sub_1294D0+51-P
					; sub_129CA1:loc_129CAA-J
					; sub_12A133+A4-J sub_12A1F3+A-P
					; sub_12A1F3+10-P sub_12A1F3+16-P
					; sub_12A1F3+1C-P sub_12A59F+13-P
					; sub_12A59F+28-J sub_12A5D5+3-J
					; sub_12A743+C-P sub_12A743+27-P
					; sub_12A7C1+10-P sub_12A92F+3-P
					; sub_12A9DC+17-P sub_12AB49+5-P
					; sub_12ABBD+3-J sub_12ABC3+2C-P
					; sub_12AC79+1F-P sub_12AF78+1A-J
					; sub_12B01C+15-P sub_12B820+4B-P
					; sub_12B877+44-P
					; _bC_s2E_vblank_count_50_wait_50_or_skip:loc_12B8CF-P
					; sub_141B50+7B-J sub_1585C4+F-J
					; sub_15868F:loc_1586C2-J _bE_s34+F-J
					; sub_15874F:loc_158786-J _bE_s38+14-P
					; _bE_s3+D-P _bE_s22+38-P _bE_s32+26-P
					; sub_15B24B-P sub_15B24B+17-J
					; sub_15B276-P sub_15B276+9-J
					; sub_15B9FA+F-P sub_17415B+1B-p
					; sub_17415B+54-p sub_17474E+6-j
					; sub_174757+6-p __pause_or_skip+7-p
					; __pause_or_skip:loc_174B48-p
					; sub_174D56+24-p sub_1762C3+3-j
					; sub_1762C9+4-p sub_234136+10-P
					; sub_235C8C+10-P sub_24C0F3+10-P
					; _b18_s1+20-P _b1E_s7-P
		LDA		_nmi_counter	; code used as ind data	at c000
loc_174344:				; CODE XREF: _vblank+6-j
		CMP		_nmi_counter	; code used as ind data	at c000
		BEQ		loc_174344	; code used as ind data	at c000
		JMP		sub_17490A	; code used at c000

; =============== S U B	R O U T	I N E =======================================
_vblank_count:				; CODE XREF: sub_8683+3C-P sub_88BD+E-P
					; sub_9E9C+C9-P	_b0_s5D+C-P
					; sub_397FE+19-P sub_397FE+24-P
					; _b2_s6_screen_damage_shake+33-P
					; _b2_sB+274-P _b2_sB+2C8-P _b4_sB+9-P
					; _b4_s5:loc_6BA3F-P _b6_s1B+4F-P
					; sub_9BF72+26-P _b7_s19+35-P
					; sub_B2821+22-J sub_B32DA+2-J
					; sub_B333B+5-J	_b7_s1E+24-P
					; _b7_s1E+2F-P _b7_s1E+59-P
					; sub_B35D3+7-P	sub_B362D+14-P
					; sub_F9322+11-J _bA_s17+2-P _bA_s17+5-P
					; _bA_s17+68-P _bA_s17+72-P _bA_s17+75-J
					; sub_1283C3+43-P sub_12923C+53-P
					; sub_129339+29-P _bC_s17+B-P
					; _bC_s17+16-P sub_12A570+1C-J
					; sub_12A5CA+5-P _bC_s24+3E-P
					; sub_12AE93+59-P sub_12B3D1+7F-J
					; _bC_s12_vblank_count_50+2-J
					; _npc_hndl1+3F-P sub_15A8F0+12-P
					; _vblank_count+C-j sub_17436D+9-p
					; sub_1755AB+1B-p sub_176C3C+2-j
					; _b17_s0_copyrights_screen+17-P
					; _copyrights_sprites_animate+2-P
					; _copyrights_sprites_animate+A-P
					; _b17_s1+43-P _b17_s1+4B-P _b17_s1+96-P
		LDA		_nmi_counter	; code used as ind data	at c000
loc_17434F:				; CODE XREF: _vblank_count+6-j
		CMP		_nmi_counter	; code used as ind data	at c000
		BEQ		loc_17434F	; code used as ind data	at c000
		JSR		sub_17490A	; code used at c000
		DEX				; code used at c000
		BNE		_vblank_count	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17435B:				; CODE XREF: sub_397FE+14-P
					; sub_397FE+1F-P _b2_s2-P _b4_s1A+5-P
					; sub_9BE1D-J sub_9BF72+21-P
					; sub_9BF72+3E-J sub_F834B:loc_F8361-P
					; sub_F834B+28-J sub_12923C+4E-P
					; sub_1292B0+32-P sub_129339+24-P
					; _bC_s22:loc_129C8F-P sub_15B24B+14-P
					; sub_15B276+6-P
					; _b17_s0_copyrights_screen+1F-P
					; _copyrights_screen_prepare+A-P
					; _b17_s1+38-P _b17_s1+5A-P
					; sub_23587B+A-P sub_235897+42-P
					; sub_235A35+20-P sub_235AA9+14-P
					; sub_235ADC+17-P _b18_s0:loc_24C042-P
					; sub_24C055+16-P _b18_s1-P
					; sub_24C156+16-P sub_24E747+85-P
					; sub_24E747+E9-P sub_24E89C+C-P
					; sub_24E8B1+D-P sub_27E6A4+2D-P
					; sub_27E6FD+2D-P sub_27E73A+A-P
					; sub_27E847+22-P sub_27E890+16-P
		LDA		#0		; code used at c000
		STA		_tmp21		; code used at c000
		JSR		sub_174383	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_pal_fade_in:				; CODE XREF: sub_8683+85-P
					; sub_9BC74+7A-J
					; _b7_sA_sram_test_and_init+53-P
					; _b7_s1E+2A-P sub_B34E4+22-P
					; sub_B35D3-P sub_B36B5+10-J _bA_sF+F-P
					; _bA_s16+9-P sub_1292B0+2F-P
					; sub_12B493+3D-P _npc_hndl47+5A-P
					; sub_175B0E+6-j
					; _copyrights_set_pal_and_show+D-P
		LDA		#$40       ; code used at c000
		LDX		#$F0       ; code used at c000
		BNE		sub_17436D	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174369:				; CODE XREF: _b6_s6+5D-P sub_9BC74+3-P
					; _b6_s1D+3-P sub_B28ED+3-P
					; sub_B32F1:loc_B32F6-P	_b7_s1E+9-P
					; _b7_s1E+38-P _b7_s1E+5C-P
					; sub_B34E4:loc_B352C-P	_bA_sF+1E-P
					; _bA_s16-P _bC_s34+1A-P sub_129162+4E-P
					; sub_1292B0+12-P _bC_s19+8-P
					; _bC_s19:loc_12A686-P sub_12B493+31-P
					; sub_12B493+43-P sub_142504-P
					; _npc_hndl47+51-P _bE_sE:loc_15B754-P
					; sub_174BB3+E-p sub_174C62+4-p
					; sub_174E52:loc_174E9C-p
					; sub_17522D+8A-p sub_17522D+B8-p
					; sub_175342+6-p sub_1753AA+7D-p
					; sub_175596+D-p sub_175917+4-p
					; _b17_s0_copyrights_screen+22-P
					; _b17_s1+3B-P _b17_s1:loc_235856-P
					; _b17_s1+91-P sub_24C084-P
		LDA		#$10		; code used at c000
		LDX		#$10		; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17436D:				; CODE XREF: _pal_fade_in+4-j
		STX		_tmp21+1	; code used at c000
loc_17436F:				; CODE XREF: sub_17436D+13-j
		STA		_tmp21		; code used at c000
		JSR		sub_174383	; code used at c000
		LDX		#3		; code used at c000
		JSR		_vblank_count	; code used at c000
		LDA		_tmp21		; code used at c000
		CLC				; code used at c000
		ADC		_tmp21+1	; code used at c000
		CMP		#$50       ; code used at c000
		BCC		loc_17436F	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174383:				; CODE XREF: sub_8683:loc_86FF-P
					; sub_17435B+4-p sub_17436D+4-p
		LDA		#$3F       ; code used at c000
		STA		byte_20		; code used as ind data	at c000
		LDA		#0		; code used at c000
		STA		byte_1F		; code used at c000
		TAX				; code used as ind data	at c000
loc_17438C:				; CODE XREF: sub_174383+2C-j
		LDA		byte_1F		; code used as ind data	at c000
		LDY		_ram_pal_buf	; code used as ind data	at c000
		AND		#3		; code used as ind data	at c000
		BEQ		loc_174399	; code used as ind data	at c000
		LDY		_ram_pal_buf+1,X ; code	used as	ind data at c000
		INX				; code used as ind data	at c000
loc_174399:				; CODE XREF: sub_174383+10-j
		TYA				; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		_tmp21		; code used as ind data	at c000
		CMP		#$40       ; code used as ind data at c000
		BCC		loc_1743A4	; code used as ind data	at c000
		LDA		_ram_pal_buf	; code used at c000
loc_1743A4:				; CODE XREF: sub_174383+1C-j
		STA		byte_1E		; code used as ind data	at c000
		STX		_tmp21+2	; code used as ind data	at c000
		JSR		sub_17430A	; code used as ind data	at c000
		LDX		_tmp21+2	; code used as ind data	at c000
		CPX		#$18		; code used as ind data	at c000
		BNE		loc_17438C	; code used as ind data	at c000
		JSR		sub_1742BA	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1743B5:				; CODE XREF: _b0_s64+47-J _b6_s6+6F-P
					; _b6_s1C+2F-P _b7_s8+3-P _b7_s1E+3E-P
					; sub_142504:loc_142545-P sub_15B276+3-P
					; sub_174BB3+11-p sub_174C62+C-p
					; sub_174CE2+F-p sub_1750D0+F1-p
					; sub_17532D+12-j
		BRK
		.BYTE 0, $6F		; ofs 0x0021c000, -> dst _b16_s0

; =============== S U B	R O U T	I N E =======================================
sub_1743B8:				; CODE XREF: sub_8261+143-P
					; sub_8261:loc_83EB-P
					; sub_8261:loc_8429-P
					; sub_8261:loc_855F-P sub_A039+B-P
					; sub_A3FB:loc_A474-P
					; sub_A3FB:loc_A4F1-P
					; sub_A3FB:loc_A552-P
					; sub_A5B9:loc_A636-P
					; sub_A5B9:loc_A651-P sub_B16B+17-P
					; sub_B1D9+1-P sub_B1F6-P _b1_s9+46-P
					; _b1_s9:loc_208A4-P _b1_s9+77-P
					; _b1_s9:loc_208D5-P _b1_sD+203-P
					; _b2_sB+53-P _b2_sB:loc_3A3AC-P
					; _b2_sB:loc_3A3BC-P _b2_sB+375-P
					; _b2_sD+7-P sub_6ACBE:loc_6ACC9-P
					; sub_6ACBE+15-J sub_6AF0E+13-P
					; sub_6AFB3+1-P	sub_6AFD2-P
					; sub_6B0E5+1E-P sub_6B0E5+69-P
					; sub_6B1E8:loc_6B209-P	_b4_s17+2F-P
					; _b4_s17:loc_6B879-P _b4_s17+43-P
					; sub_6BA6A:loc_6BA74-P	_b6_s15+E-P
					; _begin_new_quest+70-P	sub_B2DBE+E7-P
					; sub_F828A+3-P	sub_F82A4-P _bA_sB+27-P
					; _bA_sA+2A-P sub_128F30-P
					; sub_128F30+8-P sub_12A89C+4-P
					; sub_12AB5F:loc_12AB63-P sub_1417DD-P
					; sub_14193F+32-P
					; sub_14193F:loc_14197D-P
					; sub_14193F+AA-P _bE_s24+31-P
					; sub_15B82E+F-P sub_1743F1:loc_17440F-p
					; sub_177EB1+35-p
		TYA				; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDA		#$FF		; code used as ind data	at c000
		STA		_tmp21		; code used as ind data	at c000
		JSR		sub_1743D2	; code used as ind data	at c000
		LDA		#$FF		; code used as ind data	at c000
		STA		_tmp21		; code used as ind data	at c000
		JSR		sub_1743D2	; code used as ind data	at c000
		INC		byte_A4		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		byte_1C		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		byte_A4		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1743D2:				; CODE XREF: sub_B2CD0+1C-P
					; sub_1743B8+6-p sub_1743B8+D-p
		LDY		#8		; code used as ind data	at c000
loc_1743D4:				; CODE XREF: sub_1743D2+1C-j
		LDA		byte_1D		; code used as ind data	at c000
		EOR		_tmp21		; code used as ind data	at c000
		ASL		byte_1C		; code used as ind data	at c000
		ROL		byte_1D		; code used as ind data	at c000
		ASL		_tmp21		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		BCC		loc_1743ED	; code used as ind data	at c000
		LDA		byte_1C		; code used as ind data	at c000
		EOR		#$21       ; code used as ind data at c000
		STA		byte_1C		; code used as ind data	at c000
		LDA		byte_1D		; code used as ind data	at c000
		EOR		#$10		; code used as ind data	at c000
		STA		byte_1D		; code used as ind data	at c000
loc_1743ED:				; CODE XREF: sub_1743D2+D-j
		DEY				; code used as ind data	at c000
		BNE		loc_1743D4	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1743F1:				; CODE XREF: sub_80D4+5-P sub_80D4+17-P
					; sub_80D4+97-P	sub_80D4+A2-P
					; sub_80D4+C1-P	sub_8261+225-P
					; sub_8261+26C-P sub_8261+2AE-P
					; sub_8261+2DC-P sub_8261+31F-P
					; sub_8261+326-P
		STA		_tmp21+1	; code used at c000
		CMP		#0		; code used at c000
		BEQ		locret_174420	; code used at c000
		TXA				; code used at c000
		PHA				; code used as ind data	at c000
		TYA				; code used at c000
		PHA				; code used at c000
		LDA		#0		; code used at c000
		STA		_tmp21+2	; code used at c000
		LDA		_tmp21+1	; code used at c000
		LDY		#9		; code used at c000
loc_174403:				; CODE XREF: sub_1743F1+16-j
		DEY				; code used at c000
		BEQ		loc_17440F	; code used as ind data	at c000
		ASL		; code used at c000
		BCC		loc_174403	; code used at c000
loc_174409:				; CODE XREF: sub_1743F1+1C-j
		SEC				; code used at c000
		ROL		_tmp21+2	; code used at c000
		DEY				; code used as ind data	at c000
		BNE		loc_174409	; code used as ind data	at c000
loc_17440F:				; CODE XREF: sub_1743F1+13-j
					; sub_1743F1+25-j
		JSR		sub_1743B8	; code used at c000
		AND		_tmp21+2	; code used as ind data	at c000
		CMP		_tmp21+1	; code used at c000
		BCS		loc_17440F	; code used at c000
		STA		_tmp21+1	; code used at c000
		PLA				; code used at c000
		TAY				; code used as ind data	at c000
		PLA				; code used at c000
		TAX				; code used as ind data	at c000
		LDA		_tmp21+1	; code used at c000
locret_174420:				; CODE XREF: sub_1743F1+4-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
__render_on_flag10_clear_reinit:	; CODE XREF: _b5_sB_ppu_font_load+35-J
					; _b7_sA_sram_test_and_init-P
					; _b7_s1E+19-P _bA_sF+6-P _bE_sF-P
					; sub_15B920+D7-J _ppu_screen_clear+30-j
					; sub_1740FA+6-j sub_174BB3+54-p
					; sub_1754AD+6-j sub_1762FC+6-j
					; _render_on_flag10_clear_reinit-J
					; _b17_s1+70-P _b17_s1+84-J _b17_s1+9E-J
					; sub_23588E-P sub_24C17A+D-P
					; sub_27E750+10-J
		JSR		_clear_nmi_flag_10 ; code used at c000
		JMP		sub_17443A	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_vblank_and_render_off_flag10_set:	; CODE XREF: _b2_s0:loc_3A142-P
					; _b5_sB_ppu_font_load-P _b7_s8+6-P
					; _b7_s1E+C-P sub_1292B0+15-P
					; _bC_s19+1F-P _bE_s18-P
					; _ppu_screen_clear-p sub_1740FA-p
					; sub_174BB3+4E-p sub_1750D0+F4-p
					; sub_1754AD-p sub_1762FC-p
					; sub_177D0A+7-p
					; _copyrights_screen_prepare+10-J
					; _b17_s1+5D-P sub_23587B+10-J
					; sub_24C156+21-J sub_27E73A+13-J
		JSR		_vblank_and_render_off ; code used at c000

; =============== S U B	R O U T	I N E =======================================
_set_nmi_flag_10:			; CODE XREF: _b5_s9+3-P
					; sub_174C62:loc_174C93-p
					; sub_174C62+37-p
		LDA		#$10		; code used as ind data	at c000
		ORA		_nmi_flags	; code used at c000
		STA		_nmi_flags	; code used at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_clear_nmi_flag_10:			; CODE XREF: sub_8683-P	_b2_s0+1A-J
					; _bA_sD-P sub_1292B0+21-P
					; __render_on_flag10_clear_reinit-p
					; sub_17443A+7-p sub_175B0E-p
		LDA		#$10		; code used as ind data	at c000
		EOR		#$FF		; code used at c000
		AND		_nmi_flags	; code used as ind data	at c000
		STA		_nmi_flags	; code used at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_17443A:				; CODE XREF: sub_8683+82-P _b7_s1E+3B-P
					; _bA_sD+3-P sub_1292B0+38-P
					; __render_on_flag10_clear_reinit+3-j
					; sub_175B0E+3-p
		LDA		_nmi_flags	; code used as ind data	at c000
		PHA				; code used at c000
		LDA		byte_6D6	; code used at c000
		PHA				; code used as ind data	at c000
		JSR		_clear_nmi_flag_10 ; code used at c000
		LDA		#$18		; code used at c000
		STA		byte_6D4	; code used at c000
		LDA		#2		; code used at c000
		JSR		sub_1740E9	; code used at c000
		PLA				; code used at c000
		STA		byte_6D6	; code used at c000
		PLA				; code used at c000
		STA		_nmi_flags	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_vblank_and_render_off:			; CODE XREF: sub_8683+61-P _b5_s9-P
					; _b7_s1E+35-P
					; _vblank_and_render_off_flag10_set-p
		LDY		#0		; code used as ind data	at c000
		LDA		_PPU_STATUS	; code used at c000
loc_17445B:				; CODE XREF: _vblank_and_render_off+8-j
		LDA		_PPU_STATUS	; code used as ind data	at c000
		BPL		loc_17445B	; code used as ind data	at c000
		TYA				; code used at c000
		STA		_PPU_MASK	; code used at c000
		STA		byte_6D4	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_174468:
		JSR		_get_param_byte_set_exit_to_next

; =============== S U B	R O U T	I N E =======================================
_syscall01_safe:			; DATA XREF: BANKF:E7C2-o
		STA		_irq_a_saved	; ind code used	as ind data at c000
		STX		_irq_x_saved	; code used as ind data	at c000
		LDA		_mmc_cur_prg_bank ; code used as ind data at c000
		PHA				; code used as ind data	at c000
		LDA		#$4C       ; code used as ind data at c000
		STA		_tmp21		; code used as ind data	at c000
		LDX		#_tmp21+1	; code used as ind data	at c000
		JSR		_get_syscall1_bank_ptr ; code used as ind data at c000
		JMP		_syscall_exec_safe ; code used as ind data at c000

; =============== S U B	R O U T	I N E =======================================
_get_param_byte_set_exit_to_next:	; CODE XREF: sub_174468-p
					; _syscall0_param1-p
		STA		_irq_a_saved	; code used as ind data	at c000
		STX		_irq_x_saved	; code used as ind data	at c000
		TSX				; code used as ind data	at c000
		INC		$103,X		; code used as ind data	at c000
		BNE		loc_17448C	; code used as ind data	at c000
		INC		$104,X
loc_17448C:				; CODE XREF: _get_param_byte_set_exit_to_next+8-j
		LDA		$103,X		; code used as ind data	at c000
		STA		_tmp21		; code used as ind data	at c000
		LDA		$104,X		; code used as ind data	at c000
		STA		_tmp21+1	; code used as ind data	at c000
		LDY		#0		; code used as ind data	at c000
		LDA		(_tmp21),Y	; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDX		_irq_x_saved	; code used as ind data	at c000
		LDA		_irq_a_saved	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_syscall0_param1:			; DATA XREF: BANK0:_syscall0_param1_ofs-o
		JSR		_get_param_byte_set_exit_to_next ; code	used as	ind data at c000

; =============== S U B	R O U T	I N E =======================================
_syscall00_safe:			; CODE XREF: sub_6AA3E+B-P _bC_s17+6-P
					; _bC_s17+10-P
					; DATA XREF: BANKF:_syscall_lib-o
		STA		_irq_a_saved	; ind code used	as ind data at c000
		STX		_irq_x_saved	; code used as ind data	at c000
		LDA		_mmc_cur_prg_bank ; code used as ind data at c000
		PHA				; code used as ind data	at c000
		LDA		#$4C       ; code used as ind data at c000
		STA		_tmp21		; code used as ind data	at c000
		LDX		#_tmp21+1	; code used as ind data	at c000
		JSR		_get_syscall0_bank_ptr ; code used as ind data at c000

; =============== S U B	R O U T	I N E =======================================
_syscall_exec_safe:			; CODE XREF: _syscall01_safe+11-j
		LDA		_irq_a_saved	; code used as ind data	at c000
		LDX		_irq_x_saved	; code used as ind data	at c000
		JSR		_tmp21		; code used as ind data	at c000
		PHP				; code used as ind data	at c000
		STA		_irq_a_saved	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		STA		_tmp21		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		LDA		_tmp21		; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDA		_irq_a_saved	; code used as ind data	at c000
		PLP				; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
; unused
_syscall1_unsafe:
		LDA		#$4C 
		STA		_tmp21
		LDX		#_tmp21+1
		JSR		_get_syscall1_bank_ptr
		JMP		_tmp21

; =============== S U B	R O U T	I N E =======================================
_syscall0_unsafe:			; CODE XREF: sub_1280A6+13B-J
		LDA		#$4C       ; code used at c000
		STA		_tmp21		; code used at c000
		LDX		#_tmp21+1	; code used at c000
		JSR		_get_syscall0_bank_ptr ; code used at c000
		JMP		_tmp21		; code used at c000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_1744E4:
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		2,X
		JSR		_mmc1_prg_set
		JSR		_get_data_next_byte
		STA		3,X
		PLA
		JSR		_mmc1_prg_set
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_syscall1_bank_ptr:			; CODE XREF: _syscall01_safe+E-p
					; _syscall1_unsafe+6-p
		LDA		_get_syscall1_sub_idx,Y	; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		AND		#1		; code used as ind data	at c000
		BNE		loc_17450D	; code used at c000
		TYA				; code used at c000
		LSR		; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		_get_syscall1_sub_table_banks,Y	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		JMP		_get_syscall_bank_and_ptr ; code used at c000
loc_17450D:				; CODE XREF: _get_syscall1_bank_ptr+7-j
		TYA				; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		TAY				; code used at c000
		LDA		_get_syscall1_sub_table_banks,Y	; code used as ind data	at c000
		AND		#$F		; code used as ind data	at c000
		JMP		_get_syscall_bank_and_ptr ; code used as ind data at c000

; =============== S U B	R O U T	I N E =======================================
_get_syscall0_bank_ptr:			; CODE XREF: _syscall00_safe+E-p
					; _syscall0_unsafe+6-p
					; _get_syscall0_data_byte_Y+B-p
					; _get_syscall0_data_byte_X+B-p
					; _get_syscall0_data_cur_byte0+B-p
					; _get_syscall0_data_cur_byte1+B-p
		LDA		_get_syscall0_sub_idx,Y	; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		AND		#1		; code used as ind data	at c000
		BNE		loc_17452E	; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		_get_syscall0_sub_table_banks,Y	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		JMP		_get_syscall_bank_and_ptr ; code used as ind data at c000
loc_17452E:				; CODE XREF: _get_syscall0_bank_ptr+7-j
		TYA				; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		_get_syscall0_sub_table_banks,Y	; code used as ind data	at c000
		AND		#$F		; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_get_syscall_bank_and_ptr:		; CODE XREF: _get_syscall1_bank_ptr+13-j
					; _get_syscall1_bank_ptr+1E-j
					; _get_syscall0_bank_ptr+13-j
		STA		2,X		; code used as ind data	at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		off_8000,Y	; code used as ind data	at c000
		STA		0,X		; code used as ind data	at c000
		LDA		off_8000+1,Y	; code used as ind data	at c000
		STA		1,X		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_get_syscall0_bank_ptr_no_prg_change:	; CODE XREF: sub_3A267+2A-P
					; sub_6B888+1C-P sub_17592E+4-p
		STY		_irq_y_saved	; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		_mmc_cur_prg_bank ; code used as ind data at c000
		PHA				; code used as ind data	at c000
		LDA		_get_syscall0_sub_idx,Y	; code used at c000
		PHA				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		AND		#1		; code used at c000
		BNE		loc_174566	; code used at c000
		TYA				; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		_get_syscall0_sub_table_banks,Y	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		JMP		loc_17456E	; code used at c000
loc_174566:				; CODE XREF: _get_syscall0_bank_ptr_no_prg_change+E-j
		TYA				; code used at c000
		LSR		; code used at c000
		TAY				; code used at c000
		LDA		_get_syscall0_sub_table_banks,Y	; code used at c000
		AND		#$F		; code used at c000
loc_17456E:				; CODE XREF: _get_syscall0_bank_ptr_no_prg_change+1A-j
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		ASL		; code used at c000
		TAY				; code used at c000
		LDA		off_8000,Y	; code used as ind data	at c000
		STA		0,X		; code used as ind data	at c000
		LDA		off_8000+1,Y	; code used as ind data	at c000
		STA		1,X		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		LDY		_irq_y_saved	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_get_syscall0_data_byte_Y:		; CODE XREF: _b2_sB+1B8-P _b2_sB+21C-P
					; sub_12923C+36-P _bC_s1D+3E-P
		STX		_irq_x_saved	; code used at c000
		STY		_irq_y_saved	; code used at c000
		TAY				; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		LDX		#_tmp21		; code used at c000
		JSR		_get_syscall0_bank_ptr ; code used at c000
		LDY		_irq_y_saved	; code used at c000
		LDA		(_tmp21),Y	; code used at c000
		STA		byte_25		; code used at c000
		PLA				; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDX		_irq_x_saved	; code used at c000
		LDA		byte_25		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_get_syscall0_data_byte_X:		; CODE XREF: sub_9E9C+65-P sub_9E9C+81-P
					; sub_9E9C+A6-P	_b1_sD+191-P
					; _b2_sB+2F7-P _b2_sD+25-P
					; sub_6AE6C+3C-P sub_6AE6C+72-P
					; _bA_sA+40-P sub_12923C+C-P
					; sub_12923C+1C-P sub_129874+4F-P
					; _bC_s1F+1C-P _bC_s1F+26-P _bC_s1E+1C-P
					; _bD_s12+2-P _bD_s12+11-P
					; sub_1422E1+45-P sub_1422E1+AE-P
					; sub_142923:loc_142A27-P
					; sub_15851F+1F-P sub_15858D+F-P
					; sub_21C01C+2F-P
		STX		_irq_x_saved	; code used as ind data	at c000
		STY		_irq_y_saved	; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		LDA		_mmc_cur_prg_bank ; code used as ind data at c000
		PHA				; code used as ind data	at c000
		LDX		#_tmp21		; code used at c000
		JSR		_get_syscall0_bank_ptr ; code used at c000
		LDX		_irq_x_saved	; code used as ind data	at c000
		TXA				; code used as ind data	at c000
		TAY				; code used at c000
		LDA		(_tmp21),Y	; code used as ind data	at c000
		STA		byte_25		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		LDY		_irq_y_saved	; code used as ind data	at c000
		LDA		byte_25		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_get_syscall0_data_cur_byte0:		; CODE XREF: sub_159F2E+2-P
					; sub_159F5A+2-P
					; _calc_6C_mul_3_add_syscall0_word+8-p
					; sub_175569+8-p sub_1759B8+2-p
					; sub_175A32+20-p sub_175A32+98-p
					; sub_177E23+F-p
		STX		_irq_x_saved	; code used at c000
		STY		_irq_y_saved	; code used at c000
		TAY				; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		LDX		#_tmp21		; code used at c000
		JSR		_get_syscall0_bank_ptr ; code used at c000
		LDY		#0		; code used at c000
		LDA		(_tmp21),Y	; code used at c000
		STA		byte_25		; code used at c000
		PLA				; code used at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		LDY		_irq_y_saved	; code used at c000
		LDX		_irq_x_saved	; code used at c000
		LDA		byte_25		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_get_syscall0_data_cur_byte1:		; CODE XREF: sub_159F2E+9-P
					; sub_159F5A+9-P
					; _calc_6C_mul_3_add_syscall0_word+E-p
					; sub_175569+13-p sub_1759B8+9-p
					; sub_175A32+16-p sub_175A32+9F-p
					; sub_177E23+16-p
		STX		_irq_x_saved	; code used at c000
		STY		_irq_y_saved	; code used at c000
		TAY				; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		LDX		#_tmp21		; code used at c000
		JSR		_get_syscall0_bank_ptr ; code used at c000
		LDY		#1		; code used at c000
		LDA		(_tmp21),Y	; code used at c000
		STA		byte_25		; code used at c000
		PLA				; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDY		_irq_y_saved	; code used at c000
		LDX		_irq_x_saved	; code used at c000
		LDA		byte_25		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_get_far_ptr_byte_safe:			; CODE XREF: _get_far_pak_data_ptr_byte_safe+A-P
					; sub_3A267+3C-P sub_6B994+1B-P
					; sub_6BB36+2-J	sub_15AF01+11-P
		STA		_irq_a_saved	; code used as ind data	at c000
		LDA		_mmc_cur_prg_bank ; code used as ind data at c000
		PHA				; code used as ind data	at c000
		STX		_irq_x_saved	; code used as ind data	at c000
		STY		_irq_y_saved	; code used as ind data	at c000
		LDA		_irq_a_saved	; code used as ind data	at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		LDA		0,X		; code used as ind data	at c000
		STA		_tmp21		; code used as ind data	at c000
		LDA		1,X		; code used as ind data	at c000
		STA		_tmp21+1	; code used as ind data	at c000
		LDA		(_tmp21),Y	; code used as ind data	at c000
		STA		_tmp21+2	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		LDX		_irq_x_saved	; code used as ind data	at c000
		LDY		_irq_y_saved	; code used as ind data	at c000
		LDA		_tmp21+2	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_174625:
		STA		_irq_a_saved
		LDA		_mmc_cur_prg_bank
		PHA
		STX		_irq_x_saved
		STY		_irq_y_saved
		TYA
		JSR		_mmc1_prg_set
		LDA		0,X
		STA		_tmp21
		LDA		1,X
		STA		_tmp21+1
		LDA		_irq_a_saved
		LDY		#0
		AND		(_tmp21),Y
		STA		_tmp21+2
		PLA
		JSR		_mmc1_prg_set
		LDX		_irq_x_saved
		LDY		_irq_y_saved
		LDA		_tmp21+2
		RTS

; =============== S U B	R O U T	I N E =======================================
_mmc1_cmd:				; CODE XREF: _mmc1_chr_set+6-p
		STA		_cur_mmc_cmd	; code used at c000
		STA		$9FFF		; code used at c000
		LSR		; code used at c000
		STA		$9FFF		; code used at c000
		LSR		; code used at c000
		STA		$9FFF		; code used at c000
		LSR		; code used at c000
		STA		$9FFF		; code used at c000
		LSR		; code used at c000
		STA		$9FFF		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_mmc1_chr0:				; CODE XREF: NMI+1C-p NMI+21-p
					; _mmc1_chr_set+C-p
		STA		_cur_chr0_bank_prg_hi ;	code used at c000
		STA		$BFFF		; code used at c000
		LSR		; code used at c000
		STA		$BFFF		; code used at c000
		LSR		; code used at c000
		STA		$BFFF		; code used at c000
		LSR		; code used at c000
		STA		$BFFF		; code used at c000
		LSR		; code used at c000
		STA		$BFFF		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_mmc1_chr1:				; CODE XREF: _mmc1_chr_set+11-j
		STA		$DFFF		; code used at c000
		LSR		; code used at c000
		STA		$DFFF		; code used at c000
		LSR		; code used at c000
		STA		$DFFF		; code used at c000
		LSR		; code used at c000
		STA		$DFFF		; code used at c000
		LSR		; code used at c000
		STA		$DFFF		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174690:				; CODE XREF: sub_83DA4+1B-P
					; sub_12874C+C-P sub_175C2E+58-p
		JSR		sub_1746C2	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_174693:				; CODE XREF: sub_175CCB+75-p
		JSR		sub_174719	; code used as ind data	at c000
		LDA		byte_1F		; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		#$C0       ; code used as ind data at c000
		TAX				; code used as ind data	at c000
		LDA		byte_20		; code used as ind data	at c000
		CMP		#$23       ; code used as ind data at c000
		BEQ		loc_1746A7	; code used as ind data	at c000
		TXA				; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#$40       ; code used as ind data at c000
		TAX				; code used as ind data	at c000
loc_1746A7:				; CODE XREF: sub_174693+D-j
		LDA		byte_480,X	; code used as ind data	at c000
		STA		byte_9		; code used as ind data	at c000
		LDA		#3		; code used as ind data	at c000
		LDY		word_6+1	; code used as ind data	at c000
		BEQ		loc_1746B8	; code used as ind data	at c000
loc_1746B2:				; CODE XREF: sub_174693+23-j
		ASL		; code used as ind data	at c000
		ASL		byte_A		; code used as ind data	at c000
		DEY				; code used as ind data	at c000
		BNE		loc_1746B2	; code used as ind data	at c000
loc_1746B8:				; CODE XREF: sub_174693+1D-j
		EOR		#$FF		; code used as ind data	at c000
		AND		byte_9		; code used as ind data	at c000
		ORA		byte_A		; code used as ind data	at c000
		STA		byte_480,X	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1746C2:				; CODE XREF: sub_174690-p sub_174729-p
		JSR		sub_1746C8	; code used as ind data	at c000
		JMP		sub_1746F4	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1746C8:				; CODE XREF: sub_1746C2-p sub_174716-p
					; sub_175CCB+4B-p
		LDA		byte_6D0	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		word_4		; code used as ind data	at c000
		STA		word_6		; code used as ind data	at c000
		LDA		byte_6D3	; code used as ind data	at c000
		AND		#1		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		EOR		word_6		; code used as ind data	at c000
		STA		word_6		; code used as ind data	at c000
		LDA		byte_6D1	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		word_4+1	; code used as ind data	at c000
		CMP		#$1E		; code used as ind data	at c000
		BCC		loc_1746F1	; code used as ind data	at c000
		SEC				; code used at c000
		SBC		#$1E		; code used at c000
loc_1746F1:				; CODE XREF: sub_1746C8+24-j
		STA		byte_8		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1746F4:				; CODE XREF: sub_1746C2+3-j
					; sub_175CCB+72-p
		AND		#$FC       ; code used as ind data at c000
		ASL		; code used as ind data	at c000
		STA		byte_1F		; code used as ind data	at c000
		LDA		word_6		; code used as ind data	at c000
		AND		#$1F		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		byte_1F		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#$C0       ; code used as ind data at c000
		STA		byte_1F		; code used as ind data	at c000
		LDA		word_6		; code used as ind data	at c000
		AND		#$20       ; code used as ind data at c000
		BNE		loc_174711	; code used as ind data	at c000
		LDA		#$23       ; code used as ind data at c000
		BNE		loc_174713	; code used as ind data	at c000
loc_174711:				; CODE XREF: sub_1746F4+17-j
		LDA		#$27       ; code used as ind data at c000
loc_174713:				; CODE XREF: sub_1746F4+1B-j
		STA		byte_20		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_174716:
		JSR		sub_1746C8

; =============== S U B	R O U T	I N E =======================================
sub_174719:				; CODE XREF: sub_174693-p sub_17472C-j
		LDA		word_6		; code used as ind data	at c000
		AND		#2		; code used as ind data	at c000
		STA		word_6+1	; code used as ind data	at c000
		LDA		byte_8		; code used as ind data	at c000
		AND		#2		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ORA		word_6+1	; code used as ind data	at c000
		STA		word_6+1	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
; unused
sub_174729:
		JSR		sub_1746C2

; =============== S U B	R O U T	I N E =======================================
; unused
sub_17472C:
		JMP		sub_174719

; =============== S U B	R O U T	I N E =======================================
; unused
sub_17472F:
		LDA		byte_6D3
		AND		#1
		STA		word_6+1
		LDA		word_4
		ASL
		ASL
		ASL
		CLC
		ADC		byte_6D0
		BCC		locret_174747
		LDA		word_6+1
		EOR		#1
		STA		word_6+1
locret_174747:				; CODE XREF: sub_17472F+10-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174748:				; CODE XREF: sub_83DFF+3-P
					; sub_B36EF+1C-J
		LDA		#$FF		; code used at c000
		BNE		sub_17474E	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17474C:				; CODE XREF: sub_2060C-P sub_39E51+B-P
					; sub_39E51+48-P sub_6AA51+1B-P
					; _b4_sC+1B-P sub_B2BCE+18-P
					; sub_B35ED+2F-J sub_B36C8+24-J
					; sub_1587CF+15-P sub_159D86+4-P
		LDA		#0		; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_17474E:				; CODE XREF: sub_174748+2-j
		JSR		sub_174757	; code used as ind data	at c000
		JSR		sub_1742BA	; code used as ind data	at c000
		JMP		_vblank		; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_174757:				; CODE XREF: sub_17474E-p
		PHA				; code used as ind data	at c000
		LDA		byte_6D9	; code used as ind data	at c000
		BEQ		loc_174760	; code used as ind data	at c000
		JSR		_vblank		; code used at c000
loc_174760:				; CODE XREF: sub_174757+4-j
		LDA		#0		; code used as ind data	at c000
		STA		byte_24		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		JSR		sub_174878	; code used as ind data	at c000
		LDA		#0		; code used as ind data	at c000
		STA		byte_25		; code used as ind data	at c000
		STA		byte_26		; code used as ind data	at c000
		LDA		byte_471	; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		AND		#$F0       ; code used as ind data at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		STA		_tmp21+1	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		AND		#$F		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		STA		_tmp21+2	; code used as ind data	at c000
		STA		byte_27		; code used as ind data	at c000
		LDX		byte_6D8	; code used as ind data	at c000
loc_174784:				; CODE XREF: sub_174757+97-j
		LDA		byte_20		; code used as ind data	at c000
		STA		byte_9		; code used as ind data	at c000
		LDA		byte_1F		; code used as ind data	at c000
		STA		byte_8		; code used as ind data	at c000
		AND		#$1F		; code used as ind data	at c000
		STA		word_4		; code used as ind data	at c000
		LDA		#$20       ; code used as ind data at c000
		SEC				; code used as ind data	at c000
		SBC		word_4		; code used as ind data	at c000
		STA		word_6		; code used as ind data	at c000
		LDA		_tmp21+2	; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		word_6		; code used as ind data	at c000
		STA		word_6+1	; code used as ind data	at c000
		BEQ		loc_1747A2	; code used as ind data	at c000
		BCS		loc_1747A9	; code used as ind data	at c000
loc_1747A2:				; CODE XREF: sub_174757+47-j
		LDA		_tmp21+2	; code used as ind data	at c000
		STA		word_6		; code used as ind data	at c000
		JMP		loc_1747C3	; code used as ind data	at c000
loc_1747A9:				; CODE XREF: sub_174757+49-j
		JSR		sub_1747F4	; code used as ind data	at c000
		LDA		byte_9		; code used as ind data	at c000
		EOR		#4		; code used as ind data	at c000
		STA		byte_9		; code used as ind data	at c000
		LDA		byte_8		; code used as ind data	at c000
		AND		#$1F		; code used as ind data	at c000
		STA		word_4		; code used as ind data	at c000
		LDA		byte_8		; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		word_4		; code used as ind data	at c000
		STA		byte_8		; code used as ind data	at c000
		LDA		word_6+1	; code used as ind data	at c000
		STA		word_6		; code used as ind data	at c000
loc_1747C3:				; CODE XREF: sub_174757+4F-j
		JSR		sub_1747F4	; code used as ind data	at c000
		LDA		byte_20		; code used as ind data	at c000
		AND		#$FB       ; code used as ind data at c000
		CMP		#$23       ; code used as ind data at c000
		BCC		loc_1747DF	; code used as ind data	at c000
		LDA		byte_1F		; code used as ind data	at c000
		CMP		#$A0       ; code used as ind data at c000
		BCC		loc_1747DF	; code used as ind data	at c000
		AND		#$1F		; code used at c000
		STA		byte_1F		; code used at c000
		LDA		byte_20		; code used at c000
		AND		#$FC       ; code used at c000
		JMP		loc_1747EA	; code used as ind data	at c000
loc_1747DF:				; CODE XREF: sub_174757+75-j
					; sub_174757+7B-j
		LDA		byte_1F		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#$20       ; code used as ind data at c000
		STA		byte_1F		; code used as ind data	at c000
		LDA		byte_20		; code used as ind data	at c000
		ADC		#0		; code used as ind data	at c000
loc_1747EA:				; CODE XREF: sub_174757+85-j
		STA		byte_20		; code used as ind data	at c000
		DEC		_tmp21+1	; code used as ind data	at c000
		BNE		loc_174784	; code used as ind data	at c000
		STX		byte_6D8	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_1747F4:				; CODE XREF: sub_174757:loc_1747A9-p
					; sub_174757:loc_1747C3-p
		INC		byte_24		; code used as ind data	at c000
		LDA		byte_24		; code used as ind data	at c000
		CMP		#8		; code used as ind data	at c000
		BCC		loc_174803	; code used as ind data	at c000
		LDX		#0		; code used at c000
		STX		byte_24		; code used at c000
		JSR		sub_1742B0	; code used at c000
loc_174803:				; CODE XREF: sub_1747F4+6-j
		LDA		byte_9		; code used as ind data	at c000
		ORA		#$80       ; code used as ind data at c000
		STA		byte_300,X	; code used as ind data	at c000
		LDA		word_6		; code used as ind data	at c000
		STA		byte_301,X	; code used as ind data	at c000
		LDA		byte_8		; code used as ind data	at c000
		STA		byte_302,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		INX				; code used as ind data	at c000
		INX				; code used as ind data	at c000
		LDA		word_6		; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDY		byte_25		; code used as ind data	at c000
loc_17481C:				; CODE XREF: sub_1747F4+32-j
		LDA		byte_400,Y	; code used as ind data	at c000
		STA		byte_300,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		INY				; code used as ind data	at c000
		DEC		word_6		; code used as ind data	at c000
		BNE		loc_17481C	; code used as ind data	at c000
		STY		byte_25		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		STA		word_6		; code used as ind data	at c000
		LDA		_tmp21+1	; code used as ind data	at c000
		AND		#1		; code used as ind data	at c000
		BEQ		loc_174874	; code used as ind data	at c000
		LDY		byte_26		; code used as ind data	at c000
		LDA		byte_9		; code used as ind data	at c000
		STA		byte_11		; code used as ind data	at c000
		LDA		byte_8		; code used as ind data	at c000
		STA		byte_10		; code used as ind data	at c000
loc_17483E:				; CODE XREF: sub_1747F4+7C-j
		TXA				; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDA		byte_9		; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDA		byte_460,Y	; code used as ind data	at c000
		JSR		sub_17489C	; code used as ind data	at c000
		STA		word_4		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		STA		byte_9		; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		TAY				; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		TAX				; code used as ind data	at c000
		LDA		_tmp12+1	; code used as ind data	at c000
		STA		byte_300,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		LDA		_tmp12		; code used as ind data	at c000
		STA		byte_300,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		LDA		word_4		; code used as ind data	at c000
		STA		byte_300,X	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		INY				; code used as ind data	at c000
		INC		byte_10		; code used as ind data	at c000
		INC		byte_10		; code used as ind data	at c000
		INC		byte_6D9	; code used as ind data	at c000
		DEC		word_6		; code used as ind data	at c000
		BNE		loc_17483E	; code used as ind data	at c000
		STY		byte_26		; code used as ind data	at c000
loc_174874:				; CODE XREF: sub_1747F4+3E-j
		INC		byte_6D9	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_174878:				; CODE XREF: sub_174757+E-p
		PHA				; code used as ind data	at c000
		JSR		sub_174887	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		BNE		loc_174880	; code used as ind data	at c000
		RTS				; code used as ind data	at c000
loc_174880:				; CODE XREF: sub_174878+5-j
		LDA		byte_20		; code used at c000
		EOR		#4		; code used at c000
		STA		byte_20		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174887:				; CODE XREF: sub_174878+1-p
		LDA		byte_470	; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		AND		#$1E		; code used as ind data	at c000
		STA		word_4		; code used as ind data	at c000
		LDA		byte_470	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		AND		#$1E		; code used as ind data	at c000
		STA		word_4+1	; code used as ind data	at c000
		JMP		sub_1742CF	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_17489C:				; CODE XREF: sub_1747F4+54-p
		STA		byte_F		; code used as ind data	at c000
		LDA		#$1F		; code used as ind data	at c000
		AND		byte_10		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		STA		byte_9		; code used as ind data	at c000
		LDA		#$80       ; code used as ind data at c000
		AND		byte_10		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		ORA		byte_9		; code used as ind data	at c000
		STA		byte_9		; code used as ind data	at c000
		LDA		#3		; code used as ind data	at c000
		AND		byte_11		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ORA		#$C0       ; code used as ind data at c000
		ORA		byte_9		; code used as ind data	at c000
		STA		_tmp12		; code used as ind data	at c000
		LDX		#$23       ; code used as ind data at c000
		LDA		byte_11		; code used as ind data	at c000
		CMP		#$24       ; code used as ind data at c000
		BCC		loc_1748CA	; code used as ind data	at c000
		LDX		#$27       ; code used as ind data at c000
loc_1748CA:				; CODE XREF: sub_17489C+2A-j
		STX		_tmp12+1	; code used as ind data	at c000
		LDA		byte_10		; code used as ind data	at c000
		AND		#$40       ; code used as ind data at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		STA		byte_C		; code used as ind data	at c000
		LDA		byte_10		; code used as ind data	at c000
		AND		#2		; code used as ind data	at c000
		ORA		byte_C		; code used as ind data	at c000
		STA		byte_C		; code used as ind data	at c000
		LDA		_tmp12		; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		#$C0       ; code used as ind data at c000
		TAX				; code used as ind data	at c000
		LDA		_tmp12+1	; code used as ind data	at c000
		CMP		#$23       ; code used as ind data at c000
		BEQ		loc_1748EF	; code used as ind data	at c000
		TXA				; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#$40       ; code used as ind data at c000
		TAX				; code used as ind data	at c000
loc_1748EF:				; CODE XREF: sub_17489C+4C-j
		LDA		byte_480,X	; code used as ind data	at c000
		STA		byte_D		; code used as ind data	at c000
		LDA		#3		; code used as ind data	at c000
		LDY		byte_C		; code used as ind data	at c000
		BEQ		loc_174900	; code used as ind data	at c000
loc_1748FA:				; CODE XREF: sub_17489C+62-j
		ASL		; code used as ind data	at c000
		ASL		byte_F		; code used as ind data	at c000
		DEY				; code used as ind data	at c000
		BNE		loc_1748FA	; code used as ind data	at c000
loc_174900:				; CODE XREF: sub_17489C+5C-j
		EOR		#$FF		; code used as ind data	at c000
		AND		byte_D		; code used as ind data	at c000
		ORA		byte_F		; code used as ind data	at c000
		STA		byte_480,X	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_17490A:				; CODE XREF: _vblank+8-j
					; _vblank_count+8-p
		PHA				; code used at c000
		TXA				; code used at c000
		PHA				; code used at c000
		TYA				; code used at c000
		PHA				; code used at c000
		LDA		byte_32		; code used at c000
		CMP		#$FD       ; code used at c000
		BNE		loc_17491C	; code used at c000
		LDA		byte_60B7	; code used at c000
		AND		#$20       ; code used at c000
		BNE		loc_17491F	; code used at c000
loc_17491C:				; CODE XREF: sub_17490A+9-j
		JSR		sub_174925	; code used at c000
loc_17491F:				; CODE XREF: sub_17490A+10-j
		PLA				; code used at c000
		TAY				; code used at c000
		PLA				; code used at c000
		TAX				; code used at c000
		PLA				; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174925:				; CODE XREF: sub_17490A:loc_17491C-p
		LDA		byte_33		; code used at c000
		BEQ		locret_17494E	; code used at c000
		LDA		byte_6D7	; code used at c000
		AND		#1		; code used at c000
		TAX				; code used at c000
		LDA		byte_17494F,X	; code used at c000
		PHA				; code used at c000
		LDA		byte_17494F+1,X	; code used at c000
		LDX		#$40       ; code used at c000
		JSR		_spr_swap	; code used at c000
		LDX		#$10		; code used at c000
		PLA				; code used at c000
		JSR		_spr_swap	; code used at c000
		LDX		byte_6D7	; code used at c000
		INX				; code used at c000
		CPX		#$A		; code used at c000
		BCC		loc_17494B	; code used at c000
		LDX		#0		; code used at c000
loc_17494B:				; CODE XREF: sub_174925+22-j
		STX		byte_6D7	; code used at c000
locret_17494E:				; CODE XREF: sub_174925+2-j
		RTS				; code used at c000
byte_17494F:
		.BYTE $D0,$A0,$70	; DATA XREF: sub_174925+A-r
					; sub_174925+E-r
					; data used at c000

; =============== S U B	R O U T	I N E =======================================
; swap 12 sprites at X and Y pos
; input	X - dst, A - src
_spr_swap:				; CODE XREF: sub_174925+13-p
					; sub_174925+19-p
		TAY				; code used at c000
		LDA		#$30       ; code used at c000
		STA		byte_A1		; code used at c000
loc_174957:				; CODE XREF: _spr_swap+17-j
		LDA		_spr_ram,X	; code used at c000
		PHA				; code used at c000
		LDA		_spr_ram,Y	; code used at c000
		STA		_spr_ram,X	; code used at c000
		PLA				; code used at c000
		STA		_spr_ram,Y	; code used at c000
		INX				; code used at c000
		INY				; code used at c000
		DEC		byte_A1		; code used at c000
		BNE		loc_174957	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
NMI:					; DATA XREF: BANKF:FFFA-o
		PHA				; code used at c000
		TYA				; code used at c000
		PHA				; code used at c000
		TXA				; code used at c000
		PHA				; code used at c000
		LDA		#$10		; code used at c000
		AND		_nmi_flags	; code used at c000
		BNE		loc_17497E	; code used at c000
		LDA		#0		; code used at c000
		STA		byte_33		; code used at c000
		JSR		sub_174A5C	; code used at c000
loc_17497E:				; CODE XREF: NMI+9-j
		INC		_mmc_reset_byte	; code used at c000
		LDA		#$1E		; code used at c000
		JSR		_mmc1_prg_cmd	; code used at c000
		LDA		#$10		; code used at c000
		JSR		_mmc1_chr0	; code used at c000
		LDA		#$10		; code used at c000
		JSR		_mmc1_chr0	; code used at c000
		JSR		_apu_play	; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		JSR		_mmc1_prg_cmd	; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		JSR		_mmc1_prg_cmd	; code used at c000
		INC		_nmi_counter	; code used at c000
		TSX				; code used at c000
		LDA		$106,X		; code used at c000
		CMP		#$FF		; code used at c000
		BNE		loc_1749C3	; code used at c000
		LDA		$105,X		; code used at c000
		CMP		#$AB       ; code used at c000
		BCC		loc_1749C3	; code used at c000
		CMP		#$D5       ; code used at c000
		BCS		loc_1749C3	; code used at c000
		LDA		#$D5       ; code used at c000
		STA		$105,X		; code used at c000
		JSR		_mmc1_chr_set	; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		JSR		_mmc1_prg_cmd	; code used at c000
loc_1749C3:				; CODE XREF: NMI+3C-j NMI+43-j NMI+47-j
		TSX				; code used at c000
		LDA		$106,X		; code used at c000
		STA		byte_A2		; code used at c000
		LDA		$105,X		; code used at c000
		STA		byte_A1		; code used at c000
		LDY		#0		; code used at c000
		LDA		(byte_A1),Y	; code used at c000
		AND		#$F		; code used at c000
		CMP		#7		; code used at c000
		BEQ		loc_1749E2	; code used at c000
		CMP		#$F		; code used at c000
		BEQ		loc_1749E2	; code used at c000
		PLA				; code used at c000
		TAX				; code used at c000
		PLA				; code used at c000
		TAY				; code used at c000
		PLA				; code used at c000
		RTI				; code used at c000
loc_1749E2:				; CODE XREF: NMI+6A-j NMI+6E-j
		PLA
		TAX
		PLA
		TAY
		PLA
		JMP		_far_call	; byte name
					; 01   cmd
					;      bbbaAAAA
					;      case 1 AAAA == 7
					;      case 2 AAAA == F, bbba <	4, bbba	== F
					;		 abbb -	syscall	index
					;		 idx  -	table value index
					;      case 2 AAAA == F, bbba >= 4 && bba <= E
					;		 abbb -	bank address
					;		 idx  -	routine	index

; =============== S U B	R O U T	I N E =======================================
_mmc1_chr_set:				; CODE XREF: NMI+4E-p _RESET+2E-p
					; _b17_s1+6A-P sub_24C17A+A-P
		INC		_mmc_reset_byte	; code used at c000
		LDA		_cur_mmc_cmd	; code used at c000
		JSR		_mmc1_cmd	; code used at c000
		LDA		_cur_chr0_bank_prg_hi ;	code used at c000
		JSR		_mmc1_chr0	; code used at c000
		LDA		#0		; code used at c000
		JMP		_mmc1_chr1	; code used at c000

; =============== S U B	R O U T	I N E =======================================
nullsub_2:				; CODE XREF: sub_174A5C+1A-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1749FF:				; CODE XREF: sub_174A5C+1C-j
		LDA		byte_6D9	; code used at c000
		BNE		loc_174A07	; code used at c000
		JMP		loc_174AE6	; code used at c000
loc_174A07:				; CODE XREF: sub_1749FF+3-j
		LDA		byte_6D3	; code used at c000
		ORA		#4		; code used at c000
		STA		_PPU_CTRL	; code used at c000
loc_174A0F:				; CODE XREF: sub_1749FF+2E-j
		JSR		sub_174A36	; code used at c000
		JSR		sub_174A36	; code used at c000
		LDA		byte_300,X	; code used at c000
		STA		_PPU_ADDR	; code used at c000
		INX				; code used at c000
		LDA		byte_300,X	; code used at c000
		STA		_PPU_ADDR	; code used at c000
		INX				; code used at c000
		LDA		byte_300,X	; code used at c000
		STA		_PPU_DATA	; code used at c000
		INX				; code used at c000
		DEC		byte_6D9	; code used at c000
		BNE		loc_174A0F	; code used at c000
		LDA		#0		; code used at c000
		STA		byte_44		; code used at c000
		JMP		loc_174AE6	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174A36:				; CODE XREF: sub_1749FF:loc_174A0F-p
					; sub_1749FF+13-p
		LDA		byte_300,X	; code used at c000
		AND		#$3F       ; code used at c000
		STA		_PPU_ADDR	; code used at c000
		INX				; code used at c000
		INX				; code used at c000
		LDA		byte_300,X	; code used at c000
		STA		_PPU_ADDR	; code used at c000
		INX				; code used at c000
		LDA		byte_300,X	; code used at c000
		STA		_PPU_DATA	; code used at c000
		INX				; code used at c000
		LDA		byte_300,X	; code used at c000
		STA		_PPU_DATA	; code used at c000
		INX				; code used at c000
		DEC		byte_6D9	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174A59:				; CODE XREF: sub_174A5C+18-j
		JMP		sub_17673E	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174A5C:				; CODE XREF: NMI+F-p
		LDA		_PPU_STATUS	; code used at c000
		LDX		#0		; code used at c000
		LDA		byte_32		; code used at c000
		BEQ		loc_174A6E	; code used at c000
		CMP		#$FE       ; code used at c000
		BEQ		loc_174A84	; code used at c000
		CMP		#$FD       ; code used at c000
		BEQ		loc_174A6E	; code used at c000
		RTS				; code used at c000
loc_174A6E:				; CODE XREF: sub_174A5C+7-j
					; sub_174A5C+F-j
		LDA		byte_28		; code used at c000
		BEQ		loc_174A7A	; code used at c000
		CMP		#$10		; code used at c000
		BCC		sub_174A59	; code used at c000
		BNE		nullsub_2	; code used at c000
		BEQ		sub_1749FF	; code used at c000
loc_174A7A:				; CODE XREF: sub_174A5C+14-j
		LDA		byte_29		; code used at c000
		BNE		loc_174A84	; code used at c000
		LDA		#4		; code used at c000
		AND		_nmi_flags	; code used at c000
		BEQ		loc_174A99	; code used at c000
loc_174A84:				; CODE XREF: sub_174A5C+B-j
					; sub_174A5C+20-j
		LDA		#4		; code used at c000
		ORA		_nmi_flags	; code used at c000
		STA		_nmi_flags	; code used at c000
		LDA		byte_29		; code used at c000
		BEQ		loc_174A92	; code used at c000
		STX		byte_29		; code used at c000
		BNE		loc_174A9F	; code used at c000
loc_174A92:				; CODE XREF: sub_174A5C+30-j
		LDA		byte_6D6	; code used at c000
		CMP		#2		; code used at c000
		BNE		loc_174AAC	; code used at c000
loc_174A99:				; CODE XREF: sub_174A5C+26-j
		LDA		#1		; code used at c000
		AND		_nmi_flags	; code used at c000
		BNE		loc_174AA6	; code used at c000
loc_174A9F:				; CODE XREF: sub_174A5C+34-j
		LDA		#2		; code used at c000
		STA		_PPU_OAM_DMA	; code used at c000
		STA		byte_33		; code used at c000
loc_174AA6:				; CODE XREF: sub_174A5C+41-j
		LDA		#4		; code used at c000
		AND		_nmi_flags	; code used at c000
		BEQ		loc_174B0A	; code used at c000
loc_174AAC:				; CODE XREF: sub_174A5C+3B-j
		LDA		byte_6D9	; code used at c000
		BEQ		loc_174AE6	; code used at c000
loc_174AB1:				; CODE XREF: sub_174A5C+88-j
		LDY		#1		; code used at c000
		LDA		byte_300,X	; code used at c000
		BPL		loc_174ACC	; code used at c000
		TAY				; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		AND		#4		; code used at c000
		ORA		byte_6D3	; code used at c000
		STA		_PPU_CTRL	; code used at c000
		TYA				; code used at c000
		INX				; code used at c000
		LDY		byte_300,X	; code used at c000
		AND		#$3F       ; code used at c000
loc_174ACC:				; CODE XREF: sub_174A5C+5A-j
		INX				; code used at c000
		STA		_PPU_ADDR	; code used at c000
		LDA		byte_300,X	; code used at c000
		INX				; code used at c000
		STA		_PPU_ADDR	; code used at c000
loc_174AD7:				; CODE XREF: sub_174A5C+83-j
		LDA		byte_300,X	; code used at c000
		INX				; code used at c000
		STA		_PPU_DATA	; code used at c000
		DEY				; code used at c000
		BNE		loc_174AD7	; code used at c000
		DEC		byte_6D9	; code used at c000
		BNE		loc_174AB1	; code used at c000
loc_174AE6:				; CODE XREF: sub_1749FF+5-j
					; sub_1749FF+34-j sub_174A5C+53-j
		LDA		#$3F       ; code used at c000
		STA		_PPU_ADDR	; code used at c000
		LDX		#0		; code used at c000
		STX		_PPU_ADDR	; code used at c000
		LDA		_ram_pal_buf	; code used at c000
		STA		_PPU_DATA	; code used at c000
		STX		_PPU_ADDR	; code used at c000
		STX		_PPU_ADDR	; code used at c000
		STX		byte_6D8	; code used at c000
		STX		byte_6DA	; code used at c000
		LDA		#4		; code used at c000
		EOR		#$FF		; code used at c000
		AND		_nmi_flags	; code used at c000
		STA		_nmi_flags	; code used at c000
loc_174B0A:				; CODE XREF: sub_174A5C+4E-j
		LDA		byte_6D3	; code used at c000
		STA		_PPU_CTRL	; code used at c000
		LDA		byte_6D4	; code used at c000
		STA		_PPU_MASK	; code used at c000
		LDA		byte_6D0	; code used at c000
		STA		_PPU_SCROLL	; code used at c000
		LDA		byte_6D1	; code used at c000
		STA		_PPU_SCROLL	; code used at c000
		RTS				; code used at c000
_unused_29:
		.BYTE $22,$65,$22,$85,$22,$A5,$22,$C5,$22,$E5,$23,  5,$23,$25,$23,$45

; =============== S U B	R O U T	I N E =======================================
__pause_or_skip:			; CODE XREF: sub_9FCD+18-P _b0_s46+58-P
					; _b0_s5D:loc_AC4B-P sub_AC9F-P
					; sub_AEF1:loc_AF3B-P sub_AF5B+1A-P
					; sub_B269+2A-P	sub_20A1A+3-P
					; _pause_or_skip-J _b1_sD+25E-J
					; sub_680FE+34-P sub_9BB26+8C-P
					; _b6_s1E+B-P _begin_new_quest+26-P
					; sub_B2C66+51-P _bC_sC+2A-P
					; sub_12A312+33-P sub_142E69+44-P
					; sub_142E69+54-P sub_158377+2C-P
					; sub_158377+38-P
					; sub_1583D0:loc_1583ED-P
					; sub_1583D0+26-P _bE_s33-P sub_15855F-P
					; sub_174BB3:loc_174BBB-p
		LDX		#0		; code used at c000
loc_174B35:				; CODE XREF: __pause_or_skip+13-j
		TXA				; code used at c000
		PHA				; code used at c000
		JSR		_calc_pads	; code used at c000
		JSR		_vblank		; code used at c000
		PLA				; code used at c000
		TAX				; code used at c000
		INX				; code used at c000
		CPX		#$5A       ; code used at c000
		BEQ		locret_174B52	; code used at c000
		LDA		_pads		; code used at c000
		BNE		loc_174B35	; code used at c000
loc_174B48:				; CODE XREF: __pause_or_skip+1D-j
		JSR		_vblank		; code used at c000
		JSR		_calc_pads	; code used at c000
		LDA		_pads		; code used at c000
		BEQ		loc_174B48	; code used at c000
locret_174B52:				; CODE XREF: __pause_or_skip+F-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_calc_pads:				; CODE XREF: sub_9E8B-P	sub_203A7+3-P
					; sub_203A7+6C-P sub_68931+C-P
					; sub_6AA0D+7-P
					; _name_entry_screen_input_handler+6-P
					; _name_entry_screen_input_handler:loc_9B7DB-P
					; _bA_sE:loc_F8CC7-P
					; _bC_s2E_vblank_count_50_wait_50_or_skip+B-P
					; _bE_s1:loc_15807E-P
					; sub_159F6D:loc_159F93-P sub_15A0A4-P
					; sub_15A1AA+9-P sub_15A8F0-P
					; __pause_or_skip+4-p
					; __pause_or_skip+18-p sub_174E52+89-p
					; sub_1757C0+17-p sub_175853+29-p
					; sub_235C6D+5-P sub_24C20F+5-P
		LDX		#0		; code used as ind data	at c000
		JSR		_calc_pad	; code used as ind data	at c000
		LDX		#1		; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_calc_pad:				; CODE XREF: _calc_pads+2-p
		JSR		_read_pad	; code used as ind data	at c000
loc_174B5D:				; CODE XREF: _calc_pad+C-j
		LDA		_pads_tmp	; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		JSR		_read_pad	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		CMP		_pads_tmp	; code used as ind data	at c000
		BNE		loc_174B5D	; code used as ind data	at c000
		LDY		_pads_tmp	; code used as ind data	at c000
		BEQ		loc_174B79	; code used as ind data	at c000
		LDY		_pads+4,X	; code used as ind data	at c000
		BNE		loc_174B72	; code used as ind data	at c000
		LDY		#8		; code used at c000
loc_174B72:				; CODE XREF: _calc_pad+14-j
		DEY				; code used as ind data	at c000
		BNE		loc_174B79	; code used as ind data	at c000
		STY		_pads+2,X	; code used as ind data	at c000
		LDY		#$B		; code used as ind data	at c000
loc_174B79:				; CODE XREF: _calc_pad+10-j
					; _calc_pad+19-j
		STY		_pads+4,X	; code used as ind data	at c000
		LDA		_pads_tmp	; code used as ind data	at c000
		AND		_pads+2,X	; code used as ind data	at c000
		STA		_pads+2,X	; code used as ind data	at c000
		EOR		_pads_tmp	; code used as ind data	at c000
		STA		_pads,X		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_read_pad:				; CODE XREF: _calc_pad-p _calc_pad+6-p
		LDA		#1		; code used as ind data	at c000
		STA		_PAD0_REG	; code used as ind data	at c000
		LDA		#0		; code used as ind data	at c000
		STA		_PAD0_REG	; code used as ind data	at c000
		LDY		#8		; code used as ind data	at c000
loc_174B92:				; CODE XREF: _read_pad+16-j
		LDA		_PAD0_REG,X	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		BCS		loc_174B99	; code used as ind data	at c000
		LSR		; code used as ind data	at c000
loc_174B99:				; CODE XREF: _read_pad+10-j
		ROR		_pads_tmp	; code used as ind data	at c000
		DEY				; code used as ind data	at c000
		BNE		loc_174B92	; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
_delay_n:				; CODE XREF: _b4_sA+B-P	_b4_sA+E-P
					; _b4_sA+11-P
					; _name_entry_screen_data_enter+EC-P
					; _name_entry_screen_data_enter+FF-P
					; _name_entry_screen_data_enter+102-P
					; _name_entry_screen_data_enter+127-P
					; _name_entry_screen_data_enter+12A-P
					; sub_9B9FC+3-P
					; _name_entry_validity_test+1C-P
					; _name_entry_validity_test+1F-P
		PHA				; code used at c000
		LDA		#0		; code used at c000

; =============== S U B	R O U T	I N E =======================================
_delay_ex:				; CODE XREF: _delay_n_n+1-j
		SEC				; code used at c000
loc_174BA3:				; CODE XREF: _delay_ex+9-j
		PHA				; code used as ind data	at c000
loc_174BA4:				; CODE XREF: _delay_ex+4-j
		SBC		#1		; code used as ind data	at c000
		BNE		loc_174BA4	; code used as ind data	at c000
		PLA				; code used as ind data	at c000
		SBC		#1		; code used as ind data	at c000
		BNE		loc_174BA3	; code used as ind data	at c000
		PLA				; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
; unused
_delay_n_n:
		PHA
		JMP		_delay_ex

; =============== S U B	R O U T	I N E =======================================
sub_174BB3:				; CODE XREF: _b4_s0+4E-J sub_15B288+45-J
					; _RESET+79-j
		LDX		#$FF		; code used at c000
		TXS				; code used at c000
		LDA		byte_6A58	; code used at c000
		BEQ		loc_174BC7	; code used at c000
loc_174BBB:				; CODE XREF: _bC_s2F+23-J
		JSR		__pause_or_skip	; code used at c000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369	; code used at c000
		JSR		sub_1743B5	; code used at c000
loc_174BC7:				; CODE XREF: sub_174BB3+6-j
		LDA		byte_6A58	; code used at c000
		BNE		loc_174BF2	; code used at c000
		BRK
		.BYTE 0, $7F		; ofs 0x00234000, -> dst _b17_s0_copyrights_screen
loc_174BCF:				; CODE XREF: sub_174BB3+24-j
		BRK
		.BYTE 1, $7F		; ofs 0x00234002, -> dst _b17_s1
		LDA		byte_6A36	; code used at c000
		CMP		#1		; code used at c000
		BEQ		loc_174BCF	; code used at c000
		BRK
		.BYTE $19, 7		; ofs 0x000b0010, -> dst _b7_s8
		BRK
		.BYTE $62, $17		; ofs 0x000b0014, -> dst _b7_sA_sram_test_and_init
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		LDA		byte_60C7	; code used at c000
		BMI		loc_174BFC	; code used at c000
		ORA		#$80       ; code used at c000
		STA		byte_60C7	; code used at c000
		BRK
		.BYTE $60, $17		; ofs 0x000f801e, -> dst _bA_sF
		JMP		loc_174C5C	; code used at c000
loc_174BF2:				; CODE XREF: sub_174BB3+17-j
		LDA		byte_60BA	; code used at c000
		AND		#1		; code used at c000
		BNE		loc_174BFC	; code used at c000
		BRK
		.BYTE $2E, $17		; ofs 0x000080c8, -> dst _b0_s64
loc_174BFC:				; CODE XREF: sub_174BB3+32-j
					; sub_174BB3+44-j
		LDA		#$50       ; code used at c000
		STA		byte_60C6	; code used at c000
		JSR		_vblank_and_render_off_flag10_set ; code used at c000
		BRK
		.BYTE $21, $17		; ofs 0x0015801e, -> dst _bE_sF
		JSR		__render_on_flag10_clear_reinit	; code used at c000
		LDA		byte_60B8	; code used at c000
		AND		#$BF       ; code used at c000
		STA		byte_60B8	; code used at c000
		LDA		byte_60BA	; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_174C2F	; code used at c000
		LDA		byte_60BA
		AND		#$FC 
		STA		byte_60BA
		LDA		#0
		JSR		loc_1752EB
		JSR		sub_174CCF
		BRK
		.BYTE $90, $17		; ofs 0x00140040, -> dst _bD_s20_npc_hndl31
		JMP		loc_174C5C
loc_174C2F:				; CODE XREF: sub_174BB3+64-j
		BRK
		.BYTE $50, $17		; ofs 0x0015806c, -> dst _bE_s36
		LDA		byte_2F		; code used at c000
		ORA		#1		; code used at c000
		STA		byte_2F		; code used at c000
		LDA		byte_6A58	; code used at c000
		BNE		loc_174C51	; code used at c000
		DEC		byte_6A58	; code used at c000
		BRK
		.BYTE $2F, $17		; ofs 0x00140050, -> dst _bD_s28
		LDA		#0		; code used at c000
		JSR		loc_1752EB	; code used at c000
		JSR		sub_174CCF	; code used at c000
		BRK
		.BYTE $8D, $17		; ofs 0x00140048, -> dst _bD_s24
		JMP		loc_174C5C	; code used at c000
loc_174C51:				; CODE XREF: sub_174BB3+88-j
		LDA		#0		; code used at c000
		JSR		loc_1752EB	; code used at c000
		JSR		sub_174CCF	; code used at c000
		BRK
		.BYTE $8C, $17		; ofs 0x00140046, -> dst _bD_s23
loc_174C5C:				; CODE XREF: sub_174BB3+3C-j
					; sub_174BB3+79-j sub_174BB3+9B-j
					; sub_174BB3+AC-j
		JSR		sub_174D56	; code used at c000
		JMP		loc_174C5C	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174C62:				; CODE XREF: _b4_s0+8E-P
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		JSR		sub_174369	; code used at c000
		LDA		byte_9A		; code used at c000
		JSR		sub_1762FC	; code used at c000
		JSR		sub_1743B5	; code used at c000
		LDA		byte_60BA	; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_174C84	; code used at c000
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		BRK
		.BYTE $51, $17		; ofs 0x00158030, -> dst _bE_s18
		BRK
		.BYTE $45, $17		; ofs 0x0000809c, -> dst _b0_s4E
		JMP		loc_174C87
loc_174C84:				; CODE XREF: sub_174C62+14-j
		BRK
		.BYTE $51, $17		; ofs 0x00158030, -> dst _bE_s18
loc_174C87:				; CODE XREF: sub_174C62+1F-j
		LDA		byte_2F		; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_174C93	; code used at c000
		JSR		sub_177CFC	; code used at c000
		BRK
		.BYTE $47, $17		; ofs 0x0012804e, -> dst _bC_s27
loc_174C93:				; CODE XREF: sub_174C62+29-j
		JSR		_set_nmi_flag_10 ; code	used at	c000
		BRK
		.BYTE $93, $17		; ofs 0x00158022, -> dst _bE_s11
		JSR		_set_nmi_flag_10 ; code	used at	c000
		LDA		byte_2C		; code used at c000
		BNE		loc_174CCA	; code used at c000
		LDA		byte_2F		; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_174CAD	; code used at c000
		LDX		byte_30		; code used at c000
		LDY		byte_31		; code used at c000
		JMP		loc_174CB1	; code used at c000
loc_174CAD:				; CODE XREF: sub_174C62+42-j
		LDX		byte_2A		; code used at c000
		LDY		byte_2B		; code used at c000
loc_174CB1:				; CODE XREF: sub_174C62+48-j
		STX		byte_100	; code used at c000
		STY		byte_101	; code used at c000
		BRK
		.BYTE $5A, $17		; ofs 0x0012806a, -> dst _bC_s35
		JMP		loc_174CCA	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174CBD:				; CODE XREF: _b0_s0_world_map_random_enounter_test:loc_8255-J
					; sub_B09C+14-P	_b5_s5+41-J
					; sub_1280A6:loc_1281BE-P
					; sub_1280A6+148-P sub_12908F+29-P
					; sub_129162+2B-P _bC_s1D+C6-P
					; _bC_s1D+E7-P sub_12B518+3E-P
					; sub_12B5AD+80-P sub_12B6AF+56-P
					; sub_12B7E1+31-P sub_12B820+26-P
					; _npc_hndlD+13-P _npc_hndl29+16-P
					; _npc_hndl2E+23-P _npc_hndl64+13-P
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		BRK
		.BYTE $5A, $17		; ofs 0x0012806a, -> dst _bC_s35
		JSR		sub_175B0E	; code used as ind data	at c000
loc_174CCA:				; CODE XREF: sub_174C62+3C-j
					; sub_174C62+58-j
		PLA				; code used at c000
		JMP		_mmc1_prg_set	; code used at c000

; =============== S U B	R O U T	I N E =======================================
; unused
nullsub_6:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174CCF:				; CODE XREF: _b5_s5+23-P _b7_s19+E-P
					; _b7_s19+76-P _b7_s1A+11-P _bA_sF+9-P
					; _bA_sF+36-P _bA_s10+12-P _bA_s11+16-P
					; sub_1280A6+7A-P sub_1280A6+D6-P
					; sub_1280A6+EB-P sub_1280A6+FB-P
					; sub_1280A6+158-P sub_1280A6+16E-P
					; sub_1280A6+17F-P sub_1280A6+191-P
					; sub_1280A6+1A0-P sub_1280A6+1DB-P
					; sub_1280A6+1EA-P sub_1280A6+202-P
					; sub_1283C3+46-P sub_12908F+1B-P
					; sub_12908F+2C-P sub_1290E1+14-P
					; sub_1290E1+2B-P sub_129120+14-P
					; sub_129162+76-P _bC_s1D+EA-P
					; _bC_s2B+E-P sub_12A4B6+35-P
					; sub_12B01C+1B-P _bC_s29+19-P
					; _bC_s2A+13-P sub_12B189+6-P
					; sub_12B200:loc_12B21B-P
					; sub_12B2EB+18-P sub_12B2EB+3A-P
					; sub_12B3D1+99-P sub_12B493+1A-P
					; sub_12B493+76-P sub_12B518+15-P
					; sub_12B518+41-P sub_12B5AD+59-P
					; sub_12B6AF+37-P sub_12B6AF+59-P
					; sub_12B6AF+81-P sub_12B6AF+95-P
					; sub_12B6AF+C9-P sub_12B820+12-P
					; sub_12B820+29-P sub_142E69+5C-P
					; _npc_hndl1+49-P _npc_hndl2C+14-P
					; _npc_hndl47+57-P sub_15830F+2B-P
					; sub_174BB3+73-p sub_174BB3+95-p
					; sub_174BB3+A3-p sub_175853+F-p
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		JMP		sub_174DF2	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174CD5:				; CODE XREF: _b6_s1D+29-J _bA_sF+33-P
		TAX				; code used at c000
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		TXA				; code used at c000
		JSR		loc_1752EB	; code used at c000
		PLA				; code used at c000
		JMP		_mmc1_prg_set	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174CE2:				; CODE XREF: sub_B32F1+26-P
		JSR		sub_175A32	; code used at c000
		JSR		sub_1762FC	; code used at c000
		JSR		sub_1754AD	; code used at c000
		BRK
		.BYTE $C, $17		; ofs 0x000b0038, -> dst _b7_s1C
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		JSR		sub_1743B5	; code used at c000
		JSR		sub_17578E	; code used at c000
		LDA		#7		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		JMP		sub_175B0E	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174CFF:				; CODE XREF: _b7_s1E+44-P
		LDA		#9		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		JSR		sub_E39E0	; code used at c000
		LDA		#7		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174D0D:				; CODE XREF: sub_F946C-P
		LDA		#9		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		JSR		loc_E39E8	; code used at c000
		LDA		#$A		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174D1B:				; DATA XREF: BANKC:BA06-o
		LDA		#8		; ind code used	at c000
		JSR		_mmc1_prg_set	; code used at c000
		JSR		sub_CBF80	; code used at c000
		JMP		sub_174D39	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174D26:				; DATA XREF: BANKC:BA08-o
		LDA		#8
		JSR		_mmc1_prg_set
		JSR		sub_CBF97
		JMP		sub_174D39

; =============== S U B	R O U T	I N E =======================================
sub_174D31:				; DATA XREF: BANKC:BA0A-o
		LDA		#8
		JSR		_mmc1_prg_set
		JSR		sub_CBFAE

; =============== S U B	R O U T	I N E =======================================
sub_174D39:				; CODE XREF: sub_174D1B+8-j
					; sub_174D26+8-j
		LDA		#$C		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174D3F:				; CODE XREF: _b0_s16:loc_94FD-P
					; _b0_s16:loc_9516-P _b0_s18+19-P
					; _b0_s18+2A-P _b0_s18+3B-P
		LDA		#9		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDA		byte_E3990,Y	; code used at c000
		PHA				; code used at c000
		LDA		#0		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		PLA				; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174D4F:				; CODE XREF: _b5_s5+3-P	_b6_s1B+1D-P
					; sub_1280A6+88-P sub_1280A6+96-P
					; sub_1280A6+DC-P sub_1280A6+F1-P
					; sub_1280A6+15E-P sub_1280A6+197-P
					; sub_1280A6+1A6-P sub_1280A6+208-P
					; sub_1283C3+4C-P _bC_s2A+19-P
					; sub_12B200+3E-J
					; sub_12B3D1:loc_12B487-P
					; sub_12B493+7C-P sub_12B6AF+87-P
					; sub_12B6AF+9B-J sub_12B6AF+A1-P
					; sub_12B820+4E-P
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174D56:				; CODE XREF: sub_174BB3:loc_174C5C-p
		BRK
		.BYTE 1, 7		; ofs 0x00158002, -> dst _bE_s1
		JSR		sub_174E52	; code used at c000
		JSR		sub_174E1A	; code used at c000
		BRK
		.BYTE $A, 7		; ofs 0x00140004, -> dst _bD_s2
		JSR		sub_174D89	; code used at c000
		BRK
		.BYTE $57, $17		; ofs 0x00128002, -> dst _bC_s1
		JSR		sub_174DCF	; code used at c000
		JSR		sub_175AF7	; code used at c000
		BRK
		.BYTE $11, 7		; ofs 0x00140012, -> dst _bD_s9
		BRK
		.BYTE $E, 7		; ofs 0x0014000c, -> dst _bD_s6
		JSR		sub_174DC0	; code used as ind data	at c000
		JSR		sub_177116	; code used as ind data	at c000
		JSR		_vblank		; code used as ind data	at c000
		JSR		sub_1755AB	; code used at c000
		BRK
		.BYTE $10, 7		; ofs 0x000f8002, -> dst _bA_s1
		JSR		sub_174E10	; code used at c000
		INC		byte_90		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174D89:				; CODE XREF: sub_174D56+C-p
		LDA		byte_87		; code used at c000
		CMP		#$10		; code used at c000
		BEQ		loc_174D9C	; code used at c000
		CMP		#8		; code used at c000
		BEQ		loc_174D9C	; code used at c000
		CMP		#$F		; code used at c000
		BEQ		loc_174DA8	; code used at c000
		CMP		#7		; code used at c000
		BEQ		loc_174DA8	; code used at c000
		RTS				; code used as ind data	at c000
loc_174D9C:				; CODE XREF: sub_174D89+4-j
					; sub_174D89+8-j
		LDA		byte_644	; code used at c000
		CMP		#3		; code used at c000
		BEQ		loc_174DB0	; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_174DB6	; code used at c000
		RTS				; code used at c000
loc_174DA8:				; CODE XREF: sub_174D89+C-j
					; sub_174D89+10-j
		LDA		byte_644	; code used at c000
		CMP		#1		; code used at c000
		BEQ		loc_174DB6	; code used at c000
		RTS				; code used at c000
loc_174DB0:				; CODE XREF: sub_174D89+18-j
		LDA		byte_87		; code used at c000
		CMP		#8		; code used at c000
		BNE		locret_174DC7	; code used at c000
loc_174DB6:				; CODE XREF: sub_174D89+1C-j
					; sub_174D89+24-j sub_174DC0+C-j
		LDA		byte_9A		; code used at c000
		BEQ		loc_174DBD	; code used at c000
		JMP		sub_177517	; code used at c000
loc_174DBD:				; CODE XREF: sub_174D89+2F-j
		JMP		sub_1773A6	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174DC0:				; CODE XREF: sub_174D56+1E-p
		LDA		byte_644	; code used as ind data	at c000
		CMP		#3		; code used as ind data	at c000
		BEQ		loc_174DC8	; code used as ind data	at c000
locret_174DC7:				; CODE XREF: sub_174D89+2B-j
					; sub_174DC0+A-j
		RTS				; code used at c000
loc_174DC8:				; CODE XREF: sub_174DC0+5-j
		LDA		byte_86		; code used at c000
		BNE		locret_174DC7	; code used as ind data	at c000
		JMP		loc_174DB6	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174DCF:				; CODE XREF: sub_174D56+12-p
		LDA		byte_AA		; code used at c000
		BEQ		loc_174DDA	; code used as ind data	at c000
		LDA		byte_90		; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_174DE0	; code used at c000
		RTS				; code used at c000
loc_174DDA:				; CODE XREF: sub_174DCF+2-j
		LDA		byte_87		; code used at c000
		AND		#1		; code used at c000
		BEQ		locret_174DF1	; code used at c000
loc_174DE0:				; CODE XREF: sub_174DCF+8-j
		BRK
		.BYTE $88, 7		; ofs 0x00098010, -> dst _b6_s8
		LDA		byte_87		; code used at c000
		BNE		locret_174DF1	; code used at c000
		LDA		byte_6D9	; code used at c000
		CMP		#1		; code used at c000
		BNE		locret_174DF1	; code used at c000
		JSR		sub_1742BA	; code used at c000
locret_174DF1:				; CODE XREF: sub_174DCF+F-j
					; sub_174DCF+16-j sub_174DCF+1D-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174DF2:				; CODE XREF: sub_8261+15-P
					; _b0_s5D:loc_ABDD-P _b0_s5D+141-P
					; sub_AC7D-P sub_ACBE-P
					; sub_AD31:loc_AD4F-P sub_ADE0+1-P
					; sub_ADE0:loc_ADEC-P sub_ADF4+13-P
					; sub_AE12+8-P sub_AF5B+9-P
					; sub_9BBED+5-J	sub_9BE62-P _bC_s1D-P
					; sub_12B3D1:loc_12B41C-P
					; sub_12B493+3A-P sub_15811B+3-P
					; sub_158203:loc_158255-P
					; sub_158203+E2-P sub_158377+5-P
					; sub_15B288+27-P sub_174CCF+3-j
		BRK
		.BYTE $3E, $D7		; _syscall0D
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174DF6:				; CODE XREF: sub_12AE80-P
		LDX		#0
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#8
		JSR		_mmc1_prg_set
loc_174E01:				; CODE XREF: sub_174DF6+14-j
		LDA		_chr_character_sprites_data+$840,X
		STA		byte_7800,X
		INX
		CPX		#$60 
		BNE		loc_174E01
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_174E10:				; CODE XREF: _bE_s22+27-P _bE_s22+2A-P
					; _bE_s32+18-P sub_174D56+2D-p
		LDA		byte_645	; code used at c000
		CLC				; code used at c000
		ADC		#8		; code used at c000
		STA		byte_645	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174E1A:				; CODE XREF: sub_174D56+6-p
		LDA		byte_8F		; code used at c000
		CMP		#2		; code used at c000
		BCS		loc_174E21	; code used at c000
		RTS				; code used at c000
loc_174E21:				; CODE XREF: sub_174E1A+4-j
		BRK
		.BYTE $C3, 7		; ofs 0x0015804c, -> dst _bE_s26
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174E25:				; CODE XREF: sub_174E52:loc_174ED8-p
		LDA		byte_2C		; code used at c000
		BEQ		locret_174E51	; code used at c000
		LDX		byte_100
		LDY		byte_101
		CMP		#1
		BNE		loc_174E4D
		STX		byte_2D
		STY		byte_2E
		LDA		byte_9A
		BEQ		locret_174E51
		STX		byte_110
		STY		byte_111
		LDA		byte_113
		AND		#$FC 
		ORA		byte_644
		STA		byte_113
		RTS
loc_174E4D:				; CODE XREF: sub_174E25+C-j
		STX		byte_9E
		STY		byte_9F
locret_174E51:				; CODE XREF: sub_174E25+2-j
					; sub_174E25+14-j sub_174E52+4-j
					; sub_174E52+8-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_174E52:				; CODE XREF: sub_174D56+3-p
		LDA		byte_90		; code used at c000
		AND		#$F		; code used at c000
		BNE		locret_174E51	; code used at c000
		LDA		byte_87		; code used at c000
		BNE		locret_174E51	; code used at c000
		LDA		#$10		; code used at c000
		STA		byte_44		; code used at c000
		LDA		#1		; code used at c000
		STA		byte_45		; code used at c000
		LDY		#3		; code used at c000
loc_174E66:				; CODE XREF: sub_174E52+22-j
		LDA		(byte_44),Y	; code used at c000
		CMP		#$FF		; code used at c000
		BEQ		loc_174E78	; code used at c000
		AND		#$40       ; code used at c000
		BNE		locret_174E77	; code used at c000
		INY				; code used at c000
		INY				; code used at c000
		INY				; code used at c000
		INY				; code used at c000
		JMP		loc_174E66	; code used at c000
locret_174E77:				; CODE XREF: sub_174E52+1C-j
					; sub_174E52+35-j sub_174E52+45-j
		RTS
loc_174E78:				; CODE XREF: sub_174E52+18-j
		LDA		byte_86		; code used at c000
		BNE		loc_174E95	; code used at c000
		INC		byte_6ACE	; code used at c000
		BRK
		.BYTE $C8, 7		; ofs 0x00128028, -> dst _bC_s14
		JSR		sub_175049	; code used at c000
		LDA		byte_8F		; code used at c000
		BNE		locret_174E77	; code used at c000
		LDA		byte_2C		; code used at c000
		CMP		#2		; code used at c000
		BEQ		loc_174E92	; code used at c000
		BRK
		.BYTE $67, 7		; ofs 0x00008000, -> dst _b0_s0_world_map_random_enounter_test
loc_174E92:				; CODE XREF: sub_69E5B+1E-J
					; sub_174E52+3B-j
		JMP		loc_174E99	; code used at c000
loc_174E95:				; CODE XREF: sub_174E52+28-j
		LDA		byte_8F		; code used at c000
		BNE		locret_174E77	; code used at c000
loc_174E99:				; CODE XREF: sub_174E52:loc_174E92-j
		JMP		loc_174ED8	; code used at c000
loc_174E9C:				; CODE XREF: sub_1753AA+27-j
		JSR		sub_174369
		LDA		#3
		STA		byte_2F
		LDA		#$2D 
		STA		byte_2A
		LDA		#6
		STA		byte_30
loc_174EAB:
		STA		byte_100
		LDA		#$30 
		STA		byte_2B
		LDA		#3
		STA		byte_31
		STA		byte_101
		LDA		#0
		STA		byte_2C
		LDA		#$A
		STA		byte_2D
		LDA		#$13
		STA		byte_2E
		LDA		#2
		STA		byte_644
		LDA		#$91 
		STA		byte_8B
		LDA		#$78 
		STA		byte_6DF
		LDA		#4
		JMP		loc_1752EB
loc_174ED8:				; CODE XREF: sub_174E52:loc_174E99-j
		JSR		sub_174E25	; code used at c000
		JSR		_calc_pads	; code used at c000
		LDA		byte_2C		; code used at c000
		CMP		#2		; code used at c000
		BNE		loc_174F04	; code used at c000
		LDA		_pads
		AND		#1
		BEQ		loc_174EEE
		STA		byte_6BD
		RTS
loc_174EEE:				; CODE XREF: sub_174E52+96-j
		LDA		_pads
		AND		#$F0 
		BNE		loc_174EFE
		LDA		byte_6C9
		ORA		_pads
		STA		_pads
		JMP		loc_174FA2
loc_174EFE:				; CODE XREF: sub_174E52+A0-j
		STA		byte_6C9
		JMP		loc_174FA2
loc_174F04:				; CODE XREF: sub_174E52+90-j
		LDA		byte_6E1	; code used at c000
		BEQ		loc_174F53	; code used at c000
		BMI		loc_174F53	; code used at c000
		LDA		byte_6E2	; code used at c000
		AND		#$20       ; code used at c000
		BNE		loc_174F1A	; code used at c000
		LDA		byte_6E2	; code used at c000
		AND		#$80       ; code used at c000
		BEQ		loc_174F53	; code used at c000
		RTS				; code used at c000
loc_174F1A:				; CODE XREF: sub_174E52+BE-j
		BRK
		.BYTE $A4, $17		; ofs 0x000f800c, -> dst _bA_s6
		BCS		loc_174F3B	; code used at c000
		LDA		byte_6EB	; code used at c000
		BNE		loc_174F43	; code used at c000
		INC		byte_6EF	; code used at c000
		LDX		byte_6EF	; code used at c000
		LDA		byte_174FF2,X	; code used at c000
		CMP		#$FF		; code used at c000
		BNE		loc_174F3E	; code used at c000
		BRK
		.BYTE $A4, $17		; ofs 0x000f800c, -> dst _bA_s6
		BCS		loc_174F3B
		LDA		#0
		STA		byte_6E1
loc_174F3B:				; CODE XREF: sub_174E52+CB-j
					; sub_174E52+E2-j
		JMP		loc_174F53
loc_174F3E:				; CODE XREF: sub_174E52+DD-j
		AND		#$F		; code used at c000
		STA		byte_6EB	; code used at c000
loc_174F43:				; CODE XREF: sub_174E52+D0-j
		DEC		byte_6EB	; code used at c000
		LDX		byte_6EF	; code used at c000
		LDA		byte_174FF2,X	; code used at c000
		AND		#$F0       ; code used at c000
		STA		_pads		; code used at c000
		JMP		loc_174FA2	; code used at c000
loc_174F53:				; CODE XREF: sub_174E52+B5-j
					; sub_174E52+B7-j sub_174E52+C5-j
					; sub_174E52:loc_174F3B-j
		LDA		byte_9A		; code used at c000
		CMP		#$1B		; code used at c000
		BNE		loc_174FA2	; code used at c000
		LDA		byte_93		; code used at c000
		AND		#$1F		; code used at c000
		CMP		#$1D		; code used at c000
		BEQ		loc_174F85	; code used at c000
		CMP		#$1C		; code used at c000
		BNE		loc_174FA2	; code used at c000
		LDA		_pads		; code used at c000
		ASL		; code used at c000
		ASL		; code used at c000
		AND		#$CF       ; code used at c000
		STA		word_3C		; code used at c000
		LDA		_pads		; code used at c000
		LSR		; code used at c000
		STA		word_3C+1	; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		AND		#$10		; code used at c000
		ORA		word_3C		; code used at c000
		STA		word_3C		; code used at c000
		LDA		word_3C+1	; code used at c000
		AND		#$20       ; code used at c000
		ORA		word_3C		; code used at c000
		STA		_pads		; code used at c000
		JMP		loc_174FA2	; code used at c000
loc_174F85:				; CODE XREF: sub_174E52+10D-j
		LDA		_pads		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		AND		#$3F       ; code used at c000
		STA		word_3C		; code used at c000
		LDA		_pads		; code used at c000
		ASL		; code used at c000
		STA		word_3C+1	; code used at c000
		ASL		; code used at c000
		ASL		; code used at c000
		AND		#$80       ; code used at c000
		ORA		word_3C		; code used at c000
		STA		word_3C		; code used at c000
		LDA		word_3C+1	; code used at c000
		AND		#$40       ; code used at c000
		ORA		word_3C		; code used at c000
		STA		_pads		; code used at c000
loc_174FA2:				; CODE XREF: sub_174E52+A9-j
					; sub_174E52+AF-j sub_174E52+FE-j
					; sub_174E52+105-j sub_174E52+111-j
					; sub_174E52+130-j
		BIT		byte_60C6	; code used at c000
		BVS		loc_174FBB	; code used at c000
		LDA		_pads		; code used at c000
		AND		#$F0       ; code used at c000
		BEQ		locret_174FF1	; code used at c000
		LDY		#0		; code used at c000
		STY		byte_644	; code used at c000
		TYA				; code used at c000
		JSR		sub_1762C3	; code used at c000
		LDA		#$E0       ; code used at c000
		STA		byte_60C6	; code used at c000
loc_174FBB:				; CODE XREF: sub_174E52+153-j
		LDA		byte_30		; code used at c000
		STA		word_3C		; code used at c000
		LDA		byte_31		; code used at c000
		STA		word_3C+1	; code used at c000
		ASL		_pads		; code used at c000
		BCS		sub_17501F	; code used at c000
		ASL		_pads		; code used at c000
		BCS		sub_17501C	; code used at c000
		ASL		_pads		; code used as ind data	at c000
		BCS		sub_175019	; code used at c000
		ASL		_pads		; code used at c000
		BCS		sub_175016	; code used at c000
		LDA		byte_6E1	; code used at c000
		BNE		locret_174FF1	; code used at c000
		LDA		byte_8E		; code used at c000
		BMI		locret_174FF1	; code used at c000
		LDA		byte_8E		; code used at c000
		ADC		#$10		; code used at c000
		STA		byte_8E		; code used at c000
		BPL		locret_174FF1	; code used at c000
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		JSR		_sram_b0_s31	; code used at c000
		DEC		word_4		; code used at c000
		LDA		word_4		; code used at c000
		BRK
		.BYTE $20, 7		; ofs 0x00158018, -> dst _bE_sC
locret_174FF1:				; CODE XREF: sub_174E52+159-j
					; sub_174E52+184-j sub_174E52+188-j
					; sub_174E52+190-j
		RTS				; code used at c000
byte_174FF2:
		.BYTE $28,  2,$4B,  2,$1F,$14,	4,$41,$28,  1,$86,  7,$FF,$85,$FF,$15
					; DATA XREF: sub_174E52+D8-r
					; sub_174E52+F7-r
		.BYTE	8,$FF,$11,$82,	1,$42,$16,$82,$13,$89,$17,  2,$FF,$43,$1F,$12
		.BYTE $FF,$84,$12,$FF

; =============== S U B	R O U T	I N E =======================================
sub_175016:				; CODE XREF: sub_174E52+17F-j
		JMP		loc_175601	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175019:				; CODE XREF: sub_174E52+17B-j
		JMP		loc_175682	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17501C:				; CODE XREF: sub_174E52+177-j
		JMP		sub_1755CA	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17501F:				; CODE XREF: sub_174E52+173-j
		JMP		loc_17564B	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175022:				; CODE XREF: sub_175049+C-j
		LDA		byte_2F		; code used at c000
		AND		#2		; code used at c000
		BNE		loc_175046	; code used at c000
		LDA		byte_1C		; code used at c000
		AND		#$1F		; code used at c000
		CLC				; code used at c000
		ADC		#$DF       ; code used at c000
		ADC		byte_6DE	; code used at c000
		STA		byte_6DE	; code used at c000
		BCC		loc_175046	; code used at c000
		INC		byte_6DF	; code used at c000
		LDA		byte_6DF	; code used at c000
		CMP		#$CC       ; code used at c000
		BCC		loc_175046	; code used at c000
		LDA		#0		; code used at c000
		STA		byte_6DF	; code used at c000
loc_175046:				; CODE XREF: sub_175022+4-j
					; sub_175022+13-j sub_175022+1D-j
		JMP		sub_17522D	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175049:				; CODE XREF: sub_174E52+30-p
		LDA		#$FF		; code used at c000
		STA		byte_86		; code used at c000
		LDA		byte_644	; code used at c000
		STA		byte_6BC	; code used at c000
		LDA		byte_9A		; code used at c000
		BEQ		sub_175022	; code used at c000
		LDA		byte_92		; code used at c000
		AND		#$1F		; code used at c000
		TAX				; code used at c000
		LDA		byte_6DE0,X	; code used at c000
		AND		#$F		; code used at c000
		LDX		#$FF		; code used at c000
		CMP		#7		; code used at c000
		BEQ		loc_17509F	; code used at c000
		LDA		byte_8B		; code used at c000
		CMP		#$A9       ; code used at c000
		BNE		loc_175084	; code used at c000
		LDA		byte_30
		CMP		#$3A 
		BNE		loc_17509A
		LDA		#$16
		STA		byte_30
		LDA		byte_31
		SEC
		SBC		#$12
		STA		byte_31
		LDA		#$73 
		STA		byte_92
		BNE		loc_17509A
loc_175084:				; CODE XREF: sub_175049+22-j
		CMP		#$36       ; code used at c000
		BNE		loc_17509A	; code used at c000
		LDA		byte_30
		BNE		loc_175092
		LDA		#$26 
		STA		byte_30
		BNE		loc_17509A
loc_175092:				; CODE XREF: sub_175049+41-j
		CMP		#$27 
		BNE		loc_17509A
		LDA		#1
		STA		byte_30
loc_17509A:				; CODE XREF: sub_175049+28-j
					; sub_175049+39-j sub_175049+3D-j
					; sub_175049+47-j sub_175049+4B-j
		JSR		sub_1750BC	; code used at c000
		LDX		#0		; code used at c000
loc_17509F:				; CODE XREF: sub_175049+1C-j
		STX		byte_43		; code used at c000
		JSR		sub_17536E	; code used at c000
		LDA		byte_43		; code used at c000
		LDX		byte_88		; code used at c000
		DEX				; code used at c000
		CPX		byte_30		; code used at c000
		BCC		sub_1750D0	; code used at c000
		LDX		byte_89		; code used at c000
		DEX				; code used at c000
		CPX		byte_31		; code used at c000
		BCC		sub_1750D0	; code used at c000
		CMP		#$FF		; code used at c000
		BEQ		sub_1750BC	; code used at c000
		BRK
		.BYTE 0, $17		; ofs 0x00128054, -> dst _bC_s2A
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1750BC:				; CODE XREF: sub_175049:loc_17509A-p
					; sub_175049+6D-j
		LDA		byte_92		; code used at c000
		AND		#$E0       ; code used at c000
		CMP		byte_8C		; code used at c000
		BEQ		locret_1750CF	; code used at c000
		JSR		sub_17590B	; code used at c000
		LDA		byte_6AE6	; code used at c000
		ORA		#2		; code used at c000
		STA		byte_6AE6	; code used at c000
locret_1750CF:				; CODE XREF: sub_1750BC+6-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1750D0:				; CODE XREF: sub_175049+62-j
					; sub_175049+69-j
		LDA		byte_8B		; code used at c000
		BRK
		.BYTE $AB, 7		; ofs 0x0015803a, -> dst _bE_s1D
loc_1750D5:				; CODE XREF: sub_1750D0+13-j
					; sub_1750D0+1B-j
		BRK
		.BYTE $AC, 7		; ofs 0x00158032, -> dst _bE_s19
		BCC		loc_1750DC	; code used as ind data	at c000
		INC		word_4		; code used at c000
loc_1750DC:				; CODE XREF: sub_1750D0+8-j
		LDA		word_6C		; code used as ind data	at c000
		SEC				; code used as ind data	at c000
		SBC		#1		; code used as ind data	at c000
		STA		word_6C		; code used as ind data	at c000
		BCS		loc_1750D5	; code used as ind data	at c000
		DEC		word_6C+1	; code used at c000
		LDA		word_6C+1	; code used at c000
		CMP		#$73       ; code used at c000
		BNE		loc_1750D5	; code used at c000
		LDA		word_4		; code used at c000
		ASL		; code used at c000
		TAY				; code used at c000
		LDA		#6		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDA		(byte_98),Y	; code used at c000
		CMP		#$FF		; code used at c000
		BEQ		loc_1750FF	; code used at c000
		JMP		sub_175467	; code used at c000
loc_1750FF:				; CODE XREF: sub_1750D0+2A-j
		LDA		byte_8B		; code used at c000
		CMP		#$2C       ; code used at c000
		BEQ		loc_175170	; code used at c000
		CMP		#$2B       ; code used at c000
		BEQ		loc_175170	; code used at c000
		CMP		#$F		; code used at c000
		BEQ		loc_17513A	; code used at c000
		LDX		byte_2C		; code used at c000
		BEQ		loc_175123	; code used at c000
		CMP		#$A
		BNE		loc_175164
		LDA		#$18
		STA		byte_2A
		LDA		#$62 
		STA		byte_2B
		LDA		byte_644
		JMP		loc_175164
loc_175123:				; CODE XREF: sub_1750D0+3F-j
		LDX		byte_8A		; code used at c000
		LDA		byte_6DE0,X	; code used at c000
		AND		#$F		; code used at c000
		CMP		#7		; code used at c000
		BNE		loc_175185	; code used at c000
		LDA		byte_8B
		CMP		#$41 
		BCC		loc_175185
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22
		JMP		loc_175185
loc_17513A:				; CODE XREF: sub_1750D0+3B-j
		LDA		byte_31
		CMP		#3
		BEQ		loc_17514F
loc_175140:				; CODE XREF: sub_1750D0+84-j
		LDA		byte_60BA
		AND		#$FC 
		STA		byte_60BA
		INC		byte_2B
		LDA		#2
		JMP		loc_175164
loc_17514F:				; CODE XREF: sub_1750D0+6E-j
		LDA		byte_60BA
		AND		#1
		BEQ		loc_175140
		LDA		byte_60BA
		ORA		#2
		STA		byte_60BA
		LDA		#$6B 
		STA		byte_2A
		LDA		#3
loc_175164:				; CODE XREF: sub_1750D0+43-j
					; sub_1750D0+50-j sub_1750D0+7C-j
		JSR		sub_175917
		TAX
		LDA		#0
		STA		byte_6B9
		JMP		loc_175192
loc_175170:				; CODE XREF: sub_1750D0+33-j
					; sub_1750D0+37-j
		LDA		#$49       ; code used at c000
		STA		byte_2B		; code used at c000
		LDA		byte_30		; code used at c000
		CMP		#$FF		; code used at c000
		BEQ		loc_175181	; code used at c000
		LDA		#$26       ; code used at c000
		STA		byte_2A		; code used at c000
		JMP		loc_175185	; code used at c000
loc_175181:				; CODE XREF: sub_1750D0+A8-j
		LDA		#$23 
		STA		byte_2A
loc_175185:				; CODE XREF: _b6_sC+1C-P sub_1750D0+5C-j
					; sub_1750D0+62-j sub_1750D0+67-j
					; sub_1750D0+AE-j
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_175917	; code used at c000
loc_17518B:				; CODE XREF: sub_175596+12-j
		LDA		#$FF		; code used at c000
		STA		byte_6B9	; code used at c000
		LDX		#2		; code used at c000
loc_175192:				; CODE XREF: sub_1750D0+9D-j
		STX		byte_644	; code used at c000
loc_175195:				; CODE XREF: sub_1753AA+80-j
		JSR		loc_1756F6	; code used at c000
		LDA		byte_2F		; code used at c000
		AND		#$FA       ; code used at c000
		STA		byte_2F		; code used at c000
		LDA		byte_2C		; code used at c000
		BEQ		loc_1751AA	; code used at c000
		LDA		byte_60B8
		AND		#$BF 
		STA		byte_60B8
loc_1751AA:				; CODE XREF: sub_1750D0+D0-j
		LDA		#0		; code used at c000
		STA		byte_9A		; code used at c000
		JSR		sub_1762FC	; code used at c000
		LDA		byte_60B7	; code used at c000
		AND		#$7F       ; code used at c000
		STA		byte_60B7	; code used at c000
		LDA		byte_60BA	; code used at c000
		AND		#$EF       ; code used at c000
		STA		byte_60BA	; code used at c000
		JSR		sub_1743B5	; code used at c000
		JSR		_vblank_and_render_off_flag10_set ; code used at c000
		BRK
		.BYTE $21, $17		; ofs 0x0015801e, -> dst _bE_sF
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		LDA		byte_2C		; code used at c000
		BEQ		loc_1751E5	; code used at c000
		LDA		byte_2A
		STA		byte_100
		STA		byte_2D
		LDA		byte_2B
		STA		byte_101
		STA		byte_2E
		BRK
		.BYTE $35, $17		; ofs 0x00140036, -> dst _bD_s1B
		JMP		loc_1751F7
loc_1751E5:				; CODE XREF: sub_1750D0+FF-j
		BRK
		.BYTE $82, 7		; ofs 0x00128006, -> dst _bC_s3
		LDA		byte_60C5	; code used at c000
		BPL		loc_1751F4	; code used at c000
		LDA		byte_60CB	; code used at c000
		AND		#$20       ; code used at c000
		BEQ		loc_1751F7	; code used at c000
loc_1751F4:				; CODE XREF: sub_1750D0+11B-j
		JSR		sub_175212	; code used at c000
loc_1751F7:				; CODE XREF: sub_1750D0+112-j
					; sub_1750D0+122-j
		JSR		sub_175B0E	; code used at c000
		LDA		#6		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		BRK
		.BYTE $64, $17		; ofs 0x000080cc, -> dst _b0_s66
		LDA		byte_60C5	; code used at c000
		BPL		locret_175211	; code used at c000
		LDA		byte_60CB	; code used at c000
		AND		#$20       ; code used at c000
		BNE		locret_175211	; code used at c000
		BRK
		.BYTE $7C, $17		; ofs 0x000b0032, -> dst _b7_s19
locret_175211:				; CODE XREF: sub_1750D0+135-j
					; sub_1750D0+13C-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175212:				; CODE XREF: sub_1750D0:loc_1751F4-p
					; sub_1757C0+8B-p
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175219:				; CODE XREF: sub_17542F+C-p
					; sub_1754B6+A-p
		LDA		#>[byte_7400] ; code used at c000
		STA		word_6C+1	; code used at c000
		LDA		#<[byte_7400] ; code	used at	c000
		STA		word_6C		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175222:				; CODE XREF: sub_17542F+14-p
					; sub_17542F+27-p
					; sub_1754B6:loc_1754CF-p
		INC		word_6C		; code used as ind data	at c000
		BNE		locret_175228	; code used as ind data	at c000
		INC		word_6C+1	; code used at c000
locret_175228:				; CODE XREF: sub_175222+2-j
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175229:				; CODE XREF: sub_17522D+2-j
		BRK
		.BYTE $C2, 7		; ofs 0x0015804a, -> dst _bE_s25
locret_17522C:				; CODE XREF: sub_17522D+8-j
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17522D:				; CODE XREF: sub_175022:loc_175046-j
		LDA		byte_8F		; code used at c000
		BNE		sub_175229	; code used at c000
		LDA		byte_2C		; code used at c000
		CMP		#2		; code used at c000
		BEQ		locret_17522C	; code used at c000
		LDA		byte_2A		; code used at c000
		STA		byte_74		; code used at c000
		LDA		byte_2B		; code used at c000
		STA		byte_75		; code used at c000
		LDA		byte_92		; code used at c000
		LDX		#$F		; code used at c000
		CMP		#$A		; code used at c000
		BEQ		loc_175292	; code used at c000
		CMP		#$B		; code used at c000
		BEQ		loc_175292	; code used at c000
		CMP		#$C		; code used at c000
		BEQ		loc_1752A1	; code used at c000
		CMP		#$D		; code used at c000
		BEQ		loc_1752A1	; code used at c000
		CMP		#$11		; code used at c000
		BEQ		loc_1752BE	; code used at c000
		CMP		#$15		; code used at c000
		BEQ		loc_1752BE	; code used at c000
		CMP		#$E		; code used at c000
		BEQ		loc_1752C7	; code used at c000
		CMP		#$F		; code used at c000
		BEQ		loc_1752C7	; code used at c000
		CMP		#$13		; code used at c000
		BEQ		loc_1752C7	; code used at c000
		JSR		sub_17592E	; code used at c000
		BCS		loc_1752B0	; code used at c000
		LDA		byte_2A		; code used at c000
		CMP		byte_9B		; code used at c000
		BNE		loc_17527F	; code used at c000
		LDA		byte_2B
		CMP		byte_9C
		BNE		loc_17527F
		LDA		byte_2F
		BNE		loc_17527F
		JMP		sub_175342
loc_17527F:				; CODE XREF: sub_17522D+43-j
					; sub_17522D+49-j sub_17522D+4D-j
		BRK
		.BYTE $C0, 7		; ofs 0x00158046, -> dst _bE_s23
		LDA		#0		; code used at c000
		STA		byte_6B9	; code used at c000
		LDA		byte_6F0	; code used at c000
		CMP		#$23       ; code used at c000
		BNE		locret_175291	; code used at c000
		BRK
		.BYTE 4, $2F		; _syscall12
locret_175291:				; CODE XREF: sub_17522D+5F-j
					; sub_17522D+6C-j sub_17522D+7B-j
		RTS				; code used at c000
loc_175292:				; CODE XREF: sub_17522D+18-j
					; sub_17522D+1C-j
		CMP		#$B		; code used at c000
		BNE		loc_1752BE	; code used at c000
		LDA		byte_6B9	; code used at c000
		BNE		locret_175291	; code used at c000
		DEC		byte_2A		; code used at c000
		DEC		byte_74		; code used at c000
		BNE		loc_1752BE	; code used at c000
loc_1752A1:				; CODE XREF: sub_17522D+20-j
					; sub_17522D+24-j
		CMP		#$D		; code used at c000
		BNE		loc_1752BE	; code used at c000
		LDA		byte_6B9	; code used at c000
		BNE		locret_175291	; code used at c000
		DEC		byte_74		; code used at c000
		DEC		byte_2A		; code used at c000
		BNE		loc_1752BE	; code used at c000
loc_1752B0:				; CODE XREF: sub_17522D+3D-j
		PHA				; code used at c000
		LDA		byte_2F		; code used at c000
		ORA		#1		; code used at c000
		STA		byte_2F		; code used at c000
		JSR		sub_174369	; code used at c000
		PLA				; code used at c000
		JMP		loc_1752EB	; code used at c000
loc_1752BE:				; CODE XREF: sub_17522D+28-j
					; sub_17522D+2C-j sub_17522D+67-j
					; sub_17522D+72-j sub_17522D+76-j
					; sub_17522D+81-j
		LDA		byte_2F		; code used at c000
		AND		#$FB       ; code used at c000
		STA		byte_2F		; code used at c000
		JMP		loc_1752CD	; code used at c000
loc_1752C7:				; CODE XREF: sub_17522D+30-j
					; sub_17522D+34-j sub_17522D+38-j
		LDA		byte_2F		; code used at c000
		ORA		#4		; code used at c000
		STA		byte_2F		; code used at c000
loc_1752CD:				; CODE XREF: sub_17522D+97-j
		LDA		byte_6B9	; code used at c000
		BEQ		loc_1752D9	; code used at c000
		LDA		byte_2F		; code used at c000
		AND		#$FB       ; code used at c000
		STA		byte_2F		; code used at c000
		RTS				; code used at c000
loc_1752D9:				; CODE XREF: sub_17522D+A3-j
		LDA		byte_2F		; code used at c000
		ORA		#1		; code used at c000
		STA		byte_2F		; code used at c000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		BRK
		.BYTE $82, $2F		; _syscall12
		JSR		sub_174369	; code used at c000
		JSR		sub_1759B8	; code used at c000
loc_1752EB:				; CODE XREF: _bC_s34+36-P
					; sub_129162+73-P _bC_s19+79-J
					; sub_174BB3+70-p sub_174BB3+92-p
					; sub_174BB3+A0-p sub_174CD5+6-p
					; sub_174E52+83-j sub_17522D+8E-j
					; sub_175342+25-p sub_1753AA+32-j
					; sub_1754EE+25-j
		PHA				; code used at c000
		JSR		sub_175A32	; code used at c000
		JSR		sub_1762FC	; code used at c000
		JSR		sub_1754AD	; code used at c000
loc_1752F5:				; CODE XREF: sub_175467+43-j
		PLA				; code used at c000
		JSR		sub_17530A	; code used at c000
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDA		byte_6AE6	; code used at c000
		AND		#$FE       ; code used at c000
		STA		byte_6AE6	; code used at c000
		JMP		sub_175B0E	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17530A:				; CODE XREF: sub_17522D+C9-p
					; sub_176C41+28-j
		PHA				; code used at c000
		JSR		sub_17532D	; code used at c000
		JSR		sub_17578E	; code used at c000
		PLA				; code used at c000
		BNE		loc_175324	; code used at c000
		BRK
		.BYTE $83, 7		; ofs 0x00128008, -> dst _bC_s4
		BIT		byte_60C5	; code used at c000
		BVC		loc_17531E	; code used at c000
		PLA				; code used at c000
		PLA				; code used at c000
loc_17531E:				; CODE XREF: sub_17530A+10-j
		LDA		#$C		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		RTS				; code used at c000
loc_175324:				; CODE XREF: sub_17530A+8-j
		BRK
		.BYTE $84, 7		; ofs 0x0012800a, -> dst _bC_s5
		LDA		#$C		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17532D:				; CODE XREF: sub_17530A+1-p
					; sub_175516+20-p
		LDX		byte_30		; code used at c000
		LDY		byte_31		; code used at c000
		JSR		sub_176F34	; code used at c000
		LDA		word_7C		; code used at c000
		STA		byte_92		; code used at c000
		AND		#$E0       ; code used at c000
		STA		byte_8C		; code used at c000
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		JMP		sub_1743B5	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175342:				; CODE XREF: sub_17522D+4F-j
		BRK
		.BYTE $EB, 7		; ofs 0x00158064, -> dst _bE_s32
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369
		LDA		#$9C 
		STA		byte_8B
		LDA		byte_2F
		ORA		#1
		STA		byte_2F
		LDA		#0
		STA		byte_30
		LDA		#$16
		STA		byte_31
		LDA		#1
		STA		byte_644
		STA		byte_6BC
		LDA		#$FF
		JSR		loc_1752EB
		BRK
		.BYTE $11, $2F		; _syscall12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17536E:				; CODE XREF: sub_175049+58-p
		LDA		byte_8F		; code used at c000
		BEQ		loc_175376	; code used at c000
		BRK
		.BYTE $C2, 7		; ofs 0x0015804a, -> dst _bE_s25
		RTS
loc_175376:				; CODE XREF: sub_17536E+2-j
		LDA		byte_92		; code used at c000
		BRK
		.BYTE $AD, 7		; ofs 0x00158034, -> dst _bE_s1A
		BCS		loc_175397	; code used at c000
		CMP		#2		; code used at c000
		BEQ		loc_17538D	; code used at c000
		CMP		#7		; code used at c000
		BEQ		loc_1753DF	; code used at c000
		CMP		#8		; code used at c000
		BEQ		sub_1753AA	; code used at c000
		BRK
		.BYTE $C1, 7		; ofs 0x00158048, -> dst _bE_s24
locret_17538C:				; CODE XREF: sub_17536E+24-j
					; sub_17536E+2E-j
		RTS				; code used at c000
loc_17538D:				; CODE XREF: sub_17536E+11-j
		JSR		sub_1753A1	; code used at c000
		CMP		#1		; code used at c000
		BEQ		locret_17538C	; code used at c000
		JMP		sub_17542D	; code used at c000
loc_175397:				; CODE XREF: sub_17536E+D-j
		JSR		sub_1753A1	; code used at c000
		CMP		#2		; code used at c000
		BEQ		locret_17538C	; code used at c000
		JMP		sub_17542F	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1753A1:				; CODE XREF: sub_17536E:loc_17538D-p
					; sub_17536E:loc_175397-p
		LDA		byte_94		; code used at c000
		AND		#$1F		; code used at c000
		TAX				; code used at c000
		LDA		byte_6DE0,X	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1753AA:				; CODE XREF: sub_17536E+19-j
		LDA		byte_2A		; code used at c000
		CMP		#$22       ; code used at c000
		BNE		loc_1753C0	; code used at c000
		LDA		#$10		; code used at c000
		STA		word_4		; code used at c000
		LDA		#$E		; code used at c000
		STA		word_4+1	; code used at c000
		LDA		#$21       ; code used at c000
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		JSR		sub_1742B0	; code used at c000
loc_1753C0:				; CODE XREF: sub_1753AA+4-j
		LDA		byte_8B		; code used at c000
		CMP		#$C5       ; code used at c000
		BNE		loc_1753CA	; code used at c000
		BRK
		.BYTE $F7, 7		; ofs 0x00128042, -> dst _bC_s21
		RTS
loc_1753CA:				; CODE XREF: sub_1753AA+1A-j
		CMP		#$A6       ; code used at c000
		BNE		loc_1753D4	; code used at c000
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22
		JMP		loc_174E9C
loc_1753D4:				; CODE XREF: sub_1753AA+22-j
					; sub_1753AA+39-j
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22
		BRK
		.BYTE $A8, 7		; ofs 0x0015801c, -> dst _bE_sE
		BCC		loc_1753E6	; code used at c000
		JMP		loc_1752EB	; code used at c000
loc_1753DF:				; CODE XREF: sub_17536E+15-j
		LDA		byte_8B		; code used at c000
		CMP		#$41       ; code used at c000
		BCS		loc_1753D4	; code used at c000
		RTS				; code used at c000
loc_1753E6:				; CODE XREF: sub_1753AA+30-j
		LDA		byte_8B		; code used at c000
		CMP		#$D6       ; code used at c000
		BCC		loc_1753F8	; code used at c000
		CMP		#$DB       ; code used at c000
		BCS		loc_1753F8	; code used at c000
		LDA		#$A5       ; code used at c000
		STA		byte_2A		; code used at c000
		LDA		#$DA       ; code used at c000
		STA		byte_2B		; code used at c000
loc_1753F8:				; CODE XREF: sub_1753AA+40-j
					; sub_1753AA+44-j
		LDA		byte_644	; code used at c000
		BEQ		loc_175409	; code used at c000
		CMP		#1		; code used at c000
		BEQ		loc_17540F	; code used at c000
		CMP		#2		; code used at c000
		BEQ		loc_17541B	; code used at c000
		DEC		byte_2A		; code used at c000
		BNE		loc_17541D	; code used at c000
loc_175409:				; CODE XREF: sub_1753AA+51-j
		DEC		byte_2B		; code used at c000
		DEC		byte_2B		; code used at c000
		BNE		loc_17541D	; code used at c000
loc_17540F:				; CODE XREF: sub_1753AA+55-j
		INC		byte_2A		; code used at c000
		LDA		byte_9A		; code used at c000
		CMP		#$19		; code used at c000
		BCS		loc_17541D	; code used at c000
		INC		byte_2A
		BNE		loc_17541D
loc_17541B:				; CODE XREF: sub_1753AA+59-j
		INC		byte_2B		; code used at c000
loc_17541D:				; CODE XREF: sub_1753AA+5D-j
					; sub_1753AA+63-j sub_1753AA+6B-j
					; sub_1753AA+6F-j
		PLA				; code used at c000
		PLA				; code used at c000
		LDA		#0		; code used at c000
		STA		byte_6B9	; code used at c000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369	; code used at c000
		JMP		loc_175195	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17542D:				; CODE XREF: sub_17536E+26-j
		DEC		byte_30		; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17542F:				; CODE XREF: sub_17536E+30-j
		LDA		byte_60C5	; code used at c000
		AND		#$A0       ; code used at c000
		STA		byte_60C5	; code used at c000
		LDA		#0		; code used at c000
		STA		word_4		; code used at c000
		JSR		sub_175219	; code used at c000
loc_17543E:				; CODE XREF: sub_17542F+17-j
					; sub_17542F+2A-j
		BRK
		.BYTE $AC, 7		; ofs 0x00158032, -> dst _bE_s19
		BCS		loc_175449	; code used as ind data	at c000
		JSR		sub_175222	; code used as ind data	at c000
		JMP		loc_17543E	; code used as ind data	at c000
loc_175449:				; CODE XREF: sub_17542F+12-j
		BRK
		.BYTE $AE, 7		; ofs 0x00158040, -> dst _bE_s20
		CPX		byte_30		; code used at c000
		BNE		loc_175454	; code used at c000
		CPY		byte_31		; code used at c000
		BEQ		loc_17545C	; code used at c000
loc_175454:				; CODE XREF: sub_17542F+1F-j
		INC		word_4		; code used at c000
		JSR		sub_175222	; code used at c000
		JMP		loc_17543E	; code used at c000
loc_17545C:				; CODE XREF: sub_17542F+23-j
		LDA		word_4		; code used at c000
		ASL		; code used at c000
		TAY				; code used at c000
		LDA		#6		; code used at c000
		JSR		_mmc1_prg_set	; code used as ind data	at c000
		LDA		(byte_98),Y	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175467:				; CODE XREF: sub_1750D0+2C-j
		STA		byte_8B		; code used at c000
		INY				; code used at c000
		LDA		(byte_98),Y	; code used at c000
		CMP		#$80       ; code used at c000
		BCC		loc_175488	; code used at c000
		CMP		#$C0       ; code used at c000
		BCC		loc_175485	; code used at c000
		CMP		#$F0       ; code used at c000
		BCC		loc_17547F	; code used at c000
		CMP		#$FE       ; code used at c000
		BCC		loc_175482	; code used at c000
		JMP		sub_175596	; code used at c000
loc_17547F:				; CODE XREF: sub_175467+F-j
		JMP		sub_175516	; code used at c000
loc_175482:				; CODE XREF: sub_175467+13-j
		JMP		sub_175569	; code used at c000
loc_175485:				; CODE XREF: sub_175467+B-j
		JMP		sub_1754EE	; code used at c000
loc_175488:				; CODE XREF: sub_175467+7-j
		JSR		sub_175917	; code used at c000
		JSR		sub_1754B6	; code used at c000
		JSR		sub_176F34	; code used at c000
		AND		#$1F		; code used at c000
		TAX				; code used at c000
		LDA		byte_6DE0,X	; code used at c000
		AND		#$F		; code used at c000
		CMP		#$F		; code used at c000
		BNE		loc_1754A7	; code used at c000
		BRK
		.BYTE $2B, $17		; ofs 0x0012806e, -> dst _bC_s37
		LDX		byte_30
		LDY		byte_31
		JSR		sub_177CC8
loc_1754A7:				; CODE XREF: sub_175467+34-j
		LDA		#$FF		; code used at c000
		PHA				; code used at c000
		JMP		loc_1752F5	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1754AD:				; CODE XREF: sub_174CE2+6-p
					; sub_17522D+C5-p sub_1754B6+7-p
		JSR		_vblank_and_render_off_flag10_set ; code used at c000
		JSR		_bE_sA		; code used at c000
		JMP		__render_on_flag10_clear_reinit	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1754B6:				; CODE XREF: sub_175467+24-p
					; sub_175516+1D-p
		PHA				; code used at c000
		JSR		sub_175A32	; code used at c000
		JSR		sub_1762FC	; code used at c000
		JSR		sub_1754AD	; code used at c000
		JSR		sub_175219	; code used at c000
		PLA				; code used at c000
		STA		word_4		; code used at c000
		LDA		#0		; code used at c000
		STA		word_4+1	; code used at c000
loc_1754CA:				; CODE XREF: sub_1754B6+1C-j
		BRK
		.BYTE $AC, 7		; ofs 0x00158032, -> dst _bE_s19
		BCS		loc_1754D5	; code used as ind data	at c000
loc_1754CF:				; CODE XREF: sub_1754B6+27-j
		JSR		sub_175222	; code used as ind data	at c000
		JMP		loc_1754CA	; code used as ind data	at c000
loc_1754D5:				; CODE XREF: sub_1754B6+17-j
		LDA		word_4+1	; code used at c000
		CMP		word_4		; code used at c000
		BEQ		loc_1754E0	; code used at c000
		INC		word_4+1	; code used at c000
		JMP		loc_1754CF	; code used at c000
loc_1754E0:				; CODE XREF: sub_1754B6+23-j
		STX		byte_644	; code used at c000
		STX		byte_6BC	; code used at c000
		BRK
		.BYTE $AE, 7		; ofs 0x00158040, -> dst _bE_s20
		STX		byte_30		; code used at c000
		STY		byte_31		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1754EE:				; CODE XREF: sub_175467:loc_175485-j
		JSR		sub_175917	; code used at c000
		SEC				; code used at c000
		SBC		#$80       ; code used at c000
		LDY		#$7E       ; code used at c000
		JSR		_calc_6C_mul_3_add_syscall0_word ; code	used at	c000
		LDY		#0		; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_30		; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_31		; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		AND		#3		; code used at c000
		STA		byte_644	; code used at c000
		STA		byte_6BC	; code used at c000
		LDA		(word_6C),Y	; code used at c000
		AND		#4		; code used at c000
		JMP		loc_1752EB	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175516:				; CODE XREF: sub_175467:loc_17547F-j
		SEC				; code used at c000
		SBC		#$C0       ; code used at c000
		LDY		#$7F       ; code used at c000
		JSR		_calc_6C_mul_3_add_syscall0_word ; code	used at	c000
		LDY		#0		; code used at c000
		LDA		(word_6C),Y	; code used at c000
		PHA				; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_2A		; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_2B		; code used at c000
		PLA				; code used at c000
		PHA				; code used at c000
		BRK
		.BYTE $8C, 7		; ofs 0x000f8018, -> dst _bA_sC
		PLA				; code used at c000
		JSR		sub_1754B6	; code used at c000
		JSR		sub_17532D	; code used at c000
		BRK
		.BYTE $8D, 7		; ofs 0x000f801a, -> dst _bA_sD
		LDA		#2		; code used at c000
		STA		byte_644	; code used at c000
		STA		byte_6BC	; code used at c000
		BRK
		.BYTE $84, 7		; ofs 0x0012800a, -> dst _bC_s5
		BRK
		.BYTE $DD, 7		; ofs 0x0014001a, -> dst _bD_sD
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
_calc_6C_mul_3_add_syscall0_word:	; CODE XREF: sub_1754EE+8-p
					; sub_175516+5-p
		STA		word_6C		; code used at c000
		ASL		; code used at c000
		CLC				; code used at c000
		ADC		word_6C		; code used at c000
		PHA				; code used at c000
		TYA				; code used at c000
		JSR		_get_syscall0_data_cur_byte0 ; code used at c000
		STA		word_6C		; code used at c000
		TYA				; code used at c000
		JSR		_get_syscall0_data_cur_byte1 ; code used at c000
		STA		word_6C+1	; code used at c000
		PLA				; code used at c000
		CLC				; code used at c000
		ADC		word_6C		; code used at c000
		STA		word_6C		; code used at c000
		BCC		locret_175568	; code used at c000
		INC		word_6C+1	; code used at c000
locret_175568:				; CODE XREF: _calc_6C_mul_3_add_syscall0_word+19-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175569:				; CODE XREF: sub_175467:loc_175482-j
		SEC				; code used at c000
		SBC		#$F0       ; code used at c000
		ASL		; code used at c000
		STA		word_6C		; code used at c000
		LDA		#$80       ; code used at c000
		JSR		_get_syscall0_data_cur_byte0 ; code used at c000
		CLC				; code used at c000
		ADC		word_6C		; code used at c000
		STA		word_6C		; code used at c000
		PHP				; code used at c000
		LDA		#$80       ; code used at c000
		JSR		_get_syscall0_data_cur_byte1 ; code used at c000
		PLP				; code used at c000
		ADC		#0		; code used at c000
		STA		word_6C+1	; code used at c000
		PHA				; code used at c000
		LDA		#6		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		PLA				; code used at c000
		LDY		#0		; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_2A		; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_2B		; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175596:				; CODE XREF: sub_175467+15-j
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		CMP		#$11		; code used at c000
		BEQ		loc_1755A0	; code used at c000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
loc_1755A0:				; CODE XREF: sub_175596+5-j
		BRK
		.BYTE $82, $2F		; _syscall12
		JSR		sub_174369	; code used at c000
		PLA				; code used at c000
		PLA				; code used at c000
		JMP		loc_17518B	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1755AB:				; CODE XREF: sub_174D56+27-p
		LDA		byte_92		; code used at c000
		AND		#$1F		; code used at c000
		TAX				; code used at c000
		LDA		byte_6DE0,X	; code used at c000
		CMP		#9		; code used at c000
		BNE		locret_1755C9	; code used at c000
		LDA		byte_90		; code used at c000
		AND		#3		; code used at c000
		BNE		locret_1755C9	; code used at c000
		LDA		byte_644	; code used at c000
		AND		#1		; code used at c000
		BNE		locret_1755C9	; code used at c000
		LDX		#3		; code used at c000
		JSR		_vblank_count	; code used at c000
locret_1755C9:				; CODE XREF: sub_1755AB+A-j
					; sub_1755AB+10-j sub_1755AB+17-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1755CA:				; CODE XREF: sub_17501C-j
		JSR		sub_1757A4	; code used at c000
		LDA		#3		; code used at c000
		STA		word_3E		; code used at c000
		LDA		byte_9A		; code used at c000
		BEQ		loc_1755ED	; code used at c000
		DEC		byte_30		; code used at c000
		DEC		word_3C		; code used at c000
		DEC		word_3C		; code used at c000
		DEC		byte_100	; code used at c000
		JSR		sub_1757B6	; code used at c000
		LDX		#3		; code used at c000
		BCC		loc_175638	; code used at c000
		INC		byte_30		; code used at c000
		INC		byte_100	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_1755ED:				; CODE XREF: sub_1755CA+9-j
		DEC		byte_2A		; code used at c000
		DEC		byte_100	; code used at c000
		JSR		sub_1757C0	; code used at c000
		LDX		#3		; code used at c000
		BCC		loc_175638	; code used at c000
		INC		byte_2A		; code used at c000
		INC		byte_100	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_175601:				; CODE XREF: sub_175016-j
		JSR		sub_1757A4	; code used at c000
		LDA		#0		; code used at c000
		STA		word_3E		; code used at c000
		LDA		byte_9A		; code used at c000
		BEQ		loc_175624	; code used at c000
		DEC		byte_31		; code used at c000
		DEC		word_3C+1	; code used at c000
		DEC		word_3C+1	; code used at c000
		DEC		byte_101	; code used at c000
		JSR		sub_1757B6	; code used at c000
		LDX		#0		; code used at c000
		BCC		loc_175638	; code used at c000
		INC		byte_31		; code used at c000
		INC		byte_101	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_175624:				; CODE XREF: sub_1755CA+40-j
		DEC		byte_2B		; code used at c000
		DEC		byte_101	; code used at c000
		JSR		sub_1757C0	; code used at c000
		LDX		#0		; code used at c000
		BCC		loc_175638	; code used at c000
		INC		byte_2B		; code used at c000
		INC		byte_101	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_175638:				; CODE XREF: sub_1755CA+19-j
					; sub_1755CA+2D-j sub_1755CA+50-j
					; sub_1755CA+64-j sub_1755CA+9A-j
					; sub_1755CA+AE-j sub_1755CA+D1-j
					; sub_1755CA:loc_1756B9-j
		JSR		sub_17574F	; code used at c000
		BRK
		.BYTE $C, 7		; ofs 0x00140008, -> dst _bD_s4
		LDA		#$10		; code used at c000
		STA		byte_87		; code used at c000
		LDA		#0		; code used at c000
		STA		byte_85		; code used at c000
		STA		byte_8E		; code used at c000
		JMP		loc_1756BC	; code used at c000
loc_17564B:				; CODE XREF: sub_17501F-j
		JSR		sub_1757A4	; code used at c000
		LDA		#1		; code used at c000
		STA		word_3E		; code used at c000
		LDA		byte_9A		; code used at c000
		BEQ		loc_17566E	; code used as ind data	at c000
		INC		byte_30		; code used as ind data	at c000
		INC		word_3C		; code used at c000
		INC		word_3C		; code used at c000
		INC		byte_100	; code used at c000
		JSR		sub_1757B6	; code used at c000
		LDX		#1		; code used at c000
		BCC		loc_175638	; code used at c000
		DEC		byte_30		; code used at c000
		DEC		byte_100	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_17566E:				; CODE XREF: sub_1755CA+8A-j
		INC		byte_2A		; code used at c000
		INC		byte_100	; code used at c000
		JSR		sub_1757C0	; code used at c000
		LDX		#1		; code used at c000
		BCC		loc_175638	; code used at c000
		DEC		byte_2A		; code used at c000
		DEC		byte_100	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_175682:				; CODE XREF: sub_175019-j
		JSR		sub_1757A4	; code used at c000
		LDA		#2		; code used at c000
		STA		word_3E		; code used at c000
		LDA		byte_9A		; code used at c000
		BEQ		loc_1756A5	; code used at c000
		INC		byte_31		; code used at c000
		INC		word_3C+1	; code used at c000
		INC		word_3C+1	; code used at c000
		INC		byte_101	; code used at c000
		JSR		sub_1757B6	; code used at c000
		LDX		#2		; code used at c000
		BCC		loc_175638	; code used at c000
		DEC		byte_31		; code used at c000
		DEC		byte_101	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_1756A5:				; CODE XREF: sub_1755CA+C1-j
		INC		byte_2B		; code used at c000
		INC		byte_101	; code used at c000
		JSR		sub_1757C0	; code used at c000
		LDX		#2		; code used at c000
		BCC		loc_1756B9	; code used at c000
		DEC		byte_2B		; code used at c000
		DEC		byte_101	; code used at c000
		JMP		sub_17574F	; code used at c000
loc_1756B9:				; CODE XREF: sub_1755CA+E5-j
		JMP		loc_175638	; code used at c000
loc_1756BC:				; CODE XREF: sub_1755CA+7E-j
		LDA		byte_97		; code used at c000
		AND		#$7F       ; code used at c000
		CMP		#$40       ; code used at c000
		BCC		loc_1756CE	; code used at c000
		LDX		#word_4		; code used at c000
		LDA		byte_73E	; code used at c000
		BPL		loc_17570D	; code used at c000
		JSR		sub_175730	; code used at c000
loc_1756CE:				; CODE XREF: sub_1755CA+F8-j
					; sub_1755CA+146-j
		LDA		byte_97		; code used at c000
		AND		#$3F       ; code used at c000
		CMP		#$20       ; code used at c000
		BCC		loc_1756E0	; code used at c000
		LDX		#byte_8		; code used at c000
		LDA		byte_740	; code used at c000
		BPL		loc_175713	; code used at c000
		JSR		sub_175730	; code used at c000
loc_1756E0:				; CODE XREF: sub_1755CA+10A-j
					; sub_1755CA+14C-j
		LDA		byte_97		; code used at c000
		AND		#$1F		; code used at c000
		CMP		#$10		; code used at c000
		BCC		loc_1756F2	; code used at c000
		LDX		#byte_C		; code used at c000
		LDA		byte_742	; code used at c000
		BPL		loc_175719	; code used at c000
		JSR		sub_175730	; code used at c000
loc_1756F2:				; CODE XREF: sub_1755CA+11C-j
					; sub_1755CA+152-j
		LDA		byte_9A		; code used at c000
		BNE		locret_17570C	; code used at c000
loc_1756F6:				; CODE XREF: sub_1750D0:loc_175195-p
		BIT		byte_60B9	; code used at c000
		BVS		loc_175701	; code used at c000
		LDA		byte_2A		; code used at c000
		EOR		#$80       ; code used at c000
		STA		byte_9E		; code used at c000
loc_175701:				; CODE XREF: sub_1755CA+12F-j
		BIT		byte_60CB	; code used at c000
		BVS		locret_17570C	; code used at c000
		LDA		byte_2A		; code used at c000
		EOR		#$80       ; code used at c000
		STA		byte_9B		; code used at c000
locret_17570C:				; CODE XREF: sub_1755CA+12A-j
					; sub_1755CA+13A-j
		RTS				; code used at c000
loc_17570D:				; CODE XREF: sub_1755CA+FF-j
		JSR		sub_17571F	; code used at c000
		JMP		loc_1756CE	; code used at c000
loc_175713:				; CODE XREF: sub_1755CA+111-j
		JSR		sub_17571F	; code used at c000
		JMP		loc_1756E0	; code used at c000
loc_175719:				; CODE XREF: sub_1755CA+123-j
		JSR		sub_17571F	; code used at c000
		JMP		loc_1756F2	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17571F:				; CODE XREF: sub_1755CA:loc_17570D-p
					; sub_1755CA:loc_175713-p
					; sub_1755CA:loc_175719-p
		LDA		byte_100	; code used at c000
		EOR		#$80       ; code used at c000
		STA		$100,X		; code used at c000
		LDA		byte_101	; code used at c000
		EOR		#$80       ; code used at c000
		STA		$101,X		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175730:				; CODE XREF: sub_1755CA+101-p
					; sub_1755CA+113-p sub_1755CA+125-p
		LDA		$103,X		; code used at c000
		AND		#3		; code used at c000
		BEQ		loc_17574B	; code used at c000
		CMP		#1		; code used at c000
		BEQ		loc_175743	; code used at c000
		CMP		#2		; code used at c000
		BEQ		loc_175747	; code used at c000
		DEC		$100,X		; code used at c000
		RTS				; code used at c000
loc_175743:				; CODE XREF: sub_175730+9-j
		INC		$100,X		; code used at c000
		RTS				; code used at c000
loc_175747:				; CODE XREF: sub_175730+D-j
		INC		$101,X		; code used at c000
		RTS				; code used at c000
loc_17574B:				; CODE XREF: sub_175730+5-j
		DEC		$101,X		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17574F:				; CODE XREF: sub_1755CA+20-j
					; sub_1755CA+34-j sub_1755CA+57-j
					; sub_1755CA+6B-j
					; sub_1755CA:loc_175638-p
					; sub_1755CA+A1-j sub_1755CA+B5-j
					; sub_1755CA+D8-j sub_1755CA+EC-j
		LDA		byte_2C		; code used at c000
		BEQ		loc_17577B	; code used at c000
		CMP		#1
		BNE		loc_175767
		LDA		byte_6E1
		CMP		#$40 
		BEQ		loc_17577B
		STX		byte_6BA
loc_175761:				; CODE XREF: sub_17574F+1A-j
		LDA		byte_9A
		BEQ		loc_17577B
		BNE		loc_17576C
loc_175767:				; CODE XREF: sub_17574F+6-j
		STX		byte_A0
		JMP		loc_175761
loc_17576C:				; CODE XREF: sub_17574F+16-j
		LDA		byte_113
		AND		#$FC 
		STA		byte_113
		TXA
		ORA		byte_113
		STA		byte_113
loc_17577B:				; CODE XREF: sub_17574F+2-j
					; sub_17574F+D-j sub_17574F+14-j
		STX		byte_644	; code used at c000
		STX		byte_103	; code used at c000
		LDA		byte_6AE6	; code used at c000
		BPL		locret_17578D	; code used at c000
		LDY		#3		; code used at c000
		TXA				; code used at c000
		ORA		(word_72),Y	; code used at c000
		STA		(word_72),Y	; code used at c000
locret_17578D:				; CODE XREF: sub_17574F+35-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17578E:				; CODE XREF: sub_174CE2+12-p
					; sub_17530A+4-p
		LDA		byte_30		; code used at c000
		STA		byte_100	; code used at c000
		LDA		byte_31		; code used at c000
		STA		byte_101	; code used at c000
		LDA		#0		; code used at c000
		STA		byte_102	; code used at c000
		LDA		byte_644	; code used at c000
		STA		byte_103	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1757A4:				; CODE XREF: sub_1755CA-p
					; sub_1755CA:loc_175601-p
					; sub_1755CA:loc_17564B-p
					; sub_1755CA:loc_175682-p
		TXA				; code used as ind data	at c000
		PHA				; code used at c000
		LDA		byte_8E		; code used at c000
		BPL		loc_1757B3	; code used at c000
		LDA		#0		; code used at c000
		STA		byte_8E		; code used at c000
		LDA		#4		; code used at c000
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
loc_1757B3:				; CODE XREF: sub_1757A4+4-j
		PLA				; code used at c000
		TAX				; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1757B6:				; CODE XREF: sub_1755CA+14-p
					; sub_1755CA+4B-p sub_1755CA+95-p
					; sub_1755CA+CC-p
		LDX		byte_30		; code used at c000
		LDY		byte_31		; code used at c000
		JSR		sub_176F34	; code used at c000
		JMP		sub_175853	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_1757C0:				; CODE XREF: sub_1755CA+28-p
					; sub_1755CA+5F-p sub_1755CA+A9-p
					; sub_1755CA+E0-p
		LDX		byte_2A		; code used at c000
		LDY		byte_2B		; code used at c000
		JSR		sub_176D3A	; code used at c000
		STA		byte_92		; code used at c000
		LDX		byte_2C		; code used at c000
		BEQ		loc_1757D2	; code used at c000
		DEX
		BEQ		loc_175826
		CLC
		RTS
loc_1757D2:				; CODE XREF: sub_1757C0+B-j
		LDA		_debug_flags	; code used at c000
		BNE		loc_1757E2	; code used at c000
		JSR		_calc_pads	; code used at c000
		LDA		_pads		; code used at c000
		AND		#2		; code used at c000
		BEQ		loc_1757E2	; code used at c000
		CLC				; code used at c000
		RTS				; code used at c000
loc_1757E2:				; CODE XREF: sub_1757C0+15-j
					; sub_1757C0+1E-j
		LDA		word_7C		; code used at c000
		BEQ		loc_1757F4	; code used at c000
		CMP		#6		; code used at c000
		BEQ		loc_175818	; code used at c000
		CMP		#$17		; code used at c000
		BEQ		loc_175818	; code used at c000
		CMP		#$10		; code used at c000
		BEQ		loc_175818	; code used at c000
		CLC				; code used at c000
		RTS				; code used at c000
loc_1757F4:				; CODE XREF: sub_1757C0+24-j
		LDX		#0		; code used at c000
		STX		byte_8F		; code used at c000
		LDA		byte_2D		; code used at c000
		CMP		byte_2A		; code used at c000
		BNE		loc_17580C	; code used at c000
		LDA		byte_2E
		CMP		byte_2B
		BNE		loc_17580C
		STX		byte_6B9
		INX
		STX		byte_8F
		CLC
		RTS
loc_17580C:				; CODE XREF: sub_1757C0+3C-j
					; sub_1757C0+42-j
		LDA		byte_9B		; code used at c000
		CMP		byte_2A		; code used at c000
		BNE		loc_17581B	; code used at c000
		LDA		byte_9C
		CMP		byte_2B
		BEQ		loc_175824
loc_175818:				; CODE XREF: sub_1757C0+28-j
					; sub_1757C0+2C-j sub_1757C0+30-j
					; sub_1757C0+7A-j sub_1757C0+7E-j
					; sub_1757C0+82-j
		BRK
		.BYTE $A2, $2F		; _syscall12
loc_17581B:				; CODE XREF: sub_1757C0+50-j
		SEC				; code used at c000
		RTS				; code used at c000
loc_17581D:				; CODE XREF: sub_1757C0+74-j
		LDA		#0
		STA		byte_2C
		BRK
		.BYTE $85, 7		; ofs 0x0012800c, -> dst _bC_s6
loc_175824:				; CODE XREF: sub_1757C0+56-j
		CLC
		RTS
loc_175826:				; CODE XREF: sub_1757C0+E-j
		LDA		word_7C
		BNE		loc_175838
		LDA		byte_2A
		CMP		byte_9B
		BNE		loc_175836
		LDA		byte_2B
		CMP		byte_9C
		BEQ		loc_17581D
loc_175836:				; CODE XREF: sub_1757C0+6E-j
		CLC
		RTS
loc_175838:				; CODE XREF: sub_1757C0+68-j
		CMP		#6
		BEQ		loc_175818
		CMP		#$17
		BEQ		loc_175818
		CMP		#$2F 
		BCS		loc_175818
		LDA		#0
		STA		byte_2C
		BRK
		.BYTE $85, 7		; ofs 0x0012800c, -> dst _bC_s6
		JSR		sub_175212
		BRK
		.BYTE $32, $17		; ofs 0x00140030, -> dst _bD_s18
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175853:				; CODE XREF: sub_1757B6+7-j
		LDA		byte_8B		; code used at c000
		BNE		loc_175877	; code used at c000
		LDA		byte_60C6	; code used at c000
		BPL		loc_175877	; code used at c000
		LDA		byte_31		; code used at c000
		CMP		#$18		; code used at c000
		BNE		loc_175877	; code used at c000
		JSR		sub_174CCF	; code used at c000
		BRK
		.BYTE $87, $77		; _msg_m00_arg1
		DEC		byte_101	; code used at c000
		DEC		byte_31		; code used at c000
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		INC		byte_101	; code used at c000
		INC		byte_31		; code used at c000
		SEC				; code used at c000
		RTS				; code used at c000
loc_175877:				; CODE XREF: sub_175853+2-j
					; sub_175853+7-j sub_175853+D-j
		LDA		_debug_flags	; code used at c000
		BNE		loc_17588B	; code used at c000
		JSR		_calc_pads	; code used at c000
		LDA		_pads		; code used at c000
		AND		#2		; code used at c000
		BEQ		loc_17588B	; code used at c000
		LDA		word_7C		; code used at c000
		STA		byte_92		; code used at c000
		CLC				; code used at c000
		RTS				; code used at c000
loc_17588B:				; CODE XREF: sub_175853+27-j
					; sub_175853+30-j
		LDA		word_7C		; code used at c000
		STA		byte_92		; code used at c000
		AND		#$1F		; code used at c000
		BRK
		.BYTE $B, 7		; ofs 0x00140006, -> dst _bD_s3
		BCC		loc_1758C3	; code used at c000
		AND		#$F		; code used at c000
		CMP		#4		; code used at c000
		BEQ		loc_1758A1	; code used at c000
		BRK
		.BYTE $A2, $2F		; _syscall12
loc_17589F:				; CODE XREF: sub_175853+5C-j
					; sub_175853+62-j sub_175853+68-j
		SEC				; code used at c000
		RTS				; code used at c000
loc_1758A1:				; CODE XREF: sub_175853+47-j
		LDA		byte_2C		; code used at c000
		CMP		#1		; code used at c000
		BEQ		loc_1758C1	; code used at c000
		LDA		byte_8B		; code used at c000
		CMP		#$A		; code used at c000
		BEQ		loc_1758B1	; code used at c000
		CMP		#$91       ; code used at c000
		BNE		loc_17589F	; code used at c000
loc_1758B1:				; CODE XREF: sub_175853+58-j
		LDA		byte_30
		CMP		byte_2D
		BNE		loc_17589F
		LDA		byte_31
		CMP		byte_2E
		BNE		loc_17589F
		LDA		#1
		STA		byte_8F
loc_1758C1:				; CODE XREF: sub_175853+52-j
		CLC
		RTS
loc_1758C3:				; CODE XREF: sub_175853+41-j
		LDA		byte_6E1	; code used at c000
		BEQ		loc_1758CF	; code used at c000
		LDA		byte_6E2	; code used at c000
		AND		#$20       ; code used at c000
		BNE		loc_1758DF	; code used at c000
loc_1758CF:				; CODE XREF: sub_175853+73-j
		LDA		#$10		; code used at c000
		STA		word_72		; code used at c000
		LDA		#1		; code used at c000
		STA		word_72+1	; code used at c000
loc_1758D7:				; CODE XREF: sub_175853+AA-j
		LDY		#0		; code used at c000
		LDA		(word_72),Y	; code used at c000
		CMP		#$FF		; code used at c000
		BNE		loc_1758F2	; code used at c000
loc_1758DF:				; CODE XREF: sub_175853+7A-j
		LDA		byte_2C		; code used at c000
		BEQ		loc_1758F0	; code used at c000
		LDA		#0
		STA		byte_2C
		BRK
		.BYTE $1D, $17		; ofs 0x00128062, -> dst _bC_s31
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
loc_1758F0:				; CODE XREF: sub_175853+8E-j
		CLC				; code used at c000
		RTS				; code used at c000
loc_1758F2:				; CODE XREF: sub_175853+8A-j
		CMP		byte_30		; code used at c000
		BEQ		loc_175900	; code used at c000
loc_1758F6:				; CODE XREF: sub_175853+B2-j
		LDA		word_72		; code used at c000
		CLC				; code used at c000
		ADC		#4		; code used at c000
		STA		word_72		; code used at c000
		JMP		loc_1758D7	; code used at c000
loc_175900:				; CODE XREF: sub_175853+A1-j
		INY				; code used at c000
		LDA		(word_72),Y	; code used at c000
		CMP		byte_31		; code used at c000
		BNE		loc_1758F6	; code used at c000
		BRK
		.BYTE $AF, 7		; ofs 0x00158042, -> dst _bE_s21
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_17590B:				; CODE XREF: sub_1750BC+8-p
		PHA				; code used at c000
		LDA		byte_8C		; code used at c000
		STA		byte_B		; code used at c000
		PLA				; code used at c000
		STA		byte_8C		; code used at c000
		BRK
		.BYTE $5E, 7		; ofs 0x00128004, -> dst _bC_s2
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175917:				; CODE XREF: sub_1750D0:loc_175164-p
					; sub_1750D0+B8-p
					; sub_175467:loc_175488-p sub_1754EE-p
		PHA				; code used at c000
		BRK
		.BYTE $82, $2F		; _syscall12
		JSR		sub_174369	; code used at c000
		BRK
		.BYTE $F9, 7		; ofs 0x00158036, -> dst _bE_s1B
		PLA				; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175923:				; CODE XREF: sub_1580AC+24-P
		JSR		sub_17592E
		PHP
		LDA		#$E
		JSR		_mmc1_prg_set
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17592E:				; CODE XREF: sub_17522D+3A-p
					; sub_175923-p sub_176C41+F-p
		LDA		#$5D       ; code used at c000
		LDX		#word_6C	; code used at c000
		JSR		_get_syscall0_bank_ptr_no_prg_change ; code used at c000
		LDA		#6		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
loc_17593A:				; CODE XREF: sub_17592E+1F-j
					; sub_17592E+23-j
		LDY		#0		; code used at c000
		LDA		(word_6C),Y	; code used at c000
		CMP		#$FF		; code used at c000
		BEQ		loc_175954	; code used at c000
		CMP		byte_74		; code used at c000
		BEQ		loc_175956	; code used at c000
loc_175946:				; CODE XREF: sub_17592E+2D-j
					; sub_17592E+39-j
		LDA		word_6C		; code used at c000
		CLC				; code used at c000
		ADC		#6		; code used at c000
		STA		word_6C		; code used at c000
		BCC		loc_17593A	; code used at c000
		INC		word_6C+1
		JMP		loc_17593A
loc_175954:				; CODE XREF: sub_17592E+12-j
		CLC				; code used at c000
		RTS				; code used at c000
loc_175956:				; CODE XREF: sub_17592E+16-j
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		CMP		byte_75		; code used at c000
		BNE		loc_175946	; code used at c000
		LDY		#4		; code used at c000
		LDA		(word_6C),Y	; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		AND		#2		; code used at c000
		CMP		byte_2F		; code used at c000
		BNE		loc_175946	; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		LDY		#1		; code used at c000
		TAX				; code used at c000
		CPX		#$72       ; code used at c000
		BNE		loc_175999	; code used at c000
		LDY		#0
loc_175975:				; CODE XREF: sub_17592E+56-j
		LDA		byte_60CD
		AND		byte_1759AB,Y
		CMP		byte_1759A6,Y
		BCC		loc_175986
		INY
		INX
		CPX		#$75 
		BNE		loc_175975
loc_175986:				; CODE XREF: sub_17592E+50-j
		STX		byte_8B
		TYA
		ASL
		TAY
		LDA		word_1759B0,Y
		STA		byte_30
		LDA		word_1759B0+1,Y
		STA		byte_31
		LDY		#4
		BNE		loc_1759FA
loc_175999:				; CODE XREF: sub_17592E+43-j
		CPX		#$C6       ; code used at c000
		BNE		loc_1759ED	; code used at c000
		LDA		byte_60CB
		BPL		loc_1759ED
		LDX		#$A6 
		BNE		loc_1759ED
byte_1759A6:
		.BYTE	3, $F,$3F,$FF,$FF ; DATA XREF: sub_17592E+4D-r
byte_1759AB:
		.BYTE	3, $F,$3F,$FF,$FF ; DATA XREF: sub_17592E+4A-r
word_1759B0:
		.WORD  $612, $914, $D1F, $F2A ;	DATA XREF: sub_17592E+5D-r
					; sub_17592E+62-r

; =============== S U B	R O U T	I N E =======================================
sub_1759B8:				; CODE XREF: sub_17522D+BB-p
					; sub_176C41+17-p
		LDA		#$1D		; code used at c000
		JSR		_get_syscall0_data_cur_byte0 ; code used at c000
		STA		word_6C		; code used at c000
		LDA		#$1D		; code used at c000
		JSR		_get_syscall0_data_cur_byte1 ; code used at c000
		STA		word_6C+1	; code used at c000
		LDA		#6		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDX		#0		; code used at c000
loc_1759CD:				; CODE XREF: sub_1759B8+25-j
					; sub_1759B8+29-j
		LDY		#0		; code used at c000
		LDA		(word_6C),Y	; code used at c000
		CMP		byte_74		; code used at c000
		BEQ		loc_1759E4	; code used at c000
loc_1759D5:				; CODE XREF: sub_1759B8+33-j
		INX				; code used at c000
		LDA		#5		; code used at c000
		CLC				; code used at c000
		ADC		word_6C		; code used at c000
		STA		word_6C		; code used at c000
		BCC		loc_1759CD	; code used at c000
		INC		word_6C+1	; code used at c000
		JMP		loc_1759CD	; code used at c000
loc_1759E4:				; CODE XREF: sub_1759B8+1B-j
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		CMP		byte_75		; code used at c000
		BEQ		loc_1759ED	; code used at c000
		BNE		loc_1759D5	; code used at c000
loc_1759ED:				; CODE XREF: sub_17592E+6D-j
					; sub_17592E+72-j sub_17592E+76-j
					; sub_1759B8+31-j
		STX		byte_8B		; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_30		; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_31		; code used at c000
		INY				; code used at c000
loc_1759FA:				; CODE XREF: sub_17592E+69-j
		LDA		byte_8B		; code used at c000
		CMP		#$F		; code used at c000
		BNE		loc_175A14	; code used at c000
		LDA		byte_60BA
		AND		#1
		BEQ		loc_175A14
		STA		byte_6BC
		LDA		#3
		STA		byte_31
		LDA		#0
		STA		byte_30
		SEC
		RTS
loc_175A14:				; CODE XREF: sub_1759B8+46-j
					; sub_1759B8+4D-j
		LDA		byte_2C		; code used at c000
		CMP		#1		; code used at c000
		BNE		loc_175A22	; code used at c000
		LDA		byte_30
		STA		byte_2D
		LDA		byte_31
		STA		byte_2E
loc_175A22:				; CODE XREF: sub_1759B8+60-j
		LDA		(word_6C),Y	; code used at c000
		PHA				; code used at c000
		AND		#3		; code used at c000
		STA		byte_644	; code used at c000
		STA		byte_6BC	; code used at c000
		PLA				; code used at c000
		AND		#4		; code used at c000
		SEC				; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175A32:				; CODE XREF: sub_174CE2-p
					; sub_17522D+BF-p sub_1754B6+1-p
					; sub_176C41+1B-p
		LDA		#0		; code used at c000
		STA		word_6E+1	; code used at c000
		LDA		byte_8B		; code used at c000
		ASL		; code used at c000
		ROL		word_6E+1	; code used at c000
		CLC				; code used at c000
		ADC		byte_8B		; code used at c000
		STA		word_6E		; code used at c000
		LDA		#0		; code used at c000
		ADC		word_6E+1	; code used at c000
		STA		word_6E+1	; code used at c000
		LDA		#$1E		; code used at c000
		JSR		_get_syscall0_data_cur_byte1 ; code used at c000
		CLC				; code used at c000
		ADC		word_6E+1	; code used at c000
		STA		word_6E+1	; code used at c000
		LDA		#$1E		; code used at c000
		JSR		_get_syscall0_data_cur_byte0 ; code used at c000
		CLC				; code used at c000
		ADC		word_6E		; code used at c000
		STA		word_6E		; code used at c000
		BCC		loc_175A5E	; code used at c000
		INC		word_6E+1	; code used at c000
loc_175A5E:				; CODE XREF: sub_175A32+28-j
		LDA		#7		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDA		byte_9A		; code used at c000
		STA		word_40+1	; code used at c000
		LDY		#2		; code used at c000
		LDA		(word_6E),Y	; code used at c000
		STA		byte_9A		; code used at c000
		LDY		#0		; code used at c000
		LDA		(word_6E),Y	; code used at c000
		STA		word_6C		; code used at c000
		INY				; code used at c000
		LDA		(word_6E),Y	; code used at c000
		STA		word_6C+1	; code used at c000
		LDX		#6		; code used at c000
		LDA		byte_9A		; code used at c000
		CMP		#$C		; code used at c000
		BCC		loc_175A81	; code used at c000
		INX				; code used at c000
loc_175A81:				; CODE XREF: sub_175A32+4C-j
		TXA				; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDY		#0		; code used at c000
		STY		word_4+1	; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_88		; code used at c000
		STA		word_4		; code used at c000
		INY				; code used at c000
		LDA		(word_6C),Y	; code used at c000
		STA		byte_89		; code used at c000
		LDX		#word_4		; code used at c000
		JSR		_mul16_to_8	; code used at c000
		LDA		word_4		; code used at c000
		SEC				; code used at c000
		SBC		#1		; code used at c000
		STA		word_4		; code used at c000
		LDA		word_4+1	; code used at c000
		SBC		#0		; code used at c000
		STA		word_4+1	; code used at c000
		LDX		#$10		; code used at c000
loc_175AA8:				; CODE XREF: sub_175A32+7D-j
		ASL		word_4		; code used at c000
		ROL		word_4+1	; code used at c000
		BCS		loc_175AB2	; code used at c000
		DEX				; code used at c000
		JMP		loc_175AA8	; code used at c000
loc_175AB2:				; CODE XREF: sub_175A32+7A-j
		STX		byte_77		; code used at c000
		LDY		#2		; code used at c000
		LDA		(word_6C),Y	; code used at c000
		TAX				; code used at c000
		AND		#$C0       ; code used at c000
		CLC				; code used at c000
		ROL		; code used at c000
		ROL		; code used at c000
		ROL		; code used at c000
		ADC		#2		; code used at c000
		STA		byte_8D		; code used at c000
		TXA				; code used at c000
		AND		#$1F		; code used at c000
		STA		byte_8A		; code used at c000
		LDA		#$7D       ; code used at c000
		JSR		_get_syscall0_data_cur_byte0 ; code used at c000
		STA		byte_98		; code used at c000
		LDA		#$7D       ; code used at c000
		JSR		_get_syscall0_data_cur_byte1 ; code used at c000
		STA		byte_99		; code used at c000
		LDA		#6		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		LDX		byte_8B		; code used at c000
		BEQ		locret_175AF6	; code used at c000
		LDY		#0		; code used at c000
loc_175AE1:				; CODE XREF: sub_175A32+B8-j
		LDA		(byte_98),Y	; code used as ind data	at c000
		CMP		#$FF		; code used as ind data	at c000
		BEQ		loc_175AED	; code used as ind data	at c000
loc_175AE7:				; CODE XREF: sub_175A32+BC-j
		JSR		sub_175AF0	; code used as ind data	at c000
		JMP		loc_175AE1	; code used as ind data	at c000
loc_175AED:				; CODE XREF: sub_175A32+B3-j
		DEX				; code used as ind data	at c000
		BNE		loc_175AE7	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175AF0:				; CODE XREF: sub_175A32:loc_175AE7-p
		INC		byte_98		; code used as ind data	at c000
		BNE		locret_175AF6	; code used as ind data	at c000
		INC		byte_99		; code used at c000
locret_175AF6:				; CODE XREF: sub_175A32+AB-j
					; sub_175AF0+2-j
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175AF7:				; CODE XREF: sub_174D56+15-p
					; sub_175B03+4-p
		LDA		#5		; code used at c000
		JSR		_mmc1_prg_set	; code used at c000
		JSR		sub_175B17	; code used at c000
		BRK
		.BYTE $12, 7		; ofs 0x0008000e, -> dst _b5_s7
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175B03:				; CODE XREF: sub_B3666:loc_B366E-P
					; sub_12A8AE:loc_12A8B6-P
		LDA		_mmc_cur_prg_bank ; code used at c000
		PHA				; code used at c000
		JSR		sub_175AF7	; code used at c000
		PLA				; code used at c000
		JMP		_mmc1_prg_set	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175B0E:				; CODE XREF: _b6_s6+81-P _bC_s34+3C-P
					; _bC_s19+51-J sub_12B493+73-P
					; sub_142504+5F-P sub_174CBD+A-p
					; sub_174CE2+1A-j
					; sub_1750D0:loc_1751F7-p
					; sub_17522D+DA-j
		JSR		_clear_nmi_flag_10 ; code used at c000
		JSR		sub_17443A	; code used at c000
		JMP		_pal_fade_in	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175B17:				; CODE XREF: sub_175AF7+5-p
		LDA		byte_87		; code used at c000
		BEQ		locret_175B38	; code used at c000
		LDA		#$FF		; code used at c000
		STA		byte_86		; code used at c000
		DEC		byte_87		; code used at c000
		LDA		byte_87		; code used at c000
		BNE		loc_175B27	; code used at c000
		STA		byte_86		; code used at c000
loc_175B27:				; CODE XREF: sub_175B17+C-j
		JSR		sub_175F08	; code used at c000
		LDX		byte_644	; code used at c000
		BEQ		loc_175B39	; code used as ind data	at c000
		DEX				; code used at c000
		BEQ		loc_175B58	; code used at c000
		DEX				; code used at c000
		BEQ		loc_175B49	; code used at c000
		DEX				; code used at c000
		BEQ		loc_175B67	; code used at c000
locret_175B38:				; CODE XREF: sub_175B17+2-j
					; sub_175B17+2A-j
		RTS				; code used at c000
loc_175B39:				; CODE XREF: sub_175B17+16-j
		DEC		byte_6D1	; code used at c000
		LDA		byte_6D1	; code used at c000
		CMP		#$FF		; code used at c000
		BNE		locret_175B38	; code used at c000
		LDA		#$EF       ; code used at c000
loc_175B45:				; CODE XREF: sub_175B17+3F-j
		STA		byte_6D1	; code used at c000
		RTS				; code used at c000
loc_175B49:				; CODE XREF: sub_175B17+1C-j
		INC		byte_6D1	; code used at c000
		LDA		byte_6D1	; code used at c000
		CMP		#$F0       ; code used at c000
		BEQ		loc_175B54	; code used at c000
		RTS				; code used at c000
loc_175B54:				; CODE XREF: sub_175B17+3A-j
		LDA		#0		; code used at c000
		BEQ		loc_175B45	; code used at c000
loc_175B58:				; CODE XREF: sub_175B17+19-j
		INC		byte_6D0	; code used at c000
		BEQ		loc_175B5E	; code used at c000
		RTS				; code used at c000
loc_175B5E:				; CODE XREF: sub_175B17+44-j
					; sub_175B17+58-j
		LDA		byte_6D3	; code used at c000
		EOR		#1		; code used at c000
		STA		byte_6D3	; code used at c000
		RTS				; code used at c000
loc_175B67:				; CODE XREF: sub_175B17+1F-j
		DEC		byte_6D0	; code used at c000
		LDA		byte_6D0	; code used at c000
		CMP		#$FF		; code used at c000
		BEQ		loc_175B5E	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175B72:				; CODE XREF: sub_83D08+17-P
					; sub_83E12+13-P sub_15A472+3F-P
		LDA		byte_2F		; code used as ind data	at c000
		AND		#1		; code used as ind data	at c000
		BEQ		loc_175BA7	; code used as ind data	at c000
		LDA		word_7C		; code used as ind data	at c000
		AND		#$E0       ; code used as ind data at c000
		TAX				; code used as ind data	at c000
		LDA		word_7C		; code used as ind data	at c000
		AND		#$1F		; code used as ind data	at c000
		CPX		byte_8C		; code used as ind data	at c000
		BEQ		loc_175BAB	; code used as ind data	at c000
		LDA		byte_9A		; code used as ind data	at c000
		CMP		#$19		; code used as ind data	at c000
		BCC		loc_175B9B	; code used as ind data	at c000
		LDA		word_7C		; code used as ind data	at c000
		AND		#$1F		; code used as ind data	at c000
		TAX				; code used at c000
		LDA		byte_6DE0,X	; code used at c000
		AND		#$F		; code used at c000
		TAY				; code used at c000
		TXA				; code used at c000
		CPY		#7		; code used at c000
		BEQ		loc_175BAB	; code used as ind data	at c000
loc_175B9B:				; CODE XREF: sub_175B72+17-j
		LDA		byte_8C		; code used as ind data	at c000
		BNE		loc_175BA3	; code used as ind data	at c000
		LDA		#$20       ; code used as ind data at c000
		BNE		loc_175BAB	; code used as ind data	at c000
loc_175BA3:				; CODE XREF: sub_175B72+2B-j
		LDA		#$21       ; code used as ind data at c000
		BNE		loc_175BAB	; code used as ind data	at c000
loc_175BA7:				; CODE XREF: sub_175B72+4-j
		LDA		word_7C		; code used as ind data	at c000
		BEQ		loc_175BB5	; code used as ind data	at c000
loc_175BAB:				; CODE XREF: sub_175B72+11-j
					; sub_175B72+27-j sub_175B72+2F-j
					; sub_175B72+33-j
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
loc_175BAD:				; CODE XREF: sub_175B72+4C-j
					; sub_175B72+52-j
		TAX				; code used as ind data	at c000
		LDY		word_4+1	; code used as ind data	at c000
		INC		word_4+1	; code used as ind data	at c000
		INC		word_4+1	; code used as ind data	at c000
		RTS				; code used as ind data	at c000
loc_175BB5:				; CODE XREF: sub_175B72+37-j
		LDA		#0		; code used at c000
		STA		_tmp12		; code used as ind data	at c000
		JSR		sub_175BC7	; code used as ind data	at c000
		LDA		_tmp12		; code used as ind data	at c000
		BEQ		loc_175BAD	; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ASL		; code used as ind data	at c000
		ADC		#$7C       ; code used as ind data at c000
		JMP		loc_175BAD	; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175BC7:				; CODE XREF: sub_175B72+47-p
		LDA		word_7C+1	; code used as ind data	at c000
		PHA				; code used as ind data	at c000
		LDA		byte_7B		; code used as ind data	at c000
		JSR		sub_175BE5	; code used as ind data	at c000
		LDX		byte_10		; code used as ind data	at c000
		LDY		byte_11		; code used as ind data	at c000
		INY				; code used as ind data	at c000
		JSR		sub_175BE0	; code used at c000
		PLA				; code used as ind data	at c000
		JSR		sub_175BE5	; code used as ind data	at c000
		LDX		byte_10		; code used as ind data	at c000
		LDY		byte_11		; code used as ind data	at c000
		DEY				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175BE0:				; CODE XREF: sub_175BC7+D-p
		JSR		sub_176C99	; code used as ind data	at c000
		LDA		word_7C		; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175BE5:				; CODE XREF: sub_175BC7+5-p
					; sub_175BC7+11-p sub_1760B1+7-p
					; sub_1760B1+D-p sub_1760B1+13-p
					; sub_1760B1+19-p sub_176238+7-p
					; sub_176238+D-p sub_176238+13-p
					; sub_176238+19-p
		CLC				; code used as ind data	at c000
		BEQ		loc_175C00	; code used as ind data	at c000
		CMP		#$1B		; code used as ind data	at c000
		CLC				; code used at c000
		BEQ		loc_175C00	; code used as ind data	at c000
		CMP		#$1F		; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		BEQ		loc_175C00	; code used as ind data	at c000
		CMP		#$17		; code used at c000
		CLC				; code used as ind data	at c000
		BEQ		loc_175C00	; code used as ind data	at c000
		CMP		#$2F       ; code used as ind data at c000
		BCC		loc_175BFF	; code used at c000
		CLC
		JMP		loc_175C00
loc_175BFF:				; CODE XREF: sub_175BE5+14-j
		SEC				; code used as ind data	at c000
loc_175C00:				; CODE XREF: sub_175BE5+1-j
					; sub_175BE5+6-j sub_175BE5+B-j
					; sub_175BE5+10-j sub_175BE5+17-j
		ROL		_tmp12		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175C03:				; CODE XREF: sub_83D08+1A-P
		JSR		sub_175C19	; code used as ind data	at c000
		JSR		sub_175C19	; code used as ind data	at c000
		DEX				; code used as ind data	at c000
		TXA				; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		LSR		; code used as ind data	at c000
		TAX				; code used as ind data	at c000
		LDA		byte_7300,X	; code used as ind data	at c000
		LDY		byte_85		; code used as ind data	at c000
		STA		byte_68F,Y	; code used as ind data	at c000
		INC		byte_85		; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175C19:				; CODE XREF: sub_175C03-p sub_175C03+3-p
		LDA		byte_7200,X	; code used as ind data	at c000
		STA		byte_647,Y	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		INY				; code used as ind data	at c000
		LDA		byte_7200,X	; code used as ind data	at c000
		STA		byte_647,Y	; code used as ind data	at c000
		INX				; code used as ind data	at c000
		TYA				; code used as ind data	at c000
		CLC				; code used as ind data	at c000
		ADC		#$23       ; code used as ind data at c000
		TAY				; code used as ind data	at c000
		RTS				; code used as ind data	at c000

; =============== S U B	R O U T	I N E =======================================
sub_175C2E:				; CODE XREF: sub_175F4B-j
		SEC				; code used at c000
		SBC		#4		; code used at c000
		EOR		#3		; code used at c000
		SEC				; code used at c000
		SBC		#1		; code used at c000
		ASL		; code used at c000
		STA		word_4		; code used at c000
		ASL		; code used at c000
		CLC				; code used at c000
		ADC		word_4		; code used at c000
		TAX				; code used at c000
		ASL		; code used at c000
		SEC				; code used at c000
		SBC		#2		; code used at c000
		BCS		loc_175C46	; code used at c000
		ADC		#$40       ; code used at c000
loc_175C46:				; CODE XREF: sub_175C2E+14-j
		STA		word_4		; code used at c000
		TXA				; code used at c000
		CMP		#6		; code used at c000
		BCC		loc_175C57	; code used at c000
		SEC				; code used at c000
		SBC		#6		; code used at c000
		CMP		#6		; code used at c000
		BCC		loc_175C57	; code used at c000
		SEC				; code used at c000
		SBC		#6		; code used at c000
loc_175C57:				; CODE XREF: sub_175C2E+1D-j
					; sub_175C2E+24-j
		CLC				; code used at c000
		ADC		byte_6D8	; code used at c000
		STA		byte_74		; code used at c000
		LDA		byte_644	; code used at c000
		BEQ		loc_175C64	; code used at c000
		LDA		#$1D		; code used at c000
loc_175C64:				; CODE XREF: sub_175C2E+32-j
		STA		word_4+1	; code used at c000
		LDY		#0		; code used at c000
		TXA				; code used at c000
		CLC				; code used at c000
		ADC		#$15		; code used at c000
		TAX				; code used at c000
loc_175C6D:				; CODE XREF: sub_175C2E+80-j
		TYA				; code used at c000
		PHA				; code used at c000
		TXA				; code used at c000
		PHA				; code used at c000
		LDA		byte_2F		; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_175C7D	; code used at c000
		JSR		sub_176084	; code used at c000
		JMP		loc_175C80	; code used at c000
loc_175C7D:				; CODE XREF: sub_175C2E+47-j
		LDA		byte_580,X	; code used at c000
loc_175C80:				; CODE XREF: sub_175C2E+4C-j
		TAX				; code used at c000
		LDA		byte_7300,X	; code used at c000
		STA		byte_A		; code used at c000
		JSR		sub_174690	; code used at c000
		LDX		byte_6D8	; code used at c000
		STA		byte_302,X	; code used at c000
		LDA		byte_20		; code used at c000
		STA		byte_300,X	; code used at c000
		LDA		byte_1F		; code used at c000
		STA		byte_301,X	; code used at c000
		INC		word_4		; code used at c000
		INC		word_4		; code used at c000
		INC		byte_6D8	; code used at c000
		INC		byte_6D8	; code used at c000
		INC		byte_6D8	; code used at c000
		PLA				; code used at c000
		TAX				; code used at c000
		INX				; code used at c000
		PLA				; code used at c000
		TAY				; code used at c000
		INY				; code used at c000
		CPY		#6		; code used at c000
		BNE		loc_175C6D	; code used at c000
		TYA				; code used at c000
		CLC				; code used at c000
		ADC		byte_6D9	; code used at c000
		STA		byte_6D9	; code used at c000
		LDA		#1		; code used at c000
		STA		byte_29		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175CBD:				; CODE XREF: sub_175CCB:loc_175D50-p
		LDX		byte_6D8	; code used at c000
		LDA		byte_20		; code used at c000
		STA		byte_300,X	; code used at c000
		LDA		byte_1F		; code used at c000
		STA		byte_301,X	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175CCB:				; CODE XREF: sub_175F4E-j
		SEC				; code used at c000
		SBC		#4		; code used at c000
		STA		word_4+1	; code used at c000
		PHA				; code used at c000
		LDA		#5		; code used at c000
		CLC				; code used at c000
		ADC		byte_6D9	; code used at c000
		STA		byte_6D9	; code used at c000
		PLA				; code used at c000
		ASL		; code used at c000
		ASL		; code used at c000
		CLC				; code used at c000
		ADC		word_4+1	; code used at c000
		TAX				; code used at c000
		ASL		; code used at c000
		STA		word_4+1	; code used at c000
		LDA		byte_644	; code used at c000
		LDY		#0		; code used at c000
		CMP		#3		; code used at c000
		BEQ		loc_175CEF	; code used at c000
		LDY		#$1F		; code used at c000
loc_175CEF:				; CODE XREF: sub_175CCB+20-j
		STY		word_4		; code used at c000
		LDY		#0		; code used at c000
		TXA				; code used at c000
		STA		byte_A		; code used at c000
		ASL		; code used at c000
		CLC				; code used at c000
		ADC		byte_A		; code used at c000
		ADC		#4		; code used at c000
		TAX				; code used at c000
loc_175CFD:				; CODE XREF: sub_175CCB+A3-j
		TYA				; code used at c000
		PHA				; code used at c000
		TXA				; code used at c000
		PHA				; code used at c000
		LDA		byte_2F		; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_175D0D	; code used at c000
		JSR		sub_176084	; code used at c000
		JMP		loc_175D10	; code used at c000
loc_175D0D:				; CODE XREF: sub_175CCB+3A-j
		LDA		byte_580,X	; code used at c000
loc_175D10:				; CODE XREF: sub_175CCB+3F-j
		TAX				; code used at c000
		LDA		byte_7300,X	; code used at c000
		STA		byte_A		; code used at c000
		JSR		sub_1746C8	; code used at c000
		LDA		byte_644	; code used at c000
		CMP		#3		; code used at c000
		BEQ		loc_175D2F	; code used at c000
		LDA		word_6		; code used at c000
		CLC				; code used at c000
		ADC		#2		; code used at c000
		CMP		#$40       ; code used at c000
		BCC		loc_175D39	; code used at c000
		SEC				; code used at c000
		SBC		#$40       ; code used at c000
		JMP		loc_175D39	; code used at c000
loc_175D2F:				; CODE XREF: sub_175CCB+53-j
		LDA		word_6		; code used at c000
		SEC				; code used at c000
		SBC		#2		; code used at c000
		BPL		loc_175D39	; code used at c000
		CLC				; code used at c000
		ADC		#$40       ; code used at c000
loc_175D39:				; CODE XREF: sub_175CCB+5C-j
					; sub_175CCB+61-j sub_175CCB+69-j
		STA		word_6		; code used at c000
		LDA		byte_8		; code used at c000
		JSR		sub_1746F4	; code used at c000
		JSR		sub_174693	; code used at c000
		PHA				; code used at c000
		LDA		word_4+1	; code used at c000
loc_175D46:				; CODE XREF: sub_175CCB+82-j
		CMP		#$A		; code used at c000
		BCC		loc_175D50	; code used at c000
		SEC				; code used at c000
		SBC		#$A		; code used at c000
		JMP		loc_175D46	; code used at c000
loc_175D50:				; CODE XREF: sub_175CCB+7D-j
		JSR		sub_175CBD	; code used at c000
		PLA				; code used at c000
		STA		byte_302,X	; code used at c000
		INC		word_4+1	; code used at c000
		INC		word_4+1	; code used at c000
		INC		byte_6D8	; code used at c000
		INC		byte_6D8	; code used at c000
		INC		byte_6D8	; code used at c000
		PLA				; code used at c000
		TAX				; code used at c000
		INX				; code used at c000
		INX				; code used at c000
		INX				; code used at c000
		PLA				; code used at c000
		TAY				; code used at c000
		INY				; code used at c000
		CPY		#5		; code used at c000
		BNE		loc_175CFD	; code used at c000
		LDA		#1		; code used at c000
		STA		byte_29		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175D75:				; CODE XREF: sub_175F48-j
		SEC				; code used at c000
		SBC		#9		; code used at c000
		JMP		loc_175D7E	; code used at c000
loc_175D7B:				; CODE XREF: sub_175F51+1C-j
		SEC				; code used at c000
		SBC		#1		; code used at c000
loc_175D7E:				; CODE XREF: sub_175D75+3-j
		LDY		#$F		; code used at c000
		STY		byte_F		; code used at c000
		STA		word_4+1	; code used at c000
		ASL		; code used at c000
		ASL		; code used at c000
		ASL		; code used at c000
		ASL		; code used at c000
		SEC				; code used at c000
		SBC		word_4+1	; code used at c000
		STA		word_4+1	; code used at c000
		STA		byte_E		; code used at c000
		LDX		#$1E		; code used at c000
		LDA		byte_644	; code used at c000
		CMP		#1		; code used at c000
		BEQ		loc_175D9A	; code used at c000
		LDX		#0		; code used at c000
loc_175D9A:				; CODE XREF: sub_175D75+21-j
		STX		word_4		; code used at c000
		JSR		sub_1742CF	; code used at c000
		JSR		sub_175DA5	; code used at c000
		JMP		sub_175DFE	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175DA5:				; CODE XREF: sub_175D75+2A-p
					; sub_175E62+64-p
		LDA		byte_644	; code used at c000
		CMP		#3		; code used at c000
		BEQ		loc_175DE0	; code used at c000
		LDA		byte_1F		; code used at c000
		AND		#$1F		; code used at c000
		CMP		#$1E		; code used at c000
		BCC		loc_175DD6	; code used at c000
		LDA		byte_20		; code used at c000
		CMP		#$24       ; code used at c000
		BCS		loc_175DCC	; code used at c000
		CLC				; code used at c000
		ADC		#4		; code used at c000
		STA		byte_20		; code used at c000
loc_175DBF:				; CODE XREF: sub_175DA5+2E-j
		LDA		#2		; code used at c000
		CLC				; code used at c000
		ADC		byte_1F		; code used at c000
		SEC				; code used at c000
		SBC		#$20       ; code used at c000
		STA		byte_1F		; code used at c000
		JMP		locret_175DFD	; code used at c000
loc_175DCC:				; CODE XREF: sub_175DA5+13-j
		SEC				; code used at c000
		SBC		#4		; code used at c000
		STA		byte_20		; code used at c000
		LDA		byte_1F		; code used at c000
		JMP		loc_175DBF	; code used at c000
loc_175DD6:				; CODE XREF: sub_175DA5+D-j
		LDA		#2		; code used at c000
		CLC				; code used at c000
		ADC		byte_1F		; code used at c000
		STA		byte_1F		; code used at c000
		JMP		locret_175DFD	; code used at c000
loc_175DE0:				; CODE XREF: sub_175DA5+5-j
		LDA		byte_1F		; code used at c000
		AND		#$1F		; code used at c000
		CMP		#2		; code used at c000
		BCS		loc_175DF6	; code used at c000
		LDA		byte_20		; code used at c000
		EOR		#4		; code used at c000
		STA		byte_20		; code used at c000
		LDA		byte_1F		; code used at c000
		CLC				; code used at c000
		ADC		#$1E		; code used at c000
		STA		byte_1F		; code used at c000
		RTS				; code used at c000
loc_175DF6:				; CODE XREF: sub_175DA5+41-j
		LDA		byte_1F		; code used at c000
		SEC				; code used at c000
		SBC		#2		; code used at c000
		STA		byte_1F		; code used at c000
locret_175DFD:				; CODE XREF: sub_175DA5+24-j
					; sub_175DA5+38-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175DFE:				; CODE XREF: sub_175D75+2D-j
		LDA		byte_20		; code used at c000
		AND		#$23       ; code used at c000
		CMP		#$23       ; code used at c000
		BCC		loc_175E1B	; code used at c000
		LDX		byte_1F		; code used at c000
		CPX		#$C0       ; code used at c000
		BCC		loc_175E1B	; code used at c000
		TXA
		SEC
		SBC		#$C0 
		STA		byte_1F
		LDA		byte_20
		AND		#$FC 
		STA		byte_20
		JMP		loc_175E3B
loc_175E1B:				; CODE XREF: sub_175DFE+6-j
					; sub_175DFE+C-j
		CMP		#$22       ; code used at c000
		BCC		loc_175E3B	; code used at c000
		BEQ		loc_175E25	; code used at c000
		LDA		#7		; code used at c000
		STA		byte_F		; code used at c000
loc_175E25:				; CODE XREF: sub_175DFE+21-j
		DEC		byte_F		; code used at c000
		LDA		byte_1F		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		LSR		; code used at c000
		STA		byte_B		; code used at c000
		LDA		byte_F		; code used at c000
		SEC				; code used at c000
		SBC		byte_B		; code used at c000
		STA		byte_F		; code used at c000
		LDA		#$FF		; code used at c000
		STA		byte_B		; code used at c000
loc_175E3B:				; CODE XREF: sub_175DFE+1A-j
					; sub_175DFE+1F-j
		JSR		sub_175E41	; code used at c000
		JMP		sub_175E62	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175E41:				; CODE XREF: sub_175DFE:loc_175E3B-p
					; sub_175E62+67-p
		LDA		byte_644	; code used at c000
		CMP		#3		; code used at c000
		BEQ		locret_175E61	; code used at c000
		LDA		byte_1F		; code used at c000
		TAX				; code used at c000
		AND		#$1F		; code used at c000
		CMP		#$1E		; code used at c000
		BCC		loc_175E5D	; code used at c000
		TXA				; code used at c000
		SEC				; code used at c000
		SBC		#$20       ; code used at c000
		STA		byte_1F		; code used at c000
		LDA		byte_20		; code used at c000
		EOR		#4		; code used at c000
		STA		byte_20		; code used at c000
loc_175E5D:				; CODE XREF: sub_175E41+E-j
		INC		byte_1F		; code used at c000
		INC		byte_1F		; code used at c000
locret_175E61:				; CODE XREF: sub_175E41+5-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175E62:				; CODE XREF: sub_175DFE+40-j
		INC		byte_6D9	; code used at c000
		LDX		byte_6D8	; code used at c000
		LDA		byte_20		; code used at c000
		ORA		#$C0       ; code used at c000
		STA		byte_29		; code used at c000
		STA		byte_300,X	; code used at c000
		LDA		byte_F		; code used at c000
		STA		byte_301,X	; code used at c000
		LDA		byte_1F		; code used at c000
		STA		byte_302,X	; code used at c000
		INC		byte_6D8	; code used at c000
		INC		byte_6D8	; code used at c000
		INC		byte_6D8	; code used at c000
		LDX		byte_87		; code used at c000
		LDA		byte_644	; code used at c000
		CMP		#1		; code used at c000
		BNE		loc_175E93	; code used at c000
		CPX		#8		; code used at c000
		BCS		loc_175E9E	; code used at c000
		BCC		loc_175E97	; code used at c000
loc_175E93:				; CODE XREF: sub_175E62+29-j
		CPX		#7		; code used at c000
		BCC		loc_175E9E	; code used at c000
loc_175E97:				; CODE XREF: sub_175E62+2F-j
		CLC				; code used at c000
		LDA		#$20       ; code used at c000
		ADC		byte_E		; code used at c000
		STA		byte_E		; code used at c000
loc_175E9E:				; CODE XREF: sub_175E62+2D-j
					; sub_175E62+33-j
		LDA		byte_F		; code used at c000
		STA		byte_10		; code used at c000
		LDY		byte_E		; code used at c000
		LDX		byte_6D8	; code used at c000
loc_175EA7:				; CODE XREF: sub_175E62+51-j
		LDA		byte_647,Y	; code used at c000
		STA		byte_300,X	; code used at c000
		INX				; code used at c000
		INY				; code used at c000
		INC		byte_E		; code used at c000
		DEC		byte_F		; code used at c000
		BNE		loc_175EA7	; code used at c000
		STX		byte_6D8	; code used at c000
		LDA		byte_B		; code used at c000
		BPL		locret_175F07	; code used at c000
		LDA		word_4+1	; code used at c000
		CLC				; code used at c000
		ADC		byte_10		; code used at c000
		STA		word_4+1	; code used at c000
		JSR		sub_1742CF	; code used at c000
		JSR		sub_175DA5	; code used at c000
		JSR		sub_175E41	; code used at c000
		INC		byte_6D9	; code used at c000
		LDX		byte_6D8	; code used at c000
		LDA		byte_20		; code used at c000
		ORA		#$C0       ; code used at c000
		STA		byte_300,X	; code used at c000
		INX				; code used at c000
		INC		byte_6D8	; code used at c000
		LDA		byte_10		; code used at c000
		LDA		#$F		; code used at c000
		SEC				; code used at c000
		SBC		byte_10		; code used at c000
		STA		byte_300,X	; code used at c000
		INX				; code used at c000
		INC		byte_6D8	; code used at c000
		STA		byte_F		; code used at c000
		LDA		byte_1F		; code used at c000
		STA		byte_300,X	; code used at c000
		INX				; code used at c000
		INC		byte_6D8	; code used at c000
		LDY		byte_E		; code used at c000
loc_175EF8:				; CODE XREF: sub_175E62+A0-j
		LDA		byte_647,Y	; code used at c000
		STA		byte_300,X	; code used at c000
		INX				; code used at c000
		INY				; code used at c000
		DEC		byte_F		; code used at c000
		BNE		loc_175EF8	; code used at c000
		STX		byte_6D8	; code used at c000
locret_175F07:				; CODE XREF: sub_175E62+58-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F08:				; CODE XREF: sub_175B17:loc_175B27-p
		LDA		byte_2F		; code used as ind data	at c000
		AND		#1		; code used at c000
		STA		byte_9		; code used at c000
		LDA		#0		; code used at c000
		STA		byte_B		; code used at c000
		LDA		byte_644	; code used as ind data	at c000
		AND		#1		; code used at c000
		BNE		sub_175F51	; code used at c000
		JMP		loc_175F70	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F1C:				; CODE XREF: sub_175F90+2E-p
					; sub_176198+D-p
		LDA		byte_9		; code used at c000
		BEQ		loc_175F23	; code used at c000
		LDA		byte_30		; code used at c000
		RTS				; code used at c000
loc_175F23:				; CODE XREF: sub_175F1C+2-j
		LDA		byte_2A		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F26:				; CODE XREF: sub_175F90+5-p
					; sub_175F90:loc_175FA0-p
					; sub_176198+30-p
		LDA		byte_9		; code used at c000
		BEQ		loc_175F2D	; code used at c000
		LDA		byte_31		; code used at c000
		RTS				; code used at c000
loc_175F2D:				; CODE XREF: sub_175F26+2-j
		LDA		byte_2B		; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F30:				; CODE XREF: sub_175F90:loc_175FEB-p
		LDA		byte_2F		; code used at c000
		AND		#1		; code used at c000
		BEQ		loc_175F39	; code used at c000
		JMP		sub_176F34	; code used at c000
loc_175F39:				; CODE XREF: sub_175F30+4-j
		JMP		sub_176D3F	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F3C:				; CODE XREF: sub_175F51+10-j
		JMP		sub_176198	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F3F:				; CODE XREF: sub_175F51+2D-j
		JMP		sub_176038	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F42:				; CODE XREF: sub_175F51+E-j
		JMP		sub_1761E8	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F45:				; CODE XREF: sub_175F51+33-j
		JMP		sub_1760D5	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F48:				; CODE XREF: sub_175F51+14-j
		JMP		sub_175D75	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F4B:				; CODE XREF: sub_175F51+39-j
		JMP		sub_175C2E	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F4E:				; CODE XREF: sub_175F51+1A-j
		JMP		sub_175CCB	; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F51:				; CODE XREF: sub_175F08+F-j
		LDA		byte_87		; code used at c000
		AND		#7		; code used at c000
		BEQ		locret_175F8F	; code used at c000
		CMP		#7		; code used at c000
		BEQ		locret_175F8F	; code used at c000
		LDA		byte_87		; code used at c000
		CMP		#$B		; code used at c000
		BEQ		sub_175F42	; code used at c000
		BCS		sub_175F3C	; code used at c000
		CMP		#9		; code used at c000
		BCS		sub_175F48	; code used at c000
		CMP		#3		; code used at c000
		BEQ		locret_175F8F	; code used at c000
		BCS		sub_175F4E	; code used at c000
		JMP		loc_175D7B	; code used at c000
loc_175F70:				; CODE XREF: sub_175F08+11-j
		LDA		byte_87		; code used at c000
		AND		#7		; code used at c000
		BEQ		locret_175F8F	; code used at c000
		CMP		#7		; code used at c000
		BEQ		locret_175F8F	; code used at c000
		LDA		byte_87		; code used at c000
		CMP		#$B		; code used at c000
		BEQ		sub_175F3F	; code used at c000
		BCS		sub_175F90	; code used at c000
		CMP		#9		; code used at c000
		BCS		sub_175F45	; code used at c000
		CMP		#3		; code used at c000
		BEQ		locret_175F8F	; code used at c000
		BCS		sub_175F4B	; code used at c000
		JMP		sub_1760DB	; code used at c000
locret_175F8F:				; CODE XREF: sub_175F51+4-j
					; sub_175F51+8-j sub_175F51+18-j
					; sub_175F51+23-j sub_175F51+27-j
					; sub_175F51+37-j
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175F90:				; CODE XREF: sub_175F51+2F-j
		LDA		byte_644	; code used at c000
		BNE		loc_175FA0	; code used at c000
		JSR		sub_175F26	; code used at c000
		SEC				; code used at c000
		SBC		#8		; code used at c000
		STA		byte_11		; code used at c000
		JMP		loc_175FA8	; code used at c000
loc_175FA0:				; CODE XREF: sub_175F90+3-j
		JSR		sub_175F26	; code used at c000
		CLC				; code used at c000
		ADC		#6		; code used at c000
		STA		byte_11		; code used at c000
loc_175FA8:				; CODE XREF: sub_175F90+D-j
		LDA		byte_87		; code used at c000
		SEC				; code used at c000
		SBC		#$C		; code used at c000
		ASL		; code used at c000
		STA		byte_10		; code used at c000
		ASL		; code used at c000
		CLC				; code used at c000
		ADC		byte_10		; code used at c000
		STA		word_4		; code used at c000
		PHA				; code used at c000
		INC		word_4		; code used at c000
		SEC				; code used at c000
		SBC		#8		; code used at c000
		STA		byte_10		; code used at c000
		JSR		sub_175F1C	; code used at c000
		CLC				; code used at c000
		ADC		byte_10		; code used at c000
		STA		byte_10		; code used at c000
		JSR		sub_175FF4	; code used at c000
		INC		byte_10		; code used at c000
		JSR		sub_176007	; code used at c000
		JSR		sub_175FF4	; code used at c000
		PLA				; code used at c000
		BNE		loc_175FE3	; code used at c000
		STA		word_4		; code used at c000
		LDX		byte_10		; code used at c000
		LDY		byte_11		; code used at c000
		DEY				; code used at c000
		DEX				; code used at c000
		DEX				; code used at c000
		DEX				; code used at c000
		DEX				; code used at c000
		DEX				; code used at c000
		JMP		loc_175FEB	; code used at c000
loc_175FE3:				; CODE XREF: sub_175F90+42-j
		JSR		sub_176007	; code used at c000
		LDX		byte_10		; code used at c000
		LDY		byte_11		; code used at c000
		INY				; code used at c000
loc_175FEB:				; CODE XREF: sub_175F90+50-j
		JSR		sub_175F30	; code used at c000
		LDX		word_4		; code used at c000
		STA		byte_594,X	; code used at c000
		RTS				; code used at c000

; =============== S U B	R O U T	I N E =======================================
sub_175FF4:				; CODE XREF: sub_175F90+36-p
					; sub_175F90+3E-p
		JSR		sub_17601F	; code used at c000
		INC		byte_11		; code used at c000
		JSR		sub_176017	; code used at c000
		JSR		sub_17601F	; code used at c000
		INC		byte_11		; code used as data at c000
		JSR		sub_176017	; code used at e000
		JMP		sub_17601F	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176007:				; CODE XREF: sub_175F90+3B-p
					; sub_175F90:loc_175FE3-p
		DEC		byte_11		; code used at e000
		DEC		byte_11		; code used at e000
		INC		byte_10		; code used at e000
		INC		byte_10		; code used at e000
		LDA		word_4		; code used at e000
		SEC				; code used at e000
		SBC		#$25       ; code used at e000
		STA		word_4		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176017:				; CODE XREF: sub_175FF4+5-p
					; sub_175FF4+D-p
		LDA		word_4		; code used at e000
		CLC				; code used at e000
		ADC		#$14		; code used at e000
		STA		word_4		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_17601F:				; CODE XREF: sub_175FF4-p sub_175FF4+8-p
					; sub_175FF4+10-j
					; sub_1761D9:loc_1761DC-p
		LDX		byte_10		; code used at e000
		LDY		byte_11		; code used at e000
		JSR		sub_176CB9	; code used at e000
		LDX		word_4		; code used at e000
		LDA		byte_7B		; code used at e000
		STA		byte_580,X	; code used at e000
		LDA		word_7C		; code used at e000
		STA		byte_581,X	; code used at e000
		LDA		word_7C+1	; code used at e000
		STA		byte_582,X	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176038:				; CODE XREF: sub_175F3F-j
		LDA		#$15		; code used at e000
		STA		word_4		; code used at e000
		LDA		#0		; code used at e000
		STA		word_4+1	; code used at e000
loc_176040:				; CODE XREF: sub_176038+15-j
		JSR		sub_176050	; code used at e000
		INC		word_4		; code used at e000
		INC		word_4+1	; code used at e000
		INC		word_4+1	; code used at e000
		LDA		word_4		; code used at e000
		CMP		#$27       ; code used at e000
		BNE		loc_176040	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176050:				; CODE XREF: sub_176038:loc_176040-p
		LDA		byte_9		; code used at e000
		BNE		loc_17607C	; code used at e000
		LDX		word_4		; code used at e000
		LDA		byte_580,X	; code used at e000
		BNE		loc_17605E	; code used at e000
		JSR		sub_1760B1	; code used at e000
loc_17605E:				; CODE XREF: sub_176050+9-j
					; sub_176050+31-j
		ASL		; code used at e000
		ASL		; code used at e000
		TAY				; code used at e000
		LDX		word_4+1	; code used at e000
		LDA		byte_7200,Y	; code used at e000
		STA		byte_647,X	; code used at e000
		LDA		byte_7201,Y	; code used at e000
		STA		byte_648,X	; code used at e000
		LDA		byte_7202,Y	; code used at e000
		STA		byte_66B,X	; code used at e000
		LDA		byte_7203,Y	; code used at e000
		STA		byte_66C,X	; code used at e000
		RTS				; code used at e000
loc_17607C:				; CODE XREF: sub_176050+2-j
		LDX		word_4		; code used at e000
		JSR		sub_176084	; code used at e000
		JMP		loc_17605E	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176084:				; CODE XREF: sub_175C2E+49-p
					; sub_175CCB+3C-p sub_176050+2E-p
					; sub_176204+6-p
		LDA		byte_580,X	; code used at e000
		TAX				; code used at e000
		AND		#$E0       ; code used at e000
		CMP		byte_8C		; code used at e000
		BNE		loc_176092	; code used at e000
		TXA				; code used at e000
		AND		#$1F		; code used at e000
		RTS				; code used at e000
loc_176092:				; CODE XREF: sub_176084+8-j
		LDA		byte_9A		; code used at e000
		CMP		#$19		; code used at e000
		BCC		loc_1760A8	; code used at e000
		TXA				; code used at e000
		AND		#$1F		; code used at e000
		TAX				; code used at e000
		LDA		byte_6DE0,X	; code used at e000
		AND		#$F		; code used at e000
		TAY				; code used at e000
		TXA				; code used at e000
		CPY		#7		; code used at e000
		BNE		loc_1760A8	; code used at e000
		RTS				; code used at e000
loc_1760A8:				; CODE XREF: sub_176084+12-j
					; sub_176084+21-j
		LDX		#$20       ; code used at e000
		LDA		byte_8C		; code used at e000
		BEQ		loc_1760AF	; code used at e000
		INX				; code used at e000
loc_1760AF:				; CODE XREF: sub_176084+28-j
		TXA				; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1760B1:				; CODE XREF: sub_176050+B-p
		LDA		#0		; code used at e000
		STA		_tmp12		; code used at e000
		LDA		byte_57F,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		byte_594,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		byte_581,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		byte_56C,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		_tmp12		; code used at e000
		BEQ		locret_1760D4	; code used at e000
		CLC				; code used at e000
		ADC		#$1F		; code used at e000
locret_1760D4:				; CODE XREF: sub_1760B1+1E-j
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1760D5:				; CODE XREF: sub_175F45-j
		SEC				; code used at e000
		SBC		#9		; code used at e000
		JMP		sub_1760DE	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1760DB:				; CODE XREF: sub_175F51+3B-j
		SEC				; code used at e000
		SBC		#1		; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1760DE:				; CODE XREF: sub_1760D5+3-j
		ASL		; code used at e000
		STA		word_4		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		CLC				; code used at e000
		ADC		word_4		; code used at e000
		STA		byte_E		; code used at e000
		SEC				; code used at e000
		SBC		#2		; code used at e000
		PHA				; code used at e000
		AND		#$1F		; code used at e000
		STA		word_4		; code used at e000
		LDA		byte_644	; code used at e000
		BEQ		loc_1760F8	; code used at e000
		LDA		#$1E		; code used at e000
loc_1760F8:				; CODE XREF: sub_1760DE+16-j
		STA		word_4+1	; code used at e000
		JSR		sub_1742CF	; code used at e000
		PLA				; code used at e000
		BPL		loc_176106	; code used at e000
		LDA		byte_20		; code used at e000
		EOR		#4		; code used at e000
		STA		byte_20		; code used at e000
loc_176106:				; CODE XREF: sub_1760DE+20-j
		LDX		#$12		; code used at e000
		LDA		byte_1F		; code used at e000
		AND		#$1F		; code used at e000
		CMP		#$10		; code used at e000
		BCC		loc_17611E	; code used at e000
		STA		byte_A		; code used at e000
		LDA		#$20       ; code used at e000
		SEC				; code used at e000
		SBC		byte_A		; code used at e000
		TAX				; code used at e000
		STA		byte_A		; code used at e000
		LDA		#$FF		; code used at e000
		STA		byte_B		; code used at e000
loc_17611E:				; CODE XREF: sub_1760DE+30-j
		STX		byte_F		; code used at e000
		INC		byte_6D9	; code used at e000
		LDX		byte_6D8	; code used at e000
		LDA		byte_20		; code used at e000
		ORA		#$80       ; code used at e000
		STA		byte_29		; code used at e000
		STA		byte_300,X	; code used at e000
		INX				; code used at e000
		LDA		byte_F		; code used at e000
		STA		byte_300,X	; code used at e000
		INX				; code used at e000
		LDA		byte_1F		; code used at e000
		STA		byte_300,X	; code used at e000
		INX				; code used at e000
		LDY		byte_87		; code used at e000
		LDA		byte_644	; code used at e000
		BNE		loc_176149	; code used at e000
		CPY		#7		; code used at e000
		BCC		loc_176154	; code used at e000
		BCS		loc_17614D	; code used at e000
loc_176149:				; CODE XREF: sub_1760DE+63-j
		CPY		#8		; code used at e000
		BCS		loc_176154	; code used at e000
loc_17614D:				; CODE XREF: sub_1760DE+69-j
		CLC				; code used at e000
		LDA		byte_E		; code used at e000
		ADC		#$24       ; code used at e000
		STA		byte_E		; code used at e000
loc_176154:				; CODE XREF: sub_1760DE+67-j
					; sub_1760DE+6D-j
		LDY		byte_E		; code used at e000
		JSR		sub_176188	; code used at e000
		LDA		byte_B		; code used at e000
		BPL		locret_176197	; code used at e000
		LDA		byte_1F		; code used at e000
		AND		#$1F		; code used at e000
		STA		word_4		; code used at e000
		LDA		byte_1F		; code used at e000
		SEC				; code used at e000
		SBC		word_4		; code used at e000
		STA		byte_1F		; code used at e000
		INC		byte_6D9	; code used at e000
		LDA		byte_20		; code used at e000
		EOR		#4		; code used at e000
		ORA		#$80       ; code used at e000
		STA		byte_300,X	; code used at e000
		INX				; code used at e000
		LDA		#$12		; code used at e000
		SEC				; code used at e000
		SBC		byte_A		; code used at e000
		STA		byte_300,X	; code used at e000
		STA		byte_F		; code used at e000
		INX				; code used at e000
		LDA		byte_1F		; code used at e000
		STA		byte_300,X	; code used at e000
		INX				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176188:				; CODE XREF: sub_1760DE+78-p
					; sub_176188+A-j
		LDA		byte_647,Y	; code used at e000
		STA		byte_300,X	; code used at e000
		INX				; code used at e000
		INY				; code used at e000
		DEC		byte_F		; code used at e000
		BNE		sub_176188	; code used at e000
		STX		byte_6D8	; code used at e000
locret_176197:				; CODE XREF: sub_1760DE+7D-j
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176198:				; CODE XREF: sub_175F3C-j
		LDX		#8		; code used at e000
		LDA		byte_644	; code used at e000
		CMP		#1		; code used at e000
		BEQ		loc_1761A3	; code used at e000
		LDX		#$F7       ; code used at e000
loc_1761A3:				; CODE XREF: sub_176198+7-j
		STX		byte_10		; code used at e000
		JSR		sub_175F1C	; code used at e000
		CLC				; code used at e000
		ADC		byte_10		; code used at e000
		STA		byte_10		; code used at e000
		LDA		byte_87		; code used at e000
		SEC				; code used at e000
		SBC		#$C		; code used at e000
		ASL		; code used at e000
		STA		word_4+1	; code used at e000
		ASL		; code used at e000
		STA		byte_11		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		CLC				; code used at e000
		ADC		word_4+1	; code used at e000
		STA		word_4		; code used at e000
		LDA		word_4+1	; code used at e000
		CLC				; code used at e000
		ADC		byte_11		; code used at e000
		SBC		#7		; code used at e000
		STA		byte_11		; code used at e000
		JSR		sub_175F26	; code used at e000
		CLC				; code used at e000
		ADC		byte_11		; code used at e000
		STA		byte_11		; code used at e000
		JSR		sub_1761D9	; code used at e000
		JSR		sub_1761D9	; code used at e000
		JMP		sub_1761D9	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1761D9:				; CODE XREF: sub_176198+38-p
					; sub_176198+3B-p
		JSR		loc_1761DC	; code used at e000
loc_1761DC:				; code used at e000
		JSR		sub_17601F
		INC		word_4		; code used at e000
		INC		word_4		; code used at e000
		INC		word_4		; code used at e000
		INC		byte_11		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1761E8:				; CODE XREF: sub_175F42-j
		LDA		#4		; code used at e000
		STA		word_4		; code used at e000
		LDA		#0		; code used at e000
		STA		word_4+1	; code used at e000
loc_1761F0:				; CODE XREF: sub_1761E8+19-j
		JSR		sub_176204	; code used at e000
		INC		word_4		; code used at e000
		INC		word_4		; code used at e000
		INC		word_4		; code used at e000
		INC		word_4+1	; code used at e000
		INC		word_4+1	; code used at e000
		LDA		word_4		; code used at e000
		CMP		#$31       ; code used at e000
		BNE		loc_1761F0	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176204:				; CODE XREF: sub_1761E8:loc_1761F0-p
		LDA		byte_9		; code used at e000
		BEQ		loc_176210	; code used at e000
		LDX		word_4		; code used at e000
		JSR		sub_176084	; code used at e000
		JMP		loc_17621A	; code used at e000
loc_176210:				; CODE XREF: sub_176204+2-j
		LDX		word_4		; code used at e000
		LDA		byte_580,X	; code used at e000
		BNE		loc_17621A	; code used at e000
		JSR		sub_176238	; code used at e000
loc_17621A:				; CODE XREF: sub_176204+9-j
					; sub_176204+11-j
		ASL		; code used at e000
		ASL		; code used at e000
		TAY				; code used at e000
		LDX		word_4+1	; code used at e000
		LDA		byte_7200,Y	; code used at e000
		STA		byte_647,X	; code used at e000
		LDA		byte_7201,Y	; code used at e000
		STA		byte_667,X	; code used at e000
		LDA		byte_7202,Y	; code used at e000
		STA		byte_648,X	; code used at e000
		LDA		byte_7203,Y	; code used at e000
		STA		byte_668,X	; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176238:				; CODE XREF: sub_176204+13-p
		LDA		#0		; code used at e000
		STA		_tmp12		; code used at e000
		LDA		byte_57F,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		byte_583,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		byte_581,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		byte_57D,X	; code used at e000
		JSR		sub_175BE5	; code used at e000
		LDA		_tmp12		; code used at e000
		BEQ		locret_17625B	; code used at e000
		CLC				; code used at e000
		ADC		#$1F		; code used at e000
locret_17625B:				; CODE XREF: sub_176238+1E-j
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
_mmc1_prg5_set_ppu_reset:		; CODE XREF: sub_176285+4-p
					; sub_176299+9-p sub_1762A8+8-p
					; sub_1762C9+B-p sub_176305+4-p
		LDA		#5		; code used as ind data	at e000
		JSR		_mmc1_prg_set	; code used at e000
		LDA		_PPU_STATUS	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176265:				; CODE XREF: sub_176285+E-p
					; sub_1762A8+15-p sub_176305+9-p
		LDA		byte_83438,X	; code used at e000
		STA		_PPU_ADDR	; code used at e000
		LDA		byte_83438+1,X	; code used at e000
		STA		_PPU_ADDR	; code used at e000
		LDA		#0		; code used at e000
		STA		word_60		; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176275:				; CODE XREF: sub_1762C9+24-p
		LDA		byte_83438+2,X	; code used at e000
		STA		byte_24		; code used at e000
		LDA		byte_83438+3,X	; code used at e000
		STA		_tmp21+2	; code used at e000
		LDA		byte_83438+4,X	; code used at e000
		STA		byte_56		; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176285:				; CODE XREF: _bE_s18+3-P sub_177D0A+A-p
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used at e000
		JSR		_mmc1_prg5_set_ppu_reset ; code	used at	e000
		LDX		#$FF		; code used at e000
		STX		_spr_ram	; code used at e000
		LDX		#5		; code used at e000
		JSR		sub_176265	; code used at e000
		JMP		loc_17646A	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176299:				; CODE XREF: _bE_s18+8-P _bE_s18+D-P
					; sub_177D0A+3F-p
		CLC				; code used as ind data	at e000
		ADC		#$F		; code used at e000
		STA		word_4A		; code used as ind data	at e000
		LDA		_mmc_cur_prg_bank ; code used as ind data at e000
		PHA				; code used at e000
		JSR		_mmc1_prg5_set_ppu_reset ; code	used at	e000
		JMP		loc_1762F4	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_1762A8:				; CODE XREF: _bC_s19+26-P
					; sub_15B920:loc_15B9B0-P
					; sub_15B920:loc_15B9E6-P
		STA		word_4A		; code used at e000
		STY		byte_4D		; code used at e000
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used at e000
		JSR		_mmc1_prg5_set_ppu_reset ; code	used at	e000
		LDA		byte_4D		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		CLC				; code used at e000
		ADC		byte_4D		; code used at e000
		ADC		#$A		; code used at e000
		TAX				; code used at e000
		JSR		sub_176265	; code used at e000
		JMP		loc_1762F4	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1762C3:				; CODE XREF: _bA_sF+28-P sub_15B920+87-P
					; sub_15B920+C0-P sub_174E52+161-p
		JSR		sub_1762C9	; code used at e000
		JMP		_vblank		; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1762C9:				; CODE XREF: sub_1762C3-p
		STA		word_4A		; code used at e000
		STY		byte_4D		; code used at e000
		JSR		_vblank		; code used at e000
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used at e000
		JSR		_mmc1_prg5_set_ppu_reset ; code	used at	e000
		LDA		byte_4D		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		CLC				; code used at e000
		ADC		byte_4D		; code used at e000
		ADC		#$A		; code used at e000
		TAX				; code used at e000
		LDA		byte_83438,X	; code used at e000
		ORA		#$80       ; code used at e000
		STA		byte_62		; code used at e000
		LDA		byte_83438+1,X	; code used at e000
		STA		word_60+1	; code used at e000
		JSR		sub_176275	; code used at e000
		LDA		#3		; code used at e000
		STA		word_60		; code used at e000
loc_1762F4:				; CODE XREF: sub_176299+C-j
					; sub_1762A8+18-j
		LDA		word_4A		; code used as ind data	at e000
		JSR		sub_176488	; code used as ind data	at e000
		JMP		loc_17646A	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_1762FC:				; CODE XREF: _b6_s6+6C-P _b7_s1E+16-P
					; sub_B3538+2B-P sub_174C62+9-p
					; sub_174CE2+3-p sub_1750D0+DE-p
					; sub_17522D+C2-p sub_1754B6+4-p
					; sub_176C41+1E-p
		JSR		_vblank_and_render_off_flag10_set ; code used at e000
		JSR		sub_176305	; code used at e000
		JMP		__render_on_flag10_clear_reinit	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176305:				; CODE XREF: sub_1762FC+3-p
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used at e000
		JSR		_mmc1_prg5_set_ppu_reset ; code	used at	e000
		LDX		#0		; code used at e000
		JSR		sub_176265	; code used at e000
		STX		byte_25		; code used at e000
		DEX				; code used at e000
		STX		_spr_ram	; code used at e000
		LDA		#9		; code used at e000
		STA		byte_55		; code used at e000
		LDA		byte_9A		; code used at e000
		BEQ		loc_176326	; code used at e000
		CMP		#9		; code used at e000
		BCC		loc_176335	; code used at e000
		SEC				; code used at e000
		SBC		#8		; code used at e000
loc_176326:				; CODE XREF: sub_176305+18-j
		ASL		; code used at e000
		ASL		; code used at e000
		CLC				; code used at e000
		ADC		#$12		; code used at e000
		LDX		#$20       ; code used at e000
		STX		byte_54		; code used at e000
		JSR		loc_1764FE	; code used at e000
		JMP		loc_17634B	; code used at e000
loc_176335:				; CODE XREF: sub_176305+1C-j
		ASL		; code used at e000
		PHA				; code used at e000
		JSR		loc_1764FA	; code used at e000
		LDA		#0		; code used at e000
		JSR		loc_1764FA	; code used at e000
		PLA				; code used at e000
		TAX				; code used at e000
		INX				; code used at e000
		TXA				; code used at e000
		JSR		loc_1764FA	; code used at e000
		LDA		#1		; code used at e000
		JSR		loc_1764FA	; code used at e000
loc_17634B:				; CODE XREF: sub_176305+2D-j
		LDA		byte_9A		; code used at e000
		BEQ		loc_176395	; code used at e000
		CMP		#9		; code used at e000
		BCC		loc_17636A	; code used at e000
		CMP		#$B		; code used at e000
		BEQ		loc_17636A	; code used at e000
		BCC		loc_176388	; code used at e000
		CMP		#$19		; code used at e000
		BCC		loc_176366	; code used at e000
		LDA		#$3C       ; code used at e000
		JSR		loc_1764ED	; code used at e000
		LDA		#$3C       ; code used at e000
		BNE		loc_17638F	; code used at e000
loc_176366:				; CODE XREF: sub_176305+56-j
					; sub_176305+76-j
		LDA		#$30       ; code used at e000
		BNE		loc_17638A	; code used at e000
loc_17636A:				; CODE XREF: sub_176305+4C-j
					; sub_176305+50-j
		LDA		byte_8B		; code used at e000
		LDX		#3		; code used at e000
loc_17636E:				; CODE XREF: sub_176305+6F-j
		CMP		byte_834B0,X	; code used at e000
		BEQ		loc_176384	; code used at e000
		DEX				; code used at e000
		BPL		loc_17636E	; code used at e000
		LDX		#7		; code used at e000
loc_176378:				; CODE XREF: sub_176305+79-j
		CMP		byte_834B4,X	; code used at e000
		BEQ		loc_176366	; code used at e000
		DEX				; code used at e000
		BPL		loc_176378	; code used at e000
		LDA		#$33       ; code used at e000
		BNE		loc_17638A	; code used at e000
loc_176384:				; CODE XREF: sub_176305+6C-j
		LDA		#$36 
		BNE		loc_17638A
loc_176388:				; CODE XREF: sub_176305+52-j
		LDA		#$39 
loc_17638A:				; CODE XREF: sub_176305+63-j
					; sub_176305+7D-j sub_176305+81-j
		JSR		loc_1764ED	; code used at e000
		LDA		#$30       ; code used at e000
loc_17638F:				; CODE XREF: sub_176305+5F-j
		JSR		loc_1764ED	; code used at e000
		JMP		loc_1763C9	; code used at e000
loc_176395:				; CODE XREF: sub_176305+48-j
		LDX		#0		; code used at e000
loc_176397:				; CODE XREF: sub_176305+9B-j
		LDA		byte_82D74,X	; code used at e000
		STA		byte_7280,X	; code used at e000
		INX				; code used at e000
		CPX		#$5C       ; code used at e000
		BCC		loc_176397	; code used at e000
		LDX		#0		; code used at e000
		LDA		#0		; code used at e000
loc_1763A6:				; CODE XREF: sub_176305+A7-j
		STA		byte_7320,X	; code used at e000
		INX				; code used as ind data	at e000
		CPX		#$17		; code used at e000
		BCC		loc_1763A6	; code used at e000
		LDA		#9		; code used at e000
		JSR		_mmc1_prg_set	; code used at e000
		LDA		#<[_chr_terrain_bg_data0]
		STA		_tmp21
		LDA		#>[_chr_terrain_bg_data0] ;	code used at e000
		STA		_tmp21+1	; code used at e000
		LDA		#<[_chr_terrain_bg_data1] ; code used at e000
		STA		_tmp21+2	; code used at e000
		LDA		#>[_chr_terrain_bg_data1] ;	code used at e000
		STA		byte_24		; code used at e000
		JSR		sub_1741E4	; code used at e000
		JMP		loc_17646A	; code used at e000
loc_1763C9:				; CODE XREF: sub_176305+8D-j
		LDA		byte_8B		; code used at e000
		LDX		#0		; code used at e000
		CMP		#8		; code used at e000
		BEQ		loc_1763F4	; code used at e000
		LDX		#$15		; code used at e000
		CMP		#$58       ; code used at e000
		BEQ		loc_1763F4	; code used at e000
		INX				; code used at e000
		CMP		#$5B       ; code used at e000
		BEQ		loc_1763F4	; code used at e000
		INX				; code used at e000
		CMP		#$85       ; code used at e000
		BEQ		loc_1763F4	; code used at e000
		CMP		#$2D       ; code used at e000
		BCC		loc_17641F	; code used at e000
		CMP		#$41       ; code used at e000
		BCC		loc_1763F0	; code used at e000
		CMP		#$9F       ; code used at e000
		BCC		loc_17641F	; code used at e000
		SEC				; code used at e000
		SBC		#$5B       ; code used at e000
loc_1763F0:				; CODE XREF: sub_176305+E2-j
		SEC				; code used at e000
		SBC		#$2C       ; code used at e000
		TAX				; code used at e000
loc_1763F4:				; CODE XREF: sub_176305+CA-j
					; sub_176305+D0-j sub_176305+D5-j
					; sub_176305+DA-j
		LDA		byte_83594,X	; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		TAX				; code used at e000
		LDY		#0		; code used at e000
		LDA		#8		; code used at e000
		STA		word_4A+1	; code used at e000
loc_176401:				; CODE XREF: sub_176305+118-j
		LDA		#4		; code used at e000
		STA		byte_4D		; code used at e000
		LDA		byte_834DC,X	; code used at e000
		STA		word_4A		; code used at e000
loc_17640A:				; CODE XREF: sub_176305+113-j
		LDA		#0		; code used as ind data	at e000
		ASL		word_4A		; code used as ind data	at e000
		ROL		; code used as ind data	at e000
		ASL		word_4A		; code used as ind data	at e000
		ROL		; code used as ind data	at e000
		STA		byte_7300,Y	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		DEC		byte_4D		; code used at e000
		BNE		loc_17640A	; code used at e000
		INX				; code used at e000
		DEC		word_4A+1	; code used at e000
		BNE		loc_176401	; code used as ind data	at e000
loc_17641F:				; CODE XREF: sub_176305+DE-j
					; sub_176305+E6-j
		LDA		byte_8B		; code used at e000
		LDX		#0		; code used at e000
loc_176423:				; CODE XREF: sub_176305+129-j
		CMP		byte_82D30,X	; code used at e000
		BEQ		loc_176432	; code used at e000
		INX				; code used at e000
		INX				; code used at e000
		INX				; code used as ind data	at e000
		INX				; code used at e000
		CPX		#$44       ; code used as ind data at e000
		BCC		loc_176423	; code used as ind data	at e000
		BCS		loc_17646A	; code used at e000
loc_176432:				; CODE XREF: sub_176305+121-j
		LDA		byte_82D30+1,X	; code used at e000
		STA		word_4A		; code used at e000
		LDA		byte_82D30+2,X	; code used at e000
		STA		word_4A+1	; code used at e000
		LDA		byte_82D30+3,X	; code used at e000
		STA		byte_4D		; code used at e000
		LDX		word_4A		; code used at e000
		LDY		word_4A+1	; code used at e000
		LDA		byte_4D		; code used at e000
		STA		byte_6DE0,Y	; code used at e000
		LDA		byte_7300,X	; code used at e000
		STA		byte_7300,Y	; code used at e000
		LDA		word_4A		; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		TAX				; code used at e000
		LDA		word_4A+1	; code used at e000
		ASL		; code used at e000
		ASL		; code used at e000
		TAY				; code used at e000
		LDA		#4		; code used at e000
		STA		byte_4D		; code used at e000
loc_17645E:				; CODE XREF: sub_176305+163-j
		LDA		byte_7200,X	; code used at e000
		STA		byte_7200,Y	; code used at e000
		INX				; code used at e000
		INY				; code used at e000
		DEC		byte_4D		; code used at e000
		BNE		loc_17645E	; code used at e000
loc_17646A:				; CODE XREF: sub_176285+11-j
					; sub_1762C9+30-j sub_176305+C1-j
					; sub_176305+12B-j
		PLA				; code used as ind data	at e000
		JMP		_mmc1_prg_set	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_17646E:				; CODE XREF: sub_176488+4-p
					; sub_1764E3:loc_1764FE-p
		STA		_tmp21		; code used as ind data	at e000
		LDX		#0		; code used at e000
		STX		_tmp21+1	; code used at e000
		LDX		#_tmp21		; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		JSR		_add8_to_16	; code used as ind data	at e000
		TYA				; code used at e000
		JSR		_add8_to_16	; code used at e000
		LDX		#3		; code used as ind data	at e000
loc_176480:				; CODE XREF: sub_17646E+17-j
		ASL		_tmp21		; code used as ind data	at e000
		ROL		_tmp21+1	; code used as ind data	at e000
		DEX				; code used at e000
		BNE		loc_176480	; code used as ind data	at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_176488:				; CODE XREF: sub_1762C9+2D-p
		STA		byte_25		; code used at e000
		AND		#$3F       ; code used at e000
		JSR		sub_17646E	; code used at e000
		LDA		#4		; code used at e000
		STA		byte_54		; code used at e000
		ASL		; code used at e000
		STA		byte_55		; code used as ind data	at e000
		LDA		off_82DD0	; code used at e000
		LDY		off_82DD0+1	; code used at e000
		LDX		#_tmp21		; code used at e000
		JSR		_add_16_to_16	; code used at e000
		LDA		byte_25		; code used at e000
		LDX		#0		; code used as ind data	at e000
		STX		word_5E+1	; code used at e000
		AND		#$80       ; code used at e000
		BEQ		loc_1764AD	; code used at e000
		LDX		#8		; code used at e000
loc_1764AD:				; CODE XREF: sub_176488+21-j
		STX		byte_25		; code used at e000
loc_1764AF:				; CODE XREF: sub_176488+58-j
		LDX		byte_25		; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		LDA		byte_834BC,X	; code used as ind data	at e000
		BPL		loc_1764B9	; code used as ind data	at e000
		DEY				; code used at e000
loc_1764B9:				; CODE XREF: sub_176488+2E-j
		INC		byte_25		; code used at e000
		LDX		#_tmp21		; code used as ind data	at e000
		JSR		_add_16_to_16	; code used at e000
		JSR		sub_1764E3	; code used as ind data	at e000
		LDA		byte_25		; code used as ind data	at e000
		CMP		#8		; code used at e000
		BCC		loc_1764CC	; code used at e000
		JSR		sub_1764E3	; code used at e000
loc_1764CC:				; CODE XREF: sub_176488+3F-j
		LDA		#3		; code used as ind data	at e000
		LDX		#_tmp21		; code used as ind data	at e000
		JSR		_add8_to_16	; code used at e000
		LDA		byte_25		; code used as ind data	at e000
		CMP		#8		; code used at e000
		BCS		loc_1764DC	; code used at e000
		JSR		sub_1764E3	; code used as ind data	at e000
loc_1764DC:				; CODE XREF: sub_176488+4F-j
		INC		byte_25		; code used as ind data	at e000
		DEC		byte_54		; code used as ind data	at e000
		BNE		loc_1764AF	; code used as ind data	at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_1764E3:				; CODE XREF: sub_176488+38-p
					; sub_176488+41-p sub_176488+51-p
		LDX		byte_25		; code used as ind data	at e000
		LDA		byte_834BC,X	; code used as ind data	at e000
		STA		word_4A		; code used as ind data	at e000
		JMP		loc_176531	; code used as ind data	at e000
loc_1764ED:				; CODE XREF: sub_176305+5A-p
					; sub_176305:loc_17638A-p
					; sub_176305:loc_17638F-p
		LDX		#1		; code used at e000
		STX		byte_54		; code used at e000
		STA		_tmp21		; code used at e000
		LDA		#9		; code used at e000
		STA		_tmp21+1	; code used at e000
		JMP		loc_176501	; code used at e000
loc_1764FA:				; CODE XREF: sub_176305+32-p
					; sub_176305+37-p sub_176305+3E-p
					; sub_176305+43-p
		LDX		#8		; code used at e000
		STX		byte_54		; code used at e000
loc_1764FE:				; CODE XREF: sub_176305+2A-p
		JSR		sub_17646E	; code used at e000
loc_176501:				; CODE XREF: sub_1764E3+14-j
		LDA		off_823EF	; code used at e000
		LDY		off_823EF+1	; code used at e000
		LDX		#_tmp21		; code used at e000
		JSR		_add_16_to_16	; code used at e000
loc_17650C:				; CODE XREF: sub_1764E3+47-j
		JSR		loc_17652D	; code used as ind data	at e000
		LDX		byte_25		; code used as ind data	at e000
		LDA		byte_4F		; code used as ind data	at e000
		STA		byte_7300,X	; code used as ind data	at e000
		LDA		byte_51		; code used as ind data	at e000
		CPX		#$20       ; code used as ind data at e000
		BCS		loc_17651F	; code used as ind data	at e000
		STA		byte_6DE0,X	; code used as ind data	at e000
loc_17651F:				; CODE XREF: sub_1764E3+37-j
		INC		byte_25		; code used as ind data	at e000
		LDA		#3		; code used as ind data	at e000
		LDX		#_tmp21		; code used as ind data	at e000
		JSR		_add8_to_16	; code used as ind data	at e000
		DEC		byte_54		; code used as ind data	at e000
		BNE		loc_17650C	; code used as ind data	at e000
		RTS				; code used at e000
loc_17652D:				; CODE XREF: sub_1764E3:loc_17650C-p
		LDA		#0		; code used as ind data	at e000
		STA		word_4A		; code used as ind data	at e000
loc_176531:				; CODE XREF: sub_1764E3+7-j
		LDY		#0		; code used as ind data	at e000
loc_176533:				; CODE XREF: sub_1764E3+58-j
		LDA		(_tmp21),Y	; code used as ind data	at e000
		STA		byte_4F,Y	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		CPY		#3		; code used as ind data	at e000
		BCC		loc_176533	; code used as ind data	at e000
		LDA		byte_4F		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		CMP		#$F		; code used as ind data	at e000
		BEQ		loc_17658E	; code used as ind data	at e000
		LDX		byte_55		; code used as ind data	at e000
		CPX		#9		; code used as ind data	at e000
		BEQ		loc_176550	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		#$F		; code used as ind data	at e000
loc_176550:				; CODE XREF: sub_1764E3+68-j
		STA		byte_52		; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		CLC				; code used at e000
		ADC		byte_52		; code used as ind data	at e000
		STA		byte_52		; code used as ind data	at e000
		LDA		byte_4F		; code used as ind data	at e000
		AND		#3		; code used as ind data	at e000
		ORA		word_4A		; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		LDX		#0		; code used as ind data	at e000
loc_176561:				; CODE XREF: sub_1764E3+9D-j
		STX		byte_4D		; code used as ind data	at e000
		LDA		byte_50		; code used as ind data	at e000
		STA		word_4,X	; code used as ind data	at e000
		STY		word_4+1,X	; code used as ind data	at e000
		LDX		byte_52		; code used as ind data	at e000
		LDA		byte_83456,X	; code used as ind data	at e000
		BPL		loc_176585	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		byte_50		; code used as ind data	at e000
		BCS		loc_176576	; code used as ind data	at e000
		DEY				; code used at e000
loc_176576:				; CODE XREF: sub_1764E3+90-j
					; sub_1764E3:loc_17658B-j
		STA		byte_50		; code used as ind data	at e000
		LDX		byte_4D		; code used as ind data	at e000
		INC		byte_52		; code used as ind data	at e000
		INX				; code used as ind data	at e000
		INX				; code used as ind data	at e000
		CPX		#8		; code used as ind data	at e000
		BCC		loc_176561	; code used as ind data	at e000
		JMP		loc_1765CA	; code used as ind data	at e000
loc_176585:				; CODE XREF: sub_1764E3+8B-j
		CLC				; code used as ind data	at e000
		ADC		byte_50		; code used as ind data	at e000
		BCC		loc_17658B	; code used as ind data	at e000
		INY				; code used at e000
loc_17658B:				; CODE XREF: sub_1764E3+A5-j
		JMP		loc_176576	; code used as ind data	at e000
loc_17658E:				; CODE XREF: sub_1764E3+62-j
		LDA		byte_50		; code used at e000
		STA		byte_42		; code used at e000
		LDY		#0		; code used at e000
		STY		byte_43		; code used at e000
		ASL		byte_42		; code used at e000
		ASL		byte_42		; code used at e000
		ROL		byte_43		; code used at e000
		LDX		#byte_42	; code used at e000
		JSR		_add8_to_16	; code used at e000
		LDA		off_82DD2	; code used at e000
		LDY		off_82DD2+1	; code used at e000
		JSR		_add_16_to_16	; code used at e000
		LDY		#0		; code used at e000
		LDA		(byte_42),Y	; code used at e000
		STA		byte_52		; code used at e000
		LDX		#0		; code used at e000
		INY				; code used at e000
loc_1765B3:				; CODE XREF: sub_1764E3+E5-j
		LDA		(byte_42),Y	; code used at e000
		STA		word_4,X	; code used at e000
		LDA		byte_52		; code used at e000
		AND		#3		; code used at e000
		ORA		word_4A		; code used at e000
		STA		word_4+1,X	; code used at e000
		LSR		byte_52		; code used at e000
		LSR		byte_52		; code used at e000
		INX				; code used as ind data	at e000
		INX				; code used as ind data	at e000
		INY				; code used at e000
		CPX		#8		; code used at e000
		BCC		loc_1765B3	; code used at e000
loc_1765CA:				; CODE XREF: sub_1764E3+9F-j
		LDY		#0		; code used as ind data	at e000
loc_1765CC:				; CODE XREF: sub_1764E3+113-j
		LDX		word_4A		; code used as ind data	at e000
		LDA		byte_834CC,X	; code used as ind data	at e000
		TAX				; code used as ind data	at e000
		LDA		word_4,X	; code used as ind data	at e000
		STA		byte_57,Y	; code used as ind data	at e000
		LDA		word_4+1,X	; code used as ind data	at e000
		STA		byte_58,Y	; code used as ind data	at e000
		TYA				; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		LDA		byte_51		; code used as ind data	at e000
		CPX		#0		; code used as ind data	at e000
		BEQ		loc_1765E9	; code used as ind data	at e000
loc_1765E5:				; CODE XREF: sub_1764E3+104-j
		ASL		; code used as ind data	at e000
		DEX				; code used as ind data	at e000
		BNE		loc_1765E5	; code used as ind data	at e000
loc_1765E9:				; CODE XREF: sub_1764E3+100-j
		AND		#$C0       ; code used as ind data at e000
		STA		byte_44,Y	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		TYA				; code used as ind data	at e000
		ASL		; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		INC		word_4A		; code used as ind data	at e000
		CPY		#8		; code used as ind data	at e000
		BCC		loc_1765CC	; code used as ind data	at e000
		LDA		byte_4F		; code used as ind data	at e000
		ROR		; code used as ind data	at e000
		ROR		; code used as ind data	at e000
		AND		#3		; code used as ind data	at e000
		STA		byte_4F		; code used as ind data	at e000
		LDX		#0		; code used as ind data	at e000
		STX		byte_52		; code used as ind data	at e000
loc_176604:				; CODE XREF: sub_1764E3+15F-j
		STX		byte_53		; code used as ind data	at e000
		JSR		sub_176678	; code used as ind data	at e000
		CLC				; code used as ind data	at e000
		ADC		byte_56		; code used as ind data	at e000
		LDY		byte_52		; code used as ind data	at e000
		STA		(_tmp21+2),Y	; code used as ind data	at e000
		LDA		byte_55		; code used as ind data	at e000
		CMP		#8		; code used as ind data	at e000
		BNE		loc_176632	; code used as ind data	at e000
		LDA		byte_53		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		TAX				; code used as ind data	at e000
		LDA		byte_44,X	; code used as ind data	at e000
		LDX		word_4A		; code used as ind data	at e000
		CPX		#8		; code used as ind data	at e000
		BEQ		loc_176626	; code used as ind data	at e000
		CPX		#$C		; code used as ind data	at e000
		BNE		loc_17662B	; code used as ind data	at e000
loc_176626:				; CODE XREF: sub_1764E3+13D-j
		ASL		; code used at e000
		BCC		loc_17662B	; code used at e000
		ORA		#$40 
loc_17662B:				; CODE XREF: sub_1764E3+141-j
					; sub_1764E3+144-j
		ORA		byte_4F		; code used as ind data	at e000
		INY				; code used as ind data	at e000
		STA		(_tmp21+2),Y	; code used as ind data	at e000
		INC		byte_52		; code used as ind data	at e000
loc_176632:				; CODE XREF: sub_1764E3+131-j
		INC		byte_52		; code used as ind data	at e000
		LDX		byte_53		; code used as ind data	at e000
		LDA		byte_59,X	; code used as ind data	at e000
		STA		byte_57		; code used as ind data	at e000
		INX				; code used as ind data	at e000
		LDA		byte_59,X	; code used as ind data	at e000
		STA		byte_58		; code used as ind data	at e000
		INX				; code used as ind data	at e000
		CPX		#8		; code used as ind data	at e000
		BCC		loc_176604	; code used as ind data	at e000
		LDA		byte_55		; code used as ind data	at e000
		CMP		#8		; code used as ind data	at e000
		BEQ		loc_17664C	; code used as ind data	at e000
		LDA		#4		; code used as ind data	at e000
loc_17664C:				; CODE XREF: sub_1764E3+165-j
		LDX		#_tmp21+2	; code used as ind data	at e000
		JSR		_add8_to_16	; code used as ind data	at e000
		LDA		word_60		; code used as ind data	at e000
		BNE		loc_176656	; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_176656:				; CODE XREF: sub_1764E3+170-j
		LDA		#3		; code used at e000
		STA		word_60		; code used at e000
		LDA		byte_62		; code used at e000
		STA		byte_300	; code used at e000
		LDA		word_60+1	; code used at e000
		STA		byte_302	; code used at e000
		LDA		#$40       ; code used at e000
		STA		byte_301	; code used at e000
		LDA		#1		; code used at e000
		STA		byte_6D9	; code used at e000
		JSR		sub_1742B0	; code used at e000
		LDA		#$40       ; code used at e000
		LDX		#word_60+1	; code used at e000
		JMP		_add8_to_16	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176678:				; CODE XREF: sub_1764E3+123-p
		LDA		byte_56		; code used as ind data	at e000
		BMI		loc_176691	; code used as ind data	at e000
		LDA		byte_57		; code used as ind data	at e000
		STA		byte_4D		; code used as ind data	at e000
		LDA		byte_58		; code used as ind data	at e000
		AND		#3		; code used as ind data	at e000
		ORA		#8		; code used as ind data	at e000
		STA		byte_4E		; code used as ind data	at e000
		LDX		word_5E+1	; code used as ind data	at e000
		INC		word_5E+1	; code used at e000
		INC		word_5E+1	; code used as ind data	at e000
		JMP		loc_1766C1	; code used as ind data	at e000
loc_176691:				; CODE XREF: sub_176678+2-j
		LDX		#0		; code used as ind data	at e000
loc_176693:				; CODE XREF: sub_176678+2D-j
		LDA		_spr_ram,X	; code used as ind data	at e000
		BMI		loc_1766AA	; code used as ind data	at e000
		CMP		byte_58		; code used as ind data	at e000
		BNE		loc_1766A3	; code used as ind data	at e000
		LDA		_spr_ram+1,X	; code used as ind data	at e000
		CMP		byte_57		; code used as ind data	at e000
		BEQ		loc_1766A7	; code used as ind data	at e000
loc_1766A3:				; CODE XREF: sub_176678+22-j
		INX				; code used as ind data	at e000
		INX				; code used as ind data	at e000
		BNE		loc_176693	; code used as ind data	at e000
loc_1766A7:				; CODE XREF: sub_176678+29-j
		TXA				; code used as ind data	at e000
loc_1766A8:				; CODE XREF: sub_176678+67-j
		LSR		; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_1766AA:				; CODE XREF: sub_176678+1E-j
		LDA		byte_58		; code used as ind data	at e000
		STA		_spr_ram,X	; code used as ind data	at e000
		AND		#3		; code used as ind data	at e000
		ORA		#8		; code used as ind data	at e000
		STA		byte_4E		; code used as ind data	at e000
		LDA		byte_57		; code used as ind data	at e000
		STA		_spr_ram+1,X	; code used as ind data	at e000
		STA		byte_4D		; code used as ind data	at e000
		LDA		#$FF		; code used as ind data	at e000
		STA		_spr_ram+2,X	; code used as ind data	at e000
loc_1766C1:				; CODE XREF: sub_176678+16-j
		TXA				; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		LDA		byte_55		; code used as ind data	at e000
		JSR		_mmc1_prg_set	; code used as ind data	at e000
		LDY		#4		; code used as ind data	at e000
loc_1766CA:				; CODE XREF: sub_176678+57-j
		ASL		byte_4D		; code used as ind data	at e000
		ROL		byte_4E		; code used as ind data	at e000
		DEY				; code used as ind data	at e000
		BNE		loc_1766CA	; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		JSR		sub_1766E2	; code used as ind data	at e000
		JSR		sub_1766E2	; code used as ind data	at e000
		LDA		#5		; code used as ind data	at e000
		JSR		_mmc1_prg_set	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		JMP		loc_1766A8	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_1766E2:				; CODE XREF: sub_176678+5B-p
					; sub_176678+5E-p
		LDX		#0		; code used as ind data	at e000
loc_1766E4:				; CODE XREF: sub_1766E2+A-j
		LDA		(byte_4D),Y	; code used as ind data	at e000
		STA		word_4,X	; code used as ind data	at e000
		INY				; code used as ind data	at e000
		INX				; code used as ind data	at e000
		CPX		#8		; code used as ind data	at e000
		BCC		loc_1766E4	; code used as ind data	at e000
		LDX		#0		; code used as ind data	at e000
		LDA		byte_58		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		CMP		#1		; code used as ind data	at e000
		BCC		loc_176715	; code used as ind data	at e000
		BEQ		loc_176712	; code used at e000
		CMP		#2		; code used at e000
		BEQ		loc_17670C	; code used at e000
		JSR		sub_17412F	; code used at e000
		LDX		#0		; code used at e000
loc_176703:				; CODE XREF: sub_1766E2+28-j
		LDA		byte_C,X	; code used as ind data	at e000
		STA		word_4,X	; code used at e000
		INX				; code used at e000
		CPX		#8		; code used at e000
		BCC		loc_176703	; code used at e000
loc_17670C:				; CODE XREF: sub_1766E2+1A-j
		JSR		sub_17412F	; code used at e000
		JMP		loc_176715	; code used at e000
loc_176712:				; CODE XREF: sub_1766E2+16-j
		JSR		sub_174103	; code used at e000
loc_176715:				; CODE XREF: sub_1766E2+14-j
					; sub_1766E2+2D-j
		LDA		word_60		; code used as ind data	at e000
		BNE		loc_176725	; code used as ind data	at e000
loc_176719:				; CODE XREF: sub_1766E2+40-j
		LDA		word_4,X	; code used as ind data	at e000
		STA		_PPU_DATA	; code used as ind data	at e000
		INX				; code used as ind data	at e000
		TXA				; code used as ind data	at e000
		AND		#7		; code used as ind data	at e000
		BNE		loc_176719	; code used as ind data	at e000
		RTS				; code used as ind data	at e000
loc_176725:				; CODE XREF: sub_1766E2+35-j
		TYA				; code used at e000
		PHA				; code used at e000
		LDY		word_60		; code used at e000
loc_176729:				; CODE XREF: sub_1766E2+51-j
		LDA		word_4,X	; code used at e000
		STA		byte_300,Y	; code used at e000
		INX				; code used at e000
		INY				; code used at e000
		TXA				; code used at e000
		AND		#7		; code used at e000
		BNE		loc_176729	; code used at e000
		STY		word_60		; code used at e000
		PLA				; code used at e000
		TAY				; code used at e000
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_17673A:				; CODE XREF: _b7_s8+25-P
		BRK
		.BYTE $5F, $17		; ofs 0x00080016, -> dst _b5_sB_ppu_font_load
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_17673E:				; CODE XREF: sub_174A59-j
		LDX		#0		; code used at e000
		AND		#$F		; code used at e000
		TAY				; code used at e000
		DEY				; code used at e000
		DEY				; code used at e000
loc_176745:				; CODE XREF: sub_17673E+59-j
		LDA		word_1767B0,Y	; code used at e000
		STA		_PPU_ADDR	; code used at e000
		INY				; code used at e000
		LDA		word_1767B0,Y	; code used at e000
		STA		_PPU_ADDR	; code used at e000
		INY				; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		STX		_PPU_DATA	; code used at e000
		CPY		#$10		; code used at e000
		BNE		loc_176745	; code used at e000
		LDA		#$3F       ; code used at e000
		STA		_PPU_ADDR	; code used at e000
		STX		_PPU_ADDR	; code used at e000
		LDA		_ram_pal_buf	; code used at e000
		STA		_PPU_DATA	; code used at e000
		STX		_PPU_ADDR	; code used at e000
		STX		_PPU_ADDR	; code used at e000
		STX		byte_28		; code used at e000
		RTS				; code used at e000
word_1767B0:
		.WORD $6522		; DATA XREF: sub_17673E:loc_176745-r
					; sub_17673E+E-r
					; data used at e000
		.WORD $8522		; data used at e000
		.WORD $A522		; data used at e000
		.WORD $C522		; data used at e000
		.WORD $E522		; data used at e000
		.WORD $523		; data used at e000
		.WORD $2523		; data used at e000
		.WORD $4523		; data used at e000
_syscall_lib:
		.WORD _syscall00_safe	; DATA XREF: _syscalls+7-r _syscalls+C-r
					; data used at e000
		.WORD _syscall01_safe	; data used at e000
		.WORD _msg_m00_b3	; data used at e000
		.WORD _msg_m00_b4	; data used at e000
		.WORD _msg_m00_b3_break	; data used at e000
		.WORD _msg_m00_b4_break
		.WORD _msg_m00_arg0	; data used at e000
		.WORD _msg_m00_arg1	; data used at e000
		.WORD _msg_m00_arg2	; data used at e000
		.WORD _msg_m00_break_arg0
		.WORD _msg_m00_break_arg1
		.WORD _msg_m00_break_arg2
		.WORD _msg_m00_arg8
		.WORD _syscall0D	; data used at e000
		.WORD _syscall0E	; data used at e000
		.WORD _syscall0F	; data used at e000
		.WORD _syscall10	; data used at e000
		.WORD _msg_m00_arg7
		.WORD _syscall12	; data used at e000
		.WORD _msg_m00_arg6	; data used at e000

; =============== S U B	R O U T	I N E =======================================
_RESET:					; CODE XREF: _mmc1_stub00+4-J
					; sub_177F8E-j RESET+4-j
		SEI				; code used at e000
		CLD				; code used at e000
		LDX		#0		; code used at e000
		STX		_PPU_CTRL	; code used at e000
		STX		_PPU_MASK	; code used at e000
		INX				; code used at e000
loc_1767F3:				; CODE XREF: _RESET+E-j	_RESET+16-j
		BIT		_PPU_STATUS	; code used at e000
		BPL		loc_1767F3	; code used at e000
loc_1767F8:				; CODE XREF: _RESET+13-j
		BIT		_PPU_STATUS	; code used at e000
		BMI		loc_1767F8	; code used at e000
		DEX				; code used at e000
		BPL		loc_1767F3	; code used at e000
		TXS				; code used at e000
		LDA		#8		; code used at e000
		STA		_PPU_CTRL	; code used at e000
		LDA		#0		; code used at e000
		STA		_PPU_MASK	; code used at e000
		INX				; code used at e000
		LDA		#$E		; code used at e000
		STA		_cur_mmc_cmd	; code used at e000
		LDA		#$10		; code used at e000
		STA		_cur_chr0_bank_prg_hi ;	code used at e000
		JSR		_mmc1_chr_set	; code used at e000
		LDA		#1		; code used at e000
		JSR		_mmc1_prg_set	; code used at e000
		LDA		#0		; code used at e000
		STA		_APU_STATUS	; code used at e000
		STA		byte_6A3D	; code used at e000
		BRK
		.BYTE $9F, 7		; ofs 0x00020004, -> dst _b1_s2
		LDA		_PPU_STATUS	; code used at e000
		LDA		#$10		; code used at e000
		STA		_PPU_ADDR	; code used at e000
		LDA		#0		; code used at e000
		STA		_PPU_ADDR	; code used at e000
		STA		byte_6A58	; code used at e000
		LDX		#$10		; code used at e000
loc_17683B:				; CODE XREF: _RESET+57-j
		STA		_PPU_DATA	; code used at e000
		DEX				; code used at e000
		BNE		loc_17683B	; code used at e000
		BRK
		.BYTE $63, $17		; ofs 0x000080ca, -> dst _b0_s65
		JSR		sub_174000	; code used at e000
		LDA		#$F		; code used at e000
		LDX		#$19		; code used at e000
loc_17684B:				; CODE XREF: _RESET+67-j
		STA		_ram_pal_buf,X	; code used at e000
		DEX				; code used at e000
		BPL		loc_17684B	; code used at e000
		LDA		#$18		; code used at e000
		STA		byte_6D4	; code used at e000
		STA		_PPU_MASK	; code used at e000
		LDA		#$90       ; code used at e000
		STA		byte_6D3	; code used at e000
		STA		_PPU_CTRL	; code used at e000
		JMP		sub_174BB3	; code used at e000

; =============== S U B	R O U T	I N E =======================================
; byte name
; 00   routine idx
; 01   cmd
;      bbbaAAAA
;      case 1 AAAA == 7
;      case 2 AAAA == F, bbba <	4, bbba	== F
;	 abbb -	syscall	index
;	 idx  -	table value index
;      case 2 AAAA == F, bbba >= 4 && bba <= E
;	 abbb -	bank address
;	 idx  -	routine	index
_far_call:				; CODE XREF: NMI+7B-j
					; DATA XREF: BANKF:off_177FFE-o
		SEI				; code used as ind data	at e000
		BIT		_APU_STATUS	; code used as ind data	at e000
		STA		_irq_a_saved	; code used as ind data	at e000
		STX		_irq_x_saved	; code used as ind data	at e000
		STY		_irq_y_saved	; code used as ind data	at e000
		TSX				; code used as ind data	at e000
		LDA		$102,X		; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		SBC		#1		; code used as ind data	at e000
		STA		_tmp21		; code used as ind data	at e000
		LDA		$103,X		; code used as ind data	at e000
		SBC		#0		; code used as ind data	at e000
		STA		_tmp21+1	; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
		LDA		(_tmp21),Y	; code used as ind data	at e000
		TAX				; code used as ind data	at e000
		INY				; code used as ind data	at e000
		LDA		(_tmp21),Y	; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		AND		#$F		; code used as ind data	at e000
		CMP		#$F		; code used as ind data	at e000
		BNE		_syscalls	; code used as ind data	at e000
		PLA				; code used at e000
		PHA				; code used as ind data	at e000
		AND		#$F0       ; code used at e000
		CMP		#$40       ; code used as ind data at e000
		BCC		loc_176899	; code used as ind data	at e000
		CMP		#$F0       ; code used as ind data at e000
		BCC		_direct_calls	; code used at e000
loc_176899:				; CODE XREF: _far_call+2F-j
		PLA				; code used at e000
		PHA				; code used at e000
		AND		#$F		; code used at e000
		CMP		#$F		; code used at e000

; =============== S U B	R O U T	I N E =======================================
_syscalls:				; CODE XREF: _far_call+27-j
		PLA				; code used as ind data	at e000
		AND		#$F0       ; code used as ind data at e000
		ROR		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		LSR		; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		LDA		_syscall_lib,Y	; code used as ind data	at e000
		STA		_tmp21		; code used as ind data	at e000
		LDA		_syscall_lib+1,Y ; code	used as	ind data at e000
		STA		_tmp21+1	; code used as ind data	at e000
		TXA				; code used as ind data	at e000
		TAY				; code used as ind data	at e000
		LDX		_irq_x_saved	; code used as ind data	at e000
		LDA		_irq_a_saved	; code used as ind data	at e000
		PLP				; code used as ind data	at e000
		JMP		(_tmp21)	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
; banks	14 - 1E, direct	calls
_direct_calls:				; CODE XREF: _far_call+33-j
		PLA				; code used as ind data	at e000
		SEC				; code used as ind data	at e000
		ROR		; code used as ind data	at e000
		LSR		; code used at e000
		LSR		; code used at e000
		LSR		; code used at e000
		STA		_tmp21		; code used as ind data	at e000
		STX		_tmp21+1	; code used as ind data	at e000
		PLP				; code used at e000
		LDX		_irq_x_saved	; code used at e000
		LDA		_irq_a_saved	; code used at e000
		STA		_irq_a_saved	; code used at e000
		STX		_irq_x_saved	; code used at e000
		LDA		_mmc_cur_prg_bank ; code used as ind data at e000
		PHA				; code used as ind data	at e000
		LDA		_tmp21+2	; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		PHP				; code used as ind data	at e000
		LDA		_tmp21		; code used as ind data	at e000
		JSR		_mmc1_prg_set	; code used as ind data	at e000
		LDA		_tmp21+1	; code used as ind data	at e000
		ASL		; code used at e000
		TAX				; code used at e000
		LDA		off_8000,X	; code used as ind data	at e000
		STA		_tmp21+1	; code used as ind data	at e000
		LDA		off_8000+1,X	; code used at e000
		STA		_tmp21+2	; code used at e000
		LDA		#$4C       ; code used as ind data at e000
		STA		_tmp21		; code used at e000
		LDX		_irq_x_saved	; code used at e000
		LDY		_irq_y_saved	; code used as ind data	at e000
		LDA		_irq_a_saved	; code used at e000
		PLP				; code used at e000
		JSR		_tmp21		; code used at e000
		PHP				; code used at e000
		STA		_irq_a_saved	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		STA		_tmp21		; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		STA		_tmp21+2	; code used as ind data	at e000
		PLA				; code used as ind data	at e000
		JSR		_mmc1_prg_set	; code used at e000
		LDA		_tmp21		; code used as ind data	at e000
		PHA				; code used at e000
		LDA		_irq_a_saved	; code used at e000
		PLP				; code used at e000
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
sub_17690A:				; CODE XREF: _npc_hndl47+6B-P
		PHA				; code used at e000
		LDA		_cur_chr0_bank_prg_hi ;	code used at e000
		AND		#$EF       ; code used at e000
		STA		_cur_chr0_bank_prg_hi ;	code used at e000
		PLA				; code used at e000
		JMP		loc_177FAC	; code used at e000
_get_syscall0_sub_table_banks:
		.BYTE $EE,$EE,$EE,$EE,$EE,$DD,$DD,$DD,$AD,$55,$55,$CC,$87,$AA,$E6,$7E
					; DATA XREF: _get_syscall0_bank_ptr+C-r
					; _get_syscall0_bank_ptr+19-r
					; _get_syscall0_bank_ptr_no_prg_change+13-r
					; _get_syscall0_bank_ptr_no_prg_change+20-r
		.BYTE $EE,$50,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	data used at e000
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	6,$C2
		.BYTE $22,$22,$22,$20,	2,  4,$44,$44,$44,$44,$44,$44,$42,  0,$46,$66
		.BYTE $6A,$CC,$CC,$AE,$66,$66,$AA,  0,	1,  7,$77,$7C,$A5,$7C, $C,$11
		.BYTE $11,$1D,$21,$E4,$E0, $E,$EE,$EE,$44,  4,$44,$AA,$CC,$CC,$C6,$CE
		.BYTE $EE,$EE,$66,$66,$CC,$C2,	0,$CC,$44,$44,$44,$44,$11,$11,$1D,$60
		.BYTE	0,$C6, $A,$EE,$EE,$2E,	4,$44,$15,$5C,$EC,$7C,$CE,$CC,$AD,$CD
_get_syscall1_sub_table_banks:
		.BYTE $CC,$DD,$C6,$DE,  0, $A,$7D,$DC,  0,$66,$11,$11,$1E,$EE,$EC,$EE
					; DATA XREF: _get_syscall1_bank_ptr+C-r
					; _get_syscall1_bank_ptr+19-r
		.BYTE $EE, $C,$EE,$CD,$D0, $C, $D, $D,	4,$DD,$DD,$DD,$DC,$CC,$D5,$D1 ;	data used at e000
		.BYTE $4C,$6C,$D0, $C,$C0,$CC,	0,  0,$EE,$E6,$40,$5C,$DC,$CC,$44,$C5
		.BYTE $A6,$70,	7,$77,$77,$77,$7C,$67,$CC,$C0,$5A,$AC,$A5,$D0,$7D,$76
		.BYTE $46,$DD,$D6,$26,$66,$CD,$DD,$CA,$D6,$CE,$67,$6A,$20,$6A,$A4,$44
		.BYTE $44,$AA,$AA,$A7,$AA,$FF
_get_syscall0_sub_idx:
		.BYTE   0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  2,  3,  4,  5,  6,  7
					; DATA XREF: _get_syscall0_bank_ptr-r
					; _get_syscall0_bank_ptr_no_prg_change+7-r
		.BYTE	1,  9,	7,  4,	0,  1,$1D,$1F,	0,  8,	0,  1, $A,  4,	0, $B ;	data used at e000
		.BYTE  $C, $D,	2,  2,	3,  4,	5,  6,	7,  8,	9, $A, $B, $C, $D, $E
		.BYTE  $F,$10,$11,$12,$13,$14,$15,$16,$17,$18,$19,$1A,$1B,$1C,$1D,$1E
		.BYTE $1F,$20,$21,$22,$23,$24,$25,$26,$27,$28,$29,$2A,$2B,$2C,$2D,$2E
		.BYTE $2F,$30,$31,$32,$33,$34,$35,$36,$37,$38,$39,$3A,$3B,  5,	2,  0
		.BYTE	1,  2,	3,  4,	5,  6,	7,  0,$3C, $A,$43,  0,	1,  2,	3,  4
		.BYTE	5,  6,	7,  8,	9, $A, $B, $C, $D, $B,$3D,$3E, $F,  0,	1,  2
		.BYTE	3,  2,	3,  4,	5,  6,	3,$1E,	8,  9, $A, $B, $C, $D,$40,$41
		.BYTE $42, $F,$44,  1,	3,  4,	2,  0,	6,  3,	5,  9,$45, $A,	1,  2
		.BYTE	3,  4,	5,$27, $C,  7,$10, $E, $E,$46,$47,$1D,$19,$1A,$20,$21
		.BYTE $10,$12,$3F,$13,$14,$15,$14,$15, $D, $E, $F,$10,$11,$1F,$13,$22
		.BYTE $23,$24,$25,$26, $C, $D, $E, $F,$14,$15,$16,  9,$4C,$4D,$17,$18
		.BYTE $16,$17,$18,$19,$1A,$1B,$1C,$1D,	9, $A, $B, $C, $D, $D,$10,$58
		.BYTE $59,$5A,$2D,$11,$5B, $A,$2E,$2F,$30,$31,	8,$32,$5D,$1E,$1F,$20
		.BYTE $10,  9, $A,$1C,$33,$1E,$1B,$21,$22,$1B,$38,$25,	5,$19,$2C,  1
_get_syscall1_sub_idx:
		.BYTE $2A,$12,$12,$13,$29,$17, $E,$2B,$5E,$5F,$60,$12,$1C,$14,$15,$26
					; DATA XREF: _get_syscall1_bank_ptr-r
		.BYTE $48,$49,	6,  7,$14,$15,$16,$17,$13,$12,$13,$14,$15,$31,$16,$17 ;	data used at e000
		.BYTE $1C, $F,$61,$32,$10,$34,$33,$16,$17,$5C,$62,$37,$4D,$26,$64,$28
		.BYTE $63,$21,$18,$19,$1A,$1B,$1C,$1D,$1E,$24,$39,$3A,$1F,  8,$21, $E
		.BYTE $22,$3B,$12,$19,$22,$4E,$4F,$27,$28,$50,$2F,$30,$51,$52,	1,$53
		.BYTE $36,$18,$38,$13,$23,$54,	5,  1, $A,$34,$35,$1A,$24,$25,$1B, $B
		.BYTE  $F,$14, $A,$65,$66, $D, $E, $F,$10,$11,$12,$13,$14, $C,$15,$15
		.BYTE $2E,$20, $B,$55,	6,$10,$11,$36,	8,  8,$29,$56,$19, $B,$1A,$18
		.BYTE $26,$19, $F, $C,$10,$16, $D,$1D,$1C,$1B,$26,$11,$23,$24,$2B,  9
		.BYTE $20,$16,$23,$11,$1A,$1D,$1E, $B, $E,$67,$20,  2,	3,$27,$28,$29
		.BYTE $2A,$2B,	4,  5,	6,  7, $E,$1E,$16,$17,$FF

; =============== S U B	R O U T	I N E =======================================
_get_msg_ptr_by_idx:			; CODE XREF: _get_msg_ptr+6F-J
		TAY				; code used as ind data	at e000
		LDA		_mmc_cur_prg_bank ; code used at e000
		PHA				; code used as ind data	at e000
		LDA		#$A		; code used at e000
		JSR		_mmc1_prg_set	; code used as ind data	at e000
		TYA				; code used as ind data	at e000
		JSR		_get_text_block_ptr ; code used	as ind data at e000
		PHA				; code used as ind data	at e000
		LDA		word_7C		; code used at e000
		JSR		_mmc1_prg_set	; code used as ind data	at e000
		NOP				; code used as ind data	at e000
		NOP				; code used as ind data	at e000
		NOP				; code used at e000
		NOP				; code used at e000
		PLA				; code used as ind data	at e000
		TAX				; code used at e000
		BEQ		loc_176BCF	; code used as ind data	at e000
		LDY		#0		; code used as ind data	at e000
loc_176BB6:				; CODE XREF: _get_msg_ptr_by_idx+30-j
					; _get_msg_ptr_by_idx+35-j
		LDA		(word_72),Y	; code used as ind data	at e000
		INC		word_72		; code used as ind data	at e000
		BNE		loc_176BBE	; code used as ind data	at e000
		INC		word_72+1	; code used as ind data	at e000
loc_176BBE:				; CODE XREF: _get_msg_ptr_by_idx+22-j
		CMP		#$FF		; code used as ind data	at e000
		BEQ		loc_176BCA	; code used as ind data	at e000
		CMP		#$EF       ; code used as ind data at e000
		BEQ		loc_176BCA	; code used as ind data	at e000
		CMP		#$EE       ; code used as ind data at e000
		BNE		loc_176BB6	; code used as ind data	at e000
loc_176BCA:				; CODE XREF: _get_msg_ptr_by_idx+28-j
					; _get_msg_ptr_by_idx+2C-j
		DEX				; code used as ind data	at e000
		BEQ		loc_176BCF	; code used as ind data	at e000
		BNE		loc_176BB6	; code used as ind data	at e000
loc_176BCF:				; CODE XREF: _get_msg_ptr_by_idx+1A-j
					; _get_msg_ptr_by_idx+33-j
		PLA				; code used as ind data	at e000
		JMP		_mmc1_prg_set	; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
_syscall0D:				; CODE XREF: _b0_s5B+5-P sub_A3FB+E-P
					; _b0_s5D+7-P _b0_s5D+F-P _b0_s5D+2A-P
					; sub_ACB4-P sub_AEF1+2E-P sub_9B9FC-P
					; sub_9B9FC+13-P sub_9BA90+7-P
					; sub_9BB0B+3-P	sub_9BB26+54-P
					; sub_9BB26+61-P sub_9BB26+89-P
					; sub_9BB26+8F-P sub_9BB26+92-P
					; sub_9BB26+9C-P sub_9BB26+9F-P
					; sub_9BE69:loc_9BE8A-P	sub_129874+2E-P
					; sub_129874+3C-P sub_141FC8+1A-P
					; sub_141FF1+12-P sub_142135+15-P
					; sub_142135+1E-P sub_142135+EB-P
					; sub_142135+102-P sub_142135+10B-P
					; sub_1422E1+25-P sub_1422E1+6F-P
					; sub_1422E1+CF-P sub_1423CC+12-P
					; sub_1423CC+3F-P sub_1423CC+69-P
					; sub_14246C+F-P sub_142486+3A-P
					; sub_142504+3-P sub_142589-P
					; sub_142589+62-P sub_142589+E5-P
					; sub_142589:loc_14268D-P
					; sub_142589+16B-P sub_1427A8-P
					; sub_142923+3-P sub_142923+1A-P
					; sub_142923:loc_14295D-P
					; sub_142923+71-P sub_142923+AF-P
					; sub_142923+EA-P sub_142923+166-P
					; sub_142923+18B-P sub_142923+1BF-P
					; sub_142923+214-P sub_142923+262-P
					; sub_142BF0-P sub_142CBB+11-P
					; sub_142CBB:loc_142CD8-P sub_142CE7+3-P
					; sub_142CE7+44-P sub_142E69+17-P
					; sub_142E69+41-P sub_142E69+47-P
					; sub_142E69+4A-P _bD_sF+29-P
					; _bD_sF:loc_142F1B-P _bD_sF+50-P
					; _bD_sC+AF-P sub_15819F+D-P
					; sub_158377:loc_158385-P
					; sub_158377+1D-P sub_158377+26-P
					; sub_158377+29-P sub_158377+32-P
					; sub_158377+35-P sub_1583D0+14-P
					; sub_1583D0:loc_1583EA-P
					; sub_1583D0+23-P sub_158409+5-P
					; sub_158409:loc_158417-P
					; sub_158409:loc_15843C-P
					; sub_158409:loc_15846E-P
					; sub_158409:loc_15849B-P
					; sub_158409:loc_1584C8-P sub_158516+1-P
					; sub_15851F+26-P
					; sub_15851F:loc_158550-P
					; sub_15858D:loc_1585A5-P _bE_s1C+3-P
					; sub_174DF2-P
					; DATA XREF: BANKF:E7DA-o
		TYA				; ind code used	at e000
		BRK
		.BYTE $20, 7		; ofs 0x00158018, -> dst _bE_sC
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
_syscall0E:				; CODE XREF: _b1_sD+13E-P sub_68931+2F-P
					; sub_B2961+6-P
					; _begin_new_quest:loc_B298D-P
					; _begin_new_quest+23-P
					; _begin_new_quest+34-P	sub_B2A83+10-P
					; sub_B2A83+13-P sub_B2C66+4B-P
					; _bD_sC+B-P
					; DATA XREF: BANKF:E7DC-o
		TYA				; ind code used	at e000
		BRK
		.BYTE 0, 7		; ofs 0x00158000, -> dst _bE_s0
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_arg0:				; CODE XREF: sub_AC8A+12-P sub_ADE0+F-P
					; sub_AE12:loc_AE62-P sub_AEE4-P
					; sub_AF5B+C-P sub_AF5B+17-P
					; sub_B143+1E-P	sub_B2C66+4E-P
					; _bC_s1D+55-P _bC_s1D+9B-P
					; _bC_s1D+255-P	sub_129874:loc_12989F-P
					; sub_129874+39-P sub_129874+6B-P
					; sub_12B1A2:loc_12B1F9-P sub_15811B+6-P
					; sub_15851F+38-P
					; sub_15B288:loc_15B2D0-P
					; DATA XREF: BANKF:E7CC-o
		LDX		#0		; ind code used	at e000
		BEQ		_far_bE_s4_msg_m00 ; code used at e000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_arg1:				; CODE XREF: sub_8261+1E-P
					; sub_8261:loc_8285-P _b0_s5B+8-P
					; _b0_s5D+150-P	sub_AC7D+7-P
					; sub_AD31+2B-P	sub_AD31:loc_AD62-P
					; sub_AD31+41-P	sub_AD31+44-P
					; sub_AD31+6D-P	sub_AD31+75-P
					; sub_ADF4+16-P	sub_AE6C+C-P
					; sub_AE92:loc_AEB0-P sub_AEF1+28-P
					; sub_AEF1+34-P	sub_AEF1:loc_AF32-P
					; sub_AEF1:loc_AF38-P sub_AF7F-P
					; sub_AF7F+B-P sub_AF7F+E-P sub_AF92-P
					; sub_B026+3C-P	sub_B143:loc_B166-P
					; _b5_s5-P _b5_s5+26-P _b6_s12+1B-P
					; sub_9BE62+3-P	_b6_s1F:loc_9BF6D-P
					; _b7_s19+11-P _b7_s19:loc_B2785-P
					; _b7_s1A+1A-P _b7_s1A+1D-P _b7_s1A+20-P
					; _bA_sF+12-P _bA_sF+18-P _bA_sF+39-P
					; _bA_s10+15-P _bA_s11+19-P _bA_s11+1C-P
					; _bA_s11+1F-P sub_1280A6+7D-P
					; sub_1280A6+85-P
					; sub_1280A6:loc_128139-P
					; sub_1280A6+D9-P sub_1280A6+EE-P
					; sub_1280A6+105-P sub_1280A6+15B-P
					; sub_1280A6+182-P sub_1280A6+194-P
					; sub_1280A6+1A3-P sub_1280A6+1DE-P
					; sub_1280A6+1ED-P sub_1280A6+205-P
					; sub_1283C3+49-P sub_12908F+1E-P
					; sub_12908F+2F-P sub_12908F+37-P
					; sub_12908F:loc_1290CC-P
					; sub_1290E1+17-P sub_1290E1+2E-P
					; sub_129120+17-P sub_129162+79-P
					; _bC_s11+13-P _bC_s11:loc_129232-P
					; sub_129446:loc_1294A0-P sub_129610-P
					; sub_129616-P _bC_s1D:loc_129647-P
					; _bC_s1D:loc_1296BD-P _bC_s1D+AC-P
					; _bC_s1D+BB-P _bC_s1D+DC-P
					; _bC_s1D+123-P	_bC_s1D:loc_129742-P
					; _bC_s1D+131-P	_bC_s1D+17A-P
					; _bC_s1D+1A0-P	_bC_s1D:loc_1297D2-P
					; _bC_s1D+1C4-P	_bC_s1D:loc_129801-P
					; _bC_s1D+219-P	sub_129874+1F-P
					; sub_129874+56-P sub_129874+99-P
					; sub_129874+D9-P _bC_s22+2D-P
					; _bC_s13:loc_129F9D-P
					; _bC_s13:loc_129FA2-P _bC_sC+27-P
					; _bC_s2B+16-P _bC_s2B+20-P
					; sub_12B01C+1E-P _bC_s29+1C-P
					; _bC_s2A+16-P sub_12B189+9-P
					; sub_12B1A2+15-P sub_12B1A2+44-P
					; sub_12B200+25-P sub_12B200+33-P
					; sub_12B200:loc_12B236-P
					; sub_12B518+18-P sub_12B518+49-P
					; sub_12B518+4F-P sub_12B5AD+5C-P
					; sub_12B6AF+3A-P sub_12B6AF+5C-P
					; sub_12B6AF:loc_12B70E-P
					; sub_12B6AF+67-P sub_12B6AF+84-P
					; sub_12B6AF+98-P
					; sub_12B6AF:loc_12B74D-P
					; sub_12B6AF+CC-P sub_12B820+18-P
					; sub_12B820+2F-P sub_1422E1+C0-P
					; sub_142923+115-P _npc_hndl2F-P
					; _bD_s20_npc_hndl32:loc_143A75-P
					; _npc_hndl46+15-P sub_158203+55-P
					; sub_158377+8-P sub_158409+8-P
					; sub_15851F+29-P sub_15858D+1B-P
					; sub_175853+12-P
					; DATA XREF: BANKF:E7CE-o
		LDX		#1		; ind code used	at e000
		BNE		_far_bE_s4_msg_m00 ; code used at e000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_arg2:				; CODE XREF: _b6_s16-P sub_9BA66-P
					; sub_9BA85-P sub_9BA90-P sub_9BA90+23-P
					; sub_9BAB9+13-P sub_9BADD+4-P
					; sub_9BADD+1C-P sub_9BB0B-P sub_9BB1F-P
					; sub_9BB22-P sub_9BB26+8-P
					; sub_9BB26+47-P sub_9BB26+B0-P
					; sub_9BB26:loc_9BBDF-P	sub_1420EE-P
					; sub_1420EE:loc_1420FA-P
					; sub_142135:loc_14213F-P
					; sub_142135:loc_142147-P
					; sub_142135+39-P
					; sub_142135:loc_142174-P
					; sub_142135+56-P sub_142135+62-P
					; sub_142135:loc_1421A6-P
					; sub_142135+80-P sub_142135+9D-P
					; sub_142135+A5-P
					; sub_142135:loc_1421E0-P
					; sub_142135:loc_1421E6-P
					; sub_142135:loc_1421F1-P
					; sub_142135:loc_14221D-P
					; sub_142135:loc_142234-P
					; sub_142135+121-P sub_142135+12D-P
					; sub_142135+147-P sub_142135+153-P
					; sub_142135+167-P sub_142135+18B-P
					; sub_142135+193-P
					; sub_142135:loc_1422D2-P
					; sub_142135:loc_1422DD-P
					; sub_1422E1+14-P
					; sub_1422E1:loc_142303-P
					; sub_1422E1:loc_14232D-P
					; sub_1422E1+72-P sub_1422E1+7A-P
					; sub_1422E1:loc_14235E-P
					; sub_1422E1+90-P
					; sub_1422E1:loc_142377-P
					; sub_1422E1+C3-P
					; sub_14246C:loc_14247F-P
					; sub_14246C:loc_142482-P sub_142486+7-P
					; sub_142486:loc_142493-P
					; sub_142486+37-P sub_142486+4D-P
					; sub_142486+5A-P sub_142573+7-P
					; sub_142573:loc_142580-P sub_142586-P
					; sub_142589+50-P sub_142589+6C-P
					; sub_142589+80-P
					; sub_142589:loc_14260F-P
					; sub_142589:loc_142615-P
					; sub_142589:loc_142618-P
					; sub_142589:loc_142625-P
					; sub_142589+D5-P sub_142589+EB-P
					; sub_142589:loc_142684-P
					; sub_142589:loc_14268A-P
					; sub_142589+155-P sub_142589+16E-P
					; sub_142589+174-P
					; sub_142589:loc_142722-P sub_142920-P
					; sub_142923-P sub_142923:loc_14293A-P
					; sub_142923+34-P sub_142923+3D-P
					; sub_142923+55-P sub_142923+65-P
					; sub_142923:loc_14298E-P
					; sub_142923+87-P sub_142923+A1-P
					; sub_142923:loc_1429CA-P
					; sub_142923+E7-P sub_142923+F2-P
					; sub_142923+118-P
					; sub_142923:loc_142A41-P
					; sub_142923:loc_142A6B-P
					; sub_142923+15A-P
					; sub_142923:loc_142A86-P
					; sub_142923+17C-P sub_142923+188-P
					; sub_142923+193-P sub_142923+1A3-P
					; sub_142923+1B3-P
					; sub_142923:loc_142ADC-P
					; sub_142923+1D5-P
					; sub_142923:loc_142AFE-P
					; sub_142923+211-P sub_142923+21C-P
					; sub_142923+227-P sub_142923+244-P
					; sub_142923:loc_142B74-P
					; sub_142923+259-P sub_142923+270-P
					; sub_142923+278-P
					; sub_142923:loc_142BA1-P
					; sub_142923+292-P sub_142BC0-P
					; sub_142BCB-P sub_142C17-P
					; sub_142C17+1A-P sub_142C17+27-P
					; sub_142C17+3C-P
					; sub_142C17:loc_142C59-P
					; sub_142C17:loc_142C5C-P
					; sub_142C17:loc_142C60-P
					; sub_142C17+60-P
					; sub_142C17:loc_142C7D-P
					; sub_142C17+6E-P sub_142C17+7C-P
					; sub_142C17:loc_142CB2-P
					; sub_142C17+9E-P sub_142CE4-P
					; sub_142CE7-P sub_142CE7+27-P
					; sub_142CE7+34-P sub_142CE7+3D-P
					; sub_142CE7+63-P sub_142CE7+8B-P
					; sub_142CE7+B4-P sub_142CE7+C9-P
					; sub_142CE7+E3-P sub_142CE7+FA-P
					; sub_142CE7+107-P sub_142CE7+11F-P
					; sub_142CE7:loc_142E0C-P sub_142E22-P
					; sub_142E2F-P sub_142E35-P
					; sub_142E69+7-P sub_142E69+10-P
					; _bD_sF+26-P _bD_sF+36-P _bD_sF+53-P
					; _bD_sF:loc_142F4F-P
					; _bD_sF:loc_142F52-P
					; DATA XREF: BANKF:E7D0-o
		LDX		#2		; ind code used	at e000
		BNE		_far_bE_s4_msg_m00 ; code used at e000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_arg6:				; CODE XREF: sub_12B2EB+1B-P
					; sub_12B2EB+55-P
					; sub_12B2EB:loc_12B346-P
					; sub_12B2EB:loc_12B349-P
					; sub_12B2EB:loc_12B34C-P
					; sub_12B3D1+4E-P sub_12B3D1+56-P
					; sub_12B3D1+AD-P
					; sub_12B3D1:loc_12B484-P
					; sub_12B493+1D-P sub_12B493+20-P
					; sub_12B493+28-P
					; sub_12B493:loc_12B4BE-P
					; sub_12B493+40-P sub_12B493+79-P
					; DATA XREF: BANKF:E7E6-o
		LDX		#6		; ind code used	at e000
		BNE		_far_bE_s4_msg_m00 ; code used at e000

; =============== S U B	R O U T	I N E =======================================
_msg_m00_arg7:				; CODE XREF: sub_9BAB9+1E-P
					; DATA XREF: BANKF:E7E2-o
		LDX		#7
		BNE		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_msg_m00_arg8:				; DATA XREF: BANKF:E7D8-o
		LDX		#8
		BNE		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_msg_m00_break_arg0:			; DATA XREF: BANKF:E7D2-o
		LDX		#0
		BEQ		_far_bE_s4_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_msg_m00_break_arg1:			; DATA XREF: BANKF:E7D4-o
		LDX		#1
		BNE		_far_bE_s4_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_msg_m00_break_arg2:			; DATA XREF: BANKF:E7D6-o
		LDX		#2
		BNE		_far_bE_s4_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_syscall12:				; CODE XREF: sub_A3FB+23-P sub_ADF4+10-P
					; sub_AEF1+2B-P	sub_B06C-P sub_B09C-P
					; _b1_sC+29-P _b1_sD+E-P
					; _b1_sD:loc_20A5A-P _b1_sD+FD-P
					; _b1_sD+13B-P sub_680FE:loc_68138-P
					; sub_68931+2C-P sub_68BB0-P
					; sub_68BB6+5-P	sub_68BC9+10-P
					; sub_68C48+5-P	sub_68DB1-P
					; sub_69604:loc_6960C-P
					; sub_69604:loc_6963E-P
					; sub_69604:loc_696B6-P	sub_69604+DE-P
					; sub_697D0-P sub_6983C-P sub_6A3F8+58-P
					; sub_6A3F8+A2-P sub_6A3F8:loc_6A4C9-P
					; sub_6A560-P sub_6A5B8+16-P
					; sub_6B0DB+6-P	_b6_sE+10-P _b6_s11+14-P
					; _b6_s6+5A-P
					; _name_entry_screen_data_enter-P
					; _b6_s1A+26-P _b6_s1B+20-P _b6_s1B+4A-P
					; _b6_s1C+3-P _b6_s1D-P	_b6_s1F+8-P
					; _b7_s19-P _b7_s19+1A-P _b7_s1A+38-P
					; _b7_s1B+6-P
					; _b7_sA_sram_test_and_init+5E-P
					; _b7_s1E+27-P _bA_s8-P	_bA_s8+C-P
					; _bA_s8+1E-P sub_F834B-P sub_F834B+10-P
					; _bA_sE+54-P _bC_s34+B-P
					; sub_128F30+16-P sub_129007+53-P
					; _bC_s22+52-P _bC_s22+85-P _bC_s25+1A-P
					; _bC_s25+36-P _bC_s13+2E-P
					; _bC_sC:loc_12A239-P
					; _bC_sC:loc_12A259-P sub_12A312+E-P
					; _bC_s33+E-P _bC_s33+1A-P _bC_s19+B-P
					; _bC_s19+4E-P sub_12A743-P
					; sub_12A743+3F-P sub_12A743+45-P
					; _bC_s24+1E-P _bC_s24+30-P _bC_s24+47-P
					; sub_12AAD4+4-P sub_12AAD4+D-P
					; sub_12AB90:loc_12AB94-P _bC_s29+1F-P
					; _bC_s29+22-P sub_12B1A2+3C-P
					; sub_12B518+91-P sub_12B5AD+37-P
					; sub_12B877+16-P sub_141C1C+5C-P
					; sub_1422E1+B5-P sub_142504+33-P
					; sub_142589+6F-P sub_142589+EE-P
					; sub_142589+177-P sub_142923+10B-P
					; sub_1580AC+6B-P sub_15812C+6A-P
					; sub_15819F+A-P sub_158377+2F-P
					; sub_158377+3B-P sub_1583D0+20-P
					; sub_1583D0+29-P sub_1585B0-P _bE_s1C-P
					; sub_15A068:loc_15A075-P sub_15A8F0+D-P
					; sub_15A99E+2E-P _bE_s22+3-P
					; sub_15B08E+2D-P sub_15B288+2E-P
					; sub_17522D+61-P sub_17522D+B5-P
					; sub_175342+28-P
					; sub_175596:loc_1755A0-P
					; sub_1757C0:loc_175818-P
					; sub_175853+49-P sub_175917+1-P
					; sub_24E747+2A-P sub_24E747+48-P
					; sub_24E747+54-P
					; DATA XREF: BANKF:E7E4-o
		TYA				; ind code used	at e000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		RTS				; code used as ind data	at e000

; =============== S U B	R O U T	I N E =======================================
_far_bE_s4_msg_m00:			; CODE XREF: _msg_m00_arg0+2-j
					; _msg_m00_arg1+2-j _msg_m00_arg2+2-j
					; _msg_m00_arg6+2-j _msg_m00_arg7+2-j
					; _msg_m00_arg8+2-j
					; _far_bE_s4_msg_m00_break-p
		TYA				; code used at e000
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
_far_bE_s4_msg_m00_break:		; CODE XREF: _msg_m00_break_arg0+2-j
					; _msg_m00_break_arg1+2-j
					; _msg_m00_break_arg2+2-j
		JSR		_far_bE_s4_msg_m00
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; unused
sub_176C11:
		TAX
		STY		word_4
		LDA		_mmc_cur_prg_bank
		PHA
		TXA
		JSR		_mmc1_prg_set
		LDY		#0
loc_176C1E:				; CODE XREF: sub_176C11+13-j
					; sub_176C11+17-j
		LDA		(word_6C),Y
		BMI		loc_176C2A
loc_176C22:				; CODE XREF: sub_176C11+1B-j
					; sub_176C11+1F-j
		INC		word_6C
		BNE		loc_176C1E
		INC		word_6C+1
		BNE		loc_176C1E
loc_176C2A:				; CODE XREF: sub_176C11+F-j
		CMP		#$FF
		BNE		loc_176C22
		DEC		word_4
		BNE		loc_176C22
		INC		word_6C
		BNE		loc_176C38
		INC		word_6C+1
loc_176C38:				; CODE XREF: sub_176C11+23-j
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_176C3C:				; CODE XREF: sub_AE6C+F-P sub_AEC0+5-P
					; sub_AECD-P sub_AF5B+F-P sub_AF7F+3-P
					; sub_B06C+3-P sub_B0BA-P _bC_s11+16-P
					; sub_1294D0-P _bC_s1D+AF-P _bC_s1D+BE-P
					; _bC_s1D+DF-P _bC_s1D+17D-P
					; _bC_s22:loc_129C0E-P
					; _bC_s22:loc_129C16-P _bC_s13+23-P
					; _bC_s26+54-P _bC_s26+5A-P
		LDX		#$1E		; code used at e000
		JMP		_vblank_count	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176C41:				; CODE XREF: sub_1292B0+18-P
		LDA		byte_2A
		STA		byte_74
		LDA		byte_2B
		STA		byte_75
		LDA		byte_2F
		PHA
		AND		#2
		STA		byte_2F
		JSR		sub_17592E
		PLA
		STA		byte_2F
		BCS		loc_176C5B
		JSR		sub_1759B8
loc_176C5B:				; CODE XREF: sub_176C41+15-j
		PHA
		JSR		sub_175A32
		JSR		sub_1762FC
		BRK
		.BYTE $F9, 7		; ofs 0x00158036, -> dst _bE_s1B
		JSR		_bE_sA		; function not fit into	bank E so moved	to bank	F
		PLA
		JMP		sub_17530A

; =============== S U B	R O U T	I N E =======================================
sub_176C6C:				; CODE XREF: sub_AE12+34-P
					; sub_AF9A:loc_AFF8-P sub_129874+1C-P
		LDX		#0		; code used at e000
		BEQ		sub_176C72	; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176C70:				; CODE XREF: sub_ACBE+3B-J sub_ACBE+52-J
					; sub_AD31+1B-J	sub_AD31+54-P
					; sub_ADE0+5-P sub_AE12:loc_AE4C-P
					; sub_B026:loc_B045-P
					; sub_B026:loc_B05F-P
					; _bC_s1D:loc_1297C1-P sub_129874+BE-P
					; _bC_s1E+33-P _bC_s22+7-P
		LDX		#1		; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176C72:				; CODE XREF: sub_176C6C+2-j
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		RTS				; code used at e000

; =============== S U B	R O U T	I N E =======================================
sub_176C76:				; CODE XREF: sub_129EBC+21-P
		LDX		#$C0 
		BNE		sub_176C80

; =============== S U B	R O U T	I N E =======================================
sub_176C7A:				; CODE XREF: sub_129EEB-P
		LDX		#$40 
		BNE		sub_176C80

; =============== S U B	R O U T	I N E =======================================
sub_176C7E:				; CODE XREF: sub_129EEB+E-P
		LDX		#$80 

; =============== S U B	R O U T	I N E =======================================
sub_176C80:				; CODE XREF: sub_176C76+2-j
					; sub_176C7A+2-j
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#$A
		JSR		_mmc1_prg_set
		LDY		#$3F 
loc_176C8B:				; CODE XREF: sub_176C80+13-j
		LDA		_chr_data_unk4+$7F,X
		STA		byte_7800,Y
		DEX
		DEY
		BPL		loc_176C8B
		PLA
		JMP		_mmc1_prg_set
		
END_OF_SHARED_ORG = .