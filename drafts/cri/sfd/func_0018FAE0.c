/* Draft (not built): func_0018FAE0 at 0x0018FAE0, size 0x74, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018FAE0.s */

s32 func_0017E9E8(s32, s32, s32);               /* extern */

void func_0018FAE0(u8 *arg0, s32 *arg1, s32 arg2) {
    s32 *var_s0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s2;
    s32 var_s1;

    temp_s2 = **(s32 **)((u8 *)arg0 + 0x1C70);
    if (temp_s2 != 0) {
        var_s1 = 0;
        if (arg2 > 0) {
            var_s0 = arg1;
            do {
                temp_a2 = *var_s0;
                var_s0 += 4;
                temp_a1 = var_s1;
                var_s1 += 1;
                func_0017E9E8(temp_s2, temp_a1, temp_a2);
            } while (var_s1 < arg2);
        }
    }
}
