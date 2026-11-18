/* Draft (not built): func_00179860 at 0x00179860, size 0x640, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 132 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mpv/func_00179860.s */

s32 func_0017AAF0();

void func_00179860(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a3_10;
    s32 temp_a3_11;
    s32 temp_a3_12;
    s32 temp_a3_13;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a3_6;
    s32 temp_a3_7;
    s32 temp_a3_8;
    s32 temp_a3_9;
    s32 temp_t0;
    s32 var_a1;
    s32 var_a1_10;
    s32 var_a1_11;
    s32 var_a1_12;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_t1_12;
    s32 var_v0;
    u32 temp_t1;
    u32 var_a3;
    u32 var_t1;
    u32 var_t1_10;
    u32 var_t1_11;
    u32 var_t1_2;
    u32 var_t1_3;
    u32 var_t1_4;
    u32 var_t1_5;
    u32 var_t1_6;
    u32 var_t1_7;
    u32 var_t1_8;
    u32 var_t1_9;
    u8 temp_a2;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_12;
    u8 temp_v0_13;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 *temp_a0;
    u8 *temp_s0;
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
    u8 *temp_t0_31;
    u8 *temp_t0_32;
    u8 *temp_t0_33;
    u8 *temp_t0_34;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t0_9;
    u8 *var_t0;

    temp_t0 = (arg1 + 4) & ~3;
    temp_t0_2 = temp_t0 + 1;
    temp_t0_3 = temp_t0_2 + 1;
    temp_t0_4 = temp_t0_3 + 1;
    temp_a2 = *(u8 *)((u8 *)temp_t0_3 + 1);
    temp_t0_5 = temp_t0_4 + 1;
    temp_t0_6 = temp_t0_5 + 1;
    temp_t0_7 = temp_t0_6 + 1;
    temp_t0_8 = temp_t0_7 + 1;
    temp_a1 = ((arg1 - temp_t0) + 4) * 8;
    var_a3 = (((((*(s8 *)((u8 *)temp_t0_4 + 1) << 8) | *(u8 *)((u8 *)temp_t0_5 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_6 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_7 + 1);
    temp_t1 = ((((((*(s8 *)((u8 *)temp_t0 + 0) << 8) | *(u8 *)((u8 *)temp_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_2 + 1)) << 8) | temp_a2) << temp_a1;
    var_t0 = temp_t0_8 + 1;
    if (temp_a1 >= 0x10) {
        var_a1 = temp_a1 - 0x10;
        if (var_a1 != 0) {
            var_t1 = var_a3 << var_a1;
            *(u32 *)((u8 *)arg0 + 0) = (u32) ((u32) (temp_t1 | (var_a3 >> (0x10 - var_a1))) >> 0x10);
        } else {
            var_t1 = var_a3;
            *(u32 *)((u8 *)arg0 + 0) = (u32) (temp_t1 >> 0x10);
        }
        temp_t0_9 = var_t0 + 1;
        temp_t0_10 = temp_t0_9 + 1;
        temp_v0 = *(u8 *)((u8 *)temp_t0_10 + 1);
        temp_a3 = (((*(s8 *)((u8 *)temp_t0_8 + 1) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_9 + 1);
        var_t0 = temp_t0_10 + 1 + 1;
        var_a3 = (temp_a3 << 8) | temp_v0;
    } else {
        var_t1 = temp_t1 << 0x10;
        *(u32 *)((u8 *)arg0 + 0) = (u32) (temp_t1 >> 0x10);
        var_a1 = temp_a1 + 0x10;
    }
    var_a1_2 = var_a1 + 1;
    if (var_a1_2 < 0x20) {
        var_t1_2 = var_t1 * 2;
    } else {
        var_a1_2 -= 0x20;
        var_t1_2 = var_a3 << var_a1_2;
        temp_t0_11 = var_t0 + 1;
        temp_t0_12 = temp_t0_11 + 1;
        temp_v0_2 = *(u8 *)((u8 *)temp_t0_12 + 1);
        temp_a3_2 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_11 + 1);
        var_t0 = temp_t0_12 + 1 + 1;
        var_a3 = (temp_a3_2 << 8) | temp_v0_2;
    }
    if (var_a1_2 >= 0xA) {
        var_a1_3 = var_a1_2 - 0xA;
        if (var_a1_3 != 0) {
            var_t1_3 = var_a3 << var_a1_3;
            *(u32 *)((u8 *)arg0 + 4) = (u32) ((u32) (var_t1_2 | (var_a3 >> (0x16 - var_a1_3))) >> 0xA);
        } else {
            var_t1_3 = var_a3;
            *(u32 *)((u8 *)arg0 + 4) = (u32) (var_t1_2 >> 0xA);
        }
        temp_t0_13 = var_t0 + 1;
        temp_t0_14 = temp_t0_13 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_t0_14 + 1);
        temp_a3_3 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_13 + 1);
        var_t0 = temp_t0_14 + 1 + 1;
        var_a3 = (temp_a3_3 << 8) | temp_v0_3;
    } else {
        var_t1_3 = var_t1_2 << 0x16;
        *(u32 *)((u8 *)arg0 + 4) = (u32) (var_t1_2 >> 0xA);
        var_a1_3 = var_a1_2 + 0x16;
    }
    var_a1_4 = var_a1_3 + 1;
    if (var_a1_4 < 0x20) {
        var_t1_4 = var_t1_3 * 2;
    } else {
        var_a1_4 -= 0x20;
        var_t1_4 = var_a3 << var_a1_4;
        temp_t0_15 = var_t0 + 1;
        temp_t0_16 = temp_t0_15 + 1;
        temp_v0_4 = *(u8 *)((u8 *)temp_t0_16 + 1);
        temp_a3_4 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_15 + 1);
        var_t0 = temp_t0_16 + 1 + 1;
        var_a3 = (temp_a3_4 << 8) | temp_v0_4;
    }
    if (var_a1_4 >= 0x1A) {
        var_a1_5 = var_a1_4 - 0x1A;
        if (var_a1_5 != 0) {
            var_t1_5 = var_a3 << var_a1_5;
            *(u32 *)((u8 *)arg0 + 8) = (u32) ((u32) (var_t1_4 | (var_a3 >> (6 - var_a1_5))) >> 0x1A);
        } else {
            var_t1_5 = var_a3;
            *(u32 *)((u8 *)arg0 + 8) = (u32) (var_t1_4 >> 0x1A);
        }
        temp_t0_17 = var_t0 + 1;
        temp_t0_18 = temp_t0_17 + 1;
        temp_v0_5 = *(u8 *)((u8 *)temp_t0_18 + 1);
        temp_a3_5 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_17 + 1);
        var_t0 = temp_t0_18 + 1 + 1;
        var_a3 = (temp_a3_5 << 8) | temp_v0_5;
    } else {
        var_t1_5 = var_t1_4 << 6;
        *(u32 *)((u8 *)arg0 + 8) = (u32) (var_t1_4 >> 0x1A);
        var_a1_5 = var_a1_4 + 6;
    }
    *(u32 *)((u8 *)arg0 + 0x10) = (u32) (var_t1_5 >> 0x1F);
    if (var_a1_5 == 0x1F) {
        var_t1_6 = var_a3;
        temp_t0_19 = var_t0 + 1;
        var_a1_6 = 0;
        temp_t0_20 = temp_t0_19 + 1;
        temp_v0_6 = *(u8 *)((u8 *)temp_t0_20 + 1);
        temp_a3_6 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_19 + 1);
        var_t0 = temp_t0_20 + 1 + 1;
        var_a3 = (temp_a3_6 << 8) | temp_v0_6;
    } else {
        var_a1_6 = var_a1_5 + 1;
        var_t1_6 = var_t1_5 * 2;
    }
    *(u32 *)((u8 *)arg0 + 0x14) = (u32) (var_t1_6 >> 0x1F);
    if (var_a1_6 == 0x1F) {
        var_t1_7 = var_a3;
        temp_t0_21 = var_t0 + 1;
        var_a1_7 = 0;
        temp_t0_22 = temp_t0_21 + 1;
        temp_v0_7 = *(u8 *)((u8 *)temp_t0_22 + 1);
        temp_a3_7 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_21 + 1);
        var_t0 = temp_t0_22 + 1 + 1;
        var_a3 = (temp_a3_7 << 8) | temp_v0_7;
    } else {
        var_a1_7 = var_a1_6 + 1;
        var_t1_7 = var_t1_6 * 2;
    }
    *(u32 *)((u8 *)arg0 + 0x18) = (u32) (var_t1_7 >> 0x1F);
    if (var_a1_7 == 0x1F) {
        var_t1_8 = var_a3;
        temp_t0_23 = var_t0 + 1;
        var_a1_8 = 0;
        temp_t0_24 = temp_t0_23 + 1;
        temp_v0_8 = *(u8 *)((u8 *)temp_t0_24 + 1);
        temp_a3_8 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_23 + 1);
        var_t0 = temp_t0_24 + 1 + 1;
        var_a3 = (temp_a3_8 << 8) | temp_v0_8;
    } else {
        var_a1_8 = var_a1_7 + 1;
        var_t1_8 = var_t1_7 * 2;
    }
    *(u32 *)((u8 *)arg0 + 0x1C) = (u32) (var_t1_8 >> 0x1F);
    if (var_a1_8 == 0x1F) {
        var_t1_9 = var_a3;
        temp_t0_25 = var_t0 + 1;
        var_a1_9 = 0;
        temp_t0_26 = temp_t0_25 + 1;
        temp_v0_9 = *(u8 *)((u8 *)temp_t0_26 + 1);
        temp_a3_9 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_25 + 1);
        var_t0 = temp_t0_26 + 1 + 1;
        var_a3 = (temp_a3_9 << 8) | temp_v0_9;
    } else {
        var_a1_9 = var_a1_8 + 1;
        var_t1_9 = var_t1_8 * 2;
    }
    var_a1_10 = var_a1_9 + 1;
    if (var_a1_10 < 0x20) {
        var_t1_10 = var_t1_9 * 2;
    } else {
        var_a1_10 -= 0x20;
        var_t1_10 = var_a3 << var_a1_10;
        temp_t0_27 = var_t0 + 1;
        temp_t0_28 = temp_t0_27 + 1;
        temp_v0_10 = *(u8 *)((u8 *)temp_t0_28 + 1);
        temp_a3_10 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_27 + 1);
        var_t0 = temp_t0_28 + 1 + 1;
        var_a3 = (temp_a3_10 << 8) | temp_v0_10;
    }
    if (var_a1_10 >= 0x1B) {
        var_a1_11 = var_a1_10 - 0x1B;
        if (var_a1_11 != 0) {
            var_t1_11 = var_a3 << var_a1_11;
            *(u32 *)((u8 *)arg0 + 0xC) = (u32) ((u32) (var_t1_10 | (var_a3 >> (5 - var_a1_11))) >> 0x1B);
        } else {
            var_t1_11 = var_a3;
            *(u32 *)((u8 *)arg0 + 0xC) = (u32) (var_t1_10 >> 0x1B);
        }
        temp_t0_29 = var_t0 + 1;
        temp_t0_30 = temp_t0_29 + 1;
        temp_v0_11 = *(u8 *)((u8 *)temp_t0_30 + 1);
        temp_a3_11 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_29 + 1);
        var_t0 = temp_t0_30 + 1 + 1;
        var_a3 = (temp_a3_11 << 8) | temp_v0_11;
    } else {
        var_t1_11 = var_t1_10 << 5;
        *(u32 *)((u8 *)arg0 + 0xC) = (u32) (var_t1_10 >> 0x1B);
        var_a1_11 = var_a1_10 + 5;
    }
    var_a1_12 = var_a1_11 + 8;
    if (var_a1_12 < 0x20) {
        var_t1_12 = var_t1_11 << 8;
    } else {
        var_a1_12 -= 0x20;
        var_t1_12 = var_a3 << var_a1_12;
        temp_t0_31 = var_t0 + 1;
        temp_t0_32 = temp_t0_31 + 1;
        temp_v0_12 = *(u8 *)((u8 *)temp_t0_32 + 1);
        temp_a3_12 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_31 + 1);
        var_t0 = temp_t0_32 + 1 + 1;
        var_a3 = (temp_a3_12 << 8) | temp_v0_12;
    }
    var_v0 = var_a1_12 + 7;
    if (var_t1_12 < 0) {
        do {
            var_a1_12 += 0x18;
            if (var_a1_12 < 0x20) {
                var_t1_12 <<= 0x18;
            } else {
                var_a1_12 -= 0x20;
                var_t1_12 = var_a3 << var_a1_12;
                temp_t0_33 = var_t0 + 1;
                temp_t0_34 = temp_t0_33 + 1;
                temp_v0_13 = *(u8 *)((u8 *)temp_t0_34 + 1);
                temp_a3_13 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_33 + 1);
                var_t0 = temp_t0_34 + 1 + 1;
                var_a3 = (temp_a3_13 << 8) | temp_v0_13;
            }
        } while (var_t1_12 < 0);
        var_v0 = var_a1_12 + 7;
    }
    temp_s0 = var_t0 + (var_v0 >> 3);
    temp_a0 = temp_s0 - 8;
    *arg2 = temp_a0 - arg1;
    if (func_0017AAF0(temp_a0, var_a1_12, temp_a2, var_a3) != 0) {
        return;
    }
    if (func_0017AAF0(temp_s0 - 7) == 0x40000) {
        *arg2 += 1;
    }
}
