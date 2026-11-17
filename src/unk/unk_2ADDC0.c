#include "common.h"

typedef struct UnkObj {
    s32 *f0;
    char pad4[0x10];
    void *f14;
    char pad18[0x10];
    s8 f28;
    s8 f29;
} UnkObj;

typedef struct UnkMsg {
    char pad0[0x2C];
    s32 *arg;
} UnkMsg;

typedef struct UnkSlot {
    char pad0[0x20D4];
    s8 f20D4;
    char pad20D5[3];
    f32 f20D8;
    char pad20DC[4];
} UnkSlot;

extern UnkSlot D_005ABA80[][4];
extern void func_002ADB70(void);
extern void func_002ADE10(void);

s32 func_002ADDC0(UnkObj *o, UnkMsg *m) {
    s32 *a = m->arg;

    if (a[0] != 0) {
        o->f14 = func_002ADB70;
        o->f28 = a[1];
    } else if (o->f14 == func_002ADB70) {
        o->f14 = NULL;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_2ADDC0", func_002ADE10);
s32 func_002AE2D0(UnkObj *o, UnkMsg *m) {
    s32 *a = m->arg;
    UnkSlot *sl = &D_005ABA80[*o->f0][a[2]];

    if (a[1] != 0) {
        o->f14 = func_002ADE10;
        o->f28 = a[2];
        o->f29 = a[0];
        sl->f20D4 = 1;
        sl->f20D8 = 1.0f;
    } else {
        if (o->f14 == func_002ADE10) {
            o->f14 = NULL;
        }
        sl->f20D4 = 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_2ADDC0", func_002AE380);
