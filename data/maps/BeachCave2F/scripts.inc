# 1 "data/maps/BeachCave2F/scripts.pory"

# 2 "data/maps/BeachCave2F/scripts.pory"
BeachCave2F_MapScripts::
# 3 "data/maps/BeachCave2F/scripts.pory"
	.byte 0

BeachCave2F_AttackedByCubone::
# 67 "data/maps/BeachCave2F/scripts.pory"
	lockall
# 68 "data/maps/BeachCave2F/scripts.pory"
	faceplayer
# 69 "data/maps/BeachCave2F/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
# 70 "data/maps/BeachCave2F/scripts.pory"
	waitmoncry
# 71 "data/maps/BeachCave2F/scripts.pory"
	setwildbattle SPECIES_CUBONE, 5, ITEM_THICK_CLUB
# 72 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_AttackedByCubone_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/BeachCave2F/scripts.pory"
	waitmessage
# 74 "data/maps/BeachCave2F/scripts.pory"
	dowildbattle
# 75 "data/maps/BeachCave2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 76 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BeachCave2F_AttackedByCubone_1
# 80 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BeachCave2F_AttackedByCubone_2
# 84 "data/maps/BeachCave2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BeachCave2F_AttackedByCubone_3
# 89 "data/maps/BeachCave2F/scripts.pory"
	call BeachCave2F_Cubone_Disappeared
	return

BeachCave2F_AttackedByCubone_1:
# 77 "data/maps/BeachCave2F/scripts.pory"
	setflag FLAG_GIFT_BEACHCAVE_0x268
# 78 "data/maps/BeachCave2F/scripts.pory"
	call BeachCave2F_Cubone_Caught
	return

BeachCave2F_AttackedByCubone_2:
# 81 "data/maps/BeachCave2F/scripts.pory"
	setflag FLAG_GIFT_BEACHCAVE_0x268
# 82 "data/maps/BeachCave2F/scripts.pory"
	call BeachCave2F_Cubone_Disappeared
	return

BeachCave2F_AttackedByCubone_3:
# 85 "data/maps/BeachCave2F/scripts.pory"
	setflag FLAG_GIFT_BEACHCAVE_0x268
# 86 "data/maps/BeachCave2F/scripts.pory"
	call BeachCave2F_Cubone_Disappeared
	return


BeachCave2F_Cubone_Caught::
# 94 "data/maps/BeachCave2F/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
# 95 "data/maps/BeachCave2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/BeachCave2F/scripts.pory"
	removeobject 1
# 97 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_Cubone_Caught_Text_0, MSGBOX_AUTOCLOSE
# 98 "data/maps/BeachCave2F/scripts.pory"
	waitmessage
# 99 "data/maps/BeachCave2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


BeachCave2F_Cubone_Disappeared::
# 104 "data/maps/BeachCave2F/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
# 105 "data/maps/BeachCave2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/BeachCave2F/scripts.pory"
	removeobject 1
# 107 "data/maps/BeachCave2F/scripts.pory"
	msgbox BeachCave2F_Cubone_Disappeared_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/BeachCave2F/scripts.pory"
	waitmessage
# 109 "data/maps/BeachCave2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


BeachCave2F_AttackedByCubone_Text_0:
# 72 "data/maps/BeachCave2F/scripts.pory"
	.string "The Cubone is scared, and lashes out at\n"
	.string "you in fear!$"

BeachCave2F_Cubone_Caught_Text_0:
# 97 "data/maps/BeachCave2F/scripts.pory"
	.string "Cubone has joined your party!$"

BeachCave2F_Cubone_Disappeared_Text_0:
# 107 "data/maps/BeachCave2F/scripts.pory"
	.string "The Cubone disappeared into the back\n"
	.string "of the cave.$"
