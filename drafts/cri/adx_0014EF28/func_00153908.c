/* Draft (not built): func_00153908 at 0x00153908, size 0x3C4, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00153908.c:107: parse error before "int"
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00153908.s */

extern s32 D_004604D8;

u32 func_00153908(u8 *arg0, u32 arg1, u8 *arg2, u8 *arg3, u16 *arg_sp0, s16 arg_sp8, s16 arg_sp10) {
    u32 sp0;
    u8 *sp4;
    u8 *sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_s2;
    s16 temp_s3;
    s16 var_a2;
    s16 var_a2_2;
    s16 var_a2_4;
    s16 var_a2_5;
    s16 var_s1;
    s16 var_t4;
    s16 var_t8;
    s16 var_t9;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_a2_3;
    s32 var_a2_6;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0_2;
    u16 temp_a2;
    u16 temp_v1;
    u32 var_v0;
    u8 temp_a0_3;
    u8 *var_t1;
    u8 *var_t7;
    u8 *var_t7_2;

    sp8 = M2C_ERROR(/* Read from unset register $t1 */);
    sp14 = (s32) (arg1 + (arg1 >> 0x1F)) >> 1;
    var_t1 = arg2;
    temp_s3 = M2C_ERROR(/* Read from unset register $t2 */);
    var_s7 = 0;
    sp0 = arg1;
    temp_s2 = M2C_ERROR(/* Read from unset register $t3 */);
    var_t7 = arg0;
    sp4 = arg3;
    sp10 = (s32) arg_sp10;
    spC = (s32) arg_sp8;
    var_t8 = *(s16 *)((u8 *)arg3 + 0);
    var_t4 = *(s16 *)((u8 *)arg3 + 2);
    var_t9 = *(s16 *)((u8 *)sp8 + 0);
    var_s1 = *(s16 *)((u8 *)sp8 + 2);
    if (sp14 > 0) {
loop_2:
        temp_a0 = *(u8 *)((u8 *)var_t7 + 1) | ((*(u16 *)((u8 *)var_t7 + 0) << 8) & ~0xFF);
        var_v0 = var_s7 * 2;
        if (!(temp_a0 & 0x8000)) {
            temp_v1 = *arg_sp0;
            temp_s5 = ((temp_a0 ^ temp_v1) & 0x1FFF) + 1;
            temp_a2 = (sp10 + (temp_v1 * spC)) & 0x7FFF;
            *arg_sp0 = temp_a2;
            temp_a0_2 = *(u8 *)((u8 *)var_t7 + 0x13) | ((*(u16 *)((u8 *)var_t7 + 0x12) << 8) & ~0xFF);
            if (!(temp_a0_2 & 0x8000)) {
                var_t7_2 = var_t7 + 2;
                temp_s4 = ((temp_a0_2 ^ temp_a2) & 0x1FFF) + 1;
                var_s6 = 0x1E;
                *arg_sp0 = (sp10 + (spC * temp_a2)) & 0x7FFF;
                do {
                    temp_a0_3 = *(u8 *)((u8 *)var_t7_2 + 0x12);
                    temp_v0 = *(u8 *)((u8 *)var_t7_2 + 0) << 0x18;
                    var_t7_2 += 1;
                    temp_t6 = temp_v0 >> 0x18;
                    var_a2 = ((s32) ((temp_s3 * var_t8) + (temp_s2 * var_t4)) >> 0xC) + ((temp_v0 >> 0x1C) * temp_s5);
                    if ((u32) (var_a2 + 0x8000) > 0xFFFFU) {
                        var_a2 = (((var_a2 < -0x8000) ^ 0) != 0) int -0x8000 : ((var_a2 > 0x7FFF) int 0x7FFF : var_a2);
                    }
                    var_a2_2 = ((s32) ((temp_s3 * var_t9) + (temp_s2 * var_s1)) >> 0xC) + (((s32) (temp_a0_3 << 0x18) >> 0x1C) * temp_s4);
                    if ((u32) (var_a2_2 + 0x8000) > 0xFFFFU) {
                        var_a2_2 = (((var_a2_2 < -0x8000) ^ 0) != 0) int -0x8000 : ((var_a2_2 > 0x7FFF) int 0x7FFF : var_a2_2);
                    }
                    var_a2_3 = (s32) ((var_a2 + var_a2_2) * 7) / 10;
                    var_v0_2 = temp_t6 & 0xF;
                    if ((u32) (var_a2_3 + 0x8000) > 0xFFFFU) {
                        var_a2_3 = (((var_a2_3 < -0x8000) ^ 0) != 0) int -0x8000 : ((var_a2_3 > 0x7FFF) int 0x7FFF : var_a2_3);
                        var_v0_2 = temp_t6 & 0xF;
                    }
                    *M2C_ERROR(/* Read from unset register $t0 */) = (s16) var_a2_3;
                    *(s16 *)((u8 *)var_t1 + 0) = (s16) var_a2_3;
                    var_a2_4 = ((s32) ((temp_s3 * var_a2) + (temp_s2 * var_t8)) >> 0xC) + (*((var_v0_2 * 4) + &D_004604D8) * temp_s5);
                    if ((u32) (var_a2_4 + 0x8000) > 0xFFFFU) {
                        var_a2_4 = (((var_a2_4 < -0x8000) ^ 0) != 0) int -0x8000 : ((var_a2_4 > 0x7FFF) int 0x7FFF : var_a2_4);
                    }
                    var_t4 = var_a2;
                    var_t8 = var_a2_4;
                    var_a2_5 = ((s32) ((temp_s3 * var_a2_2) + (temp_s2 * var_t9)) >> 0xC) + (*((((s8) temp_a0_3 & 0xF) * 4) + &D_004604D8) * temp_s4);
                    var_s1 = var_a2_2;
                    if ((u32) (var_a2_5 + 0x8000) > 0xFFFFU) {
                        var_a2_5 = (((var_a2_5 < -0x8000) ^ 0) != 0) int -0x8000 : ((var_a2_5 > 0x7FFF) int 0x7FFF : var_a2_5);
                    }
                    var_t9 = var_a2_5;
                    var_a2_6 = (s32) ((var_t8 + var_t9) * 7) / 10;
                    var_s6 -= 2;
                    if ((u32) (var_a2_6 + 0x8000) > 0xFFFFU) {
                        var_a2_6 = (((var_a2_6 < -0x8000) ^ 0) != 0) int -0x8000 : ((var_a2_6 > 0x7FFF) int 0x7FFF : var_a2_6);
                    }
                    *(s16 *)((u8 *)(M2C_ERROR(/* Read from unset register $t0 */)) + 2) = (s16) var_a2_6;
                    *(s16 *)((u8 *)var_t1 + 2) = (s16) var_a2_6;
                    var_t1 = var_t1 + 2 + 2;
                } while (var_s6 >= 0);
                var_s7 += 1;
                var_t7 = var_t7_2 + 0x12;
                if (var_s7 >= sp14) {
                    goto block_19;
                }
                goto loop_2;
            }
        }
    } else {
block_19:
        *(s16 *)((u8 *)sp4 + 2) = var_t4;
        var_v0 = sp0;
        *(s16 *)((u8 *)sp4 + 0) = var_t8;
        *(s16 *)((u8 *)sp8 + 2) = var_s1;
        *(s16 *)((u8 *)sp8 + 0) = var_t9;
    }
    return var_v0;
}
