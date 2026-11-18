/* Draft (not built): func_00179400 at 0x00179400, size 0x45C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 92 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00179400.s */

void func_00179400(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t0_4;
    s32 temp_t0_5;
    s32 temp_t0_6;
    s32 temp_t0_7;
    s32 temp_t0_8;
    s32 temp_t1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_t2_8;
    u32 temp_t2;
    u32 var_a2;
    u32 var_a3;
    u32 var_t0;
    u32 var_t2;
    u32 var_t2_2;
    u32 var_t2_3;
    u32 var_t2_4;
    u32 var_t2_5;
    u32 var_t2_6;
    u32 var_t2_7;
    u32 var_t2_9;
    u32 var_t3;
    u32 var_t4;
    u32 var_t5;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
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
    u8 *temp_t1_2;
    u8 *temp_t1_3;
    u8 *temp_t1_4;
    u8 *temp_t1_5;
    u8 *temp_t1_6;
    u8 *temp_t1_7;
    u8 *temp_t1_8;
    u8 *temp_t1_9;
    u8 *var_t1;

    temp_t1 = (arg1 + 4) & ~3;
    temp_t1_2 = temp_t1 + 1;
    temp_t1_3 = temp_t1_2 + 1;
    temp_t1_4 = temp_t1_3 + 1;
    temp_t1_5 = temp_t1_4 + 1;
    temp_t1_6 = temp_t1_5 + 1;
    temp_t1_7 = temp_t1_6 + 1;
    temp_t1_8 = temp_t1_7 + 1;
    temp_a1 = ((arg1 - temp_t1) + 4) * 8;
    var_t0 = (((((*(s8 *)((u8 *)temp_t1_4 + 1) << 8) | *(u8 *)((u8 *)temp_t1_5 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_6 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_7 + 1);
    temp_t2 = ((((((*(s8 *)((u8 *)temp_t1 + 0) << 8) | *(u8 *)((u8 *)temp_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_2 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_3 + 1)) << temp_a1;
    var_t1 = temp_t1_8 + 1;
    if (temp_a1 >= 0x1E) {
        var_a1 = temp_a1 - 0x1E;
        if (var_a1 != 0) {
            var_t5 = (u32) (temp_t2 | (var_t0 >> 1)) >> 0x1E;
            var_t2 = var_t0 * 2;
        } else {
            var_t5 = temp_t2 >> 0x1E;
            var_t2 = var_t0;
        }
        temp_t1_9 = var_t1 + 1;
        temp_t1_10 = temp_t1_9 + 1;
        temp_v0 = *(u8 *)((u8 *)temp_t1_10 + 1);
        temp_t0 = (((*(s8 *)((u8 *)temp_t1_8 + 1) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_9 + 1);
        var_t1 = temp_t1_10 + 1 + 1;
        var_t0 = (temp_t0 << 8) | temp_v0;
    } else {
        var_t5 = temp_t2 >> 0x1E;
        var_t2 = temp_t2 * 4;
        var_a1 = temp_a1 + 2;
    }
    var_a1_2 = var_a1 + 2;
    if (var_a1_2 < 0x20) {
        var_t2_2 = var_t2 * 4;
    } else {
        var_a1_2 -= 0x20;
        var_t2_2 = var_t0 << var_a1_2;
        temp_t1_11 = var_t1 + 1;
        temp_t1_12 = temp_t1_11 + 1;
        temp_v0_2 = *(u8 *)((u8 *)temp_t1_12 + 1);
        temp_t0_2 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_11 + 1);
        var_t1 = temp_t1_12 + 1 + 1;
        var_t0 = (temp_t0_2 << 8) | temp_v0_2;
    }
    var_t4 = var_t2_2 >> 0x1D;
    if (var_a1_2 >= 0x1D) {
        var_a1_3 = var_a1_2 - 0x1D;
        if (var_a1_3 != 0) {
            var_t4 = (u32) (var_t2_2 | (var_t0 >> (3 - var_a1_3))) >> 0x1D;
            var_t2_3 = var_t0 << var_a1_3;
        } else {
            var_t2_3 = var_t0;
        }
        temp_t1_13 = var_t1 + 1;
        temp_t1_14 = temp_t1_13 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_t1_14 + 1);
        temp_t0_3 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_13 + 1);
        var_t1 = temp_t1_14 + 1 + 1;
        var_t0 = (temp_t0_3 << 8) | temp_v0_3;
    } else {
        var_t2_3 = var_t2_2 * 8;
        var_a1_3 = var_a1_2 + 3;
    }
    var_a1_4 = var_a1_3 + 1;
    if (var_a1_4 < 0x20) {
        var_t2_4 = var_t2_3 * 2;
    } else {
        var_a1_4 -= 0x20;
        var_t2_4 = var_t0 << var_a1_4;
        temp_t1_15 = var_t1 + 1;
        temp_t1_16 = temp_t1_15 + 1;
        temp_v0_4 = *(u8 *)((u8 *)temp_t1_16 + 1);
        temp_t0_4 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_15 + 1);
        var_t1 = temp_t1_16 + 1 + 1;
        var_t0 = (temp_t0_4 << 8) | temp_v0_4;
    }
    var_t3 = var_t2_4 >> 0x11;
    if (var_a1_4 >= 0x11) {
        var_a1_5 = var_a1_4 - 0x11;
        if (var_a1_5 != 0) {
            var_t3 = (u32) (var_t2_4 | (var_t0 >> (0xF - var_a1_5))) >> 0x11;
            var_t2_5 = var_t0 << var_a1_5;
        } else {
            var_t2_5 = var_t0;
        }
        temp_t1_17 = var_t1 + 1;
        temp_t1_18 = temp_t1_17 + 1;
        temp_v0_5 = *(u8 *)((u8 *)temp_t1_18 + 1);
        temp_t0_5 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_17 + 1);
        var_t1 = temp_t1_18 + 1 + 1;
        var_t0 = (temp_t0_5 << 8) | temp_v0_5;
    } else {
        var_t2_5 = var_t2_4 << 0xF;
        var_a1_5 = var_a1_4 + 0xF;
    }
    var_a1_6 = var_a1_5 + 1;
    if (var_a1_6 < 0x20) {
        var_t2_6 = var_t2_5 * 2;
    } else {
        var_a1_6 -= 0x20;
        var_t2_6 = var_t0 << var_a1_6;
        temp_t1_19 = var_t1 + 1;
        temp_t1_20 = temp_t1_19 + 1;
        temp_v0_6 = *(u8 *)((u8 *)temp_t1_20 + 1);
        temp_t0_6 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_19 + 1);
        var_t1 = temp_t1_20 + 1 + 1;
        var_t0 = (temp_t0_6 << 8) | temp_v0_6;
    }
    var_a3 = var_t2_6 >> 0x11;
    if (var_a1_6 >= 0x11) {
        var_a1_7 = var_a1_6 - 0x11;
        if (var_a1_7 != 0) {
            var_a3 = (u32) (var_t2_6 | (var_t0 >> (0xF - var_a1_7))) >> 0x11;
            var_t2_7 = var_t0 << var_a1_7;
        } else {
            var_t2_7 = var_t0;
        }
        temp_t1_21 = var_t1 + 1;
        temp_t1_22 = temp_t1_21 + 1;
        temp_v0_7 = *(u8 *)((u8 *)temp_t1_22 + 1);
        temp_t0_7 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_21 + 1);
        var_t1 = temp_t1_22 + 1 + 1;
        var_t0 = (temp_t0_7 << 8) | temp_v0_7;
    } else {
        var_t2_7 = var_t2_6 << 0xF;
        var_a1_7 = var_a1_6 + 0xF;
    }
    var_a1_8 = var_a1_7 + 1;
    if (var_a1_8 < 0x20) {
        var_t2_8 = var_t2_7 * 2;
    } else {
        var_a1_8 -= 0x20;
        var_t2_8 = var_t0 << var_a1_8;
        temp_t1_23 = var_t1 + 1;
        temp_t1_24 = temp_t1_23 + 1;
        temp_v0_8 = *(u8 *)((u8 *)temp_t1_24 + 1);
        temp_t0_8 = (((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_23 + 1);
        var_t1 = temp_t1_24 + 1 + 1;
        var_t0 = (temp_t0_8 << 8) | temp_v0_8;
    }
    var_a1_9 = var_a1_8 + 1;
    if (var_a1_9 < 0x20) {
        var_t2_9 = var_t2_8 * 2;
    } else {
        var_a1_9 -= 0x20;
        var_t2_9 = var_t0 << var_a1_9;
        temp_t1_25 = var_t1 + 1;
        var_t0 = (((((*(s8 *)((u8 *)var_t1 + 0) << 8) | *(u8 *)((u8 *)var_t1 + 1)) << 8) | *(u8 *)((u8 *)temp_t1_25 + 1)) << 8) | *(u8 *)((u8 *)(temp_t1_25 + 1) + 1);
    }
    var_a2 = var_t2_9 >> 0xA;
    if (var_a1_9 >= 0xA) {
        temp_a1_2 = var_a1_9 - 0xA;
        if (temp_a1_2 != 0) {
            var_a2 = (u32) (var_t2_9 | (var_t0 >> (0x16 - temp_a1_2))) >> 0xA;
        }
    }
    *(u32 *)((u8 *)arg0 + 8) = var_a2;
    *(s32 *)((u8 *)arg0 + 0) = (s32) (var_t5 == 0);
    *(s32 *)((u8 *)arg0 + 4) = (s32) ((var_t4 << 0x1C) | (var_t3 << 0xD) | (var_a3 >> 2));
    *arg2 = 0xC;
}
