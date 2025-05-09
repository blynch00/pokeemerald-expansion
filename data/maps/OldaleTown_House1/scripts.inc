# 1 "data/maps/OldaleTown_House1/scripts.pory"

# 2 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0

OldaleTown_House1_EventScript_Woman::
# 9 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Woman_Text_0
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	release
	end


OldaleTown_House1_EventScript_Pokeball::
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	lockall
# 19 "data/maps/OldaleTown_House1/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 20 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_House1_EventScript_Pokeball_2
# 44 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 45 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Pokeball_Not_Chosen
OldaleTown_House1_EventScript_Pokeball_1:
# 47 "data/maps/OldaleTown_House1/scripts.pory"
	waitmessage
# 48 "data/maps/OldaleTown_House1/scripts.pory"
	releaseall
	end

OldaleTown_House1_EventScript_Pokeball_2:
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldaleTown_House1_EventScript_Pokeball_5
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldaleTown_House1_EventScript_Pokeball_6
# 38 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 39 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_2
	goto OldaleTown_House1_EventScript_Pokeball_1

OldaleTown_House1_EventScript_Pokeball_5:
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_1
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	removeobject 2
# 27 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_GIFT_MON_0x264
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	call NicknamePartyMon
	goto OldaleTown_House1_EventScript_Pokeball_1

OldaleTown_House1_EventScript_Pokeball_6:
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_Pokeball_Text_1
# 33 "data/maps/OldaleTown_House1/scripts.pory"
	removeobject 2
# 34 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_GIFT_MON_0x264
# 35 "data/maps/OldaleTown_House1/scripts.pory"
	call NicknameBoxMon
	goto OldaleTown_House1_EventScript_Pokeball_1


NicknamePartyMon::
# 53 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 54 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 55 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 63 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 64 "data/maps/OldaleTown_House1/scripts.pory"
	hidemonpic
# 65 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox NicknameBoxMon_Text_0
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 66 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


OldaleTown_House1_EventScript_Woman_Text_0:
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Hello! I have this Eevee, but I think it\n"
	.string "is lonely. Do you mind taking care of it?$"

OldaleTown_House1_EventScript_Pokeball_Text_0:
# 20 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Would you like to add Eevee to your\n"
	.string "party?$"

OldaleTown_House1_EventScript_Pokeball_Text_1:
# 25 "data/maps/OldaleTown_House1/scripts.pory"
	.string "You got Eevee!$"

OldaleTown_House1_EventScript_Pokeball_Text_2:
# 39 "data/maps/OldaleTown_House1/scripts.pory"
	.string "No more room.$"

NicknamePartyMon_Text_0:
# 53 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Give this Eevee a nickname?$"

NicknameBoxMon_Text_0:
# 68 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Transferred to PC.$"

OldaleTown_House1_Pokeball_Not_Chosen::
# 73 "data/maps/OldaleTown_House1/scripts.pory"
	.string "You didn't take the Eevee.$"
