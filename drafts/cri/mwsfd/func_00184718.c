/* Draft (not built): func_00184718 at 0x00184718, size 0x28, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00184718.c:7: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_00184718.s */

s32 func_00199940(s32, s32, void *);    /* extern */

s32 func_00184718(void) {
    func_00199940(0, 0x3D, sp);
    return sp0;
}
