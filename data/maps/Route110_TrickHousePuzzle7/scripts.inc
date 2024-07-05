# 1 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle7_OnTransition
# 4 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.byte 0
# 5 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 6 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Puzzle Room 7 in RSE uses whatever puzzle Mossdeep Gym uses
# 7 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Because Mossdeep Gym was redesigned for Emerald, theres a good deal of leftover script from the old R/S puzzle
# 8 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 9 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles::
# 10 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 11 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 12 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 13 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 14 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 15 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 16 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 17 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Leftover from R/S, none of the below metatile scripts are ever called
# 18 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn::
# 19 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 20 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 21 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 22 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 23 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn::
# 24 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 25 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 26 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 27 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 28 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn::
# 29 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 30 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 31 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 32 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 33 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn::
# 34 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right_Alt, FALSE
# 35 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 36 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 37 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 38 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn::
# 39 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 40 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 41 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 42 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 43 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff::
# 44 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 45 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 46 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 47 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 48 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff::
# 49 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 50 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 51 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 52 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 53 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff::
# 54 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 55 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 56 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 57 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff::
# 59 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left_Alt, FALSE
# 60 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 61 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 62 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 63 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff::
# 64 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 65 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 66 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 67 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 68 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnTransition:
# 69 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 70 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 71 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 72 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 73 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 74 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 75 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 76 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportedTransition::
# 77 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 78 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 79 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_ClearState2::
# 80 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_BASINVILLE_STATE, 0
# 81 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 82 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 83 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Scroll::
# 84 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 85 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle7_EventScript_FoundScroll
# 86 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 87 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 88 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 89 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_FoundScroll::
# 90 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 1
# 91 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 92 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 93 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 94 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused, leftover from R/S
# 95 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportPad::
# 96 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 97 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_BASINVILLE_STATE, 1
# 98 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	warpteleport MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 3, 19
# 99 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitstate
# 100 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 101 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 102 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 103 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 104 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1::
# 105 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 106 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 107 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 108 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff
# 109 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 110 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 111 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1On
# 112 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off
# 113 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 114 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 115 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2::
# 116 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 117 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 118 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 119 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff
# 120 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 122 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2On
# 123 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off
# 124 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 125 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 126 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3::
# 127 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 128 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 129 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 130 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff
# 131 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 132 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 133 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3On
# 134 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off
# 135 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 136 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 137 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4::
# 138 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 139 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 140 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 141 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff
# 142 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 143 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 144 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4On
# 145 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off
# 146 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 147 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 148 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5::
# 149 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 150 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 151 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 152 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff
# 153 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 154 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 155 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5On
# 156 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off
# 157 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 158 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 159 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 160 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1On::
# 161 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 162 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 163 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 164 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 165 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off::
# 166 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 167 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 168 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 169 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 170 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2On::
# 171 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 172 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 173 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 174 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 175 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off::
# 176 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 177 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 178 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 179 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 180 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3On::
# 181 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 182 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 183 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 184 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 185 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off::
# 186 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 187 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 188 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 189 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 190 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4On::
# 191 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 192 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 193 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 194 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 195 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off::
# 196 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 197 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 198 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 199 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 200 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5On::
# 201 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 202 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 203 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 204 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 205 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off::
# 206 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 207 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 208 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 209 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 210 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ From here is where the new, actually used puzzle scripts begin
# 211 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_YellowButton::
# 212 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 213 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 214 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 215 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 216 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 0
# 217 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 219 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 221 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 222 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 223 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_BlueButton::
# 224 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 225 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 226 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 227 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 228 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 1
# 229 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 231 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 233 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 234 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 235 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_GreenButton::
# 236 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 237 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 238 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 239 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 240 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 2
# 241 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 243 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 245 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 246 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 247 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_PurpleButton::
# 248 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 249 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 250 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 251 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 252 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 3
# 253 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 255 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 257 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 258 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 259 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused
# 260 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_RedButton::
# 261 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 262 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 263 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 264 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 265 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 4
# 266 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 268 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 270 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 271 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 272 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Joshua::
# 273 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, Route110_TrickHousePuzzle7_Text_JoshuaIntro, Route110_TrickHousePuzzle7_Text_JoshuaDefeat
# 274 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 276 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 277 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Patricia::
# 278 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, Route110_TrickHousePuzzle7_Text_PatriciaIntro, Route110_TrickHousePuzzle7_Text_PatriciaDefeat
# 279 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 281 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 282 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alexis::
# 283 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIS, Route110_TrickHousePuzzle7_Text_AlexisIntro, Route110_TrickHousePuzzle7_Text_AlexisDefeat
# 284 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 286 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 287 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Mariela::
# 288 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_MARIELA, Route110_TrickHousePuzzle7_Text_MarielaIntro, Route110_TrickHousePuzzle7_Text_MarielaDefeat
# 289 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_MarielaPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 291 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 292 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alvaro::
# 293 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, Route110_TrickHousePuzzle7_Text_AlvaroIntro, Route110_TrickHousePuzzle7_Text_AlvaroDefeat
# 294 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlvaroPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 296 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 297 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Everett::
# 298 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_EVERETT, Route110_TrickHousePuzzle7_Text_EverettIntro, Route110_TrickHousePuzzle7_Text_EverettDefeat
# 299 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_EverettPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 301 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 302 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened::
# 303 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 304 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "on the door.\p"
# 305 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "“TRICK MASTER is huggable.”\n"
# 306 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "… … … … … … … …\p"
# 307 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The lock clicked open!$"
# 308 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 309 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaIntro:
# 310 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The TRICK MASTER always vanishes\n"
# 311 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "like smoke. How does he do it?$"
# 312 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 313 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaDefeat:
# 314 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Aiyeeeh! You're much too strong!\n"
# 315 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "How do you do it?$"
# 316 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 317 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaPostBattle:
# 318 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I wish I could appear and disappear as\n"
# 319 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "if I were smoke, too.$"
# 320 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 321 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaIntro:
# 322 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Going around the same spot…\n"
# 323 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It begets ill fortune…$"
# 324 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 325 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaDefeat:
# 326 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Defeated!\n"
# 327 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's a bad sign…$"
# 328 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 329 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaPostBattle:
# 330 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I've circled the same spot over ten\n"
# 331 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "times now… It's ill fortune…$"
# 332 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 333 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisIntro:
# 334 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Whoever wins will get through here\n"
# 335 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "first. That's the feeling I get.$"
# 336 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 337 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisDefeat:
# 338 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh!\n"
# 339 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, go ahead, then!$"
# 340 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 341 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisPostBattle:
# 342 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're solving all the puzzles in the\n"
# 343 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "TRICK HOUSE. That's the feeling I get.$"
# 344 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 345 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaIntro:
# 346 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Nufufufu, here at last!\n"
# 347 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Let's get right with it!$"
# 348 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 349 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaDefeat:
# 350 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're so casual about winning!$"
# 351 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 352 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaPostBattle:
# 353 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Humph! I'm not upset!\n"
# 354 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Not me!$"
# 355 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 356 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroIntro:
# 357 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I ever so closely watched you coming!$"
# 358 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 359 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroDefeat:
# 360 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "This outcome I didn't see coming…$"
# 361 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 362 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroPostBattle:
# 363 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, anyway, we both picked a weird\n"
# 364 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "place to get acquainted.\p"
# 365 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "As one weirdo to another,\n"
# 366 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "let's do our best!$"
# 367 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 368 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettIntro:
# 369 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's awfully cramped in here…$"
# 370 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 371 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettDefeat:
# 372 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh, yes, strong you are.$"
# 373 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 374 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettPostBattle:
# 375 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I was hoping to switch places with you\n"
# 376 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "when I beat you, but…$"
