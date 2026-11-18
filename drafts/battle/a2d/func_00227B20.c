/* Draft (not built): func_00227B20 at 0x00227B20, size 0x714, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); identifier 'spB8' mwccps2.exe Compiler: 731: var_v1_2 = spE5 + spE1; @ 705: var_f0 = *(f32 *)((u8 *)temp_s0 + 8) + spB8;
 * Original: asm/nonmatchings/battle/a2d/func_00227B20.s */

// src/battle/a2d.c func_00227B20 cerr diff=-1/0
s32 amMath_SinCosI(s64, f32 *, f32 *);
void func_00227B20(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 fparg0) {
    f32 sp70;
    s32 sp90;
    s32 spA0;
    f32 spB0;
    u8 spD8;
    u8 spDC;
    u8 spDD;
    u8 spDE;
    u8 spDF;
    u8 spE0;
    u8 spE4;
    u8 spE5;
    u8 spE6;
    u8 spE7;
    u8 spE8;
    u8 spEC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 temp_f0;
    f32 var_f0;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f20;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_v1_2;
    u8 *temp_v1_4;

    temp_s0 = D_004706CC;
    var_f20 = fparg0;
    if (!(*D_004706D0 & 1)) {
        if ((*(s32 *)((u8 *)arg0 + 0) & 0x10) && (arg1 != NULL)) {
            amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)temp_s0 + 0x40)) / 180.0f)) << 0x30) >> 0x30, &spFC, &spF8);
            M2C_ERROR(/* unknown instruction: mula.s $f5, $f4 */);
            *(f32 *)((u8 *)temp_s0 + 0) = (f32) (*(f32 *)((u8 *)temp_s0 + 0) + (*(f32 *)((u8 *)temp_s0 + 0x30) * M2C_ERROR(/* unknown instruction: msub.s $f6, $f3, $f2 */)));
            M2C_ERROR(/* unknown instruction: mula.s $f5, $f2 */);
            *(f32 *)((u8 *)temp_s0 + 4) = (f32) (*(f32 *)((u8 *)temp_s0 + 4) + (*(f32 *)((u8 *)temp_s0 + 0x34) * M2C_ERROR(/* unknown instruction: madd.s $f2, $f3, $f4 */)));
            var_f0 = *(f32 *)((u8 *)temp_s0 + 8) + *(f32 *)((u8 *)arg1 + 8);
            goto block_18;
        }
        temp_v1 = *(s32 *)((u8 *)arg0 + 0x20);
        if (temp_v1 != 0) {
            if (arg0 != NULL) {
                if (temp_v1 == 0) {
                    goto block_9;
                }
                if (*(s32 *)((u8 *)arg0 + 0) & 2) {
                    var_f12 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 0xA)) + (var_f20 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
                } else {
                    var_f12 = (f32) *(s16 *)((u8 *)arg0 + 0xA);
                    if (!(var_f20 < var_f12)) {

                    } else {
                        var_f12 = var_f20;
                    }
                }
            } else {
block_9:
                var_f12 = 0.0f;
            }
            func_00229840(arg0, &spB0, -1, var_f12);
            amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)D_004706CC + 0x40)) / 180.0f)) << 0x30) >> 0x30, &spF4, &spF0);
            M2C_ERROR(/* unknown instruction: mula.s $f5, $f4 */);
            *(f32 *)((u8 *)temp_s0 + 0) = (f32) (*(f32 *)((u8 *)temp_s0 + 0) + (*(f32 *)((u8 *)temp_s0 + 0x30) * M2C_ERROR(/* unknown instruction: msub.s $f6, $f3, $f2 */)));
            M2C_ERROR(/* unknown instruction: mula.s $f5, $f2 */);
            *(f32 *)((u8 *)temp_s0 + 4) = (f32) (*(f32 *)((u8 *)temp_s0 + 4) + (*(f32 *)((u8 *)temp_s0 + 0x34) * M2C_ERROR(/* unknown instruction: madd.s $f2, $f3, $f4 */)));
            var_f0 = *(f32 *)((u8 *)temp_s0 + 8) + spB8;
block_18:
            *(f32 *)((u8 *)temp_s0 + 8) = var_f0;
        }
    }
    if (!(*D_004706D0 & 2)) {
        if ((*(s32 *)((u8 *)arg0 + 0) & 0x20) && (arg2 != NULL)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
            M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_a0 = arg2 + 0x10;
            temp_v1_2 = temp_s0 + 0x20;
            *(u8 *)((u8 *)(&spE0) + 0) = *(u8 *)((u8 *)arg2 + 0x10);
            *(u8 *)((u8 *)(&spE0) + 1) = (u8) *(u8 *)((u8 *)temp_a0 + 1);
            *(u8 *)((u8 *)(&spE0) + 2) = (u8) *(u8 *)((u8 *)temp_a0 + 2);
            *(u8 *)((u8 *)(&spE0) + 3) = (u8) *(u8 *)((u8 *)temp_a0 + 3);
            *(u8 *)((u8 *)(&spE4) + 0) = *(u8 *)((u8 *)temp_s0 + 0x20);
            *(u8 *)((u8 *)(&spE4) + 1) = (u8) *(u8 *)((u8 *)temp_v1_2 + 1);
            *(u8 *)((u8 *)(&spE4) + 2) = (u8) *(u8 *)((u8 *)temp_v1_2 + 2);
            *(u8 *)((u8 *)(&spE4) + 3) = (u8) *(u8 *)((u8 *)temp_v1_2 + 3);
            var_v1 = (spE4 & 0xFF) + (spE0 & 0xFF);
            if (var_v1 >= 0x100) {
                var_v1 = 0xFF;
            }
            spE4 = (u8) var_v1;
            var_v1_2 = spE5 + spE1;
            if (var_v1_2 >= 0x100) {
                var_v1_2 = 0xFF;
            }
            spE5 = (u8) var_v1_2;
            var_v1_3 = spE6 + spE2;
            if (var_v1_3 >= 0x100) {
                var_v1_3 = 0xFF;
            }
            spE6 = (u8) var_v1_3;
            var_v1_4 = spE7 + spE3;
            if (var_v1_4 >= 0x100) {
                var_v1_4 = 0xFF;
            }
            spE7 = (u8) var_v1_4;
            spEC = (f32) *(u8 *)((u8 *)(&spE4) + 0);
            *(u8 *)((u8 *)temp_s0 + 0x20) = spEC;
            *(u8 *)((u8 *)temp_s0 + 0x21) = spED;
            *(u8 *)((u8 *)temp_s0 + 0x22) = spEE;
            *(u8 *)((u8 *)temp_s0 + 0x23) = spEF;
        } else {
            temp_v1_3 = *(s32 *)((u8 *)arg0 + 0x28);
            if (temp_v1_3 != 0) {
                if (arg0 != NULL) {
                    if (temp_v1_3 == 0) {
                        goto block_39;
                    }
                    if (*(s32 *)((u8 *)arg0 + 0) & 4) {
                        var_f12_2 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 0xE)) + (var_f20 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
                    } else {
                        var_f12_2 = (f32) *(s16 *)((u8 *)arg0 + 0xE);
                        if (!(var_f20 < var_f12_2)) {

                        } else {
                            var_f12_2 = var_f20;
                        }
                    }
                } else {
block_39:
                    var_f12_2 = 0.0f;
                }
                func_00228B00(arg0, &sp90, -1, var_f12_2);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
                M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                temp_v1_4 = temp_s0 + 0x20;
                *(u8 *)((u8 *)(&spD8) + 0) = *(u8 *)((u8 *)(&spA0) + 0);
                *(u8 *)((u8 *)(&spD8) + 1) = (u8) *(u8 *)((u8 *)(&spA0) + 1);
                *(u8 *)((u8 *)(&spD8) + 2) = (u8) *(u8 *)((u8 *)(&spA0) + 2);
                *(u8 *)((u8 *)(&spD8) + 3) = (u8) *(u8 *)((u8 *)(&spA0) + 3);
                *(u8 *)((u8 *)(&spDC) + 0) = *(u8 *)((u8 *)temp_s0 + 0x20);
                *(u8 *)((u8 *)(&spDC) + 1) = (u8) *(u8 *)((u8 *)temp_v1_4 + 1);
                *(u8 *)((u8 *)(&spDC) + 2) = (u8) *(u8 *)((u8 *)temp_v1_4 + 2);
                *(u8 *)((u8 *)(&spDC) + 3) = (u8) *(u8 *)((u8 *)temp_v1_4 + 3);
                var_v1_5 = (spDC & 0xFF) + (spD8 & 0xFF);
                if (var_v1_5 >= 0x100) {
                    var_v1_5 = 0xFF;
                }
                spDC = (u8) var_v1_5;
                var_v1_6 = spDD + spD9;
                if (var_v1_6 >= 0x100) {
                    var_v1_6 = 0xFF;
                }
                spDD = (u8) var_v1_6;
                var_v1_7 = spDE + spDA;
                if (var_v1_7 >= 0x100) {
                    var_v1_7 = 0xFF;
                }
                spDE = (u8) var_v1_7;
                var_v1_8 = spDF + spDB;
                if (var_v1_8 >= 0x100) {
                    var_v1_8 = 0xFF;
                }
                spDF = (u8) var_v1_8;
                spE8 = (f32) *(u8 *)((u8 *)(&spDC) + 0);
                *(u8 *)((u8 *)temp_s0 + 0x20) = spE8;
                *(u8 *)((u8 *)temp_s0 + 0x21) = spE9;
                *(u8 *)((u8 *)temp_s0 + 0x22) = spEA;
                *(u8 *)((u8 *)temp_s0 + 0x23) = spEB;
            }
        }
    }
    if (!(*D_004706D0 & 4)) {
        if ((*(s32 *)((u8 *)arg0 + 0) & 8) && (arg3 != NULL)) {
            *(f32 *)((u8 *)temp_s0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x38) * *(f32 *)((u8 *)arg3 + 0));
            *(f32 *)((u8 *)temp_s0 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x3C) * *(f32 *)((u8 *)arg3 + 4));
            *(f32 *)((u8 *)temp_s0 + 0x40) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x40) + *(f32 *)((u8 *)arg3 + 8));
            return;
        }
        if (*(s32 *)((u8 *)arg0 + 0x18) != 0) {
            if (arg0 == NULL) {
                var_f20 = 0.0f;
            } else if (*(s32 *)((u8 *)arg0 + 0) & 1) {
                var_f20 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 6)) + (var_f20 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
            } else {
                temp_f0 = (f32) *(s16 *)((u8 *)arg0 + 6);
                if (!(var_f20 < temp_f0)) {
                    var_f20 = temp_f0;
                }
            }
            func_002285E0(arg0, &sp70, -1, var_f20);
            *(f32 *)((u8 *)temp_s0 + 0x30) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x30) * sp70);
            *(f32 *)((u8 *)temp_s0 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x34) * sp74);
            *(f32 *)((u8 *)temp_s0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x38) * sp78);
            *(f32 *)((u8 *)temp_s0 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x3C) * sp7C);
            *(f32 *)((u8 *)temp_s0 + 0x40) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x40) + sp80);
        }
    }
}
