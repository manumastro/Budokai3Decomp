/* Draft (not built): mwSfdSetOutVol at 0x00184088, size 0x58, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwSfdSetOutVol.s */

s32 func_001831B8(s32, s32);                    /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32);              /* extern */
extern s32 D_00466548;

void mwSfdSetOutVol(s32 arg0, s32 arg1) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00466548, arg1);
        return;
    }
    func_001831B8(arg0, arg1);
}
