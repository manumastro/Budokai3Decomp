/* Draft (not built): func_0019C8D0 at 0x0019C8D0, size 0x4C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019C8D0.s */

s32 func_0019C8D0(u8 *arg0) {
    s32 *var_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x10);
    var_a2 = 0;
    if (temp_a1 > 0) {
        var_a0 = arg0 + 0x18;
        var_v1 = temp_a1;
        do {
            temp_v0 = *var_a0;
            var_a0 += 4;
            var_v1 -= 1;
            var_a2 += temp_v0;
        } while (var_v1 != 0);
    }
    return var_a2 / temp_a1;
}
