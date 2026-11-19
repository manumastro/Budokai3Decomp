/* Draft (not built): func_0019B290 at 0x0019B290, size 0x50, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0019B290.c:13: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B290.s */

s32 func_0017EE78(s32);                             /* extern */
s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */

void func_0019B290(s32 arg0) {
    s32 temp_s1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    temp_s1 = func_0017EE78(*(s32 *)((u8 *)temp_s0 + 0x2D4));
    func_0018D908(sp);
    *(s32 *)((u8 *)temp_s0 + 0x2D0) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2D0) + temp_s1);
    func_0018D920(sp);
}

/* Similar function already in C: func_0015CD88 (src/cri/adx_00159278.c), similarity 0.65.
 * It is the template below (not built). */
#if 0
s32 func_0015CD88(u8 *arg0, s32 arg1) {
    func_00152508();
    func_0015CD10(arg0);
    *(s32 *)((u8 *)arg0 + 0x5C) = arg1;
    func_00152520();
    return 1;
}
#endif
