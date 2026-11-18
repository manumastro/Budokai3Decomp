#include "common.h"

s32 memset(void *, s32, s32);           /* extern */

typedef unsigned int u32_x001619A0;
extern u32_x001619A0 fn_80046D94_x001619A0(u32_x001619A0, u32_x001619A0, u32_x001619A0, u32_x001619A0) __asm__("func_00152538");
void func_001619A0_x001619A0(u32_x001619A0 arg0, u32_x001619A0 arg1, u32_x001619A0 arg2) __asm__("func_001619A0");
/* fn_8004E324: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_8004E324.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001619A0_x001619A0(u32_x001619A0 arg0, u32_x001619A0 arg1, u32_x001619A0 arg2) {
    fn_80046D94_x001619A0(arg2, arg1, (arg0 + 48), (arg0 + 50));
}
void func_001619C8(u8 *arg0, u8 *arg1, u8 *arg2) {
    *(u16 *)((u8 *)arg0 + 0x28) = (u16) *(u16 *)((u8 *)arg1 + 0);
    *(u16 *)((u8 *)arg0 + 0x2A) = (u16) *(u16 *)((u8 *)arg2 + 0);
    *(u16 *)((u8 *)arg0 + 0x2C) = (u16) *(u16 *)((u8 *)arg1 + 2);
    *(u16 *)((u8 *)arg0 + 0x2E) = (u16) *(u16 *)((u8 *)arg2 + 2);
}
void func_001619F0(u8 *arg0, u8 *arg1, u8 *arg2) {
    *(u16 *)((u8 *)arg1 + 0) = (u16) *(u16 *)((u8 *)arg0 + 0x28);
    *(u16 *)((u8 *)arg2 + 0) = (u16) *(u16 *)((u8 *)arg0 + 0x2A);
    *(u16 *)((u8 *)arg1 + 2) = (u16) *(u16 *)((u8 *)arg0 + 0x2C);
    *(u16 *)((u8 *)arg2 + 2) = (u16) *(u16 *)((u8 *)arg0 + 0x2E);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001619A0", func_00161A18);
void func_00161A28(u8 *arg0, u16 *arg1, u16 *arg2, u16 *arg3) {
    *arg1 = *(u16 *)((u8 *)arg0 + 0x34);
    *arg2 = *(u16 *)((u8 *)arg0 + 0x36);
    *arg3 = *(u16 *)((u8 *)arg0 + 0x38);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001619A0", func_00161A48);
void func_00161A80(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 8) = arg1;
}
s32 func_00161A88(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xC);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001619A0", func_00161A90);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001619A0", func_00161AC0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001619A0", func_00161AF0);
void func_00161B20(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0xC) == 0) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        *(s32 *)((u8 *)arg0 + 0xC) = 1;
    }
}
void func_00161B40(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    memset(arg0 + 0x28, 0, 8);
}
void func_00161B68(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0xC) == 3) {
        *(s32 *)((u8 *)arg0 + 0xC) = 0;
    }
}
s32 func_00161B80(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x10);
}
