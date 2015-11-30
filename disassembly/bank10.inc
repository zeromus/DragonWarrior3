
		ORG $8000

; there are more than 1800 different message resources in these 6 data banks.
; to keep pointers to all messages you'll need more than 3.5Kb or data
; to reduce memory usage, all messages is grouped in blocks with exactly 16
; different messages in every block, so the programm can only have 16 times
; less of pointers data, but has to be some more lookups and calculations
;
; message terminate symbols are $EE, $EF, $FF. to shorten the resulting strings
; length in source, an additional special symbol $EB is used to wrap around stings here
;
; even if there is no messages in block or message is empty, it has to have
; terminate symbol to make sure you find a proper message
;
_txt_block0:
_msg000:		.BYTE	_name,_idx,_,_i,_s,_,_a,_s,_s,_e,_s,_s,_i,_n,_g,_,_t,_h,_e,_,_s,_i,_t,_u,_a,_t,_i,_o,_n,_dot,$EE
_msg001:		.BYTE	_name,_idx,_,_a,_t,_t,_a,_c,_k,_s,_exc,$EE
_msg002:		.BYTE	_name,_idx,_,_c,_h,_a,_n,_t,_s,_,$F3,_dot,$EE
_msg003:		.BYTE	_name,_,_u,_s,_e,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg004:		.BYTE	_name,_idx,_,_p,_r,_o,_t,_e,_c,_t,_s,_,_i,_t,_s,_e,_l,_f,_dot,$EE
_msg005:		.BYTE	$FD,$EF
_msg006:		.BYTE	_name,_,_g,_r,_a,_b,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg007:		.BYTE	_name,_idx,_,_d,_o,_d,_g,_e,_s,_,_n,_i,_m,_b,_l,_y,_dot,$EE
_msg008:		.BYTE	_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_a,_t,_t,_e,_m,_p,_t,_s,_,_t,_o,_,_f,_l,_e,_e,_dot,$EE
_msg009:		.BYTE	_name,_,_a,_p,_p,_e,_a,_r,_s,_exc,$EE
_msg00A:		.BYTE	_name,_,_i,_s,_,_n,_u,_m,_b,_,_a,_n,_d,_,_u,_n,_a,_b,_l,_e,_,_t,_o,_,_m,_o,_v,_e,_dot,$EE
_msg00B:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_H,_i,_m,_i,_k,_o,_,_i,_s,_,_t,_h,_e,_,_O,_r,_o,_c,_h,_i,_exc,$EB
				.BYTE	_T,_h,_a,_t,_,_r,_u,_m,_o,_r,_,_h,_a,_s,_,_s,_p,_r,_e,_a,_d,_,_t,_h,_r,_o,_u,_g,_h,_o,_u,_t,_,_t,_h,_e,_,_c,_o,_u,_n,_t,_r,_y,_,_l,_i,_k,_e,_,_w,_i,_l,_d,_f,_i,_r,_e,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg00C:		.BYTE	_number,_,_d,_a,_m,_a,_g,_e,_,_p,_o,_i,_n,_t,$C0,_,_f,_o,_r,_,_name,_idx,_dot,$EE
_msg00D:		.BYTE	_name,_idx,_,_i,_s,_,_d,_e,_f,_e,_a,_t,_e,_d,_exc,$EE
_msg00E:		.BYTE	_Y,_o,_u,_,_h,_a,_v,_e,_,_d,_e,_f,_e,_a,_t,_e,_d,_,_name,_dot,$EE
_msg00F:		.BYTE	_Y,_o,_u,_,_h,_a,_v,_e,_,_v,_a,_n,_q,_u,_i,_s,_h,_e,_d,_,_a,_l,_l,_,_y,_o,_u,_r,_,_f,_o,_e,_s,_dot,$EE
_txt_block1:
_msg010:		.BYTE	_A,_,_t,_r,_e,_m,_e,_n,_d,_o,_u,_s,_,_h,_i,_t,_exc,$EE
_msg011:		.BYTE	_A,_,_t,_e,_r,_r,_i,_b,_l,_e,_,_b,_l,_o,_w,_exc,$EE
_msg012:		.BYTE	_I,_t,_,_h,_a,_s,_,_n,_o,_,_e,_f,_f,_e,_c,_t,_,_o,_n,_,_name,_idx,_dot,$EE
_msg013:		.BYTE	_number,_,_d,_a,_m,_a,_g,_e,_,_p,_o,_i,_n,_t,$C0,_,_f,_o,_r,_,_name,_dot,$EE
_msg014:		.BYTE	_name,_idx,_,_h,_a,_s,_,_r,_e,_c,_o,_v,_e,_r,_e,_d,_exc,$EE
_msg015:		.BYTE	_name,_idx,_apo,_s,_,_D,_e,_f,_e,_n,_s,_e,_,_P,_o,_w,_e,_r,_,_i,_s,_,_l,_o,_w,_e,_r,_e,_d,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg016:		.BYTE	_name,_idx,_apo,_s,_,_D,_e,_f,_e,_n,_s,_e,_,_P,_o,_w,_e,_r,_,_h,_a,_s,_,_g,_o,_n,_e,_,_d,_o,_w,_n,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg017:		.BYTE	_B,_u,_t,_,_a,_l,_l,_,_e,_s,_c,_a,_p,_e,_,_p,_a,_t,_h,_s,_,_a,_r,_e,_,_b,_l,_o,_c,_k,_e,_d,_dot,$EE
_msg018:		.BYTE	_name,_,_f,_a,_l,_l,_s,_,_a,_s,_l,_e,_e,_p,_exc,$EE
_msg019:		.BYTE	_name,_idx,_,_i,_s,_,_p,_u,_t,_,_t,_o,_,_s,_l,_e,_e,_p,_dot,$EE
_msg01A:		.BYTE	_name,_idx,_,_i,_s,_,_n,_o,_t,_,_a,_s,_l,_e,_e,_p,_exc,$EE
_msg01B:		.BYTE	_name,_idx,_,_i,_s,_,_a,_s,_l,_e,_e,_p,_dot,$EE
_msg01C:		.BYTE	_name,_idx,_,_h,_a,_s,_,_a,_w,_a,_k,_e,_n,_e,_d,_exc,$EE
_msg01D:		.BYTE	_T,_h,_e,_,_p,_o,_i,_s,_o,_n,_,_h,_a,_s,_,_a,_f,_f,_e,_c,_t,_e,_d,_,_name,_dot,$EE
_msg01E:		.BYTE	_B,_u,_t,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_,_i,_s,_,_c,_o,_n,_t,_a,_i,_n,_e,_d,_dot,$EE
_msg01F:		.BYTE	_I,_t,_,_h,_a,_s,_,_n,_o,_,_e,_f,_f,_e,_c,_t,_,_o,_n,_,_name,_idx,_dot,$EE
_txt_block2:
_msg020:		.BYTE	_M,_P,_,_i,_s,_,_n,_o,_t,_,_h,_i,_g,_h,_,_e,_n,_o,_u,_g,_h,_exc,$EE
_msg021:		.BYTE	_name,_,_t,_h,_e,_r,_e,_b,_y,_,_g,_a,_i,_n,_s,_,_number,_,_e,_x,_p,_e,_r,_i,_e,_n,_c,_e,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg022:		.BYTE	_M,_i,_s,_s,_e,_d,_exc,$EB
				.BYTE	_N,_o,_,_d,_a,_m,_a,_g,_e,_,_t,_o,_,_name,_idx,_exc,$EE
_msg023:		.BYTE	_name,_,_a,_t,_t,_a,_c,_k,_s,_,_herhis,_,_p,_a,_r,_t,_y,_dot,$EE
_msg024:		.BYTE	_B,_u,_t,_,_name,_idx,_,_i,_s,_,_a,_w,_a,_k,_e,_exc,$EE
_msg025:		.BYTE	_B,_u,_t,_,_name,_idx,_,_i,_s,_,_n,_o,_t,_,_a,_w,_a,_k,_e,_dot,$EE
_msg026:		.BYTE	_Y,_o,_u,_,_o,_b,_t,_a,_i,_n,_,_number,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_dot,$EE
_msg027:		.BYTE	_name,_idx,_,_i,_s,_,_d,_e,_a,_d,_dot,$EE
_msg028:		.BYTE	_I,_t,_,_h,_a,_s,_,_n,_o,_,_e,_f,_f,_e,_c,_t,_,_o,_n,_,_name,_idx,_dot,$EE
_msg029:		.BYTE	_A,_n,_d,_,_s,_o,_,_t,_h,_e,_,_d,_a,_y,_,_b,_r,_e,_a,_k,_s,_ddt,_dot,$EE
_msg02A:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_T,_h,_e,_,_f,_a,_l,_s,_e,_,_k,_i,_n,_g,_,_i,_s,_,_n,_o,_,_m,_o,_r,_e,_exc,$FD,$EB
				.BYTE	_T,_h,_e,_r,_e,_u,_p,_o,_n,_sem,_,_t,_h,_e,_,_t,_r,_u,_e,_,_k,_i,_n,_g,_,_i,_s,_,_r,_e,_s,_c,_u,_e,_d,_,_f,_r,_o,_m,_,_p,_r,_i,_s,_o,_n,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg02B:		.BYTE	_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_i,_s,_,_w,_i,_p,_e,_d,_,_o,_u,_t,_dot,$EE
_msg02C:		.BYTE	_name,_idx,_,_s,_h,_a,_t,_t,_e,_r,_s,_,_i,_n,_t,_o,_,_p,_i,_e,_c,_e,_s,_dot,$EE
_msg02D:		.BYTE	_name,_idx,_apo,_s,_,_p,_o,_w,_e,_r,_,_w,_a,_n,_e,_s,_,_a,_n,_d,_,_i,_t,_s,_,_l,_i,_f,_e,_,_c,_o,_m,_e,_s,_,_t,_o,_,_a,_n,_,_e,_n,_d,_dot,$EE
_msg02E:		.BYTE	_name,_idx,_apo,_s,_,_s,_p,_e,_l,_l,_,_i,_s,_,_c,_o,_n,_t,_a,_i,_n,_e,_d,_dot,$EE
_msg02F:		.BYTE	_name,_idx,_,_i,_s,_,_s,_u,_r,_r,_o,_u,_n,_d,_e,_d,_,_b,_y,_,_a,_,_c,_l,_o,_u,_d,_,_o,_f,_,_m,_i,_r,_a,_g,_e,_s,_dot,$EE
_txt_block3:
_msg030:		.BYTE	_name,_idx,_,_e,_m,_i,_t,_s,_,_g,_a,_l,_e,_s,_,_o,_f,_,_s,_w,_e,_e,_t,_,_b,_r,_e,_a,_t,_h,_dot,$EE
_msg031:		.BYTE	_name,_idx,_,_e,_m,_i,_t,_s,_,_g,_a,_l,_e,_s,_,_o,_f,_,_t,_o,_x,_i,_c,_,_b,_r,_e,_a,_t,_h,_dot,$EE
_msg032:		.BYTE	_name,_idx,_,_r,_e,_p,_e,_l,_s,_,_t,_h,_e,_,_p,_o,_i,_s,_o,_n,_dot,$EE
_msg033:		.BYTE	_name,_idx,_,_e,_m,_i,_t,_s,_,_g,_a,_l,_e,_s,_,_o,_f,_,_s,_c,_o,_r,_c,_h,_i,_n,_g,_,_b,_r,_e,_a,_t,_h,_dot,$EE
_msg034:		.BYTE	_name,_,_i,_s,_,_n,_u,_m,_b,_,_a,_n,_d,_,_u,_n,_a,_b,_l,_e,_,_t,_o,_,_m,_o,_v,_e,_dot,$EE
_msg035:		.BYTE	_name,_,_d,_o,_d,_g,_e,_s,_,_t,_h,_e,_,_g,_a,_l,_e,_,_o,_f,_,_b,_r,_e,_a,_t,_h,_dot,$EE
_msg036:		.BYTE	_name,_idx,_,_e,_m,_i,_t,_s,_,_g,_a,_l,_e,_s,_,_o,_f,_,_f,_l,_a,_m,_i,_n,_g,_,_b,_r,_e,_a,_t,_h,_dot,$EE
_msg037:		.BYTE	_name,_idx,_,_e,_m,_i,_t,_s,_,_g,_a,_l,_e,_s,_,_o,_f,_,_b,_l,_i,_z,_z,_a,_r,_d,_,_b,_r,_e,_a,_t,_h,_dot,$EE
_msg038:		.BYTE	_name,_idx,_,_i,_s,_,_n,_u,_m,_b,_,_a,_n,_d,_,_u,_n,_a,_b,_l,_e,_,_t,_o,_,_m,_o,_v,_e,_dot,$EE
_msg039:		.BYTE	_number,_,_M,_P,_,_p,_o,_i,_n,_t,$C0,_,_a,_r,_e,_,_s,_n,_a,_t,_c,_h,_e,_d,_,_f,_r,_o,_m,_,_name,_idx,_dot,$EE
_msg03A:		.BYTE	_name,_idx,_,_d,_a,_n,_c,_e,_s,_,_a,_,_c,_u,_r,_i,_o,_u,_s,_,_d,_a,_n,_c,_e,_dot,$EE
_msg03B:		.BYTE	_name,_idx,_apo,_s,_,_d,_e,_f,_e,_n,_s,_e,_,_p,_o,_w,_e,_r,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg03C:		.BYTE	_name,_idx,_,_c,_o,_m,_e,_s,_,_b,_a,_c,_k,_,_t,_o,_,_l,_i,_f,_e,_dot,$EE
_msg03D:		.BYTE	_name,_idx,_,_d,_o,_e,_s,_,_n,_o,_t,_,_c,_o,_m,_e,_,_b,_a,_c,_k,_,_t,_o,_,_l,_i,_f,_e,_dot,$EE
_msg03E:		.BYTE	_name,_idx,_apo,_s,_,_A,_g,_i,_l,_i,_t,_y,_,_g,_o,_e,_s,_,_d,_o,_w,_n,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg03F:		.BYTE	_name,_idx,_apo,_s,_,_l,_i,_f,_e,_,_i,_s,_,_s,_n,_u,_f,_f,_e,_d,_,_o,_u,_t,_dot,$EE
_txt_block4:
_msg040:		.BYTE	_B,_u,_t,_,_n,_o,_t,_h,_i,_n,_g,_,_h,_a,_p,_p,_e,_n,_s,_exc,$EE
_msg041:		.BYTE	_name,_idx,_apo,_s,_,_s,_p,_e,_l,_l,_,_i,_s,_,_d,_e,_f,_l,_e,_c,_t,_e,_d,_dot,$EE
_msg042:		.BYTE	_name,_apo,_s,_,_n,_u,_m,_b,_n,_e,_s,_s,_,_g,_o,_e,_s,_,_a,_w,_a,_y,_dot,$EE
_msg043:		.BYTE	_name,_,_c,_h,_a,_n,_g,_e,_s,_,_i,_n,_t,_o,_,_t,_h,_e,_,_s,_p,_i,_t,_t,_i,_n,_g,_,_i,_m,_a,_g,_e,_,_o,_f,_,_name,_dot,$EE
_msg044:		.BYTE	_T,_h,_e,_,_p,_o,_i,_s,_o,_n,_,_l,_e,_a,_v,_e,_s,_,_name,_apo,_s,_,_b,_o,_d,_y,_dot,$EE
_msg045:		.BYTE	_name,_idx,_apo,_s,_,_A,_g,_i,_l,_i,_t,_y,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg046:		.BYTE	_name,_idx,_,_i,_s,_,_c,_o,_n,_f,_u,_s,_e,_d,_dot,$EE
_msg047:		.BYTE	_name,_,_a,_s,_s,_u,_m,_e,_s,_,_t,_h,_e,_,_s,_h,_a,_p,_e,_,_o,_f,_,_a,_,_h,_u,_g,_e,_,_d,_r,_a,_g,_o,_n,_exc,$EE
_msg048:		.BYTE	_A,_,_w,_a,_l,_l,_,_o,_f,_,_l,_i,_g,_h,_t,_,_a,_p,_p,_e,_a,_r,_s,_,_b,_e,_f,_o,_r,_e,_,_name,_idx,_dot,$EE
_msg049:		.BYTE	_A,_,_g,_a,_r,_m,_e,_n,_t,_,_o,_f,_,_l,_i,_g,_h,_t,_sem,_,_l,_i,_k,_e,_,_u,_n,_t,_o,_,_s,_i,_l,_k,_sem,_,_s,_u,_r,_r,_o,_u,_n,_d,_s,_,_t,_h,_e,_,_hero,_dot,$EE
_msg04A:		.BYTE	_name,_idx,_apo,_s,_,_A,_t,_t,_a,_c,_k,_,_P,_o,_w,_e,_r,_,_i,_n,_c,_r,_e,_a,_s,_e,_s,_exc,$EE
_msg04B:		.BYTE	_name,_idx,_,_c,_a,_l,_l,_s,_,_f,_o,_r,_,_r,_e,_i,_n,_f,_o,_r,_c,_e,_m,_e,_n,_t,_s,_dot,$EE
_msg04C:		.BYTE	_A,_n,_o,_t,_h,_e,_r,_,_name,_idx,_,_a,_p,_p,_e,_a,_r,_s,_dot,$EE
_msg04D:		.BYTE	_B,_u,_t,_,_n,_o,_,_h,_e,_l,_p,_,_a,_r,_r,_i,_v,_e,_s,_exc,$EE
_msg04E:		.BYTE	_name,_idx,_,_i,_s,_,_s,_e,_n,_t,_,_f,_l,_y,_i,_n,_g,_,_i,_n,_t,_o,_,_t,_h,_e,_,_f,_a,_r,_,_d,_i,_s,_t,_a,_n,_c,_e,_dot,$EE
_msg04F:		.BYTE	_name,_,_i,_s,_,_s,_e,_n,_t,_,_f,_l,_y,_i,_n,_g,_,_f,_a,_r,_,_a,_w,_a,_y,_dot,$EE
_txt_block5:
_msg050:		.BYTE	_name,_idx,_,_s,_t,_a,_r,_t,_s,_,_t,_o,_,_f,_l,_e,_e,_dot,$EE
_msg051:		.BYTE	_A,_l,_l,_,_y,_o,_u,_r,_,_f,_o,_e,_s,_,_s,_t,_a,_r,_t,_,_t,_o,_,_f,_l,_e,_e,_dot,$EE
_msg052:		.BYTE	_name,_,_i,_s,_,_i,_r,_o,_n,_i,_z,_e,_d,_sem,_,_i,_m,_p,_e,_r,_v,_i,_o,_u,_s,_,_t,_o,_,_a,_t,_t,_a,_c,_k,_dot,$EE
_msg053:		.BYTE	_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_i,_s,_,_i,_r,_o,_n,_i,_z,_e,_d,_sem,_,_i,_m,_p,_e,_r,_v,_i,_o,_u,_s,_,_t,_o,_,_a,_t,_t,_a,_c,_k,_dot,$EE
_msg054:		.BYTE	_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_i,_s,_,_i,_r,_o,_n,_i,_z,_e,_d,_exc,$EE
_msg055:		.BYTE	_I,_r,_o,_n,_i,_z,_e,_,_i,_s,_,_n,_o,_,_l,_o,_n,_g,_e,_r,_,_e,_f,_f,_e,_c,_t,_i,_v,_e,_dot,$EE
_msg056:		.BYTE	_T,_h,_e,_,_w,_a,_l,_l,_,_o,_f,_,_l,_i,_g,_h,_t,_,_r,_e,_f,_l,_e,_c,_t,_s,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_,_b,_a,_c,_k,_dot,$EE
_msg057:		.BYTE	_name,_,_c,_a,_l,_l,_s,_,_f,_o,_r,_t,_h,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_,_u,_n,_b,_e,_l,_i,_e,_v,_a,_b,_l,_y,_,_f,_r,_i,_g,_h,_t,_e,_n,_i,_n,_g,_dot,$EE
_msg058:		.BYTE	_T,_h,_e,_,_a,_r,_e,_a,_,_i,_s,_,_e,_n,_g,_u,_l,_f,_e,_d,_,_i,_n,_,_a,_,_f,_i,_e,_r,_c,_e,_,_d,_a,_r,_k,_n,_e,_s,_s,_dot,$EE
_msg059:		.BYTE	_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_g,_a,_i,_n,_s,_,_a,_d,_d,_i,_t,_i,_o,_n,_a,_l,_,_A,_t,_t,_a,_c,_k,_,_P,_o,_w,_e,_r,_dot,$EE
_msg05A:		.BYTE	_T,_i,_m,_e,_,_c,_e,_a,_s,_e,_s,_exc,$EE
_msg05B:		.BYTE	_T,_h,_e,_,_f,_o,_e,_,_i,_s,_,_t,_a,_k,_e,_n,_,_o,_f,_f,_,_g,_u,_a,_r,_d,_dot,$EE
_msg05C:		.BYTE	_name,_idx,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_c,_e,_a,_s,_e,_s,_,_t,_h,_e,_,_a,_t,_t,_a,_c,_k,_,_a,_n,_d,_,_w,_i,_t,_h,_d,_r,_a,_w,_s,_dot,$EE
_msg05D:		.BYTE	_name,_,_d,_e,_p,_a,_r,_t,_s,_dot,$EE
_msg05E:		.BYTE	_A,_l,_l,_,_y,_o,_u,_r,_,_f,_o,_e,_s,_,_d,_e,_p,_a,_r,_t,_dot,$EE
_msg05F:		.BYTE	_name,_idx,_,_i,_s,_,_u,_n,_a,_b,_l,_e,_,_t,_o,_,_f,_l,_e,_e,_dot,$EE
_txt_block6:
_msg060:		.BYTE	_W,_a,_i,_t,_exc,_,_Y,_o,_u,_,_b,_e,_t,_t,_e,_r,_,_n,_o,_t,_,_g,_i,_v,_e,_,_u,_p,_,_n,_o,_w,_exc,$FD,$EB,$EF
_msg061:		.BYTE	_R,_e,_g,_r,_e,_t,_f,_u,_l,_l,_y,_sem,_,_A,_d,_v,_e,_n,_t,_u,_r,_e,_,_L,_o,_g,_,_number,_,_h,_a,_s,_,_v,_a,_n,_i,_s,_h,_e,_d,_dot,$EE
_msg062:		.BYTE	_name,_,_h,_a,_d,_,_a,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_dot,$FD,$EB,$EF
_msg063:		.BYTE	_Y,_o,_u,_r,_,_f,_o,_e,_s,_,_h,_a,_d,_,_a,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_dot,$FD,$EB,$EF
_msg064:		.BYTE	_name,_,_o,_p,_e,_n,_s,_,_t,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_exc,$FD,$EB,$EF
_msg065:		.BYTE	_name,_,_f,_i,_n,_d,_s,_,_t,_h,_e,_,_item,_exc,$EE
_msg066:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_H,_o,_w,_e,_v,_e,_r,_sem,_,_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_c,_a,_n,_apo,_t,_,_c,_a,_r,_r,_y,_,_a,_n,_y,_,_m,_o,_r,_e,_,_i,_t,_e,_m,_s,_dot,$EE
_msg067:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_H,_o,_w,_e,_v,_e,_r,_sem,_,_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_c,_a,_n,_apo,_t,_,_c,_a,_r,_r,_y,_,_a,_n,_y,_,_m,_o,_r,_e,_,_i,_t,_e,_m,_s,_dot,$EE
_msg068:		.BYTE	_,_,_,$EB
				.BYTE	_W,_h,_a,_t,_,_w,_i,_l,_l,_,_y,_o,_u,_,_d,_i,_s,_c,_a,_r,_d,_que,$EF
_msg069:		.BYTE	_,_,_,$EB
				.BYTE	_name,_,_g,_i,_v,_e,_s,_,_u,_p,_,_t,_h,_e,_,_item,_dot,$EE
_msg06A:		.BYTE	_,_,_,$EB
				.BYTE	_W,_h,_o,_,_w,_i,_l,_l,_,_d,_i,_s,_c,_a,_r,_d,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_que,$EE
_msg06B:		.BYTE	_,_,_,$EB
				.BYTE	_name,_,_d,_i,_s,_c,_a,_r,_d,_s,_,_t,_h,_e,_,_item,_,_a,_n,_d,_,_a,_c,_q,_u,_i,_r,_e,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg06C:		.BYTE	_T,_h,_e,_,_s,_p,_e,_l,_l,_,_i,_s,_,_r,_e,_f,_l,_e,_c,_t,_e,_d,_,_b,_a,_c,_k,_,_b,_y,_,_t,_h,_e,_,_w,_a,_l,_l,_,_o,_f,_,_l,_i,_g,_h,_t,_dot,$EE
_msg06D:		.BYTE	_name,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_m,_o,_u,_n,_t,_s,_,_a,_n,_,_a,_t,_t,_a,_c,_k,_dot,$EE
_msg06E:		.BYTE	_Y,_o,_u,_r,_,_f,_o,_e,_s,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_m,_o,_u,_n,_t,_,_a,_n,_,_a,_t,_t,_a,_c,_k,_dot,$EE
_msg06F:		.BYTE	_apu,_Y,_i,_k,_e,_s,_exc,_,_T,_h,_i,_s,_,_i,_s,_,_c,_o,_l,_d,_exc,_apd,$EF
_txt_block7:
_msg070:		.BYTE	_apu,_C,_apo,_m,_o,_n,_exc,_,_S,_t,_o,_p,_,_t,_h,_a,_t,_exc,_apd,$EF
_msg071:		.BYTE	_name,_,_i,_s,_,_t,_a,_k,_e,_n,_,_o,_f,_f,_,_g,_u,_a,_r,_d,_,_a,_n,_d,_,_b,_e,_w,_i,_l,_d,_e,_r,_e,_d,_dot,$EE
_msg072:		.BYTE	_Y,_o,_u,_r,_,_f,_o,_e,_s,_,_a,_r,_e,_,_t,_a,_k,_e,_n,_,_o,_f,_f,_,_g,_u,_a,_r,_d,_,_a,_n,_d,_,_b,_e,_w,_i,_l,_d,_e,_r,_e,_d,_dot,$EE
_msg073:		.BYTE	_name,_idx,_,_i,_s,_,_c,_o,_n,_f,_u,_s,_e,_d,_dot,$EE
_msg074:		.BYTE	_name,_idx,_,_h,_a,_s,_,_c,_o,_m,_e,_,_t,_o,_,_i,_t,_s,_,_s,_e,_n,_s,_e,_s,_dot,$EE
_msg075:		.BYTE	_number,_,_M,_P,_,_p,_o,_i,_n,_t,$C0,_,_a,_r,_e,_,_s,_n,_a,_t,_c,_h,_e,_d,_,_f,_r,_o,_m,_,_name,_idx,_dot,$EE
_msg076:		.BYTE	_Z,_o,_m,_a,_,_n,_u,_l,_l,_i,_f,_i,_e,_s,_,_t,_h,_e,_,_p,_o,_w,_e,_r,_,_o,_f,_,_a,_l,_l,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_s,_,_o,_f,_,_hero,_apo,_s,_,_p,_a,_r,_t,_y,_dot,$EE
_msg077:		.BYTE	_name,_,_a,_s,_s,_u,_m,_e,_s,_,_herhis,_,_o,_r,_i,_g,_i,_n,_a,_l,_,_s,_h,_a,_p,_e,_dot,$EE
_msg078:		.BYTE	_T,_h,_e,_,_e,_f,_f,_e,_c,_t,_,_o,_f,_,_t,_h,_e,_,$F3,_,_i,_s,_,_g,_o,_n,_e,_dot,$EE
_msg079:		.BYTE	_name,_idx,_,_i,_s,_,_u,_n,_h,_u,_r,_t,_dot,$EE
_msg07A:		.BYTE	_M,_i,_s,_s,_e,_d,_exc,$EB
				.BYTE	_name,_idx,_,_i,_s,_,_u,_n,_h,_u,_r,_t,_dot,$EE
_msg07B:		.BYTE	_H,_o,_w,_e,_v,_e,_r,_sem,_,_t,_h,_e,_,_i,_n,_t,_e,_n,_d,_e,_d,_,_f,_o,_e,_,_i,_s,_n,_apo,_t,_,_t,_h,_e,_r,_e,_dot,$EE
_msg07C:		.BYTE	_C,_a,_n,_apo,_t,_,_m,_o,_v,_e,_,_b,_e,_c,_a,_u,_s,_e,_,_o,_f,_,_a,_,_c,_u,_r,_s,_e,_exc,$EE
_msg07D:		.BYTE	_T,_h,_e,_,_P,_o,_i,_s,_o,_n,_,_N,_e,_e,_d,_l,_e,_,_p,_e,_n,_e,_t,_r,_a,_t,_e,_s,_,_name,_idx,_apo,_s,_,_v,_i,_t,_a,_l,_,_s,_p,_o,_t,_dot,$EE
_msg07E:		.BYTE	_T,_h,_e,_,_S,_t,_o,_n,_e,_,_o,_f,_,_L,_i,_f,_e,_,_s,_h,_a,_t,_t,_e,_r,_s,_,_i,_n,_,_name,_apo,_s,_,_p,_l,_a,_c,_e,_dot,$EE
_msg07F:		.BYTE	_A,_,_w,_a,_r,_m,_,_l,_i,_g,_h,_t,_,_e,_n,_g,_u,_l,_f,_s,_,_t,_h,_e,_,_a,_r,_e,_a,_dot,$EE
_txt_block8:
_msg080:		.BYTE	_name,_idx,_,_g,_e,_t,_s,_,_number,_,_d,_a,_m,_a,_g,_e,_,_p,_o,_i,_n,_t,$C0,_,_a,_n,_d,_,_b,_e,_c,_o,_m,_e,_s,_,_p,_a,_r,_a,_l,_y,_z,_e,_d,_dot,$EE
_msg081:		.BYTE	_H,_o,_w,_e,_v,_e,_r,_sem,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_,_i,_s,_,_b,_r,_o,_k,_e,_n,_dot,$EE
_msg082:		.BYTE	_name,_,_o,_b,_t,_a,_i,_n,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg083:		.BYTE	_name,_idx,_,_d,_i,_d,_,_n,_o,_t,_,_d,_i,_e,_dot,$EE
_msg084:		.BYTE	_number,_,_M,_P,_,_p,_o,_i,_n,_t,$C0,_,_a,_r,_e,_,_s,_n,_a,_t,_c,_h,_e,_d,_,_f,_r,_o,_m,_,_name,_idx,_dot,$EE
_msg085:		.BYTE	_name,_idx,_,_b,_e,_c,_o,_m,_e,_s,_,_e,_v,_e,_n,_,_m,_o,_r,_e,_,_c,_o,_n,_f,_u,_s,_e,_d,_dot,$EE
_msg086:		.BYTE	_B,_u,_t,_sem,_,_a,_l,_a,_s,_sem,_,_i,_t,_,_i,_s,_,_t,_h,_e,_,_s,_a,_m,_e,_,_a,_s,_,_b,_e,_f,_o,_r,_e,_dot,$EE
_msg087:		.BYTE	_name,_,_a,_s,_s,_u,_m,_e,_s,_,_herhis,_,_o,_r,_i,_g,_i,_n,_a,_l,_,_s,_h,_a,_p,_e,_dot,$EE
_msg088:		.BYTE	_name,_idx,_,_d,_i,_s,_a,_p,_p,_e,_a,_r,_s,_,_i,_n,_t,_o,_,_t,_h,_e,_,_l,_i,_g,_h,_t,_dot,$EE
_msg089:		.BYTE	_name,_,_f,_a,_i,_n,_t,_s,_dot,$EE
_msg08A:		.BYTE	_name,_apo,_s,_,_s,_t,_r,_e,_n,_g,_t,_h,_,_i,_s,_,_s,_a,_p,_p,_e,_d,_,_b,_y,_,_p,_o,_i,_s,_o,_n,_dot,$EE
_msg08B:		.BYTE	_hero,_apo,_s,_,_p,_a,_r,_t,_y,_,_c,_h,_a,_n,_g,_e,_s,_,_i,_t,_s,_,_f,_o,_r,_m,_a,_t,_i,_o,_n,_dot,$EE
_msg08C:		.BYTE	_apa,_ldt,_ddt,_C,_h,_a,_n,_c,_e,_ddt,_dot,_,_c,_h,_a,_n,_c,_e,_ddt,_dot,_,_c,_h,_a,_n,_c,_e,_ddt,_smc,_sem,$EB
				.BYTE	_t,_h,_e,_,_e,_c,_h,_o,_,_o,_f,_,_name,_apo,_s,_,_v,_o,_i,_c,_e,_,_r,_e,_s,_o,_u,_n,_d,_e,_d,_,_a,_l,_l,_,_t,_h,_r,_o,_u,_g,_h,_,_t,_h,_e,_,_a,_r,_e,_a,_dot,$EE
_msg08D:		.BYTE	_name,_idx,_apo,_s,_,_l,_i,_f,_e,_,_c,_o,_m,_e,_s,_,_t,_o,_,_a,_n,_,_e,_n,_d,_dot,$EE
_msg08E:		.BYTE	_name,_,_r,_a,_i,_s,_e,_s,_,_t,_h,_e,_,_item,_,_o,_v,_e,_r,_h,_e,_a,_d,_dot,$EE
_msg08F:		.BYTE	_F,_i,_r,_e,_b,_a,_l,_l,_s,_,_b,_u,_r,_s,_t,_,_f,_o,_r,_t,_h,_,_f,_r,_o,_m,_,_t,_h,_e,_,_s,_t,_a,_f,_f,_dot,$EE
_txt_block9:
_msg090:		.BYTE	_A,_,_d,_e,_a,_f,_e,_n,_i,_n,_g,_,_t,_h,_u,_n,_d,_e,_r,_c,_l,_a,_p,_,_r,_i,_p,_s,_,_t,_h,_r,_o,_u,_g,_h,_,_t,_h,_e,_,_a,_i,_r,_dot,$EE
_msg091:		.BYTE	_A,_,_b,_l,_a,_s,_t,_,_o,_f,_,_s,_n,_o,_w,_,_s,_t,_o,_r,_m,_s,_,_o,_u,_t,_,_f,_r,_o,_m,_,_t,_h,_e,_,_s,_w,_o,_r,_d,_dot,$EE
_msg092:		.BYTE	_A,_,_l,_i,_g,_h,_t,_n,_i,_n,_g,_,_b,_o,_l,_t,_,_b,_u,_r,_s,_t,_s,_,_f,_r,_o,_m,_,_t,_h,_e,_,_s,_w,_o,_r,_d,_dot,$EE
_msg093:		.BYTE	_A,_,_t,_h,_u,_n,_d,_e,_r,_c,_l,_a,_p,_,_p,_e,_a,_l,_s,_,_f,_r,_o,_m,_,_t,_h,_e,_,_s,_t,_a,_f,_f,_dot,$EE
_msg094:		.BYTE	_name,_,_r,_a,_i,_s,_e,_s,_,_t,_h,_e,_,_item,_,_o,_v,_e,_r,_h,_e,_a,_d,_dot,$EE
_msg095:		.BYTE	_A,_,_b,_l,_u,_e,_,_l,_i,_g,_h,_t,_,_d,_a,_n,_c,_e,_s,_,_a,_c,_r,_o,_s,_s,_,_t,_h,_e,_,_g,_r,_o,_u,_n,_d,_dot,$EE
_msg096:		.BYTE	_T,_h,_e,_,_f,_i,_r,_e,_b,_a,_l,_l,_s,_,_b,_u,_r,_s,_t,_,_f,_o,_r,_t,_h,_,_a,_n,_d,_,_s,_p,_l,_i,_t,_,_i,_n,_t,_o,_,_p,_i,_e,_c,_e,_s,_dot,$EE
_msg097:		.BYTE	_B,_l,_a,_c,_k,_,_r,_a,_i,_n,_,_c,_l,_o,_u,_d,_s,_,_e,_n,_g,_u,_l,_f,_,_y,_o,_u,_r,_,_f,_o,_e,_dot,$EE
_msg098:		.BYTE	_R,_i,_p,_p,_l,_e,_s,_,_o,_f,_,_l,_i,_g,_h,_t,_,_f,_o,_r,_m,_,_a,_,_s,_h,_i,_n,_i,_n,_g,_,_w,_a,_l,_l,_dot,$EE
_msg099:		.BYTE	_A,_,_p,_i,_n,_k,_,_f,_o,_g,_,_f,_l,_o,_w,_s,_,_o,_u,_t,_,_f,_r,_o,_m,_,_t,_h,_e,_,_s,_w,_o,_r,_d,_dot,$EE
_msg09A:		.BYTE	_name,_,_r,_a,_i,_s,_e,_s,_,_t,_h,_e,_,_item,_,_t,_o,_,_t,_h,_e,_,_s,_k,_i,_e,_s,_dot,$EE
_msg09B:		.BYTE	_name,_,_s,_c,_a,_t,_t,_e,_r,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg09C:		.BYTE	_name,_idx,_,_s,_n,_e,_e,_z,_e,_s,_exc,$FF
_msg09D:		.BYTE	_name,_idx,_,_d,_o,_e,_s,_n,_apo,_t,_,_s,_n,_e,_e,_z,_e,_dot,$EE
_msg09E:		.BYTE	_name,_,_l,_o,_o,_k,_s,_,_i,_n,_s,_i,_d,_e,_,_t,_h,_e,_,_item,_dot,$EE
_msg09F:		.BYTE	_name,_,_p,_u,_t,_s,_,_t,_h,_e,_,_item,_,_o,_n,_dot,$EE
_txt_blockA:
_msg0A0:		.BYTE	_S,_t,_r,_e,_n,_g,_t,_h,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0A1:		.BYTE	_A,_g,_i,_l,_i,_t,_y,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0A2:		.BYTE	_V,_i,_t,_a,_l,_i,_t,_y,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0A3:		.BYTE	_L,_u,_c,_k,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0A4:		.BYTE	_I,_n,_t,_e,_l,_l,_i,_g,_e,_n,_c,_e,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0A5:		.BYTE	_name,_,_p,_u,_t,_s,_,_t,_h,_e,_,_item,_,_o,_n,_,_herhis,_,_f,_i,_n,_g,_e,_r,_,_a,_n,_d,_,_m,_a,_k,_e,_s,_,_a,_,_w,_i,_s,_h,_dot,$EF
_msg0A6:		.BYTE	_T,_h,_e,_,_r,_i,_n,_g,_,_s,_i,_l,_e,_n,_t,_l,_y,_,_c,_r,_u,_m,_b,_l,_e,_s,_,_i,_n,_t,_o,_,_p,_i,_e,_c,_e,_s,_dot,$EF
_msg0A7:		.BYTE	_name,_,_p,_e,_e,_l,_s,_,_t,_h,_e,_,_item,_,_a,_n,_d,_,_p,_u,_t,_s,_,_i,_t,_,_i,_n,_,_herhis,_,_m,_o,_u,_t,_h,_dot,$EF
_msg0A8:		.BYTE	_T,_h,_e,_,_M,_a,_x,_i,_m,_u,_m,_,_H,_P,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_exc,$EE
_msg0A9:		.BYTE	_name,_,_s,_c,_a,_t,_t,_e,_r,_s,_,_t,_h,_e,_,_item,_dot,$EF
_msg0AA:		.BYTE	_name,_,_f,_l,_i,_n,_g,_s,_,_t,_h,_e,_,_item,_,_i,_n,_t,_o,_,_t,_h,_e,_,_a,_i,_r,_dot,$EF
_msg0AB:		.BYTE	_name,_,_g,_r,_i,_n,_d,_s,_,_u,_p,_,_t,_h,_e,_,_item,_,_a,_n,_d,_,_g,_i,_v,_e,_s,_,_i,_t,_,_t,_o,_,_name,_dot,$EF
_msg0AC:		.BYTE	$EF
_msg0AD:		.BYTE	_A,_,_f,_r,_e,_e,_z,_e,_,_b,_e,_a,_m,_,_s,_h,_o,_o,_t,_s,_,_o,_u,_t,_,_f,_r,_o,_m,_,_Z,_o,_m,_a,_apo,_s,_,_f,_i,_n,_g,_e,_r,_t,_i,_p,_dot,$EE
_msg0AE:		.BYTE	_name,_,_b,_l,_o,_w,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg0AF:		.BYTE	_name,_,_s,_t,_r,_u,_m,_s,_,_t,_h,_e,_,_item,_dot,$EF
_txt_blockB:
_msg0B0:		.BYTE	_name,_idx,_,_i,_s,_,_d,_e,_l,_i,_g,_h,_t,_e,_d,_dot,$EE
_msg0B1:		.BYTE	_T,_h,_e,_,_b,_a,_l,_l,_,_g,_l,_o,_w,_s,_,_e,_v,_e,_n,_,_m,_o,_r,_e,_,_b,_r,_i,_g,_h,_t,_l,_y,_dot,$EE
_msg0B2:		.BYTE	_T,_h,_e,_,_t,_h,_r,_e,_a,_d,_,_o,_f,_,_l,_i,_g,_h,_t,_,_t,_w,_i,_n,_e,_s,_,_a,_r,_o,_u,_n,_d,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_,_a,_n,_d,_,_r,_e,_m,_o,_v,_e,_s,_,_h,_i,_s,_,_r,_o,_b,_e,_,_o,_f,_,_d,_a,_r,_k,_n,_e,_s,_s,_dot,$EE
_msg0B3:		.BYTE	_name,_,_h,_e,_a,_v,_e,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg0B4:		.BYTE	_apu,_H,_u,_h,_exc,_que,_apd,$EF
_msg0B5:		.BYTE	_A,_l,_l,_,_p,_a,_r,_t,_y,_,_m,_e,_m,_b,_e,_r,_s,_,_g,_a,_i,_n,_,_number,_,_e,_x,_p,_e,_r,_i,_e,_n,_c,_e,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0B6:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_name,_,_h,_a,_s,_,_a,_l,_s,_o,_,_f,_o,_u,_n,_d,_,_number,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_dot,$EE
_msg0B7:		.BYTE	_B,_u,_t,_,_t,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_,_i,_s,_,_e,_m,_p,_t,_y,_exc,$EE
_msg0B8:		.BYTE	_T,_h,_e,_,_M,_a,_x,_i,_m,_u,_m,_,_H,_P,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0B9:		.BYTE	_T,_h,_e,_,_M,_a,_x,_i,_m,_u,_m,_,_M,_P,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0BA:		.BYTE	_name,_,_l,_e,_a,_r,_n,_s,_,_a,_,_n,_e,_w,_,_s,_p,_e,_l,_l,_dot,$EE
_msg0BB:		.BYTE	_name,_,_o,_b,_t,_a,_i,_n,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg0BC:		.BYTE	_name,_,_c,_a,_n,_n,_o,_t,_,_e,_q,_u,_i,_p,_,_herhimself,_,_w,_i,_t,_h,_,_t,_h,_e,_,_item,_dot,$EE
_msg0BD:		.BYTE	_T,_h,_e,_,_M,_a,_x,_i,_m,_u,_m,_,_M,_P,_,_g,_o,_e,_s,_,_u,_p,_,_number,_,_p,_o,_i,_n,_t,$C0,_dot,$EE
_msg0BE:		.BYTE	_Y,_o,_u,_,_c,_a,_n,_apo,_t,_,_g,_e,_t,_,_o,_f,_f,_,_h,_e,_r,_e,_exc,$EE
_msg0BF:		.BYTE	_name,_,_c,_a,_n,_n,_o,_t,_,_u,_s,_e,_,_t,_h,_e,_,_item,_dot,$EE
_txt_blockC:
_msg0C0:		.BYTE	_name,_,_g,_o,_e,_s,_,_u,_p,_,_t,_o,_,_t,_h,_e,_,_n,_e,_x,_t,_,_l,_e,_v,_e,_l,_exc,$EE
_msg0C1:		.BYTE	_hero,_,_c,_a,_n,_apo,_t,_,_u,_s,_e,_,_a,_,_s,_p,_e,_l,_l,_dot,$EE
_msg0C2:		.BYTE	_hero,_,_c,_a,_n,_apo,_t,_,_u,_s,_e,_,_a,_,_s,_p,_e,_l,_l,_dot,$EE
_msg0C3:		.BYTE	_T,_h,_e,_,_c,_u,_r,_s,_e,_,_o,_n,_,_name,_,_i,_s,_,_g,_o,_n,_e,_dot,$EE
_msg0C4:		.BYTE	_name,_,_d,_o,_e,_s,_n,_apo,_t,_,_k,_n,_o,_w,_,_a,_n,_y,_,_s,_p,_e,_l,_l,_s,_,_t,_h,_a,_t,_,_c,_a,_n,_,_b,_e,_,_u,_s,_e,_d,_,_w,_h,_i,_l,_e,_,_o,_n,_,_t,_h,_e,_,_m,_o,_v,_e,_dot,$EE
_msg0C5:		.BYTE	_name,_,_i,_s,_,_d,_e,_a,_d,_,_a,_n,_d,_,_c,_a,_n,_n,_o,_t,_,_c,_a,_s,_t,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_dot,$EE
_msg0C6:		.BYTE	_name,_,_i,_s,_,_c,_o,_n,_f,_u,_s,_e,_d,_,_a,_n,_d,_,_c,_a,_n,_n,_o,_t,_,_c,_a,_s,_t,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_dot,$EE
_msg0C7:		.BYTE	_name,_,_g,_i,_v,_e,_s,_,_t,_h,_e,_,_item,_,_a,_s,_,_a,_n,_,_o,_f,_f,_e,_r,_i,_n,_g,_dot,$EE
_msg0C8:		.BYTE	$EF
_msg0C9:		.BYTE	$EF
_msg0CA:		.BYTE	$EF
_msg0CB:		.BYTE	_apu,_O,_h,_sem,_,_c,_a,_l,_l,_i,_n,_g,_,_i,_t,_,_q,_u,_i,_t,_s,_que,$EB
				.BYTE	_I,_s,_,_i,_t,_,_O,_K,_,_w,_i,_t,_h,_,_y,_o,_u,_,_t,_o,_,_l,_o,_s,_e,_,_y,_o,_u,_r,_,_b,_e,_t,_que,_apd,$EF
_msg0CC:		.BYTE	_apu,_V,_e,_r,_y,_,_w,_e,_l,_l,_dot,_,_P,_l,_e,_a,_s,_e,_,_c,_o,_m,_e,_,_a,_g,_a,_i,_n,_smc,$EF
_msg0CD:		.BYTE	_apu,_O,_h,_sem,_,_p,_a,_c,_k,_i,_n,_g,_,_i,_t,_,_i,_n,_que,$EB
				.BYTE	_W,_h,_a,_t,_,_a,_,_s,_h,_a,_m,_e,_exc,_apd,$EF
_msg0CE:		.BYTE	_name,_idx,_,_c,_o,_m,_e,_s,_,_o,_u,_t,_,_o,_n,_,_t,_o,_p,_exc,$EB
				.BYTE	_hero,_,_o,_b,_t,_a,_i,_n,_s,_,_number,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_dot,$EE
_msg0CF:		.BYTE	_name,_idx,_,_c,_o,_m,_e,_s,_,_o,_u,_t,_,_a,_,_w,_i,_n,_n,_e,_r,_dot,$EB
				.BYTE	_hero,_apo,_s,_,_b,_e,_t,_,_i,_s,_,_l,_o,_s,_t,_dot,$EE
_txt_blockD:
_msg0D0:		.BYTE	_apu,_L,_a,_d,_i,_e,_s,_,_a,_n,_d,_,_g,_e,_n,_t,_l,_e,_m,_e,_n,_,_o,_f,_,_t,_h,_e,_,_c,_o,_u,_r,_t,_sem,_,_n,_o,_w,_,_h,_e,_a,_r,_,_y,_e,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_m,_a,_t,_c,_h,_,_h,_a,_s,_,_e,_n,_d,_e,_d,_,_i,_n,_,_a,_,_d,_r,_a,_w,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_y,_,_b,_e,_t,_s,_,_s,_h,_a,_l,_t,_,_b,_e,_,_r,_e,_t,_u,_r,_n,_e,_d,_,_a,_n,_d,_,_w,_e,_,_p,_r,_i,_t,_h,_e,_e,_,_e,_n,_j,_o,_y,_,_t,_h,_e,_,_c,_o,_m,_i,_n,_g,_,_m,_a,_t,_c,_h,_smc,$EF
_msg0D1:		.BYTE	_name,_,_d,_o,_e,_s,_,_n,_o,_t,_,_h,_a,_v,_e,_,_i,_t,_e,_m,_s,_dot,$EE
_msg0D2:		.BYTE	_name,_,_i,_s,_,_n,_u,_m,_b,_,_a,_n,_d,_,_c,_a,_n,_n,_o,_t,_,_c,_a,_s,_t,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_dot,$EE
_msg0D3:		.BYTE	$EF
_msg0D4:		.BYTE	$EF
_msg0D5:		.BYTE	$EF
_msg0D6:		.BYTE	_name,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_s,_t,_a,_r,_t,_s,_,_t,_o,_,_f,_l,_e,_e,_dot,$EE
_msg0D7:		.BYTE	_name,_,_c,_a,_t,_c,_h,_e,_s,_,_a,_,_w,_h,_i,_f,_f,_,_o,_f,_,_t,_h,_e,_,_s,_o,_c,_k,_s,_dot,$EE
_msg0D8:		.BYTE	_name,_,_b,_e,_g,_i,_n,_s,_,_t,_o,_,_m,_i,_m,_i,_c,_,_t,_h,_e,_,_a,_r,_m,_s,_,_s,_h,_o,_p,_k,_e,_e,_p,_e,_r,_col,$EB
				.BYTE	_apa,_T,_h,_i,_s,_,_s,_t,_o,_r,_e,_,_d,_e,_a,_l,_s,_,_i,_n,_,_w,_e,_a,_p,_o,_n,_s,_,_a,_n,_d,_,_a,_r,_m,_o,_r,_ddt,_smc,$EE
_msg0D9:		.BYTE	_name,_,_c,_a,_s,_t,_s,_,_t,_h,_e,_,_s,_p,_e,_l,_l,_sem,_,_E,_x,_p,_l,_o,_d,_e,_t,_dot,$EE
_msg0DA:		.BYTE	_name,_,_s,_p,_e,_a,_k,_s,_,_i,_l,_l,_,_o,_f,_,_name,_idx,_dot,$EE
_msg0DB:		.BYTE	_name,_idx,_,_b,_e,_c,_o,_m,_e,_s,_,_e,_n,_r,_a,_g,_e,_d,_dot,$EE
_msg0DC:		.BYTE	_name,_idx,_,_i,_s,_,_n,_o,_t,_,_l,_i,_s,_t,_e,_n,_i,_n,_g,_dot,$EE
_msg0DD:		.BYTE	_name,_,_i,_s,_,_h,_o,_n,_i,_n,_g,_,_h,_i,_s,_,_b,_o,_d,_y,_,_t,_o,_,_b,_e,_,_r,_e,_a,_d,_y,_,_f,_o,_r,_,_a,_n,_y,_t,_h,_i,_n,_g,_dot,$EE
_msg0DE:		.BYTE	_name,_,_s,_t,_a,_r,_t,_s,_,_d,_o,_i,_n,_g,_,_J,_a,_z,_z,_e,_r,_c,_i,_s,_e,_exc,$EE
_msg0DF:		.BYTE	_name,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_b,_e,_c,_o,_m,_e,_s,_,_e,_n,_l,_i,_g,_h,_t,_e,_n,_e,_d,_dot,$EE
_txt_blockE:
_msg0E0:		.BYTE	_name,_,_p,_o,_i,_n,_t,_s,_,_herhis,_,_f,_i,_n,_g,_e,_r,_,_a,_t,_,_name,_idx,_,_a,_n,_d,_,_g,_u,_f,_f,_a,_w,_s,_dot,$EE
_msg0E1:		.BYTE	_name,_,_g,_e,_t,_s,_,_t,_a,_n,_g,_l,_e,_d,_,_u,_p,_,_i,_n,_,_h,_i,_s,_,_o,_w,_n,_,_l,_e,_g,_s,_,_a,_n,_d,_,_f,_a,_l,_l,_s,_,_d,_o,_w,_n,_dot,$EE
_msg0E2:		.BYTE	_name,_,_p,_o,_k,_e,_s,_,_a,_t,_,_t,_h,_e,_,_d,_e,_a,_d,_,_m,_o,_n,_s,_t,_e,_r,_dot,$EE
_msg0E3:		.BYTE	_name,_,_r,_e,_m,_a,_r,_k,_s,_,_s,_m,_u,_g,_l,_y,_col,$EB
				.BYTE	_apa,_I,_,_w,_o,_u,_l,_d,_n,_apo,_t,_,_f,_i,_g,_h,_t,_,_i,_f,_,_I,_,_w,_e,_r,_e,_,_y,_o,_u,_dot,_,_E,_v,_e,_n,_,_a,_,_v,_i,_c,_t,_o,_r,_y,_,_w,_o,_u,_l,_d,_,_b,_e,_,_h,_o,_l,_l,_o,_w,_smc,$EE
_msg0E4:		.BYTE	_name,_,_i,_s,_,_c,_o,_n,_f,_u,_s,_e,_d,_,_f,_o,_r,_,_s,_o,_m,_e,_,_r,_e,_a,_s,_o,_n,_dot,$EE
_msg0E5:		.BYTE	_name,_,_l,_i,_e,_s,_,_d,_o,_w,_n,_,_f,_o,_r,_,_a,_,_n,_a,_p,_dot,$EE
_msg0E6:		.BYTE	_name,_,_s,_p,_r,_u,_c,_e,_s,_,_herhimself,_,_u,_p,_dot,$EE
_msg0E7:		.BYTE	_name,_,_i,_s,_,_l,_o,_s,_t,_,_i,_n,_,_t,_h,_o,_u,_g,_h,_t,_dot,$EE
_msg0E8:		.BYTE	_name,_,_i,_s,_,_t,_a,_k,_i,_n,_g,_,_a,_,_b,_r,_e,_a,_k,_dot,$EE
_msg0E9:		.BYTE	_name,_,_r,_e,_c,_o,_i,_l,_s,_exc,$EE
_msg0EA:		.BYTE	_name,_,_c,_h,_e,_e,_r,_s,_,_o,_n,_,_herhis,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_dot,$EE
_msg0EB:		.BYTE	_B,_u,_t,_,_herhis,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_,_a,_r,_e,_,_n,_o,_t,_,_t,_h,_e,_r,_e,_dot,$EE
_msg0EC:		.BYTE	_B,_u,_t,_,_n,_o,_,_o,_n,_e,_,_i,_s,_,_l,_i,_s,_t,_e,_n,_i,_n,_g,_dot,$EE
_msg0ED:		.BYTE	_name,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_f,_o,_u,_n,_d,_,_heshe,_,_c,_o,_u,_l,_d,_n,_apo,_t,_,_m,_o,_v,_e,_,_a,_,_s,_i,_n,_g,_l,_e,_,_m,_u,_s,_c,_l,_e,_dot,$EE
_msg0EE:		.BYTE	_name,_,_b,_e,_c,_k,_o,_n,_s,_,_t,_h,_e,_,_h,_e,_a,_v,_e,_n,_s,_dot,$EE
_msg0EF:		.BYTE	_name,_,_b,_r,_e,_a,_k,_s,_,_o,_u,_t,_,_i,_n,_,_a,_,_s,_m,_i,_l,_e,_dot,$EE
_txt_blockF:
_msg0F0:		.BYTE	_name,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_p,_i,_n,_c,_h,_e,_s,_,_name,_dot,$EE
_msg0F1:		.BYTE	_name,_,_col,$EB
				.BYTE	_apa,_H,_e,_y,_exc,_exc,_,_W,_h,_a,_t,_,_d,_o,_,_y,_o,_u,_,_t,_h,_i,_n,_k,_,_y,_o,_u,_apo,_r,_e,_,_d,_o,_i,_n,_g,_que,_apd,$EE
_msg0F2:		.BYTE	_name,_,_b,_l,_u,_s,_t,_e,_r,_s,_col,$EB
				.BYTE	_apa,_D,_o,_,_y,_o,_u,_,_r,_e,_a,_l,_i,_z,_e,_,_w,_h,_o,_,_y,_o,_u,_,_a,_r,_e,_,_s,_p,_e,_a,_k,_i,_n,_g,_,_t,_o,_que,_,_I,_m,_p,_e,_r,_t,_i,_n,_e,_n,_t,_exc,_apd,$EE
_msg0F3:		.BYTE	_name,_,_g,_i,_v,_e,_s,_,_a,_,_k,_i,_n,_d,_,_g,_l,_a,_n,_c,_e,_dot,$EE
_msg0F4:		.BYTE	_name,_,_p,_r,_e,_t,_e,_n,_d,_s,_,_t,_o,_,_b,_e,_,_d,_e,_a,_d,_dot,$EE
_msg0F5:		.BYTE	_B,_u,_t,_,_f,_o,_o,_l,_s,_,_n,_o,_,_o,_n,_e,_exc,$EE
_msg0F6:		.BYTE	_name,_,_s,_o,_f,_t,_,_s,_o,_a,_p,_s,_,_name,_idx,_dot,$EE
_msg0F7:		.BYTE	_name,_,_i,_s,_,_c,_h,_e,_w,_i,_n,_g,_,_o,_n,_i,_o,_n,_str,_f,_l,_a,_v,_o,_r,_e,_d,_,_g,_u,_m,_dot,$EE
_msg0F8:		.BYTE	_T,_h,_e,_,_s,_t,_r,_o,_n,_g,_,_s,_m,_e,_l,_l,_,_i,_s,_,_d,_r,_i,_f,_t,_i,_n,_g,_,_e,_v,_e,_r,_y,_w,_h,_e,_r,_e,_dot,$EE
_msg0F9:		.BYTE	_name,_,_b,_l,_o,_w,_s,_,_a,_,_k,_i,_s,_s,_dot,$EE
_msg0FA:		.BYTE	_name,_,_s,_u,_d,_d,_e,_n,_l,_y,_,_t,_u,_r,_n,_s,_,_a,_r,_o,_u,_n,_d,_,_a,_n,_d,_,_r,_o,_l,_l,_s,_,_u,_p,_,_a,_,_s,_l,_e,_e,_v,_e,_dot,$EE
_msg0FB:		.BYTE	_ldt,_ddt,_e,_x,_p,_o,_s,_i,_n,_g,_,_a,_,_s,_m,_a,_l,_l,_,_t,_a,_t,_o,_o,_exc,$EE
_msg0FC:		.BYTE	_name,_,_i,_s,_,_m,_o,_m,_e,_n,_t,_a,_r,_i,_l,_y,_,_t,_r,_a,_n,_s,_f,_i,_x,_e,_d,_dot,$EE
_msg0FD:		.BYTE	_name,_,_s,_i,_n,_g,_s,_,_a,_,_s,_o,_n,_g,_dot,$EE
_msg0FE:		.BYTE	_name,_,_m,_a,_k,_e,_s,_,_a,_n,_,_a,_w,_f,_u,_l,_,_p,_u,_n,_dot,$EE
_msg0FF:		.BYTE	_name,_,_i,_s,_,_m,_o,_m,_e,_n,_t,_a,_r,_i,_l,_y,_,_t,_r,_a,_n,_s,_f,_i,_x,_e,_d,_dot,$EE
_txt_block10:
_msg100:		.BYTE	$FD,$EB
				.BYTE	_T,_h,_e,_,_k,_e,_y,_, $E,_o,_e,_s,_n,_apo,_t,_,_f,_i,_t,_dot,$EE
_msg101:		.BYTE	_B,_u,_t,_,_n,_o,_t,_h,_i,_n,_g,_,_i,_s,_,_h,_a,_p,_p,_e,_n,_i,_n,_g,_,_h,_e,_r,_e,_dot,$EE
_msg102:		.BYTE	_,_,_,$EB
				.BYTE	_B,_u,_t,_,_n,_o,_t,_h,_i,_n,_g,_,_i,_s,_,_h,_a,_p,_p,_e,_n,_i,_n,_g,_,_n,_o,_w,_dot,$EE
_msg103:		.BYTE	_apu,_W,_a,_k,_e,_,_u,_p,_,_d,_e,_a,_r,_exc,_,_W,_a,_k,_e,_,_u,_p,_,_name,_smc,$EF
_msg104:		.BYTE	_,_,_,$EB
				.BYTE	_A,_,_d,_a,_r,_k,_n,_e,_s,_s,_,_o,_o,_z,_e,_s,_,_o,_u,_t,_,_f,_r,_o,_m,_,_t,_h,_e,_,_l,_a,_m,_p,_,_a,_n,_d,_,_c,_o,_v,_e,_r,_s,_,_e,_v,_e,_r,_y,_t,_h,_i,_n,_g,_,_w,_i,_t,_h,_,_t,_h,_e,_,_b,_l,_a,_c,_k,_n,_e,_s,_s,_,_o,_f,_,_n,_i,_g,_h,_t,_dot,$EE
_msg105:		.BYTE	_T,_h,_e,_,_e,_f,_f,_e,_c,_t,_,_o,_f,_,_t,_h,_e,_,_I,_n,_v,_i,_s,_i,_b,_i,_l,_i,_t,_y,_,_H,_e,_r,_b,_,_h,_a,_s,_,_w,_o,_r,_n,_,_o,_f,_f,_dot,$EE
_msg106:		.BYTE	_,_,_,$EB
				.BYTE	_H,_o,_w,_e,_v,_e,_r,_sem,_,_N,_o,_r,_u,_d,_,_i,_s,_,_n,_o,_t,_,_h,_e,_r,_e,_dot,$EE
_msg107:		.BYTE	_I,_t,_,_s,_e,_e,_m,_s,_,_t,_h,_e,_,_p,_o,_w,_e,_r,_,_o,_f,_,_t,_h,_e,_,_r,_i,_n,_g,_,_i,_s,_,_u,_s,_e,_d,_,_u,_p,_dot,$EE
_msg108:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_T,_h,_e,_,_s,_p,_i,_r,_i,_t,_,_o,_f,_,_E,_r,_r,_o,_l,_,_a,_n,_d,_,_O,_l,_i,_v,_i,_a,_apo,_s,_,_d,_e,_v,_o,_t,_i,_o,_n,_,_t,_o,_,_e,_a,_c,_h,_,_o,_t,_h,_e,_r,_,_r,_a,_d,_i,_a,_t,_e,_s,_,_f,_r,_o,_m,_,_t,_h,_e,_,_a,_r,_e,_a,_dot,$FD,$EE
_msg109:		.BYTE	_T,_h,_e,_,_c,_u,_r,_s,_e,_,_o,_n,_,_O,_l,_i,_v,_i,_a,_,_i,_s,_,_b,_r,_o,_k,_e,_n,_dot,$EE
_msg10A:		.BYTE	_F,_r,_o,_m,_,_o,_u,_t,_,_o,_f,_,_n,_o,_w,_h,_e,_r,_e,_sem,_,_a,_,_p,_l,_a,_i,_n,_t,_i,_v,_e,_,_v,_o,_i,_c,_e,_,_i,_s,_,_h,_e,_a,_r,_d,_ddt,_dot,$EE
_msg10B:		.BYTE	_apu,_O,_h,_sem,_,_E,_r,_r,_o,_l,_sem,_,_m,_y,_,_b,_e,_l,_o,_v,_e,_d,_exc,_,_I,_apo,_v,_e,_,_b,_e,_e,_n,_,_w,_a,_i,_t,_i,_n,_g,_,_f,_o,_r,_,_y,_o,_u,_,_s,_u,_c,_h,_,_a,_,_l,_o,_n,_g,_,_t,_i,_m,_e,_exc,_apd,$FD,$EB
				.BYTE	_apu,_M,_y,_,_d,_e,_a,_r,_,_O,_l,_i,_v,_i,_a,_dot,_,_N,_e,_v,_e,_r,_,_a,_g,_a,_i,_n,_,_s,_h,_a,_l,_l,_,_w,_e,_,_b,_e,_,_p,_a,_r,_t,_e,_d,_exc,_apd,$FD,$EB
				.BYTE	_apu,_E,_r,_r,_o,_l,_exc,_apd,$FD,$EF
_msg10C:		.BYTE	_name,_,_p,_e,_e,_r,_s,_,_i,_n,_s,_i,_d,_e,_,_t,_h,_e,_,_item,_dot,$EE
_msg10D:		.BYTE	$FD,$EB
				.BYTE	_B,_u,_t,_,_f,_r,_o,_m,_,_h,_e,_r,_e,_sem,_,_n,_o,_,_e,_c,_h,_o,_,_c,_o,_m,_e,_s,_,_b,_a,_c,_k,_dot,$EE
_msg10E:		.BYTE	_T,_h,_e,_r,_e,_,_i,_s,_,_n,_o,_,_o,_n,_e,_,_i,_n,_,_t,_h,_a,_t,_,_d,_i,_r,_e,_c,_t,_i,_o,_n,_dot,$EE
_msg10F:		.BYTE	_G,_o,_s,_h,_exc,_,_A,_,_s,_t,_a,_i,_r,_w,_a,_y,_exc,$EE
_txt_block11:
_msg110:		.BYTE	_number,_,_t,_o,_,_t,_h,_e,_,_n,_o,_r,_t,_h,$EF
_msg111:		.BYTE	_number,_,_t,_o,_,_t,_h,_e,_,_e,_a,_s,_t,$EF
_msg112:		.BYTE	_number,_,_t,_o,_,_t,_h,_e,_,_s,_o,_u,_t,_h,$EF
_msg113:		.BYTE	_number,_,_t,_o,_,_t,_h,_e,_,_w,_e,_s,_t,$EF
_msg114:		.BYTE	_i,_s,_,_t,_h,_e,_,_d,_i,_r,_e,_c,_t,_i,_o,_n,_,_i,_n,_d,_i,_c,_a,_t,_e,_d,_dot,$EF
_msg115:		.BYTE	_name,_,_i,_s,_,_c,_o,_n,_f,_u,_s,_e,_d,_,_b,_y,_,_t,_h,_e,_,_N,_o,_h,_,_M,_a,_s,_k,_dot,$EE
_msg116:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_I,_t,_,_d,_o,_e,_s,_n,_apo,_t,_,_l,_o,_o,_k,_,_e,_s,_p,_e,_c,_i,_a,_l,_l,_y,_,_c,_u,_r,_s,_e,_d,_smc,$EF
_msg117:		.BYTE	_name,_,_s,_e,_t,_s,_,_u,_p,_,_t,_h,_e,_,_item,_,_o,_n,_,_t,_h,_e,_,_w,_a,_l,_l,_dot,$EE
_msg118:		.BYTE	_T,_h,_e,_,_M,_a,_g,_i,_c,_,_B,_a,_l,_l,_,_c,_a,_n,_apo,_t,_,_b,_e,_,_u,_s,_e,_d,_,_h,_e,_r,_e,_dot,$EE
_msg119:		.BYTE	_T,_h,_e,_,_p,_o,_w,_d,_e,_r,_,_r,_i,_d,_e,_s,_,_o,_n,_,_t,_h,_e,_,_w,_i,_n,_d,_,_a,_n,_d,_,_s,_p,_r,_e,_a,_d,_s,_,_t,_h,_r,_o,_u,_g,_h,_o,_u,_t,_,_t,_h,_e,_,_a,_r,_e,_a,_ddt,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg11A:		.BYTE	_L,_o,_o,_k,_exc,_,_T,_h,_e,_,_v,_i,_l,_l,_a,_g,_e,_r,_s,_,_a,_r,_e,_,_s,_t,_a,_r,_t,_i,_n,_g,_,_t,_o,_,_w,_a,_k,_e,_,_u,_p,_exc,$EE
_msg11B:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_a,_n,_d,_,_c,_h,_e,_c,_k,_s,_,_i,_t,_,_o,_u,_t,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg11C:		.BYTE	_name,_,_d,_i,_v,_e,_s,_,_h,_e,_a,_d,_f,_i,_r,_s,_t,_,_f,_r,_o,_m,_,_t,_h,_e,_,_s,_h,_i,_p,_,_i,_n,_t,_o,_,_t,_h,_e,_,_w,_a,_t,_e,_r,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg11D:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_l,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_a,_,_w,_e,_a,_p,_o,_n,_smc,$EF
_msg11E:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_l,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_a,_r,_m,_o,_r,_smc,$EF
_msg11F:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_l,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_a,_,_s,_h,_i,_e,_l,_d,_smc,$EF
_txt_block12:
_msg120:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_l,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_a,_,_h,_e,_l,_m,_e,_t,_smc,$EF
_msg121:		.BYTE	$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_w,_o,_r,_t,_h,_,_number,_,_p,_i,_e,_c,_e,$C0,_,_o,_f,_,_g,_o,_l,_d,_,_i,_f,_,_s,_o,_l,_d,_,_t,_o,_,_a,_n,_,_i,_t,_e,_m,_,_s,_t,_o,_r,_e,_smc,$EF
_msg122:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_l,_o,_o,_k,_s,_,_l,_i,_k,_e,_,_a,_,_u,_s,_e,_f,_u,_l,_,_i,_t,_e,_m,_smc,$EF
_msg123:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_T,_h,_i,_s,_,_i,_s,_,_a,_,_n,_i,_c,_e,_,_p,_i,_e,_c,_e,_,_o,_f,_,_w,_o,_r,_k,_sem,_,_i,_s,_n,_apo,_t,_,_i,_t,_smc,$FD,$EF
_msg124:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_I,_,_d,_o,_u,_b,_t,_,_e,_v,_e,_n,_,_t,_h,_e,_,_s,_h,_o,_p,_k,_e,_e,_p,_e,_r,_,_c,_o,_u,_l,_d,_,_p,_u,_t,_,_a,_,_p,_r,_i,_c,_e,_,_o,_n,_,_t,_h,_i,_s,_smc,$EF
_msg125:		.BYTE	_name,_,_i,_s,_,_u,_n,_a,_b,_l,_e,_,_t,_o,_,_m,_o,_v,_e,_,_a,_n,_d,_,_c,_a,_n,_apo,_t,_,_u,_s,_e,_,_t,_h,_e,_,_i,_t,_e,_m,_dot,$EE
_msg126:		.BYTE	_name,_,_i,_s,_,_d,_e,_a,_d,_,_a,_n,_d,_,_c,_a,_n,_apo,_t,_,_u,_s,_e,_,_t,_h,_e,_,_i,_t,_e,_m,_dot,$EE
_msg127:		.BYTE	_name,_,_t,_h,_r,_o,_w,_s,_,_a,_w,_a,_y,_,_t,_h,_e,_,_item,_dot,$EE
_msg128:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_,_a,_n,_d,_,_t,_h,_r,_o,_w,_s,_,_i,_t,_,_a,_w,_a,_y,_dot,$EE
_msg129:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_,_a,_n,_d,_,_t,_h,_r,_o,_w,_s,_,_i,_t,_,_a,_w,_a,_y,_dot,$EE
_msg12A:		.BYTE	_I,_t,_,_m,_u,_s,_t,_,_n,_o,_t,_,_b,_e,_,_t,_h,_r,_o,_w,_n,_,_a,_w,_a,_y,_exc,$EE
_msg12B:		.BYTE	_name,_,_t,_r,_a,_n,_s,_f,_e,_r,_s,_,_t,_h,_e,_,_item,_,_t,_o,_,_name,_dot,$EE
_msg12C:		.BYTE	_name,_,_p,_u,_t,_s,_,_t,_h,_e,_,_item,_,_i,_n,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_dot,$EE
_msg12D:		.BYTE	_name,_,_g,_i,_v,_e,_s,_,_t,_h,_e,_,_item,_,_t,_o,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_dot,$EE
_msg12E:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_dot,$EE
_msg12F:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_,_a,_n,_d,_,_p,_u,_t,_s,_,_i,_t,_,_i,_n,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_dot,$EE
_txt_block13:
_msg130:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_,_a,_n,_d,_,_g,_i,_v,_e,_s,_,_i,_t,_,_t,_o,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_dot,$EE
_msg131:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_dot,$EE
_msg132:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_,_a,_n,_d,_,_p,_u,_t,_s,_,_i,_t,_,_i,_n,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_dot,$EE
_msg133:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_,_a,_n,_d,_,_g,_i,_v,_e,_s,_,_i,_t,_,_t,_o,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_dot,$EE
_msg134:		.BYTE	_name,_,_m,_a,_k,_e,_s,_,_a,_s,_,_i,_f,_,_t,_o,_,_t,_r,_a,_n,_s,_f,_e,_r,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_,_b,_u,_t,_,_k,_e,_e,_p,_s,_,_i,_t,_dot,$EE
_msg135:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_,_a,_n,_d,_,_r,_e,_t,_u,_r,_n,_s,_,_i,_t,_,_t,_o,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_dot,$EE
_msg136:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_,_a,_n,_d,_,_r,_e,_t,_u,_r,_n,_s,_,_i,_t,_,_t,_o,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_dot,$EE
_msg137:		.BYTE	_A,_,_r,_e,_d,_,_l,_i,_g,_h,_t,_,_g,_l,_o,_w,_s,_,_w,_i,_t,_h,_i,_n,_,_t,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_dot,$EE
_msg138:		.BYTE	_A,_,_y,_e,_l,_l,_o,_w,_,_l,_i,_g,_h,_t,_,_g,_l,_o,_w,_s,_,_w,_i,_t,_h,_i,_n,_,_t,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_dot,$EE
_msg139:		.BYTE	_A,_,_b,_l,_u,_e,_,_l,_i,_g,_h,_t,_,_g,_l,_o,_w,_s,_,_w,_i,_t,_h,_i,_n,_,_t,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_dot,$EE
_msg13A:		.BYTE	_T,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_,_s,_e,_e,_m,_s,_,_t,_o,_,_b,_e,_,_e,_m,_p,_t,_y,_dot,$EE
_msg13B:		.BYTE	_name,_,_e,_x,_a,_m,_i,_n,_e,_s,_,_t,_h,_e,_,_w,_a,_l,_l,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg13C:		.BYTE	_name,_,_t,_h,_r,_o,_w,_s,_,_t,_h,_e,_,_item,_,_i,_n,_,_t,_h,_e,_,_c,_r,_a,_t,_e,_r,_exc,$EE
_msg13D:		.BYTE	_apu,_C,_u,_r,_s,_e,_d,_,_b,_e,_,_t,_h,_o,_s,_e,_,_w,_h,_o,_,_d,_i,_s,_t,_u,_r,_b,_,_m,_y,_,_s,_l,_e,_e,_p,_exc,_apd,$EF
_msg13E:		.BYTE	_F,_r,_o,_m,_,_o,_u,_t,_,_o,_f,_,_n,_o,_w,_h,_e,_r,_e,_sem,_,_e,_e,_r,_i,_e,_,_v,_o,_i,_c,_e,_s,_,_a,_r,_e,_,_h,_e,_a,_r,_d,_ddt,_dot,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_col,$EB
				.BYTE	_apu,_W,_h,_o,_,_d,_a,_r,_e,_s,_,_t,_o,_,_r,_a,_i,_d,_,_t,_h,_e,_,_K,_i,_n,_g,_apo,_s,_,_t,_r,_e,_a,_s,_u,_r,_e,_que,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_col,$EB
				.BYTE	_apu,_W,_h,_o,_,_d,_a,_r,_e,_s,_,_t,_o,_,_d,_i,_s,_t,_u,_r,_b,_,_o,_u,_r,_,_s,_l,_u,_m,_b,_e,_r,_que,_apd,$EB,$EF
_msg13F:		.BYTE	_name,_,_t,_a,_k,_e,_s,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_g,_h,_o,_s,_t,_,_a,_n,_d,_,_l,_e,_t,_s,_,_i,_t,_,_h,_a,_v,_e,_,_t,_h,_e,_,_item,_dot,$EE
_txt_block14:
_msg140:		.BYTE	_name,_,_t,_h,_r,_o,_w,_s,_,_a,_w,_a,_y,_,_t,_h,_e,_,_item,_,_f,_r,_o,_m,_,_name,_apo,_s,_,_T,_o,_o,_l,_,_B,_a,_g,_,_a,_n,_d,_,_l,_e,_t,_s,_,_i,_t,_,_h,_a,_v,_e,_,_t,_h,_e,_,_item,_dot,$EE
_msg141:		.BYTE	_T,_h,_e,_r,_e,_,_i,_s,_,_a,_,_s,_m,_a,_l,_l,_,_b,_u,_t,_t,_o,_n,_,_i,_n,_,_t,_h,_e,_,_w,_a,_l,_l,_dot,$EB
				.BYTE	_D,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_p,_u,_s,_h,_,_i,_t,_que,$EF
_msg142:		.BYTE	_name,_,_e,_x,_a,_m,_i,_n,_e,_s,_,_t,_h,_e,_,_d,_o,_o,_r,_dot,$FD,$EB
				.BYTE	_I,_t,_,_i,_s,_,_w,_r,_i,_t,_t,_e,_n,_,_o,_n,_,_t,_h,_e,_,_d,_o,_o,_r,_,_t,_h,_a,_t,_,_a,_,_c,_u,_r,_s,_e,_,_s,_h,_a,_l,_l,_,_b,_e,_f,_a,_l,_l,_,_a,_l,_l,_,_t,_h,_o,_s,_e,_,_w,_h,_o,_,_e,_n,_t,_e,_r,_,_h,_e,_r,_e,_i,_n,_dot,$EF
_msg143:		.BYTE	_hero,_,_h,_a,_s,_,_n,_o,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_dot,$EE
_msg144:		.BYTE	_name,_,_e,_x,_a,_m,_i,_n,_e,_s,_,_t,_h,_e,_,_c,_a,_s,_k,_e,_t,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg145:		.BYTE	_D,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_d,_i,_s,_c,_a,_r,_d,_,_s,_o,_m,_e,_t,_h,_i,_n,_g,_que,$EE
_msg146:		.BYTE	_B,_u,_t,_,_n,_o,_t,_h,_i,_n,_g,_,_c,_a,_n,_,_b,_e,_,_f,_o,_u,_n,_d,_exc,$EE
_msg147:		.BYTE	_name,_,_e,_x,_a,_m,_i,_n,_e,_s,_,_t,_h,_e,_,_g,_r,_o,_u,_n,_d,_,_a,_t,_,_herhis,_,_f,_e,_e,_t,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg148:		.BYTE	_name,_,_d,_o,_e,_s,_n,_apo,_t,_,_h,_a,_v,_e,_,_a,_n,_,_i,_t,_e,_m,_,_y,_e,_t,_dot,$EE
_msg149:		.BYTE	_H,_o,_w,_e,_v,_e,_r,_,_t,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_,_i,_s,_,_e,_m,_p,_t,_y,_exc,$EE
_msg14A:		.BYTE	_name,_,_d,_i,_s,_c,_a,_r,_d,_s,_,_t,_h,_e,_,_item,_,_a,_n,_d,_,_o,_b,_t,_a,_i,_n,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg14B:		.BYTE	$FD,_A,_,_m,_e,_s,_s,_a,_g,_e,_,_i,_s,_,_a,_l,_s,_o,_,_f,_o,_u,_n,_d,_,_i,_n,_,_t,_h,_e,_,_t,_r,_e,_a,_s,_u,_r,_e,_,_c,_h,_e,_s,_t,_dot,$EB
				.BYTE	_name,_,_r,_e,_a,_d,_s,_,_t,_h,_e,_,_m,_e,_s,_s,_a,_g,_e,_dot,$FD,$EB
				.BYTE	_apu,_F,_o,_r,_g,_i,_v,_e,_,_m,_e,_sem,_,_m,_o,_t,_h,_e,_r,_sem,_,_f,_o,_r,_,_d,_e,_p,_a,_r,_t,_i,_n,_g,_,_t,_h,_i,_s,_,_w,_o,_r,_l,_d,_,_a,_h,_e,_a,_d,_,_o,_f,_,_y,_o,_u,_smc,$FD,$EB
				.BYTE	_apu,_I,_f,_,_m,_y,_,_l,_o,_v,_e,_,_f,_o,_r,_,_h,_i,_m,_sem,_,_t,_h,_a,_t,_,_o,_f,_,_e,_l,_f,_,_f,_o,_r,_,_h,_u,_m,_a,_n,_sem,_,_i,_s,_,_f,_o,_r,_b,_i,_d,_d,_e,_n,_,_i,_n,_,_t,_h,_i,_s,_,_w,_o,_r,_l,_d,_smc,$FD,$EB
				.BYTE	_apu,_A,_t,_,_l,_e,_a,_s,_t,_,_I,_,_c,_a,_n,_,_b,_e,_,_w,_i,_t,_h,_,_h,_i,_m,_,_i,_n,_,_t,_h,_e,_,_o,_n,_e,_,_b,_e,_y,_o,_n,_d,_ddt,_dot,_,_A,_n,_n,_e,_apd,$EF
_msg14C:		.BYTE	_H,_o,_w,_e,_v,_e,_r,_sem,_,_name,_,_c,_a,_n,_n,_o,_t,_,_h,_a,_v,_e,_,_o,_n,_e,_,_t,_h,_i,_n,_g,_,_m,_o,_r,_e,_dot,$EE
_msg14D:		.BYTE	_name,_,_g,_i,_v,_e,_s,_,_u,_p,_,_t,_h,_e,_,_item,_dot,$EE
_msg14E:		.BYTE	_W,_h,_a,_t,_,_d,_o,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_d,_i,_s,_c,_a,_r,_d,_que,$EE
_msg14F:		.BYTE	_W,_h,_o,_,_a,_m,_o,_n,_g,_,_y,_o,_u,_,_w,_i,_l,_l,_,_d,_i,_s,_c,_a,_r,_d,_,_i,_t,_que,$EE
_txt_block15:
_msg150:		.BYTE	_name,_,_i,_s,_,_d,_e,_a, $E,_, $B,_n, $E,_, $D,_a,_n,_n,_o,_t,_,_e,_q,_u,_i,_p,_,_herhimself,_,_w,_i,_t,_h,_,_a,_n,_y,_t,_h,_i,_n,_g,_dot,$EE
_msg151:		.BYTE	_T,_h,_a,_t,_,_item,_,_i,_s,_,_c,_u,_r,_s,_e,_d,_dot,$EE
_msg152:		.BYTE	_,_,_,$EB
				.BYTE	_T,_h,_e,_,_item,_,_i,_s,_,_s,_t,_u,_c,_k,_,_t,_o,_,_t,_h,_e,_,_b,_o,_d,_y,_,_b,_e,_c,_a,_u,_s,_e,_,_o,_f,_,_t,_h,_e,_,_c,_u,_r,_s,_e,_dot,$EE
_msg153:		.BYTE	_name,_,_u,_s,_e,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg154:		.BYTE	_name,_,_p,_u,_t,_s,_,_t,_h,_e,_,_item,_,_o,_n,_dot,$EE
_msg155:		.BYTE	$EF
_msg156:		.BYTE	_name,_,_l,_i,_g,_h,_t,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg157:		.BYTE	_name,_,_s,_p,_r,_i,_n,_k,_l,_e,_s,_,_t,_h,_e,_,_item,_,_o,_n,_,_herhis,_,_b,_o,_d,_y,_dot,$EE
_msg158:		.BYTE	_name,_,_r,_e,_a,_d,_s,_,_t,_h,_e,_,_R,_o,_y,_a,_l,_,_S,_c,_r,_o,_l,_l,_dot,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_col,$EB
				.BYTE	_apu,_M,_y,_,_d,_e,_a,_r,_,_N,_o,_r,_u,_d,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_col,$EB
				.BYTE	_apu,_P,_l,_e,_a,_s,_e,_,_g,_u,_i,_d,_e,_,_t,_h,_e,_,_b,_e,_a,_r,_e,_r,_s,_,_o,_f,_,_t,_h,_i,_s,_,_s,_c,_r,_o,_l,_l,_,_t,_o,_,_t,_h,_e,_,_s,_e,_c,_r,_e,_t,_,_p,_a,_s,_s,_a,_g,_e,_,_c,_a,_l,_l,_e,_d,_,_B,_o,_l,_e,_f,_apo,_s,_,_P,_a,_t,_h,_smc,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_col,$EB
				.BYTE	_apu,_s,_i,_g,_n,_e,_d,_sem,_,_K,_i,_n,_g,_,_o,_f,_,_P,_o,_r,_t,_o,_g,_a,_smc,$EF
_msg159:		.BYTE	_name,_,_b,_l,_o,_w,_s,_,_t,_h,_e,_,_item,_dot,$EE
_msg15A:		.BYTE	$EF
_msg15B:		.BYTE	_name,_,_s,_h,_o,_o,_t,_s,_,_t,_h,_e,_,_item,_exc,$EE
_msg15C:		.BYTE	_name,_,_h,_o,_l,_d,_s,_,_t,_h,_e,_,_item,_,_b,_y,_,_t,_h,_e,_,_t,_h,_r,_e,_a,_d,$FD,$EB
				.BYTE	_a,_n,_d,_,_t,_h,_e,_,_S,_a,_i,_l,_o,_r,_apo,_s,_,_T,_h,_i,_g,_h,_,_B,_o,_n,_e,_,_b,_e,_g,_i,_n,_s,_,_t,_o,_,_s,_p,_i,_n,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg15D:		.BYTE	_name,_,_s,_e,_t,_s,_,_t,_h,_e,_,_item,_,_a,_f,_l,_o,_a,_t,_,_o,_n,_,_t,_h,_e,_,_o,_c,_e,_a,_n,_dot,$EE
_msg15E:		.BYTE	_name,_,_s,_e,_t,_s,_,_t,_h,_e,_,_item,_,_o,_n,_,_t,_h,_e,_,_g,_r,_o,_u,_n,_d,_dot,$EE
_msg15F:		.BYTE	_name,_,_r,_a,_i,_s,_e,_s,_,_t,_h,_e,_,_item,_,_t,_o,_,_t,_h,_e,_,_s,_k,_i,_e,_s,_dot,$EE
_txt_block16:
_msg160:		.BYTE	_name,_,_r,_a,_i,_s,_e,_s,_,_t,_h,_e,_,_item,_,_o,_v,_e,_r,_,_herhis,_,_h,_e,_a,_d,_dot,$EE
_msg161:		.BYTE	_name,_,_s,_p,_r,_i,_n,_k,_l,_e,_s,_,_t,_h,_e,_,_item,_,_a,_l,_l,_,_a,_r,_o,_u,_n,_d,_dot,$EE
_msg162:		.BYTE	_name,_,_p,_u,_t,_s,_,_t,_h,_e,_,_item,_,_i,_n,_,_t,_h,_e,_,_p,_a,_l,_m,_,_o,_f,_,_herhis,_,_h,_a,_n,_d,_dot,$FD,$EB
				.BYTE	_,_,_,$EB,$EE
_msg163:		.BYTE	_name,_,_h,_a,_s,_,_a,_l,_r,_e,_a,_d,_y,_,_p,_u,_t,_,_t,_h,_e,_,_item,_,_o,_n,_dot,$EE
_msg164:		.BYTE	_T,_h,_e,_,_k,_i,_n,_g,_,_c,_a,_n,_n,_o,_t,_,_u,_s,_e,_,_t,_h,_a,_t,_,_s,_p,_e,_l,_l,_dot,$EE
_msg165:		.BYTE	_T,_h,_e,_,_k,_i,_n,_g,_,_i,_s,_,_a,_l,_r,_e,_a,_d,_y,_,_w,_e,_a,_r,_i,_n,_g,_,_t,_h,_e,_,_r,_o,_y,_a,_l,_,_r,_o,_b,_e,_s,_dot,$EE
_msg166:		.BYTE	_I,_t,_,_i,_s,_,_s,_a,_i,_d,_,_t,_h,_a,_t,_,_l,_o,_n,_g,_,_a,_g,_o,_,_t,_h,_e,_,_k,_i,_n,_g,_,_w,_a,_s,_,_v,_e,_r,_y,_,_p,_o,_w,_e,_r,_f,_u,_l,_dot,$EE
_msg167:		.BYTE	_T,_h,_e,_,_k,_i,_n,_g,_,_b,_e,_a,_r,_s,_,_n,_o,_,_i,_t,_e,_m,_s,_dot,$EE
_msg168:		.BYTE	_T,_h,_e,_,_k,_i,_n,_g,_,_e,_x,_a,_m,_i,_n,_e,_s,_,_t,_h,_e,_,_a,_r,_e,_a,_,_a,_t,_,_h,_i,_s,_,_f,_e,_e,_t,_,_b,_u,_t,_,_f,_i,_n,_d,_s,_,_n,_o,_t,_h,_i,_n,_g,_dot,$EE
_msg169:		.BYTE	_H,_o,_w,_e,_v,_e,_r,_sem,_,_name,_,_c,_a,_n,_n,_o,_t,_,_h,_a,_v,_e,_,_o,_n,_e,_,_t,_h,_i,_n,_g,_,_m,_o,_r,_e,_dot,$EE
_msg16A:		.BYTE	_apu,_W,_r,_e,_t,_c,_h,_e,_s,_exc,_,_H,_o,_w,_,_d,_i,_d,_s,_t,_,_t,_h,_o,_u,_,_e,_n,_t,_e,_r,_,_h,_e,_r,_e,_i,_n,_que,_,_M,_e,_t,_h,_i,_n,_k,_s,_,_t,_h,_e,_e,_,_i,_n,_d,_e,_e,_d,_,_s,_c,_o,_u,_n,_d,_r,_e,_l,_s,_exc,_apd,$FD,$FF
_msg16B:		.BYTE	_apu,_C,_a,_s,_t,_,_t,_h,_e,_s,_e,_,_v,_a,_r,_l,_e,_t,_s,_,_i,_n,_t,_o,_,_p,_r,_i,_s,_o,_n,_exc,_apd,$EF
_msg16C:		.BYTE	_apu,_A,_l,_l,_,_r,_i,_g,_h,_t,_sem,_,_c,_o,_m,_e,_,_a,_l,_o,_n,_g,_exc,_apd,$EF
_msg16D:		.BYTE	_apu,_O,_v,_e,_r,_,_h,_e,_r,_e,_exc,_apd,$EF
_msg16E:		.BYTE	_apu,_G,_e,_t,_,_i,_n,_exc,_apd,$EF
_msg16F:		.BYTE	_apu,_K,_e,_e,_p,_,_q,_u,_i,_e,_t,_exc,_apd,$EF
_txt_block17:
_msg170:		.BYTE	_apu,_H,_o,_w,_,_d,_i,_d,_s,_t,_,_t,_h,_o,_u,_,_g,_e,_t,_,_o,_u,_t,_,_o,_f,_,_j,_a,_i,_l,_que,_apd,$EB
				.BYTE	_apu,_T,_h,_o,_u,_,_a,_r,_t,_,_i,_n,_d,_e,_e,_d,_,_i,_m,_b,_e,_c,_i,_l,_e,_s,_,_t,_o,_,_r,_e,_t,_u,_r,_n,_,_h,_e,_r,_e,_exc,_apd,$FD,$EF
_msg171:		.BYTE	_apu,_S,_o,_sem,_,_w,_h,_o,_,_w,_o,_u,_l,_d,_,_y,_o,_u,_,_b,_e,_,_n,_o,_w,_que,_apd,$EB
				.BYTE	_apu,_Y,_o,_u,_apo,_r,_e,_,_t,_h,_i,_n,_k,_i,_n,_g,_,_y,_o,_u,_,_w,_a,_n,_t,_,_t,_o,_,_j,_o,_i,_n,_,_u,_s,_sem,_,_h,_u,_h,_que,_apd,$EF
_msg172:		.BYTE	_apu,_W,_e,_l,_l,_sem,_,_w,_e,_,_c,_a,_n,_apo,_t,_,_l,_e,_t,_,_y,_o,_u,_,_p,_a,_s,_s,_sem,_,_n,_o,_w,_,_c,_a,_n,_,_w,_e,_,_b,_o,_y,_s,_que,_apd,$EB
				.BYTE	_apu,_G,_e,_t,_,_apo,_e,_m,_exc,_apd,$EF
_msg173:		.BYTE	_apu,_T,_h,_e,_,_b,_o,_s,_s,_,_i,_s,_,_o,_u,_t,_,_n,_o,_w,_dot,_,_C,_o,_m,_e,_,_b,_a,_c,_k,_,_l,_a,_t,_e,_r,_exc,_apd,$EF
_msg174:		.BYTE	_apu,_O,_h,_sem,_,_b,_r,_a,_v,_e,_,_h,_e,_r,_o,_exc,_,_S,_a,_v,_e,_,_m,_e,_exc,_apd,$EB
				.BYTE	_apu,_I,_,_a,_m,_,_T,_a,_n,_i,_a,_sem,_,_k,_i,_d,_n,_a,_p,_p,_e,_d,_,_f,_r,_o,_m,_,_t,_h,_e,_,_t,_o,_w,_n,_,_o,_f,_,_B,_a,_h,_a,_r,_a,_t,_a,_smc,$EF
_msg175:		.BYTE	_apu,_T,_h,_e,_,_b,_u,_t,_t,_o,_n,_,_t,_h,_a,_t,_,_o,_p,_e,_n,_s,_,_t,_h,_i,_s,_,_d,_o,_o,_r,_,_s,_h,_o,_u,_l,_d,_,_b,_e,_,_n,_e,_a,_r,_,_t,_h,_e,_,_t,_a,_b,_l,_e,_,_a,_t,_,_t,_h,_e,_,_e,_n,_d,_,_o,_f,_,_t,_h,_e,_,_c,_o,_r,_r,_i,_d,_o,_r,_smc,$EF
_msg176:		.BYTE	_G,_a,_l,_e,_n,_,_col,$EB
				.BYTE	_apu,_O,_h,_sem,_,_T,_a,_n,_i,_a,_exc,_apd,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_D,_e,_a,_r,_e,_s,_t,_exc,_apd,$EF
_msg177:		.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_W,_e,_apo,_l,_l,_,_b,_e,_,_a,_b,_l,_e,_,_t,_o,_,_g,_o,_,_h,_o,_m,_e,_sem,_,_w,_o,_n,_apo,_t,_,_w,_e,_que,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_G,_a,_l,_e,_n,_,_col,$EB
				.BYTE	_apu,_W,_h,_e,_n,_,_w,_e,_,_g,_e,_t,_,_b,_a,_c,_k,_,_l,_e,_t,_apo,_s,_,_g,_e,_t,_,_m,_a,_r,_r,_i,_e,_d,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_O,_h,_sem,_,_m,_y,_,_d,_a,_r,_l,_i,_n,_g,_exc,_apd,$EF
_msg178:		.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_T,_h,_a,_n,_k,_,_y,_o,_u,_sem,_,_b,_r,_a,_v,_e,_,_h,_e,_r,_o,_smc,$EF
_msg179:		.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_A,_a,_a,_h,_exc,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_N,_y,_a,_sem,_,_a,_h,_sem,_,_a,_h,_dot,_,_N,_o,_w,_,_t,_h,_a,_t,_,_I,_apo,_m,_,_b,_a,_c,_k,_sem,_,_y,_o,_u,_apo,_l,_l,_,_n,_e,_v,_e,_r,_,_g,_e,_t,_,_a,_w,_a,_y,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_S,_a,_v,_e,_,_m,_e,_sem,_,_b,_r,_a,_v,_e,_,_h,_e,_r,_o,_exc,_apd,$EF
_msg17A:		.BYTE	_name,_,_col,$EB
				.BYTE	_apu,_L,_e,_a,_v,_e,_,_h,_i,_m,_,_t,_o,_,_u,_s,_exc,_,_R,_u,_n,_exc,_,_Q,_u,_i,_c,_k,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_T,_a,_n,_i,_a,_,_col,$EB
				.BYTE	_apu,_I,_apo,_l,_l,_,_n,_e,_v,_e,_r,_,_f,_o,_r,_g,_e,_t,_,_t,_h,_i,_s,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_Y,_o,_u,_,_a,_g,_a,_i,_n,_que,_,_W,_h,_o,_,_a,_r,_e,_,_y,_o,_u,_,_g,_u,_y,_s,_,_a,_n,_y,_w,_a,_y,_que,_,_T,_h,_i,_s,_,_t,_i,_m,_e,_,_I,_apo,_l,_l,_,_f,_i,_n,_i,_s,_h,_,_y,_o,_u,_,_o,_f,_f,_exc,_apd,$EF
_msg17B:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_C,_u,_r,_s,_e,_s,_exc,_,_I,_apo,_m,_,_n,_o,_,_m,_a,_t,_c,_h,_,_f,_o,_r,_,_y,_o,_u,_smc,$FD,$EF
_msg17C:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_I,_,_b,_e,_g,_,_o,_f,_,_y,_o,_u,_exc,_,_I,_,_p,_r,_o,_m,_i,_s,_e,_,_y,_o,_u,_,_I,_apo,_l,_l,_,_c,_h,_a,_n,_g,_e,_exc,_,_I,_apo,_v,_e,_,_s,_e,_e,_n,_,_t,_h,_e,_,_e,_r,_r,_o,_r,_,_o,_f,_,_m,_y,_,_w,_a,_y,_s,_exc,_,_S,_p,_a,_r,_e,_,_m,_e,_exc,_,_I,_,_b,_e,_g,_,_y,_o,_u,_exc,_apd,$EF
_msg17D:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_D,_o,_n,_apo,_t,_,_b,_e,_,_s,_o,_,_c,_o,_l,_d,_str,_h,_e,_a,_r,_t,_e,_d,_exc,_,_D,_o,_n,_apo,_t,_,_s,_a,_y,_,_t,_h,_i,_n,_g,_s,_,_l,_i,_k,_e,_,_t,_h,_a,_t,_exc,_,_C,_apo,_m,_o,_n,_exc,_,_P,_l,_e,_a,_s,_e,_exc,_apd,$FD,$EF
_msg17E:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_T,_h,_a,_n,_k,_s,_exc,_,_T,_h,_a,_n,_k,_s,_exc,_,_I,_,_r,_e,_a,_l,_l,_y,_,_m,_e,_a,_n,_,_i,_t,_exc,_,_B,_e,_,_w,_e,_l,_l,_exc,_,_U,_n,_t,_i,_l,_,_w,_e,_,_m,_e,_e,_t,_,_a,_g,_a,_i,_n,_exc,_apd,$EF
_msg17F:		.BYTE	_F,_r,_o,_m,_,_o,_u,_t,_,_o,_f,_,_n,_o,_w,_h,_e,_r,_e,_sem,_,_o,_m,_i,_n,_o,_u,_s,_,_v,_o,_i,_c,_e,_s,_,_a,_r,_e,_,_h,_e,_a,_r,_d,_ddt,_dot,$FD,$EB
				.BYTE	_apu,_W,_e,_,_a,_r,_e,_,_t,_h,_e,_,_g,_u,_a,_r,_d,_s,_,_o,_f,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_apo,_s,_,_C,_h,_a,_m,_b,_e,_r,_exc,_,_T,_o,_,_e,_n,_t,_e,_r,_,_y,_o,_u,_apo,_l,_l,_,_h,_a,_v,_e,_,_t,_o,_,_d,_e,_f,_e,_a,_t,_,_u,_s,_,_f,_i,_r,_s,_t,_exc,_apd,$EF
_txt_block18:
_msg180:		.BYTE	_name,_,_p,_u,_s,_h,_e,_s,_,_t,_h,_e,_,_b,_u,_t,_t,_o,_n,$FD,$EB
				.BYTE	_T,_h,_e,_,_s,_o,_u,_n,_d,_,_o,_f,_,_a,_,_b,_o,_u,_l,_d,_e,_r,_,_m,_o,_v,_i,_n,_g,_,_i,_s,_,_h,_e,_a,_r,_d,_,_f,_r,_o,_m,_,_s,_o,_m,_e,_,_q,_u,_a,_r,_t,_e,_r,_dot,$EF
_msg181:		.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_name,_exc,_apd,$EB
				.BYTE	_apu,_I,_,_b,_i,_d,_,_t,_h,_e,_e,_,_w,_e,_l,_c,_o,_m,_e,_,_t,_o,_,_t,_h,_i,_n,_e,_,_a,_l,_t,_a,_r,_,_o,_f,_,_o,_f,_f,_e,_r,_i,_n,_g,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_I,_t,_,_i,_s,_,_I,_,_w,_h,_o,_,_w,_i,_l,_l,_,_b,_r,_i,_n,_g,_,_a,_b,_o,_u,_t,_,_t,_h,_e,_,_d,_e,_s,_t,_r,_u,_c,_t,_i,_o,_n,_,_o,_f,_,_a,_l,_l,_,_t,_h,_i,_n,_g,_s,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_A,_l,_l,_,_l,_i,_v,_i,_n,_g,_,_b,_e,_i,_n,_g,_s,_,_s,_h,_a,_l,_l,_,_b,_e,_,_d,_e,_m,_o,_l,_i,_s,_h,_e,_d,_,_b,_y,_,_m,_e,_,_a,_n,_d,_,_t,_h,_e,_,_e,_n,_t,_i,_r,_e,_,_w,_o,_r,_l,_d,_,_s,_h,_a,_l,_l,_,_s,_i,_n,_k,_,_i,_n,_t,_o,_,_d,_e,_s,_p,_a,_i,_r,_smc,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_C,_o,_m,_m,_e,_n,_c,_i,_n,_g,_,_w,_i,_t,_h,_,_t,_h,_i,_n,_e,_,_o,_w,_n,_,_d,_e,_m,_i,_s,_e,_sem,_,_name,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_C,_o,_m,_e,_sem,_,_m,_y,_,_s,_e,_r,_v,_a,_n,_t,_s,_dot,_,_D,_e,_s,_t,_r,_o,_y,_,_t,_h,_e,_m,_,_s,_o,_,_t,_h,_a,_t,_,_I,_,_m,_a,_y,_,_t,_h,_r,_i,_v,_e,_,_o,_n,_,_t,_h,_e,_i,_r,_,_s,_u,_f,_f,_e,_r,_i,_n,_g,_smc,$EF
_msg182:		.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_name,_exc,_apd,$EB
				.BYTE	_apu,_W,_h,_y,_,_d,_o,_,_y,_o,_u,_,_s,_t,_r,_u,_g,_g,_l,_e,_,_t,_o,_,_l,_i,_v,_e,_que,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_M,_y,_,_j,_o,_y,_,_i,_s,_,_t,_h,_y,_,_d,_e,_s,_t,_r,_u,_c,_t,_i,_o,_n,_dot,_,_M,_y,_,_b,_e,_a,_u,_t,_y,_,_t,_h,_y,_,_d,_e,_a,_t,_h,_exc,_apd,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_Z,_o,_m,_a,_,_col,$EB
				.BYTE	_apu,_C,_o,_m,_e,_,_f,_o,_r,_w,_a,_r,_d,_,_t,_h,_e,_n,_sem,_,_a,_n,_d,_,_d,_i,_e,_,_i,_n,_,_p,_e,_a,_c,_e,_exc,_apd,$EF
_msg183:		.BYTE	_I,_t,_,_w,_a,_s,_,_hero,_apo,_s,_,_s,_i,_x,_t,_e,_e,_n,_t,_h,_,_b,_i,_r,_t,_h,_d,_a,_y,_dot,$EE
_msg184:		.BYTE	_apu,_W,_a,_k,_e,_,_u,_p,_sem,_,_hero,_dot,$EB
				.BYTE	_I,_t,_apo,_s,_,_m,_o,_r,_n,_i,_n,_g,_exc,_apd,$FD,$EB
				.BYTE	_apu,_T,_o,_d,_a,_y,_,_i,_s,_,_a,_,_v,_e,_r,_y,_,_i,_m,_p,_o,_r,_t,_a,_n,_t,_,_d,_a,_y,_dot,_,$EB
				.BYTE	_T,_h,_i,_s,_,_i,_s,_,_t,_h,_e,_,_f,_i,_r,_s,_t,_,_t,_i,_m,_e,_,_t,_h,_a,_t,_,_y,_o,_u,_sem,_,_hero,_sem,_,_s,_h,_a,_l,_l,_,_g,_o,_,_t,_o,_,_t,_h,_e,_,_c,_a,_s,_t,_l,_e,_smc,$FD,$EB
				.BYTE	_apu,_I,_,_h,_a,_v,_e,_,_r,_a,_i,_s,_e,_d,_,_y,_o,_u,_,_a,_s,_,_a,_,_b,_r,_a,_v,_e,_,_y,_o,_u,_n,_g,_,_l,_a,_d,_,_f,_o,_r,_,_t,_h,_i,_s,_,_v,_e,_r,_y,_,_d,_a,_y,_smc,$EF
_msg185:		.BYTE	_apu,_S,_o,_sem,_,_c,_o,_m,_e,_,_w,_i,_t,_h,_,_y,_o,_u,_r,_,_m,_o,_t,_h,_e,_r,_smc,$EF
_msg186:		.BYTE	_apu,_I,_f,_,_y,_o,_u,_,_g,_o,_,_s,_t,_r,_a,_i,_g,_h,_t,_sem,_,_y,_o,_u,_apo,_l,_l,_,_c,_o,_m,_e,_,_t,_o,_,_t,_h,_e,_,_c,_a,_s,_t,_l,_e,_smc,$FD,$EB
				.BYTE	_apu,_R,_e,_m,_e,_m,_b,_e,_r,_,_y,_o,_u,_r,_,_m,_a,_n,_n,_e,_r,_s,_,_i,_n,_,_f,_r,_o,_n,_t,_,_o,_f,_,_t,_h,_e,_,_k,_i,_n,_g,_dot,_,_A,_l,_l,_,_r,_i,_g,_h,_t,_sem,_,_b,_e,_,_o,_n,_,_y,_o,_u,_r,_,_w,_a,_y,_,_n,_o,_w,_smc,$EF
_msg187:		.BYTE	_apu,_W,_h,_a,_t,_apo,_s,_,_t,_h,_e,_,_m,_a,_t,_t,_e,_r,_sem,_,_hero,_dot,_,_G,_o,_,_a,_l,_o,_n,_g,_,_a,_n,_d,_,_m,_e,_e,_t,_,_t,_h,_e,_,_k,_i,_n,_g,_smc,$EF
_msg188:		.BYTE	_apu,_W,_e,_l,_c,_o,_m,_e,_,_u,_n,_t,_o,_,_t,_h,_e,_e,_sem,_,_hero,_sem,_,_s,_o,_n,_,_o,_f,_,_t,_h,_e,_,_b,_r,_a,_v,_e,_,_O,_r,_t,_e,_g,_a,_exc,_apd,$FD,$EB
				.BYTE	_apu,_I,_t,_,_i,_s,_,_s,_a,_i,_d,_,_t,_h,_a,_t,_,_t,_h,_y,_,_f,_a,_t,_h,_e,_r,_,_O,_r,_t,_e,_g,_a,_,_m,_e,_t,_,_h,_i,_s,_,_e,_n,_d,_,_w,_h,_e,_n,_,_h,_e,_,_f,_e,_l,_l,_,_i,_n,_t,_o,_,_a,_,_v,_o,_l,_c,_a,_n,_o,_apo,_s,_,_c,_r,_a,_t,_e,_r,_,_a,_t,_,_t,_h,_e,_,_e,_n,_d,_,_o,_f,_,_a,_,_b,_a,_t,_t,_l,_e,_smc,$FD,$EB
				.BYTE	_apu,_W,_e,_,_d,_o,_,_h,_e,_r,_e,_b,_y,_,_a,_c,_c,_e,_p,_t,_,_y,_o,_u,_r,_,_p,_e,_t,_i,_t,_i,_o,_n,_,_t,_o,_,_f,_o,_l,_l,_o,_w,_,_i,_n,_,_t,_h,_e,_,_f,_o,_o,_t,_s,_t,_e,_p,_s,_,_o,_f,_,_y,_o,_u,_r,_,_b,_r,_a,_v,_e,_,_f,_a,_t,_h,_e,_r,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_y,_,_e,_n,_e,_m,_y,_,_s,_h,_a,_l,_l,_,_b,_e,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_,_B,_a,_r,_a,_m,_o,_s,_smc,$FD,$EB
				.BYTE	_apu,_T,_h,_e,_,_n,_a,_m,_e,_,_o,_f,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_,_B,_a,_r,_a,_m,_o,_s,_,_i,_s,_,_y,_e,_t,_,_u,_n,_k,_n,_o,_w,_n,_,_i,_n,_,_t,_h,_e,_,_w,_o,_r,_l,_d,_,_o,_f,_,_m,_e,_n,_smc,$FD,$FF
_msg189:		.BYTE	_apu,_F,_a,_r,_e,_w,_e,_l,_l,_exc,_,_U,_n,_t,_i,_l,_,_w,_e,_,_m,_e,_e,_t,_,_o,_n,_c,_e,_,_m,_o,_r,_e,_sem,_,_hero,_exc,_apd,$EF
_msg18A:		.BYTE	_L,_o,_o,_k,_exc,_,_A,_,_h,_e,_r,_o,_,_i,_s,_,_f,_i,_g,_h,_t,_i,_n,_g,_,_a,_,_m,_o,_n,_s,_t,_e,_r,_,_a,_l,_o,_n,_e,_exc,$EF
_msg18B:		.BYTE	_apu,_T,_h,_e,_,_h,_e,_r,_o,_,_h,_a,_s,_,_w,_o,_n,_sem,_,_b,_u,_t,_,_i,_n,_,_w,_i,_n,_n,_i,_n,_g,_,_s,_e,_e,_m,_s,_,_t,_o,_,_h,_a,_v,_e,_,_s,_p,_e,_n,_t,_,_h,_i,_s,_,_l,_a,_s,_t,_,_o,_u,_n,_c,_e,_,_o,_f,_,_p,_o,_w,_e,_r,_smc,$FD,$EF
_msg18C:		.BYTE	_apu,_I,_t,_apo,_s,_,_a,_l,_l,_,_o,_v,_e,_r,_,_f,_o,_r,_,_m,_e,_ddt,_smc,$EB
				.BYTE	_apu,_O,_h,_sem,_,_t,_r,_a,_v,_e,_l,_e,_r,_dot,_,_P,_l,_e,_a,_s,_e,_,_h,_e,_a,_r,_,_m,_y,_,_d,_y,_i,_n,_g,_,_w,_o,_r,_d,_s,_smc,$FD,$EB
				.BYTE	_apu,_I,_,_a,_m,_,_O,_r,_t,_e,_g,_a,_,_o,_f,_,_A,_l,_i,_a,_h,_a,_n,_smc,$FD,$EB
				.BYTE	_apu,_I,_f,_,_y,_o,_u,_,_h,_a,_p,_p,_e,_n,_,_t,_o,_,_g,_o,_,_t,_o,_,_A,_l,_i,_a,_h,_a,_n,_,_i,_n,_,_y,_o,_u,_r,_,_t,_r,_a,_v,_e,_l,_s,_sem,_,_p,_l,_e,_a,_s,_e,_,_v,_i,_s,_i,_t,_,_name,_,_a,_n,_d,_,_t,_e,_l,_l,_,_o,_f,_,_w,_h,_a,_t,_,_t,_r,_a,_n,_s,_p,_i,_r,_e,_d,_,_h,_e,_r,_e,_smc,$FD,$EB
				.BYTE	_apu,_A,_s,_k,_,_himher,_,_t,_o,_,_f,_o,_r,_g,_i,_v,_e,_,_herhis,_,_f,_a,_t,_h,_e,_r,_,_w,_h,_o,_,_c,_o,_u,_l,_d,_,_n,_o,_t,_,_b,_r,_i,_n,_g,_,_p,_e,_a,_c,_e,_,_t,_o,_,_t,_h,_i,_s,_,_w,_o,_r,_l,_d,_dot,_,_T,_e,_l,_l,_,_h,_ddt,_A,_a,_a,_h,_exc,_apd,$EF
_msg18D:		.BYTE	_apu,_I,_f,_,_t,_h,_i,_n,_g,_s,_,_r,_e,_m,_a,_i,_n,_,_u,_n,_c,_h,_a,_n,_g,_e,_d,_sem,_,_b,_e,_f,_o,_r,_e,_,_l,_o,_n,_g,_,_t,_h,_e,_,_w,_o,_r,_l,_d,_,_w,_i,_l,_l,_,_b,_e,_,_d,_e,_s,_t,_r,_o,_y,_e,_d,_,_b,_y,_,_t,_h,_e,_,_A,_r,_c,_h,_f,_i,_e,_n,_d,_smc,$FD,$EB
				.BYTE	_apu,_B,_a,_r,_a,_m,_o,_s,_,_m,_u,_s,_t,_,_b,_e,_,_d,_e,_f,_e,_a,_t,_e,_d,_exc,_apd,$FD,$EB
				.BYTE	_apu,_S,_e,_e,_k,_,_c,_o,_m,_p,_a,_n,_i,_o,_n,_s,_,_a,_t,_,_t,_h,_e,_,_l,_o,_c,_a,_l,_,_e,_a,_t,_e,_r,_y,_,_a,_n,_d,_,_s,_t,_a,_r,_t,_,_y,_o,_u,_r,_,_q,_u,_e,_s,_t,_smc,$FD,$EB
				.BYTE	_,_,_,$EB
				.BYTE	_name,_,_r,_e,_c,_e,_i,_v,_e,_s,_,_m,_o,_n,_e,_y,_,_f,_o,_r,_,_h,_i,_s,_,_p,_a,_r,_t,_y,_dot,$FD,$FF
_msg18E:		.BYTE	_apu,_W,_h,_o,_a,_exc,_,_G,_e,_t,_,_a,_,_l,_o,_a,_d,_,_o,_f,_,_t,_h,_e,_s,_e,_,_w,_e,_i,_r,_d,_o,_s,_exc,_apd,$FD,$EF
_msg18F:		.BYTE	_apu,_Y,_e,_p,_exc,_,_W,_e,_,_b,_e,_t,_t,_e,_r,_,_g,_o,_,_t,_e,_l,_l,_,_t,_h,_e,_,_b,_o,_s,_s,_smc,$EF
_txt_block19:
_msg190:		.BYTE	_apu,_Y,_o,_u,_,_d,_o,_n,_e,_,_w,_e,_l,_l,_,_t,_o,_,_g,_e,_t,_,_t,_h,_i,_s,_,_f,_a,_r,_dot,_,_I,_,_g,_o,_t,_t,_a,_,_h,_a,_n,_d,_,_i,_t,_,_t,_o,_,_y,_a,_smc,$FD,$EB
				.BYTE	_apu,_J,_u,_s,_t,_,_o,_n,_e,_,_t,_h,_i,_n,_g,_dot,_,_A,_i,_n,_apo,_t,_,_n,_o,_,_o,_n,_e,_,_c,_a,_n,_,_c,_a,_t,_c,_h,_,_u,_s,_exc,_,_S,_e,_e,_,_y,_a,_sem,_,_s,_u,_c,_k,_e,_r,_s,_exc,_,_H,_a,_sem,_,_h,_a,_sem,_,_h,_a,_smc,$EF
_msg191:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_D,_o,_n,_apo,_t,_,_t,_a,_l,_k,_,_l,_i,_k,_e,_,_t,_h,_a,_t,_exc,_,_F,_o,_r,_g,_i,_v,_e,_,_m,_e,_exc,_,_I,_,_b,_e,_g,_,_y,_o,_u,_exc,_,_P,_l,_e,_a,_s,_e,_exc,_apd,$EB,$EF
_msg192:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_T,_h,_a,_n,_k,_s,_exc,_,_I,_apo,_l,_l,_,_n,_e,_v,_e,_r,_,_f,_o,_r,_g,_e,_t,_,_t,_h,_i,_s,_exc,_,_G,_apo,_b,_y,_e,_exc,_apd,$EF
_msg193:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_S,_t,_u,_b,_b,_o,_r,_n,_,_f,_o,_o,_l,_s,_exc,_,_I,_apo,_l,_l,_,_s,_h,_o,_w,_,_y,_o,_u,_,_w,_h,_o,_apo,_s,_,_b,_o,_s,_s,_exc,_apd,$EF
_msg194:		.BYTE	_K,_a,_n,_d,_a,_r,_,_col,$EB
				.BYTE	_apu,_I,_,_g,_i,_v,_e,_exc,_apd,$FD,$EB
				.BYTE	_apu,_W,_i,_l,_l,_,_y,_o,_u,_,_l,_e,_t,_,_m,_e,_,_g,_o,_,_i,_f,_,_I,_,_g,_i,_v,_e,_,_y,_o,_u,_,_t,_h,_e,_,_G,_o,_l,_d,_e,_n,_,_C,_r,_o,_w,_n,_que,_,_W,_i,_l,_l,_,_y,_a,_que,_,_P,_l,_e,_a,_s,_e,_exc,_apd,$EB,$EF
_msg195:		.BYTE	_apu,_T,_u,_r,_n,_,_b,_a,_c,_k,_exc,_apd,$EF

		ECHO "bank 10 free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB