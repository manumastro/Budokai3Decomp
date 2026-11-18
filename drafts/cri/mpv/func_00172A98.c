/* Draft (not built): func_00172A98 at 0x00172A98, size 0x2C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00172A98.s */

extern s32 (*D_00424BCC)();

s32 func_00172A98(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00424BCC != NULL) {
        var_v0 = D_00424BCC();
    }
    return var_v0;
}
