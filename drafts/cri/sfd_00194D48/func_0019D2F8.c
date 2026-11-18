/* Draft (not built): func_0019D2F8 at 0x0019D2F8, size 0x44, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D2F8.s */

s32 func_001999E0(s32);                         /* extern */
s32 func_0019B8A0(s32);                             /* extern */

s32 func_0019D2F8(s32 arg0) {
    if (func_001999E0(0xF) == 0) {
        return 1;
    }
    return func_0019B8A0(arg0) != 0;
}
