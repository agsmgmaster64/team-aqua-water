#include "global.h"
#include "test/battle.h"

// Please add Hail interactions with move, item and ability effects on their respective files.
SINGLE_BATTLE_TEST("Hail deals 1/16 damage per turn")
{
    s16 hailDamage;

    GIVEN {
        PLAYER(SPECIES_PLACEHOLD2_KOSUZU);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        MESSAGE("Foe Wobbuffet is pelted by HAIL!");
        HP_BAR(opponent, captureDamage: &hailDamage);
   } THEN { EXPECT_EQ(hailDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Hail damage does not affect Ice-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_PLACEHOLD2_KOSUZU].types[0] == TYPE_ICE);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_PLACEHOLD2_KOSUZU);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        NOT MESSAGE("Foe Glalie is pelted by HAIL!");
    }
}

SINGLE_BATTLE_TEST("Hail fails if Desolate Land or Primordial Sea are active")
{
    u32 species;
    u32 item;

    PARAMETRIZE { species = SPECIES_CHIBI_YUUGI; item = ITEM_NONE; }
    PARAMETRIZE { species = SPECIES_NORMAL_KANA; item = ITEM_RED_ORB; }
    PARAMETRIZE { species = SPECIES_CHIBI_KANA; item = ITEM_BLUE_ORB; }

    GIVEN {
        PLAYER(species) { Item(item); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        if (item == ITEM_RED_ORB || item == ITEM_BLUE_ORB) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        }
    }
}

DOUBLE_BATTLE_TEST("Hail deals damage based on turn order")
{
    GIVEN {
        PLAYER(SPECIES_GLALIE);
        PLAYER(SPECIES_WYNAUT) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WYNAUT) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HAIL); }
    } SCENE {
        NOT HP_BAR(playerLeft);
        HP_BAR(opponentRight);
        HP_BAR(opponentLeft);
        HP_BAR(playerRight);
   }
}
