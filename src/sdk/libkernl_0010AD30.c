#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AD30", func_0010AD30);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AD30", func_0010AD40);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AD30", func_0010ADA8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AD30", DisableDmac);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AD30", func_0010AE78);
s32 _iEnableIntc_x0010AEE0() __asm__("_iEnableIntc");
void func_0010AEE0_x0010AEE0(void) __asm__("func_0010AEE0");
void func_0010AEE0_x0010AEE0(void) {
    _iEnableIntc_x0010AEE0();
    __asm__ __volatile__("sync.l");
}
s32 _iDisableIntc_x0010AF00() __asm__("_iDisableIntc");
void func_0010AF00_x0010AF00(void) __asm__("func_0010AF00");
void func_0010AF00_x0010AF00(void) {
    _iDisableIntc_x0010AF00();
    __asm__ __volatile__("sync.l");
}
s32 _iEnableDmac_x0010AF20() __asm__("_iEnableDmac");
void func_0010AF20_x0010AF20(void) __asm__("func_0010AF20");
void func_0010AF20_x0010AF20(void) {
    _iEnableDmac_x0010AF20();
    __asm__ __volatile__("sync.l");
}
s32 _iDisableDmac_x0010AF40() __asm__("_iDisableDmac");
void func_0010AF40_x0010AF40(void) __asm__("func_0010AF40");
void func_0010AF40_x0010AF40(void) {
    _iDisableDmac_x0010AF40();
    __asm__ __volatile__("sync.l");
}
