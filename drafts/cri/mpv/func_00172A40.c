/* Draft (not built): func_00172A40 at 0x00172A40, size 0x44, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 72 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00172A40.s */

s32 func_00172A40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return ((MULT_HI(arg2, arg1) << 0x20) | ((u64) ((arg2 * arg1) << 0x20) >> 0x20)) >= ((MULT_HI(arg0, arg3) << 0x20) | ((u64) ((arg0 * arg3) << 0x20) >> 0x20));
}
