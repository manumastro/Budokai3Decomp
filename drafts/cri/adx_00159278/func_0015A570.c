/* Draft (not built): func_0015A570 at 0x0015A570, size 0x1BC, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015A570.c:26: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A570.s */

s32 memcpy(s32 *, s32 *, s32);                  /* extern */

s32 func_0015A570(s32 *arg0, s32 arg1, s32 arg2, u8 **arg3) {
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a3;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_t0;
    s32 var_t0_2;
    u16 temp_v0;
    u8 temp_v1;

    temp_s0 = arg1 * arg2;
    (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*arg3) + 0x18))(arg3, 0, temp_s0, sp);
    if (sp4 < temp_s0) {
        (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg3) + 0x1C))(arg3, 0, sp);
        return 0;
    }
    switch (arg1) {                                 /* irregular */
    case 4:
        var_a3 = arg0;
        var_a2 = sp0;
        var_t0 = 0;
        if (arg2 > 0) {
            do {
                temp_a0 = *var_a3;
                var_a3 += 4;
                var_t0 += 1;
                *var_a2 = ((u32) temp_a0 >> 0x18) | (temp_a0 << 0x18) | (((temp_a0 << 8) & 0xFF0000) | ((temp_a0 >> 8) & 0xFF00));
                var_a2 += 4;
            } while (var_t0 < arg2);
        }
block_19:
        (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg3) + 0x20))(arg3, 1, sp);
        return arg2;
    case 2:
        var_a1 = arg0;
        var_a2_2 = sp0;
        var_t0_2 = 0;
        if (arg2 > 0) {
            do {
                temp_v0 = *(u16 *)((u8 *)var_a1 + 0);
                var_t0_2 += 1;
                temp_v1 = *(u8 *)((u8 *)var_a1 + 1);
                var_a1 += 2;
                *var_a2_2 = (s16) (temp_v1 | ((temp_v0 << 8) & ~0xFF));
                var_a2_2 += 2;
            } while (var_t0_2 < arg2);
        }
        goto block_19;
    case 1:
        memcpy(sp0, arg0, arg2 & 0xFFFF);
        goto block_19;
    }
}
