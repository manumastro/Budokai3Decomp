/* Draft (not built): func_0016CED8 at 0x0016CED8, size 0x5C, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016CED8.s */

s32 func_0016CF38(s32);                     /* extern */
s32 func_0016CFD0(s32, s32);                /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016CED8(s32 arg0) {
    if (D_0041A0D8 != 1) {
        goto block_4;
    }
    if (D_0041A0D0 > 0) {
        goto block_3;
    }
    return;
block_3:
block_4:
    func_0016CF38(0);
    func_0016CFD0(arg0, 0);
    return;
}
