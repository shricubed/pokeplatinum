#ifndef POKEPLATINUM_TUTOR_MOVESETS_H
#define POKEPLATINUM_TUTOR_MOVESETS_H

#include "consts/generated/c/moves.h"

enum TutorLocation {
    LOCATION_ROUTE_212 = 0,
    LOCATION_SURVIVAL_AREA,
    LOCATION_SNOWPOINT_CITY,
};

typedef struct TeachableMove {
    u16 moveID;
    u8 redCost;
    u8 blueCost;
    u8 yellowCost;
    u8 greenCost;
    enum TutorLocation location;
} TeachableMove;

static const TeachableMove sTeachableMoves[] = {
    { MOVE_DIVE,          2, 4, 2, 0, LOCATION_ROUTE_212      },
    { MOVE_MUD_SLAP,      4, 4, 0, 0, LOCATION_SURVIVAL_AREA  },
    { MOVE_FURY_CUTTER,   0, 8, 0, 0, LOCATION_ROUTE_212      },
    { MOVE_ICY_WIND,      0, 6, 0, 2, LOCATION_ROUTE_212      },
    { MOVE_ROLLOUT,       4, 2, 0, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_THUNDER_PUNCH, 2, 6, 0, 0, LOCATION_ROUTE_212      },
    { MOVE_FIRE_PUNCH,    2, 6, 0, 0, LOCATION_ROUTE_212      },
    { MOVE_SUPERPOWER,    8, 0, 0, 0, LOCATION_SURVIVAL_AREA  },
    { MOVE_ICE_PUNCH,     2, 6, 0, 0, LOCATION_ROUTE_212      },
    { MOVE_IRON_HEAD,     6, 0, 2, 0, LOCATION_SURVIVAL_AREA  },
    { MOVE_AQUA_TAIL,     6, 0, 0, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_OMINOUS_WIND,  0, 6, 0, 2, LOCATION_ROUTE_212      },
    { MOVE_GASTRO_ACID,   4, 0, 2, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_SNORE,         2, 0, 4, 2, LOCATION_SNOWPOINT_CITY },
    { MOVE_SPITE,         0, 0, 8, 0, LOCATION_SNOWPOINT_CITY },
    { MOVE_AIR_CUTTER,    2, 4, 0, 2, LOCATION_ROUTE_212      },
    { MOVE_HELPING_HAND,  2, 0, 4, 2, LOCATION_SNOWPOINT_CITY },
    { MOVE_ENDEAVOR,      4, 0, 4, 0, LOCATION_SURVIVAL_AREA  },
    { MOVE_OUTRAGE,       6, 0, 2, 0, LOCATION_SURVIVAL_AREA  },
    { MOVE_ANCIENT_POWER, 6, 0, 0, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_SYNTHESIS,     0, 0, 2, 6, LOCATION_SNOWPOINT_CITY },
    { MOVE_SIGNAL_BEAM,   2, 2, 2, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_ZEN_HEADBUTT,  0, 4, 4, 0, LOCATION_ROUTE_212      },
    { MOVE_VACUUM_WAVE,   2, 4, 0, 2, LOCATION_ROUTE_212      },
    { MOVE_EARTH_POWER,   6, 0, 0, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_GUNK_SHOT,     4, 2, 0, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_TWISTER,       6, 0, 0, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_SEED_BOMB,     4, 0, 0, 4, LOCATION_SURVIVAL_AREA  },
    { MOVE_IRON_DEFENSE,  4, 2, 2, 0, LOCATION_SURVIVAL_AREA  },
    { MOVE_MAGNET_RISE,   0, 2, 4, 2, LOCATION_SNOWPOINT_CITY },
    { MOVE_LAST_RESORT,   0, 0, 0, 8, LOCATION_SNOWPOINT_CITY },
    { MOVE_BOUNCE,        4, 0, 2, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_TRICK,         0, 4, 4, 0, LOCATION_ROUTE_212      },
    { MOVE_HEAT_WAVE,     4, 2, 0, 2, LOCATION_SURVIVAL_AREA  },
    { MOVE_KNOCK_OFF,     4, 4, 0, 0, LOCATION_ROUTE_212      },
    { MOVE_SUCKER_PUNCH,  0, 6, 2, 0, LOCATION_ROUTE_212      },
    { MOVE_SWIFT,         0, 2, 2, 4, LOCATION_SNOWPOINT_CITY },
    { MOVE_UPROAR,        0, 0, 6, 2, LOCATION_SNOWPOINT_CITY }
};

#define MOVESET_MASK_SIZE (s32)((NELEMS(sTeachableMoves) + 7) / 8)

// Each of the bits in this array correspond to a move in sTeachableMoves
// Therefore the size is dependent on how many teachable moves exist

typedef struct MovesetMask {
    u8 maskData[MOVESET_MASK_SIZE];
} MovesetMask;

#endif // POKEPLATINUM_TUTOR_MOVESETS_H

