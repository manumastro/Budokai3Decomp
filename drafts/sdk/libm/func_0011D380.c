/* Draft (not built): func_0011D380 at 0x0011D380, size 0x3B0, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011D380.c:144: parse error before "f32"
 * Original: asm/nonmatchings/sdk/libm/func_0011D380.s */

s32 func_0011D950(f32 *, void *, s32, s32, f32);    /* extern */
f32 func_0011F2F8();                                /* extern */
extern s32 D_0045E42C;

s32 func_0011D380(u8 *arg0, f32 fparg0) {
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 *var_a0;
    f32 *var_v0_2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f1;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f3;
    f32 var_f4;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_a3;
    s32 var_f12_3;
    s32 var_v0;
    s32 var_v1;

    temp_s0 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (temp_s0 <= 0x3F490FD8) {
        *(f32 *)((u8 *)arg0 + 0) = fparg0;
        *(f32 *)((u8 *)arg0 + 4) = 0.0f;
        return 0;
    }
    if (temp_s0 <= 0x4016CBE3) {
        if (M2C_BITWISE(s32, fparg0) > 0) {
            var_f12 = fparg0 - 1.5707855f;
            if ((temp_s0 & ~0xF) != 0x3FC90FD0) {
                var_f2 = 0.000010804333f;
            } else {
                var_f2 = 6.0771e-11f;
                var_f12 -= 0.000010804272f;
            }
            temp_f1 = var_f12 - var_f2;
            *(f32 *)((u8 *)arg0 + 0) = temp_f1;
            *(f32 *)((u8 *)arg0 + 4) = (f32) ((var_f12 - temp_f1) - var_f2);
            return 1;
        }
        var_f12_2 = fparg0 + 1.5707855f;
        if ((temp_s0 & ~0xF) != 0x3FC90FD0) {
            var_f2_2 = 0.000010804333f;
        } else {
            var_f2_2 = 6.0771e-11f;
            var_f12_2 += 0.000010804272f;
        }
        temp_f1_2 = var_f12_2 + var_f2_2;
        *(f32 *)((u8 *)arg0 + 0) = temp_f1_2;
        *(f32 *)((u8 *)arg0 + 4) = (f32) ((var_f12_2 - temp_f1_2) + var_f2_2);
        return -1;
    }
    if (temp_s0 > 0x43490F80) {
        temp_a2 = (temp_s0 >> 0x17) - 0x86;
        var_f12_3 = temp_s0 - (temp_a2 << 0x17);
        var_v1 = 1;
        var_a0 = sp;
        do {
            var_v1 -= 1;
            temp_f0 = (f32) M2C_ERROR(/* Read from unset register $f0 */);
            *var_a0 = temp_f0;
            var_a0 += 4;
            var_f12_3 = M2C_BITWISE(s32, ((M2C_BITWISE(f32, var_f12_3) - temp_f0) * 256.0f));
        } while (var_v1 >= 0);
        sp8 = M2C_BITWISE(f32, var_f12_3);
        var_a3 = 3;
        if (M2C_BITWISE(f32, var_f12_3) == 0.0f) {
            var_v0_2 = &sp8;
            do {
                var_v0_2 -= 4;
                var_a3 -= 1;
            } while (*var_v0_2 == 0.0f);
        }
        var_v0 = func_0011D950(sp, arg0, temp_a2, var_a3, M2C_BITWISE(f32, var_f12_3));
        if (M2C_BITWISE(s32, fparg0) < 0) {
            var_v0 = -var_v0;
            var_f0 = *(f32 *)((u8 *)arg0 + 4);
            var_f1 = -*(f32 *)((u8 *)arg0 + 0);
            goto block_36;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_f6 = (f32) 0x3F000000;
    var_f3 = temp_f6 * 0.000010804333f;
    var_f4 = func_0011F2F8() - (temp_f6 * 1.5707855f);
    if (0x3F000000 < 0x20) {
        var_f0_2 = var_f4 - var_f3;
        if ((temp_s0 & ~0xFF) != *(&D_0045E42C + (0x3F000000 * 4))) {
            *(f32 *)((u8 *)arg0 + 0) = var_f0_2;
        } else {
            goto block_22;
        }
    } else {
        var_f0_2 = var_f4 - var_f3;
block_22:
        temp_a0 = temp_s0 >> 0x17;
        *(f32 *)((u8 *)arg0 + 0) = var_f0_2;
        sp10 = var_f0_2;
        if ((temp_a0 - ((M2C_BITWISE(u32, sp10) >> 0x17) & 0xFF)) >= 9) {
            temp_f5 = var_f4;
            temp_f3 = temp_f6 * 0.000010804272f;
            var_f4 -= temp_f3;
            var_f3 = (temp_f6 * 6.0771e-11f) - ((temp_f5 - var_f4) - temp_f3);
            temp_f1_3 = var_f4 - var_f3;
            *(f32 *)((u8 *)arg0 + 0) = temp_f1_3;
            sp14 = temp_f1_3;
            if ((temp_a0 - ((M2C_BITWISE(u32, sp14) >> 0x17) & 0xFF)) >= 0x1A) {
                temp_f5_2 = var_f4;
                temp_f3_2 = temp_f6 * 6.0770944e-11f;
                var_f4 -= temp_f3_2;
                var_f3 = (temp_f6 * 6.1232336e-17f) - ((temp_f5_2 - var_f4) - temp_f3_2);
                *(f32 *)((u8 *)arg0 + 0) = (f32) (var_f4 - var_f3);
            }
        }
    }
    temp_f1_4 = *(f32 *)((u8 *)arg0 + 0);
    var_f0 = (var_f4 - temp_f1_4) - var_f3;
    *(f32 *)((u8 *)arg0 + 4) = var_f0;
    if (M2C_BITWISE(s32, fparg0) < 0) {
        var_f1 = -temp_f1_4;
        var_v0 = -0x3F000000;
block_36:
        *(f32 *)((u8 *)arg0 + 0) = var_f1;
        *(f32 *)((u8 *)arg0 + 4) = (f32) -var_f0;
        return var_v0;
    }
    return 0x3F000000;
}
