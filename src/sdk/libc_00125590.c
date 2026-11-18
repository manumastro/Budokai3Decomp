#include "common.h"

s32 GetThreadId();                                  /* extern */
s32 WaitSema(s32);                              /* extern */
extern s32 D_003ECD50;
extern s32 D_003F00B0;
extern s32 D_003F00B4;

INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", func_00125590);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memchr);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memcmp);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memcpy);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memmove);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memset);
void __malloc_lock(void) {
    s32 temp_v0;

    temp_v0 = GetThreadId();
    if (D_003F00B0 == temp_v0) {
        D_003F00B4 += 1;
        return;
    }
    WaitSema(D_003ECD50);
    D_003F00B0 = temp_v0;
    D_003F00B4 += 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", __malloc_unlock);
