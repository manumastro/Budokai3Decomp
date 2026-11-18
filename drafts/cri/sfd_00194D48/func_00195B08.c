/* Draft (not built): func_00195B08 at 0x00195B08, size 0xA0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00195B08.c:14: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195B08.s */

s32 func_00194F28(void *, s32 *, s32 *);        /* extern */
s32 func_00195018(s32, s32);                    /* extern */
s32 func_00195E68(s32, s32, s32, s32);              /* extern */

s32 func_00195B08(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_v0;

    func_00194F28(sp, &sp4, &sp8);
    temp_v0 = func_00195E68((sp0 & 0x0FFFFFFF) | 0x20000000, sp4, (sp8 & 0x0FFFFFFF) | 0x20000000, spC);
    func_00195018(arg0, temp_v0);
    return temp_v0;
}
