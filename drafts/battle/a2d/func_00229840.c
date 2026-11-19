/* Draft (not built): func_00229840 at 0x00229840, size 0x854, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 467 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x42C, original 0x854
 * Original: asm/nonmatchings/battle/a2d/func_00229840.s */

// src/battle/a2d.c func_00229840 size diff=467/267
void func_00229840(u8 *arg0, u8 *arg1, s32 arg2, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f3;
    f32 var_f12;
    s16 temp_t2;
    s32 temp_v1;
    s32 var_a2;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_v1_2;

    var_a2 = arg2;
    var_f12 = fparg0;
    if ((arg0 != NULL) && (temp_v1 = *(s32 *)((u8 *)arg0 + 0x20), (temp_v1 != 0))) {
        if ((arg0 == NULL) || (temp_v1 == 0)) {
            var_f12 = 0.0f;
        } else if (*(s32 *)((u8 *)arg0 + 0) & 2) {
            var_f12 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 0xA)) + (var_f12 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
        } else {
            temp_f0 = (f32) *(s16 *)((u8 *)arg0 + 0xA);
            if (!(var_f12 < temp_f0)) {
                var_f12 = temp_f0;
            }
        }
        if (var_a2 < 0) {
            if (var_f12 == (f32) *(s16 *)((u8 *)arg0 + 0xA)) {
                var_a2 = *(s16 *)((u8 *)arg0 + 8) - 1;
            } else {
                var_a2 = func_002270B0(*(s32 *)((u8 *)arg0 + 0x20), *(s16 *)((u8 *)arg0 + 8), -1, var_f12);
            }
        }
        temp_v1_2 = *(u8 **)((u8 *)arg0 + 0x24);
        temp_a1 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x20) + (var_a2 * 4));
        temp_a0 = temp_v1_2 + (var_a2 << 5);
        temp_t2 = *(s16 *)((u8 *)temp_a1 + 2);
        temp_f3 = M2C_ERROR(/* Read from unset register $f12 */) - (f32) *(s16 *)((u8 *)temp_a1 + 0);
        if (temp_t2 != 3) {
            if (temp_t2 != 2) {
                if (temp_t2 != 1) {
                    if (temp_t2 != 0) {
                        return;
                    }
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
                    return;
                }
                if (temp_f3 < 0.00001f) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
                    return;
                }
                if (var_a2 == (*(s16 *)((u8 *)arg0 + 8) - 1)) {
                    if (*(s32 *)((u8 *)arg0 + 0) & 2) {
                        if (((f32) *(s16 *)((u8 *)arg0 + 0xA) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                            *(f32 *)((u8 *)arg1 + 0) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0);
                            *(f32 *)((u8 *)arg1 + 4) = (f32) *(f32 *)((u8 *)temp_v1_2 + 4);
                            *(f32 *)((u8 *)arg1 + 8) = (f32) *(f32 *)((u8 *)temp_v1_2 + 8);
                            *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_v1_2 + 0xC);
                            *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x10);
                            *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x14);
                            *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x18);
                            *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x1C);
                            return;
                        }
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a3) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
                        return;
                    }
                    *(f32 *)((u8 *)arg1 + 0) = (f32) *(f32 *)((u8 *)temp_a0 + 0);
                    *(f32 *)((u8 *)arg1 + 4) = (f32) *(f32 *)((u8 *)temp_a0 + 4);
                    *(f32 *)((u8 *)arg1 + 8) = (f32) *(f32 *)((u8 *)temp_a0 + 8);
                    *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a0 + 0xC);
                    *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0 + 0x10);
                    *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0 + 0x14);
                    *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0 + 0x18);
                    *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0 + 0x1C);
                    return;
                }
                if (((f32) *(s16 *)((u8 *)temp_a1 + 4) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                    *(f32 *)((u8 *)arg1 + 0) = (f32) *(f32 *)((u8 *)temp_a0 + 0x20);
                    *(f32 *)((u8 *)arg1 + 4) = (f32) *(f32 *)((u8 *)temp_a0 + 0x24);
                    *(f32 *)((u8 *)arg1 + 8) = (f32) *(f32 *)((u8 *)temp_a0 + 0x28);
                    *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a0 + 0x2C);
                    *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0 + 0x30);
                    *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0 + 0x34);
                    *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0 + 0x38);
                    *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0 + 0x3C);
                    return;
                }
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a3) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
                return;
            }
            if (temp_f3 < 0.00001f) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
                return;
            }
            if (var_a2 == (*(s16 *)((u8 *)arg0 + 8) - 1)) {
                if (*(s32 *)((u8 *)arg0 + 0) & 2) {
                    if (((f32) *(s16 *)((u8 *)arg0 + 0xA) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                        *(f32 *)((u8 *)arg1 + 0) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0);
                        *(f32 *)((u8 *)arg1 + 4) = (f32) *(f32 *)((u8 *)temp_v1_2 + 4);
                        *(f32 *)((u8 *)arg1 + 8) = (f32) *(f32 *)((u8 *)temp_v1_2 + 8);
                        *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_v1_2 + 0xC);
                        *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x10);
                        *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x14);
                        *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x18);
                        *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x1C);
                        return;
                    }
                    if (var_a2 != 0) {

                    }
                    M2C_ERROR(/* unknown instruction: mula.s $f8, $f10 */);
                    M2C_ERROR(/* unknown instruction: msub.s $f7, $f7, $f11 */);
                    M2C_ERROR(/* unknown instruction: adda.s $f6, $f4 */);
                    M2C_ERROR(/* unknown instruction: madd.s $f6, $f5, $f14 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f3, $f8 */);
                    M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f7 */);
                    M2C_ERROR(/* unknown instruction: adda.s $f1, $f2 */);
                    *(f32 *)((u8 *)arg1 + 0) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f4 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f3, $f8 */);
                    M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f7 */);
                    M2C_ERROR(/* unknown instruction: adda.s $f1, $f2 */);
                    *(f32 *)((u8 *)arg1 + 4) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f4 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f3, $f8 */);
                    M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f7 */);
                    M2C_ERROR(/* unknown instruction: adda.s $f1, $f2 */);
                    *(f32 *)((u8 *)arg1 + 8) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f4 */);
                    *(s32 *)((u8 *)arg1 + 0xC) = 0x3F800000;
                    return;
                }
                *(f32 *)((u8 *)arg1 + 0) = (f32) *(f32 *)((u8 *)temp_a0 + 0);
                *(f32 *)((u8 *)arg1 + 4) = (f32) *(f32 *)((u8 *)temp_a0 + 4);
                *(f32 *)((u8 *)arg1 + 8) = (f32) *(f32 *)((u8 *)temp_a0 + 8);
                *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a0 + 0xC);
                *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0 + 0x10);
                *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0 + 0x14);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0 + 0x18);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0 + 0x1C);
                return;
            }
            if (((f32) *(s16 *)((u8 *)temp_a1 + 4) - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                *(f32 *)((u8 *)arg1 + 0) = (f32) *(f32 *)((u8 *)temp_a0 + 0x20);
                *(f32 *)((u8 *)arg1 + 4) = (f32) *(f32 *)((u8 *)temp_a0 + 0x24);
                *(f32 *)((u8 *)arg1 + 8) = (f32) *(f32 *)((u8 *)temp_a0 + 0x28);
                *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a0 + 0x2C);
                *(f32 *)((u8 *)arg1 + 0x10) = (f32) *(f32 *)((u8 *)temp_a0 + 0x30);
                *(f32 *)((u8 *)arg1 + 0x14) = (f32) *(f32 *)((u8 *)temp_a0 + 0x34);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a0 + 0x38);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a0 + 0x3C);
                return;
            }
            if (*(s32 *)((u8 *)arg0 + 0) & 2) {
                if (var_a2 != 0) {

                }
                if (var_a2 == (*(s16 *)((u8 *)arg0 + 8) - 2)) {

                }
            } else {
                if (var_a2 != 0) {

                }
                if (var_a2 == (*(s16 *)((u8 *)arg0 + 8) - 2)) {

                }
            }
            M2C_ERROR(/* unknown instruction: mula.s $f8, $f10 */);
            M2C_ERROR(/* unknown instruction: msub.s $f7, $f7, $f11 */);
            M2C_ERROR(/* unknown instruction: adda.s $f6, $f4 */);
            M2C_ERROR(/* unknown instruction: madd.s $f6, $f5, $f14 */);
            M2C_ERROR(/* unknown instruction: mula.s $f3, $f8 */);
            M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f7 */);
            M2C_ERROR(/* unknown instruction: adda.s $f1, $f2 */);
            *(f32 *)((u8 *)arg1 + 0) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f4 */);
            M2C_ERROR(/* unknown instruction: mula.s $f3, $f8 */);
            M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f7 */);
            M2C_ERROR(/* unknown instruction: adda.s $f1, $f2 */);
            *(f32 *)((u8 *)arg1 + 4) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f4 */);
            M2C_ERROR(/* unknown instruction: mula.s $f3, $f8 */);
            M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f7 */);
            M2C_ERROR(/* unknown instruction: adda.s $f1, $f2 */);
            *(f32 *)((u8 *)arg1 + 8) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f4 */);
            *(s32 *)((u8 *)arg1 + 0xC) = 0x3F800000;
        }
    } else {
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($t0) */);
    }
}
