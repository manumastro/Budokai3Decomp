/* Draft (not built): func_00181DB8 at 0x00181DB8, size 0x68, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00181DB8.c:12: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_00181DB8.s */

s32 func_0019D8E0(s32, void *);                 /* extern */
s32 func_0019E640(s32, s32, s32 *);             /* extern */

s32 func_00181DB8(s32 arg0) {
    s32 sp4;
    s32 var_v0;

    var_v0 = 0;
    if (func_0019D8E0(0xE0, sp) != 0) {
        if (sp0 == 0) {
            var_v0 = 0;
        } else {
            var_v0 = func_0019E640(arg0, 0xE0, &sp4);
            if (var_v0 != 0) {
                var_v0 = sp4 == 3;
            }
        }
    }
    return var_v0;
}
