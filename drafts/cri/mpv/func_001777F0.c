/* Draft (not built): func_001777F0 at 0x001777F0, size 0x558, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001777F0.c:257: parse error before ')' token
 * Original: asm/nonmatchings/cri/mpv/func_001777F0.s */

s32 func_001777F0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a3_6;
    s32 temp_a3_7;
    s32 temp_a3_8;
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
    s32 var_t2_7;
    s32 var_t2_8;
    u32 temp_a3;
    u32 var_a3;
    u32 var_t1;
    u32 var_t1_2;
    u32 var_t1_3;
    u32 var_t1_4;
    u32 var_t1_5;
    u32 var_t1_6;
    u32 var_t1_7;
    u32 var_t1_8;
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
    u8 *temp_t0_26;
    u8 *temp_t0_2;
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
    *(s32 *)((u8 *)temp_t3 + 0x4DC) = 2;
    *(s32 *)((u8 *)temp_t3 + 0x4F8) = (s32) (*(s32 *)((u8 *)temp_t3 + 0x4F8) + 1);
    if (((temp_a0 != 0) && (temp_a0 != 8)) || (*(s32 *)((u8 *)temp_t3 + 0x32C) != 0)) {
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
        *(s32 *)((u8 *)temp_t3 + 0xB8) = (s32) (temp_t1 | (temp_a3 >> -temp_t2));
    } else {
        *(s32 *)((u8 *)temp_t3 + 0xB8) = temp_t1;
        var_t1 = temp_a3;
    }
    temp_t0_10 = temp_t0_9 + 1;
    temp_t0_11 = temp_t0_10 + 1;
    temp_t0_12 = temp_t0_11 + 1;
    var_t0 = temp_t0_12 + 1;
    var_a3 = (((((*(s8 *)((u8 *)temp_t0_8 + 1) << 8) | *(u8 *)((u8 *)temp_t0_9 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_10 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_11 + 1);
    if (temp_t2 >= 0x1F) {
        var_t2 = temp_t2 - 0x1F;
        if (var_t2 != 0) {
            var_t1_2 = var_a3 << var_t2;
            *(u32 *)((u8 *)temp_t3 + 0xBC) = (u32) ((u32) (var_t1 | (var_a3 >> (1 - var_t2))) >> 0x1F);
        } else {
            var_t1_2 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xBC) = (u32) (var_t1 >> 0x1F);
        }
        temp_t0_13 = var_t0 + 1;
        temp_t0_14 = temp_t0_13 + 1;
        temp_v0_2 = *(u8 *)((u8 *)temp_t0_14 + 1);
        temp_a3_2 = (((*(s8 *)((u8 *)temp_t0_12 + 1) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_13 + 1);
        var_t0 = temp_t0_14 + 1 + 1;
        var_a3 = (temp_a3_2 << 8) | temp_v0_2;
    } else {
        var_t1_2 = var_t1 * 2;
        *(u32 *)((u8 *)temp_t3 + 0xBC) = (u32) (var_t1 >> 0x1F);
        var_t2 = temp_t2 + 1;
    }
    if (var_t2 >= 0x1B) {
        var_t2_2 = var_t2 - 0x1B;
        if (var_t2_2 != 0) {
            var_t1_3 = var_a3 << var_t2_2;
            *(u32 *)((u8 *)temp_t3 + 0xC0) = (u32) ((u32) (var_t1_2 | (var_a3 >> (5 - var_t2_2))) >> 0x1B);
        } else {
            var_t1_3 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xC0) = (u32) (var_t1_2 >> 0x1B);
        }
        temp_t0_15 = var_t0 + 1;
        temp_t0_16 = temp_t0_15 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_t0_16 + 1);
        temp_a3_3 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_15 + 1);
        var_t0 = temp_t0_16 + 1 + 1;
        var_a3 = (temp_a3_3 << 8) | temp_v0_3;
    } else {
        var_t1_3 = var_t1_2 << 5;
        *(u32 *)((u8 *)temp_t3 + 0xC0) = (u32) (var_t1_2 >> 0x1B);
        var_t2_2 = var_t2 + 5;
    }
    if (var_t2_2 >= 0x1A) {
        var_t2_3 = var_t2_2 - 0x1A;
        if (var_t2_3 != 0) {
            var_t1_4 = var_a3 << var_t2_3;
            *(u32 *)((u8 *)temp_t3 + 0xC4) = (u32) ((u32) (var_t1_3 | (var_a3 >> (6 - var_t2_3))) >> 0x1A);
        } else {
            var_t1_4 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xC4) = (u32) (var_t1_3 >> 0x1A);
        }
        temp_t0_17 = var_t0 + 1;
        temp_t0_18 = temp_t0_17 + 1;
        temp_v0_4 = *(u8 *)((u8 *)temp_t0_18 + 1);
        temp_a3_4 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_17 + 1);
        var_t0 = temp_t0_18 + 1 + 1;
        var_a3 = (temp_a3_4 << 8) | temp_v0_4;
    } else {
        var_t1_4 = var_t1_3 << 6;
        *(u32 *)((u8 *)temp_t3 + 0xC4) = (u32) (var_t1_3 >> 0x1A);
        var_t2_3 = var_t2_2 + 6;
    }
    if (var_t2_3 >= 0x1F) {
        var_t2_4 = var_t2_3 - 0x1F;
        if (var_t2_4 != 0) {
            var_t1_5 = var_a3 << var_t2_4;
            *(u32 *)((u8 *)temp_t3 + 0x18) = (u32) ((u32) (var_t1_4 | (var_a3 >> (1 - var_t2_4))) >> 0x1F);
        } else {
            var_t1_5 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0x18) = (u32) (var_t1_4 >> 0x1F);
        }
        temp_t0_19 = var_t0 + 1;
        temp_t0_20 = temp_t0_19 + 1;
        temp_v0_5 = *(u8 *)((u8 *)temp_t0_20 + 1);
        temp_a3_5 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_19 + 1);
        var_t0 = temp_t0_20 + 1 + 1;
        var_a3 = (temp_a3_5 << 8) | temp_v0_5;
    } else {
        var_t1_5 = var_t1_4 * 2;
        *(u32 *)((u8 *)temp_t3 + 0x18) = (u32) (var_t1_4 >> 0x1F);
        var_t2_4 = var_t2_3 + 1;
    }
    if (var_t2_4 >= 0x1A) {
        var_t2_5 = var_t2_4 - 0x1A;
        if (var_t2_5 != 0) {
            var_t1_6 = var_a3 << var_t2_5;
            *(u32 *)((u8 *)temp_t3 + 0xC8) = (u32) ((u32) (var_t1_5 | (var_a3 >> (6 - var_t2_5))) >> 0x1A);
        } else {
            var_t1_6 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xC8) = (u32) (var_t1_5 >> 0x1A);
        }
        temp_t0_21 = var_t0 + 1;
        temp_t0_22 = temp_t0_21 + 1;
        temp_v0_6 = *(u8 *)((u8 *)temp_t0_22 + 1);
        temp_a3_6 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_21 + 1);
        var_t0 = temp_t0_22 + 1 + 1;
        var_a3 = (temp_a3_6 << 8) | temp_v0_6;
    } else {
        var_t1_6 = var_t1_5 << 6;
        *(u32 *)((u8 *)temp_t3 + 0xC8) = (u32) (var_t1_5 >> 0x1A);
        var_t2_5 = var_t2_4 + 6;
    }
    if (var_t2_5 >= 0x1A) {
        var_t2_6 = var_t2_5 - 0x1A;
        if (var_t2_6 != 0) {
            var_t1_7 = var_a3 << var_t2_6;
            *(u32 *)((u8 *)temp_t3 + 0xCC) = (u32) ((u32) (var_t1_6 | (var_a3 >> (6 - var_t2_6))) >> 0x1A);
        } else {
            var_t1_7 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xCC) = (u32) (var_t1_6 >> 0x1A);
        }
        temp_t0_23 = var_t0 + 1;
        temp_t0_24 = temp_t0_23 + 1;
        temp_v0_7 = *(u8 *)((u8 *)temp_t0_24 + 1);
        temp_a3_7 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_23 + 1);
        var_t0 = temp_t0_24 + 1 + 1;
        var_a3 = (temp_a3_7 << 8) | temp_v0_7;
    } else {
        var_t1_7 = var_t1_6 << 6;
        *(u32 *)((u8 *)temp_t3 + 0xCC) = (u32) (var_t1_6 >> 0x1A);
        var_t2_6 = var_t2_5 + 6;
    }
    if (var_t2_6 >= 0x1F) {
        var_t2_7 = var_t2_6 - 0x1F;
        if (var_t2_7 != 0) {
            var_t1_8 = var_a3 << var_t2_7;
            *(u32 *)((u8 *)temp_t3 + 0xD0) = (u32) ((u32) (var_t1_7 | (var_a3 >> (1 - var_t2_7))) >> 0x1F);
        } else {
            var_t1_8 = var_a3;
            *(u32 *)((u8 *)temp_t3 + 0xD0) = (u32) (var_t1_7 >> 0x1F);
        }
        temp_t0_25 = var_t0 + 1;
        temp_t0_26 = temp_t0_25 + 1;
        temp_v0_8 = *(u8 *)((u8 *)temp_t0_26 + 1);
        temp_a3_8 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_25 + 1);
        var_t0 = temp_t0_26 + 1 + 1;
        var_a3 = (temp_a3_8 << 8) | temp_v0_8;
    } else {
        var_t1_8 = var_t1_7 * 2;
        *(u32 *)((u8 *)temp_t3 + 0xD0) = (u32) (var_t1_7 >> 0x1F);
        var_t2_7 = var_t2_6 + 1;
    }
    if (var_t2_7 < 0x1F) {
        var_t2_8 = var_t2_7 + 1;
        *(u32 *)((u8 *)temp_t3 + 0xD4) = (u32) (var_t1_8 >> 0x1F);
    } else {
        var_t2_8 = var_t2_7 - 0x1F;
        if (var_t2_8 == 0) {
            *(u32 *)((u8 *)temp_t3 + 0xD4) = (u32) (var_t1_8 >> 0x1F);
        } else {
            *(u32 *)((u8 *)temp_t3 + 0xD4) = (u32) ((u32) (var_t1_8 | (var_a3 >> (1 - var_t2_8))) >> 0x1F);
        }
        var_t0 += 4;
    }
    temp_v1 = var_t2_8 + ((var_t0 - arg1) * 8);
    temp_v0 = temp_v1 - 0x39;
    return arg1 + ((s32) ((temp_v0 < 0) int (temp_v1 - 0x32) : temp_v0) >> 3);
}
