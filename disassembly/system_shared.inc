
		ORG SYSTEM_SHARED_ORG

; SYSTEM ROUTINES BLOCK	SHARED BETWEEN 0F and 1F
; the same data	in both	banks
; 0F:C000-0F:EC98 == 1F:C000-1F:EC98

; =============== S U B	R O U T	I N E =======================================
; initializes registers used by the general engine display system
;
;"disp_InitRegs"
_disp_regs_init:
		LDA		#0
		STA		_ppu_queue_pos
		STA		_ppu_queue_chunks_count
		STA		byte_6DA
		STA		_spr_shuffle_syncs_counter
		STA		_nmi_flags
		STA		_pads+2
		STA		_pads+3
		STA		_pads+4
		STA		byte_28
		STA		byte_29
		STA		_spr_force_shuffle_mode
		STA		_nmi_force_dequeue_request_flag
		RTS

; =============== S U B	R O U T	I N E =======================================
; A = *(u8*)((*(u16*)X)++) ... I think.
;
_get_data_next_byte:
		LDA		(0,X)
		INC		0,X
		BNE		locret_174028
		INC		1,X
locret_174028:
		RTS

; =============== S U B	R O U T	I N E =======================================
; [X]-=Y:A
;
_sub16_from_16:
		JSR		_sub8_from_16
		TYA
		EOR		#$FF
		SEC
		ADC		1,X
		STA		1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; [X]-=A
;
_sub8_from_16:
		EOR		#$FF
		SEC
		ADC		0,X
		STA		0,X
		BCS		locret_174040
		DEC		1,X
locret_174040:
		RTS

; =============== S U B	R O U T	I N E =======================================
; adds a 16bit value composed of Y:A
; [X]+=Y:A
;
_add16_to_16:
		JSR		_add8_to_16
		TYA
		CLC
		ADC		1,X
		STA		1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; u16[X]+=A
;
_add8_to_16:
		CLC
		ADC		0,X
		STA		0,X
		BCC		locret_174054
		INC		1,X
locret_174054:
		RTS

; =============== S U B	R O U T	I N E =======================================
; u16[X]*=A
;
_mul16_by_8:
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
; divides value in (X) by divisor in A. quotient left in (X) and remainder is in A
; [X]/=A
;
_div16_by_8:
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
; seems to happen when changing game modes with variable timing
;
_ppu_screen_clear:
		JSR		_ppu_disable
		JSR		_disp_regs_init
		LDA		#$F8				; F8 is adequate to hide sprites. _spr_ram (and _PPU_OAM_DATA) is filled up with them
		LDX		#0
		STX		_PPU_OAM_ADDR		; "_resetOAM"
.iterate:
		STA		_spr_ram,X
		STA		_PPU_OAM_DATA
		INX
		BNE		.iterate
		LDA		_PPU_STATUS			; clear PPUADDR Toggle Latch
		LDA		#$20
		STA		_PPU_ADDR
		LDA		#0
		STA		_PPU_ADDR
		LDX		#8					; for clearing nametables with $800 worth of $0
		LDY		#0
loc_1740DD:
		STA		_PPU_DATA
		DEY
		BNE		loc_1740DD
		DEX
		BNE		loc_1740DD
		JMP		_ppu_and_dequeue_enable

; =============== S U B	R O U T	I N E =======================================
; if the dequeue force request is set previously, do the ppu dequeue
; set a new force dequeue flag
;
_ppu_accept_and_reload_dequeue_request:
		TAX
		LDA		_nmi_force_dequeue_request_flag
		STX		_nmi_force_dequeue_request_flag
		AND		#3
		CMP		#2
		BEQ		locret_1740F9
		JSR		_ppu_force_dequeue
locret_1740F9:
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_1740FA:
;		JSR		_ppu_disable
;		JSR		sub_1741D7
;		JMP		_ppu_and_dequeue_enable

; =============== S U B	R O U T	I N E =======================================
; 8x8 bits matrix rotated right from $0004-$000B to $000C-0013 (inv transpose)
;
_tile_rotate_right:
		LDX		#0
loc_174105:
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
		INX
		CPX		#8
		BNE		loc_174105
		RTS

; =============== S U B	R O U T	I N E =======================================
; 8x8 bits matrix rotated right from $0004-$000B to $000C-0013 (transpose)
;
_tile_rotate_left:
		LDX		#0
loc_174131:
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
		INX
		CPX		#8
		BNE		loc_174131
		RTS

; =============== S U B	R O U T	I N E =======================================
_chd_lib_data_send:
		STA		_tmp21
		ASL
		CLC
		ADC		_tmp21
		TAX
		LDA		_chr_data_lib,X
		STA		_tmp21
		LDA		_chr_data_lib+1,X
		STA		_tmp21+1
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		_chr_data_lib+2,X
		JSR		_mmc1_prg_set
		JSR		_wait_for_nmi_is_over_sync
		LDA		#0
		STA		byte_26
loc_17417D:
		LDX		_ppu_queue_pos
		LDA		_tmp21+2
		ORA		#$80
		STA		_ppu_queue_buf,X
		INX
		LDA		#$10
		STA		_ppu_queue_buf,X
		INX
		LDA		byte_24
		STA		_ppu_queue_buf,X
		LDY		byte_26
		INX
loc_174196:
		LDA		(_tmp21),Y
		STA		_ppu_queue_buf,X
		INC		byte_24
		INY
		INX
		TYA
		AND		#$F
		BNE		loc_174196
		STX		_ppu_queue_pos
		STY		byte_26
		INC		_ppu_queue_chunks_count
		JSR		_ppu_set_dequeue_flag
		JSR		_wait_for_nmi_is_over_sync
		LDA		byte_24
		CMP		byte_25
		BNE		loc_17417D
		PLA
		JMP		_mmc1_prg_set

_chr_data_lib:
		.WORD	_chr_data_unk0
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
;		.WORD	_chr_terrain_bg_data1+$470		; unused, seems old or buggy piece of data
;		.BYTE	  9

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
		SBC		_spr_shuffle_syncs_counter
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
; wait for ppu queue is empty, force it to flush, then wait again one more
; time. since this flag clears on nmi may be used for waiting for the current
; frame is over, then skip for one more frame to be sure all work is done
;
;"waitForVblStatus"
_ppu_force_dequeue:
		JSR		_ppu_set_dequeue_flag
loc_1742B3:
		LDA		#4
		AND		_nmi_flags
		BNE		loc_1742B3
		RTS

; =============== S U B	R O U T	I N E =======================================
; wait for ppu queue is empty, then set ppu queue flush request flag
;
_ppu_set_dequeue_flag:
		LDA		#4
		AND		_nmi_flags
		BNE		_ppu_set_dequeue_flag
		LDA		#4
		ORA		_nmi_flags
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
; sets a tile value A to screen at coords $temp16 (accomodating scroll)
;
_print_char:
		STA		_ppuByteToWrite
		JSR		_ppu_calc_nt_offset
		JMP		_ppu_queue_tile

; =============== S U B	R O U T	I N E =======================================
; calculates an NT addr into u16[$1f] from u16[4] based on current scroll parameters
; and outputs a good PPU address at $1F-$20
;
_ppu_calc_nt_offset:
		LDA		_ppu_ctrl_shadow
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
		ADC		_ppu_scroll_shadow
		STA		byte_1F
		BCC		loc_1742ED
		LDA		byte_20
		EOR		#4
		STA		byte_20
loc_1742ED:
		LDA		_ppu_scroll_shadow+1
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
; writes byte at $1E to ppu address at $1F-$20. waits for
; opportune time and then appends it to ppu_queue
;
_ppu_queue_tile:
		LDA		#4
		AND		_nmi_flags				; timingNoGood
		BNE		_ppu_queue_tile			; wait for previous dequeue is done
		LDA		_ppu_queue_chunks_count	; check if queue buffer is full
		CMP		#$28					; ($28*3 = $78 or 120 bytes in buffer)
		BCC		loc_17431D
		JSR		_ppu_set_dequeue_flag	; if full, do flush, then try one more time
		JMP		_ppu_queue_tile
loc_17431D:
		LDX		_ppu_queue_pos
		LDA		byte_20					; temp _storeOutputAddr
		AND		#$3F
		STA		_ppu_queue_buf,X		; store into ppu_queue_data
		INX
		LDA		byte_1F					; temp _storeOutputByte
		STA		_ppu_queue_buf,X		; store into ppu_queue_data
		INX
		LDA		_ppuByteToWrite			; temp var mostly used here
		STA		_ppu_queue_buf,X 		; store into ppu_queue_data
		INX
		STX		_ppu_queue_pos
		INC		_ppu_queue_chunks_count
		INC		byte_1F					; temp _incrementPPUAddr
		BNE		locret_174340
		INC		byte_20
locret_174340:
		RTS

; =============== S U B	R O U T	I N E =======================================
; simple copy of _wait_for_nmi_is_over_sync without sprite shuffle and sync
; were used as separate function in several different places, moved here as
; a common system function
;
_wait_for_nmi_is_over:
		LDA		_nmi_counter
.nmi_wait_loop:
		CMP		_nmi_counter
		BEQ		.nmi_wait_loop

; hack for improved randomness
; munge entropy with pads 1&2
; (disabled until the time is right)
;		PHA
;		TXA
;		PHA
;		TYA
;		PHA
;		LDX		#$01               ; setup a 2-times loop across pads
;.random_hack_loop:
;		JSR		_read_pad          ; (to _pads_tmp)
;		LDA		_pads_tmp
;		EOR		_rand_seed,X       ; EOR with entropy (Xth byte)
;		STA		_rand_seed,X       ; store back to entropy (Xth byte)
;		DEX
;		BPL		.random_hack_loop  ; branch unless we hit FF
;		PLA
;		TAY
;		PLA
;		TAX
;		PLA

		RTS

; =============== S U B	R O U T	I N E =======================================
; wait for one NMI occurs and NMI routine finish its job (dequeue, etc.)
; used to be sure you still at vblank period and ppu is free for any other operations
;
;"sub_msg_WaitTick"
_wait_for_nmi_is_over_sync:
		JSR		_wait_for_nmi_is_over
		JMP		_spr_shuffle_safe ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
; the same as Sleep_X, but with to shuffle sync
;
_sleep_X:
		JSR		_wait_for_nmi_is_over
		DEX
		BNE		_sleep_X
		RTS

; =============== S U B	R O U T	I N E =======================================
; suspend for desired number of frames is over, do only basic sync job in process
; like sprite shuffling, input arg in X - number of frames to suspend
;
_sleep_X_sync:
		JSR		_wait_for_nmi_is_over_sync
		DEX
		BNE		_sleep_X_sync
		RTS

; =============== S U B	R O U T	I N E =======================================
; delta for paletter entries is 0, so this routine will just send the palette
; "as is"
;
_pal_set_no_fade:
		LDA		#0
		STA		_tmp21
		BEQ		_pal_fade_step

; =============== S U B	R O U T	I N E =======================================
; fades in the the screen palette at any time. start at fade
; $40 (totally faded) and delta by -$10 per iteration
;
_pal_fade_in:
		LDA		#$40
		LDX		#$F0
		BNE		_pal_fade_loop

; =============== S U B	R O U T	I N E =======================================
; fades out the the screen palette at any time. start at fade
; $10 (barely faded) and delta by +$10 per iteration
;
_pal_fade_out:
		LDA		#$10
		LDX		#$10

; =============== S U B	R O U T	I N E =======================================
_pal_fade_loop:
		STX		_tmp21+1			; first, store fade delta
.iteratefade:
		STA		_tmp21				; store current fade level
		JSR		_pal_fade_step
		LDX		#3
		JSR		_sleep_X_sync
		LDA		_tmp21
		CLC
		ADC		_tmp21+1
		CMP		#$50				; check for finished state (#$50)
		BCC		.iteratefade
		RTS

; =============== S U B	R O U T	I N E =======================================
; fades the current palette with selected delta, send it to ppu queue, then
; wait for next nmi is over
;
_pal_fade_step:
		LDA		#$3F		; start by setting up the soft PPUADDR reg with $3F00 for the palette
		STA		byte_20
		LDA		#0
		STA		byte_1F
		TAX
loc_17438C:
		LDA		byte_1F			; start by loading the current PPUADDR, which is reflecting
								; the currently processed palette entry index
		LDY		_ram_pal_buf	; "loadFirstPaletteEntry" we'll use this in case we have
								; made it to a %4==0 clear palette entry
		AND		#3
		BEQ		loc_174399		; check for palette entry index
		LDY		_ram_pal_buf+1,X; use palette colors if not default
		INX
loc_174399:
		TYA						; palette index is always in Y
		SEC						; subtract fading factor
		SBC		_tmp21
		CMP		#$40			; check for overflow
		BCC		loc_1743A4		; in case of overflow
		LDA		_ram_pal_buf	; load defalut palette index #0
loc_1743A4:
		STA		_ppuByteToWrite	; write final byte to input argument
		STX		_tmp21+2
		JSR		_ppu_queue_tile	; queue single palette entry
		LDX		_tmp21+2		; check whether the palette is done
		CPX		#$18			; there are $18 entries, after the $8 color0's are skipped
		BNE		loc_17438C
		JSR		_ppu_set_dequeue_flag	; force palette to flush, so wait until next nmi is over
		RTS

; =============== S U B	R O U T	I N E =======================================
_location_palette_and_rand_update:
		FARX	_b16_s0_location_palette_setup

; =============== S U B	R O U T	I N E =======================================
; get random number
; output is A - 8 bit pseudo-random integer
;
_rand:
		TYA
		PHA
		LDA		#$FF			; xor mask is always FF
		STA		_tmp21
		JSR		_randomize
		LDA		#$FF
		STA		_tmp21
		JSR		_randomize
		INC		_rand_iterations_counter
		PLA
		TAY
		LDA		_rand_seed
		CLC
		ADC		_rand_iterations_counter
		RTS

; =============== S U B	R O U T	I N E =======================================
; one randomize iteration consists of 8 steps with custom xor mask
;
_randomize:
		LDY		#8
loc_1743D4:
		LDA		_rand_seed+1
		EOR		_tmp21
		ASL		_rand_seed
		ROL		_rand_seed+1
		ASL		_tmp21
		ASL
		BCC		loc_1743ED
		LDA		_rand_seed
		EOR		#$21
		STA		_rand_seed
		LDA		_rand_seed+1
		EOR		#$10
		STA		_rand_seed+1
loc_1743ED:
		DEY
		BNE		loc_1743D4
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns A = some kind of random roll
; involved in launching an overworld battle. but only during the day? only if theres more than one enemy?
sub_1743F1:
; multiple precision leftshift by 9 the value of A into u8[22]
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
;try running a rand repeatedly..
loc_17440F:
		JSR		_rand
		AND		_tmp21+2
		CMP		_tmp21+1
		BCS		loc_17440F ; branch back up and try again if we exceed the given threshold
		STA		_tmp21+1
		PLA
		TAY
		PLA
		TAX
		LDA		_tmp21+1
locret_174420:
		RTS

; =============== S U B	R O U T	I N E =======================================
; do all the same as _ppu_enable, but additionally enables further nmi ppu
; dequeue process
;
;"sub_map_FinishLoadingTiles?"
_ppu_and_dequeue_enable:
		JSR		_nmi_allow_ppu_dequeue		; set this one more time, because next sub is don't change it
		JMP		_ppu_enable

; =============== S U B	R O U T	I N E =======================================
; waits for nmi flag is raised, disabled the PPU render and forbids the
; nmi dequeue flag, prepare ppu to free access
;
_ppu_disable:
		JSR		_wait_for_vblank_render_off

; =============== S U B	R O U T	I N E =======================================
; forbids further dequeue process at nmi even if it occurs
;
_nmi_forbid_ppu_dequeue:
		LDA		#$10
		ORA		_nmi_flags
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
; allows to run dequeue subroutine of the nmi
;
;"sub_disp_disableLoadMode?"
_nmi_allow_ppu_dequeue:
		LDA		#$10
		EOR		#$FF
		AND		_nmi_flags
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
; dequeue previously loaded ppu data if any, keep nmi flags and previous
; dequeue force flags, so just flushes the buffers and siplay it on the screen
;
; "sub_map_FinishingTileLoading?"
_ppu_enable:
		LDA		_nmi_flags
		PHA
		LDA		_nmi_force_dequeue_request_flag
		PHA
		JSR		_nmi_allow_ppu_dequeue
		LDA		#$18
		STA		_ppu_mask_shadow
		LDA		#2
		JSR		_ppu_accept_and_reload_dequeue_request
		PLA
		STA		_nmi_force_dequeue_request_flag
		PLA
		STA		_nmi_flags
		RTS

; =============== S U B	R O U T	I N E =======================================
; wait for NMI flag is rised by the CPU, then disables PPU render
;
_wait_for_vblank_render_off:
		LDY		#0
		LDA		_PPU_STATUS
loc_17445B:
		LDA		_PPU_STATUS
		BPL		loc_17445B
		TYA
		STA		_PPU_MASK
		STA		_ppu_mask_shadow
		RTS

; =============== S U B	R O U T	I N E =======================================
; A = u8[A:(u16[X]+Y)]
; input args:
; X - offset of the src ptr in RAM
; A - prg bank to read from
; Y - offset within target pointer to read from
; effective address of read in _tmp21 .. dont know whether this is important
; output in A
; output in _tmp21+2 .. dont know whether this is important
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
		STA		_tmp21+2 ; stash result here
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
		LDA		_attr_ram_buf,X
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
		STA		_attr_ram_buf,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1746C2:
		JSR		sub_1746C8
		JMP		sub_1746F4

; =============== S U B	R O U T	I N E =======================================
sub_1746C8:
		LDA		_ppu_scroll_shadow
		LSR
		LSR
		LSR
		CLC
		ADC		word_4
		STA		word_6
		LDA		_ppu_ctrl_shadow
		AND		#1
		ASL
		ASL
		ASL
		ASL
		ASL
		EOR		word_6
		STA		word_6
		LDA		_ppu_scroll_shadow+1
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
;sub_17472F:
;		LDA		_ppu_ctrl_shadow
;		AND		#1
;		STA		word_6+1
;		LDA		word_4
;		ASL
;		ASL
;		ASL
;		CLC
;		ADC		_ppu_scroll_shadow
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
		JSR		_ppu_set_dequeue_flag
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_174757:
		PHA
		LDA		_ppu_queue_chunks_count
		BEQ		loc_174760
		JSR		_wait_for_nmi_is_over_sync
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
		LDX		_ppu_queue_pos
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
		STX		_ppu_queue_pos
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1747F4:
		INC		byte_24
		LDA		byte_24
		CMP		#8
		BCC		loc_174803
		LDX		#0
		STX		byte_24
		JSR		_ppu_force_dequeue
loc_174803:
		LDA		byte_9
		ORA		#$80
		STA		_ppu_queue_buf,X
		LDA		word_6
		STA		_ppu_queue_buf+1,X
		LDA		byte_8
		STA		_ppu_queue_buf+2,X
		INX
		INX
		INX
		LDA		word_6
		PHA
		LDY		byte_25
loc_17481C:
		LDA		_window_draw_buf,Y
		STA		_ppu_queue_buf,X
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
		LDA		_window_draw_buf+$60,Y
		JSR		sub_17489C
		STA		word_4
		PLA
		STA		byte_9
		PLA
		TAY
		PLA
		TAX
		LDA		_tmp12+1
		STA		_ppu_queue_buf,X
		INX
		LDA		_tmp12
		STA		_ppu_queue_buf,X
		INX
		LDA		word_4
		STA		_ppu_queue_buf,X
		INX
		INY
		INC		byte_10
		INC		byte_10
		INC		_ppu_queue_chunks_count
		DEC		word_6
		BNE		loc_17483E
		STY		byte_26
loc_174874:
		INC		_ppu_queue_chunks_count
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
		JMP		_ppu_calc_nt_offset

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
		LDA		_attr_ram_buf,X
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
		STA		_attr_ram_buf,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; called with every sync, keep all registers intact, shuffles sprites except
; modes which is forbid shuffling, used also for increment sync counter
;
_spr_shuffle_safe:
		PHA
		TXA
		PHA
		TYA
		PHA
		LDA		_spr_force_shuffle_mode		; if 0 or FF - force sprite shuffle
		CMP		#$FD
		BNE		loc_17491C
		LDA		_global_flags_array.byte2					; or else additional bit is tested
		AND		#$20						; both set as FD/20 in battle mode?
		BNE		loc_17491F
loc_17491C:
		JSR		_spr_shuffle
loc_17491F:
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; swaps blocks of sprites on every sync to prevent 8-sprite overflow glitch
; increases sprite shuffle sync counter at the same time, used in some other
; places for animation and sync purposes
;
_spr_shuffle:
		LDA		_ppu_spr_dma_sent		; do only if sprite dma is performed at the NMI
		BEQ		locret_17494E
		LDA		_spr_shuffle_syncs_counter
		AND		#1
		TAX
		LDA		_spr_ram_shuffle_offset,X
		PHA
		LDA		_spr_ram_shuffle_offset+1,X
		LDX		#$40
		JSR		_spr_swap				; swap D0/A0 with 40
		LDX		#$10
		PLA
		JSR		_spr_swap				; swap A0/70 with 10
		LDX		_spr_shuffle_syncs_counter		; increment syncs counter
		INX
		CPX		#$A
		BCC		loc_17494B
		LDX		#0
loc_17494B:
		STX		_spr_shuffle_syncs_counter		; sync counter is only from 0 to 9
locret_17494E:
		RTS

_spr_ram_shuffle_offset:
		.BYTE	$D0,$A0,$70

; =============== S U B	R O U T	I N E =======================================
; swap 12 sprites between X and Y positions
; input	X - dst, A - src
;
_spr_swap:
		TAY
		LDA		#$30			; $30 bytes (48) is a 12 sprites.
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
		BNE		loc_17497E			; if dequeue is forbidden, skip
		LDA		#0
		STA		_ppu_spr_dma_sent	; clear OAM dma flag
		JSR		_nmi_dequeue		; do dequeue
loc_17497E:
		INC		_mmc_reset_byte
		LDA		#$B
		JSR		_mmc1_prg_cmd
		JSR		_apu_play			; do generic music play
		LDA		_mmc_cur_prg_bank
		JSR		_mmc1_prg_cmd		; restore current bank
		INC		_nmi_counter
		TSX							; some external bank protection
		LDA		$106,X				; need to figure out when the problem may occurs
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
		TSX							; the same for NMI occurs when the BRK is executing?
		LDA		$106,X				; never happens as I see now, but current BRK code is
		STA		byte_A2				; different and can't be handler with this code anyway
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
		JMP		_FAR_CALL_HANDLER

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
		LDA		_ppu_queue_chunks_count
		BNE		loc_174A07
		JMP		loc_174AE6
loc_174A07:
		LDA		_ppu_ctrl_shadow
		ORA		#4
		STA		_PPU_CTRL
loc_174A0F:
		JSR		sub_174A36
		JSR		sub_174A36
		LDA		_ppu_queue_buf,X
		STA		_PPU_ADDR
		INX
		LDA		_ppu_queue_buf,X
		STA		_PPU_ADDR
		INX
		LDA		_ppu_queue_buf,X
		STA		_PPU_DATA
		INX
		DEC		_ppu_queue_chunks_count
		BNE		loc_174A0F
		LDA		#0
		STA		byte_44
		JMP		loc_174AE6

; =============== S U B	R O U T	I N E =======================================
sub_174A36:
		LDA		_ppu_queue_buf,X
		AND		#$3F
		STA		_PPU_ADDR
		INX
		INX
		LDA		_ppu_queue_buf,X
		STA		_PPU_ADDR
		INX
		LDA		_ppu_queue_buf,X
		STA		_PPU_DATA
		INX
		LDA		_ppu_queue_buf,X
		STA		_PPU_DATA
		INX
		DEC		_ppu_queue_chunks_count
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174A59:
		JMP		sub_17673E

; =============== S U B	R O U T	I N E =======================================
_nmi_dequeue:
		LDA		_PPU_STATUS							; reset PPU address latch
		LDX		#0
		LDA		_spr_force_shuffle_mode				; check for additional game modes, mode 00 and FD - regular dequeue
		BEQ		loc_174A6E
		CMP		#$FE
		BEQ		loc_174A84							; mode FE - forced dequeue
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
		BEQ		loc_174A99					; if dequeue request is set
loc_174A84:
		LDA		#4							; force nmi dequeue for FE mode
		ORA		_nmi_flags
		STA		_nmi_flags
		LDA		byte_29						; additional force/disable logic, need to figure out
		BEQ		loc_174A92
		STX		byte_29
		BNE		loc_174A9F
loc_174A92:
		LDA		_nmi_force_dequeue_request_flag
		CMP		#2
		BNE		loc_174AAC					; skip dma oam
loc_174A99:
		LDA		#1
		AND		_nmi_flags					; test if sprite dma is allowed
		BNE		loc_174AA6
loc_174A9F:
		LDA		#2
		STA		_PPU_OAM_DMA				; do sprite dma
		STA		_ppu_spr_dma_sent			; rise dma performed flag
loc_174AA6:
		LDA		#4
		AND		_nmi_flags
		BEQ		loc_174B0A					; one more dequeue request test
loc_174AAC:
		LDA		_ppu_queue_chunks_count		; if buffer is not empty, do dequeue
		BEQ		loc_174AE6
loc_174AB1:
		LDY		#1							; default chunk data size
		LDA		_ppu_queue_buf,X			; test for large data chunk bit
		BPL		loc_174ACC
		TAY									; large data chunk
		LSR
		LSR
		LSR
		LSR
		AND		#4							; get 2000.2 override bit, apply
		ORA		_ppu_ctrl_shadow
		STA		_PPU_CTRL
		TYA
		INX
		LDY		_ppu_queue_buf,X			; read data block size
		AND		#$3F						; get higher ppu offset bits
loc_174ACC:
		INX
		STA		_PPU_ADDR
		LDA		_ppu_queue_buf,X			; get lower ppu offset bits
		INX
		STA		_PPU_ADDR
loc_174AD7:
		LDA		_ppu_queue_buf,X			; send actual data to ppu
		INX
		STA		_PPU_DATA
		DEY
		BNE		loc_174AD7
		DEC		_ppu_queue_chunks_count		; next chunk until zero
		BNE		loc_174AB1
loc_174AE6:
		LDA		#$3F
		STA		_PPU_ADDR					; set default palette bg color once
		LDX		#0							; so we don't need to set it again
		STX		_PPU_ADDR
		LDA		_ram_pal_buf				; default pal index in bufer
		STA		_PPU_DATA
		STX		_PPU_ADDR					; reset ppu address offset
		STX		_PPU_ADDR
		STX		_ppu_queue_pos				; erase ppu queue buf
		STX		byte_6DA
		LDA		#4
		EOR		#$FF
		AND		_nmi_flags					; done here, clear ppu queue flag
		STA		_nmi_flags
loc_174B0A:
		LDA		_ppu_ctrl_shadow			; reload ppu controls
		STA		_PPU_CTRL
		LDA		_ppu_mask_shadow
		STA		_PPU_MASK
		LDA		_ppu_scroll_shadow		; reload ppu scrolls
		STA		_PPU_SCROLL
		LDA		_ppu_scroll_shadow+1
		STA		_PPU_SCROLL
		RTS

; =============== S U B	R O U T	I N E =======================================
_pause_or_skip:
		LDX		#0
loc_174B35:
		TXA
		PHA
		JSR		_calc_pads					; read pads, wait for sync
		JSR		_wait_for_nmi_is_over_sync
		PLA
		TAX
		INX
		CPX		#$5A						; loop for 90 frames (1,5 sec)
		BEQ		locret_174B52
		LDA		_pads
		BNE		loc_174B35					; check if key is pressed
loc_174B48:
		JSR		_wait_for_nmi_is_over_sync	; then break
		JSR		_calc_pads
		LDA		_pads
		BEQ		loc_174B48					; and wait for pads is releaased
locret_174B52:
		RTS

; =============== S U B	R O U T	I N E =======================================
; reads both pads, and double-checks to solve DMC glitch..  i think
;
_calc_pads:
		LDX		#0
		JSR		_calc_pad
		LDX		#1

; =============== S U B	R O U T	I N E =======================================
_calc_pad:
		JSR		_read_pad
.subsequent_read:
		LDA		_pads_tmp	; the above was just to bootstrap things
		PHA
		JSR		_read_pad	; now repeat until we read the same value twice in a row
		PLA
		CMP		_pads_tmp
		BNE		.subsequent_read
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
; reads pad[X] and stores the result in _pads_tmp
;
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
; CPU clock-only delay, doing approximately 1.84^5 cycles, something about 1 sec.
; <zeromus> 1789883 CPU cycles per second
; <zeromus>  184000 CPU cycles per call here
; <zeromus>         therefore, it's 1/10th of a second. please check my reasoning.
;
_delay1sec:
		PHA
		LDA		#0
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

; =========================================
; == RESET AND MAIN ENTRY POINT ROUTINES ==
; =========================================

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
		FARX	_bB_s2_apu_init
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
		FARX	_b0_s65_ram_clear_game_vars_init
		JSR		_disp_regs_init
		LDA		#$F
		LDX		#$19
loc_17684B:
		STA		_ram_pal_buf,X
		DEX
		BPL		loc_17684B
		LDA		#$18
		STA		_ppu_mask_shadow
		STA		_PPU_MASK
		LDA		#$90
		STA		_ppu_ctrl_shadow
		STA		_PPU_CTRL

; =============== S U B	R O U T	I N E =======================================
; this seems to be a major longjmp target. it gets jmped to after you die, besides just when the game resets
_MAIN_ENTRY:
		LDX		#$FF
		TXS
		LDA		byte_6A58
		BEQ		loc_174BC7
loc_174BBB:
; INTERESTING POINT:
		JSR		_pause_or_skip
		FARX	_bB_s4_apu_set_flag0
		JSR		_pal_fade_out
		JSR		_location_palette_and_rand_update
loc_174BC7:
; inspect some kind of a "main game mode flag"
; if its clear, the game just booted
; if its set, then we longjmped here from in-game, probably after a death
		LDA		byte_6A58
		BNE		loc_174BF2
		FARX	_b17_s0_copyrights_screen
loc_174BCF:
		FARX	_b17_s1_title_screen
		LDA		byte_6A36
		CMP		#1
		BEQ		loc_174BCF
		FARX	_b7_s8_ppu_screen_clear_and_init
		FARX	_b7_sA_sram_test_and_init
		FARX	_bB_s4_apu_set_flag0
		LDA		_global_flags_array.byte12
		BMI		loc_174BFC
		ORA		#$80
		STA		_global_flags_array.byte12
		FARX	_bA_sF
		JMP		loc_174C5C

;we end up here after a death
;check how/where to respawn: at the shrine or at the last king
loc_174BF2:
		LDA		_global_flags_array.byte5
		AND		#1
		BNE		loc_174BFC
		FARX	_b0_s64_respawn_at_the_king ; respawn at a king or other save point i suppose

;respawn at a shrine:
loc_174BFC:
		LDA		#$50
		STA		_global_flags_array.byte11
		JSR		_ppu_disable
		FARX	_bE_sF
		JSR		_ppu_and_dequeue_enable
		LDA		_global_flags_array.byte3 ; clear _q_ShipUnfound
		AND		#$BF
		STA		_global_flags_array.byte3
		LDA		_global_flags_array.byte5
		AND		#1
		BEQ		loc_174C2F ; branch if !_f_IsInNavelOfTheEarth
		LDA		_global_flags_array.byte5
		AND		#$FC
		STA		_global_flags_array.byte5
		LDA		#0
		JSR		loc_1752EB
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_s20_npc_hndl31
		JMP		loc_174C5C
loc_174C2F:
		FARX	_bE_s36
		LDA		_location_type
		ORA		#1
		STA		_location_type
		LDA		byte_6A58
		BNE		loc_174C51
		DEC		byte_6A58
		FARX	_bD_s28_frame_palette_by_status_adjust
		LDA		#0
		JSR		loc_1752EB
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_s24
		JMP		loc_174C5C
loc_174C51:
		LDA		#0
		JSR		loc_1752EB
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_s23
loc_174C5C:
		JSR		sub_174D56
		JMP		loc_174C5C

; =============== S U B	R O U T	I N E =======================================
sub_174C62:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		_pal_fade_out
		LDA		byte_9A
		JSR		sub_1762FC
		JSR		_location_palette_and_rand_update
		LDA		_global_flags_array.byte5
		AND		#1
		BEQ		loc_174C84
		FARX	_b0_s4F_return_party_members
		FARX	_bE_s18
		FARX	_b0_s4E_get_anybody_alone_temporary
		JMP		loc_174C87
loc_174C84:
		FARX	_bE_s18
loc_174C87:
		LDA		_location_type
		AND		#1
		BEQ		loc_174C93
		JSR		sub_177CFC
		FARX	_bC_s27
loc_174C93:
		JSR		_nmi_forbid_ppu_dequeue
		FARX	_bE_s11
		JSR		_nmi_forbid_ppu_dequeue
		LDA		_player_vehicle
		BNE		loc_174CCA
		LDA		_location_type
		AND		#1
		BEQ		loc_174CAD
		LDX		_playerMapX
		LDY		_playerMapY
		JMP		loc_174CB1
loc_174CAD:
		LDX		_playerWorldX
		LDY		_playerWorldY
loc_174CB1:
		STX		_players_pos_list
		STY		_players_pos_list+1
		FARX	_bC_s35
		JMP		loc_174CCA

; =============== S U B	R O U T	I N E =======================================
sub_174CBD:
		LDA		_mmc_cur_prg_bank
		PHA
		FARX	_b5_s9
		FARX	_bC_s35
		JSR		_ppu_on_and_fade_in
loc_174CCA:
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
_wrap_bE_sD_wnd3E:
		FARX	_bE_sD
		SYSX	_display_window,$3E
		RTS

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
		JSR		_location_palette_and_rand_update
		JSR		sub_17578E
		LDA		#7
		JSR		_mmc1_prg_set
		JMP		_ppu_on_and_fade_in

; =============== S U B	R O U T	I N E =======================================
sub_174CFF:
		LDA		#9 ; specify bank 9
		JSR		_mmc1_prg_set
		JSR		sub_E39E0
		LDA		#7 ; specify bank 7
		JSR		_mmc1_prg_set
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D0D:
		LDA		#9 ; specify bank 9
		JSR		_mmc1_prg_set
		JSR		loc_E39E8
		LDA		#$A ; specify bank $A
		JSR		_mmc1_prg_set
		RTS

; =============== S U B	R O U T	I N E =======================================
; reads a value from pri_stat_tbl
; Y is the index of the item to query
;
; unsafe fast routine, may be replaced with slow and
; safe _sys0_byte_read_x if add _gear_pri_stat_tbl to the filesystem
; the value of X unused here, but used in add/sub system routines later
; to add or append this value to players parameters
;
_far_read_pri_stat_tbl:
		LDA		#9 					; specify bank 9
		JSR		_mmc1_prg_set
		LDA		_gear_pri_stat_tbl,Y
		PHA
		LDA		#0 					; specify bank 0
		JSR		_mmc1_prg_set
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D4F:
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		FARX	_bC_s20_warp_bE_sB_arg0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D56:
		FARX	_bE_s1_MainLoopCheckAButton
		JSR		sub_174E52
		JSR		sub_174E1A
		FARX	_bD_s2
		JSR		sub_174D89
		FARX	_bC_s1
		JSR		sub_174DCF
		JSR		sub_175AF7
		FARX	_bD_s9
		FARX	_bD_s6
		JSR		sub_174DC0
		JSR		sub_177116
		JSR		_wait_for_nmi_is_over_sync
		JSR		sub_1755AB
		FARX	_bA_s1
		JSR		sub_174E10
		INC		byte_90
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174D89:
		LDA		_heroTileMovePixelsRemain
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
		LDA		_playerFacingDir
		CMP		#3
		BEQ		loc_174DB0
		AND		#1
		BEQ		loc_174DB6
		RTS
loc_174DA8:
		LDA		_playerFacingDir
		CMP		#1
		BEQ		loc_174DB6
		RTS
loc_174DB0:
		LDA		_heroTileMovePixelsRemain
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
		LDA		_playerFacingDir
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
		LDA		_heroTileMovePixelsRemain
		AND		#1
		BEQ		locret_174DF1
loc_174DE0:
		FARX	_b6_s8_world_map_pal_update
		LDA		_heroTileMovePixelsRemain
		BNE		locret_174DF1
		LDA		_ppu_queue_chunks_count
		CMP		#1
		BNE		locret_174DF1
		JSR		_ppu_set_dequeue_flag
locret_174DF1:
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
		LDA		_blockPlayerInputDuringMap
		CMP		#2
		BCS		loc_174E21
		RTS
loc_174E21:
		FARX	_bE_s26
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_174E25:
		LDA		_player_vehicle
		BEQ		locret_174E51
		LDX		_players_pos_list
		LDY		_players_pos_list+1
		CMP		#1
		BNE		loc_174E4D
		STX		_playerShipX
		STY		_playerShipY
		LDA		byte_9A
		BEQ		locret_174E51
		STX		_npcs_pos_list
		STY		_npcs_pos_list+1
		LDA		_npcs_pos_list+3
		AND		#$FC
		ORA		_playerFacingDir
		STA		_npcs_pos_list+3
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
		LDA		_heroTileMovePixelsRemain
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
		LDA		_blockPlayerInputDuringMap
		BNE		locret_174E77
		LDA		_player_vehicle
		CMP		#VEHICLE_FLYING
		BEQ		loc_174E92 ; branch if we're flying
		FARX	_b0_s0_world_map_random_enounter_test
loc_174E92:
		JMP		loc_174E99
loc_174E95:
		LDA		_blockPlayerInputDuringMap
		BNE		locret_174E77
loc_174E99:
		JMP		loc_174ED8
loc_174E9C:
		JSR		_pal_fade_out
		LDA		#3
		STA		_location_type
		LDA		#$2D
		STA		_playerWorldX
		LDA		#6
		STA		_playerMapX
		STA		_players_pos_list
		LDA		#$30
		STA		_playerWorldY
		LDA		#3
		STA		_playerMapY
		STA		_players_pos_list+1
		LDA		#0
		STA		_player_vehicle
		LDA		#$A
		STA		_playerShipX
		LDA		#$13
		STA		_playerShipY
		LDA		#2
		STA		_playerFacingDir
		LDA		#$91 ; Alefgard landing
		STA		_mapNumber
		LDA		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		STA		_world_map_steps_count
		LDA		#4
		JMP		loc_1752EB
loc_174ED8:
		JSR		sub_174E25
		JSR		_calc_pads
		LDA		_player_vehicle
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
		LDA		_npc_anim_script_idx
		BEQ		loc_174F53
		BMI		loc_174F53
		LDA		_npc_anim_script_flags
		AND		#$20
		BNE		loc_174F1A
		LDA		_npc_anim_script_flags
		AND		#$80
		BEQ		loc_174F53
		RTS
loc_174F1A:
		FARX	_bA_s6
		BCS		loc_174F3B
		LDA		byte_6EB
		BNE		loc_174F43
		INC		byte_6EF
		LDX		byte_6EF
		LDA		byte_174FF2,X
		CMP		#$FF
		BNE		loc_174F3E
		FARX	_bA_s6
		BCS		loc_174F3B
		LDA		#0
		STA		_npc_anim_script_idx
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
		BIT		_global_flags_array.byte11
		BVS		loc_174FBB
		LDA		_pads
		AND		#$F0
		BEQ		locret_174FF1
		LDY		#0
		STY		_playerFacingDir
		TYA
		JSR		sub_1762C3
		LDA		#$E0
		STA		_global_flags_array.byte11
loc_174FBB:
		LDA		_playerMapX
		STA		word_3C
		LDA		_playerMapY
		STA		word_3C+1
		ASL		_pads
		BCS		sub_17501F
		ASL		_pads
		BCS		sub_17501C
		ASL		_pads
		BCS		sub_175019
		ASL		_pads
		BCS		sub_175016
		LDA		_npc_anim_script_idx
		BNE		locret_174FF1
		LDA		byte_8E
		BMI		locret_174FF1
		LDA		byte_8E
		ADC		#$10
		STA		byte_8E
		BPL		locret_174FF1
		FARX	_bE_sD
		JSR		_sram_b0_s31_get_party_chars_list
		DEC		word_4
		LDA		word_4
		FARX	_bE_sC_display_window
locret_174FF1:
		RTS
byte_174FF2:
		.BYTE	$28,  2,$4B,  2,$1F,$14,  4,$41,$28,  1,$86,  7,$FF,$85,$FF,$15
		.BYTE	  8,$FF,$11,$82,  1,$42,$16,$82,$13,$89,$17,  2,$FF,$43,$1F,$12
		.BYTE	$FF,$84,$12,$FF

; =============== S U B	R O U T	I N E =======================================
sub_175016:
		JMP		sub_175601

; =============== S U B	R O U T	I N E =======================================
sub_175019:
		JMP		sub_175682

; =============== S U B	R O U T	I N E =======================================
sub_17501C:
		JMP		sub_1755CA

; =============== S U B	R O U T	I N E =======================================
sub_17501F:
		JMP		sub_17564B

; =============== S U B	R O U T	I N E =======================================
_world_map_step_forward:
		LDA		_location_type
		AND		#VEHICLE_FLYING
		BNE		loc_175046 ; branch if flying
		LDA		_rand_seed
		AND		#$1F
		CLC
		ADC		#$DF
		ADC		_world_map_step_rand
		STA		_world_map_step_rand
		BCC		loc_175046
		INC		_world_map_steps_count
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_TOTAL
		BCC		loc_175046
		LDA		#0
		STA		_world_map_steps_count
loc_175046:
		JMP		sub_17522D							; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_175049:
		LDA		#$FF
		STA		byte_86
		LDA		_playerFacingDir
		STA		byte_6BC
		LDA		byte_9A
		BEQ		_world_map_step_forward
		LDA		_standing_tile
		AND		#$1F ; remove TILE_TOWN_INTERIOR_FLAG
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		LDX		#$FF
		CMP		#7
		BEQ		loc_17509F
 ; checks for special maps
		LDA		_mapNumber
		CMP		#$A9 ; Cave of Necrogond B3
		BNE		loc_175084
		LDA		_playerMapX
		CMP		#$3A ; Tunnel to Rimuldar..
		BNE		loc_17509A
		LDA		#$16
		STA		_playerMapX
		LDA		_playerMapY
		SEC
		SBC		#$12
		STA		_playerMapY
		LDA		#$73 ; TILE_????
		STA		_standing_tile
		BNE		loc_17509A
loc_175084:
		CMP		#$36 ; Navel of the Earth
		BNE		loc_17509A
		LDA		_playerMapX
		BNE		loc_175092
		LDA		#$26
		STA		_playerMapX
		BNE		loc_17509A
loc_175092:
		CMP		#$27 ; 3-way warp shrine (where?)
		BNE		loc_17509A
		LDA		#1
		STA		_playerMapX
loc_17509A:
		JSR		sub_1750BC
		LDX		#0
loc_17509F:
		STX		byte_43
		JSR		sub_17536E
		LDA		byte_43
		LDX		_mapWidth
		DEX
		CPX		_playerMapX
		BCC		sub_1750D0
		LDX		_mapHeight
		DEX
		CPX		_playerMapY
		BCC		sub_1750D0
		CMP		#$FF
		BEQ		sub_1750BC
		FARX	_bC_s2A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1750BC:
		LDA		_standing_tile
		AND		#$E0 ; fetch some top bits out of _standing_tile
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
		LDA		_mapNumber
		FARX	_bE_s1D_get_map_buf_end_ptr
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
		LDA		_mapNumber
		CMP		#$2C
		BEQ		loc_175170
		CMP		#$2B
		BEQ		loc_175170
		CMP		#$F
		BEQ		loc_17513A
		LDX		_player_vehicle
		BEQ		loc_175123
		CMP		#$A
		BNE		loc_175164
		LDA		#$18
		STA		_playerWorldX
		LDA		#$62
		STA		_playerWorldY
		LDA		_playerFacingDir
		JMP		loc_175164
loc_175123:
		LDX		byte_8A
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#7
		BNE		loc_175185
		LDA		_mapNumber
		CMP		#$41 ; Aliahan upstairs, Hero's apartment (first sub-location)
		BCC		loc_175185 ; BCC->JB - branch if we're in a main location (not a sub-location)
		FARX	_bE_s22
		JMP		loc_175185
loc_17513A:
		LDA		_playerMapY
		CMP		#3
		BEQ		loc_17514F
loc_175140:
		LDA		_global_flags_array.byte5
		AND		#$FC
		STA		_global_flags_array.byte5
		INC		_playerWorldY
		LDA		#2
		JMP		loc_175164
loc_17514F:
		LDA		_global_flags_array.byte5
		AND		#1
		BEQ		loc_175140
		LDA		_global_flags_array.byte5
		ORA		#2
		STA		_global_flags_array.byte5
		LDA		#$6B
		STA		_playerWorldX
		LDA		#3
loc_175164:
		JSR		sub_175917
		TAX
		LDA		#0
		STA		byte_6B9
		JMP		loc_175192
loc_175170:
		LDA		#$49
		STA		_playerWorldY
		LDA		_playerMapX
		CMP		#$FF
		BEQ		loc_175181
		LDA		#$26
		STA		_playerWorldX
		JMP		loc_175185
loc_175181:
		LDA		#$23
		STA		_playerWorldX
loc_175185:
		FARX	_bB_s4_apu_set_flag0
		JSR		sub_175917
loc_17518B:
		LDA		#$FF
		STA		byte_6B9
		LDX		#2
loc_175192:
		STX		_playerFacingDir
loc_175195:
		JSR		loc_1756F6
		LDA		_location_type
		AND		#$FA
		STA		_location_type
		LDA		_player_vehicle
		BEQ		loc_1751AA
		LDA		_global_flags_array.byte3
		AND		#$BF
		STA		_global_flags_array.byte3
loc_1751AA:
		LDA		#0
		STA		byte_9A
		JSR		sub_1762FC
		LDA		_global_flags_array.byte2
		AND		#$7F
		STA		_global_flags_array.byte2
		LDA		_global_flags_array.byte5
		AND		#$EF
		STA		_global_flags_array.byte5
		JSR		_location_palette_and_rand_update
		JSR		_ppu_disable
		FARX	_bE_sF
		FARX	_b5_s9
		LDA		_player_vehicle
		BEQ		loc_1751E5
		LDA		_playerWorldX
		STA		_players_pos_list
		STA		_playerShipX
		LDA		_playerWorldY
		STA		_players_pos_list+1
		STA		_playerShipY
		FARX	_bD_s1B
		JMP		loc_1751F7
loc_1751E5:
		FARX	_bC_s3_refresh_standing_tile
		LDA		_global_flags_array.byte10
		BPL		loc_1751F4
		LDA		_global_flags_array.byte16
		AND		#$20
		BEQ		loc_1751F7
loc_1751F4:
		JSR		_map_music_select_and_load
loc_1751F7:
		JSR		_ppu_on_and_fade_in
		LDA		#6
		JSR		_mmc1_prg_set
		FARX	_b0_s66_byte_6D40_clear
		LDA		_global_flags_array.byte10
		BPL		locret_175211
		LDA		_global_flags_array.byte16
		AND		#$20
		BNE		locret_175211
		FARX	_b7_s19
locret_175211:
		RTS

; =============== S U B	R O U T	I N E =======================================
; macro subroutine for selecting the music index and loading it to the player
; don't know, why they made it here, but never used in any other parts of the
; program, using pair of opcodes instead.
;
_map_music_select_and_load:
		FARX	_bE_s31_get_map_music_number
		FARX	_bB_s3_apu_load
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175219:
		LDA		#>[_area_tilemap]
		STA		word_6C+1
		LDA		#<[_area_tilemap]
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
; Is this testing whether we're entering a location?
;
sub_17522D:
		LDA		_blockPlayerInputDuringMap
		BNE		sub_175229				; TAILCALL - return if player input is blocked
		LDA		_player_vehicle
		CMP		#2
		BEQ		locret_17522C			; abort if we're in ramia? sure, we can't enter things when we fly over them
; copy coordinates?
		LDA		_playerWorldX	
		STA		byte_74
		LDA		_playerWorldY
		STA		byte_75
		LDA		_standing_tile						; analyze current standing-on tile
		LDX		#$F
		CMP		#TILE_OVERWORLD_TOWN_LEFT
		BEQ		loc_175292
		CMP		#TILE_OVERWORLD_TOWN_RIGHT
		BEQ		loc_175292
		CMP		#TILE_OVERWORLD_CASTLE_BOTTOMLEFT
		BEQ		loc_1752A1
		CMP		#TILE_OVERWORLD_CASTLE_BOTTOMRIGHT
		BEQ		loc_1752A1
		CMP		#$11
		BEQ		loc_1752BE
		CMP		#$15
		BEQ		loc_1752BE
		CMP		#TILE_OVERWORLD_TOWER_BOTTOM
		BEQ		loc_1752C7
		CMP		#TILE_OVERWORLD_SMALL_CAVE
		BEQ		loc_1752C7
		CMP		#$13
		BEQ		loc_1752C7
		JSR		sub_17592E
		BCS		loc_1752B0

; test whether we just stepped onto the phantom ship
		LDA		_playerWorldX
		CMP		_ghostShipWorldX
		BNE		loc_17527F
		LDA		_playerWorldY
		CMP		_ghostShipWorldY
		BNE		loc_17527F
		LDA		_location_type
		BNE		loc_17527F
		JMP		_sailed_onto_phantom_ship

loc_17527F:
		FARX	_bE_s23
		LDA		#0
		STA		byte_6B9
		LDA		byte_6F0
		CMP		#$23
		BNE		locret_175291
		SYSX	_apu_load,BGM_OVERWORLD
locret_175291:
		RTS
loc_175292:
		CMP		#$B
		BNE		loc_1752BE
		LDA		byte_6B9
		BNE		locret_175291
		DEC		_playerWorldX
		DEC		byte_74
		BNE		loc_1752BE
loc_1752A1:
		CMP		#$D
		BNE		loc_1752BE
		LDA		byte_6B9
		BNE		locret_175291
		DEC		byte_74
		DEC		_playerWorldX
		BNE		loc_1752BE
loc_1752B0:
		PHA
		LDA		_location_type
		ORA		#1
		STA		_location_type
		JSR		_pal_fade_out
		PLA
		JMP		loc_1752EB
loc_1752BE:
		LDA		_location_type
		AND		#$FB
		STA		_location_type
		JMP		loc_1752CD
loc_1752C7:
		LDA		_location_type
		ORA		#4
		STA		_location_type
loc_1752CD:
		LDA		byte_6B9
		BEQ		loc_1752D9
		LDA		_location_type
		AND		#$FB
		STA		_location_type
		RTS
loc_1752D9:
		LDA		_location_type
		ORA		#1
		STA		_location_type
		FARX	_bB_s4_apu_set_flag0
		SYSX	_apu_load,SFX_STAIRSTEPS
		JSR		_pal_fade_out
		JSR		sub_1759B8
loc_1752EB:
		PHA
		JSR		sub_175A32
		JSR		sub_1762FC
		JSR		sub_1754AD
loc_1752F5:
		PLA
		JSR		sub_17530A
		JSR		_map_music_select_and_load
		LDA		byte_6AE6
		AND		#$FE
		STA		byte_6AE6
		JMP		_ppu_on_and_fade_in

; =============== S U B	R O U T	I N E =======================================
sub_17530A:
		PHA
		JSR		sub_17532D
		JSR		sub_17578E
		PLA
		BNE		loc_175324
		FARX	_bC_s4
		BIT		_global_flags_array.byte10
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
		LDX		_playerMapX
		LDY		_playerMapY
		JSR		_map_ReadTileCheckedXY
		LDA		word_7C
		STA		_standing_tile
		AND		#$E0 ; fetch some top bit flags out of _standing_tile
		STA		byte_8C
		FARX	_b5_s9
		JMP		_location_palette_and_rand_update

; =============== S U B	R O U T	I N E =======================================
; When sailing onto the phantom ship?
;
_sailed_onto_phantom_ship:
		FARX	_bE_s32
		FARX	_bB_s4_apu_set_flag0
		JSR		_pal_fade_out
		LDA		#$9C ; Phantom Ship 1F 
		STA		_mapNumber
		LDA		_location_type
		ORA		#1
		STA		_location_type
		LDA		#0
		STA		_playerMapX
		LDA		#$16
		STA		_playerMapY
		LDA		#1
		STA		_playerFacingDir
		STA		byte_6BC
		LDA		#$FF
		JSR		loc_1752EB
		SYSX	_apu_load,BGM_EVIL_11
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17536E:
		LDA		_blockPlayerInputDuringMap
		BEQ		loc_175376
		FARX	_bE_s25
		RTS
loc_175376:
		LDA		_standing_tile
		FARX	_bE_s1A ; classify _standing_tile
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
		LDA		_tile_type_and_collision_flags,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1753AA:
		LDA		_playerWorldX
		CMP		#$22
		BNE		loc_1753C0
		LDA		#$10
		STA		word_4
		LDA		#$E
		STA		word_4+1
		LDA		#$21
		FARX	_bC_sA
		JSR		_ppu_force_dequeue
loc_1753C0:
		LDA		_mapNumber
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
		LDA		_mapNumber
		CMP		#$41
		BCS		loc_1753D4
		RTS
loc_1753E6:
		LDA		_mapNumber
		CMP		#$D6
		BCC		loc_1753F8
		CMP		#$DB
		BCS		loc_1753F8
		LDA		#$A5
		STA		_playerWorldX
		LDA		#$DA
		STA		_playerWorldY
loc_1753F8:
		LDA		_playerFacingDir
		BEQ		loc_175409
		CMP		#1
		BEQ		loc_17540F
		CMP		#2
		BEQ		loc_17541B
		DEC		_playerWorldX
		BNE		loc_17541D
loc_175409:
		DEC		_playerWorldY
		DEC		_playerWorldY
		BNE		loc_17541D
loc_17540F:
		INC		_playerWorldX
		LDA		byte_9A
		CMP		#$19
		BCS		loc_17541D
		INC		_playerWorldX
		BNE		loc_17541D
loc_17541B:
		INC		_playerWorldY
loc_17541D:
		PLA
		PLA
		LDA		#0
		STA		byte_6B9
		FARX	_bB_s4_apu_set_flag0
		JSR		_pal_fade_out
		JMP		loc_175195

; =============== S U B	R O U T	I N E =======================================
sub_17542D:
		DEC		_playerMapX

; =============== S U B	R O U T	I N E =======================================
sub_17542F:
		LDA		_global_flags_array.byte10
		AND		#$A0
		STA		_global_flags_array.byte10
		LDA		#0
		STA		word_4
		JSR		sub_175219
loc_17543E:
		FARX	_bE_s19
		BCS		loc_175449
		JSR		sub_175222
		JMP		loc_17543E
loc_175449:
		FARX	_bE_s20_decode_map_ptr_to_XY
		CPX		_playerMapX
		BNE		loc_175454
		CPY		_playerMapY
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
		STA		_mapNumber
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
		JSR		_map_ReadTileCheckedXY
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#$F
		BNE		loc_1754A7
		FARX	_bC_s37_get_special_areas_tile_idx
		LDX		_playerMapX
		LDY		_playerMapY
		JSR		_areamap_SetTileXY
loc_1754A7:
		LDA		#$FF
		PHA
		JMP		loc_1752F5

; =============== S U B	R O U T	I N E =======================================
sub_1754AD:
		JSR		_ppu_disable
		JSR		_bE_sA
		JMP		_ppu_and_dequeue_enable

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
		STX		_playerFacingDir
		STX		byte_6BC
		FARX	_bE_s20_decode_map_ptr_to_XY
		STX		_playerMapX
		STY		_playerMapY
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
		STA		_playerMapX
		INY
		LDA		(word_6C),Y
		STA		_playerMapY
		INY
		LDA		(word_6C),Y
		AND		#3
		STA		_playerFacingDir
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
		STA		_playerWorldX
		INY
		LDA		(word_6C),Y
		STA		_playerWorldY
		PLA
		PHA
		FARX	_bA_sC
		PLA
		JSR		sub_1754B6
		JSR		sub_17532D
		FARX	_bA_sD
		LDA		#2
		STA		_playerFacingDir
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
		STA		_playerWorldX
		INY
		LDA		(word_6C),Y
		STA		_playerWorldY

; =============== S U B	R O U T	I N E =======================================
sub_175596:
		FARX	_bE_s31_get_map_music_number
		CMP		#BGM_EVIL_11
		BEQ		loc_1755A0
		FARX	_bB_s4_apu_set_flag0
loc_1755A0:
		SYSX	_apu_load,SFX_STAIRSTEPS
		JSR		_pal_fade_out
		PLA
		PLA
		JMP		loc_17518B

; =============== S U B	R O U T	I N E =======================================
sub_1755AB:
		LDA		_standing_tile
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		CMP		#9
		BNE		locret_1755C9
		LDA		byte_90
		AND		#3
		BNE		locret_1755C9
		LDA		_playerFacingDir
		AND		#1
		BNE		locret_1755C9
		LDX		#3
		JSR		_sleep_X_sync
locret_1755C9:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1755CA:
		JSR		sub_1757A4
		LDA		#3
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_1755ED
		DEC		_playerMapX
		DEC		word_3C
		DEC		word_3C
		DEC		_players_pos_list
		JSR		sub_1757B6
		LDX		#3
		BCC		loc_175638
		INC		_playerMapX
		INC		_players_pos_list
		JMP		sub_17574F
loc_1755ED:
		DEC		_playerWorldX
		DEC		_players_pos_list
		JSR		sub_1757C0
		LDX		#3
		BCC		loc_175638
		INC		_playerWorldX
		INC		_players_pos_list
		JMP		sub_17574F

; =============== S U B	R O U T	I N E =======================================
sub_175601:
		JSR		sub_1757A4
		LDA		#0
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_175624
		DEC		_playerMapY
		DEC		word_3C+1
		DEC		word_3C+1
		DEC		_players_pos_list+1
		JSR		sub_1757B6
		LDX		#0
		BCC		loc_175638
		INC		_playerMapY
		INC		_players_pos_list+1
		JMP		sub_17574F
loc_175624:
		DEC		_playerWorldY
		DEC		_players_pos_list+1
		JSR		sub_1757C0
		LDX		#0
		BCC		loc_175638
		INC		_playerWorldY
		INC		_players_pos_list+1
		JMP		sub_17574F
loc_175638:
		JSR		sub_17574F
		FARX	_bD_s4
		LDA		#$10
		STA		_heroTileMovePixelsRemain
		LDA		#0
		STA		byte_85
		STA		byte_8E
		JMP		loc_1756BC

; =============== S U B	R O U T	I N E =======================================
sub_17564B:
		JSR		sub_1757A4
		LDA		#1
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_17566E
		INC		_playerMapX
		INC		word_3C
		INC		word_3C
		INC		_players_pos_list
		JSR		sub_1757B6
		LDX		#1
		BCC		loc_175638
		DEC		_playerMapX
		DEC		_players_pos_list
		JMP		sub_17574F
loc_17566E:
		INC		_playerWorldX
		INC		_players_pos_list
		JSR		sub_1757C0
		LDX		#1
		BCC		loc_175638
		DEC		_playerWorldX
		DEC		_players_pos_list
		JMP		sub_17574F

; =============== S U B	R O U T	I N E =======================================
sub_175682:
		JSR		sub_1757A4
		LDA		#2
		STA		word_3E
		LDA		byte_9A
		BEQ		loc_1756A5
		INC		_playerMapY
		INC		word_3C+1
		INC		word_3C+1
		INC		_players_pos_list+1
		JSR		sub_1757B6
		LDX		#2
		BCC		loc_175638
		DEC		_playerMapY
		DEC		_players_pos_list+1
		JMP		sub_17574F
loc_1756A5:
		INC		_playerWorldY
		INC		_players_pos_list+1
		JSR		sub_1757C0
		LDX		#2
		BCC		loc_1756B9
		DEC		_playerWorldY
		DEC		_players_pos_list+1
		JMP		sub_17574F
loc_1756B9:
		JMP		loc_175638
loc_1756BC:
		LDA		byte_97
		AND		#$7F
		CMP		#$40
		BCC		loc_1756CE
		LDX		#word_4
		LDA		_players_status+2
		BPL		loc_17570D
		JSR		sub_175730
loc_1756CE:
		LDA		byte_97
		AND		#$3F
		CMP		#$20
		BCC		loc_1756E0
		LDX		#byte_8
		LDA		_players_status+4
		BPL		loc_175713
		JSR		sub_175730
loc_1756E0:
		LDA		byte_97
		AND		#$1F
		CMP		#$10
		BCC		loc_1756F2
		LDX		#byte_C
		LDA		_players_status+6
		BPL		loc_175719
		JSR		sub_175730
loc_1756F2:
		LDA		byte_9A
		BNE		locret_17570C
loc_1756F6:
		BIT		_global_flags_array.byte4
		BVS		loc_175701
		LDA		_playerWorldX
		EOR		#$80
		STA		byte_9E
loc_175701:
		BIT		_global_flags_array.byte16
		BVS		locret_17570C
		LDA		_playerWorldX
		EOR		#$80
		STA		_ghostShipWorldX
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
		LDA		_players_pos_list
		EOR		#$80
		STA		$100,X
		LDA		_players_pos_list+1
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
		LDA		_player_vehicle
		BEQ		loc_17577B
		CMP		#1
		BNE		loc_175767
		LDA		_npc_anim_script_idx
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
		LDA		_npcs_pos_list+3
		AND		#$FC
		STA		_npcs_pos_list+3
		TXA
		ORA		_npcs_pos_list+3
		STA		_npcs_pos_list+3
loc_17577B:
		STX		_playerFacingDir
		STX		_players_pos_list+3
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
		LDA		_playerMapX
		STA		_players_pos_list
		LDA		_playerMapY
		STA		_players_pos_list+1
		LDA		#0
		STA		_players_pos_list+2
		LDA		_playerFacingDir
		STA		_players_pos_list+3
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
		LDX		_playerMapX
		LDY		_playerMapY
		JSR		_map_ReadTileCheckedXY
		JMP		sub_175853

; =============== S U B	R O U T	I N E =======================================
sub_1757C0:
		LDX		_playerWorldX
		LDY		_playerWorldY
		JSR		sub_176D3A
		STA		_standing_tile
		LDX		_player_vehicle
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
		STX		_blockPlayerInputDuringMap
		LDA		_playerShipX
		CMP		_playerWorldX
		BNE		loc_17580C
		LDA		_playerShipY
		CMP		_playerWorldY
		BNE		loc_17580C
		STX		byte_6B9
		INX
		STX		_blockPlayerInputDuringMap
		CLC
		RTS
loc_17580C:
		LDA		_ghostShipWorldX
		CMP		_playerWorldX
		BNE		loc_17581B
		LDA		_ghostShipWorldY
		CMP		_playerWorldY
		BEQ		loc_175824
loc_175818:
		SYSX	_apu_load,SFX_BUMP_WALL
loc_17581B:
		SEC
		RTS
loc_17581D:
		LDA		#VEHICLE_ON_FOOT
		STA		_player_vehicle
		FARX	_bC_s6
loc_175824:
		CLC
		RTS
loc_175826:
		LDA		word_7C
		BNE		loc_175838
		LDA		_playerWorldX
		CMP		_ghostShipWorldX
		BNE		loc_175836
		LDA		_playerWorldY
		CMP		_ghostShipWorldY
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
		STA		_player_vehicle
		FARX	_bC_s6
		JSR		_map_music_select_and_load
		FARX	_bD_s18
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175853:
		LDA		_mapNumber
		BNE		loc_175877
		LDA		_global_flags_array.byte11
		BPL		loc_175877
		LDA		_playerMapY
		CMP		#$18
		BNE		loc_175877
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$187
		DEC		_players_pos_list+1
		DEC		_playerMapY
		FARX	_bE_s33
		INC		_players_pos_list+1
		INC		_playerMapY
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
		STA		_standing_tile
		CLC
		RTS
loc_17588B:
		LDA		word_7C
		STA		_standing_tile
		AND		#$1F ; mask flags out of _standing_tile
		FARX	_bD_s3
		BCC		loc_1758C3
		AND		#$F
		CMP		#4
		BEQ		loc_1758A1
		SYSX	_apu_load,SFX_BUMP_WALL
loc_17589F:
		SEC
		RTS
loc_1758A1:
; check for sailing out of town
		LDA		_player_vehicle
		CMP		#VEHICLE_SHIP
		BEQ		loc_1758C1
		LDA		_mapNumber
		CMP		#$A ; Portoga Town
		BEQ		loc_1758B1
		CMP		#$91 ; Alefgard landing
		BNE		loc_17589F
loc_1758B1:
		LDA		_playerMapX
		CMP		_playerShipX
		BNE		loc_17589F
		LDA		_playerMapY
		CMP		_playerShipY
		BNE		loc_17589F
		LDA		#1
		STA		_blockPlayerInputDuringMap
loc_1758C1:
		CLC
		RTS
loc_1758C3:
		LDA		_npc_anim_script_idx
		BEQ		loc_1758CF
		LDA		_npc_anim_script_flags
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
		LDA		_player_vehicle
		BEQ		loc_1758F0
		LDA		#0
		STA		_player_vehicle
		FARX	_bC_s31
		JSR		_map_music_select_and_load
loc_1758F0:
		CLC
		RTS
loc_1758F2:
		CMP		_playerMapX
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
		CMP		_playerMapY
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
		SYSX	_apu_load,SFX_STAIRSTEPS
		JSR		_pal_fade_out
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
		CMP		_location_type
		BNE		loc_175946
		INY
		LDA		(word_6C),Y
		LDY		#1
		TAX
		CPX		#$72
		BNE		loc_175999
		LDY		#0
loc_175975:
		LDA		_global_flags_array.byte18
		AND		byte_1759AB,Y
		CMP		byte_1759A6,Y
		BCC		loc_175986
		INY
		INX
		CPX		#$75
		BNE		loc_175975
loc_175986:
		STX		_mapNumber
		TYA
		ASL
		TAY
		LDA		word_1759B0,Y
		STA		_playerMapX
		LDA		word_1759B0+1,Y
		STA		_playerMapY
		LDY		#4
		BNE		loc_1759FA
loc_175999:
		CPX		#$C6
		BNE		loc_1759ED
		LDA		_global_flags_array.byte16
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
; byte_74 and byte_75 contain a world map tile coordinate
; this subroutine searches the worldmap trigger list
; installs values in their required locations, and returns a bit#2 status flag from _worldmap_trigger_tbl
; 
sub_1759B8:
		LDA		#<[_worldmap_trigger_tbl]
		STA		word_6C
		LDA		#>[_worldmap_trigger_tbl]
		STA		word_6C+1
		LDA		#6
		JSR		_mmc1_prg_set
		LDX		#0

; loop through _worldmap_trigger_tbl advancing the word_6c pointer until we find an entry with matching X coordinates
loc_1759CD:
		LDY		#0
		LDA		(word_6C),Y
		CMP		byte_74
		BEQ		loc_1759E4
loc_1759D5:
		INX
		LDA		#5 ; advance to next entry
		CLC
		ADC		word_6C
		STA		word_6C
		BCC		loc_1759CD
		INC		word_6C+1
		JMP		loc_1759CD

; test the Y coordinate
loc_1759E4:
		INY
		LDA		(word_6C),Y
		CMP		byte_75
		BEQ		loc_1759ED
		BNE		loc_1759D5

; found it! save the map number
loc_1759ED:
		STX		_mapNumber
		INY

; load player spawning positions
		LDA		(word_6C),Y
		STA		_playerMapX
		INY
		LDA		(word_6C),Y
		STA		_playerMapY
		INY

loc_1759FA:
		LDA		_mapNumber
		CMP		#$F ; special logic for lancel somehow
		BNE		.not_lancel_special
		LDA		_global_flags_array.byte5
		AND		#1
		BEQ		.not_lancel_special
; store 1 = facing direction and 0,3 as spawning position
		STA		byte_6BC
		LDA		#3
		STA		_playerMapY
		LDA		#0
		STA		_playerMapX
		SEC
		RTS

.not_lancel_special:
; if we're on the ship, save the ship's location, I think
		LDA		_player_vehicle
		CMP		#1
		BNE		loc_175A22
		LDA		_playerMapX
		STA		_playerShipX
		LDA		_playerMapY
		STA		_playerShipY

loc_175A22:
; read facing direction from bottom 2 bits of _worldmap_trigger_tbl
		LDA		(word_6C),Y
		PHA
		AND		#3
		STA		_playerFacingDir
		STA		byte_6BC
		PLA
		AND		#4
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175A32:
		LDA		#0
		STA		word_6E+1
		LDA		_mapNumber
		ASL
		ROL		word_6E+1
		CLC
		ADC		_mapNumber
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
		STA		_mapWidth
		STA		word_4
		INY
		LDA		(word_6C),Y
		STA		_mapHeight
		LDX		#word_4
		JSR		_mul16_by_8
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
		LDX		_mapNumber
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
_ppu_on_and_fade_in:
		JSR		_nmi_allow_ppu_dequeue
		JSR		_ppu_enable
		JMP		_pal_fade_in

; =============== S U B	R O U T	I N E =======================================
sub_175B17:
		LDA		_heroTileMovePixelsRemain
		BEQ		locret_175B38
		LDA		#$FF
		STA		byte_86
		DEC		_heroTileMovePixelsRemain
		LDA		_heroTileMovePixelsRemain
		BNE		loc_175B27
		STA		byte_86
loc_175B27:
		JSR		sub_175F08
		LDX		_playerFacingDir
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
		DEC		_ppu_scroll_shadow+1
		LDA		_ppu_scroll_shadow+1
		CMP		#$FF
		BNE		locret_175B38
		LDA		#$EF
loc_175B45:
		STA		_ppu_scroll_shadow+1
		RTS
loc_175B49:
		INC		_ppu_scroll_shadow+1
		LDA		_ppu_scroll_shadow+1
		CMP		#$F0
		BEQ		loc_175B54
		RTS
loc_175B54:
		LDA		#0
		BEQ		loc_175B45
loc_175B58:
		INC		_ppu_scroll_shadow
		BEQ		loc_175B5E
		RTS
loc_175B5E:
		LDA		_ppu_ctrl_shadow
		EOR		#1
		STA		_ppu_ctrl_shadow
		RTS
loc_175B67:
		DEC		_ppu_scroll_shadow
		LDA		_ppu_scroll_shadow
		CMP		#$FF
		BEQ		loc_175B5E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175B72:
		LDA		_location_type
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
		LDA		_tile_type_and_collision_flags,X
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
		JSR		_read_tile_XY
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
		ADC		_ppu_queue_pos
		STA		byte_74
		LDA		_playerFacingDir
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
		LDA		_location_type
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
		LDX		_ppu_queue_pos
		STA		_ppu_queue_buf+2,X
		LDA		byte_20
		STA		_ppu_queue_buf,X
		LDA		byte_1F
		STA		_ppu_queue_buf+1,X
		INC		word_4
		INC		word_4
		INC		_ppu_queue_pos
		INC		_ppu_queue_pos
		INC		_ppu_queue_pos
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
		ADC		_ppu_queue_chunks_count
		STA		_ppu_queue_chunks_count
		LDA		#1
		STA		byte_29
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175CBD:
		LDX		_ppu_queue_pos
		LDA		byte_20
		STA		_ppu_queue_buf,X
		LDA		byte_1F
		STA		_ppu_queue_buf+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175CCB:
		SEC
		SBC		#4
		STA		word_4+1
		PHA
		LDA		#5
		CLC
		ADC		_ppu_queue_chunks_count
		STA		_ppu_queue_chunks_count
		PLA
		ASL
		ASL
		CLC
		ADC		word_4+1
		TAX
		ASL
		STA		word_4+1
		LDA		_playerFacingDir
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
		LDA		_location_type
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
		LDA		_playerFacingDir
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
		STA		_ppu_queue_buf+2,X
		INC		word_4+1
		INC		word_4+1
		INC		_ppu_queue_pos
		INC		_ppu_queue_pos
		INC		_ppu_queue_pos
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
		LDA		_playerFacingDir
		CMP		#1
		BEQ		loc_175D9A
		LDX		#0
loc_175D9A:
		STX		word_4
		JSR		_ppu_calc_nt_offset
		JSR		sub_175DA5
		JMP		sub_175DFE

; =============== S U B	R O U T	I N E =======================================
sub_175DA5:
		LDA		_playerFacingDir
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
		LDA		_playerFacingDir
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
		INC		_ppu_queue_chunks_count
		LDX		_ppu_queue_pos
		LDA		byte_20
		ORA		#$C0
		STA		byte_29
		STA		_ppu_queue_buf,X
		LDA		byte_F
		STA		_ppu_queue_buf+1,X
		LDA		byte_1F
		STA		_ppu_queue_buf+2,X
		INC		_ppu_queue_pos
		INC		_ppu_queue_pos
		INC		_ppu_queue_pos
		LDX		_heroTileMovePixelsRemain
		LDA		_playerFacingDir
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
		LDX		_ppu_queue_pos
loc_175EA7:
		LDA		byte_647,Y
		STA		_ppu_queue_buf,X
		INX
		INY
		INC		byte_E
		DEC		byte_F
		BNE		loc_175EA7
		STX		_ppu_queue_pos
		LDA		byte_B
		BPL		locret_175F07
		LDA		word_4+1
		CLC
		ADC		byte_10
		STA		word_4+1
		JSR		_ppu_calc_nt_offset
		JSR		sub_175DA5
		JSR		sub_175E41
		INC		_ppu_queue_chunks_count
		LDX		_ppu_queue_pos
		LDA		byte_20
		ORA		#$C0
		STA		_ppu_queue_buf,X
		INX
		INC		_ppu_queue_pos
		LDA		byte_10
		LDA		#$F
		SEC
		SBC		byte_10
		STA		_ppu_queue_buf,X
		INX
		INC		_ppu_queue_pos
		STA		byte_F
		LDA		byte_1F
		STA		_ppu_queue_buf,X
		INX
		INC		_ppu_queue_pos
		LDY		byte_E
loc_175EF8:
		LDA		byte_647,Y
		STA		_ppu_queue_buf,X
		INX
		INY
		DEC		byte_F
		BNE		loc_175EF8
		STX		_ppu_queue_pos
locret_175F07:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175F08:
		LDA		_location_type
		AND		#1
		STA		byte_9
		LDA		#0
		STA		byte_B
		LDA		_playerFacingDir
		AND		#1
		BNE		sub_175F51
		JMP		loc_175F70

; =============== S U B	R O U T	I N E =======================================
sub_175F1C:
		LDA		byte_9
		BEQ		loc_175F23
		LDA		_playerMapX
		RTS
loc_175F23:
		LDA		_playerWorldX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175F26:
		LDA		byte_9
		BEQ		loc_175F2D
		LDA		_playerMapY
		RTS
loc_175F2D:
		LDA		_playerWorldY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_175F30:
		LDA		_location_type
		AND		#1
		BEQ		loc_175F39
		JMP		_map_ReadTileCheckedXY
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
		LDA		_heroTileMovePixelsRemain
		AND		#7
		BEQ		locret_175F8F
		CMP		#7
		BEQ		locret_175F8F
		LDA		_heroTileMovePixelsRemain
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
		LDA		_heroTileMovePixelsRemain
		AND		#7
		BEQ		locret_175F8F
		CMP		#7
		BEQ		locret_175F8F
		LDA		_heroTileMovePixelsRemain
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
		LDA		_playerFacingDir
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
		LDA		_heroTileMovePixelsRemain
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
		JMP		sub_17601F		; tailcall

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
		JSR		_read_tile_XY_needbank5
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
		LDA		_tile_type_and_collision_flags,X
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
		LDA		_playerFacingDir
		BEQ		loc_1760F8
		LDA		#$1E
loc_1760F8:
		STA		word_4+1
		JSR		_ppu_calc_nt_offset
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
		INC		_ppu_queue_chunks_count
		LDX		_ppu_queue_pos
		LDA		byte_20
		ORA		#$80
		STA		byte_29
		STA		_ppu_queue_buf,X
		INX
		LDA		byte_F
		STA		_ppu_queue_buf,X
		INX
		LDA		byte_1F
		STA		_ppu_queue_buf,X
		INX
		LDY		_heroTileMovePixelsRemain
		LDA		_playerFacingDir
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
		INC		_ppu_queue_chunks_count
		LDA		byte_20
		EOR		#4
		ORA		#$80
		STA		_ppu_queue_buf,X
		INX
		LDA		#$12
		SEC
		SBC		byte_A
		STA		_ppu_queue_buf,X
		STA		byte_F
		INX
		LDA		byte_1F
		STA		_ppu_queue_buf,X
		INX

; =============== S U B	R O U T	I N E =======================================
sub_176188:
		LDA		byte_647,Y
		STA		_ppu_queue_buf,X
		INX
		INY
		DEC		byte_F
		BNE		sub_176188
		STX		_ppu_queue_pos
locret_176197:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176198:
		LDX		#8
		LDA		_playerFacingDir
		CMP		#1
		BEQ		loc_1761A3
		LDX		#$F7
loc_1761A3:
		STX		byte_10
		JSR		sub_175F1C
		CLC
		ADC		byte_10
		STA		byte_10
		LDA		_heroTileMovePixelsRemain
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
		JMP		_wrap_mmc1_restore

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
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_1762C9:
		STA		word_4A
		STY		byte_4D
		JSR		_wait_for_nmi_is_over_sync
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
		STA		_battle_type_fight
		LDA		byte_83438+1,X
		STA		word_60+1
		JSR		sub_176275
		LDA		#3
		STA		word_60
loc_1762F4:
		LDA		word_4A
		JSR		sub_176488
		JMP		_wrap_mmc1_restore

; =============== S U B	R O U T	I N E =======================================
sub_1762FC:
		JSR		_ppu_disable
		JSR		sub_176305
		JMP		_ppu_and_dequeue_enable

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
		LDA		_mapNumber
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
		JMP		_wrap_mmc1_restore
loc_1763C9:
		LDA		_mapNumber
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
		LDA		_mapNumber
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
		BCS		_wrap_mmc1_restore
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
		STA		_tile_type_and_collision_flags,Y
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
_wrap_mmc1_restore:
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
		LDA		#<[byte_82DD4]
		LDY		#>[byte_82DD4]
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
		LDA		#<[byte_823F1]
		LDY		#>[byte_823F1]
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
		STA		_tile_type_and_collision_flags,X
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
		LDA		#<[byte_832E4]
		LDY		#>[byte_832E4]
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
		LDA		_battle_type_fight
		STA		_ppu_queue_buf
		LDA		word_60+1
		STA		_ppu_queue_buf+2
		LDA		#$40
		STA		_ppu_queue_buf+1
		LDA		#1
		STA		_ppu_queue_chunks_count
		JSR		_ppu_force_dequeue
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
		JSR		_tile_rotate_left
		LDX		#0
loc_176703:
		LDA		byte_C,X
		STA		word_4,X
		INX
		CPX		#8
		BCC		loc_176703
loc_17670C:
		JSR		_tile_rotate_left
		JMP		loc_176715
loc_176712:
		JSR		_tile_rotate_right
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
		STA		_ppu_queue_buf,Y
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

; =============== S U B	R O U T	I N E =======================================
; input parameters, X:A - 9-bit message index from the start of the given bank
; byte_7C, actual data bank
;
_get_msg_ptr_by_idx:
		TAY								; backup A
		LDA		_mmc_cur_prg_bank
		PHA
		LDA		#$A
		JSR		_mmc1_prg_set			; yep, blocks offsets are in external bank
		TYA								; restore A, now we have X:A index again
		JSR		_get_text_block_ptr		; get it
		PHA
		LDA		word_7C
		JSR		_mmc1_prg_set			; now, actual data in extra banks too
		NOP								; from now we in different 256K data block
		NOP								; in $1F bank, seems these NOPs are here
		NOP								; to be sure the MMC1 switched banks for sure
		NOP								; but this is maybe just paranoid
		PLA
		TAX								; get the msg idx in X counter
		BEQ		loc_176BCF				; if it is 0, so we don't have to search something
		LDY		#0
loc_176BB6:
		LDA		(word_72),Y				; now we has to find the message by looking at terminate symbols
		INC		word_72
		BNE		loc_176BBE
		INC		word_72+1				; after reading a byte, ptr always will point to the next byte
loc_176BBE:
		CMP		#$FF
		BEQ		loc_176BCA				; symbols are $FF, $EF, $EE only, nothing more
		CMP		#$EF
		BEQ		loc_176BCA
		CMP		#$EE
		BNE		loc_176BB6				; no terminate symbols, increase pointer, continue
loc_176BCA:
		DEX								; terminate detected, decrement counter
		BEQ		loc_176BCF				; if equal, we at the right place
		BNE		loc_176BB6				; no - search again
loc_176BCF:
		PLA								; we have a direct pointer to desired message in word_72
		JMP		_mmc1_prg_set			; restore bank and return to caller

; ==================================================
; ==                                              ==
; ==================================================

; =============== S U B	R O U T	I N E =======================================
_sleep_30:
		LDX		#$1E
		JMP		_sleep_X_sync

; =============== S U B	R O U T	I N E =======================================
sub_176C41:
		LDA		_playerWorldX
		STA		byte_74
		LDA		_playerWorldY
		STA		byte_75
		LDA		_location_type
		PHA
		AND		#2
		STA		_location_type
		JSR		sub_17592E
		PLA
		STA		_location_type
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

; ==================================================
; == BRK FAR CALL AND FILESYSTEM HANDLER ROUTINES ==
; ==================================================

; =============== S U B	R O U T	I N E =======================================
; IRQ vector handler, called as soft-IRQ with BRK instruction, used for short
; version of routines calls with 8-bit parameters
;
; format:
; byte 0	BRK opcode
; byte 1	argument
; byte 2	xxiiiiix	- index of the syscall routine << 1
;
_FAR_CALL_HANDLER:
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

_syscall_lib:
		; far sys call routines, each takes lower 8-bit of filesystem index,
		; a higher bits selecting with the number of the syscall itself
		;
		SYS_IDX		_sys0_safe
		SYS_IDX		_sys1_safe

		; more common syscall wrappers for message output, as well, takes the
		; lower bits of message index from argument, and a higher representing
		; the syscall index itself
		;
		; note messages with name starting with _sys_ are for MSGX calls and
		; need the argument passed in Y register
		; when using as a shortcut with pair of LDA/JSR opcodes (when the index
		; of message is variable), use _wrap_ prefixed functions instead, they
		; accept input parameter in A directly.
		;
_msg_m00_sidx EQU	[. - _syscall_lib]
		SYS_IDX		_sys_msg_m00_arg0
		SYS_IDX		_sys_msg_m00_arg1
		SYS_IDX		_sys_msg_m00_arg2
		SYS_IDX		_sys_msg_m00_arg3
		SYS_IDX		_sys_msg_m00_arg4
		SYS_IDX		_sys_msg_m00_arg5
		SYS_IDX		_sys_msg_m00_arg6
		SYS_IDX		_sys_msg_m00_arg7

_msg_m00_break_sidx	EQU	[. - _syscall_lib]
		SYS_IDX		_sys_msg_m00_arg0_break
		SYS_IDX		_sys_msg_m00_arg1_break
		SYS_IDX		_sys_msg_m00_arg2_break
		SYS_IDX		_sys_msg_m00_arg3_break
		SYS_IDX		_sys_msg_m00_arg4_break
		SYS_IDX		_sys_msg_m00_arg5_break
		SYS_IDX		_sys_msg_m00_arg6_break
		SYS_IDX		_sys_msg_m00_arg7_break

		; the message wrappers from bank D for block 6/7 has additional check for gender and status
		; of the hero. but it seems that message system checks this by its own, however additinal
		; call of checking routine is used in many other places too, need to investigate.
		; I put these special msg display routines with additional gender check here to be sure
		; nothing is broken, but if you prove that this is a redundant call, you can frely remove
		; this shit and remove all MSGX functions with _ex suffix

_msg_m00_ex_sidx	EQU	[. - _syscall_lib]
		.WORD	0	; only used for bank 5, 6, 7
		.WORD	0
		.WORD	0
		.WORD	0
		.WORD	0
		SYS_IDX		_sys_msg_m00_arg5_ex
		SYS_IDX		_sys_msg_m00_arg6_ex
		SYS_IDX		_sys_msg_m00_arg7_ex

_msg_m00_break_ex_sidx	EQU	[. - _syscall_lib]
		.WORD	0	; remove the rest if prove it unneeded
		.WORD	0
		.WORD	0
		.WORD	0
		.WORD	0
		SYS_IDX		_sys_msg_m00_arg5_break_ex
		SYS_IDX		_sys_msg_m00_arg6_break_ex
		SYS_IDX		_sys_msg_m00_arg7_break_ex

		; two more external direct offsets, whould called from bank 4 only
		; and pointing directly to this bank
		;
		SYS_IDX		_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress
		SYS_IDX		_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break

		; other common routines
		;
		SYS_IDX		_display_window
		SYS_IDX		_display_window_ex
		SYS_IDX		_apu_load

; == FILESYSTEM DATA ==

_sys_idx_lib:
;
; keep this records within first 256 indexes!
; data entries goes first
;
		FILE_IDX	$0,_b0_d3F_antics_index					; $B2
		FILE_IDX	$0,_b0_d42_item_use_effects_list	; $90
		FILE_IDX	$0,_b0_d44_item_effects_list					; $92
		FILE_IDX	$0,_b0_d58_hero_spell_related_data00					; $DF
		FILE_IDX	$0,_b0_d59_common_spell_related_data00					; $E0
		FILE_IDX	$4,_b4_dD_spells_list		; $78
		FILE_IDX	$6,_b6_d9_world_map_step_daytime_list	; $89
		FILE_IDX	$6,_b6_dA_world_pal_ofs_list	; $8A
		FILE_IDX	$6,_b6_dB_world_map_palette_lib	; $8B
		FILE_IDX	$A,_bA_d14_chests_count_list					; $B6
		FILE_IDX	$A,_bA_d15_chests_content_list					; $B7
;
; then indirectly used subs
;
		FILE_IDX	$2,_b2_s3					; $62, used indirectly in sub_6AA34
		FILE_IDX	$2,_b2_s4					; $63, used indirectly in sub_6AA38
		FILE_IDX	$2,_b2_s5					; $64, used indirectly in sub_6AA3C
		FILE_IDX	$7,_b7_sF_player_log_read	; $167, used indirectly from _sys_safe_select
		FILE_IDX	$7,_b7_s1B					; $F6, used indirectly
		FILE_IDX	$C,_bC_s15					; $C9, used indirectly
		FILE_IDX	$C,_bC_s16					; $CA, used indirectly
		FILE_IDX	$C,_bC_s18					; $CF, used indirectly
		FILE_IDX	$C,_bC_s1C					; $F3, used indirectly
		FILE_IDX	$C,_bC_s2C					; $FE, used indirectly
		FILE_IDX	$C,_bC_s2D					; $E2, used indirectly
		FILE_IDX	$C,_bC_s38					; $FA
		FILE_IDX	$D,_bD_s19					; $FD, copy of $133, used in _bC_s17_sys0_spr_effects_call, don't know why they need a second bank routine
;
; then SRAM shourtcuts
; WARNING! shrtcuts are copied to SRAM and used in the same order
; as them goes in this list, so when you change files order here
; make sure you change it in SRAM too, unless you do some automatic
; rearrangement script or remove this damn shortcuts and replace
; them with nice sexy direct links in system bank
;
		FILE_IDX	$0,_b0_s2_player_HP_read		; $23
		FILE_IDX	$0,_b0_s3_player_MHP_read	; $24
		FILE_IDX	$0,_b0_s4_player_HP_add			; $25
		FILE_IDX	$0,_b0_s5_player_HP_subtract	; $26
		FILE_IDX	$0,_b0_s6_player_MP_read					; $27
		FILE_IDX	$0,_b0_s7_player_MMP_read					; $28
		FILE_IDX	$0,_b0_s8_player_MP_add					; $29
		FILE_IDX	$0,_b0_s9_player_MP_subtract					; $2A
		FILE_IDX	$0,_b0_sB_player_MP_test					; $2C
		FILE_IDX	$0,_b0_sC_player_LV_read; $2D
		FILE_IDX	$0,_b0_sD_tavern_char_LV_read					; $2E
		FILE_IDX	$0,_b0_sE_player_STATUS_read					; $2F
		FILE_IDX	$0,_b0_sF_unassigned_formation_char_name_read					; $30
		FILE_IDX	$0,_b0_s10_tavern_char_name_read					; $31
		FILE_IDX	$0,_b0_s11_player_EffSTR_calc					; $32
		FILE_IDX	$0,_b0_s12_player_EffAGI_calc					; $33
		FILE_IDX	$0,_b0_s13_player_EffVIT_calc					; $34
		FILE_IDX	$0,_b0_s14_player_EffINT_calc					; $35
		FILE_IDX	$0,_b0_s15_player_EffLUCK_calc					; $36
		FILE_IDX	$0,_b0_s16_player_EffATK_calc					; $37
		FILE_IDX	$0,_b0_s17_player_rATK_read					; $38
		FILE_IDX	$0,_b0_s18_player_EffDEF_calc					; $39
		FILE_IDX	$0,_b0_s19_player_EXP_read					; $3A
		FILE_IDX	$0,_b0_s1A_player_EXP_add					; $3B
		FILE_IDX	$0,_b0_s1B_player_gold_read					; $3C
		FILE_IDX	$0,_b0_s1B_player_gold_add					; $3D
		FILE_IDX	$0,_b0_s1B_player_gold_subtract					; $3E
		FILE_IDX	$0,_b0_s1E_player_euipped_item_get					; $3F
		FILE_IDX	$0,_b0_s1F_player_weapon_get					; $40
		FILE_IDX	$0,_b0_s21_player_shield_get					; $41
		FILE_IDX	$0,_b0_s21_player_armor_get					; $42
		FILE_IDX	$0,_b0_s22_player_helm_get					; $43
		FILE_IDX	$0,_b0_s23_player_weapon_equip					; $44
		FILE_IDX	$0,_b0_s24_player_shield_equip					; $45
		FILE_IDX	$0,_b0_s25_player_armor_equip					; $46
		FILE_IDX	$0,_b0_s24_player_helm_equip					; $47
		FILE_IDX	$0,_b0_s28_player_inventory_item_get					; $49
		FILE_IDX	$0,_b0_s29_player_inventory_item_add					; $4A
		FILE_IDX	$0,_b0_s2A_player_inventory_item_remove					; $4B
		FILE_IDX	$0,_b0_s2B_is_players_owns_item					; $4C
		FILE_IDX	$0,_b0_s2C_player_CLASS_read	; $4D
		FILE_IDX	$0,_b0_s2E_tavern_char_CLASS_read					; $4F
		FILE_IDX	$0,_b0_s2F_player_gender_read					; $50
		FILE_IDX	$0,_b0_s30_tavern_char_gender_read					; $51
		FILE_IDX	$0,_b0_s31_get_party_chars_list					; $52
		FILE_IDX	$0,_b0_s32_get_tavern_chars_list					; $53
		FILE_IDX	$0,_b0_s33_count_non_dead_party_chars					; $54
		FILE_IDX	$0,_b0_s34_read_spell_related_data_byte					; $55
		FILE_IDX	$0,_b0_s35					; $56
		FILE_IDX	$0,_b0_s37					; $58
		FILE_IDX	$0,_b0_s38					; $59
		FILE_IDX	$0,_b0_s39					; $5A
		FILE_IDX	$0,_b0_s3A_players_data_swap					; $5B
		FILE_IDX	$0,_b0_s3B_players_data_swap_in_battle					; $5C
;
; the rest of the records list, used only in BRK instructions, no matter
; what sys page they will be
;
		FILE_IDX	$0,_b0_s0_world_map_random_enounter_test	; $67 _b0_s0_world_map_random_enounter_test
		FILE_IDX	$0,_b0_s1_battle_typeA_launch					; $14E
		FILE_IDX	$0,_b0_s3C_get_free_inventory_slot					; $68
		FILE_IDX	$0,_b0_s3D_player_remove_poison_status					; $7A
		FILE_IDX	$0,_b0_s3D_player_remove_death_status					; $7B
		FILE_IDX	$0,_b0_s45_check_if_item_equipped					; $9C
		FILE_IDX	$0,_b0_s46_players_level_up_test					; $A9
		FILE_IDX	$0,_b0_s47_players_next_EXP_calc					; $AA
		FILE_IDX	$0,_b0_s48_get_count_returnable_locations					; $110
		FILE_IDX	$0,_b0_s49_set_returnable_locations_bit					; $111
		FILE_IDX	$0,_b0_s4D_is_anybody_owns_item					; $12C
		FILE_IDX	$0,_b0_s4E_get_anybody_alone_temporary					; $145
		FILE_IDX	$0,_b0_s4F_return_party_members					; $146
		FILE_IDX	$0,_b0_s50_players_item_buffs_refresh					; $149
		FILE_IDX	$0,_b0_s52_battle_typeFF_launch					; $14D
		FILE_IDX	$0,_b0_s53_random_encounter_select					; $14F
		FILE_IDX	$0,_b0_s54_heal_us_all_max					; $155
		FILE_IDX	$0,_b0_s55_test_spell_allow_location					; $173
		FILE_IDX	$0,_b0_s56_get_hero_alone_temporary					; $17B
		FILE_IDX	$0,_b0_s5B_run_command_spell					; $E4
		FILE_IDX	$0,_b0_s5C_player_inventory_search_for_cursed_item					; $129
		FILE_IDX	$0,_b0_s5D_run_command_item_use					; $EC
		FILE_IDX	$0,_b0_s5E_check_if_item_can_be_equipped					; $108
		FILE_IDX	$0,_b0_s5E_check_if_item_can_be_used					; $109
		FILE_IDX	$0,_b0_s60_get_item_type					; $10A
		FILE_IDX	$0,_b0_s61_sram_shortcuts_init	; $122
		FILE_IDX	$0,_b0_s62					; $12A
		FILE_IDX	$0,_b0_s63_player_unequip_all_type_items					; $130
		FILE_IDX	$0,_b0_s64_respawn_at_the_king					; $12E
		FILE_IDX	$0,_b0_s65_ram_clear_game_vars_init					; $163
		FILE_IDX	$0,_b0_s66_byte_6D40_clear					; $164
		FILE_IDX	$0,_b0_s67_mysterious_hat_mp_modifier					; $199

		FILE_IDX	$1,_b1_s9					; $D8
		FILE_IDX	$1,_b1_sA					; $D9
		FILE_IDX	$1,_b1_sB					; $DA
		FILE_IDX	$1,_b1_sC					; $DB
		FILE_IDX	$1,_b1_sD_post_win_battle_handler					; $DC
		FILE_IDX	$1,_b1_sE_player_class_change_stats_reset					; $13F
		FILE_IDX	$1,_b1_s14					; $114
		FILE_IDX	$1,_b1_s15					; $115
		FILE_IDX	$1,_b1_s16					; $116
		FILE_IDX	$1,_b1_s17					; $117

		FILE_IDX	$2,_b2_s0					; $5F
		FILE_IDX	$2,_b2_s2					; $61
		FILE_IDX	$2,_b2_s6_screen_damage_shake	; $65
		FILE_IDX	$2,_b2_s7_screen_spell_blink	; $66
		FILE_IDX	$2,_b2_s8_screen_hit_blink	; $EA
		FILE_IDX	$2,_b2_s9					; $CB
		FILE_IDX	$2,_b2_sA					; $69
		FILE_IDX	$2,_b2_sB					; $79
		FILE_IDX	$2,_b2_sC					; $A4
		FILE_IDX	$2,_b2_sD					; $186
		FILE_IDX	$2,_b2_sE					; $198

		FILE_IDX	$4,_b4_s0_type00_battle_mode_handler					; $6B
		FILE_IDX	$4,_b4_s1					; $6C
		FILE_IDX	$4,_b4_s2					; $6D
		FILE_IDX	$4,_b4_s3					; $6E
		FILE_IDX	$4,_b4_s5_do_message_speed_delay	; $70
		FILE_IDX	$4,_b4_s6_wndBTL_STAT					; $71
		FILE_IDX	$4,_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress	; $73
		FILE_IDX	$4,_b4_sA_clear_chatbox					; $75
		FILE_IDX	$4,_b4_sC					; $77
		FILE_IDX	$4,_b4_sE					; $A7
		FILE_IDX	$4,_b4_sF_rand_mul_A					; $7C
		FILE_IDX	$4,_b4_s10					; $B0
		FILE_IDX	$4,_b4_s12					; $B1
		FILE_IDX	$4,_b4_s13					; $B3
		FILE_IDX	$4,_b4_s14					; $B4
		FILE_IDX	$4,_b4_s16_do_half_message_speed_delay	; $D0
		FILE_IDX	$4,_b4_s17					; $D1
		FILE_IDX	$4,_b4_s18					; $D2
		FILE_IDX	$4,_b4_s19_heal_enemy					; $D3
		FILE_IDX	$4,_b4_s1A_status_pal_adjust_and_update					; $D4
		FILE_IDX	$4,_b4_s1B					; $D5
		FILE_IDX	$4,_b4_s1E_healing_randrange					; $ED
		FILE_IDX	$4,_b4_s1F					; $EE
		FILE_IDX	$4,_b4_s20					; $EF
		FILE_IDX	$4,_b4_s21_message_half_delay_or_wait_for_keypress	; $131
		FILE_IDX	$4,_b4_s23					; $154
		FILE_IDX	$4,_b4_s24_type80_battle_mode_handler					; $15C
		FILE_IDX	$4,_b4_s25_typeC0_battle_mode_handler					; $15D
		FILE_IDX	$4,_b4_s26					; $180
		FILE_IDX	$4,_b4_s27					; $19D
		FILE_IDX	$4,_b4_s28					; $19E
		FILE_IDX	$4,_b4_s29					; $19F
		FILE_IDX	$4,_b4_s2A					; $1A0
		FILE_IDX	$4,_b4_s2B_emove_stage2_02_through_06_attacks					; $1A1

		FILE_IDX	$5,_b5_s3					; $99
		FILE_IDX	$5,_b5_s4					; $13
		FILE_IDX	$5,_b5_s5_mirror_of_ra_trigger_on					; $156
		FILE_IDX	$5,_b5_s7					; $12
		FILE_IDX	$5,_b5_s8					; $179
		FILE_IDX	$5,_b5_s9					; $F1
		FILE_IDX	$5,_b5_sA					; $F2
		FILE_IDX	$5,_b5_sB_ppu_font_load	; $15F

		FILE_IDX	$6,_b6_s6_spell_return_use					; $112
		FILE_IDX	$6,_b6_s8_world_map_pal_update	; $88
		FILE_IDX	$6,_b6_sC_spell_outside_use					; $C4
		FILE_IDX	$6,_b6_sD_spell_invisible_use					; $C5
		FILE_IDX	$6,_b6_sE_item_invisibility_herb_use					; $C6
		FILE_IDX	$6,_b6_sF_spell_stepguard_use					; $C7
		FILE_IDX	$6,_b6_s10_water_blaster_npc_anim					; $DE
		FILE_IDX	$6,_b6_s11_item_locket_of_love_use					; $E3
		FILE_IDX	$6,_b6_s12_item_wakeup_powder_use					; $142
		FILE_IDX	$6,_b6_s13					; $153
		FILE_IDX	$6,_b6_s14_name_entry_screen	; $161
		FILE_IDX	$6,_b6_s15_item_staff_of_change_use					; $16E
		FILE_IDX	$6,_b6_s16_tavern_character_registration					; $185
		FILE_IDX	$6,_b6_s17_newtown_start_build_town_anim					; $105
		FILE_IDX	$6,_b6_s18_guard_of_meteorite_armband_show_hide					; $17F
		FILE_IDX	$6,_b6_s19_dragon_queen_to_egg_transition_anim					; $181
		FILE_IDX	$6,_b6_s1A_orb_pedestal_fire_start_anim					; $194
		FILE_IDX	$6,_b6_s1B_interrupted_baramos_defeat_celebration_anim					; $189
		FILE_IDX	$6,_b6_s1B_reinit_after_zoma_voice					; $188
		FILE_IDX	$6,_b6_s1D_hero_rest_at_home_anim					; $187
		FILE_IDX	$6,_b6_s1E_formation_change_handler					; $196
		FILE_IDX	$6,_b6_s1F_item_rainbow_drop_use					; $BD
		FILE_IDX	$6,_b6_s20_player_name_verify	; $19A

		FILE_IDX	$7,_b7_s8_ppu_screen_clear_and_init					; $19
		FILE_IDX	$7,_b7_sA_sram_test_and_init	; $162
		FILE_IDX	$7,_b7_sD_save_data					; $165
		FILE_IDX	$7,_b7_sE_player_log_list	; $166
		FILE_IDX	$7,_b7_s10_player_data_register					; $168
		FILE_IDX	$7,_b7_s11					; $169
		FILE_IDX	$7,_b7_s12					; $16A
		FILE_IDX	$7,_b7_s13					; $16B
		FILE_IDX	$7,_b7_s14					; $16C
		FILE_IDX	$7,_b7_s15					; $16F
		FILE_IDX	$7,_b7_s19					; $17C
		FILE_IDX	$7,_b7_s1A					; $17E
		FILE_IDX	$7,_b7_s1C					; $10C
		FILE_IDX	$7,_b7_s1D					; $195

		FILE_IDX	$A,_bA_s1					; $10
		FILE_IDX	$A,_bA_s2					; $19B
		FILE_IDX	$A,_bA_s3					; $19C
		FILE_IDX	$A,_bA_s4_div24_to_8		; $1A2
		FILE_IDX	$A,_bA_s6					; $1A4
		FILE_IDX	$A,_bA_s8_ball_of_light_fx					; $178
		FILE_IDX	$A,_bA_sA					; $E5
		FILE_IDX	$A,_bA_sB					; $197
		FILE_IDX	$A,_bA_sC					; $8C
		FILE_IDX	$A,_bA_sD					; $8D
		FILE_IDX	$A,_bA_sE					; $1A6
		FILE_IDX	$A,_bA_sF					; $160
		FILE_IDX	$A,_bA_s10					; $175
		FILE_IDX	$A,_bA_s11					; $176
		FILE_IDX	$A,_bA_s12					; $10B
		FILE_IDX	$A,_bA_s16					; $1A8
		FILE_IDX	$A,_bA_s17					; $1A9

		FILE_IDX	$B,_bB_s2_apu_init					; $9F
		FILE_IDX	$B,_bB_s3_apu_load			; $A0
		FILE_IDX	$B,_bB_s4_apu_set_flag0					; $A1
		FILE_IDX	$B,_bB_s5_apu_unk					; $A2
		FILE_IDX	$B,_bB_s5_apu_flag1					; $A5
		FILE_IDX	$B,_bB_s7_apu_wait					; $F0

		FILE_IDX	$C,_bC_s0_npc_anim_script_init	; $97
		FILE_IDX	$C,_bC_s1					; $157
		FILE_IDX	$C,_bC_s2					; $5E
		FILE_IDX	$C,_bC_s3_refresh_standing_tile					; $82
		FILE_IDX	$C,_bC_s4					; $83
		FILE_IDX	$C,_bC_s5					; $84
		FILE_IDX	$C,_bC_s6					; $85
		FILE_IDX	$C,_bC_s9					; $9B
		FILE_IDX	$C,_bC_sA					; $9D
		FILE_IDX	$C,_bC_sB					; $172
		FILE_IDX	$C,_bC_sC_item_echoing_flute_use					; $16D
		FILE_IDX	$C,_bC_sD_item_thief_key_use					; $B8
		FILE_IDX	$C,_bC_sE_item_magic_key_use					; $B9
		FILE_IDX	$C,_bC_sF_item_final_key_use					; $BA
		FILE_IDX	$C,_bC_s10_spell_daynight					; $BB
		FILE_IDX	$C,_bC_s11_item_lamp_of_darkness_use					; $BC
		FILE_IDX	$C,_bC_s12_sleep_X_sync_50		; $101
		FILE_IDX	$C,_bC_s13_item_magic_ball_use					; $BE
		FILE_IDX	$C,_bC_s14					; $C8
		FILE_IDX	$C,_bC_s17_sys0_spr_effects_call	; $CE
		FILE_IDX	$C,_bC_s19_turn_king_of_romaly_on_off					; $143
		FILE_IDX	$C,_bC_s1A					; $15B
		FILE_IDX	$C,_bC_s1B					; $15E
		FILE_IDX	$C,_bC_s1D_run_command_search					; $16
		FILE_IDX	$C,_bC_s1E_spell_x_ray_use					; $F5
		FILE_IDX	$C,_bC_s1F_get_chest_flag_and_idx					; $17
		FILE_IDX	$C,_bC_s20_warp_bE_sB_arg0					; $171
		FILE_IDX	$C,_bC_s21					; $F7
		FILE_IDX	$C,_bC_s22					; $F8
		FILE_IDX	$C,_bC_s23_test_orbs_collected_count					; $192
		FILE_IDX	$C,_bC_s24_volcano_event					; $139
		FILE_IDX	$C,_bC_s25					; $FB
		FILE_IDX	$C,_bC_s26_item_common_orbs_use					; $18A
		FILE_IDX	$C,_bC_s27					; $147
		FILE_IDX	$C,_bC_s28					; $148
		FILE_IDX	$C,_bC_s2A					; $100
		FILE_IDX	$C,_bC_s2B_item_fairy_flute_use					; $18E
		FILE_IDX	$C,_bC_s2E_sleep_X_sync_50_wait_50_or_skip	; $170
		FILE_IDX	$C,_bC_s2F					; $14A
		FILE_IDX	$C,_bC_s30					; $14B
		FILE_IDX	$C,_bC_s31					; $11D
		FILE_IDX	$C,_bC_s32					; $123
		FILE_IDX	$C,_bC_s33					; $126
		FILE_IDX	$C,_bC_s34					; $159
		FILE_IDX	$C,_bC_s35					; $15A
		FILE_IDX	$C,_bC_s37_get_special_areas_tile_idx					; $12B
		FILE_IDX	$C,_bC_s39					; $13A
		FILE_IDX	$C,_bC_s3A					; $13B
		FILE_IDX	$C,_bC_s3B					; $141

		FILE_IDX	$D,_bD_s2					; $0A
		FILE_IDX	$D,_bD_s3					; $0B
		FILE_IDX	$D,_bD_s4					; $0C
		FILE_IDX	$D,_bD_s5					; $0D
		FILE_IDX	$D,_bD_s6					; $0E
		FILE_IDX	$D,_bD_s7					; $0F
		FILE_IDX	$D,_bD_s9					; $11
		FILE_IDX	$D,_bD_sA					; $158
		FILE_IDX	$D,_bD_sB_get_hero_and_its_gender_and_status					; $17D
		FILE_IDX	$D,_bD_sC					; $183
		FILE_IDX	$D,_bD_sD					; $DD
		FILE_IDX	$D,_bD_sE					; $106
		FILE_IDX	$D,_bD_s10					; $184
		FILE_IDX	$D,_bD_s11_restore_party_MP					; $18B
		FILE_IDX	$D,_bD_s12					; $102
		FILE_IDX	$D,_bD_s13					; $103
		FILE_IDX	$D,_bD_s14					; $10D
		FILE_IDX	$D,_bD_s15					; $10E
		FILE_IDX	$D,_bD_s16_general_speak_with_npc					; $127
		FILE_IDX	$D,_bD_s17_search_vault_for_item					; $128
		FILE_IDX	$D,_bD_s18					; $132
		FILE_IDX	$D,_bD_s1A					; $134
		FILE_IDX	$D,_bD_s1B					; $135
		FILE_IDX	$D,_bD_s1C					; $136
		FILE_IDX	$D,_bD_s1D					; $137
		FILE_IDX	$D,_bD_s1E					; $138
		FILE_IDX	$D,_bD_s1F_get_vault_items_count					; $13C
		FILE_IDX	$D,_bD_s20_npc_hndl31		; $190
		FILE_IDX	$D,_bD_s21					; $13E
		FILE_IDX	$D,_bD_s22_se_wait_and_map_music_start					; $144
		FILE_IDX	$D,_bD_s23					; $18C
		FILE_IDX	$D,_bD_s24					; $18D
		FILE_IDX	$D,_bD_s26_get_first_live_player_with_no_NM_status					; $12D
		FILE_IDX	$D,_bD_s27_give_item_to_player_msg1					; $A3
		FILE_IDX	$D,_bD_s28_frame_palette_by_status_adjust	; $12F
		FILE_IDX	$D,_bD_s29					; $17A

		FILE_IDX	$E,_bE_s0_display_window_ex					; $00
		FILE_IDX	$E,_bE_s1_MainLoopCheckAButton					; $01
		FILE_IDX	$E,_bE_s2					; $02
		FILE_IDX	$E,_bE_s3					; $03
		FILE_IDX	$E,_bE_s4_msg_m00			; $04
		FILE_IDX	$E,_bE_s5					; $05
		FILE_IDX	$E,_bE_s6_msg_mFF			; $06
		FILE_IDX	$E,_bE_s9					; $09
		FILE_IDX	$E,_bE_sB					; $1F
		FILE_IDX	$E,_bE_sC_display_window					; $20
		FILE_IDX	$E,_bE_sD					; $21
		FILE_IDX	$E,_bE_sE					; $A8
		FILE_IDX	$E,_bE_sF					; $121
		FILE_IDX	$E,_bE_s10					; $124
		FILE_IDX	$E,_bE_s11					; $193
		FILE_IDX	$E,_bE_s12					; $119
		FILE_IDX	$E,_bE_s13					; $11A
		FILE_IDX	$E,_bE_s14					; $11B
		FILE_IDX	$E,_bE_s16					; $11E
		FILE_IDX	$E,_bE_s18					; $151
		FILE_IDX	$E,_bE_s19					; $AC
		FILE_IDX	$E,_bE_s1A					; $AD
		FILE_IDX	$E,_bE_s1B					; $F9
		FILE_IDX	$E,_bE_s1C_yes_or_no_question					; $120
		FILE_IDX	$E,_bE_s1D_get_map_buf_end_ptr					; $AB
		FILE_IDX	$E,_bE_s20_decode_map_ptr_to_XY					; $AE
		FILE_IDX	$E,_bE_s21					; $AF
		FILE_IDX	$E,_bE_s22					; $BF
		FILE_IDX	$E,_bE_s23					; $C0
		FILE_IDX	$E,_bE_s24					; $C1
		FILE_IDX	$E,_bE_s25					; $C2
		FILE_IDX	$E,_bE_s26					; $C3
		FILE_IDX	$E,_bE_s2E_special_map_actions					; $E6
		FILE_IDX	$E,_bE_s2F					; $E7
		FILE_IDX	$E,_bE_s30					; $E8
		FILE_IDX	$E,_bE_s31_get_map_music_number					; $E9
		FILE_IDX	$E,_bE_s32					; $EB
		FILE_IDX	$E,_bE_s33					; $F4
		FILE_IDX	$E,_bE_s34					; $125
		FILE_IDX	$E,_bE_s36					; $150
		FILE_IDX	$E,_bE_s38_print_char_force_dequeue					; $152

; now we can add a higher bank routines here in the common list
;
		FILE_IDX	$7,_b16_s0_location_palette_setup					; $1AA, moved to bank 07
		FILE_IDX	$17,_b17_s0_copyrights_screen	; $1AB
		FILE_IDX	$17,_b17_s1_title_screen	; $1AC
		FILE_IDX	$18,_b18_s0_intro_animation	; $1AD
		FILE_IDX	$18,_b18_s1					; $1AE
		FILE_IDX	$19,_b19_s0					; $1AF
		FILE_IDX	$1A,_b1A_s0					; $1B0
		FILE_IDX	$1,_b1B_s0					; $1B1, moved to bank 01

; == removed unused, unneeded or empty filesystem entries
;
;		.BYTE	$0,$0A						; $2B _b0_sA_player_MP_set_sero, never used with SRAM or BRK
;		.BYTE	$0,$27						; $48 _player_equip_item, used only directly, no SRAM or BRK
;		.BYTE	$0,$2D						; $4E _b0_s2D, copy of $4D, unused anymore
;		.BYTE	$0,$26						; $57 _b0_s36_read_spell_related_data_byte, exact copy of _b0_s34
;		.BYTE	$0,$40						; $8E _b0_d40_weapon_power_list, no use here
;		.BYTE	$0,$41						; $8F _b0_d41_equip_list, no use here
;		.BYTE	$0,$43						; $6A _b0_d43_enemies_lib, not used anymore
;		.BYTE	$0,$4C						; $CC, bank 00, idx 4c, empty
;		.BYTE	$0,$4D						; $CD _b0_s4D_is_anybody_owns_item, unused copy of $12C
;		.BYTE	$0,$51						; $14C _b0_s51_wrapper_for_b1B_s0, not used anymore wrapper
;		.BYTE	$0,$5A						; $E1 _b0_d5A_common_spell_related_data04, no use here
;		.BYTE	$1,  1						; $9E, bank 01, idx 01, empty
;		.BYTE	$1, $F						; $91, bank 01, idx 0F, empty
;		.BYTE	$1,$13						; $118 _b1_s13, never used
;		.BYTE	$2,  1						; $60 _b2_s1, no use here
;		.BYTE	$4,  4						; $6F _b4_s4, no use here
;		.BYTE	$4,  7						; $72 _b4_s7_display_window_ex_safe redundant, removed
;		.BYTE	$4,  9						; $74 _b4_s9_wrap_bE_s4_msg_m00_arg0, unused anymore
;		.BYTE	$4, $B						; $76 _b4_sB, no use here
;		.BYTE	$4,$15						; $B5 _b4_d15, no use here
;		.BYTE	$4,$1C						; $D6 _b4_s1C_incX_if_568_not_has_bit_20, moved to bank 1, no other banks used it
;		.BYTE	$4,$1D						; $D7 _b4_s1D_incX_if_more_than_one_char_in_party, not used anymore
;		.BYTE	$4,$22						; $140 _b4_s22, no use here, used directly
;		.BYTE	$5,  0						; $14 _b5_d0_world_map_data, not used anymore
;		.BYTE	$5,  1						; $15 _b5_d1_world_map_data, not used anymore
;		.BYTE	$5,  2						; $22 _b5_d2_world_map_data, not used anymore
;		.BYTE	$5,  8						; $13D _b5_s8, unused copy of $179
;		.BYTE	$5,  8						; $174 _b5_s6_ppu_send_8_empty_bytes, no use here, used directly
;		.BYTE	$6,  0						; $7D _b6_d0_ofs, not used anymore
;		.BYTE	$6,  1						; $7E _b6_d1_ofs, not used anymore
;		.BYTE	$6,  2						; $7F _b6_d2_ofs, not used anymore
;		.BYTE	$6,  3						; $80 _b6_d3_ofs, not used anymore
;		.BYTE	$6,  4						; $1D _b6_d4, not used anymore
;		.BYTE	$6,  5						; $5D _b6_d5, not used anymore
;		.BYTE	$6,  6						; $113 _b6_s6_spell_return_use, were used as copy of $112, removed
;		.BYTE	$6,$16						; $191 _b6_s16_tavern_character_registration, unused copy of $185
;		.BYTE	$7,  0						; $1E _b7_d0_map_data_lib_ofs, not used anymore
;		.BYTE	$7,  1						; $93 _b7_d1, unused
;		.BYTE	$7,  2						; $96 _b7_d2_ofs, unused
;		.BYTE	$7,  3						; $94 _b7_d3, unused
;		.BYTE	$7,  4						; $95 _b7_d4, unused
;		.BYTE	$7,  5						; $9A _b7_d5, unused
;		.BYTE	$7,$1E						; $1A7 _b7_s1E, no use here, used directly
;		.BYTE	$8,  0						; $18 bank 08, idx 00, empty
;		.BYTE	$A,  0						; $1A bank 0a, idx 00, empty
;		.BYTE	$A,  1						; $1B _bA_s1, unused copy of _bA_s1
;		.BYTE	$A,  2						; $81 _bA_s2, unused copy of $19B
;		.BYTE	$A,  3						; $86 _bA_s3, unused copy of $19C
;		.BYTE	$A,  5						; $1A3 _bA_s5_add16_to_24, unused copy of $FC
;		.BYTE	$A,  5						; $FC _bA_s5_add16_to_24, unused
;		.BYTE	$A,  6						; $98 _bA_s6, unused copy of $1A4
;		.BYTE	$A,  7						; $1A5 _bA_s7_nullsub, unused
;		.BYTE	$A,  9						; $18F _bA_s9_nullsub, unused
;		.BYTE	$A,$36						; $177 _bC_s36, never used
;		.BYTE	$C,$26						; $10F _bC_s26_item_common_orbs_use, unused copy of $18A
;		.BYTE	$C,$29						; $104 _bC_s29, no use here
;		.BYTE	$D,  1						; $FF _bD_d1_location_npc_lists_lib_ofs, not used anymore
;		.BYTE	$D, $F						; $182 _bD_sF, no use here, used directly
;		.BYTE	$D,$19						; $133 _bD_s19 were used as copy of $FD
;		.BYTE	$E,  4						; $08 _bE_s4_msg_m00, were used as dupe of _bE_s4_msg_m00, removed
;		.BYTE	$E,  6						; $07 _bE_s6_msg_mFF, unused dupe of _bE_s6_msg_mFF
;		.BYTE	$E, $A						; $1C _bE_sA, no use here, moved to bank 0F, used directly
;		.BYTE	$E,$10						; $A6 _bE_s10, unused copy of $124
;		.BYTE	$E,$15						; $11C, bank 0E, idx 15, empty
;		.BYTE	$E,$1C						; $11F _bE_s1C_yes_or_no_question, different ptrs points to the same sub, the first never used
;		.BYTE	$E,$1E						; $87, bank 0e, idx 1E, empty
;		.BYTE	$E,$2B						; $107 _bE_s2B, never used
; ==

		ECHO "filesystem entries", [.-_sys_idx_lib]>>1

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
_sys_safe_select:
		TAY
		LDA		#0
		STA		word_4
		STA		word_4+1
		STA		word_6

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
_sys0_unsafe:
		LDA		#$4C
		STA		_tmp21
		LDX		#_tmp21+1
		JSR		_set_sys0_ptr_and_bank
		JMP		_tmp21

; =============== S U B	R O U T	I N E =======================================
_set_sys1_ptr_and_bank:
		TYA
		ASL
		TAY
		BCS		_set_sys1_ptr_and_bank_0
		LDA		_sys_idx_lib+513,Y
		PHA
		LDA		_sys_idx_lib+512,Y
		BCC		_set_sys_ptr_and_bank
_set_sys1_ptr_and_bank_0:
		LDA		_sys_idx_lib+769,Y
		PHA
		LDA		_sys_idx_lib+768,Y
		JMP		_set_sys_ptr_and_bank

; =============== S U B	R O U T	I N E =======================================
_set_sys0_ptr_and_bank:
		TYA
		ASL
		TAY
		BCS		_set_sys0_ptr_and_bank_0
		LDA		_sys_idx_lib+1,Y
		PHA
		LDA		_sys_idx_lib,Y
		BCC		_set_sys_ptr_and_bank
_set_sys0_ptr_and_bank_0:
		LDA		_sys_idx_lib+257,Y
		PHA
		LDA		_sys_idx_lib+256,Y

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
_sys_msg_m00_arg0:
		TYA
_wrap_msg_m00_arg0:
		LDX		#0
		BEQ		_wrap_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg1:
		TYA
_wrap_msg_m00_arg1:
		LDX		#1
		BNE		_wrap_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg2:
		TYA
_wrap_msg_m00_arg2:
		LDX		#2
		BNE		_wrap_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg3:
		TYA
_wrap_msg_m00_arg3:
		LDX		#3
		BNE		_wrap_msg_m00

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg4:
		TYA
_wrap_msg_m00_arg4:
		LDX		#4
		BNE		_wrap_msg_m00

; =============== S U B	R O U T	I N E =======================================
; remove this shit when make sure this FARX not needed at all
_sys_msg_m00_arg5_ex:
		TYA
		PHA
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		PLA
		TAY		; TODO: MASSSTEERR PLEEESE KILL ME....
_sys_msg_m00_arg5:
		TYA
_wrap_msg_m00_arg5:
		LDX		#5
		BNE		_wrap_msg_m00

; =============== S U B	R O U T	I N E =======================================
; remove this shit when make sure this FARX not needed at all
_sys_msg_m00_arg6_ex:
		TYA
		PHA
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		PLA
		TAY		; TODO: MASSSTEERR PLEEESE KILL ME....
_sys_msg_m00_arg6:
		TYA
_wrap_msg_m00_arg6:
		LDX		#6
		BNE		_wrap_msg_m00

; =============== S U B	R O U T	I N E =======================================
; remove this shit when make sure this FARX not needed at all
_sys_msg_m00_arg7_ex:
		TYA
		PHA
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		PLA
		TAY		; TODO: MASSSTEERR PLEEESE KILL ME....
_sys_msg_m00_arg7:
		TYA
_wrap_msg_m00_arg7:
		LDX		#7

; =============== S U B	R O U T	I N E =======================================
_wrap_msg_m00:
		FARX	_bE_s4_msg_m00
		RTS

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg0_break:
		TYA
_wrap_msg_m00_arg0_break:
		LDX		#0
		BEQ		_wrap_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg1_break:
		TYA
_wrap_msg_m00_arg1_break:
		LDX		#1
		BNE		_wrap_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg2_break:
		TYA
_wrap_msg_m00_arg2_break:
		LDX		#2
		BNE		_wrap_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg3_break:
		TYA
_wrap_msg_m00_arg3_break:
		LDX		#3
		BNE		_wrap_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg4_break:
		TYA
_wrap_msg_m00_arg4_break:
		LDX		#4
		BNE		_wrap_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg5_break_ex:
		TYA
		PHA
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		PLA
		TAY		; TODO: MASSSTEERR PLEEESE KILL ME....
_sys_msg_m00_arg5_break:
		TYA
_wrap_msg_m00_arg5_break:
		LDX		#5
		BNE		_wrap_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
; remove this shit when make sure this FARX not needed at all
_sys_msg_m00_arg6_break_ex:
		TYA
		PHA
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		PLA
		TAY		; TODO: MASSSTEERR PLEEESE KILL ME....
_sys_msg_m00_arg6_break:
		TYA
_wrap_msg_m00_arg6_break:
		LDX		#6
		BNE		_wrap_msg_m00_break

; =============== S U B	R O U T	I N E =======================================
_sys_msg_m00_arg7_break_ex:
		TYA
		PHA
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		PLA
		TAY		; TODO: MASSSTEERR PLEEESE KILL ME.... or optimize with free tmp var
_sys_msg_m00_arg7_break:
		TYA
_wrap_msg_m00_arg7_break:
		LDX		#7

; =============== S U B	R O U T	I N E =======================================
_wrap_msg_m00_break:
		FARX	_bE_s4_msg_m00
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_display_window:
		TYA
		FARX	_bE_sC_display_window
		RTS

; =============== S U B	R O U T	I N E =======================================
_display_window_ex:
		TYA
		FARX	_bE_s0_display_window_ex
		RTS

; =============== S U B	R O U T	I N E =======================================
; SYSX opcode shortcut for _apu_load for playing sounds and music
; when the sound index is fixed it's hardcoded to this 3-byte far call
; in other cases direct FARX call is used with argument in A register
; sometimes, the FARX opcode is used even if IDX is fixed, messy...
;
_apu_load:
		TYA
		FARX	_bB_s3_apu_load
		RTS

END_OF_SHARED_ORG = .