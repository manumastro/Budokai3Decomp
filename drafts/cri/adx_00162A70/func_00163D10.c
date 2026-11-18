/* Draft (not built): func_00163D10 at 0x00163D10, size 0xC0, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00163D10.c:13: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00163D10.s */

void *func_00162080(void *);                        /* extern */
s32 func_001625F0(void *, s32 *, s32);      /* extern */

s32 func_00163D10(s32 arg0, s32 arg1) {
    s32 sp130;
    s32 var_v0;
    s64 (*temp_v1)(s32, s32, s32 *, s32);
    s64 temp_s0;
    u8 *temp_v0;

    temp_v0 = func_00162080(sp);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        func_001625F0(sp, &sp130, arg0);
        var_v0 = 0;
        temp_v1 = *(s64 (**)(s32, s32, s32 *, s32))((u8 *)temp_v0 + 0x60);
        if (temp_v1 != NULL) {
            temp_s0 = temp_v1(arg0, 0xCC, &sp130, arg1) << 0x20;
            var_v0 = temp_s0 + ((u64) ((*(s64 (**)(s32, s32, s32 *, s32))((u8 *)temp_v0 + 0x60))(arg0, 0xCD, &sp130, arg1) << 0x20) >> 0x20);
        }
    }
    return var_v0;
}
