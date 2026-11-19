/* Draft (not built): func_001A02E0 at 0x001A02E0, size 0x50, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001A02E0.c:11: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfx/func_001A02E0.s */

s32 func_0019FFF0(void *, s32 *);               /* extern */
s32 func_001A0330(s32, s32, s32, s16 *);        /* extern */

void func_001A02E0(s32 arg0, s16 *arg2) {
    s32 sp4;

    *arg2 = 0;
    func_0019FFF0(sp, &sp4);
    func_001A0330(arg0, sp0, sp4, arg2);
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
