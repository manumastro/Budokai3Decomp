#include "common.h"

s32 Exit_001149D8();                            /* extern */

INCLUDE_ASM("asm/nonmatchings/sdk/crt0", func_00100000);
INCLUDE_ASM("asm/nonmatchings/sdk/crt0", _start);
void func_00100218(void) {
    Exit_001149D8();
}
/* The Exit system call (0x23), two nops after it: it does not return. Assembly in Sony's crt0, so written as such. */
__asm__(
    ".section .text\n"
    "    .align 3\n"
    "    .set noat\n"
    "    .set noreorder\n"
    "    .globl func_00100220\n"
    "    .type func_00100220, @function\n"
    "func_00100220:\n"
    "    addiu $v1, $zero, 0x23\n"
    "    syscall 0\n"
    "    nop\n"
    "    nop\n"
    "    .size func_00100220, 16\n"
    "    .set reorder\n"
    "    .set at\n"
);
INCLUDE_ASM("asm/nonmatchings/sdk/crt0", func_00100230);
