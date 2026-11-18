/* Draft (not built): func_0019CDF8 at 0x0019CDF8, size 0x110, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019CDF8.s */

s32 func_0018A9B0(s32, s32, s32, s32);          /* extern */
s32 func_0018D650(s32, s32);                    /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019D148(s32, s32, s32, s32);      /* extern */

s32 func_0019CDF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0_2;
    s32 temp_s2;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x1E00;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000191);
    }
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 0x10);
    if (temp_s2 == 8) {
        return func_0018D650(arg0, 0xFF000602);
    }
    temp_s0_2 = *(s32 *)((u8 *)temp_s0 + 8) + (arg1 * 0x10) + 4;
    func_0019D148(temp_s0_2, arg2, arg3, 0);
    func_0018A9B0(arg0, temp_s2, arg1, temp_s0_2);
    return 0;
}
