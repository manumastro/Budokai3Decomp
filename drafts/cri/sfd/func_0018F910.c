/* Draft (not built): func_0018F910 at 0x0018F910, size 0x90, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018F910.s */

void func_0018F910(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    temp_v0 = arg1 + 0xF;
    temp_t2 = arg2 + 0xF;
    temp_v0_2 = (s32) ((temp_v0 < 0) ? (arg1 + 0x1E) : temp_v0) >> 4;
    temp_a1 = temp_v0_2 * 0x10;
    temp_v0_3 = temp_v0_2 * 8;
    temp_t0 = temp_a1 + 0x3F;
    temp_t1 = temp_v0_3 + 0x3F;
    temp_t0_2 = (s32) ((temp_t0 < 0) ? (temp_a1 + 0x7E) : temp_t0) >> 6;
    temp_t2_2 = (s32) ((temp_t2 < 0) ? (arg2 + 0x1E) : temp_t2) >> 4;
    temp_t1_2 = (s32) ((temp_t1 < 0) ? (temp_v0_3 + 0x7E) : temp_t1) >> 6;
    *(s16 *)((u8 *)arg3 + 0xE) = (s16) (temp_t0_2 << 6);
    *(s16 *)((u8 *)arg3 + 0xC) = (s16) (temp_t1_2 << 6);
    temp_v0_4 = arg0 + ((temp_t0_2 * temp_t2_2) << 0xA);
    *(s32 *)((u8 *)arg3 + 8) = arg0;
    *(s32 *)((u8 *)arg3 + 0) = temp_v0_4;
    *(s32 *)((u8 *)arg3 + 4) = (s32) (temp_v0_4 + ((temp_t1_2 * temp_t2_2) << 9));
}
