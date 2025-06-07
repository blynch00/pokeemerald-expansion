# 1 "data/maps/RustboroCity_House2/scripts.pory"

# 2 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_MapScripts::
# 3 "data/maps/RustboroCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House2/scripts.pory"

# 5 "data/maps/RustboroCity_House2/scripts.pory"

# 6 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_EventScript_LittleGirl::
# 7 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_RoxanneKnowsALot, MSGBOX_NPC
# 8 "data/maps/RustboroCity_House2/scripts.pory"
	end
# 9 "data/maps/RustboroCity_House2/scripts.pory"

# 10 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_TrainerSchoolExcellent:
# 11 "data/maps/RustboroCity_House2/scripts.pory"
	.string "The TRAINER'S SCHOOL is excellent.\p"
# 12 "data/maps/RustboroCity_House2/scripts.pory"
	.string "If you study there, you could even\n"
# 13 "data/maps/RustboroCity_House2/scripts.pory"
	.string "become a GYM LEADER.$"
# 14 "data/maps/RustboroCity_House2/scripts.pory"

# 15 "data/maps/RustboroCity_House2/scripts.pory"
RustboroCity_House2_Text_RoxanneKnowsALot:
# 16 "data/maps/RustboroCity_House2/scripts.pory"
	.string "ROXANNE, the GYM LEADER, really knows\n"
# 17 "data/maps/RustboroCity_House2/scripts.pory"
	.string "a lot about POKéMON.\p"
# 18 "data/maps/RustboroCity_House2/scripts.pory"
	.string "She's really strong, too!$"

RustboroCity_House2_EventScript_KantoStarter::
# 23 "data/maps/RustboroCity_House2/scripts.pory"
	lockall
# 24 "data/maps/RustboroCity_House2/scripts.pory"
	faceplayer
# 25 "data/maps/RustboroCity_House2/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_GEN1_GIFT_0x271, RustboroCity_House2_EventScript_KantoStarter_2
# 40 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_EventScript_KantoStarter_Text_2, MSGBOX_DEFAULT
RustboroCity_House2_EventScript_KantoStarter_1:
# 42 "data/maps/RustboroCity_House2/scripts.pory"
	release
	end

RustboroCity_House2_EventScript_KantoStarter_2:
# 26 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_EventScript_KantoStarter_Text_0, MSGBOX_YESNO
# 27 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_House2_EventScript_KantoStarter_5
# 34 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_EventScript_KantoStarter_Text_1, MSGBOX_DEFAULT
	goto RustboroCity_House2_EventScript_KantoStarter_1

RustboroCity_House2_EventScript_KantoStarter_5:
# 28 "data/maps/RustboroCity_House2/scripts.pory"
	getpartysize
# 29 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, 6
# 30 "data/maps/RustboroCity_House2/scripts.pory"
	goto_if_eq Rustboro_City_Player_Has_Full_Party
# 31 "data/maps/RustboroCity_House2/scripts.pory"
	goto_if_ne Rustboro_City_Player_Receives_Egg
	goto RustboroCity_House2_EventScript_KantoStarter_1


Rustboro_City_Player_Has_Full_Party::
# 70 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox Rustboro_City_Player_Has_Full_Party_Text_0, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_House2/scripts.pory"
	release
	end


Rustboro_City_Player_Receives_Egg::
# 76 "data/maps/RustboroCity_House2/scripts.pory"
	lockall
# 77 "data/maps/RustboroCity_House2/scripts.pory"
	random 3
# 78 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rustboro_City_Player_Receives_Egg_2
# 86 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rustboro_City_Player_Receives_Egg_3
# 94 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Rustboro_City_Player_Receives_Egg_4
# 103 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox Rustboro_City_Player_Receives_Egg_Text_1, MSGBOX_AUTOCLOSE
Rustboro_City_Player_Receives_Egg_1:
# 105 "data/maps/RustboroCity_House2/scripts.pory"
	release
	end

Rustboro_City_Player_Receives_Egg_2:
# 79 "data/maps/RustboroCity_House2/scripts.pory"
	giveegg SPECIES_BULBASAUR
# 80 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 81 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox Rustboro_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity_House2/scripts.pory"
	waitmessage
# 83 "data/maps/RustboroCity_House2/scripts.pory"
	waitfanfare
# 84 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
	goto Rustboro_City_Player_Receives_Egg_1

Rustboro_City_Player_Receives_Egg_3:
# 87 "data/maps/RustboroCity_House2/scripts.pory"
	giveegg SPECIES_SQUIRTLE
# 88 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 89 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox Rustboro_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 90 "data/maps/RustboroCity_House2/scripts.pory"
	waitmessage
# 91 "data/maps/RustboroCity_House2/scripts.pory"
	waitfanfare
# 92 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
	goto Rustboro_City_Player_Receives_Egg_1

Rustboro_City_Player_Receives_Egg_4:
# 95 "data/maps/RustboroCity_House2/scripts.pory"
	giveegg SPECIES_CHARMANDER
# 96 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox Rustboro_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/RustboroCity_House2/scripts.pory"
	waitmessage
# 99 "data/maps/RustboroCity_House2/scripts.pory"
	waitfanfare
# 100 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
	goto Rustboro_City_Player_Receives_Egg_1


RustboroCity_House2_EventScript_KantoStarter_Text_0:
# 26 "data/maps/RustboroCity_House2/scripts.pory"
	.string "I see you are a trainer! My family has\n"
	.string "been raising the Kanto starter POKéMON\l"
	.string "for years. Please, take an egg to assist\l"
	.string "you.$"

RustboroCity_House2_EventScript_KantoStarter_Text_1:
# 34 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Please, come back at any time.$"

RustboroCity_House2_EventScript_KantoStarter_Text_2:
# 40 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Is your journey is going well?$"

Rustboro_City_Player_Has_Full_Party_Text_0:
# 70 "data/maps/RustboroCity_House2/scripts.pory"
	.string "You don't have room for the egg! Come\n"
	.string "back with some space, dear.$"

Rustboro_City_Player_Receives_Egg_Text_0:
# 81 "data/maps/RustboroCity_House2/scripts.pory"
	.string "{PLAYER} received an egg!$"

Rustboro_City_Player_Receives_Egg_Text_1:
# 103 "data/maps/RustboroCity_House2/scripts.pory"
	.string "ERROR: OUTSIDE RANGE$"
