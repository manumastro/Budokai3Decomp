/* Draft (not built): func_0019EA40 at 0x0019EA40, size 0x40, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019EA40.s */

s32 func_0019EAC0();                                /* extern */

s32 func_0019EA40(u8 *arg1) {
    s32 var_v0;
    u8 temp_v1;

    var_v0 = 0;
    if (func_0019EAC0() == 0xC0) {
        temp_v1 = *(u8 *)((u8 *)arg1 + 0x20);
        var_v0 = (temp_v1 >= 2U) ? 0 : (temp_v1 != 0);
    }
    return var_v0;
}
