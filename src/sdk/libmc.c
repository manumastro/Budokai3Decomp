#include "common.h"

s32 DeleteSema(s32);                            /* extern */
s32 func_0011A700(s32, s32, s32);   /* extern */
extern s32 D_003EF94C;
extern s32 D_003EF950;

INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_00119CB0);
s32 func_00119ED8(void) {
    if (D_003EF94C >= 0) {
        func_0011A700(0, 0, 0);
        DeleteSema(D_003EF94C);
        D_003EF94C = -1;
        DeleteSema(D_003EF950);
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_00119F30);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_00119F40);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A000);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A0C0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A1E8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A220);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A2E0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A3C0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A470);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A588);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A700);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A7C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A820);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A9A0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AA10);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AB60);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011ABF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AD30);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AE00);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AF20);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AFE0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011B1B0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011B308);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011B3D8);
