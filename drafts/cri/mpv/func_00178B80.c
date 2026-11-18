/* Draft (not built): func_00178B80 at 0x00178B80, size 0x24, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00178B80.s */

extern s32 *D_004814D8;

s32 func_00178B80(s32 *arg0) {
    s32 var_v0;

    D_004814D8 = arg0;
    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = ((*arg0 ^ 2) == 0) ? 0 : -1;
    }
    return var_v0;
}
