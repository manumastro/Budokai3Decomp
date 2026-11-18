/* Draft (not built): func_00153728 at 0x00153728, size 0x1DC, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00153728.s */

extern s32 D_004604D8;

s32 func_00153728(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg_sp0) {
    s16 temp_a0;
    s16 temp_s0;
    s16 temp_s1;
    s16 var_a0;
    s16 var_a0_2;
    s16 var_a1;
    s16 var_t6;
    s32 temp_t7;
    s32 var_a3;
    s32 var_t2;
    s32 var_v0;
    u16 *temp_s2;
    u16 temp_v0;
    u8 *var_t5;
    u8 temp_v1;
    u8 *var_a2;

    var_a2 = arg2;
    temp_s1 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s2 = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s0 = M2C_ERROR(/* Read from unset register $t1 */);
    var_t5 = arg0;
    var_t2 = 0;
    var_a1 = *(s16 *)((u8 *)arg3 + 0);
    var_t6 = *(s16 *)((u8 *)arg3 + 2);
    if (arg1 > 0) {
loop_2:
        temp_a0 = *(u8 *)((u8 *)var_t5 + 1) | ((*(u16 *)((u8 *)var_t5 + 0) << 8) & ~0xFF);
        var_v0 = var_t2;
        if (!(temp_a0 & 0x8000)) {
            temp_v0 = *temp_s2;
            var_t5 += 2;
            temp_t7 = ((temp_a0 ^ temp_v0) & 0x1FFF) + 1;
            var_a3 = 0x1E;
            *temp_s2 = ((temp_v0 * (s16) M2C_ERROR(/* Read from unset register $t3 */)) + arg_sp0) & 0x7FFF;
            do {
                temp_v1 = *var_t5;
                var_t5 += 1;
                var_a0 = ((s32) ((temp_s1 * var_a1) + (temp_s0 * var_t6)) >> 0xC) + (((s32) (temp_v1 << 0x18) >> 0x1C) * temp_t7);
                if ((u32) (var_a0 + 0x8000) > 0xFFFFU) {
                    var_a0 = (((var_a0 < -0x8000) ^ 0) != 0) ? -0x8000 : ((var_a0 > 0x7FFF) ? 0x7FFF : var_a0);
                }
                *(s16 *)((u8 *)var_a2 + 0) = var_a0;
                var_t6 = var_a0;
                var_a0_2 = ((s32) ((temp_s1 * var_a0) + (temp_s0 * var_a1)) >> 0xC) + (*((((s8) temp_v1 & 0xF) * 4) + &D_004604D8) * temp_t7);
                if ((u32) (var_a0_2 + 0x8000) > 0xFFFFU) {
                    var_a0_2 = (((var_a0_2 < -0x8000) ^ 0) != 0) ? -0x8000 : ((var_a0_2 > 0x7FFF) ? 0x7FFF : var_a0_2);
                }
                var_a1 = var_a0_2;
                var_a3 -= 2;
                *(s16 *)((u8 *)var_a2 + 2) = var_a1;
                var_a2 = var_a2 + 2 + 2;
            } while (var_a3 >= 0);
            var_t2 += 1;
            if (var_t2 >= arg1) {
                goto block_10;
            }
            goto loop_2;
        }
    } else {
block_10:
        *(s16 *)((u8 *)arg3 + 2) = var_t6;
        var_v0 = arg1;
        *(s16 *)((u8 *)arg3 + 0) = var_a1;
    }
    return var_v0;
}
