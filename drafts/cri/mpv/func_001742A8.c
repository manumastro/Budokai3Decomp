/* Draft (not built): func_001742A8 at 0x001742A8, size 0x120, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001742A8.c:45: parse error before ')' token
 * Original: asm/nonmatchings/cri/mpv/func_001742A8.s */

s32 func_001742A8(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_t3;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;
    u8 *temp_v1_8;

    temp_t3 = arg0 + 0x158;
    temp_a0 = *(s32 *)((u8 *)temp_t3 + 0x328);
    *(s32 *)((u8 *)temp_t3 + 0x4DC) = 1;
    *(s32 *)((u8 *)temp_t3 + 0x4EC) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x4EC) + 1);
    if (((temp_a0 != 0) && (temp_a0 != 0x80)) || (*(s32 *)((u8 *)temp_t3 + 0x32C) != 0)) {
        *(s32 *)((u8 *)temp_t3 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x550) + 1);
    }
    temp_v1_2 = arg1 & ~3;
    temp_v1_3 = temp_v1_2 + 1;
    temp_a2 = (arg1 - temp_v1_2) * 8;
    temp_v1_4 = temp_v1_3 + 1;
    temp_v1_5 = temp_v1_4 + 1;
    temp_v1_6 = temp_v1_5 + 1;
    temp_v1_7 = temp_v1_6 + 1;
    temp_v1_8 = temp_v1_7 + 1;
    temp_v1 = temp_a2 + (((temp_v1_8 + 1 + 1 + 4) - arg1) * 8);
    temp_v0 = temp_v1 - 0x39;
    temp_t2 = ((((((*(s8 *)((u8 *)temp_v1_2 + 0) << 8) | *(u8 *)((u8 *)temp_v1_2 + 1)) << 8) | *(u8 *)((u8 *)temp_v1_3 + 1)) << 8) | *(u8 *)((u8 *)temp_v1_4 + 1)) << temp_a2;
    if (temp_a2 != 0) {
        *(s32 *)((u8 *)temp_t3 + 0x2C) = (s32) (temp_t2 | ((u32) ((((((*(s8 *)((u8 *)temp_v1_5 + 1) << 8) | *(u8 *)((u8 *)temp_v1_6 + 1)) << 8) | *(u8 *)((u8 *)temp_v1_7 + 1)) << 8) | *(u8 *)((u8 *)temp_v1_8 + 1)) >> -temp_a2));
    } else {
        *(s32 *)((u8 *)temp_t3 + 0x2C) = temp_t2;
    }
    *(s32 *)((u8 *)temp_t3 + 0x32C) = 0;
    *(s32 *)((u8 *)temp_t3 + 0x328) = 0;
    return arg1 + ((s32) ((temp_v0 < 0) int (temp_v1 - 0x32) : temp_v0) >> 3);
}
