# 1 "data/maps/OldaleTown_House1/scripts.pory"

# 2 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0

OldaleTown_House1_EventScript_Woman::
# 9 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_unset FLAG_GIFT_MON_0x264, OldaleTown_House1_EventScript_Woman_2
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Woman_Text_1
OldaleTown_House1_EventScript_Woman_1:
# 16 "data/maps/OldaleTown_House1/scripts.pory"
	release
	end

OldaleTown_House1_EventScript_Woman_2:
# 11 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Woman_Text_0
	goto OldaleTown_House1_EventScript_Woman_1


OldaleTown_House1_EventScript_Pokeball::
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 25 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_House1_EventScript_Pokeball_2
# 48 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Pokeball_Not_Chosen
OldaleTown_House1_EventScript_Pokeball_1:
# 51 "data/maps/OldaleTown_House1/scripts.pory"
	waitmessage
# 52 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	end

OldaleTown_House1_EventScript_Pokeball_2:
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY
# 27 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldaleTown_House1_EventScript_Pokeball_5
# 34 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldaleTown_House1_EventScript_Pokeball_6
# 42 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_2
	goto OldaleTown_House1_EventScript_Pokeball_1

OldaleTown_House1_EventScript_Pokeball_5:
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_1
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	removeobject 2
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_GIFT_MON_0x264
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	call NicknamePartyMon
	goto OldaleTown_House1_EventScript_Pokeball_1

OldaleTown_House1_EventScript_Pokeball_6:
# 35 "data/maps/OldaleTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 36 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_1
# 37 "data/maps/OldaleTown_House1/scripts.pory"
	removeobject 2
# 38 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_GIFT_MON_0x264
# 39 "data/maps/OldaleTown_House1/scripts.pory"
	call NicknameBoxMon
	goto OldaleTown_House1_EventScript_Pokeball_1


NicknamePartyMon::
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 58 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 59 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 67 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 72 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox NicknameBoxMon_Text_0
# 73 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 70 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


OldaleTown_House1_EventScript_Woman_Text_0:
# 11 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Hello! I have this Eevee, but I think it\n"
	.string "is lonely. Please take care of it for me!$"

OldaleTown_House1_EventScript_Woman_Text_1:
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Thank you for being so kind to Pokemon!$"

OldaleTown_House1_EventScript_Pokeball_Text_0:
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Would you like to add Eevee to your\n"
	.string "party?$"

OldaleTown_House1_EventScript_Pokeball_Text_1:
# 29 "data/maps/OldaleTown_House1/scripts.pory"
	.string "You got Eevee!$"

OldaleTown_House1_EventScript_Pokeball_Text_2:
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	.string "No more room.$"

NicknamePartyMon_Text_0:
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Give this Eevee a nickname?$"

NicknameBoxMon_Text_0:
# 72 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Transferred to PC.$"

OldaleTown_House1_Pokeball_Not_Chosen::
# 77 "data/maps/OldaleTown_House1/scripts.pory"
	.string "You didn't take the Eevee.$"
