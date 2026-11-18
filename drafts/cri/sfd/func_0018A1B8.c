/* Draft (not built): func_0018A1B8 at 0x0018A1B8, size 0x15C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0018A1B8.c:17: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_0018A1B8.s */

s32 func_0018A318(void *, s32, s32);            /* extern */
s32 func_0018A358(s32, void *, s32, s32);       /* extern */
s32 func_0018A520(s32, s32, void *, s32);       /* extern */
s32 func_0018A5D8(s32, void *, s32, s32);   /* extern */
s32 func_0018A700(s32, void *, s32, s32);   /* extern */
s32 func_0018D650(s32, s32);                    /* extern */

s32 func_0018A1B8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0;

    temp_s1 = arg2 + 8;
    func_0018A318(sp, temp_s1, *(s32 *)((u8 *)arg2 + 4));
    temp_s0 = func_0018A358(arg1, sp, temp_s1, 0);
    temp_s4 = func_0018A358(arg1, sp, temp_s1, 1);
    temp_v0 = func_0018A358(arg1, sp, temp_s1, 2);
    if ((temp_s0 != 0) || (temp_s4 != 0) || (temp_v0 != 0)) {
        return func_0018D650(arg0, 0xFF00040A);
    }
    func_0018A520(arg0, arg1, sp, temp_s1);
    func_0018A5D8(arg1, sp, temp_s1, 4);
    func_0018A520(arg0, arg1, sp, temp_s1);
    func_0018A5D8(arg1, sp, temp_s1, 6);
    func_0018A700(arg1, sp, temp_s1, 7);
    return 0;
}
