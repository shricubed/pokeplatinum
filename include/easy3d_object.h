#ifndef POKEPLATINUM_EASY3D_OBJECT_H
#define POKEPLATINUM_EASY3D_OBJECT_H

#include "struct_decls/struct_02006C24_decl.h"
#include "constants/heap.h"

#include <nnsys.h>
#include <nitro/fx/fx.h>

typedef struct Easy3DModel {
    void *data;
    NNSG3dResMdlSet *set;
    NNSG3dResMdl *model;
    NNSG3dResTex *texture;
} Easy3DModel;

typedef struct Easy3DAnim {
    void *data;
    void *anim;
    NNSG3dAnmObj *animObj;
    fx32 frame;
    BOOL dataBorrowed; // Whether the data field is borrowed from another object (i.e. not allocated by this object)
} Easy3DAnim;

typedef struct Easy3DObject {
    NNSG3dRenderObj unk_00;
    VecFx32 unk_54;
    VecFx32 unk_60;
    BOOL unk_6C;
    u16 unk_70[3];
    u8 padding_76[2];
} Easy3DObject;

void Easy3DModel_Load(Easy3DModel *model, u32 narcIndex, u32 memberIndex, u32 heapID);
void Easy3DModel_LoadFrom(Easy3DModel *model, NARC *narc, u32 memberIndex, u32 heapID);
void Easy3DModel_Release(Easy3DModel *model);

void Easy3DAnim_LoadFrom(Easy3DAnim *anim, const Easy3DModel *model, NARC *narc, u32 memberIndex, u32 heapID, NNSFndAllocator *allocator);
void Easy3DAnim_LoadFromData(Easy3DAnim *anim, const Easy3DModel *model, void *data, NNSFndAllocator *allocator);
void Easy3DAnim_Release(Easy3DAnim *anim, NNSFndAllocator *allocator);
void Easy3DAnim_UpdateLooped(Easy3DAnim *anim, fx32 frameDelta);
BOOL Easy3DAnim_Update(Easy3DAnim *anim, fx32 frameDelta);
void Easy3DAnim_SetFrame(Easy3DAnim *anim, fx32 frame);
fx32 Easy3DAnim_GetFrame(const Easy3DAnim *anim);
fx32 Easy3DAnim_GetFrameCount(const Easy3DAnim *anim);

void sub_02017258(Easy3DObject * param0, Easy3DModel * param1);
void sub_0201727C(Easy3DObject * param0, Easy3DAnim * param1);
void sub_02017288(Easy3DObject * param0, Easy3DAnim * param1);
void sub_02017294(Easy3DObject * param0);
void sub_02017330(Easy3DObject * param0, const MtxFx33 * param1);
void sub_02017348(Easy3DObject * param0, BOOL param1);
BOOL sub_0201734C(const Easy3DObject * param0);
void sub_02017350(Easy3DObject * param0, fx32 param1, fx32 param2, fx32 param3);
void sub_02017358(const Easy3DObject * param0, fx32 * param1, fx32 * param2, fx32 * param3);
void sub_0201736C(Easy3DObject * param0, fx32 param1, fx32 param2, fx32 param3);
void sub_02017374(const Easy3DObject * param0, fx32 * param1, fx32 * param2, fx32 * param3);
void sub_02017388(Easy3DObject * param0, u16 param1, u32 param2);
u16 sub_02017394(const Easy3DObject * param0, u32 param1);

#endif // POKEPLATINUM_EASY3D_OBJECT_H
