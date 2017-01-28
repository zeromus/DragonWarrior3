$071C#u16[]_pc.hp{0}#
$00CF#tempdamage_CF{0}#stores temporary damage values, including MP costs; and other things
$0004#temp16{0}#also caches the equipped weapon type
$0005#temp16{1}#also caches the equipped armor type
$071D#u16[] pc.hp{1}#
$00CE#targetPlayer#current target for many AI and inventory functions
$072C#u16[]_pc.mp{0}#
$072D#u16[]_pc.mp{1}#
$00D0#tempdamage{1}#
$0725#u16[]_pc.mhp{1}#
$0724#u16[]_pc.mhp{0}#
$0735#u16[]_pc.mmp{1}#
$0734#u16[]_pc.mmp{0}#
$063F#u24AttackDisplayDamage{0}#this numeric parameter is displayed in attack messages
$0640#u24AttackDisplayDamage{1}#
$0641#u24AttackDisplayDamage{2}#
$6B3E#unk_function_pointer?#
$06DD#messagespeed#$07 is slowest, meaning, suspended between messages
$06D0#ntxscroll#pixel scroll X
$06D1#ntyscroll#pixel Y scroll
$06D2#framecounter#textsys
$001F#u16_ppu_addr{0}#
$0020#u16_ppu_addr{1}#
$06D9#ppuDMAList_count#the number of items in the ppuDMAList
$06D8#ppuDMAList_index#the current appending offset for ppuDMAList
$001E#ppuByteToWrite#holds bytes to be written to PPU DMA list
$001B#vbl_status#the status of the vblank routine, see docs for details
$4016#JOYPAD[0]#
$6B0A#tempstring_msgbox#
$6ACC#tempstring_msgbox_len_NOT!!#
$006E#u16_textpointer{0}#
$006F#u16_textpointer{1}#
$0083#temp_y?#
$0034#temp_x_34#
$0035#temp_y_35#
$0023#temp_a_23#
$0021#temp16_21{0}#
$0022#temp16_21{1}#
$0036#temp_a_36#
$06D5#curr_bank#the current $8000-$BFFF PRG bank
$0064#actingEnemy?#the index of the acting enemy?
$6A73#unk_EnemyStatusPXFieldLookup#the PX field of enemy status is used to index this table
$6AA3#u16[]_pc.def{0}#
$6AA4#u16[]_pc.def{1}#
$0059#enemyMiscStats_59#contains eATK and eMP variously
$005A#5a_contains_eATK{1}#
$003C#maybe_a_random_value_3C#sometimes also contains a function pointer
$054C#movetable#moves selected for each character in battle
$0051#curractor#the currently acting battle character (0-3 players and 4+ enemies)
$00D2#contains_move_target_d2#
$6A32#printingState#some kind of printing status, maybe just for actions or maybe for others
$0082#somethingPrintRelated_82#
$007C#mdec_7c_tilenum[3]#also: stringTableBank_7C, the bank source for a string table search?
$0072#stringTablePtr_72#and etc.
$0073#stringTablePtr_73#and etc.
$003D#sometimes_fptr_hi_3D#
$0558#moveTable2#the actually selected action
$6BBB#del_inv_AnalyzeEquipped#
$077C#PC_inventory#
$6B5C#del_6B5C#calls dosomething(0x2C)
$6B2F#del_PC_StoreHP#
$6C33#delegateList6C33#
$073C#pcStatus{0}#
$073D#pcStatus{1}#
$6B7F#del_PCFetchAGItoTemp16#
$6B9D#del_PC_CalcDEFtoTemp16#
$0708#u8[]_pc.agi#agility stat for 4 players
$0718#u8[]_pc.classgender#
$0007#cacheEquippedHelmEtc_7#and other temp stuff
$00D3#someDialogParam_D3#
$0049#someDialogParam_49#
$0540#someBattleActionTable#12 entries for 4PC + 8monsters. contains something like targets?
$0065#actionCost?#the cost (MP or otherwise) of the current action?
$056D#u8[4]_enemyGroupType#
$0571#u8[4]_enemyGroupCount#
$0568#unknown_568#
$6A68#unk_6a68#
$00A4#rng_a4#
$0C73#apuCurrentSq1Pitch#
$0C75#apuCurrSq2Pitch#
$2007#PPUDATA#
$2006#PPUADDR#
$06D4#current_2001_setting?#
$2001#PPUMASK#
$0055#bankForTilePtrnLoad#
$0057#tileNumberForTileLoad_57#
$0058#tileNumberForTileLoadHi_58#
$0054#numTilesInTileGroup#
$0025#tileListCursor_25#as the map loads its TileList, this cursor increments
$7300#tileListMetatilingSizeTbl#How many HWTiles are in each Tile in the map's TileList
$009A#tilesetNumber_9A#
$008B#mapNumber#
$06C7#stashMMC1Reg_Control#
$06C8#stashMMC1Reg_CHR0#
$0087#heroTileMovePixelsRemain#set to $0F to track movement in direction tracked elsewhere
$008F#blockPlayerInputDuringMap#nonzero blocks player input. $01 is frozen forever. $02 and up counts until overflow and unfreezes
$0090#EntityUpdateCycle_90#used to only allow player DPad once per 16 frames?
$0014#InputThisFrame?#
$0110#entityControlStuctsBeginHere?#shouldnt be more than $70 bytes
$0645#playerAnimTimer#
$0644#playerFacingDir#0=up,1=right,2=down,3=left
$0030#playerMapX#
$0031#playerMapY#
$0638#s8_topmostMapTileVisible#
$0639#s8_leftmostMapTileVisible#
$063A#leftmostMapTileAccessible#
$063B#rightmostMapTileVisible#
$063C#topmostTileAccessible#
$063D#bottommostTileVisible#
$006C#mapEngineTempPtr_6c{0}#
$7400#areaTileMap#
$006D#mapEngineTempPtr_6c{1}#
$0088#mapWidth#
$0089#mapHeight#
$008D#mdec_bitsPerTile#
$0074#mdec_bitstreamCounter_74#
$0041#previousMapNumber?#
$0077#mdec_ptrSize_77#this is used for reading xy pointers from the bitstream
$008A#tilemapOOBtile_8A#this value is extracted during mdec init from bottom 5 bits of header[2]
$0098#mapStatePointer{0}#block for the current mapStateIndex, in bank 6
$0099#mapStatePointer{1}#contained in GlobalFileID $79
$0076#mdec_metatileSize#nonzero means a 32x32 metatile
$0079#mdec_79_tilenum[0]#
$000C#mdec_dptr{0}#
$000D#mdec_dptr{1}#
$0075#mdec_75_orflag#controls whether tile writes overwrite the top 3 bits of the byte instead of the whole byte
$0078#mdec_deltaDir#used to control direction of framebuffer increment/decrement
$007D#mdec_7d_stackptr#
$007A#mdec_7a_tilenum[1]#
$007B#mdec_7b_tilenum[2]#
$06BC#mapEntryFacingRelated#
$03E7#currentUnfadedPalette#the current palette, with 0 entries after the first skipped. fades dont change this, they get applied elsewhere
$03E8#currentUnfadedPalette[1]#
$0300#ppuDMAList#
$60CA#someQuestFlags_60ca#fiddling with values here can make aliahan look like baramos is dead
$60CB#someQuestFlags_60Cb#fiddling with values here can make aliahan look like baramos is dead
$004B#tileReadingRelatedX#
$004C#tileReadingRelatedY#
$2003#OAMADDR#
$2004#OAMDATA#
$0200#OAMShadow#
$2002#PPUSTATUS#
$0045#itemSelectedInBattle#
