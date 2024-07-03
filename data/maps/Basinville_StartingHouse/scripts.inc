Basinville_StartingHouse_MapScripts::
	.byte 0


Basinville_StartingHouse_Shiori::
# 10 "data/maps/Basinville_StartingHouse/scripts.pory"
	lock
# 11 "data/maps/Basinville_StartingHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Basinville_StartingHouse_Shiori_2
# 16 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 17 "data/maps/Basinville_StartingHouse/scripts.pory"
	message Basinville_StartingHouse_Text_ShioriRegular
# 18 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmessage
Basinville_StartingHouse_Shiori_5:
# 20 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_PrepareMultichoice
# 21 "data/maps/Basinville_StartingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt Basinville_StartingHouse_Shiori_8
# 24 "data/maps/Basinville_StartingHouse/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 0, Basinville_StartingHouse_Shiori_12
# 27 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 1, Basinville_StartingHouse_Shiori_13
# 29 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 2, Basinville_StartingHouse_Shiori_14
# 31 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 3, Basinville_StartingHouse_Shiori_15
Basinville_StartingHouse_Shiori_10:
# 34 "data/maps/Basinville_StartingHouse/scripts.pory"
	message Basinville_StartingHouse_Text_ShioriRegularAgain
# 35 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmessage
	goto Basinville_StartingHouse_Shiori_5

Basinville_StartingHouse_Shiori_2:
# 12 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_StartingOut
# 13 "data/maps/Basinville_StartingHouse/scripts.pory"
	release
	end

Basinville_StartingHouse_Shiori_4:
# 37 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriRegular2
# 38 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 39 "data/maps/Basinville_StartingHouse/scripts.pory"
	release
	end

Basinville_StartingHouse_Shiori_8:
	goto Basinville_StartingHouse_Shiori_4

Basinville_StartingHouse_Shiori_12:
# 26 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_HealParty
	goto Basinville_StartingHouse_Shiori_10

Basinville_StartingHouse_Shiori_13:
# 28 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_WaterShop
	goto Basinville_StartingHouse_Shiori_10

Basinville_StartingHouse_Shiori_14:
# 30 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_SellItems
	goto Basinville_StartingHouse_Shiori_10

Basinville_StartingHouse_Shiori_15:
# 32 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_Tangent
	goto Basinville_StartingHouse_Shiori_10


Basinville_StartingHouse_Shiori_PrepareMultichoice::
# 44 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_HealParty, 0
# 45 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_WaterShop, 1
# 46 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_SellItems, 2
# 47 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_Tangent, 3
# 48 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_Nothing, 4
# 49 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Basinville_StartingHouse_Shiori_StartingOut::
# 54 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 55 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSpeechStart
# 56 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 57 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 58 "data/maps/Basinville_StartingHouse/scripts.pory"
	givemon SPECIES_CHIBI_STAR, 10, ITEM_GEYSER_WATER
# 59 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 60 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 61 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 62 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSpeechStart2
# 63 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
	return


Basinville_StartingHouse_Shiori_HealParty::
# 68 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriHeal
# 69 "data/maps/Basinville_StartingHouse/scripts.pory"
	closemessage
# 70 "data/maps/Basinville_StartingHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Basinville_StartingHouse/scripts.pory"
	playfanfare MUS_HEAL
# 72 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitfanfare
# 73 "data/maps/Basinville_StartingHouse/scripts.pory"
	special HealPlayerParty
# 74 "data/maps/Basinville_StartingHouse/scripts.pory"
	callnative UpdateFollowingPokemon
# 75 "data/maps/Basinville_StartingHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 77 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriHeal2
	return


Basinville_StartingHouse_Shiori_WaterShop::
# 82 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriShop
# 83 "data/maps/Basinville_StartingHouse/scripts.pory"
	buyonlymart Basinville_StartingHouse_Shiori_WaterShopItems
	return


Basinville_StartingHouse_Shiori_SellItems::
# 88 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSell
# 89 "data/maps/Basinville_StartingHouse/scripts.pory"
	itemseller
	return


Basinville_StartingHouse_Shiori_Tangent::
# 94 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriTangent
	return


	.align 2
# 98 "data/maps/Basinville_StartingHouse/scripts.pory"
Basinville_StartingHouse_Shiori_WaterShopItems:
# 99 "data/maps/Basinville_StartingHouse/scripts.pory"
	.2byte ITEM_GEYSER_WATER
	.2byte ITEM_NONE

Basinville_StartingHouse_Text_ShioriName::
# 102 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Shiori$"

Basinville_StartingHouse_Text_HealParty::
# 106 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Heal Party$"

Basinville_StartingHouse_Text_WaterShop::
# 110 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Water Shop$"

Basinville_StartingHouse_Text_SellItems::
# 114 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Sell Items$"

Basinville_StartingHouse_Text_Tangent::
# 118 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Tangent$"

Basinville_StartingHouse_Text_Nothing::
# 122 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Nothing$"

Basinville_StartingHouse_Text_ShioriSpeechStart::
# 126 "data/maps/Basinville_StartingHouse/scripts.pory"
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
# 135 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "You got$"

Basinville_StartingHouse_Text_ShioriSpeechStart2::
# 139 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Oh yeah, your Puppets can follow you as\n"
	.string "well.\p"
	.string "It just seems a bit cute seeing your\n"
	.string "little fellas following you along with\l"
	.string "this little village here.\p"
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
# 148 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Heya, anything you want me to do right\n"
	.string "now?$"

Basinville_StartingHouse_Text_ShioriRegularAgain::
# 152 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Alright, anything else you want me to do\n"
	.string "right now?$"

Basinville_StartingHouse_Text_ShioriRegular2::
# 156 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Have a nice day in the village then.$"

Basinville_StartingHouse_Text_ShioriHeal::
# 160 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Sure, let me just help your party out\n"
	.string "then.$"

Basinville_StartingHouse_Text_ShioriHeal2::
# 164 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "There, your Puppets should be all\n"
	.string "better now.$"

Basinville_StartingHouse_Text_ShioriShop::
# 168 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Well, my waters are here if you wanna\n"
	.string "buy any.$"

Basinville_StartingHouse_Text_ShioriSell::
# 172 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Alright, let me see what you have to\n"
	.string "offer then.$"

Basinville_StartingHouse_Text_ShioriTangent::
# 176 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Yap yap yap.$"
