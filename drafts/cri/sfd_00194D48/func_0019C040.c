/* Draft (not built): func_0019C040 at 0x0019C040, size 0x98, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: mpile error: d_0019C040.c:23: called object is not a function
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019C040.s */

s32 func_0019C040(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    u8 *var_s0;

    var_a0 = 0;
    var_s0 = arg0 + 0x1BE0;
    var_s1 = 0;
loop_1:
    var_v0 = var_s1 < 9;
loop_2:
    var_s1 += 1;
    if (var_v0 != 0) {
        temp_v0 = *(s32 *)((u8 *)var_s0 + 0xC);
        var_s0 += 0x44;
        if (temp_v0 != 0) {
            var_a0 = *((arg1 * 4) + temp_v0)(arg0, 0, 0, 0);
            var_v0 = var_s1 < 9;
            if (var_a0 == 0) {
                goto loop_2;
            }
        } else {
            goto loop_1;
        }
    }
    return var_a0;
}
