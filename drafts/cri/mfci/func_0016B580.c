/* Draft (not built): func_0016B580 at 0x0016B580, size 0x19C, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0016B580.c:48: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mfci/func_0016B580.s */

extern s32 D_004641C8;

void func_0016B580(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a1;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s32 *var_t8;
    s32 *var_t9;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t4;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    var_t9 = *(s32 **)((u8 *)arg0 + 0xC);
    var_t8 = *(s32 **)((u8 *)arg0 + 8);
    do {
        temp_t4 = var_s0 * 2;
        temp_a1 = *(temp_t4 + arg1);
        temp_a2 = *((*(s32 *)((u8 *)arg0 + 0x28) * 4) + &D_004641C8);
        temp_a0 = (s32) (temp_a1 * *((*(s32 *)((u8 *)arg0 + 0x1C) * 4) + &D_004641C8)) >> 0xC;
        temp_a1_2 = (s32) (temp_a1 * *((*(s32 *)((u8 *)arg0 + 0x20) * 4) + &D_004641C8)) >> 0xC;
        temp_t0 = temp_a1_2 * temp_a2;
        temp_a2_2 = temp_a0 * temp_a2;
        temp_v0 = *((*(s32 *)((u8 *)arg0 + 0x24) * 4) + &D_004641C8);
        var_s0 += 1;
        temp_a2_3 = temp_a2_2 >> 0xC;
        temp_t0_2 = temp_t0 >> 0xC;
        temp_a0_2 = ((s32) (temp_a0 * temp_v0) >> 0xC) + *var_t8;
        temp_a1_3 = ((s32) (temp_a1_2 * temp_v0) >> 0xC) + *var_t9;
        temp_a0_3 = (((temp_a0_2 > 0x7FFF) ^ 0) != 0) int 0x7FFF : ((temp_a0_2 < -0x8000) int -0x8000 : temp_a0_2);
        temp_a1_4 = (((temp_a1_3 > 0x7FFF) ^ 0) != 0) int 0x7FFF : ((temp_a1_3 < -0x8000) int -0x8000 : temp_a1_3);
        *var_t8 = (s32) ((temp_a2_3 * -0xDEF) + (temp_t0_2 * -0x7D6)) >> 0xC;
        *(temp_t4 + arg2) = temp_a0_3;
        var_t8 += 4;
        *var_t9 = (s32) ((temp_t0_2 * 0xDEF) + (temp_a2_3 * 0x7D6)) >> 0xC;
        var_t9 += 4;
        *(temp_t4 + arg3) = temp_a1_4;
    } while (var_s0 < 0x20);
}
