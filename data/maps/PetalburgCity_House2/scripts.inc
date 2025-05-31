# 1 "data/maps/PetalburgCity_House2/scripts.pory"

# 2 "data/maps/PetalburgCity_House2/scripts.pory"
PetalburgCity_House2_MapScripts::
# 3 "data/maps/PetalburgCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_House2/scripts.pory"

# 5 "data/maps/PetalburgCity_House2/scripts.pory"
PetalburgCity_House2_EventScript_Woman::
# 6 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
# 7 "data/maps/PetalburgCity_House2/scripts.pory"
	end
# 8 "data/maps/PetalburgCity_House2/scripts.pory"

# 9 "data/maps/PetalburgCity_House2/scripts.pory"

# 10 "data/maps/PetalburgCity_House2/scripts.pory"

# 11 "data/maps/PetalburgCity_House2/scripts.pory"
PetalburgCity_House2_Text_NormanBecameGymLeader:
# 12 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "NORMAN became our town's new\n"
# 13 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "GYM LEADER.\p"
# 14 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "I think he called his family over from\n"
# 15 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "somewhere far away, so he could help\n"
# 16 "data/maps/PetalburgCity_House2/scripts.pory"
    .string "the Hoenn region settle back into\n"
# 17 "data/maps/PetalburgCity_House2/scripts.pory"
    .string "normalcy. What a great guy!$"

PetalburgCity_House2_EventScript_SchoolKid::
# 22 "data/maps/PetalburgCity_House2/scripts.pory"
	lockall
# 23 "data/maps/PetalburgCity_House2/scripts.pory"
	faceplayer
# 24 "data/maps/PetalburgCity_House2/scripts.pory"
	goto_if_unset FLAG_BABY_POKEMON_PETALBURG_0x497, PetalburgCity_House2_EventScript_SchoolKid_2
# 39 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_2, MSGBOX_DEFAULT
PetalburgCity_House2_EventScript_SchoolKid_1:
# 41 "data/maps/PetalburgCity_House2/scripts.pory"
	release
	end

PetalburgCity_House2_EventScript_SchoolKid_2:
# 25 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_0, MSGBOX_YESNO
# 26 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_House2_EventScript_SchoolKid_5
# 33 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_1, MSGBOX_DEFAULT
	goto PetalburgCity_House2_EventScript_SchoolKid_1

PetalburgCity_House2_EventScript_SchoolKid_5:
# 27 "data/maps/PetalburgCity_House2/scripts.pory"
	getpartysize
# 28 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 6
# 29 "data/maps/PetalburgCity_House2/scripts.pory"
	goto_if_eq Player_Has_Full_Party
# 30 "data/maps/PetalburgCity_House2/scripts.pory"
	goto_if_ne Player_Receives_Egg
	goto PetalburgCity_House2_EventScript_SchoolKid_1


Player_Has_Full_Party::
# 46 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Player_Has_Full_Party_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgCity_House2/scripts.pory"
	release
	end


Player_Receives_Egg::
# 51 "data/maps/PetalburgCity_House2/scripts.pory"
	random 5
# 52 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Player_Receives_Egg_2
# 60 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Player_Receives_Egg_3
# 68 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Player_Receives_Egg_4
# 76 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Player_Receives_Egg_5
# 84 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Player_Receives_Egg_6
# 93 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Player_Receives_Egg_Text_1, MSGBOX_DEFAULT
Player_Receives_Egg_1:
# 95 "data/maps/PetalburgCity_House2/scripts.pory"
	release
	end

Player_Receives_Egg_2:
# 53 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_TOGEPI
# 54 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 57 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 58 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Player_Receives_Egg_1

Player_Receives_Egg_3:
# 61 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_SMOOCHUM
# 62 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 65 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 66 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Player_Receives_Egg_1

Player_Receives_Egg_4:
# 69 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_MAGBY
# 70 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 72 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 73 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 74 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Player_Receives_Egg_1

Player_Receives_Egg_5:
# 77 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_ELEKID
# 78 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 79 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 80 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 81 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 82 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Player_Receives_Egg_1

Player_Receives_Egg_6:
# 85 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_MUNCHLAX
# 86 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 89 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 90 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Player_Receives_Egg_1


PetalburgCity_House2_EventScript_SchoolKid_Text_0:
# 25 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Well, I had planned on hatching this\n"
	.string "egg, but it just doesn't seem to want to\l"
	.string "come out. Would you like it?$"

PetalburgCity_House2_EventScript_SchoolKid_Text_1:
# 33 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Oh well, I guess I'll just sit here and\n"
	.string "stare at it until it hatches.$"

PetalburgCity_House2_EventScript_SchoolKid_Text_2:
# 39 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Hey there! Hope that POKéMON is\n"
	.string "treated well, and you form an\l"
	.string "inexplicable bond together.$"

Player_Has_Full_Party_Text_0:
# 46 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Oh, too bad, you don't have room in your\n"
	.string "party.$"

Player_Receives_Egg_Text_0:
# 55 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "{PLAYER} received an egg!$"

Player_Receives_Egg_Text_1:
# 93 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "ERROR: NUM OUTSIDE RANGE$"
