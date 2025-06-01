# 1 "data/maps/LostWoods/scripts.pory"

# 2 "data/maps/LostWoods/scripts.pory"
LostWoods_MapScripts::
# 3 "data/maps/LostWoods/scripts.pory"
	.byte 0

LostWoods_LittleGirl::
# 8 "data/maps/LostWoods/scripts.pory"
	lockall
# 9 "data/maps/LostWoods/scripts.pory"
	faceplayer
# 10 "data/maps/LostWoods/scripts.pory"
	msgbox LostWoods_LittleGirl_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/LostWoods/scripts.pory"
	release
	end


LostWoodsAbsolBlockade::
# 17 "data/maps/LostWoods/scripts.pory"
	lockall
# 18 "data/maps/LostWoods/scripts.pory"
	faceplayer
# 19 "data/maps/LostWoods/scripts.pory"
	msgbox LostWoodsAbsolBlockade_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/LostWoods/scripts.pory"
	release
	end


LostWoods_ObtainHonedge::
# 26 "data/maps/LostWoods/scripts.pory"
	lockall
# 27 "data/maps/LostWoods/scripts.pory"
	faceplayer
# 28 "data/maps/LostWoods/scripts.pory"
	goto_if_unset FLAG_LOST_WOODS_OBTAIN_HONEDGE_0x272, LostWoods_ObtainHonedge_2
# 57 "data/maps/LostWoods/scripts.pory"
	msgbox LostWoods_ObtainHonedge_Text_1, MSGBOX_DEFAULT
LostWoods_ObtainHonedge_1:
# 59 "data/maps/LostWoods/scripts.pory"
	waitmessage
# 60 "data/maps/LostWoods/scripts.pory"
	releaseall
	end

LostWoods_ObtainHonedge_2:
# 29 "data/maps/LostWoods/scripts.pory"
	msgbox LostWoods_ObtainHonedge_Text_0, MSGBOX_YESNO
# 30 "data/maps/LostWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LostWoods_ObtainHonedge_5
	goto LostWoods_ObtainHonedge_1

LostWoods_ObtainHonedge_5:
# 31 "data/maps/LostWoods/scripts.pory"
	playmoncry SPECIES_HONEDGE, CRY_MODE_ENCOUNTER
# 32 "data/maps/LostWoods/scripts.pory"
	delay 40
# 33 "data/maps/LostWoods/scripts.pory"
	waitmoncry
# 34 "data/maps/LostWoods/scripts.pory"
	setwildbattle SPECIES_HONEDGE, 10, ITEM_METAL_COAT
# 35 "data/maps/LostWoods/scripts.pory"
	dowildbattle
# 36 "data/maps/LostWoods/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 37 "data/maps/LostWoods/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LostWoods_ObtainHonedge_7
# 41 "data/maps/LostWoods/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LostWoods_ObtainHonedge_8
# 45 "data/maps/LostWoods/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LostWoods_ObtainHonedge_9
# 50 "data/maps/LostWoods/scripts.pory"
	call Honedge_Unworthy
	goto LostWoods_ObtainHonedge_1

LostWoods_ObtainHonedge_7:
# 38 "data/maps/LostWoods/scripts.pory"
	setflag FLAG_LOST_WOODS_OBTAIN_HONEDGE_0x272
# 39 "data/maps/LostWoods/scripts.pory"
	call Honedge_Won_Or_Caught
	goto LostWoods_ObtainHonedge_1

LostWoods_ObtainHonedge_8:
# 42 "data/maps/LostWoods/scripts.pory"
	setflag FLAG_LOST_WOODS_OBTAIN_HONEDGE_0x272
# 43 "data/maps/LostWoods/scripts.pory"
	call Honedge_Won_Or_Caught
	goto LostWoods_ObtainHonedge_1

LostWoods_ObtainHonedge_9:
# 46 "data/maps/LostWoods/scripts.pory"
	setflag FLAG_LOST_WOODS_OBTAIN_HONEDGE_0x272
# 47 "data/maps/LostWoods/scripts.pory"
	call Honedge_Unworthy
	goto LostWoods_ObtainHonedge_1


Honedge_Won_Or_Caught::
# 65 "data/maps/LostWoods/scripts.pory"
	playmoncry SPECIES_HONEDGE, CRY_MODE_ENCOUNTER
# 66 "data/maps/LostWoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/LostWoods/scripts.pory"
	removeobject 1
# 68 "data/maps/LostWoods/scripts.pory"
	msgbox Honedge_Won_Or_Caught_Text_0, MSGBOX_DEFAULT
# 69 "data/maps/LostWoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Honedge_Unworthy::
# 74 "data/maps/LostWoods/scripts.pory"
	playmoncry SPECIES_HONEDGE, CRY_MODE_ENCOUNTER
# 75 "data/maps/LostWoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/LostWoods/scripts.pory"
	removeobject 1
# 77 "data/maps/LostWoods/scripts.pory"
	msgbox Honedge_Unworthy_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/LostWoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


LostWoods_DuskStone::
# 83 "data/maps/LostWoods/scripts.pory"
	finditem ITEM_DUSK_STONE, [ 1 ]
# 84 "data/maps/LostWoods/scripts.pory"
	removeobject 2
# 85 "data/maps/LostWoods/scripts.pory"
	setflag FLAG_LOST_WOODS_ITEM_DUSK_STONE_0x273
	return


LostWoods_LittleGirl_Text_0:
# 10 "data/maps/LostWoods/scripts.pory"
	.string "A powerful pokemon lives in this forest,\n"
	.string "and other Pokemon in the forest guard\l"
	.string "it day and night. I heard it is waiting\l"
	.string "for a worthy trainer to accompany.$"

LostWoodsAbsolBlockade_Text_0:
# 19 "data/maps/LostWoods/scripts.pory"
	.string "The Absol look deep into your soul, and\n"
	.string "find you worthy. Return with 4 gym\l"
	.string "badges, and claim your right to the\l"
	.string "Pokemon they guard.$"

LostWoods_ObtainHonedge_Text_0:
# 29 "data/maps/LostWoods/scripts.pory"
	.string "Honedge looks at you, challenging you\n"
	.string "to prove your worth. Do you accept?$"

LostWoods_ObtainHonedge_Text_1:
# 57 "data/maps/LostWoods/scripts.pory"
	.string "Honedge doesn't look in your direction,\n"
	.string "as if you can't even be seen.$"

Honedge_Won_Or_Caught_Text_0:
# 68 "data/maps/LostWoods/scripts.pory"
	.string "Honedge has found you to be worthy.$"

Honedge_Unworthy_Text_0:
# 77 "data/maps/LostWoods/scripts.pory"
	.string "Honedge finds you unworthy, and\n"
	.string "disappears into the grove.$"
