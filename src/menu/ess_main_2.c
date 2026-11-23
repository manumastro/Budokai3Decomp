#include "common.h"

extern s16 D_0046B1CE[];
void func_0026D9C0(u8 *a0, s32 a1) {
    switch (a1) {
    case 0x200:
        if (*(s8 *)(a0 + 0xA0) < 0) {
            *(s8 *)(a0 + 0xA0) = 0;
        }
        break;
    case 0x201:
        if (*(s8 *)(a0 + 0xA0) <= 0) {
            *(s8 *)(a0 + 0xA0) = 1;
        }
        break;
    case 0x202:
        if (*(s8 *)(a0 + 0xA0) < 2) {
            *(s8 *)(a0 + 0xA0) = 2;
        }
        break;
    case 0x203:
        if (*(s8 *)(a0 + 0xA0) < 3) {
            *(s8 *)(a0 + 0xA0) = 3;
        }
        break;
    default:
        if (a1 >= 0x1C9 && a1 < 0x1EF) {
            *(u64 *)(a0 + 0x90) |= (u64)1 << D_0046B1CE[a1];
        } else if (a1 >= 0x205 && a1 < 0x211) {
            *(u16 *)(a0 + 0xA4) |= (u16)(1 << (a1 - 0x205));
        } else if (a1 == 0x204) {
            *(u16 *)(a0 + 0xA4) |= 0x800;
        }
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DAF0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DC80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DE30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E000);
extern u8 *gEssMain;
extern void Trade_Start(void);
extern void EssInfo_Init(void);
extern void Shop_InitZenie(void);
extern void EssList_Clear(void);
extern void EssEdit_Clear(void);

void Ess_Init(void) {
    gEssMain = 0;
    Trade_Start();
    EssInfo_Init();
    EssEdit_Clear();
    Shop_InitZenie();
    EssList_Clear();
}
extern void *amTask_Create();
extern void Ess_TaskMain();
extern char D_0046B470[];
extern void Scene_SetReady();
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();

void Ess_Start(void) {
    *(void **)(gEssMain + 0x18) = amTask_Create(Ess_TaskMain, 0, 0x3100, 0x200, 1, D_0046B470);
    memset(*(u8 **)(gEssMain + 0x18) + 0x30, 0, 0x1C);
    Scene_SetReady();
    SoundRpc_SendWord2(-1);
    SoundRpc_SendWord(0);
    amAdx_Stop(-1);
}
extern s32 D_0058F5D0[4];
extern void StrStatus_Exit(void *);
extern void Help_Exit();
extern void Save_Exit();
extern s32 amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);

void func_0026E3B0(void) {
    s32 var_s1;
    s32 *var_s0;
    s32 temp_a0;
    void *_arg4;
    u8 *temp_a0_2;

    _arg4 = *(void **)((u8 *)gEssMain + 0x20);
    StrStatus_Exit(_arg4);
    Help_Exit();
    Save_Exit();
    amTask_KillGroup(0x200, 1, 0);
    var_s1 = 0;
    var_s0 = NULL;
    do {
        temp_a0 = *(s32 *)((s32)gEssMain + (s32)var_s0);
        if (temp_a0 != 0) {
            amCdFs_Close((void *)temp_a0, 0);
        }
        var_s1 = var_s1 + 1;
        var_s0 += 1;
    } while (var_s1 < 3);
    var_s1 = 0;
    if (0 < D_0058F5D0[0]) {
        var_s0 = &D_0058F5D0[0];
        do {
            amCdFs_ReleaseCache(*(u8 **)((u8 *)var_s0 + 4));
            var_s1 += 1;
            var_s0 += 1;
        } while (var_s1 < D_0058F5D0[0]);
    }
    temp_a0_2 = *(u8 **)((u8 *)gEssMain + 0x270);
    if (temp_a0_2 != NULL) {
        amHeap_Free(temp_a0_2);
    }
    amHeap_Free(gEssMain);
    gEssMain = NULL;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E4A0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E640);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E780);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E950);
extern void *gEssEdit;
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_002B4C80(s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0026E950(void);
// compiled with optimize_for_size on (the rest of the file is not)
#pragma push
#pragma optimize_for_size on
void func_0026EC70(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_a0;
    u8 *temp_s0;

    temp_a0 = *(u8 **)((u8 *)gEssEdit + 0x1C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401100;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401100);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    temp_s0 = ((u8 *)gEssEdit) + 0x28;
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0x18)) + 0x14) + (*(s32 *)((u8 *)gEssEdit + 0x28) * 4)), 1, (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta);
    *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
    func_00228410();
    func_00133780(0, 0);
    if (func_002B4C80(0) == 4) {
        var_v1 = (int *)(&func_0026E950);
        if (&func_0026E950 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
#pragma pop

INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026ED60);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026EF00);
extern void *gEssEdit;

void EssEdit_Clear(void) {
    gEssEdit = 0;
}
extern void *amTask_Create();
extern void func_0026EF00();
extern char D_0046B480[];
extern void SeReady_Start();

void EssEdit_Start(void) {
    *(void **)((u8 *)gEssEdit + 0x10) = amTask_Create(func_0026EF00, 0, 0x3000, 0x200, 2, D_0046B480);
    memset(*(u8 **)((u8 *)gEssEdit + 0x10) + 0x30, 0, 0x1C);
    SeReady_Start();
}
extern void func_0027E120(void *);
extern void func_0027E070(void);
extern void SklEdit_Close(void);
extern void amCdFs_Close(void *, s32);

void EssEdit_Exit(void) {
    s32 i;
    s32 off;
    func_0027E120(*(void **)((u8 *)gEssEdit + 0x14));
    func_0027E070();
    SklEdit_Close();
    amTask_Kill(*(void **)((u8 *)gEssEdit + 0x10));
    for (i = 0, off = 0; i < 2; i++, off += 4) {
        void *p = *(void **)((u8 *)gEssEdit + off);
        if (p != 0) {
            amCdFs_Close(p, 0);
        }
    }
    amHeap_Free(gEssEdit);
    gEssEdit = 0;
}
