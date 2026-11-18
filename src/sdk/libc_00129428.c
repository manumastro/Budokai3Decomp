#include "common.h"

s32 func_00129458(s32, s32, s32, s32);          /* extern */

s32 _strtol_r(s32, s32, s32, s32);              /* extern */
extern s32 _impure_ptr;

void func_00129428(s32 arg0, s32 arg1, s32 arg2) {
    _strtol_r(_impure_ptr, arg0, arg1, arg2);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_00129458);
void func_00129688(s32 arg0, s32 arg1, s32 arg2) {
    func_00129458(_impure_ptr, arg0, arg1, arg2);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_001296B8);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_001297A0);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", __sprint);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_00129970);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", vfprintf);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", _vfprintf_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012B110);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012B2D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", __svfscanf);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012C040);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012C140);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012C198);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", _write_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", __swsetup);
