/* Draft (not built): func_0018D078 at 0x0018D078, size 0x78, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018D078.c:14: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018D078.s */

s32 func_0019D8E0(s32, s32, void *);                /* extern */

s32 func_0018D078(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;

    var_s0 = arg1;
    if (arg2 >= var_s0) {
        var_a1 = var_s0 & 0xFF;
loop_2:
        if ((func_0019D8E0(arg0, var_a1, sp) == 0) || (var_v0 = var_s0, (sp0 == 0))) {
            var_s0 += 1;
            var_a1 = var_s0 & 0xFF;
            if (arg2 < var_s0) {
                goto block_5;
            }
            goto loop_2;
        }
    } else {
block_5:
        var_v0 = 0;
    }
    return var_v0;
}
