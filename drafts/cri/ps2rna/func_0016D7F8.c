/* Draft (not built): func_0016D7F8 at 0x0016D7F8, size 0x38, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D7F8.s */

extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

s32 func_0016D7F8(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((D_0041A0D8 != 1) || (var_v0 = 0, (D_0041A0D0 > 0))) {
        var_v0 = *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x44);
    }
    return var_v0;
}
