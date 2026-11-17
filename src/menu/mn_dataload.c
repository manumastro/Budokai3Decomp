#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265020);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265420);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002655F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265700);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265800);
extern void func_001F07B0();

void func_002659E0(void) {
    func_001F07B0(5);
}
extern void func_00265800();

void func_002659F0(u8 *a0) {
    func_00265800(*(void **)(a0 + 0x34));
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265A00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265B40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265BF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266070);
extern f32 D_004703BC;
extern void func_00266070();

void func_00266150(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x34);
    func_00265800(s0);
    *(f32 *)(s0 + 0x34) = *(f32 *)(s0 + 0x34) - D_004703BC;
    if (*(f32 *)(s0 + 0x34) <= 0.0f) {
        *(u16 *)(s0 + 0x32) = *(u16 *)(s0 + 0x32) | 0x100;
        *(s32 *)(s0 + 0x34) = 0x42340000;
        *(void **)(a0 + 0x1C) = ((void *)func_00266070 == 0) ? 0 : (void *)func_00266070;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002661D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266390);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002667D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002668F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266AC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266CD0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266EC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00267090);
