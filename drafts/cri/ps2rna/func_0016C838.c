/* Draft (not built): func_0016C838 at 0x0016C838, size 0x70, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016C838.s */

s32 func_00165FB8(s32, s32, s32, s32); /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_0041A100;

void func_0016C838(void) {
    if (((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) && (D_0041A100 != 1)) {
        func_00165FB8(0xE, 0, 0, 0);
        D_0041A100 = 1;
    }
}
