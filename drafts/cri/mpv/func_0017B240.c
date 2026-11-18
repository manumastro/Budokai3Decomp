/* Draft (not built): func_0017B240 at 0x0017B240, size 0x34, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B240.s */

s32 func_0017B278();                                /* extern */
s32 func_0017B2D0(s32);                         /* extern */

void func_0017B240(void) {
    s32 temp_v0;

    temp_v0 = func_0017B278();
    if (temp_v0 != 0) {
        func_0017B2D0(temp_v0);
    }
}
