/* Draft (not built): func_0014F888 at 0x0014F888, size 0x318, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0014F888.c:80: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_0014F888.s */

u8 *func_0014F888(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 *temp_t5;
    s32 temp_a0;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t4_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v0_3;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_t1;
    u32 temp_t4;
    u8 *temp_t3;
    u8 *temp_t3_2;
    u8 *temp_t3_3;
    u8 *temp_t3_4;
    u8 *temp_t3_5;
    u8 *var_v0;

    temp_t5 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_a0 = *(u8 *)((u8 *)arg0 + 0) | (*(u8 *)((u8 *)arg0 + 3) << 0x18) | ((*(u8 *)((u8 *)arg0 + 2) << 0x10) | (*(u8 *)((u8 *)arg0 + 1) << 8));
    temp_t3 = arg0 + 4;
    if ((temp_a0 == 0x64732E) || (var_v0 = NULL, (temp_a0 == 0x646E732E))) {
        var_v0 = NULL;
        temp_t4 = *(u8 *)((u8 *)arg0 + 4) | (*(u8 *)((u8 *)temp_t3 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t3 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t3 + 1) << 8));
        temp_t4_2 = (temp_t4 >> 0x18) | (temp_t4 << 0x18) | (((temp_t4 << 8) & 0xFF0000) | ((temp_t4 >> 8) & 0xFF00));
        temp_t3_2 = temp_t3 + 4;
        if (arg1 >= temp_t4_2) {
            temp_t3_3 = temp_t3_2 + 4;
            temp_t3_4 = temp_t3_3 + 4;
            temp_a0_2 = *(u8 *)((u8 *)temp_t3_2 + 4) | (*(u8 *)((u8 *)temp_t3_3 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t3_3 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t3_3 + 1) << 8));
            temp_t1 = *(u8 *)((u8 *)temp_t3 + 4) | (*(u8 *)((u8 *)temp_t3_2 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t3_2 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t3_2 + 1) << 8));
            temp_a0_3 = (temp_a0_2 >> 0x18) | (temp_a0_2 << 0x18) | (((temp_a0_2 << 8) & 0xFF0000) | ((temp_a0_2 >> 8) & 0xFF00));
            temp_t1_2 = (temp_t1 >> 0x18) | (temp_t1 << 0x18) | (((temp_t1 << 8) & 0xFF0000) | ((temp_t1 >> 8) & 0xFF00));
            if (temp_a0_3 != 2) {
                if (temp_a0_3 < 3U) {
                    if (temp_a0_3 != 1) {
                        return NULL;
                    }
                    var_v0_2 = 8;
                    *M2C_ERROR(/* Read from unset register $t2 */) = 2;
                    goto block_14;
                }
                if (temp_a0_3 != 3) {
                    return NULL;
                }
                var_v0_2 = 0x10;
                *M2C_ERROR(/* Read from unset register $t2 */) = 0;
block_14:
                *temp_t5 = var_v0_2;
                goto block_15;
            }
            *M2C_ERROR(/* Read from unset register $t2 */) = 1;
            *temp_t5 = 8;
block_15:
            temp_t3_5 = temp_t3_4 + 4;
            temp_v0 = *(u8 *)((u8 *)temp_t3_3 + 4) | (*(u8 *)((u8 *)temp_t3_4 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t3_4 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t3_4 + 1) << 8));
            *arg2 = ((u32) temp_v0 >> 0x18) | (temp_v0 << 0x18) | (((temp_v0 << 8) & 0xFF0000) | ((temp_v0 >> 8) & 0xFF00));
            temp_v0_2 = *(u8 *)((u8 *)temp_t3_4 + 4) | (*(u8 *)((u8 *)temp_t3_5 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_t3_5 + 2) << 0x10) | (*(u8 *)((u8 *)temp_t3_5 + 1) << 8));
            temp_v1 = ((u32) temp_v0_2 >> 0x18) | (temp_v0_2 << 0x18) | (((temp_v0_2 << 8) & 0xFF0000) | ((temp_v0_2 >> 8) & 0xFF00));
            *arg3 = temp_v1;
            temp_t2 = *M2C_ERROR(/* Read from unset register $t2 */);
            if (temp_t2 == 2) {
                var_v0_3 = temp_t1_2 / temp_v1;
            } else if (temp_t2 == 1) {
                var_v0_3 = temp_t1_2 / temp_v1;
            } else {
                var_v0_3 = 0x7FFF0000;
                if (temp_t2 == 0) {
                    var_v0_3 = (s32) ((s32) (temp_t1_2 + ((u32) temp_t1_2 >> 0x1F)) >> 1) / temp_v1;
                }
            }
            *M2C_ERROR(/* Read from unset register $t1 */) = var_v0_3;
            var_v0 = arg0 + temp_t4_2;
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
