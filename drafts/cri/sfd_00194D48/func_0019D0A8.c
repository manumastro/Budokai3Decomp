/* Draft (not built): func_0019D0A8 at 0x0019D0A8, size 0x78, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D0A8.s */

s32 func_0018A9B0(s32, s32, s32, s32);          /* extern */
s32 func_0019D120(s32);                         /* extern */

void func_0019D0A8(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_a3;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg1 + 4;
    var_s1 = 0;
    *arg1 = 0;
    do {
        func_0019D120(var_s0);
        temp_a2 = var_s1;
        var_s1 += 1;
        temp_a3 = var_s0;
        var_s0 += 0x10;
        func_0018A9B0(arg0, arg2, temp_a2, temp_a3);
    } while (var_s1 < 3);
}
