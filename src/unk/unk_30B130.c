#include "common.h"

/* The part of an actor that these functions use: a state word, a timer at 0x1C. */
typedef struct Part30C {
    s16 f0;
    char pad2[0x1A];
    f32 f1C;
} Part30C;

/* An actor: a task function at 0x1C and its part at 0x30. */
typedef struct Ac30C {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    Part30C *f30;
} Ac30C;

extern f32 gFrameDelta;
extern void func_0030BFC0(Part30C *);
extern void func_0030B2E0(Part30C *);
extern void func_0030C860(void);
extern void func_0022D4B0(s32, s32);
extern void func_0022D0E0(s32, s32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030B130);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030B2E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030BD30);
void func_0030BF10(s32 *p) {
    s32 i;
    s32 *q;

    q = p;
    for (i = 0; i < 8; i++, q++) {
        if (q[5] != 0) {
            func_0022D4B0(q[5], 1);
            q[5] = 0;
        }
    }
    if (p[1] != 0) {
        func_0022D0E0(p[1], 1);
        p[1] = 0;
    }
    for (i = 0; i < 3; i++, p++) {
        if (p[2] != 0) {
            func_0022D0E0(p[2], 1);
            p[2] = 0;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030BFC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C0E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C280);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C400);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C6F0);
void func_0030C860(void) {
}
/* differs: the outer task store is shared by both paths of the timer test, and the original keeps the value in $v1 (19 of 35 with the ?: form) */
#if 0
void func_0030C870(Ac30C *s) {
    Part30C *p = s->f30;
    f32 t;

    func_0030BFC0(p);
    func_0030B2E0(p);
    t = p->f1C - gFrameDelta;
    if (t <= 0.0f) {
        p->f1C = t;
        p->f0 = 7;
    }
    s->f1C = (t <= 0.0f) ? (void *)func_0030C860 : NULL;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C8F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C9C0);
