/* Draft (not built): func_00179310 at 0x00179310, size 0xEC, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00179310.c:34: warning: passing arg 1 of `func_00179860' makes integer from pointer without a cast
 * Original: asm/nonmatchings/cri/mpv/func_00179310.s */

s32 func_00179400(s32, s32, s32 *, s32);        /* extern */
s32 func_00179860(s32, s32, s32 *, s32);        /* extern */
s32 func_00179EA0(void *, s32, s32 *, s32);     /* extern */
u32 func_0017AAF0(s32);                             /* extern */

s32 func_00179310(u8 *arg0, s32 arg1, s32 *arg3) {
    s32 temp_a3;
    s32 var_s0;
    u32 temp_v0;

    *arg3 = 0;
    temp_v0 = func_0017AAF0(arg1);
    *M2C_ERROR(/* Read from unset register $t0 */) = temp_v0;
    var_s0 = 0;
    temp_a3 = temp_v0 > 0x20000U;
    if (temp_v0 != 0x20000) {
        if (temp_a3 == 0) {
            if (temp_v0 != 0x10000) {
                return 0;
            }
            var_s0 = 1;
            func_00179400(arg0 + 0x14, arg1, arg3, temp_a3);
            goto block_11;
        }
        if (temp_v0 != 0x40000) {
            return 0;
        }
        func_00179EA0(arg0 + 0xA0, arg1, arg3, *(s32 *)((u8 *)arg0 + 0x10));
        goto block_11;
    }
    var_s0 = 1;
    func_00179860(arg0 + 0x20, arg1, arg3, temp_a3);
block_11:
    return var_s0;
}
