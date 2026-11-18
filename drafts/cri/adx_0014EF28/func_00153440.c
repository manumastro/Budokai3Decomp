/* Draft (not built): func_00153440 at 0x00153440, size 0x2A0, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00153440.c:107: parse error before ')' token
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00153440.s */

extern s32 D_00460EC8;
extern s32 D_004612C8;

u32 func_00153440(u8 *arg0, u32 arg1, u8 *arg2, u8 *arg3) {
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f8;
    f32 temp_f9;
    f32 var_f0;
    f32 var_f10;
    f32 var_f11;
    f32 var_f8;
    f32 var_f9;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s32 var_t1;
    s32 var_t5;
    u32 var_v0;
    u8 *var_a3;
    u8 *var_a3_2;
    u8 *var_t2;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 *temp_t2;
    u8 *temp_t7;
    u8 *var_a2;

    var_a2 = arg2;
    temp_t7 = M2C_ERROR(/* Read from unset register $t1 */);
    var_f0 = 0.000015258789f;
    temp_v0 = (s32) (arg1 + (arg1 >> 0x1F)) >> 1;
    temp_f14 = (f32) ((s32) (M2C_ERROR(/* Read from unset register $t3 */) << 0x10) >> 0xC) * 0.000015258789f;
    var_f9 = (f32) (*(s16 *)((u8 *)arg3 + 0) << 0x10);
    var_t2 = arg0;
    var_f11 = (f32) (*(s16 *)((u8 *)arg3 + 2) << 0x10);
    var_t5 = 0;
    var_f8 = (f32) (*(s16 *)((u8 *)temp_t7 + 0) << 0x10);
    var_f10 = (f32) (*(s16 *)((u8 *)temp_t7 + 2) << 0x10);
    temp_f12 = (f32) ((s32) (M2C_ERROR(/* Read from unset register $t2 */) << 0x10) >> 0xC) * 0.000015258789f;
    if (temp_v0 > 0) {
        var_a3 = var_t2;
loop_2:
        temp_t2 = var_t2 + 0x12;
        temp_a0 = *(u8 *)((u8 *)var_a3 + 1) | ((*(u16 *)((u8 *)var_a3 + 0) << 8) & ~0xFF);
        var_v0 = var_t5 * 2;
        if (!(temp_a0 & 0x8000)) {
            temp_f15 = (f32) ((temp_a0 & 0x1FFF) + 1);
            temp_a0_2 = *(u8 *)((u8 *)temp_t2 + 1) | ((*(u16 *)((u8 *)var_t2 + 0x12) << 8) & ~0xFF);
            var_v0 = var_t5 * 2;
            if (!(temp_a0_2 & 0x8000)) {
                var_a3_2 = var_a3 + 2;
                temp_f13 = (f32) ((temp_a0_2 & 0x1FFF) + 1);
                var_t2 = temp_t2 + 2;
                var_t1 = 0x1E;
                do {
                    temp_v0_2 = *var_a3_2;
                    var_a3_2 += 1;
                    temp_v1 = *var_t2;
                    var_t2 += 1;
                    temp_v0_3 = temp_v0_2 * 4;
                    temp_v1_2 = temp_v1 * 4;
                    var_t1 -= 2;
                    temp_f9 = (temp_f12 * var_f9) + (temp_f14 * var_f11) + (*(temp_v0_3 + &D_00460EC8) * temp_f15);
                    temp_f8 = (temp_f12 * var_f8) + (temp_f14 * var_f10) + (*(temp_v1_2 + &D_00460EC8) * temp_f13);
                    temp_f2 = temp_f12 * temp_f9;
                    var_f11 = temp_f9;
                    temp_f1 = temp_f12 * temp_f8;
                    var_f10 = temp_f8;
                    temp_f1_2 = temp_f1 + (temp_f14 * var_f8);
                    var_f0 = (temp_f9 + temp_f8) * 0.7f;
                    var_f9 = temp_f2 + (temp_f14 * var_f9) + (*(temp_v0_3 + &D_004612C8) * temp_f15);
                    var_f8 = temp_f1_2 + (*(temp_v1_2 + &D_004612C8) * temp_f13);
                    temp_v0_4 = M2C_BITWISE(s32, temp_f1_2) >> 0x10;
                    *M2C_ERROR(/* Read from unset register $t0 */) = (s16) temp_v0_4;
                    *(s16 *)((u8 *)var_a2 + 0) = (s16) temp_v0_4;
                    temp_v0_5 = M2C_BITWISE(s32, var_f0) >> 0x10;
                    *(s16 *)((u8 *)(M2C_ERROR(/* Read from unset register $t0 */)) + 2) = (s16) temp_v0_5;
                    *(s16 *)((u8 *)var_a2 + 2) = (s16) temp_v0_5;
                    var_a2 = var_a2 + 2 + 2;
                } while (var_t1 >= 0);
                var_t5 += 1;
                var_a3 = var_t2;
                if (var_t5 >= temp_v0) {
                    goto block_7;
                }
                goto loop_2;
            }
        }
    } else {
block_7:
        var_v0 = arg1;
        *(s16 *)((u8 *)arg3 + 0) = (s16) (M2C_BITWISE(s32, var_f0) >> 0x10);
        *(s16 *)((u8 *)arg3 + 2) = (s16) (M2C_BITWISE(s32, var_f0) >> 0x10);
        *(s16 *)((u8 *)temp_t7 + 0) = (s16) (M2C_BITWISE(s32, var_f0) >> 0x10);
        *(s16 *)((u8 *)temp_t7 + 2) = (s16) (M2C_BITWISE(s32, var_f0) >> 0x10);
    }
    return var_v0;
}
