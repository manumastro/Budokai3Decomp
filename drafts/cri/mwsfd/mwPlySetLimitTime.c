/* Draft (not built): mwPlySetLimitTime at 0x00183B68, size 0x70, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwPlySetLimitTime.s */

s32 func_00183A30(s32, s32, s32);           /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32);          /* extern */
extern s32 D_00466378;

void mwPlySetLimitTime(s32 arg0, s32 arg1) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00466378, 0x36);
        return;
    }
    func_00183A30(arg0, 0x36, arg1 * 0x3E8);
}
