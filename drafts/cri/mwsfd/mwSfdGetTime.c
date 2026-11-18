/* Draft (not built): mwSfdGetTime at 0x00183FA0, size 0xA8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mwsfd/mwSfdGetTime.s */

s32 func_00182420();
s32 func_00183B38();
s32 func_001870E8();
s32 func_0019A560();
extern s32 D_004664F0;
extern s32 D_00466520;

void mwSfdGetTime(u8 *arg0, s32 *arg1, s32 *arg2) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_004664F0, arg1, arg2);
        goto block_5;
    }
    if (func_0019A560(*(s32 *)((u8 *)arg0 + 0x40), arg1, arg2) != 0) {
        func_00182420(-0x135);
        func_001870E8(&D_00466520);
        *arg1 = 0;
        *arg2 = 1;
    }
    if (*arg1 < 0) {
block_5:
        *arg1 = 0;
        *arg2 = 1;
    }
}
