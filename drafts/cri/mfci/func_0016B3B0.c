/* Draft (not built): func_0016B3B0 at 0x0016B3B0, size 0x170, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0016B3B0.c:35: parse error before "int"
 * Original: asm/nonmatchings/cri/mfci/func_0016B3B0.s */

extern s32 D_004641C8;

void func_0016B3B0(u8 *arg0, s16 arg1, s16 *arg2, s16 *arg3) {
    s16 temp_a0_2;
    s16 temp_a1_2;
    s32 *temp_t6_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = *((*(s32 *)((u8 *)arg0 + 0x28) * 4) + &D_004641C8);
    temp_a0 = (s32) (arg1 * *((*(s32 *)((u8 *)arg0 + 0x1C) * 4) + &D_004641C8)) >> 0xC;
    temp_a1 = (s32) (arg1 * *((*(s32 *)((u8 *)arg0 + 0x20) * 4) + &D_004641C8)) >> 0xC;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_t6 = *(s32 *)((u8 *)arg0 + 0x14) * 4;
    temp_t6_2 = temp_t6 + *(s32 *)((u8 *)arg0 + 8);
    temp_v1_2 = (s32) (temp_a0 * temp_v1) >> 0xC;
    temp_t1 = (s32) (temp_a1 * temp_v1) >> 0xC;
    temp_v0 = *((*(s32 *)((u8 *)arg0 + 0x24) * 4) + &D_004641C8);
    *temp_t6_2 = (s32) ((temp_v1_2 * -0xDEF) + (temp_t1 * -0x7D6)) >> 0xC;
    temp_a1_2 = ((s32) (temp_a1 * temp_v0) >> 0xC) + *(temp_t6 + temp_s0);
    *((*(s32 *)((u8 *)arg0 + 0x14) * 4) + temp_s0) = (s32) ((temp_t1 * 0xDEF) + (temp_v1_2 * 0x7D6)) >> 0xC;
    temp_a0_2 = ((s32) (temp_a0 * temp_v0) >> 0xC) + *temp_t6_2;
    temp_t0 = *(s32 *)((u8 *)arg0 + 0x14) + 1;
    *arg2 = (((temp_a0_2 > 0x7FFF) ^ 0) != 0) int 0x7FFF : ((temp_a0_2 < -0x8000) int -0x8000 : temp_a0_2);
    *(s32 *)((u8 *)arg0 + 0x14) = temp_t0;
    *arg3 = (((temp_a1_2 > 0x7FFF) ^ 0) != 0) int 0x7FFF : ((temp_a1_2 < -0x8000) int -0x8000 : temp_a1_2);
    if (temp_t0 >= *(s32 *)((u8 *)arg0 + 0x18)) {
        *(s32 *)((u8 *)arg0 + 0x14) = 0;
    }
}
