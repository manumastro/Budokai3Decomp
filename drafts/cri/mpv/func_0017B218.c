/* Draft (not built): func_0017B218 at 0x0017B218, size 0x24, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B218.s */

extern s32 *D_004814E4;

s32 func_0017B218(s32 *arg0) {
    s32 var_v0;

    D_004814E4 = arg0;
    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = ((*arg0 ^ 1) != 0) ? 0 : -1;
    }
    return var_v0;
}
