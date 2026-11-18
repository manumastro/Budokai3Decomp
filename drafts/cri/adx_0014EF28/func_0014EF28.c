/* Draft (not built): func_0014EF28 at 0x0014EF28, size 0x38C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0014EF28.c:81: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_0014EF28.s */

u8 *func_0014EF28(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_v1_2;
    s32 var_t5;
    s32 var_t6;
    s32 var_v0_2;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_6;
    u8 *var_t8;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a3;
    u8 temp_v0;
    u8 temp_v0_5;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 var_t1;
    u8 *temp_t3;
    u8 *temp_t8;
    u8 *temp_t8_2;
    u8 *temp_t8_3;
    u8 *temp_t8_4;
    u8 *temp_t8_5;
    u8 *temp_t8_6;
    u8 *temp_t8_7;
    u8 *var_s1;
    u8 *var_v0;

    temp_t8 = arg0 + 4;
    temp_t8_2 = temp_t8 + 4;
    temp_t9 = *(u8 *)((u8 *)arg0 + 4) | (*(u8 *)((u8 *)temp_t8 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t8 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t8 + 1) << 8));
    var_s1 = NULL;
    var_t6 = 0;
    var_t5 = 0;
    var_t8 = temp_t8_2 + 4;
    var_v0 = NULL;
    if ((*(u8 *)((u8 *)arg0 + 0) | (*(u8 *)((u8 *)arg0 + 3) << 0x18) | ((*(u8 *)((u8 *)arg0 + 2) << 0x10) | (*(u8 *)((u8 *)arg0 + 1) << 8))) == 0x4D524F46) {
        if ((*(u8 *)((u8 *)temp_t8 + 4) | (*(u8 *)((u8 *)temp_t8_2 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t8_2 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t8_2 + 1) << 8))) == 0x46464941) {
            temp_t3 = (var_t8 + (((u32) temp_t9 >> 0x18) | ((temp_t9 >> 8) & 0xFF00) | ((temp_t9 << 8) & 0xFF0000) | (temp_t9 << 0x18))) - 4;
            var_v0 = NULL;
            if ((u32) var_t8 < (u32) temp_t3) {
                var_t1 = *(u8 *)((u8 *)temp_t8_2 + 4);
loop_7:
                temp_a3 = *(u8 *)((u8 *)var_t8 + 1);
                temp_t8_3 = var_t8 + 4;
                temp_t0 = *(u8 *)((u8 *)var_t8 + 3) << 0x18;
                temp_v1 = *(u8 *)((u8 *)temp_t8_3 + 2);
                temp_a2 = *(u8 *)((u8 *)var_t8 + 2) << 0x10;
                temp_a0 = *(u8 *)((u8 *)temp_t8_3 + 1);
                temp_a1 = *(u8 *)((u8 *)temp_t8_3 + 3) << 0x18;
                temp_v0 = *(u8 *)((u8 *)var_t8 + 4);
                var_t8 = temp_t8_3 + 4;
                temp_t9_2 = temp_v0 | temp_a1 | ((temp_v1 << 0x10) | (temp_a0 << 8));
                temp_t7 = var_t1 | temp_t0 | (temp_a2 | (temp_a3 << 8));
                temp_t9_3 = ((u32) temp_t9_2 >> 0x18) | ((temp_t9_2 >> 8) & 0xFF00) | ((temp_t9_2 << 8) & 0xFF0000) | (temp_t9_2 << 0x18);
                if (temp_t7 != 0x444E5353) {
                    if (temp_t7 == 0x4D4D4F43) {
                        var_v0_2 = (u32) var_t8 < (u32) temp_t3;
                        if (var_t5 == 0) {
                            var_v0 = NULL;
                            if (temp_t9_3 >= 0x12) {
                                temp_t8_4 = var_t8 + 2;
                                var_t5 = 1;
                                temp_v0_2 = *(u8 *)((u8 *)var_t8 + 0) | (*(u8 *)((u8 *)var_t8 + 1) << 8);
                                *arg2 = (temp_v0_2 >> 8) | ((temp_v0_2 << 8) & 0xFF00);
                                temp_t8_5 = temp_t8_4 + 4;
                                temp_v1_2 = *(u8 *)((u8 *)var_t8 + 2) | (*(u8 *)((u8 *)temp_t8_4 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t8_4 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t8_4 + 1) << 8));
                                *M2C_ERROR(/* Read from unset register $t0 */) = ((u32) temp_v1_2 >> 0x18) | (temp_v1_2 << 0x18) | (((temp_v1_2 << 8) & 0xFF0000) | ((temp_v1_2 >> 8) & 0xFF00));
                                temp_t8_6 = temp_t8_5 + 2;
                                temp_v0_3 = *(u8 *)((u8 *)temp_t8_4 + 4) | (*(u8 *)((u8 *)temp_t8_5 + 1) << 8);
                                *arg3 = (temp_v0_3 >> 8) | ((temp_v0_3 << 8) & 0xFF00);
                                temp_t8_7 = temp_t8_6 + 2;
                                var_t8 = temp_t8_7 + 8;
                                temp_v0_4 = *(u8 *)((u8 *)temp_t8_6 + 2) | (*(u8 *)((u8 *)temp_t8_7 + 1) << 8);
                                *arg1 = (s32) (((temp_v0_4 >> 8) | ((temp_v0_4 << 8) & ~0xFF)) & 0xFFFF) >> (0x400E - ((u32) (*(u8 *)((u8 *)temp_t8_5 + 2) | (*(u8 *)((u8 *)temp_t8_6 + 1) << 8)) >> 8));
                                if (var_t6 != 0) {
                                    goto block_23;
                                }
                                goto block_19;
                            }
                        } else {
                            goto block_20;
                        }
                    } else {
                        var_t8 += (temp_t9_3 + 1) & ~1;
                        goto block_19;
                    }
                } else {
                    var_v0_2 = (u32) var_t8 < (u32) temp_t3;
                    if (var_t6 == 0) {
                        var_t6 = 1;
                        temp_v0_5 = *(u8 *)((u8 *)var_t8 + 2);
                        temp_a0_2 = *(u8 *)((u8 *)var_t8 + 1);
                        temp_a1_2 = *(u8 *)((u8 *)var_t8 + 3) << 0x18;
                        temp_v1_3 = *(u8 *)((u8 *)var_t8 + 0);
                        var_t8 += 4;
                        temp_v0_6 = temp_v1_3 | temp_a1_2 | ((temp_v0_5 << 0x10) | (temp_a0_2 << 8));
                        var_s1 = var_t8 + ((temp_v0_6 >> 0x18) | (temp_v0_6 << 0x18) | (((temp_v0_6 << 8) & 0xFF0000) | ((temp_v0_6 >> 8) & 0xFF00)));
                        if (var_t5 != 0) {
                            goto block_23;
                        }
block_19:
                        var_v0_2 = (u32) var_t8 < (u32) temp_t3;
                        goto block_20;
                    }
block_20:
                    if (var_v0_2 != 0) {
                        var_t1 = *var_t8;
                        goto loop_7;
                    }
block_23:
                    var_v0 = var_s1;
                }
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_v0;
        }
        return NULL;
    }
    return var_v0;
}
