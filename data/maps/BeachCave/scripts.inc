# 1 "data/maps/BeachCave/scripts.pory"

# 2 "data/maps/BeachCave/scripts.pory"
BeachCave_MapScripts::
# 3 "data/maps/BeachCave/scripts.pory"
	.byte 0

BeachCaveLeafTest::
# 8 "data/maps/BeachCave/scripts.pory"
	lockall
# 9 "data/maps/BeachCave/scripts.pory"
	faceplayer
# 10 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCaveLeafTest_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_CINDY_2, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 12 "data/maps/BeachCave/scripts.pory"
	release
	end


BeachCaveLeafTest_Text_0:
# 10 "data/maps/BeachCave/scripts.pory"
	.string "Lets battle!$"
