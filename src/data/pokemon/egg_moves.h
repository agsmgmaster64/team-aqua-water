#include "constants/moves.h"

static const u16 sNoneEggMoveLearnset[] = {
    MOVE_UNAVAILABLE,
};

static const u16 sCReimuEggMoveLearnset[] = {
    MOVE_CURSE,
    MOVE_FORCE_PALM,
    MOVE_KNOCK_OFF,
    MOVE_CROSS_CHOP,
    MOVE_COERCE,
    MOVE_REVENGE,
    MOVE_ROCK_SLIDE,
    MOVE_UNAVAILABLE,
};

static const u16 sCMarisaEggMoveLearnset[] = {
    MOVE_HYPER_BEAM,
    MOVE_AURORA_BEAM,
    MOVE_SUBSTITUTE,
    MOVE_SKILL_SWAP,
    MOVE_DOUBLE_EDGE,
    MOVE_MAGIC_KNIFE,
    MOVE_STEEL_WING,
    MOVE_UNAVAILABLE,
};

static const u16 sCDaiyouseiEggMoveLearnset[] = {
    MOVE_THUNDER_WAVE,
    MOVE_ENCORE,
    MOVE_PERISH_SONG,
    MOVE_SILVER_WIND,
    MOVE_HELPING_HAND,
    MOVE_MINIMIZE,
    MOVE_UNAVAILABLE,
};

static const u16 sCCirnoEggMoveLearnset[] = {
    MOVE_DOUBLE_EDGE,
    MOVE_FLAIL,
    MOVE_DEFENSE_CURL,
    MOVE_SKULL_BASH,
    MOVE_SONIC_BOOM,
    MOVE_UNAVAILABLE,
};

static const u16 sCRumiaEggMoveLearnset[] = {
    MOVE_SLEEP_TALK,
    MOVE_THRASH,
    MOVE_DREAM_EATER,
    MOVE_SLACK_OFF,
    MOVE_TICKLE,
    MOVE_SHADOW_FORCE,
    MOVE_UNAVAILABLE,
};

static const u16 sCMeilingEggMoveLearnset[] = {
    MOVE_DYNAMIC_PUNCH,
    MOVE_REVENGE,
    MOVE_SLEEP_TALK,
    MOVE_BELLY_DRUM,
    MOVE_MAGIC_KNIFE,
    MOVE_VITAL_THROW,
    MOVE_SMELLING_SALTS,
    MOVE_TWISTER,
    MOVE_UNAVAILABLE,
};

static const u16 sCKoakumaEggMoveLearnset[] = {
    MOVE_WILL_O_WISP,
    MOVE_THUNDER_WAVE,
    MOVE_MIRROR_SHOT,
    MOVE_LOVELY_KISS,
    MOVE_PAIN_SPLIT,
    MOVE_FIRE_BLAST,
    MOVE_BLOCK,
    MOVE_FAKE_TEARS,
    MOVE_UNAVAILABLE,
};

static const u16 sCPatchouliEggMoveLearnset[] = {
    MOVE_AROMATHERAPY,
    MOVE_SANDSTORM,
    MOVE_MIST,
    MOVE_PSYWAVE,
    MOVE_UNAVAILABLE,
};

static const u16 sCSakuyaEggMoveLearnset[] = {
    MOVE_CROSS_POISON,
    MOVE_SHADOW_DANCE,
    MOVE_ROLLING_KICK,
    MOVE_HEART_BREAK,
    MOVE_FAKE_OUT,
    MOVE_TORMENT,
    MOVE_ICE_SHARD,
    MOVE_UNAVAILABLE,
};

static const u16 sCRemiliaEggMoveLearnset[] = {
    MOVE_ROOST,
    MOVE_BINDING_VOICE,
    MOVE_FIRE_SPIN,
    MOVE_TORMENT,
    MOVE_NASTY_PLOT,
    MOVE_UNAVAILABLE,
};

static const u16 sCFlandreEggMoveLearnset[] = {
    MOVE_DYNAMIC_PUNCH,
    MOVE_PSYWAVE,
    MOVE_BIND,
    MOVE_FRUSTRATION,
    MOVE_UNAVAILABLE,
};

static const u16 sCLettyEggMoveLearnset[] = {
    MOVE_SNORE,
    MOVE_FISSURE,
    MOVE_MIRROR_COAT,
    MOVE_SCREECH,
    MOVE_SKULL_BASH,
    MOVE_MIST_BALL,
    MOVE_BLOCK,
    MOVE_UNAVAILABLE,
};

static const u16 sCAliceEggMoveLearnset[] = {
    MOVE_LIGHT_SCREEN,
    MOVE_POWER_WHIP,
    MOVE_KNOCK_OFF,
    MOVE_CONVERSION,
    MOVE_DOUBLE_KICK,
    MOVE_MAGICAL_LEAF,
    MOVE_ENDURE,
    MOVE_GUARD,
    MOVE_UNAVAILABLE,
};

static const u16 sCLilyWhiteEggMoveLearnset[] = {
    MOVE_SLEEP_TALK,
    MOVE_DEFENSE_CURL,
    MOVE_ENCORE,
    MOVE_NATURE_SOUND,
    MOVE_MAGIC_COAT,
    MOVE_SING,
    MOVE_HEAT_WAVE,
    MOVE_UNAVAILABLE,
};

static const u16 sCLilyBlackEggMoveLearnset[] = {
    MOVE_PERISH_SONG,
    MOVE_BINDING_VOICE,
    MOVE_DOUBLE_EDGE,
    MOVE_EXTREME_SPEED,
    MOVE_SPITE,
    MOVE_SKULL_BASH,
    MOVE_CAMOUFLAGE,
    MOVE_UNAVAILABLE,
};

static const u16 sCLunasaEggMoveLearnset[] = {
    MOVE_TRICK,
    MOVE_HAZE,
    MOVE_BLACK_RIPPLE,
    MOVE_FLAIL,
    MOVE_HYPER_VOICE,
    MOVE_DESTINY_BOND,
    MOVE_CHARMING_LOOK,
    MOVE_UNAVAILABLE,
};

static const u16 sCMerlinEggMoveLearnset[] = {
    MOVE_BELLY_DRUM,
    MOVE_THRASH,
    MOVE_BIND,
    MOVE_TICKLE,
    MOVE_MIMIC,
    MOVE_HYPER_VOICE,
    MOVE_MANA_SHIELD,
    MOVE_UNAVAILABLE,
};

static const u16 sCLyricaEggMoveLearnset[] = {
    MOVE_BEAT_UP,
    MOVE_TORMENT,
    MOVE_FAKE_OUT,
    MOVE_CHARGE_BEAM,
    MOVE_EXTREME_SPEED,
    MOVE_RECYCLE,
    MOVE_MIRROR_COAT,
    MOVE_UNAVAILABLE,
};

static const u16 sCLaylaEggMoveLearnset[] = {
    MOVE_DRACO_METEOR,
    MOVE_HYPER_VOICE,
    MOVE_DREAM_EATER,
    MOVE_UNAVAILABLE,
};

static const u16 sCYoumuEggMoveLearnset[] = {
    MOVE_MIMIC,
    MOVE_FURY_CUTTER,
    MOVE_HEARTS_EYE,
    MOVE_BLOCK,
    MOVE_SHADOW_DANCE,
    MOVE_LOW_KICK,
    MOVE_SONIC_BOOM,
    MOVE_UNAVAILABLE,
};

static const u16 sCYuyukoEggMoveLearnset[] = {
    MOVE_SHADOW_DANCE,
    MOVE_LEAF_BLADE,
    MOVE_SLEEP_TALK,
    MOVE_DRAWN_LINE,
    MOVE_SNORE,
    MOVE_CRUNCH,
    MOVE_PERISH_SONG,
    MOVE_UNAVAILABLE,
};

static const u16 sCChenEggMoveLearnset[] = {
    MOVE_SONIC_BOOM,
    MOVE_FAKE_TEARS,
    MOVE_GALE,
    MOVE_PURSUIT,
    MOVE_CROSS_POISON,
    MOVE_MIMIC,
    MOVE_FLAIL,
    MOVE_UNAVAILABLE,
};

static const u16 sCRanEggMoveLearnset[] = {
    MOVE_EXTRASENSORY,
    MOVE_COUNTER,
    MOVE_SEISMIC_TOSS,
    MOVE_SCREECH,
    MOVE_SUBSTITUTE,
    MOVE_UNAVAILABLE,
};

static const u16 sCYukariEggMoveLearnset[] = {
    MOVE_COERCE,
    MOVE_CHARM,
    MOVE_YAWN,
    MOVE_DREAM_EATER,
    MOVE_IMPRISON,
    MOVE_TELEPORT,
    MOVE_UNAVAILABLE,
};

static const u16 sCWriggleEggMoveLearnset[] = {
    MOVE_REVENGE,
    MOVE_WING_ATTACK,
    MOVE_OMINOUS_WIND,
    MOVE_TICKLE,
    MOVE_HAZE,
    MOVE_PSYBEAM,
    MOVE_UNAVAILABLE,
};

static const u16 sCMystiaEggMoveLearnset[] = {
    MOVE_NATURE_SOUND,
    MOVE_SONIC_BOOM,
    MOVE_PERFORMANCE,
    MOVE_SCREECH,
    MOVE_SOFTBOILED,
    MOVE_HAZE,
    MOVE_TICKLE,
    MOVE_SHADOW_FORCE,
    MOVE_UNAVAILABLE,
};

static const u16 sCKeineEggMoveLearnset[] = {
    MOVE_MAGIC_KNIFE,
    MOVE_THUNDER_WAVE,
    MOVE_SMELLING_SALTS,
    MOVE_DOUBLE_EDGE,
    MOVE_PURSUIT,
    MOVE_BOUNCE,
    MOVE_FALSE_SWIPE,
    MOVE_UNAVAILABLE,
};

static const u16 sCTewiEggMoveLearnset[] = {
    MOVE_DOUBLE_EDGE,
    MOVE_RAPID_SPIN,
    MOVE_EARTH_POWER,
    MOVE_CRUSH_CLAW,
    MOVE_FISSURE,
    MOVE_CURSE,
    MOVE_UNAVAILABLE,
};

static const u16 sCReisenEggMoveLearnset[] = {
    MOVE_FAKE_TEARS,
    MOVE_AGILITY,
    MOVE_PSYWAVE,
    MOVE_DREAM_EATER,
    MOVE_PSYBEAM,
    MOVE_PURSUIT,
    MOVE_ICE_BEAM,
    MOVE_GUNK_SHOT,
    MOVE_UNAVAILABLE,
};

static const u16 sCReisenIIEggMoveLearnset[] = {
    MOVE_LIGHT_SCREEN,
    MOVE_PRANK,
    MOVE_AMNESIA,
    MOVE_PSYCHO_CUT,
    MOVE_BELLY_DRUM,
    MOVE_PERISH_SONG,
    MOVE_JAMMING,
    MOVE_SUBSTITUTE,
    MOVE_UNAVAILABLE,
};

static const u16 sCEirinEggMoveLearnset[] = {
    MOVE_PSYCH_UP,
    MOVE_PIN_MISSILE,
    MOVE_OMINOUS_WIND,
    MOVE_HYDRO_PUMP,
    MOVE_SCREECH,
    MOVE_SHOCK_WAVE,
    MOVE_UNAVAILABLE,
};

static const u16 sCKaguyaEggMoveLearnset[] = {
    MOVE_TORMENT,
    MOVE_SLEEP_TALK,
    MOVE_CHARGE_BEAM,
    MOVE_WITHDRAW,
    MOVE_UNAVAILABLE,
};

static const u16 sCMokouEggMoveLearnset[] = {
    MOVE_SKY_ATTACK,
    MOVE_WING_ATTACK,
    MOVE_PURSUIT,
    MOVE_BULK_UP,
    MOVE_GUARD,
    MOVE_FALSE_SWIPE,
    MOVE_UNAVAILABLE,
};

static const u16 sCAyaEggMoveLearnset[] = {
    MOVE_MAGICAL_LEAF,
    MOVE_NIGHT_SLASH,
    MOVE_RAZOR_LEAF,
    MOVE_HIGH_JUMP_KICK,
    MOVE_MUD_SHOT,
    MOVE_SONIC_BOOM,
    MOVE_SANDSTORM,
    MOVE_SILVER_WIND,
    MOVE_UNAVAILABLE,
};

static const u16 sCMedicineEggMoveLearnset[] = {
    MOVE_TRICK,
    MOVE_REFRESH,
    MOVE_SYNTHESIS,
    MOVE_SWEET_KISS,
    MOVE_OMINOUS_WIND,
    MOVE_SPITE,
    MOVE_PSYCH_UP,
    MOVE_IMPRISON,
    MOVE_UNAVAILABLE,
};

static const u16 sCYuukaEggMoveLearnset[] = {
    MOVE_AROMATHERAPY,
    MOVE_HEADBUTT,
    MOVE_EARTH_POWER,
    MOVE_ROLLING_KICK,
    MOVE_CHARM,
    MOVE_CROSS_CHOP,
    MOVE_UNAVAILABLE,
};

static const u16 sCKomachiEggMoveLearnset[] = {
    MOVE_SCREECH,
    MOVE_TEETER_DANCE,
    MOVE_MIMIC,
    MOVE_PAIN_SPLIT,
    MOVE_WEATHER_BALL,
    MOVE_KNOCK_OFF,
    MOVE_HAZE,
    MOVE_UNAVAILABLE,
};

static const u16 sCEikiEggMoveLearnset[] = {
    MOVE_SAFEGUARD,
    MOVE_SCREECH,
    MOVE_FALSE_SWIPE,
    MOVE_MIRROR_SHOT,
    MOVE_HAZE,
    MOVE_SCARY_FACE,
    MOVE_UNAVAILABLE,
};

static const u16 sCShizuhaEggMoveLearnset[] = {
    MOVE_MEMENTO,
    MOVE_SCREECH,
    MOVE_EARTH_POWER,
    MOVE_EXTRASENSORY,
    MOVE_FLAIL,
    MOVE_LEAF_BLADE,
    MOVE_SAFEGUARD,
    MOVE_TWISTER,
    MOVE_UNAVAILABLE,
};

static const u16 sCMinorikoEggMoveLearnset[] = {
    MOVE_NASTY_PLOT,
    MOVE_EARTH_POWER,
    MOVE_TORMENT,
    MOVE_TREMORS,
    MOVE_RECYCLE,
    MOVE_HELPING_HAND,
    MOVE_YAWN,
    MOVE_SANDSTORM,
    MOVE_UNAVAILABLE,
};

static const u16 sCHinaEggMoveLearnset[] = {
    MOVE_EXTRASENSORY,
    MOVE_BELLY_DRUM,
    MOVE_TREMORS,
    MOVE_BOUNCE,
    MOVE_KNOCK_OFF,
    MOVE_SLEEP_TALK,
    MOVE_MAGIC_COAT,
    MOVE_UNAVAILABLE,
};

static const u16 sCNitoriEggMoveLearnset[] = {
    MOVE_REVENGE,
    MOVE_HYDRO_CANNON,
    MOVE_MAGIC_COAT,
    MOVE_NEEDLE_ARM,
    MOVE_SONIC_BOOM,
    MOVE_COVET,
    MOVE_CHARGE_BEAM,
    MOVE_SKULL_BASH,
    MOVE_UNAVAILABLE,
};

static const u16 sCMomijiEggMoveLearnset[] = {
    MOVE_REVERSAL,
    MOVE_PURSUIT,
    MOVE_EXTREME_SPEED,
    MOVE_CRUNCH,
    MOVE_NIGHT_SLASH,
    MOVE_COUNTER,
    MOVE_UNAVAILABLE,
};

static const u16 sCSanaeEggMoveLearnset[] = {
    MOVE_REFRESH,
    MOVE_HARDEN,
    MOVE_BODY_SLAM,
    MOVE_WEATHER_BALL,
    MOVE_FORCE_PALM,
    MOVE_FORESIGHT,
    MOVE_MIST,
    MOVE_THUNDER_WAVE,
    MOVE_UNAVAILABLE,
};

static const u16 sCKanakoEggMoveLearnset[] = {
    MOVE_LOCK_ON,
    MOVE_HEADBUTT,
    MOVE_LEAF_BLADE,
    MOVE_SAND_TOMB,
    MOVE_TORMENT,
    MOVE_WEATHER_BALL,
    MOVE_UNAVAILABLE,
};

static const u16 sCSuwakoEggMoveLearnset[] = {
    MOVE_METEOR_MASH,
    MOVE_WHIRLPOOL,
    MOVE_MINIMIZE,
    MOVE_ROCK_SLIDE,
    MOVE_DIZZY_PUNCH,
    MOVE_UNAVAILABLE,
};

static const u16 sCKisumeEggMoveLearnset[] = {
    MOVE_GUARD,
    MOVE_SKULL_BASH,
    MOVE_PRANK,
    MOVE_UNAVAILABLE,
};

static const u16 sCYamameEggMoveLearnset[] = {
    MOVE_LIGHT_SCREEN,
    MOVE_ZEN_HEADBUTT,
    MOVE_SCREECH,
    MOVE_ENCORE,
    MOVE_FAKE_TEARS,
    MOVE_COUNTER,
    MOVE_PAIN_SPLIT,
    MOVE_UNAVAILABLE,
};

static const u16 sCParseeEggMoveLearnset[] = {
    MOVE_DREAM_EATER,
    MOVE_SLEEP_TALK,
    MOVE_SURF,
    MOVE_SKILL_SWAP,
    MOVE_AURORA_BEAM,
    MOVE_RECYCLE,
    MOVE_TRICK,
    MOVE_BLOCK,
    MOVE_UNAVAILABLE,
};

static const u16 sCYuugiEggMoveLearnset[] = {
    MOVE_AURORA_BEAM,
    MOVE_GUARD,
    MOVE_FALSE_SWIPE,
    MOVE_BELLY_DRUM,
    MOVE_SMOKESCREEN,
    MOVE_SNORE,
    MOVE_ENCORE,
    MOVE_DIZZY_PUNCH,
    MOVE_UNAVAILABLE,
};

static const u16 sCRinEggMoveLearnset[] = {
    MOVE_PERISH_SONG,
    MOVE_SANDSTORM,
    MOVE_FEINT_ATTACK,
    MOVE_WISH,
    MOVE_FAKE_TEARS,
    MOVE_UNAVAILABLE,
};

static const u16 sCUtsuhoEggMoveLearnset[] = {
    MOVE_SKY_ATTACK,
    MOVE_RAGE,
    MOVE_JUMP_KICK,
    MOVE_ENDURE,
    MOVE_TWISTER,
    MOVE_SMOKESCREEN,
    MOVE_LOCK_ON,
    MOVE_PURSUIT,
    MOVE_UNAVAILABLE,
};

static const u16 sCKoishiEggMoveLearnset[] = {
    MOVE_DREAM_EATER,
    MOVE_TRICK,
    MOVE_LOCK_ON,
    MOVE_SELF_DESTRUCT,
    MOVE_OUTRAGE,
    MOVE_SLEEP_TALK,
    MOVE_UNAVAILABLE,
};

static const u16 sCNazrinEggMoveLearnset[] = {
    MOVE_PRANK,
    MOVE_BARRIER,
    MOVE_EXTRASENSORY,
    MOVE_TRICK,
    MOVE_KNOCK_OFF,
    MOVE_SLEEP_TALK,
    MOVE_CONFUSE_RAY,
    MOVE_PAIN_SPLIT,
    MOVE_UNAVAILABLE,
};

static const u16 sCKogasaEggMoveLearnset[] = {
    MOVE_ROCK_SLIDE,
    MOVE_FAKE_TEARS,
    MOVE_NASTY_PLOT,
    MOVE_RAPID_SPIN,
    MOVE_STOMP,
    MOVE_DREAM_EATER,
    MOVE_CAMOUFLAGE,
    MOVE_MAGIC_COAT,
    MOVE_UNAVAILABLE,
};

static const u16 sCIchirinEggMoveLearnset[] = {
    MOVE_SMELLING_SALTS,
    MOVE_METEOR_MASH,
    MOVE_KNOCK_OFF,
    MOVE_HEADBUTT,
    MOVE_EARTH_POWER,
    MOVE_ZEN_HEADBUTT,
    MOVE_SHADOW_BALL,
    MOVE_UNAVAILABLE,
};

static const u16 sCMurasaEggMoveLearnset[] = {
    MOVE_RECYCLE,
    MOVE_HYDRO_CANNON,
    MOVE_COUNTER,
    MOVE_REVENGE,
    MOVE_YAWN,
    MOVE_STEEL_FIST,
    MOVE_ROCK_BLAST,
    MOVE_ENDURE,
    MOVE_UNAVAILABLE,
};

static const u16 sCShouEggMoveLearnset[] = {
    MOVE_MANA_BURST,
    MOVE_MAGIC_COAT,
    MOVE_DOUBLE_EDGE,
    MOVE_VITAL_THROW,
    MOVE_DEFENSE_CURL,
    MOVE_COVET,
    MOVE_GALE,
    MOVE_UNAVAILABLE,
};

static const u16 sCByakurenEggMoveLearnset[] = {
    MOVE_SHADOW_PUNCH,
    MOVE_MAGICAL_LEAF,
    MOVE_PERISH_SONG,
    MOVE_WRAP,
    MOVE_FORESIGHT,
    MOVE_CROSS_CHOP,
    MOVE_SPITE,
    MOVE_UNAVAILABLE,
};

static const u16 sCNueEggMoveLearnset[] = {
    MOVE_FAKE_TEARS,
    MOVE_DISABLE,
    MOVE_SKILL_SWAP,
    MOVE_RAIN_DANCE,
    MOVE_FLASH,
    MOVE_TELEPORT,
    MOVE_UNAVAILABLE,
};

static const u16 sCWakasagihimeEggMoveLearnset[] = {
    MOVE_AQUA_JET,
    MOVE_ASSIST,
    MOVE_ENCORE,
    MOVE_FAKE_TEARS,
    MOVE_COVET,
    MOVE_AQUA_SHOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sCSuikaEggMoveLearnset[] = {
    MOVE_HAZE,
    MOVE_MIST,
    MOVE_STOMP,
    MOVE_SHADOW_PUNCH,
    MOVE_COERCE,
    MOVE_FIRE_SPIN,
    MOVE_SUBMISSION,
    MOVE_UNAVAILABLE,
};

static const u16 sCIkuEggMoveLearnset[] = {
    MOVE_POWER_WHIP,
    MOVE_CURSE,
    MOVE_VOLT_TACKLE,
    MOVE_TAILWIND,
    MOVE_ENCORE,
    MOVE_CHARMING_LOOK,
    MOVE_MAGIC_COAT,
    MOVE_UNAVAILABLE,
};

static const u16 sCTenshiEggMoveLearnset[] = {
    MOVE_IMPRISON,
    MOVE_FAKE_TEARS,
    MOVE_LOW_KICK,
    MOVE_HEADBUTT,
    MOVE_NEEDLE_ARM,
    MOVE_BELLY_DRUM,
    MOVE_SUBMISSION,
    MOVE_NIGHT_SLASH,
    MOVE_UNAVAILABLE,
};

static const u16 sCHatateEggMoveLearnset[] = {
    MOVE_SWIFT,
    MOVE_SONIC_BOOM,
    MOVE_BLACK_RIPPLE,
    MOVE_TRI_ATTACK,
    MOVE_CONFUSE_RAY,
    MOVE_CHARGE_BEAM,
    MOVE_MANA_CHARGE,
    MOVE_LUSTER_PURGE,
    MOVE_UNAVAILABLE,
};

static const u16 sCSunnyEggMoveLearnset[] = {
    MOVE_HELPING_HAND,
    MOVE_EARTH_POWER,
    MOVE_RECOVER,
    MOVE_MANA_CHARGE,
    MOVE_YAWN,
    MOVE_PRANK,
    MOVE_MAGIC_COAT,
    MOVE_GALE,
    MOVE_UNAVAILABLE,
};

static const u16 sCLunaEggMoveLearnset[] = {
    MOVE_ROOST,
    MOVE_BLACK_RIPPLE,
    MOVE_ENCORE,
    MOVE_MANA_CHARGE,
    MOVE_HEAL_BELL,
    MOVE_HELPING_HAND,
    MOVE_PRANK,
    MOVE_FAKE_TEARS,
    MOVE_UNAVAILABLE,
};

static const u16 sCStarEggMoveLearnset[] = {
    MOVE_RECOVER,
    MOVE_PRANK,
    MOVE_ENCORE,
    MOVE_BATON_PASS,
    MOVE_HYPNOSIS,
    MOVE_BARRIER,
    MOVE_LUCKY_CHANT,
    MOVE_MANA_CHARGE,
    MOVE_UNAVAILABLE,
};

static const u16 sCKokoroEggMoveLearnset[] = {
    MOVE_SHADOW_DANCE,
    MOVE_NASTY_PLOT,
    MOVE_PERISH_SONG,
    MOVE_PERFORMANCE,
    MOVE_SWORDS_DANCE,
    MOVE_ENERGY_LIGHT,
    MOVE_UNAVAILABLE,
};

static const u16 sCKasenEggMoveLearnset[] = {
    MOVE_POWER_WHIP,
    MOVE_AGILITY,
    MOVE_PURSUIT,
    MOVE_DOUBLE_EDGE,
    MOVE_ROCK_WRECKER,
    MOVE_SOAR,
    MOVE_UNAVAILABLE,
};

static const u16 sCYorihimeEggMoveLearnset[] = {
    MOVE_NIGHT_SLASH,
    MOVE_SCARY_FACE,
    MOVE_PIN_MISSILE,
    MOVE_SOLAR_BEAM,
    MOVE_AGILITY,
    MOVE_FEINT_ATTACK,
    MOVE_UNAVAILABLE,
};

static const u16 sCToyohimeEggMoveLearnset[] = {
    MOVE_SHOCK_WAVE,
    MOVE_TELEPORT,
    MOVE_YAWN,
    MOVE_BIND,
    MOVE_ICE_SHARD,
    MOVE_JAMMING,
    MOVE_UNAVAILABLE,
};

static const u16 sCTokikoEggMoveLearnset[] = {
    MOVE_FAKE_OUT,
    MOVE_FLAIL,
    MOVE_BLIZZARD,
    MOVE_BELLY_DRUM,
    MOVE_HELPING_HAND,
    MOVE_ANCIENT_POWER,
    MOVE_FIRE_BLAST,
    MOVE_UNAVAILABLE,
};

static const u16 sCKosuzuEggMoveLearnset[] = {
    MOVE_FAKE_TEARS,
    MOVE_OMINOUS_WIND,
    MOVE_BLACK_RIPPLE,
    MOVE_WRAP,
    MOVE_FAKE_OUT,
    MOVE_DIZZY_PUNCH,
    MOVE_YAWN,
    MOVE_UNAVAILABLE,
};

static const u16 sCHakureiEggMoveLearnset[] = {
    MOVE_ROCK_SLIDE,
    MOVE_BARRAGE,
    MOVE_CURSE,
    MOVE_SUBMISSION,
    MOVE_ZEN_HEADBUTT,
    MOVE_MANA_SHIELD,
    MOVE_PSYCH_UP,
    MOVE_FORESIGHT,
    MOVE_UNAVAILABLE,
};

static const u16 sCKirisameEggMoveLearnset[] = {
    MOVE_AGILITY,
    MOVE_SHOCK_WAVE,
    MOVE_TRICK,
    MOVE_QUICK_ATTACK,
    MOVE_REFLECT,
    MOVE_DISCHARGE,
    MOVE_FOCUS_ENERGY,
    MOVE_MIMIC,
    MOVE_UNAVAILABLE,
};

static const u16 sGenjiEggMoveLearnset[] = {
    MOVE_ENDEAVOR,
    MOVE_ICY_WIND,
    MOVE_CURSE,
    MOVE_IRON_DEFENSE,
    MOVE_AMNESIA,
    MOVE_HELPING_HAND,
    MOVE_PSYCH_UP,
    MOVE_UNAVAILABLE,
};

static const u16 sCRikaEggMoveLearnset[] = {
    MOVE_AURORA_BEAM,
    MOVE_COERCE,
    MOVE_THUNDERBOLT,
    MOVE_CURSE,
    MOVE_SOLAR_BEAM,
    MOVE_WATER_GUN,
    MOVE_UNAVAILABLE,
};

static const u16 sCMeiraEggMoveLearnset[] = {
    MOVE_ROLLING_KICK,
    MOVE_ENDEAVOR,
    MOVE_FACADE,
    MOVE_FALSE_SWIPE,
    MOVE_DOUBLE_TEAM,
    MOVE_ROCK_TOMB,
    MOVE_AIR_SLASH,
    MOVE_RAZOR_WIND,
    MOVE_UNAVAILABLE,
};

static const u16 sCEllenEggMoveLearnset[] = {
    MOVE_COTTON_SPORE,
    MOVE_BURN_POWDER,
    MOVE_ENCORE,
    MOVE_SUBSTITUTE,
    MOVE_IMPRISON,
    MOVE_HELPING_HAND,
    MOVE_GUARD,
    MOVE_UNAVAILABLE,
};

static const u16 sCKotohimeEggMoveLearnset[] = {
    MOVE_SWEET_KISS,
    MOVE_SLEEP_POWDER,
    MOVE_PSYCH_UP,
    MOVE_SWAGGER,
    MOVE_SNATCH,
    MOVE_GUARD,
    MOVE_DECISION,
    MOVE_SAFEGUARD,
    MOVE_UNAVAILABLE,
};

static const u16 sCKanaEggMoveLearnset[] = {
    MOVE_PERFORMANCE,
    MOVE_MEMENTO,
    MOVE_YAWN,
    MOVE_PAIN_SPLIT,
    MOVE_UNAVAILABLE,
};

static const u16 sCRikakoEggMoveLearnset[] = {
    MOVE_SELF_DESTRUCT,
    MOVE_EXTREME_SPEED,
    MOVE_REFLECT,
    MOVE_OMINOUS_WIND,
    MOVE_UNAVAILABLE,
};

static const u16 sCChiyuriEggMoveLearnset[] = {
    MOVE_CAMOUFLAGE,
    MOVE_BATTERY_CHARGE,
    MOVE_AURORA_BEAM,
    MOVE_AGILITY,
    MOVE_DISCHARGE,
    MOVE_RECYCLE,
    MOVE_MUDDY_WATER,
    MOVE_SWIFT,
    MOVE_UNAVAILABLE,
};

static const u16 sCYumemiEggMoveLearnset[] = {
    MOVE_FIRE_BLAST,
    MOVE_DOUBLE_TEAM,
    MOVE_COERCE,
    MOVE_TAUNT,
    MOVE_CROSS_CHOP,
    MOVE_MIST,
    MOVE_UNAVAILABLE,
};

static const u16 sCOrangeEggMoveLearnset[] = {
    MOVE_SEISMIC_TOSS,
    MOVE_FIRE_PUNCH,
    MOVE_ICE_PUNCH,
    MOVE_THUNDER_PUNCH,
    MOVE_FORESIGHT,
    MOVE_SWIFT,
    MOVE_COUNTER,
    MOVE_NATURE_POWER,
    MOVE_UNAVAILABLE,
};

static const u16 sCKurumiEggMoveLearnset[] = {
    MOVE_WILL_O_WISP,
    MOVE_THUNDER_WAVE,
    MOVE_MIMIC,
    MOVE_TICKLE,
    MOVE_PERISH_SONG,
    MOVE_QUICK_ATTACK,
    MOVE_UNAVAILABLE,
};

static const u16 sCEllyEggMoveLearnset[] = {
    MOVE_CRUSH_CLAW,
    MOVE_STOMP,
    MOVE_CROSS_POISON,
    MOVE_SNORE,
    MOVE_HARDEN,
    MOVE_UNAVAILABLE,
};

static const u16 sCKazamiEggMoveLearnset[] = {
    MOVE_SNORE,
    MOVE_SLEEP_TALK,
    MOVE_SKILL_SWAP,
    MOVE_IMPRISON,
    MOVE_ENDURE,
    MOVE_UNAVAILABLE,
};

static const u16 sCMugetsuEggMoveLearnset[] = {
    MOVE_THUNDER_PUNCH,
    MOVE_ICE_PUNCH,
    MOVE_SUBSTITUTE,
    MOVE_SAFEGUARD,
    MOVE_SCULPTURE,
    MOVE_UNAVAILABLE,
};

static const u16 sCGengetsuEggMoveLearnset[] = {
    MOVE_ENCORE,
    MOVE_FIRE_PUNCH,
    MOVE_ENDURE,
    MOVE_REVERSAL,
    MOVE_FLAIL,
    MOVE_PSYSHOT,
    MOVE_METRONOME,
    MOVE_MEMENTO,
    MOVE_UNAVAILABLE,
};

static const u16 sCSaraEggMoveLearnset[] = {
    MOVE_BULK_UP,
    MOVE_SHADOW_PUNCH,
    MOVE_DOUBLE_EDGE,
    MOVE_ROCK_BLAST,
    MOVE_MACH_PUNCH,
    MOVE_TICKLE,
    MOVE_GUARD,
    MOVE_LOCK_ON,
    MOVE_UNAVAILABLE,
};

static const u16 sCLouiseEggMoveLearnset[] = {
    MOVE_MEMENTO,
    MOVE_HYPNOSIS,
    MOVE_IMPRISON,
    MOVE_CURSE,
    MOVE_TOXIC,
    MOVE_UNAVAILABLE,
};

static const u16 sCMargatroidEggMoveLearnset[] = {
    MOVE_PERISH_SONG,
    MOVE_DETECT,
    MOVE_YAWN,
    MOVE_DESTINY_BOND,
    MOVE_CONFUSE_RAY,
    MOVE_PSYCHO_CUT,
    MOVE_MAGIC_COAT,
    MOVE_UNAVAILABLE,
};

static const u16 sCYukiEggMoveLearnset[] = {
    MOVE_ERUPTION,
    MOVE_SHADOW_PUNCH,
    MOVE_EARTHQUAKE,
    MOVE_BELLY_DRUM,
    MOVE_WILL_O_WISP,
    MOVE_FAKE_TEARS,
    MOVE_UNAVAILABLE,
};

static const u16 sCMaiEggMoveLearnset[] = {
    MOVE_FAKE_OUT,
    MOVE_SPITE,
    MOVE_SWEET_KISS,
    MOVE_LOVELY_KISS,
    MOVE_OMINOUS_WIND,
    MOVE_DOUBLE_EDGE,
    MOVE_SHADOW_DANCE,
    MOVE_NASTY_PLOT,
    MOVE_PERISH_SONG,
    MOVE_PERFORMANCE,
    MOVE_SWORDS_DANCE,
    MOVE_ENERGY_LIGHT,
    MOVE_UNAVAILABLE,
};

static const u16 sCYumekoEggMoveLearnset[] = {
    MOVE_KILLING_BITE,
    MOVE_PURSUIT,
    MOVE_METEOR_MASH,
    MOVE_BATTLE_CHANT,
    MOVE_PSYCH_UP,
    MOVE_TORMENT,
    MOVE_SWAGGER,
    MOVE_UNAVAILABLE,
};

static const u16 sCShinkiEggMoveLearnset[] = {
    MOVE_POWER_WHIP,
    MOVE_CHARM,
    MOVE_CURSE,
    MOVE_DEFENSE_CURL,
    MOVE_COVET,
    MOVE_IMPRISON,
    MOVE_UNAVAILABLE,
};
