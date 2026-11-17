#include "common.h"

extern u8 *D_004706CC;

#if 0
// differs: the float registers of the two converted coordinates are swapped (the original keeps x in f3), and the pointer sum is added in the other operand order
void func_00282CB0(u8 *a0, u8 *a1, s32 a2, s32 a3) {
    s32 t0;
    u8 *q;
    u8 *e;
    s16 x;
    s16 y;
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;
    f32 f4;

    t0 = *(s32 *)(a1 + 0x18);
    q = a1 + *(s32 *)(a1 + 0x14);
    e = a1 + *(s32 *)(q + (a2 - t0) * 4);
    x = *(s16 *)(e + 0x10);
    y = *(s16 *)(e + 0x12);
    f3 = (f32)x;
    f4 = (f32)y;
    if ((a3 & 1) != 0) {
        *(s32 *)(a0 + 0x34) = 0;
        f0 = f3 * *(f32 *)((u8 *)D_004706CC + 0x3C);
        *(f32 *)(a0 + 0x3C) = f0;
    } else if ((a3 & 2) != 0) {
        f1 = -f3;
        *(f32 *)(a0 + 0x34) = f1 * *(f32 *)((u8 *)D_004706CC + 0x3C);
        *(s32 *)(a0 + 0x3C) = 0;
    } else {
        f2 = 2.0f;
        f0 = -f3;
        f1 = f0 / f2;
        f0 = f1 * *(f32 *)((u8 *)D_004706CC + 0x3C);
        *(f32 *)(a0 + 0x34) = f0;
        f1 = f3 / f2;
        f0 = f1 * *(f32 *)((u8 *)D_004706CC + 0x3C);
        *(f32 *)(a0 + 0x3C) = f0;
    }
    if ((a3 & 8) != 0) {
        *(s32 *)(a0 + 0x30) = 0;
        *(f32 *)(a0 + 0x38) = f4 * *(f32 *)((u8 *)D_004706CC + 0x38);
    } else if ((a3 & 0x10) != 0) {
        f1 = -f4;
        *(f32 *)(a0 + 0x30) = f1 * *(f32 *)((u8 *)D_004706CC + 0x38);
        *(s32 *)(a0 + 0x38) = 0;
    } else {
        f2 = 2.0f;
        f0 = -f4;
        f1 = f0 / f2;
        f0 = f1 * *(f32 *)((u8 *)D_004706CC + 0x38);
        *(f32 *)(a0 + 0x30) = f0;
        f1 = f4 / f2;
        f0 = f1 * *(f32 *)((u8 *)D_004706CC + 0x38);
        *(f32 *)(a0 + 0x38) = f0;
    }
    *(s32 *)(a0 + 0x40) = 0;
    *(s32 *)(a0 + 0x44) = 0;
    *(f32 *)(a0 + 0x48) = f4;
    *(f32 *)(a0 + 0x4C) = f3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00282CB0);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00282E10);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_002832E0);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283710);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283A00);
extern u8 *D_00470820;

void SklSheet_SetIndex(s16 a0) {
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

void SklSheet_Clear(void) {
    D_00470820 = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283C20);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283D00);
