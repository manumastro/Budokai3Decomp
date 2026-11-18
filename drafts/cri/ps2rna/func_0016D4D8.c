/* Draft (not built): func_0016D4D8 at 0x0016D4D8, size 0x2C, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D4D8.s */

extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016D4D8(u8 *arg0, s8 arg1) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        *(s8 *)((u8 *)arg0 + 0x32) = arg1;
    }
}
