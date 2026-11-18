/* Draft (not built): func_001743C8 at 0x001743C8, size 0x218, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001743C8.c:90: parse error before ')' token
 * Original: asm/nonmatchings/cri/mpv/func_001743C8.s */

s32 func_001745E0(s32, s32, s32, u32);          /* extern */

s32 func_001743C8(s32 arg0, s32 arg1) {
    s32 temp_a3_2;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_s1;
    u32 temp_a3;
    u32 var_a3;
    u32 var_t0;
    u32 var_v1;
    u8 temp_v0_2;
    u8 *temp_s0_10;
    u8 *temp_s0_11;
    u8 *temp_s0_12;
    u8 *temp_s0_13;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s0_5;
    u8 *temp_s0_6;
    u8 *temp_s0_7;
    u8 *temp_s0_8;
    u8 *temp_s0_9;
    u8 *temp_t1;
    u8 *var_s0;

    temp_t1 = arg0 + 0x158;
    temp_v1_2 = *(s32 *)((u8 *)temp_t1 + 0x328);
    *(s32 *)((u8 *)temp_t1 + 0x4F0) = (s32) (*(s32 *)((u8 *)temp_t1 + 0x4F0) + 1);
    if (((temp_v1_2 != 0) && (temp_v1_2 != 0x20)) || (*(s32 *)((u8 *)temp_t1 + 0x32C) != 0)) {
        *(s32 *)((u8 *)temp_t1 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t1 + 0x550) + 1);
    }
    temp_s0 = arg1 & ~3;
    temp_s0_2 = temp_s0 + 1;
    var_s1 = (arg1 - temp_s0) * 8;
    temp_s0_3 = temp_s0_2 + 1;
    temp_s0_4 = temp_s0_3 + 1;
    temp_s0_5 = temp_s0_4 + 1;
    temp_s0_6 = temp_s0_5 + 1;
    temp_s0_7 = temp_s0_6 + 1;
    temp_s0_8 = temp_s0_7 + 1;
    temp_s0_9 = temp_s0_8 + 1;
    temp_a3 = (((((*(s8 *)((u8 *)temp_s0_4 + 1) << 8) | *(u8 *)((u8 *)temp_s0_5 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_6 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_7 + 1);
    temp_t0 = ((((((*(s8 *)((u8 *)temp_s0 + 0) << 8) | *(u8 *)((u8 *)temp_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_2 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_3 + 1)) << var_s1;
    if (var_s1 != 0) {
        var_t0 = temp_a3 << var_s1;
        *(s32 *)((u8 *)temp_t1 + 0x30) = (s32) (temp_t0 | (temp_a3 >> -var_s1));
    } else {
        *(s32 *)((u8 *)temp_t1 + 0x30) = temp_t0;
        var_t0 = temp_a3;
    }
    temp_s0_10 = temp_s0_9 + 1;
    temp_s0_11 = temp_s0_10 + 1;
    var_s0 = temp_s0_11 + 1 + 1;
    var_a3 = (((((*(s8 *)((u8 *)temp_s0_8 + 1) << 8) | *(u8 *)((u8 *)temp_s0_9 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_10 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_11 + 1);
    var_a2 = 0;
loop_10:
    if (var_a2 <= 0xFFFFF) {
        var_v1 = var_t0 >> 8;
        var_t0 <<= 8;
        if (var_s1 >= 9) {
            var_v1 |= var_a3 >> (0x28 - var_s1);
        }
        if (var_v1 != 1) {
            var_s1 += 8;
            var_a2 += 1;
            if (var_s1 >= 0x20) {
                var_s1 -= 0x20;
                var_t0 = var_a3 << var_s1;
                temp_s0_12 = var_s0 + 1;
                temp_s0_13 = temp_s0_12 + 1;
                temp_v0_2 = *(u8 *)((u8 *)temp_s0_13 + 1);
                temp_a3_2 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_12 + 1);
                var_s0 = temp_s0_13 + 1 + 1;
                var_a3 = (temp_a3_2 << 8) | temp_v0_2;
            }
            goto loop_10;
        }
    }
    func_001745E0(arg0, arg1, var_a2 + 4, var_a3);
    temp_v1 = var_s1 + ((var_s0 - arg1) * 8);
    temp_v0 = temp_v1 - 0x39;
    return arg1 + ((s32) ((temp_v0 < 0) int (temp_v1 - 0x32) : temp_v0) >> 3);
}
