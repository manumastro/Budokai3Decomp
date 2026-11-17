#include "common.h"
#include "menu/menu.h"

extern s32 *gStrMap;
extern void func_00299390(void);
extern void func_001F07D0(void);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D670(s32, f32);
extern void func_0028EC50(s32, s32, s32, s32, s32, s32);
extern void func_00144B70(s32);
extern void func_00144650(s32);
extern void amAdx_Stop(s32);
extern void func_00125740(char *, char *, s32);
extern char D_004E6560[];
extern char D_004B4C00[];
extern void func_0029CA40(void);
extern void *gStrTitle;

INCLUDE_ASM("asm/nonmatchings/story/str_map", func_00299CA0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A090);
#if 0
// func_0029A1C0: the switch's empty cases are laid out with a branch to the end in another order; the original's case 2 jumps straight to the end; two forms tried
void func_0029A1C0(void) {
    s32 *s = gStrMap;
    s32 m = *((s8 *)s + 0x1BD);
    switch (m) {
    case 0:
        {
            s32 *q = (s32 *)s[0xC / 4];
            if (q == 0 || *(s16 *)((char *)q + 4) == 3) {
                func_00299390();
                *((s8 *)gStrMap + 0x1BD) = 2;
            }
        }
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A1C0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A250);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A4F0);
void StrMap_Clear(void) {
    gStrMap = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A8F0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A9F0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AAC0);
void func_0029AC30(void) {
    s32 s0;
    *((s8 *)gStrMap + 0x1B2) = 1;
    if (*((s8 *)gStrMap + 0x1B1) == 1) {
        *((s8 *)gStrMap + 0x1B1) = 2;
    }
    if (*((s8 *)gStrMap + 0x1B1) == 2) {
        s0 = gStrMap[0x24 / 4];
        if (gStrMap[0x68 / 4] != 0) {
            func_0022D0E0(gStrMap[0x68 / 4], 1);
        }
        gStrMap[0x68 / 4] = func_0022D670(((s32 *)((s32 *)((s32 *)gStrMap)[0x58 / 4])[0x1C / 4])[1], 0.0f);
        func_0028EC50(s0, (s32)((char *)gStrMap + 0x68), gStrMap[0x60 / 4], 0x500000, 0, 0);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029ACE0);
extern void amTask_Kill(Task *);

void StrMap_KillTask(void) {
    if (*((s8 *)gStrMap + 0x19D) == 2) {
        *((s8 *)gStrMap + 0x19D) = 1;
    }
    if (gStrMap[0x28 / 4] != 0) {
        amTask_Kill((Task *)gStrMap[0x28 / 4]);
    }
    gStrMap[0x28 / 4] = 0;
}
extern void func_0029A250(Task *);
extern char D_0046BBB8[];

void StrMap_Start(s32 a0, s32 a1, s32 a2) {
    gStrMap[0x1A0 / 4] = a0;
    gStrMap[0x1A4 / 4] = a1;
    *((s8 *)gStrMap + 0x19E) = a2;
    *((s8 *)gStrMap + 0x19D) = 0;
    if (gStrMap[0x28 / 4] != 0) {
        amTask_Kill((Task *)gStrMap[0x28 / 4]);
    }
    gStrMap[0x28 / 4] = (s32)amTask_Create(func_0029A250, NULL, a0, 2, a1, D_0046BBB8);
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AEF0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B000);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B130);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B290);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B550);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029BA80);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C110);
extern s32 func_0022BF80(s32);
extern void func_001F0810(s32, s32);

void func_0029C290(s32 *s0) {
    s32 *g = (s32 *)gStrTitle;
    if (func_0022BF80(g[0x78 / 4 + g[0xB0 / 4]]) == 0xFF) {
        func_001F0810(-1, 0);
        s0[0x1C / 4] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C2E0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C680);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C730);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C9B0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029CA40);
void StrTitle_TaskMain(Task *a0) {
    char *t = (char *)gStrTitle;
    s32 *u = *(s32 **)(t + 4);
    if (*(s16 *)((char *)u + 4) == 3) {
        func_001F07D0();
        func_00144B70(-1);
        func_00144650(0);
        amAdx_Stop(-1);
        func_00125740(D_004E6560, D_004B4C00, 0x2B180);
        {
            void *f = func_0029CA40;
            *(s32 *)((char *)a0 + 0x1C) = (s32)((f == 0) ? 0 : f);
        }
    }
}
void StrTitle_Clear(void) {
    gStrTitle = NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029CCC0);
extern void StrTitle_TaskMain(Task *);
extern char D_0046EA28[];

void StrTitle_Start(void) {
    ((void **)gStrTitle)[4] = amTask_Create(StrTitle_TaskMain, NULL, 0x8000, 2, 0x10000, D_0046EA28);
}
