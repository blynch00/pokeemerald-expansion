# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"

# 6 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 7 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 8 "data/maps/Route102/scripts.pory"
	end
# 9 "data/maps/Route102/scripts.pory"

# 10 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 11 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 12 "data/maps/Route102/scripts.pory"
	end
# 13 "data/maps/Route102/scripts.pory"

# 14 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 15 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 16 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 17 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 18 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 19 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 20 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 21 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 22 "data/maps/Route102/scripts.pory"
	release
# 23 "data/maps/Route102/scripts.pory"
	end
# 24 "data/maps/Route102/scripts.pory"

# 25 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 26 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 27 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 29 "data/maps/Route102/scripts.pory"
	release
# 30 "data/maps/Route102/scripts.pory"
	end
# 31 "data/maps/Route102/scripts.pory"

# 32 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 33 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 34 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 35 "data/maps/Route102/scripts.pory"
	release
# 36 "data/maps/Route102/scripts.pory"
	end
# 37 "data/maps/Route102/scripts.pory"

# 38 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 39 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 40 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 41 "data/maps/Route102/scripts.pory"
	release
# 42 "data/maps/Route102/scripts.pory"
	end
# 43 "data/maps/Route102/scripts.pory"

# 44 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 45 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 46 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 47 "data/maps/Route102/scripts.pory"
	release
# 48 "data/maps/Route102/scripts.pory"
	end
# 49 "data/maps/Route102/scripts.pory"

# 50 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 51 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 52 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route102/scripts.pory"
	end
# 54 "data/maps/Route102/scripts.pory"

# 55 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 56 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 57 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route102/scripts.pory"
	end
# 59 "data/maps/Route102/scripts.pory"

# 60 "data/maps/Route102/scripts.pory"

# 61 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 62 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 63 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route102/scripts.pory"
	end
# 65 "data/maps/Route102/scripts.pory"

# 66 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 67 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 68 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 69 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 70 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 71 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 72 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 73 "data/maps/Route102/scripts.pory"

# 74 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 75 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 76 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 77 "data/maps/Route102/scripts.pory"

# 78 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 79 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 80 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 81 "data/maps/Route102/scripts.pory"

# 82 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 83 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 84 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 85 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 86 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 87 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 88 "data/maps/Route102/scripts.pory"

# 89 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 90 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 91 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 92 "data/maps/Route102/scripts.pory"

# 93 "data/maps/Route102/scripts.pory"

# 94 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 95 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 96 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_EventScript_RouteSignOldale::
# 102 "data/maps/Route102/scripts.pory"
	lockall
# 103 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_RouteSignOldale_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route102/scripts.pory"
	release
	end


Route102_EventScript_Tiana::
# 110 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated, Route102_Clear
# 111 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_ROUTE102_CLEAR_0x266, Route102_EventScript_Tiana_1
# 119 "data/maps/Route102/scripts.pory"
	lockall
# 120 "data/maps/Route102/scripts.pory"
	faceplayer
# 121 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana_Text_1, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_Tiana_1:
# 112 "data/maps/Route102/scripts.pory"
	lockall
# 113 "data/maps/Route102/scripts.pory"
	faceplayer
# 114 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana_Text_0, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route102/scripts.pory"
	release
	end


Route102_Clear::
# 129 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/Route102/scripts.pory"
	removeobject 10
# 131 "data/maps/Route102/scripts.pory"
	removeobject 11
# 132 "data/maps/Route102/scripts.pory"
	msgbox Route102_Clear_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE102_CLEAR_0x266
	return


Route102_EventScript_RouteClearItem::
# 142 "data/maps/Route102/scripts.pory"
	lockall
# 143 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_RouteClearItem_Text_0, MSGBOX_YESNO
# 144 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route102_EventScript_RouteClearItem_2
# 152 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_RouteClearItem_Text_1, MSGBOX_DEFAULT
Route102_EventScript_RouteClearItem_1:
# 155 "data/maps/Route102/scripts.pory"
	waitmessage
# 156 "data/maps/Route102/scripts.pory"
	releaseall
	end

Route102_EventScript_RouteClearItem_2:
# 145 "data/maps/Route102/scripts.pory"
	giveitem ITEM_ORAN_BERRY, [ 500 ]
# 146 "data/maps/Route102/scripts.pory"
	giveitem ITEM_POMEG_BERRY, [ 999 ]
# 147 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE102_GIFTS_0x267
# 148 "data/maps/Route102/scripts.pory"
	removeobject 1
	goto Route102_EventScript_RouteClearItem_1


Route_102_EventScript_BarrierText::
# 162 "data/maps/Route102/scripts.pory"
	lockall
# 163 "data/maps/Route102/scripts.pory"
	msgbox Route_102_EventScript_BarrierText_Text_0, MSGBOX_DEFAULT
# 165 "data/maps/Route102/scripts.pory"
	waitmessage
# 166 "data/maps/Route102/scripts.pory"
	releaseall
	end


Route102_EventScript_RouteSignOldale_Text_0:
# 103 "data/maps/Route102/scripts.pory"
	.string "This is the first gauntlet: Level of\n"
	.string "Trainers: 6-8. Defeat all trainers to\l"
	.string "reach Petalburg City.$"

Route102_EventScript_Tiana_Text_0:
# 114 "data/maps/Route102/scripts.pory"
	.string "Alright, I get it. I'll leave the pokemon\n"
	.string "on this route alone from now on.$"

Route102_EventScript_Tiana_Text_1:
# 121 "data/maps/Route102/scripts.pory"
	.string "What are you looking at?$"

Route102_Clear_Text_0:
# 132 "data/maps/Route102/scripts.pory"
	.string "Level cap has increased to 12.$"

Route102_EventScript_RouteClearItem_Text_0:
# 143 "data/maps/Route102/scripts.pory"
	.string "Would you like to receive the route\n"
	.string "rewards?$"

Route102_EventScript_RouteClearItem_Text_1:
# 152 "data/maps/Route102/scripts.pory"
	.string "No items were taken.$"

Route_102_EventScript_BarrierText_Text_0:
# 163 "data/maps/Route102/scripts.pory"
	.string "This pokemon seems disturbed by the\n"
	.string "ruckus the trainers are causing in it's\l"
	.string "route. I am sure it will calm down if they\l"
	.string "are defeated.$"
