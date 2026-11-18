/* Draft (not built): func_0015A380 at 0x0015A380, size 0x30, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A380.s */

s32 func_0015A380(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = arg2 + 0x1F;
    return (((s32) ((temp_v1 < 0) ? (arg2 + 0x3E) : temp_v1) >> 5) * arg0 * 0x12) + arg1 + 4;
}
