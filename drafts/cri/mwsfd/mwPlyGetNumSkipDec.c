/* Draft (not built): mwPlyGetNumSkipDec at 0x00183748, size 0x60, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00183748.c:15: `sp10' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetNumSkipDec.s */

s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00199AC8(s32, void *);                 /* extern */
s32 mwPlyGetSfdHn(s32);                             /* extern */
extern s32 D_004661E8;

s32 mwPlyGetNumSkipDec(s32 arg0) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_004661E8);
        return 0;
    }
    func_00199AC8(mwPlyGetSfdHn(arg0), sp);
    return sp4 - sp10;
}
