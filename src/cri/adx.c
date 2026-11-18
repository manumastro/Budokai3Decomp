#include "common.h"

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 memset(s32, s32, s32);              /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/adx", func_0014E5D0);
void func_0014E700(s32 arg0) {
    if (arg0 != 0) {
        func_00152508();
        memset(arg0, 0, 0x30);
        func_00152520();
    }
}
s8 func_0014E750(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
