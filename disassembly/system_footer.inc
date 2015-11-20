		
		ORG SYSTEM_FOOTER_ORG
		
; =============== S U B	R O U T	I N E =======================================
; SMALL	SHARED SYSTEM STUB FOR MMC1 BANK SWITCHING
sub_177F8E:
		JMP		_RESET

; =============== S U B	R O U T	I N E =======================================
_mmc1_prg_set:				; CODE XREF: sub_17415B+18-p
					; sub_17415B+5E-j _syscall_exec_safe+E-p
					; sub_1744E4+6-p sub_1744E4+F-p
					; _get_syscall_bank_and_ptr+2-p
					; _get_syscall0_bank_ptr_no_prg_change:loc_17456E-p
					; _get_syscall0_bank_ptr_no_prg_change+36-p
					; _get_syscall0_data_byte_Y+15-p
					; _get_syscall0_data_byte_X+17-p
					; _get_syscall0_data_cur_byte0+15-p
					; _get_syscall0_data_cur_byte1+15-p
					; _get_far_ptr_byte_safe+C-p
					; _get_far_ptr_byte_safe+1C-p
					; sub_174625+B-p sub_174625+1F-p
					; sub_174CBD+E-j sub_174CD5+A-j
					; sub_174CE2+17-p sub_174CFF+2-p
					; sub_174CFF+A-p sub_174D0D+2-p
					; sub_174D0D+A-p sub_174D1B+2-p
					; sub_174D26+2-p sub_174D31+2-p
					; sub_174D39+2-p sub_174D3F+2-p
					; sub_174D3F+B-p sub_174DF6+8-p
					; sub_174DF6+17-j sub_1750D0+23-p
					; sub_1750D0+12C-p sub_17530A+16-p
					; sub_17530A+1F-p sub_17542F+33-p
					; sub_175569+1E-p sub_175923+6-p
					; sub_17592E+9-p sub_1759B8+10-p
					; sub_175A32+2E-p sub_175A32+50-p
					; sub_175A32+A6-p sub_175AF7+2-p
					; sub_175B03+8-j
					; _mmc1_prg5_set_ppu_reset+2-p
					; sub_176305+AB-p sub_176305+166-j
					; sub_176678+4D-p sub_176678+63-p
					; _RESET+33-p _direct_calls+1D-p
					; _direct_calls+46-p
					; _get_msg_ptr_by_idx+7-p
					; _get_msg_ptr_by_idx+11-p
					; _get_msg_ptr_by_idx+38-j
					; sub_176C11+8-p sub_176C11+28-j
					; sub_176C80+6-p sub_176C80+16-j
					; sub_176C99+8-j sub_176CA4+A-p
					; sub_176CB4+2-p sub_176D3A+2-p
					; _bE_sA+A-p sub_177CFC+B-j
					; sub_177E23+2-p sub_177E23+A-p
					; sub_177EFC+85-j _b15_s0+12-P
		STA		_mmc_cur_prg_bank ; code used as ind data at e000

; =============== S U B	R O U T	I N E =======================================
_mmc1_prg_cmd:				; CODE XREF: NMI+17-p NMI+2A-p NMI+30-p
					; NMI+54-p
		PHA				; code used as ind data	at e000
		LDA		_cur_chr0_bank_prg_hi ;	code used as ind data at e000
		AND		#$EF       ; code used as ind data at e000
		STA		_cur_chr0_bank_prg_hi ;	code used as ind data at e000
		PLA				; code used as ind data	at e000
		PHA				; code used as ind data	at e000
		AND		#$10		; code used as ind data	at e000
		ORA		_cur_chr0_bank_prg_hi ;	code used as ind data at e000
		STA		_cur_chr0_bank_prg_hi ;	code used as ind data at e000
		PLA				; code used as ind data	at e000
		AND		#$F		; code used as ind data	at e000
		NOP				; code used as ind data	at e000
		NOP				; code used at e000
loc_177FAC:				; CODE XREF: sub_17690A+A-j
		STA		$FFFF	; code used at e000
		LSR		; code used at e000
		STA		$FFFF	; code used at e000
		LSR		; code used at e000
		STA		$FFFF	; code used at e000
		LSR		; code used at e000
		STA		$FFFF	; code used at e000
		LSR		; code used at e000
		STA		$FFFF	; code used at e000
		LDA		_cur_chr0_bank_prg_hi ;	code used at e000
		STA		$BFFF		; code used at e000
		LSR		; code used at e000
		STA		$BFFF		; code used at e000
		LSR		; code used at e000
		STA		$BFFF		; code used at e000
		LSR		; code used at e000
		STA		$BFFF		; code used at e000
		LSR		; code used at e000
		STA		$BFFF		; code used at e000
		NOP				; code used as ind data	at e000
		NOP				; code used as ind data	at e000
		RTS				; code used as ind data	at e000

		ORG SYSTEM_VECTORS_ORG
		
RESET:
		SEI
		INC		_mmc_reset_byte
		JMP		_RESET
_mmc_reset_byte:
		.BYTE $80
