/* Draft (not built): func_00185810 at 0x00185810, size 0x70, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00185810.c:12: parse error before "int"
 * Original: asm/nonmatchings/cri/mwsfd/func_00185810.s */

s32 func_001847D0();                                /* extern */
s32 func_0019F960(s32, void *, s32 *, s32 *);   /* extern */

void func_00185810(s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 sp4;
    s32 sp8;

    func_0019F960(func_001847D0(), sp, &sp4, &sp8);
    *arg1 = sp0;
    *arg3 = ((sp8 ^ 1) != 0) int 0 : sp8;
    *arg2 = sp4;
}
