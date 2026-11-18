/* Draft (not built): func_00172B48 at 0x00172B48, size 0x2C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00172B48.s */

extern s32 (*D_00424BDC)();

s32 func_00172B48(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00424BDC != NULL) {
        var_v0 = D_00424BDC();
    }
    return var_v0;
}
