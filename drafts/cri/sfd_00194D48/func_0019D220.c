/* Draft (not built): func_0019D220 at 0x0019D220, size 0x58, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D220.s */

s32 func_001999E0(s32);                         /* extern */
s32 func_0019D278(s32);                         /* extern */
s32 func_0019D340(s32);                         /* extern */
s32 func_0019D3C8(s32);                             /* extern */

s32 func_0019D220(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = func_001999E0(5);
    if (var_v0 != 0) {
        func_0019D278(arg0);
        temp_s0 = func_0019D3C8(arg0);
        func_0019D340(arg0);
        var_v0 = temp_s0;
    }
    return var_v0;
}
