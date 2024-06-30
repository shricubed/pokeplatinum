#ifndef POKEPLATINUM_UNK_02025CB0_H
#define POKEPLATINUM_UNK_02025CB0_H

#include "struct_decls/struct_02025CCC_decl.h"
#include "struct_defs/struct_02055BA8.h"
#include "savedata.h"

int SystemData_SaveSize(void);
void SystemData_Init(SystemData * param0);
SystemData * sub_02025CCC(SaveData * param0);
UnkStruct_02055BA8 * sub_02025CD8(SaveData * param0);
void sub_02025CE4(SystemData * param0);
BOOL sub_02025D10(const SystemData * param0);
BOOL sub_02025D40(const SystemData * param0);
u8 sub_02025D5C(const SystemData * param0);
u8 sub_02025D60(const SystemData * param0);
BOOL sub_02025D64(const SystemData * param0);
void sub_02025D6C(SystemData * param0, BOOL param1);
s32 sub_02025D74(const SystemData * param0);
void sub_02025D78(SystemData * param0, s32 param1);
void sub_02025D84(UnkStruct_02055BA8 * param0);
BOOL sub_02025DB8(const UnkStruct_02055BA8 * param0);
void sub_02025DC8(UnkStruct_02055BA8 * param0, int param1);
void sub_02025DE8(UnkStruct_02055BA8 * param0);

#endif // POKEPLATINUM_UNK_02025CB0_H
