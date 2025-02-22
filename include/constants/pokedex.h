#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokédex order
enum {
    NATIONAL_DEX_NONE,
    // Kanto
    NATIONAL_DEX_BULBASAUR,
    NATIONAL_DEX_IVYSAUR,
    NATIONAL_DEX_VENUSAUR,
    NATIONAL_DEX_CHARMANDER,
    NATIONAL_DEX_CHARMELEON,
    NATIONAL_DEX_CHARIZARD,
    NATIONAL_DEX_SQUIRTLE,
    NATIONAL_DEX_WARTORTLE,
    NATIONAL_DEX_BLASTOISE,
    NATIONAL_DEX_CATERPIE,
    NATIONAL_DEX_METAPOD,
    NATIONAL_DEX_BUTTERFREE,
    NATIONAL_DEX_WEEDLE,
    NATIONAL_DEX_KAKUNA,
    NATIONAL_DEX_BEEDRILL,
    NATIONAL_DEX_PIDGEY,
    NATIONAL_DEX_PIDGEOTTO,
    NATIONAL_DEX_PIDGEOT,
    NATIONAL_DEX_RATTATA,
    NATIONAL_DEX_RATICATE,
    NATIONAL_DEX_SPEAROW,
    NATIONAL_DEX_FEAROW,
    NATIONAL_DEX_EKANS,
    NATIONAL_DEX_ARBOK,
    NATIONAL_DEX_PIKACHU,
    NATIONAL_DEX_RAICHU,
    NATIONAL_DEX_SANDSHREW,
    NATIONAL_DEX_SANDSLASH,
    NATIONAL_DEX_NIDORAN_F,
    NATIONAL_DEX_NIDORINA,
    NATIONAL_DEX_NIDOQUEEN,
    NATIONAL_DEX_NIDORAN_M,
    NATIONAL_DEX_NIDORINO,
    NATIONAL_DEX_NIDOKING,
    NATIONAL_DEX_CLEFAIRY,
    NATIONAL_DEX_CLEFABLE,
    NATIONAL_DEX_VULPIX,
    NATIONAL_DEX_NINETALES,
    NATIONAL_DEX_JIGGLYPUFF,
    NATIONAL_DEX_WIGGLYTUFF,
    NATIONAL_DEX_ZUBAT,
    NATIONAL_DEX_GOLBAT,
    NATIONAL_DEX_ODDISH,
    NATIONAL_DEX_GLOOM,
    NATIONAL_DEX_VILEPLUME,
    NATIONAL_DEX_PARAS,
    NATIONAL_DEX_PARASECT,
    NATIONAL_DEX_VENONAT,
    NATIONAL_DEX_VENOMOTH,
    NATIONAL_DEX_DIGLETT,
    NATIONAL_DEX_DUGTRIO,
    NATIONAL_DEX_MEOWTH,
    NATIONAL_DEX_PERSIAN,
    NATIONAL_DEX_PSYDUCK,
    NATIONAL_DEX_GOLDUCK,
    NATIONAL_DEX_MANKEY,
    NATIONAL_DEX_PRIMEAPE,
    NATIONAL_DEX_GROWLITHE,
    NATIONAL_DEX_ARCANINE,
    NATIONAL_DEX_POLIWAG,
    NATIONAL_DEX_POLIWHIRL,
    NATIONAL_DEX_POLIWRATH,
    NATIONAL_DEX_ABRA,
    NATIONAL_DEX_KADABRA,
    NATIONAL_DEX_ALAKAZAM,
    NATIONAL_DEX_MACHOP,
    NATIONAL_DEX_MACHOKE,
    NATIONAL_DEX_MACHAMP,
    NATIONAL_DEX_BELLSPROUT,
    NATIONAL_DEX_WEEPINBELL,
    NATIONAL_DEX_VICTREEBEL,
    NATIONAL_DEX_TENTACOOL,
    NATIONAL_DEX_TENTACRUEL,
    NATIONAL_DEX_GEODUDE,
    NATIONAL_DEX_GRAVELER,
    NATIONAL_DEX_GOLEM,
    NATIONAL_DEX_PONYTA,
    NATIONAL_DEX_RAPIDASH,
    NATIONAL_DEX_SLOWPOKE,
    NATIONAL_DEX_SLOWBRO,
    NATIONAL_DEX_MAGNEMITE,
    NATIONAL_DEX_MAGNETON,
    NATIONAL_DEX_FARFETCHD,
    NATIONAL_DEX_DODUO,
    NATIONAL_DEX_DODRIO,
    NATIONAL_DEX_SEEL,
    NATIONAL_DEX_DEWGONG,
    NATIONAL_DEX_GRIMER,
    NATIONAL_DEX_MUK,
    NATIONAL_DEX_SHELLDER,
    NATIONAL_DEX_CLOYSTER,
    NATIONAL_DEX_GASTLY,
    NATIONAL_DEX_HAUNTER,
    NATIONAL_DEX_GENGAR,
    NATIONAL_DEX_ONIX,
    NATIONAL_DEX_DROWZEE,
    NATIONAL_DEX_HYPNO,
    NATIONAL_DEX_KRABBY,
    NATIONAL_DEX_KINGLER,
    NATIONAL_DEX_VOLTORB,
    NATIONAL_DEX_ELECTRODE,
    NATIONAL_DEX_EXEGGCUTE,
    NATIONAL_DEX_EXEGGUTOR,
    NATIONAL_DEX_CUBONE,
    NATIONAL_DEX_MAROWAK,
    NATIONAL_DEX_HITMONLEE,
    NATIONAL_DEX_HITMONCHAN,
    NATIONAL_DEX_LICKITUNG,
    NATIONAL_DEX_KOFFING,
    NATIONAL_DEX_WEEZING,
    NATIONAL_DEX_RHYHORN,
    NATIONAL_DEX_RHYDON,
    NATIONAL_DEX_CHANSEY,
    NATIONAL_DEX_TANGELA,
    NATIONAL_DEX_KANGASKHAN,
    NATIONAL_DEX_HORSEA,
    NATIONAL_DEX_SEADRA,
    NATIONAL_DEX_GOLDEEN,
    NATIONAL_DEX_SEAKING,
    NATIONAL_DEX_STARYU,
    NATIONAL_DEX_STARMIE,
    NATIONAL_DEX_MR_MIME,
    NATIONAL_DEX_SCYTHER,
    NATIONAL_DEX_JYNX,
    NATIONAL_DEX_ELECTABUZZ,
    NATIONAL_DEX_MAGMAR,
    NATIONAL_DEX_PINSIR,
    NATIONAL_DEX_TAUROS,
    NATIONAL_DEX_MAGIKARP,
    NATIONAL_DEX_GYARADOS,
    NATIONAL_DEX_LAPRAS,
    NATIONAL_DEX_DITTO,
    NATIONAL_DEX_EEVEE,
    NATIONAL_DEX_VAPOREON,
    NATIONAL_DEX_JOLTEON,
    NATIONAL_DEX_FLAREON,
    NATIONAL_DEX_PORYGON,
    NATIONAL_DEX_OMANYTE,
    NATIONAL_DEX_OMASTAR,
    NATIONAL_DEX_KABUTO,
    NATIONAL_DEX_KABUTOPS,
    NATIONAL_DEX_AERODACTYL,
    NATIONAL_DEX_SNORLAX,
    NATIONAL_DEX_ARTICUNO,
    NATIONAL_DEX_ZAPDOS,
    NATIONAL_DEX_MOLTRES,
    NATIONAL_DEX_DRATINI,
    NATIONAL_DEX_DRAGONAIR,
    NATIONAL_DEX_DRAGONITE,
    NATIONAL_DEX_MEWTWO,
    NATIONAL_DEX_MEW,
    // Johto
    NATIONAL_DEX_CHIKORITA,
    NATIONAL_DEX_BAYLEEF,
    NATIONAL_DEX_MEGANIUM,
    NATIONAL_DEX_CYNDAQUIL,
    NATIONAL_DEX_QUILAVA,
    NATIONAL_DEX_TYPHLOSION,
    NATIONAL_DEX_TOTODILE,
    NATIONAL_DEX_CROCONAW,
    NATIONAL_DEX_FERALIGATR,
    NATIONAL_DEX_SENTRET,
    NATIONAL_DEX_FURRET,
    NATIONAL_DEX_HOOTHOOT,
    NATIONAL_DEX_NOCTOWL,
    NATIONAL_DEX_LEDYBA,
    NATIONAL_DEX_LEDIAN,
    NATIONAL_DEX_SPINARAK,
    NATIONAL_DEX_ARIADOS,
    NATIONAL_DEX_CROBAT,
    NATIONAL_DEX_CHINCHOU,
    NATIONAL_DEX_LANTURN,
    NATIONAL_DEX_PICHU,
    NATIONAL_DEX_CLEFFA,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_TOGEPI,
    NATIONAL_DEX_TOGETIC,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_MAREEP,
    NATIONAL_DEX_FLAAFFY,
    NATIONAL_DEX_AMPHAROS,
    NATIONAL_DEX_BELLOSSOM,
    NATIONAL_DEX_MARILL,
    NATIONAL_DEX_AZUMARILL,
    NATIONAL_DEX_SUDOWOODO,
    NATIONAL_DEX_POLITOED,
    NATIONAL_DEX_HOPPIP,
    NATIONAL_DEX_SKIPLOOM,
    NATIONAL_DEX_JUMPLUFF,
    NATIONAL_DEX_AIPOM,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_YANMA,
    NATIONAL_DEX_WOOPER,
    NATIONAL_DEX_QUAGSIRE,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_MURKROW,
    NATIONAL_DEX_SLOWKING,
    NATIONAL_DEX_MISDREAVUS,
    NATIONAL_DEX_UNOWN,
    NATIONAL_DEX_WOBBUFFET,
    NATIONAL_DEX_GIRAFARIG,
    NATIONAL_DEX_PINECO,
    NATIONAL_DEX_FORRETRESS,
    NATIONAL_DEX_DUNSPARCE,
    NATIONAL_DEX_GLIGAR,
    NATIONAL_DEX_STEELIX,
    NATIONAL_DEX_SNUBBULL,
    NATIONAL_DEX_GRANBULL,
    NATIONAL_DEX_QWILFISH,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SHUCKLE,
    NATIONAL_DEX_HERACROSS,
    NATIONAL_DEX_SNEASEL,
    NATIONAL_DEX_TEDDIURSA,
    NATIONAL_DEX_URSARING,
    NATIONAL_DEX_SLUGMA,
    NATIONAL_DEX_MAGCARGO,
    NATIONAL_DEX_SWINUB,
    NATIONAL_DEX_PILOSWINE,
    NATIONAL_DEX_CORSOLA,
    NATIONAL_DEX_REMORAID,
    NATIONAL_DEX_OCTILLERY,
    NATIONAL_DEX_DELIBIRD,
    NATIONAL_DEX_MANTINE,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_HOUNDOUR,
    NATIONAL_DEX_HOUNDOOM,
    NATIONAL_DEX_KINGDRA,
    NATIONAL_DEX_PHANPY,
    NATIONAL_DEX_DONPHAN,
    NATIONAL_DEX_PORYGON2,
    NATIONAL_DEX_STANTLER,
    NATIONAL_DEX_SMEARGLE,
    NATIONAL_DEX_TYROGUE,
    NATIONAL_DEX_HITMONTOP,
    NATIONAL_DEX_SMOOCHUM,
    NATIONAL_DEX_ELEKID,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_MILTANK,
    NATIONAL_DEX_BLISSEY,
    NATIONAL_DEX_RAIKOU,
    NATIONAL_DEX_ENTEI,
    NATIONAL_DEX_SUICUNE,
    NATIONAL_DEX_LARVITAR,
    NATIONAL_DEX_PUPITAR,
    NATIONAL_DEX_TYRANITAR,
    NATIONAL_DEX_LUGIA,
    NATIONAL_DEX_HO_OH,
    NATIONAL_DEX_CELEBI,
    // Hoenn
    NATIONAL_DEX_TREECKO,
    NATIONAL_DEX_GROVYLE,
    NATIONAL_DEX_SCEPTILE,
    NATIONAL_DEX_TORCHIC,
    NATIONAL_DEX_COMBUSKEN,
    NATIONAL_DEX_BLAZIKEN,
    NATIONAL_DEX_MUDKIP,
    NATIONAL_DEX_MARSHTOMP,
    NATIONAL_DEX_SWAMPERT,
    NATIONAL_DEX_POOCHYENA,
    NATIONAL_DEX_MIGHTYENA,
    NATIONAL_DEX_ZIGZAGOON,
    NATIONAL_DEX_LINOONE,
    NATIONAL_DEX_WURMPLE,
    NATIONAL_DEX_SILCOON,
    NATIONAL_DEX_BEAUTIFLY,
    NATIONAL_DEX_CASCOON,
    NATIONAL_DEX_DUSTOX,
    NATIONAL_DEX_LOTAD,
    NATIONAL_DEX_LOMBRE,
    NATIONAL_DEX_LUDICOLO,
    NATIONAL_DEX_SEEDOT,
    NATIONAL_DEX_NUZLEAF,
    NATIONAL_DEX_SHIFTRY,
    NATIONAL_DEX_TAILLOW,
    NATIONAL_DEX_SWELLOW,
    NATIONAL_DEX_WINGULL,
    NATIONAL_DEX_PELIPPER,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_SURSKIT,
    NATIONAL_DEX_MASQUERAIN,
    NATIONAL_DEX_SHROOMISH,
    NATIONAL_DEX_BRELOOM,
    NATIONAL_DEX_SLAKOTH,
    NATIONAL_DEX_VIGOROTH,
    NATIONAL_DEX_SLAKING,
    NATIONAL_DEX_NINCADA,
    NATIONAL_DEX_NINJASK,
    NATIONAL_DEX_SHEDINJA,
    NATIONAL_DEX_WHISMUR,
    NATIONAL_DEX_LOUDRED,
    NATIONAL_DEX_EXPLOUD,
    NATIONAL_DEX_MAKUHITA,
    NATIONAL_DEX_HARIYAMA,
    NATIONAL_DEX_AZURILL,
    NATIONAL_DEX_NOSEPASS,
    NATIONAL_DEX_SKITTY,
    NATIONAL_DEX_DELCATTY,
    NATIONAL_DEX_SABLEYE,
    NATIONAL_DEX_MAWILE,
    NATIONAL_DEX_ARON,
    NATIONAL_DEX_LAIRON,
    NATIONAL_DEX_AGGRON,
    NATIONAL_DEX_MEDITITE,
    NATIONAL_DEX_MEDICHAM,
    NATIONAL_DEX_ELECTRIKE,
    NATIONAL_DEX_MANECTRIC,
    NATIONAL_DEX_PLUSLE,
    NATIONAL_DEX_MINUN,
    NATIONAL_DEX_VOLBEAT,
    NATIONAL_DEX_ILLUMISE,
    NATIONAL_DEX_ROSELIA,
    NATIONAL_DEX_GULPIN,
    NATIONAL_DEX_SWALOT,
    NATIONAL_DEX_CARVANHA,
    NATIONAL_DEX_SHARPEDO,
    NATIONAL_DEX_WAILMER,
    NATIONAL_DEX_WAILORD,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SPOINK,
    NATIONAL_DEX_GRUMPIG,
    NATIONAL_DEX_SPINDA,
    NATIONAL_DEX_TRAPINCH,
    NATIONAL_DEX_VIBRAVA,
    NATIONAL_DEX_FLYGON,
    NATIONAL_DEX_CACNEA,
    NATIONAL_DEX_CACTURNE,
    NATIONAL_DEX_SWABLU,
    NATIONAL_DEX_ALTARIA,
    NATIONAL_DEX_ZANGOOSE,
    NATIONAL_DEX_SEVIPER,
    NATIONAL_DEX_LUNATONE,
    NATIONAL_DEX_SOLROCK,
    NATIONAL_DEX_BARBOACH,
    NATIONAL_DEX_WHISCASH,
    NATIONAL_DEX_CORPHISH,
    NATIONAL_DEX_CRAWDAUNT,
    NATIONAL_DEX_BALTOY,
    NATIONAL_DEX_CLAYDOL,
    NATIONAL_DEX_LILEEP,
    NATIONAL_DEX_CRADILY,
    NATIONAL_DEX_ANORITH,
    NATIONAL_DEX_ARMALDO,
    NATIONAL_DEX_FEEBAS,
    NATIONAL_DEX_MILOTIC,
    NATIONAL_DEX_CASTFORM,
    NATIONAL_DEX_KECLEON,
    NATIONAL_DEX_SHUPPET,
    NATIONAL_DEX_BANETTE,
    NATIONAL_DEX_DUSKULL,
    NATIONAL_DEX_DUSCLOPS,
    NATIONAL_DEX_TROPIUS,
    NATIONAL_DEX_CHIMECHO,
    NATIONAL_DEX_ABSOL,
    NATIONAL_DEX_WYNAUT,
    NATIONAL_DEX_SNORUNT,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_SPHEAL,
    NATIONAL_DEX_SEALEO,
    NATIONAL_DEX_WALREIN,
    NATIONAL_DEX_CLAMPERL,
    NATIONAL_DEX_HUNTAIL,
    NATIONAL_DEX_GOREBYSS,
    NATIONAL_DEX_RELICANTH,
    NATIONAL_DEX_LUVDISC,
    NATIONAL_DEX_BAGON,
    NATIONAL_DEX_SHELGON,
    NATIONAL_DEX_SALAMENCE,
    NATIONAL_DEX_BELDUM,
    NATIONAL_DEX_METANG,
    NATIONAL_DEX_METAGROSS,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,
    // Old Unown
    NATIONAL_DEX_OLD_UNOWN_B,
    NATIONAL_DEX_OLD_UNOWN_C,
    NATIONAL_DEX_OLD_UNOWN_D,
    NATIONAL_DEX_OLD_UNOWN_E,
    NATIONAL_DEX_OLD_UNOWN_F,
    NATIONAL_DEX_OLD_UNOWN_G,
    NATIONAL_DEX_OLD_UNOWN_H,
    NATIONAL_DEX_OLD_UNOWN_I,
    NATIONAL_DEX_OLD_UNOWN_J,
    NATIONAL_DEX_OLD_UNOWN_K,
    NATIONAL_DEX_OLD_UNOWN_L,
    NATIONAL_DEX_OLD_UNOWN_M,
    NATIONAL_DEX_OLD_UNOWN_N,
    NATIONAL_DEX_OLD_UNOWN_O,
    NATIONAL_DEX_OLD_UNOWN_P,
    NATIONAL_DEX_OLD_UNOWN_Q,
    NATIONAL_DEX_OLD_UNOWN_R,
    NATIONAL_DEX_OLD_UNOWN_S,
    NATIONAL_DEX_OLD_UNOWN_T,
    NATIONAL_DEX_OLD_UNOWN_U,
    NATIONAL_DEX_OLD_UNOWN_V,
    NATIONAL_DEX_OLD_UNOWN_W,
    NATIONAL_DEX_OLD_UNOWN_X,
    NATIONAL_DEX_OLD_UNOWN_Y,
    NATIONAL_DEX_OLD_UNOWN_Z,
};

#define LAST_KANTO_MON      NATIONAL_DEX_MEW
#define LAST_JOHTO_MON      NATIONAL_DEX_CELEBI
#define NATIONAL_DEX_COUNT  NATIONAL_DEX_DEOXYS

// Hoenn Pokédex order
enum {
    HOENN_DEX_NONE,
    HOENN_DEX_TREECKO,
    HOENN_DEX_GROVYLE,
    HOENN_DEX_SCEPTILE,
    HOENN_DEX_TORCHIC,
    HOENN_DEX_COMBUSKEN,
    HOENN_DEX_BLAZIKEN,
    HOENN_DEX_MUDKIP,
    HOENN_DEX_MARSHTOMP,
    HOENN_DEX_SWAMPERT,
    HOENN_DEX_POOCHYENA,
    HOENN_DEX_MIGHTYENA,
    HOENN_DEX_ZIGZAGOON,
    HOENN_DEX_LINOONE,
    HOENN_DEX_WURMPLE,
    HOENN_DEX_SILCOON,
    HOENN_DEX_BEAUTIFLY,
    HOENN_DEX_CASCOON,
    HOENN_DEX_DUSTOX,
    HOENN_DEX_CATERPIE,
    HOENN_DEX_METAPOD,
    HOENN_DEX_BUTTERFREE,
    HOENN_DEX_WEEDLE,
    HOENN_DEX_KAKUNA,
    HOENN_DEX_BEEDRILL,
    HOENN_DEX_LEDYBA,
    HOENN_DEX_LEDIAN,
    HOENN_DEX_LOTAD,
    HOENN_DEX_LOMBRE,
    HOENN_DEX_LUDICOLO,
    HOENN_DEX_SEEDOT,
    HOENN_DEX_NUZLEAF,
    HOENN_DEX_SHIFTRY,
    HOENN_DEX_TAILLOW,
    HOENN_DEX_SWELLOW,
    HOENN_DEX_SPEAROW,
    HOENN_DEX_FEAROW,
    HOENN_DEX_HOOTHOOT,
    HOENN_DEX_NOCTOWL,
    HOENN_DEX_WINGULL,
    HOENN_DEX_PELIPPER,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
    HOENN_DEX_SURSKIT,
    HOENN_DEX_MASQUERAIN,
    HOENN_DEX_SHROOMISH,
    HOENN_DEX_BRELOOM,
    HOENN_DEX_PARAS,
    HOENN_DEX_PARASECT,
    HOENN_DEX_SLAKOTH,
    HOENN_DEX_VIGOROTH,
    HOENN_DEX_SLAKING,
    HOENN_DEX_ABRA,
    HOENN_DEX_KADABRA,
    HOENN_DEX_ALAKAZAM,
    HOENN_DEX_NINCADA,
    HOENN_DEX_NINJASK,
    HOENN_DEX_SHEDINJA,
    HOENN_DEX_VENONAT,
    HOENN_DEX_VENOMOTH,
    HOENN_DEX_WHISMUR,
    HOENN_DEX_LOUDRED,
    HOENN_DEX_EXPLOUD,
    HOENN_DEX_MAKUHITA,
    HOENN_DEX_HARIYAMA,
    HOENN_DEX_GOLDEEN,
    HOENN_DEX_SEAKING,
    HOENN_DEX_MAGIKARP,
    HOENN_DEX_GYARADOS,
    HOENN_DEX_AZURILL,
    HOENN_DEX_MARILL,
    HOENN_DEX_AZUMARILL,
    HOENN_DEX_GEODUDE,
    HOENN_DEX_GRAVELER,
    HOENN_DEX_GOLEM,
    HOENN_DEX_NOSEPASS,
    HOENN_DEX_SKITTY,
    HOENN_DEX_DELCATTY,
    HOENN_DEX_ZUBAT,
    HOENN_DEX_GOLBAT,
    HOENN_DEX_CROBAT,
    HOENN_DEX_KRABBY,
    HOENN_DEX_KINGLER,
    HOENN_DEX_TENTACOOL,
    HOENN_DEX_TENTACRUEL,
    HOENN_DEX_SABLEYE,
    HOENN_DEX_MAWILE,
    HOENN_DEX_ONIX,
    HOENN_DEX_STEELIX,
    HOENN_DEX_ARON,
    HOENN_DEX_LAIRON,
    HOENN_DEX_AGGRON,
    HOENN_DEX_MACHOP,
    HOENN_DEX_MACHOKE,
    HOENN_DEX_MACHAMP,
    HOENN_DEX_MEDITITE,
    HOENN_DEX_MEDICHAM,
    HOENN_DEX_ELECTRIKE,
    HOENN_DEX_MANECTRIC,
    HOENN_DEX_PLUSLE,
    HOENN_DEX_MINUN,
    HOENN_DEX_MAGNEMITE,
    HOENN_DEX_MAGNETON,
    HOENN_DEX_VOLTORB,
    HOENN_DEX_ELECTRODE,
    HOENN_DEX_RATTATA,
    HOENN_DEX_RATICATE,
    HOENN_DEX_VOLBEAT,
    HOENN_DEX_ILLUMISE,
    HOENN_DEX_ODDISH,
    HOENN_DEX_GLOOM,
    HOENN_DEX_VILEPLUME,
    HOENN_DEX_BELLOSSOM,
    HOENN_DEX_EXEGGCUTE,
    HOENN_DEX_EXEGGUTOR,
    HOENN_DEX_DODUO,
    HOENN_DEX_DODRIO,
    HOENN_DEX_ROSELIA,
    HOENN_DEX_GULPIN,
    HOENN_DEX_SWALOT,
    HOENN_DEX_CARVANHA,
    HOENN_DEX_SHARPEDO,
    HOENN_DEX_WAILMER,
    HOENN_DEX_WAILORD,
    HOENN_DEX_NUMEL,
    HOENN_DEX_CAMERUPT,
    HOENN_DEX_SLUGMA,
    HOENN_DEX_MAGCARGO,
    HOENN_DEX_TORKOAL,
    HOENN_DEX_PONYTA,
    HOENN_DEX_RAPIDASH,
    HOENN_DEX_DIGLETT,
    HOENN_DEX_DUGTRIO,
    HOENN_DEX_GRIMER,
    HOENN_DEX_MUK,
    HOENN_DEX_KOFFING,
    HOENN_DEX_WEEZING,
    HOENN_DEX_SPOINK,
    HOENN_DEX_GRUMPIG,
    HOENN_DEX_MANKEY,
    HOENN_DEX_PRIMEAPE,
    HOENN_DEX_SANDSHREW,
    HOENN_DEX_SANDSLASH,
    HOENN_DEX_SPINDA,
    HOENN_DEX_SKARMORY,
    HOENN_DEX_TRAPINCH,
    HOENN_DEX_VIBRAVA,
    HOENN_DEX_FLYGON,
    HOENN_DEX_CACNEA,
    HOENN_DEX_CACTURNE,
    HOENN_DEX_SWABLU,
    HOENN_DEX_ALTARIA,
    HOENN_DEX_MISDREAVUS,
    HOENN_DEX_ZANGOOSE,
    HOENN_DEX_SEVIPER,
    HOENN_DEX_EKANS,
    HOENN_DEX_ARBOK,
    HOENN_DEX_LUNATONE,
    HOENN_DEX_SOLROCK,
    HOENN_DEX_CLEFFA,
    HOENN_DEX_CLEFAIRY,
    HOENN_DEX_CLEFABLE,
    HOENN_DEX_BARBOACH,
    HOENN_DEX_WHISCASH,
    HOENN_DEX_CORPHISH,
    HOENN_DEX_CRAWDAUNT,
    HOENN_DEX_BALTOY,
    HOENN_DEX_CLAYDOL,
    HOENN_DEX_LILEEP,
    HOENN_DEX_CRADILY,
    HOENN_DEX_ANORITH,
    HOENN_DEX_ARMALDO,
    HOENN_DEX_IGGLYBUFF,
    HOENN_DEX_JIGGLYPUFF,
    HOENN_DEX_WIGGLYTUFF,
    HOENN_DEX_FEEBAS,
    HOENN_DEX_MILOTIC,
    HOENN_DEX_CASTFORM,
    HOENN_DEX_STARYU,
    HOENN_DEX_STARMIE,
    HOENN_DEX_KECLEON,
    HOENN_DEX_DROWZEE,
    HOENN_DEX_HYPNO,
    HOENN_DEX_SHUPPET,
    HOENN_DEX_BANETTE,
    HOENN_DEX_DUSKULL,
    HOENN_DEX_DUSCLOPS,
    HOENN_DEX_TROPIUS,
    HOENN_DEX_CHIMECHO,
    HOENN_DEX_ABSOL,
    HOENN_DEX_VULPIX,
    HOENN_DEX_NINETALES,
    HOENN_DEX_GROWLITHE,
    HOENN_DEX_ARCANINE,
    HOENN_DEX_PICHU,
    HOENN_DEX_PIKACHU,
    HOENN_DEX_RAICHU,
    HOENN_DEX_PSYDUCK,
    HOENN_DEX_GOLDUCK,
    HOENN_DEX_WYNAUT,
    HOENN_DEX_WOBBUFFET,
    HOENN_DEX_NATU,
    HOENN_DEX_XATU,
    HOENN_DEX_GIRAFARIG,
    HOENN_DEX_PHANPY,
    HOENN_DEX_DONPHAN,
    HOENN_DEX_PINSIR,
    HOENN_DEX_HERACROSS,
    HOENN_DEX_SPINARAK,
    HOENN_DEX_ARIADOS,
    HOENN_DEX_RHYHORN,
    HOENN_DEX_RHYDON,
    HOENN_DEX_SNORUNT,
    HOENN_DEX_GLALIE,
    HOENN_DEX_DELIBIRD,
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_SEEL,
    HOENN_DEX_DEWGONG,
    HOENN_DEX_CLAMPERL,
    HOENN_DEX_HUNTAIL,
    HOENN_DEX_GOREBYSS,
    HOENN_DEX_RELICANTH,
    HOENN_DEX_CORSOLA,
    HOENN_DEX_CHINCHOU,
    HOENN_DEX_LANTURN,
    HOENN_DEX_LUVDISC,
    HOENN_DEX_HORSEA,
    HOENN_DEX_SEADRA,
    HOENN_DEX_KINGDRA,
    HOENN_DEX_MANTINE,
    HOENN_DEX_REMORAID,
    HOENN_DEX_OCTILLERY,
    HOENN_DEX_DITTO,
    HOENN_DEX_SUDOWOODO,
    HOENN_DEX_SMEARGLE,
    HOENN_DEX_BAGON,
    HOENN_DEX_SHELGON,
    HOENN_DEX_SALAMENCE,
    HOENN_DEX_BELDUM,
    HOENN_DEX_METANG,
    HOENN_DEX_METAGROSS,
    HOENN_DEX_REGIROCK,
    HOENN_DEX_REGICE,
    HOENN_DEX_REGISTEEL,
    HOENN_DEX_LATIAS,
    HOENN_DEX_LATIOS,
    HOENN_DEX_KYOGRE,
    HOENN_DEX_GROUDON,
    HOENN_DEX_RAYQUAZA,
    HOENN_DEX_JIRACHI,
    HOENN_DEX_DEOXYS,
    // End of Hoenn Dex (see HOENN_DEX_COUNT)
    // Here below have values but are excluded from the Pokédex
    HOENN_DEX_BULBASAUR,
    HOENN_DEX_IVYSAUR,
    HOENN_DEX_VENUSAUR,
    HOENN_DEX_CHARMANDER,
    HOENN_DEX_CHARMELEON,
    HOENN_DEX_CHARIZARD,
    HOENN_DEX_SQUIRTLE,
    HOENN_DEX_WARTORTLE,
    HOENN_DEX_BLASTOISE,
    HOENN_DEX_PIDGEY,
    HOENN_DEX_PIDGEOTTO,
    HOENN_DEX_PIDGEOT,
    HOENN_DEX_NIDORAN_F,
    HOENN_DEX_NIDORINA,
    HOENN_DEX_NIDOQUEEN,
    HOENN_DEX_NIDORAN_M,
    HOENN_DEX_NIDORINO,
    HOENN_DEX_NIDOKING,
    HOENN_DEX_MEOWTH,
    HOENN_DEX_PERSIAN,
    HOENN_DEX_POLIWAG,
    HOENN_DEX_POLIWHIRL,
    HOENN_DEX_POLIWRATH,
    HOENN_DEX_BELLSPROUT,
    HOENN_DEX_WEEPINBELL,
    HOENN_DEX_VICTREEBEL,
    HOENN_DEX_SLOWPOKE,
    HOENN_DEX_SLOWBRO,
    HOENN_DEX_FARFETCHD,
    HOENN_DEX_SHELLDER,
    HOENN_DEX_CLOYSTER,
    HOENN_DEX_GASTLY,
    HOENN_DEX_HAUNTER,
    HOENN_DEX_GENGAR,
    HOENN_DEX_CUBONE,
    HOENN_DEX_MAROWAK,
    HOENN_DEX_HITMONLEE,
    HOENN_DEX_HITMONCHAN,
    HOENN_DEX_LICKITUNG,
    HOENN_DEX_CHANSEY,
    HOENN_DEX_TANGELA,
    HOENN_DEX_KANGASKHAN,
    HOENN_DEX_MR_MIME,
    HOENN_DEX_SCYTHER,
    HOENN_DEX_JYNX,
    HOENN_DEX_ELECTABUZZ,
    HOENN_DEX_MAGMAR,
    HOENN_DEX_TAUROS,
    HOENN_DEX_LAPRAS,
    HOENN_DEX_EEVEE,
    HOENN_DEX_VAPOREON,
    HOENN_DEX_JOLTEON,
    HOENN_DEX_FLAREON,
    HOENN_DEX_PORYGON,
    HOENN_DEX_OMANYTE,
    HOENN_DEX_OMASTAR,
    HOENN_DEX_KABUTO,
    HOENN_DEX_KABUTOPS,
    HOENN_DEX_AERODACTYL,
    HOENN_DEX_SNORLAX,
    HOENN_DEX_ARTICUNO,
    HOENN_DEX_ZAPDOS,
    HOENN_DEX_MOLTRES,
    HOENN_DEX_DRATINI,
    HOENN_DEX_DRAGONAIR,
    HOENN_DEX_DRAGONITE,
    HOENN_DEX_MEWTWO,
    HOENN_DEX_MEW,
    HOENN_DEX_CHIKORITA,
    HOENN_DEX_BAYLEEF,
    HOENN_DEX_MEGANIUM,
    HOENN_DEX_CYNDAQUIL,
    HOENN_DEX_QUILAVA,
    HOENN_DEX_TYPHLOSION,
    HOENN_DEX_TOTODILE,
    HOENN_DEX_CROCONAW,
    HOENN_DEX_FERALIGATR,
    HOENN_DEX_SENTRET,
    HOENN_DEX_FURRET,
    HOENN_DEX_TOGEPI,
    HOENN_DEX_TOGETIC,
    HOENN_DEX_MAREEP,
    HOENN_DEX_FLAAFFY,
    HOENN_DEX_AMPHAROS,
    HOENN_DEX_POLITOED,
    HOENN_DEX_HOPPIP,
    HOENN_DEX_SKIPLOOM,
    HOENN_DEX_JUMPLUFF,
    HOENN_DEX_AIPOM,
    HOENN_DEX_SUNKERN,
    HOENN_DEX_SUNFLORA,
    HOENN_DEX_YANMA,
    HOENN_DEX_WOOPER,
    HOENN_DEX_QUAGSIRE,
    HOENN_DEX_ESPEON,
    HOENN_DEX_UMBREON,
    HOENN_DEX_MURKROW,
    HOENN_DEX_SLOWKING,
    HOENN_DEX_UNOWN,
    HOENN_DEX_PINECO,
    HOENN_DEX_FORRETRESS,
    HOENN_DEX_DUNSPARCE,
    HOENN_DEX_GLIGAR,
    HOENN_DEX_SNUBBULL,
    HOENN_DEX_GRANBULL,
    HOENN_DEX_QWILFISH,
    HOENN_DEX_SCIZOR,
    HOENN_DEX_SHUCKLE,
    HOENN_DEX_SNEASEL,
    HOENN_DEX_TEDDIURSA,
    HOENN_DEX_URSARING,
    HOENN_DEX_SWINUB,
    HOENN_DEX_PILOSWINE,
    HOENN_DEX_HOUNDOUR,
    HOENN_DEX_HOUNDOOM,
    HOENN_DEX_PORYGON2,
    HOENN_DEX_STANTLER,
    HOENN_DEX_TYROGUE,
    HOENN_DEX_HITMONTOP,
    HOENN_DEX_SMOOCHUM,
    HOENN_DEX_ELEKID,
    HOENN_DEX_MAGBY,
    HOENN_DEX_MILTANK,
    HOENN_DEX_BLISSEY,
    HOENN_DEX_RAIKOU,
    HOENN_DEX_ENTEI,
    HOENN_DEX_SUICUNE,
    HOENN_DEX_LARVITAR,
    HOENN_DEX_PUPITAR,
    HOENN_DEX_TYRANITAR,
    HOENN_DEX_LUGIA,
    HOENN_DEX_HO_OH,
    HOENN_DEX_CELEBI,
    HOENN_DEX_OLD_UNOWN_B,
    HOENN_DEX_OLD_UNOWN_C,
    HOENN_DEX_OLD_UNOWN_D,
    HOENN_DEX_OLD_UNOWN_E,
    HOENN_DEX_OLD_UNOWN_F,
    HOENN_DEX_OLD_UNOWN_G,
    HOENN_DEX_OLD_UNOWN_H,
    HOENN_DEX_OLD_UNOWN_I,
    HOENN_DEX_OLD_UNOWN_J,
    HOENN_DEX_OLD_UNOWN_K,
    HOENN_DEX_OLD_UNOWN_L,
    HOENN_DEX_OLD_UNOWN_M,
    HOENN_DEX_OLD_UNOWN_N,
    HOENN_DEX_OLD_UNOWN_O,
    HOENN_DEX_OLD_UNOWN_P,
    HOENN_DEX_OLD_UNOWN_Q,
    HOENN_DEX_OLD_UNOWN_R,
    HOENN_DEX_OLD_UNOWN_S,
    HOENN_DEX_OLD_UNOWN_T,
    HOENN_DEX_OLD_UNOWN_U,
    HOENN_DEX_OLD_UNOWN_V,
    HOENN_DEX_OLD_UNOWN_W,
    HOENN_DEX_OLD_UNOWN_X,
    HOENN_DEX_OLD_UNOWN_Y,
    HOENN_DEX_OLD_UNOWN_Z,
};

#define HOENN_DEX_COUNT HOENN_DEX_DEOXYS

// Kanto Pokédex order
enum {
    KANTO_DEX_NONE,
    // Kanto
    KANTO_DEX_BULBASAUR,
    KANTO_DEX_IVYSAUR,
    KANTO_DEX_VENUSAUR,
    KANTO_DEX_CHARMANDER,
    KANTO_DEX_CHARMELEON,
    KANTO_DEX_CHARIZARD,
    KANTO_DEX_SQUIRTLE,
    KANTO_DEX_WARTORTLE,
    KANTO_DEX_BLASTOISE,
    KANTO_DEX_CATERPIE,
    KANTO_DEX_METAPOD,
    KANTO_DEX_BUTTERFREE,
    KANTO_DEX_WEEDLE,
    KANTO_DEX_KAKUNA,
    KANTO_DEX_BEEDRILL,
    KANTO_DEX_WURMPLE,
    KANTO_DEX_SILCOON,
    KANTO_DEX_BEAUTIFLY,
    KANTO_DEX_CASCOON,
    KANTO_DEX_DUSTOX,
    KANTO_DEX_SPINARAK,
    KANTO_DEX_ARIADOS,
    KANTO_DEX_LEDYBA,
    KANTO_DEX_LEDIAN,
    KANTO_DEX_PIDGEY,
    KANTO_DEX_PIDGEOTTO,
    KANTO_DEX_PIDGEOT,
    KANTO_DEX_TAILLOW,
    KANTO_DEX_SWELLOW,
    KANTO_DEX_RATTATA,
    KANTO_DEX_RATICATE,
    KANTO_DEX_SENTRET,
    KANTO_DEX_FURRET,
    KANTO_DEX_POOCHYENA,
    KANTO_DEX_MIGHTYENA,
    KANTO_DEX_ZIGZAGOON,
    KANTO_DEX_LINOONE,
    KANTO_DEX_SPEAROW,
    KANTO_DEX_FEAROW,
    KANTO_DEX_HOOTHOOT,
    KANTO_DEX_NOCTOWL,
    KANTO_DEX_NATU,
    KANTO_DEX_XATU,
    KANTO_DEX_EKANS,
    KANTO_DEX_ARBOK,
    KANTO_DEX_PICHU,
    KANTO_DEX_PIKACHU,
    KANTO_DEX_RAICHU,
    KANTO_DEX_PLUSLE,
    KANTO_DEX_MINUN,
    KANTO_DEX_SANDSHREW,
    KANTO_DEX_SANDSLASH,
    KANTO_DEX_NIDORAN_F,
    KANTO_DEX_NIDORINA,
    KANTO_DEX_NIDOQUEEN,
    KANTO_DEX_NIDORAN_M,
    KANTO_DEX_NIDORINO,
    KANTO_DEX_NIDOKING,
    KANTO_DEX_CLEFFA,
    KANTO_DEX_CLEFAIRY,
    KANTO_DEX_CLEFABLE,
    KANTO_DEX_VULPIX,
    KANTO_DEX_NINETALES,
    KANTO_DEX_IGGLYBUFF,
    KANTO_DEX_JIGGLYPUFF,
    KANTO_DEX_WIGGLYTUFF,
    KANTO_DEX_ZUBAT,
    KANTO_DEX_GOLBAT,
    KANTO_DEX_CROBAT,
    KANTO_DEX_SUNKERN,
    KANTO_DEX_SUNFLORA,
    KANTO_DEX_ODDISH,
    KANTO_DEX_GLOOM,
    KANTO_DEX_VILEPLUME,
    KANTO_DEX_BELLOSSOM,
    KANTO_DEX_HOPPIP,
    KANTO_DEX_SKIPLOOM,
    KANTO_DEX_JUMPLUFF,
    KANTO_DEX_SEEDOT,
    KANTO_DEX_NUZLEAF,
    KANTO_DEX_SHIFTRY,
    KANTO_DEX_PARAS,
    KANTO_DEX_PARASECT,
    KANTO_DEX_SHROOMISH,
    KANTO_DEX_BRELOOM,
    KANTO_DEX_VENONAT,
    KANTO_DEX_VENOMOTH,
    KANTO_DEX_DIGLETT,
    KANTO_DEX_DUGTRIO,
    KANTO_DEX_MEOWTH,
    KANTO_DEX_PERSIAN,
    KANTO_DEX_SNUBBULL,
    KANTO_DEX_GRANBULL,
    KANTO_DEX_PSYDUCK,
    KANTO_DEX_GOLDUCK,
    KANTO_DEX_WHISMUR,
    KANTO_DEX_LOUDRED,
    KANTO_DEX_EXPLOUD,
    KANTO_DEX_MANKEY,
    KANTO_DEX_PRIMEAPE,
    KANTO_DEX_GROWLITHE,
    KANTO_DEX_ARCANINE,
    KANTO_DEX_HOUNDOUR,
    KANTO_DEX_HOUNDOOM,
    KANTO_DEX_POLIWAG,
    KANTO_DEX_POLIWHIRL,
    KANTO_DEX_POLIWRATH,
    KANTO_DEX_POLITOED,
    KANTO_DEX_ABRA,
    KANTO_DEX_KADABRA,
    KANTO_DEX_ALAKAZAM,
    KANTO_DEX_MACHOP,
    KANTO_DEX_MACHOKE,
    KANTO_DEX_MACHAMP,
    KANTO_DEX_MAKUHITA,
    KANTO_DEX_HARIYAMA,
    KANTO_DEX_BELLSPROUT,
    KANTO_DEX_WEEPINBELL,
    KANTO_DEX_VICTREEBEL,
    KANTO_DEX_TENTACOOL,
    KANTO_DEX_TENTACRUEL,
    KANTO_DEX_WINGULL,
    KANTO_DEX_PELIPPER,
    KANTO_DEX_GEODUDE,
    KANTO_DEX_GRAVELER,
    KANTO_DEX_GOLEM,
    KANTO_DEX_SLAKOTH,
    KANTO_DEX_VIGOROTH,
    KANTO_DEX_SLAKING,
    KANTO_DEX_PONYTA,
    KANTO_DEX_RAPIDASH,
    KANTO_DEX_SLOWPOKE,
    KANTO_DEX_SLOWBRO,
    KANTO_DEX_SLOWKING,
    KANTO_DEX_MAGNEMITE,
    KANTO_DEX_MAGNETON,
    KANTO_DEX_FARFETCHD,
    KANTO_DEX_DODUO,
    KANTO_DEX_DODRIO,
    KANTO_DEX_MURKROW,
    KANTO_DEX_SEEL,
    KANTO_DEX_DEWGONG,
    KANTO_DEX_GRIMER,
    KANTO_DEX_MUK,
    KANTO_DEX_SHUCKLE,
    KANTO_DEX_SHELLDER,
    KANTO_DEX_CLOYSTER,
    KANTO_DEX_GASTLY,
    KANTO_DEX_HAUNTER,
    KANTO_DEX_GENGAR,
    KANTO_DEX_ONIX,
    KANTO_DEX_STEELIX,
    KANTO_DEX_DROWZEE,
    KANTO_DEX_HYPNO,
    KANTO_DEX_SPOINK,
    KANTO_DEX_GRUMPIG,
    KANTO_DEX_KRABBY,
    KANTO_DEX_KINGLER,
    KANTO_DEX_VOLTORB,
    KANTO_DEX_ELECTRODE,
    KANTO_DEX_EXEGGCUTE,
    KANTO_DEX_EXEGGUTOR,
    KANTO_DEX_ROSELIA,
    KANTO_DEX_CUBONE,
    KANTO_DEX_MAROWAK,
    KANTO_DEX_TYROGUE,
    KANTO_DEX_HITMONLEE,
    KANTO_DEX_HITMONCHAN,
    KANTO_DEX_HITMONTOP,
    KANTO_DEX_PHANPY,
    KANTO_DEX_DONPHAN,
    KANTO_DEX_LICKITUNG,
    KANTO_DEX_KOFFING,
    KANTO_DEX_WEEZING,
    KANTO_DEX_SLUGMA,
    KANTO_DEX_MAGCARGO,
    KANTO_DEX_RHYHORN,
    KANTO_DEX_RHYDON,
    KANTO_DEX_NUMEL,
    KANTO_DEX_CAMERUPT,
    KANTO_DEX_CHANSEY,
    KANTO_DEX_BLISSEY,
    KANTO_DEX_TANGELA,
    KANTO_DEX_KANGASKHAN,
    KANTO_DEX_HORSEA,
    KANTO_DEX_SEADRA,
    KANTO_DEX_KINGDRA,
    KANTO_DEX_CHINCHOU,
    KANTO_DEX_LANTURN,
    KANTO_DEX_GOLDEEN,
    KANTO_DEX_SEAKING,
    KANTO_DEX_QWILFISH,
    KANTO_DEX_RELICANTH,
    KANTO_DEX_CORSOLA,
    KANTO_DEX_STARYU,
    KANTO_DEX_STARMIE,
    KANTO_DEX_WOOPER,
    KANTO_DEX_QUAGSIRE,
    KANTO_DEX_CLAMPERL,
    KANTO_DEX_HUNTAIL,
    KANTO_DEX_GOREBYSS,
    KANTO_DEX_MR_MIME,
    KANTO_DEX_SCYTHER,
    KANTO_DEX_SCIZOR,
    KANTO_DEX_SMOOCHUM,
    KANTO_DEX_JYNX,
    KANTO_DEX_ELEKID,
    KANTO_DEX_ELECTABUZZ,
    KANTO_DEX_MAGBY,
    KANTO_DEX_MAGMAR,
    KANTO_DEX_PINSIR,
    KANTO_DEX_HERACROSS,
    KANTO_DEX_TAUROS,
    KANTO_DEX_TEDDIURSA,
    KANTO_DEX_URSARING,
    KANTO_DEX_SABLEYE,
    KANTO_DEX_MAWILE,
    KANTO_DEX_ABSOL,
    KANTO_DEX_MAGIKARP,
    KANTO_DEX_GYARADOS,
    KANTO_DEX_LAPRAS,
    KANTO_DEX_CHIMECHO,
    KANTO_DEX_DITTO,
    KANTO_DEX_EEVEE,
    KANTO_DEX_VAPOREON,
    KANTO_DEX_JOLTEON,
    KANTO_DEX_FLAREON,
    KANTO_DEX_ESPEON,
    KANTO_DEX_UMBREON,
    KANTO_DEX_PORYGON,
    KANTO_DEX_PORYGON2,
    KANTO_DEX_OMANYTE,
    KANTO_DEX_OMASTAR,
    KANTO_DEX_KABUTO,
    KANTO_DEX_KABUTOPS,
    KANTO_DEX_AERODACTYL,
    KANTO_DEX_SNORLAX,
    KANTO_DEX_ARTICUNO,
    KANTO_DEX_ZAPDOS,
    KANTO_DEX_MOLTRES,
    KANTO_DEX_DRATINI,
    KANTO_DEX_DRAGONAIR,
    KANTO_DEX_DRAGONITE,
    KANTO_DEX_MEWTWO,
    KANTO_DEX_MEW,
    // End of Kanto Dex (see KANTO_DEX_COUNT)
    // Here below have values but are excluded from the Pokédex
    KANTO_DEX_CHIKORITA,
    KANTO_DEX_BAYLEEF,
    KANTO_DEX_MEGANIUM,
    KANTO_DEX_CYNDAQUIL,
    KANTO_DEX_QUILAVA,
    KANTO_DEX_TYPHLOSION,
    KANTO_DEX_TOTODILE,
    KANTO_DEX_CROCONAW,
    KANTO_DEX_FERALIGATR,
    KANTO_DEX_TOGEPI,
    KANTO_DEX_TOGETIC,
    KANTO_DEX_MAREEP,
    KANTO_DEX_FLAAFFY,
    KANTO_DEX_AMPHAROS,
    KANTO_DEX_MARILL,
    KANTO_DEX_AZUMARILL,
    KANTO_DEX_SUDOWOODO,
    KANTO_DEX_AIPOM,
    KANTO_DEX_YANMA,
    KANTO_DEX_MISDREAVUS,
    KANTO_DEX_UNOWN,
    KANTO_DEX_GIRAFARIG,
    KANTO_DEX_PINECO,
    KANTO_DEX_FORRETRESS,
    KANTO_DEX_DUNSPARCE,
    KANTO_DEX_GLIGAR,
    KANTO_DEX_SNEASEL,
    KANTO_DEX_SWINUB,
    KANTO_DEX_PILOSWINE,
    KANTO_DEX_REMORAID,
    KANTO_DEX_OCTILLERY,
    KANTO_DEX_DELIBIRD,
    KANTO_DEX_MANTINE,
    KANTO_DEX_SKARMORY,
    KANTO_DEX_STANTLER,
    KANTO_DEX_SMEARGLE,
    KANTO_DEX_MILTANK,
    KANTO_DEX_RAIKOU,
    KANTO_DEX_ENTEI,
    KANTO_DEX_SUICUNE,
    KANTO_DEX_LARVITAR,
    KANTO_DEX_PUPITAR,
    KANTO_DEX_TYRANITAR,
    KANTO_DEX_LUGIA,
    KANTO_DEX_HO_OH,
    KANTO_DEX_CELEBI,
    KANTO_DEX_TREECKO,
    KANTO_DEX_GROVYLE,
    KANTO_DEX_SCEPTILE,
    KANTO_DEX_TORCHIC,
    KANTO_DEX_COMBUSKEN,
    KANTO_DEX_BLAZIKEN,
    KANTO_DEX_MUDKIP,
    KANTO_DEX_MARSHTOMP,
    KANTO_DEX_SWAMPERT,
    KANTO_DEX_LOTAD,
    KANTO_DEX_LOMBRE,
    KANTO_DEX_LUDICOLO,
    KANTO_DEX_RALTS,
    KANTO_DEX_KIRLIA,
    KANTO_DEX_GARDEVOIR,
    KANTO_DEX_SURSKIT,
    KANTO_DEX_MASQUERAIN,
    KANTO_DEX_NINCADA,
    KANTO_DEX_NINJASK,
    KANTO_DEX_SHEDINJA,
    KANTO_DEX_AZURILL,
    KANTO_DEX_NOSEPASS,
    KANTO_DEX_SKITTY,
    KANTO_DEX_DELCATTY,
    KANTO_DEX_ARON,
    KANTO_DEX_LAIRON,
    KANTO_DEX_AGGRON,
    KANTO_DEX_MEDITITE,
    KANTO_DEX_MEDICHAM,
    KANTO_DEX_ELECTRIKE,
    KANTO_DEX_MANECTRIC,
    KANTO_DEX_VOLBEAT,
    KANTO_DEX_ILLUMISE,
    KANTO_DEX_GULPIN,
    KANTO_DEX_SWALOT,
    KANTO_DEX_CARVANHA,
    KANTO_DEX_SHARPEDO,
    KANTO_DEX_WAILMER,
    KANTO_DEX_WAILORD,
    KANTO_DEX_TORKOAL,
    KANTO_DEX_SPINDA,
    KANTO_DEX_TRAPINCH,
    KANTO_DEX_VIBRAVA,
    KANTO_DEX_FLYGON,
    KANTO_DEX_CACNEA,
    KANTO_DEX_CACTURNE,
    KANTO_DEX_SWABLU,
    KANTO_DEX_ALTARIA,
    KANTO_DEX_ZANGOOSE,
    KANTO_DEX_SEVIPER,
    KANTO_DEX_LUNATONE,
    KANTO_DEX_SOLROCK,
    KANTO_DEX_BARBOACH,
    KANTO_DEX_WHISCASH,
    KANTO_DEX_CORPHISH,
    KANTO_DEX_CRAWDAUNT,
    KANTO_DEX_BALTOY,
    KANTO_DEX_CLAYDOL,
    KANTO_DEX_LILEEP,
    KANTO_DEX_CRADILY,
    KANTO_DEX_ANORITH,
    KANTO_DEX_ARMALDO,
    KANTO_DEX_FEEBAS,
    KANTO_DEX_MILOTIC,
    KANTO_DEX_CASTFORM,
    KANTO_DEX_KECLEON,
    KANTO_DEX_SHUPPET,
    KANTO_DEX_BANETTE,
    KANTO_DEX_DUSKULL,
    KANTO_DEX_DUSCLOPS,
    KANTO_DEX_TROPIUS,
    KANTO_DEX_WYNAUT,
    KANTO_DEX_SNORUNT,
    KANTO_DEX_GLALIE,
    KANTO_DEX_SPHEAL,
    KANTO_DEX_SEALEO,
    KANTO_DEX_WALREIN,
    KANTO_DEX_LUVDISC,
    KANTO_DEX_BAGON,
    KANTO_DEX_SHELGON,
    KANTO_DEX_SALAMENCE,
    KANTO_DEX_BELDUM,
    KANTO_DEX_METANG,
    KANTO_DEX_METAGROSS,
    KANTO_DEX_REGIROCK,
    KANTO_DEX_REGICE,
    KANTO_DEX_REGISTEEL,
    KANTO_DEX_LATIAS,
    KANTO_DEX_LATIOS,
    KANTO_DEX_KYOGRE,
    KANTO_DEX_GROUDON,
    KANTO_DEX_RAYQUAZA,
    KANTO_DEX_JIRACHI,
    KANTO_DEX_DEOXYS,
    // Old Unown
    KANTO_DEX_OLD_UNOWN_B,
    KANTO_DEX_OLD_UNOWN_C,
    KANTO_DEX_OLD_UNOWN_D,
    KANTO_DEX_OLD_UNOWN_E,
    KANTO_DEX_OLD_UNOWN_F,
    KANTO_DEX_OLD_UNOWN_G,
    KANTO_DEX_OLD_UNOWN_H,
    KANTO_DEX_OLD_UNOWN_I,
    KANTO_DEX_OLD_UNOWN_J,
    KANTO_DEX_OLD_UNOWN_K,
    KANTO_DEX_OLD_UNOWN_L,
    KANTO_DEX_OLD_UNOWN_M,
    KANTO_DEX_OLD_UNOWN_N,
    KANTO_DEX_OLD_UNOWN_O,
    KANTO_DEX_OLD_UNOWN_P,
    KANTO_DEX_OLD_UNOWN_Q,
    KANTO_DEX_OLD_UNOWN_R,
    KANTO_DEX_OLD_UNOWN_S,
    KANTO_DEX_OLD_UNOWN_T,
    KANTO_DEX_OLD_UNOWN_U,
    KANTO_DEX_OLD_UNOWN_V,
    KANTO_DEX_OLD_UNOWN_W,
    KANTO_DEX_OLD_UNOWN_X,
    KANTO_DEX_OLD_UNOWN_Y,
    KANTO_DEX_OLD_UNOWN_Z,
};

#define KANTO_DEX_COUNT     KANTO_DEX_MEW

#endif // GUARD_CONSTANTS_POKEDEX_H
