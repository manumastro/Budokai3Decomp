/* Draft (not built): func_0016C8A8 at 0x0016C8A8, size 0x68, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016C8A8.s */

s32 func_00165FB8(s32, s32, s32, s32); /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_0041A100;

void func_0016C8A8(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        if (D_0041A100 != 0) {
            func_00165FB8(0xF, 0, 0, 0);
            D_0041A100 = 0;
        }
    }
}
