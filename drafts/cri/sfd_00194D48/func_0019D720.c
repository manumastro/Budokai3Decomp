/* Draft (not built): func_0019D720 at 0x0019D720, size 0x50, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D720.s */

s32 func_0019D6F0(s32);                         /* extern */

void func_0019D720(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;

    if (arg0 > 0) {
        var_s1 = arg1;
        var_s0 = arg0;
        var_a0 = var_s1;
        do {
            var_s1 += 0x10;
            var_s0 -= 1;
            func_0019D6F0(var_a0);
            var_a0 = var_s1;
        } while (var_s0 != 0);
    }
}
