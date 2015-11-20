
		ORG SYSTEM_FOOTER_ORG

; =============== S U B	R O U T	I N E =======================================
; SMALL	SHARED SYSTEM STUB FOR MMC1 BANK SWITCHING
sub_177F8E:
		JMP		_RESET

; =============== S U B	R O U T	I N E =======================================
_mmc1_prg_set:
		STA		_mmc_cur_prg_bank

; =============== S U B	R O U T	I N E =======================================
_mmc1_prg_cmd:
		PHA
		LDA		_cur_chr0_bank_prg_hi
		AND		#$EF
		STA		_cur_chr0_bank_prg_hi
		PLA
		PHA
		AND		#$10
		ORA		_cur_chr0_bank_prg_hi
		STA		_cur_chr0_bank_prg_hi
		PLA
		AND		#$F
		NOP
		NOP
_mmc1_prg_direct:
		STA		$FFFF
		LSR
		STA		$FFFF
		LSR
		STA		$FFFF
		LSR
		STA		$FFFF
		LSR
		STA		$FFFF
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
		NOP
		NOP
		RTS

		ORG SYSTEM_VECTORS_ORG

RESET:
		SEI
		INC		_mmc_reset_byte
		JMP		_RESET
_mmc_reset_byte:
		.BYTE $80
