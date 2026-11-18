#include "common.h"

extern s32 _impure_ptr;

INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001221A8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001221C0);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001221D8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_00122200);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", _calloc_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", _close_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_00122330);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_00122560);
s32 __errno(void) {
    return _impure_ptr;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001237D8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", fflush);
INCLUDE_ASM("asm/nonmatchings/sdk/libc", func_001239A0);
