# 1 "data/maps/LostWoods/scripts.pory"

# 2 "data/maps/LostWoods/scripts.pory"
LostWoods_MapScripts::
# 3 "data/maps/LostWoods/scripts.pory"
	.byte 0

LostWoods_LittleGirl::
# 8 "data/maps/LostWoods/scripts.pory"
	lockall
# 9 "data/maps/LostWoods/scripts.pory"
	faceplayer
# 10 "data/maps/LostWoods/scripts.pory"
	msgbox LostWoods_LittleGirl_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/LostWoods/scripts.pory"
	release
	end


LostWoodsAbsolBlockade::
# 17 "data/maps/LostWoods/scripts.pory"
	lockall
# 18 "data/maps/LostWoods/scripts.pory"
	faceplayer
# 19 "data/maps/LostWoods/scripts.pory"
	msgbox LostWoodsAbsolBlockade_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/LostWoods/scripts.pory"
	release
	end


LostWoods_LittleGirl_Text_0:
# 10 "data/maps/LostWoods/scripts.pory"
	.string "A powerful pokemon lives in this forest,\n"
	.string "and other Pokemon in the forest guard\l"
	.string "it day and night. I heard it is waiting\l"
	.string "for a worthy trainer to accompany.$"

LostWoodsAbsolBlockade_Text_0:
# 19 "data/maps/LostWoods/scripts.pory"
	.string "The Absol look deep into your soul, and\n"
	.string "find you worthy. Return with 4 gym\l"
	.string "badges, and claim your right to the\l"
	.string "Pokemon they guard.$"
