#include "common.h"

extern void func_001F5CB0(void *);

void func_002ECB90(void) {
}

void func_002ECBA0(void *a0) {
    a0 = *(void **)((char *)a0 + 0x10);
    if (*(void **)((char *)a0 + 0x10) != NULL) {
        func_001F5CB0(a0);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2ECB90", func_002ECBD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2ECB90", func_002ECCE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2ECB90", func_002ECE20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2ECB90", func_002ECFD0);
