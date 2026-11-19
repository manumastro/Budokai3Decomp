#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010AD30", func_0010AD30);
int DI_x0010AD40(void) __asm__("DI");
int EI_x0010AD40(void) __asm__("EI");
int _DisableIntc_x0010AD40(int) __asm__("_DisableIntc");
int func_0010AD40_x0010AD40(int ch) __asm__("func_0010AD40");
int func_0010AD40_x0010AD40(int ch)
{
    int eie, ret;
    __asm__ volatile ("mfc0 %0, $12" : "=r"(eie));
    eie &= 0x10000;
    if (eie) {
        DI_x0010AD40();
    }
    ret = _DisableIntc_x0010AD40(ch);
    __asm__ volatile ("sync");
    if (eie) {
        EI_x0010AD40();
    }
    return ret;
}
int DI_x0010ADA8(void) __asm__("DI");
int EI_x0010ADA8(void) __asm__("EI");
int _EnableIntc_x0010ADA8(int) __asm__("_EnableIntc");
int func_0010ADA8_x0010ADA8(int ch) __asm__("func_0010ADA8");
int func_0010ADA8_x0010ADA8(int ch)
{
    int eie, ret;
    __asm__ volatile ("mfc0 %0, $12" : "=r"(eie));
    eie &= 0x10000;
    if (eie) {
        DI_x0010ADA8();
    }
    ret = _EnableIntc_x0010ADA8(ch);
    __asm__ volatile ("sync");
    if (eie) {
        EI_x0010ADA8();
    }
    return ret;
}
int DI_x0010AE10(void) __asm__("DI");
int EI_x0010AE10(void) __asm__("EI");
int _DisableDmac_x0010AE10(int) __asm__("_DisableDmac");
int DisableDmac_x0010AE10(int ch) __asm__("DisableDmac");
int DisableDmac_x0010AE10(int ch)
{
    int eie, ret;
    __asm__ volatile ("mfc0 %0, $12" : "=r"(eie));
    eie &= 0x10000;
    if (eie) {
        DI_x0010AE10();
    }
    ret = _DisableDmac_x0010AE10(ch);
    __asm__ volatile ("sync");
    if (eie) {
        EI_x0010AE10();
    }
    return ret;
}
int DI_x0010AE78(void) __asm__("DI");
int EI_x0010AE78(void) __asm__("EI");
int _EnableDmac_x0010AE78(int) __asm__("_EnableDmac");
int func_0010AE78_x0010AE78(int ch) __asm__("func_0010AE78");
int func_0010AE78_x0010AE78(int ch)
{
    int eie, ret;
    __asm__ volatile ("mfc0 %0, $12" : "=r"(eie));
    eie &= 0x10000;
    if (eie) {
        DI_x0010AE78();
    }
    ret = _EnableDmac_x0010AE78(ch);
    __asm__ volatile ("sync");
    if (eie) {
        EI_x0010AE78();
    }
    return ret;
}
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
