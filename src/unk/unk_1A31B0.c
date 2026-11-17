#include "common.h"

/* This file was built at -O1: its code is not scheduled and loads are not shared (checked: the -O4,p build differs,
   -O1 matches every function in C here). */
#pragma optimization_level 1

typedef struct PadWork {
    s32 f0;
    s32 f4;
    s16 f8;
    s16 fA;
    char padC[0xB4 - 0xC];
    u32 fB4;
} PadWork;

extern s32 D_00470554;
extern void *D_0047054C;
extern s32 D_00470548;
extern s32 D_00470558;
extern s32 D_004704F0;
extern s32 D_004704F4;
extern s32 D_004704F8;
extern s32 D_004704FC;
extern void (*D_0047055C)(void);
extern void (*D_00470560)(void);
extern PadWork D_00492FC0[];
extern s32 func_0011A220(s32);
extern s32 func_0011A588(s32, void *, s32);
extern void func_0013AC90(void *);
extern void func_001258F8(void *, s32, s32);
extern void func_001A2DC0(void);
extern void func_001A2D40(void);
void func_001A32D0(void);

typedef struct PadPort {
    s32 port;
    s32 slot;
    char pad8[0x18];
    u8 act[8];
    char pad28[4];
} PadPort;

extern PadPort D_00493580[];
extern void func_00117458(s32, s32, u8 *);
s32 func_001A3940(s32);
void func_001A3EF0(s32);

void func_001A31B0(void) {
    if (func_0011A220(D_00470554) == 0) {
        D_004704F0 = 5;
        D_004704F4 = 3;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2DC0;
    } else {
        D_004704F8 = 3;
        if (D_0047054C != NULL && D_00470548 != 0) {
            func_0013AC90(D_0047054C);
        }
        D_0047054C = NULL;
    }
    D_00470560 = NULL;
}
void func_001A3250(void) {
    if (func_0011A588(D_00470554, D_0047054C, D_00470558) == 0) {
        D_004704F0 = 6;
        D_004704F4 = 6;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2D40;
        D_00470560 = func_001A32D0;
    } else {
        D_004704F8 = 3;
        D_00470560 = NULL;
    }
}
void func_001A32D0(void) {
    if (func_0011A220(D_00470554) == 0) {
        D_004704F0 = 6;
        D_004704F4 = 3;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2DC0;
    } else {
        D_004704F8 = 3;
    }
    D_00470560 = NULL;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1A31B0", func_001A3340);
void func_001A3520(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (func_001A3940(i)) {
            func_001A3EF0(i);
        }
    }
    for (i = 0; i < 8; i++) {
        func_00117458(D_00493580[i].port, D_00493580[i].slot, D_00493580[i].act);
    }
}
void func_001A3610(s32 i) {
    func_001258F8(D_00493580[i].act, 0, 8);
    func_00117458(D_00493580[i].port, D_00493580[i].slot, D_00493580[i].act);
}
void func_001A36E0(s32 i, u8 on) {
    if (!(D_00492FC0[i].fB4 & 1)) {
        if (on) {
            on = 1;
        }
        D_00493580[i].act[0] = on;
        func_00117458(D_00493580[i].port, D_00493580[i].slot, D_00493580[i].act);
    }
}
void func_001A37D0(s32 i, u8 v) {
    if (!(D_00492FC0[i].fB4 & 1)) {
        D_00493580[i].act[1] = v;
        func_00117458(D_00493580[i].port, D_00493580[i].slot, D_00493580[i].act);
    }
}
void func_001A38B0(s32 i, u32 mask, s32 mode) {
    switch (mode) {
    case 0:
        D_00492FC0[i].fB4 &= ~mask;
        break;
    case 1:
        D_00492FC0[i].fB4 |= mask;
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1A31B0", func_001A3940);
void func_001A3E60(PadWork *p) {
    s32 f0 = p->f0;
    s32 f4 = p->f4;
    s16 f8 = p->f8;
    s16 fA = p->fA;
    u32 fB4 = p->fB4;

    func_001258F8(p, 0, 0xB8);
    p->f0 = f0;
    p->f4 = f4;
    p->f8 = f8;
    p->fA = fA;
    p->fB4 = fB4;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1A31B0", func_001A3EF0);
/* Stick dead zone. 3 of 54 instructions differ: the original sign-extends |x| into another register before
   subtracting. */
#if 0
s8 func_001A4460(s8 x, s32 dz) {
    s8 a;
    s8 r;

    a = x >= 0 ? x : -x;
    r = a - dz;
    if (r < 0) {
        r = 0;
    }
    r = r * (128.0f / (128.0f - dz));
    return x >= 0 ? r : -r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1A31B0", func_001A4460);
extern s32 D_00470564;
extern void func_001A1A58(void);

void func_001A4540(s32 a) {
    func_001A1A58();
    D_00470564 = a;
}
