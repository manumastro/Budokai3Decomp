/* Draft (not built): func_00179148 at 0x00179148, size 0xA8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00179148.c:8: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mpv/func_00179148.s */

s32 func_0017B048(s32, s32, s32, s32 *); /* extern */
s32 func_0017B218();                                /* extern */

void func_00179148(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    *arg3 = 0;
    *M2C_ERROR(/* Read from unset register $t0 */) = 0;
    if (func_0017B218() != 0) {
        func_0017B048(0, 0xFF020301, arg2, arg3);
        return;
    }
    (*(s32 (**)(u8 *, s32, s32, s32 *))((u8 *)arg0 + 0xC4))(arg0, arg1, arg2, arg3);
}
