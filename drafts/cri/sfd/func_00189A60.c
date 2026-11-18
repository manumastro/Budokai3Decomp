/* Draft (not built): func_00189A60 at 0x00189A60, size 0x4C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00189A60.c:10: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00189A60.s */

s32 func_0017EE78(s32, s32, s32);                   /* extern */
s32 func_0019B2E0(void *, s32 *);               /* extern */

void func_00189A60(s32 *arg1, s32 arg2) {
    s32 sp4;

    func_0019B2E0(sp, &sp4);
    *arg1 = func_0017EE78(arg2, sp0, sp4);
}
