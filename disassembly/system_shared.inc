
		ORG SYSTEM_SHARED_ORG

; =============== S U B	R O U T	I N E =======================================
; SYSTEM ROUTINES BLOCK	SHARED BETWEEN 0F and 1F
; the same data	in both	banks
; 0F:C000-0F:EC98 == 1F:C000-1F:EC98
sub_174000:
		LDA		#0
		STA		byte_6D8
		STA		byte_6D9
		STA		byte_6DA
		STA		byte_6D7
		STA		_nmi_flags
		STA		_pads+2
		STA		_pads+3
		STA		_pads+4
		STA		byte_28
		STA		byte_29
		STA		byte_32
		STA		byte_6D6
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_data_next_byte:
		LDA		(0,X)
		INC		0,X
		BNE		locret_174028
		INC		1,X
locret_174028:
		RTS

; =============== S U B	R O U T	I N E =======================================
_add16_to_neg16:
		JSR		_add8_to_neg16
		TYA
		EOR		#$FF
		SEC
		ADC		1,X
		STA		1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_add8_to_neg16:
		EOR		#$FF
		SEC
		ADC		0,X
		STA		0,X
		BCS		locret_174040
		DEC		1,X
locret_174040:
		RTS

; =============== S U B	R O U T	I N E =======================================
_add16_to_16:
		JSR		_add8_to_16
		TYA
		CLC
		ADC		1,X
		STA		1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; A = value
; X = ram var ofs
_add8_to_16:
		CLC
		ADC		0,X
		STA		0,X
		BCC		locret_174054
		INC		1,X
locret_174054:
		RTS

; =============== S U B	R O U T	I N E =======================================
_mul16_to_8:
		STA		_tmp21
		LDA		#0
		STA		_tmp21+1
		STA		_tmp21+2
loc_17405D:
		LSR		_tmp21
		BCC		loc_17406E
		LDA		0,X
		CLC
		ADC		_tmp21+1
		STA		_tmp21+1
		LDA		1,X
		ADC		_tmp21+2
		STA		_tmp21+2
loc_17406E:
		ASL		0,X
		ROL		1,X
		LDA		_tmp21
		BNE		loc_17405D
		LDA		_tmp21+1
		STA		0,X
		LDA		_tmp21+2
		STA		1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_div16_to_8:
		STA		_tmp21+2
		TYA
		PHA
		LDY		#$10
		LDA		#0
		STA		byte_24
		STA		_tmp21
		STA		_tmp21+1
loc_17408D:
		ASL		0,X
		ROL		1,X
		ROL		_tmp21
		ROL		_tmp21+1
		INC		0,X
		LDA		_tmp21
		SEC
		SBC		_tmp21+2
		PHA
		LDA		_tmp21+1
		SBC		byte_24
		BCS		loc_1740A9
		PLA
		DEC		0,X
		JMP		loc_1740AE
loc_1740A9:
		STA		_tmp21+1
		PLA
		STA		_tmp21
loc_1740AE:
		DEY
		BNE		loc_17408D
		PLA
		TAY
		LDA		_tmp21
		RTS

; =============== S U B	R O U T	I N E =======================================
_ppu_screen_clear:
		JSR		_vblank_and_render_off_flag10_set
		JSR		sub_174000
		LDA		#$F8
		LDX		#0
		STX		_PPU_OAM_ADDR
loc_1740C3:
		STA		_spr_ram,X
		STA		_PPU_OAM_DATA
		INX
		BNE		loc_1740C3
		LDA		_PPU_STATUS
		LDA		#$20
		STA		_PPU_ADDR
		LDA		#0
		STA		_PPU_ADDR
		LDX		#8
		LDY		#0
loc_1740DD:
		STA		_PPU_DATA
		DEY
		BNE		loc_1740DD
		DEX
		BNE		loc_1740DD
		JMP		__render_on_flag10_clear_reinit

; =============== S U B	R O U T	I N E =======================================
sub_1740E9:
		TAX
		LDA		byte_6D6
		STX		byte_6D6
		AND		#3
		CMP		#2
		BEQ		locret_1740F9
		JSR		sub_1742B0
locret_1740F9:
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_1740FA:
;		JSR		_vblank_and_render_off_flag10_set
;		JSR		sub_1741D7
;		JMP		__render_on_flag10_clear_reinit

; =============== S U B	R O U T	I N E =======================================
sub_174103:
		LDX		#0
loc_174105:
		JSR		sub_17410E
		INX
		CPX		#8
		BNE		loc_174105
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17410E:
		ASL		word_4,X
		ROR		byte_C
		ASL		word_4,X
		ROR		byte_D
		ASL		word_4,X
		ROR		byte_E
		ASL		word_4,X
		ROR		byte_F
		ASL		word_4,X
		ROR		byte_10
		ASL		word_4,X
		ROR		byte_11
		ASL		word_4,X
		ROR		_tmp12
		ASL		word_4,X
		ROR		_tmp12+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17412F:
		LDX		#0
loc_174131:
		JSR		sub_17413A
		INX
		CPX		#8
		BNE		loc_174131
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17413A:
		LSR		word_4,X
		ROL		byte_C
		LSR		word_4,X
		ROL		byte_D
		LSR		word_4,X
		ROL		byte_E
		LSR		word_4,X
		ROL		byte_F
		LSR		word_4,X
		ROL		byte_10
		LSR		word_4,X
		ROL		byte_11
		LSR		word_4,X
		ROL		_tmp12
		LSR		word_4,X
		ROL		_tmp12+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17415B:
		STA		_tmp21
		ASL
		CLC
		ADC		_tmp21
		TAX
		LDA		off_1741BC,X
		STA		_tmp21
		LDA		off_1741BC+1,X
		STA		_tmp21+1
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		byte_1741BE,X
		JSR		_mmc1_prg_set
		JSR		_vblank
		LDA		#0
		STA		byte_26
loc_17417D:
		LDX		byte_6D8
		LDA		_tmp21+2
		ORA		#$80
		STA		byte_300,X
		INX
		LDA		#$10
		STA		byte_300,X
		INX
		LDA		byte_24
		STA		byte_300,X
		LDY		byte_26
		INX
loc_174196:
		LDA		(_tmp21),Y
		STA		byte_300,X
		INC		byte_24
		INY
		INX
		TYA
		AND		#$F
		BNE		loc_174196
		STX		byte_6D8
		STY		byte_26
		INC		byte_6D9
		JSR		sub_1742BA
		JSR		_vblank
		LDA		byte_24
		CMP		byte_25
		BNE		loc_17417D
		PLA
		JMP		_mmc1_prg_set
off_1741BC:
		.WORD	_chr_data_unk0
byte_1741BE:
		.BYTE	 $A
		.WORD	_chr_data_unk1
		.BYTE	 $A
		.WORD	_chr_data_unk2
		.BYTE	 $A
		.WORD	_chr_data_unk3
		.BYTE	 $A
		.WORD	_chr_data_unk4
		.BYTE	 $A
		.WORD	_chr_data_unk5
		.BYTE	  9
		.WORD	_chr_data_unk6
		.BYTE	  9
		.WORD	_chr_data_unk7
		.BYTE	  9
		.WORD	_chr_terrain_bg_data1+$470
		.BYTE	  9

; =============== S U B	R O U T	I N E =======================================
sub_1741D7:
		LDA		_PPU_STATUS
		LDA		byte_20
		STA		_PPU_ADDR
		LDA		byte_1F
		STA		_PPU_ADDR

; =============== S U B	R O U T	I N E =======================================
sub_1741E4:
		LDX		#_tmp21
loc_1741E6:
		JSR		_get_data_next_byte
		STA		_PPU_DATA
		LDA		_tmp21+2
		EOR		_tmp21
		BNE		loc_1741E6
		LDA		_tmp21+1
		EOR		byte_24
		BNE		loc_1741E6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1741F9:
		LDA		#$80
		BNE		sub_1741FF

; =============== S U B	R O U T	I N E =======================================
sub_1741FD:
		LDA		#$FF

; =============== S U B	R O U T	I N E =======================================
sub_1741FF:
		STA		_tmp21+1
		JMP		sub_174208

; =============== S U B	R O U T	I N E =======================================
sub_174204:
		LDA		#0
		STA		_tmp21+1

; =============== S U B	R O U T	I N E =======================================
sub_174208:
		TXA
		PHA
		TYA
		PHA
		PHA
		LDA		#1
		ORA		_nmi_flags
		STA		_nmi_flags
		PLA
		LDY		#0
		STY		_tmp21
		LDY		#5
loc_17421A:
		DEY
		BMI		loc_174251
		CMP		byte_1742AB,Y
		BCC		loc_17421A
		PHA
		TYA
		SEC
		ROL
		SEC
		SBC		byte_6D7
		BPL		loc_17422F
		CLC
		ADC		#$A
loc_17422F:
		LSR
		BCS		loc_174237
		EOR		#$7F
		CLC
		ADC		#$85
loc_174237:
		STA		_tmp21
		ASL
		CLC
		ADC		_tmp21
		ASL
		ASL
		ASL
		ASL
		CLC
		ADC		#$10
		STA		_tmp21
		PLA
		SEC
		SBC		#4
loc_17424A:
		SEC
		SBC		#$C
		BCS		loc_17424A
		ADC		#$C
loc_174251:
		ASL
		ASL
		CLC
		ADC		_tmp21
		BCC		loc_17425A
		ADC		#$F
loc_17425A:
		TAY
		STY		_tmp21
		LDA		_tmp21+1
		BEQ		loc_17428F
		CMP		#$80
		BEQ		loc_174274
loc_174265:
		LDA		_spr_ram,Y
		STA		byte_0,X
		INX
		INY
		TYA
		AND		#3
		BNE		loc_174265
		JMP		loc_17429B
loc_174274:
		LDA		_spr_ram,Y
		AND		_spr_ram+3,Y
		CMP		#$F8
		BEQ		loc_17428C
		INX
		INY
		LDA		byte_0,X
		STA		_spr_ram,Y
		INX
		INY
		LDA		byte_0,X
		STA		_spr_ram,Y
loc_17428C:
		JMP		loc_17429B
loc_17428F:
		LDA		byte_0,X
		STA		_spr_ram,Y
		INX
		INY
		TYA
		AND		#3
		BNE		loc_17428F
loc_17429B:
		LDA		#1
		EOR		#$FF
		AND		_nmi_flags
		STA		_nmi_flags
		PLA
		TAY
		PLA
		CLC
		ADC		#4
		TAX
		RTS
byte_1742AB:
		.BYTE	  4,$10,$1C,$28,$34

; =============== S U B	R O U T	I N E =======================================
sub_1742B0:
		JSR		sub_1742BA
loc_1742B3:
		LDA		#4
		AND		_nmi_flags
		BNE		loc_1742B3
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1742BA:
		LDA		#4
		AND		_nmi_flags
		BNE		sub_1742BA
		LDA		#4
		ORA		_nmi_flags
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1742C7:
		STA		byte_1E
		JSR		sub_1742CF
		JMP		sub_17430A

; =============== S U B	R O U T	I N E =======================================
sub_1742CF:
		LDA		byte_6D3
		ASL
		ASL
		AND		#4
		ORA		#$20
		STA		byte_20
		LDA		word_4
		ASL
		ASL
		ASL
		CLC
		ADC		byte_6D0
		STA		byte_1F
		BCC		loc_1742ED
		LDA		byte_20
		EOR		#4
		STA		byte_20
loc_1742ED:
		LDA		byte_6D1
		LSR
		LSR
		LSR
		CLC
		ADC		word_4+1
		CMP		#$1E
		BCC		loc_1742FC
		SBC		#$1E
loc_1742FC:
		LSR
		ROR		byte_1F
		LSR
		ROR		byte_1F
		LSR
		ROR		byte_1F
		ORA		byte_20
		STA		byte_20
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17430A:
		LDA		#4
		AND		_nmi_flags
		BNE		sub_17430A
		LDA		byte_6D9
		CMP		#$28
		BCC		loc_17431D
		JSR		sub_1742BA
		JMP		sub_17430A
loc_17431D:
		LDX		byte_6D8
		LDA		byte_20
		AND		#$3F
		STA		byte_300,X
		INX
		LDA		byte_1F
		STA		byte_300,X
		INX
		LDA		byte_1E
		STA		byte_300,X
		INX
		STX		byte_6D8
		INC		byte_6D9
		INC		byte_1F
		BNE		locret_174340
		INC		byte_20
locret_174340:
		RTS

; =============== S U B	R O U T	I N E =======================================
_vblank:
		LDA		_nmi_counter
loc_174344:
		CMP		_nmi_counter
		BEQ		loc_174344
		JMP		sub_17490A

; =============== S U B	R O U T	I N E =======================================
_vblank_count:
		LDA		_nmi_counter
loc_17434F:
		CMP		_nmi_counter
		BEQ		loc_17434F
		JSR		sub_17490A
		DEX
		BNE		_vblank_count
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17435B:
		LDA		#0
		STA		_tmp21
		JSR		sub_174383
		RTS

; =============== S U B	R O U T	I N E =======================================
_pal_fade_in:
		LDA		#$40
		LDX		#$F0
		BNE		sub_17436D

; =============== S U B	R O U T	I N E =======================================
sub_174369:
		LDA		#$10
		LDX		#$10

; =============== S U B	R O U T	I N E =======================================
sub_17436D:
		STX		_tmp21+1
loc_17436F:
		STA		_tmp21
		JSR		sub_174383
		LDX		#3
		JSR		_vblank_count
		LDA		_tmp21
		CLC
		ADC		_tmp21+1
		CMP		#$50
		BCC		loc_17436F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174383:
		LDA		#$3F
		STA		byte_20
		LDA		#0
		STA		byte_1F
		TAX
loc_17438C:
		LDA		byte_1F
		LDY		_ram_pal_buf
		AND		#3
		BEQ		loc_174399
		LDY		_ram_pal_buf+1,X
		INX
loc_174399:
		TYA
		SEC
		SBC		_tmp21
		CMP		#$40
		BCC		loc_1743A4
		LDA		_ram_pal_buf
loc_1743A4:
		STA		byte_1E
		STX		_tmp21+2
		JSR		sub_17430A
		LDX		_tmp21+2
		CPX		#$18
		BNE		loc_17438C
		JSR		sub_1742BA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1743B5:
		FAR		$00,$6F		; _b16_s0

; =============== S U B	R O U T	I N E =======================================
sub_1743B8:
		TYA
		PHA
		LDA		#$FF
		STA		_tmp21
		JSR		sub_1743D2
		LDA		#$FF
		STA		_tmp21
		JSR		sub_1743D2
		INC		byte_A4
		PLA
		TAY
		LDA		byte_1C
		CLC
		ADC		byte_A4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1743D2:
		LDY		#8
loc_1743D4:
		LDA		byte_1D
		EOR		_tmp21
		ASL		byte_1C
		ROL		byte_1D
		ASL		_tmp21
		ASL
		BCC		loc_1743ED
		LDA		byte_1C
		EOR		#$21
		STA		byte_1C
		LDA		byte_1D
		EOR		#$10
		STA		byte_1D
loc_1743ED:
		DEY
		BNE		loc_1743D4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1743F1:
		STA		_tmp21+1
		CMP		#0
		BEQ		locret_174420
		TXA
		PHA
		TYA
		PHA
		LDA		#0
		STA		_tmp21+2
		LDA		_tmp21+1
		LDY		#9
loc_174403:
		DEY
		BEQ		loc_17440F
		ASL
		BCC		loc_174403
loc_174409:
		SEC
		ROL		_tmp21+2
		DEY
		BNE		loc_174409
loc_17440F:
		JSR		sub_1743B8
		AND		_tmp21+2
		CMP		_tmp21+1
		BCS		loc_17440F
		STA		_tmp21+1
		PLA
		TAY
		PLA
		TAX
		LDA		_tmp21+1
locret_174420:
		RTS

; =============== S U B	R O U T	I N E =======================================
__render_on_flag10_clear_reinit:
		JSR		_clear_nmi_flag_10
		JMP		sub_17443A

; =============== S U B	R O U T	I N E =======================================
_vblank_and_render_off_flag10_set:
		JSR		_vblank_and_render_off

; =============== S U B	R O U T	I N E =======================================
_set_nmi_flag_10:
		LDA		#$10
		ORA		_nmi_flags
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
_clear_nmi_flag_10:
		LDA		#$10
		EOR		#$FF
		AND		_nmi_flags
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17443A:
		LDA		_nmi_flags
		PHA
		LDA		byte_6D6
		PHA
		JSR		_clear_nmi_flag_10
		LDA		#$18
		STA		byte_6D4
		LDA		#2
		JSR		sub_1740E9
		PLA
		STA		byte_6D6
		PLA
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
_vblank_and_render_off:
		LDY		#0
		LDA		_PPU_STATUS
loc_17445B:
		LDA		_PPU_STATUS
		BPL		loc_17445B
		TYA
		STA		_PPU_MASK
		STA		byte_6D4
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys_safe_select:
		CMP		#[_b7_sF_player_log_read_idx-_sys0_sub_idx_lib-256]	; intended to be used with indexes 166 and 167, but currently only 167 is used here
		BEQ		loc_A281
		TAY
		LDA		#0
		STA		word_4
		STA		word_4+1
		STA		word_6
		BEQ		_sys0_safe
loc_A281:
		TAY
		LDA		#0
		STA		word_6
;		BEQ		_sys1_safe

; =============== S U B	R O U T	I N E =======================================
_sys1_safe:
		STA		_irq_a_saved
		STX		_irq_x_saved
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#$4C
		STA		_tmp21
		LDX		#_tmp21+1
		JSR		_set_sys1_ptr_and_bank
		JMP		_sys_safe

; =============== S U B	R O U T	I N E =======================================
_sys0_safe:
		STA		_irq_a_saved
		STX		_irq_x_saved
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#$4C
		STA		_tmp21
		LDX		#_tmp21+1
		JSR		_set_sys0_ptr_and_bank

; =============== S U B	R O U T	I N E =======================================
_sys_safe:
		LDA		_irq_a_saved
		LDX		_irq_x_saved
		JSR		_tmp21
		PHP
		STA		_irq_a_saved
		PLA
		STA		_tmp21
		PLA
		JSR		_mmc1_prg_set
		LDA		_tmp21
		PHA
		LDA		_irq_a_saved
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;_sys1_unsafe:
;		LDA		#$4C
;		STA		_tmp21
;		LDX		#_tmp21+1
;		JSR		_set_sys1_ptr_and_bank
;		JMP		_tmp21

; =============== S U B	R O U T	I N E =======================================
_sys0_unsafe:
		LDA		#$4C
		STA		_tmp21
		LDX		#_tmp21+1
		JSR		_set_sys0_ptr_and_bank
		JMP		_tmp21

; =============== S U B	R O U T	I N E =======================================
_set_sys1_ptr_and_bank:
		LDA		_sys0_sub_idx_lib+256,Y
		PHA
		LDA		_sys0_sub_banks_list+256,Y
		JMP		_set_sys_ptr_and_bank

; =============== S U B	R O U T	I N E =======================================
_set_sys0_ptr_and_bank:
		LDA		_sys0_sub_idx_lib,Y
		PHA
		LDA		_sys0_sub_banks_list,Y

; =============== S U B	R O U T	I N E =======================================
_set_sys_ptr_and_bank:
		JSR		_mmc1_prg_set
		PLA
		ASL
		TAY
		LDA		SYSCALL_PTR_ORG,Y
		STA		0,X
		LDA		SYSCALL_PTR_ORG+1,Y
		STA		1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys0_byte_read_y:
		STX		_irq_x_saved
		STY		_irq_y_saved
		TAY
		LDA		_mmc_cur_prg_bank
		PHA
		LDX		#_tmp21
		JSR		_set_sys0_ptr_and_bank
		LDY		_irq_y_saved
		LDA		(_tmp21),Y
		STA		byte_25
		PLA
		JSR		_mmc1_prg_set
		LDX		_irq_x_saved
		LDA		byte_25
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys0_byte_read_x:
		STX		_irq_x_saved
		STY		_irq_y_saved
		TAY
		LDA		_mmc_cur_prg_bank
		PHA
		LDX		#_tmp21
		JSR		_set_sys0_ptr_and_bank
		LDX		_irq_x_saved
		TXA
		TAY
		LDA		(_tmp21),Y
		STA		byte_25
		PLA
		JSR		_mmc1_prg_set
		LDY		_irq_y_saved
		LDA		byte_25
		RTS

; =============== S U B	R O U T	I N E =======================================
; input args:
; X - offset of the src ptr in RAM
; A - prg bank to read from
;
_far_byte_read_by_ptr:
		STA		_irq_a_saved
		LDA		_mmc_cur_prg_bank
		PHA
		STX		_irq_x_saved
		STY		_irq_y_saved
		LDA		_irq_a_saved
		JSR		_mmc1_prg_set
		LDA		0,X
		STA		_tmp21
		LDA		1,X
		STA		_tmp21+1
		LDA		(_tmp21),Y
		STA		_tmp21+2
		PLA
		JSR		_mmc1_prg_set
		LDX		_irq_x_saved
		LDY		_irq_y_saved
		LDA		_tmp21+2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174690:
		JSR		sub_1746C2

; =============== S U B	R O U T	I N E =======================================
sub_174693:
		JSR		sub_174719
		LDA		byte_1F
		SEC
		SBC		#$C0
		TAX
		LDA		byte_20
		CMP		#$23
		BEQ		loc_1746A7
		TXA
		CLC
		ADC		#$40
		TAX
loc_1746A7:
		LDA		byte_480,X
		STA		byte_9
		LDA		#3
		LDY		word_6+1
		BEQ		loc_1746B8
loc_1746B2:
		ASL
		ASL		byte_A
		DEY
		BNE		loc_1746B2
loc_1746B8:
		EOR		#$FF
		AND		byte_9
		ORA		byte_A
		STA		byte_480,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1746C2:
		JSR		sub_1746C8
		JMP		sub_1746F4

; =============== S U B	R O U T	I N E =======================================
sub_1746C8:
		LDA		byte_6D0
		LSR
		LSR
		LSR
		CLC
		ADC		word_4
		STA		word_6
		LDA		byte_6D3
		AND		#1
		ASL
		ASL
		ASL
		ASL
		ASL
		EOR		word_6
		STA		word_6
		LDA		byte_6D1
		LSR
		LSR
		LSR
		CLC
		ADC		word_4+1
		CMP		#$1E
		BCC		loc_1746F1
		SEC
		SBC		#$1E
loc_1746F1:
		STA		byte_8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1746F4:
		AND		#$FC
		ASL
		STA		byte_1F
		LDA		word_6
		AND		#$1F
		LSR
		LSR
		CLC
		ADC		byte_1F
		CLC
		ADC		#$C0
		STA		byte_1F
		LDA		word_6
		AND		#$20
		BNE		loc_174711
		LDA		#$23
		BNE		loc_174713
loc_174711:
		LDA		#$27
loc_174713:
		STA		byte_20
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_174716:
;		JSR		sub_1746C8

; =============== S U B	R O U T	I N E =======================================
sub_174719:
		LDA		word_6
		AND		#2
		STA		word_6+1
		LDA		byte_8
		AND		#2
		ASL
		ORA		word_6+1
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_174729:
;		JSR		sub_1746C2

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_17472C:
;		JMP		sub_174719

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_17472F:
;		LDA		byte_6D3
;		AND		#1
;		STA		word_6+1
;		LDA		word_4
;		ASL
;		ASL
;		ASL
;		CLC
;		ADC		byte_6D0
;		BCC		locret_174747
;		LDA		word_6+1
;		EOR		#1
;		STA		word_6+1
;locret_174747:
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174748:
		LDA		#$FF
		BNE		sub_17474E

; =============== S U B	R O U T	I N E =======================================
sub_17474C:
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
sub_17474E:
		JSR		sub_174757
		JSR		sub_1742BA
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_174757:
		PHA
		LDA		byte_6D9
		BEQ		loc_174760
		JSR		_vblank
loc_174760:
		LDA		#0
		STA		byte_24
		PLA
		JSR		sub_174878
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
loc_174784:
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
		BEQ		loc_1747A2
		BCS		loc_1747A9
loc_1747A2:
		LDA		_tmp21+2
		STA		word_6
		JMP		loc_1747C3
loc_1747A9:
		JSR		sub_1747F4
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
loc_1747C3:
		JSR		sub_1747F4
		LDA		byte_20
		AND		#$FB
		CMP		#$23
		BCC		loc_1747DF
		LDA		byte_1F
		CMP		#$A0
		BCC		loc_1747DF
		AND		#$1F
		STA		byte_1F
		LDA		byte_20
		AND		#$FC
		JMP		loc_1747EA
loc_1747DF:
		LDA		byte_1F
		CLC
		ADC		#$20
		STA		byte_1F
		LDA		byte_20
		ADC		#0
loc_1747EA:
		STA		byte_20
		DEC		_tmp21+1
		BNE		loc_174784
		STX		byte_6D8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1747F4:
		INC		byte_24
		LDA		byte_24
		CMP		#8
		BCC		loc_174803
		LDX		#0
		STX		byte_24
		JSR		sub_1742B0
loc_174803:
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
loc_17481C:
		LDA		byte_400,Y
		STA		byte_300,X
		INX
		INY
		DEC		word_6
		BNE		loc_17481C
		STY		byte_25
		PLA
		LSR
		STA		word_6
		LDA		_tmp21+1
		AND		#1
		BEQ		loc_174874
		LDY		byte_26
		LDA		byte_9
		STA		byte_11
		LDA		byte_8
		STA		byte_10
loc_17483E:
		TXA
		PHA
		TYA
		PHA
		LDA		byte_9
		PHA
		LDA		byte_460,Y
		JSR		sub_17489C
		STA		word_4
		PLA
		STA		byte_9
		PLA
		TAY
		PLA
		TAX
		LDA		_tmp12+1
		STA		byte_300,X
		INX
		LDA		_tmp12
		STA		byte_300,X
		INX
		LDA		word_4
		STA		byte_300,X
		INX
		INY
		INC		byte_10
		INC		byte_10
		INC		byte_6D9
		DEC		word_6
		BNE		loc_17483E
		STY		byte_26
loc_174874:
		INC		byte_6D9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174878:
		PHA
		JSR		sub_174887
		PLA
		BNE		loc_174880
		RTS
loc_174880:
		LDA		byte_20
		EOR		#4
		STA		byte_20
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174887:
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
		JMP		sub_1742CF

; =============== S U B	R O U T	I N E =======================================
sub_17489C:
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
		BCC		loc_1748CA
		LDX		#$27
loc_1748CA:
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
		BEQ		loc_1748EF
		TXA
		CLC
		ADC		#$40
		TAX
loc_1748EF:
		LDA		byte_480,X
		STA		byte_D
		LDA		#3
		LDY		byte_C
		BEQ		loc_174900
loc_1748FA:
		ASL
		ASL		byte_F
		DEY
		BNE		loc_1748FA
loc_174900:
		EOR		#$FF
		AND		byte_D
		ORA		byte_F
		STA		byte_480,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17490A:
		PHA
		TXA
		PHA
		TYA
		PHA
		LDA		byte_32
		CMP		#$FD
		BNE		loc_17491C
		LDA		byte_60B7
		AND		#$20
		BNE		loc_17491F
loc_17491C:
		JSR		sub_174925
loc_17491F:
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174925:
		LDA		byte_33
		BEQ		locret_17494E
		LDA		byte_6D7
		AND		#1
		TAX
		LDA		byte_17494F,X
		PHA
		LDA		byte_17494F+1,X
		LDX		#$40
		JSR		_spr_swap
		LDX		#$10
		PLA
		JSR		_spr_swap
		LDX		byte_6D7
		INX
		CPX		#$A
		BCC		loc_17494B
		LDX		#0
loc_17494B:
		STX		byte_6D7
locret_17494E:
		RTS
byte_17494F:
		.BYTE	$D0,$A0,$70

; =============== S U B	R O U T	I N E =======================================
; swap 12 sprites at X and Y pos
; input	X - dst, A - src
_spr_swap:
		TAY
		LDA		#$30
		STA		byte_A1
loc_174957:
		LDA		_spr_ram,X
		PHA
		LDA		_spr_ram,Y
		STA		_spr_ram,X
		PLA
		STA		_spr_ram,Y
		INX
		INY
		DEC		byte_A1
		BNE		loc_174957
		RTS

; =============== S U B	R O U T	I N E =======================================
NMI:
		PHA
		TYA
		PHA
		TXA
		PHA
		LDA		#$10
		AND		_nmi_flags
		BNE		loc_17497E
		LDA		#0
		STA		byte_33
		JSR		sub_174A5C
loc_17497E:
		INC		_mmc_reset_byte
		LDA		#$B
		JSR		_mmc1_prg_cmd
		JSR		_apu_play
		LDA		_mmc_cur_prg_bank
		JSR		_mmc1_prg_cmd
		LDA		_mmc_cur_prg_bank
		JSR		_mmc1_prg_cmd
		INC		_nmi_counter
		TSX
		LDA		$106,X
		CMP		#$FF
		BNE		loc_1749C3
		LDA		$105,X
		CMP		#$AB
		BCC		loc_1749C3
		CMP		#$D5
		BCS		loc_1749C3
		LDA		#$D5
		STA		$105,X
		JSR		_mmc1_reinit
		LDA		_mmc_cur_prg_bank
		JSR		_mmc1_prg_cmd
loc_1749C3:
		TSX
		LDA		$106,X
		STA		byte_A2
		LDA		$105,X
		STA		byte_A1
		LDY		#0
		LDA		(byte_A1),Y
		AND		#$F
		CMP		#7
		BEQ		loc_1749E2
		CMP		#$F
		BEQ		loc_1749E2
		PLA
		TAX
		PLA
		TAY
		PLA
		RTI
loc_1749E2:
		PLA
		TAX
		PLA
		TAY
		PLA
		JMP		_far_call

; =============== S U B	R O U T	I N E =======================================
_mmc1_reinit:
		INC		_mmc_reset_byte
		LDA		_cur_mmc_cmd
		STA		$9FFF
		LSR
		STA		$9FFF
		LSR
		STA		$9FFF
		LSR
		STA		$9FFF
		LSR
		STA		$9FFF
		LDA		_cur_chr0_bank_prg_hi
		STA		$BFFF
		LSR
		STA		$BFFF
		LSR
		STA		$BFFF
		LSR
		STA		$BFFF
		LSR
		STA		$BFFF
		LDA		#0
		STA		$DFFF
		LSR
		STA		$DFFF
		LSR
		STA		$DFFF
		LSR
		STA		$DFFF
		LSR
		STA		$DFFF
nullsub_2:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1749FF:
		LDA		byte_6D9
		BNE		loc_174A07
		JMP		loc_174AE6
loc_174A07:
		LDA		byte_6D3
		ORA		#4
		STA		_PPU_CTRL
loc_174A0F:
		JSR		sub_174A36
		JSR		sub_174A36
		LDA		byte_300,X
		STA		_PPU_ADDR
		INX
		LDA		byte_300,X
		STA		_PPU_ADDR
		INX
		LDA		byte_300,X
		STA		_PPU_DATA
		INX
		DEC		byte_6D9
		BNE		loc_174A0F
		LDA		#0
		STA		byte_44
		JMP		loc_174AE6

; =============== S U B	R O U T	I N E =======================================
sub_174A36:
		LDA		byte_300,X
		AND		#$3F
		STA		_PPU_ADDR
		INX
		INX
		LDA		byte_300,X
		STA		_PPU_ADDR
		INX
		LDA		byte_300,X
		STA		_PPU_DATA
		INX
		LDA		byte_300,X
		STA		_PPU_DATA
		INX
		DEC		byte_6D9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174A59:
		JMP		sub_17673E

; =============== S U B	R O U T	I N E =======================================
sub_174A5C:
		LDA		_PPU_STATUS
		LDX		#0
		LDA		byte_32
		BEQ		loc_174A6E
		CMP		#$FE
		BEQ		loc_174A84
		CMP		#$FD
		BEQ		loc_174A6E
		RTS
loc_174A6E:
		LDA		byte_28
		BEQ		loc_174A7A
		CMP		#$10
		BCC		sub_174A59
		BNE		nullsub_2
		BEQ		sub_1749FF
loc_174A7A:
		LDA		byte_29
		BNE		loc_174A84
		LDA		#4
		AND		_nmi_flags
		BEQ		loc_174A99
loc_174A84:
		LDA		#4
		ORA		_nmi_flags
		STA		_nmi_flags
		LDA		byte_29
		BEQ		loc_174A92
		STX		byte_29
		BNE		loc_174A9F
loc_174A92:
		LDA		byte_6D6
		CMP		#2
		BNE		loc_174AAC
loc_174A99:
		LDA		#1
		AND		_nmi_flags
		BNE		loc_174AA6
loc_174A9F:
		LDA		#2
		STA		_PPU_OAM_DMA
		STA		byte_33
loc_174AA6:
		LDA		#4
		AND		_nmi_flags
		BEQ		loc_174B0A
loc_174AAC:
		LDA		byte_6D9
		BEQ		loc_174AE6
loc_174AB1:
		LDY		#1
		LDA		byte_300,X
		BPL		loc_174ACC
		TAY
		LSR
		LSR
		LSR
		LSR
		AND		#4
		ORA		byte_6D3
		STA		_PPU_CTRL
		TYA
		INX
		LDY		byte_300,X
		AND		#$3F
loc_174ACC:
		INX
		STA		_PPU_ADDR
		LDA		byte_300,X
		INX
		STA		_PPU_ADDR
loc_174AD7:
		LDA		byte_300,X
		INX
		STA		_PPU_DATA
		DEY
		BNE		loc_174AD7
		DEC		byte_6D9
		BNE		loc_174AB1
loc_174AE6:
		LDA		#$3F
		STA		_PPU_ADDR
		LDX		#0
		STX		_PPU_ADDR
		LDA		_ram_pal_buf
		STA		_PPU_DATA
		STX		_PPU_ADDR
		STX		_PPU_ADDR
		STX		byte_6D8
		STX		byte_6DA
		LDA		#4
		EOR		#$FF
		AND		_nmi_flags
		STA		_nmi_flags
loc_174B0A:
		LDA		byte_6D3
		STA		_PPU_CTRL
		LDA		byte_6D4
		STA		_PPU_MASK
		LDA		byte_6D0
		STA		_PPU_SCROLL
		LDA		byte_6D1
		STA		_PPU_SCROLL
		RTS

;_unused_29:
;		.BYTE	$22,$65,$22,$85,$22,$A5,$22,$C5,$22,$E5,$23,  5,$23,$25,$23,$45

; =============== S U B	R O U T	I N E =======================================
__pause_or_skip:
		LDX		#0
loc_174B35:
		TXA
		PHA
		JSR		_calc_pads
		JSR		_vblank
		PLA
		TAX
		INX
		CPX		#$5A
		BEQ		locret_174B52
		LDA		_pads
		BNE		loc_174B35
loc_174B48:
		JSR		_vblank
		JSR		_calc_pads
		LDA		_pads
		BEQ		loc_174B48
locret_174B52:
		RTS

; =============== S U B	R O U T	I N E =======================================
_calc_pads:
		LDX		#0
		JSR		_calc_pad
		LDX		#1

; =============== S U B	R O U T	I N E =======================================
_calc_pad:
		JSR		_read_pad
loc_174B5D:
		LDA		_pads_tmp
		PHA
		JSR		_read_pad
		PLA
		CMP		_pads_tmp
		BNE		loc_174B5D
		LDY		_pads_tmp
		BEQ		loc_174B79
		LDY		_pads+4,X
		BNE		loc_174B72
		LDY		#8
loc_174B72:
		DEY
		BNE		loc_174B79
		STY		_pads+2,X
		LDY		#$B
loc_174B79:
		STY		_pads+4,X
		LDA		_pads_tmp
		AND		_pads+2,X
		STA		_pads+2,X
		EOR		_pads_tmp
		STA		_pads,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_read_pad:
		LDA		#1
		STA		_PAD0_REG
		LDA		#0
		STA		_PAD0_REG
		LDY		#8
loc_174B92:
		LDA		_PAD0_REG,X
		LSR
		BCS		loc_174B99
		LSR
loc_174B99:
		ROR		_pads_tmp
		DEY
		BNE		loc_174B92
		RTS

; =============== S U B	R O U T	I N E =======================================
_delay_n:
		PHA
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
_delay_ex:
		SEC
loc_174BA3:
		PHA
loc_174BA4:
		SBC		#1
		BNE		loc_174BA4
		PLA
		SBC		#1
		BNE		loc_174BA3
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_MAIN_ENTRY:
		LDX		#$FF
		TXS
		LDA		byte_6A58
		BEQ		loc_174BC7
loc_174BBB:
		JSR		__pause_or_skip
		FARX	_bB_s4
		JSR		sub_174369
		JSR		sub_1743B5
loc_174BC7:
		LDA		byte_6A58
		BNE		loc_174BF2
		FAR		$00,$7F		; _b17_s0_copyrights_screen
loc_174BCF:
		FAR		$01,$7F		; _b17_s1
		LDA		byte_6A36
		CMP		#1
		BEQ		loc_174BCF
		FARX	_b7_s8
		FAR		$62,$17		; _b7_sA_sram_test_and_init
		FARX	_bB_s4
		LDA		byte_60C7
		BMI		loc_174BFC
		ORA		#$80
		STA		byte_60C7
		FAR		$60,$17		; _bA_sF
		JMP		loc_174C5C
loc_174BF2:
		LDA		byte_60BA
		AND		#1
		BNE		loc_174BFC
		FAR		$2E,$17		; _b0_s64
loc_174BFC:
		LDA		#$50
		STA		byte_60C6
		JSR		_vblank_and_render_off_flag10_set
		FARX	_bE_sF
		JSR		__render_on_flag10_clear_reinit
		LDA		byte_60B8
		AND		#$BF
		STA		byte_60B8
		LDA		byte_60BA
		AND		#1
		BEQ		loc_174C2F
		LDA		byte_60BA
		AND		#$FC
		STA		byte_60BA
		LDA		#0
		JSR		loc_1752EB
		JSR		sub_174CCF
		FAR		$90,$17		; _bD_s20_npc_hndl31
		JMP		loc_174C5C
loc_174C2F:
		FAR		$50,$17		; _bE_s36
		LDA		byte_2F
		ORA		#1
		STA		byte_2F
		LDA		byte_6A58
		BNE		loc_174C51
		DEC		byte_6A58
		FAR		$2F,$17		; _bD_s28
		LDA		#0
		JSR		loc_1752EB
		JSR		sub_174CCF
		FAR		$8D,$17		; _bD_s24
		JMP		loc_174C5C
loc_174C51:
		LDA		#0
		JSR		loc_1752EB
		JSR		sub_174CCF
		FAR		$8C,$17		; _bD_s23
loc_174C5C:
		JSR		sub_174D56
		JMP		loc_174C5C

; =============== S U B	R O U T	I N E =======================================
sub_174C62:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		sub_174369
		LDA		byte_9A
		JSR		sub_1762FC
		JSR		sub_1743B5
		LDA		byte_60BA
		AND		#1
		BEQ		loc_174C84
		FAR		$46,$17		; _b0_s4F
		FAR		$51,$17		; _bE_s18
		FAR		$45,$17		; _b0_s4E
		JMP		loc_174C87
loc_174C84:
		FAR		$51,$17		; _bE_s18
loc_174C87:
		LDA		byte_2F
		AND		#1
		BEQ		loc_174C93
		JSR		sub_177CFC
		FAR		$47,$17		; _bC_s27
loc_174C93:
		JSR		_set_nmi_flag_10
		FAR		$93,$17		; _bE_s11
		JSR		_set_nmi_flag_10
		LDA		byte_2C
		BNE		loc_174CCA
		LDA		byte_2F
		AND		#1
		BEQ		loc_174CAD
		LDX		byte_30
		LDY		byte_31
		JMP		loc_174CB1
loc_174CAD:
		LDX		byte_2A
		LDY		byte_2B
loc_174CB1:
		STX		byte_100
		STY		byte_101
		FAR		$5A,$17		; _bC_s35
		JMP		loc_174CCA

; =============== S U B	R O U T	I N E =======================================
sub_174CBD:
		LDA		_mmc_cur_prg_bank
		PHA
		FARX	_b5_s9
		FAR		$5A,$17		; _bC_s35
		JSR		sub_175B0E
loc_174CCA:
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;nullsub_6:
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174CCF:
		FARX	_bE_sD
		JMP		sub_174DF2

; =============== S U B	R O U T	I N E =======================================
sub_174CD5:
		TAX
		LDA		_mmc_cur_prg_bank
		PHA
		TXA
		JSR		loc_1752EB
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_174CE2:
		JSR		sub_175A32
		JSR		sub_1762FC
		JSR		sub_1754AD
		FARX	_b7_s1C
		FARX	_b5_s9
		JSR		sub_1743B5
		JSR		sub_17578E
		LDA		#7
		JSR		_mmc1_prg_set
		JMP		sub_175B0E

; =============== S U B	R O U T	I N E =======================================
sub_174CFF:
		LDA		#9
		JSR		_mmc1_prg_set
		JSR		sub_E39E0
		LDA		#7
		JSR		_mmc1_prg_set
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D0D:
		LDA		#9
		JSR		_mmc1_prg_set
		JSR		loc_E39E8
		LDA		#$A
		JSR		_mmc1_prg_set
		RTS

; =============== S U B	R O U T	I N E =======================================
; moved back to bank C from bank 8, doesn't need anymore
;sub_174D1B:
;		LDA		#8
;		JSR		_mmc1_prg_set
;		JSR		sub_CBF80
;		JMP		sub_174D39
;
; =============== S U B	R O U T	I N E =======================================
;sub_174D26:
;		LDA		#8
;		JSR		_mmc1_prg_set
;		JSR		sub_CBF97
;		JMP		sub_174D39
;
; =============== S U B	R O U T	I N E =======================================
;sub_174D31:
;		LDA		#8
;		JSR		_mmc1_prg_set
;		JSR		sub_CBFAE
;
; =============== S U B	R O U T	I N E =======================================
;sub_174D39:
;		LDA		#$C
;		JSR		_mmc1_prg_set
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D3F:
		LDA		#9
		JSR		_mmc1_prg_set
		LDA		byte_E3990,Y
		PHA
		LDA		#0
		JSR		_mmc1_prg_set
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D4F:
		FAR		$70,$17		; _bC_s2E_vblank_count_50_wait_50_or_skip
		FAR		$71,$17		; _bC_s20
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D56:
		FARX	_bE_s1
		JSR		sub_174E52
		JSR		sub_174E1A
		FARX	_bD_s2
		JSR		sub_174D89
		FAR		$57,$17		; _bC_s1
		JSR		sub_174DCF
		JSR		sub_175AF7
		FARX	_bD_s9
		FARX	_bD_s6
		JSR		sub_174DC0
		JSR		sub_177116
		JSR		_vblank
		JSR		sub_1755AB
		FARX	_bA_s1
		JSR		sub_174E10
		INC		byte_90
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D89:
		LDA		byte_87
		CMP		#$10
		BEQ		loc_174D9C
		CMP		#8
		BEQ		loc_174D9C
		CMP		#$F
		BEQ		loc_174DA8
		CMP		#7
		BEQ		loc_174DA8
		RTS
loc_174D9C:
		LDA		byte_644
		CMP		#3
		BEQ		loc_174DB0
		AND		#1
		BEQ		loc_174DB6
		RTS
loc_174DA8:
		LDA		byte_644
		CMP		#1
		BEQ		loc_174DB6
		RTS
loc_174DB0:
		LDA		byte_87
		CMP		#8
		BNE		locret_174DC7
loc_174DB6:
		LDA		byte_9A
		BEQ		loc_174DBD
		JMP		sub_177517
loc_174DBD:
		JMP		sub_1773A6

; =============== S U B	R O U T	I N E =======================================
sub_174DC0:
		LDA		byte_644
		CMP		#3
		BEQ		loc_174DC8
locret_174DC7:
		RTS
loc_174DC8:
		LDA		byte_86
		BNE		locret_174DC7
		JMP		loc_174DB6

; =============== S U B	R O U T	I N E =======================================
sub_174DCF:
		LDA		byte_AA
		BEQ		loc_174DDA
		LDA		byte_90
		AND		#1
		BEQ		loc_174DE0
		RTS
loc_174DDA:
		LDA		byte_87
		AND		#1
		BEQ		locret_174DF1
loc_174DE0:
		FARX	_b6_s8
		LDA		byte_87
		BNE		locret_174DF1
		LDA		byte_6D9
		CMP		#1
		BNE		locret_174DF1
		JSR		sub_1742BA
locret_174DF1:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174DF2:
		FAR		$3E,$D7		; _sys0D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174DF6:
		LDX		#0
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#8
		JSR		_mmc1_prg_set
loc_174E01:
		LDA		_chr_character_sprites_data+$840,X
		STA		byte_7800,X
		INX
		CPX		#$60
		BNE		loc_174E01
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_174E10:
		LDA		byte_645
		CLC
		ADC		#8
		STA		byte_645
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174E1A:
		LDA		byte_8F
		CMP		#2
		BCS		loc_174E21
		RTS
loc_174E21:
		FARX	_bE_s26
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174E25:
		LDA		byte_2C
		BEQ		locret_174E51
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
loc_174E4D:
		STX		byte_9E
		STY		byte_9F
locret_174E51:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174E52:
		LDA		byte_90
		AND		#$F
		BNE		locret_174E51
		LDA		byte_87
		BNE		locret_174E51
		LDA		#$10
		STA		byte_44
		LDA		#1
		STA		byte_45
		LDY		#3
loc_174E66:
		LDA		(byte_44),Y
		CMP		#$FF
		BEQ		loc_174E78
		AND		#$40
		BNE		locret_174E77
		INY
		INY
		INY
		INY
		JMP		loc_174E66
locret_174E77:
		RTS
loc_174E78:
		LDA		byte_86
		BNE		loc_174E95
		INC		byte_6ACE
		FARX	_bC_s14
		JSR		sub_175049
		LDA		byte_8F
		BNE		locret_174E77
		LDA		byte_2C
		CMP		#2
		BEQ		loc_174E92
		FARX	_b0_s0_world_map_random_enounter_test
loc_174E92:
		JMP		loc_174E99
loc_174E95:
		LDA		byte_8F
		BNE		locret_174E77
loc_174E99:
		JMP		loc_174ED8
loc_174E9C:
		JSR		sub_174369
		LDA		#3
		STA		byte_2F
		LDA		#$2D
		STA		byte_2A
		LDA		#6
		STA		byte_30
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
loc_174ED8:
		JSR		sub_174E25
		JSR		_calc_pads
		LDA		byte_2C
		CMP		#2
		BNE		loc_174F04
		LDA		_pads
		AND		#1
		BEQ		loc_174EEE
		STA		byte_6BD
		RTS
loc_174EEE:
		LDA		_pads
		AND		#$F0
		BNE		loc_174EFE
		LDA		byte_6C9
		ORA		_pads
		STA		_pads
		JMP		loc_174FA2
loc_174EFE:
		STA		byte_6C9
		JMP		loc_174FA2
loc_174F04:
		LDA		byte_6E1
		BEQ		loc_174F53
		BMI		loc_174F53
		LDA		byte_6E2
		AND		#$20
		BNE		loc_174F1A
		LDA		byte_6E2
		AND		#$80
		BEQ		loc_174F53
		RTS
loc_174F1A:
		FAR		$A4,$17		; _bA_s6
		BCS		loc_174F3B
		LDA		byte_6EB
		BNE		loc_174F43
		INC		byte_6EF
		LDX		byte_6EF
		LDA		byte_174FF2,X
		CMP		#$FF
		BNE		loc_174F3E
		FAR		$A4,$17		; _bA_s6
		BCS		loc_174F3B
		LDA		#0
		STA		byte_6E1
loc_174F3B:
		JMP		loc_174F53
loc_174F3E:
		AND		#$F
		STA		byte_6EB
loc_174F43:
		DEC		byte_6EB
		LDX		byte_6EF
		LDA		byte_174FF2,X
		AND		#$F0
		STA		_pads
		JMP		loc_174FA2
loc_174F53:
		LDA		byte_9A
		CMP		#$1B
		BNE		loc_174FA2
		LDA		byte_93
		AND		#$1F
		CMP		#$1D
		BEQ		loc_174F85
		CMP		#$1C
		BNE		loc_174FA2
		LDA		_pads
		ASL
		ASL
		AND		#$CF
		STA		word_3C
		LDA		_pads
		LSR
		STA		word_3C+1
		LSR
		LSR
		AND		#$10
		ORA		word_3C
		STA		word_3C
		LDA		word_3C+1
		AND		#$20
		ORA		word_3C
		STA		_pads
		JMP		loc_174FA2
loc_174F85:
		LDA		_pads
		LSR
		LSR
		AND		#$3F
		STA		word_3C
		LDA		_pads
		ASL
		STA		word_3C+1
		ASL
		ASL
		AND		#$80
		ORA		word_3C
		STA		word_3C
		LDA		word_3C+1
		AND		#$40
		ORA		word_3C
		STA		_pads
loc_174FA2:
		BIT		byte_60C6
		BVS		loc_174FBB
		LDA		_pads
		AND		#$F0
		BEQ		locret_174FF1
		LDY		#0
		STY		byte_644
		TYA
		JSR		sub_1762C3
		LDA		#$E0
		STA		byte_60C6
loc_174FBB:
		LDA		byte_30
		STA		word_3C
		LDA		byte_31
		STA		word_3C+1
		ASL		_pads
		BCS		sub_17501F
		ASL		_pads
		BCS		sub_17501C
		ASL		_pads
		BCS		sub_175019
		ASL		_pads
		BCS		sub_175016
		LDA		byte_6E1
		BNE		locret_174FF1
		LDA		byte_8E
		BMI		locret_174FF1
		LDA		byte_8E
		ADC		#$10
		STA		byte_8E
		BPL		locret_174FF1
		FARX	_bE_sD
		JSR		_sram_b0_s31
		DEC		word_4
		LDA		word_4
		FARX	_bE_sC
locret_174FF1:
		RTS
byte_174FF2:
		.BYTE	$28,  2,$4B,  2,$1F,$14,  4,$41,$28,  1,$86,  7,$FF,$85,$FF,$15
		.BYTE	  8,$FF,$11,$82,  1,$42,$16,$82,$13,$89,$17,  2,$FF,$43,$1F,$12
		.BYTE	$FF,$84,$12,$FF

; =============== S U B	R O U T	I N E =======================================
sub_175016:
		JMP		loc_175601

; =============== S U B	R O U T	I N E =======================================
sub_175019:
		JMP		loc_175682

; =============== S U B	R O U T	I N E =======================================
sub_17501C:
		JMP		sub_1755CA

; =============== S U B	R O U T	I N E =======================================
sub_17501F:
		JMP		loc_17564B

; =============== S U B	R O U T	I N E =======================================
sub_175022:
		LDA		byte_2F
		AND		#2
		BNE		loc_175046
		LDA		byte_1C
		AND		#$1F
		CLC
		ADC		#$DF
		ADC		byte_6DE
		STA		byte_6DE
		BCC		loc_175046
		INC		byte_6DF
		LDA		byte_6DF
		CMP		#$CC
		BCC		loc_175046
		LDA		#0
		STA		byte_6DF
loc_175046:
		JMP		sub_17522D

; =============== S U B	R O U T	I N E =======================================
sub_175049:
		LDA		#$FF
		STA		byte_86
		LDA		byte_644
		STA		byte_6BC
		LDA		byte_9A
		BEQ		sub_175022
		LDA		byte_92
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		LDX		#$FF
		CMP		#7
		BEQ		loc_17509F
		LDA		byte_8B
		CMP		#$A9
		BNE		loc_175084
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
loc_175084:
		CMP		#$36
		BNE		loc_17509A
		LDA		byte_30
		BNE		loc_175092
		LDA		#$26
		STA		byte_30
		BNE		loc_17509A
loc_175092:
		CMP		#$27
		BNE		loc_17509A
		LDA		#1
		STA		byte_30
loc_17509A:
		JSR		sub_1750BC
		LDX		#0
loc_17509F:
		STX		byte_43
		JSR		sub_17536E
		LDA		byte_43
		LDX		byte_88
		DEX
		CPX		byte_30
		BCC		sub_1750D0
		LDX		byte_89
		DEX
		CPX		byte_31
		BCC		sub_1750D0
		CMP		#$FF
		BEQ		sub_1750BC
		FARX	_bC_s2A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1750BC:
		LDA		byte_92
		AND		#$E0
		CMP		byte_8C
		BEQ		locret_1750CF
		JSR		sub_17590B
		LDA		byte_6AE6
		ORA		#2
		STA		byte_6AE6
locret_1750CF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1750D0:
		LDA		byte_8B
		FARX	_bE_s1D
loc_1750D5:
		FARX	_bE_s19
		BCC		loc_1750DC
		INC		word_4
loc_1750DC:
		LDA		word_6C
		SEC
		SBC		#1
		STA		word_6C
		BCS		loc_1750D5
		DEC		word_6C+1
		LDA		word_6C+1
		CMP		#$73
		BNE		loc_1750D5
		LDA		word_4
		ASL
		TAY
		LDA		#6
		JSR		_mmc1_prg_set
		LDA		(byte_98),Y
		CMP		#$FF
		BEQ		loc_1750FF
		JMP		sub_175467
loc_1750FF:
		LDA		byte_8B
		CMP		#$2C
		BEQ		loc_175170
		CMP		#$2B
		BEQ		loc_175170
		CMP		#$F
		BEQ		loc_17513A
		LDX		byte_2C
		BEQ		loc_175123
		CMP		#$A
		BNE		loc_175164
		LDA		#$18
		STA		byte_2A
		LDA		#$62
		STA		byte_2B
		LDA		byte_644
		JMP		loc_175164
loc_175123:
		LDX		byte_8A
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#7
		BNE		loc_175185
		LDA		byte_8B
		CMP		#$41
		BCC		loc_175185
		FARX	_bE_s22
		JMP		loc_175185
loc_17513A:
		LDA		byte_31
		CMP		#3
		BEQ		loc_17514F
loc_175140:
		LDA		byte_60BA
		AND		#$FC
		STA		byte_60BA
		INC		byte_2B
		LDA		#2
		JMP		loc_175164
loc_17514F:
		LDA		byte_60BA
		AND		#1
		BEQ		loc_175140
		LDA		byte_60BA
		ORA		#2
		STA		byte_60BA
		LDA		#$6B
		STA		byte_2A
		LDA		#3
loc_175164:
		JSR		sub_175917
		TAX
		LDA		#0
		STA		byte_6B9
		JMP		loc_175192
loc_175170:
		LDA		#$49
		STA		byte_2B
		LDA		byte_30
		CMP		#$FF
		BEQ		loc_175181
		LDA		#$26
		STA		byte_2A
		JMP		loc_175185
loc_175181:
		LDA		#$23
		STA		byte_2A
loc_175185:
		FARX	_bB_s4
		JSR		sub_175917
loc_17518B:
		LDA		#$FF
		STA		byte_6B9
		LDX		#2
loc_175192:
		STX		byte_644
loc_175195:
		JSR		loc_1756F6
		LDA		byte_2F
		AND		#$FA
		STA		byte_2F
		LDA		byte_2C
		BEQ		loc_1751AA
		LDA		byte_60B8
		AND		#$BF
		STA		byte_60B8
loc_1751AA:
		LDA		#0
		STA		byte_9A
		JSR		sub_1762FC
		LDA		byte_60B7
		AND		#$7F
		STA		byte_60B7
		LDA		byte_60BA
		AND		#$EF
		STA		byte_60BA
		JSR		sub_1743B5
		JSR		_vblank_and_render_off_flag10_set
		FARX	_bE_sF
		FARX	_b5_s9
		LDA		byte_2C
		BEQ		loc_1751E5
		LDA		byte_2A
		STA		byte_100
		STA		byte_2D
		LDA		byte_2B
		STA		byte_101
		STA		byte_2E
		FAR		$35,$17		; _bD_s1B
		JMP		loc_1751F7
loc_1751E5:
		FARX	_bC_s3
		LDA		byte_60C5
		BPL		loc_1751F4
		LDA		byte_60CB
		AND		#$20
		BEQ		loc_1751F7
loc_1751F4:
		JSR		sub_175212
loc_1751F7:
		JSR		sub_175B0E
		LDA		#6
		JSR		_mmc1_prg_set
		FAR		$64,$17		; _b0_s66
		LDA		byte_60C5
		BPL		locret_175211
		LDA		byte_60CB
		AND		#$20
		BNE		locret_175211
		FAR		$7C,$17		; _b7_s19
locret_175211:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175212:
		FARX	_bE_s31
		FARX	_bB_s3_apu_load
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175219:
		LDA		#>[byte_7400]
		STA		word_6C+1
		LDA		#<[byte_7400]
		STA		word_6C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175222:
		INC		word_6C
		BNE		locret_175228
		INC		word_6C+1
locret_175228:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175229:
		FARX	_bE_s25
locret_17522C:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17522D:
		LDA		byte_8F
		BNE		sub_175229
		LDA		byte_2C
		CMP		#2
		BEQ		locret_17522C
		LDA		byte_2A
		STA		byte_74
		LDA		byte_2B
		STA		byte_75
		LDA		byte_92
		LDX		#$F
		CMP		#$A
		BEQ		loc_175292
		CMP		#$B
		BEQ		loc_175292
		CMP		#$C
		BEQ		loc_1752A1
		CMP		#$D
		BEQ		loc_1752A1
		CMP		#$11
		BEQ		loc_1752BE
		CMP		#$15
		BEQ		loc_1752BE
		CMP		#$E
		BEQ		loc_1752C7
		CMP		#$F
		BEQ		loc_1752C7
		CMP		#$13
		BEQ		loc_1752C7
		JSR		sub_17592E
		BCS		loc_1752B0
		LDA		byte_2A
		CMP		byte_9B
		BNE		loc_17527F
		LDA		byte_2B
		CMP		byte_9C
		BNE		loc_17527F
		LDA		byte_2F
		BNE		loc_17527F
		JMP		sub_175342
loc_17527F:
		FARX	_bE_s23
		LDA		#0
		STA		byte_6B9
		LDA		byte_6F0
		CMP		#$23
		BNE		locret_175291
		FAR		$04,$2F		; _sys12
locret_175291:
		RTS
loc_175292:
		CMP		#$B
		BNE		loc_1752BE
		LDA		byte_6B9
		BNE		locret_175291
		DEC		byte_2A
		DEC		byte_74
		BNE		loc_1752BE
loc_1752A1:
		CMP		#$D
		BNE		loc_1752BE
		LDA		byte_6B9
		BNE		locret_175291
		DEC		byte_74
		DEC		byte_2A
		BNE		loc_1752BE
loc_1752B0:
		PHA
		LDA		byte_2F
		ORA		#1
		STA		byte_2F
		JSR		sub_174369
		PLA
		JMP		loc_1752EB
loc_1752BE:
		LDA		byte_2F
		AND		#$FB
		STA		byte_2F
		JMP		loc_1752CD
loc_1752C7:
		LDA		byte_2F
		ORA		#4
		STA		byte_2F
loc_1752CD:
		LDA		byte_6B9
		BEQ		loc_1752D9
		LDA		byte_2F
		AND		#$FB
		STA		byte_2F
		RTS
loc_1752D9:
		LDA		byte_2F
		ORA		#1
		STA		byte_2F
		FARX	_bB_s4
		FAR		$82,$2F		; _sys12
		JSR		sub_174369
		JSR		sub_1759B8
loc_1752EB:
		PHA
		JSR		sub_175A32
		JSR		sub_1762FC
		JSR		sub_1754AD
loc_1752F5:
		PLA
		JSR		sub_17530A
		FARX	_bE_s31
		FARX	_bB_s3_apu_load
		LDA		byte_6AE6
		AND		#$FE
		STA		byte_6AE6
		JMP		sub_175B0E

; =============== S U B	R O U T	I N E =======================================
sub_17530A:
		PHA
		JSR		sub_17532D
		JSR		sub_17578E
		PLA
		BNE		loc_175324
		FARX	_bC_s4
		BIT		byte_60C5
		BVC		loc_17531E
		PLA
		PLA
loc_17531E:
		LDA		#$C
		JSR		_mmc1_prg_set
		RTS
loc_175324:
		FARX	_bC_s5
		LDA		#$C
		JSR		_mmc1_prg_set
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17532D:
		LDX		byte_30
		LDY		byte_31
		JSR		sub_176F34
		LDA		word_7C
		STA		byte_92
		AND		#$E0
		STA		byte_8C
		FARX	_b5_s9
		JMP		sub_1743B5

; =============== S U B	R O U T	I N E =======================================
sub_175342:
		FARX	_bE_s32
		FARX	_bB_s4
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
		FAR		$11,$2F		; _sys12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17536E:
		LDA		byte_8F
		BEQ		loc_175376
		FARX	_bE_s25
		RTS
loc_175376:
		LDA		byte_92
		FARX	_bE_s1A
		BCS		loc_175397
		CMP		#2
		BEQ		loc_17538D
		CMP		#7
		BEQ		loc_1753DF
		CMP		#8
		BEQ		sub_1753AA
		FARX	_bE_s24
locret_17538C:
		RTS
loc_17538D:
		JSR		sub_1753A1
		CMP		#1
		BEQ		locret_17538C
		JMP		sub_17542D
loc_175397:
		JSR		sub_1753A1
		CMP		#2
		BEQ		locret_17538C
		JMP		sub_17542F

; =============== S U B	R O U T	I N E =======================================
sub_1753A1:
		LDA		byte_94
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1753AA:
		LDA		byte_2A
		CMP		#$22
		BNE		loc_1753C0
		LDA		#$10
		STA		word_4
		LDA		#$E
		STA		word_4+1
		LDA		#$21
		FARX	_bC_sA
		JSR		sub_1742B0
loc_1753C0:
		LDA		byte_8B
		CMP		#$C5
		BNE		loc_1753CA
		FARX	_bC_s21
		RTS
loc_1753CA:
		CMP		#$A6
		BNE		loc_1753D4
		FARX	_bE_s22
		JMP		loc_174E9C
loc_1753D4:
		FARX	_bE_s22
		FARX	_bE_sE
		BCC		loc_1753E6
		JMP		loc_1752EB
loc_1753DF:
		LDA		byte_8B
		CMP		#$41
		BCS		loc_1753D4
		RTS
loc_1753E6:
		LDA		byte_8B
		CMP		#$D6
		BCC		loc_1753F8
		CMP		#$DB
		BCS		loc_1753F8
		LDA		#$A5
		STA		byte_2A
		LDA		#$DA
		STA		byte_2B
loc_1753F8:
		LDA		byte_644
		BEQ		loc_175409
		CMP		#1
		BEQ		loc_17540F
		CMP		#2
		BEQ		loc_17541B
		DEC		byte_2A
		BNE		loc_17541D
loc_175409:
		DEC		byte_2B
		DEC		byte_2B
		BNE		loc_17541D
loc_17540F:
		INC		byte_2A
		LDA		byte_9A
		CMP		#$19
		BCS		loc_17541D
		INC		byte_2A
		BNE		loc_17541D
loc_17541B:
		INC		byte_2B
loc_17541D:
		PLA
		PLA
		LDA		#0
		STA		byte_6B9
		FARX	_bB_s4
		JSR		sub_174369
		JMP		loc_175195

; =============== S U B	R O U T	I N E =======================================
sub_17542D:
		DEC		byte_30

; =============== S U B	R O U T	I N E =======================================
sub_17542F:
		LDA		byte_60C5
		AND		#$A0
		STA		byte_60C5
		LDA		#0
		STA		word_4
		JSR		sub_175219
loc_17543E:
		FARX	_bE_s19
		BCS		loc_175449
		JSR		sub_175222
		JMP		loc_17543E
loc_175449:
		FARX	_bE_s20
		CPX		byte_30
		BNE		loc_175454
		CPY		byte_31
		BEQ		loc_17545C
loc_175454:
		INC		word_4
		JSR		sub_175222
		JMP		loc_17543E
loc_17545C:
		LDA		word_4
		ASL
		TAY
		LDA		#6
		JSR		_mmc1_prg_set
		LDA		(byte_98),Y

; =============== S U B	R O U T	I N E =======================================
sub_175467:
		STA		byte_8B
		INY
		LDA		(byte_98),Y
		CMP		#$80
		BCC		loc_175488
		CMP		#$C0
		BCC		loc_175485
		CMP		#$F0
		BCC		loc_17547F
		CMP		#$FE
		BCC		loc_175482
		JMP		sub_175596
loc_17547F:
		JMP		sub_175516
loc_175482:
		JMP		sub_175569
loc_175485:
		JMP		sub_1754EE
loc_175488:
		JSR		sub_175917
		JSR		sub_1754B6
		JSR		sub_176F34
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#$F
		BNE		loc_1754A7
		FARX	_bC_s37
		LDX		byte_30
		LDY		byte_31
		JSR		sub_177CC8
loc_1754A7:
		LDA		#$FF
		PHA
		JMP		loc_1752F5

; =============== S U B	R O U T	I N E =======================================
sub_1754AD:
		JSR		_vblank_and_render_off_flag10_set
		JSR		_bE_sA
		JMP		__render_on_flag10_clear_reinit

; =============== S U B	R O U T	I N E =======================================
sub_1754B6:
		PHA
		JSR		sub_175A32
		JSR		sub_1762FC
		JSR		sub_1754AD
		JSR		sub_175219
		PLA
		STA		word_4
		LDA		#0
		STA		word_4+1
loc_1754CA:
		FARX	_bE_s19
		BCS		loc_1754D5
loc_1754CF:
		JSR		sub_175222
		JMP		loc_1754CA
loc_1754D5:
		LDA		word_4+1
		CMP		word_4
		BEQ		loc_1754E0
		INC		word_4+1
		JMP		loc_1754CF
loc_1754E0:
		STX		byte_644
		STX		byte_6BC
		FARX	_bE_s20
		STX		byte_30
		STY		byte_31
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1754EE:
		JSR		sub_175917
		SEC
		SBC		#$80
		STA		word_6C
		ASL
		CLC
		ADC		word_6C
		ADC		#<[_b6_d1]
		STA		word_6C
		LDA		#>[_b6_d1]
		ADC		#0
		STA		word_6C+1
		LDY		#0
		LDA		(word_6C),Y
		STA		byte_30
		INY
		LDA		(word_6C),Y
		STA		byte_31
		INY
		LDA		(word_6C),Y
		AND		#3
		STA		byte_644
		STA		byte_6BC
		LDA		(word_6C),Y
		AND		#4
		JMP		loc_1752EB

; =============== S U B	R O U T	I N E =======================================
sub_175516:
		SEC
		SBC		#$C0
		STA		word_6C
		ASL
		CLC
		ADC		word_6C
		ADC		#<[_b6_d2]
		STA		word_6C
		LDA		#>[_b6_d2]
		ADC		#0
		STA		word_6C+1
		LDY		#0
		LDA		(word_6C),Y
		PHA
		INY
		LDA		(word_6C),Y
		STA		byte_2A
		INY
		LDA		(word_6C),Y
		STA		byte_2B
		PLA
		PHA
		FARX	_bA_sC
		PLA
		JSR		sub_1754B6
		JSR		sub_17532D
		FARX	_bA_sD
		LDA		#2
		STA		byte_644
		STA		byte_6BC
		FARX	_bC_s5
		FARX	_bD_sD
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175569:
		SEC
		SBC		#$F0
		ASL
; here is just loading of data offset in external bank, but with this source we know
; all offsets at assembly time, so no need in this weird methods
; syscall 80 is bank6, offset 3 (_b6_d3)
		CLC
		ADC		#<[_b6_d3]
		STA		word_6C
		LDA		#>[_b6_d3]
		ADC		#0
		STA		word_6C+1
		LDA		#6
		JSR		_mmc1_prg_set
		LDY		#0
		LDA		(word_6C),Y
		STA		byte_2A
		INY
		LDA		(word_6C),Y
		STA		byte_2B

; =============== S U B	R O U T	I N E =======================================
sub_175596:
		FARX	_bE_s31
		CMP		#$11
		BEQ		loc_1755A0
		FARX	_bB_s4
loc_1755A0:
		FAR		$82,$2F		; _sys12
		JSR		sub_174369
		PLA
		PLA
		JMP		loc_17518B

; =============== S U B	R O U T	I N E =======================================
sub_1755AB:
		LDA		byte_92
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		CMP		#9
		BNE		locret_1755C9
		LDA		byte_90
		AND		#3
		BNE		locret_1755C9
		LDA		byte_644
		AND		#1
		BNE		locret_1755C9
		LDX		#3
		JSR		_vblank_count
locret_1755C9:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1755CA:
		JSR		sub_1757A4
		LDA		#3
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_1755ED
		DEC		byte_30
		DEC		word_3C
		DEC		word_3C
		DEC		byte_100
		JSR		sub_1757B6
		LDX		#3
		BCC		loc_175638
		INC		byte_30
		INC		byte_100
		JMP		sub_17574F
loc_1755ED:
		DEC		byte_2A
		DEC		byte_100
		JSR		sub_1757C0
		LDX		#3
		BCC		loc_175638
		INC		byte_2A
		INC		byte_100
		JMP		sub_17574F
loc_175601:
		JSR		sub_1757A4
		LDA		#0
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_175624
		DEC		byte_31
		DEC		word_3C+1
		DEC		word_3C+1
		DEC		byte_101
		JSR		sub_1757B6
		LDX		#0
		BCC		loc_175638
		INC		byte_31
		INC		byte_101
		JMP		sub_17574F
loc_175624:
		DEC		byte_2B
		DEC		byte_101
		JSR		sub_1757C0
		LDX		#0
		BCC		loc_175638
		INC		byte_2B
		INC		byte_101
		JMP		sub_17574F
loc_175638:
		JSR		sub_17574F
		FARX	_bD_s4
		LDA		#$10
		STA		byte_87
		LDA		#0
		STA		byte_85
		STA		byte_8E
		JMP		loc_1756BC
loc_17564B:
		JSR		sub_1757A4
		LDA		#1
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_17566E
		INC		byte_30
		INC		word_3C
		INC		word_3C
		INC		byte_100
		JSR		sub_1757B6
		LDX		#1
		BCC		loc_175638
		DEC		byte_30
		DEC		byte_100
		JMP		sub_17574F
loc_17566E:
		INC		byte_2A
		INC		byte_100
		JSR		sub_1757C0
		LDX		#1
		BCC		loc_175638
		DEC		byte_2A
		DEC		byte_100
		JMP		sub_17574F
loc_175682:
		JSR		sub_1757A4
		LDA		#2
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_1756A5
		INC		byte_31
		INC		word_3C+1
		INC		word_3C+1
		INC		byte_101
		JSR		sub_1757B6
		LDX		#2
		BCC		loc_175638
		DEC		byte_31
		DEC		byte_101
		JMP		sub_17574F
loc_1756A5:
		INC		byte_2B
		INC		byte_101
		JSR		sub_1757C0
		LDX		#2
		BCC		loc_1756B9
		DEC		byte_2B
		DEC		byte_101
		JMP		sub_17574F
loc_1756B9:
		JMP		loc_175638
loc_1756BC:
		LDA		byte_97
		AND		#$7F
		CMP		#$40
		BCC		loc_1756CE
		LDX		#word_4
		LDA		byte_73E
		BPL		loc_17570D
		JSR		sub_175730
loc_1756CE:
		LDA		byte_97
		AND		#$3F
		CMP		#$20
		BCC		loc_1756E0
		LDX		#byte_8
		LDA		byte_740
		BPL		loc_175713
		JSR		sub_175730
loc_1756E0:
		LDA		byte_97
		AND		#$1F
		CMP		#$10
		BCC		loc_1756F2
		LDX		#byte_C
		LDA		byte_742
		BPL		loc_175719
		JSR		sub_175730
loc_1756F2:
		LDA		byte_9A
		BNE		locret_17570C
loc_1756F6:
		BIT		byte_60B9
		BVS		loc_175701
		LDA		byte_2A
		EOR		#$80
		STA		byte_9E
loc_175701:
		BIT		byte_60CB
		BVS		locret_17570C
		LDA		byte_2A
		EOR		#$80
		STA		byte_9B
locret_17570C:
		RTS
loc_17570D:
		JSR		sub_17571F
		JMP		loc_1756CE
loc_175713:
		JSR		sub_17571F
		JMP		loc_1756E0
loc_175719:
		JSR		sub_17571F
		JMP		loc_1756F2

; =============== S U B	R O U T	I N E =======================================
sub_17571F:
		LDA		byte_100
		EOR		#$80
		STA		$100,X
		LDA		byte_101
		EOR		#$80
		STA		$101,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175730:
		LDA		$103,X
		AND		#3
		BEQ		loc_17574B
		CMP		#1
		BEQ		loc_175743
		CMP		#2
		BEQ		loc_175747
		DEC		$100,X
		RTS
loc_175743:
		INC		$100,X
		RTS
loc_175747:
		INC		$101,X
		RTS
loc_17574B:
		DEC		$101,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17574F:
		LDA		byte_2C
		BEQ		loc_17577B
		CMP		#1
		BNE		loc_175767
		LDA		byte_6E1
		CMP		#$40
		BEQ		loc_17577B
		STX		byte_6BA
loc_175761:
		LDA		byte_9A
		BEQ		loc_17577B
		BNE		loc_17576C
loc_175767:
		STX		byte_A0
		JMP		loc_175761
loc_17576C:
		LDA		byte_113
		AND		#$FC
		STA		byte_113
		TXA
		ORA		byte_113
		STA		byte_113
loc_17577B:
		STX		byte_644
		STX		byte_103
		LDA		byte_6AE6
		BPL		locret_17578D
		LDY		#3
		TXA
		ORA		(word_72),Y
		STA		(word_72),Y
locret_17578D:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17578E:
		LDA		byte_30
		STA		byte_100
		LDA		byte_31
		STA		byte_101
		LDA		#0
		STA		byte_102
		LDA		byte_644
		STA		byte_103
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1757A4:
		TXA
		PHA
		LDA		byte_8E
		BPL		loc_1757B3
		LDA		#0
		STA		byte_8E
		LDA		#4
		FARX	_bE_sB
loc_1757B3:
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1757B6:
		LDX		byte_30
		LDY		byte_31
		JSR		sub_176F34
		JMP		sub_175853

; =============== S U B	R O U T	I N E =======================================
sub_1757C0:
		LDX		byte_2A
		LDY		byte_2B
		JSR		sub_176D3A
		STA		byte_92
		LDX		byte_2C
		BEQ		loc_1757D2
		DEX
		BEQ		loc_175826
		CLC
		RTS
loc_1757D2:
		LDA		_debug_flags
		BNE		loc_1757E2
		JSR		_calc_pads
		LDA		_pads
		AND		#2
		BEQ		loc_1757E2
		CLC
		RTS
loc_1757E2:
		LDA		word_7C
		BEQ		loc_1757F4
		CMP		#6
		BEQ		loc_175818
		CMP		#$17
		BEQ		loc_175818
		CMP		#$10
		BEQ		loc_175818
		CLC
		RTS
loc_1757F4:
		LDX		#0
		STX		byte_8F
		LDA		byte_2D
		CMP		byte_2A
		BNE		loc_17580C
		LDA		byte_2E
		CMP		byte_2B
		BNE		loc_17580C
		STX		byte_6B9
		INX
		STX		byte_8F
		CLC
		RTS
loc_17580C:
		LDA		byte_9B
		CMP		byte_2A
		BNE		loc_17581B
		LDA		byte_9C
		CMP		byte_2B
		BEQ		loc_175824
loc_175818:
		FAR		$A2,$2F		; _sys12
loc_17581B:
		SEC
		RTS
loc_17581D:
		LDA		#0
		STA		byte_2C
		FARX	_bC_s6
loc_175824:
		CLC
		RTS
loc_175826:
		LDA		word_7C
		BNE		loc_175838
		LDA		byte_2A
		CMP		byte_9B
		BNE		loc_175836
		LDA		byte_2B
		CMP		byte_9C
		BEQ		loc_17581D
loc_175836:
		CLC
		RTS
loc_175838:
		CMP		#6
		BEQ		loc_175818
		CMP		#$17
		BEQ		loc_175818
		CMP		#$2F
		BCS		loc_175818
		LDA		#0
		STA		byte_2C
		FARX	_bC_s6
		JSR		sub_175212
		FAR		$32,$17		; _bD_s18
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175853:
		LDA		byte_8B
		BNE		loc_175877
		LDA		byte_60C6
		BPL		loc_175877
		LDA		byte_31
		CMP		#$18
		BNE		loc_175877
		JSR		sub_174CCF
		FAR		$87,$77		; _sys07_msg_m00_arg1
		DEC		byte_101
		DEC		byte_31
		FARX	_bE_s33
		INC		byte_101
		INC		byte_31
		SEC
		RTS
loc_175877:
		LDA		_debug_flags
		BNE		loc_17588B
		JSR		_calc_pads
		LDA		_pads
		AND		#2
		BEQ		loc_17588B
		LDA		word_7C
		STA		byte_92
		CLC
		RTS
loc_17588B:
		LDA		word_7C
		STA		byte_92
		AND		#$1F
		FARX	_bD_s3
		BCC		loc_1758C3
		AND		#$F
		CMP		#4
		BEQ		loc_1758A1
		FAR		$A2,$2F		; _sys12
loc_17589F:
		SEC
		RTS
loc_1758A1:
		LDA		byte_2C
		CMP		#1
		BEQ		loc_1758C1
		LDA		byte_8B
		CMP		#$A
		BEQ		loc_1758B1
		CMP		#$91
		BNE		loc_17589F
loc_1758B1:
		LDA		byte_30
		CMP		byte_2D
		BNE		loc_17589F
		LDA		byte_31
		CMP		byte_2E
		BNE		loc_17589F
		LDA		#1
		STA		byte_8F
loc_1758C1:
		CLC
		RTS
loc_1758C3:
		LDA		byte_6E1
		BEQ		loc_1758CF
		LDA		byte_6E2
		AND		#$20
		BNE		loc_1758DF
loc_1758CF:
		LDA		#$10
		STA		word_72
		LDA		#1
		STA		word_72+1
loc_1758D7:
		LDY		#0
		LDA		(word_72),Y
		CMP		#$FF
		BNE		loc_1758F2
loc_1758DF:
		LDA		byte_2C
		BEQ		loc_1758F0
		LDA		#0
		STA		byte_2C
		FARX	_bC_s31
		FARX	_bE_s31
		FARX	_bB_s3_apu_load
loc_1758F0:
		CLC
		RTS
loc_1758F2:
		CMP		byte_30
		BEQ		loc_175900
loc_1758F6:
		LDA		word_72
		CLC
		ADC		#4
		STA		word_72
		JMP		loc_1758D7
loc_175900:
		INY
		LDA		(word_72),Y
		CMP		byte_31
		BNE		loc_1758F6
		FARX	_bE_s21
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17590B:
		PHA
		LDA		byte_8C
		STA		byte_B
		PLA
		STA		byte_8C
		FARX	_bC_s2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175917:
		PHA
		FAR		$82,$2F		; _sys12
		JSR		sub_174369
		FARX	_bE_s1B
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175923:
		JSR		sub_17592E
		PHP
		LDA		#$E
		JSR		_mmc1_prg_set
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17592E:
		LDA		#<[_b6_d5]
		STA		word_6C
		LDA		#>[_b6_d5]
		STA		word_6C+1
		LDA		#6
		JSR		_mmc1_prg_set
loc_17593A:
		LDY		#0
		LDA		(word_6C),Y
		CMP		#$FF
		BEQ		loc_175954
		CMP		byte_74
		BEQ		loc_175956
loc_175946:
		LDA		word_6C
		CLC
		ADC		#6
		STA		word_6C
		BCC		loc_17593A
		INC		word_6C+1
		JMP		loc_17593A
loc_175954:
		CLC
		RTS
loc_175956:
		INY
		LDA		(word_6C),Y
		CMP		byte_75
		BNE		loc_175946
		LDY		#4
		LDA		(word_6C),Y
		LSR
		LSR
		AND		#2
		CMP		byte_2F
		BNE		loc_175946
		INY
		LDA		(word_6C),Y
		LDY		#1
		TAX
		CPX		#$72
		BNE		loc_175999
		LDY		#0
loc_175975:
		LDA		byte_60CD
		AND		byte_1759AB,Y
		CMP		byte_1759A6,Y
		BCC		loc_175986
		INY
		INX
		CPX		#$75
		BNE		loc_175975
loc_175986:
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
loc_175999:
		CPX		#$C6
		BNE		loc_1759ED
		LDA		byte_60CB
		BPL		loc_1759ED
		LDX		#$A6
		BNE		loc_1759ED
byte_1759A6:
		.BYTE	  3, $F,$3F,$FF,$FF
byte_1759AB:
		.BYTE	  3, $F,$3F,$FF,$FF
word_1759B0:
		.WORD	 $612, $914, $D1F, $F2A

; =============== S U B	R O U T	I N E =======================================
sub_1759B8:
		LDA		#<[_b6_d4]
		STA		word_6C
		LDA		#>[_b6_d4]
		STA		word_6C+1
		LDA		#6
		JSR		_mmc1_prg_set
		LDX		#0
loc_1759CD:
		LDY		#0
		LDA		(word_6C),Y
		CMP		byte_74
		BEQ		loc_1759E4
loc_1759D5:
		INX
		LDA		#5
		CLC
		ADC		word_6C
		STA		word_6C
		BCC		loc_1759CD
		INC		word_6C+1
		JMP		loc_1759CD
loc_1759E4:
		INY
		LDA		(word_6C),Y
		CMP		byte_75
		BEQ		loc_1759ED
		BNE		loc_1759D5
loc_1759ED:
		STX		byte_8B
		INY
		LDA		(word_6C),Y
		STA		byte_30
		INY
		LDA		(word_6C),Y
		STA		byte_31
		INY
loc_1759FA:
		LDA		byte_8B
		CMP		#$F
		BNE		loc_175A14
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
loc_175A14:
		LDA		byte_2C
		CMP		#1
		BNE		loc_175A22
		LDA		byte_30
		STA		byte_2D
		LDA		byte_31
		STA		byte_2E
loc_175A22:
		LDA		(word_6C),Y
		PHA
		AND		#3
		STA		byte_644
		STA		byte_6BC
		PLA
		AND		#4
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175A32:
		LDA		#0
		STA		word_6E+1
		LDA		byte_8B
		ASL
		ROL		word_6E+1
		CLC
		ADC		byte_8B
		STA		word_6E
		LDA		#0
		ADC		word_6E+1
		STA		word_6E+1
		LDA		#<[_map_data_lib]
		CLC
		ADC		word_6E
		STA		word_6E
		LDA		#>[_map_data_lib]
		ADC		word_6E+1
		STA		word_6E+1
		LDA		#7
		JSR		_mmc1_prg_set
		LDA		byte_9A
		STA		word_40+1
		LDY		#2
		LDA		(word_6E),Y
		STA		byte_9A
		LDY		#0
		LDA		(word_6E),Y
		STA		word_6C
		INY
		LDA		(word_6E),Y
		STA		word_6C+1
		LDX		#6
		LDA		byte_9A
		CMP		#$C
		BCC		loc_175A81
		INX
loc_175A81:
		TXA
		JSR		_mmc1_prg_set
		LDY		#0
		STY		word_4+1
		LDA		(word_6C),Y
		STA		byte_88
		STA		word_4
		INY
		LDA		(word_6C),Y
		STA		byte_89
		LDX		#word_4
		JSR		_mul16_to_8
		LDA		word_4
		SEC
		SBC		#1
		STA		word_4
		LDA		word_4+1
		SBC		#0
		STA		word_4+1
		LDX		#$10
loc_175AA8:
		ASL		word_4
		ROL		word_4+1
		BCS		loc_175AB2
		DEX
		JMP		loc_175AA8
loc_175AB2:
		STX		byte_77
		LDY		#2
		LDA		(word_6C),Y
		TAX
		AND		#$C0
		CLC
		ROL
		ROL
		ROL
		ADC		#2
		STA		byte_8D
		TXA
		AND		#$1F
		STA		byte_8A
		LDA		#<[_b6_d0]
		STA		byte_98
		LDA		#>[_b6_d0]
		STA		byte_99
		LDA		#6
		JSR		_mmc1_prg_set
		LDX		byte_8B
		BEQ		locret_175AF6
		LDY		#0
loc_175AE1:
		LDA		(byte_98),Y
		CMP		#$FF
		BEQ		loc_175AED
loc_175AE7:
		JSR		sub_175AF0
		JMP		loc_175AE1
loc_175AED:
		DEX
		BNE		loc_175AE7

; =============== S U B	R O U T	I N E =======================================
sub_175AF0:
		INC		byte_98
		BNE		locret_175AF6
		INC		byte_99
locret_175AF6:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175AF7:
		LDA		#5
		JSR		_mmc1_prg_set
		JSR		sub_175B17
		FARX	_b5_s7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175B03:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		sub_175AF7
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_175B0E:
		JSR		_clear_nmi_flag_10
		JSR		sub_17443A
		JMP		_pal_fade_in

; =============== S U B	R O U T	I N E =======================================
sub_175B17:
		LDA		byte_87
		BEQ		locret_175B38
		LDA		#$FF
		STA		byte_86
		DEC		byte_87
		LDA		byte_87
		BNE		loc_175B27
		STA		byte_86
loc_175B27:
		JSR		sub_175F08
		LDX		byte_644
		BEQ		loc_175B39
		DEX
		BEQ		loc_175B58
		DEX
		BEQ		loc_175B49
		DEX
		BEQ		loc_175B67
locret_175B38:
		RTS
loc_175B39:
		DEC		byte_6D1
		LDA		byte_6D1
		CMP		#$FF
		BNE		locret_175B38
		LDA		#$EF
loc_175B45:
		STA		byte_6D1
		RTS
loc_175B49:
		INC		byte_6D1
		LDA		byte_6D1
		CMP		#$F0
		BEQ		loc_175B54
		RTS
loc_175B54:
		LDA		#0
		BEQ		loc_175B45
loc_175B58:
		INC		byte_6D0
		BEQ		loc_175B5E
		RTS
loc_175B5E:
		LDA		byte_6D3
		EOR		#1
		STA		byte_6D3
		RTS
loc_175B67:
		DEC		byte_6D0
		LDA		byte_6D0
		CMP		#$FF
		BEQ		loc_175B5E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175B72:
		LDA		byte_2F
		AND		#1
		BEQ		loc_175BA7
		LDA		word_7C
		AND		#$E0
		TAX
		LDA		word_7C
		AND		#$1F
		CPX		byte_8C
		BEQ		loc_175BAB
		LDA		byte_9A
		CMP		#$19
		BCC		loc_175B9B
		LDA		word_7C
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		TAY
		TXA
		CPY		#7
		BEQ		loc_175BAB
loc_175B9B:
		LDA		byte_8C
		BNE		loc_175BA3
		LDA		#$20
		BNE		loc_175BAB
loc_175BA3:
		LDA		#$21
		BNE		loc_175BAB
loc_175BA7:
		LDA		word_7C
		BEQ		loc_175BB5
loc_175BAB:
		ASL
		ASL
loc_175BAD:
		TAX
		LDY		word_4+1
		INC		word_4+1
		INC		word_4+1
		RTS
loc_175BB5:
		LDA		#0
		STA		_tmp12
		JSR		sub_175BC7
		LDA		_tmp12
		BEQ		loc_175BAD
		ASL
		ASL
		ADC		#$7C
		JMP		loc_175BAD

; =============== S U B	R O U T	I N E =======================================
sub_175BC7:
		LDA		word_7C+1
		PHA
		LDA		byte_7B
		JSR		sub_175BE5
		LDX		byte_10
		LDY		byte_11
		INY
		JSR		sub_175BE0
		PLA
		JSR		sub_175BE5
		LDX		byte_10
		LDY		byte_11
		DEY

; =============== S U B	R O U T	I N E =======================================
sub_175BE0:
		JSR		sub_176C99
		LDA		word_7C

; =============== S U B	R O U T	I N E =======================================
sub_175BE5:
		CLC
		BEQ		loc_175C00
		CMP		#$1B
		CLC
		BEQ		loc_175C00
		CMP		#$1F
		CLC
		BEQ		loc_175C00
		CMP		#$17
		CLC
		BEQ		loc_175C00
		CMP		#$2F
		BCC		loc_175BFF
		CLC
		JMP		loc_175C00
loc_175BFF:
		SEC
loc_175C00:
		ROL		_tmp12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175C03:
		JSR		sub_175C19
		JSR		sub_175C19
		DEX
		TXA
		LSR
		LSR
		TAX
		LDA		byte_7300,X
		LDY		byte_85
		STA		byte_68F,Y
		INC		byte_85
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175C19:
		LDA		byte_7200,X
		STA		byte_647,Y
		INX
		INY
		LDA		byte_7200,X
		STA		byte_647,Y
		INX
		TYA
		CLC
		ADC		#$23
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175C2E:
		SEC
		SBC		#4
		EOR		#3
		SEC
		SBC		#1
		ASL
		STA		word_4
		ASL
		CLC
		ADC		word_4
		TAX
		ASL
		SEC
		SBC		#2
		BCS		loc_175C46
		ADC		#$40
loc_175C46:
		STA		word_4
		TXA
		CMP		#6
		BCC		loc_175C57
		SEC
		SBC		#6
		CMP		#6
		BCC		loc_175C57
		SEC
		SBC		#6
loc_175C57:
		CLC
		ADC		byte_6D8
		STA		byte_74
		LDA		byte_644
		BEQ		loc_175C64
		LDA		#$1D
loc_175C64:
		STA		word_4+1
		LDY		#0
		TXA
		CLC
		ADC		#$15
		TAX
loc_175C6D:
		TYA
		PHA
		TXA
		PHA
		LDA		byte_2F
		AND		#1
		BEQ		loc_175C7D
		JSR		sub_176084
		JMP		loc_175C80
loc_175C7D:
		LDA		byte_580,X
loc_175C80:
		TAX
		LDA		byte_7300,X
		STA		byte_A
		JSR		sub_174690
		LDX		byte_6D8
		STA		byte_302,X
		LDA		byte_20
		STA		byte_300,X
		LDA		byte_1F
		STA		byte_301,X
		INC		word_4
		INC		word_4
		INC		byte_6D8
		INC		byte_6D8
		INC		byte_6D8
		PLA
		TAX
		INX
		PLA
		TAY
		INY
		CPY		#6
		BNE		loc_175C6D
		TYA
		CLC
		ADC		byte_6D9
		STA		byte_6D9
		LDA		#1
		STA		byte_29
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175CBD:
		LDX		byte_6D8
		LDA		byte_20
		STA		byte_300,X
		LDA		byte_1F
		STA		byte_301,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175CCB:
		SEC
		SBC		#4
		STA		word_4+1
		PHA
		LDA		#5
		CLC
		ADC		byte_6D9
		STA		byte_6D9
		PLA
		ASL
		ASL
		CLC
		ADC		word_4+1
		TAX
		ASL
		STA		word_4+1
		LDA		byte_644
		LDY		#0
		CMP		#3
		BEQ		loc_175CEF
		LDY		#$1F
loc_175CEF:
		STY		word_4
		LDY		#0
		TXA
		STA		byte_A
		ASL
		CLC
		ADC		byte_A
		ADC		#4
		TAX
loc_175CFD:
		TYA
		PHA
		TXA
		PHA
		LDA		byte_2F
		AND		#1
		BEQ		loc_175D0D
		JSR		sub_176084
		JMP		loc_175D10
loc_175D0D:
		LDA		byte_580,X
loc_175D10:
		TAX
		LDA		byte_7300,X
		STA		byte_A
		JSR		sub_1746C8
		LDA		byte_644
		CMP		#3
		BEQ		loc_175D2F
		LDA		word_6
		CLC
		ADC		#2
		CMP		#$40
		BCC		loc_175D39
		SEC
		SBC		#$40
		JMP		loc_175D39
loc_175D2F:
		LDA		word_6
		SEC
		SBC		#2
		BPL		loc_175D39
		CLC
		ADC		#$40
loc_175D39:
		STA		word_6
		LDA		byte_8
		JSR		sub_1746F4
		JSR		sub_174693
		PHA
		LDA		word_4+1
loc_175D46:
		CMP		#$A
		BCC		loc_175D50
		SEC
		SBC		#$A
		JMP		loc_175D46
loc_175D50:
		JSR		sub_175CBD
		PLA
		STA		byte_302,X
		INC		word_4+1
		INC		word_4+1
		INC		byte_6D8
		INC		byte_6D8
		INC		byte_6D8
		PLA
		TAX
		INX
		INX
		INX
		PLA
		TAY
		INY
		CPY		#5
		BNE		loc_175CFD
		LDA		#1
		STA		byte_29
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175D75:
		SEC
		SBC		#9
		JMP		loc_175D7E
loc_175D7B:
		SEC
		SBC		#1
loc_175D7E:
		LDY		#$F
		STY		byte_F
		STA		word_4+1
		ASL
		ASL
		ASL
		ASL
		SEC
		SBC		word_4+1
		STA		word_4+1
		STA		byte_E
		LDX		#$1E
		LDA		byte_644
		CMP		#1
		BEQ		loc_175D9A
		LDX		#0
loc_175D9A:
		STX		word_4
		JSR		sub_1742CF
		JSR		sub_175DA5
		JMP		sub_175DFE

; =============== S U B	R O U T	I N E =======================================
sub_175DA5:
		LDA		byte_644
		CMP		#3
		BEQ		loc_175DE0
		LDA		byte_1F
		AND		#$1F
		CMP		#$1E
		BCC		loc_175DD6
		LDA		byte_20
		CMP		#$24
		BCS		loc_175DCC
		CLC
		ADC		#4
		STA		byte_20
loc_175DBF:
		LDA		#2
		CLC
		ADC		byte_1F
		SEC
		SBC		#$20
		STA		byte_1F
		JMP		locret_175DFD
loc_175DCC:
		SEC
		SBC		#4
		STA		byte_20
		LDA		byte_1F
		JMP		loc_175DBF
loc_175DD6:
		LDA		#2
		CLC
		ADC		byte_1F
		STA		byte_1F
		JMP		locret_175DFD
loc_175DE0:
		LDA		byte_1F
		AND		#$1F
		CMP		#2
		BCS		loc_175DF6
		LDA		byte_20
		EOR		#4
		STA		byte_20
		LDA		byte_1F
		CLC
		ADC		#$1E
		STA		byte_1F
		RTS
loc_175DF6:
		LDA		byte_1F
		SEC
		SBC		#2
		STA		byte_1F
locret_175DFD:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175DFE:
		LDA		byte_20
		AND		#$23
		CMP		#$23
		BCC		loc_175E1B
		LDX		byte_1F
		CPX		#$C0
		BCC		loc_175E1B
		TXA
		SEC
		SBC		#$C0
		STA		byte_1F
		LDA		byte_20
		AND		#$FC
		STA		byte_20
		JMP		loc_175E3B
loc_175E1B:
		CMP		#$22
		BCC		loc_175E3B
		BEQ		loc_175E25
		LDA		#7
		STA		byte_F
loc_175E25:
		DEC		byte_F
		LDA		byte_1F
		LSR
		LSR
		LSR
		LSR
		LSR
		STA		byte_B
		LDA		byte_F
		SEC
		SBC		byte_B
		STA		byte_F
		LDA		#$FF
		STA		byte_B
loc_175E3B:
		JSR		sub_175E41
		JMP		sub_175E62

; =============== S U B	R O U T	I N E =======================================
sub_175E41:
		LDA		byte_644
		CMP		#3
		BEQ		locret_175E61
		LDA		byte_1F
		TAX
		AND		#$1F
		CMP		#$1E
		BCC		loc_175E5D
		TXA
		SEC
		SBC		#$20
		STA		byte_1F
		LDA		byte_20
		EOR		#4
		STA		byte_20
loc_175E5D:
		INC		byte_1F
		INC		byte_1F
locret_175E61:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175E62:
		INC		byte_6D9
		LDX		byte_6D8
		LDA		byte_20
		ORA		#$C0
		STA		byte_29
		STA		byte_300,X
		LDA		byte_F
		STA		byte_301,X
		LDA		byte_1F
		STA		byte_302,X
		INC		byte_6D8
		INC		byte_6D8
		INC		byte_6D8
		LDX		byte_87
		LDA		byte_644
		CMP		#1
		BNE		loc_175E93
		CPX		#8
		BCS		loc_175E9E
		BCC		loc_175E97
loc_175E93:
		CPX		#7
		BCC		loc_175E9E
loc_175E97:
		CLC
		LDA		#$20
		ADC		byte_E
		STA		byte_E
loc_175E9E:
		LDA		byte_F
		STA		byte_10
		LDY		byte_E
		LDX		byte_6D8
loc_175EA7:
		LDA		byte_647,Y
		STA		byte_300,X
		INX
		INY
		INC		byte_E
		DEC		byte_F
		BNE		loc_175EA7
		STX		byte_6D8
		LDA		byte_B
		BPL		locret_175F07
		LDA		word_4+1
		CLC
		ADC		byte_10
		STA		word_4+1
		JSR		sub_1742CF
		JSR		sub_175DA5
		JSR		sub_175E41
		INC		byte_6D9
		LDX		byte_6D8
		LDA		byte_20
		ORA		#$C0
		STA		byte_300,X
		INX
		INC		byte_6D8
		LDA		byte_10
		LDA		#$F
		SEC
		SBC		byte_10
		STA		byte_300,X
		INX
		INC		byte_6D8
		STA		byte_F
		LDA		byte_1F
		STA		byte_300,X
		INX
		INC		byte_6D8
		LDY		byte_E
loc_175EF8:
		LDA		byte_647,Y
		STA		byte_300,X
		INX
		INY
		DEC		byte_F
		BNE		loc_175EF8
		STX		byte_6D8
locret_175F07:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175F08:
		LDA		byte_2F
		AND		#1
		STA		byte_9
		LDA		#0
		STA		byte_B
		LDA		byte_644
		AND		#1
		BNE		sub_175F51
		JMP		loc_175F70

; =============== S U B	R O U T	I N E =======================================
sub_175F1C:
		LDA		byte_9
		BEQ		loc_175F23
		LDA		byte_30
		RTS
loc_175F23:
		LDA		byte_2A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175F26:
		LDA		byte_9
		BEQ		loc_175F2D
		LDA		byte_31
		RTS
loc_175F2D:
		LDA		byte_2B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175F30:
		LDA		byte_2F
		AND		#1
		BEQ		loc_175F39
		JMP		sub_176F34
loc_175F39:
		JMP		sub_176D3F

; =============== S U B	R O U T	I N E =======================================
sub_175F3C:
		JMP		sub_176198

; =============== S U B	R O U T	I N E =======================================
sub_175F3F:
		JMP		sub_176038

; =============== S U B	R O U T	I N E =======================================
sub_175F42:
		JMP		sub_1761E8

; =============== S U B	R O U T	I N E =======================================
sub_175F45:
		JMP		sub_1760D5

; =============== S U B	R O U T	I N E =======================================
sub_175F48:
		JMP		sub_175D75

; =============== S U B	R O U T	I N E =======================================
sub_175F4B:
		JMP		sub_175C2E

; =============== S U B	R O U T	I N E =======================================
sub_175F4E:
		JMP		sub_175CCB

; =============== S U B	R O U T	I N E =======================================
sub_175F51:
		LDA		byte_87
		AND		#7
		BEQ		locret_175F8F
		CMP		#7
		BEQ		locret_175F8F
		LDA		byte_87
		CMP		#$B
		BEQ		sub_175F42
		BCS		sub_175F3C
		CMP		#9
		BCS		sub_175F48
		CMP		#3
		BEQ		locret_175F8F
		BCS		sub_175F4E
		JMP		loc_175D7B
loc_175F70:
		LDA		byte_87
		AND		#7
		BEQ		locret_175F8F
		CMP		#7
		BEQ		locret_175F8F
		LDA		byte_87
		CMP		#$B
		BEQ		sub_175F3F
		BCS		sub_175F90
		CMP		#9
		BCS		sub_175F45
		CMP		#3
		BEQ		locret_175F8F
		BCS		sub_175F4B
		JMP		sub_1760DB
locret_175F8F:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175F90:
		LDA		byte_644
		BNE		loc_175FA0
		JSR		sub_175F26
		SEC
		SBC		#8
		STA		byte_11
		JMP		loc_175FA8
loc_175FA0:
		JSR		sub_175F26
		CLC
		ADC		#6
		STA		byte_11
loc_175FA8:
		LDA		byte_87
		SEC
		SBC		#$C
		ASL
		STA		byte_10
		ASL
		CLC
		ADC		byte_10
		STA		word_4
		PHA
		INC		word_4
		SEC
		SBC		#8
		STA		byte_10
		JSR		sub_175F1C
		CLC
		ADC		byte_10
		STA		byte_10
		JSR		sub_175FF4
		INC		byte_10
		JSR		sub_176007
		JSR		sub_175FF4
		PLA
		BNE		loc_175FE3
		STA		word_4
		LDX		byte_10
		LDY		byte_11
		DEY
		DEX
		DEX
		DEX
		DEX
		DEX
		JMP		loc_175FEB
loc_175FE3:
		JSR		sub_176007
		LDX		byte_10
		LDY		byte_11
		INY
loc_175FEB:
		JSR		sub_175F30
		LDX		word_4
		STA		byte_594,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175FF4:
		JSR		sub_17601F
		INC		byte_11
		JSR		sub_176017
		JSR		sub_17601F
		INC		byte_11
		JSR		sub_176017
		JMP		sub_17601F

; =============== S U B	R O U T	I N E =======================================
sub_176007:
		DEC		byte_11
		DEC		byte_11
		INC		byte_10
		INC		byte_10
		LDA		word_4
		SEC
		SBC		#$25
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176017:
		LDA		word_4
		CLC
		ADC		#$14
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17601F:
		LDX		byte_10
		LDY		byte_11
		JSR		sub_176CB9
		LDX		word_4
		LDA		byte_7B
		STA		byte_580,X
		LDA		word_7C
		STA		byte_581,X
		LDA		word_7C+1
		STA		byte_582,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176038:
		LDA		#$15
		STA		word_4
		LDA		#0
		STA		word_4+1
loc_176040:
		JSR		sub_176050
		INC		word_4
		INC		word_4+1
		INC		word_4+1
		LDA		word_4
		CMP		#$27
		BNE		loc_176040
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176050:
		LDA		byte_9
		BNE		loc_17607C
		LDX		word_4
		LDA		byte_580,X
		BNE		loc_17605E
		JSR		sub_1760B1
loc_17605E:
		ASL
		ASL
		TAY
		LDX		word_4+1
		LDA		byte_7200,Y
		STA		byte_647,X
		LDA		byte_7201,Y
		STA		byte_648,X
		LDA		byte_7202,Y
		STA		byte_66B,X
		LDA		byte_7203,Y
		STA		byte_66C,X
		RTS
loc_17607C:
		LDX		word_4
		JSR		sub_176084
		JMP		loc_17605E

; =============== S U B	R O U T	I N E =======================================
sub_176084:
		LDA		byte_580,X
		TAX
		AND		#$E0
		CMP		byte_8C
		BNE		loc_176092
		TXA
		AND		#$1F
		RTS
loc_176092:
		LDA		byte_9A
		CMP		#$19
		BCC		loc_1760A8
		TXA
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		TAY
		TXA
		CPY		#7
		BNE		loc_1760A8
		RTS
loc_1760A8:
		LDX		#$20
		LDA		byte_8C
		BEQ		loc_1760AF
		INX
loc_1760AF:
		TXA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1760B1:
		LDA		#0
		STA		_tmp12
		LDA		byte_57F,X
		JSR		sub_175BE5
		LDA		byte_594,X
		JSR		sub_175BE5
		LDA		byte_581,X
		JSR		sub_175BE5
		LDA		byte_56C,X
		JSR		sub_175BE5
		LDA		_tmp12
		BEQ		locret_1760D4
		CLC
		ADC		#$1F
locret_1760D4:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1760D5:
		SEC
		SBC		#9
		JMP		sub_1760DE

; =============== S U B	R O U T	I N E =======================================
sub_1760DB:
		SEC
		SBC		#1

; =============== S U B	R O U T	I N E =======================================
sub_1760DE:
		ASL
		STA		word_4
		ASL
		ASL
		ASL
		CLC
		ADC		word_4
		STA		byte_E
		SEC
		SBC		#2
		PHA
		AND		#$1F
		STA		word_4
		LDA		byte_644
		BEQ		loc_1760F8
		LDA		#$1E
loc_1760F8:
		STA		word_4+1
		JSR		sub_1742CF
		PLA
		BPL		loc_176106
		LDA		byte_20
		EOR		#4
		STA		byte_20
loc_176106:
		LDX		#$12
		LDA		byte_1F
		AND		#$1F
		CMP		#$10
		BCC		loc_17611E
		STA		byte_A
		LDA		#$20
		SEC
		SBC		byte_A
		TAX
		STA		byte_A
		LDA		#$FF
		STA		byte_B
loc_17611E:
		STX		byte_F
		INC		byte_6D9
		LDX		byte_6D8
		LDA		byte_20
		ORA		#$80
		STA		byte_29
		STA		byte_300,X
		INX
		LDA		byte_F
		STA		byte_300,X
		INX
		LDA		byte_1F
		STA		byte_300,X
		INX
		LDY		byte_87
		LDA		byte_644
		BNE		loc_176149
		CPY		#7
		BCC		loc_176154
		BCS		loc_17614D
loc_176149:
		CPY		#8
		BCS		loc_176154
loc_17614D:
		CLC
		LDA		byte_E
		ADC		#$24
		STA		byte_E
loc_176154:
		LDY		byte_E
		JSR		sub_176188
		LDA		byte_B
		BPL		locret_176197
		LDA		byte_1F
		AND		#$1F
		STA		word_4
		LDA		byte_1F
		SEC
		SBC		word_4
		STA		byte_1F
		INC		byte_6D9
		LDA		byte_20
		EOR		#4
		ORA		#$80
		STA		byte_300,X
		INX
		LDA		#$12
		SEC
		SBC		byte_A
		STA		byte_300,X
		STA		byte_F
		INX
		LDA		byte_1F
		STA		byte_300,X
		INX

; =============== S U B	R O U T	I N E =======================================
sub_176188:
		LDA		byte_647,Y
		STA		byte_300,X
		INX
		INY
		DEC		byte_F
		BNE		sub_176188
		STX		byte_6D8
locret_176197:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176198:
		LDX		#8
		LDA		byte_644
		CMP		#1
		BEQ		loc_1761A3
		LDX		#$F7
loc_1761A3:
		STX		byte_10
		JSR		sub_175F1C
		CLC
		ADC		byte_10
		STA		byte_10
		LDA		byte_87
		SEC
		SBC		#$C
		ASL
		STA		word_4+1
		ASL
		STA		byte_11
		ASL
		ASL
		CLC
		ADC		word_4+1
		STA		word_4
		LDA		word_4+1
		CLC
		ADC		byte_11
		SBC		#7
		STA		byte_11
		JSR		sub_175F26
		CLC
		ADC		byte_11
		STA		byte_11
		JSR		sub_1761D9
		JSR		sub_1761D9
		JMP		sub_1761D9

; =============== S U B	R O U T	I N E =======================================
sub_1761D9:
		JSR		loc_1761DC
loc_1761DC:
		JSR		sub_17601F
		INC		word_4
		INC		word_4
		INC		word_4
		INC		byte_11
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1761E8:
		LDA		#4
		STA		word_4
		LDA		#0
		STA		word_4+1
loc_1761F0:
		JSR		sub_176204
		INC		word_4
		INC		word_4
		INC		word_4
		INC		word_4+1
		INC		word_4+1
		LDA		word_4
		CMP		#$31
		BNE		loc_1761F0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176204:
		LDA		byte_9
		BEQ		loc_176210
		LDX		word_4
		JSR		sub_176084
		JMP		loc_17621A
loc_176210:
		LDX		word_4
		LDA		byte_580,X
		BNE		loc_17621A
		JSR		sub_176238
loc_17621A:
		ASL
		ASL
		TAY
		LDX		word_4+1
		LDA		byte_7200,Y
		STA		byte_647,X
		LDA		byte_7201,Y
		STA		byte_667,X
		LDA		byte_7202,Y
		STA		byte_648,X
		LDA		byte_7203,Y
		STA		byte_668,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176238:
		LDA		#0
		STA		_tmp12
		LDA		byte_57F,X
		JSR		sub_175BE5
		LDA		byte_583,X
		JSR		sub_175BE5
		LDA		byte_581,X
		JSR		sub_175BE5
		LDA		byte_57D,X
		JSR		sub_175BE5
		LDA		_tmp12
		BEQ		locret_17625B
		CLC
		ADC		#$1F
locret_17625B:
		RTS

; =============== S U B	R O U T	I N E =======================================
_mmc1_prg5_set_ppu_reset:
		LDA		#5
		JSR		_mmc1_prg_set
		LDA		_PPU_STATUS
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176265:
		LDA		byte_83438,X
		STA		_PPU_ADDR
		LDA		byte_83438+1,X
		STA		_PPU_ADDR
		LDA		#0
		STA		word_60

; =============== S U B	R O U T	I N E =======================================
sub_176275:
		LDA		byte_83438+2,X
		STA		byte_24
		LDA		byte_83438+3,X
		STA		_tmp21+2
		LDA		byte_83438+4,X
		STA		byte_56
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176285:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		_mmc1_prg5_set_ppu_reset
		LDX		#$FF
		STX		_spr_ram
		LDX		#5
		JSR		sub_176265
		JMP		loc_17646A

; =============== S U B	R O U T	I N E =======================================
sub_176299:
		CLC
		ADC		#$F
		STA		word_4A
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		_mmc1_prg5_set_ppu_reset
		JMP		loc_1762F4

; =============== S U B	R O U T	I N E =======================================
sub_1762A8:
		STA		word_4A
		STY		byte_4D
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		_mmc1_prg5_set_ppu_reset
		LDA		byte_4D
		ASL
		ASL
		CLC
		ADC		byte_4D
		ADC		#$A
		TAX
		JSR		sub_176265
		JMP		loc_1762F4

; =============== S U B	R O U T	I N E =======================================
sub_1762C3:
		JSR		sub_1762C9
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_1762C9:
		STA		word_4A
		STY		byte_4D
		JSR		_vblank
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		_mmc1_prg5_set_ppu_reset
		LDA		byte_4D
		ASL
		ASL
		CLC
		ADC		byte_4D
		ADC		#$A
		TAX
		LDA		byte_83438,X
		ORA		#$80
		STA		byte_62
		LDA		byte_83438+1,X
		STA		word_60+1
		JSR		sub_176275
		LDA		#3
		STA		word_60
loc_1762F4:
		LDA		word_4A
		JSR		sub_176488
		JMP		loc_17646A

; =============== S U B	R O U T	I N E =======================================
sub_1762FC:
		JSR		_vblank_and_render_off_flag10_set
		JSR		sub_176305
		JMP		__render_on_flag10_clear_reinit

; =============== S U B	R O U T	I N E =======================================
sub_176305:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		_mmc1_prg5_set_ppu_reset
		LDX		#0
		JSR		sub_176265
		STX		byte_25
		DEX
		STX		_spr_ram
		LDA		#9
		STA		byte_55
		LDA		byte_9A
		BEQ		loc_176326
		CMP		#9
		BCC		loc_176335
		SEC
		SBC		#8
loc_176326:
		ASL
		ASL
		CLC
		ADC		#$12
		LDX		#$20
		STX		byte_54
		JSR		loc_1764FE
		JMP		loc_17634B
loc_176335:
		ASL
		PHA
		JSR		loc_1764FA
		LDA		#0
		JSR		loc_1764FA
		PLA
		TAX
		INX
		TXA
		JSR		loc_1764FA
		LDA		#1
		JSR		loc_1764FA
loc_17634B:
		LDA		byte_9A
		BEQ		loc_176395
		CMP		#9
		BCC		loc_17636A
		CMP		#$B
		BEQ		loc_17636A
		BCC		loc_176388
		CMP		#$19
		BCC		loc_176366
		LDA		#$3C
		JSR		loc_1764ED
		LDA		#$3C
		BNE		loc_17638F
loc_176366:
		LDA		#$30
		BNE		loc_17638A
loc_17636A:
		LDA		byte_8B
		LDX		#3
loc_17636E:
		CMP		byte_834B0,X
		BEQ		loc_176384
		DEX
		BPL		loc_17636E
		LDX		#7
loc_176378:
		CMP		byte_834B4,X
		BEQ		loc_176366
		DEX
		BPL		loc_176378
		LDA		#$33
		BNE		loc_17638A
loc_176384:
		LDA		#$36
		BNE		loc_17638A
loc_176388:
		LDA		#$39
loc_17638A:
		JSR		loc_1764ED
		LDA		#$30
loc_17638F:
		JSR		loc_1764ED
		JMP		loc_1763C9
loc_176395:
		LDX		#0
loc_176397:
		LDA		byte_82D74,X
		STA		byte_7280,X
		INX
		CPX		#$5C
		BCC		loc_176397
		LDX		#0
		LDA		#0
loc_1763A6:
		STA		byte_7320,X
		INX
		CPX		#$17
		BCC		loc_1763A6
		LDA		#9
		JSR		_mmc1_prg_set
		LDA		#<[_chr_terrain_bg_data0]
		STA		_tmp21
		LDA		#>[_chr_terrain_bg_data0]
		STA		_tmp21+1
		LDA		#<[_chr_terrain_bg_data1]
		STA		_tmp21+2
		LDA		#>[_chr_terrain_bg_data1]
		STA		byte_24
		JSR		sub_1741E4
		JMP		loc_17646A
loc_1763C9:
		LDA		byte_8B
		LDX		#0
		CMP		#8
		BEQ		loc_1763F4
		LDX		#$15
		CMP		#$58
		BEQ		loc_1763F4
		INX
		CMP		#$5B
		BEQ		loc_1763F4
		INX
		CMP		#$85
		BEQ		loc_1763F4
		CMP		#$2D
		BCC		loc_17641F
		CMP		#$41
		BCC		loc_1763F0
		CMP		#$9F
		BCC		loc_17641F
		SEC
		SBC		#$5B
loc_1763F0:
		SEC
		SBC		#$2C
		TAX
loc_1763F4:
		LDA		byte_83594,X
		ASL
		ASL
		ASL
		TAX
		LDY		#0
		LDA		#8
		STA		word_4A+1
loc_176401:
		LDA		#4
		STA		byte_4D
		LDA		byte_834DC,X
		STA		word_4A
loc_17640A:
		LDA		#0
		ASL		word_4A
		ROL
		ASL		word_4A
		ROL
		STA		byte_7300,Y
		INY
		DEC		byte_4D
		BNE		loc_17640A
		INX
		DEC		word_4A+1
		BNE		loc_176401
loc_17641F:
		LDA		byte_8B
		LDX		#0
loc_176423:
		CMP		byte_82D30,X
		BEQ		loc_176432
		INX
		INX
		INX
		INX
		CPX		#$44
		BCC		loc_176423
		BCS		loc_17646A
loc_176432:
		LDA		byte_82D30+1,X
		STA		word_4A
		LDA		byte_82D30+2,X
		STA		word_4A+1
		LDA		byte_82D30+3,X
		STA		byte_4D
		LDX		word_4A
		LDY		word_4A+1
		LDA		byte_4D
		STA		byte_6DE0,Y
		LDA		byte_7300,X
		STA		byte_7300,Y
		LDA		word_4A
		ASL
		ASL
		TAX
		LDA		word_4A+1
		ASL
		ASL
		TAY
		LDA		#4
		STA		byte_4D
loc_17645E:
		LDA		byte_7200,X
		STA		byte_7200,Y
		INX
		INY
		DEC		byte_4D
		BNE		loc_17645E
loc_17646A:
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_17646E:
		STA		_tmp21
		LDX		#0
		STX		_tmp21+1
		LDX		#_tmp21
		TAY
		JSR		_add8_to_16
		TYA
		JSR		_add8_to_16
		LDX		#3
loc_176480:
		ASL		_tmp21
		ROL		_tmp21+1
		DEX
		BNE		loc_176480
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176488:
		STA		byte_25
		AND		#$3F
		JSR		sub_17646E
		LDA		#4
		STA		byte_54
		ASL
		STA		byte_55
		LDA		off_82DD0
		LDY		off_82DD0+1
		LDX		#_tmp21
		JSR		_add16_to_16
		LDA		byte_25
		LDX		#0
		STX		word_5E+1
		AND		#$80
		BEQ		loc_1764AD
		LDX		#8
loc_1764AD:
		STX		byte_25
loc_1764AF:
		LDX		byte_25
		LDY		#0
		LDA		byte_834BC,X
		BPL		loc_1764B9
		DEY
loc_1764B9:
		INC		byte_25
		LDX		#_tmp21
		JSR		_add16_to_16
		JSR		sub_1764E3
		LDA		byte_25
		CMP		#8
		BCC		loc_1764CC
		JSR		sub_1764E3
loc_1764CC:
		LDA		#3
		LDX		#_tmp21
		JSR		_add8_to_16
		LDA		byte_25
		CMP		#8
		BCS		loc_1764DC
		JSR		sub_1764E3
loc_1764DC:
		INC		byte_25
		DEC		byte_54
		BNE		loc_1764AF
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1764E3:
		LDX		byte_25
		LDA		byte_834BC,X
		STA		word_4A
		JMP		loc_176531
loc_1764ED:
		LDX		#1
		STX		byte_54
		STA		_tmp21
		LDA		#9
		STA		_tmp21+1
		JMP		loc_176501
loc_1764FA:
		LDX		#8
		STX		byte_54
loc_1764FE:
		JSR		sub_17646E
loc_176501:
		LDA		off_823EF
		LDY		off_823EF+1
		LDX		#_tmp21
		JSR		_add16_to_16
loc_17650C:
		JSR		loc_17652D
		LDX		byte_25
		LDA		byte_4F
		STA		byte_7300,X
		LDA		byte_51
		CPX		#$20
		BCS		loc_17651F
		STA		byte_6DE0,X
loc_17651F:
		INC		byte_25
		LDA		#3
		LDX		#_tmp21
		JSR		_add8_to_16
		DEC		byte_54
		BNE		loc_17650C
		RTS
loc_17652D:
		LDA		#0
		STA		word_4A
loc_176531:
		LDY		#0
loc_176533:
		LDA		(_tmp21),Y
		STA		byte_4F,Y
		INY
		CPY		#3
		BCC		loc_176533
		LDA		byte_4F
		LSR
		LSR
		LSR
		LSR
		CMP		#$F
		BEQ		loc_17658E
		LDX		byte_55
		CPX		#9
		BEQ		loc_176550
		CLC
		ADC		#$F
loc_176550:
		STA		byte_52
		ASL
		CLC
		ADC		byte_52
		STA		byte_52
		LDA		byte_4F
		AND		#3
		ORA		word_4A
		TAY
		LDX		#0
loc_176561:
		STX		byte_4D
		LDA		byte_50
		STA		word_4,X
		STY		word_4+1,X
		LDX		byte_52
		LDA		byte_83456,X
		BPL		loc_176585
		CLC
		ADC		byte_50
		BCS		loc_176576
		DEY
loc_176576:
		STA		byte_50
		LDX		byte_4D
		INC		byte_52
		INX
		INX
		CPX		#8
		BCC		loc_176561
		JMP		loc_1765CA
loc_176585:
		CLC
		ADC		byte_50
		BCC		loc_17658B
		INY
loc_17658B:
		JMP		loc_176576
loc_17658E:
		LDA		byte_50
		STA		byte_42
		LDY		#0
		STY		byte_43
		ASL		byte_42
		ASL		byte_42
		ROL		byte_43
		LDX		#byte_42
		JSR		_add8_to_16
		LDA		off_82DD2
		LDY		off_82DD2+1
		JSR		_add16_to_16
		LDY		#0
		LDA		(byte_42),Y
		STA		byte_52
		LDX		#0
		INY
loc_1765B3:
		LDA		(byte_42),Y
		STA		word_4,X
		LDA		byte_52
		AND		#3
		ORA		word_4A
		STA		word_4+1,X
		LSR		byte_52
		LSR		byte_52
		INX
		INX
		INY
		CPX		#8
		BCC		loc_1765B3
loc_1765CA:
		LDY		#0
loc_1765CC:
		LDX		word_4A
		LDA		byte_834CC,X
		TAX
		LDA		word_4,X
		STA		byte_57,Y
		LDA		word_4+1,X
		STA		byte_58,Y
		TYA
		LSR
		TAY
		LDA		byte_51
		CPX		#0
		BEQ		loc_1765E9
loc_1765E5:
		ASL
		DEX
		BNE		loc_1765E5
loc_1765E9:
		AND		#$C0
		STA		byte_44,Y
		INY
		TYA
		ASL
		TAY
		INC		word_4A
		CPY		#8
		BCC		loc_1765CC
		LDA		byte_4F
		ROR
		ROR
		AND		#3
		STA		byte_4F
		LDX		#0
		STX		byte_52
loc_176604:
		STX		byte_53
		JSR		sub_176678
		CLC
		ADC		byte_56
		LDY		byte_52
		STA		(_tmp21+2),Y
		LDA		byte_55
		CMP		#8
		BNE		loc_176632
		LDA		byte_53
		LSR
		TAX
		LDA		byte_44,X
		LDX		word_4A
		CPX		#8
		BEQ		loc_176626
		CPX		#$C
		BNE		loc_17662B
loc_176626:
		ASL
		BCC		loc_17662B
		ORA		#$40
loc_17662B:
		ORA		byte_4F
		INY
		STA		(_tmp21+2),Y
		INC		byte_52
loc_176632:
		INC		byte_52
		LDX		byte_53
		LDA		byte_59,X
		STA		byte_57
		INX
		LDA		byte_59,X
		STA		byte_58
		INX
		CPX		#8
		BCC		loc_176604
		LDA		byte_55
		CMP		#8
		BEQ		loc_17664C
		LDA		#4
loc_17664C:
		LDX		#_tmp21+2
		JSR		_add8_to_16
		LDA		word_60
		BNE		loc_176656
		RTS
loc_176656:
		LDA		#3
		STA		word_60
		LDA		byte_62
		STA		byte_300
		LDA		word_60+1
		STA		byte_302
		LDA		#$40
		STA		byte_301
		LDA		#1
		STA		byte_6D9
		JSR		sub_1742B0
		LDA		#$40
		LDX		#word_60+1
		JMP		_add8_to_16

; =============== S U B	R O U T	I N E =======================================
sub_176678:
		LDA		byte_56
		BMI		loc_176691
		LDA		byte_57
		STA		byte_4D
		LDA		byte_58
		AND		#3
		ORA		#8
		STA		byte_4E
		LDX		word_5E+1
		INC		word_5E+1
		INC		word_5E+1
		JMP		loc_1766C1
loc_176691:
		LDX		#0
loc_176693:
		LDA		_spr_ram,X
		BMI		loc_1766AA
		CMP		byte_58
		BNE		loc_1766A3
		LDA		_spr_ram+1,X
		CMP		byte_57
		BEQ		loc_1766A7
loc_1766A3:
		INX
		INX
		BNE		loc_176693
loc_1766A7:
		TXA
loc_1766A8:
		LSR
		RTS
loc_1766AA:
		LDA		byte_58
		STA		_spr_ram,X
		AND		#3
		ORA		#8
		STA		byte_4E
		LDA		byte_57
		STA		_spr_ram+1,X
		STA		byte_4D
		LDA		#$FF
		STA		_spr_ram+2,X
loc_1766C1:
		TXA
		PHA
		LDA		byte_55
		JSR		_mmc1_prg_set
		LDY		#4
loc_1766CA:
		ASL		byte_4D
		ROL		byte_4E
		DEY
		BNE		loc_1766CA
		LDY		#0
		JSR		sub_1766E2
		JSR		sub_1766E2
		LDA		#5
		JSR		_mmc1_prg_set
		PLA
		JMP		loc_1766A8

; =============== S U B	R O U T	I N E =======================================
sub_1766E2:
		LDX		#0
loc_1766E4:
		LDA		(byte_4D),Y
		STA		word_4,X
		INY
		INX
		CPX		#8
		BCC		loc_1766E4
		LDX		#0
		LDA		byte_58
		LSR
		LSR
		CMP		#1
		BCC		loc_176715
		BEQ		loc_176712
		CMP		#2
		BEQ		loc_17670C
		JSR		sub_17412F
		LDX		#0
loc_176703:
		LDA		byte_C,X
		STA		word_4,X
		INX
		CPX		#8
		BCC		loc_176703
loc_17670C:
		JSR		sub_17412F
		JMP		loc_176715
loc_176712:
		JSR		sub_174103
loc_176715:
		LDA		word_60
		BNE		loc_176725
loc_176719:
		LDA		word_4,X
		STA		_PPU_DATA
		INX
		TXA
		AND		#7
		BNE		loc_176719
		RTS
loc_176725:
		TYA
		PHA
		LDY		word_60
loc_176729:
		LDA		word_4,X
		STA		byte_300,Y
		INX
		INY
		TXA
		AND		#7
		BNE		loc_176729
		STY		word_60
		PLA
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17673A:
		FAR		$5F,$17		; _b5_sB_ppu_font_load
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17673E:
		LDX		#0
		AND		#$F
		TAY
		DEY
		DEY
loc_176745:
		LDA		word_1767B0,Y
		STA		_PPU_ADDR
		INY
		LDA		word_1767B0,Y
		STA		_PPU_ADDR
		INY
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		STX		_PPU_DATA
		CPY		#$10
		BNE		loc_176745
		LDA		#$3F
		STA		_PPU_ADDR
		STX		_PPU_ADDR
		LDA		_ram_pal_buf
		STA		_PPU_DATA
		STX		_PPU_ADDR
		STX		_PPU_ADDR
		STX		byte_28
		RTS
word_1767B0:
		.WORD	$6522
		.WORD	$8522
		.WORD	$A522
		.WORD	$C522
		.WORD	$E522
		.WORD	$523
		.WORD	$2523
		.WORD	$4523
_syscall_lib:
		.WORD	_sys0_safe
		.WORD	_sys1_safe
		.WORD	_sys02_msg_m00_b3
		.WORD	_sys03_msg_m00_b4
		.WORD	_sys04_msg_m00_b3_break
		.WORD	_sys05_msg_m00_b4_break
		.WORD	_sys06_msg_m00_arg0
		.WORD	_sys07_msg_m00_arg1
		.WORD	_sys08_msg_m00_arg2
		.WORD	_sys09_msg_m00_arg0_break
		.WORD	_sys0A_msg_m00_arg1_break
		.WORD	_sys0B_msg_m00_arg2_break
		.WORD	_sys0C_msg_m00_arg8
		.WORD	_sys0D
		.WORD	_sys0E
		.WORD	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		.WORD	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break
		.WORD	_sys11_msg_m00_arg7
		.WORD	_sys12
		.WORD	_sys13_msg_m00_arg6

; =============== S U B	R O U T	I N E =======================================
_RESET:
		SEI
		CLD
		LDX		#0
		STX		_PPU_CTRL
		STX		_PPU_MASK
		INX
loc_1767F3:
		BIT		_PPU_STATUS
		BPL		loc_1767F3
loc_1767F8:
		BIT		_PPU_STATUS
		BMI		loc_1767F8
		DEX
		BPL		loc_1767F3
		TXS
		LDA		#8
		STA		_PPU_CTRL
		LDA		#0
		STA		_PPU_MASK
		INX
		LDA		#$E
		STA		_cur_mmc_cmd
		LDA		#$10
		STA		_cur_chr0_bank_prg_hi
		JSR		_mmc1_reinit
		LDA		#1
		JSR		_mmc1_prg_set
		LDA		#0
		STA		_APU_STATUS
		STA		byte_6A3D
		FARX	_bB_s2
		LDA		_PPU_STATUS
		LDA		#$10
		STA		_PPU_ADDR
		LDA		#0
		STA		_PPU_ADDR
		STA		byte_6A58
		LDX		#$10
loc_17683B:
		STA		_PPU_DATA
		DEX
		BNE		loc_17683B
		FAR		$63,$17		; _b0_s65
		JSR		sub_174000
		LDA		#$F
		LDX		#$19
loc_17684B:
		STA		_ram_pal_buf,X
		DEX
		BPL		loc_17684B
		LDA		#$18
		STA		byte_6D4
		STA		_PPU_MASK
		LDA		#$90
		STA		byte_6D3
		STA		_PPU_CTRL
		JMP		_MAIN_ENTRY

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
_far_call:
		SEI
		BIT		_APU_STATUS
		STA		_irq_a_saved
		STX		_irq_x_saved
		STY		_irq_y_saved
		TSX
		LDA		$102,X
		SEC
		SBC		#1
		STA		_tmp21
		LDA		$103,X
		SBC		#0
		STA		_tmp21+1
		LDY		#0
		LDA		(_tmp21),Y
		TAX
		INY
		LDA		(_tmp21),Y
		PHA
		AND		#$F
		CMP		#$F
		BNE		_syscalls
		PLA
		PHA
		AND		#$F0
		CMP		#$40
		BCC		loc_176899
		CMP		#$F0
		BCC		_direct_calls
loc_176899:
		PLA
		PHA
		AND		#$F
		CMP		#$F

; =============== S U B	R O U T	I N E =======================================
_syscalls:
		PLA
		AND		#$F0
		ROR
		LSR
		LSR
		TAY
		LDA		_syscall_lib,Y
		STA		_tmp21
		LDA		_syscall_lib+1,Y
		STA		_tmp21+1
		TXA
		TAY
		LDX		_irq_x_saved
		LDA		_irq_a_saved
		PLP
		JMP		(_tmp21)

; =============== S U B	R O U T	I N E =======================================
; banks	14 - 1E, direct	calls
_direct_calls:
		PLA
		SEC
		ROR
		LSR
		LSR
		LSR
		STA		_tmp21
		STX		_tmp21+1
		PLP
		LDX		_irq_x_saved
		LDA		_irq_a_saved
		STA		_irq_a_saved
		STX		_irq_x_saved
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		_tmp21+2
		PHA
		PHP
		LDA		_tmp21
		JSR		_mmc1_prg_set
		LDA		_tmp21+1
		ASL
		TAX
		LDA		$8000,X
		STA		_tmp21+1
		LDA		$8000+1,X
		STA		_tmp21+2
		LDA		#$4C
		STA		_tmp21
		LDX		_irq_x_saved
		LDY		_irq_y_saved
		LDA		_irq_a_saved
		PLP
		JSR		_tmp21
		PHP
		STA		_irq_a_saved
		PLA
		STA		_tmp21
		PLA
		STA		_tmp21+2
		PLA
		JSR		_mmc1_prg_set
		LDA		_tmp21
		PHA
		LDA		_irq_a_saved
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
; see notes for _npc_hndl47_exp_info_and_progress_save handler in bank D
_mmc1_sram_disable:
		PHA
		LDA		_cur_chr0_bank_prg_hi
		AND		#$EF
		STA		_cur_chr0_bank_prg_hi
		PLA
		JMP		_mmc1_prg_direct

_sys0_sub_banks_list:
;				  0   1   2   3   4   5   6   7   8   9   A   B   C   D   E   F
		.BYTE	 $E, $E, $E, $E, $E, $E, $E, $E, $E, $E, $D, $D, $D, $D, $D, $D ; 0
		.BYTE	 $A, $D, $5, $5, $5, $5, $C, $C, $8, $7, $A, $A, $E, $6, $7, $E ; 1
		.BYTE	 $E, $E, $5, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0 ; 2
		.BYTE	 $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0 ; 3
		.BYTE	 $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0 ; 4
		.BYTE	 $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $0, $6, $C, $2 ; 5
		.BYTE	 $2, $2, $2, $2, $2, $2, $2, $0, $0, $2, $0, $4, $4, $4, $4, $4 ; 6
		.BYTE	 $4, $4, $4, $4, $4, $4, $4, $4, $4, $2, $0, $0, $4, $6, $6, $6 ; 7
		.BYTE	 $6, $A, $C, $C, $C, $C, $A, $E, $6, $6, $6, $6, $A, $A, $0, $0 ; 8
		.BYTE	 $0, $1, $0, $7, $7, $7, $7, $C, $A, $5, $7, $C, $0, $C, $1, $B ; 9
		.BYTE	 $B, $B, $B, $D, $2, $B, $E, $4, $E, $0, $0, $E, $E, $E, $E, $E ; A
		.BYTE	 $4, $4, $0, $4, $4, $4, $A, $A, $C, $C, $C, $C, $C, $6, $C, $E ; B
		.BYTE	 $E, $E, $E, $E, $6, $6, $6, $6, $C, $C, $C, $2, $0, $0, $C, $C ; C
		.BYTE	 $4, $4, $4, $4, $4, $4, $4, $4, $1, $1, $1, $1, $1, $D, $6, $0 ; D
		.BYTE	 $0, $0, $C, $6, $0, $A, $E, $E, $E, $E, $2, $E, $0, $4, $4, $4 ; E
		.BYTE	 $B, $5, $5, $C, $E, $C, $7, $C, $C, $E, $C, $C, $A, $D, $C, $D ; F

;_sys1_sub_banks_list:
;				  0   1   2   3   4   5   6   7   8   9   A   B   C   D   E   F
		.BYTE	 $C, $C, $D, $D, $C, $6, $D, $E, $0, $0, $0, $A, $7, $D, $D, $C ; 0
		.BYTE	 $0, $0, $6, $6, $1, $1, $1, $1, $1, $E, $E, $E, $E, $C, $E, $E ; 1
		.BYTE	 $E, $E, $0, $C, $E, $E, $C, $D, $D, $0, $0, $C, $0, $D, $0, $D ; 2
		.BYTE	 $0, $4, $D, $D, $D, $D, $D, $D, $D, $C, $C, $C, $D, $5, $D, $1 ; 3
		.BYTE	 $4, $C, $6, $C, $D, $0, $0, $C, $C, $0, $C, $C, $0, $0, $0, $0 ; 4
		.BYTE	 $E, $E, $E, $6, $4, $0, $5, $C, $D, $C, $C, $C, $4, $4, $C, $5 ; 5
		.BYTE	 $A, $6, $7, $0, $0, $7, $7, $7, $7, $7, $7, $7, $7, $C, $6, $7 ; 6
		.BYTE	 $C, $C, $C, $0, $5, $A, $A, $C, $A, $5, $D, $0, $7, $D, $7, $6 ; 7
		.BYTE	 $4, $6, $D, $D, $D, $6, $2, $6, $6, $6, $C, $D, $D, $D, $C, $A ; 8
		.BYTE	 $D, $6, $C, $E, $6, $7, $6, $A, $2, $0, $6, $A, $A, $4, $4, $4 ; 9
		.BYTE	 $4, $4, $A, $A, $A, $A, $A, $7, $A, $A

_sys0_sub_idx_lib:
_bE_s0_idx:				PTR_IDX	_bE_s0					; $00 _bE_s0
_bE_s1_idx:				PTR_IDX	_bE_s1					; $01 _bE_s1
_bE_s2_idx:				PTR_IDX	_bE_s2					; $02 _bE_s2
_bE_s3_idx:				PTR_IDX	_bE_s3					; $03 _bE_s3
_bE_s4_msg_m00_0_idx:	PTR_IDX	_bE_s4_msg_m00_0		; $04 _bE_s4_msg_m00
_bE_s5_idx:				PTR_IDX	_bE_s5					; $05 _bE_s5
_bE_s6_msg_mFF_0_idx:	PTR_IDX	_bE_s6_msg_mFF_0		; $06 _bE_s6_msg_mFF
						PTR_IDX	_bE_s6_msg_mFF_1		; $07 _bE_s6_msg_mFF, unused dupe of _bE_s6_msg_mFF_0_idx
_bE_s4_msg_m00_1_idx:	PTR_IDX	_bE_s4_msg_m00_1		; $08 _bE_s4_msg_m00, used dupe of _bE_s4_msg_m00_0_idx
_bE_s9_idx:				PTR_IDX	_bE_s9					; $09 _bE_s9
_bD_s2_idx:				PTR_IDX	_bD_s2					; $0A _bD_s2
_bD_s3_idx:				PTR_IDX	_bD_s3					; $0B _bD_s3
_bD_s4_idx:				PTR_IDX	_bD_s4					; $0C _bD_s4
_bD_s5_idx:				PTR_IDX	_bD_s5					; $0D _bD_s5
_bD_s6_idx:				PTR_IDX	_bD_s6					; $0E _bD_s6
_bD_s7_idx:				PTR_IDX	_bD_s7					; $0F _bD_s7
_bA_s1_idx:				PTR_IDX	_bA_s1					; $10 _bA_s1
_bD_s9_idx:				PTR_IDX	_bD_s9					; $11 _bD_s9
_b5_s7_idx:				PTR_IDX	_b5_s7					; $12 _b5_s7
_b5_s4_idx:				PTR_IDX	_b5_s4					; $13 _b5_s4
						PTR_IDX	_b5_d0_world_map_data	; $14 former, _b5_d0_world_map_data, not used anymore
						PTR_IDX	_b5_d1_world_map_data	; $15 former, _b5_d1_world_map_data, not used anymore
_bC_s1D_idx:			PTR_IDX	_bC_s1D					; $16 _bC_s1D
_bC_s1F_idx:			PTR_IDX	_bC_s1F					; $17 _bC_s1F
						.BYTE	  0						; $18 bank 08, idx 00, empty
_b7_s8_idx:				PTR_IDX	_b7_s8					; $19 _b7_s8
						.BYTE	  0						; $1A bank 0a, idx 00, empty
						PTR_IDX	_bA_s1					; $1B _bA_s1, unused copy of _bA_s1_idx
						PTR_IDX	_bE_sA					; $1C former _bE_sA, no use here, moved to bank 0F, used directly
						PTR_IDX	_b6_d4					; $1D former _b6_d4, not used anymore
						.BYTE	  0						; $1E former _b7_d0_map_data_lib_ofs, not used anymore
_bE_sB_idx:				PTR_IDX	_bE_sB					; $1F _bE_sB
_bE_sC_idx:				PTR_IDX	_bE_sC					; $20 _bE_sC
_bE_sD_idx:				PTR_IDX	_bE_sD					; $21 _bE_sD
						PTR_IDX	_b5_d2_world_map_data	; $22 former _b5_d2_world_map_data, not used anymore
; do not touch unless ram routines is changed too!
; -- SRAM SHORTCUTS, not used with BRK opcode
_b0_s2_idx:				PTR_IDX	_b0_s2					; $23 _b0_s2
_b0_s3_idx:				PTR_IDX	_b0_s3					; $24 _b0_s3
_b0_s4_idx:				PTR_IDX	_b0_s4					; $25 _b0_s4
_b0_s5_idx:				PTR_IDX	_b0_s5					; $26 _b0_s5
_b0_s6_idx:				PTR_IDX	_b0_s6					; $27 _b0_s6
_b0_s7_idx:				PTR_IDX	_b0_s7					; $28 _b0_s7
_b0_s8_idx:				PTR_IDX	_b0_s8					; $29 _b0_s8
_b0_s9_idx:				PTR_IDX	_b0_s9					; $2A _b0_s9
_b0_sA_idx:				PTR_IDX	_b0_sA					; $2B _b0_sA, never used nor in sram or BRK
_b0_sB_idx:				PTR_IDX	_b0_sB					; $2C _b0_sB
_b0_sC_idx:				PTR_IDX	_b0_sC					; $2D _b0_sC
_b0_sD_idx:				PTR_IDX	_b0_sD					; $2E _b0_sD
_b0_sE_idx:				PTR_IDX	_b0_sE					; $2F _b0_sE
_b0_sF_idx:				PTR_IDX	_b0_sF					; $30 _b0_sF
_b0_s10_idx:			PTR_IDX	_b0_s10					; $31 _b0_s10
_b0_s11_idx:			PTR_IDX	_b0_s11					; $32 _b0_s11
_b0_s12_idx:			PTR_IDX	_b0_s12					; $33 _b0_s12
_b0_s13_idx:			PTR_IDX	_b0_s13					; $34 _b0_s13
_b0_s14_idx:			PTR_IDX	_b0_s14					; $35 _b0_s14
_b0_s15_idx:			PTR_IDX	_b0_s15					; $36 _b0_s15
_b0_s16_idx:			PTR_IDX	_b0_s16					; $37 _b0_s16
_b0_s17_idx:			PTR_IDX	_b0_s17					; $38 _b0_s17
_b0_s18_idx:			PTR_IDX	_b0_s18					; $39 _b0_s18
_b0_s19_idx:			PTR_IDX	_b0_s19					; $3A _b0_s19
_b0_s1A_idx:			PTR_IDX	_b0_s1A					; $3B _b0_s1A
_b0_s1B_idx:			PTR_IDX	_b0_s1B					; $3C _b0_s1B
_b0_s1C_idx:			PTR_IDX	_b0_s1C					; $3D _b0_s1C
_b0_s1D_idx:			PTR_IDX	_b0_s1D					; $3E _b0_s1D
_b0_s1E_idx:			PTR_IDX	_b0_s1E					; $3F _b0_s1E
_b0_s1F_idx:			PTR_IDX	_b0_s1F					; $40 _b0_s1F
_b0_s20_idx:			PTR_IDX	_b0_s20					; $41 _b0_s20
_b0_s21_idx:			PTR_IDX	_b0_s21					; $42 _b0_s21
_b0_s22_idx:			PTR_IDX	_b0_s22					; $43 _b0_s22
_b0_s23_idx:			PTR_IDX	_b0_s23					; $44 _b0_s23
_b0_s24_idx:			PTR_IDX	_b0_s24					; $45 _b0_s24
_b0_s25_idx:			PTR_IDX	_b0_s25					; $46 _b0_s25
_b0_s26_idx:			PTR_IDX	_b0_s26					; $47 _b0_s26
_b0_s27_idx:			PTR_IDX	_b0_s27					; $48 _b0_s27
_b0_s28_idx:			PTR_IDX	_b0_s28					; $49 _b0_s28
_b0_s29_idx:			PTR_IDX	_b0_s29					; $4A _b0_s29
_b0_s2A_idx:			PTR_IDX	_b0_s2A					; $4B _b0_s2A
_b0_s2B_idx:			PTR_IDX	_b0_s2B					; $4C _b0_s2B
_b0_s2C_idx:			PTR_IDX	_b0_s2C					; $4D _b0_s2C
_b0_s2D_idx:			PTR_IDX	_b0_s2D					; $4E _b0_s2D
_b0_s2E_idx:			PTR_IDX	_b0_s2E					; $4F _b0_s2E
_b0_s2F_idx:			PTR_IDX	_b0_s2F					; $50 _b0_s2F
_b0_s30_idx:			PTR_IDX	_b0_s30					; $51 _b0_s30
_b0_s31_idx:			PTR_IDX	_b0_s31					; $52 _b0_s31
_b0_s32_idx:			PTR_IDX	_b0_s32					; $53 _b0_s32
_b0_s33_idx:			PTR_IDX	_b0_s33					; $54 _b0_s33
_b0_s34_idx:			PTR_IDX	_b0_s34					; $55 _b0_s34
_b0_s35_idx:			PTR_IDX	_b0_s35					; $56 _b0_s35
_b0_s36_idx:			PTR_IDX	_b0_s36					; $57 _b0_s36
_b0_s37_idx:			PTR_IDX	_b0_s37					; $58 _b0_s37
_b0_s38_idx:			PTR_IDX	_b0_s38					; $59 _b0_s38
_b0_s39_idx:			PTR_IDX	_b0_s39					; $5A _b0_s39
_b0_s3A_idx:			PTR_IDX	_b0_s3A					; $5B _b0_s3A
_b0_s3B_idx:			PTR_IDX	_b0_s3B					; $5C _b0_s3B
; -- SRAM SHOURTCUTS end
						PTR_IDX	_b6_d5					; $5D former _b6_d5, not used anymore
_bC_s2_idx:				PTR_IDX	_bC_s2					; $5E _bC_s2
_b2_s0_idx:				PTR_IDX	_b2_s0					; $5F _b2_s0
						PTR_IDX	_b2_s1					; $60 _b2_s1, no use here
_b2_s2_idx:				PTR_IDX	_b2_s2					; $61 _b2_s2
_b2_s3_idx:				PTR_IDX	_b2_s3					; $62 _b2_s3, used indirectly in sub_6AA34
_b2_s4_idx:				PTR_IDX	_b2_s4					; $63 _b2_s4, used indirectly in sub_6AA38
_b2_s5_idx:				PTR_IDX	_b2_s5					; $64 _b2_s5, used indirectly in sub_6AA3C
_b2_s6_screen_damage_shake_idx:	PTR_IDX	_b2_s6_screen_damage_shake	; $65 _b2_s6_screen_damage_shake
_b2_s7_screen_spell_blink_idx:	PTR_IDX	_b2_s7_screen_spell_blink	; $66 _b2_s7_screen_spell_blink
_b0_s0_world_map_random_enounter_test_idx:	PTR_IDX	_b0_s0_world_map_random_enounter_test	; $67 _b0_s0_world_map_random_enounter_test
_b0_s3C_idx:			PTR_IDX	_b0_s3C					; $68 _b0_s3C
_b2_sA_idx:				PTR_IDX	_b2_sA					; $69 _b2_sA
						PTR_IDX	_b0_d43_enemies_lib		; $6A former _b0_d43_enemies_lib, not used anymore
_b4_s0_idx:				PTR_IDX	_b4_s0					; $6B _b4_s0
_b4_s1_idx:				PTR_IDX	_b4_s1					; $6C _b4_s1
_b4_s2_idx:				PTR_IDX	_b4_s2					; $6D _b4_s2
_b4_s3_idx:				PTR_IDX	_b4_s3					; $6E _b4_s3
						PTR_IDX	_b4_s4					; $6F former _b4_s4, no use here
_b4_s5_do_message_speed_delay_idx:	PTR_IDX	_b4_s5_do_message_speed_delay	; $70 _b4_s5_do_message_speed_delay
_b4_s6_idx:				PTR_IDX	_b4_s6					; $71 _b4_s6
_b4_s7_window_display_safe_idx:		PTR_IDX	_b4_s7_window_display_safe	; $72 _b4_s7_window_display_safe
_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress_idx:	PTR_IDX	_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress	; $73 _b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
_b4_s9_idx:				PTR_IDX	_b4_s9					; $74 _b4_s9
_b4_sA_idx:				PTR_IDX	_b4_sA					; $75 _b4_sA
						PTR_IDX	_b4_sB					; $76 ofrmer _b4_sB, no use here
_b4_sC_idx:				PTR_IDX	_b4_sC					; $77 _b4_sC
_b4_dD_spells_list_idx:	PTR_IDX	_b4_dD_spells_list		; $78 _b4_dD_spells_list
_b2_sB_idx:				PTR_IDX	_b2_sB					; $79 _b2_sB
_b0_s3D_idx:			PTR_IDX	_b0_s3D					; $7A _b0_s3D
_b0_s3E_idx:			PTR_IDX	_b0_s3E					; $7B _b0_s3E
_b4_sF_idx:				PTR_IDX	_b4_sF					; $7C _b4_sF
						.BYTE	  0						; $7D former _b6_d0_ofs, not used anymore
						.BYTE	  1						; $7E former _b6_d1_ofs, not used anymore
						.BYTE	  2						; $7F former _b6_d2_ofs, not used anymore
						.BYTE	  3						; $80 former _b6_d3_ofs, not used anymore
						PTR_IDX	_bA_s2					; $81 _bA_s2, unused copy of $19B
_bC_s3_idx:				PTR_IDX	_bC_s3					; $82 _bC_s3
_bC_s4_idx:				PTR_IDX	_bC_s4					; $83 _bC_s4
_bC_s5_idx:				PTR_IDX	_bC_s5					; $84 _bC_s5
_bC_s6_idx:				PTR_IDX	_bC_s6					; $85 _bC_s6
						PTR_IDX	_bA_s3					; $86 _bA_s3, unused copy of $19C
						.BYTE	$1E						; $87, bank 0e, idx 1E, empty
_b6_s8_idx:				PTR_IDX	_b6_s8					; $88 _b6_s8
_b6_d9_idx:				PTR_IDX	_b6_d9					; $89 _b6_d9
_b6_dA_idx:				PTR_IDX	_b6_dA					; $8A _b6_dA
_b6_dB_idx:				PTR_IDX	_b6_dB					; $8B _b6_dB
_bA_sC_idx:				PTR_IDX	_bA_sC					; $8C _bA_sC
_bA_sD_idx:				PTR_IDX	_bA_sD					; $8D _bA_sD
						PTR_IDX	_b0_d40_weapon_power_list	; $8E former _b0_d40_weapon_power_list, no use here
						PTR_IDX	_b0_d41_equip_list		; $8F former _b0_d41_equip_list, no use here
_b0_d42_effects_list_idx:	PTR_IDX	_b0_d42_effects_list; $90 _b0_d42_effects_list
						.BYTE	 $F						; $91, bank 01, idx 0F, empty
_b0_d44_idx:			PTR_IDX	_b0_d44					; $92 _b0_d44
						PTR_IDX	_b7_d1					; $93 former _b7_d1, unused
						PTR_IDX	_b7_d3					; $94 former _b7_d3, unused
						PTR_IDX	_b7_d4					; $95 former _b7_d4, unused
						.BYTE	  2						; $96 former _b7_d2_ofs, unused
_bC_s0_idx:				PTR_IDX	_bC_s0					; $97 _bC_s0
						PTR_IDX	_bA_s6					; $98 _bA_s6, unused copy of $1A4
_b5_s3_idx:				PTR_IDX	_b5_s3					; $99 _b5_s3
						PTR_IDX	_b7_d5					; $9A former _b7_d5, unused
_bC_s9_idx:				PTR_IDX	_bC_s9					; $9B _bC_s9
_b0_s45_idx:			PTR_IDX	_b0_s45					; $9C _b0_s45
_bC_sA_idx:				PTR_IDX	_bC_sA					; $9D _bC_sA
						.BYTE	  1						; $9E, bank 01, idx 01, empty
_bB_s2_idx:				PTR_IDX	_bB_s2					; $9F _bB_s2
_bB_s3_apu_load_idx:	PTR_IDX	_bB_s3_apu_load			; $A0 _bB_s3_apu_load
_bB_s4_idx:				PTR_IDX	_bB_s4					; $A1 _bB_s4
_bB_s5_idx:				PTR_IDX	_bB_s5					; $A2 _bB_s5
_bD_s27_idx:			PTR_IDX	_bD_s27					; $A3 _bD_s27
_b2_sC_idx:				PTR_IDX	_b2_sC					; $A4 _b2_sC
_bB_s6_idx:				PTR_IDX	_bB_s6					; $A5 _bB_s6
						PTR_IDX	_bE_s10					; $A6 _bE_s10, unused copy of $124
_b4_sE_idx:				PTR_IDX	_b4_sE					; $A7 _b4_sE
_bE_sE_idx:				PTR_IDX	_bE_sE					; $A8 _bE_sE
_b0_s46_idx:			PTR_IDX	_b0_s46					; $A9 _b0_s46
_b0_s47_idx:			PTR_IDX	_b0_s47					; $AA _b0_s47
_bE_s1D_idx:			PTR_IDX	_bE_s1D					; $AB _bE_s1D
_bE_s19_idx:			PTR_IDX	_bE_s19					; $AC _bE_s19
_bE_s1A_idx:			PTR_IDX	_bE_s1A					; $AD _bE_s1A
_bE_s20_idx:			PTR_IDX	_bE_s20					; $AE _bE_s20
_bE_s21_idx:			PTR_IDX	_bE_s21					; $AF _bE_s21
_b4_s10_idx:			PTR_IDX	_b4_s10					; $B0 _b4_s10
_b4_s12_idx:			PTR_IDX	_b4_s12					; $B1 _b4_s12
_b0_d3F_idx:			PTR_IDX	_b0_d3F					; $B2 _b0_d3F
_b4_s13_idx:			PTR_IDX	_b4_s13					; $B3 _b4_s13
_b4_s14_idx:			PTR_IDX	_b4_s14					; $B4 _b4_s14
						PTR_IDX	_b4_d15					; $B5 former _b4_d15, no use here
_bA_d14_idx:			PTR_IDX	_bA_d14					; $B6 _bA_d14
_bA_d15_idx:			PTR_IDX	_bA_d15					; $B7 _bA_d15
_bC_sD_idx:				PTR_IDX	_bC_sD					; $B8 _bC_sD
_bC_sE_idx:				PTR_IDX	_bC_sE					; $B9 _bC_sE
_bC_sF_idx:				PTR_IDX	_bC_sF					; $BA _bC_sF
_bC_s10_idx:			PTR_IDX	_bC_s10					; $BB _bC_s10
_bC_s11_idx:			PTR_IDX	_bC_s11					; $BC _bC_s11
_b6_s1F_idx:			PTR_IDX	_b6_s1F					; $BD _b6_s1F
_bC_s13_idx:			PTR_IDX	_bC_s13					; $BE _bC_s13
_bE_s22_idx:			PTR_IDX	_bE_s22					; $BF _bE_s22
_bE_s23_idx:			PTR_IDX	_bE_s23					; $C0 _bE_s23
_bE_s24_idx:			PTR_IDX	_bE_s24					; $C1 _bE_s24
_bE_s25_idx:			PTR_IDX	_bE_s25					; $C2 _bE_s25
_bE_s26_idx:			PTR_IDX	_bE_s26					; $C3 _bE_s26
_b6_sC_idx:				PTR_IDX	_b6_sC					; $C4 _b6_sC
_b6_sD_idx:				PTR_IDX	_b6_sD					; $C5 _b6_sD
_b6_sE_idx:				PTR_IDX	_b6_sE					; $C6 _b6_sE
_b6_sF_idx:				PTR_IDX	_b6_sF					; $C7 _b6_sF
_bC_s14_idx:			PTR_IDX	_bC_s14					; $C8 _bC_s14
_bC_s15_idx:			PTR_IDX	_bC_s15					; $C9 _bC_s15, used indirectly
_bC_s16_idx:			PTR_IDX	_bC_s16					; $CA _bC_s16, used indirectly
_b2_s9_idx:				PTR_IDX	_b2_s9					; $CB _b2_s9
						.BYTE	$4C						; $CC, bank 00, idx 4c, empty
						PTR_IDX	_b0_s4D					; $CD _b0_s4D, unused copy of $12C
_bC_s17_idx:			PTR_IDX	_bC_s17					; $CE _bC_s17
_bC_s18_idx:			PTR_IDX	_bC_s18					; $CF _bC_s18, used indirectly
_b4_s16_do_half_message_speed_delay_idx:PTR_IDX	_b4_s16_do_half_message_speed_delay	; $D0 _b4_s16_do_half_message_speed_delay
_b4_s17_idx:			PTR_IDX	_b4_s17					; $D1 _b4_s17
_b4_s18_idx:			PTR_IDX	_b4_s18					; $D2 _b4_s18
_b4_s19_idx:			PTR_IDX	_b4_s19					; $D3 _b4_s19
_b4_s1A_idx:			PTR_IDX	_b4_s1A					; $D4 _b4_s1A
_b4_s1B_idx:			PTR_IDX	_b4_s1B					; $D5 _b4_s1B
_b4_s1C_idx:			PTR_IDX	_b4_s1C					; $D6 _b4_s1C
_b4_s1D_idx:			PTR_IDX	_b4_s1D					; $D7 _b4_s1D
_b1_s9_idx:				PTR_IDX	_b1_s9					; $D8 _b1_s9
_b1_sA_idx:				PTR_IDX	_b1_sA					; $D9 _b1_sA
_b1_sB_idx:				PTR_IDX	_b1_sB					; $DA _b1_sB
_b1_sC_idx:				PTR_IDX	_b1_sC					; $DB _b1_sC
_b1_sD_idx:				PTR_IDX	_b1_sD					; $DC _b1_sD
_bD_sD_idx:				PTR_IDX	_bD_sD					; $DD _bD_sD
_b6_s10_idx:			PTR_IDX	_b6_s10					; $DE _b6_s10
_b0_d58_idx:			PTR_IDX	_b0_d58					; $DF _b0_d58
_b0_d59_idx:			PTR_IDX	_b0_d59					; $E0 _b0_d59
						PTR_IDX	_b0_d5A					; $E1 former _b0_d5A, no use here
_bC_s2D_idx:			PTR_IDX	_bC_s2D					; $E2 _bC_s2D, used indirectly
_b6_s11_idx:			PTR_IDX	_b6_s11					; $E3 _b6_s11
_b0_s5B_idx:			PTR_IDX	_b0_s5B					; $E4 _b0_s5B
_bA_sA_idx:				PTR_IDX	_bA_sA					; $E5 _bA_sA
_bE_s2E_idx:			PTR_IDX	_bE_s2E					; $E6 _bE_s2E
_bE_s2F_idx:			PTR_IDX	_bE_s2F					; $E7 _bE_s2F
_bE_s30_idx:			PTR_IDX	_bE_s30					; $E8 _bE_s30
_bE_s31_idx:			PTR_IDX	_bE_s31					; $E9 _bE_s31
_b2_s8_screen_hit_blink_idx:PTR_IDX	_b2_s8_screen_hit_blink	; $EA _b2_s8_screen_hit_blink
_bE_s32_idx:			PTR_IDX	_bE_s32					; $EB _bE_s32
_b0_s5D_idx:			PTR_IDX	_b0_s5D					; $EC _b0_s5D
_b4_s1E_idx:			PTR_IDX	_b4_s1E					; $ED _b4_s1E
_b4_s1F_idx:			PTR_IDX	_b4_s1F					; $EE _b4_s1F
_b4_s20_idx:			PTR_IDX	_b4_s20					; $EF _b4_s20
_bB_s7_idx:				PTR_IDX	_bB_s7					; $F0 _bB_s7
_b5_s9_idx:				PTR_IDX	_b5_s9					; $F1 _b5_s9
_b5_sA_idx:				PTR_IDX	_b5_sA					; $F2 _b5_sA
_bC_s1C_idx:			PTR_IDX	_bC_s1C					; $F3 _bC_s1C, used indirectly
_bE_s33_idx:			PTR_IDX	_bE_s33					; $F4 _bE_s33
_bC_s1E_idx:			PTR_IDX	_bC_s1E					; $F5 _bC_s1E
_b7_s1B_idx:			PTR_IDX	_b7_s1B					; $F6 _b7_s1B, used indirectly
_bC_s21_idx:			PTR_IDX	_bC_s21					; $F7 _bC_s21
_bC_s22_idx:			PTR_IDX	_bC_s22					; $F8 _bC_s22
_bE_s1B_idx:			PTR_IDX	_bE_s1B					; $F9 _bE_s1B
_bC_s38_idx:			PTR_IDX	_bC_s38					; $FA _bC_s38
_bC_s25_idx:			PTR_IDX	_bC_s25					; $FB _bC_s25
						PTR_IDX	_bA_s5_add16_to_24		; $FC former _bA_s5_add16_to_24, unused
_bD_s19_0_idx:			PTR_IDX	_bD_s19					; $FD _bD_s19, used copy of $133
_bC_s2C_idx:			PTR_IDX	_bC_s2C					; $FE _bC_s2C, used indirectly
						.BYTE	  1						; $FF former _bD_d1_ofs, not used anymore
;_sys1_sub_idx_lib:
_bC_s2A_idx:			PTR_IDX	_bC_s2A					; $00 _bC_s2A
_bC_s12_vblank_count_50_idx:PTR_IDX	_bC_s12_vblank_count_50	; $01 _bC_s12_vblank_count_50
_bD_s12_idx:			PTR_IDX	_bD_s12					; $02 _bD_s12
_bD_s13_idx:			PTR_IDX	_bD_s13					; $03 _bD_s13
						PTR_IDX	_bC_s29					; $04 _bC_s29, no use here 
_b6_s17_idx:			PTR_IDX	_b6_s17					; $05 _b6_s17
_bD_sE_idx:				PTR_IDX	_bD_sE					; $06 _bD_sE
						PTR_IDX	_bE_s2B					; $07 _bE_s2B, never used 
_b0_s5E_idx:			PTR_IDX	_b0_s5E					; $08 _b0_s5E
_b0_s5F_idx:			PTR_IDX	_b0_s5F					; $09 _b0_s5F
_b0_s60_idx:			PTR_IDX	_b0_s60					; $0A _b0_s60
_bA_s12_idx:			PTR_IDX	_bA_s12					; $0B _bA_s12
_b7_s1C_idx:			PTR_IDX	_b7_s1C					; $0C _b7_s1C
_bD_s14_idx:			PTR_IDX	_bD_s14					; $0D _bD_s14
_bD_s15_idx:			PTR_IDX	_bD_s15					; $0E _bD_s15
						PTR_IDX	_bC_s26					; $0F _bC_s26, unused copy of $18A
_b0_s48_idx:			PTR_IDX	_b0_s48					; $10 _b0_s48
_b0_s49_idx:			PTR_IDX	_b0_s49					; $11 _b0_s49
_b6_s6_0_idx:			PTR_IDX	_b6_s6_0				; $12 _b6_s6, different ptrs points to the same sub
_b6_s6_1_idx:			PTR_IDX	_b6_s6_1				; $13 _b6_s6, both used
_b1_s14_idx:			PTR_IDX	_b1_s14					; $14 _b1_s14
_b1_s15_idx:			PTR_IDX	_b1_s15					; $15 _b1_s15
_b1_s16_idx:			PTR_IDX	_b1_s16					; $16 _b1_s16
_b1_s17_idx:			PTR_IDX	_b1_s17					; $17 _b1_s17
						PTR_IDX	_b1_s13					; $18 _b1_s13, never used
_bE_s12_idx:			PTR_IDX	_bE_s12					; $19 _bE_s12
_bE_s13_idx:			PTR_IDX	_bE_s13					; $1A _bE_s13
_bE_s14_idx:			PTR_IDX	_bE_s14					; $1B _bE_s14
						.BYTE	$15						; $11C, bank 0E, idx 15, empty
_bC_s31_idx:			PTR_IDX	_bC_s31					; $1D _bC_s31
_bE_s16_idx:			PTR_IDX	_bE_s16					; $1E _bE_s16
						PTR_IDX	_bE_s1C_0				; $1F _bE_s1C, different ptrs points to the same sub, the first never used
_bE_s1C_idx:			PTR_IDX	_bE_s1C					; $20 _bE_s1C, the second is only used
_bE_sF_idx:				PTR_IDX	_bE_sF					; $21 _bE_sF
_b0_s61_sram_b0_syscall_shortcuts_load_idx:	PTR_IDX	_b0_s61_sram_b0_syscall_shortcuts_load	; $22 _b0_s61_sram_b0_syscall_shortcuts_load
_bC_s32_idx:			PTR_IDX	_bC_s32					; $23 _bC_s32
_bE_s10_idx:			PTR_IDX	_bE_s10					; $24 _bE_s10
_bE_s34_idx:			PTR_IDX	_bE_s34					; $25 _bE_s34
_bC_s33_idx:			PTR_IDX	_bC_s33					; $26 _bC_s33
_bD_s16_idx:			PTR_IDX	_bD_s16					; $27 _bD_s16
_bD_s17_idx:			PTR_IDX	_bD_s17					; $28 _bD_s17
_b0_s5C_idx:			PTR_IDX	_b0_s5C					; $29 _b0_s5C
_b0_s62_idx:			PTR_IDX	_b0_s62					; $2A _b0_s62
_bC_s37_idx:			PTR_IDX	_bC_s37					; $2B _bC_s37
_b0_s4D_idx:			PTR_IDX	_b0_s4D					; $2C _b0_s4D
_bD_s26_idx:			PTR_IDX	_bD_s26					; $2D,$17 (_bD_s26)
_b0_s64_idx:			PTR_IDX	_b0_s64					; $2E,$17 (_b0_s64)
_bD_s28_idx:			PTR_IDX	_bD_s28					; $2F,$17 (_bD_s28)
_b0_s63_idx:			PTR_IDX	_b0_s63					; $30,$17 (_b0_s63)
_b4_s21_message_half_delay_or_wait_for_keypress_idx:	PTR_IDX	_b4_s21_message_half_delay_or_wait_for_keypress	; $31,$17 (_b4_s21_message_half_delay_or_wait_for_keypress)
_bD_s18_idx:			PTR_IDX	_bD_s18					; $32,$17 (_bD_s18)
_bD_s19_1_idx:			PTR_IDX	_bD_s19					; $33,$17 (_bD_s19)
_bD_s1A_idx:			PTR_IDX	_bD_s1A					; $34,$17 (_bD_s1A)
_bD_s1B_idx:			PTR_IDX	_bD_s1B					; $35,$17 (_bD_s1B)
_bD_s1C_idx:			PTR_IDX	_bD_s1C					; $36,$17 (_bD_s1C)
_bD_s1D_idx:			PTR_IDX	_bD_s1D					; $37,$17 (_bD_s1D)
_bD_s1E_idx:			PTR_IDX	_bD_s1E					; $38,$17 (_bD_s1E)
_bC_s24_idx:			PTR_IDX	_bC_s24					; $39,$17 (_bC_s24)
_bC_s39_idx:			PTR_IDX	_bC_s39					; $3A,$17 (_bC_s39)
_bC_s3A_idx:			PTR_IDX	_bC_s3A					; $3B,$17 (_bC_s3A)
_bD_s1F_idx:			PTR_IDX	_bD_s1F					; $3C,$17 (_bD_s1F)
_b5_s8_0_idx:			PTR_IDX	_b5_s8					; $3D,$17 (_b5_s8)
_bD_s21_idx:			PTR_IDX	_bD_s21					; $3E,$17 (_bD_s21)
_b1_sE_idx:				PTR_IDX	_b1_sE					; $3F,$17 (_b1_sE)
_b4_s22_idx:			PTR_IDX	_b4_s22					; $40,$17 (_b4_s22)
_bC_s3B_idx:			PTR_IDX	_bC_s3B					; $41,$17 (_bC_s3B)
_b6_s12_idx:			PTR_IDX	_b6_s12					; $42,$17 (_b6_s12)
_bC_s19_idx:			PTR_IDX	_bC_s19					; $43,$17 (_bC_s19)
_bD_s22_idx:			PTR_IDX	_bD_s22					; $44,$17 (_bD_s22)
_b0_s4E_idx:			PTR_IDX	_b0_s4E					; $45,$17 (_b0_s4E)
_b0_s4F_idx:			PTR_IDX	_b0_s4F					; $46,$17 (_b0_s4F)
_bC_s27_idx:			PTR_IDX	_bC_s27					; $47,$17 (_bC_s27)
_bC_s28_idx:			PTR_IDX	_bC_s28					; $48,$17 (_bC_s28)
_b0_s50_idx:			PTR_IDX	_b0_s50					; $49,$17 (_b0_s50)
_bC_s2F_idx:			PTR_IDX	_bC_s2F					; $4A,$17 (_bC_s2F)
_bC_s30_idx:			PTR_IDX	_bC_s30					; $4B,$17 (_bC_s30)
_b0_s51_idx:			PTR_IDX	_b0_s51					; $4C,$17 (_b0_s51)
_b0_s52_idx:			PTR_IDX	_b0_s52					; $4D,$17 (_b0_s52)
_b0_s1_idx:				PTR_IDX	_b0_s1					; $4E,$17 (_b0_s1)
_b0_s53_idx:			PTR_IDX	_b0_s53					; $4F,$17 (_b0_s53)
_bE_s36_idx:			PTR_IDX	_bE_s36					; $50,$17 (_bE_s36)
_bE_s18_idx:			PTR_IDX	_bE_s18					; $51,$17 (_bE_s18)
_bE_s38_idx:			PTR_IDX	_bE_s38					; $52,$17 (_bE_s38)
_b6_s13_idx:			PTR_IDX	_b6_s13					; $53,$17 (_b6_s13)
_b4_s23_idx:			PTR_IDX	_b4_s23					; $54,$17 (_b4_s23)
_b0_s54_idx:			PTR_IDX	_b0_s54					; $55,$17 (_b0_s54)
_b5_s5_idx:				PTR_IDX	_b5_s5					; $56,$17 (_b5_s5)
_bC_s1_idx:				PTR_IDX	_bC_s1					; $57,$17 (_bC_s1)
_bD_sA_idx:				PTR_IDX	_bD_sA					; $58,$17 (_bD_sA)
_bC_s34_idx:			PTR_IDX	_bC_s34					; $59,$17 (_bC_s34)
_bC_s35_idx:			PTR_IDX	_bC_s35					; $5A,$17 (_bC_s35)
_bC_s1A_idx:			PTR_IDX	_bC_s1A					; $5B,$17 (_bC_s1A)
_b4_s24_idx:			PTR_IDX	_b4_s24					; $5C,$17 (_b4_s24)
_b4_s25_idx:			PTR_IDX	_b4_s25					; $5D,$17 (_b4_s25)
_bC_s1B_idx:			PTR_IDX	_bC_s1B					; $5E,$17 (_bC_s1B)
_b5_sB_ppu_font_load_idx:	PTR_IDX	_b5_sB_ppu_font_load	; $5F,$17 (_b5_sB_ppu_font_load)
_bA_sF_idx:				PTR_IDX	_bA_sF					; $60,$17 (_bA_sF)
_b6_s14_name_entry_screen_idx:	PTR_IDX	_b6_s14_name_entry_screen	; $61,$17 (_b6_s14_name_entry_screen)
_b7_sA_sram_test_and_init_idx:	PTR_IDX	_b7_sA_sram_test_and_init	; $62,$17 (_b7_sA_sram_test_and_init)
_b0_s65_idx:			PTR_IDX	_b0_s65					; $63,$17 (_b0_s65)
_b0_s66_idx:			PTR_IDX	_b0_s66					; $64,$17 (_b0_s66)
_b7_sD_idx:				PTR_IDX	_b7_sD					; $65,$17 (_b7_sD)
_b7_sE_player_log_list_idx:	PTR_IDX	_b7_sE_player_log_list	; $66,$17 (_b7_sE_player_log_list)
_b7_sF_player_log_read_idx:	PTR_IDX	_b7_sF_player_log_read	; $67,$17 (_b7_sF_player_log_read)
_b7_s10_idx:			PTR_IDX	_b7_s10					; $68,$17 (_b7_s10)
_b7_s11_idx:			PTR_IDX	_b7_s11					; $69,$17 (_b7_s11)
_b7_s12_idx:			PTR_IDX	_b7_s12					; $6A,$17 (_b7_s12)
_b7_s13_idx:			PTR_IDX	_b7_s13					; $6B,$17 (_b7_s13)
_b7_s14_idx:			PTR_IDX	_b7_s14					; $6C,$17 (_b7_s14)
_bC_sC_idx:				PTR_IDX	_bC_sC					; $6D,$17 (_bC_sC)
_b6_s15_idx:			PTR_IDX	_b6_s15					; $6E,$17 (_b6_s15)
_b7_s15_idx:			PTR_IDX	_b7_s15					; $6F,$17 (_b7_s15)
_bC_s2E_vblank_count_50_wait_50_or_skip_idx:PTR_IDX	_bC_s2E_vblank_count_50_wait_50_or_skip	; $70,$17 (_bC_s2E_vblank_count_50_wait_50_or_skip)
_bC_s20_idx:			PTR_IDX	_bC_s20					; $71,$17 (_bC_s20)
_bC_sB_idx:				PTR_IDX	_bC_sB					; $72,$17 (_bC_sB)
_b0_s55_idx:			PTR_IDX	_b0_s55					; $73,$17 (_b0_s55)
_b5_s6_ppu_send_8_empty_bytes_idx:	PTR_IDX	_b5_s6_ppu_send_8_empty_bytes	; $74,$17 (_b5_s6_ppu_send_8_empty_bytes)
_bA_s10_idx:			PTR_IDX	_bA_s10					; $75,$17 (_bA_s10)
_bA_s11_idx:			PTR_IDX	_bA_s11					; $76,$17 (_bA_s11)
_bC_s36_idx:			PTR_IDX	_bC_s36					; $77,$17 (_bC_s36)
_bA_s8_idx:				PTR_IDX	_bA_s8					; $78,$17 (_bA_s8)
_b5_s8_1_idx:			PTR_IDX	_b5_s8					; $79,$17 (_b5_s8)
_bD_s29_idx:			PTR_IDX	_bD_s29					; $7A,$17 (_bD_s29)
_b0_s56_idx:			PTR_IDX	_b0_s56					; $7B,$17 (_b0_s56)
_b7_s19_idx:			PTR_IDX	_b7_s19					; $7C,$17 (_b7_s19)
_bD_sB_idx:				PTR_IDX	_bD_sB					; $7D,$17 (_bD_sB)
_b7_s1A_idx:			PTR_IDX	_b7_s1A					; $7E,$17 (_b7_s1A)
_b6_s18_idx:			PTR_IDX	_b6_s18					; $7F,$17 (_b6_s18)
_b4_s26_idx:			PTR_IDX	_b4_s26					; $80,$17 (_b4_s26)
_b6_s19_idx:			PTR_IDX	_b6_s19					; $81,$17 (_b6_s19)
_bD_sF_idx:				PTR_IDX	_bD_sF					; $82,$17 (_bD_sF)
_bD_sC_idx:				PTR_IDX	_bD_sC					; $83,$17 (_bD_sC)
_bD_s10_idx:			PTR_IDX	_bD_s10					; $84,$17 (_bD_s10)
_b6_s16_0_idx:			PTR_IDX	_b6_s16					; $85,$17 (_b6_s16)
_b2_sD_idx:				PTR_IDX	_b2_sD					; $86,$17 (_b2_sD)
_b6_s1D_idx:			PTR_IDX	_b6_s1D					; $87,$17 (_b6_s1D)
_b6_s1C_idx:			PTR_IDX	_b6_s1C					; $88,$17 (_b6_s1C)
_b6_s1B_idx:			PTR_IDX	_b6_s1B					; $89,$17 (_b6_s1B)
_bC_s26_idx:			PTR_IDX	_bC_s26					; $8A,$17 (_bC_s26)
_bD_s11_idx:			PTR_IDX	_bD_s11					; $8B,$17 (_bD_s11)
_bD_s23_idx:			PTR_IDX	_bD_s23					; $8C,$17 (_bD_s23)
_bD_s24_idx:			PTR_IDX	_bD_s24					; $8D,$17 (_bD_s24)
_bC_s2B_idx:			PTR_IDX	_bC_s2B					; $8E,$17 (_bC_s2B)
						PTR_IDX	_bA_s9_nullsub			; $8F former _bA_s9_nullsub, unused
_bD_s20_npc_hndl31_idx:	PTR_IDX	_bD_s20_npc_hndl31		; $90,$17 (_bD_s20_npc_hndl31)
_b6_s16_1_idx:			PTR_IDX	_b6_s16					; $91,$17 (_b6_s16)
_bC_s23_idx:			PTR_IDX	_bC_s23					; $92,$17 (_bC_s23)
_bE_s11_idx:			PTR_IDX	_bE_s11					; $93,$17 (_bE_s11)
_b6_s1A_idx:			PTR_IDX	_b6_s1A					; $94,$17 (_b6_s1A)
_b7_s1D_idx:			PTR_IDX	_b7_s1D					; $95,$17 (_b7_s1D)
_b6_s1E_idx:			PTR_IDX	_b6_s1E					; $96,$17 (_b6_s1E)
_bA_sB_idx:				PTR_IDX	_bA_sB					; $97,$17 (_bA_sB)
_b2_sE_idx:				PTR_IDX	_b2_sE					; $98,$17 (_b2_sE)
_b0_s67_idx:			PTR_IDX	_b0_s67					; $99,$17 (_b0_s67)
_b6_s20_player_name_veryfy_idx:	PTR_IDX	_b6_s20_player_name_veryfy	; $9A,$17 (_b6_s20_player_name_veryfy)
_bA_s2_idx:				PTR_IDX	_bA_s2					; $9B _bA_s2
_bA_s3_idx:				PTR_IDX	_bA_s3					; $9C,$17 (_bA_s3)
_b4_s27_idx:			PTR_IDX	_b4_s27					; $9D,$17 (_b4_s27)
_b4_s28_idx:			PTR_IDX	_b4_s28					; $9E,$17 (_b4_s28)
_b4_s29_idx:			PTR_IDX	_b4_s29					; $9F,$17 (_b4_s29)
_b4_s2A_idx:			PTR_IDX	_b4_s2A					; $A0,$17 (_b4_s2A)
_b4_s2B_idx:			PTR_IDX	_b4_s2B					; $A1,$17 (_b4_s2B)
_bA_s4_div24_to_8_idx:	PTR_IDX	_bA_s4_div24_to_8		; $A2,$17 (_bA_s4_div24_to_8)
						PTR_IDX	_bA_s5_add16_to_24		; $A3,$17 former _bA_s5_add16_to_24, unused copy of $FC
_bA_s6_idx:				PTR_IDX	_bA_s6					; $A4,$17 (_bA_s6)
						PTR_IDX	_bA_s7_nullsub			; $A5 former _bA_s7_nullsub, unused
_bA_sE_idx:				PTR_IDX	_bA_sE					; $A6,$17 (_bA_sE)
_b7_s1E_idx:			PTR_IDX	_b7_s1E					; $A7,$17 (_b7_s1E)
_bA_s16_idx:			PTR_IDX	_bA_s16					; $A8,$17 (_bA_s16)
_bA_s17_idx:			PTR_IDX	_bA_s17					; $A9,$17 (_bA_s17)

; =============== S U B	R O U T	I N E =======================================
_get_msg_ptr_by_idx:
		TAY
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#$A
		JSR		_mmc1_prg_set
		TYA
		JSR		_get_text_block_ptr
		PHA
		LDA		word_7C
		JSR		_mmc1_prg_set
		NOP
		NOP
		NOP
		NOP
		PLA
		TAX
		BEQ		loc_176BCF
		LDY		#0
loc_176BB6:
		LDA		(word_72),Y
		INC		word_72
		BNE		loc_176BBE
		INC		word_72+1
loc_176BBE:
		CMP		#$FF
		BEQ		loc_176BCA
		CMP		#$EF
		BEQ		loc_176BCA
		CMP		#$EE
		BNE		loc_176BB6
loc_176BCA:
		DEX
		BEQ		loc_176BCF
		BNE		loc_176BB6
loc_176BCF:
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
_sys0D:
		TYA
		FARX	_bE_sC
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys0E:
		TYA
		FARX	_bE_s0
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys06_msg_m00_arg0:
		LDX		#0
		BEQ		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys07_msg_m00_arg1:
		LDX		#1
		BNE		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys08_msg_m00_arg2:
		LDX		#2
		BNE		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys13_msg_m00_arg6:
		LDX		#6
		BNE		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys11_msg_m00_arg7:
		LDX		#7
		BNE		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys0C_msg_m00_arg8:
		LDX		#8
		BNE		_far_bE_s4_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys09_msg_m00_arg0_break:
		LDX		#0
		BEQ		_far_bE_s4_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys0A_msg_m00_arg1_break:
		LDX		#1
		BNE		_far_bE_s4_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys0B_msg_m00_arg2_break:
		LDX		#2
		BNE		_far_bE_s4_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys12:
		TYA
		FARX	_bB_s3_apu_load
		RTS

; =============== S U B	R O U T	I N E =======================================
_far_bE_s4_msg_m00:
		TYA
		FARX	_bE_s4_msg_m00_0
		RTS

; =============== S U B	R O U T	I N E =======================================
_far_bE_s4_msg_m00_break:
		JSR		_far_bE_s4_msg_m00
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176C3C:
		LDX		#$1E
		JMP		_vblank_count

; =============== S U B	R O U T	I N E =======================================
sub_176C41:
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
loc_176C5B:
		PHA
		JSR		sub_175A32
		JSR		sub_1762FC
		FARX	_bE_s1B
		JSR		_bE_sA		; function not fit into	bank E so moved	to bank	F
		PLA
		JMP		sub_17530A

; =============== S U B	R O U T	I N E =======================================
sub_176C6C:
		LDX		#0
		BEQ		sub_176C72

; =============== S U B	R O U T	I N E =======================================
sub_176C70:
		LDX		#1

; =============== S U B	R O U T	I N E =======================================
sub_176C72:
		FARX	_bE_s4_msg_m00_0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176C76:
		LDX		#$C0
		BNE		sub_176C80

; =============== S U B	R O U T	I N E =======================================
sub_176C7A:
		LDX		#$40
		BNE		sub_176C80

; =============== S U B	R O U T	I N E =======================================
sub_176C7E:
		LDX		#$80

; =============== S U B	R O U T	I N E =======================================
sub_176C80:
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#$A
		JSR		_mmc1_prg_set
		LDY		#$3F
loc_176C8B:
		LDA		_chr_data_unk8-1,X
		STA		byte_7800,Y
		DEX
		DEY
		BPL		loc_176C8B
		PLA
		JMP		_mmc1_prg_set

END_OF_SHARED_ORG = .