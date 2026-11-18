/* Draft (not built): func_00179EA0 at 0x00179EA0, size 0xC50, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 188 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00179EA0.s */

void func_00179EA0(u8 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t0_10;
    s32 temp_t0_11;
    s32 temp_t0_12;
    s32 temp_t0_13;
    s32 temp_t0_14;
    s32 temp_t0_15;
    s32 temp_t0_16;
    s32 temp_t0_17;
    s32 temp_t0_18;
    s32 temp_t0_19;
    s32 temp_t0_20;
    s32 temp_t0_21;
    s32 temp_t0_22;
    s32 temp_t0_23;
    s32 temp_t0_24;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t0_4;
    s32 temp_t0_5;
    s32 temp_t0_6;
    s32 temp_t0_7;
    s32 temp_t0_8;
    s32 temp_t0_9;
    s32 temp_t1;
    s32 temp_v0_25;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_10;
    s32 var_a1_11;
    s32 var_a1_12;
    s32 var_a1_13;
    s32 var_a1_14;
    s32 var_a1_15;
    s32 var_a1_16;
    s32 var_a1_17;
    s32 var_a1_18;
    s32 var_a1_19;
    s32 var_a1_20;
    s32 var_a1_21;
    s32 var_a1_22;
    s32 var_a1_23;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_t2_16;
    s32 var_t5;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_t2;
    u32 var_a0_2;
    u32 var_a0_3;
    u32 var_a0_4;
    u32 var_a0_5;
    u32 var_a2;
    u32 var_a2_2;
    u32 var_a2_3;
    u32 var_a2_4;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_a3_3;
    u32 var_t0;
    u32 var_t2;
    u32 var_t2_10;
    u32 var_t2_11;
    u32 var_t2_12;
    u32 var_t2_13;
    u32 var_t2_14;
    u32 var_t2_15;
    u32 var_t2_17;
    u32 var_t2_18;
    u32 var_t2_19;
    u32 var_t2_20;
    u32 var_t2_21;
    u32 var_t2_2;
    u32 var_t2_3;
    u32 var_t2_4;
    u32 var_t2_5;
    u32 var_t2_6;
    u32 var_t2_7;
    u32 var_t2_8;
    u32 var_t2_9;
    u32 var_v1;
    u32 var_v1_2;
    u32 var_v1_3;
    u32 var_v1_4;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_12;
    u8 temp_v0_13;
    u8 temp_v0_14;
    u8 temp_v0_15;
    u8 temp_v0_16;
    u8 temp_v0_17;
    u8 temp_v0_18;
    u8 temp_v0_19;
    u8 temp_v0_20;
    u8 temp_v0_21;
    u8 temp_v0_22;
    u8 temp_v0_23;
    u8 temp_v0_24;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 *temp_t1_10;
    u8 *temp_t1_11;
    u8 *temp_t1_12;
    u8 *temp_t1_13;
    u8 *temp_t1_14;
    u8 *temp_t1_15;
    u8 *temp_t1_16;
    u8 *temp_t1_17;
    u8 *temp_t1_18;
    u8 *temp_t1_19;
    u8 *temp_t1_20;
    u8 *temp_t1_21;
    u8 *temp_t1_22;
    u8 *temp_t1_23;
    u8 *temp_t1_24;
    u8 *temp_t1_25;
    u8 *temp_t1_26;
    u8 *temp_t1_27;
    u8 *temp_t1_28;
    u8 *temp_t1_29;
    u8 *temp_t1_2;
    u8 *temp_t1_30;
    u8 *temp_t1_31;
    u8 *temp_t1_32;
    u8 *temp_t1_33;
    u8 *temp_t1_34;
    u8 *temp_t1_35;
    u8 *temp_t1_36;
    u8 *temp_t1_37;
    u8 *temp_t1_38;
    u8 *temp_t1_39;
    u8 *temp_t1_3;
    u8 *temp_t1_40;
    u8 *temp_t1_41;
    u8 *temp_t1_42;
    u8 *temp_t1_43;
    u8 *temp_t1_44;
    u8 *temp_t1_45;
    u8 *temp_t1_46;
    u8 *temp_t1_47;
    u8 *temp_t1_48;
    u8 *temp_t1_49;
    u8 *temp_t1_4;
    u8 *temp_t1_50;
    u8 *temp_t1_51;
    u8 *temp_t1_52;
    u8 *temp_t1_53;
    u8 *temp_t1_54;
    u8 *temp_t1_55;
    u8 *temp_t1_56;
    u8 *temp_t1_5;
    u8 *temp_t1_6;
    u8 *temp_t1_7;
    u8 *temp_t1_8;
    u8 *temp_t1_9;
    u8 *var_t1;

    temp_t1 = (arg1 + 3) & ~3;
    temp_t1_2 = temp_t1 + 1;
    temp_t1_3 = temp_t1_2 + 1;
    temp_t1_4 = temp_t1_3 + 1;
    temp_t1_5 = temp_t1_4 + 1;
    temp_t1_6 = temp_t1_5 + 1;
    temp_t1_7 = temp_t1_6 + 1;
    temp_t1_8 = temp_t1_7 + 1;
    temp_a1 = ((arg1 - temp_t1) + 3) * 8;
    var_t0 = (((((*(s8 *)((u8 *)temp_t1_4 + 1) << 8) | *(u8 *)((u8 *)temp_t1_5 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_6 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_7 + 1);
    temp_t2 = ((((((*(s8 *)((u8 *)temp_t1 + 0) << 8) | *(u8 *)((u8 *)temp_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_2 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_3 + 1)) << temp_a1;
    var_t1 = temp_t1_8 + 1;
    if (temp_a1 >= 0x18) {
        var_a1 = temp_a1 - 0x18;
        if (var_a1 != 0) {
            var_a2 = (u32) (temp_t2 | (var_t0 >> (8 - var_a1))) >> 0x18;
            var_t2 = var_t0 << var_a1;
        } else {
            var_a2 = temp_t2 >> 0x18;
            var_t2 = var_t0;
        }
        temp_t1_9 = var_t1 + 1;
        temp_t1_10 = temp_t1_9 + 1;
        temp_v0 = *(u8 *)((u8 *)temp_t1_10 + 1);
        temp_t0 = (((*(s8 *)((u8 *)temp_t1_8 + 1) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_9 + 1);
        var_t1 = temp_t1_10 + 1 + 1;
        var_t0 = (temp_t0 << 8) | temp_v0;
    } else {
        var_a2 = temp_t2 >> 0x18;
        var_t2 = temp_t2 << 8;
        var_a1 = temp_a1 + 8;
    }
    var_v1 = var_a2 - 0xE0;
    *(u32 *)((u8 *)arg0 + 0) = var_a2;
    var_a0 = 1;
    if (var_v1 >= 0x10U) {
        var_v1 = var_a2 - 0xC0;
        var_a0 = 0;
        if (var_v1 >= 0x20U) {
            switch (var_a2) {                       /* irregular */
            case 0xBD:
                var_a0 = 2;
                var_v1 = 1;
                break;
            case 0xBF:
                var_a0 = 2;
                var_v1 = 2;
                break;
            default:
                var_a0 = 4;
block_19:
                var_v1 = 0;
                break;
            case 0xBE:
                var_a0 = 3;
                goto block_19;
            }
        }
    }
    *(s32 *)((u8 *)arg0 + 4) = var_a0;
    *(u32 *)((u8 *)arg0 + 8) = var_v1;
    if (arg3 == 2) {
        if (var_a1 >= 0x10) {
            var_a1 -= 0x10;
            if (var_a1 != 0) {
                var_t2_2 = var_t0 << var_a1;
                *(u32 *)((u8 *)arg0 + 0xC) = (u32) ((u32) (var_t2 | (var_t0 >> (0x10 - var_a1))) >> 0x10);
            } else {
                var_t2_2 = var_t0;
                *(u32 *)((u8 *)arg0 + 0xC) = (u32) (var_t2 >> 0x10);
            }
            temp_t1_11 = var_t1 + 1;
            temp_t1_12 = temp_t1_11 + 1;
            temp_v0_2 = *(u8 *)((u8 *)temp_t1_12 + 1);
            temp_t0_2 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_11 + 1);
            var_t1 = temp_t1_12 + 1 + 1;
            var_t0 = (temp_t0_2 << 8) | temp_v0_2;
        } else {
            var_t2_2 = var_t2 << 0x10;
            *(u32 *)((u8 *)arg0 + 0xC) = (u32) (var_t2 >> 0x10);
            var_a1 += 0x10;
        }
        var_t5 = 6;
    } else {
        if (var_a1 != 0) {
            var_t2_2 = var_t0 << var_a1;
            *(u32 *)((u8 *)arg0 + 0xC) = (u32) (var_t2 | (var_t0 >> -var_a1));
        } else {
            *(u32 *)((u8 *)arg0 + 0xC) = var_t2;
            var_t2_2 = var_t0;
        }
        temp_t1_13 = var_t1 + 1;
        temp_t1_14 = temp_t1_13 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_t1_14 + 1);
        var_t5 = 8;
        temp_t0_3 = ((((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_13 + 1)) << 8;
        var_t1 = temp_t1_14 + 1 + 1;
        var_t0 = temp_t0_3 | temp_v0_3;
    }
    if ((u32) (var_a2 - 0xBE) >= 2U) {
loop_45:
        var_v1_2 = var_t2_2 >> 0x18;
        if (var_a1 >= 0x19) {
            var_v1_2 |= var_t0 >> (0x38 - var_a1);
        }
        if (var_v1_2 == 0xFF) {
            var_a1 += 8;
            if (var_a1 < 0x20) {
                var_t2_2 <<= 8;
            } else {
                var_a1 -= 0x20;
                var_t2_2 = var_t0 << var_a1;
                temp_t1_15 = var_t1 + 1;
                temp_t1_16 = temp_t1_15 + 1;
                temp_v0_4 = *(u8 *)((u8 *)temp_t1_16 + 1);
                temp_t0_4 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_15 + 1);
                var_t1 = temp_t1_16 + 1 + 1;
                var_t0 = (temp_t0_4 << 8) | temp_v0_4;
            }
            goto loop_45;
        }
        var_v1_3 = var_t2_2 >> 0x1E;
        if (var_a1 >= 0x1F) {
            var_v1_3 |= var_t0 >> (0x3E - var_a1);
        }
        var_v0 = var_a1 < 0x1D;
        if (var_v1_3 == 1) {
            var_a1_2 = var_a1 + 2;
            if (var_a1_2 < 0x20) {
                var_t2_3 = var_t2_2 * 4;
            } else {
                var_a1_2 -= 0x20;
                var_t2_3 = var_t0 << var_a1_2;
                temp_t1_17 = var_t1 + 1;
                temp_t1_18 = temp_t1_17 + 1;
                temp_v0_5 = *(u8 *)((u8 *)temp_t1_18 + 1);
                temp_t0_5 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_17 + 1);
                var_t1 = temp_t1_18 + 1 + 1;
                var_t0 = (temp_t0_5 << 8) | temp_v0_5;
            }
            if (var_a1_2 == 0x1F) {
                var_t2_4 = var_t0;
                temp_t1_19 = var_t1 + 1;
                var_a1_3 = 0;
                temp_t1_20 = temp_t1_19 + 1;
                temp_v0_6 = *(u8 *)((u8 *)temp_t1_20 + 1);
                temp_t0_6 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_19 + 1);
                var_t1 = temp_t1_20 + 1 + 1;
                var_t0 = (temp_t0_6 << 8) | temp_v0_6;
            } else {
                var_a1_3 = var_a1_2 + 1;
                var_t2_4 = var_t2_3 * 2;
            }
            var_a0_2 = var_t2_4 >> 0x13;
            if (var_a1_3 >= 0x13) {
                var_a1 = var_a1_3 - 0x13;
                if (var_a1 != 0) {
                    var_a0_2 = (u32) (var_t2_4 | (var_t0 >> (0xD - var_a1))) >> 0x13;
                    var_t2_2 = var_t0 << var_a1;
                } else {
                    var_t2_2 = var_t0;
                }
                temp_t1_21 = var_t1 + 1;
                temp_t1_22 = temp_t1_21 + 1;
                temp_v0_7 = *(u8 *)((u8 *)temp_t1_22 + 1);
                temp_t0_7 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_21 + 1);
                var_t1 = temp_t1_22 + 1 + 1;
                var_t0 = (temp_t0_7 << 8) | temp_v0_7;
            } else {
                var_t2_2 = var_t2_4 << 0xD;
                var_a1 = var_a1_3 + 0xD;
            }
            temp_a0 = var_a0_2 << 7;
            *(s32 *)((u8 *)arg0 + 0x10) = (s32) (((var_t2_3 >> 0x1F) != 0) ? (temp_a0 * 8) : temp_a0);
            var_v0 = var_a1 < 0x1D;
        }
        var_v1_4 = var_t2_2 >> 0x1C;
        if (var_v0 == 0) {
            var_v1_4 |= var_t0 >> (0x3C - var_a1);
        }
        if (var_v1_4 == 2) {
            var_a1_4 = var_a1 + 4;
            if (var_a1_4 < 0x20) {
                var_t2_5 = var_t2_2 * 0x10;
            } else {
                var_a1_4 -= 0x20;
                var_t2_5 = var_t0 << var_a1_4;
                temp_t1_23 = var_t1 + 1;
                temp_t1_24 = temp_t1_23 + 1;
                temp_v0_8 = *(u8 *)((u8 *)temp_t1_24 + 1);
                temp_t0_8 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_23 + 1);
                var_t1 = temp_t1_24 + 1 + 1;
                var_t0 = (temp_t0_8 << 8) | temp_v0_8;
            }
            var_a3 = var_t2_5 >> 0x1D;
            if (var_a1_4 >= 0x1D) {
                var_a1_5 = var_a1_4 - 0x1D;
                if (var_a1_5 != 0) {
                    var_a3 = (u32) (var_t2_5 | (var_t0 >> (3 - var_a1_5))) >> 0x1D;
                    var_t2_6 = var_t0 << var_a1_5;
                } else {
                    var_t2_6 = var_t0;
                }
                temp_t1_25 = var_t1 + 1;
                temp_t1_26 = temp_t1_25 + 1;
                temp_v0_9 = *(u8 *)((u8 *)temp_t1_26 + 1);
                temp_t0_9 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_25 + 1);
                var_t1 = temp_t1_26 + 1 + 1;
                var_t0 = (temp_t0_9 << 8) | temp_v0_9;
            } else {
                var_t2_6 = var_t2_5 * 8;
                var_a1_5 = var_a1_4 + 3;
            }
            var_a1_6 = var_a1_5 + 1;
            if (var_a1_6 < 0x20) {
                var_t2_7 = var_t2_6 * 2;
            } else {
                var_a1_6 -= 0x20;
                var_t2_7 = var_t0 << var_a1_6;
                temp_t1_27 = var_t1 + 1;
                temp_t1_28 = temp_t1_27 + 1;
                temp_v0_10 = *(u8 *)((u8 *)temp_t1_28 + 1);
                temp_t0_10 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_27 + 1);
                var_t1 = temp_t1_28 + 1 + 1;
                var_t0 = (temp_t0_10 << 8) | temp_v0_10;
            }
            var_a2_2 = var_t2_7 >> 0x11;
            if (var_a1_6 >= 0x11) {
                var_a1_7 = var_a1_6 - 0x11;
                if (var_a1_7 != 0) {
                    var_a2_2 = (u32) (var_t2_7 | (var_t0 >> (0xF - var_a1_7))) >> 0x11;
                    var_t2_8 = var_t0 << var_a1_7;
                } else {
                    var_t2_8 = var_t0;
                }
                temp_t1_29 = var_t1 + 1;
                temp_t1_30 = temp_t1_29 + 1;
                temp_v0_11 = *(u8 *)((u8 *)temp_t1_30 + 1);
                temp_t0_11 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_29 + 1);
                var_t1 = temp_t1_30 + 1 + 1;
                var_t0 = (temp_t0_11 << 8) | temp_v0_11;
            } else {
                var_t2_8 = var_t2_7 << 0xF;
                var_a1_7 = var_a1_6 + 0xF;
            }
            var_a1_8 = var_a1_7 + 1;
            if (var_a1_8 < 0x20) {
                var_t2_9 = var_t2_8 * 2;
            } else {
                var_a1_8 -= 0x20;
                var_t2_9 = var_t0 << var_a1_8;
                temp_t1_31 = var_t1 + 1;
                temp_t1_32 = temp_t1_31 + 1;
                temp_v0_12 = *(u8 *)((u8 *)temp_t1_32 + 1);
                temp_t0_12 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_31 + 1);
                var_t1 = temp_t1_32 + 1 + 1;
                var_t0 = (temp_t0_12 << 8) | temp_v0_12;
            }
            var_a0_3 = var_t2_9 >> 0x11;
            if (var_a1_8 >= 0x11) {
                var_a1_9 = var_a1_8 - 0x11;
                if (var_a1_9 != 0) {
                    var_a0_3 = (u32) (var_t2_9 | (var_t0 >> (0xF - var_a1_9))) >> 0x11;
                }
                var_t1 += 4;
            } else {
                var_a1_9 = var_a1_8 + 0xF;
            }
            var_a1_10 = var_a1_9 + 1;
            if (var_a1_10 >= 0x20) {
                var_a1_10 -= 0x20;
                var_t1 += 4;
            }
            *(s32 *)((u8 *)arg0 + 0x18) = -1;
            var_v0_2 = (var_a3 << 0x1C) | (var_a2_2 << 0xD) | (var_a0_3 >> 2);
            goto block_174;
        }
        if (var_v1_4 != 3) {
            var_a1_10 = var_a1 + 8;
            var_v0_2 = -1;
            if (var_a1_10 >= 0x20) {
                var_a1_10 -= 0x20;
                var_t1 += 4;
            }
            *(s32 *)((u8 *)arg0 + 0x18) = -1;
block_174:
            *(s32 *)((u8 *)arg0 + 0x14) = var_v0_2;
        } else {
            var_a1_11 = var_a1 + 4;
            if (var_a1_11 < 0x20) {
                var_t2_10 = var_t2_2 * 0x10;
            } else {
                var_a1_11 -= 0x20;
                var_t2_10 = var_t0 << var_a1_11;
                temp_t1_33 = var_t1 + 1;
                temp_t1_34 = temp_t1_33 + 1;
                temp_v0_13 = *(u8 *)((u8 *)temp_t1_34 + 1);
                temp_t0_13 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_33 + 1);
                var_t1 = temp_t1_34 + 1 + 1;
                var_t0 = (temp_t0_13 << 8) | temp_v0_13;
            }
            var_a3_2 = var_t2_10 >> 0x1D;
            if (var_a1_11 >= 0x1D) {
                var_a1_12 = var_a1_11 - 0x1D;
                if (var_a1_12 != 0) {
                    var_a3_2 = (u32) (var_t2_10 | (var_t0 >> (3 - var_a1_12))) >> 0x1D;
                    var_t2_11 = var_t0 << var_a1_12;
                } else {
                    var_t2_11 = var_t0;
                }
                temp_t1_35 = var_t1 + 1;
                temp_t1_36 = temp_t1_35 + 1;
                temp_v0_14 = *(u8 *)((u8 *)temp_t1_36 + 1);
                temp_t0_14 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_35 + 1);
                var_t1 = temp_t1_36 + 1 + 1;
                var_t0 = (temp_t0_14 << 8) | temp_v0_14;
            } else {
                var_t2_11 = var_t2_10 * 8;
                var_a1_12 = var_a1_11 + 3;
            }
            var_a1_13 = var_a1_12 + 1;
            if (var_a1_13 < 0x20) {
                var_t2_12 = var_t2_11 * 2;
            } else {
                var_a1_13 -= 0x20;
                var_t2_12 = var_t0 << var_a1_13;
                temp_t1_37 = var_t1 + 1;
                temp_t1_38 = temp_t1_37 + 1;
                temp_v0_15 = *(u8 *)((u8 *)temp_t1_38 + 1);
                temp_t0_15 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_37 + 1);
                var_t1 = temp_t1_38 + 1 + 1;
                var_t0 = (temp_t0_15 << 8) | temp_v0_15;
            }
            var_a2_3 = var_t2_12 >> 0x11;
            if (var_a1_13 >= 0x11) {
                var_a1_14 = var_a1_13 - 0x11;
                if (var_a1_14 != 0) {
                    var_a2_3 = (u32) (var_t2_12 | (var_t0 >> (0xF - var_a1_14))) >> 0x11;
                    var_t2_13 = var_t0 << var_a1_14;
                } else {
                    var_t2_13 = var_t0;
                }
                temp_t1_39 = var_t1 + 1;
                temp_t1_40 = temp_t1_39 + 1;
                temp_v0_16 = *(u8 *)((u8 *)temp_t1_40 + 1);
                temp_t0_16 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_39 + 1);
                var_t1 = temp_t1_40 + 1 + 1;
                var_t0 = (temp_t0_16 << 8) | temp_v0_16;
            } else {
                var_t2_13 = var_t2_12 << 0xF;
                var_a1_14 = var_a1_13 + 0xF;
            }
            var_a1_15 = var_a1_14 + 1;
            if (var_a1_15 < 0x20) {
                var_t2_14 = var_t2_13 * 2;
            } else {
                var_a1_15 -= 0x20;
                var_t2_14 = var_t0 << var_a1_15;
                temp_t1_41 = var_t1 + 1;
                temp_t1_42 = temp_t1_41 + 1;
                temp_v0_17 = *(u8 *)((u8 *)temp_t1_42 + 1);
                temp_t0_17 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_41 + 1);
                var_t1 = temp_t1_42 + 1 + 1;
                var_t0 = (temp_t0_17 << 8) | temp_v0_17;
            }
            var_a0_4 = var_t2_14 >> 0x11;
            if (var_a1_15 >= 0x11) {
                var_a1_16 = var_a1_15 - 0x11;
                if (var_a1_16 != 0) {
                    var_a0_4 = (u32) (var_t2_14 | (var_t0 >> (0xF - var_a1_16))) >> 0x11;
                    var_t2_15 = var_t0 << var_a1_16;
                } else {
                    var_t2_15 = var_t0;
                }
                temp_t1_43 = var_t1 + 1;
                temp_t1_44 = temp_t1_43 + 1;
                temp_v0_18 = *(u8 *)((u8 *)temp_t1_44 + 1);
                temp_t0_18 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_43 + 1);
                var_t1 = temp_t1_44 + 1 + 1;
                var_t0 = (temp_t0_18 << 8) | temp_v0_18;
            } else {
                var_t2_15 = var_t2_14 << 0xF;
                var_a1_16 = var_a1_15 + 0xF;
            }
            var_a1_17 = var_a1_16 + 1;
            if (var_a1_17 < 0x20) {
                var_t2_16 = var_t2_15 * 2;
            } else {
                var_a1_17 -= 0x20;
                var_t2_16 = var_t0 << var_a1_17;
                temp_t1_45 = var_t1 + 1;
                temp_t1_46 = temp_t1_45 + 1;
                temp_v0_19 = *(u8 *)((u8 *)temp_t1_46 + 1);
                temp_t0_19 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_45 + 1);
                var_t1 = temp_t1_46 + 1 + 1;
                var_t0 = (temp_t0_19 << 8) | temp_v0_19;
            }
            var_a1_18 = var_a1_17 + 4;
            *(s32 *)((u8 *)arg0 + 0x14) = (s32) ((var_a3_2 << 0x1C) | (var_a2_3 << 0xD) | (var_a0_4 >> 2));
            if (var_a1_18 >= 0x20) {
                var_a1_18 -= 0x20;
                var_t2_17 = var_t0 << var_a1_18;
                temp_t1_47 = var_t1 + 1;
                temp_t1_48 = temp_t1_47 + 1;
                temp_v0_20 = *(u8 *)((u8 *)temp_t1_48 + 1);
                temp_t0_20 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_47 + 1);
                var_t1 = temp_t1_48 + 1 + 1;
                var_t0 = (temp_t0_20 << 8) | temp_v0_20;
            } else {
                var_t2_17 = var_t2_16 * 0x10;
            }
            var_a3_3 = var_t2_17 >> 0x1D;
            if (var_a1_18 >= 0x1D) {
                var_a1_19 = var_a1_18 - 0x1D;
                if (var_a1_19 != 0) {
                    var_a3_3 = (u32) (var_t2_17 | (var_t0 >> (3 - var_a1_19))) >> 0x1D;
                    var_t2_18 = var_t0 << var_a1_19;
                } else {
                    var_t2_18 = var_t0;
                }
                temp_t1_49 = var_t1 + 1;
                temp_t1_50 = temp_t1_49 + 1;
                temp_v0_21 = *(u8 *)((u8 *)temp_t1_50 + 1);
                temp_t0_21 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_49 + 1);
                var_t1 = temp_t1_50 + 1 + 1;
                var_t0 = (temp_t0_21 << 8) | temp_v0_21;
            } else {
                var_t2_18 = var_t2_17 * 8;
                var_a1_19 = var_a1_18 + 3;
            }
            var_a1_20 = var_a1_19 + 1;
            if (var_a1_20 < 0x20) {
                var_t2_19 = var_t2_18 * 2;
            } else {
                var_a1_20 -= 0x20;
                var_t2_19 = var_t0 << var_a1_20;
                temp_t1_51 = var_t1 + 1;
                temp_t1_52 = temp_t1_51 + 1;
                temp_v0_22 = *(u8 *)((u8 *)temp_t1_52 + 1);
                temp_t0_22 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_51 + 1);
                var_t1 = temp_t1_52 + 1 + 1;
                var_t0 = (temp_t0_22 << 8) | temp_v0_22;
            }
            var_a2_4 = var_t2_19 >> 0x11;
            if (var_a1_20 >= 0x11) {
                var_a1_21 = var_a1_20 - 0x11;
                if (var_a1_21 != 0) {
                    var_a2_4 = (u32) (var_t2_19 | (var_t0 >> (0xF - var_a1_21))) >> 0x11;
                    var_t2_20 = var_t0 << var_a1_21;
                } else {
                    var_t2_20 = var_t0;
                }
                temp_t1_53 = var_t1 + 1;
                temp_t1_54 = temp_t1_53 + 1;
                temp_v0_23 = *(u8 *)((u8 *)temp_t1_54 + 1);
                temp_t0_23 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_53 + 1);
                var_t1 = temp_t1_54 + 1 + 1;
                var_t0 = (temp_t0_23 << 8) | temp_v0_23;
            } else {
                var_t2_20 = var_t2_19 << 0xF;
                var_a1_21 = var_a1_20 + 0xF;
            }
            var_a1_22 = var_a1_21 + 1;
            if (var_a1_22 < 0x20) {
                var_t2_21 = var_t2_20 * 2;
            } else {
                var_a1_22 -= 0x20;
                var_t2_21 = var_t0 << var_a1_22;
                temp_t1_55 = var_t1 + 1;
                temp_t1_56 = temp_t1_55 + 1;
                temp_v0_24 = *(u8 *)((u8 *)temp_t1_56 + 1);
                temp_t0_24 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_55 + 1);
                var_t1 = temp_t1_56 + 1 + 1;
                var_t0 = (temp_t0_24 << 8) | temp_v0_24;
            }
            var_a0_5 = var_t2_21 >> 0x11;
            if (var_a1_22 >= 0x11) {
                var_a1_23 = var_a1_22 - 0x11;
                if (var_a1_23 != 0) {
                    var_a0_5 = (u32) (var_t2_21 | (var_t0 >> (0xF - var_a1_23))) >> 0x11;
                }
                var_t1 += 4;
            } else {
                var_a1_23 = var_a1_22 + 0xF;
            }
            var_a1_10 = var_a1_23 + 1;
            if (var_a1_10 >= 0x20) {
                var_a1_10 -= 0x20;
                var_t1 += 4;
            }
            *(s32 *)((u8 *)arg0 + 0x18) = (s32) ((var_a3_3 << 0x1C) | (var_a2_4 << 0xD) | (var_a0_5 >> 2));
        }
        temp_v0_25 = ((var_t1 + ((s32) (var_a1_10 + 7) >> 3)) - 8) - arg1;
        *arg2 = temp_v0_25;
        *(u32 *)((u8 *)arg0 + 0x1C) = (u32) ((*(u32 *)((u8 *)arg0 + 0xC) + var_t5) - temp_v0_25);
        return;
    }
    *arg2 = var_t5;
    *(u32 *)((u8 *)arg0 + 0x1C) = (u32) *(u32 *)((u8 *)arg0 + 0xC);
}
