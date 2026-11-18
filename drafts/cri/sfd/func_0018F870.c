/* Draft (not built): func_0018F870 at 0x0018F870, size 0x9C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018F870.s */

void func_0018F870(u8 *arg0, u8 *arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0);
    temp_t2 = *(s32 *)((u8 *)arg0 + 4);
    temp_v0 = temp_v1 + 0xF;
    temp_t1 = temp_t2 + 0xF;
    temp_v0_2 = (s32) ((temp_v0 < 0) ? (temp_v1 + 0x1E) : temp_v0) >> 4;
    temp_t0 = temp_v0_2 * 0x10;
    temp_v0_3 = temp_v0_2 * 8;
    temp_a3 = temp_t0 + 0x3F;
    temp_a2 = temp_v0_3 + 0x3F;
    temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x20);
    temp_a3_2 = (s32) ((temp_a3 < 0) ? (temp_t0 + 0x7E) : temp_a3) >> 6;
    temp_t1_2 = (s32) ((temp_t1 < 0) ? (temp_t2 + 0x1E) : temp_t1) >> 4;
    temp_a2_2 = (s32) ((temp_a2 < 0) ? (temp_v0_3 + 0x7E) : temp_a2) >> 6;
    *(s16 *)((u8 *)arg1 + 0xE) = (s16) (temp_a3_2 << 6);
    *(s16 *)((u8 *)arg1 + 0xC) = (s16) (temp_a2_2 << 6);
    *(s32 *)((u8 *)arg1 + 8) = temp_v1_2;
    temp_v0_4 = temp_v1_2 + ((temp_a3_2 * temp_t1_2) << 0xA);
    *(s32 *)((u8 *)arg1 + 0) = temp_v0_4;
    *(s32 *)((u8 *)arg1 + 4) = (s32) (temp_v0_4 + ((temp_a2_2 * temp_t1_2) << 9));
}
