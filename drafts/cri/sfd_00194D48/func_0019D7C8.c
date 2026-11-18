/* Draft (not built): func_0019D7C8 at 0x0019D7C8, size 0x28, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D7C8.s */

s32 func_0019D7C8(s32 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = *arg0;
    var_v0 = 1;
    if (temp_v0 < 2) {
        var_v0 = 0;
        if (temp_v0 < -1) {
            var_v0 = 1;
        }
    }
    return var_v0;
}
