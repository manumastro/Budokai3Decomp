/* Draft (not built): func_0019BA58 at 0x0019BA58, size 0x80, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: mpile error: d_0019BA58.c:22: called object is not a function
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BA58.s */

s32 func_0019BA58(s32 *arg0, s32 arg1) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;

    var_s0 = arg0;
    var_s1 = 0;
    var_a0 = 0;
    var_v0 = 0 < 0xF;
loop_1:
    var_s1 += 1;
    if (var_v0 != 0) {
        temp_v0 = *var_s0;
        var_s0 += 4;
        if (temp_v0 != 0) {
            var_a0 = *((arg1 * 4) + temp_v0)(0, 0, 0, 0);
            var_v0 = var_s1 < 0xF;
            if (var_a0 == 0) {
                goto loop_1;
            }
        }
    }
    return var_a0;
}
