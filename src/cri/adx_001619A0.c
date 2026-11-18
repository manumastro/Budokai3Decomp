#include "common.h"

s32 memset(void *, s32, s32);           /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/adx_001619A0", func_001619A0);
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
