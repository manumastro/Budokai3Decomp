/* Draft (not built): func_001844F0 at 0x001844F0, size 0x30, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001844F0.c:13: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001844F0.s */

s32 func_00187FE8(s32, void *);                 /* extern */

s32 func_001844F0(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0;
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x44);
    if (temp_v1 != 0) {
        func_00187FE8(temp_v1, sp);
        var_v0 = sp0;
    }
    return var_v0;
}
