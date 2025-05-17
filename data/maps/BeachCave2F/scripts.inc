# 1 "data/maps/BeachCave2F/scripts.pory"

# 2 "data/maps/BeachCave2F/scripts.pory"
BeachCave2F_MapScripts::
# 3 "data/maps/BeachCave2F/scripts.pory"
	.byte 0

BeachCave2F_EventScript_SadCubone::
# 7 "data/maps/BeachCave2F/scripts.pory"
	lockall
# 8 "data/maps/BeachCave2F/scripts.pory"
	showmonpic SPECIES_CUBONE, 10, 3
# 9 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_EventScript_SadCubone_Text_0, MSGBOX_YESNO
# 11 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BeachCave2F_EventScript_SadCubone_2
# 33 "data/maps/BeachCave2F/scripts.pory"
	hidemonpic
# 34 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_LeaveCubone
BeachCave2F_EventScript_SadCubone_1:
# 36 "data/maps/BeachCave2F/scripts.pory"
	waitmessage
# 37 "data/maps/BeachCave2F/scripts.pory"
	releaseall
	end

BeachCave2F_EventScript_SadCubone_2:
# 12 "data/maps/BeachCave2F/scripts.pory"
	givemon SPECIES_CUBONE, 5, ITEM_THICK_CLUB
# 13 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BeachCave2F_EventScript_SadCubone_5
# 20 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BeachCave2F_EventScript_SadCubone_6
# 28 "data/maps/BeachCave2F/scripts.pory"
	hidemonpic
# 29 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_EventScript_SadCubone_Text_2
	goto BeachCave2F_EventScript_SadCubone_1

BeachCave2F_EventScript_SadCubone_5:
# 14 "data/maps/BeachCave2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_EventScript_SadCubone_Text_1
# 16 "data/maps/BeachCave2F/scripts.pory"
	removeobject 1
# 17 "data/maps/BeachCave2F/scripts.pory"
	setflag FLAG_GIFT_BEACHCAVE_0x268
# 18 "data/maps/BeachCave2F/scripts.pory"
	call BeachCave_NicknamePartyMon
	goto BeachCave2F_EventScript_SadCubone_1

BeachCave2F_EventScript_SadCubone_6:
# 21 "data/maps/BeachCave2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_EventScript_SadCubone_Text_1
# 23 "data/maps/BeachCave2F/scripts.pory"
	removeobject 1
# 24 "data/maps/BeachCave2F/scripts.pory"
	setflag FLAG_GIFT_BEACHCAVE_0x268
# 25 "data/maps/BeachCave2F/scripts.pory"
	call BeachCave_NicknameBoxMon
	goto BeachCave2F_EventScript_SadCubone_1


BeachCave_NicknamePartyMon::
# 42 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 43 "data/maps/BeachCave2F/scripts.pory"
	hidemonpic
# 44 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BeachCave_NicknamePartyMon_1
	return

BeachCave_NicknamePartyMon_1:
# 45 "data/maps/BeachCave2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 46 "data/maps/BeachCave2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


BeachCave_NicknameBoxMon::
# 51 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 52 "data/maps/BeachCave2F/scripts.pory"
	hidemonpic
# 53 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BeachCave_NicknameBoxMon_2
BeachCave_NicknameBoxMon_1:
# 56 "data/maps/BeachCave2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CUBONE
# 57 "data/maps/BeachCave2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CUBONE
# 58 "data/maps/BeachCave2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

BeachCave_NicknameBoxMon_2:
# 54 "data/maps/BeachCave2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto BeachCave_NicknameBoxMon_1


BeachCave2F_EventScript_SadCubone_Text_0:
# 9 "data/maps/BeachCave2F/scripts.pory"
	.string "This Cubone is alone and afraid. It\n"
	.string "looks at you, wondering if you will take\l"
	.string "care of it. Do you accept?$"

BeachCave2F_EventScript_SadCubone_Text_1:
# 15 "data/maps/BeachCave2F/scripts.pory"
	.string "You got Cubone!$"

BeachCave2F_EventScript_SadCubone_Text_2:
# 29 "data/maps/BeachCave2F/scripts.pory"
	.string "No more room.$"

BeachCave_NicknamePartyMon_Text_0:
# 42 "data/maps/BeachCave2F/scripts.pory"
	.string "Give this Cubone a nickname?$"

BeachCave2F_LeaveCubone::
# 62 "data/maps/BeachCave2F/scripts.pory"
	.string "You didn't take the Cubone.$"
