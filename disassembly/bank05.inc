
		ORG $8000

		.WORD _b5_d0
		.WORD _b5_d1
		.WORD _b5_d2
		.WORD _b5_s3		; data used at 8000
		.WORD _b5_s4		; data used at 8000
		.WORD _b5_s5
		.WORD _b5_s6_ppu_send_8_empty_bytes
		.WORD _b5_s7		; data used at 8000
		.WORD _b5_s8		; data used at 8000
		.WORD _b5_s9		; data used at 8000
		.WORD _b5_sA		; data used at 8000
		.WORD _b5_sB_ppu_font_load ; data used at 8000

_b5_d0:
		.WORD byte_8021A	; DATA XREF: BANK5:8000-o
		.WORD byte_80222
		.WORD byte_8022A
		.WORD byte_80232
		.WORD byte_8023A	; data used at 8000
		.WORD byte_80242	; data used at 8000
		.WORD byte_8024A	; data used at 8000
		.WORD byte_80252	; data used at 8000
		.WORD byte_8025A	; data used at 8000
		.WORD byte_80262	; data used at 8000
		.WORD byte_8026A	; data used at 8000
		.WORD byte_80272	; data used at 8000
		.WORD byte_8027A	; data used at 8000
		.WORD byte_80282	; data used at 8000
		.WORD byte_8028A	; data used at 8000
		.WORD byte_80292	; data used at 8000
		.WORD byte_8029D	; data used at 8000
		.WORD byte_802A9	; data used at 8000
		.WORD byte_802B3	; data used at 8000
		.WORD byte_802BF	; data used at 8000
		.WORD byte_802CD	; data used at 8000
		.WORD byte_802E1	; data used at 8000
		.WORD byte_802F1	; data used at 8000
		.WORD byte_80304	; data used at 8000
		.WORD byte_80316	; data used at 8000
		.WORD byte_8032B	; data used at 8000
		.WORD byte_80342	; data used at 8000
		.WORD byte_80354	; data used at 8000
		.WORD byte_8036A	; data used at 8000
		.WORD byte_80384	; data used at 8000
		.WORD byte_8039D	; data used at 8000
		.WORD byte_803AE	; data used at 8000
		.WORD byte_803C1	; data used at 8000
		.WORD byte_803D6	; data used at 8000
		.WORD byte_803EA	; data used at 8000
		.WORD byte_803FE	; data used at 8000
		.WORD byte_80411	; data used at 8000
		.WORD byte_80424	; data used at 8000
		.WORD byte_80438	; data used at 8000
		.WORD byte_80450	; data used at 8000
		.WORD byte_8046A	; data used at 8000
		.WORD byte_80480	; data used at 8000
		.WORD byte_80498	; data used at 8000
		.WORD byte_804B3	; data used at 8000
		.WORD byte_804D1	; data used at 8000
		.WORD byte_804EE	; data used at 8000
		.WORD byte_8050B	; data used at 8000
		.WORD byte_80528	; data used at 8000
		.WORD byte_80544	; data used at 8000
		.WORD byte_80568	; data used at 8000
		.WORD byte_8058E	; data used at 8000
		.WORD byte_805AD	; data used at 8000
		.WORD byte_805CF	; data used at 8000
		.WORD byte_805ED	; data used at 8000
		.WORD byte_8060A	; data used at 8000
		.WORD byte_80625	; data used at 8000
		.WORD byte_80642	; data used at 8000
		.WORD byte_8065D	; data used at 8000
		.WORD byte_80678	; data used at 8000
		.WORD byte_80695	; data used at 8000
		.WORD byte_806AE	; data used at 8000
		.WORD byte_806C6	; data used at 8000
		.WORD byte_806E1	; data used at 8000
		.WORD byte_806FB	; data used at 8000
		.WORD byte_80711	; data used at 8000
		.WORD byte_80729	; data used at 8000
		.WORD byte_80741	; data used at 8000
		.WORD byte_8075C	; data used at 8000
		.WORD byte_80778	; data used at 8000
		.WORD byte_8078F	; data used at 8000
		.WORD byte_807AA	; data used at 8000
		.WORD byte_807CA	; data used at 8000
		.WORD byte_807E9	; data used at 8000
		.WORD byte_80808	; data used at 8000
		.WORD byte_80828	; data used at 8000
		.WORD byte_8084D	; data used at 8000
		.WORD byte_80871	; data used at 8000
		.WORD byte_80893	; data used at 8000
		.WORD byte_808B5	; data used at 8000
		.WORD byte_808D6	; data used at 8000
		.WORD byte_808F8	; data used at 8000
		.WORD byte_8091C	; data used at 8000
		.WORD byte_80940	; data used at 8000
		.WORD byte_80967	; data used at 8000
		.WORD byte_8098F	; data used at 8000
		.WORD byte_809B3	; data used at 8000
		.WORD byte_809D6	; data used at 8000
		.WORD byte_809FD	; data used at 8000
		.WORD byte_80A29	; data used at 8000
		.WORD byte_80A55	; data used at 8000
		.WORD byte_80A7D	; data used at 8000
		.WORD byte_80AA8	; data used at 8000
		.WORD byte_80AD4	; data used at 8000
		.WORD byte_80B00	; data used at 8000
		.WORD byte_80B27	; data used at 8000
		.WORD byte_80B49	; data used at 8000
		.WORD byte_80B67	; data used at 8000
		.WORD byte_80B85	; data used at 8000
		.WORD byte_80BA4	; data used at 8000
		.WORD byte_80BC3	; data used at 8000
		.WORD byte_80BE2	; data used at 8000
		.WORD byte_80BFE	; data used at 8000
		.WORD byte_80C1A	; data used at 8000
		.WORD byte_80C35	; data used at 8000
		.WORD byte_80C53	; data used at 8000
		.WORD byte_80C75	; data used at 8000
		.WORD byte_80C94	; data used at 8000
		.WORD byte_80CB6	; data used at 8000
		.WORD byte_80CDA	; data used at 8000
		.WORD byte_80CFC	; data used at 8000
		.WORD byte_80D18	; data used at 8000
		.WORD byte_80D35	; data used at 8000
		.WORD byte_80D53	; data used at 8000
		.WORD byte_80D71	; data used at 8000
		.WORD byte_80D8C	; data used at 8000
		.WORD byte_80DA7	; data used at 8000
		.WORD byte_80DC1	; data used at 8000
		.WORD byte_80DDA	; data used at 8000
		.WORD byte_80DF8	; data used at 8000
		.WORD byte_80E15	; data used at 8000
		.WORD byte_80E31	; data used at 8000
		.WORD byte_80E4E	; data used at 8000
		.WORD byte_80E6A	; data used at 8000
		.WORD byte_80E83	; data used at 8000
		.WORD byte_80E9B	; data used at 8000
		.WORD byte_80EB5	; data used at 8000
		.WORD byte_80ED0	; data used at 8000
		.WORD byte_80EE8	; data used at 8000
_b5_d1:
		.WORD byte_80F04	; DATA XREF: BANK5:8002-o
					; data used at 8000
		.WORD byte_80F21	; data used at 8000
		.WORD byte_80F43	; data used at 8000
		.WORD byte_80F60	; data used at 8000
		.WORD byte_80F83	; data used at 8000
		.WORD byte_80FA9	; data used at 8000
		.WORD byte_80FD1	; data used at 8000
		.WORD byte_80FFB	; data used at 8000
		.WORD byte_81023	; data used at 8000
		.WORD byte_8104B	; data used at 8000
		.WORD byte_8106F	; data used at 8000
		.WORD byte_81095	; data used at 8000
		.WORD byte_810BC	; data used at 8000
		.WORD byte_810E6	; data used at 8000
		.WORD byte_81111	; data used at 8000
		.WORD byte_8113A	; data used at 8000
		.WORD byte_81164	; data used at 8000
		.WORD byte_8118E	; data used at 8000
		.WORD byte_811BA	; data used at 8000
		.WORD byte_811E8	; data used at 8000
		.WORD byte_81212	; data used at 8000
		.WORD byte_81237	; data used at 8000
		.WORD byte_8125C	; data used at 8000
		.WORD byte_8127B	; data used at 8000
		.WORD byte_8129C	; data used at 8000
		.WORD byte_812C1	; data used at 8000
		.WORD byte_812EB	; data used at 8000
		.WORD byte_8130E	; data used at 8000
		.WORD byte_81331	; data used at 8000
		.WORD byte_81354	; data used at 8000
		.WORD byte_81376	; data used at 8000
		.WORD byte_81394	; data used at 8000
		.WORD byte_813B3	; data used at 8000
		.WORD byte_813D2	; data used at 8000
		.WORD byte_813F1	; data used at 8000
		.WORD byte_8140D	; data used at 8000
		.WORD byte_81427	; data used at 8000
		.WORD byte_81442	; data used at 8000
		.WORD byte_8145D	; data used at 8000
		.WORD byte_81475	; data used at 8000
		.WORD byte_8148E	; data used at 8000
		.WORD byte_814AF	; data used at 8000
		.WORD byte_814CF	; data used at 8000
		.WORD byte_814F2	; data used at 8000
		.WORD byte_81514	; data used at 8000
		.WORD byte_81532	; data used at 8000
		.WORD byte_81549	; data used at 8000
		.WORD byte_8155E	; data used at 8000
		.WORD byte_81571	; data used at 8000
		.WORD byte_81589	; data used at 8000
		.WORD byte_8159D	; data used at 8000
		.WORD byte_815B1	; data used at 8000
		.WORD byte_815C6	; data used at 8000
		.WORD byte_815DD	; data used at 8000
		.WORD byte_815F4	; data used at 8000
		.WORD byte_81608	; data used at 8000
		.WORD byte_8161E	; data used at 8000
		.WORD byte_81634	; data used at 8000
		.WORD byte_81649	; data used at 8000
		.WORD byte_81662	; data used at 8000
		.WORD byte_8167B	; data used at 8000
		.WORD byte_81690	; data used at 8000
		.WORD byte_816A7	; data used at 8000
		.WORD byte_816BD	; data used at 8000
		.WORD byte_816CF	; data used at 8000
		.WORD byte_816E2	; data used at 8000
		.WORD byte_816F2	; data used at 8000
		.WORD byte_81703	; data used at 8000
		.WORD byte_81714	; data used at 8000
		.WORD byte_81727	; data used at 8000
		.WORD byte_81739	; data used at 8000
		.WORD byte_8174C	; data used at 8000
		.WORD byte_8175A	; data used at 8000
		.WORD byte_81769	; data used at 8000
		.WORD byte_81777	; data used at 8000
		.WORD byte_81788	; data used at 8000
		.WORD byte_8179C	; data used at 8000
		.WORD byte_817B0	; data used at 8000
		.WORD byte_817C8	; data used at 8000
		.WORD byte_817DC	; data used at 8000
		.WORD byte_817F2	; data used at 8000
		.WORD byte_81807	; data used at 8000
		.WORD byte_8181C	; data used at 8000
		.WORD byte_81833	; data used at 8000
		.WORD byte_8184B	; data used at 8000
		.WORD byte_81865	; data used at 8000
		.WORD byte_8187E	; data used at 8000
		.WORD byte_81899	; data used at 8000
		.WORD byte_818B5	; data used at 8000
		.WORD byte_818CE	; data used at 8000
		.WORD byte_818E9	; data used at 8000
		.WORD byte_81904	; data used at 8000
		.WORD byte_81918	; data used at 8000
		.WORD byte_81927	; data used at 8000
		.WORD byte_81937	; data used at 8000
		.WORD byte_81948	; data used at 8000
		.WORD byte_8195A	; data used at 8000
		.WORD byte_81969	; data used at 8000
		.WORD byte_81975	; data used at 8000
		.WORD byte_81981	; data used at 8000
		.WORD byte_81989	; data used at 8000
		.WORD byte_81991	; data used at 8000
		.WORD byte_81999	; data used at 8000
		.WORD byte_819A1	; data used at 8000
		.WORD byte_819A9	; data used at 8000
		.WORD byte_819B1	; data used at 8000
		.WORD byte_819B9	; data used at 8000
		.WORD byte_819C1	; data used at 8000
		.WORD byte_819C9	; data used at 8000
		.WORD byte_819D3	; data used at 8000
		.WORD byte_819DD	; data used at 8000
		.WORD byte_819E7	; data used at 8000
		.WORD byte_819F1	; data used at 8000
		.WORD byte_819FC	; data used at 8000
		.WORD byte_81A09	; data used at 8000
		.WORD byte_81A16	; data used at 8000
		.WORD byte_81A24	; data used at 8000
		.WORD byte_81A30	; data used at 8000
		.WORD byte_81A3B	; data used at 8000
		.WORD byte_81A45	; data used at 8000
		.WORD byte_81A4E	; data used at 8000
		.WORD byte_81A57	; data used at 8000
		.WORD byte_81A62	; data used at 8000
		.WORD byte_81A6D	; data used at 8000
		.WORD byte_81A75	; data used at 8000
		.WORD byte_81A7D
		.WORD byte_81A85
		.WORD byte_81A8D
		.WORD _b5_d2
byte_8021A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:_b5_d0-o
byte_80222:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:801A-o
byte_8022A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:801C-o
byte_80232:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:801E-o
byte_8023A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8020-o
					; ind data used	at 8000
byte_80242:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8022-o
					; ind data used	at 8000
byte_8024A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8024-o
					; ind data used	at 8000
byte_80252:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8026-o
					; ind data used	at 8000
byte_8025A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8028-o
					; ind data used	at 8000
byte_80262:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:802A-o
					; ind data used	at 8000
byte_8026A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:802C-o
					; ind data used	at 8000
byte_80272:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:802E-o
					; ind data used	at 8000
byte_8027A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8030-o
					; ind data used	at 8000
byte_80282:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8032-o
					; ind data used	at 8000
byte_8028A:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8034-o
					; ind data used	at 8000
byte_80292:
		.BYTE $1F,$15,$83,$1F,$1F,$1F,$1F,  1,$26,$1F,$1C ; DATA XREF: BANK5:8036-o
					; ind data used	at 8000
byte_8029D:
		.BYTE $1F, $A,$85,  2,$89,$1F,$1F,$1F,$18,$2D,$1F,$1A
					; DATA XREF: BANK5:8038-o
					; ind data used	at 8000
byte_802A9:
		.BYTE $1F,  7,$96,$1F,$1F,$1F,$16,$2E,$1F,$1A ;	DATA XREF: BANK5:803A-o
					; ind data used	at 8000
byte_802B3:
		.BYTE $1F,  6,$97,$1F, $D,$22,$1F,$1F,	4,$36,$1F,$13
					; DATA XREF: BANK5:803C-o
					; ind data used	at 8000
byte_802BF:
		.BYTE $1F,  4,$91,$62,$85,$1F, $B,$22,$1F,$1F,	5,$39,$1F,$10
					; DATA XREF: BANK5:803E-o
					; ind data used	at 8000
byte_802CD:
		.BYTE $1F,  3,$89,$45,$82,$60,$EA,$EB,$60,$84,	9,$25,$14,$21,$1F,$1F
					; DATA XREF: BANK5:8040-o
		.BYTE  $D,$3C,$1F, $D	; ind data used	at 8000
byte_802E1:
		.BYTE $1F,  1,$8A,$4D,$83,  7,$26, $F,$28,$1F,$1F, $C,$3F,$20,$1F, $A
					; DATA XREF: BANK5:8042-o
					; ind data used	at 8000
byte_802F1:
		.BYTE $1C,$8E,$41,$84,$48,$81,	7,$44,$21, $E,$46,$22,$1F,$1F, $D,$3F
					; DATA XREF: BANK5:8044-o
		.BYTE $21,$1F,	9	; ind data used	at 8000
byte_80304:
		.BYTE $1B,$8B,$44,$89,$44,  9,$43,  9,$4D, $A,$22,$1F,$1F,  3,$3F,$22
					; DATA XREF: BANK5:8046-o
		.BYTE $1F,  8		; ind data used	at 8000
byte_80316:
		.BYTE $1B,$81,$60,$87,$41,$8E,$44,  4,$81,$46,	6,$4E, $B,$23,$1F,$1F
					; DATA XREF: BANK5:8048-o
		.BYTE	2,$3F,$42,$1F,	8 ; ind	data used at 8000
byte_8032B:
		.BYTE $1A,$97,	2,$82,$44,  2,$85,$44,	3,$48,$85,$42, $B,$24,$1F,$1F
					; DATA XREF: BANK5:804A-o
		.BYTE	0,$2D,$40,$2D,$45,$1F,	8 ; ind	data used at 8000
byte_80342:
		.BYTE $19,$92,	9,$82,$43,$89,$4E,$88,$42, $A,$62,$23,$1F,$1E,$39,$45
					; DATA XREF: BANK5:804C-o
		.BYTE $1F, $B		; ind data used	at 8000
byte_80354:
		.BYTE $19,$91, $A,$82,$44,$90,$42,$8D,$41,  0,$F7,  7,$66,$22,$1F,$1B
					; DATA XREF: BANK5:804E-o
		.BYTE $27,$4B,$22,$48,$1F, $C ;	ind data used at 8000
byte_8036A:
		.BYTE $19,$85,$EF,$89, $B,$83,$44,$C3,$9C,$42,	1,$F7,	3,$63,$45,$22
					; DATA XREF: BANK5:8050-o
		.BYTE $1F,$19,$26,$42,	1,$43,	3,$44,$1F,$14 ;	ind data used at 8000
byte_80384:
		.BYTE $1A,$80,	0,$89, $E,$84,$42,$A1,$C3,$9A,$44,  0,$F7,  1,$64,$48
					; DATA XREF: BANK5:8052-o
		.BYTE $22,$1F,$18,$42,$22,$41,$1F,$1F,	5 ; ind	data used at 8000
byte_8039D:
		.BYTE $1D,$86,$10,$85,$A4,$C3,$95,$49,	0,$50,$23,$1F,$16,$47,$1F,$1F
					; DATA XREF: BANK5:8054-o
		.BYTE	5		; ind data used	at 8000
byte_803AE:
		.BYTE $1E,$84, $F,$87,$C1,$A3,$C5,$91,$4A,  0,$4B,  2,$26,$1F,$16,$44
					; DATA XREF: BANK5:8056-o
		.BYTE $1F,$1F,	7	; ind data used	at 8000
byte_803C1:
		.BYTE $1D,$82, $F,$89,$C3,$A3,$C6,$8D,$44,$87,	0,$82,$47,  5,$25,$1F
					; DATA XREF: BANK5:8058-o
		.BYTE $15,$42,$1F,$1F,	9 ; ind	data used at 8000
byte_803D6:
		.BYTE $1F, $F,$88,$C5,$A3,$CA,$88,$44,$87,  1,$83,$48,	4,$24,$1F,$16
					; DATA XREF: BANK5:805A-o
		.BYTE $41,$1F,$1F,  9	; ind data used	at 8000
byte_803EA:
		.BYTE $10,$43,$19,$86,$C7,$A5,$CC,$84,$43,$89,	0,$85,$49,  4,$24,$1F
					; DATA XREF: BANK5:805C-o
		.BYTE $1F,$1F,$1F,  0	; ind data used	at 8000
byte_803FE:
		.BYTE $10,$43,$19,$84,$C8,$A7,$CE,$43,$8A,  1,$86,$4A,	4,$22,$1F,$1F
					; DATA XREF: BANK5:805E-o
		.BYTE $1F,$1F,	0	; ind data used	at 8000
byte_80411:
		.BYTE $10,$44,$18,$83,$C6,$A5,$81,$A5,$C6,$47,$87,  4,$86,$4D,$1F,$1F
					; DATA XREF: BANK5:8060-o
		.BYTE $1F,$1F,	6	; ind data used	at 8000
byte_80424:
		.BYTE $11,$43,$17,$84,$C4,$A7,$42,$A6,$49,$84,	6,$8A,$42,$85,$45,$1F
					; DATA XREF: BANK5:8062-o
		.BYTE $1F,$1F,$1F,  5	; ind data used	at 8000
byte_80438:
		.BYTE $12,$42, $C,$82,	7,$83,$C3,$A9,$40,$F1,$40,$A8,$44,$85,	2,$8F
					; DATA XREF: BANK5:8064-o
		.BYTE $41,$88,$45,$1F,$1F,$1F,$1F,  4 ;	ind data used at 8000
byte_80450:
		.BYTE $12,$42, $C,$82,	6,$83,$C2,$41,$A3,$C2,$A2,$42,$A0,$C4,$A1,$8A
					; DATA XREF: BANK5:8066-o
		.BYTE	1,$90,$41,$8B,$45,$1F,$1F,$1F,$1F,  2 ;	ind data used at 8000
byte_8046A:
		.BYTE $11,$43, $D,$83,	2,$86,$44,$A1,$C4,$A4,$CE,$82,	1,$91,$40,$8D
					; DATA XREF: BANK5:8068-o
		.BYTE $44,$1F,$1F,$1F,$1F,  2 ;	ind data used at 8000
byte_80480:
		.BYTE  $B,$82,	2,$43, $D,$83,	1,$86,$43,$C8,$A3,$CE,$81,  2,$92,$40
					; DATA XREF: BANK5:806A-o
		.BYTE $8E,$44,$1F,$1F,$13,$23,$1F,  9 ;	ind data used at 8000
byte_80498:
		.BYTE  $A,$84,	1,$E8,$E9,$42, $D,$8A,$42,$C9,$A2,$CE,$82,  1,$90,$47
					; DATA XREF: BANK5:806C-o
		.BYTE $8C,$42,$21,  4,$22,$1F,$1F,  7,$29,$1F,	6 ; ind	data used at 8000
byte_804B3:
		.BYTE  $A,$84,	1,$EC,$ED,$82, $F,$86,$44,$80,$C7,$A2,$C4,$8C,	1,$8F
					; DATA XREF: BANK5:806E-o
		.BYTE $42,$C5,$42,$8A,$24,  3,$22,$1F,$1F,  5,$67,$27,$1F,  3 ;	ind data used at 8000
byte_804D1:
		.BYTE  $A,$83,	1,$85, $F,$85,$44,$81,	1,$C5,$A1,$C3,$8D,  1,$8C,$44
					; DATA XREF: BANK5:8070-o
		.BYTE $C8,$42,$89,$23,$1F,$1F, $D,$66,$F5,$63,$23,$1F,	3 ; ind	data used at 8000
byte_804EE:
		.BYTE  $B,$82,	0,$86,$10,$84,$44,$80,	3,$C4,$A1,$C2,$83, $B,$89,$44
					; DATA XREF: BANK5:8072-o
		.BYTE $82,$CA,$41,$89,$22,$1F,$1F,  1,$40, $C,$69,$1F,	8 ; ind	data used at 8000
byte_8050B:
		.BYTE  $C,$81,	0,$85,$11,$84,$44,$80,	4,$C3,$A1,$C2,$82,  1,$92,$42
					; DATA XREF: BANK5:8074-o
		.BYTE $85,$C4,$A2,$C4,$8A,$1F,$1F,  3,$42, $C,$65,$1F, $B ; ind	data used at 8000
byte_80528:
		.BYTE  $F,$84,$13,$82,$44,$82,	2,$C3,$A1,$C3,$82,  0,$91,$42,$86,$C3
					; DATA XREF: BANK5:8076-o
		.BYTE $A6,$C3,$87,  2,$21,$1F,$19,$42,	4,$41,$1F,$1E ;	ind data used at 8000
byte_80544:
		.BYTE $1F, $B,$44,$83,	0,$C3,$A2,$C3,$81,  1,$81,$43,$89,$42,$88,$C3
					; DATA XREF: BANK5:8078-o
		.BYTE $A1,$E8,$E9,$A3,$C2,$86,	1,$24,$1F,$16,$83,$42,	8,$43, $B,$43 ;	ind data used at 8000
		.BYTE	1,$43,$1F,  0
byte_80568:
		.BYTE $1F,  6,$43,$FB,$42,$84,	1,$C2,$A4,$C3,$80,  0,$81,$45,$86,$42
					; DATA XREF: BANK5:807A-o
		.BYTE $8A,$C2,$A2,$EC,$ED,$A4,$C2,$84,	1,$81,$F5,$23,$1F,$17,$82, $B ;	ind data used at 8000
		.BYTE $41,$81,	8,$4B,$1F,  0
byte_8058E:
		.BYTE $1F,  3,$46,  2,$85,  0,$C3,$A5,$C2,$80,	0,$80,$47,$83,$42,$8C
					; DATA XREF: BANK5:807C-o
		.BYTE $C2,$A6,$82,$C2,$84,  0,$86,$21,$1F,$1F,	6,$83,	7,$4C,$1F ; ind	data used at 8000
byte_805AD:
		.BYTE $1F,  0,$4B,  1,$83,  1,$C2,$81,$A4,$C2,$80,  0,$81,$4B,$8F,$C2
					; DATA XREF: BANK5:807E-o
		.BYTE $81,$A1,$83,$C3,$84,  0,$87,$21,$1F,$1A,$83,  7,$82,  9,$43,$82 ;	ind data used at 8000
		.BYTE $44,$1E
byte_805CF:
		.BYTE $1F,$4D,	5,$C2,$83,$A3,$C2,$80,	1,$80,$49,$A2,$8E,$C2,$87,$C2
					; DATA XREF: BANK5:8080-o
		.BYTE $84,  1,$88,$21,$1F,$17,$87,  6,$81, $A,$42,$84,$42,$1E ;	ind data used at 8000
byte_805ED:
		.BYTE $1E,$4E,$64,$C3,$83,$A3,$C2,$81,	0,$81,$47,$A4,$8E,$C2,$85,$C2
					; DATA XREF: BANK5:8082-o
		.BYTE $85,  0,$8A,$23,$1F,$14,$8A,  8,$81,  7,$86,$43,$1C ; ind	data used at 8000
byte_8060A:
		.BYTE $1D,$4F,$63,$C3,$83,$A4,$C2,$81,	1,$80,$48,$A3,$8F,$C9,$85,  1
					; DATA XREF: BANK5:8084-o
		.BYTE $8C,$23,$1F,$13,$89,  8,$81,  6,$87,$45,$1A ; ind	data used at 8000
byte_80625:
		.BYTE $1C,$48,$62,$43,$63,$C4,$83,$A4,$C2,$82,	0,$81,$48,$A4,$8E,$C7
					; DATA XREF: BANK5:8086-o
		.BYTE $85,  1,$8F,$22,$1F,$12,$89,  8,$82,  7,$88,$44,$18 ; ind	data used at 8000
byte_80642:
		.BYTE $1C,$46,$65,$41,$64,$C4,$82,$A6,$C2,$81,	1,$80,$48,$A6,$9A,  0
					; DATA XREF: BANK5:8088-o
		.BYTE $91,$21,$1F,$12,$8B,  7,$82,  6,$89,$44,$17 ; ind	data used at 8000
byte_8065D:
		.BYTE $1C,$44,$6D,$C6,$80,$A7,$C2,$82,	0,$81,$47,$A8,$96,  2,$92,$20
					; DATA XREF: BANK5:808A-o
		.BYTE $19,$F7,$16,$8C,	7,$81,	7,$C5,$84,$44,$16 ; ind	data used at 8000
byte_80678:
		.BYTE $1B,$44,$6E,$C4,$42,$A8,$C1,$82,	1,$81,$47,$A9,$8A,  2,$84,  2
					; DATA XREF: BANK5:808C-o
		.BYTE $94,$21,$17,$F7,$F7,$F7,$17,$8C, $F,$C7,$84,$43,$15 ; ind	data used at 8000
byte_80695:
		.BYTE $1A,$42,$F2,$41,$6D,$C3,$43,$A9,$C1,$83,	1,$83,$45,$AB,$11,$96
					; DATA XREF: BANK5:808E-o
		.BYTE $22,$1F,$13,$89, $E,$C9,$84,$42,$15 ; ind	data used at 8000
byte_806AE:
		.BYTE $1A,$42,$EE,$6F,$C2,$43,$A9,$C1,$85,  1,$83,$42,$81,$A9, $B,$9F
					; DATA XREF: BANK5:8090-o
		.BYTE $81,$1F,$13,$8A, $C,$D0,$41,$15 ;	ind data used at 8000
byte_806C6:
		.BYTE $19,$42,$68,$83,$63,$C2,$44,$A8,$C2,$84,	2,$89,$A7, $B,$9F,$83
					; DATA XREF: BANK5:8092-o
		.BYTE $1F,$12,$82,$41,$84,$41,	7,$C6,$85,$C9,$15 ; ind	data used at 8000
byte_806E1:
		.BYTE $18,$6A,$86,$60,$C4,$45,$A7,$C1,$85,  3,$8B,$A4, $B,$9F,$83,$1F
					; DATA XREF: BANK5:8094-o
		.BYTE $12,$81,$43,$82,$44,$83,$C7,$89,$C6,$15 ;	ind data used at 8000
byte_806FB:
		.BYTE $17,$69,$89,$C3,$46,$A6,$C1,$86,	5,$8A,$A3, $A,$9F,$85,$1F,$10
					; DATA XREF: BANK5:8096-o
		.BYTE $4C,$84,$C4,$90,$C4,$14 ;	ind data used at 8000
byte_80711:
		.BYTE $18,$65,$8A,$C3,$47,$A5,$C3,$85,	7,$89,$A3,  9,$9F,$87,$1F, $F
					; DATA XREF: BANK5:8098-o
		.BYTE $4A,$86,$C3,$86,$A2,$88,$C3,$14 ;	ind data used at 8000
byte_80729:
		.BYTE $18,$64,$89,$C4,$48,$A5,$C3,$84,	8,$89,$A2,  9,$9F,$88,$1F, $E
					; DATA XREF: BANK5:809A-o
		.BYTE $49,$87,$C2,$87,$A5,$87,$C2,$14 ;	ind data used at 8000
byte_80741:
		.BYTE $17,$64,$85,$A3,$C4,$49,$A3,$C3,$42,$82, $A,$85,$A5,  8,$96,$C0
					; DATA XREF: BANK5:809C-o
		.BYTE $91,$1F, $E,$48,$86,$C3,$88,$A5,$87,$C2,$14 ; ind	data used at 8000
byte_8075C:
		.BYTE $17,$63,$84,$A4,$C4,$49,$A4,$C3,$42,$81, $C,$81,	2,$A5,	8,$9F
					; DATA XREF: BANK5:809E-o
		.BYTE $89,$1F, $D,$49,$86,$C1,$A0,$8B,$A2,$86,$C4,$14 ;	ind data used at 8000
byte_80778:
		.BYTE $17,$62,$84,$A4,$C5,$47,$A5,$C3,$44,$13,$A3,  9,$9F,$88,$1F, $E
					; DATA XREF: BANK5:80A0-o
		.BYTE $47,$85,$C3,$A2,$92,$C6,$14 ; ind	data used at 8000
byte_8078F:
		.BYTE $18,$61,$83,$A5,$C4,$47,$A3,$81,$C4,$44,$13,$A3,	0,$F7,	7,$9F
					; DATA XREF: BANK5:80A2-o
		.BYTE $88,$1F, $B,$83,$45,$85,$C2,$A4,$91,$C8,$13 ; ind	data used at 8000
byte_807AA:
		.BYTE $18,$61,$83,$A4,$C5,$46,$88,$C1,$45, $A,$81,  3,$F7,  1,$A3,  9
					; DATA XREF: BANK5:80A4-o
		.BYTE $9F,$88,$1F, $A,$85,$43,$85,$C4,$A2,$86,	2,$87,$C1,$81,$C6,$12 ;	ind data used at 8000
byte_807CA:
		.BYTE $17,$63,$81,$A3,	1,$C4,$45,$8C,$45, $A,$80,$F5,$80,  5,$A2, $B
					; DATA XREF: BANK5:80A6-o
		.BYTE $9F,$86,$1F, $A,$90,$C3,	2,$87,	4,$83,	1,$C0,$85,$C3,$12 ; ind	data used at 8000
byte_807E9:
		.BYTE $18,$65,$A1,  3,$C3,$44,$8D,$45, $B,$81, $B,$F7,	7,$9F,$86,$1F
					; DATA XREF: BANK5:80A8-o
		.BYTE  $A,$90,$C2,  3,$85,$C3,	2,$81,	3,$83,$E1,$81,$C2,$80,$11 ; ind	data used at 8000
byte_80808:
		.BYTE $17,$66,	2,$80,$F5,  1,$F5,$80,$44,$90,$44,$11,$F7,  0,$82, $B
					; DATA XREF: BANK5:80AA-o
		.BYTE $9F,$86,$1F,  8,$91,$C1,	4,$84,$C5,  6,$83,$E3,$80,$C2,$81,$10 ;	ind data used at 8000
byte_80828:
		.BYTE $16,$66,	1,$80,$FB,$80,$40,  1,$40,$80,$C0,$44,$91,$43, $F,$F7
					; DATA XREF: BANK5:80AC-o
		.BYTE	1,$83, $B,$9F,$85,$1F,	7,$8F,$C3,$A1,	4,$82,$C2,$44,	0,$88 ;	ind data used at 8000
		.BYTE $E3,$80,$C1,$82,$10
byte_8084D:
		.BYTE $16,$64,	2,$81,	3,$C3,$45,$90,$43,$12,$80,$F5,$82,  1,$F7,  7
					; DATA XREF: BANK5:80AE-o
		.BYTE $9F,$85,$1F,  7,$8E,$C3,$A3,  3,$82,$C1,$42,  6,$86,$E1,$81,$C1 ;	ind data used at 8000
		.BYTE $80,$40,$81, $F
byte_80871:
		.BYTE $16,$63,	1,$84,	1,$C5,$48,$8C,$44,$10,$85, $B,$88,$C0,$92,$C0
					; DATA XREF: BANK5:80B0-o
		.BYTE $87,$1F,	4,$90,$C2,$A5,	3,$80,$C2,$40,$F1,  4,$81,  0,$8A,$C1 ;	ind data used at 8000
		.BYTE $84, $E
byte_80893:
		.BYTE $15,$63,	1,$86,$C7,  2,$45,$8C,$43,  4,$61,  9,$42,$82, $B,$9F
					; DATA XREF: BANK5:80B2-o
		.BYTE $86,$1F,	0,$23,$8E,$C2,$A7,$81,	1,$C2,$43,  1,$82,  0,$8A,$C1 ;	ind data used at 8000
		.BYTE $85, $D
byte_808B5:
		.BYTE $15,$62,	1,$86,$44,$C1,	5,$45,$8C,$43,	0,$65,	7,$44,$82, $B
					; DATA XREF: BANK5:80B4-o
		.BYTE $9F,$87,$1D,$26,$8C,$C2,$A6,$83,	1,$C1,$86,$C1,	1,$89,$C1,$86 ;	ind data used at 8000
		.BYTE  $C
byte_808D6:
		.BYTE $15,$62,	0,$84,$48,  6,$46,$80,	2,$87,$43,  0,$68,  4,$47, $B
					; DATA XREF: BANK5:80B6-o
		.BYTE $9F,$87,$1D,$27,$A4,  2,$83,$C3,$A5,$84,	0,$CB,	1,$87,$C1,$A2 ;	ind data used at 8000
		.BYTE $83, $D
byte_808F8:
		.BYTE $15,$61,	1,$81,$4A,  8,$45,  5,$84,$43,	1,$68,	1,$62,$49, $A
					; DATA XREF: BANK5:80B8-o
		.BYTE $9F,$85,$1E,$26,$A4,  4,$82,$C2,$A5,$85,	0,$C8,$83,  0,$83,  0 ;	ind data used at 8000
		.BYTE $82,$C1,$A6, $D
byte_8091C:
		.BYTE $18,$81,$49, $A,$44,  6,$83,$43,	1,$41,$67,  0,$64,$48, $A,$9F
					; DATA XREF: BANK5:80BA-o
		.BYTE $85,  0,$82,$1A,$24,$A8,	2,$C5,$A4,$86,	0,$C6,$82,  3,$83,  0 ;	ind data used at 8000
		.BYTE $81,$C2,$A8, $B
byte_80940:
		.BYTE $12,$87,$47, $D,$44,  6,$81,$43,	1,$43,$66,  1,$64,$48,	9,$9F
					; DATA XREF: BANK5:80BC-o
		.BYTE $84,  1,$83,$18,$25,$A7,$CA,$A3,$82,  0,$82,  0,$C6,$81,	1,$81 ;	ind data used at 8000
		.BYTE	0,$83,	0,$81,$C4,$A6, $B
byte_80967:
		.BYTE $10,$89,$45, $F,$44,  6,$82,$42,$FB,$45,$66,  1,$64,$47,	8,$9F
					; DATA XREF: BANK5:80BE-o
		.BYTE $85,  0,$83,  3,$81,$13,$24,$A9,$CA,$A1,$83,  1,$81,  1,$C4,$81 ;	ind data used at 8000
		.BYTE	1,$82,	0,$83,	1,$C6,$A5, $B
byte_8098F:
		.BYTE  $F,$89,$44,$11,$45,  7,$81,  2,$45,$67,	1,$64,$47,  7,$9F,$85
					; DATA XREF: BANK5:80C0-o
		.BYTE $FB,$85,	0,$83, $F,$26,$B1,$C3,$A1,$84,	0,$82,	8,$83,	0,$84 ;	ind data used at 8000
		.BYTE	0,$C6,$A6, $A
byte_809B3:
		.BYTE  $F,$89,$45,$11,$44, $A,$81,$46,$67,  0,$64,$47,$C5,$9F,$86,  1
					; DATA XREF: BANK5:80C2-o
		.BYTE $85,  0,$83, $C,$28,$B3,$C3,$85,	2,$88,	2,$81,	1,$83,	0,$81 ;	ind data used at 8000
		.BYTE $C5,$A5, $A
byte_809D6:
		.BYTE  $F,$83,$A5,$45,$12,$43,	8,$83,$47,$63,$A2,  0,$65,$46,$C8,$90
					; DATA XREF: BANK5:80C4-o
		.BYTE $C0,$91,	0,$86,	0,$83, $B,$29,$B4,$C3,$86,  0,$8A,  0,$82,$FB ;	ind data used at 8000
		.BYTE $82,$C0,	0,$83,$C4,$A4, $A
byte_809FD:
		.BYTE  $E,$83,$A7,$45,$11,$40,$E8,$E9,$40,  8,$84,$46,$61,$A4,	1,$A5
					; DATA XREF: BANK5:80C6-o
		.BYTE $46,$C9,$9F,$80,	1,$86,	0,$83, $A,$21,	0,$27,$A8,$23,$A7,$C3 ;	ind data used at 8000
		.BYTE $83,  4,$89,  1,$81,  2,$C1,  1,$84,$C2,$A4, $A
byte_80A29:
		.BYTE  $E,$82,$A3,$C2,$A2,$44,$10,$41,$EC,$ED,$41,  8,$83,$46,$A7,  1
					; DATA XREF: BANK5:80C8-o
		.BYTE $A6,$45,$C8,$9F,$80,  0,$87,  0,$82, $F,$27,$A4,$27,$A6,$C4,  3 ;	ind data used at 8000
		.BYTE $82,  3,$87,  0,$83,  0,$C2,  0,$84,$C2,$A4, $A
byte_80A55:
		.BYTE  $E,$82,$A2,$C4,$A2,$43,$10,$45,	9,$83,$44,$A6,$C5,$A5,$45,$C8
					; DATA XREF: BANK5:80CA-o
		.BYTE $9F,  0,$86,  1,$82, $F,$28,$A2,$2B,$A4,$C4,$88,	1,$86,	0,$83 ;	ind data used at 8000
		.BYTE	0,$C1,$80,  0,$85,$C1,$A4, $A
byte_80A7D:
		.BYTE  $D,$82,$A2,$C5,$A2,$43, $F,$60,$44, $A,$84,$43,$A7,$C5,$A4,$45
					; DATA XREF: BANK5:80CC-o
		.BYTE $A1,$C7,$9C,  2,$86,  0,$84,  9,$21,  2,$2D,  3,$27,$A2,$C7,$86 ;	ind data used at 8000
		.BYTE	2,$84,	1,$82,	1,$81,	1,$84,$C2,$A3, $A
byte_80AA8:
		.BYTE  $D,$81,$A2,$C6,$A2,$42,$10,$61,$41, $C,$85,$43,$A5,$83,$C4,$A4
					; DATA XREF: BANK5:80CE-o
		.BYTE $42,$A3,$C6,$9B,	1,$88,	1,$84,	6,$22,	4,$2C,	7,$84,$A3,$C6 ;	ind data used at 8000
		.BYTE $87,  3,$82,  1,$82,  0,$82,  0,$85,$C1,$A3, $A
byte_80AD4:
		.BYTE  $D,$81,$A3,$C4,$A3,$41,$10,$64,	3,$81,	8,$84,$43,$A3,$85,$C4
					; DATA XREF: BANK5:80D0-o
		.BYTE $A4,$84,$C7,$9F,$87,  0,$83,$22,	1,$24,	6,$2A, $A,$83,$A2,$C9 ;	ind data used at 8000
		.BYTE $87,  2,$81,  0,$82,  1,$81,  1,$84,$C2,$A2, $A
byte_80B00:
		.BYTE  $D,$81,$A4,$C2,$A3,$42,$11,$62,	3,$81, $A,$83,$43,$A3,$85,$C5
					; DATA XREF: BANK5:80D2-o
		.BYTE $A6,$81,$C8,$9F,$85,  1,$85,$25, $A,$27, $B,$87,$C9,$88,	4,$82 ;	ind data used at 8000
		.BYTE	0,$82,	0,$85,$C2,$A0, $B
byte_80B27:
		.BYTE  $D,$82,$A9,$42,$1F,  8,$82,$43,$A1,$88,$C4,$A6,$82,$C8,$9F,$83
					; DATA XREF: BANK5:80D4-o
		.BYTE	0,$85,$26,$1F,$89,$C8,$83,  0,$85,  1,$81,  0,$82,  1,$84,$C2 ;	ind data used at 8000
		.BYTE $A0, $B
byte_80B49:
		.BYTE  $D,$83,$A7,$43,$1F,  9,$47,$89,$C4,$A6,$82,$C7,$9F,$83,	0,$85
					; DATA XREF: BANK5:80D6-o
		.BYTE $40,$25,$1F,$8C,$C7,$81,	0,$86,	3,$83,	0,$84,$C2, $C ;	ind data used at 8000
byte_80B67:
		.BYTE  $E,$8A,$43,$1F, $A,$45,$8A,$C4,$A6,$84,$C6,$9F,$81,  1,$84,$42
					; DATA XREF: BANK5:80D8-o
		.BYTE $23,$1F,	1,$8C,$C6,$81,	1,$88,	0,$83,	0,$84,$C2, $C ;	ind data used at 8000
byte_80B85:
		.BYTE  $E,$89,$EA,$EB,$41,$1F, $C,$44,$8B,$C5,$A5,$83,$C7,$9F,$80,  0
					; DATA XREF: BANK5:80DA-o
		.BYTE $84,$44,$22,$1F,	3,$8B,$C8,  2,$86,  0,$83,  0,$84,$C2, $C ; ind	data used at 8000
byte_80BA4:
		.BYTE  $F,$87,	0,$43,$1F, $C,$44,$8B,$C7,$A3,$84,$C6,$9E,  2,$83,$47
					; DATA XREF: BANK5:80DC-o
		.BYTE $1F,  6,$83,$41,$84,$C9,	1,$85,	0,$82,	1,$C1,$81,$C2, $D ; ind	data used at 8000
byte_80BC3:
		.BYTE $12,$84,	1,$41,$1F, $E,$43,$8C,$C6,$A4,$83,$C8,$9C,  0,$85,$44
					; DATA XREF: BANK5:80DE-o
		.BYTE $F1,$43,$1F,  5,$46,$83,$C7,$81,	1,$84,	1,$81,	0,$C7, $D ; ind	data used at 8000
byte_80BE2:
		.BYTE $1F,$19,$83, $C,$43,$8C,$C9,$A1,$84,$C9,$99,  1,$85,$49,$1F,  5
					; DATA XREF: BANK5:80E0-o
		.BYTE $41,$F2,$45,$83,$C3,$84,	3,$82,	3,$81,$C5, $D ;	ind data used at 8000
byte_80BFE:
		.BYTE $1F,$1B,$82, $B,$44,$8C,$C9,$A1,$82,$CE,$95,  0,$85,$4B,$1F,  4
					; DATA XREF: BANK5:80E2-o
		.BYTE $41,$EE,$47,$81,$C3,$87,	2,$81,	0,$84,$C4, $D ;	ind data used at 8000
byte_80C1A:
		.BYTE $1F,$16,$81,  1,$82, $C,$44,$8C,$C9,$A1,$82,$D4,$8E,  1,$84,$48
					; DATA XREF: BANK5:80E4-o
		.BYTE	1,$41,$1F,  5,$4A,$C4,$89,  3,$86,$C1, $E ; ind	data used at 8000
byte_80C35:
		.BYTE $1A,$40,$19,$A3,$11,$43,$8C,$C8,$A2,$83,$CF,$92,	0,$85,$47,  3
					; DATA XREF: BANK5:80E6-o
		.BYTE $42,$1F,	4,$41,	1,$81,$43,$C4,$A0,$8B,	0,$86,$C1, $E ;	ind data used at 8000
byte_80C53:
		.BYTE $19,$40,$F5,$40,$1F, $F,$43,$8B,$EF,$C3,$EF,$A5,$82,$A2,$CC,$91
					; DATA XREF: BANK5:80E8-o
		.BYTE	2,$84,$47,  4,$42,$1F,	4,$82,	1,$81,$43,$C3,$A2,$89,	0,$87 ;	ind data used at 8000
		.BYTE $C1, $D
byte_80C75:
		.BYTE $19,$42,$1F, $F,$44,$8A,$C5,$A4,$83,$A2,$CB,$92,	0,$86,$46,$61
					; DATA XREF: BANK5:80EA-o
		.BYTE	4,$61,$1F,  5,$82,  1,$81,$42,$C2,$A5,$87,  1,$86,$C2, $C ; ind	data used at 8000
byte_80C94:
		.BYTE $19,$49,$1F,  7,$46,$89,$C5,$A4,$84,$A2,$CA,  1,$90,  0,$86,$45
					; DATA XREF: BANK5:80EC-o
		.BYTE $63,  2,$62,$1F,	5,$83,	1,$81,$41,$C2,$A7,$86,	1,$81,	1,$81 ;	ind data used at 8000
		.BYTE $C3, $B
byte_80CB6:
		.BYTE $1A,$45,$84,$1F,	4,$A1,$47,$87,$C7,$A3,$83,$A4,$C7,  7,$8A,  1
					; DATA XREF: BANK5:80EE-o
		.BYTE $84,$47,$63,  2,$62,$1F,	6,$83,	1,$81,$41,$C1,$A9,$85,	0,$80 ;	ind data used at 8000
		.BYTE	2,$81,$C3, $B
byte_80CDA:
		.BYTE $19,$43,$84,$C3,$1F,  3,$A3,$49,$82,$C8,$A4,$83,$A4,$C6,	9,$84
					; DATA XREF: BANK5:80F0-o
		.BYTE	4,$85,$47,$63,	3,$61,$1F,  8,$82,  0,$81,$41,$C1,$A9,$85,  6 ;	ind data used at 8000
		.BYTE $C3, $B
byte_80CFC:
		.BYTE $18,$86,$C8,$1F,	0,$A4,$4A,$81,$C8,$A5,$82,$A4,$C5,  5,$42,  7
					; DATA XREF: BANK5:80F2-o
		.BYTE $8A,$45,$64,$1F,$13,$43,$C1,$A7,$85,  7,$C1, $D ;	ind data used at 8000
byte_80D18:
		.BYTE $18,$83,$C7,$28,$1B,$A5,$45,$EA,$EB,$40,$82,$C8,$A4,$84,$A3,$C5
					; DATA XREF: BANK5:80F4-o
		.BYTE	4,$44,	2,$8A,$A3,$44,$64,$1F,$14,$44,$A6,$84,$1A ; ind	data used at 8000
byte_80D35:
		.BYTE $17,$82,$C7,$2C,$82,$15,$A6,$48,$83,$C6,$A4,$85,$A3,$C6,	2,$42
					; DATA XREF: BANK5:80F6-o
		.BYTE $F2,$42,	1,$89,$A4,$44,$64,$1F,$15,$44,$A4,$21,$82,$1B ;	ind data used at 8000
byte_80D53:
		.BYTE $16,$83,$C3,$31,$86, $F,$A7,$44,	4,$82,$C6,$A4,$84,$A4,$C6,$A2
					; DATA XREF: BANK5:80F8-o
		.BYTE $42,$EE,$41,  2,$85,$A9,$43,$64,$1F,$17,$42,$A4,$22,$1D ;	ind data used at 8000
byte_80D71:
		.BYTE $16,$81,$C3,$34,$86, $C,$A8,$44,	8,$C4,$A5,$84,$A5,$C6,$A3,$43
					; DATA XREF: BANK5:80FA-o
		.BYTE	2,$86,$A9,$42,$64,$1F,$19,$40,$A4,$22,$1E ; ind	data used at 8000
byte_80D8C:
		.BYTE $15,$81,$C3,$39,$84, $A,$A4,$48,	7,$C5,$A5,$84,$A4,$C6,$A4,$C1
					; DATA XREF: BANK5:80FC-o
		.BYTE	4,$85,$AA,$41,$66,$1F,$18,$40,$A4,$21,$1F ; ind	data used at 8000
byte_80DA7:
		.BYTE $15,$C4,$3B,$86,	3,$A5,$4B,  7,$C3,$A6,$85,$A4,$C6,$A4,$C1,  3
					; DATA XREF: BANK5:80FE-o
		.BYTE $86,$A9,$43,$64,$1F,$1A,$A3,$21,$1F,  0 ;	ind data used at 8000
byte_80DC1:
		.BYTE $15,$C4,$3B,$87,$A6,$4D,	6,$C3,$A7,$85,$A4,$C6,$A4,$C2,$88,$A9
					; DATA XREF: BANK5:8100-o
		.BYTE $46,$63,$1F,$1A,$A3,$20,	6,$21,$17 ; ind	data used at 8000
byte_80DDA:
		.BYTE $14,$C4,$27,$F3,$34,$85,$A6,$45,$82,$45,	6,$C2,$A5,$88,$A4,$C6
					; DATA XREF: BANK5:8102-o
		.BYTE $A3,$C3,$87,$A8,	2,$45,$64,$1F,$19,$A3,$20,  5,$22,$17 ;	ind data used at 8000
byte_80DF8:
		.BYTE $14,$80,$C3,$3D,$86,$A3,$46,$84,$45,  3,$C4,$A4,$89,$A4,$C6,$A3
					; DATA XREF: BANK5:8104-o
		.BYTE $C2,$88,$A8,  3,$45,$63,$1F,$1A,$A2,$21,	3,$22,$18 ; ind	data used at 8000
byte_80E15:
		.BYTE $13,$82,$C3,$3D,$86,$47,$87,$44,	2,$C4,$A4,$85,	1,$83,$A1,$C7
					; DATA XREF: BANK5:8106-o
		.BYTE $A4,$C2,$88,$A7,	4,$45,$64,$1F,$19,$A2,$27,$19 ;	ind data used at 8000
byte_80E31:
		.BYTE $11,$84,$C2,$3F,$20,$83,$47,$89,$43,  1,$C2,$A7,$84,  3,$82,$A1
					; DATA XREF: BANK5:8108-o
		.BYTE $C7,$A5,$C1,$89,$A6,  3,$45,$65,$1F,$18,$A3,$27,$19 ; ind	data used at 8000
byte_80E4E:
		.BYTE $10,$85,$C1,$3F,$26,$43,$8C,$43,	1,$C1,$A8,$84,	3,$82,$A1,$C6
					; DATA XREF: BANK5:810A-o
		.BYTE $A5,$C3,$89,$A6,	1,$45,$67,$1F,$15,$A4,$26,$1B ;	ind data used at 8000
byte_80E6A:
		.BYTE  $F,$86,$C1,$3F,$27,$90,$42,  2,$A8,$86,	1,$82,$A2,$C6,$A5,$C3
					; DATA XREF: BANK5:810C-o
		.BYTE $8A,$A7,$45,$67,$1F,$15,$A3,$24,$1E ; ind	data used at 8000
byte_80E83:
		.BYTE  $E,$87,$C1,$3F,$28,$8F,$42,  2,$A6,$8C,$A3,$C6,$A5,$C4,$8C,$A5
					; DATA XREF: BANK5:810E-o
		.BYTE $45,$66,$1F,$14,$A3,$22,$1F,  1 ;	ind data used at 8000
byte_80E9B:
		.BYTE  $D,$88,$C1,$3F,$29,$8E,$42,  2,$A5,$8B,$A4,$C7,$A6,$C5,$84,$C3
					; DATA XREF: BANK5:8110-o
		.BYTE $82,$A5,$44,  0,$63,$1F,$15,$A4,$1F,  4 ;	ind data used at 8000
byte_80EB5:
		.BYTE  $D,$88,$C1,$3F,$29,  2,$8B,$42,	2,$A6,$86,$A8,$C5,$A8,$CE,$83
					; DATA XREF: BANK5:8112-o
		.BYTE $A4,$44,	0,$62,	1,$80,$1F,$13,$A3,$1F,	5 ; ind	data used at 8000
byte_80ED0:
		.BYTE  $C,$89,$C2,$3F,$29,  2,$89,$42,	2,$A6,$85,$AA,$C5,$AA,$CD,$87
					; DATA XREF: BANK5:8114-o
		.BYTE $44,  4,$81,$1F,$14,$A2,$1F,  5 ;	ind data used at 8000
byte_80EE8:
		.BYTE  $C,$89,$C2,$3F,$28,  4,$88,$42,	1,$A7,$84,$AB,$C5,$A3,$83,$A2
					; DATA XREF: BANK5:8116-o
		.BYTE $C5,$A2,$C5,$87,$44,  2,$82,$1F,$14,$A1,$1F,  6 ;	ind data used at 8000
byte_80F04:
		.BYTE  $B,$8B,$C2,$3F,$26,  6,$86,$43,	1,$A8,$82,$AB,$C7,$A1,$81,$E8
					; DATA XREF: BANK5:_b5_d1-o
		.BYTE $E9,$81,$AD,$C4,$85,$44,	0,$84,$1F,$13,$A2,$1F,	6 ; ind	data used at 8000
byte_80F21:
		.BYTE  $B,$85,	0,$85,$C1,$3F,$25,$A2,	5,$85,$43,  1,$A7,$83,$AB,$C7
					; DATA XREF: BANK5:811A-o
		.BYTE $A1,$81,$EC,$ED,$82,$AD,$C3,$85,$42,$81,	0,$83,$1F,$14,$A2,  6 ;	ind data used at 8000
		.BYTE $C3,$1B
byte_80F43:
		.BYTE  $B,$85,	0,$84,$C3,$3F,$23,$A4,	5,$84,$42,  2,$A6,$83,$AC,$C7
					; DATA XREF: BANK5:811C-o
		.BYTE $A2,$86,$AB,$C5,$84,$41,$87,$1F,$13,$A5,	1,$CA,$17 ; ind	data used at 8000
byte_80F60:
		.BYTE  $B,$85,	1,$83,$C3,$3F,$24,$A2,$82,  4,$82,$43,	2,$A6,$84,$AC
					; DATA XREF: BANK5:811E-o
		.BYTE $C6,$A3,$84,$AA,$C2,  1,$C3,$82,$42,$87,$1F,$12,$A5,$C4,$26,$C2 ;	ind data used at 8000
		.BYTE	2,$F7,$12
byte_80F83:
		.BYTE  $B,$85,	3,$82,$C2,$3F,$24,$A1,$84,  4,$80,$43,	2,$A6,$85,$AC
					; DATA XREF: BANK5:8120-o
		.BYTE $C7,$A4,$81,  2,$A6,$C5,	1,$C2,$82,$41,$87,  0,$80,$1F,$10,$A5 ;	ind data used at 8000
		.BYTE $C2,$2B,$C1,  6,$F7, $D
byte_80FA9:
		.BYTE  $B,$85,	2,$44,$C2,$3F,$23,$A2,$83,  5,$43,  1,$A7,$86,$AB,$C8
					; DATA XREF: BANK5:8122-o
		.BYTE $A5,  3,$A4,$C7,	0,$C2,$81,$42,$87,  0,$80,$1F, $F,$A5,$C2,$23 ;	ind data used at 8000
		.BYTE $44,$24,$C1,  2,$F7,  2,$F7, $C
byte_80FD1:
		.BYTE  $B,$86,	0,$45,$C2,$3F,$23,$A2,$82,  6,$42,  2,$A7,$86,$AC,$C9
					; DATA XREF: BANK5:8124-o
		.BYTE $A3,  4,$A4,$C6,	0,$C1,$82,$43,$85,  1,$80,$1F, $F,$A4,$C2,$81 ;	ind data used at 8000
		.BYTE $21,$47,$23,$C0,	1,$F7,$F7,$F7,$F7, $E
byte_80FFB:
		.BYTE  $B,$86,$FB,$45,$C2,$26,$81,$3A,$A1,$C3,	0,$C2,	8,$A8,$86,$AD
					; DATA XREF: BANK5:8126-o
		.BYTE $C8,$A3,	4,$A3,$C6,  0,$C1,$82,$42,$85,	1,$81,$1F, $E,$A5,$C1 ;	ind data used at 8000
		.BYTE $83,$49,$22,$C3,$F7,$F7,$C2, $C
byte_81023:
		.BYTE  $B,$86,	0,$46,$C2,$24,$80,  1,$80,$38,$A3,$C2,	0,$C3,	6,$AA
					; DATA XREF: BANK5:8128-o
		.BYTE $87,$AC,$C7,$A7,	2,$A2,$C5,  1,$82,$42,$86,  1,$80,$1F, $F,$A5 ;	ind data used at 8000
		.BYTE $C1,$83,$4A,$24,$C1,$F7,$C4, $A
byte_8104B:
		.BYTE  $B,$86,	1,$45,$C2,$24,$81,  1,$80,$36,$A3,$C3,	0,$C4,	4,$AA
					; DATA XREF: BANK5:812A-o
		.BYTE $8B,$A9,$CA,$A6,	1,$43,$C3,  1,$81,$42,$85,$1F,$14,$A5,$C0,$83 ;	ind data used at 8000
		.BYTE $52,$F7,$C8,  6
byte_8106F:
		.BYTE  $B,$87,	1,$44,$C2,$25,$82,$37,$A3,$C3,	0,$C4,	3,$A8,$21,$8F
					; DATA XREF: BANK5:812C-o
		.BYTE $A7,$CD,$A2,$80,	1,$43,$C3,  1,$42,$85,$1F,$14,$A5,$C1,$83,$44 ;	ind data used at 8000
		.BYTE $A3,$49,$F7,$82,$C6,  5
byte_81095:
		.BYTE  $B,$88,	1,$44,$C2,$3F,$A2,$C4,	0,$C5,	2,$A7,$21,$84,	2,$8C
					; DATA XREF: BANK5:812E-o
		.BYTE $A4,$CC,$84,  0,$44,$C4,$41,$83,	6,$A0,$1F, $F,$A5,$C0,$83,$43 ;	ind data used at 8000
		.BYTE $A7,$46,$F7,$F7,$85,$C4,	4
byte_810BC:
		.BYTE  $B,$89,	2,$43,$C2,$3D,$A2,$C4,	1,$C5,	2,$A5,$22,$83,	3,$8A
					; DATA XREF: BANK5:8130-o
		.BYTE $25,$CB,	0,$86,	0,$43,$C5,$42,$81,  6,$A2,$1F, $D,$A5,$C1,$83 ;	ind data used at 8000
		.BYTE $42,$83,$A5,$44,$F7,$F7,$41,$85,$C3,  4
byte_810E6:
		.BYTE  $B,$8B,	0,$44,$C2,$3B,$A2,$C4,	1,$82,$C3,  1,$A2,$25,$85,  3
					; DATA XREF: BANK5:8132-o
		.BYTE $86,$27,$C9,  3,$86,  0,$44,$C2,$45,$82,	4,$80,$A0,$1F, $E,$A5 ;	ind data used at 8000
		.BYTE $C1,$83,$40,$86,$C4,$44,$FB,$43,$85,$C2,	4
byte_81111:
		.BYTE  $C,$8A,	1,$44,$C6,$35,$C8,  0,$84,$C3,	1,$26,$90,$27,$C4,$81
					; DATA XREF: BANK5:8134-o
		.BYTE	7,$86,	1,$4D,$F5,$81,$1F,$13,$A5,$C1,$84,$41,$84,$C1,	2,$C1 ;	ind data used at 8000
		.BYTE $F7,$F7,$F7,$F7,$F7,$44,$84,$C2,	4
byte_8113A:
		.BYTE  $C,$8B,	1,$44,$CB,$2F,$C8,$81,$C2,$80,$C3,  2,$27,$8C,$61,$26
					; DATA XREF: BANK5:8136-o
		.BYTE $C3,$84,	5,$88,	0,$48,	3,$44,	2,$A1,$1F, $A,$A7,$C2,$85,$40 ;	ind data used at 8000
		.BYTE $83,$C1,	4,$F7,$F7,$81,$47,$83,$C2,  4
byte_81164:
		.BYTE  $E,$8A,	0,$45,$A3,$CB,$29,$C8,$83,$C1,$A0,$C4,	2,$28,$87,$65
					; DATA XREF: BANK5:8138-o
		.BYTE $25,$C4,$85,  2,$89,  1,$46,  3,$44,  3,$A1,$1F,	8,$A8,$C1,$87 ;	ind data used at 8000
		.BYTE $40,$83,$C0,  4,$C2,$82,$47,$82,$C2,  4
byte_8118E:
		.BYTE  $F,$89,	1,$44,$A4,$CF,$24,$C9,$82,  0,$A0,$F0,$A0,$C3,	2,$27
					; DATA XREF: BANK5:813A-o
		.BYTE $42,$83,$42,$65,$25,$C3,$87,  0,$8A,  0,$44, $D,$A2,$1F,	7,$A8 ;	ind data used at 8000
		.BYTE $C2,$87,$40,$83,$C2,  1,$C1,$85,$46,$82,$C2,  4
byte_811BA:
		.BYTE $10,$89,	0,$44,$A5,$CF,$E2,$C4,$82,$C2,$81,  1,$C0,$A0,$C4,  2
					; DATA XREF: BANK5:813C-o
		.BYTE $26,$4B,$67,$23,$C1,$83,$EF,$83,	0,$8A,	0,$44,	8,$A1,	0,$A2 ;	ind data used at 8000
		.BYTE $EF,$1F,	8,$A5,$C3,$A0,$87,$41,$84,$C4,$87,$46,$C3,  5
byte_811E8:
		.BYTE $11,$88,	0,$43,$A9,$CC,$E0,$F5,$E0,$C3,$84,$C2,	1,$C7,	2,$25
					; DATA XREF: BANK5:813E-o
		.BYTE $4E,$69,$C2,$87,$FB,$8A,	1,$44,	7,$A1,	0,$81,$F1,$1F,	8,$A5 ;	ind data used at 8000
		.BYTE $C3,$A1,$86,$41,$86,$C1,$8A,$46,$C1,  6
byte_81212:
		.BYTE $12,$87,	2,$B0,$C7,$E2,$C2,$85,$C2,  0,$81,$C6,	3,$24,$4E,$6A
					; DATA XREF: BANK5:8140-o
		.BYTE $C2,$86,	0,$8B,	1,$43,	7,$A1,$1F, $C,$A5,$C3,$A0,$86,$41,$87 ;	ind data used at 8000
		.BYTE $C1,$8A,$46,$C1,	6
byte_81237:
		.BYTE $14,$87,	1,$B1,$CB,$85,$C1,  1,$81,$C7,	2,$24,$4D,$6C,$C1,$85
					; DATA XREF: BANK5:8142-o
		.BYTE	1,$8C,	2,$41,	7,$A0,	1,$A2,$1F,  8,$A5,$C1,$A3,$84,$41,$89 ;	ind data used at 8000
		.BYTE $C1,$89,$46,$C0,	7
byte_8125C:
		.BYTE $16,$86,	3,$AB,$43,$CA,$83,  4,$82,$C7,	2,$23,$4D,$6D,$C6,  1
					; DATA XREF: BANK5:8144-o
		.BYTE $8D,$41,$1F,$19,$A5,$C1,$A4,$83,$40,$8A,$C2,$89,$45,$C0,	7 ; ind	data used at 8000
byte_8127B:
		.BYTE $17,$88,	0,$A8,$47,$C8,$83,  1,$88,$C5,	2,$22,$4E,$69,$45,$C4
					; DATA XREF: BANK5:8146-o
		.BYTE	0,$8C,$46,$1F,$16,$A4,$C2,$A4,$83,$40,$86,$A4,$C2,$88,$45,$C0 ;	ind data used at 8000
		.BYTE	7
byte_8129C:
		.BYTE $17,$88,	1,$A5,$49,$C5,$85,  1,$88,$42,$C2,  2,$24,$43,$83,$46
					; DATA XREF: BANK5:8148-o
		.BYTE $67,$4B,	0,$89,$49,$1F,$15,$A4,$C3,$A4,$81,$43,$82,$A8,$C2,$87 ;	ind data used at 8000
		.BYTE $42,$F5,$41,$C0,	7
byte_812C1:
		.BYTE $1A,$FF,	1,$83,	0,$A3,$4A,$C5,$86,  0,$88,$44,$C1,  1,$27,$86
					; DATA XREF: BANK5:814A-o
		.BYTE $46,$65,$42,$EA,$EB,$46,	1,$88,$49,$1F,$16,$A4,$C3,$A3,$82,$40 ;	ind data used at 8000
		.BYTE $E8,$E9,$40,$81,$A9,$C3,$86,$44,$C1,  7
byte_812EB:
		.BYTE $18,$43,	5,$A3,$4A,$C3,$87,  1,$87,$46,$C0,  1,$29,$85,$57,  0
					; DATA XREF: BANK5:814C-o
		.BYTE $89,$49,$1F,$16,$A4,$C3,$A3,$82,$40,$EC,$ED,$40,$81,$AA,$C2,$85 ;	ind data used at 8000
		.BYTE $45,$C1,	7
byte_8130E:
		.BYTE $18,$43,$61,  4,$4C,$C2,$88,  1,$86,$A2,$45,$C0,	1,$2A,$82,$56
					; DATA XREF: BANK5:814E-o
		.BYTE	3,$88,$4A,$1F,$17,$A3,$C4,$A2,$82,$43,$81,$A6,$62,$E1,$C2,$83 ;	ind data used at 8000
		.BYTE $44,$C3,	7
byte_81331:
		.BYTE $19,$42,$64,  2,$4A,$C3,$88,  0,$86,$A3,$45,$C0,	1,$2A,	1,$56
					; DATA XREF: BANK5:8150-o
		.BYTE	1,$44,$86,$49,$1F,$18,$A3,$C4,$A3,$87,$A4,$65,$E0,$C3,$81,$44
		.BYTE $C2,$82,	6
byte_81354:
		.BYTE $19,$43,$65,  2,$47,$C3,$88,  1,$85,$A5,$43,$C1,	1,$2A,	2,$4D
					; DATA XREF: BANK5:8152-o
		.BYTE $A4,$42,$FB,$46,$83,$4A,$1F,$19,$A3,$C4,$A4,$84,$A5,$66,$E1,$CB
		.BYTE $83,  6
byte_81376:
		.BYTE $19,$45,$65,  1,$44,$C3,	1,$86,	2,$85,$A7,$42,$C0,  2,$29,  7
					; DATA XREF: BANK5:8154-o
		.BYTE $46,$AA,	2,$52,$1F,$1A,$A3,$C5,$AE,$67,$E1,$CA,$83,  6
byte_81394:
		.BYTE $1A,$40,$F5,$42,$66,  1,$41,  8,$84,  3,$83,$A9,$42,$C0,	1,$28
					; DATA XREF: BANK5:8156-o
		.BYTE  $C,$82,$AD,  1,$4E,$1F,$1D,$A4,$C5,$AE,$67,$E1,$C7,$85,	6
byte_813B3:
		.BYTE $1A,$45,$66,  1,$FF,  0,$C1,  5,$C3,  4,$83,$A9,$42,$C0,	1,$27
					; DATA XREF: BANK5:8158-o
		.BYTE  $D,$83,$AD,  1,$4C,$1F,$1F,$A3,$C5,$AF,$67,$E0,$C5,$86,	7
byte_813D2:
		.BYTE $1A,$44,$64,  3,$81,$C3,	2,$C5,	5,$82,$A9,$42,$C0,  2,$22,$12
					; DATA XREF: BANK5:815A-o
		.BYTE $82,$AE,	2,$47,$61,$1F,$1F,  1,$A3,$C6,$AD,$67,$C4,$88,	7
byte_813F1:
		.BYTE $1A,$45,$63,  0,$84,$CC,	4,$84,$A8,$42,$C0,$19,$82,$A8,$83,  4
					; DATA XREF: BANK5:815C-o
		.BYTE $42,$65,$1F,$1F,	1,$A3,$C6,$AD,$67,$C4,$88,  7
byte_8140D:
		.BYTE $1A,$45,	4,$84,$CC,  2,$C7,$A6,$43,$C0,$19,$83,$A6,$82,	7,$66
					; DATA XREF: BANK5:815E-o
		.BYTE $1F,$1F,	3,$A3,$C5,$AB,$68,$C4,$89,  7 ;	ind data used at 8000
byte_81427:
		.BYTE $1B,$82,$41,$FB,$87,$CB,	2,$CA,$A5,$43,$C0,$1A,$83,$A4,$82,  9
					; DATA XREF: BANK5:8160-o
		.BYTE $62,$1F,$1F,  6,$A4,$C6,$A6,$6A,$C4,$8A,	7 ; ind	data used at 8000
byte_81442:
		.BYTE $1B,$84,	0,$86,$CB,  1,$CD,$A3,$43,$C1,$1B,$83,$A2,$82, $B,$60
					; DATA XREF: BANK5:8162-o
		.BYTE $1F,$1F,	8,$A4,$C6,$A4,$66,  2,$C6,$89,	8 ; ind	data used at 8000
byte_8145D:
		.BYTE $1B,$81,	3,$85,$D4,  2,$C8,$43,$C0,$1C,$88, $C,$62,$1F,$1F,  7
					; DATA XREF: BANK5:8164-o
		.BYTE $A5,$C4,$A4,$65,	5,$C3,$89,  9 ;	ind data used at 8000
byte_81475:
		.BYTE $1E,$87,$CA,  3,$C5,  4,$C7,$43,$C0,$1D,$86, $E,$62,$1F,$1F,  7
					; DATA XREF: BANK5:8166-o
		.BYTE $A4,$C4,$A4,$64,	1,$E2,	1,$8C, $A ; ind	data used at 8000
byte_8148E:
		.BYTE $1E,$86,$C7,$82,	1,$C1,	1,$C3,	1,$E2,	1,$C6,$42,$C1,$1E,$85
					; DATA XREF: BANK5:8168-o
		.BYTE  $F,$61,$1F,$1F,	8,$A4,$C4,$A5,$62,$FB,$FB,$E0,$EF,$E0,	1,$8B ;	ind data used at 8000
		.BYTE  $B
byte_814AF:
		.BYTE $1C,$88,$C6,$82,	1,$C0,$A1,$C0,	6,$E0,$F4,$E0,	1,$C6,$42,$C0
					; DATA XREF: BANK5:816A-o
		.BYTE $1F,$84,$10,$61,$1F,$1F,	9,$A3,$C4,$A5,$62,  1,$E2,  2,$89, $C ;	ind data used at 8000
byte_814CF:
		.BYTE $1C,$87,$C5,$A2,$81,  0,$C0,$A0,$E8,$E9,$A0,$C0,	0,$82,	1,$E2
					; DATA XREF: BANK5:816C-o
		.BYTE	1,$C6,$42,$C0,$1F,  0,$82,$11,$61,$1F,$1F,  9,$A4,$C3,$A5,$C1 ;	ind data used at 8000
		.BYTE	8,$87, $E
byte_814F2:
		.BYTE $1D,$84,$C7,$A2,$81,  0,$C0,$A0,$EC,$ED,$A0,$C0,	0,$80,$F5,$80
					; DATA XREF: BANK5:816E-o
		.BYTE $C0,  4,$C7,$42,$C0,$1F,$16,$60,$1F,$1F, $A,$A4,$C3,$A3,$C2,  7 ;	ind data used at 8000
		.BYTE $88, $E
byte_81514:
		.BYTE $1F,  2,$C8,$A1,$81,  1,$C0,$A1,$C0,  1,$82,$C1,	2,$C7,$43,$C0
					; DATA XREF: BANK5:8170-o
		.BYTE $1F,  4,$A1,$1F,$1F,$1C,$A3,$C4,$A1,$C3,$81,  4,$88, $F ;	ind data used at 8000
byte_81532:
		.BYTE $1D,$A3,	2,$C6,$A2,$81,	1,$C1,	1,$83,$CA,$45,$C0,$1F,	5,$A1
					; DATA XREF: BANK5:8172-o
		.BYTE $1F,$1F,$1C,$A2,$C9,$90, $F ; ind	data used at 8000
byte_81549:
		.BYTE $1D,$A5,	2,$C5,$A2,$81,	3,$81,$A1,$CA,$46,$C0,$1F,$1F,$1F,$1F
					; DATA XREF: BANK5:8174-o
		.BYTE	5,$A2,$C8,$91, $E ; ind	data used at 8000
byte_8155E:
		.BYTE $1D,$40,$A6,  2,$C4,$AB,$C9,$47,$C0,$1F,$1F,$1F,$1F,  5,$A2,$C6
					; DATA XREF: BANK5:8176-o
		.BYTE $A1,$90, $F	; ind data used	at 8000
byte_81571:
		.BYTE $1C,$43,$A6,  1,$C7,$A1,$EF,$A1,$C9,$81,$48,$C0,$1F,$1F,$1F,$1F
					; DATA XREF: BANK5:8178-o
		.BYTE	5,$A3,$C4,$A1,$88,$41,$86, $F ;	ind data used at 8000
byte_81589:
		.BYTE $1B,$44,$A7,  0,$D5,$82,$48,$C0,$1F,$1F,$1F,$1F,	6,$A2,$C3,$A2
					; DATA XREF: BANK5:817A-o
		.BYTE $87,$43,$83,$11	; ind data used	at 8000
byte_8159D:
		.BYTE $1B,$44,$A7,  1,$D3,$82,$48,$C1,$1F,$1F,$1F,$1F,	6,$A2,$C2,$A3
					; DATA XREF: BANK5:817C-o
		.BYTE $86,$44,$82,$12	; ind data used	at 8000
byte_815B1:
		.BYTE $1A,$44,$A8,$80,	0,$D1,$84,$47,$C1,$1F,$1F,$1F,$1F,  7,$A2,$C2
					; DATA XREF: BANK5:817E-o
		.BYTE $A3,$85,$44,$82,$13 ; ind	data used at 8000
byte_815C6:
		.BYTE $1A,$43,$A8,$81,	0,$C8,$EF,$C6,$86,$45,$C1,$1F,$1F,$1F,$1F,  9
					; DATA XREF: BANK5:8180-o
		.BYTE $A1,$C2,$A2,$86,$42,$84,$13 ; ind	data used at 8000
byte_815DD:
		.BYTE $1A,$43,$A7,$82,	0,$C8,$20,$C4,$89,$44,$C0,$1F,$1F,$1F,$1F, $A
					; DATA XREF: BANK5:8182-o
		.BYTE $A1,$C1,$A3,$85,$43,$84,$13 ; ind	data used at 8000
byte_815F4:
		.BYTE $1A,$42,$A8,$82,	0,$C8,$20,$C3,$8E,$C1,$1F,$1F,$1F,$1F, $A,$A7
					; DATA XREF: BANK5:8184-o
		.BYTE $85,$42,$85,$13	; ind data used	at 8000
byte_81608:
		.BYTE $1A,$42,$A6,$84,	0,$C8,$20,$C2,$83,$E2,$88,$C0,$1F,$1F,$1F,$1F
					; DATA XREF: BANK5:8186-o
		.BYTE  $C,$A6,$84,$42,$85,$14 ;	ind data used at 8000
byte_8161E:
		.BYTE $1A,$41,$A6,$85,	0,$C7,$22,$C0,$83,$E4,$87,$C0,$1F,$1F,$1F,$1F
					; DATA XREF: BANK5:8188-o
		.BYTE  $C,$A6,$82,$44,$85,$14 ;	ind data used at 8000
byte_81634:
		.BYTE $1A,$41,$A5,$86,	0,$C7,$22,$83,$E6,$84,$C2,$1F,$1F,$1F,$1F, $C
					; DATA XREF: BANK5:818A-o
		.BYTE $A5,$82,$44,$85,$15 ; ind	data used at 8000
byte_81649:
		.BYTE $19,$41,$A5,$85,	3,$C7,$20,$C1,$83,$E4,$84,$C1,$1F,$1F,$1B,$83
					; DATA XREF: BANK5:818C-o
		.BYTE	4,$82,$1F,  6,$A5,$81,$44,$85,$16 ; ind	data used at 8000
byte_81662:
		.BYTE $19,$41,$A5,$84,	1,$81,	0,$C9,$85,$E2,$84,$C1,$1F,$1F,$1A,$86
					; DATA XREF: BANK5:818E-o
		.BYTE	2,$87,$1F,  3,$A3,$82,$43,$85,$17 ; ind	data used at 8000
byte_8167B:
		.BYTE $19,$A7,$84,  0,$82,  1,$C8,$8D,$C1,$1F,$1F,$15,$49,$8F,$1F,  0
					; DATA XREF: BANK5:8190-o
		.BYTE $A3,$81,$43,$85,$18 ; ind	data used at 8000
byte_81690:
		.BYTE $18,$A6,$86,  0,$81,$F1,$40,  0,$C9,$8C,$C1,$1F,$1F,$12,$64,$48
					; DATA XREF: BANK5:8192-o
		.BYTE $90,$1E,$A3,$81,$42,$86,$18 ; ind	data used at 8000
byte_816A7:
		.BYTE $18,$A5,$86,  1,$80,$42,	0,$CA,$8A,$C1,$1F,$1F,$12,$66,$4A,$8F
					; DATA XREF: BANK5:8194-o
		.BYTE $1C,$A2,$83,$41,$85,$19 ;	ind data used at 8000
byte_816BD:
		.BYTE $18,$A4,$87,  0,$84,  1,$CB,$85,$C3,$1F,$1F,$12,$66,$4D,$8E,$1A
					; DATA XREF: BANK5:8196-o
		.BYTE $8F,$19		; ind data used	at 8000
byte_816CF:
		.BYTE $18,$A3,$84,  4,$85,  1,$D1,$1F,$1F,$14,$65,$42,$EA,$EB,$4B,$8D
					; DATA XREF: BANK5:8198-o
		.BYTE $1B,$8D,$1A	; ind data used	at 8000
byte_816E2:
		.BYTE $18,$A3,$84,  0,$8A,  0,$CE,$1F,$1F,$16,$67,$4F,$8E,$1A,$8D,$1A
					; DATA XREF: BANK5:819A-o
					; ind data used	at 8000
byte_816F2:
		.BYTE $18,$A3,$83,  1,$8A,  0,$82,$CB,$1F,$1F,$15,$68,$51,$8C,$19,$8D
					; DATA XREF: BANK5:819C-o
		.BYTE $1B		; ind data used	at 8000
byte_81703:
		.BYTE $18,$A3,$90,  0,$83,$C9,$1F,$1F,$16,$67,$48,$83,$47,$8B,$18,$8D
					; DATA XREF: BANK5:819E-o
		.BYTE $1B		; ind data used	at 8000
byte_81714:
		.BYTE $18,$A4,$8A,$A2,$81,  2,$82,$C8,$1F,$1F,$16,$66,$45,$88,$48,$89
					; DATA XREF: BANK5:81A0-o
		.BYTE $19,$8B,$1C	; ind data used	at 8000
byte_81727:
		.BYTE $19,$A3,$88,$A5,$87,$C5,$1F,$1F,$18,$64,$46,$8B,$45,$A4,$85,$18
					; DATA XREF: BANK5:81A2-o
		.BYTE $8C,$1C		; ind data used	at 8000
byte_81739:
		.BYTE $1A,$A4,$83,$A9,$86,$C1,$1F,$1F,$1C,$A1,$61,$46,$8D,$43,$A8,$83
					; DATA XREF: BANK5:81A4-o
		.BYTE $17,$8B,$1D	; ind data used	at 8000
byte_8174C:
		.BYTE $1A,$B8,$1F,$1F,$1D,$A5,$44,$8F,$42,$AA,$83,$17,$8A,$1D
					; DATA XREF: BANK5:81A6-o
					; ind data used	at 8000
byte_8175A:
		.BYTE $1C,$B7,$1F,$1F,$1C,$A5,$43,$86,$60,$8B,$AB,$82,$17,$8A,$1D
					; DATA XREF: BANK5:81A8-o
					; ind data used	at 8000
byte_81769:
		.BYTE $1D,$B5,$1F,$1F,$1C,$A6,$42,$95,$AA,$C2,$17,$89,$40,$1D
					; DATA XREF: BANK5:81AA-o
					; ind data used	at 8000
byte_81777:
		.BYTE $1E,$B3,$1F,$1F,$1C,$A7,$42,$86,	2,$C2,$8B,$A5,$C5,$16,$87,$42
					; DATA XREF: BANK5:81AC-o
		.BYTE $1D		; ind data used	at 8000
byte_81788:
		.BYTE $1F,$B0,$1F,$1F,$1E,$A6,$44,$84,	4,$C4,$82,$C6,$A3,$C6,$16,$86
					; DATA XREF: BANK5:81AE-o
		.BYTE $40,$F1,$41,$1D	; ind data used	at 8000
byte_8179C:
		.BYTE $1F,  2,$AA,$1F,$1F,$1F,	1,$A6,$45,$83,	7,$C5,	1,$C4,$A1,$C6
					; DATA XREF: BANK5:81B0-o
		.BYTE $18,$85,$43,$1D	; ind data used	at 8000
byte_817B0:
		.BYTE $1F,$1F,$1F,  3,$41,  4,$40,$1F,	3,$A5,$45,$86,	1,$82,	2,$C2
					; DATA XREF: BANK5:81B2-o
		.BYTE	1,$C5,$A1,$C7,$18,$84,$42,$1E ;	ind data used at 8000
byte_817C8:
		.BYTE $1F,$1F,$1F,  2,$42,  4,$41,$1F,	3,$A4,$45,$8D,	4,$84,$A2,$C9
					; DATA XREF: BANK5:81B4-o
		.BYTE $17,$85,$41,$1E	; ind data used	at 8000
byte_817DC:
		.BYTE $1F,$1F,$1F,  1,$44,  2,$43,$1F,	2,$A5,$46,$8C,	2,$86,$A1,$C5
					; DATA XREF: BANK5:81B6-o
		.BYTE $82,$C0,$17,$85,$41,$1E ;	ind data used at 8000
byte_817F2:
		.BYTE $1F,$1F,$1F,$4D,$1F,  2,$A5,$47,$8B,  3,$86,$A1,$C4,$80,	0,$80
					; DATA XREF: BANK5:81B8-o
		.BYTE $C0,$18,$85,$40,$1E ; ind	data used at 8000
byte_81807:
		.BYTE $1F,$1F,$1E,$51,$1F,  0,$A5,$48,$88,  1,$81,  1,$86,$A1,$C3,$82
					; DATA XREF: BANK5:81BA-o
		.BYTE $C0,$19,$84,$40,$1E ; ind	data used at 8000
byte_8181C:
		.BYTE $1F,$1F,$1D,$43,$87,$46,$1F,  0,$A3,$64,$48,$84,	1,$82,	2,$85
					; DATA XREF: BANK5:81BC-o
		.BYTE $A2,$C3,$80,$C1,$19,$85,$1E ; ind	data used at 8000
byte_81833:
		.BYTE $1F,$1F,$1C,$43,$8A,$45,$1E,$81,$A1,$62,$21,$61,$4B,  1,$84,  1
					; DATA XREF: BANK5:81BE-o
		.BYTE $85,$A3,$C2,$20,$C1,$19,$86,$1D ;	ind data used at 8000
byte_8184B:
		.BYTE $1F,$1F,$1C,$42,$82,$C5,$83,$45,$1E,$82,$61,$23,$61,$4A,$FB,$42
					; DATA XREF: BANK5:81C0-o
		.BYTE $83,  1,$82,$A5,$C2,$20,$C0,$1B,$86,$1C ;	ind data used at 8000
byte_81865:
		.BYTE $1F,$1F,$1C,$41,$82,$C1,$23,$C4,$80,$45,$1D,$83,$24,$63,$47,  1
					; DATA XREF: BANK5:81C2-o
		.BYTE $43,$82,	2,$A8,$61,$21,$1C,$86,$1B ; ind	data used at 8000
byte_8187E:
		.BYTE $1F,$1F,$1B,$A1,$83,$C0,$26,$81,$EA,$EB,$46,$1D,$82,$23,$66,$40
					; DATA XREF: BANK5:81C4-o
		.BYTE	5,$45,$81,$C1,	1,$A6,$63,$21,$1D,$84,$1B ; ind	data used at 8000
byte_81899:
		.BYTE $1F,$1F,$1B,$A1,$82,$C1,$27,$C0,$81,$44,$A1,$1D,$83,$21,$85,  8
					; DATA XREF: BANK5:81C6-o
		.BYTE $47,$C2,	0,$A5,$61,$F5,$60,$22,$1F,  1,$81,$1A ;	ind data used at 8000
byte_818B5:
		.BYTE $1F,$1F,$1B,$A1,$82,$C0,$23,$EF,$23,$C0,$82,$41,$A4,$1D,$89,  5
					; DATA XREF: BANK5:81C8-o
		.BYTE $41,  1,$47,$C2,$A5,$63,$23,$1F,$1E ; ind	data used at 8000
byte_818CE:
		.BYTE $1F,$1F,$1A,$A2,$82,$C0,$28,$C0,$84,$A4,$1D,$88,	5,$81,$F2,$40
					; DATA XREF: BANK5:81CA-o
		.BYTE	1,$42,$E8,$E9,$41,$C3,$A4,$62,$23,$1F,$1F ; ind	data used at 8000
byte_818E9:
		.BYTE $1F,$1F,$19,$A3,$82,$C1,$26,$C1,$84,$A5,$1D,$87,	5,$81,$EE,$40
					; DATA XREF: BANK5:81CC-o
		.BYTE	1,$42,$EC,$ED,$41,$C3,$A5,$24,$1F,$1F,	0 ; ind	data used at 8000
byte_81904:
		.BYTE $1F,$1F,$19,$A3,$83,$C8,$85,$A5,$1E,$86,	6,$82,	1,$46,$C3,$A7
					; DATA XREF: BANK5:81CE-o
		.BYTE $21,$1F,$1F,  1	; ind data used	at 8000
byte_81918:
		.BYTE $1F,$1F,$19,$A4,$91,$A5,$1F,$86, $A,$46,$C4,$A1,$1F,$1F,	8
					; DATA XREF: BANK5:81D0-o
					; ind data used	at 8000
byte_81927:
		.BYTE $1F,$1F,$1A,$A5,$8E,$A6,$1F,  0,$86,  8,$45,$81,$C5,$1F,$1F,  9
					; DATA XREF: BANK5:81D2-o
					; ind data used	at 8000
byte_81937:
		.BYTE $1F,$1F,$1A,$A7,	6,$83,$A8,$1F,	1,$86,	7,$43,$82,$C6,$1F,$1F
					; DATA XREF: BANK5:81D4-o
		.BYTE	9		; ind data used	at 8000
byte_81948:
		.BYTE $1F,$1F,$1C,$A3, $A,$A9,$1F,  3,$84,$EF,$80,  4,$44,$82,$C6,$1F
					; DATA XREF: BANK5:81D6-o
		.BYTE $1F, $A		; ind data used	at 8000
byte_8195A:
		.BYTE $1F,$1F,$1F, $B,$A9,$1F,	6,$83,	2,$44,$83,$C4,$1F,$1F, $D
					; DATA XREF: BANK5:81D8-o
					; ind data used	at 8000
byte_81969:
		.BYTE $1F,$1F,$1F, $D,$A7,$1F, $C,$88,$C4,$1F,$1F, $E
					; DATA XREF: BANK5:81DA-o
byte_81975:
		.BYTE $1F,$1F,$1F, $E,$A5,$1F, $E,$86,$C3,$1F,$1F,$10
					; DATA XREF: BANK5:81DC-o
byte_81981:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81DE-o
byte_81989:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81E0-o
byte_81991:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81E2-o
byte_81999:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81E4-o
byte_819A1:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81E6-o
byte_819A9:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81E8-o
byte_819B1:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81EA-o
byte_819B9:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81EC-o
byte_819C1:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:81EE-o
byte_819C9:
		.BYTE $1F,  7,$24,$1F,$1F,$1F,$1F,$1F,$1F,$12 ;	DATA XREF: BANK5:81F0-o
byte_819D3:
		.BYTE $1F,  4,$2B,$1F,$1F,$1F,$1F,$1F,$1F, $E ;	DATA XREF: BANK5:81F2-o
					; ind data used	at 8000
byte_819DD:
		.BYTE $1F,  2,$30,$1F,$1F,$1F,$1F,$1F,$1F, $B ;	DATA XREF: BANK5:81F4-o
					; ind data used	at 8000
byte_819E7:
		.BYTE $1F,  1,$34,$1F,$1F,$1F,$1F,$1F,$1F,  8 ;	DATA XREF: BANK5:81F6-o
					; ind data used	at 8000
byte_819F1:
		.BYTE $1F,  1,$33,  6,$28,$1F,$1F,$1F,$1F,$1F,$19 ; DATA XREF: BANK5:81F8-o
					; ind data used	at 8000
byte_819FC:
		.BYTE $1F,  2,$31,  5,$2B,$1F,$1F,$1F,$1F,  9,$81,$1F, $C
					; DATA XREF: BANK5:81FA-o
					; ind data used	at 8000
byte_81A09:
		.BYTE $1F,  3,$30,  3,$2E,$1F,$1F,$1F,$1F,  6,$84,$1F, $B
					; DATA XREF: BANK5:81FC-o
					; ind data used	at 8000
byte_81A16:
		.BYTE $1F,  4,$3F,$23,$1F,$1F,$1F,$1F,	5,$80,	0,$F1,$1F, $D
					; DATA XREF: BANK5:81FE-o
					; ind data used	at 8000
byte_81A24:
		.BYTE $1F,  5,$3F,$23,$1F,$1F,$1F,$1F,	5,$82,$1F, $C
					; DATA XREF: BANK5:8200-o
					; ind data used	at 8000
byte_81A30:
		.BYTE $1F,  6,$2D,$F5,$33,$1F,$1F,$1F,$1F,$1F,$15 ; DATA XREF: BANK5:8202-o
					; ind data used	at 8000
byte_81A3B:
		.BYTE $1F,  7,$3F,$21,$1F,$1F,$1F,$1F,$1F,$15 ;	DATA XREF: BANK5:8204-o
					; ind data used	at 8000
byte_81A45:
		.BYTE $1F,  8,$3F,$1F,$1F,$1F,$1F,$1F,$16 ; DATA XREF: BANK5:8206-o
					; ind data used	at 8000
byte_81A4E:
		.BYTE $1F, $B,$3F,$1F,$1F,$1F,$1F,$1F,$13 ; DATA XREF: BANK5:8208-o
					; ind data used	at 8000
byte_81A57:
		.BYTE $1F, $D,$32,  5,$25,$1F,$1F,$1F,$1F,$1F,$12 ; DATA XREF: BANK5:820A-o
					; ind data used	at 8000
byte_81A62:
		.BYTE $1F,$13,$2A, $B,$22,$1F,$1F,$1F,$1F,$1F,$11 ; DATA XREF: BANK5:820C-o
					; ind data used	at 8000
byte_81A6D:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:820E-o
					; ind data used	at 8000
byte_81A75:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8210-o
byte_81A7D:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8212-o
byte_81A85:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8214-o
byte_81A8D:
		.BYTE $1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F ;	DATA XREF: BANK5:8216-o
_b5_d2:
		.WORD byte_81BAB	; DATA XREF: BANK5:8004-o BANK5:8218-o
		.WORD byte_81BB0
		.WORD byte_81BB5
		.WORD byte_81BBA
		.WORD byte_81BBF
		.WORD byte_81BC4
		.WORD byte_81BC9
		.WORD byte_81BCE
		.WORD byte_81BD3
		.WORD byte_81BD9
		.WORD byte_81BE5
		.WORD byte_81BF4	; data used at 8000
		.WORD byte_81C05	; data used at 8000
		.WORD byte_81C15	; data used at 8000
		.WORD byte_81C23	; data used at 8000
		.WORD byte_81C34	; data used at 8000
		.WORD byte_81C45	; data used at 8000
		.WORD byte_81C57	; data used at 8000
		.WORD byte_81C68	; data used at 8000
		.WORD byte_81C7C	; data used at 8000
		.WORD byte_81C91	; data used at 8000
		.WORD byte_81CA2	; data used at 8000
		.WORD byte_81CB7	; data used at 8000
		.WORD byte_81CC9	; data used at 8000
		.WORD byte_81CDD	; data used at 8000
		.WORD byte_81CF0	; data used at 8000
		.WORD byte_81CFD	; data used at 8000
		.WORD byte_81D0D	; data used at 8000
		.WORD byte_81D1B	; data used at 8000
		.WORD byte_81D2B	; data used at 8000
		.WORD byte_81D3A	; data used at 8000
		.WORD byte_81D49	; data used at 8000
		.WORD byte_81D57	; data used at 8000
		.WORD byte_81D6C	; data used at 8000
		.WORD byte_81D80	; data used at 8000
		.WORD byte_81D95	; data used at 8000
		.WORD byte_81DA9	; data used at 8000
		.WORD byte_81DBA	; data used at 8000
		.WORD byte_81DCE	; data used at 8000
		.WORD byte_81DE4	; data used at 8000
		.WORD byte_81DFA	; data used at 8000
		.WORD byte_81E0C	; data used at 8000
		.WORD byte_81E1C	; data used at 8000
		.WORD byte_81E2A	; data used at 8000
		.WORD byte_81E3A	; data used at 8000
		.WORD byte_81E48	; data used at 8000
		.WORD byte_81E5B	; data used at 8000
		.WORD byte_81E6D	; data used at 8000
		.WORD byte_81E7E	; data used at 8000
		.WORD byte_81E91	; data used at 8000
		.WORD byte_81EA3	; data used at 8000
		.WORD byte_81EB5	; data used at 8000
		.WORD byte_81EC1	; data used at 8000
		.WORD byte_81ECF	; data used at 8000
		.WORD byte_81EDA	; data used at 8000
		.WORD byte_81EE6	; data used at 8000
		.WORD byte_81EF2	; data used at 8000
		.WORD byte_81F04	; data used at 8000
		.WORD byte_81F1B	; data used at 8000
		.WORD byte_81F34	; data used at 8000
		.WORD byte_81F47	; data used at 8000
		.WORD byte_81F59	; data used at 8000
		.WORD byte_81F6A	; data used at 8000
		.WORD byte_81F7D	; data used at 8000
		.WORD byte_81F90	; data used at 8000
		.WORD byte_81FA2	; data used at 8000
		.WORD byte_81FB4	; data used at 8000
		.WORD byte_81FCB	; data used at 8000
		.WORD byte_81FE0	; data used at 8000
		.WORD byte_81FF6	; data used at 8000
		.WORD byte_8200A	; data used at 8000
		.WORD byte_8201B	; data used at 8000
		.WORD byte_8202D	; data used at 8000
		.WORD byte_82040	; data used at 8000
		.WORD byte_82052	; data used at 8000
		.WORD byte_82063	; data used at 8000
		.WORD byte_82071	; data used at 8000
		.WORD byte_8207F	; data used at 8000
		.WORD byte_8208D	; data used at 8000
		.WORD byte_8209D	; data used at 8000
		.WORD byte_820AE	; data used at 8000
		.WORD byte_820C0	; data used at 8000
		.WORD byte_820D1	; data used at 8000
		.WORD byte_820E0	; data used at 8000
		.WORD byte_820EC	; data used at 8000
		.WORD byte_820F9	; data used at 8000
		.WORD byte_82105	; data used at 8000
		.WORD byte_82112	; data used at 8000
		.WORD byte_8211F	; data used at 8000
		.WORD byte_82130	; data used at 8000
		.WORD byte_82142	; data used at 8000
		.WORD byte_82156	; data used at 8000
		.WORD byte_8216C	; data used at 8000
		.WORD byte_82180	; data used at 8000
		.WORD byte_82191	; data used at 8000
		.WORD byte_821A5	; data used at 8000
		.WORD byte_821B7	; data used at 8000
		.WORD byte_821C9	; data used at 8000
		.WORD byte_821D9	; data used at 8000
		.WORD byte_821EE	; data used at 8000
		.WORD byte_821FE	; data used at 8000
		.WORD byte_8220D	; data used at 8000
		.WORD byte_8221E	; data used at 8000
		.WORD byte_8222C	; data used at 8000
		.WORD byte_82238	; data used at 8000
		.WORD byte_82248	; data used at 8000
		.WORD byte_82256	; data used at 8000
		.WORD byte_82266	; data used at 8000
		.WORD byte_82278	; data used at 8000
		.WORD byte_82289	; data used at 8000
		.WORD byte_8229B	; data used at 8000
		.WORD byte_822AD	; data used at 8000
		.WORD byte_822C6	; data used at 8000
		.WORD byte_822DB	; data used at 8000
		.WORD byte_822EC	; data used at 8000
		.WORD byte_822FD	; data used at 8000
		.WORD byte_82310	; data used at 8000
		.WORD byte_82323	; data used at 8000
		.WORD byte_82335	; data used at 8000
		.WORD byte_82349	; data used at 8000
		.WORD byte_8235A	; data used at 8000
		.WORD byte_8236B	; data used at 8000
		.WORD byte_8237D	; data used at 8000
		.WORD byte_8238B	; data used at 8000
		.WORD byte_82398
		.WORD byte_823A3
		.WORD byte_823AB
		.WORD byte_823B4
		.WORD byte_823BC
		.WORD byte_823C2
		.WORD byte_823C7
		.WORD byte_823CC
		.WORD byte_823D1
		.WORD byte_823D6
		.WORD byte_823DB
		.WORD byte_823E0
		.WORD byte_823E5
		.WORD byte_823EA
		.WORD off_823EF
byte_81BAB:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:_b5_d2-o
byte_81BB0:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9A97-o
byte_81BB5:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9A99-o
byte_81BBA:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9A9B-o
byte_81BBF:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9A9D-o
byte_81BC4:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9A9F-o
byte_81BC9:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9AA1-o
byte_81BCE:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9AA3-o
byte_81BD3:
		.BYTE $1F,$1F,$1F,$45,$1F,$17 ;	DATA XREF: BANK5:9AA5-o
byte_81BD9:
		.BYTE $14,$66, $A,$45,$1F,$10,$84,$40,$F2,$40,$1F,$17
					; DATA XREF: BANK5:9AA7-o
byte_81BE5:
		.BYTE $13,$68,	7,$48,$12,$A7,$12,$86,$40,$EE,$40, $B,$A5,$1F,	5
					; DATA XREF: BANK5:9AA9-o
byte_81BF4:
		.BYTE $12,$6A,	5,$44,$83,  4,$62,  8,$86,$A5, $F,$86,$43,  7,$AB,$86
					; DATA XREF: BANK5:9AAB-o
		.BYTE $1C		; ind data used	at 8000
byte_81C05:
		.BYTE $12,$6B,	6,$84,	7,$62,	6,$8A,$A3, $E,$86,$C1,	8,$AB,$89,$1A
					; DATA XREF: BANK5:9AAD-o
					; ind data used	at 8000
byte_81C15:
		.BYTE $12,$64,$F5,$A6,$1B,$8B,$A4,$10,$82,$C2,	6,$AB,$8C,$19
					; DATA XREF: BANK5:9AAF-o
					; ind data used	at 8000
byte_81C23:
		.BYTE $12,$64,$A8,$19,$85,  2,$84,$A3,	9,$82,	4,$80,$C2,  6,$AA,$8F
					; DATA XREF: BANK5:9AB1-o
		.BYTE $18		; ind data used	at 8000
byte_81C34:
		.BYTE $13,$61,$AB,  7,$85,  9,$85,  4,$82,$A3,	9,$C2,$82, $C,$AA,$91
					; DATA XREF: BANK5:9AB3-o
		.BYTE $17		; ind data used	at 8000
byte_81C45:
		.BYTE $13,$A4,$CA,  3,$89,  5,$87,  4,$A6,  9,$C0,$84, $D,$A8,$85,$C4
					; DATA XREF: BANK5:9AB5-o
		.BYTE $88,$16		; ind data used	at 8000
byte_81C57:
		.BYTE $12,$A3,$CF,$99,	2,$A6,	9,$C2,$83, $D,$A6,$85,$C2,$82,$C2,$86
					; DATA XREF: BANK5:9AB7-o
		.BYTE $16		; ind data used	at 8000
byte_81C68:
		.BYTE $12,$A3,$C3,$85,$C5,$85,$23,$90,$A7, $B,$C2,$82, $C,$A7,$84,$C1
					; DATA XREF: BANK5:9AB9-o
		.BYTE $85,$C1,$86,$16	; ind data used	at 8000
byte_81C7C:
		.BYTE $13,$43,$8B,$C2,$84,$25,$90,$A5, $C,$C2,$83,  3,$81,  6,$A6,$89
					; DATA XREF: BANK5:9ABB-o
		.BYTE $F1,$82,$C1,$86,$15 ; ind	data used at 8000
byte_81C91:
		.BYTE $14,$43,$8B,$C2,$82,$27,$91,$A3, $D,$C2,$82,  1,$84,  6,$A6,$95
					; DATA XREF: BANK5:9ABD-o
		.BYTE $15		; ind data used	at 8000
byte_81CA2:
		.BYTE $15,$44,$89,$C3,$81,$23,$EF,$22,$91,$A4,	7,$83,	1,$C1,$81,  2
					; DATA XREF: BANK5:9ABF-o
		.BYTE $85,  5,$A7,$93,$16 ; ind	data used at 8000
byte_81CB7:
		.BYTE $16,$47,$86,$C3,$81,$26,$92,$A4,	5,$85,	1,$C1,	2,$86,	5,$A9
					; DATA XREF: BANK5:9AC1-o
		.BYTE $91,$16		; ind data used	at 8000
byte_81CC9:
		.BYTE $17,$48,$85,$C3,$82,$23,$87,$42,$88,$A3,$41,  4,$85,  6,$85,  7
					; DATA XREF: BANK5:9AC3-o
		.BYTE $A6,$43,$8E,$17	; ind data used	at 8000
byte_81CDD:
		.BYTE $17,$49,$86,$C2,$8C,$44,$88,$A1,$42,  5,$82,  7,$C3,$82,	8,$A4
					; DATA XREF: BANK5:9AC5-o
		.BYTE $45,$8D,$17	; ind data used	at 8000
byte_81CF0:
		.BYTE $16,$83,$46,$96,$44,$89,$43,$11,$C4, $A,$49,$8B,$19
					; DATA XREF: BANK5:9AC7-o
					; ind data used	at 8000
byte_81CFD:
		.BYTE $15,$85,$46,$94,$45,$88,$45,$12,$C1,  2,$82,  5,$4A,$85,$C4,$19
					; DATA XREF: BANK5:9AC9-o
					; ind data used	at 8000
byte_81D0D:
		.BYTE $14,$88,$48,$90,$46,$86,$47,$16,$83,  4,$4A,$81,$C9,$18
					; DATA XREF: BANK5:9ACB-o
					; ind data used	at 8000
byte_81D1B:
		.BYTE $14,$88,$4A,$8F,$47,$83,$49,  7,$84,  9,$82,  5,$48,$C6,$26,$17
					; DATA XREF: BANK5:9ACD-o
					; ind data used	at 8000
byte_81D2B:
		.BYTE $13,$8A,$4D,$8B,$55,  6,$A2,$83,	7,$C3,	6,$46,$C5,$2A,$15
					; DATA XREF: BANK5:9ACF-o
					; ind data used	at 8000
byte_81D3A:
		.BYTE $12,$8B,$4E,$89,$57,  4,$A4,$83,	7,$C1,	7,$45,$C5,$2C,$14
					; DATA XREF: BANK5:9AD1-o
					; ind data used	at 8000
byte_81D49:
		.BYTE $12,$8C,$4B,$A3,$86,$58,	3,$A6,$83,$11,$44,$C4,$2E,$13
					; DATA XREF: BANK5:9AD3-o
					; ind data used	at 8000
byte_81D57:
		.BYTE $12,$8D,$46,  2,$A6,$83,$4E,$83,$46,  2,$A8,$83,	9,$A2,	3,$45
					; DATA XREF: BANK5:9AD5-o
		.BYTE $C2,$28,$82,$24,$12 ; ind	data used at 8000
byte_81D6C:
		.BYTE $12,$8E,$43,  9,$A2,$83,$49,$88,$46,  1,$A8,$84,	7,$A4,	3,$47
					; DATA XREF: BANK5:9AD7-o
		.BYTE $27,$84,$23,$12	; ind data used	at 8000
byte_81D80:
		.BYTE $12,$8F,$41, $A,$A2,$83,$47,$89,$A2,$45,	1,$A7,$85,  6,$A5,  3
					; DATA XREF: BANK5:9AD9-o
		.BYTE $46,$27,$84,$23,$12 ; ind	data used at 8000
byte_81D95:
		.BYTE $12,$90,	9,$A3,$83,$47,$89,$A5,$44,  2,$A4,$86,	7,$65,	3,$45
					; DATA XREF: BANK5:9ADB-o
		.BYTE $28,$82,$24,$12	; ind data used	at 8000
byte_81DA9:
		.BYTE $14,$8E,	8,$C2,$85,$46,$89,$A7,$44,  4,$8B,  6,$62,  4,$46,$2E
					; DATA XREF: BANK5:9ADD-o
		.BYTE $13		; ind data used	at 8000
byte_81DBA:
		.BYTE $15,$8C,	8,$C6,$81,$45,$8B,$A8,$46,  4,$87,$42,	7,$F7,	0,$F7
					; DATA XREF: BANK5:9ADF-o
		.BYTE	0,$48,$2C,$14	; ind data used	at 8000
byte_81DCE:
		.BYTE $1A,$86,	5,$CC,$45,$8C,$A7,$43,$C3,  4,$86,$43,	3,$F7,	0,$F7
					; DATA XREF: BANK5:9AE1-o
		.BYTE	0,$F7,	0,$4A,$29,$16 ;	ind data used at 8000
byte_81DE4:
		.BYTE $16,$A2,	2,$83,	4,$CE,$44,$88,$C5,$A5,$42,$C4,	6,$86,$45,$F7
					; DATA XREF: BANK5:9AE3-o
		.BYTE	0,$F7,	2,$4D,$26,$17 ;	ind data used at 8000
byte_81DFA:
		.BYTE $15,$A5,$FB,$81,	2,$D0,$45,$86,$C9,$A5,$C5,  8,$85,$46,	6,$4B
					; DATA XREF: BANK5:9AE5-o
		.BYTE $A6,$17		; ind data used	at 8000
byte_81E0C:
		.BYTE $14,$A6,	4,$CF,$48,$82,$CD,$A4,$C5,  8,$84,$47,	6,$49,$A9,$16
					; DATA XREF: BANK5:9AE7-o
					; ind data used	at 8000
byte_81E1C:
		.BYTE $14,$B2,$C5,$4C,$D0,$82,$C8,  5,$86,$46,	5,$49,$AB,$15
					; DATA XREF: BANK5:9AE9-o
					; ind data used	at 8000
byte_81E2A:
		.BYTE $14,$B4,$C2,$4C,$C3,$A4,$C7,$89,$C3,  2,$89,$45,	4,$49,$AD,$14
					; DATA XREF: BANK5:9AEB-o
					; ind data used	at 8000
byte_81E3A:
		.BYTE $15,$B4,$4F,$AB,$C4,$84,$24,$C6,$87,$46,	3,$49,$AF,$13
					; DATA XREF: BANK5:9AED-o
					; ind data used	at 8000
byte_81E48:
		.BYTE $16,$A4,$84,$A9,	2,$4B,$86,$A7,$C3,$81,$28,$C5,$85,$46,	3,$44
					; DATA XREF: BANK5:9AEF-o
		.BYTE $C3,$B1,$13	; ind data used	at 8000
byte_81E5B:
		.BYTE $16,$85,$45,$A6,	4,$49,$8A,$A5,$C3,$28,$8B,$46,	3,$42,$81,$C5
					; DATA XREF: BANK5:9AF1-o
		.BYTE $B0,$13		; ind data used	at 8000
byte_81E6D:
		.BYTE $13,$86,$48,$A4,	5,$47,$8D,$A7,	3,$25,$8C,$44,	5,$83,$C6,$AF
					; DATA XREF: BANK5:9AF3-o
		.BYTE $13		; ind data used	at 8000
byte_81E7E:
		.BYTE $12,$86,$48,$84,	6,$46,$8B,$45,$A3,  6,$21,$E2,$8A,$43,	6,$85
					; DATA XREF: BANK5:9AF5-o
		.BYTE $C6,$AD,$14	; ind data used	at 8000
byte_81E91:
		.BYTE $12,$84,$47,$87,	2,$81,	2,$44,$87,$4C,	9,$E4,$88, $C,$86,$C4
					; DATA XREF: BANK5:9AF7-o
		.BYTE $AC,$15		; ind data used	at 8000
byte_81EA3:
		.BYTE $12,$83,$46,$87,	4,$81,	2,$45,$84,$4D, $B,$E3,$86,$12,$E2,$C7
					; DATA XREF: BANK5:9AF9-o
		.BYTE $A5,$19		; ind data used	at 8000
byte_81EB5:
		.BYTE $12,$84,$43,$85, $D,$53,$13,$84,$16,$E3,$C8,$1C
					; DATA XREF: BANK5:9AFB-o
					; ind data used	at 8000
byte_81EC1:
		.BYTE $13,$8B, $E,$4E,$EA,$EB,$41,$1F,$13,$E6,$C2,  4,$F7,$17
					; DATA XREF: BANK5:9AFD-o
					; ind data used	at 8000
byte_81ECF:
		.BYTE $14,$89, $F,$51,$1F,$18,$E0,$EF,$E0,$C1,$1E ; DATA XREF: BANK5:9AFF-o
					; ind data used	at 8000
byte_81EDA:
		.BYTE $14,$89, $F,$4E,	7,$C2,$1F,$14,$F7,  2,$F7,$1A
					; DATA XREF: BANK5:9B01-o
					; ind data used	at 8000
byte_81EE6:
		.BYTE $16,$87, $C,$81,$4A,$62,	7,$C5,$1F,$14,$F7,$1D
					; DATA XREF: BANK5:9B03-o
					; ind data used	at 8000
byte_81EF2:
		.BYTE $16,$86, $C,$84,$46,$63,	6,$E3,$C5,$10,$84,  4,$86,$11,$81,  2
					; DATA XREF: BANK5:9B05-o
		.BYTE $A3,$14		; ind data used	at 8000
byte_81F04:
		.BYTE $18,$81, $E,$87,$42,$64,	6,$C0,$E0,$E8,$E9,$E0,$C6, $C,$23,$91
					; DATA XREF: BANK5:9B07-o
		.BYTE  $E,$81,	0,$F7,	0,$A5,$13 ; ind	data used at 8000
byte_81F1B:
		.BYTE $1F,  9,$88,$66,	5,$C1,$E0,$EC,$ED,$E0,$C9,$22,	0,$22,	1,$26
					; DATA XREF: BANK5:9B09-o
		.BYTE $8D,$45,	5,$42,	3,$F7,	0,$A6,$13 ; ind	data used at 8000
byte_81F34:
		.BYTE $1F,$C3,	4,$8A,$66,  3,$C2,$E3,$20,$C5,$24,  3,$2A,$8E,$4C,  4
					; DATA XREF: BANK5:9B0B-o
		.BYTE $83,$A4,$12	; ind data used	at 8000
byte_81F47:
		.BYTE $1D,$CC,$87,$67,	3,$C6,$20,$C4,$23,$C1,	3,$C1,$29,$8E,$4D,  1
					; DATA XREF: BANK5:9B0D-o
		.BYTE $89,$12		; ind data used	at 8000
byte_81F59:
		.BYTE $1A,$D0,$87,$65,	4,$C4,$23,$C3,$22,$C1,	5,$C2,$29,$8D,$4D,$8A
					; DATA XREF: BANK5:9B0F-o
		.BYTE $12		; ind data used	at 8000
byte_81F6A:
		.BYTE $15,$D6,$87,$63,	6,$C2,$24,$C4,$20,$C1,	7,$C3,$28,$86,	6,$C2
					; DATA XREF: BANK5:9B11-o
		.BYTE $46,$8D,$12	; ind data used	at 8000
byte_81F7D:
		.BYTE $14,$C6,$86,$CC,$87,  7,$C1,$26,$C3,$A1,$C0,  9,$C2,$27,$84,  7
					; DATA XREF: BANK5:9B13-o
		.BYTE $C7,$8F,$13	; ind data used	at 8000
byte_81F90:
		.BYTE $14,$C4,$89,$CD,$85,  8,$C0,$26,$C2,$A1,$C2,  9,$C3,$24, $C,$CB
					; DATA XREF: BANK5:9B15-o
		.BYTE $8C,$13		; ind data used	at 8000
byte_81FA2:
		.BYTE $14,$90,$CC,$84,	8,$C1,$24,$C2,$A2,$C1, $C,$C3,$A3,  7,$88,$C7
					; DATA XREF: BANK5:9B17-o
		.BYTE $8A,$14		; ind data used	at 8000
byte_81FB4:
		.BYTE $13,$89,$E1,$87,$C3,$43,$EF,$C1,$82,$A2,	7,$C2,$22,$C2,$A3,$C1
					; DATA XREF: BANK5:9B19-o
		.BYTE  $C,$C2,$A6,$8F,$C9,$86,$15 ; ind	data used at 8000
byte_81FCB:
		.BYTE $13,$88,$E3,$85,$47,$C2,$A7,  7,$C1,$21,$C2,$A5,$C1, $A,$C2,$A7
					; DATA XREF: BANK5:9B1B-o
		.BYTE $8F,$C8,$22,$85,$14 ; ind	data used at 8000
byte_81FE0:
		.BYTE $13,$88,$E3,$84,$47,$C2,$A7,  8,$C1,$20,$C5,$A0,$C4, $C,$C0,$A5
					; DATA XREF: BANK5:9B1D-o
		.BYTE $48,$87,$C7,$25,$84,$14 ;	ind data used at 8000
byte_81FF6:
		.BYTE $13,$89,$E1,$84,$4A,$A7,	8,$C1,$E1,$C4,$42,$C2, $D,$C1,$A3,$4D
					; DATA XREF: BANK5:9B1F-o
		.BYTE $8A,$27,$82,$15	; ind data used	at 8000
byte_8200A:
		.BYTE $14,$91,$AE, $B,$C1,$E1,$C2,$44,$C0, $D,$C2,$A2,$4F,$88,$27,$83
					; DATA XREF: BANK5:9B21-o
		.BYTE $15		; ind data used	at a000
byte_8201B:
		.BYTE $14,$8F,$AA,$84, $D,$C0,$E2,$C2,$42,$C1, $E,$C2,$A2,$4E,$89,$25
					; DATA XREF: BANK5:9B23-o
		.BYTE $84,$15		; ind data used	at a000
byte_8202D:
		.BYTE $15,$8A,$AA,$88, $D,$C1,$E3,$C1,$42,$C1, $E,$C2,$A7,$82,$44,$8B
					; DATA XREF: BANK5:9B25-o
		.BYTE $23,$86,$14	; ind data used	at a000
byte_82040:
		.BYTE $16,$88,$A9,$87,$44, $C,$C1,$E5,$C2,$10,$C1,$A6,$84,$42,$83,$C7
					; DATA XREF: BANK5:9B27-o
		.BYTE $8B,$14		; ind data used	at a000
byte_82052:
		.BYTE $17,$8A,$A4,$88,$46, $C,$C2,$E1,$C2,$15,$A4,$8A,$C2,$44,$C5,$87
					; DATA XREF: BANK5:9B29-o
		.BYTE $14		; ind data used	at a000
byte_82063:
		.BYTE $1A,$88,$A5,$84,$47, $F,$C3,$19,$8C,$C2,$48,$C3,$87,$13
					; DATA XREF: BANK5:9B2B-o
					; ind data used	at a000
byte_82071:
		.BYTE $1B,$88,$A2,$85,$47,$1F, $F,$8C,$43,$84,$42,$C4,$85,$13
					; DATA XREF: BANK5:9B2D-o
					; ind data used	at a000
byte_8207F:
		.BYTE $1C,$8F,$46,  4,$86,$1F,	6,$88,$45,$86,$42,$C3,$85,$13
					; DATA XREF: BANK5:9B2F-o
					; ind data used	at a000
byte_8208D:
		.BYTE $1E,$8C,$45,  4,$86,$1F,	8,$87,$45,$81,	4,$81,$42,$C3,$84,$13
					; DATA XREF: BANK5:9B31-o
					; ind data used	at a000
byte_8209D:
		.BYTE $1F,  0,$8A,$45,	3,$86,$1F, $A,$86,$44,$81,  7,$80,$41,$C2,$84
					; DATA XREF: BANK5:9B33-o
		.BYTE $14		; ind data used	at a000
byte_820AE:
		.BYTE $1F,  1,$8A,$4A,$83,$1F, $C,$86,$42,$81,	2,$43,	1,$81,$40,$C3
					; DATA XREF: BANK5:9B35-o
		.BYTE $83,$14		; ind data used	at a000
byte_820C0:
		.BYTE $1F,  6,$86,$4B,$1F, $F,$8A,  2,$40,$EA,$EB,$40,$21,$81,$C3,$85
					; DATA XREF: BANK5:9B37-o
		.BYTE $13		; ind data used	at a000
byte_820D1:
		.BYTE $18,$85,	8,$86,$48,$1F,$11,$8A,	2,$43,	1,$81,$C3,$84,$14
					; DATA XREF: BANK5:9B39-o
					; ind data used	at a000
byte_820E0:
		.BYTE $17,$88,	8,$83,$49,$1F,$12,$8A,	7,$C4,$84,$15
					; DATA XREF: BANK5:9B3B-o
					; ind data used	at a000
byte_820EC:
		.BYTE $16,$8C,	5,$82,$4C,$1E,$C7, $A,$8A,  4,$C6,$84,$15
					; DATA XREF: BANK5:9B3D-o
					; ind data used	at a000
byte_820F9:
		.BYTE $15,$89,$44,  5,$51,$19,$2B,  9,$87,$CB,$86,$15
					; DATA XREF: BANK5:9B3F-o
					; ind data used	at a000
byte_82105:
		.BYTE $14,$87,$4A,  2,$52,$17,$CB,$21,	9,$87,$C9,$86,$16
					; DATA XREF: BANK5:9B41-o
					; ind data used	at a000
byte_82112:
		.BYTE $13,$87,$4C,  2,$52,$15,$CD,$21,	9,$88,$C6,$87,$16
					; DATA XREF: BANK5:9B43-o
					; ind data used	at a000
byte_8211F:
		.BYTE $12,$86,$4F,  2,$4A,$81,$45, $D,$C9,$25,$C5,$20, $A,$88,$C6,$85
					; DATA XREF: BANK5:9B45-o
		.BYTE $17		; ind data used	at a000
byte_82130:
		.BYTE $12,$85,$51,$FB,$4A,$83,$44, $A,$C7,$2D,$C2,$20,$C1, $A,$87,$C5
					; DATA XREF: BANK5:9B47-o
		.BYTE $86,$16		; ind data used	at a000
byte_82142:
		.BYTE $13,$84,$50,  2,$48,$85,$44,  7,$C8,$21,$CB,$21,$C1,$20,$C1, $C
					; DATA XREF: BANK5:9B49-o
		.BYTE $86,$C5,$85,$16	; ind data used	at a000
byte_82156:
		.BYTE $13,$83,$4E,$C7,$47,$83,$45,  6,$C8,$21,$C3,$26,$C2,$20,$C1,$20
					; DATA XREF: BANK5:9B4B-o
		.BYTE $C2, $C,$86,$C4,$85,$16 ;	ind data used at a000
byte_8216C:
		.BYTE $12,$84,$4B,$CD,$45,$81,$46,  7,$C7,$20,$C8,$22,$C2,$23,$C5, $A
					; DATA XREF: BANK5:9B4D-o
		.BYTE $86,$C3,$86,$15	; ind data used	at a000
byte_82180:
		.BYTE $12,$85,$4A,$CF,$4B, $A,$26,$C9,$20,$C4,$23,$C5,	9,$86,$C2,$87
					; DATA XREF: BANK5:9B4F-o
		.BYTE $15		; ind data used	at a000
byte_82191:
		.BYTE $13,$84,$49,$C3,$26,$C7,$47, $C,$A0,$C4,$21,$C8,$20,$C7,$87,  9
					; DATA XREF: BANK5:9B51-o
		.BYTE $84,$C2,$88,$15	; ind data used	at a000
byte_821A5:
		.BYTE $15,$84,$47,$2D,$C9, $E,$A2,$C4,$24,$C4,$20,$C6,$8A,  7,$83,$A5
					; DATA XREF: BANK5:9B53-o
		.BYTE $86,$15		; ind data used	at a000
byte_821B7:
		.BYTE $15,$86,$44,$2F,$C2, $E,$84,$A4,$CD,$26,$85,$42,$83,  7,$83,$A4
					; DATA XREF: BANK5:9B55-o
		.BYTE $86,$15		; ind data used	at a000
byte_821C9:
		.BYTE $14,$89,$42,$30, $E,$85,$A5,$D3,$85,$44,$84,  5,$84,$A4,$84,$16
					; DATA XREF: BANK5:9B57-o
					; ind data used	at a000
byte_821D9:
		.BYTE $12,$8D,$2A,$EA,$EB,$24, $C,$86,$A6,$C4,$43,  3,$C7,$83,$46,$84
					; DATA XREF: BANK5:9B59-o
		.BYTE	3,$85,$A5,$84,$15 ; ind	data used at a000
byte_821EE:
		.BYTE $12,$8D,$30,  5,$8F,$A4,$C3,$47,	3,$C7,$81,$46,$8E,$A7,$81,$16
					; DATA XREF: BANK5:9B5B-o
					; ind data used	at a000
byte_821FE:
		.BYTE $13,$8B,$30, $D,$8A,$C5,$48,$FB,$E1,$C9,$81,$44,$8F,$A9,$16
					; DATA XREF: BANK5:9B5D-o
					; ind data used	at a000
byte_8220D:
		.BYTE $17,$86,$2F,  4,$93,$C4,$83,$46,	2,$E1,$44,$C3,$82,$42,$91,$A7
					; DATA XREF: BANK5:9B5F-o
		.BYTE $17		; ind data used	at a000
byte_8221E:
		.BYTE $1A,$82,$2F,$12,$85,$C1,$8A,  5,$E1,$46,$C3,$95,$A8,$17
					; DATA XREF: BANK5:9B61-o
					; ind data used	at a000
byte_8222C:
		.BYTE $1A,$31,	9,$8E,$C1,$87,	9,$48,$C3,$93,$A9,$18
					; DATA XREF: BANK5:9B63-o
					; ind data used	at a000
byte_82238:
		.BYTE $1A,$31,	5,$86,	2,$86,$C2,$84, $C,$4A,$C3,$87,	2,$85,$AA,$19
					; DATA XREF: BANK5:9B65-o
					; ind data used	at a000
byte_82248:
		.BYTE $19,$33, $F,$83,$C2,$84, $C,$4D,$C4,$84,	4,$83,$AA,$1A
					; DATA XREF: BANK5:9B67-o
					; ind data used	at a000
byte_82256:
		.BYTE $17,$A5,$2C,$8E,	2,$82,$C1,$86,	8,$85,$4A,$82,$C6,  8,$AB,$1B
					; DATA XREF: BANK5:9B69-o
					; ind data used	at a000
byte_82266:
		.BYTE $15,$A9,$27,$92,$FB,$81,$C2,$86,	1,$82,	3,$88,$47,$85,$C5, $A
					; DATA XREF: BANK5:9B6B-o
		.BYTE $A7,$1C		; ind data used	at a000
byte_82278:
		.BYTE $13,$AE,$25,$8F,	3,$C1,$83,$43,	1,$84,	3,$89,$41,$88,$C7,$1F
					; DATA XREF: BANK5:9B6D-o
		.BYTE  $E		; ind data used	at a000
byte_82289:
		.BYTE $12,$AC,$C3,$25,$8C,  8,$46,  0,$86,  3,$86,$A1,$41,$A1,$85,$C7
					; DATA XREF: BANK5:9B6F-o
		.BYTE $1F, $F		; ind data used	at a000
byte_8229B:
		.BYTE $12,$AA,$C6,$26,$87, $A,$47,$FB,$87,  3,$85,$A0,$43,$A0,$85,$C7
					; DATA XREF: BANK5:9B71-o
		.BYTE $1F, $F		; ind data used	at a000
byte_822AD:
		.BYTE $13,$A8,$C8,$26,$86,$C1,	3,$C2,$47,  5,$85,  2,$85,$A0,$40,$EA
					; DATA XREF: BANK5:9B73-o
		.BYTE $EB,$40,$A0,$86,$C5,  9,$A2,$1F,	3 ; ind	data used at a000
byte_822C6:
		.BYTE $13,$A6,$CA,$27,$83,$C4,	1,$C5,$44,  7,$85,  3,$83,$A0,$43,$A0
					; DATA XREF: BANK5:9B75-o
		.BYTE $86,$C4,	9,$A7,$1F ; ind	data used at a000
byte_822DB:
		.BYTE $13,$A5,$CC,$26,$A3,$CD,$43,  8,$85,  2,$83,$A5,$86,$C4,	8,$AC
					; DATA XREF: BANK5:9B77-o
		.BYTE $1B		; ind data used	at a000
byte_822EC:
		.BYTE $13,$A5,$C2,$83,$C5,$25,$A5,$CB,$43, $A,$84,$C3,$8E,$C6,	6,$B0
					; DATA XREF: BANK5:9B79-o
		.BYTE $18		; ind data used	at a000
byte_822FD:
		.BYTE $14,$A3,$C1,$87,$C5,$22,$A7,$C7,$84, $E,$82,$C6,$89,$C9,	5,$A6
					; DATA XREF: BANK5:9B7B-o
		.BYTE $C4,$A5,$17	; ind data used	at a000
byte_82310:
		.BYTE $15,$A2,$C1,$88,$C4,$AB,$C5,$84,$10,$24,$D2,$A4,	6,$A4,$C1,$82
					; DATA XREF: BANK5:9B7D-o
		.BYTE $C1,$A4,$17	; ind data used	at a000
byte_82323:
		.BYTE $16,$A2,$C1,$85,$B0,$C6,$84,$12,$24,$D0,$A4,  8,$A3,$C0,$84,$C0
					; DATA XREF: BANK5:9B7F-o
		.BYTE $A3,$18		; ind data used	at a000
byte_82335:
		.BYTE $16,$A3,$C4,$43,$AD,$C6,$84,$13,$26,$CA,$A8,  9,$A2,$C0,$81,$F5
					; DATA XREF: BANK5:9B81-o
		.BYTE $81,$C0,$A2,$19	; ind data used	at a000
byte_82349:
		.BYTE $15,$A8,$45,$AA,$C5,$87,$14,$28,$C6,$A7, $C,$A1,$C0,$84,$C0,$A1
					; DATA XREF: BANK5:9B83-o
		.BYTE $1A		; ind data used	at a000
byte_8235A:
		.BYTE $15,$A7,$47,$A8,$C5,$88,$16,$27,$C6,$26, $D,$A0,$C2,$80,$C2,$A1
					; DATA XREF: BANK5:9B85-o
		.BYTE $1A		; ind data used	at a000
byte_8236B:
		.BYTE $16,$A6,$47,$A9,$C3,$88,$18,$27,$C3,$E2,$22,$10,$42,$C0,$80,$C0
					; DATA XREF: BANK5:9B87-o
		.BYTE $A3,$1A		; ind data used	at a000
byte_8237D:
		.BYTE $17,$A5,$47,$A7,$C4,$88,$19,$28,$E3,$F5,$E1,$13,$47,$1B
					; DATA XREF: BANK5:9B89-o
					; ind data used	at a000
byte_8238B:
		.BYTE $18,$A5,$45,$A6,$C4,$89,$1C,$24,	2,$E4,$15,$44,$1D
					; DATA XREF: BANK5:9B8B-o
					; ind data used	at a000
byte_82398:
		.BYTE $18,$A6,$43,$A5,	2,$8C,$1F,$1F,	1,$42,$1E ; DATA XREF: BANK5:9B8D-o
byte_823A3:
		.BYTE $19,$AE,	2,$8B,$1F,$1F,$1F,  5 ;	DATA XREF: BANK5:9B8F-o
byte_823AB:
		.BYTE $1A,$AD,$FB,$A5,$84,$1F,$1F,$1F,	8 ; DATA XREF: BANK5:9B91-o
byte_823B4:
		.BYTE $1B,$AB,	2,$A6,$1F,$1F,$1F, $B ;	DATA XREF: BANK5:9B93-o
byte_823BC:
		.BYTE $1C,$A8,$1F,$1F,$1F,$17 ;	DATA XREF: BANK5:9B95-o
byte_823C2:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9B97-o
byte_823C7:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9B99-o
byte_823CC:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9B9B-o
byte_823D1:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9B9D-o
byte_823D6:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9B9F-o
byte_823DB:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9BA1-o
byte_823E0:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9BA3-o
byte_823E5:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9BA5-o
byte_823EA:
		.BYTE $1F,$1F,$1F,$1F,$1D ; DATA XREF: BANK5:9BA7-o
off_823EF:
		.WORD byte_823F1	; DATA XREF: BANK5:9BA9-o
					; sub_1764E3:loc_176501-r
					; sub_1764E3+21-r
					; data used at a000
byte_823F1:
		.BYTE $18,$CA,	0,$18,$D8, $A,$18,$D4,	1,  8,$91,$90,$14,$C2,$8B,$18
					; DATA XREF: BANK5:off_823EF-o
		.BYTE $C6,$8C,$15,  7,$80,$19,$27,  3,$15,$2F,	0,$1D, $F,$80,$1C,$1F ;	ind data used at a000
		.BYTE	0,$28,$91,$D0,$10,$1B,$84, $C,$2F,  0,	4,$30,	0,$19,$23,  3
		.BYTE $74,$98,$80,$14,$9F,$80,$18,$DC,$80,$14,$EC,  0,	1,  2,	0,$11
		.BYTE	3,$80,$18,$BE,$80,$14,$B6,$80,$18,$32,	0,$18,$36,  0,$1C,$7E
		.BYTE $80,$15, $B,$80,$18,$3A,	1,$18,$3E,  2,$1C,$72,	0,$19,$17,$80
		.BYTE $14,$F8,$80,$18,$F0,$80,$10,$D0,$C0,  4,$93,  0,$14,$FC,$80,$18
		.BYTE $F4,$80,$28,$CE,$C0,  0,$90,  0,$19,$2B,$80,$18,$DC,$80,$74,$98
		.BYTE $80,$14,$9F,$80,$19,$1F,$8D,  1,	0,  6,	1,  1,	7,  1,	2,  0
		.BYTE $34,$70,	0,$14,$82,  0,$14,$94,$80,$14,$9B,$80,$14,$76,$80,$14
		.BYTE $7A,$80,$19,$2B,$80,  0, $C,  8,	1,  1,	7,  1,	2,  0,$18,$BE
		.BYTE $80,$14,$B6,$80,$11,  3,$80,$18,$F0,$80,$18,$F4,$80,  0, $C,  7
		.BYTE $19,$1F,$8D, $C,$31,  5,$74,$98,$80,$14,$9F,$80,$18,$B2,	0,$18
		.BYTE $DC,$80,$14,$EC,	0,  0, $C,  8,	1,  1,	7,$11,$13,  1,$19,$2B
		.BYTE $80,$14,$F8,$80,$11,  3,$80,  4,$93,  0,$34,$70,	0,$14,$FC,$80
		.BYTE $18,$DC,$80,$14,$EC,  0,$74,$98,$80,$14,$9F,$80,$18,$E4,$80,$18
		.BYTE $E8,$80,$18,$E0,$80,$19,$2B,$80,	0,$90,	0,  1,	2,  0,$18,$BE
		.BYTE $80,$14,$B6,$80,$11,  3,$80,$1C,$72,  0,$14,$BA,	0,$19,$1F,$8D
		.BYTE $14,$F8,$80,$34,$8A,$A0,$14,$8C,$E0,$18,$5A,  1,$14,$FC,$80,$15
		.BYTE  $B,$80,$1C,$7E,$80,$19,$2B,$80,	1,  1,	7,  0,$90,  0,$11,$13
		.BYTE	1,$14,$EC,  0,	4,$93,	0,$1C,$72,  0,	1,  2,	0,$15,$23,  0
		.BYTE $18,$DC,$80,$14,$EC,  0,$74,$98,$80,$14,$9F,$80,$18,$E4,$80,$18
		.BYTE $B2,  0, $C,$31,	5,$14,$BA,  0,$18,$F0,$80,$11,	3,$80,$18,$BE
		.BYTE $80,$14,$B6,$80,$18,$F4,$80,$1C,$7E,$80,$1C,$72,	0,$19,$17,$80
		.BYTE $19,$1F,$8D, $C,$31,  5,$74,$98,$80,$14,$9F,$80,$18,$B2,	0,$18
		.BYTE $DC,$80,$14,$EC,	0,  0, $C,  8,	0,$90,	0,$19,$2B,$80,$18,$BE
		.BYTE $80,$14,$B6,$80,$11,  3,$80,$11,$17,$80,	1,  0,	6,$1D,$1B,  1
		.BYTE $10,$1B,$84,  4,$30,  0, $C,$2F,	0,$1C,$1F,  0,$1C,$23,	0,$14
		.BYTE $27,  0,$18,$2B,$80, $C,$31,  5,$18,$32,	0,$18,$36,  0,$18,$42
		.BYTE	1,$18,$46,  2,$18,$3A,	1,$18,$3E,  2,$14,$56,	1,$18,$4E,  1
		.BYTE	0, $C,$80,$14,$4A,  1,$14,$52,	0,$14,$5E,  1,	0, $C,	1,$18
		.BYTE $5A,  1,	0, $C,$80,$10,$62,$80,	0, $C,$80,  0, $C,$80,	0, $C
		.BYTE $80,$10,$66,  0,	0, $C,$80,  0, $C,$80,$40,$6E,	0,$10,$6A,  0
		.BYTE	0, $C,$80,  0, $C,$80,	0, $C,$80,  0, $C,$80,	0, $C,$80,$18
		.BYTE $76,$80,$14,$82,	0,$15,$76,$80,$34,$70,	0,$15,$4F, $A,$15,$4B
		.BYTE	1,$15,$43,  0,$15,$64,$80,$19,$68,$8B,$19,$7A,$80,$19,$5B,  3
		.BYTE $15,$7E,	0,$19,$94,$80,$19,$53,$80,$19,$57,$80,	0, $C,	8,$15
		.BYTE $47,  0,$14,$94,$80,$14,$9B,$80,$F4,  0,$80,$25,$86,$80,$35,$88
		.BYTE $80,$F4,	1,$80,$10,$1B,$84,$F4,	2,$80,$F4,  3,$80,$19,$5F,  3
		.BYTE	0, $C,	8,$19,$82,$80,$19,$72,$80,$39,$70,$80,$19,$6C,$80,$18
		.BYTE $76,$80,$14,$82,	0,$15,$76,$80,$34,$70,	0,$15,$4F, $A,$15,$4B
		.BYTE	1,$15,$43,  0,$15,$64,$80,$19,$68,$8B,$19,$7A,$80,$19,$5B,  3
		.BYTE $2D,$37,$80,$2D,$39,$80,$19,$3B,$80,$19,$3F,$80,$14,$7A,$80,$15
		.BYTE $47,  0,$14,$94,$80,$14,$9B,$80,$F4,  0,$80,$25,$86,$80,$35,$88
		.BYTE $80,$F4,	1,$80,$10,$1B,$84,$F4,	2,$80,$F4,  3,$80,$19,$5F,  3
		.BYTE $35,$88,$80,$25,$86,$80,$14,$94,$80,$14,$9B,$80,	0, $C,$80,$14
		.BYTE $7A,$80,$34,$8A,$A0,$F4,	2,$80,$F4,  3,$80,$14,$D8, $A,	0, $C
		.BYTE $80,$15, $B,$80,$14,$8C,$E0,  0, $C,$80,	0, $C,$80,$15,$5B,  3
		.BYTE $14,$A3,$80,$54,$A4,$80,$34,$70,	0,$14,$86,$80,$14,$AA,$80,$14
		.BYTE $AE,$80,$F4,  0,$80,$F4,	1,$80,$F4, $B,$80,$1D, $F,$80,$1C,$1F
		.BYTE	0,$19,$2B,$80,$15,$76,	0, $C,$2F,  0,	4,$30,	0,$15,$5F,  3
		.BYTE $12,$64,$C0,$12,$68,$C0,$41,$CE,$B0,$11,$FA,  0,$12,$6C,$90,$12
		.BYTE $70,$A0,$41,$D0,$F0,$12,$41,  0,$12,$74,$D0,$12,$78,$E0,$10,$DC
		.BYTE $80,$10,$EC,  0,$70,$98,$80,$10,$9F,$80,$12,$50, $A,$12,$4C,  1
		.BYTE $11, $B,$80,  0,$30,  0,$11,$27,	3,$10,$CA,  0,$12,$97,$8B,$D2
		.BYTE $98,$8B,	0,  0,	0,  0,	0,  0,$12,$9D,$8B,$D2,$9E,$8B,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0, $C,	8,$19,$23,  3
		.BYTE $41,$CE,$90,$13,$5E,$C0,$13,$66,$C0,$11,$B2,$80,$41,$D0,$D0,$13
		.BYTE $62,$C0,$13,$6A,$C0,$11,$B6,$80,$11,$D2,$C0,$11,$D6,$C0,$10,$1B
		.BYTE $84,$11,$BA,  0,$32,$94,	9,$32,$95,  9,$11,$CA, $A,$11,$C6,  1
		.BYTE $12,$B7,$80,$12,$BB,$80,$E1,$DA,$80,$21,$DA,  0,$12,$BF,$80,$12
		.BYTE $C3,$80,$11,$DE,$80,$11,$9A,  0,$11,$A2,$80,$11,$A6,  0,$11,$AA
		.BYTE $80,$11,$AE,$80,$13,$6E,$80,$F0, $C,  3,$11,$9E,$80,$F0,$3A,  3
		.BYTE $41,$CE,$90,$12,$97,$8B,$D2,$98,$8B,$11,$B2,$80,$41,$D0,$D0,$12
		.BYTE $9D,$8B,$D2,$9E,$8B,$11,$B6,$80,$11,$D2,$C0,$11,$D6,$C0,	0,$31
		.BYTE	5,$11,$BA,  0,$32,$94,	9,$32,$95,  9,$11,$CA, $A,$11,$C6,  1
		.BYTE $12,$B7,$80,$12,$BB,$80,$F0, $C,	3,$21,$DA,  0,$12,$BF,$80,$12
		.BYTE $C3,$80,$11,$13,	1,  1,	0,  6,$12,$11,$80,$12,$15,$80,$12,  9
		.BYTE $80,$10,$F8,$80,$12,$19,$80,$12,$1D,$80,$12, $D,$80,$F4,$3A,  3
		.BYTE $41,$CE,$90,$12,$84,$80,$F0,  4,$80,  1,	2,$84,$41,$D0,$D0,$92
		.BYTE $8A,  0,$F0,  5,	0,  0,$90,  0,$13,$5A,$C0,$12,$8E,$80,$F0,  6
		.BYTE $80,$11,$BA,  0,$32,$94,	9,$32,$95,  9,$11,$CA, $A,$11,$C6,  1
		.BYTE $12,$A7,$8C,$12,$AB,$8C,$F0, $C,	3,$21,$DA,  0,$12,$AF,$8C,$12
		.BYTE $B3,$8C,$12,$B7,$80,$12,$BB,$80,$12,$11,$80,$12,$15,$80,$12,$BF
		.BYTE $80,$12,$C3,$80,$12,$19,$80,$12,$1D,$80,$11,$9A,	0,$F4,$3A,  3
		.BYTE $41,$CE,$90,$12,$C7,$80,$12,$CB,$80,$11,$B2,$80,$41,$D0,$D0,$12
		.BYTE $CF,$80,$52,$D0,$80,$11,$B6,$80,$11,$D2,$C0,$11,$D6,$C0,	1,  0
		.BYTE	6,$11,$BA,  0,$11,$FA,	0,$11,$9A,  0,$11,$CA, $A,$11,$C6,  1
		.BYTE $12,$A7,$8C,$12,$AB,$8C,$F0, $C,	3,$21,$DA,  0,$12,$AF,$8C,$12
		.BYTE $B3,$8C,$11,$A2,$80,$11,$A6,  0,$E1,$DA,$80,$12,	9,$80,$11,$AA
		.BYTE	0,$11,$AE,  0,$11,$DE,$80,$12, $D,$80,	0, $C,	8,$F0,$3A,  3
		.BYTE $41,$CE,$90,$E1,$DA,$80,$12,$84,$80,$F0,	4,$80,$41,$D0,$D0,$11
		.BYTE $DE,$80,$92,$8A,	0,$F0,	5,  0,$12,$11,$80,$12,$15,$80,$12,$8E
		.BYTE $80,$F0,	6,$80,$12,$19,$80,$12,$1D,$80,$11,$BA,	0,$11,$C6,  1
		.BYTE $12,$A7,$8C,$12,$AB,$8C,$10,$1B,$84,$21,$DA,  0,$12,$AF,$8C,$12
		.BYTE $B3,$8C,$11,$D2,$C0,$11,$D6,$C0,$11,$E2,$80,$11,$E6,  0,$11,$EA
		.BYTE $80,  1,	0,  6,$11,$EE,$80,$11,$F2,  9,$11,$F6,$80,$12,$54,  3
		.BYTE $12,$64,$C0,$12,$68,$C0,$12,$7C,$80,  0,$30,  0,$12,$6C,$90,$12
		.BYTE $70,$A0,$12,$80,$80,$12,$41,  0,$12,$74,$D0,$12,$78,$E0,$12,$50
		.BYTE  $A,$12,$4C,  1,$32,$94,	9,$32,$95,  9,$10,$D8, $A,$10,$D4,  1
		.BYTE $12,$84,$80,$F0,	4,$80,$11,$27,	3,$10,$CA,  0,$92,$8A,	0,$F0
		.BYTE	5,  0,$10,$DC,$80,$10,$EC,  0,$12,$8E,$80,$F0,	6,$80,$70,$98
		.BYTE $80,$10,$9F,$80,$10,$1B,$84,$11, $B,$80,	0, $C,	8,$11,$23,  3
		.BYTE $12,$21,$C0,$12,$25,$C0,$12,$84,$80,$F0,	4,$80,$12,$29,$90,$12
		.BYTE $2D,$A0,$92,$8A,	0,$F0,	5,  0,$12,$31,$D0,$12,$35,$E0,$12,$8E
		.BYTE $80,$F0,	6,$80,$12,$39,$C0,$12,$3D,$C0,$12,$50, $A,$12,$4C,  1
		.BYTE $12,$5C,$80,  0,$30,  0,$13,$74,	3,$12,$41,  0,$12,$60,$80,$10
		.BYTE $1B,$84,$11,$2F,	0,  0, $C,  0,	0, $C,	0,  0, $C,  0,	0, $C
		.BYTE	0,  0, $C,  0,	0, $C,	0,  0, $C,  0,	0, $C,	8,$12,$54,  3
		.BYTE $12,$21,$C0,$12,$25,$C0,$12,$84,$80,$F0,	4,$80,$12,$29,$90,$12
		.BYTE $2D,$A0,$92,$8A,	0,$F0,	5,  0,$12,$31,$D0,$12,$35,$E0,$12,$8E
		.BYTE $80,$F0,	6,$80,$11,$13,	0,$10,	4,$80,$12,$50, $A,$12,$4C,  1
		.BYTE $10,  8,$80,$10, $C,$80,$12,$58,$80,$12,$41,  0,$11,$E2,$80,$11
		.BYTE $E6,  0,$11,$EA,$80,$11,$2F,  0,$11,$EE,$80,$11,$F2,  9,$11,$F6
		.BYTE $80,$C2,$49,$80,$13,$74,	3,  0, $C,  0,	0, $C,	0,$12,$54,  3
		.BYTE $41,$CE,$90,$13,$5E,$80,$13,$66,$80,$13,$88,$80,$12,  2,$D0,$13
		.BYTE $62,$80,$13,$6A,$80,$13,$8C,$80,$12,$A7,$8C,$12,$AB,$8C,$12,$A3
		.BYTE	0,$11,$FE,  0,$12,$AF,$8C,$12,$B3,$8C,$11,$CA, $A,$F0,$43,  1
		.BYTE $11,$E2,$80,$11,$E6,  0,$11,$EA,$80,$12,$45,  0,$11,$EE,$80,$11
		.BYTE $F2,  9,$11,$F6,$80,$F0,$3B,  3,$13,$78,$80,$13,$78,$80,$11,$2F
		.BYTE	0,  1,	1,  0,$13,$7C,$80,$13,$7C,$80,	0, $C,	8,$F0,$3C,  3
		.BYTE $41,$CE,$90,$12,$B7,$80,$12,$BB,$80,$13,$88,$80,$12,  2,$D0,$12
		.BYTE $BF,$80,$12,$C3,$80,$13,$8C,$80,$13,$90,$C0,$13,$94,$C0,	0,$30
		.BYTE	0,$11,$FE,  0,$32,$94,	9,$32,$95,  9,$11,$CA, $A,$F0,$43,  1
		.BYTE $13,$78,$80,$13,$78,$80,$13,$80,	0,$12,$45,  0,$13,$7C,$80,$13
		.BYTE $7C,$80,$13,$80,$80,$F0,$3B,  3,$13,$2D,	0,$11,$FA,  0,$11,$2F
		.BYTE	0,  1,	1,  7,$13,$84,$80,$13,$84,$80,$12,$45,	8,$F0,$3C,  3
		.BYTE $41,$CE,$90,$13,$5E,$80,$13,$66,$80,$11,$FA,  0,$41,$D0,$D0,$13
		.BYTE $62,$80,$13,$6A,$80,  2,$FD,  0,$13,$12,$80,$13,$16,  0,$13,$1A
		.BYTE $80,$B3,$1E,$80,$13,$29,	0,  0, $C,  0,$11,$CA, $A,$13,$39,  1
		.BYTE	0, $C,	0,  0, $C,  0,	0, $C,	0,  0, $C,  0,	0, $C,	0,  0
		.BYTE  $C,  0,	0, $C,	0,$12,$EF,  3,	0, $C,	0,  0, $C,  0,	0, $C
		.BYTE	0,  0, $C,  0,	0, $C,	0,  0, $C,  0,	0, $C,	0,$12,$F3,  3
		.BYTE $41,$CE,$90,$13,$5E,$80,$13,$66,$80,$12,	9,$80,$41,$D0,$D0,$13
		.BYTE $62,$80,$13,$6A,$80,$12, $D,$80,	0, $C,	0,  0, $C,  0,$11,$13
		.BYTE	1,$11,$BA,  0,$11,$FA,	0,$11,$9A,  0,$11,$CA, $A,$11,$C6,  1
		.BYTE $12,$97,$8B,$D2,$98,$8B,$F0, $C,	3,$21,$DA,  0,$12,$9D,$8B,$D2
		.BYTE $9E,$8B,	0, $C,	0,$11,$B2,$80,$12,$11,$80,$12,$15,$80,$10,$1B
		.BYTE $84,$11,$B6,$80,$12,$19,$80,$12,$1D,$80,	0, $C,	8,$F8,$3A,  3
		.BYTE $12,$D7,$C0,$12,$DB,$C0,$13,$21,$80,$13,$31,$80,$12,$DF,$90,$12
		.BYTE $E3,$A0,$13,$25,$80,$13,$35,$80,	1,  1,	7,  1,	1,  7,$15,$2F
		.BYTE	0,$13,$3D,  0,	0,$90,	0,$11,$13,  1,$11,$CA, $A,$13,$39,  1
		.BYTE $12,$E7,$D0,$12,$EB,$E0,$12,$EF,	3,  2,$FD,  0,$13,$52,$C0,$13
		.BYTE $56,$C0,$13,$12,$C0,$13,$16,$40,$13,$41,$80,$13,$45,$80,$13,$1A
		.BYTE $80,$B3,$1E,$80,$13,$49,$80,$13,$4D,$80,$12,$F7,$C0,$12,$F3,  3
		.BYTE $12,$D7,$C0,$12,$DB,$C0,$13,$2D,	0,$13,$29,  0,$12,$DF,$90,$12
		.BYTE $E3,$A0,	3,$51,	0,  0, $C,  8,$1A,$F7,$C0,  1,	1,  7,$15,$2F
		.BYTE	0,$13,$3D,  0,	0,$90,	0,$11,$13,  1,$11,$CA, $A,$13,$39,  1
		.BYTE $12,$E7,$D0,$12,$EB,$E0,$12,$EF,	3,  2,$FD,  0,$13,$52,$C0,$13
		.BYTE $56,$C0,$A2,$FB,	0,$92,$FD,  0,$F0,  7,	0,$F0,	8,  0,$F0,  9
		.BYTE	0,$33,	2,  0,$63,  2,	0,$13,	2,  0,$F0, $A,	0,$12,$F3,  3
		.BYTE $12,$D7,$C0,$12,$DB,$C0,$13,$21,$80,$13,$31,$80,$12,$DF,$90,$12
		.BYTE $E3,$A0,$13,$25,$80,$13,$35,$80,	1,  1,	7,  1,	1,  7,$11,$2F
		.BYTE	0,$13,$3D,  0,$32,$94,	9,$32,$95,  9,$11,$CA, $A,$13,$39,  1
		.BYTE $12,$E7,$D0,$12,$EB,$E0,$12,$EF,	3,  2,$FD,  0,$12,$97,$8B,$D2
		.BYTE $98,$8B,$13,$52,$C0,$13,$56,$C0,$12,$9D,$8B,$D2,$9E,$8B,	0,$90
		.BYTE	0,  1,	0,  6,$13, $E,	0,$13, $A,  0,	0, $C,	8,$12,$F3,  3
		.BYTE	0, $C,$F0,$29,$33,$F0,$25,$35,$F0,  9,$63,$F0,	7,$51,$F0
byte_82D30:
		.BYTE $C7,$21,$1F,$48	; DATA XREF: sub_176305:loc_176423-r
					; sub_176305:loc_176432-r
					; sub_176305+132-r sub_176305+137-r
		.BYTE $4A,$20,$1F,  0
		.BYTE $4F,$20,$1F,  0
		.BYTE $62,$20,$1E,  0
		.BYTE $6B,$20,$1F,  0
		.BYTE $D0, $A,	1, $F
		.BYTE	8,$17,$16, $F
		.BYTE $C0, $C,	1, $F
		.BYTE	6,$1E,	4, $F
		.BYTE $9D,$15,	9, $F
		.BYTE $18,$1E,$11, $F
		.BYTE $44,$20,$1E,  0
		.BYTE $47,$20,$1E,  0
		.BYTE $5B,$21, $E,  0
		.BYTE $D1,$21,$1B,  0
		.BYTE $D2,$21,$1B,  0
		.BYTE $5A,$20,$1F,  0
byte_82D74:
		.BYTE $E5,$E4,$8F,$90,$8D,$EA,$8F,$E8,$E5,$E6,$8F,$E8,$8D,$8E,$ED,$EC
					; DATA XREF: sub_176305:loc_176397-r
		.BYTE $E5,$E4,$ED,$EC,$8D,$EA,$ED,$EE,$E5,$E6,$ED,$EE,$E9,$8E,$E7,$90
		.BYTE $E3,$E4,$E7,$90,$E9,$EA,$E7,$E8,$E3,$E6,$E7,$E8,$E9,$8E,$EB,$EC
		.BYTE $E3,$E4,$EB,$EC,$E9,$EA,$EB,$EE,$E3,$E6,$EB,$EE,$EF,$EF,$EF,$F0
		.BYTE $EF,$EF,$F1,$F2,$EF,$EF,$F3,$EF,$EF,$F4,$EF,$F4,$F5,$EF,$F5,$EF
		.BYTE $EF,$F6,$EF,$FA,$F7,$F8,$FB,$FC,$F9,$EF,$FD,$EF
off_82DD0:
		.WORD byte_82DD4	; DATA XREF: sub_176488+E-r
					; sub_176488+11-r
off_82DD2:
		.WORD byte_832E4	; DATA XREF: sub_1764E3+BE-r
					; sub_1764E3+C1-r
byte_82DD4:
		.BYTE $10,  0,	0,$10,	4,  0,$30,$15,$40,$10,$10,  0,$10,  8,	0,$10
					; DATA XREF: BANK5:off_82DD0-o
		.BYTE  $C,  0,$10,$14,	0,$F0, $D,  0,$18,$EA,	0,$88,$EA,  0,$38,$F2
		.BYTE $40,$98,$F2,$40,$18,$E3,	0,$68,$E7,  0,$18,$F1,	0,$F8,$12,  0
		.BYTE $11,$33,	0,$61,$37,  0,$71,$42,$50,$91,$42,$50,$11,$3A,	0,$81
		.BYTE $3A,  0,$11,$41,	0,$F0,$15,  0,$18,$59,	0,$68,$5D,  0,$18,$67
		.BYTE $50,$98,$67,$40,$18,$60,	0,$88,$60,  0,$78,$68,	0,$F8, $F,  0
		.BYTE $14,$1E,	0,$14,$22,  0,$34,$33,$40,$94,$33,$40,$14,$26,	0,$14
		.BYTE $2A,  0,$14,$32,	0,$14,$2E,  0,$11,  5,	0,$81,	5,  0,$31, $D
		.BYTE $40,$91, $D,$40,$10,$FE,	0,$61,	2,  0,$11, $C,	0,$F0,$13,  0
		.BYTE $1D,$67,	0,$2D,$68,$55,$2D,$72,$55,$5D,$72,$55,$1D,$6D,	0, $D
		.BYTE $6B,  5,$1D,$71,	0,$4D,$71,  0,$14,$8D,	0,$14,$91,  0,$14,$9D
		.BYTE	0,$14,$A1,  0,$14,$95,	0,$14,$99,  0,$14,$A5,	0,$14,$A9,  0
		.BYTE $1C,$C9,	0,$6C,$CD,  0,$FC,$11,$44,$FC,$2F,$50,$1C,$D0,	0,$8C
		.BYTE $D0,  0,$1C,$D7,	0,$6C,$DB,  0,$19,$4D,	0,$69,$51,  0,$99,$5C
		.BYTE $40,$F8,$16,$50,$19,$54,	0,$89,$54,  0,$19,$5B,	0,$69,$5F,  0
		.BYTE $18,$73,	0,$68,$77,  0,$98,$81,$40,$18,$81,$50,$18,$7A,	0,$88
		.BYTE $7A,  0,$F8,$10,	0,$78,$82,  0,$14,$3C,	0,$14,$40,  0,$34,$4D
		.BYTE $40,$94,$4D,$40,$14,$44,	0,$14,$48,  0,$14,$4C,	0,$F4, $E,  0
		.BYTE $11,$19,	0,$61,$1D,  0,$91,$28,$40,$F0,$14,$50,$11,$20,	0,$81
		.BYTE $20,  0,$11,$27,	0,$61,$2B,  0,$AD,$77,$10,$BD,$77,$15,$FC,$18
		.BYTE $51,$FC,$19,$51,$AD,$7A,$10,$FC,$17,$10,$1D,$7F,	0,$4D,$7F,  0
		.BYTE $14,$AD,	0,$14,$B1,  0,$74,$BE,$50,$74,$C4,$50,$14,$B5,	0,$14
		.BYTE $B9,  0,$14,$BD,	0,$14,$C3,  0,$19,$F6,	0,$89,$F6,  0,$19,$FD
		.BYTE	0,$1A,	1,  0,$1A,  5,	0,$6A,	9,  0,$1A, $C,	0,$6A,$10,  0
		.BYTE $A2,$73,$10,$B2,$73,$15,$22,$77,$55,$52,$77,$55,$A2,$7C,$10,$B2
		.BYTE $7C,$15,$12,$76,	0,$42,$76,  0,$11,$95,	0,$81,$95,  0,$F0,$1C
		.BYTE $50,$F0,$1D,$50,$12,$8C,	0,$62,$90,  0,$61,$A0,	0,$11,$9C,  0
		.BYTE $16,$D0,	0,$16,$D4,  0,$36,$A0,$40,$16,$A6,  0,$16,$93,	0,$16
		.BYTE $97,  0,$16,$9B,	0,$16,$9F,  0,$A2,$49,$10,$B2,$49,$15,$22,$44
		.BYTE $55,$D2,$44,$55,$A2,$4C,$10,$B2,$4C,$15,$12,$43,	0,$42,$43,  0
		.BYTE $A2,$7F,$10,$B2,$7F,$15,$22,$87,$55,$52,$87,$55,$12,$82,	0,$C2
		.BYTE $82,  5,$12,$86,	0,$42,$86,  0,$11,$DD,	0,$61,$E1,  0,$41,$E4
		.BYTE $11,$F0,$20,$10,$11,$EF,	0,$81,$EF,  0,$41,$E5,	0,$91,$E5,  0
		.BYTE $AE,$EB,$10,$BE,$EB,$15,$2E,$F2,$55,$5E,$F2,$55,$AE,$EE,$10,$BE
		.BYTE $EE,$15,$1E,$F1,	0,$4E,$F1,  0,$19,$A7,	0,$69,$AB,  0,$99,$B0
		.BYTE $40,$79,$B0,$50,$19,$BA,	0,$89,$BA,  0,$19,$AF,	0,$F8,$1E,  0
		.BYTE $12,$AA,	0,$22,$AB,$55,$22,$B3,$55,$F0,$27,$55,$12,$AE,	0,$22
		.BYTE $AF,$55,$12,$B2,	0,$82,$B2,  0,$1A,$65,	0,$8A,$65,  0,$F8,$25
		.BYTE $50,$F8,$26,$50,$1A,$6C,	0,$6A,$70,  0,$1A,$5A,	0,$6A,$5E,  0
		.BYTE $A5,$87,$10,$B5,$87,$15,$F4,$1A,$15,$F4,$1B,$15,$15,$91,	0,$C5
		.BYTE $91,  5,$15,$8B,	0,$45,$8B,  0,$17,$9B,	0,$F4,$2D,  0,$17,$9B
		.BYTE	0,$F4,$2D,  0,$17,$9B,	0,$F4,$2D,  0,$17,$9B,	0,$F4,$2D,  0
		.BYTE $AA,$4F,$10,$BA,$4F,$15,$F8,$23,$55,$F8,$24,$55,$AA,$52,$10,$BA
		.BYTE $52,$15,$3A,$52,	0,$F8,$22,  0,$A3,$20,$10,$B3,$20,$15,$23,$27
		.BYTE $55,$D3,$27,$55,$A3,$23,$10,$B3,$23,$15,$13,$26,	0,$43,$26,  0
		.BYTE $AB,$14,$10,$BB,$14,$15,$2B,$1B,$55,$DB,$1B,$55,$AB,$17,$10,$BB
		.BYTE $17,$15,$1B,$1A,	0,$4B,$1A,  0,$13,  5,	0,$23,	6,$55,$23, $E
		.BYTE $55,$F0,$29,$55,$13,  9,	0,$23, $A,$55,$13, $D,	0,$83, $D,  0
		.BYTE $12,$F7,	0,$22,$F8,$55,$23,  0,$55,$53,	0,$55,$12,$FB,	0,$22
		.BYTE $FC,$55,$12,$FF,	0,$42,$FF,  0,$4A,$14,	0,$4A,$1A,  0,$2A,$21
		.BYTE $55,$2A,$25,$55,$1A,$14,	0,$1A,$1A,  0,$1A,$20,	0,$1A,$24,  0
		.BYTE $16,$C8,	0,$26,$C9,$55,$16,$C8,	0,$26,$C9,$55,$16,$C8,	0,$26
		.BYTE $C9,$55,$16,$C8,	0,$26,$C9,$55,$11,$C7,	0,$C1,$C7,  5,$11,$D1
		.BYTE	0,$41,$D1,  0,$11,$C1,	0,$41,$C1,  0,$11,$CB,	0,$41,$CB,  0
		.BYTE $1F,$97,	0, $F,$95,  5,$1F,$97,	0, $F,$95,  5,$1F,$97,	0, $F
		.BYTE $95,  5,$1F,$97,	0, $F,$95,  5,$A7,$2C,$10,$B7,$2C,$15,$27,$33
		.BYTE $55,$27,$37,$55,$A7,$2F,$10,$B7,$2F,$15,$17,$32,	0,$17,$36,  0
		.BYTE $12,$28,	0,$12,$2C,  0,$42,$39,$44,$F0,$21,$45,$12,$30,	0,$12
		.BYTE $34,  0,$42,$38,	0,$82,$3B,  0,$42,$DF,	0,$D2,$E0,$55,$22,$D9
		.BYTE $55,$F0,$28,$55,$12,$E1,	0,$22,$E2,$55,$12,$D8,	0,$62,$DC,  0
		.BYTE $A3,$3A,$10,$B3,$3A,$15,$23,$41,$55,$53,$41,$55,$A3,$3D,$10,$B3
		.BYTE $3D,$15,$13,$40,	0,$43,$40,  0,$A3,$79,$10,$B3,$79,$15,$23,$80
		.BYTE $55,$23,$84,$55,$A3,$7C,$10,$B3,$7C,$15,$13,$7F,	0,$13,$83,  0
		.BYTE $AB,$46,$10,$BB,$46,$15,$F8,$2A,$45,$F8,$31,$45,$1B,$49,	0,$CB
		.BYTE $49,  5,$1B,$4D,	0,$4B,$4D,  0,$A2,$C5,$10,$A2,$C5,$10,$13,$B0
		.BYTE	0,$13,$B0,  0,$A2,$C5,$10,$A2,$C5,$10,$23,$B1,$55,$23,$B1,$55
		.BYTE $1E,$CC,	0,$1E,$CC,  0,$1E,$CC,	0,$1E,$CC,  0,$1E,$CC,	0,$1E
		.BYTE $CC,  0,$1E,$CC,	0,$1E,$CC,  0,$1F,$60,	0,$8F,$60,  0,$1F,$6E
		.BYTE $50,$4F,$6E,$50,$1F,$67,	0,$6F,$6B,  0,$FC,$2B,	0,$FC,$30,  0
		.BYTE $E3,$A1,$11,$E3,$5E,$11,$23,$A6,$55,$F0,$2E,$55,$E3,$A3,$11,$E3
		.BYTE $AC,$11,$13,$A5,	0,$83,$A5,  0,$F0,$32,	0,$F0,$33,  0,$F0,$34
		.BYTE	5,$F0,$35,  5,$F0,$36,	0,$F0,$37,  0,$F0,$38,	0,$F0,$39,  0
		.BYTE $A7,$87,$10,$B7,$87,$15,$27,$90,$55,$D7,$90,$55,$17,$8A,	0,$F4
		.BYTE $2C,  5,$17,$8F,	0,$47,$8F,  0,$12,$C1,	0,$C2,$C1,  5,$51,$D8
		.BYTE $55,$21,$D8,$55,$12,$B9,	0,$12,$BD,  0,$11,$D7,	0,$41,$D7,  0
		.BYTE $F4,$3D,	0,$F4,$3D,  0,$F4,$3E,$45,$F4,$3E,$45,$F4,$3F,	0,$F4
		.BYTE $41,$45,$F4,$40,	0,$F4,$42,$15,$1B,$B4,	0,$1B,$B4,  0,$1B,$B8
		.BYTE	0,$1B,$B8,  0,$1B,$B4,	0,$1B,$B4,  0,$1B,$B8,	0,$1B,$B8,  0
		.BYTE $13,$C4,	0,$13,$C4,  0,$13,$BC,	0,$13,$C0,  0,$13,$C4,	0,$13
		.BYTE $C4,  0,$13,$BC,	0,$13,$C0,  0,$13,$C8,	0,$13,$C8,  0,$13,$C8
		.BYTE	0,$13,$C8,  0,$13,$C8,	0,$13,$C8,  0,$13,$C8,	0,$13,$C8,  0
byte_832E4:
		.BYTE $55,$88,$8C,$88,$8D,$55,$8F,$89,$90,$89,$55,$8A,$8E,$8B,$87,$55
					; DATA XREF: BANK5:off_82DD2-o
		.BYTE $91,$92,$87,$93,$AA,$88,$84,$87,$89,$AA,$8A,$8A,$8D,$8B,$AA,$92
		.BYTE $8E,$93,$90,$BA,$FD,$FD,	9,$FD,$EA,$FD,$FD,$FD,	8,$F0, $C, $C
		.BYTE	1,  1,$F5,  1,	1,  0,	0,$55,$8F,$8C,$90,$8D,$75,$98,$99,$76
		.BYTE $BE,  0,$1B,$15,$1C,$1D,	0,$56,$4D,$57,$58,  0,$70,$67,$71,$72
		.BYTE	0,$8A,$81,$8B,$8C,  0,$D8,$E1,$DD,$E2,	0,$FB,$F2,$FC,$FD,$55
		.BYTE $16, $D,$17,$18,$55,$28,$2B,$31,$32,$55,$48,$42,$47,$4B,$55,$5C
		.BYTE $5F,$65,$66,$55,$7A,$7A,$7D,$7E,$55,$80,$7F,$85,$81,$55,$80,$7F
		.BYTE $86,$81,$55,$8A,$8B,$8E,$8D,$55,$8A,$8B,$90,$8F,$55,$9D,$A0,$A3
		.BYTE $A4,$55,$9D,$9C,$A5,$A6,$55,$AE,$B0,$B5,$B9,$FF,$74,$6E,$75,$76
		.BYTE $55,$E4,$E5,$E7,$EE,$AA,$3F,$42,$41,$40,$AA,$52,$55,$58,$59,$AA
		.BYTE $55,$52,$57,$56,$AA,$55,$52,$59,$58,$AA,$5B,$5A,$61,$62,$AA,$5B
		.BYTE $5E,$63,$64,$AA,$B6,$B2,$B8,$B7,$AA,$D9,$DC,$DE,$DD,$FF,$11, $D
		.BYTE $13,$12,$FF,$4E,$53,$50,$4F,$FF,$6F,$6E,$77,$78,$FF,$8A,$8E,$8D
		.BYTE $8C,$FF,$9B,$9F,$9D,$A0,$FF,$A9,$A5,$AB,$AA,  0,$D8,$DB,$DE,$DF
		.BYTE $FF,$74,$6E,$75,$76,$FF,$4E,$53,$52,$51,$FF,$AF,$AF,$54,$55,$FF
		.BYTE $AF,$AF,$56,$57,$FF,$AF,$AF,$55,$5C,$FF,$AF,$AF,$57,$5D,$FF,$AF
		.BYTE $AF,$58,$59,$FF,$AF,$AF,$5A,$5B,$FF,$AF,$AF,$5C,$55,$FF,$AF,$AF
		.BYTE $5D,$57,$65,$BF,$C0,$56,$C1,$75,$C2,$C3,$76,$C4,$ED,$C5,$72,$56
		.BYTE $73,$93,$AF,$E0,$4C,$13,$6C,$E0,$AF,$13,$4C,$AA,$E5,$E6,$E8,$E9
		.BYTE $EA,$E6,$E7,$EA,$AE,$BA,$E7,$E6,$AE,$EA,$AA,$E6,$E5,$E9,$E8,$AA
		.BYTE	6,  7,	8,$D6
byte_83438:
		.BYTE $18,$D0,$72,  0,$8D ; DATA XREF: sub_176265-r
					; sub_1762C9+18-r sub_176265+6-r
					; sub_1762C9+1F-r sub_176275-r
					; sub_176275+5-r sub_176275+A-r
		.BYTE	8,  0,$6F,  0,$80 ; data used at a000
		.BYTE	0,  0,$6E,  0,	0
		.BYTE	2,  0,$6E,$40,$20
		.BYTE	4,  0,$6E,$80,$40
		.BYTE	6,  0,$6E,$C0,$60
byte_83456:
		.BYTE	0,  0,	0,  1,	1,  1,	0,  1,	0,  1,$FF,  1,	1,  0,$FF,  3
					; DATA XREF: sub_1764E3+88-r
		.BYTE	1,  1,	1,  3,	1,  1,	1,  3,	1,$FF,	2,  0,	1,  1,	1,  1 ;	CHECKME	OFFSET!
		.BYTE	0,  1,	1,$FF,	1,  1,$FE,  3,$FF,  2,	0,  2,	1,  1,	4,$FF
		.BYTE	1,  1,	1,$FF,	3,$FF,	3,  1,	1,  1,	3,  1,$FF,  5,$FF,$FD
		.BYTE	4,  1,$FF,  4,	1,  4,	1,  1,	6,  1,	1,  0,	1,  1,	0,  2
		.BYTE $FF,  1,	2,$FF,$FF,  5,$FF,  0,	1,  0
byte_834B0:
		.BYTE $17,$18,$8D,$91	; DATA XREF: sub_176305:loc_17636E-r
					; data used at a000
byte_834B4:
		.BYTE $45,$49,$4E,$59,$5F,$7A,$1D,$94 ;	DATA XREF: sub_176305:loc_176378-r
					; data used at a000
byte_834BC:
		.BYTE	0,  0,	3,  0,	3,  0,	3,  0, $C,  0,$FD,  4,$FD, $C,$FD,  8
					; DATA XREF: sub_176488+2B-r
					; sub_1764E3+2-r
byte_834CC:
		.BYTE	0,  2,	4,  6,	4,  0,	6,  2,	2,  6,	0,  4,	6,  4,	2,  0
					; DATA XREF: sub_1764E3+EB-r
byte_834DC:
		.BYTE	5,  5,$5E,$A5,$AF,$50,$50,  3,$56,$56,	2,$AA,$AA,$AA,$AA,$AA
					; DATA XREF: sub_176305+100-r
		.BYTE $7E,$7E, $E,$AA,$AA,$A0,$AB,$AA,$7F,$7C,$7E,$AA,$FA,$FA,$AA,$AA
		.BYTE $7F,$7C,$7E,$AA, $A, $A,$AA,$AA,$7E,$7E,	2,$AA,$FA,$FA,$AA,$A6
		.BYTE $7E,$7E,	2,$EA, $A, $A,$AA,$A6,$7E,$7E,	2,$EA,$5A,$5A,$AA,$A6
		.BYTE $6F,$6F,$AF,$AA,$A2,$AF,$A8,$AA,$56,$56,	2,$AA,$FA,$F2,$A2,$AA
		.BYTE  $F, $D,$55, $A,$FA,$FB,$FF,$32,$FF,$FD,$55,$FA,$FA,$FB,$FF,$3E
		.BYTE $5F,$5F,$5F,$FA,$9A,$80,	0,  2,$5F,$5F,$5F, $A, $A,$AA,$A8,$82
		.BYTE $56,$56,$5A,$5A,$AA,$AA,$F8,$FA,$6A,$6A,$FA,$FA,$AA,$AA,$58,$56
		.BYTE $6A,$6A,$52,$AA,$F6,$FE,$28,$7A,$FE,$FD,$FF,$45,	0,  1,	0,  1
		.BYTE $AA,$A9,$FF,$45,	0,  0,	0,  1,$55,$55,	5,$F5,$55,$CF,$5F,$55
		.BYTE $55,$55,$35,$F5,$55,$CF,$FF,$F5,$51,$5A,$45,$F5,$55,$C5,$5F,$FD
		.BYTE $55,$55,	5,$55,$55,$A0,$AF,$55
byte_83594:
		.BYTE	2, $C, $C,  0,	0, $B, $A,  8,	2, $D,	2, $C,$11,$11,$12,$10
					; DATA XREF: sub_176305:loc_1763F4-r
		.BYTE $14,$14,$16,$16,$16,  8,	8, $E,	9,  9,	5,  9, $C, $C, $C,  0
		.BYTE $11, $A, $A, $B, $B,$16, $C, $C, $C, $C, $C,  5,	2,  2,	2,  5
		.BYTE  $D, $D, $D, $D, $D,  2,	4, $C, $C,  6,	6,  7,$11,$11, $E,  0
		.BYTE	3,  3,	1,  1,	4,  8,	8,  8, $F,$10,$10,$10, $E, $F,$10,$13
		.BYTE $13,$16,$13,$13,$15,$15,$15,$15,$15,$15,$13,$13,$16,$16,$15,$15
		.BYTE $15,$16,$16,$16,$16,$13,	1,$16,$16,$16,$16,$16,$16
_chr_font:
		.BYTE $3C,$66,$66,$66,$66,$66,$3C,  0 ;	DATA XREF: BANK5:_chr_font_ofs-o
		.BYTE $38,$78,$38,$38,$38,$38,$7C,  0 ;	ind data used at a000
		.BYTE $7C,$C6,$C6, $C,$70,$C0,$FE,  0
		.BYTE $7C,$C6,$C6,$1C,$C6,$C6,$7C,  0
		.BYTE  $C,$1C,$2C,$4C,$CC,$FE, $C,  0
		.BYTE $FC,$C0,$C0,$FC,	6,  6,$FC,  0
		.BYTE $7C,$C0,$C0,$FC,$C6,$C6,$7C,  0
		.BYTE $FE,$C6,	6,$18,$30,$30,$30,  0
		.BYTE $7C,$C6,$C6,$7C,$C6,$C6,$7C,  0
		.BYTE $7C,$C6,$C6,$7E,	6,  6,$7C,  0
		.BYTE	0,$78, $C,$7C,$CC,$CC,$7E,  0
		.BYTE $60,$60,$60,$7C,$66,$66,$7C,  0
		.BYTE	0,$7C,$C6,$C0,$C0,$C6,$7C,  0
		.BYTE	6,  6,	6,$3E,$66,$66,$3E,  0
		.BYTE	0,$7C,$C6,$C6,$FC,$C0,$7E,  0
		.BYTE $1C,$30,$30,$FE,$30,$30,$30,  0
		.BYTE	0,$3C,$66,$66,$3E,  6,$3C,  0
		.BYTE $C0,$C0,$DC,$E6,$C6,$C6,$C6,  0
		.BYTE $38,$38,	0,$78,$38,$38,$7C,  0
		.BYTE  $E, $E,	0, $E,$CE,$CE,$7C,  0
		.BYTE $60,$66,$6C,$78,$7C,$66,$66,  0
		.BYTE $38,$38,$38,$38,$38,$38,$38,  0
		.BYTE	0,$FC,$D6,$D6,$D6,$D6,$D6,  0
		.BYTE	0,$7C,$66,$66,$66,$66,$66,  0
		.BYTE	0,$7C,$C6,$C6,$C6,$C6,$7C,  0
		.BYTE	0,$7C,$66,$66,$7C,$60,$60,  0
		.BYTE	0,$3E,$66,$66,$66,$3E,	6,  6
		.BYTE	0,$EC,$7E,$66,$60,$60,$60,  0
		.BYTE	0,$7C,$C6,$F0,$1E,$C6,$7C,  0
		.BYTE $30,$30,$FE,$30,$30,$30,$1E,  0
		.BYTE	0,$66,$66,$66,$66,$66,$3C,  0
		.BYTE	0,$66,$66,$66,$66,$24,$18,  0
		.BYTE	0,$D6,$D6,$D6,$D6,$D6,$7C,  0
		.BYTE	0,$42,$66,$3C,$18,$3C,$66,  0
		.BYTE	0,$66,$66,$66,$3E,  6,$7C,  0
		.BYTE	0,$7E,$46, $C,$18,$32,$7E,  0
		.BYTE $38,$6C,$C6,$C6,$FE,$C6,$C6,  0
		.BYTE $F8,$CC,$CC,$FC,$C6,$C6,$FC,  0
		.BYTE $7C,$C6,$C0,$C0,$C0,$C6,$7C,  0
		.BYTE $F8,$C4,$C6,$C6,$C6,$C4,$F8,  0
		.BYTE $FE,$C0,$C0,$FC,$C0,$C0,$FE,  0
		.BYTE $FE,$C0,$C0,$FC,$C0,$C0,$C0,  0
		.BYTE $7C,$C6,$C6,$C0,$DE,$C6,$7E,  0
		.BYTE $C6,$C6,$C6,$FE,$C6,$C6,$C6,  0
		.BYTE $FE,$38,$38,$38,$38,$38,$FE,  0
		.BYTE $3E, $C, $C, $C,$CC,$CC,$78,  0
		.BYTE $C6,$CC,$D8,$F8,$CC,$C6,$C6,  0
		.BYTE $E0,$E0,$E0,$E0,$E0,$E0,$FE,  0
		.BYTE $C6,$EE,$EE,$FE,$D6,$C6,$C6,  0
		.BYTE $C6,$E6,$F6,$D6,$DE,$CE,$C6,  0
		.BYTE $7C,$C6,$C6,$C6,$C6,$C6,$7C,  0
		.BYTE $FC,$C6,$C6,$C6,$FC,$C0,$C0,  0
		.BYTE $7C,$C6,$C6,$C6,$DE,$CC,$76,  0
		.BYTE $FC,$C6,$C6,$C6,$FC,$C6,$C6,  0
		.BYTE $7C,$C6,$C0,$7C,	6,$C6,$7C,  0
		.BYTE $FE,$38,$38,$38,$38,$38,$38,  0
		.BYTE $C6,$C6,$C6,$C6,$C6,$C6,$7C,  0
		.BYTE $C6,$C6,$C6,$C6,$6C,$6C,$38,  0
		.BYTE $C6,$C6,$D6,$FE,$EE,$EE,$C6,  0
		.BYTE $C6,$EE,$7C,$38,$7C,$EE,$C6,  0
		.BYTE $C6,$C6,$6C,$38,$38,$38,$38,  0
		.BYTE $FE,$CE,$1C,$38,$70,$E6,$FE,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $C6,$C6,$C6,$FE,$C6,$C6,$C6,  0
		.BYTE	0,  0,$D8,$F8,$C0,$C0,$C0,  0
		.BYTE $7C,$C6,$C0,$7C,	6,$C6,$7C,  0
		.BYTE	0,  0,$D8,$F8,$C0,$C0,$C0,  0
		.BYTE $FC,$C6,$C6,$FC,$C0,$C0,$C0,  0
		.BYTE	0,  0,$D8,$F8,$C0,$C0,$C0,  0
		.BYTE $C3,$DB,$DB,$DB,$DB,$DB,$66,  0
		.BYTE	0,  0,$78,$18,$30,$60,$78,  0
		.BYTE $FE,$C0,$C1,$FD,$C1,$C1,$C1,  0
		.BYTE	0,  0,$B0,$F0,$80,$80,$80,  0
		.BYTE $C6,$C6,$EE,$FE,$D6,$D6,$C6,  0
		.BYTE	0,  0,$D8,$F8,$C0,$C0,$C0,  0
		.BYTE $7C,$C6,$C6,$C0,$DE,$C6,$7E,  0
		.BYTE	0,  0,$38,$60,$F8,$60,$60,  0
		.BYTE $7C,$C6,$C0,$7C,	6,$C6,$7C,  0
		.BYTE	0,  0,$70,$D8,$D8,$78,$18,$70
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $20,$20,$FC,$20,$22,$22,$1C,  0
		.BYTE	0,$CC,$44,$44,$44,$44,$3A,  0
		.BYTE	0,$EE,$44,$44,$28,$38,$10,  0
		.BYTE	0,$EE,$44,$54,$54,$7C,$28,  0
		.BYTE	0,$62,$94,$18,$30,$52,$8C,  0
		.BYTE	0,  0,	0,  0,	0,  6,	6,  0
		.BYTE	0,  0,	0,$FF,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,$10,$92,$54,$38,$54,$92,$10
		.BYTE	0,$E0,$90,$90,$E4,$97,$95,$E4
		.BYTE	0,$88,$D8,$AF,$89,$8F,$8D,$8F
		.BYTE	0,$E0,$90,$92,$E0,$92,$92,$E2
		.BYTE	0,$88,$D8,$AF,$8D,$8F,$8C,$8F
		.BYTE $60,$60,$6F,$68,$6E,$68,$6F,$60
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE	2,  4,	6,  6,	0,  0,	0,  0
		.BYTE $6C,$6C,$24,$48,	0,  0,	0,  0
		.BYTE	0,  8, $C,$FE,$FF,$FE, $C,  8
		.BYTE $12,$24,$36,$36,	0,  0,	0,  0
		.BYTE	2,  4,	6,  6,	0,  0,	0,  0
		.BYTE $60,$60,$20,$40,	0,  0,	0,  0
		.BYTE $60,$60,$20,$40,	0,  0,	0,  0
		.BYTE	3,  3,	1,  2,	0,$60,$60,  0
		.BYTE	0,  0,	0,  0,$60,$60,$20,$40
		.BYTE	0,  0,	0,  0,$7E,  0,	0,  0
		.BYTE	0,  0,	0,  0,	0,$60,$60,  0
		.BYTE  $C,$18,$30,$30,$30,$30,$18, $C
		.BYTE $30,$18, $C, $C, $C, $C,$18,$30
		.BYTE $7C,$C6,$C6,$3C,$30,  0,$30,  0
		.BYTE  $C,$1E,$1E,$3C,$30,$C0,$C0,  0
		.BYTE $60,$60,	0,$60,$60,$20,$40,  0
		.BYTE	6,  6,	2,  4,	0,  0,	0,  0
		.BYTE	0,$20,$30,$38,$3C,$38,$30,$20
		.BYTE	0,  0,$FE,$7C,$38,$10,	0,  0
		.BYTE	0,$18,$18,  0,	0,$18,$18,  0
		.BYTE	0,  0,	0,  0,	0,$66,$66,  0
		.BYTE $60,$60,$60,$60,$60,$60,$60,$60
		.BYTE	0,$FF,$FF,  0,	0,  0,	0,  0
		.BYTE	0,$FE,$FE,  0,	0,  0,	0,  0
		.BYTE	0,$3F,$7F,$70,$60,$60,$60,$60
		.BYTE $60,$60,$60,$60,$70,$7F,$3F,  0
		.BYTE	6,  6,	6,  6,	6,  6,	6,  6
		.BYTE	0,$FC,$FE, $E,	6,  6,	6,  6
		.BYTE	0,  0,	0,  0,	0,$FF,$FF,  0
		.BYTE	6,  6,	6,  6, $E,$FE,$FC,  0
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0
		.BYTE $40,$44,$52,$48,$40,$44,$44,$38
		.BYTE $2A,$25,$F8,$20,$4E,$40,$90,$8E
		.BYTE $32,  9,	2,$11,$48,$8A,$8A,$10
		.BYTE $44,$52,$48,$60,$50,$40,$40,$40
		.BYTE $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
		.BYTE	0,$18,$24,$42,$42,$7E,$42,$42
		.BYTE	0,$7C,$42,$42,$7C,$42,$42,$7C
		.BYTE	0,$3C,$42,$40,$40,$40,$42,$3C
		.BYTE	0,$78,$44,$42,$42,$42,$44,$78
		.BYTE	0,$7E,$40,$40,$7C,$40,$40,$40
		.BYTE	0,  0,	0,$A8,$A8,  8,$18,$60
		.BYTE $60,$60,$6F,$68,$6E,$68,$6F,$60
		.BYTE $2A,$25,$20,$3C,$40,$80,$80,$7E

; =============== S U B	R O U T	I N E =======================================
_b5_s7:					; CODE XREF: sub_175AF7+8-P
					; DATA XREF: BANK5:800E-o
		LDA		byte_86		; code used as ind data	at a000
		BEQ		sub_83A7A	; code used at a000
		LDA		byte_87		; code used at a000
		BNE		sub_83A7A	; code used at a000
		RTS				; code used at a000
off_83A72:
		.WORD sub_83B13		; DATA XREF: sub_83A7A+5-r sub_83A7A+A-r
					; data used at a000
		.WORD sub_83AEC		; data used at a000
		.WORD sub_83AF8		; data used at a000
		.WORD sub_83AE5		; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83A7A:				; CODE XREF: _b5_s7+2-j	_b5_s7+6-j
		LDA		byte_644	; code used at a000
		ASL		; code used as ind data	at a000
		TAX				; code used at a000
		LDA		off_83A72,X	; code used at a000
		STA		word_72		; code used at a000
		LDA		off_83A72+1,X	; code used at a000
		STA		word_72+1	; code used at a000
		LDA		#$10		; code used at a000
		TAX				; code used as ind data	at a000
		STA		word_6C		; code used at a000
		LDA		#2		; code used as ind data	at a000
		STA		word_6C+1	; code used at a000
loc_83A92:				; CODE XREF: sub_83A7A+27-j
		LDA		_spr_ram+2,X	; code used as ind data	at a000
		CMP		#$F8       ; code used as ind data at a000
		BNE		loc_83AAC	; code used as ind data	at a000
loc_83A99:				; CODE XREF: sub_83A7A:loc_83ADE-j
					; sub_83B13+2C-j
		LDA		word_6C		; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		ADC		#4		; code used as ind data	at a000
		STA		word_6C		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		BNE		loc_83A92	; code used as ind data	at a000
		LDA		byte_176	; code used as ind data	at a000
		BEQ		locret_83AAB	; code used at a000
		JMP		sub_83B42	; code used at a000
locret_83AAB:				; CODE XREF: sub_83A7A+2C-j
		RTS				; code used as ind data	at a000
loc_83AAC:				; CODE XREF: sub_83A7A+1D-j
		LDA		byte_2C		; code used as ind data	at a000
		CMP		#1		; code used as ind data	at a000
		BNE		sub_83AE2	; code used as ind data	at a000
		LDA		byte_2F
		AND		#1
		BEQ		loc_83AC5
		LDA		_spr_ram,X
		CMP		#$6B 
		BEQ		loc_83AD0
		CMP		#$73 
		BEQ		loc_83AD0
		BNE		loc_83ADB
loc_83AC5:				; CODE XREF: sub_83A7A+3C-j
		LDA		_spr_ram,X
		CMP		#$6F 
		BEQ		loc_83AD0
		CMP		#$77 
		BNE		loc_83ADB
loc_83AD0:				; CODE XREF: sub_83A7A+43-j
					; sub_83A7A+47-j sub_83A7A+50-j
		LDA		_spr_ram+3,X
		CMP		#$80 
		BEQ		loc_83ADE
		CMP		#$88 
		BEQ		loc_83ADE
loc_83ADB:				; CODE XREF: sub_83A7A+49-j
					; sub_83A7A+54-j
		JMP		sub_83AE2
loc_83ADE:				; CODE XREF: sub_83A7A+5B-j
					; sub_83A7A+5F-j sub_83AE5+5-j
					; sub_83AEC+A-j	sub_83AF8+10-j
					; sub_83B0A+7-j	sub_83B13+10-j
					; sub_83B13+19-j
		JMP		loc_83A99	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
nullsub_13:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_83AE2:				; CODE XREF: sub_83A7A+36-j
					; sub_83A7A:loc_83ADB-j
		JMP		(word_72)	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_83AE5:				; DATA XREF: BANK5:BA78-o
		INC		_spr_ram+3,X	; ind code used	as ind data at a000
		BEQ		loc_83B2E	; code used as ind data	at a000
		BNE		loc_83ADE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83AEC:				; DATA XREF: BANK5:BA74-o
		DEC		_spr_ram+3,X	; ind code used	as ind data at a000
		LDA		_spr_ram+3,X	; code used as ind data	at a000
		CMP		#$FF		; code used as ind data	at a000
		BEQ		loc_83B2E	; code used as ind data	at a000
		BNE		loc_83ADE	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_83AF8:				; DATA XREF: BANK5:BA76-o
		DEC		_spr_ram,X	; ind code used	as ind data at a000
		LDA		byte_2F		; code used as ind data	at a000
		AND		#1		; code used as ind data	at a000
		BNE		sub_83B0A	; code used as ind data	at a000
		LDA		_spr_ram,X	; code used at a000
		CMP		#$F7       ; code used at a000
		BEQ		loc_83B2E	; code used at a000
		BNE		loc_83ADE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83B0A:				; CODE XREF: sub_83AF8+7-j
		LDA		_spr_ram,X	; code used as ind data	at a000
		CMP		#$F3       ; code used as ind data at a000
		BEQ		loc_83B2E	; code used as ind data	at a000
		BNE		loc_83ADE	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_83B13:				; DATA XREF: BANK5:off_83A72-o
		INC		_spr_ram,X	; ind code used	as ind data at a000
		LDA		byte_2F		; code used as ind data	at a000
		AND		#1		; code used as ind data	at a000
		BNE		loc_83B25	; code used as ind data	at a000
		LDA		_spr_ram,X	; code used at a000
		CMP		#$EF       ; code used at a000
		BEQ		loc_83B2E	; code used at a000
		BNE		loc_83ADE	; code used at a000
loc_83B25:				; CODE XREF: sub_83B13+7-j
		LDA		_spr_ram,X	; code used as ind data	at a000
		CMP		#$EB       ; code used as ind data at a000
		BEQ		loc_83B2E	; code used as ind data	at a000
		BNE		loc_83ADE	; code used as ind data	at a000
loc_83B2E:				; CODE XREF: sub_83AE5+3-j sub_83AEC+8-j
					; sub_83AF8+E-j	sub_83B0A+5-j
					; sub_83B13+E-j	sub_83B13+17-j
		LDA		#$F8       ; code used at a000
		STA		_spr_ram,X	; code used at a000
		STA		_spr_ram+1,X	; code used at a000
		STA		_spr_ram+2,X	; code used at a000
		STA		_spr_ram+3,X	; code used at a000
		JSR		sub_83BDB	; code used at a000
		JMP		loc_83A99	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83B42:				; CODE XREF: sub_83A7A+2E-j
		LDX		#0		; code used at a000
loc_83B44:				; CODE XREF: sub_83B42+C-j
		JSR		sub_83B51	; code used as ind data	at a000
		TXA				; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		ADC		#4		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		CPX		#$40       ; code used at a000
		BNE		loc_83B44	; code used as ind data	at a000
locret_83B50:				; CODE XREF: sub_83B51+5-j
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_83B51:				; CODE XREF: sub_83B42:loc_83B44-p
		LDA		byte_182,X	; code used as ind data	at a000
		CMP		#$F8       ; code used as ind data at a000
		BEQ		locret_83B50	; code used as ind data	at a000
		LDA		byte_644	; code used at a000
		BEQ		loc_83B81	; code used as ind data	at a000
		CMP		#1		; code used at a000
		BEQ		loc_83B6B	; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_83B76	; code used as ind data	at a000
		INC		byte_183,X	; code used at a000
		BEQ		loc_83B8B	; code used at a000
		RTS				; code used at a000
loc_83B6B:				; CODE XREF: sub_83B51+E-j
		DEC		byte_183,X	; code used at a000
		LDA		byte_183,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_83B8B	; code used at a000
		RTS				; code used at a000
loc_83B76:				; CODE XREF: sub_83B51+12-j
		DEC		byte_180,X	; code used at a000
		LDA		byte_180,X	; code used at a000
		CMP		#$F3       ; code used at a000
		BEQ		loc_83B8B	; code used at a000
locret_83B80:				; CODE XREF: sub_83B51+38-j
		RTS				; code used at a000
loc_83B81:				; CODE XREF: sub_83B51+A-j
		INC		byte_180,X	; code used as ind data	at a000
		LDA		byte_180,X	; code used as ind data	at a000
		CMP		#$EB       ; code used at a000
		BNE		locret_83B80	; code used at a000
loc_83B8B:				; CODE XREF: sub_83B51+17-j
					; sub_83B51+22-j sub_83B51+2D-j
		LDA		#$F8       ; code used at a000
		STA		byte_180,X	; code used at a000
		STA		byte_181,X	; code used at a000
		STA		byte_182,X	; code used at a000
		STA		byte_183,X	; code used at a000
		JMP		loc_83B9C	; code used at a000
loc_83B9C:				; code used at a000
		TXA
		AND		#$F0       ; code used at a000
		TAY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		LDA		byte_180,Y	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		AND		byte_180,Y	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		AND		byte_180,Y	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		AND		byte_180,Y	; code used at a000
		CMP		#$F8       ; code used at a000
		BNE		locret_83BDA	; code used at a000
		TXA				; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		TAY				; code used at a000
		LDA		byte_177,Y	; code used at a000
		PHA				; code used at a000
		LDA		#0		; code used at a000
		STA		byte_177,Y	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		LDA		byte_103,Y	; code used at a000
		AND		#$C3       ; code used at a000
		STA		byte_103,Y	; code used at a000
		DEC		byte_176	; code used at a000
locret_83BDA:				; CODE XREF: sub_83B51+6B-j
					; sub_83BDB+4-j	sub_83BDB+27-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83BDB:				; CODE XREF: sub_83B13+29-p
		LDA		byte_2F		; code used at a000
		AND		#1		; code used at a000
		BEQ		locret_83BDA	; code used at a000
		TXA				; code used at a000
		AND		#$F0       ; code used at a000
		TAX				; code used at a000
		TAY				; code used at a000
		INY				; code used at a000
		INY				; code used as ind data	at a000
		LDA		_spr_ram,Y	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		AND		_spr_ram,Y	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		AND		_spr_ram,Y	; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		INY				; code used at a000
		AND		_spr_ram,Y	; code used at a000
		CMP		#$F8       ; code used at a000
		BNE		locret_83BDA	; code used at a000
		JSR		sub_83C30	; code used at a000
		LDA		#1		; code used at a000
		STA		byte_71		; code used at a000
		LDA		#$10		; code used at a000
		STA		byte_70		; code used at a000
		LDY		#3		; code used at a000
loc_83C11:				; CODE XREF: sub_83BDB+47-j
		LDA		(byte_70),Y	; code used at a000
		AND		#$3C       ; code used at a000
		CMP		word_6		; code used at a000
		BEQ		loc_83C25	; code used at a000
		LDA		byte_70		; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		STA		byte_70		; code used at a000
		CMP		#$6F       ; code used at a000
		BCC		loc_83C11	; code used at a000
		RTS
loc_83C25:				; CODE XREF: sub_83BDB+3C-j
		LDA		(byte_70),Y	; code used at a000
		AND		#$C3       ; code used at a000
		STA		(byte_70),Y	; code used at a000
		LDA		word_6		; code used at a000
		JMP		_b5_s3		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83C30:				; CODE XREF: sub_83BDB+29-p
		STX		word_4+1	; code used at a000
		TXA				; code used at a000
		LDY		#5		; code used at a000
loc_83C35:				; CODE XREF: sub_83C30+9-j
		DEY				; code used at a000
		CMP		byte_83C6E,Y	; code used at a000
		BCC		loc_83C35	; code used at a000
		LDA		byte_6D7	; code used at a000
		LSR		; code used at a000
		STA		word_4		; code used at a000
		TYA				; code used at a000
		BCC		loc_83C49	; code used at a000
		EOR		#$7F       ; code used at a000
		CLC				; code used at a000
		ADC		#$85       ; code used at a000
loc_83C49:				; CODE XREF: sub_83C30+12-j
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		CMP		#5		; code used at a000
		BCC		loc_83C52	; code used at a000
		SBC		#5		; code used at a000
loc_83C52:				; CODE XREF: sub_83C30+1E-j
		ASL		; code used at a000
		ASL		; code used at a000
		STA		word_4		; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		ADC		#4		; code used at a000
		STA		word_4		; code used at a000
		LDA		word_4+1	; code used at a000
		SEC				; code used at a000
		SBC		byte_83C6E,Y	; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		STA		word_6		; code used at a000
		AND		#3		; code used at a000
		RTS				; code used at a000
byte_83C6E:
		.BYTE $10,$40,$70,$A0,$D0 ; DATA XREF: sub_83C30+6-r
					; sub_83C30+31-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_b5_s3:					; CODE XREF: sub_83BDB+52-j _bC_s9+3-P
					; sub_141C10+8-P
					; DATA XREF: BANK5:8006-o
		LDX		#0		; code used at a000
		CMP		#$20       ; code used at a000
		BCC		loc_83C7A	; code used at a000
		INX				; code used at a000
loc_83C7A:				; CODE XREF: _b5_s3+4-j
		AND		#$1F		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		TAY				; code used at a000
		LDA		#$7F       ; code used at a000
loc_83C81:				; CODE XREF: _b5_s3+15-j
		CPY		#0		; code used at a000
		BEQ		loc_83C8B	; code used at a000
		SEC				; code used at a000
		ROR		; code used at a000
		DEY				; code used at a000
		JMP		loc_83C81	; code used at a000
loc_83C8B:				; CODE XREF: _b5_s3+10-j
		AND		byte_174,X	; code used at a000
		STA		byte_174,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b5_s4:					; CODE XREF: _b6_s1A+20-P _bA_s1+6B-P
					; _bD_sD+64-P sub_177619+45-P
					; DATA XREF: BANK5:8008-o
		LDX		#0		; code used at a000
		CMP		#$20       ; code used at a000
		BCC		loc_83C99	; code used at a000
		INX				; code used at a000
loc_83C99:				; CODE XREF: _b5_s4+4-j
		AND		#$1F		; code used at a000
		LSR		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		TAY				; code used at a000
		LDA		#$80       ; code used as ind data at a000
loc_83CA0:				; CODE XREF: _b5_s4+14-j
		CPY		#0		; code used at a000
		BEQ		loc_83CA9	; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		DEY				; code used at a000
		JMP		loc_83CA0	; code used at a000
loc_83CA9:				; CODE XREF: _b5_s4+10-j
		ORA		byte_174,X	; code used at a000
		STA		byte_174,X	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b5_s9:					; CODE XREF: _b6_s6+75-P _bC_s19+42-P
					; sub_12B493+69-P sub_174CBD+4-P
					; sub_174CE2+C-P sub_1750D0+FA-P
					; sub_17532D+F-P
					; DATA XREF: BANK5:8012-o
		JSR		_vblank_and_render_off ; code used at a000
		JSR		_set_nmi_flag_10 ; code	used at	a000
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		LDA		#$10		; code used at a000
		STA		byte_6D0	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6D1	; code used at a000
		LDA		byte_6D3	; code used at a000
		AND		#$FE       ; code used at a000
		STA		byte_6D3	; code used at a000
		LDA		#$F		; code used at a000
		STA		_tmp12+1	; code used at a000
		JSR		sub_83E8A	; code used at a000
		CLC				; code used at a000
		ADC		#7		; code used at a000
		STA		byte_11		; code used at a000
loc_83CD7:				; CODE XREF: _b5_s9+3A-j
		LDA		#0		; code used as ind data	at a000
		STA		byte_85		; code used as ind data	at a000
		JSR		sub_83D08	; code used as ind data	at a000
		JSR		sub_83D2C	; code used as ind data	at a000
		JSR		sub_83DA4	; code used as ind data	at a000
		DEC		byte_11		; code used as ind data	at a000
		DEC		_tmp12+1	; code used as ind data	at a000
		LDA		_tmp12+1	; code used as ind data	at a000
		BNE		loc_83CD7	; code used at a000
		STA		byte_85		; code used at a000
		LDA		byte_2F		; code used as ind data	at a000
		AND		#1		; code used at a000
		BEQ		loc_83CF8	; code used at a000
		BRK
		.BYTE $DD, 7		; ofs 0x0014001a, -> dst _bD_sD
		RTS				; code used at a000
loc_83CF8:				; CODE XREF: _b5_s9+42-j
		LDX		#$10		; code used at a000
		LDA		#$FF		; code used as ind data	at a000
loc_83CFC:				; CODE XREF: _b5_s9+52-j
		STA		byte_100,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$80       ; code used at a000
		BNE		loc_83CFC	; code used as ind data	at a000
		BRK
		.BYTE $35, $17		; ofs 0x00140036, -> dst _bD_s1B
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83D08:				; CODE XREF: _b5_s9+2B-p
		LDA		#$12		; code used as ind data	at a000
		STA		word_6		; code used as ind data	at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used as ind data	at a000
		JSR		sub_83E7E	; code used as ind data	at a000
		SEC				; code used as ind data	at a000
		SBC		#9		; code used at a000
		STA		byte_10		; code used as ind data	at a000
loc_83D18:				; CODE XREF: sub_83D08+21-j
		LDX		byte_10		; code used as ind data	at a000
		LDY		byte_11		; code used as ind data	at a000
		JSR		sub_176C99	; code used as ind data	at a000
		JSR		sub_175B72	; code used as ind data	at a000
		JSR		sub_175C03	; code used as ind data	at a000
		INC		byte_10		; code used as ind data	at a000
		DEC		word_6		; code used as ind data	at a000
		BNE		loc_83D18	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_83D2C:				; CODE XREF: _b5_s9+2E-p
		LDA		#$1F		; code used as ind data	at a000
		STA		byte_20		; code used at a000
		LDA		#$C0       ; code used as ind data at a000
		STA		byte_1F		; code used as ind data	at a000
		LDX		_tmp12+1	; code used as ind data	at a000
loc_83D36:				; CODE XREF: sub_83D2C+16-j
		CLC				; code used as ind data	at a000
		LDA		#$40       ; code used as ind data at a000
		ADC		byte_1F		; code used as ind data	at a000
		STA		byte_1F		; code used as ind data	at a000
		BCC		loc_83D41	; code used as ind data	at a000
		INC		byte_20		; code used as ind data	at a000
loc_83D41:				; CODE XREF: sub_83D2C+11-j
		DEX				; code used as ind data	at a000
		BNE		loc_83D36	; code used as ind data	at a000
		LDX		#0		; code used as ind data	at a000
		LDA		_PPU_STATUS	; code used as ind data	at a000
		LDA		byte_20		; code used as ind data	at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
		LDA		byte_1F		; code used as ind data	at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
loc_83D53:				; CODE XREF: sub_83D2C+30-j
		LDA		byte_647,X	; code used as ind data	at a000
		STA		_PPU_DATA	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$20       ; code used as ind data at a000
		BNE		loc_83D53	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INX				; code used at a000
		INX				; code used as ind data	at a000
loc_83D62:				; CODE XREF: sub_83D2C+3F-j
		LDA		byte_647,X	; code used as ind data	at a000
		STA		_PPU_DATA	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$44       ; code used as ind data at a000
		BNE		loc_83D62	; code used as ind data	at a000
		LDA		#4		; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		ADC		byte_20		; code used as ind data	at a000
		STA		byte_20		; code used as ind data	at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
		LDA		byte_1F		; code used as ind data	at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
		LDX		#$20       ; code used as ind data at a000
loc_83D7E:				; CODE XREF: sub_83D2C+5B-j
		LDA		byte_647,X	; code used as ind data	at a000
		STA		_PPU_DATA	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$24       ; code used as ind data at a000
		BNE		loc_83D7E	; code used as ind data	at a000
		LDA		byte_20		; code used as ind data	at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
		LDA		byte_1F		; code used as ind data	at a000
		CLC				; code used at a000
		ADC		#$20       ; code used as ind data at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
		LDX		#$44       ; code used as ind data at a000
loc_83D98:				; CODE XREF: sub_83D2C+75-j
		LDA		byte_647,X	; code used as ind data	at a000
		STA		_PPU_DATA	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$48       ; code used as ind data at a000
		BNE		loc_83D98	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_83DA4:				; CODE XREF: _b5_s9+31-p
		LDA		#$3E       ; code used as ind data at a000
		STA		byte_74		; code used as ind data	at a000
		LDA		_tmp12+1	; code used as ind data	at a000
		SEC				; code used as ind data	at a000
		SBC		#1		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		STA		word_4+1	; code used as ind data	at a000
		LDX		#0		; code used as ind data	at a000
loc_83DB2:				; CODE XREF: sub_83DA4+39-j
		TXA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		byte_68F,X	; code used as ind data	at a000
		STA		byte_A		; code used as ind data	at a000
		LDA		byte_74		; code used as ind data	at a000
		AND		#$3F       ; code used as ind data at a000
		STA		word_4		; code used as ind data	at a000
		JSR		sub_174690	; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		LDA		_PPU_STATUS	; code used as ind data	at a000
		LDA		byte_20		; code used as ind data	at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
		LDA		byte_1F		; code used as ind data	at a000
		STA		_PPU_ADDR	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		STA		_PPU_DATA	; code used as ind data	at a000
		INC		byte_74		; code used as ind data	at a000
		INC		byte_74		; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$12		; code used as ind data	at a000
		BNE		loc_83DB2	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
_b5_s8:					; CODE XREF: sub_B3538+2E-P
					; DATA XREF: BANK5:8010-o
		LDA		#0		; code used at a000
		STA		byte_6ABE	; code used at a000
		LDA		#$F8       ; code used at a000
		STA		byte_6ABF	; code used at a000
		BNE		sub_83DF6	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b5_sA:					; CODE XREF: _bA_sC-P _bA_sD+6-P
					; sub_129007+B-P
					; DATA XREF: BANK5:8014-o
		LDA		#$10		; code used at a000
		STA		byte_6ABE	; code used at a000
		LDA		#8		; code used at a000
		STA		byte_6ABF	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83DF6:				; CODE XREF: _b5_s8+A-j
		JSR		sub_83E53	; code used at a000
		JSR		sub_83DFF	; code used at a000
		JSR		sub_83E6F	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83DFF:				; CODE XREF: sub_83DF6+3-p
					; sub_83DFF+10-j
		JSR		sub_83E12	; code used at a000
		JSR		sub_174748	; code used at a000
		INC		byte_48		; code used at a000
		INC		byte_470	; code used at a000
		LDA		byte_470	; code used at a000
		AND		#7		; code used at a000
		BNE		sub_83DFF	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83E12:				; CODE XREF: sub_83DFF-p
		LDA		#0		; code used at a000
		STA		byte_81		; code used at a000
		LDA		byte_47		; code used at a000
		STA		byte_49		; code used at a000
loc_83E1A:				; CODE XREF: sub_83E12+3E-j
		LDX		byte_48		; code used at a000
		STX		byte_10		; code used at a000
		LDY		byte_49		; code used at a000
		STY		byte_11		; code used at a000
		JSR		sub_176C99	; code used as ind data	at a000
		JSR		sub_175B72	; code used as ind data	at a000
		LDA		byte_81		; code used as ind data	at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
loc_83E2D:				; CODE XREF: sub_83E12+26-j
		LDA		byte_7200,X	; code used at a000
		STA		byte_400,Y	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INY				; code used at a000
		TYA				; code used as ind data	at a000
		AND		#3		; code used as ind data	at a000
		BNE		loc_83E2D	; code used at a000
		LDA		byte_81		; code used as ind data	at a000
		TAY				; code used at a000
		DEX				; code used at a000
		TXA				; code used at a000
		LSR		; code used at a000
		LSR		; code used as ind data	at a000
		TAX				; code used at a000
		LDA		byte_7300,X	; code used as ind data	at a000
		STA		byte_460,Y	; code used at a000
		INC		byte_49		; code used as ind data	at a000
		INC		byte_81		; code used as ind data	at a000
		LDA		byte_81		; code used as ind data	at a000
		CMP		#$F		; code used as ind data	at a000
		BNE		loc_83E1A	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83E53:				; CODE XREF: sub_83DF6-p
		LDA		#$F1       ; code used at a000
		STA		byte_471	; code used at a000
		LDA		#8		; code used at a000
		STA		byte_470	; code used at a000
		JSR		sub_83E7E	; code used at a000
		SEC				; code used at a000
		SBC		byte_6ABE	; code used at a000
		STA		byte_48		; code used at a000
		JSR		sub_83E8A	; code used at a000
		SEC				; code used at a000
		SBC		#7		; code used at a000
		STA		byte_47		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83E6F:				; CODE XREF: sub_83DF6+6-p
		LDA		#0		; code used at a000
		STA		byte_470	; code used at a000
		JSR		sub_83E7E	; code used at a000
		CLC				; code used at a000
		ADC		byte_6ABF	; code used at a000
		STA		byte_48		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_83E7E:				; CODE XREF: sub_83D08+8-p sub_83E53+A-p
					; sub_83E6F+5-p
		LDA		byte_2F		; code used as ind data	at a000
		AND		#1		; code used as ind data	at a000
		BEQ		loc_83E87	; code used as ind data	at a000
		LDA		byte_30		; code used at a000
		RTS				; code used as ind data	at a000
loc_83E87:				; CODE XREF: sub_83E7E+4-j
		LDA		byte_2A		; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_83E8A:				; CODE XREF: _b5_s9+1F-p sub_83E53+13-p
		LDA		byte_2F		; code used at a000
		AND		#1		; code used at a000
		BEQ		loc_83E93	; code used at a000
		LDA		byte_31		; code used at a000
		RTS				; code used at a000
loc_83E93:				; CODE XREF: sub_83E8A+4-j
		LDA		byte_2B		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b5_sB_ppu_font_load:			; CODE XREF: sub_17673A-P
					; DATA XREF: BANK5:8016-o
		JSR		_vblank_and_render_off_flag10_set ; code used at a000
		LDA		#$10		; code used at a000
		STA		_PPU_ADDR	; code used at a000
		LDA		#0		; code used at a000
		STA		_PPU_ADDR	; code used at a000
		LDA		_chr_font_ofs	; code used at a000
		STA		_tmp21		; code used at a000
		LDA		_chr_font_ofs+1	; code used at a000
		STA		_tmp21+1	; code used at a000
		JSR		_b5_s6_ppu_send_8_empty_bytes ;	code used at a000
		JSR		_b5_s6_ppu_send_8_empty_bytes ;	code used at a000
		LDA		#$8C       ; code used at a000
		STA		word_4A		; code used at a000
loc_83EB7:				; CODE XREF: _b5_sB_ppu_font_load+33-j
		LDY		#8		; code used at a000
		LDX		#_tmp21		; code used at a000
loc_83EBB:				; CODE XREF: _b5_sB_ppu_font_load+2C-j
		JSR		_get_data_next_byte ; code used	as ind data at a000
		STA		_PPU_DATA	; code used at a000
		DEY				; code used at a000
		BNE		loc_83EBB	; code used as ind data	at a000
		JSR		_b5_s6_ppu_send_8_empty_bytes ;	code used at a000
		DEC		word_4A		; code used as ind data	at a000
		BNE		loc_83EB7	; code used at a000
		JMP		__render_on_flag10_clear_reinit	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b5_s6_ppu_send_8_empty_bytes:		; CODE XREF: _b5_sB_ppu_font_load+17-p
					; _b5_sB_ppu_font_load+1A-p
					; _b5_sB_ppu_font_load+2E-p
					; DATA XREF: BANK5:800C-o
		LDX		#8		; code used at a000
		LDA		#0		; code used at a000
loc_83ED2:				; CODE XREF: _b5_s6_ppu_send_8_empty_bytes+8-j
		STA		_PPU_DATA	; code used as ind data	at a000
		DEX				; code used as ind data	at a000
		BNE		loc_83ED2	; code used as ind data	at a000
		RTS				; code used at a000
_chr_font_ofs:
		.WORD _chr_font		; DATA XREF: _b5_sB_ppu_font_load+D-r
					; _b5_sB_ppu_font_load+12-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_b5_s5:					; CODE XREF: sub_AE92+19-P
					; DATA XREF: BANK5:800A-o
		BRK
		.BYTE $AA, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$14
		STA		word_6C
		LDX		#2
		BRK
		.BYTE $72, $17		; ofs 0x00128016, -> dst _bC_sB
		LDA		#4
		STA		byte_116
		LDA		byte_117
		AND		#$FC 
		ORA		#2
		STA		byte_117
		LDX		#0
		BRK
		.BYTE $72, $17		; ofs 0x00128016, -> dst _bC_sB
		JSR		sub_174CCF
		BRK
		.BYTE $AB, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$10
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		byte_60CD
		ORA		#$20 
		STA		byte_60CD
		JSR		sub_177CFC
		LDA		#$F
		STA		byte_7464
		JMP		sub_174CBD

		ECHO "bank 05 size", [.-$8000], "free space", [$BFD8-.]

		ORG $BFD8
		SEI
		INC	$BFDF
		JMP	_RESET
		.BYTE $80
		.BYTE "DRAGON WARRIOR "
		.BYTE $33
		.WORD $FFFF
		.WORD 0
		.BYTE $48
		.BYTE 4
		.BYTE 1
		.BYTE $F
		.BYTE 7
		.BYTE $9D
		.WORD $BFD8
		.WORD $BFD8
		.WORD $BFD8
