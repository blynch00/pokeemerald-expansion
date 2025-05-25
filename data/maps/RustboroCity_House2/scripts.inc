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
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_House2_EventScript_KantoStarter_2
# 30 "data/maps/RustboroCity_House2/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_GEN1_GIFT_0x271, RustboroCity_House2_EventScript_KantoStarter_5
# 45 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_EventScript_KantoStarter_Text_2, MSGBOX_DEFAULT
RustboroCity_House2_EventScript_KantoStarter_1:
# 48 "data/maps/RustboroCity_House2/scripts.pory"
	release
	end

RustboroCity_House2_EventScript_KantoStarter_2:
# 26 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_EventScript_KantoStarter_Text_0, MSGBOX_DEFAULT
	goto RustboroCity_House2_EventScript_KantoStarter_1

RustboroCity_House2_EventScript_KantoStarter_5:
# 31 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroCity_House2_EventScript_KantoStarter_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_House2/scripts.pory"
	multichoice 25, 5, MULTI_KANTO_STARTER_CHOICE, 0
# 34 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_House2_EventScript_KantoStarter_8
# 37 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_House2_EventScript_KantoStarter_9
# 40 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RustboroCity_House2_EventScript_KantoStarter_10
	goto RustboroCity_House2_EventScript_KantoStarter_1

RustboroCity_House2_EventScript_KantoStarter_8:
# 35 "data/maps/RustboroCity_House2/scripts.pory"
	call GivePlayerBulbasaur
	goto RustboroCity_House2_EventScript_KantoStarter_1

RustboroCity_House2_EventScript_KantoStarter_9:
# 38 "data/maps/RustboroCity_House2/scripts.pory"
	call GivePlayerSquirtle
	goto RustboroCity_House2_EventScript_KantoStarter_1

RustboroCity_House2_EventScript_KantoStarter_10:
# 41 "data/maps/RustboroCity_House2/scripts.pory"
	call GivePlayerCharmander
	goto RustboroCity_House2_EventScript_KantoStarter_1


GivePlayerBulbasaur::
# 53 "data/maps/RustboroCity_House2/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_ORAN_BERRY
# 54 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GivePlayerBulbasaur_1
# 61 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GivePlayerBulbasaur_2
# 69 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerBulbasaur_Text_1
	return

GivePlayerBulbasaur_1:
# 55 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerBulbasaur_Text_0
# 57 "data/maps/RustboroCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
# 58 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
# 59 "data/maps/RustboroCity_House2/scripts.pory"
	call RustboroKanto_NicknamePartyMon
	return

GivePlayerBulbasaur_2:
# 62 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerBulbasaur_Text_0
# 64 "data/maps/RustboroCity_House2/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BULBASAUR
# 65 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
# 66 "data/maps/RustboroCity_House2/scripts.pory"
	call RustboroKanto_NicknameBoxMon
	return


GivePlayerSquirtle::
# 74 "data/maps/RustboroCity_House2/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_ORAN_BERRY
# 75 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GivePlayerSquirtle_1
# 82 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GivePlayerSquirtle_2
# 90 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerBulbasaur_Text_1
	return

GivePlayerSquirtle_1:
# 76 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 77 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerSquirtle_Text_0
# 78 "data/maps/RustboroCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
# 79 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
# 80 "data/maps/RustboroCity_House2/scripts.pory"
	call RustboroKanto_NicknamePartyMon
	return

GivePlayerSquirtle_2:
# 83 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerSquirtle_Text_0
# 85 "data/maps/RustboroCity_House2/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SQUIRTLE
# 86 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
# 87 "data/maps/RustboroCity_House2/scripts.pory"
	call RustboroKanto_NicknameBoxMon
	return


GivePlayerCharmander::
# 95 "data/maps/RustboroCity_House2/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_ORAN_BERRY
# 96 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GivePlayerCharmander_1
# 103 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GivePlayerCharmander_2
# 111 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerBulbasaur_Text_1
	return

GivePlayerCharmander_1:
# 97 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerCharmander_Text_0
# 99 "data/maps/RustboroCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
# 100 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
# 101 "data/maps/RustboroCity_House2/scripts.pory"
	call RustboroKanto_NicknamePartyMon
	return

GivePlayerCharmander_2:
# 104 "data/maps/RustboroCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox GivePlayerCharmander_Text_0
# 106 "data/maps/RustboroCity_House2/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARMANDER
# 107 "data/maps/RustboroCity_House2/scripts.pory"
	setflag FLAG_RUSTBORO_GEN1_GIFT_0x271
# 108 "data/maps/RustboroCity_House2/scripts.pory"
	call RustboroKanto_NicknameBoxMon
	return


RustboroKanto_NicknamePartyMon::
# 116 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroKanto_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 117 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroKanto_NicknamePartyMon_1
	return

RustboroKanto_NicknamePartyMon_1:
# 118 "data/maps/RustboroCity_House2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 119 "data/maps/RustboroCity_House2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


RustboroKanto_NicknameBoxMon::
# 124 "data/maps/RustboroCity_House2/scripts.pory"
	msgbox RustboroKanto_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 125 "data/maps/RustboroCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroKanto_NicknameBoxMon_2
RustboroKanto_NicknameBoxMon_1:
# 128 "data/maps/RustboroCity_House2/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

RustboroKanto_NicknameBoxMon_2:
# 126 "data/maps/RustboroCity_House2/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroKanto_NicknameBoxMon_1


RustboroCity_House2_EventScript_KantoStarter_Text_0:
# 26 "data/maps/RustboroCity_House2/scripts.pory"
	.string "I see you are a trainer! Please return\n"
	.string "to me once you have defeated Roxanne,\l"
	.string "I will give you something to help in your\l"
	.string "journey.$"

RustboroCity_House2_EventScript_KantoStarter_Text_1:
# 31 "data/maps/RustboroCity_House2/scripts.pory"
	.string "I see you have gotten your first badge!\n"
	.string "My family has been raising the Kanto\l"
	.string "starter Pokemon for years. Please, take\l"
	.string "one to assist you.$"

RustboroCity_House2_EventScript_KantoStarter_Text_2:
# 45 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Please raise your Pokemon well!$"

GivePlayerBulbasaur_Text_0:
# 56 "data/maps/RustboroCity_House2/scripts.pory"
	.string "You got Bulbasaur!$"

GivePlayerBulbasaur_Text_1:
# 69 "data/maps/RustboroCity_House2/scripts.pory"
	.string "No more room.$"

GivePlayerSquirtle_Text_0:
# 77 "data/maps/RustboroCity_House2/scripts.pory"
	.string "You got Squirtle!$"

GivePlayerCharmander_Text_0:
# 98 "data/maps/RustboroCity_House2/scripts.pory"
	.string "You got Charmander!$"

RustboroKanto_NicknamePartyMon_Text_0:
# 116 "data/maps/RustboroCity_House2/scripts.pory"
	.string "Give this Pokemon a nickname?$"
