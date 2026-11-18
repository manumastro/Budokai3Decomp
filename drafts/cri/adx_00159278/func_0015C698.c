/* Draft (not built): func_0015C698 at 0x0015C698, size 0x94, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C698.s */

s32 func_0015B500(void *, s32);                     /* extern */
s32 func_0015B5B0(void *, s32);                     /* extern */

void func_0015C698(u8 *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
loop_1:
    if (*(s8 *)((u8 *)arg0 + 3) != 0) {
        goto block_10;
    }
    goto loop_5;
block_3:
    *(s32 *)((u8 *)arg0 + 0x2C) = (s32) (*(s32 *)((u8 *)arg0 + 0x2C) + var_a1);
    if (*(s32 *)((u8 *)arg0 + 0x30) < *(s32 *)((u8 *)arg0 + 0x3C)) {
        goto loop_5;
    }
    *(s8 *)((u8 *)arg0 + 3) = 1;
    goto loop_1;
loop_5:
    var_a1 = func_0015B500(arg0, var_a1);
    if (var_a1 == 0) {
        goto block_7;
    }
    goto block_3;
block_7:
    return;
block_10:
    if (func_0015B5B0(arg0, var_a1) <= 0) {
        goto block_12;
    }
    *(s8 *)((u8 *)arg0 + 1) = 3;
block_12:
    return;
}
