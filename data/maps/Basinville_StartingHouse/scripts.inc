Basinville_StartingHouse_MapScripts::
	.byte 0


Basinville_StartingHouse_Shiori::
# 12 "data/maps/Basinville_StartingHouse/scripts.pory"
	lock
# 13 "data/maps/Basinville_StartingHouse/scripts.pory"
	faceplayer
# 14 "data/maps/Basinville_StartingHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Basinville_StartingHouse_Shiori_2
# 19 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 20 "data/maps/Basinville_StartingHouse/scripts.pory"
	message Basinville_StartingHouse_Text_ShioriRegular
# 21 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmessage
Basinville_StartingHouse_Shiori_5:
# 23 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_PrepareMultichoice
# 24 "data/maps/Basinville_StartingHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt Basinville_StartingHouse_Shiori_8
# 27 "data/maps/Basinville_StartingHouse/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 0, Basinville_StartingHouse_Shiori_12
# 30 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 1, Basinville_StartingHouse_Shiori_13
# 32 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 2, Basinville_StartingHouse_Shiori_14
# 34 "data/maps/Basinville_StartingHouse/scripts.pory"
	case 3, Basinville_StartingHouse_Shiori_15
Basinville_StartingHouse_Shiori_10:
# 37 "data/maps/Basinville_StartingHouse/scripts.pory"
	message Basinville_StartingHouse_Text_ShioriRegularAgain
# 38 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmessage
	goto Basinville_StartingHouse_Shiori_5

Basinville_StartingHouse_Shiori_2:
# 15 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_StartingOut
# 16 "data/maps/Basinville_StartingHouse/scripts.pory"
	release
	end

Basinville_StartingHouse_Shiori_4:
# 40 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriRegular2
# 41 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 42 "data/maps/Basinville_StartingHouse/scripts.pory"
	release
	end

Basinville_StartingHouse_Shiori_8:
	goto Basinville_StartingHouse_Shiori_4

Basinville_StartingHouse_Shiori_12:
# 29 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_HealParty
	goto Basinville_StartingHouse_Shiori_10

Basinville_StartingHouse_Shiori_13:
# 31 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_WaterShop
	goto Basinville_StartingHouse_Shiori_10

Basinville_StartingHouse_Shiori_14:
# 33 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_SellItems
	goto Basinville_StartingHouse_Shiori_10

Basinville_StartingHouse_Shiori_15:
# 35 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_Tangent
	goto Basinville_StartingHouse_Shiori_10


Basinville_StartingHouse_Shiori_PrepareMultichoice::
# 47 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_HealParty, 0
# 48 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_WaterShop, 1
# 49 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_SellItems, 2
# 50 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_Tangent, 3
# 51 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultipush Basinville_StartingHouse_Text_Nothing, 4
# 52 "data/maps/Basinville_StartingHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Basinville_StartingHouse_Shiori_StartingOut::
# 57 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 58 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSpeechStart
# 59 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
# 60 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 61 "data/maps/Basinville_StartingHouse/scripts.pory"
	givemon SPECIES_CHIBI_STAR, 10, ITEM_GEYSER_WATER
# 62 "data/maps/Basinville_StartingHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/Basinville_StartingHouse/scripts.pory"
	message Basinville_StartingHouse_Text_YouGotCStar
# 64 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmessage
# 65 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitfanfare
# 66 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_WouldLikeToNickname, MSGBOX_YESNO
# 67 "data/maps/Basinville_StartingHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Basinville_StartingHouse_Shiori_StartingOut_2
Basinville_StartingHouse_Shiori_StartingOut_1:
# 73 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 74 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 75 "data/maps/Basinville_StartingHouse/scripts.pory"
	setflag FLAG_SCRIPTED_LOSS
# 76 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 77 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSpeechStart2
# 78 "data/maps/Basinville_StartingHouse/scripts.pory"
	hidespeakername
	return

Basinville_StartingHouse_Shiori_StartingOut_2:
# 68 "data/maps/Basinville_StartingHouse/scripts.pory"
	setvar VAR_0x8004, 0
# 69 "data/maps/Basinville_StartingHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 70 "data/maps/Basinville_StartingHouse/scripts.pory"
	special ChangePokemonNickname
# 71 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitstate
	goto Basinville_StartingHouse_Shiori_StartingOut_1


Basinville_StartingHouse_Shiori_WaitStartingOut::
# 83 "data/maps/Basinville_StartingHouse/scripts.pory"
	lockall
# 84 "data/maps/Basinville_StartingHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Basinville_StartingHouse_PlayerLookUp
# 85 "data/maps/Basinville_StartingHouse/scripts.pory"
	applymovement 1, Basinville_StartingHouse_ShioriMoveInPlace
# 86 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmovement 0
# 87 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 88 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSeeYou
# 89 "data/maps/Basinville_StartingHouse/scripts.pory"
	closemessage
# 90 "data/maps/Basinville_StartingHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Basinville_StartingHouse_PlayerWalkUp
# 91 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitmovement 0
# 92 "data/maps/Basinville_StartingHouse/scripts.pory"
	call Basinville_StartingHouse_Shiori_StartingOut
# 93 "data/maps/Basinville_StartingHouse/scripts.pory"
	releaseall
	end


Basinville_StartingHouse_Shiori_HealParty::
# 98 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriHeal
# 99 "data/maps/Basinville_StartingHouse/scripts.pory"
	closemessage
# 100 "data/maps/Basinville_StartingHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/Basinville_StartingHouse/scripts.pory"
	playfanfare MUS_HEAL
# 102 "data/maps/Basinville_StartingHouse/scripts.pory"
	waitfanfare
# 103 "data/maps/Basinville_StartingHouse/scripts.pory"
	special HealPlayerParty
# 104 "data/maps/Basinville_StartingHouse/scripts.pory"
	callnative UpdateFollowingPokemon
# 105 "data/maps/Basinville_StartingHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 106 "data/maps/Basinville_StartingHouse/scripts.pory"
	setspeakername Basinville_StartingHouse_Text_ShioriName
# 107 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriHeal2
	return


Basinville_StartingHouse_Shiori_WaterShop::
# 112 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriShop
# 113 "data/maps/Basinville_StartingHouse/scripts.pory"
	buyonlymart Basinville_StartingHouse_Shiori_WaterShopItems
	return


Basinville_StartingHouse_Shiori_SellItems::
# 118 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriSell
# 119 "data/maps/Basinville_StartingHouse/scripts.pory"
	itemseller
	return


Basinville_StartingHouse_Shiori_Tangent::
# 124 "data/maps/Basinville_StartingHouse/scripts.pory"
	msgbox Basinville_StartingHouse_Text_ShioriTangent
	return


# 128 "data/maps/Basinville_StartingHouse/scripts.pory"
Basinville_StartingHouse_PlayerLookUp:
# 129 "data/maps/Basinville_StartingHouse/scripts.pory"
	face_up
	step_end

# 132 "data/maps/Basinville_StartingHouse/scripts.pory"
Basinville_StartingHouse_ShioriMoveInPlace:
# 133 "data/maps/Basinville_StartingHouse/scripts.pory"
	walk_in_place_down
	step_end

# 136 "data/maps/Basinville_StartingHouse/scripts.pory"
Basinville_StartingHouse_PlayerWalkUp:
# 137 "data/maps/Basinville_StartingHouse/scripts.pory"
	walk_up
# 137 "data/maps/Basinville_StartingHouse/scripts.pory"
	walk_up
# 137 "data/maps/Basinville_StartingHouse/scripts.pory"
	walk_up
	step_end

	.align 2
# 140 "data/maps/Basinville_StartingHouse/scripts.pory"
Basinville_StartingHouse_Shiori_WaterShopItems:
# 141 "data/maps/Basinville_StartingHouse/scripts.pory"
	.2byte ITEM_GEYSER_WATER
	.2byte ITEM_NONE

Basinville_StartingHouse_Text_ShioriName::
# 144 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Shiori$"

Basinville_StartingHouse_Text_HealParty::
# 148 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Heal Party$"

Basinville_StartingHouse_Text_WaterShop::
# 152 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Water Shop$"

Basinville_StartingHouse_Text_SellItems::
# 156 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Sell Items$"

Basinville_StartingHouse_Text_Tangent::
# 160 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Tangent$"

Basinville_StartingHouse_Text_Nothing::
# 164 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Nothing$"

Basinville_StartingHouse_Text_Nevermind::
# 168 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Nevermind$"

Basinville_StartingHouse_Text_ShioriSeeYou::
# 172 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Hey, you just got here, what's the rush?\p"
	.string "You got some stuff from me that you're\n"
	.string "missing here.$"

Basinville_StartingHouse_Text_ShioriSpeechStart::
# 177 "data/maps/Basinville_StartingHouse/scripts.pory"
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

Basinville_StartingHouse_Text_YouGotCStar::
# 186 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "You got your own CStar along with a Dex!$"

Basinville_StartingHouse_Text_WouldLikeToNickname::
# 190 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Would you like to nickname your CStar?$"

Basinville_StartingHouse_Text_ShioriSpeechStart2::
# 194 "data/maps/Basinville_StartingHouse/scripts.pory"
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
# 203 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Heya, anything you want me to do right\n"
	.string "now?$"

Basinville_StartingHouse_Text_ShioriRegularAgain::
# 207 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Alright, anything else you want me to do\n"
	.string "right now?$"

Basinville_StartingHouse_Text_ShioriRegular2::
# 211 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Have a nice day in the village then.$"

Basinville_StartingHouse_Text_ShioriHeal::
# 215 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Sure, let me just help your party out\n"
	.string "then.$"

Basinville_StartingHouse_Text_ShioriHeal2::
# 219 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "There, your Puppets should be all\n"
	.string "better now.$"

Basinville_StartingHouse_Text_ShioriShop::
# 223 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Well, my waters are here if you wanna\n"
	.string "buy any.$"

Basinville_StartingHouse_Text_ShioriSell::
# 227 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Alright, let me see what you have to\n"
	.string "offer then.$"

Basinville_StartingHouse_Text_ShioriTangent::
# 231 "data/maps/Basinville_StartingHouse/scripts.pory"
	.string "Yap yap yap.$"
