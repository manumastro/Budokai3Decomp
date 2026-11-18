#include "common.h"

extern void *_impure_ptr;

void srand(s64 arg0) {
    *(u64 *)((u8 *)_impure_ptr + 0xA8) = (u64) ((u64) (arg0 << 0x20) >> 0x20);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00126B70", rand);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00126B70", _read_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00126B70", func_00126C50);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00126B70", func_001271F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00126B70", __srefill);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00126B70", _sbrk_r);
