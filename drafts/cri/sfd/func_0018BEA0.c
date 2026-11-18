/* Draft (not built): func_0018BEA0 at 0x0018BEA0, size 0xE8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018BEA0.s */

s32 func_0018BF88();
s32 func_0018C230();

s32 func_0018BEA0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 var_v0;

    *arg2 = 0;
    var_v0 = func_0018C230(0x10000);
    temp_s1 = var_v0;
    temp_s2 = temp_s1 - arg0;
    temp_s5 = arg1 - temp_s2;
    if (temp_s1 != 0) {
        var_v0 = func_0018C230(temp_s1 + 1, temp_s5 - 1, 0x10000);
        temp_s0 = var_v0;
        if (temp_s0 != 0) {
            var_v0 = func_0018C230(temp_s0 + 1, (arg1 - (temp_s0 - arg0)) - 1, 0x10000);
            if (var_v0 != 0) {
                temp_s0_2 = temp_s0 - temp_s1;
                var_v0 = -1;
                if ((temp_s0_2 == (var_v0 - temp_s0)) && ((temp_s2 % temp_s0_2) == 0)) {
                    func_0018BF88(temp_s1, temp_s5, arg2);
                    var_v0 = temp_s0_2;
                }
            }
        }
    }
    return var_v0;
}
