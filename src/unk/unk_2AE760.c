#include "common.h"

/* An actor of this file: a task function at 0x10, a timer at 0x30. */
typedef struct Ac2AE {
    char pad0[0x10];
    void *f10;
    char pad14[0x1C];
    f32 f30;
} Ac2AE;

/* The event that starts the actor: floats in a list at 0x2C. */
typedef struct Ev2AE {
    char pad0[0x2C];
    f32 *f2C;
} Ev2AE;

extern s32 D_004708FC;
extern void A2d_SetMode(s32);
extern void func_00228430(s32);
extern void func_002AF420(Ac2AE *);
extern s32 func_002AEFD0(Ac2AE *);
extern u8 D_005BCD20[];
extern void func_002AE810(void *);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_00228410(u8 *, u8 *);
extern void amModel_SetCurrent(s32);
extern void func_002AF0A0(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AE760);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AE810);
s32 func_002AE970(s32 **a0, u8 *a1) {
    s32 idx;
    s32 k;
    s32 off;

    idx = **(s32 **)(a1 + 0x2C);
    if (idx != -1) {
        func_002AE810(D_005BCD20 + (**a0) * 160 + idx * 40);
    } else {
        for (k = 0, off = 0; k < 4; k++, off += 40) {
            func_002AE810(D_005BCD20 + (**a0) * 160 + off);
        }
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AEA40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AEB60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AECA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AEDC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AEEF0);
/* differs: the original keeps a nop in the bc1f delay slot and stores f10 at the join (4 of 26) */
#if 0
s32 func_002AEFD0(Ac2AE *o) {
    f32 d;

    A2d_SetMode(D_004708FC);
    func_00228430(0);
    d = o->f30 - 1.0f;
    if (d <= 0.0f) {
        o->f30 = d;
        return 1;
    }
    o->f10 = NULL;
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AEFD0);
s32 func_002AF040(Ac2AE *o, Ev2AE *e) {
    o->f30 = 1.0f + e->f2C[0];
    A2d_SetMode(D_004708FC);
    func_00228430(0);
    o->f10 = (void *)func_002AEFD0;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF0A0);
/* differs: 21 of 44 instructions. The float constant 1.0f lands in $f1 (the original puts it in $f0 and loads the field
   into $f1), the field loads of the event and the callee arguments are in another order; no declaration order fixes it
   (80 orders sampled, best 21). */
#if 0
s32 func_002AF170(u8 *a0, u8 *a1) {
    f32 *p;
    u8 *s2;
    f32 f;
    s32 s1;
    s32 t8;
    s32 t14;

    p = *(f32 **)(a1 + 0x2C);
    f = 1.0f + p[0];
    s2 = D_005BCD20 + (**(s32 **)a0) * 160 + ((s32 *)p)[1] * 40;
    *(f32 *)(a0 + 0x30) = f;
    func_00228410(a0, D_005BCD20);
    s1 = *(s32 *)(s2 + 0x10);
    t14 = *(s32 *)(s2 + 0x14);
    t8 = *(s32 *)(s2 + 0x8);
    D_00470704 = t8;
    D_0047070C = t14;
    amModel_SetCurrent(t8);
    D_00470708 = s1;
    D_00470238 = s1;
    *(void **)(a0 + 0x10) = func_002AF0A0;
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF170);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF220);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF330);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF420);
void func_002AF630(Ac2AE *o, Ev2AE *e) {
    o->f30 = e->f2C[1];
    o->f10 = (void *)func_002AF420;
    func_002AF420(o);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AF650);
