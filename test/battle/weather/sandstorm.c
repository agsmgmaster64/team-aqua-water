#include "global.h"
#include "test/battle.h"

// Please add Sandstorm interactions with move, item and ability effects on their respective files.
SINGLE_BATTLE_TEST("Sandstorm deals 1/16 damage per turn")
{
    s16 sandstormDamage;

    GIVEN {
        PLAYER(SPECIES_PLCEHOLDER1_KOAKUMA);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        MESSAGE("Foe Wobbuffet is buffeted by the sandstorm!");
        HP_BAR(opponent, captureDamage: &sandstormDamage);
   } THEN { EXPECT_EQ(sandstormDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Sandstorm multiplies the special defense of Rock-types by 1.5x", s16 damage)
{
    u16 move;
    PARAMETRIZE { move = MOVE_SANDSTORM; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_CHIBI_YUUGI) ;
        OPPONENT(SPECIES_CHIBI_RAIKO);
    } WHEN {
        TURN { MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sandstorm damage does not hurt Ground, Rock, and Steel-type Pokémon")
{
    u32 mon;
    PARAMETRIZE { mon = SPECIES_PLCEHOLDER1_KOAKUMA; }
    PARAMETRIZE { mon = SPECIES_CHIBI_RAIKO; }
    PARAMETRIZE { mon = SPECIES_CHIBI_KOTOHIME; }
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_PLCEHOLDER1_KOAKUMA].types[0] == TYPE_EARTH);
        ASSUME(gSpeciesInfo[SPECIES_CHIBI_RAIKO].types[0] == TYPE_BEAST);
        ASSUME(gSpeciesInfo[SPECIES_CHIBI_KOTOHIME].types[0] == TYPE_STEEL);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(mon);
    } WHEN {
        TURN { MOVE(player, MOVE_SANDSTORM); }
    } SCENE {
        switch (mon)
        {
        case SPECIES_PLCEHOLDER1_KOAKUMA:
            NOT MESSAGE("Foe Sandslash is buffeted by the sandstorm!");
            break;
        case SPECIES_CHIBI_RAIKO:
            NOT MESSAGE("Foe Nosepass is buffeted by the sandstorm!");
            break;
        case SPECIES_CHIBI_KOTOHIME:
            NOT MESSAGE("Foe Registeel is buffeted by the sandstorm!");
            break;
        }
    }
}

DOUBLE_BATTLE_TEST("Sandstorm deals damage based on turn order")
{
    GIVEN {
        PLAYER(SPECIES_PHANPY);
        PLAYER(SPECIES_WYNAUT) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WYNAUT) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SANDSTORM); }
    } SCENE {
        NOT HP_BAR(playerLeft);
        HP_BAR(opponentRight);
        HP_BAR(opponentLeft);
        HP_BAR(playerRight);
   }
}
