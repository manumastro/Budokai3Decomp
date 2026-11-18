/* Draft (not built): func_00154690 at 0x00154690, size 0x7C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00154690.s */

s32 func_001545F8();                            /* extern */
s32 func_00154710();                                /* extern */
s32 func_00154B68(s32);                             /* extern */
s32 func_00157FF0();                            /* extern */

s32 func_00154690(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = func_00154710();
    if (temp_v0 >= 0) {
        goto loop_4;
    }
    return temp_v0;
block_3:
    func_00157FF0();
    func_001545F8();
loop_4:
    temp_v0_2 = func_00154B68(arg0);
    var_v1 = 0;
    if (temp_v0_2 == 3) {
        goto block_6;
    }
    var_v1 = -1;
    if (temp_v0_2 != 4) {
        goto block_3;
    }
block_6:
    return var_v1;
}
