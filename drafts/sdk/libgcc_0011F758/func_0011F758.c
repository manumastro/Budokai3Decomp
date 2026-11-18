/* Draft (not built): func_0011F758 at 0x0011F758, size 0x694, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 336 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_0011F758.s */

extern s32 D_0045E690;

s64 func_0011F758(s64 arg0, s64 arg1, s32 arg2, s32 arg3) {
    s32 temp_a2_2;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_t4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_t4;
    s32 var_t8;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_a0_5;
    s64 temp_a2;
    s64 temp_a3;
    s64 temp_t0;
    s64 temp_t6;
    s64 var_a1;
    s64 var_a2_2;
    s64 var_t1;
    s64 var_t1_2;
    s64 var_t2;
    s64 var_t2_2;
    s64 var_t3;
    s64 var_t5;
    s64 var_v1;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_a1_3;
    u32 temp_a1_4;
    u32 temp_a1_5;
    u32 temp_a1_6;
    u32 temp_a1_7;
    u32 temp_a2_3;
    u32 temp_a2_6;
    u32 temp_a2_7;
    u32 temp_hi;
    u32 temp_t0_3;
    u32 temp_t2;
    u32 temp_t2_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u32 temp_v1_5;
    u32 temp_v1_6;
    u32 temp_v1_7;
    u32 temp_v1_8;
    u32 temp_v1_9;
    u32 var_a1_2;
    u32 var_a2;
    u32 var_a2_3;
    u32 var_a2_4;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_a3_3;
    u32 var_a3_4;
    u32 var_t0;
    u32 var_t2_3;
    u32 var_v1_2;
    u32 var_v1_3;
    u32 var_v1_4;
    u32 var_v1_5;
    u32 var_v1_6;
    u32 var_v1_7;
    u64 temp_a1_8;
    u64 var_v0_6;

    var_a1 = arg1;
    var_t1 = arg0;
    var_t2 = var_t1 >> 0x20;
    temp_a0 = (s64) (var_t2 << 0x20) >> 0x20;
    var_t8 = 0;
    if (temp_a0 < 0) {
        temp_a2 = (arg2 & (-1 << 0x20)) | ((u64) (((s64) (var_t1 << 0x20) >> 0x20) * -0x100000000) >> 0x20);
        var_t8 = -1;
        var_t1 = (temp_a2 & (0xFFFF0000U >> 0x20)) | ((-temp_a0 - (((s64) (temp_a2 << 0x20) >> 0x20) != 0)) << 0x20);
        var_t2 = var_t1 >> 0x20;
    }
    temp_a0_2 = var_a1 >> 0x20;
    if (temp_a0_2 < 0) {
        temp_a3 = (arg3 & (-1 << 0x20)) | ((u64) (((s64) (var_a1 << 0x20) >> 0x20) * -0x100000000) >> 0x20);
        var_t8 = ~var_t8;
        var_a1 = (temp_a3 & (0xFFFF0000U >> 0x20)) | ((-temp_a0_2 - (((s64) (temp_a3 << 0x20) >> 0x20) != 0)) << 0x20);
    }
    temp_t0 = var_a1 >> 0x20;
    var_t3 = (s64) (var_t1 << 0x20) >> 0x20;
    var_t2_2 = (s64) (var_t2 << 0x20) >> 0x20;
    var_t1_2 = (s64) (var_a1 << 0x20) >> 0x20;
    if (temp_t0 == 0) {
        if ((u32) var_t2_2 < (u32) var_t1_2) {
            if ((u32) var_t1_2 <= 0xFFFFU) {
                var_a0 = ((u32) var_t1_2 < 0x100U) ? 0 : 8;
            } else {
                var_a0 = ((u32) var_t1_2 > 0xFFFFFFU) ? 0x18 : 0x10;
            }
            temp_a2_2 = 0x20 - (*(&D_0045E690 + ((u32) var_t1_2 >> var_a0)) + var_a0);
            if (temp_a2_2 != 0) {
                temp_v0 = (u32) var_t3 >> (0x20 - temp_a2_2);
                var_t3 <<= temp_a2_2;
                var_t2_2 = (var_t2_2 << temp_a2_2) | temp_v0;
                var_t1_2 <<= temp_a2_2;
            }
            temp_a2_3 = (u32) var_t1_2 >> 0x10;
            temp_t0_2 = var_t1_2 & 0xFFFF;
            var_a3 = (u32) var_t2_2 / temp_a2_3;
            temp_a1 = var_a3 * temp_t0_2;
            var_v1_2 = (((u32) var_t2_2 % temp_a2_3) << 0x10) | ((u32) var_t3 >> 0x10);
            if (var_v1_2 < temp_a1) {
                var_v1_2 += var_t1_2;
                var_a3 -= 1;
                if ((var_v1_2 >= (u32) var_t1_2) && (var_v1_2 < temp_a1)) {
                    var_a3 -= 1;
                    var_v1_2 += var_t1_2;
                }
            }
            temp_v1 = var_v1_2 - temp_a1;
            var_a2 = temp_v1 / temp_a2_3;
            temp_a1_2 = var_a2 * temp_t0_2;
            temp_v1_2 = ((temp_v1 % temp_a2_3) << 0x10) | (var_t3 & 0xFFFF);
            var_v0 = var_a3 << 0x10;
            if (temp_v1_2 < temp_a1_2) {
                temp_v1_3 = temp_v1_2 + var_t1_2;
                var_a2 -= 1;
                if (temp_v1_3 >= (u32) var_t1_2) {
                    var_a2 = (((temp_v1_3 < temp_a1_2) ^ 0) != 0) ? (var_a2 - 1) : var_a2;
                }
                var_v0 = var_a3 << 0x10;
            }
            var_a2_2 = var_v0 | var_a2;
            goto block_73;
        }
        var_v0_2 = (u32) var_t1_2 > 0xFFFFU;
        if (var_t1_2 == 0) {
            var_t1_2 = (s64) (1U / (u32) temp_t0);
            var_v0_2 = (u32) var_t1_2 > 0xFFFFU;
        }
        if (var_v0_2 == 0) {
            var_a0_2 = ((u32) var_t1_2 < 0x100U) ? 0 : 8;
        } else {
            var_a0_2 = ((u32) var_t1_2 > 0xFFFFFFU) ? 0x18 : 0x10;
        }
        temp_a2_4 = 0x20 - (*(&D_0045E690 + ((u32) var_t1_2 >> var_a0_2)) + var_a0_2);
        temp_a3_2 = 0x20 - temp_a2_4;
        if (temp_a2_4 == 0) {
            var_t2_3 = var_t2_2 - var_t1_2;
            var_t5 = 1;
            var_t0 = (u32) var_t1_2 >> 0x10;
            var_t4 = var_t1_2 & 0xFFFF;
        } else {
            temp_v0_2 = (u32) var_t3 >> temp_a3_2;
            var_t3 <<= temp_a2_4;
            temp_a0_3 = (u32) var_t2_2 >> temp_a3_2;
            temp_t2 = (var_t2_2 << temp_a2_4) | temp_v0_2;
            var_t1_2 <<= temp_a2_4;
            var_t0 = (u32) var_t1_2 >> 0x10;
            var_t4 = var_t1_2 & 0xFFFF;
            var_a3_2 = temp_a0_3 / var_t0;
            temp_a1_3 = var_a3_2 * var_t4;
            var_v1_3 = ((temp_a0_3 % var_t0) << 0x10) | (temp_t2 >> 0x10);
            if (var_v1_3 < temp_a1_3) {
                var_v1_3 += var_t1_2;
                var_a3_2 -= 1;
                if ((var_v1_3 >= (u32) var_t1_2) && (var_v1_3 < temp_a1_3)) {
                    var_a3_2 -= 1;
                    var_v1_3 += var_t1_2;
                }
            }
            temp_v1_4 = var_v1_3 - temp_a1_3;
            var_a2_3 = temp_v1_4 / var_t0;
            temp_a1_4 = var_a2_3 * var_t4;
            var_v1_4 = ((temp_v1_4 % var_t0) << 0x10) | (temp_t2 & 0xFFFF);
            var_v0_3 = var_a3_2 << 0x10;
            if (var_v1_4 < temp_a1_4) {
                var_v1_4 += var_t1_2;
                var_a2_3 -= 1;
                if (var_v1_4 >= (u32) var_t1_2) {
                    var_v0_3 = var_a3_2 << 0x10;
                    if (var_v1_4 < temp_a1_4) {
                        var_a2_3 -= 1;
                        var_v1_4 += var_t1_2;
                        goto block_38;
                    }
                } else {
block_38:
                    var_v0_3 = var_a3_2 << 0x10;
                }
            }
            var_t2_3 = var_v1_4 - temp_a1_4;
            var_t5 = var_v0_3 | var_a2_3;
        }
        var_a3_3 = var_t2_3 / var_t0;
        temp_a1_5 = var_a3_3 * var_t4;
        var_v1_5 = ((var_t2_3 % var_t0) << 0x10) | ((u32) var_t3 >> 0x10);
        if (var_v1_5 < temp_a1_5) {
            var_v1_5 += var_t1_2;
            var_a3_3 -= 1;
            if ((var_v1_5 >= (u32) var_t1_2) && (var_v1_5 < temp_a1_5)) {
                var_a3_3 -= 1;
                var_v1_5 += var_t1_2;
            }
        }
        temp_v1_5 = var_v1_5 - temp_a1_5;
        var_a2_4 = temp_v1_5 / var_t0;
        temp_a1_6 = var_a2_4 * var_t4;
        temp_v1_6 = ((temp_v1_5 % var_t0) << 0x10) | (var_t3 & 0xFFFF);
        var_v0_4 = var_a3_3 << 0x10;
        if (temp_v1_6 < temp_a1_6) {
            temp_v1_7 = temp_v1_6 + var_t1_2;
            var_a2_4 -= 1;
            if (temp_v1_7 >= (u32) var_t1_2) {
                var_a2_4 = (((temp_v1_7 < temp_a1_6) ^ 0) != 0) ? (var_a2_4 - 1) : var_a2_4;
            }
            var_v0_4 = var_a3_3 << 0x10;
        }
        var_a2_2 = var_v0_4 | var_a2_4;
        goto block_74;
    }
    if ((u32) var_t2_2 < (u32) temp_t0) {
        var_a2_2 = 0;
        goto block_73;
    }
    if ((u32) temp_t0 <= 0xFFFFU) {
        var_a0_3 = ((u32) temp_t0 < 0x100U) ? 0 : 8;
    } else {
        var_a0_3 = ((u32) temp_t0 > 0xFFFFFFU) ? 0x18 : 0x10;
    }
    temp_a2_5 = 0x20 - (*(&D_0045E690 + ((u32) temp_t0 >> var_a0_3)) + var_a0_3);
    temp_a3_3 = 0x20 - temp_a2_5;
    if (temp_a2_5 == 0) {
        var_a2_2 = 1;
        if ((u32) temp_t0 >= (u32) var_t2_2) {
            var_a2_2 = 0;
            if ((u32) var_t3 >= (u32) var_t1_2) {
                var_a2_2 = 1;
            }
        }
        goto block_73;
    }
    temp_t1 = var_t1_2 << temp_a2_5;
    temp_t0_3 = (temp_t0 << temp_a2_5) | ((u32) var_t1_2 >> temp_a3_3);
    temp_a0_4 = (u32) var_t2_2 >> temp_a3_3;
    temp_t2_2 = (var_t2_2 << temp_a2_5) | ((u32) var_t3 >> temp_a3_3);
    temp_a1_7 = temp_t0_3 >> 0x10;
    temp_t4 = temp_t0_3 & 0xFFFF;
    var_a3_4 = temp_a0_4 / temp_a1_7;
    temp_a2_6 = var_a3_4 * temp_t4;
    var_v1_6 = ((temp_a0_4 % temp_a1_7) << 0x10) | (temp_t2_2 >> 0x10);
    if (var_v1_6 < temp_a2_6) {
        var_v1_6 += temp_t0_3;
        var_a3_4 -= 1;
        if ((var_v1_6 >= temp_t0_3) && (var_v1_6 < temp_a2_6)) {
            var_a3_4 -= 1;
            var_v1_6 += temp_t0_3;
        }
    }
    temp_v1_8 = var_v1_6 - temp_a2_6;
    var_a1_2 = temp_v1_8 / temp_a1_7;
    temp_a2_7 = var_a1_2 * temp_t4;
    var_v1_7 = ((temp_v1_8 % temp_a1_7) << 0x10) | (temp_t2_2 & 0xFFFF);
    var_v0_5 = var_a3_4 << 0x10;
    if (var_v1_7 < temp_a2_7) {
        var_v1_7 += temp_t0_3;
        var_a1_2 -= 1;
        if (var_v1_7 >= temp_t0_3) {
            var_v0_5 = var_a3_4 << 0x10;
            if (var_v1_7 < temp_a2_7) {
                var_v1_7 += temp_t0_3;
                var_a1_2 -= 1;
                goto block_68;
            }
        } else {
block_68:
            var_v0_5 = var_a3_4 << 0x10;
        }
    }
    temp_v1_9 = var_v1_7 - temp_a2_7;
    var_a2_2 = var_v0_5 | var_a1_2;
    temp_hi = MULTU_HI(var_a2_2, temp_t1);
    if (temp_v1_9 >= temp_hi) {
        var_t5 = 0;
        if (temp_hi == temp_v1_9) {
            var_v0_6 = var_a2_2 << 0x20;
            if ((u32) (var_t3 << temp_a2_5) < (u32) (var_a2_2 * temp_t1)) {
                goto block_72;
            }
        } else {
            goto block_74;
        }
    } else {
block_72:
        var_a2_2 -= 1;
block_73:
        var_t5 = 0;
block_74:
        var_v0_6 = var_a2_2 << 0x20;
    }
    temp_a0_5 = -1 << 0x20;
    temp_a1_8 = 0xFFFF0000U >> 0x20;
    var_v1 = (((M2C_ERROR(/* Read from unset register $t7 */) & temp_a0_5) | (var_v0_6 >> 0x20)) & temp_a1_8) | (var_t5 << 0x20);
    if (var_t8 != 0) {
        temp_t6 = (M2C_ERROR(/* Read from unset register $t6 */) & temp_a0_5) | ((u64) (((s64) (var_v1 << 0x20) >> 0x20) * -0x100000000) >> 0x20);
        var_v1 = (temp_t6 & temp_a1_8) | ((-(var_v1 >> 0x20) - (((s64) (temp_t6 << 0x20) >> 0x20) != 0)) << 0x20);
    }
    return var_v1;
}
