/* Draft (not built): func_0017CA98 at 0x0017CA98, size 0x6C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017CA98.c:12: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mpv/func_0017CA98.s */

s32 func_0017B420(s32);                             /* extern */

s32 func_0017CA98(u8 **arg0) {
    s32 var_v0;

    (*(s32 (**)(s32, s32, u8 *))((u8 *)(*arg0) + 0x18))(1, 0x7FFFFFFF, sp);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg0) + 0x1C))(arg0, 1, sp);
    var_v0 = 0;
    if (sp4 >= 4) {
        var_v0 = func_0017B420(sp0);
    }
    return var_v0;
}
