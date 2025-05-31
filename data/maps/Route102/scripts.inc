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

# 11 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 12 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 13 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 14 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 15 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 16 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 17 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 18 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 19 "data/maps/Route102/scripts.pory"
	release
# 20 "data/maps/Route102/scripts.pory"
	end
# 21 "data/maps/Route102/scripts.pory"

# 22 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 23 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 24 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 26 "data/maps/Route102/scripts.pory"
	release
# 27 "data/maps/Route102/scripts.pory"
	end
# 28 "data/maps/Route102/scripts.pory"

# 29 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 30 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 31 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 32 "data/maps/Route102/scripts.pory"
	release
# 33 "data/maps/Route102/scripts.pory"
	end
# 34 "data/maps/Route102/scripts.pory"

# 35 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 36 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 37 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 38 "data/maps/Route102/scripts.pory"
	release
# 39 "data/maps/Route102/scripts.pory"
	end
# 40 "data/maps/Route102/scripts.pory"

# 41 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 42 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 43 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 44 "data/maps/Route102/scripts.pory"
	release
# 45 "data/maps/Route102/scripts.pory"
	end
# 46 "data/maps/Route102/scripts.pory"

# 47 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 48 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 49 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route102/scripts.pory"
	end
# 51 "data/maps/Route102/scripts.pory"

# 52 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 53 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 54 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route102/scripts.pory"
	end
# 56 "data/maps/Route102/scripts.pory"

# 57 "data/maps/Route102/scripts.pory"

# 58 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 59 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 60 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route102/scripts.pory"
	end
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 64 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 65 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 66 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 67 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 68 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 69 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 70 "data/maps/Route102/scripts.pory"

# 71 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 72 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 73 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 74 "data/maps/Route102/scripts.pory"

# 75 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 76 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 77 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 78 "data/maps/Route102/scripts.pory"

# 79 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 80 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 81 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 82 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 83 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 84 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 85 "data/maps/Route102/scripts.pory"

# 86 "data/maps/Route102/scripts.pory"

# 87 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 88 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 89 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_EventScript_RouteSignOldale::
# 95 "data/maps/Route102/scripts.pory"
	lockall
# 96 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_RouteSignOldale_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route102/scripts.pory"
	release
	end


Route102_EventScript_Tiana::
# 103 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated, Route102_Clear
# 104 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_ROUTE102_CLEAR_0x266, Route102_EventScript_Tiana_1
# 112 "data/maps/Route102/scripts.pory"
	lockall
# 113 "data/maps/Route102/scripts.pory"
	faceplayer
# 114 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana_Text_1, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_Tiana_1:
# 105 "data/maps/Route102/scripts.pory"
	lockall
# 106 "data/maps/Route102/scripts.pory"
	faceplayer
# 107 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route102/scripts.pory"
	release
	end


Route102_Clear::
# 122 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/Route102/scripts.pory"
	removeobject 10
# 124 "data/maps/Route102/scripts.pory"
	removeobject 11
# 125 "data/maps/Route102/scripts.pory"
	msgbox Route102_Clear_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 127 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE102_CLEAR_0x266
	return


Route102_EventScript_RouteClearItem::
# 135 "data/maps/Route102/scripts.pory"
	lockall
# 136 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_RouteClearItem_Text_0, MSGBOX_YESNO
# 137 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route102_EventScript_RouteClearItem_2
# 145 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_RouteClearItem_Text_1, MSGBOX_DEFAULT
Route102_EventScript_RouteClearItem_1:
# 148 "data/maps/Route102/scripts.pory"
	waitmessage
# 149 "data/maps/Route102/scripts.pory"
	releaseall
	end

Route102_EventScript_RouteClearItem_2:
# 138 "data/maps/Route102/scripts.pory"
	giveitem ITEM_ORAN_BERRY, [ 500 ]
# 139 "data/maps/Route102/scripts.pory"
	giveitem ITEM_POMEG_BERRY, [ 999 ]
# 140 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE102_GIFTS_0x267
# 141 "data/maps/Route102/scripts.pory"
	removeobject 1
	goto Route102_EventScript_RouteClearItem_1


Route_102_EventScript_BarrierText::
# 155 "data/maps/Route102/scripts.pory"
	lockall
# 156 "data/maps/Route102/scripts.pory"
	msgbox Route_102_EventScript_BarrierText_Text_0, MSGBOX_DEFAULT
# 158 "data/maps/Route102/scripts.pory"
	waitmessage
# 159 "data/maps/Route102/scripts.pory"
	releaseall
	end


Route102_EventScript_Boy::
# 164 "data/maps/Route102/scripts.pory"
	lockall
# 165 "data/maps/Route102/scripts.pory"
	faceplayer
# 166 "data/maps/Route102/scripts.pory"
	goto_if_unset FLAG_ROUTE102_GIFTS_0x267, Route102_EventScript_Boy_2
# 170 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_1, MSGBOX_DEFAULT
Route102_EventScript_Boy_1:
# 172 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_Boy_2:
# 167 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_0, MSGBOX_DEFAULT
	goto Route102_EventScript_Boy_1


Route102_EventScript_RouteSignOldale_Text_0:
# 96 "data/maps/Route102/scripts.pory"
	.string "This is the first gauntlet: Level of\n"
	.string "Trainers: 6-8. Defeat all trainers to\l"
	.string "reach Petalburg City.$"

Route102_EventScript_Tiana_Text_0:
# 107 "data/maps/Route102/scripts.pory"
	.string "Alright, I get it. I'll leave the pokemon\n"
	.string "on this route alone from now on.$"

Route102_EventScript_Tiana_Text_1:
# 114 "data/maps/Route102/scripts.pory"
	.string "What are you looking at?$"

Route102_Clear_Text_0:
# 125 "data/maps/Route102/scripts.pory"
	.string "Level cap has increased to 10.$"

Route102_EventScript_RouteClearItem_Text_0:
# 136 "data/maps/Route102/scripts.pory"
	.string "Would you like to receive the route\n"
	.string "rewards?$"

Route102_EventScript_RouteClearItem_Text_1:
# 145 "data/maps/Route102/scripts.pory"
	.string "No items were taken.$"

Route_102_EventScript_BarrierText_Text_0:
# 156 "data/maps/Route102/scripts.pory"
	.string "This pokemon seems disturbed by the\n"
	.string "ruckus the trainers are causing in it's\l"
	.string "route. I am sure it will calm down if they\l"
	.string "are defeated.$"

Route102_EventScript_Boy_Text_0:
# 167 "data/maps/Route102/scripts.pory"
	.string "These trainers have taken over the\n"
	.string "route! I wish there was something I\l"
	.string "could do.$"

Route102_EventScript_Boy_Text_1:
# 170 "data/maps/Route102/scripts.pory"
	.string "Oh boy! Thanks so much for dealing with\n"
	.string "those hooligans. I'm telling my mom\l"
	.string "about you!!$"
