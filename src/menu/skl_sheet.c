#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00282CB0);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00282E10);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_002832E0);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283710);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283A00);
extern u8 *D_00470820;

void func_00283BD0(s16 a0) {
    *(s32 *)(D_00470820 + 0x48) = 2;
    *(s16 *)(D_00470820 + 0x60) = a0;
}
extern u8 *D_00470820;

s32 func_00283BF0(void) {
    s32 r;
    if (D_00470820 != 0) {
        r = *(s32 *)(D_00470820 + 0x48);
    } else {
        r = 8;
    }
    return r;
}
extern u8 *D_00470820;

void func_00283C10(void) {
    D_00470820 = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283C20);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283D00);
