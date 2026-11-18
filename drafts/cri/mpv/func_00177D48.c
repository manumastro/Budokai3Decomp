/* Draft (not built): func_00177D48 at 0x00177D48, size 0x6F8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00177D48.c:323: parse error before ')' token
 * Original: asm/nonmatchings/cri/mpv/func_00177D48.s */

s32 func_00177D48(s32 arg0, s32 arg1) {
    s32 *temp_a2_2;
    s32 temp_a0;
    s32 temp_a3_10;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a3_6;
    s32 temp_a3_7;
    s32 temp_a3_8;
    s32 temp_a3_9;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t2_3;
    s32 var_t2_4;
    s32 var_t2_5;
    s32 var_t2_6;
    u32 temp_a2;
    u32 temp_a3;
    u32 var_a3;
    u32 var_t1;
    u32 var_t1_2;
    u32 var_t1_3;
    u32 var_t1_4;
    u32 var_t1_5;
    u32 var_t1_6;
    u32 var_t1_7;
    u32 var_v0;
    u8 temp_v0_10;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
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
    u8 *temp_t0_26;
    u8 *temp_t0_27;
    u8 *temp_t0_28;
    u8 *temp_t0_29;
    u8 *temp_t0_2;
    u8 *temp_t0_30;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t0_9;
    u8 *temp_t3;
    u8 *var_t0;

    temp_t3 = arg0 + 0x158;
    temp_a0 = *(s32 *)((u8 *)temp_t3 + 0x328);
    *(s32 *)((u8 *)temp_t3 + 0x4DC) = 3;
    *(s32 *)((u8 *)temp_t3 + 0x4FC) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x4FC) + 1);
    if (((temp_a0 != 0) && (temp_a0 != 4)) || (*(s32 *)((u8 *)temp_t3 + 0x32C) != 0)) {
        *(s32 *)((u8 *)temp_t3 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x550) + 1);
    }
    temp_t0 = arg1 & ~3;
    temp_t0_2 = temp_t0 + 1;
    temp_t2 = (arg1 - temp_t0) * 8;
    temp_t0_3 = temp_t0_2 + 1;
    temp_t0_4 = temp_t0_3 + 1;
    temp_t0_5 = temp_t0_4 + 1;
    temp_t0_6 = temp_t0_5 + 1;
    temp_t0_7 = temp_t0_6 + 1;
    temp_t0_8 = temp_t0_7 + 1;
    temp_t0_9 = temp_t0_8 + 1;
    temp_a3 = (((((*(s8 *)((u8 *)temp_t0_4 + 1) << 8) | *(u8 *)((u8 *)temp_t0_5 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_6 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_7 + 1);
    temp_t1 = ((((((*(s8 *)((u8 *)temp_t0 + 0) << 8) | *(u8 *)((u8 *)temp_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_2 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_3 + 1)) << temp_t2;
    if (temp_t2 != 0) {
        var_t1 = temp_a3 << temp_t2;
        *(s32 *)((u8 *)temp_t3 + 0xD8) = (s32) (temp_t1 | (temp_a3 >> -temp_t2));
    } else {
        *(s32 *)((u8 *)temp_t3 + 0xD8) = temp_t1;
        var_t1 = temp_a3;
    }
    temp_t0_10 = temp_t0_9 + 1;
    temp_t0_11 = temp_t0_10 + 1;
    temp_t0_12 = temp_t0_11 + 1;
    var_t0 = temp_t0_12 + 1;
    var_a3 = (((((*(s8 *)((u8 *)temp_t0_8 + 1) << 8) | *(u8 *)((u8 *)temp_t0_9 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_10 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_11 + 1);
    if (temp_t2 >= 0x16) {
        var_t2 = temp_t2 - 0x16;
        if (var_t2 != 0) {
            var_t1_2 = var_a3 << var_t2;
            *(u32 *)((u8 *)temp_t3 + 0xDC) = (u32) ((u32) (var_t1 | (var_a3 >> (0xA - var_t2))) >> 0x16);
        } else {
            var_t1_2 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xDC) = (u32) (var_t1 >> 0x16);
        }
        temp_t0_13 = var_t0 + 1;
        temp_t0_14 = temp_t0_13 + 1;
        temp_v0_2 = *(u8 *)((u8 *)temp_t0_14 + 1);
        temp_a3_2 = (((*(s8 *)((u8 *)temp_t0_12 + 1) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_13 + 1);
        var_t0 = temp_t0_14 + 1 + 1;
        var_a3 = (temp_a3_2 << 8) | temp_v0_2;
    } else {
        var_t1_2 = var_t1 << 0xA;
        *(u32 *)((u8 *)temp_t3 + 0xDC) = (u32) (var_t1 >> 0x16);
        var_t2 = temp_t2 + 0xA;
    }
    if (var_t2 >= 0x1D) {
        var_t2_2 = var_t2 - 0x1D;
        if (var_t2_2 != 0) {
            var_t1_3 = var_a3 << var_t2_2;
            *(u32 *)((u8 *)temp_t3 + 0xE0) = (u32) ((u32) (var_t1_2 | (var_a3 >> (3 - var_t2_2))) >> 0x1D);
        } else {
            var_t1_3 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xE0) = (u32) (var_t1_2 >> 0x1D);
        }
        temp_t0_15 = var_t0 + 1;
        temp_t0_16 = temp_t0_15 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_t0_16 + 1);
        temp_a3_3 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_15 + 1);
        var_t0 = temp_t0_16 + 1 + 1;
        var_a3 = (temp_a3_3 << 8) | temp_v0_3;
    } else {
        var_t1_3 = var_t1_2 * 8;
        *(u32 *)((u8 *)temp_t3 + 0xE0) = (u32) (var_t1_2 >> 0x1D);
        var_t2_2 = var_t2 + 3;
    }
    if (var_t2_2 >= 0x10) {
        var_t2_3 = var_t2_2 - 0x10;
        if (var_t2_3 != 0) {
            var_t1_4 = var_a3 << var_t2_3;
            *(u32 *)((u8 *)temp_t3 + 0xE4) = (u32) ((u32) (var_t1_3 | (var_a3 >> (0x10 - var_t2_3))) >> 0x10);
        } else {
            var_t1_4 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xE4) = (u32) (var_t1_3 >> 0x10);
        }
        temp_t0_17 = var_t0 + 1;
        temp_t0_18 = temp_t0_17 + 1;
        temp_v0_4 = *(u8 *)((u8 *)temp_t0_18 + 1);
        temp_a3_4 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_17 + 1);
        var_t0 = temp_t0_18 + 1 + 1;
        var_a3 = (temp_a3_4 << 8) | temp_v0_4;
    } else {
        var_t1_4 = var_t1_3 << 0x10;
        *(u32 *)((u8 *)temp_t3 + 0xE4) = (u32) (var_t1_3 >> 0x10);
        var_t2_3 = var_t2_2 + 0x10;
    }
    temp_a2 = *(u32 *)((u8 *)temp_t3 + 0xE0);
    var_v0 = temp_a2 - 2;
    if ((u32) (temp_a2 - 1) >= 3U) {
        *(s32 *)((u8 *)temp_t3 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x550) + 1);
        var_v0 = temp_a2 - 2;
    }
    if (var_v0 < 2U) {
        if (var_t2_3 >= 0x1F) {
            var_t2_4 = var_t2_3 - 0x1F;
            if (var_t2_4 != 0) {
                var_t1_5 = var_a3 << var_t2_4;
                *(u32 *)((u8 *)temp_t3 + 0xE8) = (u32) ((u32) (var_t1_4 | (var_a3 >> (1 - var_t2_4))) >> 0x1F);
            } else {
                var_t1_5 = var_a3;
                *(u32 *)((u8 *)temp_t3 + 0xE8) = (u32) (var_t1_4 >> 0x1F);
            }
            temp_t0_19 = var_t0 + 1;
            temp_t0_20 = temp_t0_19 + 1;
            temp_v0_5 = *(u8 *)((u8 *)temp_t0_20 + 1);
            temp_a3_5 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_19 + 1);
            var_t0 = temp_t0_20 + 1 + 1;
            var_a3 = (temp_a3_5 << 8) | temp_v0_5;
        } else {
            var_t1_5 = var_t1_4 * 2;
            *(u32 *)((u8 *)temp_t3 + 0xE8) = (u32) (var_t1_4 >> 0x1F);
            var_t2_4 = var_t2_3 + 1;
        }
        if (var_t2_4 >= 0x1D) {
            var_t2_3 = var_t2_4 - 0x1D;
            if (var_t2_3 != 0) {
                var_t1_4 = var_a3 << var_t2_3;
                *(u32 *)((u8 *)temp_t3 + 0xEC) = (u32) ((u32) (var_t1_5 | (var_a3 >> (3 - var_t2_3))) >> 0x1D);
            } else {
                var_t1_4 = var_a3;
                *(u32 *)((u8 *)temp_t3 + 0xEC) = (u32) (var_t1_5 >> 0x1D);
            }
            temp_t0_21 = var_t0 + 1;
            temp_t0_22 = temp_t0_21 + 1;
            temp_v0_6 = *(u8 *)((u8 *)temp_t0_22 + 1);
            temp_a3_6 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_21 + 1);
            var_t0 = temp_t0_22 + 1 + 1;
            var_a3 = (temp_a3_6 << 8) | temp_v0_6;
        } else {
            var_t1_4 = var_t1_5 * 8;
            *(u32 *)((u8 *)temp_t3 + 0xEC) = (u32) (var_t1_5 >> 0x1D);
            var_t2_3 = var_t2_4 + 3;
        }
        if (*(u32 *)((u8 *)temp_t3 + 0xE8) != 0) {
            *(s32 *)((u8 *)temp_t3 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x550) + 1);
        }
        if (*(u32 *)((u8 *)temp_t3 + 0xEC) != 7) {
            *(s32 *)((u8 *)temp_t3 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x550) + 1);
        }
    }
    if (temp_a2 == 3) {
        if (var_t2_3 >= 0x1F) {
            var_t2_5 = var_t2_3 - 0x1F;
            if (var_t2_5 != 0) {
                var_t1_6 = var_a3 << var_t2_5;
                *(u32 *)((u8 *)temp_t3 + 0xF0) = (u32) ((u32) (var_t1_4 | (var_a3 >> (1 - var_t2_5))) >> 0x1F);
            } else {
                var_t1_6 = var_a3;
                *(u32 *)((u8 *)temp_t3 + 0xF0) = (u32) (var_t1_4 >> 0x1F);
            }
            temp_t0_23 = var_t0 + 1;
            temp_t0_24 = temp_t0_23 + 1;
            temp_v0_7 = *(u8 *)((u8 *)temp_t0_24 + 1);
            temp_a3_7 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_23 + 1);
            var_t0 = temp_t0_24 + 1 + 1;
            var_a3 = (temp_a3_7 << 8) | temp_v0_7;
        } else {
            var_t1_6 = var_t1_4 * 2;
            *(u32 *)((u8 *)temp_t3 + 0xF0) = (u32) (var_t1_4 >> 0x1F);
            var_t2_5 = var_t2_3 + 1;
        }
        if (var_t2_5 >= 0x1D) {
            var_t2_3 = var_t2_5 - 0x1D;
            if (var_t2_3 != 0) {
                var_t1_4 = var_a3 << var_t2_3;
                *(u32 *)((u8 *)temp_t3 + 0xF4) = (u32) ((u32) (var_t1_6 | (var_a3 >> (3 - var_t2_3))) >> 0x1D);
            } else {
                var_t1_4 = var_a3;
                *(u32 *)((u8 *)temp_t3 + 0xF4) = (u32) (var_t1_6 >> 0x1D);
            }
            temp_t0_25 = var_t0 + 1;
            temp_t0_26 = temp_t0_25 + 1;
            temp_v0_8 = *(u8 *)((u8 *)temp_t0_26 + 1);
            temp_a3_8 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_25 + 1);
            var_t0 = temp_t0_26 + 1 + 1;
            var_a3 = (temp_a3_8 << 8) | temp_v0_8;
        } else {
            var_t1_4 = var_t1_6 * 8;
            *(u32 *)((u8 *)temp_t3 + 0xF4) = (u32) (var_t1_6 >> 0x1D);
            var_t2_3 = var_t2_5 + 3;
        }
        if (*(u32 *)((u8 *)temp_t3 + 0xF0) != 0) {
            *(s32 *)((u8 *)temp_t3 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x550) + 1);
        }
        if (*(u32 *)((u8 *)temp_t3 + 0xF4) != 7) {
            *(s32 *)((u8 *)temp_t3 + 0x550) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x550) + 1);
        }
    }
loop_70:
    if (var_t2_3 >= 0x1F) {
        var_t2_6 = var_t2_3 - 0x1F;
        if (var_t2_6 != 0) {
            var_t1_7 = var_a3 << var_t2_6;
            *(u32 *)((u8 *)temp_t3 + 0xF8) = (u32) ((u32) (var_t1_4 | (var_a3 >> (1 - var_t2_6))) >> 0x1F);
        } else {
            var_t1_7 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xF8) = (u32) (var_t1_4 >> 0x1F);
        }
        temp_t0_27 = var_t0 + 1;
        temp_t0_28 = temp_t0_27 + 1;
        temp_v0_9 = *(u8 *)((u8 *)temp_t0_28 + 1);
        temp_a3_9 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_27 + 1);
        var_t0 = temp_t0_28 + 1 + 1;
        var_a3 = (temp_a3_9 << 8) | temp_v0_9;
    } else {
        var_t1_7 = var_t1_4 * 2;
        *(u32 *)((u8 *)temp_t3 + 0xF8) = (u32) (var_t1_4 >> 0x1F);
        var_t2_6 = var_t2_3 + 1;
    }
    if (*(u32 *)((u8 *)temp_t3 + 0xF8) != 0) {
        if (var_t2_6 >= 0x18) {
            var_t2_3 = var_t2_6 - 0x18;
            if (var_t2_3 != 0) {
                var_t1_4 = var_a3 << var_t2_3;
                *(u32 *)((u8 *)temp_t3 + 0xFC) = (u32) ((u32) (var_t1_7 | (var_a3 >> (8 - var_t2_3))) >> 0x18);
            } else {
                var_t1_4 = var_a3;
                *(u32 *)((u8 *)temp_t3 + 0xFC) = (u32) (var_t1_7 >> 0x18);
            }
            temp_t0_29 = var_t0 + 1;
            temp_t0_30 = temp_t0_29 + 1;
            temp_v0_10 = *(u8 *)((u8 *)temp_t0_30 + 1);
            temp_a3_10 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_29 + 1);
            var_t0 = temp_t0_30 + 1 + 1;
            var_a3 = (temp_a3_10 << 8) | temp_v0_10;
        } else {
            var_t1_4 = var_t1_7 << 8;
            *(u32 *)((u8 *)temp_t3 + 0xFC) = (u32) (var_t1_7 >> 0x18);
            var_t2_3 = var_t2_6 + 8;
        }
        goto loop_70;
    }
    temp_v1 = var_t2_6 + ((var_t0 - arg1) * 8);
    temp_a2_2 = temp_t3 + ((temp_a2 * 4) + 0x500);
    temp_v0 = temp_v1 - 0x39;
    *temp_a2_2 += 1;
    *(s32 *)((u8 *)temp_t3 + 0x32C) = 8;
    *(s32 *)((u8 *)temp_t3 + 0x328) = 0x10;
    return arg1 + ((s32) ((temp_v0 < 0) int (temp_v1 - 0x32) : temp_v0) >> 3);
}
