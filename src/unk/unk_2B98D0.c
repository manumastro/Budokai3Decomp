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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC090);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC250);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC7E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC920);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCA30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCAE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCBE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCCD0);
