#include "common.h"

s32 func_00128288(s32, s32, s32);               /* extern */
extern s32 _impure_ptr;

INCLUDE_ASM("asm/nonmatchings/sdk/libc_00128288", func_00128288);
void func_001291A0(s32 arg0, s32 arg1) {
    func_00128288(_impure_ptr, arg0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00128288", func_001291C8);
