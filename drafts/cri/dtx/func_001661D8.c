/* Draft (not built): func_001661D8 at 0x001661D8, size 0x50, segment cri/dtx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dtx/func_001661D8.s */

extern s32 D_00412AD0;

s32 func_001661D8(void) {
    s32 *var_a0;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    var_a0 = &D_00412AD0;
loop_1:
    if ((*(s8 *)((u8 *)var_a0 + 0) != 1) || (var_v0 = 1, (*(s8 *)((u8 *)var_a0 + 2) != 2))) {
        var_a1 += 1;
        var_a0 += 0x48;
        if (var_a1 >= 0x28) {
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
