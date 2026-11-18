/* Draft (not built): func_0011B828 at 0x0011B828, size 0x608, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 292 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libm/func_0011B828.s */

s64 dpmul();
s64 func_00121930();
s64 func_00121988();
s64 func_00121C78();
s32 func_00121ED8();
s64 func_00121F28();
extern s64 D_0045DFC0;
extern s64 D_0045DFC8;
extern s64 D_0045DFD0;
extern s64 D_0045DFD8;
extern s64 D_0045DFE0;
extern s64 D_0045DFE8;
extern s64 D_0045DFF0;
extern s64 D_0045DFF8;
extern s64 D_0045E000;
extern s64 D_0045E008;
extern s64 D_0045E010;
extern s64 D_0045E018;
extern s64 D_0045E020;
extern s64 D_0045E028;
extern s64 D_0045E030;
extern s64 D_0045E038;
extern s64 D_0045E040;

s64 func_0011B828(s64 arg0) {
    s32 temp_a2;
    s32 temp_fp;
    s32 temp_s3;
    s32 temp_s6;
    s32 var_fp;
    s64 temp_s0;
    s64 temp_s0_2;
    s64 temp_s0_3;
    s64 temp_s0_4;
    s64 temp_s0_5;
    s64 temp_s0_6;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 temp_s2;
    s64 temp_s2_2;
    s64 temp_s3_2;
    s64 temp_s4;
    s64 temp_s5;
    s64 temp_s7;
    s64 temp_v0;
    s64 temp_v0_2;
    s64 temp_v0_3;
    s64 temp_v0_4;
    s64 temp_v0_5;
    s64 var_a0;
    s64 var_s3;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v1;

    var_v1 = arg0;
    var_s3 = var_v1 >> 0x20;
    var_fp = 0;
    if (var_s3 > 0xFFFFF) {
        goto block_8;
    }
    if (((var_s3 & 0x7FFFFFFF) | ((s64) (var_v1 << 0x20) >> 0x20)) != 0) {
        goto block_4;
    }
    return D_0045DFC0;
block_4:
    if (var_s3 >= 0) {
        goto block_7;
    }
    var_v0 = func_00121C78(func_00121988(var_v1), 0);
    goto block_31;
block_7:
    var_fp = -0x36;
    temp_v0 = dpmul(0x86A0 << 0x2F);
    var_v1 = temp_v0;
    var_s3 = temp_v0 >> 0x20;
block_8:
    if (var_s3 > 0x7FEFFFFF) {
        goto block_10;
    }
    goto block_13;
block_10:
    var_v0 = func_00121930(var_v1, var_v1);
    goto block_31;
block_13:
    temp_s3 = var_s3 & 0xFFFFF;
    temp_s6 = (temp_s3 + 0x95F64) & 0x100000;
    temp_a2 = temp_s6 >> 0x14;
    temp_fp = (var_fp + (var_s3 >> 0x14)) - 0x3FF + temp_a2;
    temp_s4 = func_00121988((var_v1 & (0xFFFF0000U >> 0x20)) | (((temp_s6 ^ 0x3FF00000) | temp_s3) << 0x20), 0xFFC0 << 0x2E, temp_a2);
    if (((temp_s3 + 2) & 0xFFFFF) >= 3) {
        goto block_21;
    }
    if (func_00121ED8(temp_s4, 0) != 0) {
        goto block_17;
    }
    var_v0 = 0;
    if (temp_fp == 0) {
        goto block_31;
    }
    temp_v0_2 = func_00121F28(temp_fp);
    temp_s0 = dpmul(temp_v0_2, D_0045DFC8);
    var_v0 = func_00121930(temp_s0, dpmul(temp_v0_2, D_0045DFD0));
    goto block_31;
block_17:
    temp_s0_2 = dpmul(temp_s4, temp_s4);
    temp_s2 = dpmul(temp_s0_2, func_00121988(0xFF80 << 0x2E, dpmul(temp_s4, D_0045DFD8)));
    if (temp_fp != 0) {
        goto block_19;
    }
    var_v0 = func_00121988(temp_s4, temp_s2);
    goto block_31;
block_19:
    temp_v0_3 = func_00121F28(temp_fp);
    temp_s0_3 = dpmul(temp_v0_3, D_0045DFE0);
    var_v0_2 = func_00121988(func_00121988(temp_s2, dpmul(temp_v0_3, D_0045DFE8)), temp_s4);
    var_a0 = temp_s0_3;
    goto block_29;
block_21:
    temp_s7 = func_00121C78(temp_s4, func_00121930(temp_s4, 0x8000 << 0x2F));
    temp_s5 = func_00121F28(temp_fp);
    temp_v0_4 = dpmul(temp_s7, temp_s7);
    temp_v0_5 = dpmul(temp_v0_4, temp_v0_4);
    temp_s0_4 = dpmul(temp_v0_5, func_00121930(dpmul(temp_v0_5, func_00121930(dpmul(temp_v0_5, D_0045DFF0), D_0045DFF8)), D_0045E000));
    temp_s2_2 = func_00121930(dpmul(temp_v0_4, func_00121930(dpmul(temp_v0_5, func_00121930(dpmul(temp_v0_5, func_00121930(dpmul(temp_v0_5, D_0045E008), D_0045E010)), D_0045E018)), D_0045E020)), temp_s0_4);
    if (((temp_s3 + 0xFFF9EB86) | (0x6B851 - temp_s3)) <= 0) {
        goto block_26;
    }
    temp_s3_2 = dpmul(dpmul(temp_s4, 0xFF80 << 0x2E), temp_s4);
    if (temp_fp != 0) {
        goto block_24;
    }
    var_v0_2 = func_00121988(temp_s3_2, dpmul(temp_s7, func_00121930(temp_s3_2, temp_s2_2)));
    goto block_28;
block_24:
    temp_s1 = dpmul(temp_s5, D_0045E028);
    temp_s0_5 = dpmul(temp_s7, func_00121930(temp_s3_2, temp_s2_2));
    var_v0_2 = func_00121988(func_00121988(temp_s3_2, func_00121930(temp_s0_5, dpmul(temp_s5, D_0045E030))), temp_s4);
    var_a0 = temp_s1;
    goto block_29;
block_26:
    if (temp_fp != 0) {
        goto block_30;
    }
    var_v0_2 = dpmul(temp_s7, func_00121988(temp_s4, temp_s2_2));
block_28:
    var_a0 = temp_s4;
block_29:
    var_v0 = func_00121988(var_a0, var_v0_2);
    goto block_31;
block_30:
    temp_s1_2 = dpmul(temp_s5, D_0045E038);
    temp_s0_6 = dpmul(temp_s7, func_00121988(temp_s4, temp_s2_2));
    var_v0 = func_00121988(temp_s1_2, func_00121988(func_00121988(temp_s0_6, dpmul(temp_s5, D_0045E040)), temp_s4));
block_31:
    return var_v0;
}
