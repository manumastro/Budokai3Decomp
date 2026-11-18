/* Draft (not built): func_0019C0D8 at 0x0019C0D8, size 0x50, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: mpile error: d_0019C0D8.c:12: called object is not a function
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019C0D8.s */

s32 func_0019C0D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t1;
    s32 var_v0;

    var_v0 = 0;
    temp_t1 = *(s32 *)((u8 *)(arg0 + (arg1 * 0x44)) + 0x1BEC);
    if (temp_t1 != 0) {
        var_v0 = *((arg2 * 4) + temp_t1)(arg3, M2C_ERROR(/* Read from unset register $t0 */), 0);
    }
    return var_v0;
}
