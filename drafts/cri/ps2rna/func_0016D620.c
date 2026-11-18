/* Draft (not built): func_0016D620 at 0x0016D620, size 0x50, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D620.s */

extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016D620(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        temp_v0 = (arg2 >= -0xF) ? arg2 : -0xF;
        *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x44) = (s32) ((temp_v0 >= 0x10) ? 0xF : temp_v0);
    }
}
