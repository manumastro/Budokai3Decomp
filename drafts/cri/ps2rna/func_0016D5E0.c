/* Draft (not built): func_0016D5E0 at 0x0016D5E0, size 0x40, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D5E0.s */

extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016D5E0(u8 *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (arg1 > 0) ? 0 : arg1;
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        *(s32 *)((u8 *)arg0 + 0x3C) = (s32) ((temp_a1 < -0x3E7) ? -0x3E7 : temp_a1);
    }
}
