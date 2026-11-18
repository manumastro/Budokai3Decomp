/* Draft (not built): func_0019DD40 at 0x0019DD40, size 0x48, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019DD40.s */

s32 func_0019D780();                                /* extern */

s32 func_0019DD40(u8 *arg0, s32 *arg1) {
    s32 var_v0;
    u8 *temp_s0;

    temp_s0 = *(s32 *)((u8 *)arg0 + 4) + 0x80;
    var_v0 = func_0019D780();
    if (var_v0 != 0) {
        var_v0 = 1;
        *arg1 = (s32) *(u8 *)((u8 *)temp_s0 + 4);
    }
    return var_v0;
}
