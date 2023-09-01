#include <nitro.h>
#include <string.h>

#include "message.h"
#include "struct_decls/struct_0200B358_decl.h"
#include "strbuf.h"
#include "struct_decls/struct_02025E6C_decl.h"
#include "overlay066/struct_ov66_0222DFF8_decl.h"
#include "overlay066/struct_ov66_0222E71C_decl.h"

#include "struct_defs/union_02022594_020225E0.h"
#include "struct_defs/struct_0205AA50.h"
#include "overlay113/struct_ov113_02260818.h"
#include "overlay113/struct_ov113_02260D90.h"

#include "message.h"
#include "unk_0200B358.h"
#include "heap.h"
#include "unk_02018340.h"
#include "unk_0201D670.h"
#include "unk_02022594.h"
#include "strbuf.h"
#include "unk_02025E68.h"
#include "overlay066/ov66_0222DDF0.h"
#include "overlay066/ov66_022324F0.h"
#include "overlay113/ov113_02260620.h"

__attribute__((aligned(4))) static const u16 Unk_ov113_02260D6C[][2] = {
	{ 0x4210, 0x6f7b },
	{ 0x1A, 0x483C },
	{ 0x221, 0x1746 },
	{ 0x61A0, 0x7325 },
	{ 0x17D, 0x7DE },
	{ 0x3C70, 0x79D9 },
	{ 0xC, 0x5f3d },
	{ 0x3A80, 0x5400 },
	{ 0x2D4A, 0x5651 }
};
static const UnkStruct_ov113_02260D90 Unk_ov113_02260D90[] = {
	{ 0x0, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x2 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x0, 0x2 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x1 },
	{ 0x1, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x0, 0x2 },
	{ 0x1, 0x0 },
	{ 0x1, 0x1 },
	{ 0x1, 0x0 }
};

static const UnkUnion_02022594 Unk_ov113_02260D4C[] = {
    {0xA0, 0xC0, 0x0, 0x20},
    {0xA0, 0xC0, 0x20, 0x40},
    {0xA0, 0xC0, 0x40, 0x60},
    {0xA0, 0xC0, 0x60, 0x80},
    {0xA0, 0xC0, 0x80, 0xA0},
    {0xA0, 0xC0, 0xA0, 0xC0},
    {0xA0, 0xC0, 0xC0, 0xFF},
    {0xFF, 0x0, 0x0, 0x0}
};

void ov113_02260620 (MessageLoader * param0, UnkStruct_0200B358 * param1, UnkStruct_0205AA50 param2[], UnkStruct_ov66_0222DFF8 * param3, s32 param4)
{
    const UnkStruct_ov66_0222E71C * v0;
    UnkStruct_02025E6C * v1;
    Strbuf* v2;
    Strbuf* v3;
    Strbuf* v4;
    int v5 = 64;
    int v6;
    u32 v7, v8;
    u32 v9;

    v7 = ov66_02232B8C(param4);

    if (v7 == 0xffffffff) {
        return;
    }

    v8 = ov66_02232B78(param4);

    if (v8 == 0xffffffff) {
        return;
    }

    v0 = ov66_0222E374(param3, v8);

    if (v0 == NULL) {
        return;
    }

    if (v7 >= 8) {
        GF_ASSERT(0);
        return;
    }

    v1 = sub_02025E6C(118);
    ov66_0222E640(v0, v1, 118);

    v4 = sub_02025F04(v1, 118);
    v6 = sub_02025F30(v1);

    sub_0200B48C(param1, 0, v4, v6, 1, GAME_LANGUAGE);

    v2 = MessageLoader_GetNewStrbuf(param0, 0);
    v3 = Strbuf_Init(v5, 118);

    sub_0200C388(param1, v3, v2);
    sub_0201ADA4(&param2[v7], 0x0);

    if (ov66_0222E924(param3, v8) == 1) {
        v9 = (u32)(((7 & 0xff) << 16) | ((8 & 0xff) << 8) | ((0 & 0xff) << 0));
    } else {
        v9 = (u32)(((1 & 0xff) << 16) | ((2 & 0xff) << 8) | ((0 & 0xff) << 0));
    }

    sub_0201D78C(&param2[v7], 0, v3, 0, 0, 0, v9, NULL);
    sub_0201A954(&param2[v7]);
    Strbuf_Free(v4);
    Strbuf_Free(v2);
    Strbuf_Free(v3);
    Heap_FreeToHeap(v1);
}

void ov113_02260714 (UnkStruct_0205AA50 param0[], u32 param1)
{
    if (param1 >= 8) {
        GF_ASSERT(0);
        return;
    }

    sub_0201ACF4(&param0[param1]);
}

u16 ov113_0226072C (int param0, u32 param1)
{
    return Unk_ov113_02260D6C[param1 % NELEMS(Unk_ov113_02260D6C)][param0];
}

int ov113_02260748 (UnkStruct_ov113_02260818 * param0, int param1)
{
    int v0;
    int v1 = 0xff;

    v0 = sub_02022664(Unk_ov113_02260D4C);

    if (v0 < 6) {
        if ((param1 != v0) && (param0[v0].unk_02 != 0) && (param0[v0].unk_02 <= 493)) {
            v1 = v0;
        }
    } else if (v0 == 6) {
        v1 = 0xfe;
    } else {
        return 0xff;
    }

    return v1;
}

BOOL ov113_02260788 (int param0, int param1, BOOL param2)
{
    if ((param0 == 487) && (param1 > 0)) {
        return 0;
    }

    if ((param0 == 493) && (param2 == 0)) {
        return 0;
    }

    return Unk_ov113_02260D90[param0].unk_00;
}

BOOL ov113_022607B8 (int param0, int param1)
{
    if ((param0 == 487) && (param1 > 0)) {
        return 2;
    }

    return Unk_ov113_02260D90[param0].unk_01;
}
