#include "common.h"

#if 0
// differs: 24 of 74: the case tests are now a beq chain, but the original tests 0x203 first and lays the bodies out in the other order (li v1 constants and the branch targets of the four cases differ); the range tests after it match
extern s16 D_0046B1CE[];

void func_0026D9C0(u8 *a0, s32 a1) {
    switch (a1) {
    case 0x203:
        if (*(s8 *)(a0 + 0xA0) < 3) {
            *(s8 *)(a0 + 0xA0) = 3;
        }
        break;
    case 0x202:
        if (*(s8 *)(a0 + 0xA0) < 2) {
            *(s8 *)(a0 + 0xA0) = 2;
        }
        break;
    case 0x201:
        if (*(s8 *)(a0 + 0xA0) <= 0) {
            *(s8 *)(a0 + 0xA0) = 1;
        }
        break;
    case 0x200:
        if (*(s8 *)(a0 + 0xA0) < 0) {
            *(s8 *)(a0 + 0xA0) = 0;
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
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026D9C0);
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
#if 0
// differs: 7 of 60: the first loop (count in s1, offset in s0) matches; the second loop's registers are swapped (the original keeps the index in s0 and the array pointer in s1) and no declaration order fixed it
extern s32 D_0058F5D0[];
extern void StrStatus_Exit(void *);
extern void Help_Exit();
extern void Save_Exit();
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(s32);

void func_0026E3B0(void) {
    s32 i;
    s32 off;
    StrStatus_Exit(*(void **)((u8 *)gEssMain + 0x20));
    Help_Exit();
    Save_Exit();
    amTask_KillGroup(0x200, 1, 0);
    i = 0;
    off = 0;
    do {
        if (*(void **)((u8 *)gEssMain + off) != 0) {
            amCdFs_Close(*(void **)((u8 *)gEssMain + off), 0);
        }
        i++;
        off += 4;
    } while (i < 3);
    i = 0;
    if (0 < D_0058F5D0[0]) {
        do {
            amCdFs_ReleaseCache(D_0058F5D0[i + 1]);
            i++;
        } while (i < D_0058F5D0[0]);
    }
    if (*(void **)((u8 *)gEssMain + 0x270) != 0) {
        amHeap_Free(*(void **)((u8 *)gEssMain + 0x270));
    }
    amHeap_Free(gEssMain);
    gEssMain = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E3B0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E4A0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E640);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E780);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E950);
#if 0
// differs: 18 of 57: the store of D_00470704 and D_0047070C are laid out differently (the original puts the 0x11401100 store before the call, mine in the delay slot), a pure scheduling difference
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern f32 gFrameDelta;
extern void *gEssEdit;
extern void amModel_SetCurrent(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00228430(s32);
extern void func_002284D0(s32);
extern void func_0022C1D0(s32, s32, f32);
extern void func_00228410(s32);
extern s32 func_002B4C80(s32);
extern void func_0026E950();

void func_0026EC70(u8 *a0) {
    u8 *s1;
    u8 *s0;
    u8 *v;
    f32 f;
    void *fp;
    s32 t;
    s1 = a0;
    t = *(s32 *)((u8 *)gEssEdit + 0x1C);
    D_00470704 = t;
    D_0047070C = 0x11401100;
    amModel_SetCurrent(t, 0x11401100);
    D_00470708 = 0;
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    v = (u8 *)gEssEdit;
    f = (f32)*(s32 *)(v + 0x30) * gFrameDelta;
    s0 = v + 0x28;
    func_0022C1D0(*(s32 *)(*(u8 **)(*(u8 **)(v + 0x18) + 0x14) + *(s32 *)(v + 0x28) * 4), 1, f);
    *(s32 *)(s0 + 8) = *(s32 *)(s0 + 8) + 1;
    func_00228410(0);
    func_00133780(0, 0);
    if (func_002B4C80(0) == 4) {
        fp = (void *)func_0026E950;
        *(void **)(s1 + 0x1C) = (fp == 0) ? 0 : fp;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026EC70);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026ED60);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026EF00);
extern void *gEssEdit;

void EssEdit_Clear(void) {
    gEssEdit = 0;
}
extern void *amTask_Create();
extern void func_0026EF00();
extern char D_0046B480[];
extern void func_003105B0();

void EssEdit_Start(void) {
    *(void **)((u8 *)gEssEdit + 0x10) = amTask_Create(func_0026EF00, 0, 0x3000, 0x200, 2, D_0046B480);
    memset(*(u8 **)((u8 *)gEssEdit + 0x10) + 0x30, 0, 0x1C);
    func_003105B0();
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
