/* Draft (not built): func_0015B3D0 at 0x0015B3D0, size 0x130, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015B3D0.c:41: too few arguments to function `func_0015A570'
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015B3D0.s */

s32 func_0015A570(void *, s32, s32, s32, s8); /* extern */

s32 func_0015B3D0(u8 *arg0) {
    s16 var_s0;
    s32 temp_s4;
    s32 var_s5;
    s32 var_s6;
    u16 *var_s3;
    u16 temp_a0;
    u16 temp_v1;
    u8 *temp_a0_2;
    u8 *var_s1;

    var_s5 = 0;
    var_s6 = 0;
    temp_s4 = *(s32 *)((u8 *)arg0 + 0xC);
    if (*(s32 *)((u8 *)arg0 + 0x58) > 0) {
        var_s1 = arg0 + 0x2A8;
        var_s3 = arg0 + 0x290;
        do {
            temp_a0 = *(u16 *)((u8 *)arg0 + 0x2D0);
            temp_v1 = *var_s3;
            var_s3 += 2;
            var_s0 = temp_a0 ^ (temp_v1 - 1);
            *(u16 *)((u8 *)arg0 + 0x2D0) = (u16) ((*(u16 *)((u8 *)arg0 + 0x2D4) + (temp_a0 * *(u16 *)((u8 *)arg0 + 0x2D2))) & 0x7FFF);
            if (*(s32 *)((u8 *)var_s1 + 0) == 0) {
                if (*(s32 *)((u8 *)var_s1 + 4) == 0) {
                    if (*(s32 *)((u8 *)var_s1 + 8) == 0) {
                        var_s0 = (*(s32 *)((u8 *)var_s1 + 0xC) == 0) int 0 : var_s0;
                    }
                }
            }
            var_s5 += 1;
            func_0015A570(sp, 1, 1, temp_s4, (s8) (var_s0 >> 8));
            func_0015A570(sp, 1, 1, temp_s4, (s8) var_s0);
            temp_a0_2 = var_s1;
            var_s1 += 0x10;
            var_s6 += 0x12;
            func_0015A570(temp_a0_2, 1, 0x10, temp_s4);
        } while (var_s5 < *(s32 *)((u8 *)arg0 + 0x58));
    }
    return var_s6;
}
