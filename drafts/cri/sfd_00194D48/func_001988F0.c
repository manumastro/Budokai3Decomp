/* Draft (not built): func_001988F0 at 0x001988F0, size 0x48, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001988F0.s */

s32 func_00198938(s32);                         /* extern */

void func_001988F0(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;

    if (arg1 > 0) {
        var_s1 = arg0;
        var_s0 = arg1;
        var_a0 = var_s1;
        do {
            var_s1 += 0xDC8;
            var_s0 -= 1;
            func_00198938(var_a0);
            var_a0 = var_s1;
        } while (var_s0 != 0);
    }
}
