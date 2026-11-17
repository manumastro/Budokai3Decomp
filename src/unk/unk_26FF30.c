#include "common.h"

/* An actor of this file: its state at 0x1C is a task function (or NULL). */
typedef struct Ac26F {
    char pad0[0x1C];
    void *f1C;
} Ac26F;

extern s32 func_002D20D0(void *);
extern s32 func_00283BF0(void *);
extern void func_00283C20(void);
extern void func_00271AF0(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_0026FF30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270020);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_002700E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_002702A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270CA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270EC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00271080);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00271580);
void func_002719D0(Ac26F *s) {
    if (func_002D20D0(s) == 6) {
        s->f1C = (func_00271AF0 == NULL) ? NULL : (void *)func_00271AF0;
    }
}
void func_00271A20(Ac26F *s) {
    if (func_00283BF0(s) == 8) {
        s->f1C = (func_00271AF0 == NULL) ? NULL : (void *)func_00271AF0;
        func_00283C20();
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00271A70);
