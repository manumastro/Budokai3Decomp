#include "common.h"

s32 sceSifDmaStat(s32);                             /* extern */
s32 sceSifSetDma(s32 *, s32);               /* extern */
extern s32 D_00478C40;

INCLUDE_ASM("asm/nonmatchings/sdk/libsdr", func_00117C10);
s32 func_00117CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if ((arg3 == 0) || (*(s32 *)((u8 *)(&D_00478C40) + 0) = arg0, *(s32 *)((u8 *)(&D_00478C40) + 4) = arg1, *(s32 *)((u8 *)(&D_00478C40) + 8) = arg2, *(s32 *)((u8 *)(&D_00478C40) + 0xC) = 0, temp_v0 = sceSifSetDma(&D_00478C40, 1), (temp_v0 == 0))) {
        return -1;
    }
    if (arg3 == 1) {
        do {

        } while (sceSifDmaStat(temp_v0) >= 0);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libsdr", func_00117D48);
INCLUDE_ASM("asm/nonmatchings/sdk/libsdr", func_00117D68);
