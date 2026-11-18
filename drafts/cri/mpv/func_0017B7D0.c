/* Draft (not built): func_0017B7D0 at 0x0017B7D0, size 0x4A4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B7D0.s */

extern s32 D_00424C40;

s32 func_0017B7D0(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a3_6;
    s32 temp_a3_7;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_t1_4;
    s32 var_t1_5;
    s32 var_t1_6;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a3;
    u32 var_a1_2;
    u32 var_a1_3;
    u32 var_a1_4;
    u32 var_a1_5;
    u32 var_a3;
    u32 var_t2;
    u32 var_t2_2;
    u32 var_t2_3;
    u32 var_t2_4;
    u32 var_t2_5;
    u32 var_t2_6;
    u32 var_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v1;
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
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t0_9;
    u8 *var_t0;

    temp_t0 = arg0 & ~3;
    temp_t0_2 = temp_t0 + 1;
    temp_t1 = (arg0 - temp_t0) * 8;
    temp_t0_3 = temp_t0_2 + 1;
    temp_t0_4 = temp_t0_3 + 1;
    temp_t0_5 = temp_t0_4 + 1;
    temp_t0_6 = temp_t0_5 + 1;
    temp_t0_7 = temp_t0_6 + 1;
    temp_t0_8 = temp_t0_7 + 1;
    temp_t0_9 = temp_t0_8 + 1;
    temp_a3 = (((((*(s8 *)((u8 *)temp_t0_4 + 1) << 8) | *(u8 *)((u8 *)temp_t0_5 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_6 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_7 + 1);
    temp_t2 = ((((((*(s8 *)((u8 *)temp_t0 + 0) << 8) | *(u8 *)((u8 *)temp_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_2 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_3 + 1)) << temp_t1;
    if (temp_t1 == 0) {
        goto block_3;
    }
    var_a1 = temp_t2 | (temp_a3 >> -temp_t1);
    var_t2 = temp_a3 << temp_t1;
    goto block_4;
block_3:
    var_a1 = temp_t2;
    var_t2 = temp_a3;
block_4:
    temp_t0_10 = temp_t0_9 + 1;
    temp_t0_11 = temp_t0_10 + 1;
    temp_t0_12 = temp_t0_11 + 1;
    var_t0 = temp_t0_12 + 1;
    var_a3 = (((((*(s8 *)((u8 *)temp_t0_8 + 1) << 8) | *(u8 *)((u8 *)temp_t0_9 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_10 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_11 + 1);
    var_v0 = 0;
    if (var_a1 != 0x101) {
        goto block_66;
    }
    if (temp_t1 >= 0x1B) {
        goto block_7;
    }
    var_t1 = temp_t1 + 5;
    goto block_9;
block_7:
    var_t1 = temp_t1 - 0x1B;
    temp_t0_13 = var_t0 + 1;
    var_t2_2 = ((var_t1 ^ 0) != 0) ? (var_a3 << var_t1) : var_a3;
    temp_t0_14 = temp_t0_13 + 1;
    temp_v1 = *(u8 *)((u8 *)temp_t0_13 + 1);
    temp_v0 = *(u8 *)((u8 *)temp_t0_14 + 1);
    temp_a3_2 = ((*(s8 *)((u8 *)temp_t0_12 + 1) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8;
    var_t0 = temp_t0_14 + 1 + 1;
    var_a3 = ((temp_a3_2 | temp_v1) << 8) | temp_v0;
    goto block_10;
block_9:
    var_t2_2 = var_t2 << 5;
block_10:
    if (var_t1 != 0x1F) {
        goto block_13;
    }
    var_t2_3 = var_a3;
    temp_t0_15 = var_t0 + 1;
    var_t1_2 = 0;
    temp_t0_16 = temp_t0_15 + 1;
    temp_v0_2 = *(u8 *)((u8 *)temp_t0_16 + 1);
    temp_a3_3 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_15 + 1);
    var_t0 = temp_t0_16 + 1 + 1;
    var_a3 = (temp_a3_3 << 8) | temp_v0_2;
    goto block_14;
block_13:
    var_t1_2 = var_t1 + 1;
    var_t2_3 = var_t2_2 * 2;
block_14:
    var_v0 = 0;
    if ((var_t2_2 >> 0x1F) != 0) {
        goto block_66;
    }
    if (var_t1_2 != 0x1F) {
        goto block_17;
    }
    var_t2_4 = var_a3;
    temp_t0_17 = var_t0 + 1;
    var_t1_3 = 0;
    temp_t0_18 = temp_t0_17 + 1;
    temp_v0_3 = *(u8 *)((u8 *)temp_t0_18 + 1);
    temp_a3_4 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_17 + 1);
    var_t0 = temp_t0_18 + 1 + 1;
    var_a3 = (temp_a3_4 << 8) | temp_v0_3;
    goto block_18;
block_17:
    var_t1_3 = var_t1_2 + 1;
    var_t2_4 = var_t2_3 * 2;
block_18:
    var_v0 = 0;
    if ((var_t2_3 >> 0x1F) == 0) {
        goto block_66;
    }
    var_a1_2 = var_t2_4 >> 0x1A;
    if (var_t1_3 < 0x1B) {
        goto block_21;
    }
    var_a1_2 |= var_a3 >> (0x3A - var_t1_3);
block_21:
    if (var_a1_2 == 0xB) {
        goto block_28;
    }
    if (var_a1_2 < 0xBU) {
        goto block_64;
    }
    if (var_a1_2 >= 0x18U) {
        goto block_64;
    }
    var_t1_4 = var_t1_3 + 5;
    if (var_a1_2 < 0x16U) {
        goto block_64;
    }
    if (var_t1_4 >= 0x20) {
        goto block_31;
    }
    var_t2_5 = var_t2_4 << 5;
    goto block_32;
block_28:
    var_t1_4 = var_t1_3 + 6;
    if (var_t1_4 >= 0x20) {
        goto block_30;
    }
    var_t2_5 = var_t2_4 << 6;
    goto block_32;
block_30:
block_31:
    var_t1_4 -= 0x20;
    var_t2_5 = var_a3 << var_t1_4;
    temp_t0_19 = var_t0 + 1;
    temp_t0_20 = temp_t0_19 + 1;
    temp_v0_4 = *(u8 *)((u8 *)temp_t0_20 + 1);
    temp_a3_5 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_19 + 1);
    var_t0 = temp_t0_20 + 1 + 1;
    var_a3 = (temp_a3_5 << 8) | temp_v0_4;
block_32:
    var_a2 = arg2 - 1;
    var_v0_2 = var_t1_4 < 0x16;
loop_33:
    var_a1_3 = var_t2_5 >> 0x15;
    if (var_v0_2 != 0) {
        goto block_35;
    }
    var_a1_3 |= var_a3 >> (0x35 - var_t1_4);
block_35:
    var_v1 = var_a2 - 1;
    if (var_a1_3 != 8) {
        goto block_42;
    }
    var_t1_4 += 0xB;
    if (var_t1_4 >= 0x20) {
        goto block_38;
    }
    var_t2_5 <<= 0xB;
    goto block_40;
block_38:
    var_t1_4 -= 0x20;
    var_t2_5 = var_a3 << var_t1_4;
    temp_t0_21 = var_t0 + 1;
    temp_t0_22 = temp_t0_21 + 1;
    temp_v0_5 = *(u8 *)((u8 *)temp_t0_22 + 1);
    temp_a3_6 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_21 + 1);
    var_t0 = temp_t0_22 + 1 + 1;
    var_a3 = (temp_a3_6 << 8) | temp_v0_5;
block_40:
    var_a2 -= 0x21;
    var_v0_2 = var_t1_4 < 0x16;
    if (var_a2 >= 0x22) {
        goto loop_33;
    }
    var_v1 = var_a2 - 1;
block_42:
    var_v0 = 0;
    if (var_v1 >= 0x21U) {
        goto block_66;
    }
    temp_a2 = *(&D_00424C40 + (var_a2 * 2));
    temp_a0 = temp_a2 & 0xFF;
    temp_v1_2 = 0x20 - temp_a0;
    var_a1_4 = var_t2_5 >> temp_v1_2;
    if (var_t1_4 < temp_v1_2) {
        goto block_50;
    }
    var_t1_5 = (var_t1_4 + temp_a0) - 0x20;
    if (var_t1_5 != 0) {
        goto block_46;
    }
    var_t2_6 = var_a3;
    goto block_48;
block_46:
    var_a1_4 = (u32) (var_t2_5 | (var_a3 >> (temp_a0 - var_t1_5))) >> temp_v1_2;
    var_t2_6 = var_a3 << var_t1_5;
block_48:
    temp_t0_23 = var_t0 + 1;
    temp_t0_24 = temp_t0_23 + 1;
    temp_v0_6 = *(u8 *)((u8 *)temp_t0_24 + 1);
    temp_a3_7 = (((*(s8 *)((u8 *)var_t0 + 0) << 8) | *(u8 *)((u8 *)var_t0 + 1)) << 8) | *(u8 *)((u8 *)temp_t0_23 + 1);
    var_t0 = temp_t0_24 + 1 + 1;
    var_a3 = (temp_a3_7 << 8) | temp_v0_6;
    goto block_51;
block_50:
    var_t2_6 = var_t2_5 << temp_a0;
    var_t1_5 = var_t1_4 + temp_a0;
block_51:
    var_v0 = 0;
    if (var_a1_4 != (temp_a2 >> 8)) {
        goto block_66;
    }
    var_a1_5 = var_t2_6 >> 0x1A;
    if (var_t1_5 < 0x1B) {
        goto block_54;
    }
    var_a1_5 |= var_a3 >> (0x3A - var_t1_5);
block_54:
    if (var_a1_5 == 0xB) {
        goto block_60;
    }
    if (var_a1_5 < 0xBU) {
        goto block_64;
    }
    if (var_a1_5 >= 0x18U) {
        goto block_64;
    }
    var_t1_6 = var_t1_5 + 5;
    if (var_a1_5 < 0x16U) {
        goto block_64;
    }
    goto block_61;
block_60:
    var_t1_6 = var_t1_5 + 6;
block_61:
    if (var_t1_6 < 0x20) {
        goto block_65;
    }
    var_t1_6 -= 0x20;
    var_t0 += 4;
    goto block_65;
block_64:
    return 0;
block_65:
    var_v0 = (arg1 < (((var_t0 + ((s32) (var_t1_6 + 7) >> 3)) - 8) - arg0)) == 0;
block_66:
    return var_v0;
}
