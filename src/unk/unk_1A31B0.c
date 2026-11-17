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
extern s32 gMcState;
extern s32 gMcResult;
extern void (*gMcDoneFn)(void);
extern void (*gMcNextFn)(void);
extern PadWork D_00492FC0[];
extern s32 func_0011A220(s32);
extern s32 func_0011A588(s32, void *, s32);
extern void amHeap_Free(void *);
extern void memset(void *, s32, s32);
extern void amMc_OnClose(void);
extern void amMc_OnWrite(void);
void func_001A32D0(void);

typedef struct PadPort {
    s32 port;
    s32 slot;
    s32 handle;
    char padC[0x14];
    u8 act[8];
    u8 *buf;
} PadPort;

extern PadPort D_00493580[];
extern s32 D_00470564;
extern void func_00117458(s32, s32, u8 *);
s32 func_001A3940(s32);
void func_001A3EF0(s32);

void func_001A31B0(void) {
    if (func_0011A220(D_00470554) == 0) {
        D_004704F0 = 5;
        D_004704F4 = 3;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnClose;
    } else {
        gMcState = 3;
        if (D_0047054C != NULL && D_00470548 != 0) {
            amHeap_Free(D_0047054C);
        }
        D_0047054C = NULL;
    }
    gMcNextFn = NULL;
}
void func_001A3250(void) {
    if (func_0011A588(D_00470554, D_0047054C, D_00470558) == 0) {
        D_004704F0 = 6;
        D_004704F4 = 6;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnWrite;
        gMcNextFn = func_001A32D0;
    } else {
        gMcState = 3;
        gMcNextFn = NULL;
    }
}
void func_001A32D0(void) {
    if (func_0011A220(D_00470554) == 0) {
        D_004704F0 = 6;
        D_004704F4 = 3;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnClose;
    } else {
        gMcState = 3;
    }
    gMcNextFn = NULL;
}
extern char D_00492EC0[];
extern u8 D_00493700[][0x400];
extern void func_00116550(s32);
extern s32 func_00116978(s32, s32, u8 *);
extern void sceMtapPortOpen(s32);

void func_001A3340(void) {
    s32 slot;
    s32 port;
    s32 n;
    s32 i;
    PadPort *p;

    memset(D_00492EC0, 0, 0x100);
    memset(D_00492FC0, 0, 0x5C0);
    memset(D_00493580, 0, 0x160);
    n = 0;
    for (slot = 0; slot < 4; slot++) {
        for (port = 0; port < 2; port++, n++) {
            D_00493580[n].port = port;
            D_00493580[n].slot = slot;
            D_00493580[n].buf = D_00493700[n];
        }
    }
    func_00116550(0);
    if (D_00470564 & 1) {
        sceMtapPortOpen(0);
    }
    if (D_00470564 & 2) {
        sceMtapPortOpen(1);
    }
    for (i = 0; i < 8; i++) {
        p = &D_00493580[i];
        p->handle = func_00116978(p->port, p->slot, p->buf);
    }
}
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
    memset(D_00493580[i].act, 0, 8);
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

    memset(p, 0, 0xB8);
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
extern void sceMtapInit(void);

void func_001A4540(s32 a) {
    sceMtapInit();
    D_00470564 = a;
}
