/* Draft (not built): func_0017D308 at 0x0017D308, size 0x26C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017D308.c:101: warning: passing arg 2 of `func_0016F050' makes integer from pointer without a cast
 * Original: asm/nonmatchings/cri/mpv/func_0017D308.s */

s32 func_0016F050(s32, s32, s32, void *);       /* extern */

s32 func_0017D308(u8 *arg0, u8 **arg1) {
    s32 temp_s3;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v1;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t3_3;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_t1;
    u32 temp_t4;
    u32 var_a0;
    u32 var_t1;
    u32 var_t4;
    u32 var_t4_2;
    u8 temp_v0;
    u8 *temp_s0;
    u8 *temp_t2_10;
    u8 *temp_t2_11;
    u8 *temp_t2_2;
    u8 *temp_t2_3;
    u8 *temp_t2_4;
    u8 *temp_t2_5;
    u8 *temp_t2_6;
    u8 *temp_t2_7;
    u8 *temp_t2_8;
    u8 *temp_t2_9;
    u8 *var_t2;

    temp_s3 = arg0 + 0x388;
    temp_s0 = arg0 + 0x1D0;
    *(s32 *)((u8 *)arg0 + 0x3B4) = 2;
    *(s32 *)((u8 *)temp_s0 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x30) + 1);
    (*(s32 (**)(u8 **, s32, s32, s32))((u8 *)(*arg1) + 0x18))(arg1, 1, 0x7FFFFFFF, temp_s3);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x388);
    temp_t2 = temp_v1 & ~3;
    temp_t2_2 = temp_t2 + 4;
    temp_t2_3 = temp_t2_2 + 1;
    temp_t2_4 = temp_t2_3 + 1;
    temp_t2_5 = temp_t2_4 + 1;
    temp_t3 = (temp_v1 - temp_t2) * 8;
    temp_t2_6 = temp_t2_5 + 1;
    temp_t1 = (((((*(s8 *)((u8 *)temp_t2 + 4) << 8) | *(u8 *)((u8 *)temp_t2_2 + 1)) << 8) | *(u8 *)((u8 *)temp_t2_3 + 1)) << 8) | *(u8 *)((u8 *)temp_t2_4 + 1);
    temp_t2_7 = temp_t2_6 + 1;
    temp_t4 = ((temp_t3 ^ 0) != 0) int (temp_t1 << temp_t3) : temp_t1;
    temp_t2_8 = temp_t2_7 + 1;
    temp_t2_9 = temp_t2_8 + 1;
    var_t2 = temp_t2_9 + 1;
    var_t1 = (((((*(s8 *)((u8 *)temp_t2_5 + 1) << 8) | *(u8 *)((u8 *)temp_t2_6 + 1)) << 8) | *(u8 *)((u8 *)temp_t2_7 + 1)) << 8) | *(u8 *)((u8 *)temp_t2_8 + 1);
    if (temp_t3 >= 7) {
        var_t3 = temp_t3 - 7;
        if (var_t3 != 0) {
            var_a0 = (u32) (temp_t4 | (var_t1 >> (0x19 - var_t3))) >> 7;
            var_t4 = var_t1 << var_t3;
        } else {
            var_a0 = temp_t4 >> 7;
            var_t4 = var_t1;
        }
        temp_t2_10 = var_t2 + 1;
        temp_t2_11 = temp_t2_10 + 1;
        temp_v0 = *(u8 *)((u8 *)temp_t2_11 + 1);
        temp_t1_2 = (((*(s8 *)((u8 *)temp_t2_9 + 1) << 8) | *(u8 *)((u8 *)var_t2 + 1)) << 8) | *(u8 *)((u8 *)temp_t2_10 + 1);
        var_t2 = temp_t2_11 + 1 + 1;
        var_t1 = (temp_t1_2 << 8) | temp_v0;
    } else {
        var_a0 = temp_t4 >> 7;
        var_t4 = temp_t4 << 0x19;
        var_t3 = temp_t3 + 0x19;
    }
    temp_a0 = var_a0 >> 6;
    temp_a0_2 = temp_a0 >> 7;
    temp_a0_3 = temp_a0_2 >> 6;
    *(u32 *)((u8 *)temp_s0 + 0x1C) = (u32) (temp_a0_3 >> 5);
    *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) (var_a0 & 0x3F);
    *(s32 *)((u8 *)temp_s0 + 0x28) = (s32) (temp_a0 & 0x3F);
    *(s32 *)((u8 *)temp_s0 + 0x24) = (s32) (temp_a0_2 & 0x3F);
    *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) (temp_a0_3 & 0x1F);
    *(u32 *)((u8 *)arg0 + 0x2B4) = (u32) (var_t4 >> 0x1F);
    if (var_t3 == 0x1F) {
        var_t4_2 = var_t1;
        var_t3_2 = 0;
        var_t2 += 4;
    } else {
        var_t3_2 = var_t3 + 1;
        var_t4_2 = var_t4 * 2;
    }
    *(u32 *)((u8 *)arg0 + 0x2B8) = (u32) (var_t4_2 >> 0x1F);
    if (var_t3_2 == 0x1F) {
        var_t3_3 = 0;
        var_t2 += 4;
    } else {
        var_t3_3 = var_t3_2 + 1;
    }
    func_0016F050(temp_s3, ((var_t2 + ((s32) (var_t3_3 + 7) >> 3)) - 8) - *(s32 *)((u8 *)arg0 + 0x388), temp_s3, sp);
    (*(s32 (**)(u8 **, s32, s32))((u8 *)(*arg1) + 0x20))(arg1, 0, temp_s3);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
    return 0;
}
