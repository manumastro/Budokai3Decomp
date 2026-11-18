/* Draft (not built): func_0015A2D8 at 0x0015A2D8, size 0x6C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A2D8.s */

s32 func_0015A0E0();                            /* extern */
s32 func_0015A120(s32 *, s32, s32, s32); /* extern */
extern s32 D_0040E070;
extern s32 D_00461738;

s32 func_0015A2D8(s32 arg0, s32 arg1, s32 arg2) {
    if (D_0040E070 == 0) {
        func_0015A0E0();
    }
    func_0015A120(&D_00461738, 6, arg0, arg1);
    return 0;
}
