/* Draft (not built): func_0011E2C0 at 0x0011E2C0, size 0x284, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011E2C0.c:67: parse error before "f32"
 * Original: asm/nonmatchings/sdk/libm/func_0011E2C0.s */

f32 func_0011F2F8(s32, f32, f32);                   /* extern */
extern s32 D_0045E538;

f32 func_0011E2C0(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 temp_a2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f15;
    f32 temp_f3;
    f32 temp_f5;
    f32 var_f0;
    f32 var_f13;
    f32 var_f16;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;

    var_f13 = fparg1;
    var_f16 = fparg0;
    temp_a2 = var_f16;
    temp_a1 = M2C_BITWISE(s32, temp_a2) & 0x7FFFFFFF;
    if (temp_a1 <= 0x317FFFFF) {
        if (M2C_ERROR(/* Read from unset register $f0 */) == 0) {
            if ((temp_a1 | (arg0 + 1)) != 0) {
                if (arg0 != 1) {
                    return -1.0f / var_f16;
                }
                var_f0 = var_f16;
                goto block_20;
            }
            var_f0 = 1.0f / func_0011F2F8(temp_a1, temp_a2, var_f16);
            goto block_20;
        }
        goto block_11;
    }
block_11:
    if (temp_a1 > 0x3F2CA13F) {
        if (M2C_BITWISE(s32, temp_a2) < 0) {
            var_f16 = -var_f16;
            var_f13 = -var_f13;
        }
        temp_f14 = 3.7748944e-8f - var_f13;
        var_f13 = 0.0f;
        var_f16 = (0.7853981f - var_f16) + temp_f14;
    }
    temp_f15 = var_f16 * var_f16;
    temp_f14_2 = temp_f15 * temp_f15;
    temp_f12 = temp_f15 * var_f16;
    temp_f3 = var_f13 + (temp_f15 * ((temp_f12 * (*(f32 *)((u8 *)(&D_0045E538) + 4) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0xC) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0x14) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0x1C) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0x24) + (temp_f14_2 * *(f32 *)((u8 *)(&D_0045E538) + 0x2C)))))))))) + (temp_f15 * (*(f32 *)((u8 *)(&D_0045E538) + 8) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0x10) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0x18) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0x20) + (temp_f14_2 * (*(f32 *)((u8 *)(&D_0045E538) + 0x28) + (temp_f14_2 * *(f32 *)((u8 *)(&D_0045E538) + 0x30)))))))))))))) + var_f13)) + (*(f32 *)((u8 *)(&D_0045E538) + 0) * temp_f12);
    temp_f14_3 = var_f16 + temp_f3;
    if (temp_a1 > 0x3F2CA13F) {
        temp_f5 = (f32) arg0;
        var_f0 = (f32) (1 - ((M2C_BITWISE(s32, temp_a2) >> 0x1E) & 2)) * (temp_f5 - (2.0f * (var_f16 - (((temp_f14_3 * temp_f14_3) / (temp_f14_3 + temp_f5)) - temp_f3))));
    } else {
        var_f0 = temp_f14_3;
        if (arg0 != 1) {
            temp_v0 = M2C_BITWISE(s32, temp_f14_3) & ~0xFFF;
            temp_f0 = -1.0f / temp_f14_3;
            sp0 = temp_f0;
            temp_v0_2 = M2C_BITWISE(s32, sp0) & ~0xFFF;
            var_f0 = M2C_BITWISE(f32, temp_v0_2) + (temp_f0 * ((M2C_BITWISE(f32, temp_v0_2) * M2C_BITWISE(f32, temp_v0)) + 1.0f + (M2C_BITWISE(f32, temp_v0_2) * (temp_f3 - (M2C_BITWISE(f32, temp_v0) - var_f16)))));
        }
    }
block_20:
    return var_f0;
}
