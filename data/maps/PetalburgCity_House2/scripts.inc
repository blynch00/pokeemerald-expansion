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
	.string "I think he moved from somewhere\n"
# 15 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "somewhere far away.$"

PetalburgCity_House2_EventScript_SchoolKid::
# 20 "data/maps/PetalburgCity_House2/scripts.pory"
	lockall
# 21 "data/maps/PetalburgCity_House2/scripts.pory"
	faceplayer
# 22 "data/maps/PetalburgCity_House2/scripts.pory"
	goto_if_unset FLAG_BABY_POKEMON_PETALBURG_0x497, PetalburgCity_House2_EventScript_SchoolKid_2
# 37 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_2, MSGBOX_DEFAULT
PetalburgCity_House2_EventScript_SchoolKid_1:
# 39 "data/maps/PetalburgCity_House2/scripts.pory"
	release
	end

PetalburgCity_House2_EventScript_SchoolKid_2:
# 23 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_0, MSGBOX_YESNO
# 24 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_House2_EventScript_SchoolKid_5
# 31 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_1, MSGBOX_DEFAULT
	goto PetalburgCity_House2_EventScript_SchoolKid_1

PetalburgCity_House2_EventScript_SchoolKid_5:
# 25 "data/maps/PetalburgCity_House2/scripts.pory"
	getpartysize
# 26 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 6
# 27 "data/maps/PetalburgCity_House2/scripts.pory"
	goto_if_eq Petalburg_City_Player_Has_Full_Party
# 28 "data/maps/PetalburgCity_House2/scripts.pory"
	goto_if_ne Petalburg_City_Player_Receives_Egg
	goto PetalburgCity_House2_EventScript_SchoolKid_1


Petalburg_City_Player_Has_Full_Party::
# 44 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Has_Full_Party_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgCity_House2/scripts.pory"
	release
	end


Petalburg_City_Player_Receives_Egg::
# 49 "data/maps/PetalburgCity_House2/scripts.pory"
	lockall
# 50 "data/maps/PetalburgCity_House2/scripts.pory"
	random 8
# 51 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Petalburg_City_Player_Receives_Egg_2
# 59 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Petalburg_City_Player_Receives_Egg_3
# 67 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Petalburg_City_Player_Receives_Egg_4
# 75 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Petalburg_City_Player_Receives_Egg_5
# 83 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Petalburg_City_Player_Receives_Egg_6
# 91 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Petalburg_City_Player_Receives_Egg_7
# 99 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Petalburg_City_Player_Receives_Egg_8
# 107 "data/maps/PetalburgCity_House2/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Petalburg_City_Player_Receives_Egg_9
# 116 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_1, MSGBOX_DEFAULT
Petalburg_City_Player_Receives_Egg_1:
# 118 "data/maps/PetalburgCity_House2/scripts.pory"
	release
	end

Petalburg_City_Player_Receives_Egg_2:
# 52 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_TOGEPI
# 53 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 55 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 56 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 57 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1

Petalburg_City_Player_Receives_Egg_3:
# 60 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_SMOOCHUM
# 61 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 64 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 65 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1

Petalburg_City_Player_Receives_Egg_4:
# 68 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_MAGBY
# 69 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 70 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 71 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 72 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 73 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1

Petalburg_City_Player_Receives_Egg_5:
# 76 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_ELEKID
# 77 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 80 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 81 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1

Petalburg_City_Player_Receives_Egg_6:
# 84 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_MUNCHLAX
# 85 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 87 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 88 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 89 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1

Petalburg_City_Player_Receives_Egg_7:
# 92 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_PICHU
# 93 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 94 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 96 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 97 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1

Petalburg_City_Player_Receives_Egg_8:
# 100 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_CHINGLING
# 101 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 103 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 104 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 105 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1

Petalburg_City_Player_Receives_Egg_9:
# 108 "data/maps/PetalburgCity_House2/scripts.pory"
	giveegg SPECIES_TOXEL
# 109 "data/maps/PetalburgCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 110 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox Petalburg_City_Player_Receives_Egg_Text_0, MSGBOX_DEFAULT
# 111 "data/maps/PetalburgCity_House2/scripts.pory"
	waitmessage
# 112 "data/maps/PetalburgCity_House2/scripts.pory"
	waitfanfare
# 113 "data/maps/PetalburgCity_House2/scripts.pory"
	setflag FLAG_BABY_POKEMON_PETALBURG_0x497
	goto Petalburg_City_Player_Receives_Egg_1


PetalburgCity_House2_EventScript_SchoolKid_Text_0:
# 23 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Well, I had planned on hatching this\n"
	.string "egg, but it just doesn't seem to want to\l"
	.string "come out. Would you like it?$"

PetalburgCity_House2_EventScript_SchoolKid_Text_1:
# 31 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Oh well, I guess I'll just sit here and\n"
	.string "stare at it until it hatches.$"

PetalburgCity_House2_EventScript_SchoolKid_Text_2:
# 37 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Hey there! Hope that POKéMON is\n"
	.string "treated well, and you form an\l"
	.string "inexplicable bond together.$"

Petalburg_City_Player_Has_Full_Party_Text_0:
# 44 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "Oh, too bad, you don't have room in your\n"
	.string "party.$"

Petalburg_City_Player_Receives_Egg_Text_0:
# 54 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "{PLAYER} received an egg!$"

Petalburg_City_Player_Receives_Egg_Text_1:
# 116 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "ERROR: NUM OUTSIDE RANGE$"
