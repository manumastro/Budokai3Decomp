/* Draft (not built): mwPlyGetPlyInf at 0x00184400, size 0x98, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00184400.c:23: `sp20' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetPlyInf.s */

s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00199AC8(s32, void *);                 /* extern */
s32 mwPlyGetNumDropFrm(s32);                        /* extern */
s32 mwPlyGetNumSkipDec(s32);                        /* extern */
s32 mwPlyGetNumSkipDisp(s32);                       /* extern */
s32 mwPlyGetNumSkipEmptyB(s32);                     /* extern */
s32 mwPlyGetSfdHn(s32);                             /* extern */
extern s32 D_004666A8;

void mwPlyGetPlyInf(s32 arg0, u8 *arg1) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_004666A8);
        return;
    }
    func_00199AC8(mwPlyGetSfdHn(arg0), sp);
    *(s32 *)((u8 *)arg1 + 0) = mwPlyGetNumDropFrm(arg0);
    *(s32 *)((u8 *)arg1 + 4) = mwPlyGetNumSkipDec(arg0);
    *(s32 *)((u8 *)arg1 + 8) = mwPlyGetNumSkipDisp(arg0);
    *(s32 *)((u8 *)arg1 + 0xC) = mwPlyGetNumSkipEmptyB(arg0);
    *(s32 *)((u8 *)arg1 + 0x10) = sp20;
}
