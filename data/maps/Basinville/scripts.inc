Basinville_MapScripts::
# 22 "data/maps/Basinville/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Basinville_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Basinville_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/Basinville/scripts.pory"
	map_script_2 VAR_BASINVILLE_STATE, 0, Basinville_EventScript_IntroCoffeeVsTea
	.2byte 0


Basinville_EventScript_IntroCoffeeVsTea::
# 28 "data/maps/Basinville/scripts.pory"
	lockall
# 29 "data/maps/Basinville/scripts.pory"
	setspeakername Basinville_Text_CeciliaName
# 30 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_HeyPlayer
# 31 "data/maps/Basinville/scripts.pory"
	setvar VAR_BASINVILLE_STATE, 1
# 32 "data/maps/Basinville/scripts.pory"
	releaseall
	end


Basinville_EventScript_HakosBaelz::
# 37 "data/maps/Basinville/scripts.pory"
	lock
# 38 "data/maps/Basinville/scripts.pory"
	faceplayer
# 39 "data/maps/Basinville/scripts.pory"
	setspeakername Basinville_Text_BaelzName
# 40 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_EventScript_HakosBaelz_Text_0
# 41 "data/maps/Basinville/scripts.pory"
	release
	end


Basinville_EventScript_CeciliaImmergreen::
# 46 "data/maps/Basinville/scripts.pory"
	lock
# 47 "data/maps/Basinville/scripts.pory"
	faceplayer
# 48 "data/maps/Basinville/scripts.pory"
	setspeakername Basinville_Text_CeciliaName
# 49 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_EventScript_HakosBaelz_Text_0
# 50 "data/maps/Basinville/scripts.pory"
	release
	end


Basinville_EventScript_BobOmb::
# 55 "data/maps/Basinville/scripts.pory"
	lock
# 56 "data/maps/Basinville/scripts.pory"
	faceplayer
# 57 "data/maps/Basinville/scripts.pory"
	setspeakername Basinville_Text_BobOmbName
# 58 "data/maps/Basinville/scripts.pory"
	message Basinville_Text_BobOmbShopIntro
# 59 "data/maps/Basinville/scripts.pory"
	waitmessage
Basinville_EventScript_BobOmb_2:
# 61 "data/maps/Basinville/scripts.pory"
	call Basinville_EventScript_PrepareUTShopMultichoice
# 62 "data/maps/Basinville/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Basinville_EventScript_BobOmb_5
# 65 "data/maps/Basinville/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/Basinville/scripts.pory"
	case 0, Basinville_EventScript_BobOmb_9
# 68 "data/maps/Basinville/scripts.pory"
	case 1, Basinville_EventScript_BobOmb_10
# 70 "data/maps/Basinville/scripts.pory"
	case 2, Basinville_EventScript_BobOmb_11
Basinville_EventScript_BobOmb_7:
# 73 "data/maps/Basinville/scripts.pory"
	message Basinville_Text_BobOmbShopKeep
# 74 "data/maps/Basinville/scripts.pory"
	waitmessage
	goto Basinville_EventScript_BobOmb_2

Basinville_EventScript_BobOmb_1:
# 76 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_BobOmbShopExit
# 77 "data/maps/Basinville/scripts.pory"
	release
	end

Basinville_EventScript_BobOmb_5:
	goto Basinville_EventScript_BobOmb_1

Basinville_EventScript_BobOmb_9:
# 67 "data/maps/Basinville/scripts.pory"
	call Basinville_EventScript_BobOmb_Buy
	goto Basinville_EventScript_BobOmb_7

Basinville_EventScript_BobOmb_10:
# 69 "data/maps/Basinville/scripts.pory"
	call Basinville_EventScript_BobOmb_Sell
	goto Basinville_EventScript_BobOmb_7

Basinville_EventScript_BobOmb_11:
# 71 "data/maps/Basinville/scripts.pory"
	call Basinville_EventScript_BobOmb_Talk
	goto Basinville_EventScript_BobOmb_7


Basinville_EventScript_BobOmb_Buy::
# 82 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_BobOmbShopBuy
# 83 "data/maps/Basinville/scripts.pory"
	buyonlymart Basinville_Mart_BobOmb
	return


Basinville_EventScript_BobOmb_Sell::
# 88 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_BobOmbShopSell
	return


Basinville_EventScript_BobOmb_Talk::
Basinville_EventScript_BobOmb_Talk_2:
# 94 "data/maps/Basinville/scripts.pory"
	message Basinville_Text_BobOmbShopTalk
# 95 "data/maps/Basinville/scripts.pory"
	waitmessage
# 96 "data/maps/Basinville/scripts.pory"
	call Basinville_EventScript_PrepareBobOmbTalkMultichoice
# 97 "data/maps/Basinville/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt Basinville_EventScript_BobOmb_Talk_5
# 100 "data/maps/Basinville/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/Basinville/scripts.pory"
	case 0, Basinville_EventScript_BobOmb_Talk_8
# 103 "data/maps/Basinville/scripts.pory"
	case 1, Basinville_EventScript_BobOmb_Talk_9
# 105 "data/maps/Basinville/scripts.pory"
	case 2, Basinville_EventScript_BobOmb_Talk_10
# 107 "data/maps/Basinville/scripts.pory"
	case 3, Basinville_EventScript_BobOmb_Talk_11
	goto Basinville_EventScript_BobOmb_Talk_2

Basinville_EventScript_BobOmb_Talk_1:
	return

Basinville_EventScript_BobOmb_Talk_5:
	goto Basinville_EventScript_BobOmb_Talk_1

Basinville_EventScript_BobOmb_Talk_8:
# 102 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_BobOmbShopTalk_Cecilia
	goto Basinville_EventScript_BobOmb_Talk_2

Basinville_EventScript_BobOmb_Talk_9:
# 104 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_BobOmbShopTalk_DoingHere
	goto Basinville_EventScript_BobOmb_Talk_2

Basinville_EventScript_BobOmb_Talk_10:
# 106 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_BobOmbShopTalk_Tea
	goto Basinville_EventScript_BobOmb_Talk_2

Basinville_EventScript_BobOmb_Talk_11:
# 108 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_Text_BobOmbShopTalk_Coffee
	goto Basinville_EventScript_BobOmb_Talk_2


Basinville_EventScript_StupidRat::
# 115 "data/maps/Basinville/scripts.pory"
	lock
# 116 "data/maps/Basinville/scripts.pory"
	faceplayer
# 117 "data/maps/Basinville/scripts.pory"
	setspeakername Basinville_Text_StupidRatName
# 118 "data/maps/Basinville/scripts.pory"
	drawmugshot MUGSHOT_STUPID_RAT
# 119 "data/maps/Basinville/scripts.pory"
	msgbox Basinville_EventScript_HakosBaelz_Text_0
# 120 "data/maps/Basinville/scripts.pory"
	clearmugshot
# 121 "data/maps/Basinville/scripts.pory"
	release
	end


Basinville_EventScript_PrepareUTShopMultichoice::
# 126 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_Buy, 0
# 127 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_Sell, 1
# 128 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_Talk, 2
# 129 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_Exit, 3
# 130 "data/maps/Basinville/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, NULL
	return


Basinville_EventScript_PrepareBobOmbTalkMultichoice::
# 135 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_CeciliaName, 0
# 136 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_DoingHere, 1
# 137 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_Tea, 2
# 138 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_Coffee, 3
# 139 "data/maps/Basinville/scripts.pory"
	dynmultipush Basinville_Text_Exit, 4
# 140 "data/maps/Basinville/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


	.align 2
# 144 "data/maps/Basinville/scripts.pory"
Basinville_Mart_BobOmb:
# 145 "data/maps/Basinville/scripts.pory"
	.2byte ITEM_SCARLET_TEA
	.2byte ITEM_NONE

Basinville_EventScript_HakosBaelz_Text_0:
# 40 "data/maps/Basinville/scripts.pory"
	.string "Among Us$"

Basinville_Text_Buy::
# 148 "data/maps/Basinville/scripts.pory"
	.string "Buy$"

Basinville_Text_Sell::
# 152 "data/maps/Basinville/scripts.pory"
	.string "Sell$"

Basinville_Text_Talk::
# 156 "data/maps/Basinville/scripts.pory"
	.string "Talk$"

Basinville_Text_Exit::
# 160 "data/maps/Basinville/scripts.pory"
	.string "Exit$"

Basinville_Text_Tea::
# 164 "data/maps/Basinville/scripts.pory"
	.string "Tea$"

Basinville_Text_Coffee::
# 168 "data/maps/Basinville/scripts.pory"
	.string "Coffee$"

Basinville_Text_DoingHere::
# 172 "data/maps/Basinville/scripts.pory"
	.string "Doing Here$"

Basinville_Text_StupidRatName::
# 176 "data/maps/Basinville/scripts.pory"
	.string "Stupid Rat$"

Basinville_Text_BobOmbName::
# 180 "data/maps/Basinville/scripts.pory"
	.string "Bob-omb$"

Basinville_Text_BaelzName::
# 184 "data/maps/Basinville/scripts.pory"
	.string "Baelz$"

Basinville_Text_CeciliaName::
# 188 "data/maps/Basinville/scripts.pory"
	.string "Cecilia$"

Basinville_Text_BobOmbShopIntro::
# 192 "data/maps/Basinville/scripts.pory"
	.string "Heya, welcome to our little Tea Shop!\n"
	.string "Glad to see someone who likes Tea here.$"

Basinville_Text_BobOmbShopBuy::
# 196 "data/maps/Basinville/scripts.pory"
	.string "Sure, come look at we have here.$"

Basinville_Text_BobOmbShopSell::
# 200 "data/maps/Basinville/scripts.pory"
	.string "Ehh, we are just a Tea shop here, we\n"
	.string "don't really have much to give you in\l"
	.string "return for what you have.\p"
	.string "Besides, we'd only accept Tea here\n"
	.string "anyways.$"

Basinville_Text_BobOmbShopTalk::
# 205 "data/maps/Basinville/scripts.pory"
	.string "I've got time for some chit-chat here.$"

Basinville_Text_BobOmbShopTalk_Cecilia::
# 209 "data/maps/Basinville/scripts.pory"
	.string "Cecilia...\p"
	.string "She certainly is an interesting person\n"
	.string "to be around, that I will say.\p"
	.string "She is certainly charming in her own\n"
	.string "way, although don't be fooled by her\l"
	.string "appearance and think she's just a\l"
	.string "regular lady.\p"
	.string "$"

Basinville_Text_BobOmbShopTalk_DoingHere::
# 214 "data/maps/Basinville/scripts.pory"
	.string "So apparently, Cecilia and Bae wanted\n"
	.string "to make a bet on whether random people\l"
	.string "would prefer Tea or Coffee.\p"
	.string "Some weird ironing out the details\n"
	.string "later, they decided on this random\l"
	.string "village here since the people here have\l"
	.string "water to make either of those things.\p"
	.string "It took a decent amount to get here,\n"
	.string "considering she can't drive, so I had to\l"
	.string "take up the mantle of getting us here.\p"
	.string "At the very least, we still have a bunch\n"
	.string "of Tea to go around for the village\l"
	.string "here.$"

Basinville_Text_BobOmbShopTalk_Tea::
# 222 "data/maps/Basinville/scripts.pory"
	.string "Man, Tea's just my kind of drink of\n"
	.string "choice.\p"
	.string "I wouldn't be doing this shop if it\n"
	.string "wasn't the case.\p"
	.string "It's just a good boost of energy to get\n"
	.string "me through the day whenever I need it.\p"
	.string "It's pretty simple to make as well, which\n"
	.string "I bet this village would appreciate\l"
	.string "here, especially with their farm they\l"
	.string "have.\p"
	.string "They also can have different sweet\n"
	.string "flavors as well depending on what type\l"
	.string "of leaves you put on it.\p"
	.string "Ahh, tea, my beloved.$"

Basinville_Text_BobOmbShopTalk_Coffee::
# 231 "data/maps/Basinville/scripts.pory"
	.string "............\p"
	.string "Very interesting topic you bring up.\p"
	.string "Coffee, it's just not my thing at all,\n"
	.string "not anywhere near Tea in my opinion.\p"
	.string "While yes, it does bring that energy\n"
	.string "quicker and with much more force, it\l"
	.string "isn't always the thing you need.\p"
	.string "The crash once that energy boost is\n"
	.string "over as well, it's pretty terrible.\p"
	.string "It's just a lot more complicated to be\n"
	.string "drinking Coffee than Tea, personally.$"

Basinville_Text_BobOmbShopKeep::
# 240 "data/maps/Basinville/scripts.pory"
	.string "Nice to see a Tea enthusiast here.$"

Basinville_Text_BobOmbShopExit::
# 244 "data/maps/Basinville/scripts.pory"
	.string "Hope to see you again, fellow Otomo.$"

Basinville_Text_HeyPlayer::
# 248 "data/maps/Basinville/scripts.pory"
	.string "Hey you, {PLAYER}.$"
