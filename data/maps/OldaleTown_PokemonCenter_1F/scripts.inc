# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_POKE_VIAL_0x493, OldaleTown_PokemonCenter_1F_EventScript_Gentleman_2
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Text_1, MSGBOX_YESNO
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_Gentleman_5
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Text_2, MSGBOX_DEFAULT
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman_1:
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman_2:
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Text_0, MSGBOX_DEFAULT
	goto OldaleTown_PokemonCenter_1F_EventScript_Gentleman_1

OldaleTown_PokemonCenter_1F_EventScript_Gentleman_5:
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_POKE_VIAL_0x493
	goto OldaleTown_PokemonCenter_1F_EventScript_Gentleman_1


OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial::
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_POKE_VIAL
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_2
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_3
OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_1:
	return

OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_2:
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_POKE_VIAL_0x493
	goto OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_1

OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_3:
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_POKE_VIAL, [ 1 ]
	goto OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_1


OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Text_0:
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can access the Poke Vial via the\n"
	.string "Key Items menu!$"

OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Text_1:
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Running back and forth to the Pokemon\n"
	.string "centers can be so annoying. Don't you\l"
	.string "agree?$"

OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Text_2:
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Well, if you really enjoy running, I\n"
	.string "understand!$"

OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_Text_0:
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Looks like you already have the Poke\n"
	.string "Vial.$"

OldaleTown_PokemonCenter_1F_EventScript_ReceivePokeVial_Text_1:
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Smart Lad! Here, a gift from me to you.$"
