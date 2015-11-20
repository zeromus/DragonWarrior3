
		ORG $8000

_b17_s0_copyrights_screen_ptr:
		.WORD	_b17_s0_copyrights_screen
_b17_s1_title_screen_ptr:
		.WORD	_b17_s1_title_screen

; =============== S U B	R O U T	I N E =======================================
_b17_s0_copyrights_screen:
		JSR		_copyrights_screen_prepare
		JSR		_copyrights_send_tiles
		JSR		_copyrights_send_tilemaps
		JSR		_copyrights_set_sprites
		JSR		_render_on_flag10_clear_reinit
		JSR		_copyrights_set_pal_and_show
		JSR		_copyrights_sprites_animate
		LDX		#$50
		JSR		_vblank_count
		LDA		#$F
		STA		_ram_pal_buf
		JSR		sub_17435B
		JSR		sub_174369
		LDA		#0
		STA		byte_6A36
		JMP		_ppu_screen_clear

; =============== S U B	R O U T	I N E =======================================
_copyrights_screen_prepare:
		LDA		#8
		LDX		#$19
loc_234035:
		STA		_ram_pal_buf,X
		DEX
		BPL		loc_234035
		JSR		sub_17435B
		JSR		_ppu_screen_clear
		JMP		_vblank_and_render_off_flag10_set

; =============== S U B	R O U T	I N E =======================================
_render_on_flag10_clear_reinit:
		JMP		__render_on_flag10_clear_reinit

; =============== S U B	R O U T	I N E =======================================
_copyrights_set_pal_and_show:
		LDX		#0
loc_234049:
		LDA		_pal_copyrights,X
		STA		_ram_pal_buf,X
		INX
		CPX		#$19
		BCC		loc_234049
		JSR		_pal_fade_in
		LDA		#$27
		FAR		$A0,$07		; _bB_s3_apu_load
		RTS

; =============== S U B	R O U T	I N E =======================================
_copyrights_send_tiles:
		LDA		_PPU_STATUS
		LDY		#0
		STY		_PPU_ADDR
		STY		_PPU_ADDR
		LDA		#<[_chr_copyright_spr_data]
		STA		_tmp12
		LDA		#>[_chr_copyright_spr_data]
		STA		_tmp12+1
		LDX		#$10
		JSR		_ppu_data_send_tmp12
		LDA		_PPU_STATUS
		LDA		#$10
		STA		_PPU_ADDR
		LDY		#0
		STY		_PPU_ADDR
		LDA		#<[_chr_copyright_bg_data]
		STA		_tmp12
		LDA		#>[_chr_copyright_bg_data]
		STA		_tmp12+1
		LDX		#$10
		BNE		_ppu_data_send_tmp12

; =============== S U B	R O U T	I N E =======================================
_copyrights_send_tilemaps:
		LDA		#<[_tlm_copyrights]
		STA		_tmp12
		LDA		#>[_tlm_copyrights]
		STA		_tmp12+1
		LDA		_PPU_STATUS
		LDA		#$20
		STA		_PPU_ADDR
		LDY		#0
		STY		_PPU_ADDR
		LDX		#4

; =============== S U B	R O U T	I N E =======================================
_ppu_data_send_tmp12:
		LDA		(_tmp12),Y
		STA		_PPU_DATA
		INY
		BNE		_ppu_data_send_tmp12
		INC		_tmp12+1
		DEX
		BNE		_ppu_data_send_tmp12
		RTS

; =============== S U B	R O U T	I N E =======================================
_copyrights_set_sprites:
		LDY		#0
loc_2340BB:
		LDA		_spr_copyrights_data,Y
		CMP		#$FF
		BEQ		locret_2340C8
		STA		_spr_ram,Y
		INY
		BNE		loc_2340BB
locret_2340C8:
		RTS

; =============== S U B	R O U T	I N E =======================================
_copyrights_sprites_animate:
		LDX		#$28
		JSR		_vblank_count
		JSR		_copyrights_sprites_blink
		LDX		#$3C
		JSR		_vblank_count

; =============== S U B	R O U T	I N E =======================================
_copyrights_sprites_blink:
		LDY		#0
		STY		word_4
loc_2340DA:
		LDX		#2
		JSR		sub_23412F
		JSR		sub_2340E7
		INY
		CPY		#4
		BCC		loc_2340DA

; =============== S U B	R O U T	I N E =======================================
sub_2340E7:
		LDX		word_4
		LDA		byte_234126,X
		TAX
		TYA
		PHA
		LDA		#$F8
		LDY		#0
loc_2340F3:
		STA		_spr_ram,X
		INX
		INX
		INX
		INX
		INY
		CPY		#4
		BCC		loc_2340F3
		CPX		#$50
		BNE		loc_234107
		LDX		#0
		BEQ		loc_23410F
loc_234107:
		INC		word_4
		LDX		word_4
		LDA		byte_234126,X
		TAX
loc_23410F:
		LDY		#0
loc_234111:
		LDA		byte_23412B,Y
		STA		_spr_ram,X
		INX
		INX
		INX
		INX
		INY
		CPY		#4
		BCC		loc_234111
		JSR		sub_234136
		PLA
		TAY
		RTS
byte_234126:
		.BYTE	  0,$10,$20,$30,$40
byte_23412B:
		.BYTE	$B0,$B0,$B8,$B8

; =============== S U B	R O U T	I N E =======================================
sub_23412F:
		JSR		sub_234136
		DEX
		BNE		sub_23412F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_234136:
		LDA		#$FD
		STA		byte_32
		LDA		byte_60B7
		ORA		#$20
		STA		byte_60B7
		LDA		#0
		STA		byte_33
		JSR		_vblank
		RTS
_pal_copyrights:
		.BYTE	  8, $F,$37,$27, $F,$27,$17, $F,$2B,$1B,  0,  0,  0, $F,$20,$10
		.BYTE	$20,$11,  5,  0,  0,  0,  0,  0,  0
_tlm_copyrights:
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F,$40,$41,$43,$42,$43,$42,$43,$42
		.BYTE	$43,$42,$43,$42,$43,$42,$44,$45, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $C, $F, $F, $F, $F,$50,$51,$54,$54,  0,  1,  2,  3
		.BYTE	  4,  5,  6,  7,$54,$54,$52,$55, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $C, $D,$48,$49,$60,$51,$54,$10,$11,$12,$13,$14
		.BYTE	$15,$16,$17,$18,$19,$54,$54,$65,$48,$49, $E, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F,$1C,$1D,$46,$47,$70,$51,$54,$54,$54,$20,$21,$22
		.BYTE	$23,$24,$25,$54,$54,$54,$52,$75,$46,$47,$1E,$1F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F,$4A,$4B,$46,$47,$60,$51,$30,$31,$32,$33,$34,$35
		.BYTE	$36,$37,$38,$39,$3A,$3B,$3C,$65,$46,$47,$4C,$4D, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F,$5A,$5B,$46,$47,$80,$81,$52,$81,$52,$81,$52,$81
		.BYTE	$52,$81,$52,$81,$52,$81,$84,$85,$46,$47,$5C,$5D, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F,$6A,$6B,$46,$47,$90,$91,$93,$92,$93,$92,$93,$92
		.BYTE	$93,$92,$93,$92,$93,$92,$94,$95,$46,$47,$6C,$6D, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F,$7A,$7B,$56,$57,$A0,$A1, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F,$A4,$A5,$56,$57,$7C,$7D, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$B0,$B1
		.BYTE	$B2,$B3,$B4, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$C0,$C1
		.BYTE	$C2,$C3,$C4, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$D5,$D0,$D1
		.BYTE	$D2,$D3,$D4, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$E5,$E0,$E1
		.BYTE	$E2,$E3,$E4, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$F5,$F0,$F1
		.BYTE	$F2,$F3,$F4, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$86,$87,$88,$89
		.BYTE	$8A,$8B,$8C,$8D,$8E,$8F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$96,$97,$98,$99
		.BYTE	$9A,$9B,$9C,$9D,$9E,$9F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$A6,$A7,$A8,$A9
		.BYTE	$AA,$AB,$AC,$AD,$AE,$AF, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$B6,$B7,$B8,$B9
		.BYTE	$BA,$BB,$BC,$BD,$BE,$BF, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$C6,$C7,$C8,$C9
		.BYTE	$CA,$CB,$CC,$CD,$CE,$CF, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$8F,$DF,$D6,$D7,$D8,$D9
		.BYTE	$DA,$DB,$DC,$DD,$DE, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F,$8F,$EF,$E6,$E7,$E8,$E9
		.BYTE	$EA,$EB,$EC,$ED,$EE, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	 $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,$AA,$A2,$20,  0,  0,  0,  0,  0,$AA,$AA,$22,  0,  0
		.BYTE	  0,  0,$80,$AA,$AA,$22,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
;_tlm_copyrights_ofs:
;		.WORD	_tlm_copyrights
_spr_copyrights_data:
		.BYTE	$B0,   0,  1,$78,$B0,   1,  1,$80,$B8,   2,  1,$78,$B8,   3,  1,$80
		.BYTE	$F8,  4,  1,$78,$F8,  5,  1,$80,$F8,  6,  1,$78,$F8,  7,  1,$80
		.BYTE	$F8,  8,  1,$78,$F8,  9,  1,$80,$F8, $A,  1,$78,$F8, $B,  1,$80
		.BYTE	$F8, $C,  1,$78,$F8, $D,  1,$80,$F8, $E,  1,$78,$F8, $F,  1,$80
		.BYTE	$F8,$10,  1,$78,$F8,$11,  1,$80,$F8,$12,  1,$78,$F8,$13,  1,$80
		.BYTE	$80,$14,  0,$78,$80,$15,  0,$80,$88,$16,  0,$78,$88,$17,  0,$80
		.BYTE	$98,$18,  0,$78,$98,$19,  0,$80,$90,$1A,  0,$68,$90,$1B,  0,$90
		.BYTE	$D8,$1C,  0,$68,$D8,$1C,  0,$90,$C8,$1D,  0,$71,$C8,$1E,  0,$87
		.BYTE	$FF
_chr_copyright_spr_data:
		.BYTE	  0,  6,  0,  3,  5,  6, $D,  9,  0,  0,  0,  3,  7,  7, $E, $E
		.BYTE	  0,$60,  0,$C0,$60,$A0,$70,$30,  0,  0,  0,$C0,$E0,$E0,$F0,$F0
		.BYTE	 $C,  3,  5,$11,$4E,  3,  0,  0, $F,  3,  1,$11, $F,  3,  0,  0
		.BYTE	$70,$40,$A0,$88,$72,$C0,  0,  0,$F0,$C0,$80,$88,$F0,$C0,  0,  0
		.BYTE	  0,  6,  0,  3,  5,  6, $D,  9,  0,  0,  0,  3,  7,  7, $E, $E
		.BYTE	  0,$60,  0,$C0,$60,$A0,$70,$30,  0,  0,  0,$C0,$E0,$E0,$F0,$F0
		.BYTE	 $C,  3,  5,$10,$49,  3,  0,  0, $F,  3,  1,$11, $E,  0,  0,  0
		.BYTE	$70,$40,$A0,$88,$D2,  0,  0,  0,$F0,$C0,$80,  8,$30,$C0,  0,  0
		.BYTE	  0,  6,  0,  3,  5,  6, $D,  9,  0,  0,  0,  3,  7,  7, $E, $E
		.BYTE	  0,$60,  0,$C0,$60,$A0,$50,$30,  0,  0,  0,$C0,$E0,$E0,$E0,$C0
		.BYTE	 $C,  2,  5,$11,$4C,  3,  0,  0, $F,  3,  0,$10, $F,  3,  0,  0
		.BYTE	$60,$C0,$A0,  8,$72,$C0,  0,  0,$90,  0,  0,$88,$F0,$C0,  0,  0
		.BYTE	  0,  6,  0,  3,  5,  6, $D, $B,  0,  0,  0,  3,  7,  7, $E, $C
		.BYTE	  0,$60,  0,$C0,$40,$E0,$D0,$B0,  0,  0,  0,$C0,$A0,  0,$30,$70
		.BYTE	  7,  2,  5,$11,$4E,  3,  0,  0,  8,  1,  1,$11, $F,  3,  0,  0
		.BYTE	$70,$40,$A0,$88,$72,$C0,  0,  0,$F0,$C0,$80,$88,$F0,$C0,  0,  0
		.BYTE	  0,  6,  0,  1,  3,  6, $C,  8,  0,  0,  0,  2,  4,  1,  3,  7
		.BYTE	  0,$60,  0,$80,$20,$A0,$70,$30,  0,  0,  0,$40,$E0,$E0,$F0,$F0
		.BYTE	 $C,  3,  5,$11,$4E,  3,  0,  0, $F,  3,  1,$11, $F,  3,  0,  0
		.BYTE	$70,$40,$A0,$88,$72,$C0,  0,  0,$F0,$C0,$80,$88,$F0,$C0,  0,  0
		.BYTE	  0,  0,  4,  4,  4,$14,$1E,$12,  0,  4,  4, $C, $C,$1C,$1E,$12
		.BYTE	  0,  0,$40,$40,$40,$50,$F0,$90,  0,$40,$40,$60,$60,$70,$F0,$90
		.BYTE	  0,  0,  0,  0,  0,  4,  4,  0,  0,  0,  0,  0,  0,  8, $C,  0
		.BYTE	  0,  0,  0,  0,  0,$40,$40,  0,  0,  0,  0,  0,  0,$20,$60,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  8,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,$20,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  8,  0,  0,  0,  0,  0,  0,$10,  8,  0,  0,  0,  0
		.BYTE	  0,  0,  0,$10,  0,  0,  0,  0,  0,  0,  8,$10,  0,  0,  0,  0
		.BYTE	$54,  0,  0,  0,  0,  0,  0,  0,$54,$54,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  2,  2,  0,  0,  0,  0,  0,  0,  2,  3,  1
		.BYTE	  0,  0,  0,  0,  0,$40,$40,  0,  0,  0,  0,  0,  0,$40,$C0,$80
_chr_copyright_bg_data:
		.BYTE	  0,$3E,  8,  8,  8,  8, $A,  0,$FF,$C1,$F7,$F7,$F7,$F7,$F5,$FF
		.BYTE	  0,$D8,$D8,$A8,$A8,$A8,$8A,  0,$FF,$27,$27,$57,$57,$57,$75,$FF
		.BYTE	  0,$11,$29,$29,$45,$7D,$45,  0,$FF,$EE,$D6,$D6,$BA,$82,$BA,$FF
		.BYTE	  0,$AE,$A9,$A9,$69,$69,$6E,  0,$FF,$51,$56,$56,$96,$96,$91,$FF
		.BYTE	  7,  8,$13,$14,$14,$13,  8,  7,$F8,$F7,$EC,$EB,$EB,$EC,$F7,$F8
		.BYTE	$80,$42,$26,$22,$22,$22,$42,$80,$7F,$BD,$D9,$DD,$DD,$DD,$BD,$7F
		.BYTE	  0,$63,$94,$94,$73,$10,$63,  0,$FF,$9C,$6B,$6B,$8C,$EF,$9C,$FF
		.BYTE	  0,$10,$B0,$90,$90,$90,$10,  0,$FF,$EF,$4F,$6F,$6F,$6F,$EF,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  1,  7,$1F,$3E,$58,$7C,$F0,$E8,  0,  1,  7,$1F,$3F,$3F,$7F,$7F
		.BYTE	$80,$E0,$F8,$7C,$1A,$3E, $F,$17,  0,$80,$E0,$F8,$FC,$FC,$FE,$FE
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0, $F,  8, $F,  8,  8, $F,  0,$FF,$F0,$F7,$F0,$F7,$F7,$F0,$FF
		.BYTE	  0,$6A,$6A,$6A,$5A,$5A,$5A,  0,$FF,$95,$95,$95,$A5,$A5,$A5,$FF
		.BYTE	  0,$90,$91,$61,$61,$91,$90,  0,$FF,$6F,$6E,$9E,$9E,$6E,$6F,$FF
		.BYTE	  0,$C6,$29,  9,  9,$29,$C6,  0,$FF,$39,$D6,$F6,$F6,$D6,$39,$FF
		.BYTE	  0,$73,$4A,$4A,$73,$4A,$4A,  0,$FF,$8C,$B5,$B5,$8C,$B5,$B5,$FF
		.BYTE	  0,$8C,$52,$52,$92,$12, $C,  0,$FF,$73,$AD,$AD,$6D,$ED,$F3,$FF
		.BYTE	  0,$E1,$92,$92,$E4,$97,$94,  0,$FF,$1E,$6D,$6D,$1B,$68,$6B,$FF
		.BYTE	  0,$3E,$88,$88,$48,$C8,$48,  0,$FF,$C1,$77,$77,$B7,$37,$B7,$FF
		.BYTE	  0,$99,$A5,$A5,$A5,$A5,$99,  0,$FF,$66,$5A,$5A,$5A,$5A,$66,$FF
		.BYTE	  0,$A0,$A0,$A0,$60,$60,$60,  0,$FF,$5F,$5F,$5F,$9F,$9F,$9F,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  1,  2,  3,  7,$1F,$FE,$FF,$7E,  0,  1,  1,  3,  7,$1F,$7F,$3F
		.BYTE	$D0,$A8,$50,$A8,$50,$A8,$50,$A8,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	 $B,$15, $A,$15, $A,$15, $A,$15,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$80,$40,$C0,$E0,$F8,$7F,$FF,$7E,  0,$80,$80,$C0,$E0,$F8,$FE,$FC
		.BYTE	  0,$44,$45,$45,$45,$45,$74,  0,$FF,$BB,$BA,$BA,$BA,$BA,$8B,$FF
		.BYTE	  0,$CF,$28, $E,  8,$28,$CF,  0,$FF,$30,$D7,$F1,$F7,$D7,$30,$FF
		.BYTE	  0,$69,$6A,$6B,$58,$5A,$59,  0,$FF,$96,$95,$94,$A7,$A5,$A6,$FF
		.BYTE	  0,$9E,$50,$1C,$D0,$50,$9E,  0,$FF,$61,$AF,$E3,$2F,$AF,$61,$FF
		.BYTE	  0,$E1,$91,$91,$91,$91,$E1,  0,$FF,$1E,$6E,$6E,$6E,$6E,$1E,$FF
		.BYTE	  0,$C9,$29,$C9,$27,$21,$C6,  0,$FF,$36,$D6,$36,$D8,$DE,$39,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$6A,$6A,$6A,$5A,$5A,$5A,  0,$FF,$95,$95,$95,$A5,$A5,$A5,$FF
		.BYTE	  0,$D7,$D1,$D1,$B1,$B1,$B1,  0,$FF,$28,$2E,$2E,$4E,$4E,$4E,$FF
		.BYTE	  0,$DE,$10,$1C,$10,$10,$1E,  0,$FF,$21,$EF,$E3,$EF,$EF,$E1,$FF
		.BYTE	  0,$D7,$D4,$D4,$B4,$B4,$B7,  0,$FF,$28,$2B,$2B,$4B,$4B,$48,$FF
		.BYTE	  0,$18,$A4,$A4,$A4,$A4,$18,  0,$FF,$E7,$5B,$5B,$5B,$5B,$E7,$FF
		.BYTE	  0,$33,$4A,$4B,$4A,$4A,$32,  0,$FF,$CC,$B5,$B4,$B5,$B5,$CD,$FF
		.BYTE	  0,$C2,  5,$85,  8, $F,  8,  0,$FF,$3D,$FA,$7A,$F7,$F0,$F7,$FF
		.BYTE	  0,$36,$36,$2A,$AA,$AA,$A2,  0,$FF,$C9,$C9,$D5,$55,$55,$5D,$FF
		.BYTE	  0,$F7,$84,$E4,$87,$84,$F4,  0,$FF,  8,$7B,$1B,$78,$7B, $B,$FF
		.BYTE	  0,$26,$A9,$A8,$28,$A9,$A6,  0,$FF,$D9,$56,$57,$D7,$56,$59,$FF
		.BYTE	  0,$10,$28,$28,$44,$7C,$44,  0,$FF,$EF,$D7,$D7,$BB,$83,$BB,$FF
		.BYTE	  0,$5A,$5A,$5A,$56,$56,$56,  0,$FF,$A5,$A5,$A5,$A9,$A9,$A9,$FF
		.BYTE	  0,$60,$90,$80,$80,$90,$64,  0,$FF,$9F,$6F,$7F,$7F,$6F,$9B,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  7,$1F,$3F,$7F,$7D,$F8,$F0,$F8,  0,  5,$1F,$2F,$3F,$7F,$3F,$7F
		.BYTE	$C0,$FF,$FF,$FF,$22,$40,$80,$A0,  0,$40,$F5,$FD,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$21,  0,  0,  0,  0,  0,$DB,$DF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,$FF,$FF,$FF,$42,  0,  0,  0,  0,  0,$DD,$FF,$FF,$FF,$FF,$FF
		.BYTE	  3,$FF,$FF,$FF,$44,  2,  3,  5,  0,  2,$AF,$BF,$FF,$FF,$FF,$FF
		.BYTE	$E0,$F8,$FC,$FE,$BE,$1F, $F,$1F,  0,$A0,$F8,$F4,$FC,$FE,$FC,$FE
		.BYTE	 $A,$14, $A,  4, $A,$14, $A,  4,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  5,  2,  5,  2,  5,  2,  5,  2,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$38,$FE,$FF,$C7, $B,$14, $A,  4,  0,$28,$EE,$FF,$FF,$FF,$FF,$FF
		.BYTE	  7,$1F,$FF,$FA,$E5,  2,  5,  2,  0,  5, $F,$6F,$FF,$FF,$FF,$FF
		.BYTE	$7F,$3F,$1F,  7,  0,  0,  0,  0,$3F,$17,  6,  0,  0,  0,  0,  0
		.BYTE	$50,$A8,$D0,$F8,$FC,$3F,$1F,  7,$FF,$FF,$FF,$BF,$37,$17,  5,  1
		.BYTE	 $A,$15, $B,$1F,$3F,$FC,$F8,$E0,$FF,$FF,$FF,$FD,$EC,$E8,$A0,$80
		.BYTE	$FE,$FC,$F8,$E0,  0,  0,  0,  0,$FC,$E8,$60,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$F0,$F0,$78,$70,$70,$78,$70,$7C,$3F,$7F,$3F,$1F,$3F, $F,$3F,$3F
		.BYTE	  0,$A0,  0,$A0,  0,$80,$20,$80,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  5,  0,  5,  0,  1,  4,  1,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	 $F, $F,$1E, $E, $E,$1E, $E,$3E,$FC,$FE,$FC,$F8,$FC,$F0,$FC,$FC
		.BYTE	 $A,$14, $A,  7,$CF,$FF,$FC,$30,$FF,$FF,$FF,$FF,$FF,$F4,$30,  0
		.BYTE	  5,  2,$FD,$FE,$FF,  7,  1,  0,$FF,$FF,$FF,$B7,  7,  1,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  1,  3,  7,$1E,$3C,$68,$D0,$A0,  0,  1,  3,  7,$1F,$3F,$7F,$FF
		.BYTE	$80,$C0,$E0,$78,$3C,$16, $B,  5,  0,$80,$C0,$E0,$F8,$FC,$FE,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,$C0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$1F,$9F, $F,$9F,$1F,$8F,$1F,$9F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F,$F8,$F9,$F0,$F9,$F8,$F1,$F8,$F9
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  7,  7, $F, $E,$1F,$1E,$3F,$3E,  3,  1,  7,  7, $F,  7,$1F,$1F
		.BYTE	$D0,$A8,$50,$A0,$50,$A8,$50,$A0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	 $B,$15, $A,  5, $A,$15, $A,  5,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$E0,$E0,$F0,$70,$F8,$78,$FC,$7C,$C0,$80,$E0,$E0,$F0,$E0,$F8,$F8
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FC,$F0,$F0,$F0,$F0,$F8,$F0,$F8,$3F,$3F,$1F,$3F,$3F, $F,$3F,$3F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$3F, $F, $F, $F, $F,$1F, $F,$1F,$FC,$FC,$F8,$FC,$FC,$F0,$FC,$FC
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$7F,$7F,$7F,$FF,$FF,$40,  0,  0,$3F,$3F,$3F,$6D,$40,  0,  0,  0
		.BYTE	$50,$A8,$50,$E0,$F3,$FF,$3F, $C,$FF,$FF,$FF,$FF,$FF,$2F, $C,  0
		.BYTE	 $A,$15, $A,  7,$CF,$FF,$FC,$30,$FF,$FF,$FF,$FF,$FF,$F4,$30,  0
		.BYTE	$FE,$FE,$FE,$FF,$FF,  2,  0,  0,$FC,$FC,$FC,$B6,  2,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$F8,$F8,$F8,$F8,$F8,$F8,$FC,$FF,$9F,$9F,$8F,$9F,$9F,$8F,$9F,$9F
		.BYTE	$40,$80,  0,$40,$80,$40,$62,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$BF,$B7
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  2,  1,  5,  0,  2,  1,$2F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$BB
		.BYTE	$1F,$1F,$1F,$1F,$1F,$1F,$1F,$FF,$F9,$F9,$F1,$F9,$F9,$F1,$F9,$F9
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$5F,$5F,$7F,$7F,$3F,$3F,$3E,$1F,$28,$28,$28,$20,$11,$11,$11,  9
		.BYTE	$DD,$8D,$86,$4A,$87,$C7,$2F,$9F,$7E,$7F,$FF,$FF,$FD,$FE,$FE,$F0
		.BYTE	$80,$C0,$70,$3C,$8F,$E3,$F0,$FC,$7F,$BF,$CF,$F3,$FC,$7F,$3F,$1F
		.BYTE	  1,  3, $E,$3C,$F1,$C7, $F,$3F,$FE,$FD,$F3,$CF,$3F,$FE,$FC,$F8
		.BYTE	$BB,$B1,$61,$52,$E1,$E3,$F4,$F9,$7E,$FE,$FF,$FF,$BF,$7F,$7F, $F
		.BYTE	$FA,$FA,$FE,$FE,$FC,$FC,$7C,$F8,$14,$14,$14,  4,$88,$88,$88,$90
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$64,$6F,$7F,$3F,$3F,$3F,$1F,$1F,$9B,$90,$C0,$C3,$C7,$E1,$F0,$FC
		.BYTE	$FC,$FF,$FE,$FE,$FE,$AE,$D6,$FE,  3,  0,$A8,$54,$F8,$FC,$38,  0
		.BYTE	$FC,  3,  0,  0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$3F,$C0,  0,  0,  0,  0,  0,  0,$C0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$3F,$FF,$7F,$7F,$7F,$75,$6B,$7F,$C0,  0,$15,$2A,$1F,$3F,$1C,  0
		.BYTE	$26,$F6,$FE,$FC,$FC,$FC,$F8,$F8,$D9,  9,  3,$C3,$E3,$87, $F,$3F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$1F, $F,  7,  2,  0,  0,  0,  0,  8,  4,  2,  0,  0,  0,  0,  0
		.BYTE	$DE,$B3,$C4,$F8,$71,$77,$FF,$FF,$EF,$FF,$7F,$7F,$3F,$1E,  2,$40
		.BYTE	$FF,$79,$B7, $C,$98,$38,$70,$70,$11,$80,$CC,$F8,$70,$F0,$E0,$E0
		.BYTE	$FF,$9E,$ED,$30,$19,$1C, $E, $E,$88,  1,$33,$1F, $E, $F,  7,  7
		.BYTE	$7B,$CD,$23,$1F,$8E,$EE,$FF,$FF,$F7,$FF,$FE,$FE,$FC,$78,$40,  2
		.BYTE	$F8,$F0,$E0,$47,$1F,$7D,$F9,$FC,$10,$20,$40,  0,  7,$1F,$7F,$2F
		.BYTE	  0,  0,  0,  0,$C0,$E0,$30,$90,  0,  0,  0,  0,  0,$C0,$E0,$E0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$4F,$17,$2A,$15,$4A,$3D,$C3,  0,$FD,$FF,$FF,$FF,$FF,$C3,  0,  0
		.BYTE	$FE,$FE,$FE,$7E,$BE,$5C,$B8,$F0,$40,$A8,$F4,$E8,$F4,$F8,$E0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$7F,$7F,$7F,$7E,$7D,$3A,$1D, $F,  2,$15,$2F,$17,$2F,$1F,  7,  0
		.BYTE	$F2,$E8,$54,$A8,$52,$BC,$C3,  0,$BF,$FF,$FF,$FF,$FF,$C3,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  1,  1,$1D,$2F,$47,$67,$F3,$C3,  0,  0,  0,$1D,$3D,$3D,$7E,$7E
		.BYTE	$FF,$FA,$FA,$FF,$DF,$EF,$E7,$B3,$E2,$E5,$F5,$F5,$F2,$F8,$FC,$FF
		.BYTE	$70,$DC,$FA,$EE,$B0,$FC,$FF,$EF,$E0,$B0,  8,  0,$80,  0,$10,$FC
		.BYTE	 $E,$3B,$5F,$77, $D,$3F,$FF,$F7,  7, $D,$10,  0,  1,  0,  8,$3F
		.BYTE	$FF,$5F,$5F,$FF,$FB,$F7,$E7,$CD,$47,$A7,$AF,$AF,$4F,$1F,$3F,$FF
		.BYTE	$FE,$FF,$FF,$F7,$E3,$E7,$CF,$C3,$17, $A,  1,$B8,$BC,$BC,$7E,$7E
		.BYTE	  8,$C8,$C8,$CC,$CC,$C4,$E6,$EB,$F0,$F0,$F0,$B8,$78,$78,$7C,$BC
		.BYTE	  0,  0,  0,$3C,$43,$9E,$CF,$F1,  0,  0,  0,  0,$3C,$6F,$71,$3E
		.BYTE	  0,  0,  0,  0,  0,$E0,$D8,$FE,  0,  0,  0,  0,  0,  0,$E0,$38
		.BYTE	  0,  0,  0,  0,  0,  6,  5,  2,  0,  0,  0,  0,  0,  0,  2,  1
		.BYTE	  4, $A, $A,$12,$12,$22,$21,$ED,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$40,$A0,$A0,$90,$90,$88,  9,$6E,  0,  0,  0,  0,  0,  0,  0,  1
		.BYTE	  0,  0,  0,  0,  0,$C0,$40,$80,  0,  0,  0,  0,  0,  0,$80,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  2,  1,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$C9,$F1,$E0,$60,$78,$74,$E0,$7C,$7F,$7F,$7F,$3F,$3F,$3F,$1F,$1F
		.BYTE	$D5,$C6,$E3,$E1,$F0,$78,$3E,$7F,$7F,$7D,$BE,$FF,$DF,$FF,$F7,$FB
		.BYTE	$57,$AA,$15,$C0,$F8,$3F,  7,$80,$FF,$FF,$FF,$3F,$C7,$F8,$FF,$FF
		.BYTE	$EA,$55,$A8,  3,$1F,$FC,$E0,  1,$FF,$FF,$FF,$FC,$E3,$1F,$FF,$FF
		.BYTE	$AB,$63,$C7,$87, $F,$1E,$7C,$FE,$FE,$BE,$7D,$FF,$FB,$FF,$EF,$DF
		.BYTE	$93,$8F,  7,  7,$1F,$2E,  7,$3E,$FE,$FE,$FE,$FC,$FC,$FC,$F8,$F8
		.BYTE	$E3,$F4,$F0,$F9,$FC,$FF,$7F,$AF,$7E,$BF,$5F,$2F,$17,  5,  0,  0
		.BYTE	$F8,$FC,$B0,$20,  1, $F,$FF,$FE, $F,  7,$CF,$FF,$FF,$FE,$F0,  0
		.BYTE	$FD,$BE,$D4,$A8,$C0,$A0,$40,$80,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  2,  1,  1,  1,  2,  3,  1,  1,  1,  0,  0,  0,  1,  0,  0,  0
		.BYTE	$33,$C1,$F1,$F9,$7F,$F7,$F3,$7F,$CC,$7F,$9F,$CE,$C6,$20,$C0,$D2
		.BYTE	$99, $F,$9F,$BF,$FC,$DF,$9F,$FD,$67,$FC,$F2,$E6,$C7,  8,  6,$96
		.BYTE	$80,  0,  0,  0,$80,$80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	 $A,$15, $A,$15,$AA,$7F,$FF,$7F,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FC,$7F,$BE,$7F,$BF,$FF,$FF,$FF, $F,  7,  7,  3,  1,  0,  0,  0
		.BYTE	$3F,$7F,$7F,$FD,$FE,$FE,$FE,$FF,$F3,$E9,$F0,$FE,$FB,$56,$2A,$14
		.BYTE	  0,$C0,$F0,$FC,$FF,$FB,$70,$78,$FF,$BF,$CF,$73,$3C,$3F,$3F,$1F
		.BYTE	  0,  3, $F,$3F,$FF,$DF, $E,$1E,$FF,$FD,$F3,$CE,$3C,$FC,$FC,$F8
		.BYTE	$FC,$FE,$FE,$BF,$7F,$7F,$7F,$FF,$CF,$97, $F,$7F,$DF,$6A,$54,$28
		.BYTE	$3F,$FE,$7D,$FE,$FD,$FF,$FF,$FF,$F0,$E0,$E0,$C0,$80,  0,  0,  0
		.BYTE	$55,$AA,$55,$A8,$54,$FD,$FE,$FF,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FD,$AA,$54,  0,  0,  0,$80,$40,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  1,  0,  0,$80,$81,$41,$41,$A2,  0,  0,  0,  0,  0,$80,$80,$41
		.BYTE	$6F,$D9,$D7,$FE,$FC,$FF,$7C,$FE,$BD,$2E,$29, $F,$97,$97,$97,  5
		.BYTE	$ED,$36,$D6,$FE,$7F,$FF,$7D,$FE,$7A,$E8,$28,$E0,$D2,$D2,$D2,$41
		.BYTE	  0,  0,  0,  1,  1,  2,  2,$85,  0,  0,  0,  0,  0,  1,  1,  2
		.BYTE	  0,$70,$A8,$74,$4C,$A0,$A0,$D0,  0,  0,$60,$80,$80,$40,$40,$20
		.BYTE	  0, $E,$15,$2E,$32,  5,  5, $B,  0,  0,  6,  1,  1,  2,  2,  4
		.BYTE	$EF,$57,$AF,$7F,$FF,$FF,$FF,$FF,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FF,$FF,$FF,$FA,$ED,$D7,$BF,$AB,  0,  0,  1,  7,$1F,$3F,$6A,$56
		.BYTE	$FF,$FF,$FF,$BF,$7F,$FF,$FF,$FF,$28,$5C,$F8,$F0,$C0,$80,  0,  0
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF, $F,  3,  0,  0,  0,  0,  0,  0
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F0,$C0,  0,  0,  0,  0,  0,  0
		.BYTE	$FF,$FF,$FF,$FD,$FE,$FF,$FF,$FF,$14,$3A,$1F, $F,  3,  1,  0,  0
		.BYTE	$FF,$FF,$FF,$5F,$B7,$EB,$FD,$D5,  0,  0,$80,$E0,$F8,$FC,$56,$6A
		.BYTE	$EE,$D7,$FA,$FD,$FE,$FF,$FF,$FF,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$80,  0,$80,  0,$80,$40,$80,$40,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  1,  2,  5,  2,  5,  2,  5,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$A3,$D0,$D0,$E8,$E8,$F4,$FC,$BE,$40,$20,$20,$10,$10,$88,$C8,$CC
		.BYTE	$37,$3F,$3F,$7F,$7F,$75,$EA,$F0,  3,$13, $B,$10,$3C,$3F,$7F,$5F
		.BYTE	$DD,$FC,$FC,$FE,$FE,$AE,$57, $F,$80,$88,$90,$28,$74,$FC,$FE,$FA
		.BYTE	$85, $B, $B,$17,$17,$2F,$3F,$7D,  2,  4,  4,  8,  8,$11,$13,$33
		.BYTE	$D0,$E8,$E8,$D4,$F4,$F4,$72,$EA,$20,$10,$D0,$68,$68,$68,$AC,$B4
		.BYTE	 $B,$17,$17,$2B,$2F,$2F,$4E,$57,  4,  8, $B,$16,$16,$16,$35,$2D
		.BYTE	$FF,$7F,$AF,$55,$2A,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$AB,$AB,$FF,$FD,$AA,$54,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FE,$D5,$AA,$54,$80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$AF,$55,$AA,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FA,$55,$AA,$50,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$BF,$57,$AA,$55,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$D5,$D5,$FF,$5F,$AA,$55,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FE,$FD,$FA,$D5,$AA,$50,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$80,$40,$80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  2,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$DE,$5F,$BF,$F7,$FF,$FF,$FE,$FC,$A4,$A4,$66,$4D,  9,$83,  7,$1F
		.BYTE	$F0,$9C,$8F,$C3,$70,$BC,$CF,  3,$6F,$F3,$FC,$BF,$CF,$F3,$FC,$FF
		.BYTE	 $F,$39,$F1,$C3, $E,$3D,$F3,$C0,$F6,$CF,$3F,$FD,$F3,$CF,$3F,$FF
		.BYTE	$7B,$FA,$FD,$EF,$FF,$FF,$7F,$3F,$25,$25,$66,$B2,$90,$C1,$E0,$F8
		.BYTE	$FA,$BA,$F9,$75,$5D,$BD,$BD,$FD,$B4,$D4,$D6,$DA,$EA,$6A,$6A,$2A
		.BYTE	$5F,$5D,$9F,$AE,$BA,$BD,$BD,$BF,$2D,$2B,$6B,$5B,$57,$56,$56,$54
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
;_chr_copyright_bg_data_ofs:
;		.WORD	_chr_copyright_bg_data
;_chr_copyright_spr_data_ofs:
;		.WORD	_chr_copyright_spr_data

; =============== S U B	R O U T	I N E =======================================
_b17_s1_title_screen:
		JSR		sub_23587B
		JSR		sub_2358FB
		JSR		sub_235930
		JSR		sub_23588E
		JSR		sub_235897
		JSR		sub_235B15
		JSR		sub_23598B
		JSR		sub_235A9B
		LDA		byte_6A36
		CMP		#1
		BEQ		loc_23584E
		LDY		#2
loc_2357FB:
		LDX		#0
loc_2357FD:
		JSR		sub_235C8C
		DEX
		BEQ		loc_23580A
		JSR		sub_235C6D
		BCC		loc_2357FD
		BCS		loc_235861
loc_23580A:
		DEY
		BNE		loc_2357FB
		LDA		#$F
		STA		_ram_pal_buf
		JSR		sub_17435B
		JSR		sub_174369
		FAR		$A1,$07		; _bB_s4
		LDX		#$64
		JSR		_vblank_count
		FAR		$00,$8F		; _b18_s0
		LDX		#$64
		JSR		_vblank_count
		LDX		#0
		LDA		#$F
loc_23582C:
		STA		_ram_pal_buf,X
		INX
		CPX		#$19
		BCC		loc_23582C
		JSR		sub_17435B
		JSR		_vblank_and_render_off_flag10_set
		LDA		#$E
		STA		_cur_mmc_cmd
		LDA		#$10
		STA		_cur_chr0_bank_prg_hi
		JSR		_mmc1_reinit
		INC		byte_6A36
		JSR		__render_on_flag10_clear_reinit
		RTS
loc_23584E:
		JSR		sub_235C8C
		JSR		sub_235C6D
		BCC		loc_23584E
loc_235856:
		JSR		sub_174369
		LDA		#2
		STA		byte_6A36
		JMP		__render_on_flag10_clear_reinit
loc_235861:
		LDA		byte_6A36
		CMP		#1
		BEQ		loc_235856
		FAR		$A1,$07		; _bB_s4
		JSR		sub_174369
		LDX		#$3C
		JSR		_vblank_count
		LDA		#2
		STA		byte_6A36
		JMP		__render_on_flag10_clear_reinit

; =============== S U B	R O U T	I N E =======================================
sub_23587B:
		LDA		#$F
		LDX		#$19
loc_23587F:
		STA		_ram_pal_buf,X
		DEX
		BPL		loc_23587F
		JSR		sub_17435B
		JSR		sub_234136
		JMP		_vblank_and_render_off_flag10_set

; =============== S U B	R O U T	I N E =======================================
sub_23588E:
		JSR		__render_on_flag10_clear_reinit
		LDA		#$1E
		STA		byte_6D4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235897:
		LDA		#0
		STA		byte_F
		JSR		sub_235957
		LDX		#0
		LDA		#$F
loc_2358A2:
		STA		_ram_pal_buf,X
		INX
		CPX		#$19
		BCC		loc_2358A2
		JSR		sub_2359E7
		LDX		#$5A
		JSR		sub_235C60
		BCC		loc_2358B7
		JMP		sub_2359D8
loc_2358B7:
		JSR		sub_235977
		JMP		loc_2358C2
loc_2358BD:
		PLA
		PLA
		JMP		sub_2359D8
loc_2358C2:
		LDY		#0
loc_2358C4:
		LDX		#0
loc_2358C6:
		LDA		byte_2358EF,Y
		STA		_ram_pal_buf+1,X
		STA		_ram_pal_buf+$D,X
		INY
		INX
		CPX		#3
		BCC		loc_2358C6
		TXA
		PHA
		TYA
		PHA
		JSR		sub_17435B
		PLA
		TAY
		PLA
		TAX
		LDX		#$C
		JSR		sub_235C60
		BCC		loc_2358EA
		JMP		sub_2359D8
loc_2358EA:
		CPY		#$C
		BCC		loc_2358C4
		RTS
byte_2358EF:
		.BYTE	  0,  0,  0,  0,$10,$10,  0,$10,$20,  0,$10,$20

; =============== S U B	R O U T	I N E =======================================
sub_2358FB:
		LDA		_PPU_STATUS
		LDY		#0
		STY		_PPU_ADDR
		STY		_PPU_ADDR
		LDA		#<[_chr_title_bg_data0]
		STA		_tmp12
		LDA		#>[_chr_title_bg_data0]
		STA		_tmp12+1
		LDX		#$10
		JSR		sub_235949
		LDA		_PPU_STATUS
		LDA		#$10
		STA		_PPU_ADDR
		LDY		#0
		STY		_PPU_ADDR
		LDA		#<[_chr_title_bg_data1]
		STA		_tmp12
		LDA		#>[_chr_title_bg_data1]
		STA		_tmp12+1
		LDX		#$10
		BNE		sub_235949

; =============== S U B	R O U T	I N E =======================================
sub_235930:
		LDA		#<[_tlm_title_data]
		STA		_tmp12
		LDA		#>[_tlm_title_data]
		STA		_tmp12+1
		LDA		_PPU_STATUS
		LDA		#$20
		STA		_PPU_ADDR
		LDY		#0
		STY		_PPU_ADDR
		LDX		#4

; =============== S U B	R O U T	I N E =======================================
sub_235949:
		LDA		(_tmp12),Y
		STA		_PPU_DATA
		INY
		BNE		sub_235949
		INC		_tmp12+1
		DEX
		BNE		sub_235949
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235957:
		LDY		#0
loc_235959:
		LDA		_spr_title_data,Y
		CMP		#$FF
		BEQ		locret_235966
		STA		_spr_ram,Y
		INY
		BNE		loc_235959
locret_235966:
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_235967:
;		LDY		#0
;loc_235969:
;		LDA		byte_236236,Y
;		CMP		#$FF
;		BEQ		locret_235976
;		STA		_spr_ram+$98,Y
;		INY
;		BNE		loc_235969
;locret_235976:
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235977:
		LDX		#0
loc_235979:
		LDA		byte_23623F,X
		STA		_spr_ram+$90,X
		LDA		byte_23624F,X
		STA		_spr_ram+$B0,X
		INX
		CPX		#$10
		BCC		loc_235979
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_23598B:
		LDX		#$50
loc_23598D:
		JSR		sub_235C8C
		DEX
		BEQ		loc_235998
		JSR		sub_235C6D
		BCC		loc_23598D
loc_235998:
		LDA		#0
		STA		word_4
loc_23599C:
		LDX		word_4
		LDA		byte_2359E2,X
		TAX
loc_2359A2:
		JSR		sub_235C6D
		BCS		sub_2359D8
		JSR		sub_235C8C
		DEX
		BNE		loc_2359A2
		JSR		sub_2359B9
		INC		word_4
		LDA		word_4
		CMP		#5
		BCC		loc_23599C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2359B9:
		LDA		word_4
		ASL
		ASL
		STA		word_4+1
		ASL
		ASL
		ASL
		CLC
		ADC		word_4+1
		TAX
		LDY		#1
loc_2359C8:
		LDA		byte_237F23,X
		STA		_spr_ram,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$91
		BCC		loc_2359C8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2359D8:
		LDX		#$A
		JSR		sub_235C85
		PLA
		PLA
		JMP		loc_235861
byte_2359E2:
		.BYTE	  5,  8, $B, $E,$10

; =============== S U B	R O U T	I N E =======================================
sub_2359E7:
		LDA		#0
		STA		byte_9
		STA		byte_A
		STA		byte_B
loc_2359EF:
		LDA		byte_9
		AND		#1
		BNE		loc_2359F8
		JSR		sub_235A14
loc_2359F8:
		LDA		byte_9
		AND		#$F
		BNE		loc_235A01
		JSR		sub_235A35
loc_235A01:
		INC		byte_9
		LDX		#1
		JSR		sub_235C60
		BCC		loc_235A0D
		JMP		loc_2358BD
loc_235A0D:
		LDA		byte_9
		CMP		#$50
		BCC		loc_2359EF
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235A14:
		LDA		byte_A
		CMP		#$10
		BCS		locret_235A34
		DEC		_spr_ram+$E0
		DEC		_spr_ram+$E4
		DEC		_spr_ram+$E8
		DEC		_spr_ram+$EC
		DEC		_spr_ram+$F0
		DEC		_spr_ram+$F4
		DEC		_spr_ram+$F8
		DEC		_spr_ram+$FC
		INC		byte_A
locret_235A34:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235A35:
		LDA		byte_B
		CMP		#$C
		BCS		locret_235A58
		TAX
		LDY		#0
loc_235A3E:
		LDA		byte_235A59,X
		STA		_ram_pal_buf+$10,Y
		LDA		byte_235A65,X
		STA		_ram_pal_buf+$A,Y
		STA		_ram_pal_buf+$16,Y
		INX
		INY
		CPY		#3
		BCC		loc_235A3E
		STX		byte_B
		JSR		sub_17435B
locret_235A58:
		RTS
byte_235A59:
		.BYTE	  6,  7,  7,$16,$17,$17,$26,$27,$27,$26,$27,$37
byte_235A65:
		.BYTE	  0,  0,  0,  0,$10,$10,  0,$10,$20,  0,$10,$20

; =============== S U B	R O U T	I N E =======================================
sub_235A71:
		TYA
		PHA
		TXA
		PHA
		LDA		byte_F
		CMP		#4
		BCC		loc_235A7F
		LDA		#0
		STA		byte_F
loc_235A7F:
		ASL
		ASL
		ASL
		TAX
		LDY		#0
loc_235A85:
		LDA		byte_235D0A,X
		STA		_spr_ram+$E1,Y
		INX
		INY
		INY
		INY
		INY
		CPY		#$20
		BCC		loc_235A85
		INC		byte_F
		PLA
		TAX
		PLA
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235A9B:
		LDX		#$4B
		JSR		sub_235C60
		BCC		loc_235AA5
		JMP		sub_2359D8
loc_235AA5:
		JSR		sub_235C52
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_235AA9:
;		LDY		#0
;loc_235AAB:
;		LDX		#0
;loc_235AAD:
;		LDA		byte_235AD3,Y
;		STA		_ram_pal_buf+$10,X
;		INY
;		INX
;		CPX		#3
;		BCC		loc_235AAD
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_17435B
;		PLA
;		TAY
;		PLA
;		TAX
;		LDX		#$C
;		JSR		sub_235C60
;		BCC		loc_235ACE
;		JMP		loc_2358BD
;loc_235ACE:
;		CPY		#9
;		BCC		loc_235AAB
;		RTS
;byte_235AD3:
;		.BYTE	  6,  7,  7,$16,$17,$17,$26,$27,$37

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_235ADC:
;		LDY		#0
;loc_235ADE:
;		LDX		#0
;loc_235AE0:
;		LDA		byte_235B09,Y
;		STA		_ram_pal_buf+$A,X
;		STA		_ram_pal_buf+$16,X
;		INY
;		INX
;		CPX		#3
;		BCC		loc_235AE0
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_17435B
;		PLA
;		TAY
;		PLA
;		TAX
;		LDX		#$C
;		JSR		sub_235C60
;		BCC		loc_235B04
;		JMP		sub_2359D8
;loc_235B04:
;		CPY		#9
;		BCC		loc_235ADE
;		RTS
;byte_235B09:
;		.BYTE	  0,  0,  0,  0,$10,$10,  0,$10,$20,$4C,$67,$99

; =============== S U B	R O U T	I N E =======================================
sub_235B15:
		LDX		#$64
		JSR		sub_235C60
		BCC		loc_235B1F
		JMP		sub_2359D8
loc_235B1F:
		LDA		#0
		STA		byte_11
loc_235B23:
		JSR		sub_235BE8
		JSR		sub_235BCB
		JSR		sub_235BA4
		JSR		sub_235B3E
		INC		byte_11
		LDA		byte_11
		CMP		#$C
		BCC		loc_235B23
		JSR		sub_235BE8
		JSR		sub_235C42
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235B3E:
		LDY		#0
		LDA		#$E1
		STA		byte_300,Y
		INY
		LDA		#4
		STA		byte_300,Y
		INY
		LDX		byte_11
		LDA		byte_235C2A,X
		STA		byte_300,Y
		INY
		LDA		byte_11
		ASL
		ASL
		TAX
loc_235B5A:
		LDA		byte_235CAA,X
		STA		byte_300,Y
		INY
		INX
		CPY		#7
		BCC		loc_235B5A
		STY		byte_6D8
		INC		byte_6D9
		LDA		#$E1
		STA		byte_300,Y
		INY
		LDA		#4
		STA		byte_300,Y
		INY
		LDX		byte_11
		LDA		byte_235C36,X
		STA		byte_300,Y
		INY
		LDA		byte_11
		ASL
		ASL
		TAX
loc_235B86:
		LDA		byte_235CDA,X
		STA		byte_300,Y
		INY
		INX
		CPY		#$E
		BCC		loc_235B86
		STY		byte_6D8
		INC		byte_6D9
		LDA		#2
		JSR		sub_1740E9
		JSR		sub_1742BA
		JSR		sub_235C8C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235BA4:
		LDX		#0
loc_235BA6:
		LDA		_spr_ram+$93,X
		SEC
		SBC		#8
		STA		_spr_ram+$93,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_235BA6
		LDX		#0
loc_235BB9:
		LDA		_spr_ram+$B3,X
		CLC
		ADC		#8
		STA		_spr_ram+$B3,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_235BB9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235BCB:
		LDA		#$10
		LDX		#0
loc_235BCF:
		STA		_spr_ram+$91,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_235BCF
		LDX		#0
loc_235BDC:
		STA		_spr_ram+$B1,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_235BDC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235BE8:
		LDY		#0
loc_235BEA:
		LDA		byte_235C18,Y
		STA		_spr_ram+$91
		STA		_spr_ram+$95
		STA		_spr_ram+$99
		STA		_spr_ram+$9D
		LDA		byte_235C21,Y
		STA		_spr_ram+$B1
		STA		_spr_ram+$B5
		STA		_spr_ram+$B9
		STA		_spr_ram+$BD
		LDX		#2
		JSR		sub_235C60
		BCC		loc_235C12
		JMP		loc_2358BD
loc_235C12:
		INY
		CPY		#9
		BCC		loc_235BEA
		RTS
byte_235C18:
		.BYTE	$2D,$3D,$4D,$25,$75,$85,$2A,$82,$88
byte_235C21:
		.BYTE	$2E,$3E,$4E,$26,$76,$86,$2B,$83,$89
byte_235C2A:
		.BYTE	$EE,$ED,$EC,$EB,$EA,$E9,$E8,$E7,$E6,$E5,$E4,$E3
byte_235C36:
		.BYTE	$F1,$F2,$F3,$F4,$F5,$F6,$F7,$F8,$F9,$FA,$FB,$FC

; =============== S U B	R O U T	I N E =======================================
sub_235C42:
		LDA		#$F8
		LDX		#0
loc_235C46:
		STA		_spr_ram+$90,X
		STA		_spr_ram+$B0,X
		INX
		CPX		#$10
		BCC		loc_235C46
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235C52:
		LDX		#0
loc_235C54:
		LDA		byte_236236,X
		STA		_spr_ram+$90,X
		INX
		CPX		#8
		BCC		loc_235C54
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235C60:
		JSR		sub_235C6D
		BCS		locret_235C6C
		JSR		sub_235C8C
		DEX
		BNE		sub_235C60
		CLC
locret_235C6C:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235C6D:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		_calc_pads
		PLA
		TAY
		PLA
		TAX
		LDA		_pads
		AND		#8
		BNE		loc_235C82
		PLA
		CLC
		RTS
loc_235C82:
		PLA
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235C85:
		JSR		sub_235C8C
		DEX
		BNE		sub_235C85
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_235C8C:
		LDA		#$FD
		STA		byte_32
		LDA		byte_60B7
		ORA		#$20
		STA		byte_60B7
		LDA		#0
		STA		byte_33
		JSR		_vblank
		LDA		_nmi_counter
		AND		#7
		BNE		locret_235CA9
		JSR		sub_235A71
locret_235CA9:
		RTS
byte_235CAA:
		.BYTE	$79, $C,$1C,$2C,$78, $B,$1B,$2B,$67, $A,$1A,$2A,$66,  9,$19,$29
		.BYTE	$67,  8,$18,$28,$66,  7,$17,$27,$77,  6,$16,$26,$76,  5,$15,$25
		.BYTE	$67,  4,$14,$24,$66,  3,$13,$23,$67,  2,$12,$22,$66,  1,$11,$21
byte_235CDA:
		.BYTE	$20, $F,$1F,$2F,$67,$30,$40,$50,$66,$31,$41,$51,$67,$32,$42,$52
		.BYTE	$66,$33,$43,$53,$67,$32,$42,$52,$66,$33,$43,$53,$67,$34,$44,$54
		.BYTE	$66,$35,$45,$55,$67,$36,$46,$56,$66,$37,$47,$57,$79,$38,$48,$58
byte_235D0A:
		.BYTE	$B2,$B3,$C2,$C3,$B6,$B7,$C6,$C7,$B4,$B5,$C4,$C5,$B0,$B1,$C0,$C1
		.BYTE	$B6,$B7,$C6,$C7,$B2,$B3,$C2,$C3,$B0,$B1,$C0,$C1,$B4,$B5,$C4,$C5
_tlm_title_data:
		.BYTE	$F7,$E6,$E7,$E6,$E7,$E6,$E7,$F6,$F7,$93,$94,$3F,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,$3F,$93,$94,$F6,$F7,$E6,$E7,$E6,$E7,$E6,$E7,$E6
		.BYTE	$E6,$E7,$D6,$D7,$D6,$D7,$E6,$E7,$F6,$F7,$93,$94,$3F,  0,  0,  0
		.BYTE	  0,  0,  0,$3F,$93,$94,$F6,$F7,$E6,$E7,$D6,$D7,$D6,$D7,$E6,$E7
		.BYTE	$E7,$D6,$D7,$D6,$D7,$E6,$E7,$F6,$F7,$93,$94,$3F,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,$3F,$93,$94,$F6,$F7,$E6,$E7,$D6,$D7,$D6,$D7,$E6
		.BYTE	$E6,$E7,$C6,$C7,$C6,$C7,$E6,$E7,$F6,$F7,$3F,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$3F,$F6,$F7,$E6,$E7,$C6,$C7,$C6,$C7,$E6,$E7
		.BYTE	$F7,$D6,$D7,$D6,$D7,$F6,$F7,$93,$94,$3F,  0,$7A,$7B,  0,$3F,  0
		.BYTE	  0,$3F,  0,$7C,$7D,  0,$3F,$93,$94,$E6,$E7,$D6,$D7,$D6,$D7,$F6
		.BYTE	$F6,$F7,$E6,$E7,$F6,$F7,$93,$94,$3F,  0,  0,$8A,$8B,$3F,$93,$94
		.BYTE	$93,$94,$3F,$8C,$8D,  0,  0,$3F,$93,$94,$F6,$F7,$E6,$E7,$F6,$F7
		.BYTE	$94,$F6,$F7,$F6,$F7,$F6,$F7,$93,$94,$3F,$99,$9A,$9B,$90,$91,$92
		.BYTE	$F7,$93,$95,$9C,$9D,$9E,$3F,$93,$94,$F6,$F7,$F6,$F7,$F6,$F7,$93
		.BYTE	$93,$94,$93,$94,$93,$94,$93,$3F,  0,  0,$A9,$AA,$AB,$A0,$A1,$A2
		.BYTE	$A3,$E7,$A5,$AC,$AD,$AE,  0,  0,$3F,$94,$93,$94,$93,$94,$93,$94
		.BYTE	$94,  0,$3F,$93,$94,$93,$3F,  0,  0,  0,$B9,$BA,$BB,$B0,$B1,$B2
		.BYTE	$B3,$B4,$B5,$BC,$BD,$BE,  0,  0,  0,$3F,$94,$93,$94,$3F,  0,$93
		.BYTE	  0,$3F,  0,  0,$3F,  0,  0,  0,$3F,$3F,$C9,$CA,$CB,$C0,$C1,$C2
		.BYTE	$C3,$C4,$C5,$CC,$CD,$CE,$CF,$3F,  0,  0,  0,$3F,  0,  0,$3F,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,$3F,$3E,$D8,$D9,$DA,$DB,$D0,$D1,$D2
		.BYTE	$D3,$D4,$D5,$DC,$DD,$DE,$DF,$3E,$3E,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,$93,$E8,$E9,$EA,$EB,$E0,$E1,$E2
		.BYTE	$E3,$E4,$E5,$EC,$ED,$EE,$EF,$94,  0,  0,  0,$3A,$3B,$3C,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,$3E,$3E,$F8,$F9,$FA,$FB,$F0,$F1,$F2
		.BYTE	$F3,$F4,$F5,$FC,$FD,$FE,$FF,$68,$3E,  0,$49,$4A,$4B,$4C,  0,  0
		.BYTE	  0,$96,$9F,$88,$89,$88,$89,$AF,$8E,$8F,$88,$89,$88,$89,$88,$9F
		.BYTE	$9F,$8F,$8E,$8F,$8E,$8F,$88,$89,$AF,$8E,$8F,$8E,$5B,$5C,$97,  0
		.BYTE	  0,$98,$4E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E
		.BYTE	$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6E,$6B,$6C,$A8,  0
		.BYTE	  0,$B6,$7E,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$66
		.BYTE	$67,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$59,$B7,  0
		.BYTE	  0,$B6,$7E,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10, $D
		.BYTE	 $E,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$7F,$B7,  0
		.BYTE	  0,$98,$7E,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$1D
		.BYTE	$1E,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$7F,$A8,  0
		.BYTE	  0,$B7,$7E,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$2D
		.BYTE	$2E,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$10,$7F,$B6,  0
		.BYTE	  0,$98,$7E,$10,$10,$10,$62,$10,$10,$10,$61,$62,$10,$10,$10,$10
		.BYTE	$10,$10,$10,$10,$63,$64,$10,$10,$10,$63,$10,$10,$10,$7F,$A8,  0
		.BYTE	  0,$B6,$7E,$10,$10,$61,$72,$65,$10,$60,$61,$72,$65,$10,$10,$10
		.BYTE	$10,$10,$10,$60,$73,$64,$65,$10,$60,$73,$64,$10,$10,$7F,$B7,  0
		.BYTE	  0,$B6,$7E,$10,$10,$60,$61,$62,$10,$70,$71,$10,$75,$10,$10,$10
		.BYTE	$10,$10,$10,$70,$10,$74,$75,$10,$63,$64,$65,$10,$10,$7F,$B7,  0
		.BYTE	  0,$98,$7E,$10,$10,$70,$71,$72,$62,$10,$60,$61,$10,$10,$10,$10
		.BYTE	$10,$10,$10,$10,$64,$65,$10,$63,$73,$74,$75,$10,$10,$7F,$A8,  0
		.BYTE	  0,$98,$7E,$60,$61,$64,$65,$70,$60,$61,$62,$71,$62,$10,$10,$10
		.BYTE	$10,$10,$10,$63,$74,$63,$64,$65,$75,$60,$61,$64,$65,$7F,$A8,  0
		.BYTE	  0,$B7,$7E,$70,$73,$74,$75,$10,$70,$71,$72,$71,$72,$10,$10,$10
		.BYTE	$10,$10,$10,$73,$74,$73,$74,$75,$10,$70,$71,$72,$75,$7F,$B6,  0
		.BYTE	  0,$98,$5E,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F
		.BYTE	$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$6F,$5F,$A8,  0
		.BYTE	  0,$A6,$AF,$88,$89,$8E,$8F,$88,$89,$8E,$8F,$9F,$88,$89,$AF,$88
		.BYTE	$8F,$AF,$8E,$8F,$9F,$88,$89,$8E,$8F,$88,$89,$8E,$8F,$AF,$A7,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$33,  0,  0,$CC,$FF,$FF
		.BYTE	 $F, $F,  0,  0,  0,  0, $F, $F,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
;_tlm_title_data_ofs:
;		.WORD	_tlm_title_data
_spr_title_data:
		.BYTE	$98,  0,  0,$68,$98,  0,  0,$70,$98,  0,  0,$78,$98,  0,  0,$80
		.BYTE	$98,  0,  0,$88,$98,  0,  0,$90,$A0,  0,  0,$68,$A0,  0,  0,$70
		.BYTE	$A0,  0,  0,$78,$A0,  0,  0,$80,$A0,  0,  0,$88,$A0,  0,  0,$90
		.BYTE	$A8,  0,  0,$68,$A8,  0,  0,$70,$A8,  0,  0,$78,$A8,  0,  0,$80
		.BYTE	$A8,  0,  0,$88,$A8,  0,  0,$90,$B0,  0,  0,$68,$B0,  0,  0,$70
		.BYTE	$B0,  0,  0,$78,$B0,  0,  0,$80,$B0,  0,  0,$88,$B0,  0,  0,$90
		.BYTE	$B8,  0,  0,$68,$B8,  0,  0,$70,$B8,  0,  0,$78,$B8,  0,  0,$80
		.BYTE	$B8,  0,  0,$88,$B8,  0,  0,$90,$C0,  0,  0,$68,$C0,  0,  0,$70
		.BYTE	$C0,  0,  0,$78,$C0,  0,  0,$80,$C0,  0,  0,$88,$C0,  0,  0,$90
		.BYTE	$20,$B8,  3,$18,$20,$B9,  3,$20,$28,$C8,  3,$18,$28,$C9,  3,$20
		.BYTE	$63,$1D,  0,$57,$63,$1E,  0,$5F,$65, $D,  0,$80,$65, $E,  0,$88
		.BYTE	$20,$B8,  3,$D8,$20,$B9,  3,$E0,$28,$C8,  3,$D8,$28,$C9,  3,$E0
		.BYTE	$20,$B8,  3,$18,$20,$B9,  3,$20,$28,$C8,  3,$18,$28,$C9,  3,$20
		.BYTE	$20,$B8,  3,$D8,$20,$B9,  3,$E0,$28,$C8,  3,$D8,$28,$C9,  3,$E0
		.BYTE	$20,$B0,  1,$18,$20,$B1,  1,$20,$28,$C0,  1,$18,$28,$C1,  1,$20
		.BYTE	$20,$B4,$41,$E0,$20,$B5,$41,$D8,$28,$C4,$41,$E0,$28,$C5,$41,$D8
		.BYTE	$FF,$47,$43,  3,$70,$47,$44,  3,$78,$FF
byte_236236:
		.BYTE	$73,$20,  0,$D0,$73,$21,  0,$D8,$FF
byte_23623F:
		.BYTE	$77,$10,  0,$78,$7F,$10,  0,$78,$87,$10,  0,$78,$8F,$10,  0,$78
byte_23624F:
		.BYTE	$77,$10,  0,$80,$7F,$10,  0,$80,$87,$10,  0,$80,$8F,$10,  0,$80
_chr_title_bg_data0:
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$15,$20,  0,$20,  0,$20,  0,  0,$1F,$20,$20,$20,$20,$20
		.BYTE	  0,  0,$55,  0,  0,  0,  0,  0,  0,  0,$FF,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$C0,$E0,$70,  0,  0,  0,  0,  0,  0,$40,  0
		.BYTE	  0,  0,  0,  0,  0,  3,  7, $E,  0,  0,  0,  0,  0,  0,  2,  0
		.BYTE	  0,  0,$A8,  4,  0,  4,  0,  4,  0,  0,$F8,  0,  4,  0,  4,  0
		.BYTE	  0,  0,$15,$20,  0,$20,  0,$20,  0,  0,$1F,$3F,$3F,$3F,$3F,$3F
		.BYTE	  0,  0,$55,  0,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$A8,  4,  0,  4,  0,  4,  0,  0,$F8,$F8,$FC,$F8,$FC,$F8
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$F8,  6,  6,  2,  6,  6,  0,  0,$F8,$F8,$F8,$FC,$F8,$F8
		.BYTE	$3F,$3F,$6F,$72,$71,$51,$21,  0,$19,$19,$31,$21,$20,$20,  0,  0
		.BYTE	$F8,$F8,$EC,$DC,$DC,$D4,$48,$80,$B0,$B0,$98,$88,$88,$88,$80,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$40,  0,  2,  0,$20,  0,  0,$FF,$BF,$FF,$FD,$FF,$DF,$FF,$FF
		.BYTE	  0,$15,  0,  0,  0,  0,  0,  0,$20, $A,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$81,  0,$81,  0,$81,  0,  0,$81,$80,$81,$80,$81,$80,$81
		.BYTE	  0,$50,  8,  0,  8,  0,  8,  0,  0,$A8,  8,  8,  8,  8,  8,  8
		.BYTE	  0,  5,$10,  0,$10,  0,$10,  0,  0,$1A,  0,$10,  0,$10,  0,$10
		.BYTE	  0,$A8,  0,  0,  0,  0,  0,  0,  4,$50,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$15,  0,  0,  0,  0,  0,  0,$3F, $A,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$81,  0,$81,  0,$81,  0,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF
		.BYTE	  0,$50,  8,  0,  8,  0,  8,  0,$FF,$AF, $F, $F, $F, $F, $F, $F
		.BYTE	  0,  5,$10,  0,$10,  0,$10,  0,$FF,$FA,$E0,$F0,$E0,$F0,$E0,$F0
		.BYTE	  0,$A8,  0,  0,  0,  0,  0,  0,$FC,$50,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$81,$81,$81,$80,$81,$81,$81,$FF,$FE,$FE,$FE,$FF,$FE,$FE,$FE
		.BYTE	  6,$FE,$FC,$80,$80,$80,$80,$80,$F8,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$1F,$3B,$77,$7F,$7F,$2F,$15, $F,  0,$17,$2E,$2D,$2D,$15, $A,  0
		.BYTE	$70,$F8,$FC,$F8,$80,$80,$40,$C0,  0,$70,$F8,$80,  0,  0,$80,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  7,  7,  3,  3,  0,  0,  0, $F, $F, $A, $E,  4,  7
		.BYTE	  0,  0,  0,$FE,$FE,$7E,$7E,  0,  0,  0,$FF,$6D,$7D,$D5,$81,$FF
		.BYTE	$81,  0,$81,  0,$81,  0,$81,  0,$80,$81,$80,$81,$80,$81,$80,$81
		.BYTE	  8,  0,  8,  0,  8,  0,  8,  0,  8,  8,  8,  8,  8,  8,  8,  8
		.BYTE	$10,  0,$10,  0,$10,  0,$10,  0,  0,$10,  0,$10,  0,$10,  0,$10
		.BYTE	  0,$40,  0,  0,  0,$20,  0,  0,$F4,$B8,$F4,$F8,$F4,$D8,$F4,$F8
		.BYTE	  0,  0,  0,  2,  0,  0,  0,  0,$2F,$1F,$2F,$1D,$2F,$1F,$2F,$1F
		.BYTE	$81,  0,$81,  0,$81,  0,$81,  0,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF
		.BYTE	  8,  0,  8,  0,  8,  0,  8,  0, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	$10,  0,$10,  0,$10,  0,$10,  0,$E0,$F0,$E0,$F0,$E0,$F0,$E0,$F0
		.BYTE	  0,  0,  0,  0,  0,$20,  0,  0,$C0,$A0,$C0,$A0,$C0,$80,$C0,$A0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  3,  5,  3,  5,  3,  5,  3,  5
		.BYTE	$80,$80,$80,$80,$80,$80,$80,$80,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$40,  0,  2,  0,$20,  0,  0,$FF,$BE,$FF,$FC,$FF,$DE,$FF,$FE
		.BYTE	  0,$40,  0,  2,  0,$20,  0,  0,$FF,$3F,$FF,$7D,$FF,$5F,$FF,$7F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,$15,$20,  0,  0,  0,  0,  0,  0,$1F,$20
		.BYTE	$81,  0,$81,  0,$81,  0,  0,  0,$80,$81,$80,$81,$80,$81,$81,  0
		.BYTE	  8,  0,  8,  0,  8,  0,$50,  0,  8,  8,  8,  8,  8,  8,$F8,  0
		.BYTE	$10,  0,$10,  0,$10,  0,  5,  0,  0,$10,  0,$10,  0,$10,$1F,  0
		.BYTE	  0,  0,  0,  0,  0,  0,$A8,  4,  0,  0,  0,  0,  0,  0,$F8,  0
		.BYTE	  0,  0,  0,  0,  0,  0,$15,$20,  0,  0,  0,  0,  0,  0,$1F,$3F
		.BYTE	$81,  0,$81,  0,$81,  0,  0,  0,$FE,$FF,$FE,$FF,$FE,$FF,$FF,$FF
		.BYTE	  8,  0,  8,  0,  8,  0,$50,  0, $F, $F, $F, $F, $F, $F,$FF,$FF
		.BYTE	$10,  0,$10,  0,$10,  0,  5,  0,$E0,$F0,$E0,$F0,$E0,$F0,$FF,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,$A8,  4,  0,  0,  0,  0,  0,  0,$F8,$F8
		.BYTE	$80,$81,$81,$81,$81,$81,$81,  0,$FF,$FE,$FE,$FE,$FE,$FE,$FE,$FF
		.BYTE	$80,$80,$80,$80,$80,$80,$F8,  6,  0,  0,  0,  0,  0,  0,$F8,$F8
		.BYTE	  0,$40,  0,  2,  0,$20,  0,  0,$FD,$BE,$FD,$FC,$FD,$DE,$FD,$FE
		.BYTE	  0,$40,  0,  2,  0,$20,  0,  0,$BF,$3F,$BF,$7D,$BF,$5F,$BF,$7F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$20,  0,$20,  0,$15,  0,  0,$20,$20,$20,$20,$20, $A,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$55,  0,  0,  0,  0,  0,  0,  0,$AA,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$C0,$E0,$70,  0,  0,  0,  0,  0,$C0,$E0,$70
		.BYTE	  0,  0,  0,  0,  0,  3,  7, $E,  0,  0,  0,  0,  0,  3,  7, $E
		.BYTE	  0,  4,  0,  4,  0,$A8,  0,  0,  4,  0,  4,  0,  4,$50,  0,  0
		.BYTE	  0,$20,  0,$20,  0,$15,  0,  0,$3F,$3F,$3F,$3F,$3F, $A,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$55,  0,  0,$FF,$FF,$FF,$FF,$FF,$AA,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  4,  0,  4,  0,$A8,  0,  0,$FC,$F8,$FC,$F8,$FC,$50,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  6,  6,  6,  2,  6,$FE,$FC,  0,$F8,$F8,$F8,$FC,$F8,  0,  0,  0
		.BYTE	  0,$40,  0,  2,  0,$20,  0,  0,$FC,$BA,$FC,$F8,$FC,$DA,$FC,$FA
		.BYTE	  0,$40,  0,  2,  0,  0,  0,  0,$3F,$1F,$3F,$5D,$3F,$5F,$3F,$5F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$1E,$21,$20,$20,$20,$20,  0,  0,$1F,$3F,$3F,$3F,$3F,$3F
		.BYTE	  0,  0,$FE,  1,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,$FF,  0,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$F8,  4,  4,  0,  4,  4,  0,  0,$F8,$F8,$F8,$FC,$F8,$F8
		.BYTE	  0,  0,$1E,$21,$20,$20,$20,$20,  0,  0,$1F,$3F,$3F,$3F,$3F,$3F
		.BYTE	  0,  0,$FE,  1,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,$FF,  0,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,$F8,  6,  4,  2,  4,  6,  0,  0,$F8,$F8,$FA,$FC,$FA,$F8
		.BYTE	  0,  0,$1F,$21,$20,$20,$20,$20,  0,  0,$1E,$3F,$3F,$3F,$3F,$3F
		.BYTE	  0,  0,$FF,  1,  0,  0,  0,  0,  0,  0,$FE,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,$FF,  0,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$20,$1F,  0,  0,  0,  0,  0,  0,$3F,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$81,$81,$81,$81,$80,$C1,$81,$FF,$FE,$FE,$FE,$FE,$FF,$FE,$FE
		.BYTE	  0,$F8,  8,  8, $C,  8,  8,  8,$FF, $F, $F, $F, $F, $F, $F, $F
		.BYTE	  0,$1F,$10,$10,$10,$10,$10,$10,$FF,$E0,$E0,$E0,$E0,$E0,$E0,$E0
		.BYTE	  0,$81,$81,$81,$80,$81,$81,$81,$FF,$FE,$FE,$FE,$FF,$FE,$FE,$FE
		.BYTE	  4,$F8,  0,  0,  0,  0,  0,  0,$F8,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$20,$1F,$15,  0,  0,  0,  0,  0,$3F,  0, $A,  0,  0,  0,  0,  0
		.BYTE	  0,$81,$81,$81,$81,$80,$41,$81,$FF,$FE,$FE,$FE,$FE,$FF,$FE,$FE
		.BYTE	  0,$F8,$D8,  8,$84,  8,$88,  8,$FF, $F,$2F,$8F, $F,$8F, $F,$8F
		.BYTE	  0,$1F,$1D,$10,$18,$10,$18,$10,$FF,$E0,$E2,$E8,$E0,$E8,$E0,$E8
		.BYTE	  0,$81,$81,$81,$80,$81,$81,$81,$FF,$FE,$FE,$FE,$FF,$FE,$FE,$FE
		.BYTE	  4,$FE,$D4,  0,$80,  0,$80,  0,$FA,  0,$28,$80,  0,$80,  0,$80
		.BYTE	$20,$1F,$1F,  0,  0,  0,  0,  0,$3F,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$81,$81,$81,$81,$80,$C1,$81,$FF,$FE,$FE,$FE,$FE,$FF,$7E,$FE
		.BYTE	  0,$F8,$F8,$88,$8C,$88,$88,$88,$FF, $F, $F, $F,  7, $F, $F, $F
		.BYTE	  0,$1F,$1F,$18,$18,$18,$18,$18,$FF,$E0,$E0,$E0,$E0,$E0,$E0,$E0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$81,$81,$81,$81,$C1,$C1,$81,$81,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE
		.BYTE	  8,  8,  8,  8,  8,  8,  8,  8, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	$10,$10,$10,$10,$10,$10,  0,$10,$E0,$E0,$E0,$E0,$E0,$E0,$F0,$E0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$40,  0,  0,  0,$20,  0,  0,$F0,$A8,$F0,$E8,$F0,$C8,$F0,$E8
		.BYTE	  0,  0,  0,  2,  0,  0,  0,  0, $F,$17, $F,$15, $F,$17, $F,$17
		.BYTE	$81,$81,$81,$81,$41,$41,$81,$81,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE
		.BYTE	$88,  8,$88,  8,$88,  8,$88,  8, $F,$8F, $F,$8F, $F,$8F, $F,$8F
		.BYTE	$18,$10,$18,$10,$18,$10,  8,$10,$E0,$E8,$E0,$E8,$E0,$E8,$F0,$E8
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$80,  0,$80,  0,$80,  0,$80,  0,  0,$80,  0,$80,  0,$80,  0,$80
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$81,$81,$81,$81,$C1,$C1,$81,$81,$FE,$FE,$FE,$FE,$7E,$7E,$FE,$FE
		.BYTE	$88,$88,$88,$88,$88,$88,$88,$88, $F, $F, $F, $F, $F, $F, $F, $F
		.BYTE	$18,$18,$18,$18,$18,$18,  8,$18,$E0,$E0,$E0,$E0,$E0,$E0,$F0,$E0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$81,$81,$81,$81,$80,$81,$80,$81,$FE,$FE,$FE,$FE,$FF,$FE,$FF,$FE
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,$40,$80,$40,$80,$40,$80,$40,$80
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  2,  1,  2,  1,  2,  1,  2,  1
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,$40,  0,  0,  0,$20,  0,  0,$D0,$A0,$D0,$E0,$D0,$C0,$D0,$E0
		.BYTE	  0,  0,  0,  2,  0,  0,  0,  0, $B,  7, $B,  5, $B,  7, $B,  7
		.BYTE	$81,$81,$81,$81,$80,$81,$80,$81,$FE,$FE,$FE,$FE,$FF,$FE,$FF,$FE
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,$80,  0,$80,  0,$80,  0,$80
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  1,  0,  1,  0,  1
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$81,$81,$81,$81,$80,$81,$80,$81,$FE,$FE,$FE,$FE,$FF,$FE,$FF,$FE
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,$1F,$20,  0,  0,  0,  0,  0,  0,$1F,$3F
		.BYTE	$81,$C1,$81,$C1,$81,$81,$81,  0,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FF
		.BYTE	  8, $C,  8,  8,  8,  8,$F8,  0, $F, $F, $F, $F, $F, $F,$FF,$FF
		.BYTE	$10,$10,$10,$10,$10,$10,$1F,  0,$E0,$E0,$E0,$E0,$E0,$E0,$EF,$FF
		.BYTE	$80,$81,$81,$81,$81,$81,$81,  0,$FF,$FE,$FE,$FE,$FE,$FE,$FE,$FF
		.BYTE	  0,  0,  0,  0,  0,  0,$F8,  4,  0,  0,  0,  0,  0,  0,$F8,$F8
		.BYTE	  0,  0,  0,  0,  0,  0,$1F,$20,  0,  0,  0,  0,  0,  0,$1F,$3F
		.BYTE	$81,$41,$81,$41,$81,$81,$81,  0,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FF
		.BYTE	$88,  4,$88,  8,$88,  8,$F8,  0, $F,$8F, $F,$8F, $F,$8F,$FF,$FF
		.BYTE	$18,$10,$18,$10,$18,$10,$1F,  0,$E0,$E8,$E0,$E8,$E0,$E8,$EF,$FF
		.BYTE	$80,$81,$81,$81,$81,$81,$81,  0,$FF,$FE,$FE,$FE,$FE,$FE,$FE,$FF
		.BYTE	$80,  0,$80,  0,$80,  0,$F8,  6,  0,$80,  0,$80,  0,$80,$F8,$F8
		.BYTE	  0,  0,  0,  0,  0,  0,$1F,$20,  0,  0,  0,  0,  0,  0,$1F,$3F
		.BYTE	$81,$C1,$81,$C1,$81,$81,$81,  0,$FE,$7E,$FE,$7E,$FE,$FE,$FE,$FF
		.BYTE	$88,$8C,$88,$88,$88,$88,$F8,  0, $F,  7, $F, $F, $F, $F,$FF,$FF
		.BYTE	$18,$18,$18,$18,$18,$18,$1F,  0,$E0,$E0,$E0,$E0,$E0,$E0,$EF,$FF
		.BYTE	$20,$20,$30,$20,$20,$1F,  0,  0,$3F,$3F,$3F,$3F,$3F,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$EF,  0,  0,$FF,$FF,$FF,$FF,$FF,$10,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$FF,  0,  0,$FF,$FF,$FF,$FF,$FF,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  4,  4,  4,  0,  4,$F8,  0,  0,$F8,$F8,$F8,$FC,$F8,  0,  0,  0
		.BYTE	$20,$20,$10,$20,$20,$1F,$15,  0,$3F,$3F,$3F,$3F,$3F,  0, $A,  0
		.BYTE	  0,  0,  0,  0,  0,$EF,$55,  0,$FF,$FF,$FF,$FF,$FF,$10,$AA,  0
		.BYTE	  0,  0,  0,  0,  0,$FF,$55,  0,$FF,$FF,$FF,$FF,$FF,  0,$AA,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  4,  6,  4,  2,  4,$FE,$54,  0,$FA,$F8,$FA,$FC,$FA,  0,$A8,  0
		.BYTE	$20,$20,$30,$20,$20,$1F,$1F,  0,$3F,$3F,$1F,$3F,$3F,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$EF,$FF,  0,$FF,$FF,$FF,$FF,$FF,$10,  0,  0
		.BYTE	  0,  0,  0,  0,  0,$FF,$FF,  0,$FF,$FF,$FF,$FF,$FF,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	 $C,$18,$10,  0,  4,  0,  0, $C,  0,  0,  1,  0,  0,  0, $C,$1E
		.BYTE	  0,  0,$40,$20,$70,$F0,$E2,$C3,  0,$C0,$F0,$70,$B8,$18,$30,$60
		.BYTE	  0,  8,  0,  1,  1,$18,  8,  0,  0,  0,  0,  0,$18,$3C,$1E,$18
		.BYTE	  0,$D0,$28,  8,$81,$E0,$50,$C0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  2,  0,  0,  1,$10,$20,$20,  0,  0,  0,$38,$18,$3C,$F0,$70,$60
		.BYTE	  0,  0,$C0,$E0,$60,$40,  0,$4C,  0,  0,  0,  0,  0,  0, $C,$1E
		.BYTE	  0,  6, $E,$1F, $C,  4,  6, $E,  0,  8,$30,$70,$58,  8, $C,$38
		.BYTE	$80,  0,  0,  2,  0,$10,$20,$60,  0,  0,$20,$40,$78,$3C,$14,  0
		.BYTE	$3F,$45,$6A,$50,$6A,$3F, $F, $A,  0,$3F,$17,$2F,$15,  0,  0,  5
		.BYTE	$FC,$A2,$56, $A,$56,$FC,$F0,$50,  0,$FC,$E8,$F4,$A8,  0,  0,$A0
		.BYTE	$2A,$45,$62,$45,$68,$36, $F, $A,$15,$3F,$1F,$3F,$17,  9,  0,  5
		.BYTE	$54,$A2,$46,$A2,$16,$6C,$F0,$50,$A8,$FC,$F8,$FC,$E8,$90,  0,$A0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  5,  6,  9, $C,  9, $A, $A,  7, $E, $F,$1E,$3F,$1F,$1F,$1F, $F
		.BYTE	$C0,$CE,$F8,$FC,$7C,$FE,$98,$E0,$60,$60,  4,$62,$A2,  0,$E4,$F8
		.BYTE	$11,$28,$2B,$1B, $D, $B,  8,  7,$38,$77,$34,$3C,$1E,$1E,$1F, $F
		.BYTE	$E6,$CC,$EE,$FE,$F0,$EC,$D4,$38,  0,  3,  0,$C0,$4C,$1E,$2E,$C4
		.BYTE	  0,$10,  8, $F,$17, $F,  9, $E,$30,$3C,$1E,$1C,$3A,$18,$1F,$1F
		.BYTE	  0,$60,$C0,$C0,$C8,$F8,$F8,$78, $C,  4,  4, $C,$3C,$1C,$14,$80
		.BYTE	$1F, $F,$1F,$13,$3F,$3F,$13,$1D,$78,$18,$39,$3C,$60,$68,$7C,$3E
		.BYTE	$E0,$E0,$E0,$F8,$F4,$DC,$CC,  8,  4,  8,$18,$90,$88,$20,$30,$F0
		.BYTE	 $D, $A, $D,  6,  6,  3,  1,  0,  3,  5,  3,  1,  1,  0,  0,  0
		.BYTE	$B0,$50,$B0,$60,$60,$C0,$80,  0,$C0,$A0,$C0,$80,$80,  0,  0,  0
		.BYTE	 $D,  8,  9,  5,  6,  3,  1,  0,  3,  7,  7,  3,  1,  0,  0,  0
		.BYTE	$B0,$10,$90,$A0,$60,$C0,$80,  0,$C0,$E0,$E0,$C0,$80,  0,  0,  0
_chr_title_bg_data1:
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$BF,$7F,$7F,$BF,$7F,$F3,$73,$F3,$40,$BF,$80,$40,$8C,$1C,$9C,$1C
		.BYTE	$FD,$FE,$DF,$E7,$63,$F3,$73,$B3,  2,$E1,$78,$3C,$BC,$1C,$9C,$5C
		.BYTE	$F7,$FF,$DE,$CF,$CF,$CB,$C7,$C7,  8,$61,$73,$72,$74,$7C,$78,$78
		.BYTE	$FE,$FE,$E7,$F3,$F3,$73,$E3,$C7,  1,$F9,$3C,$1C,$1C,$9C,$3C,$78
		.BYTE	$53,$8F,$17,$8F,$5F,$BF,$5F,$FE,$AC,$70,$EB,$72,$A2,$44,$A4,  9
		.BYTE	$FD,$FF,  6,$E7,$F6,$B3,$73,$B3,  2,$F8,$F9,$38,$19,$5C,$9C,$5C
		.BYTE	$1F,$7F,$F3,$67,$E6,$E7,$CE,$CD,$E0,$8F,$1C,$B8,$39,$38,$71,$72
		.BYTE	$EA,$F4,$D9,$EE,$EF,$7F,$BF,$57,$15,$EB,$36,$19,$10,$80,$40,$A8
		.BYTE	$BF,$7B,$E7,$EF,$CD,$CE,$9C,$9A,$40,$9C,$39,$30,$72,$71,$E3,$E5
		.BYTE	$F7,$FB, $F,$E7,$F7,$F7,$7F,$3F,  8,$E5,$F1,$39,$19,$19,$89,$C9
		.BYTE	$FF,$FF,$2F,$1F,$3F,$3B,$37,$3B,  0,$DF,$F1,$E1,$C0,$C4,$C8,$C4
		.BYTE	$E0,$E9,$30,$1D,$98,$9C,$9A,$9D,$1F,$96,$CF,$E2,$E7,$E3,$E5,$E2
		.BYTE	$FF,$FF,$E7,$E7,$E7,$73,$F3,$73,  0,$30,$38,$38,$38,$9C,$1C,$9C
		.BYTE	$F7,$F7,$9E,$9F,$9F,$CD,$CE,$CD,  8,$CB,$E3,$E0,$E0,$72,$71,$72
		.BYTE	$C8,$E1,$34,$39,$F5,$FB,$FF,$FF,$37,$9E,$CB,$C6,$4A,$44,$40,$40
		.BYTE	  0,$40,  0,  2,  0,$20,  0,  0,$FF,$BF,$FF,$FD,$FF,$DF,$FF,$FF
		.BYTE	$73,$73,$F3,$73,$F3,$71,$71,$E0,$9C,$9C,$1C,$9C,$1C,$9E,$9F,$3F
		.BYTE	$73,$B3,$73,$B3,$F3,$E7,$CF,$1D,$9C,$5C,$9C,$5C,$1C,$38,$F0,$E2
		.BYTE	$C7,$CF,$CF,$CF,$CF,$CD,$CE,$CD,$7F,$71,$70,$70,$70,$72,$71,$72
		.BYTE	$BF,$3F,$9F,$9B,$CF,$CF,$E7,$E3,$C0,$C1,$E1,$E5,$71,$71,$39,$3D
		.BYTE	$F7,$77,$F7,$FF,$EE,$DD,$1A,$1D,$F8,$9F,$18,$10,$31,$E2,$E5,$E2
		.BYTE	$F3,$E1,$F1,$F1,$F1,$78,$B8,$78,$1C,$FE,$1E,$1E,$1E,$8F,$4F,$8F
		.BYTE	$CE,$CD,$EE,$E7,$E7,$F3,$F3,$B8,$71,$72,$31,$38,$38,$1C,$1F,$4F
		.BYTE	$7B,$7F,$E3,$E3,$C3,$83,$73,$F3,$84,$B8,$3C,$3C,$7C,$FC,$9C,$1C
		.BYTE	$9C,$9A,$8C,$CE,$CD,$E6,$E7,$F3,$E3,$E5,$F3,$71,$72,$39,$38,$1C
		.BYTE	$7F,$3F,$77,$F7,$7F,$EF,$DF,$BF,$89,$C9,$99,$19,$91,$31,$61,$C1
		.BYTE	$37,$3B,$37,$3B,$35,$3B,$35,$3B,$C8,$C4,$C8,$C4,$CA,$C4,$CA,$C4
		.BYTE	$8E,$CD,$CE,$CD,$CE,$CD,$CE,$CD,$F1,$72,$71,$72,$71,$72,$71,$72
		.BYTE	$F3,$73,$B9,$79,$B9,$79,$3D,$1C,$1C,$9C,$4E,$8E,$4E,$8E,$C6,$E7
		.BYTE	$CE,$CD,$E6,$E7,$E7,$C7,$87,$60,$71,$72,$39,$38,$38,$78,$F9,$9F
		.BYTE	$DF,$F7,$FF,$FF,$FE,$BD,$71,$F1,$6F,$59,$51,$51,$53,$DE,$9E,$1E
		.BYTE	$20,  0,  2,$10,  0,$40,  2,$A0,$DF,$FF,$FD,$EF,$FF,$BF,$FD,$5F
		.BYTE	$7F,$BF,$49,$14,  0,$48,  0,  2,$80,$40,$B6,$EB,$FF,$B7,$FF,$FD
		.BYTE	$FD,$F2,$49,$10,$84,$20,  2,  0,  2, $D,$B6,$EF,$7B,$DF,$FD,$FF
		.BYTE	$FE,$F8,$55,$28,$84,  0,$20,  2,  1,  7,$AA,$D7,$7B,$FF,$DF,$FD
		.BYTE	$7F,$FF,$4A,$25,  0,$90,  0,  0,$80,  0,$B5,$DA,$FF,$6F,$FF,$FF
		.BYTE	$B8,$F4,$F9,$20,  2,$80,$10,  1,$C7,$4B,  6,$DF,$FD,$7F,$EF,$FE
		.BYTE	$3F,$5F,$15,$48,  2,$10,  0,  4,$C0,$A0,$EA,$B7,$FD,$EF,$FF,$FB
		.BYTE	$FF,$AF,$56,$8F,$13,$84,  0,  2,  0,$53,$A9,$70,$EC,$7B,$FF,$FD
		.BYTE	$B3,$E3,$C7,$FC,$FA,$A8,$41,$10,$5C,$3C,$F8,  3,  5,$57,$BE,$EF
		.BYTE	$70,$BF,$5F,$AA,  1,$24,  0,  4,$8F,$40,$A0,$55,$FE,$DB,$FF,$FB
		.BYTE	$77,$FB,$D2,$A4,  1,  0,$80,$10,$88,  4,$2D,$5B,$FE,$FF,$7F,$EF
		.BYTE	$F5,$F3,$A9,$44,$10,  0,  2,  0, $A, $C,$56,$BB,$EF,$FF,$FD,$FF
		.BYTE	$FE,$FD,$52,$28,$82,$10,  0,  0,  1,  2,$AD,$D7,$7D,$EF,$FF,$FF
		.BYTE	$2F,$17,  2,$24,  1,$40,  0,  8,$D0,$E8,$FD,$DB,$FE,$BF,$FF,$F7
		.BYTE	$FF,$BF,$A5,$48,  2,$10,  0,  4,  0,$40,$5A,$B7,$FD,$EF,$FF,$FB
		.BYTE	$FB,$BF,$4E,$94,  1,  0,$48,  0, $C,$44,$B1,$6B,$FE,$FF,$B7,$FF
		.BYTE	$5F,$7F,$F0,$FE,$FF,$FF,$FB,$F7,$A0,$8F,$3F,$23,$21,$41,$45,$89
		.BYTE	$D7,$EF,$77,$6F,$77,$3F,$37,$3F,$28,$91,$89,$91,$89,$C1,$C9,$C1
		.BYTE	$EF,$FF,$7B,$3F,$3F,$2D,$1F,$1F,$10,$87,$CC,$C8,$D0,$F2,$E0,$E1
		.BYTE	$F7,$FF,$9F,$CF,$CF,$CF,$8F,$1F,  8,$E1,$F1,$71,$71,$71,$F1,$E1
		.BYTE	$F7,$FF,$3E,$1E,$1C,$1C,$19,$19,  8,$C1,$E3,$E3,$E7,$E7,$EE,$EE
		.BYTE	$FE,$BF,$70,$FE,$DF,$EF,$C7,$A3,  1,$CE,$9F,  3,$21,$11,$38,$5C
		.BYTE	$7E,$FF,$F7,$73,$73,$72,$F1,$F1,$81,$18,$1C,$9C,$9D,$9F,$9E,$9E
		.BYTE	$FF,$FF,$B1,$FC,$FC,$DC,$F8,$F1,  0,$7E,$DF,$87,  7,$27, $F,$1E
		.BYTE	$48,$80,$D0,$E2,$D0,$E0,$D4,$80,$B7,$7F,$2F,$1D,$2F,$1F,$2B,$7F
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0, $F,$70,  0,  0,  0,  0,  0,  0,  0, $F
		.BYTE	  0,  0,  0,  0,  0,$FC,$57, $A,  0,  0,  0,  0,  0,  0,$A8,$F5
		.BYTE	  0,  0,  0,  0,  0,  0,$80,$E0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$20,$80,  0,  0,  0,$80,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$20,  2,  0,  0,  0,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$7F,$7E,$7F,$FF,$EB,$D5,$AB,$D5,$81,$FF,$81,  1,$15,$2A,$54,$2A
		.BYTE	$37,$1F,$1F,$1F,$1F,$8F,$8F,$8F,$C9,$E1,$E1,$E1,$E1,$F1,$F1,$F1
		.BYTE	$1E,$3C,$3E,$36,$3F,$37,$3B,$37,$FF,$C7,$C3,$CB,$C1,$C9,$C4,$C8
		.BYTE	$F7,$EF,$77,$6F,$37,$3F,$9F,$8F,  9,$11,$89,$91,$C9,$C1,$E1,$F1
		.BYTE	$19,$19,$18,$1C,$1C,$1E,$1E,$1F,$EE,$EE,$EF,$E7,$E7,$E3,$E3,$E1
		.BYTE	$C7,$A3,$C7,$EF,$D7,$6E,$7D,$3B,$38,$5C,$39,$11,$29,$93,$86,$CC
		.BYTE	$F1,$F3,$73,$73,$F3,$F3,$F3,$F3,$9F,$9C,$9C,$9C,$1C,$1C,$1C,$1C
		.BYTE	$EF,$CD,$E6,$E7,$73,$F3,$79,$B8,$F0,$72,$39,$38,$9C,$1C,$8E,$4F
		.BYTE	$A0,$40,$90,$41,$90,$40,$A0,$C8,$5F,$BF,$6F,$BE,$6F,$BF,$5F,$37
		.BYTE	  1,  7, $C,$1A,$34,$3A,$75,$6A,  0,  0,  3,  5, $B,  5, $A,$15
		.BYTE	$80,  0,  1,  2,$15,$AA,$55,$AF,$7F,$FF,$FE,$FD,$EA,$55,$AA,$50
		.BYTE	  1,  0,$55,$AA,$55,$BF,$E7,  1,$FE,$FF,$AA,$55,$AA,$40,  0,  0
		.BYTE	$70,$38,$1C,$8C,$46,$AE,$C6,$AB,$80,$C0,$E0,$70,$B8,$50,$38,$54
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FF,$EF,$F2,$C9,$E0,$D0,$E4,$C0,  0,$10, $D,$36,$1F,$2F,$1B,$3F
		.BYTE	$FF,$FF,$A5,$4B,  1,$13,$81,  9,  0,  0,$5A,$B4,$FE,$EC,$7E,$F6
		.BYTE	$83,$52,$85,$20,  0,  2,$20,  0,$7C,$AD,$7A,$DF,$FF,$FD,$DF,$FF
		.BYTE	$FF,$F7,$4A,$91,  4,  0,  0,  2,  0,  8,$B5,$6E,$FB,$FF,$FF,$FD
		.BYTE	$FB,$E5,$52,$A5,  0,$12,  0,  0,  4,$1A,$AD,$5A,$FF,$ED,$FF,$FF
		.BYTE	$FF,$FB,$AA,$10,$44,  9,  0,  0,  0,  4,$55,$EF,$BB,$F6,$FF,$FF
		.BYTE	$FB,$F5,$5A,$A5,  0,$10,$40,  2,  4, $A,$A5,$5A,$FF,$EF,$BF,$FD
		.BYTE	  7,$FE,$FA,$55,$20,$82,$10,  0,$F8,  1,  5,$AA,$DF,$7D,$EF,$FF
		.BYTE	$BF,$7F,$AA,$11,$40,  4,  0,  0,$40,$80,$55,$EE,$BF,$FB,$FF,$FF
		.BYTE	$7F,$BF,$15,$22,  8,$40,  0,  0,$80,$40,$EA,$DD,$F7,$BF,$FF,$FF
		.BYTE	$E0,$C0,$52,  0,$80,$10,  2,  0,$1F,$3F,$AD,$FF,$7F,$EF,$FD,$FF
		.BYTE	$1D,$2D,$1D, $B,  5,  3,$21,  5,$60,$50,$60,$B0,$C2,$FC,$DE,$FA
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FC,$FC,$8E,$76,$76,$B8,$EE,  0,$FC,  2,$70,$88,$88,$46,$10,$FE
		.BYTE	$C7,$AB,$C7,$8B,$D6,$8E,$96,$2E,$38,$54,$38,$74,$28,$70,$68,$D0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$E0,$D2,$A0,$C9,$E0,$D4,$EA,$FF,$1F,$2D,$5F,$36,$1F,$2B,$15,  0
		.BYTE	  3,$45,  3,  9,$23,  5,$AB,$FF,$FC,$BA,$FC,$F6,$DC,$FA,$54,  0
		.BYTE	  0, $F,$11,$10,$10, $E,  3, $C,$FF,$F1,$EE,$EF,$EF,$F3,$FC,$F3
		.BYTE	  4,$1E,$32,$20,$30,$11,$82,$64,$FF,$E3,$CD,$DF,$DF,$EE,$7D,$9B
		.BYTE	  0,  0,  0,  0,  0,$E0,$38,$10,$FF,$FF,$FF,$FF,$FF,$3F,$CF,$EF
		.BYTE	  0,  0,  0,  0,  0,  7,$1C,  8,$FF,$FF,$FF,$FF,$FF,$FC,$F3,$F7
		.BYTE	$20,$78,$4C,  4,  4,$88,$41,$26,$FF,$C7,$B3,$FB,$FB,$77,$BE,$D9
		.BYTE	  0,$F0,$88,  8,  8,$70,$C0,$30,$FF,$8F,$77,$F7,$F7,$CF,$3F,$CF
		.BYTE	  8,$40,  0,$10,  0,$24,$82,$55,$F7,$BF,$FF,$EF,$FF,$DB,$7D,$AA
		.BYTE	  4,$20,  0,  0,$82,$10,$44,$AA,$FB,$DF,$FF,$FF,$7D,$EF,$BB,$55
		.BYTE	$14,$C0,$F0,$A8,$D4,$AA,$D6,$FF,  0,  0,  0,$50,$28,$54,$28,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FE,$DE,$A4,  8,$40,  8,  0,  0,  0,$20,$5A,$F6,$BE,$F6,$FE,$FF
		.BYTE	$1D,$2D,$5D,$3B,$59,$3B,$19,$39,$E0,$D0,$A0,$C0,$A2,$C0,$E2,$42
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$FF,$DF,$A4, $A,$40,  8,  1,  0,  0,$20,$5B,$F5,$BF,$F7,$FE,$FF
		.BYTE	  1,  0,  8,  0,$42,$10,$A4,$FF,$FE,$FF,$F7,$FF,$BD,$EF,$5B,  0
		.BYTE	$10,$20,$20,$20,$10,  0,  0,  0,$EF,$DF,$DF,$DF,$EF,$FF,$FF,$FF
		.BYTE	$1C,  8,$3C,$44,$42,$43,$20,  0,$EB,$F7,$C3,$BB,$BD,$BC,$DF,$FF
		.BYTE	$18,$10,$20,  0,  2,$DC,$F0,  0,$E7,$EF,$DF,$FF,$FD,$23, $F,$FF
		.BYTE	$18,  8,  4,  0,$40,$3B, $F,  0,$E7,$F7,$FB,$FF,$BF,$C4,$F0,$FF
		.BYTE	$38,$10,$3C,$22,$42,$C2,  4,  0,$D7,$EF,$C3,$DD,$BD,$3D,$FB,$FF
		.BYTE	  8,  4,  4,  4,  8,  0,  0,  0,$F7,$FB,$FB,$FB,$F7,$FF,$FF,$FF
		.BYTE	  0,$40,  4,  0,$10,  1,$48,  2,$FF,$BF,$FB,$FF,$EF,$FE,$B7,$FD
		.BYTE	  0,$40,  2,  0,$10,  0,$55,$A8,$FF,$BF,$FD,$FF,$EF,$FF,$AA,$57
		.BYTE	$10,  0,  1,$50,  4,$20,$8A,$55,$EF,$FF,$FE,$AF,$FB,$DF,$75,$AA
		.BYTE	  0,  8,  0,  2,$40,  8,$80,$52,$FF,$F7,$FF,$FD,$BF,$F7,$7F,$AD
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  1,  1,  3,  2
		.BYTE	  0,  0,  0,  0,  0,$A0,$A0,$A8,  0,$60,$E0,$E0,$F0,$50,$50,$50
		.BYTE	  0,  0,  0,  0,  0,  5,  5,$15,  0,  6,  7,  7, $F, $A, $A, $A
		.BYTE	  0,  0,  0,  0,  0,  0,$80,$80,  0,  0,  0,  0,$80,$80,$40,$40
		.BYTE	$A2,$C8,$E0,$D0,$C0,$A4,$C0,$D0,$5D,$37,$1F,$2F,$3F,$5B,$3F,$2F
		.BYTE	$83,  5,$11,  3,  5,  3,$21,  5,$7C,$FA,$EE,$FC,$FA,$FC,$DE,$FA
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$FF,$BF,$F1,$EE,$6E,$9D,$F7,  0,$FF,$40, $E,$11,$91,$62,  8,$FF
		.BYTE	$FF,$FB,$AE,$DD,$DD,$23,$FF,  0,$FF,  4,$51,$22,$22,$DC,  0,$FF
		.BYTE	  3,  3,  7,  7, $F, $F,$1F,$1F,  4,  4,  8,  8,$10,$10,$20,$20
		.BYTE	$A0,$B0,$B4,$B0,$B8,$7A,$78,$6C,$58,$48,$48,$4C,$44,$84,$86,$92
		.BYTE	  5, $E,$2E, $E,$1E,$5E,$1F,$37,$1A,$11,$11,$31,$21,$21,$60,$48
		.BYTE	$40,$C0,$E0,$E0,$F0,$F0,$78,$78,$A0,$20,$10,$10,  8,  8,$84,$84
		.BYTE	$FF,$DF,$75,$BB,$BB,$C4,$FF,  0,$FF,$20,$8A,$44,$44,$3B,  0,$FF
		.BYTE	$FF,$FD,$8F,$77,$76,$B9,$EF,  0,$FF,  2,$70,$88,$89,$46,$10,$FF
		.BYTE	$54,$20,$10,  0,  0,  0,  0,  0,  0,  0,$80,$80,$C0,$C0,$E0,$E0
		.BYTE	$88,  2,  0,$30,$30,$32,$24,$60,  0,$10,$10,$20,$20,$60,$60,$60
		.BYTE	$66,$C1,$40,$AC,$4D,$8E,$64,  4,  0,  8,  8,  4,  4,  4,  6,  6
		.BYTE	$54,$A0,$50,  0,  0,$80,$42,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$88,  2,  0,  0,  0,  2,$24,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$88,  2,  0,  1,  2,  0,$22,  4,  0,  0,  1,  0,  1,  3,  5,  3
		.BYTE	$7F,$9B,$8F,$CC,$FB,$B3,$ED,$EE,$7F,$E4,$F0,$B3,$84,$CC,$92,$91
		.BYTE	$7E,$58,$70,$32,$DE,$CC,$B6,$76,$7E,$27, $F,$4D,$21,$33,$49,$89
		.BYTE	$F6,$BC,$E6,$DA,$DA,$E6,$BC,$F6,$89,$C3,$99,$A5,$A5,$99,$C3,$89
		.BYTE	  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  1,  1,  2,  2
		.BYTE	$3B,$3F,$73,$7E,$EE,$F6,$EE,$DD,$44,$40,$8C,$81,$11,  9,$11,$22
		.BYTE	$7D,$6C,$76,$EE,$F6,$EB,$F7,$E3,$82,$93,$89,$11,  9,$14,  8,$1C
		.BYTE	$BF,$37,$6F,$77,$6B,$E7,$D3,$E5,$40,$C8,$90,$88,$94,$18,$2C,$1A
		.BYTE	$7C,$7C,$7E,$BE,$B7,$BF,$B3,$DF,$82,$82,$81,$41,$48,$40,$4C,$20
		.BYTE	  0,  0,  0,  0,  0,  0,$80,$80,  0,  0,  0,  0,$80,$80,$40,$40
		.BYTE	$FF,$BD,$E7,$DB,$5A,$E7,$BD,  0,$FF,$42,$18,$24,$A5,$18,$42,$FF
		.BYTE	$84,$82,$82,$C0,$C0,$C0,$60,$E0,$70,$70,$78,$38,$3C,$3C,$9E,$1E
		.BYTE	$46,$65,$60,$64,$A3,$A4,$E8,$FA,$60,$50,$D0,$D0,$D0,$D3,$93,$81
		.BYTE	$A2,  2,  2,$EA,  8,  8,$12,$9F,  6, $E, $F, $F,$EF,$EF,$CD,$40
		.BYTE	$77,$DA,$21,$44,$31,$2C,$56,$2B,  0,  0,  0,  0,$40,$50,$28,$54
		.BYTE	$6C,$16,  2,$28,$16,$C2,$6C,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$69,$C5,$49,$93,$23,$93,$27,$46,  6, $A,$16, $C,$1C,$2C,$58,$39
		.BYTE	$EE,$ED,$B3,$FB,$CC,$8F,$9B,  0,$91,$92,$CC,$84,$B3,$F0,$E4,$7F
		.BYTE	$F6,$B6,$CC,$DE,$32,$F0,$D8,  0,$89,$49,$33,$21,$CD, $F,$27,$FE
		.BYTE	$EE,$BC,$E6,$DA,$DA,$E6,$BC,$EE,$91,$C3,$99,$A5,$A5,$99,$C3,$91
		.BYTE	  1,  3,  3,  3,  7,  7,  7, $F,  2,  4,  4,  4,  8,  8,  8,$10
		.BYTE	$ED,$DD,$AD,$DD,$BB,$5B,$BB,$1B,$12,$22,$52,$22,$44,$A4,$44,$E4
		.BYTE	$D5,$E3,$D1,$E2,$C1,$A0,$C1,$A0,$2A,$1C,$2E,$1D,$3E,$5F,$3E,$5F
		.BYTE	$C3,$A5,$C3,$81,$42,$81,  2,$81,$3C,$5A,$3C,$7E,$BD,$7E,$FD,$7E
		.BYTE	$DB,$DD,$DA,$ED,$EE,$ED,$EE,$ED,$24,$22,$25,$12,$11,$12,$11,$12
		.BYTE	$C0,$C0,$E0,$E0,$E0,$70,$F0,$70,$20,$20,$10,$10,$10,$88,  8,$88
		.BYTE	$FF,$BD,$E7,$5A,$DB,$E7,$BD,  0,$FF,$42,$18,$A5,$24,$18,$42,$FF
		.BYTE	$60,$B0,$70,$18,$E0,$79,$39,$31,$9E,$4E, $D,$85,$45,$A3,$43,$86
		.BYTE	  9,  3,$8D,$98,$80,  6,$76, $C,  2,$F0,$F0,$E0,$E7,$FF,$8F,$F3
		.BYTE	$50,$C9,$B4,$14,$61,$3F,$30,  1,$80,  6, $F, $F,$86,$C0,$C1,$CE
		.BYTE	$55,$2B,$94,$A9,$80,$DD,$DE,$6C,$2A,$54,$2A,$11,$27,  2,  0,  1
		.BYTE	$80,$80,$28,$59,$A2,$61,$62,$B4,  0,$10,$41,$80,  1,  2,$85,$43
		.BYTE	$A7,$4E,$8D,$1A,$9C,$38,$34,$68,$58,$B1,$72,$E5,$63,$C7,$CB,$97
		.BYTE	$EE,$DA,$DE,$D6,$EA,$FA,$DA,$F6,$91,$A5,$A1,$A9,$95,$85,$A5,$89
		.BYTE	$F6,$DA,$FA,$EA,$D6,$DE,$DA,$EE,$89,$A5,$85,$95,$A9,$A1,$A5,$91
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	 $E, $F, $E,$1D,$1E,$1D,$1E,$3C,$11,$10,$11,$22,$21,$22,$21,$43
		.BYTE	$BB,$1B,$B7,$77,$37,$77,$37,$77,$44,$E4,$48,$88,$C8,$88,$C8,$88
		.BYTE	$C0,$A0,$42,$81,$40,$80,$40,$80,$27,$49,$B4,$7A,$BD,$7E,$BF,$7F
		.BYTE	  0,  1,  0,  1,  0,  1,  0,  1,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE
		.BYTE	$F6,$77,$F6,$77,$F6,$77,$F6,$77,  9,$88,  9,$88,  9,$88,  9,$88
		.BYTE	$B8,$78,$B8,$5C,$3C,$5C,$2E,$1E,$44,$84,$44,$A2,$C2,$A2,$D1,$E1
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  2,  0,  0,  0,$40,$C0,$40,$CF,$ED,$ED,$DE,$1E,$9E,$1A,$1B
		.BYTE	$CA,$84, $A,$54,$2A,$84,$89,$40,$F5,$FB,$F5,$AB,$15,$D9,$E4,$70
		.BYTE	$42,$31,$22,  1,$40,  0,$84,  8,$BD,$FE,$FD,$FE,$BC,$BB,$37, $E
		.BYTE	$B1,$72,$B5,$7A,$78,$7A,$1B,$9A,$42,$85,  2,  1,  0,  1,$40,$40
		.BYTE	$72,$B4,$58,$B9, $D,$6E,$97,$2B,$85,$43,$A3,$42,  0,$80,  8,$54
		.BYTE	$F0,$E8,$D0,$A0,$D0,$E8,$70,$68, $F,$17,$2F,$5F,$2F,$17, $F,$17
		.BYTE	$1B,$7F,$F3,$DD,$75,$AA,$7F,  0,$64,$80,  0,  0,$80,  0,  0,  0
		.BYTE	$BC,$F6,$5A,$E4,$16,$C2,$EC,  0,$40,  0,  0,  0,  0,  0,  0,  0
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$3A,$3C,$3A,$3C,$78,$74,$78,$74,$45,$43,$45,$43,$87,$8B,$87,$8B
		.BYTE	$37,$77,$EF,$6E,$EF,$6E,$EF,$6E,$C8,$88,$10,$91,$10,$91,$10,$91
		.BYTE	$40,$80,  0,$80,  0,$80,  1,$80,$BF,$7F,$FF,$7F,$F0,$77,$F8,$7E
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	$BB,$7B,$BB,$7B,$BB,$7B,$BB,$7B,$44,$84,$44,$84,$44,$84,$44,$84
		.BYTE	$AE,$1E,$8F,$17,$8F,$17,$8B,  7,$51,$E1,$70,$E8,$70,$E8,$74,$F8
		.BYTE	  0,  1,$20,  0,  0,  2,$80,$80,  0,  0,$80,$80,$80,$80,$40,$40
		.BYTE	  0,  0,  0,  8,$18, $A,  1,  0,$8B,$EB,$F5,$E0,$C2,$B2,$65,$9D
		.BYTE	  9,$B0,  8,$14,$24,  2,  0,  0,$80,$43,$87,$EF,$DF,$FF,$7F,$77
		.BYTE	$81,$43,$B0,$70,$A0,$41,$80,  0,$10,$8C,$41,$8F,$5F,$BE,$7E,$EE
		.BYTE	$91,$17,$2F,$13,$19,$10,$20,$30,$40,$C0,$80,  4,$42,$4D,$86,$89
		.BYTE	$C5,$83,$41,$82,$41,$A0,$61,$30,$3A,$7C,$BE,$7D,$BE,$5F,$9E,$4F
		.BYTE	$B4,$BA,$DC,$DA,$6D,$EE,$6D,$B6, $B,  5,  3,  5,$82,  1,$82,$41
		.BYTE	$37,$76,$E9,$B8,$D4,$AA,$7F,  0,$48,$80,  0,  0,  0,  0,  0,  0
		.BYTE	$FC,$C6,$1A,$64,$16,$C2,$EC,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$54,$A0,$50,  0,  0,$80,$40,  0,  0,  0,  1,  1,  1,  1,  1,  1
		.BYTE	$78,$74,$E8,$F0,$E8,$F1,$E8,$F1,$87,$8B,$17, $F,$17, $E,$17, $E
		.BYTE	$EF,$6E,$EF,$6E,$EF,$DE,$DD,$DE,$10,$91,$10,$91,$10,$21,$22,$21
		.BYTE	  0,$80,  0,$80,  0,  0,  0,  0,$FF,$7F,$FF,$7F,$FF,$FF,$FF,$FE
		.BYTE	  0,  0,  0,  0,  0,  0,  0,$80,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F
		.BYTE	$BB,$7B,$3D,$5D,$3D,$5D,$3D,$5D,$44,$84,$C2,$A2,$C2,$A2,$C2,$A2
		.BYTE	$8B,  7,$83,$C5,$83,$C5,$83,$C1,$74,$F8,$7C,$3A,$7C,$3A,$7C,$3E
		.BYTE	$88,$82,$C0,$C0,$C0,$C2,$C4,$E0,$40,$40,$20,$20,$20,$20,$20,$10
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,$7C,$FD,$FD,$FD,$FE,$FE,$FC,$FB
		.BYTE	$48,$56,$2B,$18,  3, $E,$88,  0,$33,$29,$94,$80,$C7,$D8,$48,$48
		.BYTE	$12,$6A,$D5,$19,$C3,$72,$10,  2,$CC,$94,$28,  0,$E0,$19,$13,$15
		.BYTE	$70,$E0,$E0,$CA,$85,  3,  4,  2, $E,$1F,$1F,$35,$7A,$FC,$FA,$FC
		.BYTE	$50,$20,$50,$B7,$40,$80,$40,$80,$2F,$DF,$AF,$48,$BF,$7F,$FF,$FF
		.BYTE	$77,$B3,$75,$3A,$DB,$3B,$5B,$3B,$80,$40,$80,$C0,$20,$C0,$A0,$C0
		.BYTE	$77,$DA,$E1,$D4,$E5,$A0,$7B,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$6C,$16,  2,$28,$16,$C2,$6C,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$89,  1,  1,  1,  1,  1,$21,  1,  2,  2,  2,  2,  2,  2,  2,  2
		.BYTE	$E0,$D1,$E0,$D1,$E0,$D1,$E0,$D0,$1F,$2E,$1F,$2E,$1F,$2E,$1F,$2F
		.BYTE	$DD,$DE,$DD,$DE,$DD,$DE,$EF,$6E,$22,$21,$22,$21,$22,$21,$10,$91
		.BYTE	  0,  0,  0,  0,  0,  0,  0,$80,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$7F
		.BYTE	$40,$A0,$D0,$E8,$70,$68,$B4,$B8,$BF,$5F,$2F,$17, $F,$17, $B,  7
		.BYTE	$3D,$5D,$3D,$5D,$3D,$1E,$2E,$1E,$C2,$A2,$C2,$A2,$C2,$E1,$D1,$E1
		.BYTE	$82,$C1,$82,$C1,$80,$C1,$E0,$C1,$7D,$3E,$7D,$3E,$7F,$3E,$1F,$3E
		.BYTE	$E4,$E0,$E0,$E0,$F0,$70,$F2,$70,$10,$10,$10,$10,  8,$88,  8,$88
		.BYTE	  0,  4,  5,  4,  9, $A,  9,$8A,$FB,$F7,$F6,$F7,$EE,$ED,$6E,$2D
		.BYTE	$64,$A0,$44,$F0,$E0,$E0,$E1,$E0,  4, $C,$87,  3,  4,  7,  2,  1
		.BYTE	$24,$12,$2D,$C6,  0, $B,$57,$BF,$23,$25,$C2,  9,$3C,$F4,$A8,$40
		.BYTE	  6, $A,$51,$A7,$E2, $F,$E2,$E0,$F8,$F4,$A8,$50, $D,  0, $D, $F
		.BYTE	$85,  0,$E0,$7A,$7D,$FA,$4D, $A,$82,$79,$1E,$85,$82,  5,$B2,$F5
		.BYTE	$5B,$BB,$77,$B7,$77,$B7,$6F,$EF,$A0,$40,$80,$40,$80,$40,$80,  0
		.BYTE	$66,$D5,$40,$A4,$51,$80,$6D,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$AC,  2, $A,$40,  2,$22,$44,  0,  0,  0,  0,  0,  0,  0,  0,  0
		.BYTE	$53,$A3,$53,  3,  3,$83,$43,  3,  4,  4,  4,  4,  4,  4,  4,  4
		.BYTE	$A0,$C0,$A0,$C0,$A0,$C0,$A0,$C0,$5F,$3F,$5F,$3F,$5F,$3F,$5F,$3F
		.BYTE	$EF,$6E,$EF,$6E,$EE,$75,$34,$75,$10,$91,$10,$91,$10,$88,$C9,$89
		.BYTE	  0,$80,  0,$80,$70,$8C,  7,  3,$FF,$7F,$FF, $F,  3,$70,$F8,$FC
		.BYTE	$DC,$DA,$DC,$EE,$ED,$EE,$ED,$EE,  3,  5,  3,  1,  2,  1,  2,  1
		.BYTE	$2E,$1E,$2E,$1E,$2E,$1E,$2E,$1E,$D1,$E1,$D1,$E1,$D1,$E1,$D1,$E1
		.BYTE	$E0,$C1,$E0,$C0,$E0,$C0,$E0,$C0,$1F,$3E,$1F,$3F,$1F,$3F,$1F,$3F
		.BYTE	$F3,$73,$B9,$79,$B9,$79,$B9,$79,  8,$88,$44,$84,$44,$84,$44,$84
;_chr_title_bg_data0_ofs:
;		.WORD	_chr_title_bg_data0
;_chr_title_bg_data1_ofs:
;		.WORD	_chr_title_bg_data1
byte_237F23:
		.BYTE	  1,  2,  2,  2,  2,  5,$11,$12,$13,$14,$12,$15,  0,$22,$23,$24
		.BYTE	$22,  0,  0,$22,$23,$24,$22,  0,$31,$32,$33,$34,$32,$35,$41,$42
		.BYTE	$42,$42,$42,$45,  6,  7,  7,  7,  7, $A,$16,$17,$18,$19,$17,$1A
		.BYTE	  0,$27,$28,$29,$27,  0,  0,$27,$28,$29,$27,  0,$36,$37,$38,$39
		.BYTE	$37,$3A,$46,$47,$47,$47,$47,$4A,$50,$51,$52,$51,$52,$55,$60,$61
		.BYTE	$62,$63,$64,$65,  0,$71,$72,$73,$81,  0,  0,$81,$72,$73,$71,  0
		.BYTE	$90,$91,$92,$93,$94,$95,$A0,$A1,$A2,$A1,$A1,$A5,$56,$57,$58,$57
		.BYTE	$58,$5B,$66,$67,$68,$69,$6A,$6B,  0,$77,$78,$79,$87,$7B,  0,$87
		.BYTE	$78,$79,$77,$7B,$96,$97,$98,$99,$9A,$9B,$A6,$A7,$A8,$A7,$A7,$AB
		.BYTE	$5C,$5D,$5E,$5D,$5D, $C,$6C,$6D,$6E,$6F,$1B,$1C,  0,$7D,$7E,$7F
		.BYTE	$8D,$2C,  0,$8D,$7E,$7F,$7D,$2C,$9C,$9D,$9E,$9F,$3B,$3C,$AC,$AD
		.BYTE	$AE,$AD,$AD,$4C,$FF

		ECHO "bank 17 free space", [$BFD8-.]

		ORG $BFD8
		SEI
		INC	$BFDF
		JMP	_RESET
		.BYTE	$80
		.BYTE	"DRAGON WARRIOR "
		.BYTE	$33
		.WORD	$7682
		.WORD	0
		.BYTE	$48
		.BYTE	  4
		.BYTE	  1
		.BYTE	$F
		.BYTE	  7
		.BYTE	$9D
		.WORD	$BFD8
		.WORD	$BFD8
		.WORD	$BFD8
