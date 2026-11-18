/* Draft (not built): func_0015FC00 at 0x0015FC00, size 0x98, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/func_0015FC00.s */

s32 func_001527C0(s16 *, s32 *, s32 *, s32 *); /* extern */

s32 func_0015FC00(u16 *arg0, s32 arg1, s32 *arg2) {
    s16 sp10;
    s32 sp12;
    s32 sp13;
    s32 sp14;
    s32 sp15;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 var_v0;
    u16 temp_v1;

    var_v0 = 0;
    if (arg1 >= 2) {
        temp_v1 = *arg0;
        if ((((temp_v1 >> 8) | (temp_v1 << 8)) & 0xFFFF) == 0x8000) {
            if (func_001527C0(&sp10, &sp12, &sp18, &sp1C) < 0) {
                return 0;
            }
            var_v0 = 1;
            *arg2 = (s32) sp10;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
