#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027AC90);

void func_0027B7D0(void) {
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027B7E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027B860);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027BDF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027C140);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027C2F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027CB20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027CF80);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D1D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D330);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D3B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D820);
s32 CsModel_Ease(s32, f32, f32);
s32 func_00280D90(s32, f32, f32);
s32 func_002F9510(s32);
void func_0027DA00(u8 *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)temp_s0 + 0x60) = fparg0;
    temp_f1 = (fparg0 - *(f32 *)((u8 *)temp_s0 + 0x5C)) / fparg1;
    *(f32 *)((u8 *)temp_s0 + 0x64) = temp_f1;
    *(f32 *)((u8 *)temp_s0 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x5C) + temp_f1);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x28);
    if (temp_a0 != 0) {
        func_002F9510(temp_a0);
    }
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x2C);
    if (temp_a0_2 != 0) {
        func_00280D90(temp_a0_2, fparg0, fparg1);
    }
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x30);
    if (temp_a0_3 != 0) {
        CsModel_Ease(temp_a0_3, fparg0, fparg1);
    }
}

s8 func_0027DAA0(u8 *arg0) {
    return *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 2);
}

s8 func_0027DAB0(u8 *arg0) {
    return **(s8 **)((u8 *)arg0 + 0x30);
}

void func_0027DAC0(u8 *arg0, s8 arg1) {
    **(s8 **)((u8 *)arg0 + 0x30) = arg1;
}

s8 func_0027DAD0(u8 *arg0) {
    return *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 5);
}

s8 func_0027DAE0(u8 *arg0) {
    return *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 4);
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027DAF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027DB20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027DDC0);
extern void *D_00470810;
s32 func_0027E000(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s16 *)((u8 *)(*(u8 **)((u8 *)D_00470810 + 0)) + 4) == 3) && (*(s16 *)((u8 *)(*(u8 **)((u8 *)D_00470810 + 4)) + 4) == 3)) {
        var_v0 = 1;
    }
    return var_v0;
}

extern void CsSubArena_Init(void);
extern void CsSubStat_Init(void);
extern void DataErase_Clear(void);

extern void CsSubArena_Init(void);
extern void CsSubStat_Init(void);
extern void DataErase_Clear(void);
void func_0027E040(void) {
    D_00470810 = 0;
    CsSubStat_Init();
    CsSubArena_Init();
    DataErase_Clear();
}

extern void amHeap_Free(void *);
s32 amCdFs_Close(s32, s32);
extern void amHeap_Free(void *);
void func_0027E070(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;

    temp_s0 = D_00470810;
    *(s8 *)((u8 *)temp_s0 + 0x10) = (s8) (*(s8 *)((u8 *)temp_s0 + 0x10) - 1);
    if (*(s8 *)((u8 *)temp_s0 + 0x10) <= 0) {
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0);
        if (temp_a0 != 0) {
            amCdFs_Close(temp_a0, 0);
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 4);
        if (temp_a0_2 != 0) {
            amCdFs_Close(temp_a0_2, 0);
        }
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 8);
        if (temp_a0_3 != NULL) {
            amHeap_Free(temp_a0_3);
        }
        temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 0xC);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        amHeap_Free(temp_s0);
        D_00470810 = NULL;
    }
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027E120);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027E2D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027E7E0);
s32 func_0022D0E0(s32, s32);
s32 func_0022D4B0(s32, s32);
void func_0027E880(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
    }
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x10);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x18);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x1C);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x20);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x2C);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x30);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    temp_a0_11 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    temp_a0_12 = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp_a0_12 != 0) {
        func_0022D4B0(temp_a0_12, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027E9C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027EA60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027EC10);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027EE70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F070);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F290);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F4A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F680);
extern void A2d_FlushList(void);
extern void amCamera_Init(void *);
extern void amCdFs_ReleaseCache(void *);
extern void amNode_Free(void *);
extern void *amNode_Alloc(void);
extern void func_002A9EA0(void);
extern void amFile_Load(void *);
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern void amAdx_Pause();
extern void amSound_LoadBank();
extern void amMotion_Create(void *);
#include "battle/script.h"
extern void amAdx_Pause(s32, s32);

extern void A2d_FlushList(void);
extern void func_002A9AE0(s32, s32, s32, s32);
extern void func_002A9C00(s32, s32, s32, s32, s32);
extern void func_002A9EA0(void);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);
extern void func_00144A40(s32, s32, f32);
extern void func_00144770(s32, f32);
extern void SoundRpc_SendWord(s32);
extern void func_001445C0(s32);
extern void SoundRpc_SendWord2(s32);
extern void func_00144050(s32, s32, s32, s32, f32, f32, f32);
extern void func_00143E70(s32, s32, s32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern void memset(void *, s32, s32);
extern void func_002B0A40(s32);
extern void func_00298E10(s32);
extern void func_00298E00(s32);
extern void *amMotion_CreateFromObj(s32, s32, s32);

extern void amMotion_BindAnim(s32, s32, s32);

extern void amNode_Free(void *);
extern void *amNode_Alloc(void);
extern void amCamera_Init(void *);
extern s32 amSound_LoadBank2(void *, void *);

extern void amMotSet_Apply(void *, f32, s32);
void func_0027F890(void) {
    A2d_FlushList();
}


void func_0027F8A0(void) {
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F8B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F9F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FAE0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FCA0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FE10);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FEB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_002800F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_002802E0);
extern s32 D_00470030;
extern s32 D_00470034;
extern s32 gVsCharasel;
void func_00280470(void) {
    func_0027D820(1);
    gVsCharasel = 0;
    D_00470030 = -1;
    D_00470034 = -1;
    func_0027E040();
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_002804A0);
