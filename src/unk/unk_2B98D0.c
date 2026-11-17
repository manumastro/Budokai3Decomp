#include "common.h"

/* An actor of this file: its task function at 0x1C. */
typedef struct Ac98D {
    char pad0[0x1C];
    void *f1C;
} Ac98D;

extern s16 func_002F5480(void);
extern void func_002F55E0(void);
extern void func_002BB650(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B98D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B9C10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B9D30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BA2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BA610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BAC80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BAFA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB100);
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
