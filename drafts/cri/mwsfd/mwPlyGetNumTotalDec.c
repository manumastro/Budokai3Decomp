/* Draft (not built): mwPlyGetNumTotalDec at 0x00183F18, size 0x54, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00183F18.c:14: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetNumTotalDec.s */

s32 func_00183A00(s32, void *);                 /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, void *);           /* extern */
extern s32 D_004664B8;

s32 mwPlyGetNumTotalDec(s32 arg0) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_004664B8, sp);
        return 0;
    }
    func_00183A00(arg0, sp);
    return sp0;
}

/* Similar function already in C: mwPlyGetNumDropFrm (src/cri/mwsfd.c), similarity 0.74.
 * It is the template below (not built). */
#if 0
s32 mwPlyGetNumDropFrm(s32 arg0) {
    s32 temp_s0;

    if (func_00183B38() == 0) {
        func_001870E8(&D_004661B8);
        return 0;
    }
    temp_s0 = mwPlyGetNumSkipDec(arg0);
    return temp_s0 + mwPlyGetNumSkipDisp(arg0);
}
#endif
