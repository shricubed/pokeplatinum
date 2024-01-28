#ifndef POKEPLATINUM_CORE_SYS_H
#define POKEPLATINUM_CORE_SYS_H

#include "functypes/funcptr_02017798.h"
#include "struct_decls/struct_0201CD88_decl.h"
#include "overlay023/funcptr_ov23_022537D4.h"

typedef enum ButtonMode {
    BUTTON_MODE_NORMAL = 0,
    BUTTON_MODE_START_IS_X = 1,
    BUTTON_MODE_SWAP_XY = 2,
    BUTTON_MODE_L_IS_A = 3,
} ButtonMode;

typedef struct CoreSys {
    UnkFuncPtr_02017798 unk_00;
    void * unk_04;
    UnkFuncPtr_02017798 unk_08;
    void * unk_0C;
    UnkFuncPtr_ov23_022537D4 unk_10;
    UnkFuncPtr_ov23_022537D4 unk_14;
    UnkStruct_0201CD88 * unk_18;
    UnkStruct_0201CD88 * unk_1C;
    UnkStruct_0201CD88 * unk_20;
    UnkStruct_0201CD88 * unk_24;
    u32 * unk_28;
    u32 unk_2C;
    u32 unk_30;
    ButtonMode buttonMode;
    u32 heldKeysRaw;
    u32 pressedKeysRaw;
    u32 pressedKeysRepeatableRaw;
    u32 heldKeys;
    u32 pressedKeys;
    u32 pressedKeysRepeatable;
    int autorepeatTimer;
    int autorepeatRate;
    int autorepeatDelay;
    u16 unk_5C;
    u16 unk_5E;
    u16 touchInput;
    u16 unk_62;
    u8 unk_64;
    u8 unk_65;
    u8 unk_66;
    u8 unk_67;
    u8 unk_68;
    u8 padding_69[3];
    BOOL unk_6C;
    u32 * unk_70;
} CoreSys;

extern CoreSys gCoreSys;

#endif // POKEPLATINUM_CORE_SYS_H
