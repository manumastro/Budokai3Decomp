/* Draft (not built): func_00167CC0 at 0x00167CC0, size 0x50, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dvci/func_00167CC0.s */

extern s32 D_00413960;

s32 func_00167CC0(void) {
    s32 *var_a0;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    var_a0 = &D_00413960;
loop_1:
    if ((*(s8 *)((u8 *)var_a0 + 0) != 1) || (var_v0 = 1, (*(s8 *)((u8 *)var_a0 + 2) != 2))) {
        var_a1 += 1;
        var_a0 += 0x30;
        if (var_a1 >= 0xD) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
