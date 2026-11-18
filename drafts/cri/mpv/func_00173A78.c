/* Draft (not built): func_00173A78 at 0x00173A78, size 0x830, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00173A78.c:395: parse error before ')' token
 * Original: asm/nonmatchings/cri/mpv/func_00173A78.s */

s32 func_00173740(void *);                      /* extern */
s32 func_00173748(void *, u8, u8, u32);         /* extern */
s32 func_00173810(void *);                      /* extern */
s32 func_00173A70(void *);                      /* extern */

s32 func_00173A78(u8 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a3_10;
    s32 temp_a3_11;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a3_6;
    s32 temp_a3_7;
    s32 temp_a3_8;
    s32 temp_a3_9;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_10;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s1_9;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u32 temp_a3;
    u32 var_a3;
    u32 var_t0;
    u32 var_t0_10;
    u32 var_t0_2;
    u32 var_t0_3;
    u32 var_t0_4;
    u32 var_t0_5;
    u32 var_t0_6;
    u32 var_t0_7;
    u32 var_t0_8;
    u32 var_t0_9;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 *temp_s0_10;
    u8 *temp_s0_11;
    u8 *temp_s0_12;
    u8 *temp_s0_13;
    u8 *temp_s0_14;
    u8 *temp_s0_15;
    u8 *temp_s0_16;
    u8 *temp_s0_17;
    u8 *temp_s0_18;
    u8 *temp_s0_19;
    u8 *temp_s0_20;
    u8 *temp_s0_21;
    u8 *temp_s0_22;
    u8 *temp_s0_23;
    u8 *temp_s0_24;
    u8 *temp_s0_25;
    u8 *temp_s0_26;
    u8 *temp_s0_27;
    u8 *temp_s0_28;
    u8 *temp_s0_29;
    u8 *temp_s0_2;
    u8 *temp_s0_30;
    u8 *temp_s0_31;
    u8 *temp_s0_32;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s0_5;
    u8 *temp_s0_6;
    u8 *temp_s0_7;
    u8 *temp_s0_8;
    u8 *temp_s0_9;
    u8 *temp_s2;
    u8 *var_s0;

    temp_s2 = arg0 + 0x158;
    *(s32 *)((u8 *)temp_s2 + 0x4DC) = 1;
    temp_a0 = *(s32 *)((u8 *)temp_s2 + 0x328);
    *(s32 *)((u8 *)temp_s2 + 0x4E8) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x4E8) + 1);
    if (((temp_a0 != 0) && (temp_a0 != 0x40)) || (*(s32 *)((u8 *)temp_s2 + 0x32C) != 0)) {
        *(s32 *)((u8 *)temp_s2 + 0x550) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x550) + 1);
    }
    func_00173740(temp_s2);
    temp_s0 = arg1 & ~3;
    temp_s0_2 = temp_s0 + 1;
    temp_s1 = (arg1 - temp_s0) * 8;
    temp_s0_3 = temp_s0_2 + 1;
    temp_a1 = *(u8 *)((u8 *)temp_s0_2 + 1);
    temp_s0_4 = temp_s0_3 + 1;
    temp_a2 = *(u8 *)((u8 *)temp_s0_3 + 1);
    temp_s0_5 = temp_s0_4 + 1;
    temp_s0_6 = temp_s0_5 + 1;
    temp_s0_7 = temp_s0_6 + 1;
    temp_s0_8 = temp_s0_7 + 1;
    temp_s0_9 = temp_s0_8 + 1;
    temp_a3 = (((((*(s8 *)((u8 *)temp_s0_4 + 1) << 8) | *(u8 *)((u8 *)temp_s0_5 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_6 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_7 + 1);
    temp_t0 = ((((((*(s8 *)((u8 *)temp_s0 + 0) << 8) | *(u8 *)((u8 *)temp_s0 + 1)) << 8) | temp_a1) << 8) | temp_a2) << temp_s1;
    if (temp_s1 != 0) {
        var_t0 = temp_a3 << temp_s1;
        *(s32 *)((u8 *)arg0 + 0x158) = (s32) (temp_t0 | (temp_a3 >> -temp_s1));
    } else {
        *(s32 *)((u8 *)arg0 + 0x158) = temp_t0;
        var_t0 = temp_a3;
    }
    temp_s0_10 = temp_s0_9 + 1;
    temp_s0_11 = temp_s0_10 + 1;
    temp_s0_12 = temp_s0_11 + 1;
    var_s0 = temp_s0_12 + 1;
    var_a3 = (((((*(s8 *)((u8 *)temp_s0_8 + 1) << 8) | *(u8 *)((u8 *)temp_s0_9 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_10 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_11 + 1);
    if (temp_s1 >= 0x14) {
        var_s1 = temp_s1 - 0x14;
        if (var_s1 != 0) {
            var_t0_2 = var_a3 << var_s1;
            *(u32 *)((u8 *)temp_s2 + 4) = (u32) ((u32) (var_t0 | (var_a3 >> (0xC - var_s1))) >> 0x14);
        } else {
            var_t0_2 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 4) = (u32) (var_t0 >> 0x14);
        }
        temp_s0_13 = var_s0 + 1;
        temp_s0_14 = temp_s0_13 + 1;
        temp_v0_2 = *(u8 *)((u8 *)temp_s0_14 + 1);
        temp_a3_2 = (((*(s8 *)((u8 *)temp_s0_12 + 1) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_13 + 1);
        var_s0 = temp_s0_14 + 1 + 1;
        var_a3 = (temp_a3_2 << 8) | temp_v0_2;
    } else {
        var_t0_2 = var_t0 << 0xC;
        *(u32 *)((u8 *)temp_s2 + 4) = (u32) (var_t0 >> 0x14);
        var_s1 = temp_s1 + 0xC;
    }
    if (var_s1 >= 0x14) {
        var_s1_2 = var_s1 - 0x14;
        if (var_s1_2 != 0) {
            var_t0_3 = var_a3 << var_s1_2;
            *(u32 *)((u8 *)temp_s2 + 8) = (u32) ((u32) (var_t0_2 | (var_a3 >> (0xC - var_s1_2))) >> 0x14);
        } else {
            var_t0_3 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 8) = (u32) (var_t0_2 >> 0x14);
        }
        temp_s0_15 = var_s0 + 1;
        temp_s0_16 = temp_s0_15 + 1;
        temp_v0_3 = *(u8 *)((u8 *)temp_s0_16 + 1);
        temp_a3_3 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_15 + 1);
        var_s0 = temp_s0_16 + 1 + 1;
        var_a3 = (temp_a3_3 << 8) | temp_v0_3;
    } else {
        var_t0_3 = var_t0_2 << 0xC;
        *(u32 *)((u8 *)temp_s2 + 8) = (u32) (var_t0_2 >> 0x14);
        var_s1_2 = var_s1 + 0xC;
    }
    if (var_s1_2 >= 0x1C) {
        var_s1_3 = var_s1_2 - 0x1C;
        if (var_s1_3 != 0) {
            var_t0_4 = var_a3 << var_s1_3;
            *(u32 *)((u8 *)temp_s2 + 0xC) = (u32) ((u32) (var_t0_3 | (var_a3 >> (4 - var_s1_3))) >> 0x1C);
        } else {
            var_t0_4 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 0xC) = (u32) (var_t0_3 >> 0x1C);
        }
        temp_s0_17 = var_s0 + 1;
        temp_s0_18 = temp_s0_17 + 1;
        temp_v0_4 = *(u8 *)((u8 *)temp_s0_18 + 1);
        temp_a3_4 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_17 + 1);
        var_s0 = temp_s0_18 + 1 + 1;
        var_a3 = (temp_a3_4 << 8) | temp_v0_4;
    } else {
        var_t0_4 = var_t0_3 * 0x10;
        *(u32 *)((u8 *)temp_s2 + 0xC) = (u32) (var_t0_3 >> 0x1C);
        var_s1_3 = var_s1_2 + 4;
    }
    if (var_s1_3 >= 0x1C) {
        var_s1_4 = var_s1_3 - 0x1C;
        if (var_s1_4 != 0) {
            var_t0_5 = var_a3 << var_s1_4;
            *(u32 *)((u8 *)temp_s2 + 0x10) = (u32) ((u32) (var_t0_4 | (var_a3 >> (4 - var_s1_4))) >> 0x1C);
        } else {
            var_t0_5 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 0x10) = (u32) (var_t0_4 >> 0x1C);
        }
        temp_s0_19 = var_s0 + 1;
        temp_s0_20 = temp_s0_19 + 1;
        temp_v0_5 = *(u8 *)((u8 *)temp_s0_20 + 1);
        temp_a3_5 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_19 + 1);
        var_s0 = temp_s0_20 + 1 + 1;
        var_a3 = (temp_a3_5 << 8) | temp_v0_5;
    } else {
        var_t0_5 = var_t0_4 * 0x10;
        *(u32 *)((u8 *)temp_s2 + 0x10) = (u32) (var_t0_4 >> 0x1C);
        var_s1_4 = var_s1_3 + 4;
    }
    if (var_s1_4 >= 0xE) {
        var_s1_5 = var_s1_4 - 0xE;
        if (var_s1_5 != 0) {
            var_t0_6 = var_a3 << var_s1_5;
            *(u32 *)((u8 *)temp_s2 + 0x14) = (u32) ((u32) (var_t0_5 | (var_a3 >> (0x12 - var_s1_5))) >> 0xE);
        } else {
            var_t0_6 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 0x14) = (u32) (var_t0_5 >> 0xE);
        }
        temp_s0_21 = var_s0 + 1;
        temp_s0_22 = temp_s0_21 + 1;
        temp_v0_6 = *(u8 *)((u8 *)temp_s0_22 + 1);
        temp_a3_6 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_21 + 1);
        var_s0 = temp_s0_22 + 1 + 1;
        var_a3 = (temp_a3_6 << 8) | temp_v0_6;
    } else {
        var_t0_6 = var_t0_5 << 0x12;
        *(u32 *)((u8 *)temp_s2 + 0x14) = (u32) (var_t0_5 >> 0xE);
        var_s1_5 = var_s1_4 + 0x12;
    }
    if (var_s1_5 >= 0x1F) {
        var_s1_6 = var_s1_5 - 0x1F;
        if (var_s1_6 != 0) {
            var_t0_7 = var_a3 << var_s1_6;
            *(u32 *)((u8 *)temp_s2 + 0x18) = (u32) ((u32) (var_t0_6 | (var_a3 >> (1 - var_s1_6))) >> 0x1F);
        } else {
            var_t0_7 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 0x18) = (u32) (var_t0_6 >> 0x1F);
        }
        temp_s0_23 = var_s0 + 1;
        temp_s0_24 = temp_s0_23 + 1;
        temp_v0_7 = *(u8 *)((u8 *)temp_s0_24 + 1);
        temp_a3_7 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_23 + 1);
        var_s0 = temp_s0_24 + 1 + 1;
        var_a3 = (temp_a3_7 << 8) | temp_v0_7;
    } else {
        var_t0_7 = var_t0_6 * 2;
        *(u32 *)((u8 *)temp_s2 + 0x18) = (u32) (var_t0_6 >> 0x1F);
        var_s1_6 = var_s1_5 + 1;
    }
    if (var_s1_6 >= 0x16) {
        var_s1_7 = var_s1_6 - 0x16;
        if (var_s1_7 != 0) {
            var_t0_8 = var_a3 << var_s1_7;
            *(u32 *)((u8 *)temp_s2 + 0x1C) = (u32) ((u32) (var_t0_7 | (var_a3 >> (0xA - var_s1_7))) >> 0x16);
        } else {
            var_t0_8 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 0x1C) = (u32) (var_t0_7 >> 0x16);
        }
        temp_s0_25 = var_s0 + 1;
        temp_s0_26 = temp_s0_25 + 1;
        temp_v0_8 = *(u8 *)((u8 *)temp_s0_26 + 1);
        temp_a3_8 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_25 + 1);
        var_s0 = temp_s0_26 + 1 + 1;
        var_a3 = (temp_a3_8 << 8) | temp_v0_8;
    } else {
        var_t0_8 = var_t0_7 << 0xA;
        *(u32 *)((u8 *)temp_s2 + 0x1C) = (u32) (var_t0_7 >> 0x16);
        var_s1_7 = var_s1_6 + 0xA;
    }
    if (var_s1_7 >= 0x1F) {
        var_s1_8 = var_s1_7 - 0x1F;
        if (var_s1_8 != 0) {
            var_t0_9 = var_a3 << var_s1_8;
            *(u32 *)((u8 *)temp_s2 + 0x20) = (u32) ((u32) (var_t0_8 | (var_a3 >> (1 - var_s1_8))) >> 0x1F);
        } else {
            var_t0_9 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 0x20) = (u32) (var_t0_8 >> 0x1F);
        }
        temp_s0_27 = var_s0 + 1;
        temp_s0_28 = temp_s0_27 + 1;
        temp_v0_9 = *(u8 *)((u8 *)temp_s0_28 + 1);
        temp_a3_9 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_27 + 1);
        var_s0 = temp_s0_28 + 1 + 1;
        var_a3 = (temp_a3_9 << 8) | temp_v0_9;
    } else {
        var_t0_9 = var_t0_8 * 2;
        *(u32 *)((u8 *)temp_s2 + 0x20) = (u32) (var_t0_8 >> 0x1F);
        var_s1_8 = var_s1_7 + 1;
    }
    if (var_s1_8 >= 0x1F) {
        var_s1_9 = var_s1_8 - 0x1F;
        if (var_s1_9 != 0) {
            var_t0_10 = var_a3 << var_s1_9;
            *(u32 *)((u8 *)temp_s2 + 0x24) = (u32) ((u32) (var_t0_9 | (var_a3 >> (1 - var_s1_9))) >> 0x1F);
        } else {
            var_t0_10 = var_a3;
            *(u32 *)((u8 *)temp_s2 + 0x24) = (u32) (var_t0_9 >> 0x1F);
        }
        temp_s0_29 = var_s0 + 1;
        temp_s0_30 = temp_s0_29 + 1;
        temp_v0_10 = *(u8 *)((u8 *)temp_s0_30 + 1);
        temp_a3_10 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_29 + 1);
        var_s0 = temp_s0_30 + 1 + 1;
        var_a3 = (temp_a3_10 << 8) | temp_v0_10;
    } else {
        var_t0_10 = var_t0_9 * 2;
        *(u32 *)((u8 *)temp_s2 + 0x24) = (u32) (var_t0_9 >> 0x1F);
        var_s1_9 = var_s1_8 + 1;
    }
    var_v0 = var_s1_9 < 0x1F;
    if (*(u32 *)((u8 *)temp_s2 + 0x24) != 0) {
        var_a0 = 0x3F;
        do {
            var_s1_9 += 8;
            if (var_s1_9 < 0x20) {
                var_t0_10 <<= 8;
            } else {
                var_s1_9 -= 0x20;
                var_t0_10 = var_a3 << var_s1_9;
                temp_s0_31 = var_s0 + 1;
                temp_s0_32 = temp_s0_31 + 1;
                temp_v0_11 = *(u8 *)((u8 *)temp_s0_32 + 1);
                temp_a3_11 = (((*(s8 *)((u8 *)var_s0 + 0) << 8) | *(u8 *)((u8 *)var_s0 + 1)) << 8) | *(u8 *)((u8 *)temp_s0_31 + 1);
                var_s0 = temp_s0_32 + 1 + 1;
                var_a3 = (temp_a3_11 << 8) | temp_v0_11;
            }
            var_a0 -= 1;
        } while (var_a0 >= 0);
        var_v0 = var_s1_9 < 0x1F;
    }
    if (var_v0 == 0) {
        var_s1_10 = var_s1_9 - 0x1F;
        if (var_s1_10 != 0) {
            *(u32 *)((u8 *)temp_s2 + 0x28) = (u32) ((u32) (var_t0_10 | (var_a3 >> (1 - var_s1_10))) >> 0x1F);
        } else {
            *(u32 *)((u8 *)temp_s2 + 0x28) = (u32) (var_t0_10 >> 0x1F);
        }
        var_s0 += 4;
    } else {
        var_s1_10 = var_s1_9 + 1;
        *(u32 *)((u8 *)temp_s2 + 0x28) = (u32) (var_t0_10 >> 0x1F);
    }
    var_v1 = 0x3F;
    if (*(u32 *)((u8 *)temp_s2 + 0x28) != 0) {
        do {
            var_s1_10 += 8;
            var_v1 -= 1;
            if (var_s1_10 >= 0x20) {
                var_s1_10 -= 0x20;
                var_s0 += 4;
            }
        } while (var_v1 >= 0);
    }
    func_00173748(temp_s2, temp_a1, temp_a2, var_a3);
    func_00173810(temp_s2);
    func_00173A70(temp_s2);
    temp_v1_2 = *(s32 *)((u8 *)temp_s2 + 0x2C4);
    var_v0_2 = temp_v1_2 & 0xF;
    if (temp_v1_2 == 0) {
        *(s32 *)((u8 *)temp_s2 + 0x550) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x550) + 1);
        var_v0_2 = temp_v1_2 & 0xF;
    }
    if (var_v0_2 != 0) {
        *(s32 *)((u8 *)temp_s2 + 0x554) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x554) + 1);
    }
    temp_v1_3 = *(s32 *)((u8 *)temp_s2 + 0x2C8);
    var_v0_3 = temp_v1_3 & 0xF;
    if (temp_v1_3 == 0) {
        *(s32 *)((u8 *)temp_s2 + 0x550) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x550) + 1);
        var_v0_3 = temp_v1_3 & 0xF;
    }
    if (var_v0_3 != 0) {
        *(s32 *)((u8 *)temp_s2 + 0x554) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x554) + 1);
    }
    if ((u32) (*(u32 *)((u8 *)temp_s2 + 0xC) - 1) >= 4U) {
        *(s32 *)((u8 *)temp_s2 + 0x550) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x550) + 1);
    }
    if ((u32) (*(u32 *)((u8 *)temp_s2 + 0x10) - 1) >= 8U) {
        *(s32 *)((u8 *)temp_s2 + 0x550) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x550) + 1);
    }
    if (*(u32 *)((u8 *)temp_s2 + 0x18) == 0) {
        *(s32 *)((u8 *)temp_s2 + 0x550) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x550) + 1);
    }
    if (*(u32 *)((u8 *)temp_s2 + 0x20) != 0) {
        *(s32 *)((u8 *)temp_s2 + 0x550) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x550) + 1);
    }
    temp_v1 = var_s1_10 + ((var_s0 - arg1) * 8);
    *(s32 *)((u8 *)temp_s2 + 0x32C) = 1;
    temp_v0 = temp_v1 - 0x39;
    *(s32 *)((u8 *)temp_s2 + 0x328) = 0x10;
    return arg1 + ((s32) ((temp_v0 < 0) int (temp_v1 - 0x32) : temp_v0) >> 3);
}
