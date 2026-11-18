/* Draft (not built): func_0017E2D0 at 0x0017E2D0, size 0x98, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mpv/func_0017E2D0.s */

s32 func_0017B420();
s32 func_0017B5B8();
s32 func_0017EBB8();

s32 func_0017E2D0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_v0;

    var_v0 = func_0017B5B8(0x40);
    temp_s0 = var_v0;
    if (temp_s0 != 0) {
        var_v0 = func_0017EBB8();
        temp_s0_2 = temp_s0 + 4;
        if (var_v0 != 0) {
            return 1;
        }
        temp_s1 = arg1 - (temp_s0_2 - arg0);
        if (temp_s1 > 0) {
            var_v0 = func_0017B5B8(temp_s0_2, temp_s1, -1);
            if (var_v0 != 0) {
                var_v0 = (func_0017B420(var_v0) & 0x10) == 0;
            }
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
