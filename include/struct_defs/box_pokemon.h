#ifndef POKEPLATINUM_BOX_POKEMON_H
#define POKEPLATINUM_BOX_POKEMON_H

#include "struct_defs/struct_02075454_1.h"
#include "struct_defs/struct_02075454_2.h"
#include "struct_defs/struct_02075454_3.h"
#include "struct_defs/struct_02075454.h"

typedef struct BoxPokemon_t {
    u32 unk_00;
    u16 unk_04_0 : 1;
    u16 unk_04_1 : 1;
    u16 unk_04_2 : 1;
    u16 unk_04_3 : 13;
    u16 unk_06;
    u8 unk_08[sizeof(UnkStruct_02075454)
              + sizeof(UnkStruct_02075454_1)
              + sizeof(UnkStruct_02075454_2)
              + sizeof(UnkStruct_02075454_3)];
} BoxPokemon;

#endif // POKEPLATINUM_BOX_POKEMON_H
