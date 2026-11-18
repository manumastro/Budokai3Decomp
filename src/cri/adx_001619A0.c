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
typedef unsigned int u32_x00161A48;
extern u32_x00161A48 memset_x00161A48(u32_x00161A48, u32_x00161A48, u32_x00161A48) __asm__("memset");
struct fn_8004E278_Arg0_x00161A48 {
    u32_x00161A48 unk_0;
};
void func_00161A48_x00161A48(struct fn_8004E278_Arg0_x00161A48 *arg0) __asm__("func_00161A48");
/* fn_8004E278: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_8004E278.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00161A48_x00161A48(struct fn_8004E278_Arg0_x00161A48 *arg0) {
    if ((u32_x00161A48)arg0 != 0) {
    arg0->unk_0 = 0;
    memset_x00161A48((u32_x00161A48)arg0, 0, 60);
    }
}
void func_00161A80(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 8) = arg1;
}
s32 func_00161A88(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xC);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001619A0", func_00161A90);
typedef unsigned char u8_x00161AC0;
typedef signed int s32_x00161AC0;
typedef unsigned int u32_x00161AC0;
struct fn_8004E204_Arg0_x00161AC0 {
    u8_x00161AC0 pad_0[0xC];
    u32_x00161AC0 unk_C;
};
s32_x00161AC0 func_00161AC0_x00161AC0(struct fn_8004E204_Arg0_x00161AC0 *arg0, u32_x00161AC0 arg1, u32_x00161AC0 arg2, u32_x00161AC0 arg3, u32_x00161AC0 arg4) __asm__("func_00161AC0");
/* fn_8004E204: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_8004E204.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
s32_x00161AC0 func_00161AC0_x00161AC0(struct fn_8004E204_Arg0_x00161AC0 *arg0, u32_x00161AC0 arg1, u32_x00161AC0 arg2, u32_x00161AC0 arg3, u32_x00161AC0 arg4) {
    u32_x00161AC0 v0;
    v0 = (u32_x00161AC0)arg0;
    if ((s32_x00161AC0)arg0->unk_C == 0) {
    *(u32_x00161AC0 *)((u8_x00161AC0 *)v0 + 20) = 2;
    *(u32_x00161AC0 *)((u8_x00161AC0 *)v0 + 24) = arg1;
    *(u32_x00161AC0 *)((u8_x00161AC0 *)v0 + 28) = arg2;
    *(u32_x00161AC0 *)((u8_x00161AC0 *)v0 + 32) = arg3;
    *(u32_x00161AC0 *)((u8_x00161AC0 *)v0 + 36) = arg4;
    v0 = 1;
    return v0;
    }
    v0 = 0;
    return v0;
}
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
