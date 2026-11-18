/* Draft (not built): func_0015A758 at 0x0015A758, size 0x60, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A758.s */

extern s8 D_0040F848;

s8 *func_0015A758(void) {
    s32 var_a0;
    s32 var_a3;
    s8 *var_a1;
    s8 *var_a2;
    s8 *var_v1;

    var_v1 = &D_0040F848;
    var_a3 = 0;
    if (D_0040F848 == 0) {
        goto block_6;
    }
    var_a2 = &D_0040F848;
    var_a1 = &D_0040F848;
loop_2:
    var_a3 += 1;
    var_a2 += 0xC;
    var_a0 = var_a3 < 0x10;
    var_a1 += 0xC;
    if (var_a0 == 0) {
        goto block_7;
    }
    var_v1 = var_a1;
    if (*var_a2 != 0) {
        goto loop_2;
    }
    goto block_7;
block_6:
    var_a0 = 1;
block_7:
    return (var_a0 != 0) ? var_v1 : NULL;
}
