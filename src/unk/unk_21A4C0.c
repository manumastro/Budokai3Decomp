#include "common.h"

void func_0021A4C0(void) {
}
s32 func_0021A4D0(void) {
    return 0;
}
void func_0021A4E0(void) {
}
void func_0021A4F0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021A500);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021A620);
typedef struct Effect21A {
    char pad0[0x40];
    void *f40;
    void *f44;
} Effect21A;

extern void Obj_ResetF38(void *);
extern void amTask_Kill(void *);

void Effect21A_Release(Effect21A *e) {
    if (e->f40 != NULL) {
        Obj_ResetF38(e->f40);
        e->f40 = NULL;
    }
    if (e->f44 != NULL) {
        amTask_Kill(e->f44);
        e->f44 = NULL;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021A820);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021A930);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021AA50);
