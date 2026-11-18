/* Draft (not built): func_0017EE78 at 0x0017EE78, size 0x6C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017EE78.s */

s64 func_0011F758(s32, s32, u64);                   /* extern */

s64 func_0017EE78(s32 arg0, s32 arg1, s32 arg2) {
    u64 temp_a3;

    temp_a3 = (u64) ((arg0 * arg1) << 0x20) >> 0x20;
    if (arg2 == 0) {
        return ((arg0 ^ arg1) < 0) ? 0x80000000 : 0x7FFFFFFF;
    }
    return (s64) (func_0011F758((MULT_HI(arg0, arg1) << 0x20) | temp_a3, arg2, temp_a3) << 0x20) >> 0x20;
}
