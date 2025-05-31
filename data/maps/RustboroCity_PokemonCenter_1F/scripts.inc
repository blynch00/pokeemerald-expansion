# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\n"
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how POKéMON have\n"
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my POKéMON how to\n"
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"

RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy::
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lockall
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_0, MSGBOX_YESNO
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_2
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_2, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_FOLLOWERS_ON_0x494
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_3, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_1:
# 60 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_2:
# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_FOLLOWERS_ON_0x494
# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_1


RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_0:
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Yo! I find it so cool when Pokemon can\n"
	.string "be seen following their trainers. Do you\l"
	.string "want to allow your Pokemon to follow\l"
	.string "you?$"

RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_1:
# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Follower Pokemon has been enabled!$"

RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_2:
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Alright, have it your way.$"

RustboroCity_PokemonCenter_1F_EventScript_PokemonFollowerBoy_Text_3:
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Follower Pokemon has been disabled!$"
