#include "common.h"

extern s32 D_00462E20;

s32 func_00162080();                                /* extern */

s32 func_00127A88(s32 *, s32);              /* extern */
s32 func_00162398();                                /* extern */
s32 func_00163AB8(s32);                             /* extern */
s32 sprintf(s32, s32 *, s32, s32 *);    /* extern */
extern s32 D_00462DF8;
extern s32 D_0047ECE0;

extern s32 D_0041158C;
extern s32 D_00411590;

s32 func_00161D20(s32 *);                   /* extern */
extern s32 D_00462648;

INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162A70);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162AD8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162B98);
s32 func_00162C68(u8 *arg0) {
    s32 (*temp_v0)(s32, s32, s32, s32);
    s32 var_v1;

    if (arg0 == NULL) {
        func_00161D20(&D_00462648);
        return -1;
    }
    temp_v0 = *(s32 (**)(s32, s32, s32, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x60);
    var_v1 = 0x7FFFFFFF;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0(*(s32 *)((u8 *)arg0 + 4), 0x12C, 0, 0);
    }
    return var_v1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162CC8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162E08);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162E70);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162EC8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162F30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162FF0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163098);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001631A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163280);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001632D8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163398);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163458);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163518);
void func_001635A0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        D_0041158C = 0;
        D_00411590 = 0;
        return;
    }
    D_0041158C = arg0;
    D_00411590 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001635C8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163630);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163698);
s32 func_00163758(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163760);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163868);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163928);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001639F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163AB8);
void func_00163B08(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 == 0) {
        var_s0 = func_00162398();
    }
    if (func_00163AB8(var_s0) == 1) {
        func_00127A88(&D_0047ECE0, arg1);
        sprintf(arg1, &D_00462DF8, var_s0, &D_0047ECE0);
    }
}
s32 func_00163BA0(void) {
    return func_00162080() != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163BC0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163C58);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163D10);
s32 func_00163DD0(u8 *arg0) {
    s32 (*temp_v0)(s32, s32, s32, s32);
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == NULL) {
        func_00161D20(&D_00462E20);
        return 0;
    }
    temp_v0 = *(s32 (**)(s32, s32, s32, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x60);
    if (temp_v0 != NULL) {
        var_v1 = temp_v0(*(s32 *)((u8 *)arg0 + 4), 0x12B, 0, 0);
    }
    return var_v1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163E30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163E60);
