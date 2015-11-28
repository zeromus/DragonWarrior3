
		ORG $8000

_txt_block1A:
_msg196:		.BYTE	_apu,_Y,_o,_u,_,_b,_e,_t,_t,_e,_r,_,_t,_u,_r,_n,_,_b,_a,_c,_k,_exc,_apd,$EF
_msg197:		.BYTE	_apu,_H,_o,_sem,_,_h,_o,_sem,_,_h,_o,_exc,_apd,$EB
				.BYTE	_apu,_I,_,_m,_u,_s,_t,_,_a,_c,_k,_n,_o,_w,_l,_e,_d,_g,_e,_,_y,_o,_u,_r,_,_s,_t,_r,_e,_n,_g,_t,_h,_,_o,_f,_,_w,_i,_l,_l,_smc,$FD,$EB
				.BYTE	_apu,_H,_o,_w,_e,_v,_e,_r,_sem,_,_r,_a,_s,_h,_n,_e,_s,_s,_,_b,_y,_,_i,_t,_s,_e,_l,_f,_,_c,_a,_n,_n,_o,_t,_,_b,_e,_,_s,_a,_i,_d,_,_t,_o,_,_b,_e,_,_c,_o,_u,_r,_a,_g,_e,_smc,$FD,$EB
				.BYTE	_apu,_I,_t,_,_i,_s,_,_a,_l,_s,_o,_,_n,_e,_c,_e,_s,_s,_a,_r,_y,_,_t,_o,_,_h,_a,_v,_e,_,_t,_h,_e,_,_a,_b,_i,_l,_i,_t,_y,_,_t,_o,_,_l,_i,_s,_t,_e,_n,_,_t,_o,_,_o,_t,_h,_e,_r,_s,_smc,$EF
_msg198:		.BYTE	_apu,_H,_i,_m,_i,_k,_o,_exc,$EB
				.BYTE	_Y,_o,_u,_,_m,_u,_s,_t,_,_t,_e,_n,_d,_,_t,_o,_,_y,_o,_u,_r,_,_i,_n,_j,_u,_r,_i,_e,_s,_,_a,_t,_,_o,_n,_c,_e,_exc,_apd,$FD,$EB
				.BYTE	_apu,_W,_h,_e,_r,_e,_v,_e,_r,_,_d,_i,_d,_,_y,_o,_u,_,_g,_e,_t,_,_i,_n,_t,_o,_,_s,_u,_c,_h,_,_a,_,_f,_i,_g,_h,_t,_que,_apd,$EF
_msg199:		.BYTE	_apu,_Q,_u,_i,_c,_k,_l,_y,_exc,_,_T,_o,_,_t,_h,_e,_,_k,_i,_n,_g,_exc,_apd,$EF
_msg19A:		.BYTE	_T,_h,_e,_,_e,_f,_f,_e,_c,_t,_,_o,_f,_,_t,_h,_e,_,_F,_a,_i,_r,_y,_,_W,_a,_t,_e,_r,_,_h,_a,_s,_,_r,_u,_n,_,_o,_u,_t,_dot,$EF
_msg19B:		.BYTE	_T,_h,_e,_,_e,_f,_f,_e,_c,_t,_,_o,_f,_,_R,_e,_p,_e,_l,_,_h,_a,_s,_,_r,_u,_n,_,_o,_u,_t,_dot,$EF
_msg19C:		.BYTE	_apu,_Y,_o,_u,_,_l,_i,_k,_e,_d,_,_i,_t,_sem,_,_h,_u,_h,_que,_,_I,_,_w,_a,_n,_t,_,_y,_o,_u,_,_t,_o,_,_t,_e,_l,_l,_,_m,_e,_,_a,_b,_o,_u,_t,_,_i,_t,_,_l,_a,_t,_e,_r,_smc,$EF
_msg19D:		.BYTE	_apu,_O,_o,_h,_exc,_,_N,_o,_exc,_,_T,_h,_a,_t,_apo,_s,_,_r,_i,_d,_i,_c,_u,_l,_o,_u,_s,_exc,_apd,$EF
_msg19E:		.BYTE	_apu,$F5,_exc,_apd,$EB
				.BYTE	_apu,_T,_h,_o,_u,_,_h,_a,_s,_t,_,_d,_e,_f,_e,_a,_t,_e,_d,_,_t,_h,_e,_,_M,_a,_s,_t,_e,_r,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_exc,_apd,$FD,$EB
				.BYTE	_apu,_M,_a,_y,_,_I,_,_o,_f,_f,_e,_r,_,_t,_h,_e,_e,_,_m,_y,_,_d,_e,_e,_p,_e,_s,_t,_,_g,_r,_a,_t,_i,_t,_u,_d,_e,_exc,_apd,$FD,$EB
				.BYTE	_apu,_D,_u,_e,_,_t,_o,_,_t,_h,_i,_n,_e,_,_e,_f,_f,_o,_r,_t,_s,_sem,_,_d,_a,_y,_,_h,_a,_s,_,_f,_i,_n,_a,_l,_l,_y,_,_d,_a,_w,_n,_e,_d,_,_a,_g,_a,_i,_n,_,_i,_n,_,_o,_u,_r,_,_c,_o,_u,_n,_t,_r,_y,_exc,_apd,$FD,$FF
_msg19F:		.BYTE	_apu,$F5,_exc,_apd,$EB
				.BYTE	_apu,_T,_h,_o,_u,_,_a,_r,_t,_,_a,_,_t,_r,_u,_e,_,_h,_e,_r,_o,_exc,_apd,$FD,$EB
				.BYTE	_apu,_I,_,_h,_e,_r,_e,_b,_y,_,_b,_e,_q,_u,_e,_a,_t,_h,_,_u,_n,_t,_o,_,_t,_h,_e,_e,_,_t,_h,_a,_t,_,_w,_h,_i,_c,_h,_,_i,_s,_,_o,_u,_r,_,_c,_o,_u,_n,_t,_r,_y,_apo,_s,_,_h,_i,_g,_h,_e,_s,_t,_,_h,_o,_n,_o,_r,_sem,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_t,_h,_e,_,_o,_r,_d,_e,_r,_,_o,_f,_,_E,_r,_d,_r,_i,_c,_k,_sem,_,_b,_e,_a,_r,_i,_n,_g,_,_w,_i,_t,_n,_e,_s,_s,_,_t,_o,_,_y,_o,_u,_r,_,_s,_t,_a,_t,_u,_s,_,_a,_s,_,_a,_,_t,_r,_u,_e,_,_h,_e,_r,_o,_exc,_apd,$FD,$FF
_msg1A0:		.BYTE	_apu,$F5,_sem,_,_u,_h,_sem,_,_I,_,_m,_e,_a,_n,_sem,_,_b,_r,_a,_v,_e,_,_H,_e,_r,_o,_,_o,_f,_,_E,_r,_d,_r,_i,_c,_k,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_o,_u,_,_w,_i,_l,_t,_,_f,_o,_r,_e,_v,_e,_r,_,_r,_e,_m,_a,_i,_n,_,_t,_h,_e,_,_s,_t,_u,_f,_f,_,_o,_f,_,_l,_e,_g,_e,_n,_d,_s,_,_o,_f,_,_t,_h,_e,_,_p,_e,_o,_p,_l,_e,_,_o,_f,_,_E,_r,_d,_r,_i,_c,_k,_exc,_apd,$EF
_msg1A1:		.BYTE	_apu,_A,_h,_e,_m,_exc,_,_S,_o,_,_t,_h,_o,_u,_,_w,_o,_u,_l,_d,_s,_t,_,_g,_o,_,_e,_a,_s,_t,_que,_apd,$EF
_msg1A2:		.BYTE	_apu,_A,_h,_e,_m,_exc,_,_I,_t,_,_i,_s,_,_t,_h,_e,_,_r,_e,_q,_u,_e,_s,_t,_,_o,_f,_,_t,_h,_e,_,_k,_i,_n,_g,_,_o,_f,_,_P,_o,_r,_t,_o,_g,_a,_exc,_apd,$EB
				.BYTE	_apu,_C,_o,_m,_e,_,_a,_l,_o,_n,_g,_,_w,_i,_t,_h,_,_m,_e,_,_t,_h,_e,_n,_exc,_apd,$EF
_msg1A3:		.BYTE	_apu,_W,_e,_l,_l,_,_t,_h,_e,_n,_sem,_,_t,_h,_e,_r,_e,_,_i,_s,_,_n,_o,_t,_h,_i,_n,_g,_,_I,_,_c,_a,_n,_,_d,_o,_,_f,_o,_r,_,_y,_o,_u,_smc,$EF
_msg1A4:		.BYTE	_apu,_A,_h,_e,_m,_exc,_,_W,_a,_i,_t,_,_t,_h,_e,_r,_e,_,_i,_f,_,_y,_o,_u,_,_p,_l,_e,_a,_s,_e,_exc,_apd,$EF
_msg1A5:		.BYTE	_apu,_V,_e,_r,_y,_,_w,_e,_l,_l,_dot,_,_C,_o,_m,_e,_,_t,_h,_i,_s,_,_w,_a,_y,_dot,_,_T,_h,_i,_s,_,_i,_s,_,_t,_h,_e,_,_s,_e,_c,_r,_e,_t,_,_p,_a,_s,_s,_a,_g,_e,_smc,$EF
_txt_block1B:
_msg1A6:		.BYTE	_L,_o,_o,_k,_exc,_,$F5,_,_h,_a,_s,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_t,_o,_,_l,_i,_f,_e,_exc,$EF
_msg1A7:		.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,$F5,_exc,_,_T,_h,_o,_u,_,_h,_a,_s,_t,_,_d,_e,_f,_e,_a,_t,_e,_d,_,_m,_e,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_B,_u,_t,_,_h,_e,_e,_d,_,_m,_y,_,_w,_o,_r,_d,_s,_dot,_,_S,_o,_,_l,_o,_n,_g,_,_a,_s,_,_b,_r,_i,_g,_h,_t,_n,_e,_s,_s,_,_e,_x,_i,_s,_t,_s,_sem,_,_s,_o,_,_d,_o,_t,_h,_,_t,_h,_e,_,_d,_a,_r,_k,_n,_e,_s,_s,_smc,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_v,_i,_s,_i,_o,_n,_,_I,_,_d,_o,_,_s,_e,_e,_ddt,_smc,$FD,$EB
				.BYTE	_apu,_F,_r,_o,_m,_,_d,_a,_r,_k,_n,_e,_s,_s,_,_d,_e,_e,_p,_sem,_,_o,_n,_e,_,_m,_o,_r,_e,_,_w,_i,_l,_l,_,_f,_o,_l,_l,_o,_w,_,_m,_e,_smc,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_B,_u,_t,_,_w,_h,_e,_n,_,_t,_h,_a,_t,_,_t,_i,_m,_e,_,_d,_o,_t,_h,_,_a,_r,_r,_i,_v,_e,_sem,_,_t,_h,_o,_u,_,_w,_i,_l,_t,_,_t,_o,_o,_,_h,_a,_v,_e,_,_a,_g,_e,_d,_,_a,_n,_d,_,_d,_i,_e,_d,_dot,_,_H,_e,_h,_sem,_,_h,_e,_h,_sem,_,_h,_e,_h,_h,_ddt,_A,_a,_r,_g,_h,_exc,_apd,$EF
_msg1A8:		.BYTE	_A,_,_s,_o,_u,_n,_d,_,_l,_i,_k,_e,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_,_c,_l,_o,_s,_i,_n,_g,_,_i,_s,_,_h,_e,_a,_r,_d,_,_f,_r,_o,_m,_,_u,_p,_,_i,_n,_,_t,_h,_e,_,_s,_k,_y,_dot,$EE
_msg1A9:		.BYTE	_T,_h,_e,_,_c,_a,_s,_k,_e,_t,_,_i,_s,_,_m,_a,_d,_e,_,_o,_f,_,_s,_t,_o,_n,_e,_dot,_,_T,_h,_e,_,_l,_i,_d,_,_i,_s,_,_t,_o,_o,_,_h,_e,_a,_v,_y,_,_t,_o,_,_o,_p,_e,_n,_dot,$EE
_msg1AA:		.BYTE	$FD,$EB
				.BYTE	_L,_o,_o,_k,_exc,_,_T,_h,_e,_r,_e,_,_i,_s,_,_a,_n,_,_i,_m,_a,_g,_e,_,_o,_f,_,_a,_,_s,_l,_e,_e,_p,_i,_n,_g,_,_m,_o,_n,_s,_t,_e,_r,_,_r,_e,_f,_l,_e,_c,_t,_e,_d,_,_i,_n,_,_t,_h,_e,_,_m,_i,_r,_r,_o,_r,_exc,$EF
_msg1AB:		.BYTE	_apu,_Y,_o,_u,_,_s,_a,_w,_,_m,_e,_que,_apd,$FD,$EB
				.BYTE	_apu,_C,_a,_c,_k,_l,_e,_sem,_,_c,_a,_c,_k,_l,_e,_sem,_,_c,_a,_c,_k,_l,_e,_exc,_,_N,_o,_w,_,_I,_,_w,_o,_n,_apo,_t,_,_l,_e,_t,_,_y,_o,_u,_,_g,_e,_t,_,_o,_u,_t,_,_a,_l,_i,_v,_e,_exc,_apd,$EF
_msg1AC:		.BYTE	_W,_o,_w,_exc,_,_T,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_,_i,_s,_,_a,_,_M,_i,_m,_i,_c,_exc,$EE
_msg1AD:		.BYTE	_W,_o,_w,_exc,_,_T,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_,_i,_s,_,_a,_,_M,_a,_n,_str,_E,_a,_t,_e,_r,_,_C,_h,_e,_s,_t,_exc,$EE
_msg1AE:		.BYTE	$F5,_,_p,_u,_s,_h,_e,_s,_,_t,_h,_e,_,_b,_u,_t,_t,_o,_n,_dot,$EE
_msg1AF:		.BYTE	_T,_h,_e,_,_S,_t,_a,_f,_f,_,_o,_f,_,_C,_h,_a,_n,_g,_e,_apo,_s,_,_e,_f,_f,_e,_c,_t,_,_w,_e,_a,_r,_s,_,_o,_f,_f,_dot,$EE
_msg1B0:		.BYTE	_apu,_A,_h,_exc,_,_I,_t,_apo,_s,_,_l,_i,_k,_e,_,_a,_,_d,_r,_e,_a,_m,_,_c,_o,_m,_e,_,_t,_r,_u,_e,_exc,_apd,$EB
				.BYTE	_apu,_Y,_o,_u,_,_h,_a,_v,_e,_,_b,_r,_o,_k,_e,_n,_,_t,_h,_e,_,_s,_e,_a,_l,_smc,$FD,$EB
				.BYTE	_apu,_I,_,_a,_m,_,_t,_h,_e,_,_s,_p,_i,_r,_i,_t,_sem,_,_R,_u,_b,_i,_s,_s,_sem,_,_w,_h,_o,_,_c,_r,_e,_a,_t,_e,_d,_,_t,_h,_i,_s,_,_l,_a,_n,_d,_,_o,_f,_,_A,_l,_e,_f,_g,_a,_r,_d,_smc,$FD,$EB
				.BYTE	_apu,_A,_s,_,_a,_,_t,_o,_k,_e,_n,_,_o,_f,_,_m,_y,_,_g,_r,_a,_t,_i,_t,_u,_d,_e,_sem,_,_I,_,_s,_h,_a,_l,_l,_,_g,_i,_v,_e,_,_y,_o,_u,_,_t,_h,_i,_s,_,_S,_a,_c,_r,_e,_d,_,_A,_m,_u,_l,_e,_t,_smc,$FD,$FF
_msg1B1:		.BYTE	_apu,_A,_n,_d,_,_i,_f,_,_y,_o,_u,_,_v,_a,_n,_q,_u,_i,_s,_h,_,_t,_h,_e,_,_M,_a,_s,_t,_e,_r,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_sem,_,_I,_,_s,_h,_a,_l,_l,_,_r,_e,_p,_a,_y,_,_m,_y,_,_d,_e,_b,_t,_,_o,_f,_,_g,_r,_a,_t,_i,_t,_u,_d,_e,_,_s,_o,_m,_e,_d,_a,_y,_smc,$FD,$EB
				.BYTE	_apu,_I,_,_a,_m,_,_t,_h,_e,_,_s,_p,_i,_r,_i,_t,_sem,_,_R,_u,_b,_i,_s,_s,_dot,_,_I,_,_y,_e,_a,_r,_n,_,_f,_o,_r,_,_t,_h,_e,_,_r,_e,_t,_u,_r,_n,_,_o,_f,_,_p,_e,_a,_c,_e,_f,_u,_l,_,_t,_i,_m,_e,_s,_,_t,_o,_,_t,_h,_i,_s,_,_c,_o,_u,_n,_t,_r,_y,_smc,$EF
_msg1B2:		.BYTE	_L,_o,_o,_k,_exc,_,_T,_h,_e,_r,_e,_apo,_s,_,_a,_,_w,_o,_m,_a,_n,_,_h,_i,_d,_i,_n,_g,_,_i,_n,_,_t,_h,_i,_s,_,_j,_a,_r,_exc,$EE
_msg1B3:		.BYTE	$EF
_msg1B4:		.BYTE	$EF
_msg1B5:		.BYTE	$EF
_txt_block1C:
_msg1B6:		.BYTE	$EF
_msg1B7:		.BYTE	$EF
_msg1B8:		.BYTE	$EF
_msg1B9:		.BYTE	$EF
_msg1BA:		.BYTE	$EF
_msg1BB:		.BYTE	$EF
_msg1BC:		.BYTE	$EF
_msg1BD:		.BYTE	$EF
_msg1BE:		.BYTE	$EF
_msg1BF:		.BYTE	$EF
_msg1C0:		.BYTE	$EF
_msg1C1:		.BYTE	$EF
_msg1C2:		.BYTE	$EF
_msg1C3:		.BYTE	$EF
_msg1C4:		.BYTE	$EF
_msg1C5:		.BYTE	$EF
_txt_block1D:
_msg1C6:		.BYTE	$EF
_msg1C7:		.BYTE	$EF
_msg1C8:		.BYTE	$EF
_msg1C9:		.BYTE	$EF
_msg1CA:		.BYTE	$EF
_msg1CB:		.BYTE	$EF
_msg1CC:		.BYTE	$EF
_msg1CD:		.BYTE	$EF
_msg1CE:		.BYTE	$EF
_msg1CF:		.BYTE	$EF
_msg1D0:		.BYTE	$EF
_msg1D1:		.BYTE	$EF
_msg1D2:		.BYTE	$EF
_msg1D3:		.BYTE	$EF
_msg1D4:		.BYTE	$EF
_msg1D5:		.BYTE	$EF
_txt_block1E:
_msg1D6:		.BYTE	$EF
_msg1D7:		.BYTE	$EF
_msg1D8:		.BYTE	$EF
_msg1D9:		.BYTE	$EF
_msg1DA:		.BYTE	$EF
_msg1DB:		.BYTE	$EF
_msg1DC:		.BYTE	$EF
_msg1DD:		.BYTE	$EF
_msg1DE:		.BYTE	$EF
_msg1DF:		.BYTE	$EF
_msg1E0:		.BYTE	$EF
_msg1E1:		.BYTE	$EF
_msg1E2:		.BYTE	$EF
_msg1E3:		.BYTE	$EF
_msg1E4:		.BYTE	$EF
_msg1E5:		.BYTE	$EF
_txt_block1F:
_msg1E6:		.BYTE	$EF
_msg1E7:		.BYTE	$EF
_msg1E8:		.BYTE	$EF
_msg1E9:		.BYTE	$EF
_msg1EA:		.BYTE	$EF
_msg1EB:		.BYTE	$EF
_msg1EC:		.BYTE	$EF
_msg1ED:		.BYTE	$EF
_msg1EE:		.BYTE	$EF
_msg1EF:		.BYTE	$EF
_msg1F0:		.BYTE	$EF
_msg1F1:		.BYTE	$EF
_msg1F2:		.BYTE	$EF
_msg1F3:		.BYTE	$EF
_msg1F4:		.BYTE	$EF
_msg1F5:		.BYTE	$EF
_txt_block20:
_msg1F6:		.BYTE	$EF
_msg1F7:		.BYTE	$EF
_msg1F8:		.BYTE	$EF
_msg1F9:		.BYTE	$EF
_msg1FA:		.BYTE	$EF
_msg1FB:		.BYTE	$EF
_msg1FC:		.BYTE	$EF
_msg1FD:		.BYTE	$EF
_msg1FE:		.BYTE	$EF
_msg1FF:		.BYTE	$EF
_msg200:		.BYTE	_apu,_A,_t,_,_y,_o,_u,_r,_,_s,_e,_r,_v,_i,_c,_e,_sem,_,_m,_y,_,_g,_o,_o,_d,_,_p,_e,_o,_p,_l,_e,_exc,$EB
				.BYTE	_H,_o,_w,_,_m,_a,_y,_,_I,_,_s,_e,_r,_v,_e,_,_y,_o,_u,_que,_apd,$FF
_msg201:		.BYTE	_apu,_W,_h,_a,_t,_,_i,_s,_,_i,_t,_,_t,_h,_a,_t,_,_y,_o,_u,_,_n,_e,_e,_d,_,_s,_o,_,_l,_a,_t,_e,_,_a,_t,_,_n,_i,_g,_h,_t,_que,_apd,$EF
_msg202:		.BYTE	_apu,_O,_h,_sem,_,_p,_o,_w,_e,_r,_s,_,_t,_h,_a,_t,_,_r,_e,_s,_i,_d,_e,_,_a,_b,_o,_v,_e,_exc,_,_I,_,_i,_n,_v,_o,_k,_e,_,_t,_h,_e,_e,_exc,_apd,$FD,$FF
_msg203:		.BYTE	$F5,_,_a,_c,_h,_i,_e,_v,_e,_s,_,_e,_n,_l,_i,_g,_h,_t,_e,_n,_m,_e,_n,_t,_,_a,_n,_d,_,_b,_e,_c,_o,_m,_e,_s,_,_a,_,_s,_a,_g,_e,_dot,$EF
_msg204:		.BYTE	_apu,_W,_e,_l,_l,_,_t,_h,_e,_n,_ddt,_dot,_,_t,_h,_i,_s,_,_o,_u,_g,_h,_t,_,_t,_o,_,_p,_u,_t,_,_s,_o,_m,_e,_,_s,_p,_a,_r,_k,_,_i,_n,_t,_o,_,_y,_o,_u,_smc,$FD,$EB
				.BYTE	_apu,_H,_e,_a,_a,_a,_h,_exc,_exc,_apd,$FD,$EF
_msg205:		.BYTE	_apu,_V,_e,_r,_y,_,_w,_e,_l,_l,_dot,_,_I,_,_w,_i,_l,_l,_,_r,_e,_c,_o,_r,_d,_,_y,_o,_u,_r,_,_c,_u,_r,_r,_e,_n,_t,_,_s,_t,_a,_t,_u,_s,_,_i,_n,_,_t,_h,_e,_,_I,_m,_p,_e,_r,_i,_a,_l,_,_S,_c,_r,_o,_l,_l,_s,_,_o,_f,_,_H,_o,_n,_o,_r,_que,_apd,$EF
_txt_block21:
_msg206:		.BYTE	_apu,_W,_e,_l,_c,_o,_m,_e,_,_t,_o,_,_t,_h,_e,_,_H,_o,_u,_s,_e,_,_o,_f,_,_H,_e,_a,_l,_i,_n,_g,_smc,$EF
_msg207:		.BYTE	_apu,_W,_h,_o,_,_i,_s,_,_t,_o,_,_b,_e,_,_t,_r,_e,_a,_t,_e,_d,_que,_apd,$EF
_msg208:		.BYTE	_apu,$F5,_,_i,_s,_,_n,_o,_t,_,_a,_f,_f,_l,_i,_c,_t,_e,_d,_,_b,_y,_,_p,_o,_i,_s,_o,_n,_exc,_apd,$FD,$FF
_msg209:		.BYTE	_apu,_T,_h,_e,_,_f,_e,_e,_,_i,_s,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_dot,$EB
				.BYTE	_W,_i,_l,_t,_,_t,_h,_o,_u,_,_p,_a,_y,_que,_apd,$EF
_msg20A:		.BYTE	_apu,_N,_o,_w,_,_I,_,_s,_h,_a,_l,_l,_,_a,_d,_m,_i,_n,_i,_s,_t,_e,_r,_,_t,_h,_e,_,_a,_n,_t,_i,_d,_o,_t,_e,_,_t,_o,_,$F5,_exc,_apd,$EF
_msg20B:		.BYTE	_apu,_W,_h,_o,_s,_e,_,_c,_u,_r,_s,_e,_,_i,_s,_,_t,_o,_,_b,_e,_,_r,_e,_m,_o,_v,_e,_d,_que,_apd,$EF
_msg20C:		.BYTE	_apu,$F5,_,_i,_s,_,_n,_o,_t,_,_a,_f,_f,_l,_i,_c,_t,_e,_d,_,_b,_y,_,_a,_,_c,_u,_r,_s,_e,_exc,_apd,$FD,$FF
_msg20D:		.BYTE	_apu,_P,_o,_w,_e,_r,_s,_,_a,_b,_o,_v,_e,_sem,_,_g,_r,_a,_n,_t,_,_u,_s,_,_t,_h,_y,_,_h,_e,_l,_p,_exc,$EB
				.BYTE	_R,_e,_m,_o,_v,_e,_,_t,_h,_i,_s,_,_a,_b,_o,_m,_i,_n,_a,_b,_l,_e,_,_c,_u,_r,_s,_e,_,_f,_r,_o,_m,_,$F5,_smc,$EF
_msg20E:		.BYTE	_apu,_W,_h,_o,_,_i,_s,_,_t,_o,_,_b,_e,_,_b,_r,_o,_u,_g,_h,_t,_,_b,_a,_c,_k,_,_t,_o,_,_l,_i,_f,_e,_que,_apd,$EF
_msg20F:		.BYTE	_apu,_S,_u,_r,_e,_l,_y,_,_y,_o,_u,_,_j,_e,_s,_t,_exc,_,$F5,_,_l,_i,_v,_e,_s,_exc,_apd,$FD,$FF
_msg210:		.BYTE	_apu,_I,_,_b,_e,_c,_k,_o,_n,_,_t,_h,_e,_,_s,_p,_i,_r,_i,_t,_,_o,_f,_,_t,_h,_y,_,_f,_a,_i,_t,_h,_f,_u,_l,_,_s,_e,_r,_v,_a,_n,_t,_sem,_,$F5,_sem,_,_r,_e,_t,_u,_r,_n,_,_f,_r,_o,_m,_,_i,_t,_s,_,_w,_a,_n,_d,_e,_r,_i,_n,_g,_s,_,_t,_o,_,_a,_g,_a,_i,_n,_,_r,_e,_s,_i,_d,_e,_,_h,_e,_r,_e,_exc,_apd,$EF
_msg211:		.BYTE	$EF
_msg212:		.BYTE	$EF
_msg213:		.BYTE	_apu,_T,_h,_e,_,_d,_o,_n,_a,_t,_i,_o,_n,_,_i,_s,_,_a,_,_t,_o,_k,_e,_n,_,_o,_f,_,_g,_r,_a,_t,_i,_t,_u,_d,_e,_,_a,_n,_d,_,_r,_e,_s,_p,_e,_c,_t,_exc,_,_I,_n,_g,_r,_a,_t,_e,_s,_exc,_,_Y,_o,_u,_,_s,_h,_o,_u,_l,_d,_,_b,_e,_,_a,_s,_h,_a,_m,_e,_d,_,_n,_o,_t,_,_t,_o,_,_g,_i,_v,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_exc,_apd,$FD,$FF
_msg214:		.BYTE	_apu,_O,_h,_sem,_,_I,_apo,_m,_,_s,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_I,_,_c,_a,_n,_,_s,_e,_e,_,_y,_o,_u,_,_d,_o,_n,_apo,_t,_,_h,_a,_v,_e,_,_e,_n,_o,_u,_g,_h,_,_m,_o,_n,_e,_y,_,_t,_o,_,_p,_a,_y,_,_f,_o,_r,_,_m,_y,_,_s,_e,_r,_v,_i,_c,_e,_s,_smc,$FD,$FF
_msg215:		.BYTE	_apu,_I,_s,_,_t,_h,_e,_r,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_que,_apd,$EF
_txt_block22:
_msg216:		.BYTE	_apu,_B,_e,_,_w,_e,_l,_l,_,_t,_h,_e,_n,_dot,_,_G,_o,_o,_d,_,_l,_u,_c,_k,_,_t,_o,_,_y,_o,_u,_exc,_apd,$EF
_msg217:		.BYTE	_apu,_G,_o,_o,_d,_,_a,_f,_t,_e,_r,_n,_o,_o,_n,_dot,_,_W,_e,_l,_c,_o,_m,_e,_,_t,_o,_,_t,_h,_e,_,_W,_a,_y,_f,_a,_r,_e,_r,_s,_,_I,_n,_n,_smc,$EF
_msg218:		.BYTE	_apu,_W,_e,_l,_c,_o,_m,_e,_,_t,_o,_,_t,_h,_e,_,_W,_a,_y,_f,_a,_r,_e,_r,_s,_,_I,_n,_n,_dot,_,_Y,_o,_u,_,_m,_u,_s,_t,_,_b,_e,_,_t,_i,_r,_e,_d,_,_f,_r,_o,_m,_,_y,_o,_u,_r,_,_l,_o,_n,_g,_,_j,_o,_u,_r,_n,_e,_y,_smc,$EF
_msg219:		.BYTE	$FD,$EB
				.BYTE	_apu,_O,_n,_e,_,_n,_i,_g,_h,_t,_apo,_s,_,_s,_t,_a,_y,_,_i,_s,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_dot,$EB
				.BYTE	_W,_o,_u,_l,_d,_s,_t,_,_t,_h,_o,_u,_,_b,_e,_d,_,_d,_o,_w,_n,_,_w,_i,_t,_h,_i,_n,_que,_apd,$EF
_msg21A:		.BYTE	_apu,_I,_,_a,_m,_,_v,_e,_r,_y,_,_s,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_t,_h,_y,_,_m,_o,_n,_e,_y,_,_d,_o,_t,_h,_,_n,_o,_t,_,_s,_u,_f,_f,_i,_c,_e,_smc,$FD,$FF
_msg21B:		.BYTE	_apu,_E,_n,_j,_o,_y,_,_t,_h,_y,_,_s,_t,_a,_y,_,_h,_e,_r,_e,_exc,_apd,$EF
_msg21C:		.BYTE	_apu,_G,_o,_o,_d,_,_m,_o,_r,_n,_i,_n,_g,_exc,_,$EB
				.BYTE	_S,_e,_e,_,_y,_o,_u,_,_l,_a,_t,_e,_r,_smc,$EF
_msg21D:		.BYTE	_apu,_F,_a,_r,_e,_w,_e,_l,_l,_dot,$EB
				.BYTE	_D,_o,_,_c,_o,_m,_e,_,_a,_g,_a,_i,_n,_smc,$EF
_msg21E:		.BYTE	_apu,_T,_h,_i,_s,_,_s,_t,_o,_r,_e,_,_d,_e,_a,_l,_s,_,_i,_n,_,_w,_e,_a,_p,_o,_n,_s,_,_a,_n,_d,_,_a,_r,_m,_o,_r,_dot,$EB
				.BYTE	_D,_o,_,_y,_o,_u,_,_w,_i,_s,_h,_,_t,_o,_,_s,_e,_e,_,_o,_u,_r,_,_w,_a,_r,_e,_s,_que,_apd,$EF
_msg21F:		.BYTE	_apu,_W,_h,_a,_t,_,_w,_i,_l,_l,_,_y,_o,_u,_,_b,_u,_y,_que,_apd,$EF
_msg220:		.BYTE	_apu,_H,_a,_t,_e,_,_t,_o,_,_s,_a,_y,_,_i,_t,_sem,_,_b,_u,_t,_,_i,_t,_,_l,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_y,_o,_u,_apo,_r,_e,_,_a,_,_l,_i,_t,_t,_l,_e,_,_l,_o,_w,_,_o,_n,_,_m,_o,_n,_e,_y,_smc,$FD,$FF
_msg221:		.BYTE	_apu,_Y,_o,_u,_,_m,_e,_a,_n,_,_t,_h,_e,_,_item,_que,$EB
				.BYTE	_A,_,_g,_o,_o,_d,_,_c,_h,_o,_i,_c,_e,_sem,_,_i,_f,_,_I,_,_d,_o,_,_s,_a,_y,_,_s,_o,_,_m,_y,_s,_e,_l,_f,_smc,$FD,$FF
_msg222:		.BYTE	_apu,_W,_h,_o,_,_w,_i,_l,_l,_,_t,_a,_k,_e,_,_i,_t,_que,_apd,$EF
_msg223:		.BYTE	_apu,_B,_e,_g,_,_y,_o,_u,_r,_,_p,_a,_r,_d,_o,_n,_que,_,_I,_t,_,_a,_p,_p,_e,_a,_r,_s,_,$F5,_,_c,_a,_n,_n,_o,_t,_,_h,_a,_v,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_m,_o,_r,_e,_smc,$FD,$FF
_msg224:		.BYTE	_apu,_P,_e,_r,_h,_a,_p,_s,_,_s,_o,_m,_e,_o,_n,_e,_,_e,_l,_s,_e,_que,_apd,$EF
_msg225:		.BYTE	_apu,_P,_l,_e,_a,_s,_e,_,_c,_o,_m,_e,_,_a,_g,_a,_i,_n,_,_a,_f,_t,_e,_r,_,_y,_o,_u,_,_s,_e,_l,_l,_,_o,_r,_,_t,_h,_r,_o,_w,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_,_a,_w,_a,_y,_smc,$EF
_txt_block23:
_msg226:		.BYTE	_apu,$F5,_,_c,_a,_n,_n,_o,_t,_,_e,_q,_u,_i,_p,_,_herhimself,_,_w,_i,_t,_h,_,_t,_h,_a,_t,_dot,$EB
				.BYTE	_D,_o,_,_y,_o,_u,_,_s,_t,_i,_l,_l,_,_w,_a,_n,_t,_,_i,_t,_que,_apd,$EF
_msg227:		.BYTE	_apu,_A,_l,_l,_,_r,_i,_g,_h,_t,_,_t,_h,_e,_n,_sem,_,_I,_apo,_l,_l,_,_g,_i,_v,_e,_,_i,_t,_,_t,_o,_,_t,_h,_i,_s,_,_g,_h,_o,_s,_t,_smc,$EF
_msg228:		.BYTE	_apu,_A,_l,_l,_,_r,_i,_g,_h,_t,_,_t,_h,_e,_n,_sem,_,_I,_apo,_l,_l,_,_p,_u,_t,_,_i,_t,_,_i,_n,_,_t,_h,_i,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_smc,$EF
_msg229:		.BYTE	_apu,_H,_e,_r,_e,_,_y,_o,_u,_,_g,_o,_,$F5,_exc,_apd,$EE
_msg22A:		.BYTE	_apu,_I,_s,_,_t,_h,_e,_r,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_,_y,_o,_u,_,_n,_e,_e,_d,_,_n,_o,_w,_que,_apd,$EF
_msg22B:		.BYTE	_apu,_C,_o,_m,_e,_,_a,_g,_a,_i,_n,_sem,_,_y,_apo,_h,_e,_a,_r,_exc,_apd,$EF
_msg22C:		.BYTE	_apu,_T,_h,_i,_s,_,_s,_h,_o,_p,_,_d,_e,_a,_l,_s,_,_i,_n,_,_t,_o,_o,_l,_s,_dot,_,_W,_h,_a,_t,_,_c,_a,_n,_,_w,_e,_,_d,_o,_,_f,_o,_r,_,_y,_o,_u,_que,_apd,$EF
_msg22D:		.BYTE	_apu,_W,_h,_a,_t,_,_a,_r,_e,_,_y,_o,_u,_,_i,_n,_,_t,_h,_e,_,_m,_a,_r,_k,_e,_t,_,_f,_o,_r,_que,_apd,$EF
_msg22E:		.BYTE	_apu,_I,_apo,_m,_,_s,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_y,_o,_u,_,_h,_a,_v,_e,_,_i,_n,_s,_u,_f,_f,_i,_c,_i,_e,_n,_t,_,_f,_u,_n,_d,_s,_,_t,_o,_,_b,_u,_y,_,_t,_h,_a,_t,_smc,$FD,$FF
_msg22F:		.BYTE	_apu,_Y,_o,_u,_,_m,_e,_a,_n,_,_t,_h,_e,_,_item,_que,$EB
				.BYTE	_G,_o,_o,_d,_,_c,_h,_o,_i,_c,_e,_,_i,_f,_,_I,_,_d,_o,_,_s,_a,_y,_,_s,_o,_,_m,_y,_s,_e,_l,_f,_smc,$FD,$FF
_msg230:		.BYTE	_apu,_W,_h,_o,_,_w,_i,_l,_l,_,_t,_a,_k,_e,_,_p,_o,_s,_s,_e,_s,_s,_i,_o,_n,_que,_apd,$EF
_msg231:		.BYTE	_apu,$F5,_,_c,_a,_n,_n,_o,_t,_,_u,_s,_e,_,_t,_h,_i,_s,_dot,$EB
				.BYTE	_D,_o,_,_y,_o,_u,_,_s,_t,_i,_l,_l,_,_w,_a,_n,_t,_,_i,_t,_que,_apd,$EF
_msg232:		.BYTE	_apu,_I,_apo,_m,_,_s,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_i,_t,_,_a,_p,_p,_e,_a,_r,_s,_,$F5,_,_c,_a,_n,_n,_o,_t,_,_h,_a,_v,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_m,_o,_r,_e,_smc,$FD,$FF
_msg233:		.BYTE	_apu,_P,_e,_r,_h,_a,_p,_s,_,_s,_o,_m,_e,_o,_n,_e,_,_e,_l,_s,_e,_,_c,_a,_n,_,_t,_a,_k,_e,_,_i,_t,_que,_apd,$EF
_msg234:		.BYTE	_apu,_A,_l,_l,_,_r,_i,_g,_h,_t,_,_t,_h,_e,_n,_sem,_,_I,_apo,_l,_l,_,_g,_i,_v,_e,_,_i,_t,_,_t,_o,_,_t,_h,_i,_s,_,_g,_h,_o,_s,_t,_smc,$EF
_msg235:		.BYTE	_apu,_A,_l,_l,_,_r,_i,_g,_h,_t,_,_t,_h,_e,_n,_sem,_,_I,_apo,_l,_l,_,_p,_u,_t,_,_i,_t,_,_i,_n,_,$F5,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_smc,$EF
_txt_block24:
_msg236:		.BYTE	_apu,_C,_a,_n,_,_I,_,_s,_h,_o,_w,_,_y,_o,_u,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_que,_apd,$EF
_msg237:		.BYTE	_apu,_W,_h,_o,_s,_e,_,_p,_o,_s,_s,_e,_s,_s,_i,_o,_n,_s,_,_d,_o,_,_y,_o,_u,_,_w,_i,_s,_h,_,_t,_o,_,_s,_e,_l,_l,_que,_apd,$EF
_msg238:		.BYTE	_apu,$F5,_,_h,_a,_s,_,_n,_o,_t,_h,_i,_n,_g,_,_t,_o,_,_s,_e,_l,_l,_exc,_apd,$FD,$FF
_msg239:		.BYTE	_apu,_W,_h,_a,_t,_,_a,_r,_e,_,_y,_o,_u,_,_g,_o,_i,_n,_g,_,_t,_o,_,_s,_e,_l,_l,_,_m,_e,_que,_apd,$EF
_msg23A:		.BYTE	_apu,_I,_apo,_m,_,_t,_e,_r,_r,_i,_b,_l,_y,_,_s,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_w,_e,_,_d,_o,_n,_apo,_t,_,_b,_u,_y,_,_t,_h,_o,_s,_e,_,_h,_e,_r,_e,_smc,$FD,$FF
_msg23B:		.BYTE	_apu,_T,_h,_e,_,_item,_que,_,_I,_,_c,_a,_n,_,_p,_a,_y,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_,_f,_o,_r,_,_t,_h,_a,_t,_dot,$EB
				.BYTE	_D,_o,_,_y,_o,_u,_,_a,_c,_c,_e,_p,_t,_que,_apd,$EF
_msg23C:		.BYTE	_apu,_T,_h,_a,_n,_k,_,_y,_o,_u,_,_f,_o,_r,_,_y,_o,_u,_r,_,_b,_u,_s,_i,_n,_e,_s,_s,_exc,_apd,$EF
_msg23D:		.BYTE	$FD,$EB
				.BYTE	_apu,_I,_,_s,_e,_e,_dot,_,_W,_h,_a,_t,_,_a,_,_p,_i,_t,_y,_smc,$FD,$EF
_msg23E:		.BYTE	_apu,_T,_h,_a,_t,_apo,_s,_,_a,_,_p,_i,_t,_y,_smc,$FD,$FF
_msg23F:		.BYTE	_apu,_D,_o,_,_y,_o,_u,_,_h,_a,_v,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_,_t,_o,_,_s,_e,_l,_l,_que,_apd,$EF
_msg240:		.BYTE	_apu,_W,_e,_l,_l,_sem,_,_I,_,_l,_o,_o,_k,_,_f,_o,_r,_w,_a,_r,_d,_,_t,_o,_,_d,_o,_i,_n,_g,_,_b,_u,_s,_i,_n,_e,_s,_s,_,_w,_i,_t,_h,_,_y,_o,_u,_,_a,_g,_a,_i,_n,_smc,$EF
_msg241:		.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_t,_h,_e,_,_S,_h,_r,_i,_n,_e,_,_o,_f,_,_D,_h,_a,_m,_a,_sem,_w,_h,_e,_r,_e,_,_p,_e,_o,_p,_l,_e,_,_c,_o,_m,_e,_,_t,_o,_,_c,_h,_a,_n,_g,_e,_,_p,_r,_o,_f,_e,_s,_s,_i,_o,_n,_s,_dot,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_D,_o,_,_y,_o,_u,_,_w,_i,_s,_h,_,_t,_o,_,_d,_o,_,_s,_o,_que,_apd,$EF
_msg242:		.BYTE	_apu,_W,_h,_o,_s,_e,_,_p,_r,_o,_f,_e,_s,_s,_i,_o,_n,_,_d,_o,_,_y,_o,_u,_,_w,_i,_s,_h,_,_t,_o,_,_c,_h,_a,_n,_g,_e,_que,_apd,$EF
_msg243:		.BYTE	_apu,_I,_d,_i,_o,_t,_exc,$EB
				.BYTE	_Y,_o,_u,_,_w,_i,_s,_h,_,_t,_o,_,_q,_u,_i,_t,_,_b,_e,_i,_n,_g,_,_a,_,_h,_e,_r,_o,_exc,_que,$EB
				.BYTE	_T,_h,_a,_t,_,_o,_n,_e,_,_t,_h,_i,_n,_g,_,_I,_,_w,_i,_l,_l,_,_n,_o,_t,_,_a,_l,_l,_o,_w,_exc,_exc,_apd,$EF
_msg244:		.BYTE	_apu,_H,_u,_h,_exc,_,$F5,_,_i,_s,_n,_apo,_t,_,_e,_v,_e,_n,_,_a,_t,_,_f,_u,_l,_l,_,$F0,_,_s,_t,_a,_t,_u,_s,_exc,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_W,_a,_i,_t,_,_t,_i,_l,_l,_,_y,_o,_u,_,_g,_e,_t,_,_t,_o,_,_a,_,_h,_i,_g,_h,_e,_r,_,_s,_t,_a,_t,_u,_s,_exc,_apd,$EF
_msg245:		.BYTE	_apu,_W,_h,_i,_c,_h,_,_p,_r,_o,_f,_e,_s,_s,_i,_o,_n,_,_d,_o,_e,_s,_,$F5,_,_w,_a,_n,_t,_,_t,_o,_,_c,_h,_o,_o,_s,_e,_que,_apd,$EF
_txt_block25:
_msg246:		.BYTE	_apu,_D,_u,_n,_c,_e,_exc,$EB
				.BYTE	_Y,_o,_u,_apo,_r,_e,_,_a,_l,_r,_e,_a,_d,_y,_,_t,_h,_a,_t,_exc,_apd,$EE
_msg247:		.BYTE	_apu,$F5,_,_w,_a,_n,_t,_s,_,_t,_o,_,_b,_e,_,$F0,_que,_apd,$EF
_msg248:		.BYTE	_apu,_A,_r,_e,_,_y,_o,_u,_,_p,_r,_e,_p,_a,_r,_e,_d,_,_t,_o,_,_b,_e,_g,_i,_n,_,_y,_o,_u,_r,_,_t,_r,_a,_i,_n,_i,_n,_g,_,_a,_g,_a,_i,_n,_,_f,_r,_o,_m,_,_l,_e,_v,_e,_l,_,_o,_n,_e,_que,_apd,$EF
_msg249:		.BYTE	_apu,_V,_e,_r,_y,_,_w,_e,_l,_l,_dot,_,_F,_r,_o,_m,_,_n,_o,_w,_,_o,_n,_,$F5,_,_i,_s,_,_a,_,$F0,_smc,$EF
_msg24A:		.BYTE	$FD,$EB
				.BYTE	_apu,_S,_o,_sem,_,_b,_e,_,_o,_n,_,_y,_o,_u,_r,_,_w,_a,_y,_exc,_apd,$EF
_msg24B:		.BYTE	_apu,_S,_o,_dot,_,_Y,_o,_u,_apo,_r,_e,_,_n,_o,_t,_,_c,_h,_a,_n,_g,_i,_n,_g,_,_p,_r,_o,_f,_e,_s,_s,_i,_o,_n,_s,_,_a,_f,_t,_e,_r,_,_a,_l,_l,_dot,_,_V,_e,_r,_y,_,_w,_e,_l,_l,_smc,$EE
_msg24C:		.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_t,_h,_e,_,_A,_d,_v,_e,_n,_t,_u,_r,_e,_r,_apo,_s,_,_H,_a,_l,_l,_,_o,_f,_,_R,_e,_g,_i,_s,_t,_r,_a,_t,_i,_o,_n,_smc,$FD,$EB
				.BYTE	_apu,_I,_,_c,_a,_n,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_a,_n,_y,_o,_n,_e,_,_y,_o,_u,_,_w,_i,_s,_h,_,_t,_o,_,_i,_n,_c,_l,_u,_d,_e,_,_a,_m,_o,_n,_g,_,_y,_o,_u,_r,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_smc,$FD,$EB
				.BYTE	_apu,_O,_n,_c,_e,_,_y,_o,_u,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_t,_h,_e,_m,_,_h,_e,_r,_e,_sem,_,_y,_o,_u,_,_m,_a,_y,_,_d,_e,_p,_a,_r,_t,_,_w,_i,_t,_h,_,_t,_h,_e,_m,_,_f,_r,_o,_m,_,_t,_h,_e,_,_e,_a,_t,_e,_r,_y,_,_d,_o,_w,_n,_s,_t,_a,_i,_r,_s,_smc,$FD,$EB
				.BYTE	_apu,_D,_o,_,_y,_o,_u,_,_h,_a,_v,_e,_,_n,_e,_w,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_,_t,_o,_,_r,_e,_g,_i,_s,_t,_e,_r,_que,_apd,$EF
_msg24D:		.BYTE	_apu,_T,_o,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_a,_n,_y,_o,_n,_e,_,_e,_l,_s,_e,_sem,_,_y,_o,_u,_apo,_l,_l,_,_h,_a,_v,_e,_,_t,_o,_,_e,_r,_a,_s,_e,_,_s,_o,_m,_e,_o,_n,_e,_apo,_s,_,_n,_a,_m,_e,_dot,$EB
				.BYTE	_S,_h,_a,_l,_l,_,_I,_,_p,_r,_o,_c,_e,_e,_d,_que,_apd,$EF
_msg24E:		.BYTE	_apu,_O,_h,_sem,_,_y,_o,_u,_apo,_v,_e,_,_c,_h,_a,_n,_g,_e,_d,_,_y,_o,_u,_r,_,_m,_i,_n,_d,_que,$EB
				.BYTE	_T,_h,_a,_t,_apo,_s,_,_p,_r,_o,_b,_a,_b,_l,_y,_,_j,_u,_s,_t,_,_a,_s,_,_w,_e,_l,_l,_smc,$FD,$EF
_msg24F:		.BYTE	_apu,_W,_h,_o,_s,_e,_,_n,_a,_m,_e,_,_w,_i,_l,_l,_,_y,_o,_u,_,_e,_r,_a,_s,_e,_que,_apd,$EF
_msg250:		.BYTE	_apu,_Y,_o,_u,_apo,_r,_e,_,_e,_r,_a,_s,_i,_n,_g,_,$F5,_que,$EB
				.BYTE	_T,_h,_e,_r,_e,_apo,_s,_,_n,_o,_,_u,_n,_d,_o,_i,_n,_g,_,_i,_t,_sem,_,_y,_o,_u,_,_k,_n,_o,_w,_smc,$EB
				.BYTE	_apu,_S,_h,_a,_l,_l,_,_I,_,_g,_o,_,_a,_h,_e,_a,_d,_que,_apd,$EF
_msg251:		.BYTE	_apu,$F5,_,_i,_s,_,_e,_r,_a,_s,_e,_d,_dot,_,_Y,_o,_u,_,_m,_a,_y,_,_n,_o,_w,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_a,_,_n,_e,_w,_,_p,_a,_r,_t,_y,_,_m,_e,_m,_b,_e,_r,_smc,$FD,$FF
_msg252:		.BYTE	_apu,_W,_h,_o,_,_w,_i,_l,_l,_,_y,_o,_u,_,_r,_e,_g,_i,_s,_t,_e,_r,_que,_apd,$EF
_msg253:		.BYTE	_apu,_H,_u,_h,_que,_,_T,_h,_a,_t,_,_p,_e,_r,_s,_o,_n,_,_i,_s,_,_a,_l,_r,_e,_a,_d,_y,_,_r,_e,_g,_i,_s,_t,_e,_r,_e,_d,_exc,_apd,$FD,$FF
_msg254:		.BYTE	_apu,_E,_d,_r,_i,_c,_k,_que,$EB
				.BYTE	_apu,_O,_h,_sem,_,_y,_o,_u,_,_m,_e,_a,_n,_,_E,_r,_d,_r,_i,_c,_k,_exc,_apd,$FD,$EB
				.BYTE	_apu,_T,_h,_e,_,_n,_a,_m,_e,_,_E,_r,_d,_r,_i,_c,_k,_,_d,_e,_m,_a,_n,_d,_s,_,_t,_h,_e,_,_u,_t,_m,_o,_s,_t,_,_r,_e,_s,_p,_e,_c,_t,_exc,_apd,$FD,$EB
				.BYTE	_apu,_O,_n,_l,_y,_,_a,_,_t,_r,_u,_e,_,_h,_e,_r,_o,_,_m,_a,_y,_,_b,_e,_a,_r,_,_t,_h,_a,_t,_,_n,_a,_m,_e,_sem,_,_i,_t,_,_i,_s,_,_s,_a,_i,_d,_dot,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_E,_v,_e,_n,_,_I,_,_c,_a,_n,_n,_o,_t,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_t,_h,_a,_t,_,_p,_e,_r,_s,_o,_n,_exc,_apd,$FD,$FF
_msg255:		.BYTE	_apu,_O,_h,_sem,_,_y,_o,_u,_apo,_r,_e,_,_g,_i,_v,_i,_n,_g,_,_u,_p,_,_o,_n,_,_t,_h,_a,_t,_sem,_,_h,_u,_h,_que,$EB
				.BYTE	_A,_l,_l,_,_r,_i,_g,_h,_t,_,_t,_h,_e,_n,_smc,$FD,$FF
_txt_block26:
_msg256:		.BYTE	_apu,_I,_s,_,_t,_h,_i,_s,_,_t,_h,_e,_,_p,_e,_r,_s,_o,_n,_,_y,_o,_u,_,_w,_a,_n,_t,_que,_apd,$EF
_msg257:		.BYTE	_apu,_D,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_a,_n,_y,_o,_n,_e,_,_e,_l,_s,_e,_que,_apd,$EF
_msg258:		.BYTE	_apu,_W,_e,_l,_l,_sem,_,_i,_f,_,_y,_o,_u,_,_e,_v,_e,_r,_,_w,_a,_n,_t,_,_t,_o,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_a,_,_n,_e,_w,_,_p,_e,_r,_s,_o,_n,_sem,_,_p,_l,_e,_a,_s,_e,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_a,_g,_a,_i,_n,_smc,$EF
_msg259:		.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_L,_u,_i,_s,_a,_apo,_s,_,_P,_l,_a,_c,_e,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_t,_h,_e,_,_e,_a,_t,_e,_r,_y,_,_w,_h,_e,_r,_e,_,_p,_e,_o,_p,_l,_e,_,_g,_a,_t,_h,_e,_r,_sem,_,_m,_e,_e,_t,_,_o,_r,_,_p,_a,_r,_t,_,_w,_i,_t,_h,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_smc,$FD,$FF
_msg25A:		.BYTE	_apu,_W,_h,_a,_t,_apo,_s,_,_o,_n,_,_y,_o,_u,_r,_,_m,_i,_n,_d,_sem,_,_d,_e,_a,_r,_que,_apd,$EF
_msg25B:		.BYTE	_apu,_O,_h,_,_m,_y,_exc,_,_A,_n,_d,_,_w,_i,_t,_h,_,_a,_l,_l,_,_t,_h,_e,_,_p,_e,_o,_p,_l,_e,_,_y,_o,_u,_,_h,_a,_v,_e,_,_w,_i,_t,_h,_,_y,_o,_u,_,_a,_l,_r,_e,_a,_d,_y,_que,_apd,$FD,$EB
				.BYTE	_apu,_U,_n,_l,_e,_s,_s,_,_y,_o,_u,_,_p,_a,_r,_t,_,_c,_o,_m,_p,_a,_n,_y,_,_w,_i,_t,_h,_,_s,_o,_m,_e,_o,_n,_e,_sem,_,_y,_o,_u,_,_c,_a,_n,_apo,_t,_,_a,_d,_d,_,_a,_n,_y,_o,_n,_e,_,_n,_e,_w,_sem,_,_h,_o,_n,_e,_y,_smc,$FD,$FF
_msg25C:		.BYTE	_apu,_B,_u,_t,_,_t,_h,_e,_r,_e,_apo,_s,_,_j,_u,_s,_t,_,_n,_o,_,_o,_n,_e,_,_h,_e,_r,_e,_,_w,_h,_o,_,_c,_a,_n,_,_j,_o,_i,_n,_,_y,_o,_u,_sem,_,_s,_w,_e,_e,_t,_i,_e,_smc,$FD,$EB
				.BYTE	_apu,_G,_o,_,_t,_o,_,_t,_h,_e,_,_s,_e,_c,_o,_n,_d,_,_f,_l,_o,_o,_r,_,_t,_o,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_t,_h,_e,_,_p,_e,_o,_p,_l,_e,_,_y,_o,_u,_,_w,_a,_n,_t,_,_a,_n,_d,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_h,_e,_r,_e,_sem,_,_O,_K,_que,_apd,$FD,$EF
_msg25D:		.BYTE	_apu,_W,_h,_o,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_a,_d,_d,_,_t,_o,_,_y,_o,_u,_r,_,_p,_a,_r,_t,_y,_que,_apd,$EF
_msg25E:		.BYTE	_apu,_I,_f,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_a,_d,_d,_,_a,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_,_w,_h,_o,_apo,_s,_,_n,_o,_t,_,_o,_n,_,_t,_h,_e,_,_l,_i,_s,_t,_sem,_,_f,_i,_r,_s,_t,_,_g,_o,_,_u,_p,_,_t,_o,_,_t,_h,_e,_,_s,_e,_c,_o,_n,_d,_,_f,_l,_o,_o,_r,_smc,$FD,$EB
				.BYTE	_apu,_I,_f,_,_y,_o,_u,_,_g,_o,_,_t,_o,_,_t,_h,_e,_,_r,_e,_g,_i,_s,_t,_r,_y,_,_f,_i,_r,_s,_t,_sem,_,_I,_apo,_l,_l,_,_b,_e,_,_h,_a,_p,_p,_y,_,_t,_o,_,_a,_d,_d,_,_w,_h,_o,_e,_v,_e,_r,_,_y,_o,_u,_,_l,_i,_k,_e,_,_t,_o,_,_t,_h,_e,_,_l,_i,_s,_t,_smc,$FD,$FF
_msg25F:		.BYTE	_apu,_Y,_o,_u,_apo,_r,_e,_,_a,_d,_d,_i,_n,_g,_,$F5,_,_t,_o,_,_y,_o,_u,_r,_,_p,_a,_r,_t,_y,_sem,_,_r,_i,_g,_h,_t,_que,_,_D,_o,_n,_e,_smc,$FD,$EB
				.BYTE	_apu,$F5,_exc,$EB
				.BYTE	_hero,_,_i,_s,_,_c,_a,_l,_l,_i,_n,_g,_,_y,_o,_u,_smc,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	$F5,_,_i,_s,_,_a,_d,_d,_e,_d,_,_t,_o,_,_t,_h,_e,_,_p,_a,_r,_t,_y,_dot,$FD,$FF
_msg260:		.BYTE	_apu,_P,_a,_r,_t,_,_w,_i,_t,_h,_,_s,_o,_m,_e,_o,_n,_e,_que,_,_W,_i,_t,_h,_,_w,_h,_o,_que,$EB
				.BYTE	_W,_h,_a,_t,_,_d,_o,_,_y,_o,_u,_,_m,_e,_a,_n,_que,_,_hero,_,_i,_s,_,_a,_l,_o,_n,_e,_exc,_apd,$FD,$FF
_msg261:		.BYTE	_apu,_W,_h,_o,_,_w,_i,_l,_l,_,_y,_o,_u,_,_p,_a,_r,_t,_,_w,_i,_t,_h,_que,_apd,$EF
_msg262:		.BYTE	_apu,_D,_e,_a,_r,_y,_,_m,_e,_exc,_,_D,_i,_d,_,_y,_o,_u,_,_c,_h,_a,_n,_g,_e,_,_y,_o,_u,_r,_,_m,_i,_n,_d,_que,$EB
				.BYTE	_T,_h,_a,_t,_apo,_s,_,_p,_r,_o,_b,_a,_b,_l,_y,_,_j,_u,_s,_t,_,_a,_s,_,_w,_e,_l,_l,_smc,$FD,$FF
_msg263:		.BYTE	_apu,_Y,_o,_u,_apo,_r,_e,_,_g,_o,_i,_n,_g,_,_t,_o,_,_p,_a,_r,_t,_,_w,_i,_t,_h,_,$F5,_sem,_,_c,_o,_r,_r,_e,_c,_t,_que,_apd,$EE
_msg264:		.BYTE	_apu,_O,_o,_h,_sem,_,_t,_h,_a,_t,_apo,_s,_,_c,_r,_e,_e,_p,_y,_exc,_,_Y,_o,_u,_,_c,_a,_n,_apo,_t,_,_p,_a,_r,_t,_,_c,_o,_m,_p,_a,_n,_y,_,_w,_i,_t,_h,_,_y,_o,_u,_r,_s,_e,_l,_f,_exc,_apd,$FD,$FF
_msg265:		.BYTE	_apu,$F5,_sem,_,_y,_o,_u,_,_r,_e,_s,_t,_,_f,_o,_r,_,_a,_,_w,_h,_i,_l,_e,_smc,$FD,$EF
_txt_block27:
_msg266:		.BYTE	_apu,_I,_s,_,_t,_h,_e,_r,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_que,_apd,$EF
_msg267:		.BYTE	_apu,_C,_o,_m,_e,_,_b,_a,_c,_k,_,_a,_g,_a,_i,_n,_exc,_apd,$EF
_msg268:		.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_t,_h,_e,_,_V,_a,_u,_l,_t,_smc,$FD,$FF
_msg269:		.BYTE	_apu,_H,_o,_w,_,_m,_a,_y,_,_I,_,_h,_e,_l,_p,_,_y,_o,_u,_que,_apd,$EF
_msg26A:		.BYTE	_apu,_Y,_e,_s,_sem,_,_i,_n,_d,_e,_e,_d,_dot,$EB
				.BYTE	_W,_h,_a,_t,_,_c,_a,_n,_,_I,_,_k,_e,_e,_p,_,_h,_e,_r,_e,_,_f,_o,_r,_,_y,_o,_u,_que,_apd,$EF
_msg26B:		.BYTE	_apu,_I,_f,_,_i,_t,_apo,_s,_,_1,_sem,_0,_0,_0,_,_p,_i,_e,_c,_e,_s,_,_o,_f,_,_g,_o,_l,_d,_,_o,_r,_,_m,_o,_r,_e,_sem,_,_I,_,_c,_a,_n,_,_k,_e,_e,_p,_,_i,_t,_,_h,_e,_r,_e,_,_f,_o,_r,_,_y,_o,_u,_dot,$EB
				.BYTE	_H,_o,_w,_,_m,_u,_c,_h,_,_w,_i,_l,_l,_,_y,_o,_u,_,_l,_e,_a,_v,_e,_,_h,_e,_r,_e,_que,_apd,$EF
_msg26C:		.BYTE	_apu,_I,_,_f,_i,_n,_d,_,_i,_t,_,_h,_a,_r,_d,_,_t,_o,_,_b,_e,_l,_i,_e,_v,_e,_,_y,_o,_u,_,_h,_a,_v,_e,_,_t,_h,_a,_t,_,_m,_u,_c,_h,_exc,_apd,$FD,$FF
_msg26D:		.BYTE	_apu,_S,_o,_,_i,_t,_apo,_s,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_sem,_,_i,_s,_,_i,_t,_que,_,_V,_e,_r,_y,_,_w,_e,_l,_l,_sem,_,_y,_o,_u,_,_c,_a,_n,_,_e,_n,_t,_r,_u,_s,_t,_,_i,_t,_,_t,_o,_,_m,_e,_smc,$EF
_msg26E:		.BYTE	_apu,_W,_h,_o,_,_i,_s,_,_g,_o,_i,_n,_g,_,_t,_o,_,_l,_e,_a,_v,_e,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_que,_apd,$EF
_msg26F:		.BYTE	_apu,_B,_u,_t,_,$F5,_,_d,_o,_e,_s,_n,_apo,_t,_,_s,_e,_e,_m,_,_t,_o,_,_h,_a,_v,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_smc,$FD,$FF
_msg270:		.BYTE	_apu,_S,_o,_,_i,_t,_apo,_s,_,_t,_h,_e,_,_item,_sem,_,_i,_s,_,_i,_t,_que,_apd,$FD,$EB
				.BYTE	_apu,_T,_h,_e,_r,_e,_,_w,_i,_l,_l,_,_b,_e,_,_a,_,_c,_h,_a,_r,_g,_e,_,_o,_f,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_,_t,_o,_,_p,_i,_c,_k,_,_i,_t,_,_u,_p,_dot,_,_I,_s,_,_t,_h,_a,_t,_,_s,_a,_t,_i,_s,_f,_a,_c,_t,_o,_r,_y,_que,_apd,$EF
_msg271:		.BYTE	_apu,_O,_h,_sem,_,_a,_,_c,_h,_a,_n,_g,_e,_,_o,_f,_,_h,_e,_a,_r,_t,_sem,_,_h,_u,_h,_que,_apd,$FD,$FF
_msg272:		.BYTE	$FD,$EB
				.BYTE	_apu,_S,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_t,_h,_e,_r,_e,_apo,_s,_,_n,_o,_,_w,_a,_y,_,_i,_n,_,_t,_h,_e,_,_w,_o,_r,_l,_d,_,_I,_,_c,_a,_n,_,_k,_e,_e,_p,_,_t,_h,_a,_t,_exc,_apd,$FF
_msg273:		.BYTE	_apu,_A,_l,_l,_,_r,_i,_g,_h,_t,_,_t,_h,_e,_n,_dot,_,_I,_apo,_l,_l,_,_t,_a,_k,_e,_,_g,_o,_o,_d,_,_c,_a,_r,_e,_,_o,_f,_,_i,_t,_exc,_apd,$EF
_msg274:		.BYTE	$FD,$EB
				.BYTE	_apu,_I,_s,_,_t,_h,_e,_r,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_l,_e,_a,_v,_e,_,_h,_e,_r,_e,_que,_apd,$EF
_msg275:		.BYTE	_apu,_Y,_e,_s,_exc,_,_W,_h,_a,_t,_,_w,_o,_u,_l,_d,_,_y,_o,_u,_,_l,_i,_k,_e,_,_b,_a,_c,_k,_que,_apd,$EF
_txt_block28:
_msg276:		.BYTE	_apu,_H,_u,_h,_que,$EB
				.BYTE	_I,_,_d,_o,_n,_apo,_t,_,_h,_a,_v,_e,_,_a,_,_s,_i,_n,_g,_l,_e,_,_p,_i,_e,_c,_e,_,_o,_f,_,_y,_o,_u,_r,_,_g,_o,_l,_d,_,_h,_e,_r,_e,_exc,_apd,$FD,$FF
_msg277:		.BYTE	_apu,_I,_,_a,_m,_,_k,_e,_e,_p,_i,_n,_g,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_,_h,_e,_r,_e,_,_f,_o,_r,_,_y,_o,_u,_,_n,_o,_w,_dot,_,_H,_o,_w,_,_m,_u,_c,_h,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_g,_e,_t,_,_b,_a,_c,_k,_que,_apd,$EF
_msg278:		.BYTE	_apu,_Y,_o,_u,_apo,_r,_e,_,_n,_o,_t,_,_k,_e,_e,_p,_i,_n,_g,_,_t,_h,_a,_t,_,_m,_u,_c,_h,_,_h,_e,_r,_e,_exc,_apd,$FD,$FF
_msg279:		.BYTE	_apu,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_sem,_,_i,_s,_,_i,_t,_que,_,_H,_e,_r,_e,_,_y,_o,_u,_,_a,_r,_e,_smc,$EF
_msg27A:		.BYTE	_apu,_H,_u,_h,_exc,_,$EB
				.BYTE	_I,_,_d,_o,_n,_apo,_t,_,_h,_a,_v,_e,_,_a,_n,_y,_,_i,_t,_e,_m,_s,_,_i,_n,_,_s,_t,_o,_r,_a,_g,_e,_smc,$FD,$FF
_msg27B:		.BYTE	_apu,_W,_h,_a,_t,_,_w,_o,_u,_l,_d,_,_y,_o,_u,_,_l,_i,_k,_e,_,_t,_o,_,_g,_e,_t,_,_b,_a,_c,_k,_que,_apd,$EF
_msg27C:		.BYTE	_apu,_T,_h,_e,_,_item,_que,_,_T,_h,_e,_,_s,_e,_r,_v,_i,_c,_e,_,_c,_h,_a,_r,_g,_e,_,_i,_s,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_que,_,_I,_s,_,_t,_h,_a,_t,_,_O,_K,_que,_apd,$EF
_msg27D:		.BYTE	_apu,_W,_h,_o,_,_i,_s,_,_g,_e,_t,_t,_i,_n,_g,_,_t,_h,_i,_s,_que,_apd,$FF
_msg27E:		.BYTE	_apu,$F5,_,_c,_a,_n,_n,_o,_t,_,_h,_a,_v,_e,_,_a,_n,_y,_,_m,_o,_r,_e,_,_i,_t,_e,_m,_s,_smc,$FD,$FF
_msg27F:		.BYTE	_apu,_Y,_o,_u,_,_c,_a,_n,_apo,_t,_,_d,_r,_o,_p,_,_a,_,_p,_e,_r,_s,_o,_n,_,_w,_h,_o,_,_h,_a,_s,_,_a,_n,_,_i,_t,_e,_m,_smc,$FF
_msg280:		.BYTE	$EF
_msg281:		.BYTE	_apu,_Y,_o,_u,_,_d,_o,_n,_apo,_t,_,_h,_a,_v,_e,_,_e,_n,_o,_u,_g,_h,_,_m,_o,_n,_e,_y,_dot,_,$EB
				.BYTE	_T,_h,_a,_t,_,_m,_a,_k,_e,_s,_,_i,_t,_,_t,_o,_u,_g,_h,_exc,_,_I,_,_c,_a,_n,_apo,_t,_,_r,_e,_t,_u,_r,_n,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_t,_o,_,_y,_o,_u,_smc,$FD,$FF
_msg282:		.BYTE	_apu,_H,_e,_r,_e,_apo,_s,_,_y,_o,_u,_r,_,_i,_t,_e,_m,_sem,_,$F5,_smc,$EF
_msg283:		.BYTE	$FD,$EB
				.BYTE	_apu,_D,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_,_b,_a,_c,_k,_que,_apd,$EF
_msg284:		.BYTE	_apu,_W,_i,_l,_l,_,_t,_h,_e,_r,_e,_,_b,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_que,_apd,$EF
_msg285:		.BYTE	_apu,_T,_h,_a,_n,_k,_,_y,_o,_u,_,_v,_e,_r,_y,_,_m,_u,_c,_h,_exc,_apd,$EF
_txt_block29:
_msg286:		.BYTE	_apu,_I,_apo,_m,_,_s,_o,_r,_r,_y,_dot,_,_T,_h,_e,_,_v,_a,_u,_l,_t,_,_i,_s,_,_f,_u,_l,_l,_,_a,_n,_d,_,_I,_,_c,_a,_n,_apo,_t,_,_t,_a,_k,_e,_,_a,_n,_y,_t,_h,_i,_n,_g,_,_e,_l,_s,_e,_smc,$FD,$FF
_msg287:		.BYTE	_apu,_I,_apo,_m,_,_s,_o,_r,_r,_y,_dot,_,_T,_h,_e,_,_s,_a,_f,_e,_,_i,_s,_,_f,_u,_l,_l,_,_a,_n,_d,_,_y,_o,_u,_,_c,_a,_n,_apo,_t,_,_d,_e,_p,_o,_s,_i,_t,_,_a,_n,_y,_,_m,_o,_r,_e,_,_m,_o,_n,_e,_y,_smc,$FD,$FF
_msg288:		.BYTE	_apu,_Y,_o,_u,_,_c,_a,_n,_,_d,_e,_p,_o,_s,_i,_t,_,_o,_n,_l,_y,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_,_m,_o,_r,_e,_smc,$FD,$FF
_msg289:		.BYTE	_apu,_Y,_o,_u,_,_c,_a,_n,_apo,_t,_,_t,_a,_k,_e,_,_t,_h,_a,_t,_,_m,_u,_c,_h,_exc,_apd,$FD,$FF
_msg28A:		.BYTE	_apu,_B,_u,_t,_,_y,_o,_u,_,_c,_a,_n,_apo,_t,_,_t,_a,_k,_e,_,_t,_h,_a,_t,_,_m,_u,_c,_h,_,_m,_o,_n,_e,_y,_exc,_apd,$FD,$FF
_msg28B:		.BYTE	_apu,_W,_h,_a,_t,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_l,_e,_a,_v,_e,_,_h,_e,_r,_e,_que,_apd,$EF
_msg28C:		.BYTE	_apu,_S,_t,_e,_p,_,_r,_i,_g,_h,_t,_,_u,_p,_exc,_,_W,_i,_t,_n,_e,_s,_s,_,_t,_h,_e,_,_b,_r,_e,_a,_t,_h,_t,_a,_k,_i,_n,_g,_,_f,_i,_g,_h,_t,_s,_,_r,_i,_g,_h,_t,_,_h,_e,_r,_e,_,_i,_n,_,_t,_h,_i,_s,_,_s,_t,_a,_d,_i,_u,_m,_exc,_apd,$FD,$EB
				.BYTE	_apu,_Y,_o,_u,_,_p,_i,_c,_k,_,_t,_h,_e,_,_m,_o,_n,_s,_t,_e,_r,_,_t,_h,_a,_t,_,_w,_i,_n,_s,_,_a,_n,_d,_,_r,_a,_k,_e,_,_i,_n,_,_t,_h,_e,_,_c,_a,_s,_h,_exc,_apd,$FD,$EB
				.BYTE	_apu,_T,_h,_e,_,_t,_i,_c,_k,_e,_t,_s,_,_a,_r,_e,_,$F8,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_,_e,_a,_c,_h,_exc,$EB
				.BYTE	_W,_h,_a,_d,_d,_y,_a,_,_s,_a,_y,_que,_,_W,_a,_n,_n,_a,_,_t,_r,_y,_,_y,_o,_u,_r,_,_l,_u,_c,_k,_que,_apd,$EF
_msg28D:		.BYTE	_apu,_Y,_o,_u,_,_k,_i,_d,_d,_i,_n,_g,_que,_,_Y,_o,_u,_apo,_r,_e,_,_n,_o,_t,_,_i,_n,_t,_e,_r,_e,_s,_t,_e,_d,_que,_apd,$EF
_msg28E:		.BYTE	_apu,_W,_h,_a,_t,_apo,_s,_,_t,_h,_i,_s,_que,_,_L,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_y,_o,_u,_,_d,_o,_n,_apo,_t,_,_h,_a,_v,_e,_,_e,_n,_o,_u,_g,_h,_,_m,_o,_n,_e,_y,_sem,_,_f,_r,_i,_e,_n,_d,_exc,_apd,$EF
_msg28F:		.BYTE	_apu,_H,_e,_r,_e,_apo,_s,_,_a,_,_l,_i,_s,_t,_,_o,_f,_,_t,_h,_e,_,_m,_o,_n,_s,_t,_e,_r,_s,_,_a,_n,_d,_,_t,_h,_e,_,_o,_d,_d,_s,_dot,_,_W,_h,_i,_c,_h,_,_o,_n,_e,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_p,_u,_t,_,_a,_,_b,_e,_t,_,_o,_n,_que,_apd,$EF
_msg290:		.BYTE	_apu,$F5,$F2,_,_i,_s,_,_i,_t,_que,_,_A,_l,_l,_,_r,_i,_g,_h,_t,_,_t,_h,_e,_n,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_e,_,_m,_a,_t,_c,_h,_,_i,_s,_,_a,_b,_o,_u,_t,_,_t,_o,_,_b,_e,_g,_i,_n,_sem,_,_s,_o,_,_g,_o,_,_r,_i,_g,_h,_t,_,_i,_n,_exc,_apd,$EF
_msg291:		.BYTE	_apu,_C,_o,_m,_e,_,_b,_a,_c,_k,_,_a,_g,_a,_i,_n,_exc,_apd,$EF
_msg292:		.BYTE	$F5,_,_p,_a,_r,_t,_s,_,_w,_i,_t,_h,_,$F5,_dot,$EE
_msg293:		.BYTE	$F5,_,_p,_a,_r,_t,_,_w,_i,_t,_h,_,$F5,_dot,$EE
_msg294:		.BYTE	_apu,_I,_apo,_m,_,_s,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_I,_,_j,_u,_s,_t,_,_c,_a,_n,_apo,_t,_dot,_,_C,_o,_m,_e,_,_a,_g,_a,_i,_n,_,_a,_f,_t,_e,_r,_,_y,_o,_u,_r,_,_c,_o,_n,_d,_i,_t,_i,_o,_n,_,_h,_a,_s,_,_c,_h,_a,_n,_g,_e,_d,_sem,_,_s,_o,_,_i,_t,_,_c,_a,_n,_,_b,_e,_,_r,_e,_c,_o,_r,_d,_e,_d,_smc,$EF
_msg295:		.BYTE	_apu,_O,_h,_sem,_,_v,_e,_r,_y,_,_f,_u,_n,_n,_y,_exc,_,_Y,_o,_u,_,_c,_a,_n,_apo,_t,_,_d,_e,_p,_a,_r,_t,_,_o,_n,_,_y,_o,_u,_r,_,_j,_o,_u,_r,_n,_e,_y,_,_w,_i,_t,_h,_,_o,_n,_l,_y,_,_d,_e,_a,_d,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_exc,_apd,$FD,$FF
_txt_block2A:
_msg296:		.BYTE	_apu,_W,_e,_l,_l,_,_t,_h,_e,_n,_sem,_,_I,_,_s,_h,_a,_l,_l,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_y,_o,_u,_r,_,_p,_r,_e,_s,_e,_n,_t,_,_c,_o,_n,_d,_i,_t,_i,_o,_n,_,_i,_n,_,_t,_h,_e,_,_I,_m,_p,_e,_r,_i,_a,_l,_,_S,_c,_r,_o,_l,_l,_s,_,_o,_f,_,_H,_o,_n,_o,_r,_smc,$EB
				.BYTE	_apu,_M,_a,_y,_,_I,_que,_apd,$EF
_msg297:		.BYTE	_apu,_I,_apo,_m,_,_s,_o,_r,_r,_y,_sem,_,_b,_u,_t,_,_y,_o,_u,_,_c,_a,_n,_apo,_t,_,_e,_r,_a,_s,_e,_,_a,_,_H,_e,_r,_o,_apo,_s,_,_n,_a,_m,_e,_smc,$FD,$EF
_msg298:		.BYTE	_apu,_W,_h,_o,_s,_e,_,_i,_n,_f,_o,_r,_m,_a,_t,_i,_o,_n,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_s,_e,_e,_que,_apd,$EF
_msg299:		.BYTE	_apu,_O,_h,_sem,_,_m,_y,_exc,_,_T,_h,_e,_r,_e,_,_i,_s,_,_n,_o,_,_o,_n,_e,_,_r,_e,_g,_i,_s,_t,_e,_r,_e,_d,_,_o,_n,_,_t,_h,_e,_,_l,_i,_s,_t,_smc,$FD,$EB
				.BYTE	_apu,_G,_o,_,_t,_o,_,_t,_h,_e,_,_s,_e,_c,_o,_n,_d,_,_f,_l,_o,_o,_r,_,_t,_o,_,_r,_e,_g,_i,_s,_t,_e,_r,_,_t,_h,_e,_,_p,_e,_o,_p,_l,_e,_,_y,_o,_u,_,_w,_a,_n,_t,_,_a,_n,_d,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_h,_e,_r,_e,_sem,_,_O,_K,_que,_apd,$FD,$FF
_msg29A:		.BYTE	_apu,_N,_o,_n,_s,_e,_n,_s,_e,_exc,_,$F5,_,_i,_s,_,_d,_e,_a,_d,_exc,_apd,$EF
_msg29B:		.BYTE	$EF
_msg29C:		.BYTE	$EF
_msg29D:		.BYTE	$EF
_msg29E:		.BYTE	$EF
_msg29F:		.BYTE	$EF
_msg2A0:		.BYTE	$EF
_msg2A1:		.BYTE	$EF
_msg2A2:		.BYTE	$EF
_msg2A3:		.BYTE	$EF
_msg2A4:		.BYTE	$EF
_msg2A5:		.BYTE	$EF
_txt_block2B:
_msg2A6:		.BYTE	$EF
_msg2A7:		.BYTE	$EF
_msg2A8:		.BYTE	$EF
_msg2A9:		.BYTE	$EF
_msg2AA:		.BYTE	$EF
_msg2AB:		.BYTE	$EF
_msg2AC:		.BYTE	$EF
_msg2AD:		.BYTE	$EF
_msg2AE:		.BYTE	$EF
_msg2AF:		.BYTE	$EF
_msg2B0:		.BYTE	$EF
_msg2B1:		.BYTE	$EF
_msg2B2:		.BYTE	$EF
_msg2B3:		.BYTE	$EF
_msg2B4:		.BYTE	$EF
_msg2B5:		.BYTE	$EF
_txt_block2C:
_msg2B6:		.BYTE	$EF
_msg2B7:		.BYTE	$EF
_msg2B8:		.BYTE	$EF
_msg2B9:		.BYTE	$EF
_msg2BA:		.BYTE	$EF
_msg2BB:		.BYTE	$EF
_msg2BC:		.BYTE	$EF
_msg2BD:		.BYTE	$EF
_msg2BE:		.BYTE	$EF
_msg2BF:		.BYTE	$EF
_msg2C0:		.BYTE	$EF
_msg2C1:		.BYTE	$EF
_msg2C2:		.BYTE	$EF
_msg2C3:		.BYTE	$EF
_msg2C4:		.BYTE	$EF
_msg2C5:		.BYTE	$EF
_txt_block2D:
_msg2C6:		.BYTE	$EF
_msg2C7:		.BYTE	$EF
_msg2C8:		.BYTE	$EF
_msg2C9:		.BYTE	$EF
_msg2CA:		.BYTE	$EF
_msg2CB:		.BYTE	$EF
_msg2CC:		.BYTE	$EF
_msg2CD:		.BYTE	$EF
_msg2CE:		.BYTE	$EF
_msg2CF:		.BYTE	$EF
_msg2D0:		.BYTE	$EF
_msg2D1:		.BYTE	$EF
_msg2D2:		.BYTE	$EF
_msg2D3:		.BYTE	$EF
_msg2D4:		.BYTE	$EF
_msg2D5:		.BYTE	$EF
_txt_block2E:
_msg2D6:		.BYTE	$EF
_msg2D7:		.BYTE	$EF
_msg2D8:		.BYTE	$EF
_msg2D9:		.BYTE	$EF
_msg2DA:		.BYTE	$EF
_msg2DB:		.BYTE	$EF
_msg2DC:		.BYTE	$EF
_msg2DD:		.BYTE	$EF
_msg2DE:		.BYTE	$EF
_msg2DF:		.BYTE	$EF
_msg2E0:		.BYTE	$EF
_msg2E1:		.BYTE	$EF
_msg2E2:		.BYTE	$EF
_msg2E3:		.BYTE	$EF
_msg2E4:		.BYTE	$EF
_msg2E5:		.BYTE	$EF
_txt_block2F:
_msg2E6:		.BYTE	$EF
_msg2E7:		.BYTE	$EF
_msg2E8:		.BYTE	$EF
_msg2E9:		.BYTE	$EF
_msg2EA:		.BYTE	$EF
_msg2EB:		.BYTE	$EF
_msg2EC:		.BYTE	$EF
_msg2ED:		.BYTE	$EF
_msg2EE:		.BYTE	$EF
_msg2EF:		.BYTE	$EF
_msg2F0:		.BYTE	$EF
_msg2F1:		.BYTE	$EF
_msg2F2:		.BYTE	$EF
_msg2F3:		.BYTE	$EF
_msg2F4:		.BYTE	$EF
_msg2F5:		.BYTE	$EF
_txt_block30:
_msg2F6:		.BYTE	$EF
_msg2F7:		.BYTE	$EF
_msg2F8:		.BYTE	$EF
_msg2F9:		.BYTE	$EF
_msg2FA:		.BYTE	$EF
_msg2FB:		.BYTE	$EF
_msg2FC:		.BYTE	$EF
_msg2FD:		.BYTE	$EF
_msg2FE:		.BYTE	$EF
_msg2FF:		.BYTE	$EF
_msg300:		.BYTE	_apu,_W,_e,_apo,_r,_e,_,_c,_l,_o,_s,_i,_n,_g,_,_f,_o,_r,_,_t,_h,_e,_,_d,_a,_y,_dot,_,_P,_l,_e,_a,_s,_e,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_a,_g,_a,_i,_n,_,_t,_o,_m,_o,_r,_r,_o,_w,_exc,_apd,$EF
_msg301:		.BYTE	_apu,_W,_e,_l,_l,_,_h,_i,_exc,_,_D,_str,_d,_i,_d,_n,_apo,_t,_,_I,_,_m,_e,_e,_t,_,_y,_str,_y,_o,_u,_,_a,_t,_,_t,_h,_e,_,_e,_a,_t,_e,_r,_y,_,_t,_o,_d,_a,_y,_que,_,_H,_i,_c,_c,_u,_p,_exc,_apd,$EF
_msg302:		.BYTE	_apu,_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_smc,$EF
_msg303:		.BYTE	_apu,_W,_h,_a,_t,_,_b,_u,_s,_i,_n,_e,_s,_s,_,_d,_o,_,_y,_o,_u,_,_h,_a,_v,_e,_,_t,_h,_i,_s,_,_l,_a,_t,_e,_,_a,_t,_,_n,_i,_g,_h,_t,_que,_apd,$EF
_msg304:		.BYTE	$EF
_msg305:		.BYTE	_apu,_M,_e,_o,_w,_exc,_apd,$EF
_txt_block31:
_msg306:		.BYTE	_apu,_S,_e,_e,_m,_s,_,_t,_h,_e,_,_m,_a,_n,_,_i,_n,_,_t,_h,_e,_,_f,_r,_o,_n,_t,_,_r,_o,_o,_m,_,_t,_r,_i,_e,_d,_,_t,_o,_,_m,_a,_k,_e,_,_a,_,_M,_a,_g,_i,_c,_,_B,_a,_l,_l,_,_a,_n,_d,_,_f,_a,_i,_l,_e,_d,_smc,$EF
_msg307:		.BYTE	_apu,_I,_,_w,_str,_w,_a,_n,_t,_e,_d,_,_t,_o,_,_s,_a,_i,_l,_,_t,_h,_e,_,_f,_a,_r,_,_s,_e,_a,_s,_smc,$EF
_msg308:		.BYTE	_apu,_H,_e,_y,_,_y,_o,_u,_exc,_,_D,_i,_d,_n,_apo,_t,_,_w,_e,_,_m,_e,_e,_t,_,_u,_p,_s,_t,_a,_i,_r,_s,_,_f,_r,_o,_m,_,_t,_h,_e,_,_e,_a,_t,_e,_r,_y,_,_t,_h,_i,_s,_,_a,_f,_t,_e,_r,_n,_o,_o,_n,_que,_apd,$EF
_msg309:		.BYTE	_apu,_T,_h,_e,_,_k,_i,_n,_g,_,_h,_a,_s,_,_c,_e,_r,_t,_a,_i,_n,_l,_y,_,_t,_u,_r,_n,_e,_d,_,_i,_n,_,_f,_o,_r,_,_t,_h,_e,_,_n,_i,_g,_h,_t,_,_a,_l,_r,_e,_a,_d,_y,_exc,_apd,$EF
_msg30A:		.BYTE	_apu,_S,_t,_a,_y,_,_o,_v,_e,_r,_n,_i,_g,_h,_t,_,_a,_t,_,_t,_h,_e,_,_i,_n,_n,_,_a,_n,_d,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_i,_n,_,_t,_h,_e,_,_m,_o,_r,_n,_i,_n,_g,_,_p,_l,_e,_a,_s,_e,_smc,$EF
_msg30B:		.BYTE	_apu,_T,_h,_a,_t,_,_c,_h,_i,_l,_d,_apo,_s,_,_p,_a,_r,_e,_n,_t,_s,_,_w,_e,_r,_e,_,_d,_o,_n,_e,_,_i,_n,_,_b,_y,_,_m,_o,_n,_s,_t,_e,_r,_s,_sem,_,_t,_h,_e,_y,_,_s,_a,_y,_dot,_,_P,_o,_o,_r,_,_t,_h,_i,_n,_g,_smc,$EF
_msg30C:		.BYTE	_apu,_N,_e,_i,_g,_h,_exc,_apd,$EF
_msg30D:		.BYTE	_apu,_E,_v,_e,_n,_,_a,_,_v,_e,_r,_y,_,_w,_e,_a,_k,_,_w,_i,_z,_a,_r,_d,_,_c,_a,_n,_,_b,_r,_i,_n,_g,_,_d,_o,_w,_n,_,_a,_,_m,_o,_n,_s,_t,_e,_r,_,_b,_y,_,_h,_i,_t,_t,_i,_n,_g,_,_a,_,_v,_i,_t,_a,_l,_,_p,_o,_i,_n,_t,_,_w,_i,_t,_h,_,_a,_,_P,_o,_i,_s,_o,_n,_,_N,_e,_e,_d,_l,_e,_smc,$FD,$EB
				.BYTE	_apu,_L,_o,_n,_g,_,_a,_g,_o,_,_t,_h,_e,_y,_,_u,_s,_e,_d,_,_t,_o,_,_s,_e,_l,_l,_,_t,_h,_e,_m,_,_a,_t,_,_t,_h,_e,_,_i,_t,_e,_m,_,_s,_t,_o,_r,_e,_smc,$EF
_msg30E:		.BYTE	_apu,_B,_l,_a,_s,_t,_,_i,_t,_exc,_,_I,_,_w,_o,_n,_apo,_t,_,_b,_e,_,_f,_o,_o,_l,_e,_d,_,_a,_g,_a,_i,_n,_exc,_apd,$EB
				.BYTE	_apu,_I,_apo,_l,_l,_,_g,_e,_t,_,_y,_o,_u,_,_K,_a,_n,_d,_a,_r,_exc,_,_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_smc,$EF
_msg30F:		.BYTE	_apu,_I,_,_a,_m,_,_a,_,_g,_r,_e,_a,_t,_,_w,_a,_r,_r,_i,_o,_r,_dot,$EB
				.BYTE	_I,_t,_,_i,_s,_,_s,_a,_i,_d,_,_t,_h,_a,_t,_,_I,_,_o,_n,_c,_e,_,_d,_e,_f,_e,_a,_t,_e,_d,_,_a,_,_b,_e,_a,_r,_,_w,_i,_t,_h,_,_m,_y,_,_b,_a,_r,_e,_,_h,_a,_n,_d,_s,_smc,$FD,$EB
				.BYTE	_apu,_B,_u,_t,_,_i,_f,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_k,_n,_o,_w,_,_t,_h,_e,_,_t,_r,_u,_t,_h,_sem,_,_I,_,_u,_s,_e,_d,_,_i,_r,_o,_n,_,_c,_l,_a,_w,_s,_exc,_,_H,_a,_sem,_,_h,_a,_sem,_,_h,_a,_exc,_apd,$EF
_msg310:		.BYTE	_apu,_S,_h,_o,_o,_t,_exc,_,_T,_h,_e,_y,_,_s,_a,_y,_,_t,_h,_e,_y,_apo,_r,_e,_,_c,_l,_o,_s,_i,_n,_g,_,_a,_l,_r,_e,_a,_d,_y,_smc,$EF
_msg311:		.BYTE	_apu,_I,_t,_,_i,_s,_,_r,_u,_m,_o,_r,_e,_d,_,_t,_h,_a,_t,_,_t,_h,_e,_,_e,_l,_v,_e,_s,_,_l,_i,_v,_e,_,_h,_i,_d,_d,_e,_n,_,_i,_n,_,_t,_h,_e,_,_f,_o,_r,_e,_s,_t,_,_w,_e,_s,_t,_,_o,_f,_,_N,_o,_a,_n,_i,_e,_l,_s,_smc,$EF
_msg312:		.BYTE	_apu,_H,_a,_v,_e,_,_y,_o,_u,_,_s,_e,_e,_n,_,_m,_y,_,_h,_u,_s,_b,_a,_n,_d,_que,_apd,$FD,$EB
				.BYTE	_apu,_O,_h,_exc,_,_I,_,_m,_u,_s,_t,_,_h,_a,_v,_e,_,_d,_o,_z,_e,_d,_,_o,_f,_f,_smc,$EF
_msg313:		.BYTE	_apu,_F,_o,_r,_,_b,_e,_i,_n,_g,_,_s,_o,_,_k,_i,_n,_d,_sem,_,_I,_,_w,_i,_l,_l,_,_g,_i,_v,_e,_,_y,_o,_u,_,_a,_,_h,_i,_n,_t,_smc,$FD,$EB
				.BYTE	_apu,_I,_n,_,_t,_h,_e,_,_v,_i,_l,_l,_a,_g,_e,_,_o,_f,_,_S,_o,_o,_sem,_,_i,_n,_,_t,_h,_e,_,_m,_i,_d,_d,_l,_e,_,_o,_f,_,_t,_h,_i,_s,_,_c,_o,_n,_t,_i,_n,_e,_n,_t,_sem,_,_t,_h,_e,_r,_e,_,_i,_s,_,_a,_,_w,_e,_l,_l,_dot,_,$EB
				.BYTE	_C,_h,_e,_c,_k,_,_t,_h,_e,_,_a,_r,_e,_a,_,_a,_r,_o,_u,_n,_d,_,_i,_t,_,_c,_a,_r,_e,_f,_u,_l,_l,_y,_smc,$EF
_msg314:		.BYTE	_apu,_M,_u,_m,_b,_l,_e,_ddt,_dot,_,_m,_u,_m,_b,_l,_e,$EB
				.BYTE	_C,_o,_n,_f,_o,_u,_n,_d,_e,_d,_,_m,_o,_n,_s,_t,_e,_r,_exc,$EB
				.BYTE	_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_smc,$EF
_msg315:		.BYTE	_apu,_T,_h,_a,_n,_k,_s,_,_t,_o,_,_y,_o,_u,_sem,_,_w,_e,_,_n,_o,_w,_,_h,_a,_v,_e,_,_s,_h,_o,_p,_s,_dot,$EB
				.BYTE	_T,_h,_a,_n,_k,_,_y,_o,_u,_,_v,_e,_r,_y,_,_m,_u,_c,_h,_exc,_apd,$EF
_txt_block32:
_msg316:		.BYTE	_apu,_M,_u,_m,_b,_l,_e,_ddt,_dot,_,_m,_u,_m,_b,_l,_e,$EB
				.BYTE	_W,_h,_e,_r,_e,_,_i,_n,_,_t,_a,_r,_n,_a,_t,_i,_o,_n,_,_i,_s,_,_t,_h,_a,_t,_,_S,_w,_o,_r,_d,_,_o,_f,_,_G,_a,_i,_a,_exc,$EB
				.BYTE	_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_smc,$EF
_msg317:		.BYTE	_apu,_M,_a,_k,_i,_n,_g,_,_t,_h,_i,_s,_,_t,_o,_w,_n,_,_t,_h,_e,_,_v,_e,_r,_y,_,_b,_e,_s,_t,_,_i,_n,_,_t,_h,_e,_,_w,_o,_r,_l,_d,_,_i,_s,_,_w,_h,_a,_t,_,_k,_e,_e,_p,_s,_,_m,_e,_,_g,_o,_i,_n,_g,_smc,$EF
_msg318:		.BYTE	_apu,_C,_o,_m,_e,_,_r,_i,_g,_h,_t,_,_i,_n,_exc,_apd,$EF
_msg319:		.BYTE	_apu,_W,_h,_o,_a,_exc,_,_I,_,_c,_a,_n,_apo,_t,_,_s,_e,_e,_,_s,_t,_r,_a,_i,_g,_h,_t,_exc,_apd,$EF
_msg31A:		.BYTE	_apu,_W,_e,_l,_c,_o,_m,_e,_exc,_,_C,_o,_m,_e,_,_i,_n,_,_a,_n,_d,_,_m,_a,_k,_e,_,_y,_o,_u,_r,_s,_e,_l,_v,_e,_s,_,_a,_t,_,_h,_o,_m,_e,_exc,_apd,$EF
_msg31B:		.BYTE	_apu,_L,_a,_str,_d,_i,_str,_l,_a,_exc,_apd,$EF
_msg31C:		.BYTE	_apu,_S,_o,_sem,_,_h,_o,_w,_,_d,_i,_d,_,_y,_o,_u,_,_e,_n,_j,_o,_y,_,_t,_h,_e,_,_p,_e,_r,_f,_o,_r,_m,_a,_n,_c,_e,_que,_apd,$EF
_msg31D:		.BYTE	_apu,_G,_r,_e,_a,_t,_exc,_,_Y,_e,_a,_h,_exc,_apd,$EF
_msg31E:		.BYTE	_apu,_I,_,_d,_i,_d,_n,_apo,_t,_,_k,_n,_o,_w,_,_y,_o,_u,_,_c,_o,_u,_l,_d,_,_d,_a,_n,_c,_e,_que,_apd,$EF
_msg31F:		.BYTE	_apu,_L,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_w,_e,_apo,_l,_l,_,_h,_a,_v,_e,_,_t,_o,_,_s,_t,_a,_r,_t,_,_a,_,_r,_e,_v,_o,_l,_u,_t,_i,_o,_n,_smc,$EF
_msg320:		.BYTE	_apu,_D,_o,_n,_apo,_t,_,_s,_p,_r,_e,_a,_d,_,_t,_h,_i,_s,_,_s,_t,_o,_r,_y,_,_a,_r,_o,_u,_n,_d,_sem,_,_h,_u,_h,_exc,_apd,$EF
_msg321:		.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_a,_,_j,_a,_i,_l,_smc,$EF
_msg322:		.BYTE	_apu,_S,_e,_e,_m,_s,_,_I,_,_r,_e,_m,_e,_m,_b,_e,_r,_,_a,_,_m,_a,_n,_,_w,_h,_o,_,_c,_a,_m,_e,_,_t,_o,_,_t,_o,_w,_n,_,_s,_e,_l,_l,_i,_n,_g,_,_a,_n,_,_Y,_e,_l,_l,_o,_w,_,_O,_r,_b,_smc,$EF
_msg323:		.BYTE	_apu,_W,_e,_apo,_r,_e,_,_c,_l,_o,_s,_e,_d,_,_e,_v,_e,_n,_i,_n,_g,_s,_dot,_,_P,_l,_e,_a,_s,_e,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_t,_o,_m,_o,_r,_r,_o,_w,_smc,$EF
_msg324:		.BYTE	_apu,_I,_,_h,_e,_a,_r,_,_a,_,_c,_o,_u,_n,_t,_r,_y,_,_n,_a,_m,_e,_d,_,_I,_s,_i,_s,_,_l,_i,_e,_s,_,_i,_n,_,_t,_h,_e,_,_d,_e,_s,_e,_r,_t,_,_t,_o,_,_t,_h,_e,_,_w,_e,_s,_t,_smc,$EF
_msg325:		.BYTE	_apu,_W,_e,_l,_c,_o,_m,_e,_,_t,_o,_,_o,_u,_r,_,_t,_h,_e,_a,_t,_e,_r,_exc,_apd,$EF
_txt_block33:
_msg326:		.BYTE	_apu,_S,_h,_u,_s,_h,_exc,_,_I,_,_w,_a,_n,_t,_,_t,_o,_,_w,_a,_t,_c,_h,_,_t,_h,_i,_s,_exc,_apd,$EF
_msg327:		.BYTE	_apu,_I,_,_j,_u,_s,_t,_,_l,_o,_v,_e,_,_b,_e,_l,_l,_y,_,_d,_a,_n,_c,_i,_n,_g,_exc,_apd,$EF
_msg328:		.BYTE	_apu,_Y,_e,_a,_h,_sem,_,_V,_i,_v,_i,_a,_n,_exc,_,_H,_u,_b,_b,_a,_sem,_,_h,_u,_b,_b,_a,_exc,_apd,$EF
_msg329:		.BYTE	_apu,_I,_,_k,_n,_e,_w,_,_y,_o,_u,_,_c,_o,_u,_l,_d,_,_p,_i,_c,_k,_,_i,_t,_,_u,_p,_,_q,_u,_i,_c,_k,_l,_y,_smc,$EF
_msg32A:		.BYTE	_apu,_I,_apo,_m,_,_V,_i,_v,_i,_a,_n,_sem,_,_s,_t,_a,_r,_,_o,_f,_,_t,_h,_e,_,_s,_h,_o,_w,_smc,$EF
_msg32B:		.BYTE	_apu,_O,_h,_sem,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_d,_a,_n,_c,_e,_,_w,_i,_t,_h,_,_u,_s,_que,_apd,$FD,$EB
				.BYTE	_apu,_ldt,_ddt,_s,_h,_i,_n,_g,_sem,_,_s,_h,_i,_n,_g,_sem,_,_s,_h,_i,_n,_g,_ddt,_smc,$EB
				.BYTE	_apu,_C,_o,_m,_e,_,_o,_n,_sem,_,_g,_i,_v,_e,_,_i,_t,_,_a,_,_t,_r,_y,_exc,_,_I,_t,_apo,_s,_,_n,_o,_t,_,_s,_o,_,_h,_a,_r,_d,_smc,$EF
_msg32C:		.BYTE	_apu,_I,_t,_,_i,_s,_,_s,_a,_i,_d,_,_t,_h,_a,_t,_,_t,_h,_e,_,_o,_n,_l,_y,_,_w,_a,_y,_,_t,_o,_,_g,_o,_,_e,_a,_s,_t,_,_i,_s,_,_t,_o,_,_t,_a,_k,_e,_,_a,_,_s,_e,_c,_r,_e,_t,_,_p,_a,_s,_s,_a,_g,_e,_,_t,_h,_a,_t,_,_o,_n,_l,_y,_,_t,_h,_e,_,_d,_w,_a,_r,_v,_e,_s,_,_k,_n,_o,_w,_smc,$FD,$EB
				.BYTE	_apu,_H,_o,_w,_e,_v,_e,_r,_sem,_,_N,_o,_r,_u,_d,_,_t,_h,_e,_,_D,_w,_a,_r,_f,_,_w,_o,_n,_apo,_t,_,_t,_e,_l,_l,_,_m,_e,_,_t,_h,_e,_,_w,_a,_y,_smc,$FD,$EB
				.BYTE	_apu,_I,_,_g,_u,_e,_s,_s,_,_w,_e,_,_c,_a,_n,_,_a,_s,_k,_,_N,_o,_r,_u,_d,_apo,_s,_,_f,_r,_i,_e,_n,_d,_sem,_,_t,_h,_e,_,_k,_i,_n,_g,_,_o,_f,_,_P,_o,_r,_t,_o,_g,_a,_smc,$EF
_msg32D:		.BYTE	_apu,_T,_h,_e,_y,_,_s,_a,_y,_,_y,_o,_u,_,_c,_a,_n,_,_u,_s,_e,_,_t,_h,_e,_,_P,_o,_i,_s,_o,_n,_,_M,_o,_t,_h,_,_P,_o,_w,_d,_e,_r,_,_t,_o,_,_c,_o,_n,_f,_u,_s,_e,_,_a,_,_m,_o,_n,_s,_t,_e,_r,_smc,$EF
_msg32E:		.BYTE	_apu,_M,_u,_m,_b,_l,_e,_ddt,_dot,_,_m,_u,_m,_b,_l,_e,_apd,$EF
_msg32F:		.BYTE	_apu,_T,_h,_o,_s,_e,_,_a,_r,_e,_,_t,_h,_e,_,_r,_e,_a,_s,_o,_n,_s,_,_I,_,_c,_o,_u,_l,_d,_n,_apo,_t,_,_g,_o,_,_e,_a,_s,_t,_dot,_,_I,_apo,_m,_,_t,_h,_e,_,_l,_e,_a,_d,_e,_r,_,_o,_f,_,_t,_h,_i,_s,_,_t,_r,_o,_u,_p,_e,_smc,$EF
_msg330:		.BYTE	_apu,_I,_n,_,_t,_h,_e,_,_c,_r,_a,_g,_g,_y,_,_m,_o,_u,_n,_t,_a,_i,_n,_s,_,_t,_h,_e,_r,_e,_,_i,_s,_,_a,_,_c,_a,_v,_e,_,_t,_h,_a,_t,_,_c,_o,_n,_n,_e,_c,_t,_s,_,_t,_o,_,_t,_h,_e,_,_e,_a,_s,_t,_e,_r,_n,_,_l,_a,_n,_d,_s,_sem,_,_i,_t,_,_i,_s,_,_s,_a,_i,_d,_smc,$FD,$EB
				.BYTE	_apu,_A,_n,_d,_,_w,_e,_,_t,_r,_i,_e,_d,_,_t,_o,_,_g,_o,_,_t,_h,_e,_r,_e,_sem,_,_y,_o,_u,_,_s,_e,_e,_smc,$FD,$EB
				.BYTE	_apu,_B,_u,_t,_,_t,_h,_e,_,_c,_a,_v,_e,_,_w,_a,_s,_,_c,_l,_o,_s,_e,_d,_,_o,_f,_f,_,_h,_a,_l,_f,_w,_a,_y,_,_t,_h,_r,_o,_u,_g,_h,_,_a,_n,_d,_,_w,_e,_,_j,_u,_s,_t,_,_m,_e,_t,_,_a,_,_d,_w,_a,_r,_f,_,_n,_a,_m,_e,_d,_,_N,_o,_r,_u,_d,_smc,$EF
_msg331:		.BYTE	_apu,_I,_f,_,_y,_o,_u,_,_h,_a,_v,_e,_,_S,_p,_i,_d,_e,_r,_apo,_s,_,_W,_e,_b,_sem,_,_y,_o,_u,_,_c,_a,_n,_,_s,_l,_o,_w,_,_t,_h,_e,_,_m,_o,_n,_s,_t,_e,_r,_s,_,_d,_o,_w,_n,_smc,$EF
_msg332:		.BYTE	_apu,_A,_h,_exc,_,_A,_,_f,_i,_n,_e,_,_s,_l,_e,_e,_p,_exc,$EB
				.BYTE	_H,_o,_w,_,_m,_a,_n,_y,_,_y,_e,_a,_r,_s,_,_h,_a,_v,_e,_,_I,_,_s,_l,_e,_p,_t,_,_I,_,_w,_o,_n,_d,_e,_r,_smc,$EF
_msg333:		.BYTE	_apu,_T,_h,_a,_n,_k,_,_y,_o,_u,_,_v,_e,_r,_y,_,_m,_u,_c,_h,_smc,$EF
_msg334:		.BYTE	_apu,_N,_o,_sem,_,_I,_apo,_m,_,_n,_o,_t,_,_s,_l,_e,_e,_p,_y,_,_i,_n,_,_t,_h,_e,_,_l,_e,_a,_s,_t,_exc,_apd,$EF
_msg335:		.BYTE	_apu,_L,_o,_n,_g,_,_a,_g,_o,_,_i,_n,_,_A,_s,_s,_a,_r,_a,_m,_sem,_,_I,_apo,_v,_e,_,_h,_e,_a,_r,_d,_,_t,_e,_l,_l,_,_o,_f,_,_t,_h,_e,_,_M,_a,_g,_i,_c,_,_K,_e,_y,_smc,$FD,$EB
				.BYTE	_apu,_A,_s,_s,_a,_r,_a,_m,_,_i,_s,_,_e,_a,_s,_t,_,_o,_f,_,_R,_o,_m,_a,_l,_y,_smc,$EF
_txt_block34:
_msg336:		.BYTE	_apu,_M,_y,_,_h,_e,_a,_v,_e,_n,_s,_exc,_,_S,_l,_e,_e,_p,_i,_n,_g,_,_i,_n,_,_s,_u,_c,_h,_,_a,_,_p,_l,_a,_c,_e,_que,$EB
				.BYTE	_H,_o,_w,_,_e,_m,_b,_a,_r,_r,_a,_s,_i,_n,_g,_smc,$EF
_msg337:		.BYTE	_apu,_Y,_a,_w,_n,_exc,$EB
				.BYTE	_W,_e,_l,_c,_o,_m,_e,_,_t,_o,_,_t,_h,_e,_,_v,_i,_l,_l,_a,_g,_e,_,_o,_f,_,_N,_o,_a,_n,_i,_e,_l,_s,_smc,$EF
_msg338:		.BYTE	_apu,_ddt,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_a,_t,_apo,_s,_,_r,_i,_g,_h,_t,_dot,_,_I,_,_w,_a,_s,_,_o,_n,_,_m,_y,_,_w,_a,_y,_,_t,_o,_,_v,_i,_s,_i,_t,_,_G,_r,_a,_n,_d,_p,_a,_smc,$EF
_msg339:		.BYTE	_apu,_O,_h,_exc,_,_O,_r,_t,_e,_g,_a,_exc,$EB
				.BYTE	_Y,_o,_u,_apo,_r,_e,_,_g,_o,_n,_e,_,_f,_o,_r,_e,_v,_e,_r,_exc,_,_S,_o,_b,_sem,_,_s,_o,_b,_smc,$EF
_msg33A:		.BYTE	_apu,_O,_h,_,_b,_o,_y,_exc,_,_W,_i,_t,_h,_,_t,_h,_e,_,_M,_e,_t,_e,_o,_r,_i,_t,_e,_,_A,_r,_m,_b,_a,_n,_d,_,_o,_n,_sem,_,_I,_apo,_m,_,_f,_a,_s,_t,_e,_r,_dot,_,_T,_h,_a,_t,_apo,_s,_,_g,_r,_e,_a,_t,_exc,_apd,$EF
_msg33B:		.BYTE	_apu,_M,_y,_,_h,_u,_s,_b,_a,_n,_d,_,_r,_u,_n,_s,_,_a,_,_w,_e,_a,_p,_o,_n,_,_s,_h,_o,_p,_smc,$EF
_msg33C:		.BYTE	_apu,_I,_,_a,_m,_,_d,_o,_i,_n,_g,_,_t,_h,_i,_s,_,_w,_h,_i,_l,_e,_,_I,_,_w,_a,_i,_t,_,_f,_o,_r,_,_d,_a,_y,_,_t,_o,_,_b,_r,_e,_a,_k,_smc,$EF
_msg33D:		.BYTE	_apu,_W,_e,_l,_c,_o,_m,_e,_,_t,_o,_,_t,_h,_e,_,_C,_a,_s,_t,_l,_e,_,_o,_f,_,_I,_s,_i,_s,_smc,$EF
_msg33E:		.BYTE	_apu,_I,_apo,_m,_,_l,_o,_o,_k,_i,_n,_g,_,_f,_o,_r,_,_t,_h,_e,_,_M,_e,_t,_e,_o,_r,_i,_t,_e,_,_A,_r,_m,_b,_a,_n,_d,_sem,_,_w,_h,_i,_c,_h,_,_i,_s,_,_s,_u,_p,_p,_o,_s,_e,_d,_,_t,_o,_,_b,_e,_,_i,_n,_,_t,_h,_i,_s,_,_c,_a,_s,_t,_l,_e,_,_s,_o,_m,_e,_w,_h,_e,_r,_e,_smc,$EF
_msg33F:		.BYTE	_apu,_M,_u,_m,_b,_l,_e,_ddt,_dot,_,_m,_u,_m,_b,_l,_e,_dot,$EB
				.BYTE	_I,_f,_,_y,_o,_u,_,_h,_a,_v,_e,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_,_t,_o,_,_s,_a,_y,_,_w,_a,_i,_t,_,_u,_n,_t,_i,_l,_,_t,_o,_m,_o,_r,_r,_o,_w,_dot,_,_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_smc,$EF
_msg340:		.BYTE	_apu,_H,_u,_h,_exc,_,_H,_e,_l,_p,_exc,_,_A,_,_m,_o,_n,_s,_t,_e,_r,_,_c,_a,_t,_dot,$EB
				.BYTE	_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_smc,$EF
_msg341:		.BYTE	_apu,_T,_h,_e,_,_q,_u,_e,_e,_n,_,_h,_a,_s,_,_a,_l,_r,_e,_a,_d,_y,_,_r,_e,_t,_i,_r,_e,_d,_smc,$EF
_msg342:		.BYTE	_apu,_O,_h,_exc,_,_Y,_o,_u,_r,_,_m,_a,_j,_e,_s,_t,_y,_exc,$EB
				.BYTE	_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_smc,$EF
_msg343:		.BYTE	_apu,_G,_r,_o,_a,_n,_exc,_,_I,_,_c,_a,_n,_apo,_t,_,_s,_l,_e,_e,_p,_exc,_apd,$EF
_msg344:		.BYTE	_apu,_D,_o,_n,_apo,_t,_exc,_,_Y,_o,_u,_apo,_r,_e,_,_w,_a,_k,_i,_n,_g,_,_m,_e,_,_u,_p,_exc,_apd,$EF
_msg345:		.BYTE	_apu,_S,_n,_o,_r,_e,_ddt,_dot,_,_S,_n,_o,_r,_e,_ddt,_smc,$EF
_txt_block35:
_msg346:		.BYTE	_apu,_P,_l,_e,_a,_s,_e,_,_l,_e,_a,_v,_e,_smc,$EF
_msg347:		.BYTE	_apu,_P,_u,_r,_r,_sem,_,_p,_u,_r,_r,_smc,$EF
_msg348:		.BYTE	$EF
_msg349:		.BYTE	_apu,_O,_n,_c,_e,_sem,_,_t,_w,_o,_,_y,_o,_u,_n,_g,_,_p,_e,_o,_p,_l,_e,_,_i,_n,_,_l,_o,_v,_e,_,_c,_a,_m,_e,_,_h,_e,_r,_e,_dot,_,_I,_,_w,_o,_n,_d,_e,_r,_,_w,_h,_a,_t,_,_h,_a,_p,_p,_e,_n,_e,_d,_,_t,_o,_,_t,_h,_e,_m,_que,_apd,$EF
_msg34A:		.BYTE	_apu,_B,_a,_r,_a,_m,_o,_s,_,_p,_u,_t,_,_a,_,_c,_u,_r,_s,_e,_,_o,_n,_,_t,_h,_e,_,_t,_w,_o,_,_y,_o,_u,_n,_g,_,_f,_r,_i,_e,_n,_d,_s,_dot,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_S,_o,_,_t,_h,_e,_,_t,_w,_o,_ddt,_dot,_,_w,_e,_l,_l,_sem,_,_i,_t,_apo,_s,_,_a,_,_t,_r,_a,_g,_i,_c,_,_s,_t,_o,_r,_y,_smc,$EF
_msg34B:		.BYTE	_apu,_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_dot,_,_G,_r,_r,_smc,$EF
_msg34C:		.BYTE	_apu,_I,_t,_apo,_s,_,_s,_o,_,_n,_i,_c,_e,_,_t,_o,_,_s,_e,_e,_,_S,_a,_b,_r,_i,_n,_a,_apo,_s,_,_f,_a,_c,_e,_,_o,_n,_c,_e,_,_m,_o,_r,_e,_dot,$EB
				.BYTE	_T,_h,_a,_n,_k,_,_y,_o,_u,_,_s,_o,_,_m,_u,_c,_h,_smc,$EF
_msg34D:		.BYTE	_apu,_O,_h,_exc,_,_C,_a,_r,_l,_o,_s,_exc,_apd,$EF
_msg34E:		.BYTE	_apu,_T,_h,_a,_n,_k,_s,_,_t,_o,_,_y,_o,_u,_,_d,_e,_f,_e,_a,_t,_i,_n,_g,_,_B,_a,_r,_a,_m,_o,_s,_sem,_,_t,_h,_e,_,_c,_u,_r,_s,_e,_,_o,_n,_,_t,_h,_e,_,_t,_w,_o,_,_y,_o,_u,_n,_g,_,_f,_r,_i,_e,_n,_d,_s,_,_h,_a,_s,_,_b,_e,_e,_n,_,_l,_i,_f,_t,_e,_d,_smc,$EF
_msg34F:		.BYTE	_apu,_O,_h,_exc,_,_M,_y,_,_d,_a,_r,_l,_i,_n,_g,_,_T,_a,_n,_i,_a,_smc,$EF
_msg350:		.BYTE	_apu,_T,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_,_i,_s,_,_t,_h,_e,_,_d,_e,_s,_t,_r,_o,_y,_e,_r,_,_o,_f,_,_a,_l,_l,_,_t,_h,_i,_n,_g,_s,_smc,$FD,$EB
				.BYTE	_apu,_H,_e,_,_r,_e,_i,_g,_n,_s,_,_o,_v,_e,_r,_,_t,_h,_e,_,_r,_e,_a,_l,_m,_s,_,_o,_f,_,_d,_a,_r,_k,_n,_e,_s,_s,_,_a,_n,_d,_,_d,_e,_a,_t,_h,_smc,$EF
_msg351:		.BYTE	_apu,_I,_apo,_l,_l,_,_b,_e,_,_i,_n,_,_t,_h,_e,_,_s,_a,_c,_r,_e,_d,_,_r,_i,_v,_e,_r,_,_a,_g,_a,_i,_n,_,_t,_o,_m,_o,_r,_r,_o,_w,_smc,$EF
_msg352:		.BYTE	_apu,_T,_h,_e,_,_w,_a,_t,_e,_r,_s,_,_o,_f,_,_t,_h,_e,_,_s,_a,_c,_r,_e,_d,_,_r,_i,_v,_e,_r,_,_G,_a,_n,_g,_e,_s,_,_a,_r,_e,_,_t,_h,_e,_,_s,_o,_u,_r,_c,_e,_,_o,_f,_,_l,_i,_f,_e,_smc,$EF
_msg353:		.BYTE	_apu,_A,_a,_a,_h,_exc,_,_Z,_z,_z,_ddt,_smc,$EF
_msg354:		.BYTE	_apu,_W,_h,_a,_t,_apo,_s,_,_t,_h,_i,_s,_que,_,_T,_h,_e,_,_w,_o,_r,_l,_d,_,_w,_i,_l,_l,_,_s,_o,_o,_n,_,_b,_e,_,_d,_e,_s,_t,_r,_o,_y,_e,_d,_,_b,_y,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_que,_apd,$EF
_msg355:		.BYTE	_apu,_I,_apo,_v,_e,_,_h,_e,_a,_r,_d,_,_t,_a,_l,_k,_,_o,_f,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_sem,_,_b,_u,_t,_,_t,_h,_a,_t,_apo,_s,_,_j,_u,_s,_t,_,_a,_n,_,_o,_l,_d,_,_w,_i,_v,_e,_apo,_s,_,_t,_a,_l,_e,_smc,$EF
_txt_block36:
_msg356:		.BYTE	_apu,_I,_apo,_m,_,_t,_r,_u,_l,_y,_,_g,_r,_a,_t,_e,_f,_u,_l,_,_t,_o,_,_y,_o,_u,_smc,$EF
_msg357:		.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_W,_e,_,_i,_n,_h,_e,_r,_i,_t,_e,_d,_,_t,_h,_e,_,_s,_h,_o,_p,_,_f,_r,_o,_m,_,_o,_u,_r,_,_g,_r,_a,_n,_d,_f,_a,_t,_h,_e,_r,_smc,$EF
_msg358:		.BYTE	_apu,_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_dot,$EB
				.BYTE	_A,_c,_h,_o,_o,_exc,_apd,$EF
_msg359:		.BYTE	_apu,_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_dot,$EB
				.BYTE	_O,_o,_h,_exc,_,_T,_h,_a,_t,_apo,_s,_,_n,_i,_c,_e,_exc,_apd,$EF
_msg35A:		.BYTE	_apu,_T,_h,_e,_y,_,_a,_l,_l,_,_s,_e,_e,_m,_,_t,_o,_,_b,_e,_,_d,_r,_e,_a,_m,_i,_n,_g,_smc,$EF
_msg35B:		.BYTE	_apu,_S,_n,_o,_r,_e,_ddt,_dot,_,_s,_n,_o,_r,_e,_dot,$EB
				.BYTE	_F,_i,_r,_e,_b,_a,_n,_e,_exc,_apd,$EF
_msg35C:		.BYTE	_apu,_Z,_z,_z,_ddt,_dot,_,_Z,_z,_z,_ddt,_dot,$EB
				.BYTE	_W,_h,_a,_t,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_b,_u,_y,_que,_apd,$EF
_msg35D:		.BYTE	_apu,_I,_,_c,_o,_m,_e,_,_f,_r,_o,_m,_,_t,_h,_e,_,_l,_a,_n,_d,_,_w,_h,_e,_r,_e,_,_t,_h,_e,_,_s,_u,_n,_,_r,_i,_s,_e,_s,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_e,_,_m,_a,_n,_y,_str,_h,_e,_a,_d,_e,_d,_,_s,_e,_r,_p,_e,_n,_t,_,_c,_a,_l,_l,_e,_d,_,_O,_r,_o,_c,_h,_i,_,_t,_e,_r,_r,_o,_r,_i,_z,_e,_s,_,_u,_s,_,_t,_h,_e,_r,_e,_smc,$EF
_msg35E:		.BYTE	_apu,_M,_y,_,_s,_o,_n,_sem,_,_P,_o,_p,_o,_t,_a,_sem,_,_h,_a,_s,_,_g,_o,_n,_e,_,_t,_o,_,_t,_h,_e,_,_m,_a,_r,_k,_e,_t,_,_t,_o,_,_p,_l,_a,_y,_smc,$EF
_msg35F:		.BYTE	_apu,_A,_h,_exc,_,_W,_e,_l,_c,_o,_m,_e,_sem,_,_P,_a,_p,_a,_g,_a,_t,_e,_r,_o,_exc,_apd,$EF
_msg360:		.BYTE	_apu,_P,_o,_p,_o,_t,_a,_,_i,_s,_,_a,_,_f,_r,_i,_s,_k,_y,_,_b,_o,_y,_smc,$FD,$EB
				.BYTE	_apu,_H,_e,_,_w,_a,_s,_,_s,_c,_o,_l,_d,_e,_d,_,_b,_y,_,_h,_i,_s,_,_m,_o,_t,_h,_e,_r,_,_f,_o,_r,_,_s,_h,_o,_o,_t,_i,_n,_g,_,_a,_,_w,_a,_t,_e,_r,_,_b,_l,_a,_s,_t,_e,_r,_,_a,_t,_,_p,_e,_o,_p,_l,_e,_smc,$EF
_msg361:		.BYTE	_apu,_F,_r,_o,_m,_,_h,_e,_r,_e,_sem,_,_i,_f,_,_y,_o,_u,_,_r,_o,_w,_,_s,_o,_u,_t,_h,_,_a,_l,_o,_n,_g,_,_t,_h,_e,_,_c,_o,_a,_s,_t,_sem,_,_y,_o,_u,_apo,_l,_l,_,_g,_o,_,_a,_r,_o,_u,_n,_d,_,_t,_h,_e,_,_c,_a,_p,_e,_,_o,_f,_,_T,_e,_d,_a,_n,_k,_i,_smc,$FD,$EB
				.BYTE	_apu,_I,_f,_,_y,_o,_u,_,_k,_e,_e,_p,_,_g,_o,_i,_n,_g,_,_a,_l,_o,_n,_g,_,_t,_h,_e,_,_s,_h,_o,_r,_e,_l,_i,_n,_e,_,_y,_o,_u,_apo,_l,_l,_,_r,_e,_a,_c,_h,_,_B,_a,_h,_a,_r,_a,_t,_a,_,_a,_n,_d,_,_f,_i,_n,_a,_l,_l,_y,_,_J,_i,_p,_a,_n,_g,_sem,_,_k,_n,_o,_w,_n,_,_a,_s,_,_t,_h,_e,_,_g,_o,_l,_d,_e,_n,_,_c,_o,_u,_n,_t,_r,_y,_smc,$FD,$EB
				.BYTE	_apu,_I,_t,_,_i,_s,_,_s,_a,_i,_d,_,_t,_h,_a,_t,_,_w,_h,_o,_s,_o,_e,_v,_e,_r,_,_g,_a,_t,_h,_e,_r,_s,_,_t,_h,_e,_,_6,_,_O,_r,_b,_s,_sem,_,_s,_c,_a,_t,_t,_e,_r,_e,_d,_,_t,_h,_r,_o,_u,_g,_h,_o,_u,_t,_,_t,_h,_e,_,_w,_o,_r,_l,_d,_sem,_,_c,_a,_n,_,_t,_r,_a,_v,_e,_l,_,_a,_n,_y,_w,_h,_e,_r,_e,_,_w,_i,_t,_h,_o,_u,_t,_,_a,_,_s,_h,_i,_p,_smc,$FD,$EB
				.BYTE	_apu,_A,_n,_y,_w,_a,_y,_sem,_,_g,_o,_,_s,_o,_u,_t,_h,_exc,_apd,$EF
_msg362:		.BYTE	_N,_o,_,_r,_e,_s,_p,_o,_n,_s,_e,_dot,_,_L,_o,_o,_k,_s,_,_d,_e,_a,_d,_dot,$EF
_msg363:		.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_a,_,_p,_r,_i,_s,_o,_n,_dot,$EB
				.BYTE	_G,_e,_t,_,_o,_u,_t,_exc,_apd,$EF
_msg364:		.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_c,_a,_r,_r,_y,_i,_n,_g,_,_a,_,_j,_o,_k,_e,_,_t,_o,_o,_,_f,_a,_r,_sem,_,_w,_o,_u,_l,_d,_n,_apo,_t,_,_y,_o,_u,_,_s,_a,_y,_que,$EB
				.BYTE	_T,_h,_i,_s,_,_v,_i,_l,_l,_a,_g,_e,_,_d,_e,_s,_t,_r,_o,_y,_e,_d,_,_b,_y,_,_a,_n,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_exc,_que,_,_C,_o,_m,_e,_,_n,_o,_w,_smc,$EF
_msg365:		.BYTE	_apu,_T,_h,_e,_y,_,_s,_a,_y,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_,_r,_e,_s,_i,_d,_e,_s,_,_d,_e,_e,_p,_,_i,_n,_,_t,_h,_e,_,_n,_o,_r,_t,_h,_e,_r,_n,_,_m,_o,_u,_n,_t,_a,_i,_n,_s,_,_o,_f,_,_t,_h,_e,_,_N,_e,_c,_r,_o,_g,_o,_n,_d,_smc,$EF

		ECHO "bank 11 free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB