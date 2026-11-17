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

extern void func_00209530(void *);
extern void func_00145120(void *);

void func_0021A7D0(Effect21A *e) {
    if (e->f40 != NULL) {
        func_00209530(e->f40);
        e->f40 = NULL;
    }
    if (e->f44 != NULL) {
        func_00145120(e->f44);
        e->f44 = NULL;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021A820);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021A930);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21A4C0", func_0021AA50);
