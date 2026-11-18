#include "common.h"

extern s8 D_00400B60;

s32 func_0014E900();                            /* extern */

void func_0014E8F8(u8 *arg0) {
    *(s8 *)((u8 *)arg0 + 1) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014E8F8", func_0014E900);
void func_0014EB90(u8 *arg0) {
    if (*(s8 *)((u8 *)arg0 + 1) == 2) {
        func_0014E900();
    }
}
void func_0014EBB8(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_00400B60;
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_0014EB90(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x30;
    } while (var_s1 >= 0);
}
s32 func_0014EC18(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
void func_0014EC20(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x20) = arg1;
}
s32 func_0014EC28(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x20);
}
void func_0014EC30(u8 *arg0, f32 fparg0) {
    *(f32 *)((u8 *)arg0 + 0x24) = fparg0;
}
f32 func_0014EC38(u8 *arg0) {
    return *(f32 *)((u8 *)arg0 + 0x24);
}
void func_0014EC40(u8 *arg0, f32 fparg0) {
    *(f32 *)((u8 *)arg0 + 0x28) = fparg0;
}
f32 func_0014EC48(u8 *arg0) {
    return *(f32 *)((u8 *)arg0 + 0x28);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014E8F8", func_0014EC50);
void func_0014EC80(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xC4) = arg1;
    *(s32 *)((u8 *)arg0 + 0xC8) = (s32) (arg1 / 1536);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014E8F8", func_0014ECA0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014E8F8", func_0014ECD0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014E8F8", func_0014ED00);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014E8F8", func_0014EDB0);
