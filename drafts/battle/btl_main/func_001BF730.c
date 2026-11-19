/* Draft (not built): func_001BF730 at 0x001BF730, size 0x62C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 243 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x514, original 0x62C
 * Original: asm/nonmatchings/battle/btl_main/func_001BF730.s */

// src/battle/btl_main.c func_001BF730 size diff=243/325
extern s32 func_0012EAE0(s32);
s32 dpmul(s32, s32);
s32 func_001214F8(f32);
s32 func_00121C78(s32, s32);
f32 func_001220B0(s32);
s32 func_001D9EB0(void *, s32);
s32 func_002470B0(s32, s64);
extern void func_00146F30(void *);
void func_001BF730(u8 *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 saved_reg_s2;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    s32 spB4;
    u8 *spC0;
    f32 *spC4;
    s32 spC8;
    u8 *spF8;
    s32 spFC;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    s16 temp_a0_2;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u16 temp_a2;
    u8 *temp_a0;
    u8 *temp_a3;

    var_s2 = saved_reg_s2;
    var_s1 = -1;
    var_s0 = 1;
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x17F4);
    temp_a3 = temp_a0 + (arg1 * 0x10);
    temp_v0 = *(s16 *)((u8 *)temp_a0 + 4);
    temp_a2 = *(u16 *)((u8 *)temp_a3 + 2);
    var_s4 = (*(u16 *)((u8 *)temp_a3 + 2) / 1000) + (temp_a2 >> 0x1F);
    var_s3 = temp_a2 - (var_s4 * 0x3E8);
    if ((var_s4 >= 0x20) && (var_s4 < 0x30)) {
        var_s1 = var_s4 - 0x20;
        var_s4 = 0;
    }
    temp_a0_2 = *(s16 *)((u8 *)temp_a3 + 4);
    switch (temp_a0_2) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (var_s3 == 0xC8) {
            var_s3 = 0x67;
        }
        if (var_s4 == 0) {
            if (arg1 != 1) {
                var_s2 = 5;
                if (arg1 != 5) {
                    var_s4 = 2;
                    var_s2 = 0;
                } else {
                    var_s4 = 0x10;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                    var_s0 = 0;
                }
            } else {
                var_s4 = 2;
                var_s2 = 0;
            }
        }
        break;
    case 1:                                         /* switch 1 */
        if (var_s3 == 0xC8) {
            var_s3 = 0x6B;
        }
        if (var_s4 == 0) {
            if (arg1 != 1) {
                var_s4 = 2;
                if (arg1 != 2) {
                    var_s4 = 0xB;
                } else if (temp_v0 == 1) {
                    var_s4 = 0xB;
                }
            } else {
                var_s4 = 0xB;
            }
        }
        var_s2 = 1;
        break;
    case 2:                                         /* switch 1 */
        if (var_s3 == 0xC8) {
            var_s3 = 0x66;
        }
        if (var_s4 == 0) {
            if (arg1 != 1) {
                var_s4 = 0x3B;
            } else {
                var_s4 = 0x3B;
            }
        }
        var_s2 = 2;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        var_s0 = 0;
        Btl_UpdateLimitXY(0, 0.5f, 0.1f);
        break;
    case 4:                                         /* switch 1 */
        if (var_s3 == 0xC8) {
            var_s3 = 0x190;
        }
        if (var_s4 == 0) {
            switch (temp_v0) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                var_s4 = 5;
                break;
            case 2:                                 /* switch 2 */
                var_s4 = 0xE;
                break;
            case 3:                                 /* switch 2 */
                var_s4 = 0xD;
                break;
            default:                                /* switch 2 */
                var_s4 = 5;
                break;
            }
        }
        var_s2 = 3;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        var_s0 = 0;
        break;
    case 3:                                         /* switch 1 */
        if (var_s3 == 0xC8) {
            var_s3 = 0x66;
        }
        if (var_s4 == 0) {
            var_s4 = 0x3B;
        }
        var_s2 = 2;
        break;
    }
    if (var_s1 < 0) {
        if (var_s0 != 0) {
            temp_v0_2 = func_0012EAE0(0x20);
            if (temp_v0_2 >= 0) {
                var_f12 = (f32) temp_v0_2;
            } else {
                var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
            }
            sp90 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
            temp_v0_3 = func_0012EAE0(0x20);
            if (temp_v0_3 >= 0) {
                var_f12_2 = (f32) temp_v0_3;
            } else {
                var_f12_2 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
            }
            sp94 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12_2)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
            temp_v0_4 = func_0012EAE0(0x20);
            if (temp_v0_4 >= 0) {
                var_f12_3 = (f32) temp_v0_4;
            } else {
                var_f12_3 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
            }
            sp98 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12_3)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
            sp9C = 0x3F800000;
        }
        func_00146F30(&sp90);
        spC0 = arg0 + 0x130;
        spC4 = &sp90;
        spC8 = M2C_ERROR(/* Read from unset register $f0 */);
        if (arg2 != 0) {
            switch (var_s2) {                       /* switch 3; irregular */
            case 1:                                 /* switch 3 */
            case 0:                                 /* switch 3 */
                var_s2 = 0xA;
                break;
            case 2:                                 /* switch 3 */
                var_s2 = 0xB;
                break;
            }
        }
        func_00218440(var_s2, &spC0);
        func_001E9B00(1, var_s4, 0, 0, 0.0f, 1.0f);
    } else {
        spF8 = arg0;
        spFC = 1;
        func_002470B0(var_s1, (s64) spF8);
    }
    spA4 = 0x3F99999A;
    spA0 = 0;
    spA8 = 0;
    spB4 = 0x3F19999A;
    spAC = 0x3F800000;
    spB0 = 0x3ECCCCCD;
    if (arg2 != 0) {
        spA4 = 0x3FE66666;
        spB0 = 0x3F19999A;
        spB4 = 0x3F4CCCCD;
    }
    func_001A8770(2, &spA0);
    func_001D9EB0(arg0, var_s3);
}
