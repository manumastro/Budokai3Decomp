/* Draft (not built): func_0015B5B0 at 0x0015B5B0, size 0xFC, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015B5B0.c:34: too few arguments to function `func_0015A570'
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015B5B0.s */

s32 func_0015A570(s8 *, s32, s32, void **, s16); /* extern */

s32 func_0015B5B0(u8 *arg0) {
    s8 sp2;
    s16 temp_s0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 **temp_s2;

    temp_s2 = *(u8 ***)((u8 *)arg0 + 0xC);
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x2C);
    if (*(s32 *)((u8 *)arg0 + 0x6C) <= 0) {
        var_s1 = *(s32 *)((u8 *)arg0 + 0x50);
    } else {
        temp_v0 = temp_a1 + *(s32 *)((u8 *)arg0 + 0x50);
        temp_v1 = temp_v0 + 0x7FF;
        var_s1 = (((s32) ((temp_v1 < 0) int (temp_v0 + 0xFFE) : temp_v1) >> 0xB) << 0xB) - temp_a1;
    }
    temp_s0 = var_s1 - 4;
    var_v0 = 0;
    if ((*(s32 (**)(u8 **, s32))((u8 *)(*temp_s2) + 0x24))(temp_s2, 0) >= var_s1) {
        func_0015A570(sp, 2, 1, temp_s2, 0x8001);
        func_0015A570(sp, 2, 1, temp_s2, temp_s0);
        sp2 = 0;
        if (temp_s0 > 0) {
            var_s0 = (var_s1 - 4) - 1;
            do {
                func_0015A570(&sp2, 1, 1, temp_s2);
                var_s0 -= 1;
            } while (var_s0 != 0);
        }
        var_v0 = var_s1;
    }
    return var_v0;
}
