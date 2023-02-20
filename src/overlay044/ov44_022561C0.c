#include <nitro.h>
#include <string.h>
#include <nitro/sinit.h>

#include "struct_decls/struct_02018340_decl.h"
#include "struct_decls/struct_0201CD38_decl.h"
#include "struct_decls/pokemon.h"
#include "struct_decls/box_pokemon.h"
#include "struct_decls/struct_party_decl.h"
#include "overlay025/struct_ov25_0225424C_decl.h"
#include "overlay025/struct_ov25_02255B34_decl.h"
#include "overlay044/struct_ov44_022565BC_decl.h"

#include "struct_defs/union_02022594_020225E0.h"
#include "overlay044/struct_ov44_022565BC_1.h"

#include "unk_0200D9E8.h"
#include "heap.h"
#include "unk_02073C2C.h"
#include "unk_02079D40.h"
#include "party.h"
#include "overlay005/ov5_021E622C.h"
#include "overlay025/ov25_02253CE0.h"
#include "overlay025/ov25_02255ACC.h"
#include "overlay044/ov44_022565BC.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    UnkStruct_ov44_022565BC_1 unk_04;
    UnkStruct_ov44_022565BC * unk_38;
    UnkStruct_ov25_0225424C * unk_3C;
    UnkStruct_ov25_02255B34 * unk_40;
    u16 unk_44;
    u16 unk_46;
    BoxPokemon * unk_48[6];
    BoxPokemon * unk_60[2];
} UnkStruct_ov44_0225621C;

static void NitroStaticInit(void);

static BOOL ov44_022561D4(void ** param0, UnkStruct_ov25_0225424C * param1, UnkStruct_02018340 * param2, u32 param3);
static BOOL ov44_0225621C(UnkStruct_ov44_0225621C * param0, UnkStruct_ov25_0225424C * param1, UnkStruct_02018340 * param2, u32 param3);
static void ov44_02256314(UnkStruct_ov44_0225621C * param0);
static void ov44_0225632C(u32 param0, u32 param1, u32 param2, void * param3);
static void ov44_02256338(UnkStruct_0201CD38 * param0, void * param1);
static void ov44_02256374(void * param0);
static void ov44_0225637C(UnkStruct_ov44_0225621C * param0, u32 param1);
static BOOL ov44_02256390(UnkStruct_ov44_0225621C * param0);
static BOOL ov44_022563D0(UnkStruct_ov44_0225621C * param0);
static BOOL ov44_022564F0(UnkStruct_ov44_0225621C * param0);
static BOOL ov44_0225653C(UnkStruct_ov44_0225621C * param0);
static BOOL ov44_02256588(UnkStruct_ov44_0225621C * param0);

static void NitroStaticInit (void)
{
    ov25_02254238(ov44_022561D4, ov44_02256374);
}

static BOOL ov44_022561D4 (void ** param0, UnkStruct_ov25_0225424C * param1, UnkStruct_02018340 * param2, u32 param3)
{
    UnkStruct_ov44_0225621C * v0 = (UnkStruct_ov44_0225621C *)Heap_AllocFromHeap(8, sizeof(UnkStruct_ov44_0225621C));

    if (v0 != NULL) {
        if (ov44_0225621C(v0, param1, param2, param3)) {
            if (sub_0200D9E8(ov44_02256338, v0, 1) != NULL) {
                *param0 = v0;
                return 1;
            }
        }

        Heap_FreeToHeap(v0);
    }

    return 0;
}

static BOOL ov44_0225621C (UnkStruct_ov44_0225621C * param0, UnkStruct_ov25_0225424C * param1, UnkStruct_02018340 * param2, u32 param3)
{
    Party * v0 = Party_GetFromSavedata(ov25_02254544(param1));
    Pokemon * v1;
    int v2;
    int v3 = 0;

    param0->unk_04.unk_30 = Party_GetCurrentCount(v0);

    for (v2 = 0; v2 < param0->unk_04.unk_30; v2++) {
        v1 = Party_GetPokemonBySlotIndex(v0, v2);

        if (sub_02074470(v1, 76, NULL)) {
            continue;
        }

        param0->unk_04.unk_00[v3] = sub_02079D40((const BoxPokemon *)v1);
        param0->unk_04.unk_18[v3] = sub_02074470(v1, 5, NULL);
        param0->unk_04.unk_24[v3] = sub_02074470(v1, 112, NULL);
        param0->unk_48[v3] = (BoxPokemon *)v1;
        v3++;
    }

    param0->unk_04.unk_30 = v3;
    param0->unk_04.unk_32 = 0;
    param0->unk_04.unk_33 = (param0->unk_04.unk_30 > 1) ? 1 : 0;

    if (ov44_022565BC(&(param0->unk_38), &(param0->unk_04), param2)) {
        static const UnkUnion_020225E0 v4[] = {
            {128, 168, 92, 132},
            {130, 164, 24, 72},
            {130, 164, 152, 200}
        };

        param0->unk_00 = 0;
        param0->unk_01 = 0;
        param0->unk_02 = 0;
        param0->unk_40 = ov25_02255ACC(v4, NELEMS(v4), ov44_0225632C, param0, 8);
        param0->unk_46 = 0;
        param0->unk_3C = param1;

        return 1;
    }

    return 0;
}

static void ov44_02256314 (UnkStruct_ov44_0225621C * param0)
{
    ov25_02255B34(param0->unk_40);
    ov44_022565F8(param0->unk_38);
    Heap_FreeToHeap(param0);
}

static void ov44_0225632C (u32 param0, u32 param1, u32 param2, void * param3)
{
    UnkStruct_ov44_0225621C * v0 = (UnkStruct_ov44_0225621C *)param3;

    v0->unk_44 = param0;
    v0->unk_46 = param1;
}

static void ov44_02256338 (UnkStruct_0201CD38 * param0, void * param1)
{
    static BOOL(*const v0[])(UnkStruct_ov44_0225621C *) = {
        ov44_02256390, ov44_022563D0, ov44_02256588,
    };

    UnkStruct_ov44_0225621C * v1 = (UnkStruct_ov44_0225621C *)param1;

    if (v1->unk_00 < NELEMS(v0)) {
        ov25_02254518(v1->unk_3C, v1->unk_40);

        if (v0[v1->unk_00](v1)) {
            ov44_02256314(v1);
            sub_0200DA58(param0);
            ov25_02254260(v1->unk_3C);
        }
    } else {
    }
}

static void ov44_02256374 (void * param0)
{
    ((UnkStruct_ov44_0225621C *)param0)->unk_02 = 1;
}

static void ov44_0225637C (UnkStruct_ov44_0225621C * param0, u32 param1)
{
    if (param0->unk_02 == 0) {
        param0->unk_00 = param1;
    } else {
        param0->unk_00 = 2;
    }

    param0->unk_01 = 0;
}

static BOOL ov44_02256390 (UnkStruct_ov44_0225621C * param0)
{
    switch (param0->unk_01) {
    case 0:
        ov44_02256744(param0->unk_38, 0);
        param0->unk_01++;
        break;
    case 1:
        if (ov44_02256768(param0->unk_38, 0)) {
            ov25_0225424C(param0->unk_3C);
            ov44_0225637C(param0, 1);
        }
        break;
    }

    return 0;
}

static BOOL ov44_022563D0 (UnkStruct_ov44_0225621C * param0)
{
    if (param0->unk_02) {
        ov44_0225637C(param0, 2);
        return 0;
    }

    switch (param0->unk_01) {
    case 0:
        if (param0->unk_46 == 1) {
            switch (param0->unk_44) {
            case 1:
                if (ov44_022564F0(param0)) {
                    ov44_02256744(param0->unk_38, 4);
                    param0->unk_01 = 1;
                }
                break;
            case 2:
                if (ov44_0225653C(param0)) {
                    ov44_02256744(param0->unk_38, 5);
                    param0->unk_01 = 1;
                }
                break;
            case 0:
                if (param0->unk_04.unk_30 > 1) {
                    ov44_02256744(param0->unk_38, 2);
                    param0->unk_01 = 2;
                } else {
                    ov25_02254424(1646);
                }
                break;
            }

            param0->unk_46 = 0;
        }
        break;
    case 1:
        if (ov44_02256774(param0->unk_38)) {
            param0->unk_01 = 0;
        }
        break;
    case 2:
        if (param0->unk_46 == 2) {
            ov44_02256744(param0->unk_38, 3);
            param0->unk_01 = 0;
            break;
        }

        if (param0->unk_46 == 3) {
            param0->unk_60[0] = param0->unk_48[param0->unk_04.unk_32];
            param0->unk_60[1] = param0->unk_48[param0->unk_04.unk_33];
            param0->unk_04.unk_31 = ov5_021E7790(param0->unk_60);
            ov44_02256744(param0->unk_38, 3);
            ov44_02256744(param0->unk_38, 6);
            param0->unk_01++;
        }
        break;
    case 3:
        if (ov44_02256768(param0->unk_38, 6)) {
            param0->unk_01 = 0;
        }
    }

    return 0;
}

static BOOL ov44_022564F0 (UnkStruct_ov44_0225621C * param0)
{
    if (param0->unk_04.unk_30 > 2) {
        do {
            if (++(param0->unk_04.unk_32) >= param0->unk_04.unk_30) {
                param0->unk_04.unk_32 = 0;
            }
        } while (param0->unk_04.unk_32 == param0->unk_04.unk_33);

        return 1;
    }

    return 0;
}

static BOOL ov44_0225653C (UnkStruct_ov44_0225621C * param0)
{
    if (param0->unk_04.unk_30 > 2) {
        do {
            if (++(param0->unk_04.unk_33) >= param0->unk_04.unk_30) {
                param0->unk_04.unk_33 = 0;
            }
        } while (param0->unk_04.unk_33 == param0->unk_04.unk_32);

        return 1;
    }

    return 0;
}

static BOOL ov44_02256588 (UnkStruct_ov44_0225621C * param0)
{
    switch (param0->unk_01) {
    case 0:
        ov44_02256744(param0->unk_38, 1);
        param0->unk_01++;
        break;
    case 1:
        if (ov44_02256774(param0->unk_38)) {
            return 1;
        }
        break;
    }

    return 0;
}
