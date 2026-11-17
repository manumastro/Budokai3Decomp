#include "common.h"

/* An actor of this file: its state, a task function at 0x1C, and timers. */
typedef struct Ac280 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x1C];
    s8 f3C;
    char pad3D;
    u16 f3E;
    s16 f40;
    f32 f44;
    s32 f48;
    f32 f4C;
    f32 f50;
    f32 f54;
} Ac280;

typedef struct Sub280 {
    char pad0[0xC];
    s8 fC;
    char padD[3];
    s16 f10;
    char padE[2];
    f32 f14;
} Sub280;

typedef struct Sub2C60 {
    char pad0[2];
    s8 f2;
    s8 f3;
    char pad4[8];
    f32 fC;
} Sub2C60;

typedef struct Wrap280 {
    char pad0[0x30];
    Sub2C60 *f30;
} Wrap280;

extern f32 gFrameDelta;
extern void func_002811D0(void *);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
extern void func_0022D4B0(s32, s32);

void func_002807E0(void);
void func_00280C70(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280730);
void func_002807D0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_002807E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_002808E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280A00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280AB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280C70);
void func_00280D20(Wrap280 *w) {
    void **p = (void **)&w->f30;

    if (p[0] != NULL) {
        amCdFs_Close(p[0], 0);
    }
    if (p[1] != NULL) {
        amHeap_Free(p[1]);
    }
    if (p[2] != NULL) {
        func_0022D4B0((s32)p[2], 1);
    }
}
void func_00280D90(Ac280 *o, f32 a, f32 d) {
    o->f50 = a;
    o->f54 = (a - o->f4C) / d;
    o->f4C = o->f4C + o->f54;
}
void func_00280DC0(Ac280 *o) {
    o->f3C = 3;
    o->f44 = 0.0f;
    o->f1C = (func_002807E0 == NULL) ? NULL : (void *)func_002807E0;
}
/* differs: the original loads the float 0.0 into $f0 at the top (mtc1 $zero) and stores it with swc1; ours stores integer zero */
#if 0
void func_00280DF0(Ac280 *o, s16 a) {
    Sub280 *q;

    o->f48 = 0;
    o->f3E |= 2;
    if (o->f40 != a) {
        q = (Sub280 *)((u8 *)o + 0x30);
        q->fC = 0;
        q->f10 = a;
        q->f14 = 0.0f;
        o->f1C = (func_00280C70 == NULL) ? NULL : (void *)func_00280C70;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280DF0);
void func_00280E40(Ac280 *o, s16 a) {
    o->f3C = 0;
    o->f40 = a;
    o->f44 = 0.0f;
    o->f3E &= ~2;
    o->f1C = (func_00280C70 == NULL) ? NULL : (void *)func_00280C70;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280E70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280F20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_002811D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281A40);
void func_00281C60(Wrap280 *w) {
    Sub2C60 *o = w->f30;
    f32 d;

    func_002811D0(o);
    d = o->fC - gFrameDelta;
    o->fC = d;
    if (d <= 0.0f) {
        o->f2 = 5;
        o->f3 = 0;
    }
}
void func_00281CC0(Wrap280 *w) {
    Sub2C60 *o = w->f30;
    f32 d;

    func_002811D0(o);
    d = o->fC - gFrameDelta;
    o->fC = d;
    if (d <= 0.0f) {
        o->f2 = 5;
        o->f3 = 1;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281D20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281E40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00282620);
