/* Draft (not built): func_00197218 at 0x00197218, size 0x9C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197218.s */

s32 func_0018B770();
s32 func_001999E0();
s32 func_0019C170();

s32 func_00197218(s32 arg0) {
    s32 var_v0;
    u32 var_a1;
    u32 var_s0;

    if ((func_001999E0(5) == 0) || (var_v0 = 1, (func_0019C170(arg0, 6) == 0))) {
        var_s0 = 0;
        if (func_001999E0(arg0, 6) != 0) {
            var_s0 = 0;
            if (func_0019C170(arg0, 7) != 0) {
                goto block_4;
            }
        }
        var_a1 = 0;
loop_7:
        var_s0 += 1;
        var_v0 = func_0018B770(arg0, var_a1);
        if (var_v0 == 0) {
            var_a1 = var_s0;
            if (var_s0 >= 8U) {
                /* Duplicate return node #9. Try simplifying control flow for better match */
                return var_v0;
            }
            goto loop_7;
        }
block_4:
        return 1;
    }
    return var_v0;
}
