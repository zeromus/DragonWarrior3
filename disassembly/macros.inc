SYSTEM_SHARED_ORG	=	$C000
SYSTEM_FOOTER_ORG	=	$FF90
SYSTEM_DPCM_ORG     =   $F000
SYSCALL_PTR_ORG     =   $8000
SAFE_STUB_ORG		=   $BFD8

DAYNIGHT_CYCLE_NOON = $3D
DAYNIGHT_CYCLE_BEGIN_NIGHT = $78
DAYNIGHT_CYCLE_MIDNIGHT = $97
DAYNIGHT_CYCLE_TOTAL = $CC ; never exceeds CB

; == FONTS ==

_nulltile = $00
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
; strike
_strk = $58
; apostrophe right up
_apa = $62
; arrow
_arrow = $64
; apostrophe left up
_apu = $66
; apostrophe left down
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
; when textbox is waiting for user to scroll
_downarrow = $74
; colon
_col = $75
; dot dot
_ddt = $76

; == SPECIAL CODES ==

_herhis = $B0
_herhimself = $B1
_heshe = $B2
_himher = $B3
_if_plural = $C0
_idx = $F2
_item = $F4
_name = $F5
_number = $F8
_hero = $F9

; == OPCODES ==

	MAC	SAFE_STUB
		SEI
		INC	.1
		JMP	_RESET
.1:
		.BYTE	$80
		.BYTE	"DRAGON WARRIOR "
		.BYTE	$33
		.WORD	$FFFF
		.WORD	  0
		.BYTE	$48
		.BYTE	  4
		.BYTE	  1
		.BYTE	 $F
		.BYTE	  7
		.BYTE	$9D
		.WORD	SAFE_STUB_ORG
		.WORD	SAFE_STUB_ORG
		.WORD	SAFE_STUB_ORG
	ENDM

	; to make sure that you won't use different types of indexes in wrong macroses
	; every different macros shuold use a different type of indexes now
	; _pidx - is for index of routine in particular bank ($8000 base)
	; _fidx - index of the filesystem entry
	; _sidx - index of the system routine offset (already >>1 to simplify calculations)

	MAC PTR_IDX
{1}_pidx	EQU	[[. - SYSCALL_PTR_ORG] >> 1]
		.WORD	{1}
	ENDM
	
	MAC FILE_IDX
{2}_fidx	EQU	[[. - _sys_idx_lib] >> 1]
		.BYTE	{1},{2}_pidx
	ENDM
	
	MAC	SYS_IDX
{1}_sidx	EQU	[. - _syscall_lib]
		.WORD	{1}
	ENDM

	; BRK opcodes are all the same, handled identically in all cases
	; every BRK opcode is an system routine index + 8-bit argument passed to it
	; but with some assumptions we could use the same BRK opcodes for different
	; purposes, so:
	;
	; SYSX is a general purpose macros, used to call any defined system routine
	; (_sys_ prefix) and pass the 8-bit parameter to it
	;
	MAC SYSX
		BRK
		.BYTE	{2}
		.BYTE	[{1}_sidx & $FE]
	ENDM

	; FARX macros calls is a _sys routine which takes the 8-bit number
	; as an index of the file in filesystem and call the corresponding subroutine
	; parameters to the subroutines passed with registers A and X directly
	; althoug one such _sys routine can handle only 256 filesystem entries
	; but we not limited in a number of similar routines to be used, every
	; single routine may handle its own filesystem indexes range, so literally we
	; can have any amount of filesystem entries
	;
	MAC FARX
		BRK
		.BYTE	[[{1}_fidx] & $FF]
		.BYTE	[[{1}_fidx] >> 7] & 2]
	ENDM
	
	; MSGX macros correspond to the set of special _sys routines that displays
	; a messages in game. there are more than $700 different messages in this game
	; but we can pass only $100 at once in one such function, so we neet at least
	; 8 of each kind, that is no problem since maximum amount of _sys routines
	; here is 128
	;
	MAC	MSGX
		BRK
		.BYTE	[[{2}] & $FF]
		.BYTE	[[{1}_sidx + [[{2}] >> 7]] & $FE]
	ENDM
	
	INCLUDE "item_ids.inc"
	INCLUDE "class_ids.inc"
	INCLUDE "enemy_ids.inc"