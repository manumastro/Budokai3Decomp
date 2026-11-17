#include "common.h"

extern s16 ArenaList_GetF0(void *);
extern void Help_TaskKill(s32);
extern s16 func_0027D3B0(s32, s32);
extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_005C4126[];
extern s8 D_0058F66A[];
extern void func_00309000(u8 *);
extern s16 ArenaList_GetF2(void *);
extern u8 D_00492FCE[];
extern s16 D_005C4122[];
extern void func_0030D300(void *);
extern void func_00308BD0(u8 *);
extern void func_00308AF0(u8 *);
extern s8 func_0027DAA0(void *);
extern s16 func_0027DAE0(void *);
extern s16 func_0027DAD0(void *);
extern s8 func_0027DAB0(void *);
extern void func_0027DB20(void *);
extern s16 D_005C412A[];
extern void func_00308E40(u8 *);
extern void func_00308DA0(u8 *);

extern void A2d_FlushList(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);

void func_00308A90(u8 *a0) {
    u8 *s0;
    s0 = a0;
    A2d_FlushList();
    func_00133B50(0, 0);
    func_00139620(0x900, 0.0f, s0 + 0x30, -1, 0x44, 0);
}
void func_00308AE0(void) {
}
void func_00308AF0(u8 *a0) {
    u8 *s1;
    u8 *s0;
    s32 s2;
    s32 v;

    s1 = a0;
    s0 = s1 + 0x30;
    if (ArenaList_GetF0(*(void **)(a0 + 0x34)) != 7) {
        return;
    }
    Help_TaskKill(*(s32 *)(s0 + 4));
    *(s32 *)(s0 + 4) = 0;
    s2 = D_005C4126[s0[0xD]];
    D_0058F66A[s0[0xD]] = s0[0xD];
    v = func_0027D3B0(s0[0xD], 0);
    v = func_0027E2D0(5, s0[0xF], s0[0x10], -1, s2 & 0xFF, v & 0xFF, 0, 3);
    *(s32 *)s0 = v;
    *(void **)(s1 + 0x1C) = ((void *)func_00309000 == 0) ? 0 : (void *)func_00309000;
}
extern s16 ArenaList_GetF0(void *);
extern void func_00308C40();

void func_00308BD0(u8 *a0)
{
  u8 *s0;
  u8 *s1;
  s32 t;
  s16 r;
  s0 = a0;
  s1 = a0 + 0x30;
  r = ArenaList_GetF0(*((void **) (a0 + 0x34)));
  if (r == 4)
  {
    t = *((s32 *) (s1 + 8));
    if (((!r) && (!r)) && (!r))
    {
    }
    *((u8 *) (((*((u8 *) (s1 + 0xD))) + t) + 0x11)) = 0;
    *((void **) (s0 + 0x1C)) = (((void *) func_00308C40) == 0) ? (0) : ((void *) func_00308C40);
  }
}

#if 0
// differs: the indexed store is fixed (D_005C4122[idx] = 0 gives sll 1, as in the original); left: the word/byte load order in the first branch (mine byte first), 8 assignment variants tried, best 2 diffs (round 5 permp)
void func_00308C40(u8 *a0) {
    u8 *s1;
    u8 *s0;
    s32 a1;
    s32 a2;

    s1 = a0;
    s0 = s1 + 0x30;
    if (ArenaList_GetF2(*(void **)(a0 + 0x34)) == 1) {
        a1 = *(s32 *)(s0 + 8);
        a2 = s0[0xD];
        *(u8 *)(a2 + a1 + 0x11) = 1;
        *(void **)(s1 + 0x1C) = ((void *)func_00308BD0 == 0) ? 0 : (void *)func_00308BD0;
        return;
    }
    if (ArenaList_GetF0(*(void **)(s0 + 4)) == 5) {
        return;
    }
    a1 = s0[0xD];
    if ((*(u16 *)(D_00492FCE + a1 * 184) & 0x300) == 0) {
        return;
    }
    s0[0xE] = 0;
    *(s16 *)(D_005C4122 + s0[0xD] * 2) = 0;
    func_0030D300(*(void **)(s0 + 4));
    *(void **)(s1 + 0x1C) = ((void *)func_00308AF0 == 0) ? 0 : (void *)func_00308AF0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00308C40);
extern s16 ArenaList_GetF0(void *);

void func_00308D50(u8 *a0) {
    u8 *s0;
    void *f;
    s16 r;
    s0 = a0;
    r = ArenaList_GetF0(*(void **)(a0 + 0x34));
    if (r >= 4) {
        f = (void *)func_00308C40;
        *(void **)(s0 + 0x1C) = (f == 0) ? 0 : f;
    }
}
extern s8 func_0027DAB0(void *);
extern void func_0027E120(void *);
extern s8 D_0058F66A[];
extern s32 ArenaRegCharList_Start(s32, s32, s32);
extern void func_00308D50();

void func_00308DA0(u8 *a0) {
    u8 *s0;
    u8 *s1;
    s8 r;
    s1 = a0;
    s0 = a0 + 0x30;
    r = func_0027DAB0(*(void **)(a0 + 0x30));
    if (r >= 7) {
        func_0027E120(*(void **)s0);
        *(s32 *)s0 = 0;
        D_0058F66A[*(u8 *)(s0 + 0xD)] = -2;
        *(s32 *)(s0 + 0x4) = ArenaRegCharList_Start(*(u8 *)(s0 + 0x12), *(u8 *)(s0 + 0x11), *(u8 *)(s0 + 0x11));
        *(void **)(s1 + 0x1C) = ((void *)func_00308D50 == 0) ? 0 : (void *)func_00308D50;
    }
}
extern s8 func_0027DAB0(void *);
extern void func_00308EB0();

#if 0
// differs: same as func_00308BD0: the word at s1+8 is loaded first in the original, mine loads the byte first
void func_00308E40(u8 *a0) {
    u8 *s0;
    u8 *s1;
    s32 t;
    s8 r;
    s0 = a0;
    s1 = a0 + 0x30;
    r = func_0027DAB0(*(void **)(a0 + 0x30));
    if (r == 4) {
        t = *(s32 *)(s1 + 8);
        *(u8 *)(t + *(u8 *)(s1 + 0xD) + 0x11) = 0;
        *(void **)(s0 + 0x1C) = ((void *)func_00308EB0 == 0) ? 0 : (void *)func_00308EB0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00308E40);
#if 0
// differs: same first-branch load order as func_00308C40: the original loads the word at +8 before the byte at +0xD
void func_00308EB0(u8 *a0) {
    u8 *s1;
    u8 *s0;
    s32 a1;
    s32 a2;

    s1 = a0;
    s0 = s1 + 0x30;
    if (func_0027DAA0(*(void **)(a0 + 0x30)) == 1) {
        a1 = *(s32 *)(s0 + 8);
        a2 = s0[0xD];
        *(u8 *)(a1 + a2 + 0x11) = 1;
        *(void **)(s1 + 0x1C) = ((void *)func_00308E40 == 0) ? 0 : (void *)func_00308E40;
        return;
    }
    D_005C4126[s0[0xD]] = func_0027DAE0(*(void **)s0);
    D_005C412A[s0[0xD]] = func_0027DAD0(*(void **)s0);
    if (func_0027DAB0(*(void **)s0) == 5) {
        return;
    }
    a1 = s0[0xD];
    if ((*(u16 *)(D_00492FCE + a1 * 184) & 0x300) == 0) {
        return;
    }
    s0[0xE] = 1;
    D_005C4122[s0[0xD]] = 1;
    func_0027DB20(*(void **)s0);
    *(void **)(s1 + 0x1C) = ((void *)func_00308DA0 == 0) ? 0 : (void *)func_00308DA0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00308EB0);
extern s8 func_0027DAB0(void *);
extern void func_00308EB0();

void func_00309000(u8 *a0) {
    u8 *s0;
    s8 r;
    s0 = a0;
    r = func_0027DAB0(*(void **)(a0 + 0x30));
    if (r >= 4) {
        *(void **)(s0 + 0x1C) = ((void *)func_00308EB0 == 0) ? 0 : (void *)func_00308EB0;
    }
}
#if 0
// differs: 19 of 38: the head (lw a0 / beqz / li v0,4) matches; the original's loop head sits unpadded at 0x30906C and its branch has two nops before it, mine pads the head to 8 and branches with a delay nop; the if-join is 2 instructions earlier in mine
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

void func_00309050(u8 *a0) {
    u8 *p;
    u32 n;
    s32 x;
    s32 s0;
    a0 = *(u8 **)(a0 + 0x30);
    n = 4;
    p = (u8 *)&x;
    if (p != 0) {
        do {
            *p++ = 0;
        } while (--n != 0);
    }
    x = *(s32 *)(a0 + 0x14);
    a0 = *(u8 **)(a0 + 4);
    D_00470704 = (s32)a0;
    D_0047070C = 0x2000;
    amModel_SetCurrent((s32)a0, 0x2000);
    D_00470708 = 0;
    D_00470238 = 0;
    s0 = x;
    if (s0 != 0) {
        func_0022C060(s0, 1.0f);
        func_0022CD00(s0);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309050);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_003090F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309250);
#if 0
// differs: 13 of 56 (round 4, menu3): with a prototype for func_0022C060(s32, f32) the zeroing loop and the calls match; left: the original has one nop after the bnez (mine two), its skip branch lands on the sw of x, and the gp stores are ordered differently
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_00309250(void);
extern f32 gFrameDelta;

void func_003095A0(u8 *a0) {
    s32 s2;
    u8 *s1;
    u8 *s0;
    u8 *p;
    u32 n;
    s32 x;
    f32 f;

    s0 = *(u8 **)(a0 + 0x30);
    n = 4;
    p = (u8 *)&x;
    if (p != 0) {
        do {
            *p++ = 0;
            n--;
        } while (n != 0);
    }
    s1 = a0;
    x = *(s32 *)(s0 + 0x14);
    D_00470704 = *(s32 *)(s0 + 4);
    D_0047070C = 0x2000;
    amModel_SetCurrent(D_00470704, 0x2000);
    D_00470708 = 0;
    D_00470238 = 0;
    s2 = *(s32 *)&x;
    if (s2 != 0) {
        func_0022C060(s2, 1.0f);
        func_0022CD00(s2);
    }
    f = *(f32 *)(s0 + 0x18) - gFrameDelta;
    *(f32 *)(s0 + 0x18) = f;
    if (f <= 0.0f) {
        *(void **)(s1 + 0x1C) = ((void *)func_00309250 == 0) ? 0 : (void *)func_00309250;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_003095A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309680);
extern u8 *D_0047098C;

void ArenaCharaselPvsp_Clear(void) {
    D_0047098C = 0;
    func_0027E040();
    func_0030D180();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309B20);
extern char D_0046FAC0[];
extern char D_0046FAE0[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_00309680();

#if 0
// differs: same as func_00308980: task pointer kept in a variable, callback address lui/addiu
void func_00309CD0(void) {
    u8 *t;
    u8 *m;
    u8 *s0;
    s0 = D_0047098C;
    *(void **)(s0 + 8) = t = amTask_Create(func_00309680, 0, 0x2000, 8, 2, D_0046FAC0);
    *(s32 *)(t + 0x34) = 0xA;
    s0 = t + 0x30;
    *(void **)s0 = m = amHeap_Alloc(32, 0, D_0046FAE0, 156);
    memset(m, 0, 32);
    Scene_SetReady();
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309CD0);
extern u8 *D_0047098C;
extern char D_0046FAE0[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);

void ArenaCharaselPvsp_Load(void) {
    u8 *s0;
    s0 = D_0047098C = amHeap_Alloc(0x14, 0, D_0046FAE0, 0x72);
    *(s32 *)(s0 + 0x8) = 0;
    *(s32 *)(s0 + 0x0) = amCdFs_ReadFileId(0x10819, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1081A, 0, 0);
    func_0027E7E0();
    ArenaRegCharList_Load();
}
