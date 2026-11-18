/* Draft (not built): func_00126960 at 0x00126960, size 0xCC, segment sdk/libc/kfiv_mprec (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error:  d_00126960.c:24: warning: right shift count >= width of type
 * Original: asm/nonmatchings/sdk/libc/kfiv_mprec/func_00126960.s */

s64 _b2d(void *, s32 *);                            /* extern */
s32 func_00121C78(s64, s64, s32, s64);          /* extern */

void func_00126960(u8 *arg0, u8 *arg1) {
    s32 sp4;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v0;
    s64 temp_a3;
    s64 var_s2;
    s64 var_t0;

    var_s2 = _b2d(sp);
    var_t0 = _b2d(arg1, &sp4);
    temp_a2 = *(s32 *)((u8 *)arg1 + 0x10);
    temp_a3 = var_t0 >> 0x20;
    temp_v0 = (sp0 - sp4) + ((*(s32 *)((u8 *)arg0 + 0x10) - temp_a2) << 5);
    temp_a0 = temp_v0 << 0x14;
    if (temp_v0 > 0) {
        var_s2 = (var_s2 & (0xFFFF0000U >> 0x20)) | (((var_s2 >> 0x20) + temp_a0) << 0x20);
    } else {
        var_t0 = (var_t0 & (0xFFFF0000U >> 0x20)) | ((temp_a3 - temp_a0) << 0x20);
    }
    func_00121C78(var_s2, var_t0, temp_a2, temp_a3);
}
