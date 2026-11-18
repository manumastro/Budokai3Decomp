/* Draft (not built): func_001942D0 at 0x001942D0, size 0x50, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001942D0.c:10: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_001942D0.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
s32 func_00194320(s32, s32);                        /* extern */

s32 func_001942D0(s32 arg0, s32 arg1) {
    s32 temp_s0;

    func_0018D908(sp);
    temp_s0 = func_00194320(arg0, arg1);
    func_0018D920(sp);
    return temp_s0;
}
