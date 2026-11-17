#include "common.h"
extern void func_003077E0();
extern void ArenaList_Free();
extern f32 gFrameDelta;
extern u8 *D_00470988;
extern s16 ArenaList_GetFirst();
extern s32 func_0027E2D0();
extern u8 D_004B4B63[];
extern u8 D_005C4126[];
extern u8 D_004B4B56[];
extern void ArenaStageSel_Start();
extern void func_002D1C50();
extern void ArenaList_Free();
extern void func_003083E0();

INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_003077E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307AF0);
#if 0
// differs: 6 of 60: loops 1 and 3 match; in loop 2 the counter and the pointer swap registers (the original counts in s1 and walks s2 from s0), and no declaration order fixed it
extern void func_0022D0E0(void *, s32);

void func_00307C00(u8 *a0) {
    u8 *s0;
    u8 *q;
    s32 i;
    s0 = *(u8 **)a0;
    if (*(void **)(s0 + 0x58) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x58), 1);
    }
    if (*(void **)(s0 + 0x5C) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x5C), 1);
    }
    for (i = 0; i < 2; i++) {
        if (*(void **)(s0 + 0x60 + i * 4) != 0) {
            func_0022D0E0(*(void **)(s0 + 0x60 + i * 4), 1);
        }
    }
    q = s0;
    for (i = 0; i < 2; i++) {
        if (*(void **)(q + 0x68) != 0) {
            func_0022D0E0(*(void **)(q + 0x68), 1);
        }
        q += 4;
    }
    for (i = 0; i < 7; i++) {
        if (*(void **)(s0 + 0x70 + i * 4) != 0) {
            func_0022D0E0(*(void **)(s0 + 0x70 + i * 4), 1);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307C00);
extern void A2d_FlushList(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);

void func_00307CF0(u8 *a0) {
    u8 *s0;
    s0 = a0;
    A2d_FlushList();
    func_00133B50(0, 0);
    func_00139620(0x900, 0.0f, s0 + 0x30, -1, 0x44, 0);
}
void func_00307D40(void) {
}
#if 0
// differs: 23 of 61 instr differ: the obj/global register roles and the float tail still differ
void func_00307D50(u8 *task) {
    u8 *s1;
    u8 *s0;
    f32 f1;
    f32 f2;

    s0 = *(u8 **)(task + 0x30);
    f2 = *(f32 *)(s0 + 0x44);
    s1 = D_00470988;
    if (f2 < 1.0f) {
        *(f32 *)(s0 + 0x44) = f2 + 0.05f * gFrameDelta;
    }
    f1 = *(f32 *)(s0 + 0x44);
    if (f1 > 1.0f) {
        *(f32 *)(s0 + 0x44) = 1.0f;
    }
    f1 = *(f32 *)(s0 + 0x44);
    if (f1 < 1.0f) {
        func_003077E0(s0);
        *(void **)(*(u8 **)(s1 + 0x10) + 0x30) = 0;
        *(s32 *)(*(u8 **)(s1 + 0x10) + 0x34) = 0;
        *(s32 *)(*(u8 **)(s1 + 0x10) + 0x38) = 0;
        *(f32 *)(*(u8 **)(s1 + 0x10) + 0x3C) = *(f32 *)(s0 + 0x44);
    } else {
        ArenaStageSel_Start(D_004B4B56[0]);
        func_002D1C50();
        ArenaList_Free();
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307D50);
#if 0
// differs: compiled 0xC4 vs 0xD0: 3 instructions short (the movz select / order of the func_0027E2D0 arguments)
void func_00307E40(u8 *task) {
    u8 *s0;
    s32 v0;
    s32 v1;
    s32 t0;

    s0 = *(u8 **)(task + 0x30);
    func_003077E0(s0);
    v0 = (s16)ArenaList_GetFirst(*(void **)(s0 + 0x10));
    if (v0 >= 6) {
        ArenaList_Free();
        *(s32 *)(s0 + 0x10) = 0;
        v1 = 4;
        if (D_004B4B63[0] == 0) {
            v1 = 2;
        }
        t0 = D_005C4126[0];
        v0 = func_0027E2D0(5, (u8)(v1 & 0xFF), 1, -1, t0, 0, 0, 3);
        *(s32 *)(s0 + 0x8) = v0;
        *(u32 *)(s0 + 0x40) = 0x42200000;
        *(void **)(task + 0x1C) = ((void *)func_003083E0 == 0) ? 0 : (void *)func_003083E0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307F10);
#if 0
// differs: frame and store order now match (loc[8], store before the if); the two saved registers are the wrong way round (mine: move s1,a0 / lw s0,0x30(a0), original: lw s1 / move s0), and the code is 12 bytes short (a dead lui 0x4270 in the original)
extern s16 D_005C4136[];
extern void func_00307F10();
extern s32 ArenaList_Create(s32);
extern void func_00229800();
extern s32 func_00307AF0();
extern void func_00229800();
extern s32 func_00307AF0();

void func_00308070(u8 *a0) {
    u8 *s1;
    u8 *s0;
    u8 *v;
    f32 loc[8];
    f32 f;
    void *fp;
    s1 = *(u8 **)(a0 + 0x30);
    s0 = a0;
    func_003077E0(s1);
    f = *(f32 *)(s1 + 0x40) - gFrameDelta;
    *(f32 *)(s1 + 0x40) = f;
    if (f <= 0.0f) {
        *(s32 *)(s1 + 0x10) = ArenaList_Create(D_005C4136[0]);
        v = *(u8 **)s1;
        v = *(u8 **)(v + 0x1C);
        func_00229800(*(void **)(v + 0x24), loc, -1, 0.0f);
        *(f32 *)(s1 + 0x34) = loc[0];
        *(f32 *)(s1 + 0x38) = loc[1];
        *(s32 *)(s1 + 0x3C) = func_00307AF0(s1);
        fp = (void *)func_00307F10;
        *(void **)(s0 + 0x1C) = (fp == 0) ? 0 : fp;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308070);
extern s8 func_0027DAB0(void *);
extern void func_0027E120(void *);
extern s32 ArenaList_Create(s32);
extern void func_00307F10();
extern s16 D_005C4132[];
extern s16 D_005C412E[];
extern s16 D_005C4134[];
extern s16 D_005C4130[];
extern s16 D_005C4136[];

void ArenaCharasel_TaskOpenList(u8 *a0) {
    u8 *s0;
    u8 *s1;
    s8 r;
    void *f;
    s1 = a0;
    s0 = *(u8 **)(a0 + 0x30);
    func_003077E0(s0);
    r = func_0027DAB0(*(void **)(s0 + 8));
    if (r >= 7) {
        func_0027E120(*(void **)(s0 + 8));
        *(s32 *)(s0 + 8) = 0;
        D_005C4132[0] = 0;
        D_005C412E[0] = 0;
        D_005C4134[0] = 0;
        D_005C4130[0] = 0;
        D_005C4136[0] = s0[0x1D];
        *(s32 *)(s0 + 0x10) = ArenaList_Create(s0[0x1D]);
        f = (void *)func_00307F10;
        *(void **)(s1 + 0x1C) = (f == 0) ? 0 : f;
    }
}
extern void func_003077E0();

void func_003081E0(u8 *a0) {
    func_003077E0(*(void **)(a0 + 0x30));
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_003081F0);
extern f32 gFrameDelta;
extern void func_003081F0();

void func_003083E0(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_003077E0(s0);
    *(f32 *)(s0 + 0x40) = *(f32 *)(s0 + 0x40) - gFrameDelta;
    if (*(f32 *)(s0 + 0x40) <= 0.0f) {
        *(void **)(a0 + 0x1C) = ((void *)func_003081F0 == 0) ? 0 : (void *)func_003081F0;
    }
}
extern f32 gFrameDelta;

#if 0
// differs: the frame is 0x50 in mine and 0x40 in the original, and the float compare uses f12 for zero; the call structure matches
void func_00308450(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 tmp[2];
    s0 = a0;
    s1 = *(u8 **)(a0 + 0x30);
    func_003077E0(s1);
    *(f32 *)(s1 + 0x40) = *(f32 *)(s1 + 0x40) - gFrameDelta;
    if (*(f32 *)(s1 + 0x40) <= 0.0f) {
        func_00229800(*(void **)(*(u8 **)(*(u8 **)s1 + 0x1C) + 0x24), tmp, -1);
        *(f32 *)(s1 + 0x34) = tmp[0];
        *(f32 *)(s1 + 0x38) = tmp[1];
        *(s32 *)(s1 + 0x3C) = 0x42700000;
        func_00307AF0(s1);
        *(void **)(s0 + 0x1C) = ((void *)func_003081F0 == 0) ? 0 : (void *)func_003081F0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308450);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308500);
extern u8 *D_00470988;

void ArenaCharaselPvsc_Clear(void) {
    D_00470988 = 0;
    func_0027E040();
    ArenaList_ClearGlobal();
}
extern void func_0027E120(void *);
extern void func_0027E070(void);
extern void func_00307C00(void *);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);

void func_00308860(void) {
    u8 *s2;
    u8 *s1;
    u8 *s0;
    u8 *v0;

    s0 = (u8 *)D_00470988;
    if (s0 != 0) {
        v0 = *(u8 **)(s0 + 0xC);
        s1 = *(u8 **)(v0 + 0x30);
        s2 = v0 + 0x30;
        if (*(s32 *)(s1 + 0x8) != 0) {
            func_0027E120(*(void **)(s1 + 0x8));
        }
        func_0027E070();
        amHeap_Free(s1);
        func_00307C00(s2);
        if (*(void **)s0 != 0) {
            amCdFs_Close(*(void **)s0, 0);
        }
        if (*(void **)(s0 + 0x4) != 0) {
            amCdFs_Close(*(void **)(s0 + 0x4), 0);
        }
        if (*(void **)s1 != 0) {
            amHeap_Free(*(void **)s1);
        }
        if (*(void **)(s1 + 0x4) != 0) {
            amHeap_Free(*(void **)(s1 + 0x4));
        }
        if (*(void **)(s0 + 0x8) != 0) {
            amTask_Kill(*(void **)(s0 + 0x8));
        }
        if (*(void **)(s0 + 0x10) != 0) {
            amTask_Kill(*(void **)(s0 + 0x10));
        }
        amTask_Kill(*(void **)(s0 + 0xC));
        amHeap_Free(s0);
        D_00470988 = 0;
    }
}
extern char D_0046FA50[];
extern char D_0046FA70[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_00308500();

#if 0
// differs: the task pointer is kept in a variable (move s0,v0) where the original adds 0x30 to the returned pointer directly (addiu s0,v0,48); lui/addiu of the callback address differ too
void func_00308980(void) {
    u8 *t;
    u8 *m;
    u8 *s0;
    s0 = D_00470988;
    *(void **)(s0 + 12) = t = amTask_Create(func_00308500, 0, 0x2000, 8, 2, D_0046FA50);
    *(s32 *)(t + 0x34) = 0xA;
    s0 = t + 0x30;
    *(void **)s0 = m = amHeap_Alloc(140, 0, D_0046FA70, 153);
    memset(m, 0, 140);
    Scene_SetReady();
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308980);
extern u8 *D_00470988;
extern char D_0046FA70[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_0027E7E0(void);

void ArenaCharaselPvsc_Load(void) {
    u8 *s0;
    s0 = D_00470988 = amHeap_Alloc(0x14, 0, D_0046FA70, 0x71);
    *(s32 *)(s0 + 0xC) = 0;
    *(s32 *)(s0 + 0x0) = amCdFs_ReadFileId(0x10819, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1081A, 0, 0);
    func_0027E7E0();
}
