/* Draft (not built): func_0011FDF0 at 0x0011FDF0, size 0x690, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0011FDF0.c:259: warning: right shift count >= width of type
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_0011FDF0.s */

extern s32 D_0045E790;

s64 func_0011FDF0(s64 arg0, s64 arg1, s32 arg2, s32 arg3) {
    s64 sp0;
    s32 temp_a1_2;
    s32 temp_a3_2;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_s0;
    s32 var_t1;
    s32 var_t4;
    s32 var_t6;
    s32 var_v0;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_a2;
    s64 temp_a3;
    s64 temp_t1;
    s64 temp_t8;
    s64 var_a1;
    s64 var_a3;
    s64 var_t0;
    s64 var_t2;
    s64 var_t2_2;
    s64 var_t3;
    s64 var_t5;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a0_5;
    u32 temp_a0_6;
    u32 temp_a0_7;
    u32 temp_a1;
    u32 temp_a1_3;
    u32 temp_a2_2;
    u32 temp_a2_3;
    u32 temp_t0;
    u32 temp_t0_2;
    u32 temp_t0_3;
    u32 temp_t0_4;
    u32 temp_t0_5;
    u32 temp_t0_6;
    u32 temp_t1_2;
    u32 temp_t2;
    u32 temp_t2_2;
    u32 temp_t2_3;
    u32 temp_t5;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v1_2;
    u32 var_a0_3;
    u32 var_a1_2;
    u32 var_a1_3;
    u32 var_a1_4;
    u32 var_a2;
    u32 var_a2_2;
    u32 var_a2_3;
    u32 var_a2_4;
    u32 var_t0_2;
    u32 var_t6_2;
    u32 var_v0_2;
    u32 var_v0_3;
    u32 var_v1;

    var_a1 = arg1;
    var_t0 = arg0;
    var_t2 = var_t0 >> 0x20;
    temp_a0 = (s64) (var_t2 << 0x20) >> 0x20;
    var_s0 = 0;
    if (temp_a0 < 0) {
        temp_a2 = (arg2 & (-1 << 0x20)) | ((u64) (((s64) (var_t0 << 0x20) >> 0x20) * -0x100000000) >> 0x20);
        var_s0 = -1;
        var_t0 = (temp_a2 & (0xFFFF0000U >> 0x20)) | ((-temp_a0 - (((s64) (temp_a2 << 0x20) >> 0x20) != 0)) << 0x20);
        var_t2 = var_t0 >> 0x20;
    }
    temp_a0_2 = var_a1 >> 0x20;
    if (temp_a0_2 < 0) {
        temp_a3 = (arg3 & (-1 << 0x20)) | ((u64) (((s64) (var_a1 << 0x20) >> 0x20) * -0x100000000) >> 0x20);
        var_a1 = (temp_a3 & (0xFFFF0000U >> 0x20)) | ((-temp_a0_2 - (((s64) (temp_a3 << 0x20) >> 0x20) != 0)) << 0x20);
    }
    temp_t1 = var_a1 >> 0x20;
    var_t5 = (s64) (var_t0 << 0x20) >> 0x20;
    var_t2_2 = (s64) (var_t2 << 0x20) >> 0x20;
    var_a3 = (s64) (var_a1 << 0x20) >> 0x20;
    if (temp_t1 == 0) {
        if ((u32) var_t2_2 < (u32) var_a3) {
            if ((u32) var_a3 <= 0xFFFFU) {
                var_a0 = ((u32) var_a3 < 0x100U) int 0 : 8;
            } else {
                var_a0 = ((u32) var_a3 > 0xFFFFFFU) int 0x18 : 0x10;
            }
            var_t4 = 0x20 - (*(&D_0045E790 + ((u32) var_a3 >> var_a0)) + var_a0);
            if (var_t4 != 0) {
                temp_v0 = (u32) var_t5 >> (0x20 - var_t4);
                var_t5 <<= var_t4;
                var_t2_2 = (var_t2_2 << var_t4) | temp_v0;
                var_a3 <<= var_t4;
            }
            var_a2 = (u32) var_a3 >> 0x10;
            var_t1 = var_a3 & 0xFFFF;
        } else {
            var_v0 = (u32) var_a3 > 0xFFFFU;
            if (var_a3 == 0) {
                var_a3 = (s64) (1U / (u32) temp_t1);
                var_v0 = (u32) var_a3 > 0xFFFFU;
            }
            if (var_v0 == 0) {
                var_a0_2 = ((u32) var_a3 < 0x100U) int 0 : 8;
            } else {
                var_a0_2 = ((u32) var_a3 > 0xFFFFFFU) int 0x18 : 0x10;
            }
            var_t4 = 0x20 - (*(&D_0045E790 + ((u32) var_a3 >> var_a0_2)) + var_a0_2);
            temp_t7 = 0x20 - var_t4;
            if (var_t4 == 0) {
                var_t2_2 -= var_a3;
                var_a1_2 = (u32) var_a3 >> 0x10;
                var_t6 = var_a3 & 0xFFFF;
            } else {
                temp_v0_2 = (u32) var_t5 >> temp_t7;
                var_t5 <<= var_t4;
                temp_a0_3 = (u32) var_t2_2 >> temp_t7;
                temp_t2 = (var_t2_2 << var_t4) | temp_v0_2;
                var_a3 <<= var_t4;
                var_a1_2 = (u32) var_a3 >> 0x10;
                var_t6 = var_a3 & 0xFFFF;
                temp_t0 = (temp_a0_3 / var_a1_2) * var_t6;
                var_a2_2 = ((temp_a0_3 % var_a1_2) << 0x10) | (temp_t2 >> 0x10);
                if (var_a2_2 < temp_t0) {
                    var_a2_2 += var_a3;
                    if (var_a2_2 >= (u32) var_a3) {
                        var_a2_2 = (((var_a2_2 < temp_t0) ^ 0) != 0) int (var_a2_2 + var_a3) : var_a2_2;
                    }
                }
                temp_a2_2 = var_a2_2 - temp_t0;
                temp_t0_2 = (temp_a2_2 / var_a1_2) * var_t6;
                temp_a0_4 = ((temp_a2_2 % var_a1_2) << 0x10) | (temp_t2 & 0xFFFF);
                var_t2_2 = temp_a0_4 - temp_t0_2;
                if (temp_a0_4 < temp_t0_2) {
                    temp_a0_5 = temp_a0_4 + var_a3;
                    var_t2_2 = temp_a0_5 - temp_t0_2;
                    if (temp_a0_5 >= (u32) var_a3) {
                        var_t2_2 = ((((temp_a0_5 < temp_t0_2) ^ 0) != 0) int (temp_a0_5 + var_a3) : temp_a0_5) - temp_t0_2;
                    }
                }
            }
            var_a2 = var_a1_2;
            var_t1 = var_t6;
        }
        temp_t0_3 = ((u32) var_t2_2 / var_a2) * var_t1;
        var_a1_3 = (((u32) var_t2_2 % var_a2) << 0x10) | ((u32) var_t5 >> 0x10);
        if (var_a1_3 < temp_t0_3) {
            var_a1_3 += var_a3;
            if (var_a1_3 >= (u32) var_a3) {
                var_a1_3 = (((var_a1_3 < temp_t0_3) ^ 0) != 0) int (var_a1_3 + var_a3) : var_a1_3;
            }
        }
        temp_a1 = var_a1_3 - temp_t0_3;
        temp_t0_4 = (temp_a1 / var_a2) * var_t1;
        var_a0_3 = ((temp_a1 % var_a2) << 0x10) | (var_t5 & 0xFFFF);
        if (var_a0_3 < temp_t0_4) {
            var_a0_3 += var_a3;
            if (var_a0_3 >= (u32) var_a3) {
                var_a0_3 = (((var_a0_3 < temp_t0_4) ^ 0) != 0) int (var_a0_3 + var_a3) : var_a0_3;
            }
        }
        if (sp != NULL) {
            var_t3 = ((M2C_ERROR(/* Read from unset register $t3 */) & (-1 << 0x20)) | ((u64) ((s64) ((u32) (var_a0_3 - temp_t0_4) >> var_t4) << 0x20) >> 0x20)) & (0xFFFF0000U >> 0x20);
            goto block_64;
        }
    } else if ((u32) var_t2_2 < (u32) temp_t1) {
        sp0 = (((M2C_ERROR(/* Read from unset register $t3 */) & (-1 << 0x20)) | ((u64) (var_t5 << 0x20) >> 0x20)) & (0xFFFF0000U >> 0x20)) | (var_t2_2 << 0x20);
    } else {
        if ((u32) temp_t1 <= 0xFFFFU) {
            var_a0_4 = ((u32) temp_t1 < 0x100U) int 0 : 8;
        } else {
            var_a0_4 = ((u32) temp_t1 > 0xFFFFFFU) int 0x18 : 0x10;
        }
        temp_t4 = 0x20 - (*(&D_0045E790 + ((u32) temp_t1 >> var_a0_4)) + var_a0_4);
        temp_t7_2 = 0x20 - temp_t4;
        if (temp_t4 == 0) {
            var_v0_2 = var_t5 - var_a3;
            if (((u32) temp_t1 < (u32) var_t2_2) || (var_v0_2 = var_t5 - var_a3, (((u32) var_t5 < (u32) var_a3) == 0))) {
                temp_v1 = (u32) var_t5 < var_v0_2;
                var_t5 = (s64) var_v0_2;
                var_t2_2 = (var_t2_2 - temp_t1) - temp_v1;
            }
            if (sp != NULL) {
                var_t3 = (((M2C_ERROR(/* Read from unset register $t3 */) & (-1 << 0x20)) | ((u64) (var_t5 << 0x20) >> 0x20)) & (0xFFFF0000U >> 0x20)) | (var_t2_2 << 0x20);
                goto block_64;
            }
        } else {
            temp_t5 = var_t5 << temp_t4;
            temp_t1_2 = (temp_t1 << temp_t4) | ((u32) var_a3 >> temp_t7_2);
            temp_a0_6 = (u32) var_t2_2 >> temp_t7_2;
            temp_a3_2 = var_a3 << temp_t4;
            temp_t2_2 = (var_t2_2 << temp_t4) | ((u32) var_t5 >> temp_t7_2);
            temp_a2_3 = temp_t1_2 >> 0x10;
            temp_a1_2 = temp_t1_2 & 0xFFFF;
            var_t6_2 = temp_a0_6 / temp_a2_3;
            temp_t0_5 = var_t6_2 * temp_a1_2;
            var_v1 = ((temp_a0_6 % temp_a2_3) << 0x10) | (temp_t2_2 >> 0x10);
            if (var_v1 < temp_t0_5) {
                var_v1 += temp_t1_2;
                var_t6_2 -= 1;
                if ((var_v1 >= temp_t1_2) && (var_v1 < temp_t0_5)) {
                    var_t6_2 -= 1;
                    var_v1 += temp_t1_2;
                }
            }
            temp_v1_2 = var_v1 - temp_t0_5;
            var_a2_3 = temp_v1_2 / temp_a2_3;
            temp_t0_6 = var_a2_3 * temp_a1_2;
            var_a1_4 = ((temp_v1_2 % temp_a2_3) << 0x10) | (temp_t2_2 & 0xFFFF);
            if (var_a1_4 < temp_t0_6) {
                var_a1_4 += temp_t1_2;
                var_a2_3 -= 1;
                if ((var_a1_4 >= temp_t1_2) && (var_a1_4 < temp_t0_6)) {
                    var_a2_3 -= 1;
                    var_a1_4 += temp_t1_2;
                }
            }
            temp_a1_3 = var_a1_4 - temp_t0_6;
            temp_v0_3 = (var_t6_2 << 0x10) | var_a2_3;
            var_a2_4 = MULTU_HI(temp_v0_3, temp_a3_2);
            var_t0_2 = temp_v0_3 * temp_a3_2;
            var_v0_3 = var_t0_2 - temp_a3_2;
            if (temp_a1_3 >= var_a2_4) {
                if (var_a2_4 == temp_a1_3) {
                    var_v0_3 = var_t0_2 - temp_a3_2;
                    if (temp_t5 < var_t0_2) {
                        goto block_61;
                    }
                }
            } else {
block_61:
                temp_v1_3 = var_t0_2 < var_v0_3;
                var_t0_2 = var_v0_3;
                var_a2_4 = (var_a2_4 - temp_t1_2) - temp_v1_3;
            }
            temp_a0_7 = temp_t5 - var_t0_2;
            if (sp != NULL) {
                temp_t2_3 = (temp_a1_3 - var_a2_4) - (temp_t5 < temp_a0_7);
                var_t3 = (((M2C_ERROR(/* Read from unset register $t3 */) & (-1 << 0x20)) | ((u64) (((temp_t2_3 << temp_t7_2) | (temp_a0_7 >> temp_t4)) << 0x20) >> 0x20)) & (0xFFFF0000U >> 0x20)) | ((s64) (temp_t2_3 >> temp_t4) << 0x20);
block_64:
                *sp = var_t3;
            }
        }
    }
    if (var_s0 != 0) {
        temp_t8 = (M2C_ERROR(/* Read from unset register $t8 */) & (-1 << 0x20)) | ((u64) (((s64) (sp0 << 0x20) >> 0x20) * -0x100000000) >> 0x20);
        sp0 = (temp_t8 & (0xFFFF0000U >> 0x20)) | ((-(sp0 >> 0x20) - (((s64) (temp_t8 << 0x20) >> 0x20) != 0)) << 0x20);
    }
    return sp0;
}
