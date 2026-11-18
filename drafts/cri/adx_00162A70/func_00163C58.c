/* Draft (not built): func_00163C58 at 0x00163C58, size 0xB4, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00163C58.c:14: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00163C58.s */

void *func_001623A8(void *, s32 *, s32);        /* extern */
s32 func_001625F0(void *, s32 *, s32);      /* extern */

s32 func_00163C58(s32 arg0) {
    s32 sp130;
    s32 var_s0;
    s64 (*temp_v0_2)(s32, s32, s32 *, s32);
    s64 temp_s0;
    u8 *temp_v0;

    var_s0 = 0;
    func_001625F0(sp, &sp130, arg0);
    temp_v0 = func_001623A8(sp, &sp130, arg0);
    temp_v0_2 = *(s64 (**)(s32, s32, s32 *, s32))((u8 *)temp_v0 + 0x60);
    if (temp_v0_2 != NULL) {
        temp_s0 = temp_v0_2(arg0, 0xCA, &sp130, 0) << 0x20;
        var_s0 = temp_s0 + ((u64) ((*(s64 (**)(s32, s32, s32 *, s32))((u8 *)temp_v0 + 0x60))(arg0, 0xCB, &sp130, 0) << 0x20) >> 0x20);
    }
    return var_s0;
}
