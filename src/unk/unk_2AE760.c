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

INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AE760);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AE810);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AE760", func_002AE970);
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
