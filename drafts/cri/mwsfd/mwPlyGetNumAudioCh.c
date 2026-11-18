/* Draft (not built): mwPlyGetNumAudioCh at 0x001838D0, size 0x54, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001838D0.c:14: `sp24' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetNumAudioCh.s */

s32 func_00183A18(s32, void *);                 /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, void *);           /* extern */
extern s32 D_004662B8;

s32 mwPlyGetNumAudioCh(s32 arg0) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_004662B8, sp);
        return -1;
    }
    func_00183A18(arg0, sp);
    return sp24;
}
