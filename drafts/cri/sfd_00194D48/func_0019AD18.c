/* Draft (not built): func_0019AD18 at 0x0019AD18, size 0x68, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AD18.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001999E0(s32, s32);                    /* extern */
s32 func_0019AD80(s32);                         /* extern */

s32 func_0019AD18(s32 arg0) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF00012A);
    }
    if (func_001999E0(arg0, 0x47) != 1) {
        func_0019AD80(arg0);
    }
    return 0;
}
