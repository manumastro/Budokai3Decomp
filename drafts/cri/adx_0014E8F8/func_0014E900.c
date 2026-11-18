/* Draft (not built): func_0014E900 at 0x0014E900, size 0x28C, segment cri/adx_0014E8F8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ompile error: d_0014E900.c:107: parse error before '+=' token
 * Original: asm/nonmatchings/cri/adx_0014E8F8/func_0014E900.s */

f32 func_0014E900(u8 *arg0) {
    u8 *sp10;
    s32 sp20;
    u8 ***sp24;
    u8 ***sp28;
    s32 *sp2C;
    f32 temp_f1;
    f32 temp_ret;
    f32 var_f0;
    s16 *var_a3;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 var_s3;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_s0;
    s32 var_s6;
    u32 temp_v0;
    u8 ***var_fp;
    u8 ***var_s7;
    u8 **temp_a0;
    u8 **temp_a0_2;
    u8 **temp_a0_5;
    u8 **temp_a0_6;
    u8 **temp_a0_7;

    sp20 = 0;
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x24);
    var_f0 = (f32) *(s32 *)((u8 *)arg0 + 0x20) * temp_f1;
    if (*(s32 *)((u8 *)arg0 + 0x1C) > 0) {
        var_s7 = arg0 + 0xC;
        sp28 = var_s7;
        var_fp = arg0 + 4;
        sp2C = arg0 + 0x14;
loop_2:
        temp_a0 = *var_fp;
        temp_v0 = (*(u32 (**)(u8 **, s32))((u8 *)(*temp_a0) + 0x24))(temp_a0, 1);
        temp_a0_2 = *var_s7;
        temp_s0 = (s32) ((s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1) / M2C_BITWISE(s32, temp_f1);
        temp_ret = (*(f32 (**)(u8 **, s32))((u8 *)(*temp_a0_2) + 0x24))(temp_a0_2, 0);
        temp_v0_2 = M2C_BITWISE(s32, temp_ret);
        var_f0 = temp_ret;
        temp_v1 = (s32) ((temp_v0_2 < 0) int (temp_v0_2 + 0xF) : temp_v0_2) >> 4;
        temp_v1_2 = (temp_s0 < temp_v1) int temp_s0 : temp_v1;
        if (temp_v1_2 > 0) {
            var_s6 = temp_v1_2;
            sp24 = &sp28[sp20];
loop_4:
            var_s0 = 0;
            var_s3 = 0;
            if (M2C_BITWISE(s32, temp_f1) > 0) {
loop_6:
                (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(**var_fp) + 0x18))(*var_fp, 1, (M2C_BITWISE(s32, temp_f1) - var_s0) * 2, sp);
                temp_t0 = sp4 / 2;
                var_a3 = sp0;
                if (temp_t0 > 0) {
                    var_a2 = temp_t0;
                    do {
                        temp_a0_3 = *var_a3;
                        var_a3 += 2;
                        var_a2 -= 1;
                        temp_a0_4 = (temp_a0_3 < 0) int -temp_a0_3 : temp_a0_3;
                        var_s3 = (var_s3 < temp_a0_4) int temp_a0_4 : var_s3;
                    } while (var_a2 != 0);
                }
                temp_a0_5 = *var_fp;
                var_s0 += temp_t0;
                (*(s32 (**)(u8 **, s32, u8 *, s16 *))((u8 *)(*temp_a0_5) + 0x20))(temp_a0_5, 0, sp, var_a3);
                if (var_s0 < M2C_BITWISE(s32, temp_f1)) {
                    goto loop_6;
                }
            }
            temp_a0_6 = *var_s7;
            (*(s32 (**)(u8 **, s32, s32, u8 **))((u8 *)(*temp_a0_6) + 0x18))(temp_a0_6, 0, 0x10, &sp10);
            if (sp14 == 0) {
loop_13:
                goto loop_13;
            }
            *(s32 *)((u8 *)sp10 + 0) = (s32) var_s3;
            temp_a0_7 = *sp24;
            var_s6 -= 1;
            *(s32 *)((u8 *)sp10 + 4) = (s32) *sp2C;
            *(f32 *)((u8 *)sp10 + 0xC) = temp_f1;
            *(s32 *)((u8 *)sp10 + 8) = (s32) *(s32 *)((u8 *)arg0 + 0x20);
            var_f0 = (*(f32 (**)(u8 **, s32, u8 **, u8 *))((u8 *)(*temp_a0_7) + 0x20))(temp_a0_7, 1, &sp10, sp10);
            *sp2C += M2C_BITWISE(s32, temp_f1);
            *(s32 *)((u8 *)arg0 + 0x2C) = (s32) (*(s32 *)((u8 *)arg0 + 0x2C) + 1);
            if (var_s6 == 0) {
                goto block_16;
            }
            goto loop_4;
        }
block_16:
        var_s7 += 4;
        var_fp += 4;
        temp_v1_3 = sp20 + 1;
        sp20 = temp_v1_3;
        sp2C += 4;
        if (temp_v1_3 >= *(s32 *)((u8 *)arg0 + 0x1C)) {
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_f0;
        }
        goto loop_2;
    }
    return var_f0;
}
