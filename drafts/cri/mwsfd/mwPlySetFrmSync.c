/* Draft (not built): mwPlySetFrmSync at 0x00180E10, size 0x58, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwPlySetFrmSync.s */

s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00465A10;

void mwPlySetFrmSync(u8 *arg0, s32 arg1) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00465A10);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x58) = arg1;
}
