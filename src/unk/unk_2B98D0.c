#include "common.h"

/* An actor of this file: its task function at 0x1C. */
typedef struct Ac98D {
    char pad0[0x1C];
    void *f1C;
} Ac98D;

extern s16 func_002F5480(void);
extern void func_002F55E0(void);
extern void func_002BB650(void);

/* A 16-byte vector (one quadword). */
typedef struct V16 {
    s32 v[4];
} __attribute__((aligned(16))) V16;

extern V16 D_00455EC0;

/* The work of this file: two handles (0xA8, 0x1C0) and the state the functions reset. */
typedef struct W98D {
    char pad0[0xA8];
    void *fA8;
    char padAC[0x1C0 - 0xAC];
    void *f1C0;
} W98D;

extern W98D *D_00470910;
extern s32 func_0022BF80(void *);
extern void func_0022D0E0(void *, s32);
extern void amTask_Kill(void *);
extern void func_002BC250(void);
extern void func_00139620(s32, void *, s32, s32, s32, f32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B98D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B9C10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B9D30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BA2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BA610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BAC80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BAFA0);
void func_002BB100(void) {
    V16 tmp = D_00455EC0;

    func_00139620(0x900, &tmp, -1, 0x44, 0, 600.0f);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB150);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB490);
void func_002BB5F0(Ac98D *s) {
    if (func_002F5480() == 4) {
        func_002F55E0();
        s->f1C = (func_002BB650 == NULL) ? NULL : (void *)func_002BB650;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB650);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BBA30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BBCB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC000);
/* differs: the handle reset and the task store are scheduled in the other order (9 of 36) */
#if 0
void func_002BC090(Ac98D *s) {
    W98D *w;
    void *t;

    if (func_0022BF80(D_00470910->f1C0) == 0xFF) {
        if (D_00470910->f1C0 != NULL) {
            func_0022D0E0(D_00470910->f1C0, 1);
            D_00470910->f1C0 = NULL;
        }
        if (D_00470910->fA8 != NULL) {
            amTask_Kill(D_00470910->fA8);
        }
        w = D_00470910;
        t = (func_002BC250 == NULL) ? NULL : (void *)func_002BC250;
        w->fA8 = NULL;
        s->f1C = t;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC090);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC250);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC7E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC920);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCA30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCAE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCBE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCCD0);
