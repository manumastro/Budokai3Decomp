/* Draft (not built): func_002273B0 at 0x002273B0, size 0x458, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d identifier 'spD' mwccps2.exe Compiler: 758: *(u8 *)((u8 *)arg0 + 0x12) = spE; @ 757: *(u8 *)((u8 *)arg0 + 0x11) = spD;
 * Original: asm/nonmatchings/battle/a2d/func_002273B0.s */

// src/battle/a2d.c func_002273B0 cerr diff=-1/0
void func_002273B0(u8 *arg0, u8 *arg1, u8 *arg2, f32 fparg0) {
    s8 sp8;
    s8 sp9;
    s8 spA;
    s8 spB;
    u8 spC;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_a3;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    f32 var_t0;
    f32 var_t0_4;
    f32 var_t1;
    s32 var_t0_2;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_t0_3;
    u8 temp_a2;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;

    M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
    M2C_ERROR(/* unknown instruction: madd.s $f0, $f12, $f2 */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a2) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a0) */);
    temp_v1 = *(u8 *)((u8 *)arg1 + 0x10);
    temp_f0 = (fparg0 * *(f32 *)((u8 *)arg1 + 0x1C)) + ((1.0f - *(f32 *)((u8 *)arg1 + 0x1C)) * (fparg0 * fparg0));
    if ((s32) temp_v1 >= 0) {
        var_f2 = (f32) temp_v1;
    } else {
        var_f2 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
    }
    temp_v1_2 = *(u8 *)((u8 *)arg2 + 0x10);
    if ((s32) temp_v1_2 >= 0) {
        var_f1 = (f32) temp_v1_2;
    } else {
        var_f1 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
    }
    temp_f2 = ((1.0f - temp_f0) * var_f2) + (temp_f0 * var_f1);
    var_v1 = 0xFF;
    if (!(temp_f2 < 255.0f)) {

    } else {
        if (!(temp_f2 >= 2.1474836e9f)) {
            var_a3 = temp_f2;
        } else {
            var_a3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f2 - 2.1474836e9f)) | 0x80000000));
        }
        var_v1 = M2C_BITWISE(s32, var_a3) & 0xFF;
    }
    temp_v1_3 = *(u8 *)((u8 *)arg1 + 0x11);
    if ((s32) temp_v1_3 >= 0) {
        var_f2_2 = (f32) temp_v1_3;
    } else {
        var_f2_2 = 2.0f * (f32) ((temp_v1_3 >> 1) | (temp_v1_3 & 1));
    }
    temp_v1_4 = *(u8 *)((u8 *)arg2 + 0x11);
    if ((s32) temp_v1_4 >= 0) {
        var_f1_2 = (f32) temp_v1_4;
    } else {
        var_f1_2 = 2.0f * (f32) ((temp_v1_4 >> 1) | (temp_v1_4 & 1));
    }
    temp_f2_2 = ((1.0f - temp_f0) * var_f2_2) + (temp_f0 * var_f1_2);
    var_v1_2 = 0xFF;
    if (!(temp_f2_2 < 255.0f)) {

    } else {
        if (!(temp_f2_2 >= 2.1474836e9f)) {
            var_t0 = temp_f2_2;
        } else {
            var_t0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f2_2 - 2.1474836e9f)) | 0x80000000));
        }
        var_v1_2 = M2C_BITWISE(s32, var_t0) & 0xFF;
    }
    temp_t0 = *(u8 *)((u8 *)arg1 + 0x12);
    if ((s32) temp_t0 >= 0) {
        var_f2_3 = (f32) temp_t0;
    } else {
        var_f2_3 = 2.0f * (f32) ((temp_t0 >> 1) | (temp_t0 & 1));
    }
    temp_t0_2 = *(u8 *)((u8 *)arg2 + 0x12);
    if ((s32) temp_t0_2 >= 0) {
        var_f1_3 = (f32) temp_t0_2;
    } else {
        var_f1_3 = 2.0f * (f32) ((temp_t0_2 >> 1) | (temp_t0_2 & 1));
    }
    temp_f2_3 = ((1.0f - temp_f0) * var_f2_3) + (temp_f0 * var_f1_3);
    var_t0_2 = 0xFF;
    if (!(temp_f2_3 < 255.0f)) {

    } else {
        if (!(temp_f2_3 >= 2.1474836e9f)) {
            var_t1 = temp_f2_3;
        } else {
            var_t1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f2_3 - 2.1474836e9f)) | 0x80000000));
        }
        var_t0_2 = M2C_BITWISE(s32, var_t1) & 0xFF;
    }
    temp_t0_3 = *(u8 *)((u8 *)arg1 + 0x13);
    if ((s32) temp_t0_3 >= 0) {
        var_f2_4 = (f32) temp_t0_3;
    } else {
        var_f2_4 = 2.0f * (f32) ((temp_t0_3 >> 1) | (temp_t0_3 & 1));
    }
    temp_a2 = *(u8 *)((u8 *)arg2 + 0x13);
    if ((s32) temp_a2 >= 0) {
        var_f1_4 = (f32) temp_a2;
    } else {
        var_f1_4 = 2.0f * (f32) ((temp_a2 >> 1) | (temp_a2 & 1));
    }
    temp_f2_4 = ((1.0f - temp_f0) * var_f2_4) + (temp_f0 * var_f1_4);
    var_t0_3 = 0xFF;
    if (!(temp_f2_4 < 255.0f)) {

    } else {
        if (!(temp_f2_4 >= 2.1474836e9f)) {
            var_t0_4 = temp_f2_4;
        } else {
            var_t0_4 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f2_4 - 2.1474836e9f)) | 0x80000000));
        }
        var_t0_3 = M2C_BITWISE(s32, var_t0_4) & 0xFF;
    }
    sp9 = var_v1_2 & 0xFF;
    sp8 = var_v1 & 0xFF;
    spA = var_t0_2 & 0xFF;
    spB = var_t0_3;
    spC = (f32) sp8;
    *(u8 *)((u8 *)arg0 + 0x10) = spC;
    *(u8 *)((u8 *)arg0 + 0x11) = spD;
    *(u8 *)((u8 *)arg0 + 0x12) = spE;
    *(u8 *)((u8 *)arg0 + 0x13) = spF;
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) *(s32 *)((u8 *)arg1 + 0x14);
}
