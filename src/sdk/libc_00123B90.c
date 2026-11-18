#include "common.h"

s32 _cleanup_r(s32);                            /* extern */
extern s32 _impure_ptr;

void func_00123B90(void) {
    _cleanup_r(_impure_ptr);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00123B90", __sinit);
