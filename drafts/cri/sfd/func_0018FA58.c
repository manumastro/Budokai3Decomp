/* Draft (not built): func_0018FA58 at 0x0018FA58, size 0x88, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018FA58.s */

s32 func_0017EB00(s32, s32, s32);               /* extern */

u32 func_0018FA58(u8 *arg0, s32 arg1, u32 arg2) {
    s32 temp_a2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 var_v0;

    temp_s3 = **(s32 **)((u8 *)arg0 + 0x1C70);
    var_v0 = 0;
    if (temp_s3 != 0) {
        temp_s0 = arg2 >> 2;
        temp_s0_2 = (temp_s0 >= 0x11U) ? 0x10U : temp_s0;
        var_s2 = 0;
        if (temp_s0_2 != 0) {
            var_s1 = arg1;
            var_a1 = 0;
            do {
                var_s2 += 1;
                temp_a2 = var_s1;
                var_s1 += 4;
                func_0017EB00(temp_s3, var_a1, temp_a2);
                var_a1 = var_s2;
            } while (var_s2 < (s32) temp_s0_2);
        }
        var_v0 = temp_s0_2;
    }
    return var_v0;
}
