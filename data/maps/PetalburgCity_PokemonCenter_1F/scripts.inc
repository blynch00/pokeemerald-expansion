# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "System…\p"
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "of a scientific wizard!$"
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"

PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy::
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lockall
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_0, MSGBOX_YESNO
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_2
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_3, MSGBOX_DEFAULT
PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_1:
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_2:
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CHILAN_BERRY, [ 99 ]
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CHERI_BERRY, [ 99 ]
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, [ 99 ]
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_PECHA_BERRY, [ 99 ]
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_RAWST_BERRY, [ 99 ]
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_ASPEAR_BERRY, [ 99 ]
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_2, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_1


PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_0:
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "YO YO YO! I'm known as the berry guy\n"
	.string "around here. How would you like some\l"
	.string "free berries??$"

PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_1:
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "See, I knew you were smart! Take these\n"
	.string "off my hands.$"

PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_2:
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Come back if you ever need more. There\n"
	.string "are fellow berry enthusiasts such as I\l"
	.string "across the Hoenn region, so be on the\l"
	.string "lookout for all of us.$"

PetalburgCity_PokemonCenter_1F_EventScript_BerryGuy_Text_3:
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Well, suite yourself. These would be\n"
	.string "super helpful for the upcoming\l"
	.string "gauntlets.$"
