/* Draft (not built): func_00168278 at 0x00168278, size 0x34, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_00168278.s */

extern s8 D_00413960;

s8 *func_00168278(void) {
    s32 var_a0;
    s8 *var_a1;
    s8 *var_v1;

    var_a1 = NULL;
    var_v1 = &D_00413960;
    var_a0 = 0xC;
    do {
        var_a0 -= 1;
        var_a1 = ((*var_v1 ^ 0) == 0) ? var_v1 : var_a1;
        var_v1 += 0x30;
    } while (var_a0 >= 0);
    return var_a1;
}
