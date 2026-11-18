/* Draft (not built): func_00152D50 at 0x00152D50, size 0x21C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00152D50.c:63: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00152D50.s */

s32 func_00152940(void *, s32 *);               /* extern */

s32 func_00152D50(u8 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 sp1;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_t1_5;
    s32 temp_t1_6;
    s32 temp_v0;
    u16 temp_v1;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a1_4;
    u8 *temp_a2_2;
    u8 *temp_a3_2;
    u8 *temp_s3;

    temp_s3 = M2C_ERROR(/* Read from unset register $t1 */);
    *arg2 = 0;
    temp_v0 = func_00152940(sp, &sp1);
    if (temp_v0 == 0) {
        temp_a3 = sp0 ^ 4;
        temp_a2 = (temp_a3 == 0) int 0x48 : 0x3C;
        if (arg1 < temp_a2) {
            return -1;
        }
        temp_v1 = *(u16 *)((u8 *)arg0 + 0);
        if ((((temp_v1 >> 8) | (temp_v1 << 8)) & 0xFFFF) == 0x8000) {
            if ((s16) (*(u8 *)((u8 *)arg0 + 3) | ((*(u16 *)((u8 *)arg0 + 2) << 8) & ~0xFF)) < (temp_a2 - 4)) {
                return -1;
            }
            temp_t1 = ((temp_a3 == 0) int 0x20 : 0x14) + 2;
            temp_a1 = arg0 + temp_t1;
            temp_t1_2 = temp_t1 + 2;
            temp_t1_3 = (((*(u8 *)((u8 *)temp_a1 + 1) | ((*(u16 *)((u8 *)temp_a1 + 0) << 8) & ~0xFF)) << 0x10) != 0) int (temp_t1_2 + 0x14) : temp_t1_2;
            temp_a1_2 = arg0 + temp_t1_3;
            temp_t1_4 = temp_t1_3 + 4;
            if (((*(u8 *)((u8 *)temp_a1_2 + 0) << 0x18) | *(u8 *)((u8 *)temp_a1_2 + 3) | ((*(u8 *)((u8 *)temp_a1_2 + 2) << 8) | (*(u8 *)((u8 *)temp_a1_2 + 1) << 0x10))) != 0x41494E46) {
                goto block_9;
            }
            temp_a1_3 = *(arg0 + temp_t1_4);
            temp_t1_5 = temp_t1_4 + 4 + 0x10;
            temp_a1_4 = arg0 + temp_t1_5;
            *arg2 = ((u32) temp_a1_3 >> 0x18) | (temp_a1_3 << 0x18) | (((temp_a1_3 << 8) & 0xFF0000) | ((temp_a1_3 >> 8) & 0xFF00));
            temp_t1_6 = temp_t1_5 + 4;
            temp_a2_2 = arg0 + temp_t1_6;
            temp_a3_2 = temp_t1_6 + arg0;
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($t0) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, ($t0) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($t0) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($t0) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s4) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, ($s4) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($s4) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($s4) */);
            *M2C_ERROR(/* Read from unset register $t0 */) = *(u8 *)((u8 *)temp_a1_4 + 1) | ((*(u16 *)((u8 *)temp_a1_4 + 0) << 8) & ~0xFF);
            *(s16 *)((u8 *)temp_s3 + 0) = (s16) (*(u8 *)((u8 *)temp_a2_2 + 1) | ((*(u16 *)((u8 *)temp_a2_2 + 0) << 8) & ~0xFF));
            *(s16 *)((u8 *)temp_s3 + 2) = (s16) (*(u8 *)((u8 *)temp_a3_2 + 3) | ((*(u16 *)((u8 *)temp_a3_2 + 2) << 8) & ~0xFF));
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return temp_v0;
        }
block_9:
        return -2;
    }
    return temp_v0;
}
