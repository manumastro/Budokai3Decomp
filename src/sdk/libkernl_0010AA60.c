#include "common.h"

s32 *__errno();                                     /* extern */

s32 func_0010AA60(void) {
    *__errno() = 5;
    return -1;
}
s32 func_0010AA88(void) {
    *__errno() = 5;
    return -1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AA60", _sceSDC);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AA60", func_0010AB58);
