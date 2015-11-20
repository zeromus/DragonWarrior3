
SYSTEM_SHARED_ORG	=	$C000
SYSTEM_FOOTER_ORG	=	$FF8E
SYSTEM_VECTORS_ORG  =   $FFD8
SYSTEM_DPCM_ORG     =   $F000
SYSCALL_PTR_ORG     =   $8000

; == FONTS ==

___ = $50
_  = $60
__ = $61
_0 = $01
_1 = $02
_2 = $03
_3 = $04
_4 = $05
_5 = $06
_6 = $07
_7 = $08
_8 = $09
_9 = $0A
_a = $0B
_b = $0C
_c = $0D
_d = $0E
_e = $0F
_f = $10
_g = $11
_h = $12
_i = $13
_j = $14
_k = $15
_l = $16
_m = $17
_n = $18
_o = $19
_p = $1A
_q = $1B
_r = $1C
_s = $1D
_t = $1E
_u = $1F
_v = $20
_w = $21
_x = $22
_y = $23
_z = $24

_A = $25
_B = $26
_C = $27
_D = $28
_E = $29
_F = $2A
_G = $2B
_H = $2C
_I = $2D
_J = $2E
_K = $2F
_L = $30
_M = $31
_N = $32
_O = $33
_P = $34
_Q = $35
_R = $36
_S = $37
_T = $38
_U = $39
_V = $3A
_W = $3B
_X = $3C
_Y = $3D
_Z = $3E
; rightmost dot
_ldt = $57
; apostrophe right up
_apa = $62
; arrow
_arrow = $64
; apostrophe left up
_apu = $66
; apostrope left down
_apd = $67
; apostrophe right down
_apo = $68
; semicolon
_smc = $69
_sem = $6A
_str = $6B
; leftmost dot
_dot = $6C
_que = $6F
_exc = $70
; colon
_col = $75
; dot dot
_ddt = $76

; == OPCODES ==

	MAC FAR
		BRK
		.BYTE	{1}
		.BYTE	{2}
	ENDM

	MAC PTR_IDX
		.BYTE	[[{1}_ptr-SYSCALL_PTR_ORG]>>1]
	ENDM
	
	MAC SYS_IDX
		IF [{1}_idx-_sys0_sub_idx_lib]&$FF00
			[{1}_idx-_sys0_sub_idx_lib-256]&FF
		ELSE
			[{1}_idx-_sys0_sub_idx_lib]
		ENDIF
	ENDM

	MAC FARX
		BRK
		.BYTE	[[{1}_idx-_sys0_sub_idx_lib]&$FF]
		.BYTE	[$07|[[[{1}_idx-_sys0_sub_idx_lib]>>4]&$10]]
	ENDM