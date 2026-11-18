/* Draft (not built): func_0017CC50 at 0x0017CC50, size 0x6B8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017CC50.c:322: warning: passing arg 2 of `func_0016F050' makes integer from pointer without a cast
 * Original: asm/nonmatchings/cri/mpv/func_0017CC50.s */

s32 func_0016F050(s32, s32, s32, void *);       /* extern */

s32 func_0017CC50(u8 *arg0, u8 **arg1) {
    s32 temp_a1_10;
    s32 temp_a1_11;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a1_9;
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_t0;
    s32 temp_v0_11;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_t0;
    s32 var_t0_10;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t0_4;
    s32 var_t0_5;
    s32 var_t0_6;
    s32 var_t0_7;
    s32 var_t0_8;
    s32 var_t0_9;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a1;
    u32 temp_a3;
    u32 var_a0;
    u32 var_a1;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_a3_3;
    u32 var_a3_4;
    u32 var_a3_5;
    u32 var_a3_6;
    u32 var_a3_7;
    u32 var_a3_8;
    u32 var_a3_9;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 temp_v1_2;
    u8 *temp_a2_10;
    u8 *temp_a2_11;
    u8 *temp_a2_12;
    u8 *temp_a2_13;
    u8 *temp_a2_14;
    u8 *temp_a2_15;
    u8 *temp_a2_16;
    u8 *temp_a2_17;
    u8 *temp_a2_18;
    u8 *temp_a2_19;
    u8 *temp_a2_20;
    u8 *temp_a2_21;
    u8 *temp_a2_22;
    u8 *temp_a2_23;
    u8 *temp_a2_24;
    u8 *temp_a2_25;
    u8 *temp_a2_26;
    u8 *temp_a2_27;
    u8 *temp_a2_28;
    u8 *temp_a2_29;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a2_5;
    u8 *temp_a2_6;
    u8 *temp_a2_7;
    u8 *temp_a2_8;
    u8 *temp_a2_9;
    u8 *temp_s1;
    u8 *var_a2;

    temp_s1 = arg0 + 0x1D0;
    temp_s3 = arg0 + 0x388;
    *(s32 *)((u8 *)arg0 + 0x3B4) = 1;
    *(s32 *)((u8 *)temp_s1 + 0x34) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x34) + 1);
    (*(s32 (**)(u8 **, s32, s32, s32))((u8 *)(*arg1) + 0x18))(arg1, 1, 0x7FFFFFFF, temp_s3);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x388);
    temp_a2 = temp_v1 & ~3;
    temp_a2_2 = temp_a2 + 4;
    temp_a2_3 = temp_a2_2 + 1;
    temp_a2_4 = temp_a2_3 + 1;
    temp_a2_5 = temp_a2_4 + 1;
    temp_t0 = (temp_v1 - temp_a2) * 8;
    temp_a2_6 = temp_a2_5 + 1;
    temp_a1 = (((((*(s8 *)((u8 *)temp_a2 + 4) << 8) | *(u8 *)((u8 *)temp_a2_2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_3 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_4 + 1);
    temp_a2_7 = temp_a2_6 + 1;
    temp_a3 = ((temp_t0 ^ 0) != 0) int (temp_a1 << temp_t0) : temp_a1;
    temp_a2_8 = temp_a2_7 + 1;
    temp_a2_9 = temp_a2_8 + 1;
    var_a2 = temp_a2_9 + 1;
    var_a1 = (((((*(s8 *)((u8 *)temp_a2_5 + 1) << 8) | *(u8 *)((u8 *)temp_a2_6 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_7 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_8 + 1);
    if (temp_t0 >= 0x14) {
        var_t0 = temp_t0 - 0x14;
        if (var_t0 != 0) {
            var_a3 = var_a1 << var_t0;
            *(u32 *)((u8 *)arg0 + 0x1D0) = (u32) ((u32) (temp_a3 | (var_a1 >> (0xC - var_t0))) >> 0x14);
        } else {
            var_a3 = var_a1;
            *(u32 *)((u8 *)arg0 + 0x1D0) = (u32) (temp_a3 >> 0x14);
        }
        temp_a2_10 = var_a2 + 1;
        temp_a2_11 = temp_a2_10 + 1;
        temp_v0 = *(u8 *)((u8 *)temp_a2_11 + 1);
        temp_a1_2 = (((*(s8 *)((u8 *)temp_a2_9 + 1) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_10 + 1);
        var_a2 = temp_a2_11 + 1 + 1;
        var_a1 = (temp_a1_2 << 8) | temp_v0;
    } else {
        var_a3 = temp_a3 << 0xC;
        *(u32 *)((u8 *)arg0 + 0x1D0) = (u32) (temp_a3 >> 0x14);
        var_t0 = temp_t0 + 0xC;
    }
    if (var_t0 >= 0x14) {
        var_t0_2 = var_t0 - 0x14;
        if (var_t0_2 != 0) {
            var_a3_2 = var_a1 << var_t0_2;
            *(u32 *)((u8 *)temp_s1 + 4) = (u32) ((u32) (var_a3 | (var_a1 >> (0xC - var_t0_2))) >> 0x14);
        } else {
            var_a3_2 = var_a1;
            *(u32 *)((u8 *)temp_s1 + 4) = (u32) (var_a3 >> 0x14);
        }
        temp_a2_12 = var_a2 + 1;
        temp_a2_13 = temp_a2_12 + 1;
        temp_v0_2 = *(u8 *)((u8 *)temp_a2_13 + 1);
        temp_a1_3 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_12 + 1);
        var_a2 = temp_a2_13 + 1 + 1;
        var_a1 = (temp_a1_3 << 8) | temp_v0_2;
    } else {
        var_a3_2 = var_a3 << 0xC;
        *(u32 *)((u8 *)temp_s1 + 4) = (u32) (var_a3 >> 0x14);
        var_t0_2 = var_t0 + 0xC;
    }
    if (var_t0_2 >= 0x1C) {
        var_t0_3 = var_t0_2 - 0x1C;
        if (var_t0_3 != 0) {
            var_a3_3 = var_a1 << var_t0_3;
            *(u32 *)((u8 *)arg0 + 0x2A4) = (u32) ((u32) (var_a3_2 | (var_a1 >> (4 - var_t0_3))) >> 0x1C);
        } else {
            var_a3_3 = var_a1;
            *(u32 *)((u8 *)arg0 + 0x2A4) = (u32) (var_a3_2 >> 0x1C);
        }
        temp_a2_14 = var_a2 + 1;
        temp_a2_15 = temp_a2_14 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_a2_15 + 1);
        temp_a1_4 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_14 + 1);
        var_a2 = temp_a2_15 + 1 + 1;
        var_a1 = (temp_a1_4 << 8) | temp_v0_3;
    } else {
        var_a3_3 = var_a3_2 * 0x10;
        *(u32 *)((u8 *)arg0 + 0x2A4) = (u32) (var_a3_2 >> 0x1C);
        var_t0_3 = var_t0_2 + 4;
    }
    var_a0 = var_a3_3 >> 0x1C;
    if (var_t0_3 >= 0x1C) {
        var_t0_4 = var_t0_3 - 0x1C;
        if (var_t0_4 != 0) {
            var_a0 = (u32) (var_a3_3 | (var_a1 >> (4 - var_t0_4))) >> 0x1C;
            var_a3_4 = var_a1 << var_t0_4;
        } else {
            var_a3_4 = var_a1;
        }
        temp_a2_16 = var_a2 + 1;
        temp_a2_17 = temp_a2_16 + 1;
        temp_v0_4 = *(u8 *)((u8 *)temp_a2_17 + 1);
        temp_a1_5 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_16 + 1);
        var_a2 = temp_a2_17 + 1 + 1;
        var_a1 = (temp_a1_5 << 8) | temp_v0_4;
    } else {
        var_a3_4 = var_a3_3 * 0x10;
        var_t0_4 = var_t0_3 + 4;
    }
    *(u32 *)((u8 *)temp_s1 + 0x10) = var_a0;
    if (var_t0_4 >= 0xE) {
        var_t0_5 = var_t0_4 - 0xE;
        if (var_t0_5 != 0) {
            var_a3_5 = var_a1 << var_t0_5;
            *(u32 *)((u8 *)arg0 + 0x2A8) = (u32) ((u32) (var_a3_4 | (var_a1 >> (0x12 - var_t0_5))) >> 0xE);
        } else {
            var_a3_5 = var_a1;
            *(u32 *)((u8 *)arg0 + 0x2A8) = (u32) (var_a3_4 >> 0xE);
        }
        temp_a2_18 = var_a2 + 1;
        temp_a2_19 = temp_a2_18 + 1;
        temp_v0_5 = *(u8 *)((u8 *)temp_a2_19 + 1);
        temp_a1_6 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_18 + 1);
        var_a2 = temp_a2_19 + 1 + 1;
        var_a1 = (temp_a1_6 << 8) | temp_v0_5;
    } else {
        var_a3_5 = var_a3_4 << 0x12;
        *(u32 *)((u8 *)arg0 + 0x2A8) = (u32) (var_a3_4 >> 0xE);
        var_t0_5 = var_t0_4 + 0x12;
    }
    var_t0_6 = var_t0_5 + 1;
    if (var_t0_6 < 0x20) {
        var_a3_6 = var_a3_5 * 2;
    } else {
        var_t0_6 -= 0x20;
        var_a3_6 = var_a1 << var_t0_6;
        temp_a2_20 = var_a2 + 1;
        temp_a2_21 = temp_a2_20 + 1;
        temp_v0_6 = *(u8 *)((u8 *)temp_a2_21 + 1);
        temp_a1_7 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_20 + 1);
        var_a2 = temp_a2_21 + 1 + 1;
        var_a1 = (temp_a1_7 << 8) | temp_v0_6;
    }
    if (var_t0_6 >= 0x16) {
        var_t0_7 = var_t0_6 - 0x16;
        if (var_t0_7 != 0) {
            var_a3_7 = var_a1 << var_t0_7;
            *(u32 *)((u8 *)arg0 + 0x2AC) = (u32) ((u32) (var_a3_6 | (var_a1 >> (0xA - var_t0_7))) >> 0x16);
        } else {
            var_a3_7 = var_a1;
            *(u32 *)((u8 *)arg0 + 0x2AC) = (u32) (var_a3_6 >> 0x16);
        }
        temp_a2_22 = var_a2 + 1;
        temp_a2_23 = temp_a2_22 + 1;
        temp_v0_7 = *(u8 *)((u8 *)temp_a2_23 + 1);
        temp_a1_8 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_22 + 1);
        var_a2 = temp_a2_23 + 1 + 1;
        var_a1 = (temp_a1_8 << 8) | temp_v0_7;
    } else {
        var_a3_7 = var_a3_6 << 0xA;
        *(u32 *)((u8 *)arg0 + 0x2AC) = (u32) (var_a3_6 >> 0x16);
        var_t0_7 = var_t0_6 + 0xA;
    }
    *(u32 *)((u8 *)arg0 + 0x2B0) = (u32) (var_a3_7 >> 0x1F);
    if (var_t0_7 == 0x1F) {
        var_a3_8 = var_a1;
        temp_a2_24 = var_a2 + 1;
        var_t0_8 = 0;
        temp_a2_25 = temp_a2_24 + 1;
        temp_v0_8 = *(u8 *)((u8 *)temp_a2_25 + 1);
        temp_a1_9 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_24 + 1);
        var_a2 = temp_a2_25 + 1 + 1;
        var_a1 = (temp_a1_9 << 8) | temp_v0_8;
    } else {
        var_t0_8 = var_t0_7 + 1;
        var_a3_8 = var_a3_7 * 2;
    }
    if (var_t0_8 == 0x1F) {
        var_a3_9 = var_a1;
        temp_a2_26 = var_a2 + 1;
        var_t0_9 = 0;
        temp_a2_27 = temp_a2_26 + 1;
        temp_v0_9 = *(u8 *)((u8 *)temp_a2_27 + 1);
        temp_a1_10 = (((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8) | *(u8 *)((u8 *)temp_a2_26 + 1);
        var_a2 = temp_a2_27 + 1 + 1;
        var_a1 = (temp_a1_10 << 8) | temp_v0_9;
    } else {
        var_t0_9 = var_t0_8 + 1;
        var_a3_9 = var_a3_8 * 2;
    }
    var_a0_2 = 0x3F;
    if ((var_a3_8 >> 0x1F) != 0) {
        var_v0 = var_t0_9 < 0x18;
        do {
            if (var_v0 != 0) {
                var_t0_9 += 8;
                var_a3_9 <<= 8;
            } else {
                var_t0_9 -= 0x18;
                temp_a2_28 = var_a2 + 1;
                var_a3_9 = ((var_t0_9 ^ 0) != 0) int (var_a1 << var_t0_9) : var_a1;
                temp_a2_29 = temp_a2_28 + 1;
                temp_v1_2 = *(u8 *)((u8 *)temp_a2_28 + 1);
                temp_v0_10 = *(u8 *)((u8 *)temp_a2_29 + 1);
                temp_a1_11 = ((*(s8 *)((u8 *)var_a2 + 0) << 8) | *(u8 *)((u8 *)var_a2 + 1)) << 8;
                var_a2 = temp_a2_29 + 1 + 1;
                var_a1 = ((temp_a1_11 | temp_v1_2) << 8) | temp_v0_10;
            }
            var_a0_2 -= 1;
            var_v0 = var_t0_9 < 0x18;
        } while (var_a0_2 >= 0);
    }
    if (var_t0_9 == 0x1F) {
        var_t0_10 = 0;
        var_a2 += 4;
    } else {
        var_t0_10 = var_t0_9 + 1;
    }
    var_a0_3 = 0x3F;
    if ((var_a3_9 >> 0x1F) != 0) {
        var_v0_2 = var_t0_10 < 0x18;
        do {
            if (var_v0_2 != 0) {
                var_t0_10 += 8;
            } else {
                var_t0_10 -= 0x18;
                var_a2 += 4;
            }
            var_a0_3 -= 1;
            var_v0_2 = var_t0_10 < 0x18;
        } while (var_a0_3 >= 0);
    }
    temp_v0_11 = (s32) (*(u32 *)((u8 *)arg0 + 0x1D0) + 0xF) >> 4;
    temp_v1_3 = (s32) (*(u32 *)((u8 *)temp_s1 + 4) + 0xF) >> 4;
    *(s32 *)((u8 *)temp_s1 + 8) = temp_v0_11;
    *(s32 *)((u8 *)temp_s1 + 0xC) = temp_v1_3;
    *(s32 *)((u8 *)arg0 + 0x340) = (s32) ((temp_v1_3 * temp_v0_11) - 1);
    *(u32 *)((u8 *)temp_s1 + 0x48) = (u32) *(u32 *)((u8 *)arg0 + 0x2A8);
    *(u32 *)((u8 *)temp_s1 + 0x4C) = (u32) *(u32 *)((u8 *)arg0 + 0x2AC);
    *(u8 *)((u8 *)temp_s1 + 0x59) = (u8) *(u32 *)((u8 *)arg0 + 0x2A4);
    *(u8 *)((u8 *)temp_s1 + 0x5A) = (u8) *(u32 *)((u8 *)arg0 + 0x2B0);
    func_0016F050(temp_s3, ((var_a2 + ((s32) (var_t0_10 + 7) >> 3)) - 8) - *(s32 *)((u8 *)arg0 + 0x388), temp_s3, sp);
    (*(s32 (**)(u8 **, s32, s32))((u8 *)(*arg1) + 0x20))(arg1, 0, temp_s3);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
    return 0;
}
