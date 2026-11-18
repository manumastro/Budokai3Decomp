/* Draft (not built): func_00188B20 at 0x00188B20, size 0x11C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00188B20.c:31: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00188B20.s */

s32 func_0015FC98(u32, s32, void *);            /* extern */
s32 func_0018D650(s32, s32);                /* extern */

u32 func_00188B20(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_s3;
    u32 temp_v1;
    u32 var_s0;
    u32 var_s1;
    u32 var_s5;
    u32 var_s6;
    u32 var_v0;

    var_s1 = arg1;
    temp_v1 = var_s1 + 0x24;
    var_s5 = 0;
    var_s6 = 0;
    var_s3 = 0;
    if (var_s1 < temp_v1) {
        var_s3 = 0;
loop_2:
        var_s0 = var_s1;
loop_3:
        if (var_s0 < (u32) (arg1 + arg2)) {
            if (*var_s0 >= 0) {
                var_s0 += 0x12;
                goto loop_3;
            }
            var_s3 = 1;
            if ((func_0015FC98(var_s0, 0x12, sp) != 0) && (var_s5 < var_s0)) {
                var_s5 = var_s0;
                var_s6 = var_s1;
            }
        }
        var_v0 = var_s1;
        if (var_s3 != 0) {
            var_s1 += 2;
            if (var_s1 < temp_v1) {
                var_s3 = 0;
                goto loop_2;
            }
            goto block_14;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
block_14:
    var_v0 = var_s1;
    if (var_s3 != 0) {
        if (var_s6 != 0) {
            var_v0 = var_s6;
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        }
        func_0018D650(arg0, 0xFF000C0A);
        return arg1;
    }
    return var_v0;
}
