/* Draft (not built): func_001C4C10 at 0x001C4C10, size 0x9BC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 438 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x774, original 0x9BC
 * Original: asm/nonmatchings/battle/btl_main/func_001C4C10.s */

// src/battle/btl_main.c func_001C4C10 size diff=438/477
f32 func_00146F90(s32 *, s32 *);
s32 func_001E4CE0(void *, s32 *, f32);
extern void func_00146F30(void *);
void func_001C4C10(u8 *arg0, u8 *arg1) {
    s32 spB0;
    f32 spB4;
    s32 spC0;
    f32 spC4;
    s32 spD0;
    f32 spD4;
    s32 spE0;
    f32 spE4;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f22_5;
    f32 var_f20;
    f32 var_f21;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_fp;
    s32 var_fp_2;
    s32 var_fp_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s7;
    s32 var_s7_2;
    u8 *temp_s3;
    u8 *temp_s6;
    u8 *var_s4;

    var_s7 = 0;
    var_s4 = arg1;
    var_s0 = 0;
    if (var_s4 != NULL) {
        goto block_2;
    }
    var_s4 = *(u8 **)((u8 *)arg0 + 0x1354);
block_2:
    temp_s3 = *(u8 **)((u8 *)arg0 + 0xBB4);
    temp_s6 = *(u8 **)((u8 *)var_s4 + 0xBB4);
    func_001E4FA0(arg0, 1);
    func_001E4FA0(var_s4, 1);
    temp_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    if (temp_v0 == 0x28) {
        goto block_29;
    }
    if (temp_v0 == 0x14) {
        goto block_29;
    }
    if (temp_v0 == 8) {
        goto block_29;
    }
    if (temp_v0 == 7) {
        goto block_29;
    }
    if (temp_v0 == 0xF) {
        goto block_27;
    }
    if (temp_v0 == 0x1A) {
        goto block_26;
    }
    if (temp_v0 == 0x19) {
        goto block_26;
    }
    if (temp_v0 == 6) {
        goto block_26;
    }
    if (temp_v0 == 5) {
        goto block_26;
    }
    if (temp_v0 == 0xE) {
        goto block_25;
    }
    if (temp_v0 == 0xD) {
        goto block_25;
    }
    if (temp_v0 == 4) {
        goto block_25;
    }
    if (temp_v0 == 3) {
        goto block_25;
    }
    if (temp_v0 == 2) {
        goto block_25;
    }
    if (temp_v0 == 0xB) {
        goto block_24;
    }
    if (temp_v0 == 9) {
        goto block_24;
    }
    if (temp_v0 == 1) {
        goto block_24;
    }
    if (temp_v0 == 0) {
        goto block_24;
    }
    if (temp_v0 == 0x12) {
        goto block_23;
    }
    goto block_30;
block_23:
    var_s0 = 1;
block_24:
    var_s0 += 1;
block_25:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    *(f32 *)((u8 *)(&spF0) + 4) = (f32) *(f32 *)((u8 *)arg0 + 0x84);
    goto block_31;
block_26:
    var_s0 = 1;
block_27:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    spE4 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    spD4 = 0.0f;
    func_00146F30(&spE0);
    func_00146F10(&spF0, &spE0, func_00146F90(&spE0, &spD0));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    *(f32 *)((u8 *)(&spF0) + 4) = (f32) *(f32 *)((u8 *)arg0 + 0x94);
    goto block_31;
block_29:
    var_s0 = 1;
block_30:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
block_31:
    temp_v0_2 = *(s16 *)((u8 *)var_s4 + 0xCAC);
    if (temp_v0_2 == 0x28) {
        goto block_56;
    }
    if (temp_v0_2 == 0x14) {
        goto block_56;
    }
    if (temp_v0_2 == 8) {
        goto block_56;
    }
    if (temp_v0_2 == 7) {
        goto block_56;
    }
    if (temp_v0_2 == 0xF) {
        goto block_54;
    }
    if (temp_v0_2 == 0x1A) {
        goto block_53;
    }
    if (temp_v0_2 == 0x19) {
        goto block_53;
    }
    if (temp_v0_2 == 6) {
        goto block_53;
    }
    if (temp_v0_2 == 5) {
        goto block_53;
    }
    if (temp_v0_2 == 0xE) {
        goto block_52;
    }
    if (temp_v0_2 == 4) {
        goto block_52;
    }
    if (temp_v0_2 == 3) {
        goto block_52;
    }
    if (temp_v0_2 == 2) {
        goto block_52;
    }
    if (temp_v0_2 == 0xB) {
        goto block_51;
    }
    if (temp_v0_2 == 9) {
        goto block_51;
    }
    if (temp_v0_2 == 1) {
        goto block_51;
    }
    if (temp_v0_2 == 0) {
        goto block_51;
    }
    if (temp_v0_2 == 0x12) {
        goto block_50;
    }
    goto block_57;
block_50:
    var_s0 += 1;
block_51:
    var_s0 += 1;
block_52:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    *(f32 *)((u8 *)(&sp100) + 4) = (f32) *(f32 *)((u8 *)var_s4 + 0x84);
    goto block_58;
block_53:
    var_s0 += 1;
block_54:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    spC4 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    spB4 = 0.0f;
    func_00146F30(&spC0);
    func_00146F10(&sp100, &spC0, func_00146F90(&spC0, &spB0));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    *(f32 *)((u8 *)(&sp100) + 4) = (f32) *(f32 *)((u8 *)var_s4 + 0x94);
    goto block_58;
block_56:
    var_s0 += 1;
block_57:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
block_58:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    var_fp = 1;
    temp_f22 = *(f32 *)((u8 *)temp_s3 + 0x10) + *(f32 *)((u8 *)temp_s6 + 0x10);
    goto loop_61;
block_59:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    temp_f0 = func_00146E60(&spF0, &sp100);
    if ((temp_f22 * temp_f22) <= temp_f0) {
        goto block_63;
    }
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    func_001E4CE0(arg0, &sp110, 0.5f * (temp_f22 - temp_f0));
    func_001E4FA0(arg0, 1);
    func_001E4FA0(var_s4, 1);
    var_s7 = 1;
    var_fp += 1;
loop_61:
    if (var_fp < 9) {
        goto block_59;
    }
block_63:
    var_fp_2 = 1;
    temp_f20 = 0.0f + (2.0f * *(f32 *)((u8 *)arg0 + 0x1A04)) + (2.0f * *(f32 *)((u8 *)var_s4 + 0x1A04));
    temp_f22_2 = temp_f20 + (*(f32 *)((u8 *)temp_s3 + 0x10) + *(f32 *)((u8 *)temp_s6 + 0x14));
    goto loop_67;
block_65:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    *(f32 *)((u8 *)(&sp100) + 4) = (f32) (*(f32 *)((u8 *)(&sp100) + 4) - (1.2f * *(f32 *)((u8 *)temp_s6 + 0x10)));
    temp_f0_2 = func_00146E60(&spF0, &sp100);
    if ((temp_f22_2 * temp_f22_2) <= temp_f0_2) {
        goto block_69;
    }
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    func_001E4CE0(arg0, &sp110, 0.5f * (temp_f22_2 - temp_f0_2));
    func_001E4FA0(arg0, 1);
    func_001E4FA0(var_s4, 1);
    var_s7 = 1;
    var_fp_2 += 1;
loop_67:
    if (var_fp_2 < 9) {
        goto block_65;
    }
block_69:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    *(f32 *)((u8 *)(&spF0) + 4) = (f32) (*(f32 *)((u8 *)(&spF0) + 4) - (1.4f * *(f32 *)((u8 *)temp_s3 + 0x10)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    temp_f22_3 = temp_f20 + (*(f32 *)((u8 *)temp_s3 + 0x14) + *(f32 *)((u8 *)temp_s6 + 0x10));
    temp_f0_3 = func_00146E60(&spF0, &sp100);
    if ((temp_f22_3 * temp_f22_3) <= temp_f0_3) {
        goto block_71;
    }
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    func_001E4CE0(arg0, &sp110, 0.5f * (temp_f22_3 - temp_f0_3));
    func_001E4FA0(arg0, 1);
    func_001E4FA0(var_s4, 1);
    var_s7 = 1;
block_71:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    *(f32 *)((u8 *)(&spF0) + 4) = (f32) (*(f32 *)((u8 *)(&spF0) + 4) - (1.2f * *(f32 *)((u8 *)temp_s3 + 0x10)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    *(f32 *)((u8 *)(&sp100) + 4) = (f32) (*(f32 *)((u8 *)(&sp100) + 4) - (1.2f * *(f32 *)((u8 *)temp_s6 + 0x10)));
    temp_f22_4 = *(f32 *)((u8 *)temp_s3 + 0x14) + *(f32 *)((u8 *)temp_s6 + 0x14);
    temp_f0_4 = func_00146E60(&spF0, &sp100);
    if ((temp_f22_4 * temp_f22_4) <= temp_f0_4) {
        goto block_73;
    }
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    func_001E4CE0(arg0, &sp110, 0.5f * (temp_f22_4 - temp_f0_4));
    var_s7 = 1;
block_73:
    func_001E4FA0(arg0, 8);
    func_001E4FA0(var_s4, 8);
    if (func_00146E60(arg0 + 0x680, var_s4 + 0x680) >= 25.0f) {
        goto block_75;
    }
    M2C_ERROR(/* unknown instruction: c1 0x84 */);
    func_001E4CE0(arg0, &sp110, 0.5f * (5.0f - M2C_ERROR(/* Read from unset register $f2 */)));
    var_s7 = 1;
block_75:
    if (var_s7 == 0) {
        goto block_77;
    }
    func_001E4FA0(arg0, -1);
    func_001E4FA0(var_s4, -1);
block_77:
    if (var_s0 < 2) {
        goto block_100;
    }
    var_f21 = 0.75f;
    var_f20 = 0.05f;
    temp_a0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    if (temp_a0 == 9) {
        goto block_81;
    }
    if (temp_a0 != 0xB) {
        goto block_85;
    }
block_81:
    temp_a0_2 = *(s16 *)((u8 *)var_s4 + 0xCAC);
    if (temp_a0_2 == 9) {
        goto block_84;
    }
    if (temp_a0_2 != 0xB) {
        goto block_85;
    }
block_84:
    var_f21 = 0.9f;
    var_f20 = 0.9f;
block_85:
    var_fp_3 = 1;
    goto loop_98;
block_86:
    if (*(f32 *)((u8 *)((var_fp_3 * 4) + temp_s6) + 0x18) <= 0.0f) {
        goto block_97;
    }
    var_s7_2 = 0;
    var_s0_2 = 0;
    goto loop_94;
block_88:
    if (*(f32 *)((u8 *)((var_s0_2 * 4) + temp_s3) + 0x18) <= 0.0f) {
        goto block_93;
    }
    if (var_s7_2 == 0) {
        goto block_91;
    }
    func_001E4FA0(arg0, 1 << var_s0_2);
block_91:
    temp_f22_5 = var_f21 * (*(f32 *)((u8 *)((var_s0_2 * 4) + temp_s3) + 0x18) + *(f32 *)((u8 *)((var_fp_3 * 4) + temp_s6) + 0x18));
    temp_f0_5 = func_00146E60(arg0 + (var_s0_2 * 0x10) + 0x650, var_s4 + (var_fp_3 * 0x10) + 0x650);
    if ((temp_f22_5 * temp_f22_5) <= temp_f0_5) {
        goto block_93;
    }
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    func_001E4CE0(arg0, &sp110, 0.5f * (temp_f22_5 - temp_f0_5) * var_f20);
    var_s7_2 = 1;
block_93:
    var_s0_2 += 1;
loop_94:
    if (var_s0_2 < 0x16) {
        goto block_88;
    }
    if (var_s7_2 == 0) {
        goto block_97;
    }
    func_001E4FA0(arg0, -1);
    func_001E4FA0(var_s4, -1);
block_97:
    var_fp_3 += 1;
loop_98:
    if (var_fp_3 < 0x16) {
        goto block_86;
    }
block_100:
    return;
}
