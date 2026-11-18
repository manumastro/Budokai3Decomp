/* Draft (not built): func_00167558 at 0x00167558, size 0x3C, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: error: d_00167558.c:9: too few arguments to function `strlen'
 * Original: asm/nonmatchings/cri/dvci/func_00167558.s */

s32 strlen();                                       /* extern */

s32 func_00167558(u8 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (strlen() == 0x11) {
        var_v0 = *(s8 *)((u8 *)arg0 + 8) == 0x2E;
    }
    return var_v0;
}
