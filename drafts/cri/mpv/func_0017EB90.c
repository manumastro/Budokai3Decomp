/* Draft (not built): func_0017EB90 at 0x0017EB90, size 0x24, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017EB90.s */

extern void *D_0048154C;

s32 func_0017EB90(u8 *arg0) {
    s32 var_v0;

    D_0048154C = arg0;
    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = ((*(s32 *)((u8 *)arg0 + 0x188) ^ 2) == 0) ? 0 : -1;
    }
    return var_v0;
}
