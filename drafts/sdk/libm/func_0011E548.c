/* Draft (not built): func_0011E548 at 0x0011E548, size 0x4C8, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 236 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libm/func_0011E548.s */

s64 dpmul();
s64 func_0011EA10();
s64 func_00121930();
s64 func_00121988();
s64 func_00121C78();
s32 func_00121ED8();
extern s32 D_0045E570;
extern s64 D_0045E588;
extern s32 D_0045E590;
extern s64 D_0045E5A8;
extern s32 D_0045E5B0;
extern s64 D_0045E618;

s64 func_0011E548(s64 arg0) {
    s32 temp_s0;
    s32 temp_s0_5;
    s32 var_s4;
    s64 temp_s0_2;
    s64 temp_s0_3;
    s64 temp_s0_4;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 temp_s2;
    s64 temp_s3;
    s64 temp_s5;
    s64 temp_v0;
    s64 temp_v0_2;
    s64 temp_v0_3;
    s64 var_a0;
    s64 var_a1;
    s64 var_s3;
    s64 var_v0;

    var_s3 = arg0;
    temp_s5 = var_s3 >> 0x20;
    temp_s0 = temp_s5 & 0x7FFFFFFF;
    if (temp_s0 <= 0x440FFFFF) {
        goto block_10;
    }
    if (temp_s0 > 0x7FF00000) {
        goto block_4;
    }
    if (temp_s0 != 0x7FF00000) {
        goto block_5;
    }
    if (((s64) (var_s3 << 0x20) >> 0x20) == 0) {
        goto block_5;
    }
block_4:
    var_v0 = func_00121930(var_s3);
    goto block_31;
block_5:
    if (temp_s5 <= 0) {
        goto block_8;
    }
    var_v0 = func_00121930(D_0045E588, D_0045E5A8);
    goto block_31;
block_8:
    var_v0 = func_00121988(func_00121988(0, D_0045E588), D_0045E5A8);
    goto block_31;
block_10:
    if (temp_s0 > 0x3FDBFFFF) {
        goto block_15;
    }
    var_s4 = -1;
    if (temp_s0 > 0x3E1FFFFF) {
        goto block_26;
    }
    if (func_00121ED8(func_00121930(D_0045E618), 0xFFC0 << 0x2E) <= 0) {
        goto block_26;
    }
    return var_s3;
block_15:
    temp_s3 = func_0011EA10();
    if (temp_s0 > 0x3FF2FFFF) {
        goto block_20;
    }
    if (temp_s0 > 0x3FE5FFFF) {
        goto block_18;
    }
    var_s4 = 0;
    temp_s0_2 = func_00121988(func_00121930(temp_s3, temp_s3), 0xFFC0 << 0x2E);
    var_a0 = temp_s0_2;
    var_a1 = func_00121930(temp_s3, 0x8000 << 0x2F);
    goto block_25;
block_18:
    temp_s1 = 0xFFC0 << 0x2E;
    var_s4 = 1;
    temp_s0_3 = func_00121988(temp_s3, temp_s1);
    var_a0 = temp_s0_3;
    var_a1 = func_00121930(temp_s3, temp_s1);
    goto block_25;
block_20:
    if (temp_s0 <= 0x40037FFF) {
        goto block_22;
    }
    var_s4 = 3;
    goto block_24;
block_22:
    temp_s0_4 = 0xFFE0 << 0x2E;
    var_s4 = 2;
    temp_s1_2 = func_00121988(temp_s3, temp_s0_4);
    var_a0 = temp_s1_2;
    var_a1 = func_00121930(dpmul(temp_s3, temp_s0_4), 0xFFC0 << 0x2E);
    goto block_25;
block_24:
    var_a0 = 0xBFF0 << 0x30;
    var_a1 = temp_s3;
block_25:
    var_s3 = func_00121C78(var_a0, var_a1);
block_26:
    temp_v0 = dpmul(var_s3, var_s3);
    temp_v0_2 = dpmul(temp_v0, temp_v0);
    temp_s2 = dpmul(temp_v0, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0), dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0x10), dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0x20), dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0x30), dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0x40), dpmul(temp_v0_2, *(s64 *)((u8 *)(&D_0045E5B0) + 0x50))))))))))));
    temp_v0_3 = dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 8), dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0x18), dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0x28), dpmul(temp_v0_2, func_00121930(*(s64 *)((u8 *)(&D_0045E5B0) + 0x38), dpmul(temp_v0_2, *(s64 *)((u8 *)(&D_0045E5B0) + 0x48))))))))));
    if (var_s4 >= 0) {
        goto block_29;
    }
    var_v0 = func_00121988(var_s3, dpmul(var_s3, func_00121930(temp_s2, temp_v0_3)));
    goto block_31;
block_29:
    temp_s0_5 = var_s4 * 8;
    var_v0 = func_00121988(*(&D_0045E570 + temp_s0_5), func_00121988(func_00121988(dpmul(var_s3, func_00121930(temp_s2, temp_v0_3)), *(&D_0045E590 + temp_s0_5)), var_s3));
    if (temp_s5 >= 0) {
        goto block_32;
    }
    var_v0 = func_00121988(0, var_v0);
block_31:
block_32:
    return var_v0;
}
