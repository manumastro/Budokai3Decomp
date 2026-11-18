/* Draft (not built): func_0019F128 at 0x0019F128, size 0xB4, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019F128.s */

f32 func_0019F128(s32 arg0) {
    f32 temp_f0;
    f32 var_f0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s8 *temp_a2;
    s8 *temp_v1;
    s8 *var_v0;
    s8 var_v0_2;

    var_a1 = 0xF;
    var_v0 = arg0 + 0xF;
loop_1:
    var_a1 -= 1;
    *var_v0 = 0;
    var_v0 -= 1;
    if (var_a1 >= 0) {
        goto loop_1;
    }
    var_a1_2 = 0x10;
loop_3:
    temp_a2 = arg0 + var_a1_2;
    temp_f0 = (f32) (var_a1_2 - 0x10);
    var_a1_2 += 1;
    var_f0 = temp_f0 * 0.58199996f;
    var_v0_2 = M2C_ERROR(/* Read from unset register $f3 */);
    if (!(var_f0 >= 2.1474836e9f)) {
        goto block_5;
    }
    var_f0 -= 2.1474836e9f;
    var_v0_2 = M2C_ERROR(/* Read from unset register $f3 */) | 0x80000000;
block_5:
    *temp_a2 = var_v0_2;
    if (var_a1_2 < 0xEC) {
        goto loop_3;
    }
    var_a1_3 = 0xEC;
loop_7:
    temp_v1 = arg0 + var_a1_3;
    var_a1_3 += 1;
    *temp_v1 = -0x80;
    if (var_a1_3 < 0x100) {
        goto loop_7;
    }
    return var_f0;
}
