#include "common.h"

s32 _free_r(s32, s32);                          /* extern */

s32 _malloc_r(s32, s32);                            /* extern */

s32 __malloc_lock(s32);                         /* extern */
s32 __malloc_unlock(s32);                       /* extern */
s32 func_001249A8(s32, s32, s32);                   /* extern */

s32 func_001246A0(s32, s32, s32);               /* extern */
extern s32 _impure_ptr;

extern s32 D_0045EC10;

INCLUDE_ASM("asm/nonmatchings/sdk/libc_001246A0", func_001246A0);
s32 *func_00124730(void) {
    return &D_0045EC10;
}
void func_00124740(s32 arg0, s32 arg1) {
    func_001246A0(_impure_ptr, arg0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_001246A0", func_00124768);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_001246A0", _lseek_r);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_001246A0", func_001247E8);
s32 func_00124940(s32 arg0, s32 arg1) {
    s32 temp_s1;

    __malloc_lock(_impure_ptr);
    temp_s1 = func_001249A8(_impure_ptr, arg0, arg1);
    __malloc_unlock(_impure_ptr);
    return temp_s1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_001246A0", func_001249A8);
s32 func_00124B70(s32 arg0) {
    s32 temp_s1;

    __malloc_lock(_impure_ptr);
    temp_s1 = _malloc_r(_impure_ptr, arg0);
    __malloc_unlock(_impure_ptr);
    return temp_s1;
}
void func_00124BC8(s32 arg0) {
    __malloc_lock(_impure_ptr);
    _free_r(_impure_ptr, arg0);
    __malloc_unlock(_impure_ptr);
}
