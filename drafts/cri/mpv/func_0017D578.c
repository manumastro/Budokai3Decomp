/* Draft (not built): func_0017D578 at 0x0017D578, size 0x5A0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017D578.c:264: warning: passing arg 2 of `func_0016F050' makes integer from pointer without a cast
 * Original: asm/nonmatchings/cri/mpv/func_0017D578.s */

s32 func_0016F050(s32, s32, s32, void *);       /* extern */

s32 func_0017D578(u8 *arg0, u8 **arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a2_6;
    s32 temp_a2_7;
    s32 temp_a2_8;
    s32 temp_a2_9;
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_t1_4;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_v0;
    u32 temp_a2;
    u32 temp_a3;
    u32 temp_t2;
    u32 var_a0;
    u32 var_a0_2;
    u32 var_a0_3;
    u32 var_a2;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_a3_3;
    u32 var_a3_4;
    u32 var_a3_5;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 *temp_t0_10;
    u8 *temp_t0_11;
    u8 *temp_t0_12;
    u8 *temp_t0_13;
    u8 *temp_t0_14;
    u8 *temp_t0_15;
    u8 *temp_t0_16;
    u8 *temp_t0_17;
    u8 *temp_t0_18;
    u8 *temp_t0_19;
    u8 *temp_t0_20;
    u8 *temp_t0_21;
    u8 *temp_t0_22;
    u8 *temp_t0_23;
    u8 *temp_t0_24;
    u8 *temp_t0_25;
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t0_9;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_t1_3;
    u8 *var_t0;

    temp_s2 = arg0 + 0x388;
    *(s32 *)((u8 *)arg0 + 0x3B4) = 3;
    (*(s32 (**)(u8 **, s32, s32, s32))((u8 *)(*arg1) + 0x18))(arg1, 1, 0x7FFFFFFF, temp_s2);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x388);
    temp_t1 = arg0 + 0x1D0;
    temp_t0 = temp_v1 & ~3;
    temp_t0_2 = temp_t0 + 4;
    temp_t0_3 = temp_t0_2 + 1;
    temp_t0_4 = temp_t0_3 + 1;
    temp_t0_5 = temp_t0_4 + 1;
    temp_a1 = (temp_v1 - temp_t0) * 8;
    temp_t0_6 = temp_t0_5 + 1;
    temp_a2 = (((((*(s8 *)((u8 *)temp_t0 + 4) << 8) | *(u8 *)((u8 *)temp_t0_2 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_3 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_4 + 1);
    temp_t0_7 = temp_t0_6 + 1;
    temp_a3 = ((temp_a1 ^ 0) != 0) int (temp_a2 << temp_a1) : temp_a2;
    temp_t0_8 = temp_t0_7 + 1;
    temp_t0_9 = temp_t0_8 + 1;
    var_t0 = temp_t0_9 + 1;
    var_a2 = (((((*(s8 *)((u8 *)temp_t0_5 + 1) << 8) | *(u8 *)((u8 *)temp_t0_6 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_7 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_8 + 1);
    if (temp_a1 >= 0x16) {
        var_a1 = temp_a1 - 0x16;
        if (var_a1 != 0) {
            var_a3 = var_a2 << var_a1;
            *(u32 *)((u8 *)temp_t1 + 0x14) = (u32) ((u32) (temp_a3 | (var_a2 >> (0xA - var_a1))) >> 0x16);
        } else {
            var_a3 = var_a2;
            *(u32 *)((u8 *)temp_t1 + 0x14) = (u32) (temp_a3 >> 0x16);
        }
        temp_t0_10 = var_t0 + 1;
        temp_t0_11 = temp_t0_10 + 1;
        temp_v0 = *(u8 *)((u8 *)temp_t0_11 + 1);
        temp_a2_2 = (((*(s8 *)((u8 *)temp_t0_9 + 1) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_10 + 1);
        var_t0 = temp_t0_11 + 1 + 1;
        var_a2 = (temp_a2_2 << 8) | temp_v0;
    } else {
        var_a3 = temp_a3 << 0xA;
        *(u32 *)((u8 *)temp_t1 + 0x14) = (u32) (temp_a3 >> 0x16);
        var_a1 = temp_a1 + 0xA;
    }
    var_a0 = var_a3 >> 0x1D;
    if (var_a1 >= 0x1D) {
        var_a1_2 = var_a1 - 0x1D;
        if (var_a1_2 != 0) {
            var_a0 = (u32) (var_a3 | (var_a2 >> (3 - var_a1_2))) >> 0x1D;
            var_a3_2 = var_a2 << var_a1_2;
        } else {
            var_a3_2 = var_a2;
        }
        temp_t0_12 = var_t0 + 1;
        temp_t0_13 = temp_t0_12 + 1;
        temp_v0_2 = *(u8 *)((u8 *)temp_t0_13 + 1);
        temp_a2_3 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_12 + 1);
        var_t0 = temp_t0_13 + 1 + 1;
        var_a2 = (temp_a2_3 << 8) | temp_v0_2;
    } else {
        var_a3_2 = var_a3 * 8;
        var_a1_2 = var_a1 + 3;
    }
    *(u32 *)((u8 *)temp_t1 + 0x18) = var_a0;
    if (var_a1_2 >= 0x10) {
        var_a1_3 = var_a1_2 - 0x10;
        if (var_a1_3 != 0) {
            var_a3_3 = var_a2 << var_a1_3;
            *(u32 *)((u8 *)arg0 + 0x2BC) = (u32) ((u32) (var_a3_2 | (var_a2 >> (0x10 - var_a1_3))) >> 0x10);
        } else {
            var_a3_3 = var_a2;
            *(u32 *)((u8 *)arg0 + 0x2BC) = (u32) (var_a3_2 >> 0x10);
        }
        temp_t0_14 = var_t0 + 1;
        temp_t0_15 = temp_t0_14 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_t0_15 + 1);
        temp_a2_4 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_14 + 1);
        var_t0 = temp_t0_15 + 1 + 1;
        var_a2 = (temp_a2_4 << 8) | temp_v0_3;
    } else {
        var_a3_3 = var_a3_2 << 0x10;
        *(u32 *)((u8 *)arg0 + 0x2BC) = (u32) (var_a3_2 >> 0x10);
        var_a1_3 = var_a1_2 + 0x10;
    }
    temp_t2 = *(u32 *)((u8 *)temp_t1 + 0x18);
    if ((u32) (temp_t2 - 2) < 2U) {
        temp_t1_2 = arg0 + 0x2EC;
        *(u32 *)((u8 *)arg0 + 0x2EC) = (u32) (var_a3_3 >> 0x1F);
        if (var_a1_3 == 0x1F) {
            var_a3_4 = var_a2;
            temp_t0_16 = var_t0 + 1;
            var_a1_4 = 0;
            temp_t0_17 = temp_t0_16 + 1;
            temp_v0_4 = *(u8 *)((u8 *)temp_t0_17 + 1);
            temp_a2_5 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_16 + 1);
            var_t0 = temp_t0_17 + 1 + 1;
            var_a2 = (temp_a2_5 << 8) | temp_v0_4;
        } else {
            var_a1_4 = var_a1_3 + 1;
            var_a3_4 = var_a3_3 * 2;
        }
        var_a0_2 = var_a3_4 >> 0x1D;
        if (var_a1_4 >= 0x1D) {
            var_a1_3 = var_a1_4 - 0x1D;
            if (var_a1_3 != 0) {
                var_a0_2 = (u32) (var_a3_4 | (var_a2 >> (3 - var_a1_3))) >> 0x1D;
                var_a3_3 = var_a2 << var_a1_3;
            } else {
                var_a3_3 = var_a2;
            }
            temp_t0_18 = var_t0 + 1;
            temp_t0_19 = temp_t0_18 + 1;
            temp_v0_5 = *(u8 *)((u8 *)temp_t0_19 + 1);
            temp_a2_6 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_18 + 1);
            var_t0 = temp_t0_19 + 1 + 1;
            var_a2 = (temp_a2_6 << 8) | temp_v0_5;
        } else {
            var_a3_3 = var_a3_4 * 8;
            var_a1_3 = var_a1_4 + 3;
        }
        temp_a0 = var_a0_2 - 1;
        *(s32 *)((u8 *)temp_t1_2 + 8) = (s32) (0x1B - temp_a0);
        *(s32 *)((u8 *)temp_t1_2 + 0xC) = (s32) (1 << temp_a0);
        *(s32 *)((u8 *)temp_t1_2 + 4) = temp_a0;
    }
    if (temp_t2 == 3) {
        temp_t1_3 = arg0 + 0x310;
        *(u32 *)((u8 *)arg0 + 0x310) = (u32) (var_a3_3 >> 0x1F);
        if (var_a1_3 == 0x1F) {
            var_a3_5 = var_a2;
            temp_t0_20 = var_t0 + 1;
            var_a1_5 = 0;
            temp_t0_21 = temp_t0_20 + 1;
            temp_v0_6 = *(u8 *)((u8 *)temp_t0_21 + 1);
            temp_a2_7 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_20 + 1);
            var_t0 = temp_t0_21 + 1 + 1;
            var_a2 = (temp_a2_7 << 8) | temp_v0_6;
        } else {
            var_a1_5 = var_a1_3 + 1;
            var_a3_5 = var_a3_3 * 2;
        }
        var_a0_3 = var_a3_5 >> 0x1D;
        if (var_a1_5 >= 0x1D) {
            var_a1_3 = var_a1_5 - 0x1D;
            if (var_a1_3 != 0) {
                var_a0_3 = (u32) (var_a3_5 | (var_a2 >> (3 - var_a1_3))) >> 0x1D;
                var_a3_3 = var_a2 << var_a1_3;
            } else {
                var_a3_3 = var_a2;
            }
            temp_t0_22 = var_t0 + 1;
            temp_t0_23 = temp_t0_22 + 1;
            temp_v0_7 = *(u8 *)((u8 *)temp_t0_23 + 1);
            temp_a2_8 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_22 + 1);
            var_t0 = temp_t0_23 + 1 + 1;
            var_a2 = (temp_a2_8 << 8) | temp_v0_7;
        } else {
            var_a3_3 = var_a3_5 * 8;
            var_a1_3 = var_a1_5 + 3;
        }
        temp_a0_2 = var_a0_3 - 1;
        *(s32 *)((u8 *)temp_t1_3 + 8) = (s32) (0x1B - temp_a0_2);
        *(s32 *)((u8 *)temp_t1_3 + 0xC) = (s32) (1 << temp_a0_2);
        *(s32 *)((u8 *)temp_t1_3 + 4) = temp_a0_2;
    }
    *(s32 *)((u8 *)arg0 + 0x2D4) = (s32) *(s32 *)((u8 *)arg0 + 0x2DC);
    temp_t1_4 = *(s32 *)((u8 *)arg0 + 0x388);
loop_51:
    if ((s32) var_a3_3 < 0) {
        var_a1_3 += 9;
        if (var_a1_3 < 0x20) {
            var_a3_3 <<= 9;
        } else {
            var_a1_3 -= 0x20;
            var_a3_3 = var_a2 << var_a1_3;
            temp_t0_24 = var_t0 + 1;
            temp_t0_25 = temp_t0_24 + 1;
            temp_v0_8 = *(u8 *)((u8 *)temp_t0_25 + 1);
            temp_a2_9 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_24 + 1);
            var_t0 = temp_t0_25 + 1 + 1;
            var_a2 = (temp_a2_9 << 8) | temp_v0_8;
        }
        var_v0 = -3;
        if ((((var_t0 + ((s32) (var_a1_3 + 7) >> 3)) - 8) - temp_t1_4) < *(s32 *)((u8 *)arg0 + 0x38C)) {
            goto loop_51;
        }
    } else {
        var_a1_6 = var_a1_3 + 1;
        if (var_a1_6 >= 0x20) {
            var_a1_6 -= 0x20;
            var_t0 += 4;
        }
        func_0016F050(temp_s2, ((var_t0 + ((s32) (var_a1_6 + 7) >> 3)) - 8) - temp_t1_4, temp_s2, sp);
        (*(s32 (**)(u8 **, s32, s32))((u8 *)(*arg1) + 0x20))(arg1, 0, temp_s2);
        (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
        var_v0 = 0;
    }
    return var_v0;
}
