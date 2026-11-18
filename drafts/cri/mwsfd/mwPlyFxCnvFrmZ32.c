/* Draft (not built): mwPlyFxCnvFrmZ32 at 0x00184C70, size 0xA8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00184C70.c:20: for each function it appears in.)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyFxCnvFrmZ32.s */

s32 func_00183B38();                                /* extern */
s32 func_001847D0(s32);                             /* extern */
s32 func_001847F8(s32, s32 *, void *);          /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_001A08E8(s32, void *, s32);            /* extern */
extern s32 D_00466860;
extern s32 D_00466890;

void mwPlyFxCnvFrmZ32(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_s0;

    if (func_00183B38() != 0) {
        if (*arg1 == 0) {
            func_001870E8(&D_00466890);
            return;
        }
        temp_s0 = func_001847D0(arg0);
        func_001847F8(arg0, arg1, sp);
        func_001A08E8(temp_s0, sp, arg2);
        return;
    }
    func_001870E8(&D_00466860);
}
