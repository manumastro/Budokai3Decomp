#include "common.h"

extern void func_0022C700(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);

void func_00308A90(u8 *a0) {
    u8 *s0;
    s0 = a0;
    func_0022C700();
    func_00133B50(0, 0);
    func_00139620(0x900, 0.0f, s0 + 0x30, -1, 0x44, 0);
}
void func_00308AE0(void) {
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00308AF0);
extern s16 func_0030D160(void *);
extern void func_00308C40();

#if 0
// differs: the original loads the word at s1+8 before the byte at s1+0xD (addu a0,a1,a0); mine loads the byte first, whatever the order of the operands
void func_00308BD0(u8 *a0) {
    u8 *s0;
    u8 *s1;
    s32 t;
    s16 r;
    s0 = a0;
    s1 = a0 + 0x30;
    r = func_0030D160(*(void **)(a0 + 0x34));
    if (r == 4) {
        t = *(s32 *)(s1 + 8);
        *(u8 *)(t + *(u8 *)(s1 + 0xD) + 0x11) = 0;
        *(void **)(s0 + 0x1C) = ((void *)func_00308C40 == 0) ? 0 : (void *)func_00308C40;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00308BD0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00308C40);
extern s16 func_0030D160(void *);
extern void func_00308C40(void);

void func_00308D50(u8 *a0) {
    u8 *s0;
    void *f;
    s16 r;
    s0 = a0;
    r = func_0030D160(*(void **)(a0 + 0x34));
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
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309050);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_003090F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309250);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_003095A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309680);
extern u8 *D_0047098C;

void func_00309AF0(void) {
    D_0047098C = 0;
    func_0027E040();
    func_0030D180();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309B20);
extern char D_0046FAC0[];
extern char D_0046FAE0[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_001F07D0();
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
    func_001F07D0();
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309CD0);
extern u8 *D_0047098C;
extern char D_0046FAE0[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);

void func_00309D60(void) {
    u8 *s0;
    s0 = D_0047098C = amHeap_Alloc(0x14, 0, D_0046FAE0, 0x72);
    *(s32 *)(s0 + 0x8) = 0;
    *(s32 *)(s0 + 0x0) = amCdFs_ReadFileId(0x10819, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1081A, 0, 0);
    func_0027E7E0();
    ArenaRegCharList_Load();
}
