Basinville_StartingHouse_MapScripts::
	.byte 0


Basinville_StartingHouse_Shiori::
# 4 "data/maps/Basinville_StartingHouse/scripts.pory"
	lock
# 5 "data/maps/Basinville_StartingHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Basinville_StartingHouse_Shiori_2
Basinville_StartingHouse_Shiori_1:
# 8 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 9 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriRegular, MSGBOX_YESNO
# 10 "data/maps/Basinville_StartingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Basinville_StartingHouse_Shiori_5
Basinville_StartingHouse_Shiori_4:
# 13 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 14 "data/maps/Basinville_StartingHouse/scripts.pory"
	release
	end

Basinville_StartingHouse_Shiori_2:
# 6 "data/maps/Basinville_StartingHouse/scripts.pory"
	goto Basinville_StartingHouse_Shiori_StartingOut
	goto Basinville_StartingHouse_Shiori_1

Basinville_StartingHouse_Shiori_5:
# 11 "data/maps/Basinville_StartingHouse/scripts.pory"
	goto Basinville_StartingHouse_Shiori_WaterShop
	goto Basinville_StartingHouse_Shiori_4


Basinville_StartingHouse_Shiori_StartingOut::
# 19 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 20 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSpeechStart
# 21 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 22 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 23 "data/maps/Basinville_StartingHouse/scripts.pory"
	givemon SPECIES_CHIBI_STAR, 10, ITEM_GEYSER_WATER, ITEM_TOHO_ORB
# 24 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 25 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 26 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 27 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSpeechStart2
# 28 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 29 "data/maps/Basinville_StartingHouse/scripts.pory"
	release
	end


Basinville_StartingHouse_Shiori_WaterShop::
# 34 "data/maps/Basinville_StartingHouse/scripts.pory"
	message Basinville_StartingHouse_Text_ShioriShop
# 35 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmessage
# 36 "data/maps/Basinville_StartingHouse/scripts.pory"
	pokemart Basinville_StartingHouse_Shiori_WaterShopItems
# 37 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 38 "data/maps/Basinville_StartingHouse/scripts.pory"
	release
	end


	.align 2
# 42 "data/maps/Basinville_StartingHouse/scripts.pory"
Basinville_StartingHouse_Shiori_WaterShopItems:
# 43 "data/maps/Basinville_StartingHouse/scripts.pory"
	.2byte ITEM_GEYSER_WATER
	.2byte ITEM_NONE

Basinville_StartingHouse_Text_ShioriName::
# 46 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Shiori$"

Basinville_StartingHouse_Text_ShioriSpeechStart::
# 50 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Heya! {PLAYER}, was it? Well, welcome\n"
	.string "to the new village that is Basinville.\p"
	.string "Probably a new sight for you, huh?\p"
	.string "Well, as it turns out, my friends Bae and\n"
	.string "Cecilia wanted to go here to settle\l"
	.string "which was better, coffee or tea.\p"
	.string "I brought you here just in case as\n"
	.string "backup, in case things go wrong.\p"
	.string "Either way, this village does seem to\n"
	.string "live with these things called Puppets,\l"
	.string "and they were kind enough to give us\l"
	.string "one for each of us.\p"
	.string "Here, I have this Puppet for you, as well\n"
	.string "as what seems to be a Dex for archiving\l"
	.string "what you find.$"

Basinville_StartingHouse_Text_YouGotStuff::
# 59 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "You got$"

Basinville_StartingHouse_Text_ShioriSpeechStart2::
# 63 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Oh yeah, your Puppets can follow you as\n"
	.string "well.\p"
	.string "It just seems a bit cute seeing your\n"
	.string "little fellas following you along with\l"
	.string "this little village here\p"
	.string "By the way, Bae and Cecelia brought\n"
	.string "some of their gang as well to help out,\l"
	.string "even setting down shops for the\l"
	.string "villagers here.\p"
	.string "Me personally, I only care about my\n"
	.string "water here, and you should too.\p"
	.string "You should let the villagers know what\n"
	.string "you want to drink around here. Maybe\l"
	.string "they can help you out with stuff around\l"
	.string "here.\p"
	.string "I'll be setting down a shop soon here in\n"
	.string "case you want some good old water to\l"
	.string "drink.$"

Basinville_StartingHouse_Text_ShioriRegular::
# 72 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Shiorin.$"

Basinville_StartingHouse_Text_ShioriRegular2::
# 76 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Have a nice day in the village then.$"

Basinville_StartingHouse_Text_ShioriShop::
# 80 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Well, my waters are here if you wanna\n"
	.string "buy any.$"
