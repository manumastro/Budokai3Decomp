/* Draft (not built): func_001A73F0 at 0x001A73F0, size 0xCF0, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 696 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5E0, original 0xCF0
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A73F0.s */

// src/battle/btl_cmd.c func_001A73F0 size diff=696/376
extern void func_00146F10(void *, void *, f32);
extern f32 func_00146EB0(void *);
f32 func_00146E60(f32 *, s32);
f32 func_00146E90(f32 *);
s32 func_00146ED0(f32 *, f32 *, f32);
f32 func_00146F90(f32 *, f32 *);
s32 func_001FDD40(f32 *, f32 *);
f32 func_001FE2B0(s32 *, f32, f32);
extern s128 D_00427420;
extern s32 D_0046FDC8;
extern void func_00146F30(void *);
void func_001A73F0(void) {
    s32 sp1D4;
    s32 sp1C8;
    s32 saved_reg_f20;
    s32 spCC;
    f32 *spD0;
    f32 *spE0;
    f32 spF0;
    f32 spF4;
    f32 sp100;
    f32 sp104;
    f32 sp110;
    f32 sp114;
    f32 sp120;
    f32 sp124;
    f32 sp130;
    s32 sp140;
    f32 sp144;
    f32 sp150;
    f32 sp160;
    f32 sp170;
    f32 sp180;
    f32 sp184;
    f32 sp188;
    f32 sp18C;
    f32 sp190;
    f32 sp194;
    f32 sp1A0;
    f32 sp1A4;
    s32 sp1B0;
    f32 sp1C0;
    f32 sp1C4;
    s32 sp1D0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f12;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f20;
    f32 var_f21;
    f32 var_f23;
    f32 var_f24;
    f32 var_f24_2;
    f32 var_f25;
    f32 var_f2;
    s32 temp_s0;
    s32 temp_s7;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    u8 *temp_a0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s6;
    u8 *var_v0;

    var_f20 = saved_reg_f20;
    temp_s6 = (unsigned char *)(gBattle);
    temp_s4 = temp_s6 + 0xA0;
    temp_a0 = temp_s6 + 0x830;
    temp_s3 = temp_s4 + 0xF0;
    if (*(s32 *)((u8 *)temp_s6 + 0x88EC) != 0) {
        goto block_107;
    }
    spE0 = (float *)(temp_s4 + 0x40);
    spD0 = (float *)(temp_s4 + 0x50);
    temp_s2 = temp_s4 + 0x10;
    if (*(f32 *)((u8 *)temp_s3 + 0x30) == 0.0f) {
        goto block_9;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s4 + 0x138);
    if (!(temp_f1 <= 0.0f)) {
        goto block_5;
    }
    var_f2 = 1.0f;
    goto block_6;
block_5:
    var_f2 = temp_f1 / 15.0f;
block_6:
    if (!(var_f2 > 1.0f)) {
        goto block_8;
    }
    var_f2 = 1.0f;
block_8:
    *(f32 *)((u8 *)temp_s3 + 0x30) = (f32) (*(f32 *)((u8 *)temp_s3 + 0x30) * (1.0f - var_f2));
    *(s32 *)((u8 *)temp_s3 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s3 + 0x38) | 1);
block_9:
    if (!(*(f32 *)((u8 *)temp_s4 + 0x138) <= 0.0f)) {
        goto block_11;
    }
    *(s32 *)((u8 *)temp_s4 + 0x14C) = 0;
    var_f23 = 1.0f;
    *(f32 *)((u8 *)temp_s4 + 0x150) = 30.0f;
    goto block_17;
block_11:
    if (*(s16 *)((u8 *)temp_a0 + 0xCAC) == 0xB) {
        goto block_14;
    }
    if (*(s16 *)((u8 *)temp_a0 + 0x2CCC) != 0xB) {
        goto block_16;
    }
block_14:
    var_f23 = 0.1f;
    goto block_17;
block_16:
    var_f23 = 0.08f;
block_17:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s4) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s3) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp1A4 = 0.0f;
    sp194 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (!(*(f32 *)((u8 *)temp_s4 + 0x138) <= 0.0f)) {
        goto block_20;
    }
    var_f0 = 1.0f;
    goto block_24;
block_20:
    if (sp194 <= 0.0f) {
        goto block_23;
    }
    var_f0 = 1.0f;
    goto block_24;
block_23:
    var_f0 = -1.0f;
block_24:
    sp184 = var_f0;
    sp180 = 0.0f;
    sp18C = 1.0f;
    sp188 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp194 = 0.0f;
    func_00146F30(&sp190);
    func_00146F30(&sp1A0);
    var_f21 = M2C_ERROR(/* Read from unset register $f0 */);
    if (var_f21 <= 20.0f) {
        goto block_26;
    }
    goto block_27;
block_26:
    var_f21 = 20.0f;
block_27:
    temp_f21 = 20.0f + var_f21;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F10(&sp1C0, &sp190, temp_f21);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_s1 = 0;
loop_28:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp180);
    var_f12 = 75.0f;
    if (temp_f21 <= 75.0f) {
        goto block_31;
    }
    var_f12 = temp_f21;
block_31:
    func_00146F10(&sp160, &sp180, var_f12);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F10(&sp170, &sp180, temp_f21);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_s7 = D_0046FDC8;
    var_f24 = 0.0f;
    spCC = func_001FDD40(&sp170, &sp160);
    var_s5 = -1;
    var_fp = 0;
    var_s0 = 0;
    goto loop_37;
block_32:
    temp_f0 = func_00146F90((f32 *)(temp_s7 + (var_s0 * 0x30) + 0x10), (f32 *)(&sp180));
    if (!(temp_f0 <= 0.0f)) {
        goto block_36;
    }
    if (var_s5 == -1) {
        goto block_35;
    }
    if (var_f24 <= temp_f0) {
        goto block_36;
    }
block_35:
    var_s5 = var_s0;
    var_f24 = temp_f0;
block_36:
    var_s0 += 1;
loop_37:
    if (var_s0 < spCC) {
        goto block_32;
    }
    if (var_s5 < 0) {
        goto block_60;
    }
    sp150 = (s128) D_00427420;
    if (var_s1 != 0) {
        goto block_41;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp144 = sp1D4;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp130);
block_41:
    temp_s0 = temp_s7 + (var_s5 * 0x30);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    var_f25 = func_00146F90(&sp150, &sp180);
    if (var_s1 == 0) {
        goto block_44;
    }
    var_f25 = var_f20;
    goto block_45;
block_44:
    var_f20 = var_f25;
block_45:
    if (!(var_f25 < 0.0f)) {
        goto block_47;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
block_47:
    temp_f0_2 = temp_f21 * temp_f21;
    if (!(func_00146E60(&sp1C0, temp_s0) < temp_f0_2)) {
        goto block_49;
    }
    M2C_ERROR(/* unknown instruction: c1 0x180004 */);
    func_00146F10(&sp150, &sp150, temp_f21 - temp_f0_2);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
block_49:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (func_00146EB0(&sp180) <= (temp_f21 * temp_f21)) {
        goto block_51;
    }
    func_00146ED0(&sp180, &sp180, temp_f21);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
block_51:
    if (var_s1 != 0) {
        goto block_59;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp180);
    temp_f25 = func_00146F90(&sp180, &sp1A0);
    if (!((temp_f25 * func_00146F90(&sp1A0, &sp130)) < 0.0f)) {
        goto block_57;
    }
    var_f24_2 = 150.0f - M2C_ERROR(/* Read from unset register $f0 */);
    if (var_f24_2 <= 0.0f) {
        goto block_55;
    }
    goto block_56;
block_55:
    var_f24_2 = 0.0f;
block_56:
    func_00146F10((void *)(&sp180), (void *)(temp_s0 + 0x10), var_f24_2);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
block_57:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (func_00146EB0(&sp180) <= (temp_f21 * temp_f21)) {
        goto block_59;
    }
    func_00146ED0(&sp180, &sp180, temp_f21);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
block_59:
    var_fp = 1;
block_60:
    if (var_fp == 0) {
        goto block_62;
    }
    var_s1 += 1;
    if (var_s1 < 5) {
        goto loop_28;
    }
block_62:
    if (var_s1 == 0) {
        goto block_64;
    }
    *(f32 *)((u8 *)temp_s4 + 0x150) = 0.0f;
block_64:
    *(s32 *)((u8 *)temp_s4 + 0x14C) = var_s1;
    temp_f1_2 = *(f32 *)((u8 *)temp_s4 + 0x150) + *(f32 *)((u8 *)temp_s6 + 0x88F0);
    *(f32 *)((u8 *)temp_s4 + 0x150) = temp_f1_2;
    if (!(temp_f1_2 < 30.0f)) {
        goto block_66;
    }
    var_f23 *= 0.4f + (0.6f * (temp_f1_2 / 30.0f));
block_66:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s4) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp184 = 0.0f;
    temp_f20 = func_00146E90(&sp180);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp184 = 0.0f;
    temp_f0_3 = func_00146E90(&sp180);
    if (!(temp_f20 <= (1.5f * temp_f0_3))) {
        goto block_68;
    }
    if (temp_f0_3 <= (1.5f * temp_f20)) {
        goto block_73;
    }
block_68:
    var_v0 = temp_s4;
    if (!(temp_f20 < temp_f0_3)) {
        goto block_71;
    }
    goto block_72;
block_71:
    var_v0 = temp_s2;
block_72:
    var_f1 = *(f32 *)((u8 *)var_v0 + 4) - sp1D4;
    goto block_77;
block_73:
    temp_f2 = *(f32 *)((u8 *)temp_s4 + 4);
    temp_f1_3 = *(f32 *)((u8 *)temp_s2 + 4);
    if (temp_f2 <= temp_f1_3) {
        goto block_76;
    }
    var_f1 = 1.5f * (temp_f2 - sp1D4);
    goto block_77;
block_76:
    var_f1 = 1.5f * (temp_f1_3 - sp1D4);
block_77:
    sp1C4 += var_f1;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f21_2 = sp124;
    temp_f20_2 = sp114;
    sp124 = 0.0f;
    sp114 = 0.0f;
    temp_f24 = func_00146E90(&sp120);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146ED0(&sp120, &sp120, (temp_f24 * (1.0f - var_f23)) + (func_00146E90(&sp110) * var_f23));
    if (*(f32 *)((u8 *)temp_s4 + 0x138) <= 0.0f) {
        goto block_79;
    }
    var_f23 *= 0.5f;
block_79:
    sp124 = (temp_f21_2 * (1.0f - var_f23)) + (temp_f20_2 * var_f23);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (var_s1 == 0) {
        goto block_91;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s4) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp104 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    spF4 = 0.0f;
    temp_f20_3 = func_00146E90(&sp100);
    temp_f0_4 = func_00146E90(&spF0);
    if (!(temp_f20_3 < temp_f0_4)) {
        goto block_83;
    }
    var_f1_2 = 0.5f - (0.25f * ((temp_f0_4 / temp_f20_3) - 1.0f));
    goto block_84;
block_83:
    var_f1_2 = 0.5f + (0.25f * ((temp_f20_3 / temp_f0_4) - 1.0f));
block_84:
    if (var_f1_2 <= 0.7f) {
        goto block_87;
    }
    goto block_90;
block_87:
    if (!(var_f1_2 < 0.3f)) {
        goto block_90;
    }
block_90:
    goto block_100;
block_91:
    temp_f20_4 = 0.001f + func_00146E90(spE0);
    temp_f0_5 = 0.001f + func_00146E90(spD0);
    if (temp_f20_4 <= temp_f0_5) {
        goto block_93;
    }
    var_f1_3 = 0.5f - (0.5f * ((temp_f20_4 / temp_f0_5) - 1.0f));
    goto block_94;
block_93:
    var_f1_3 = 0.5f + (0.5f * ((temp_f0_5 / temp_f20_4) - 1.0f));
block_94:
    if (var_f1_3 <= 0.55f) {
        goto block_97;
    }
    goto block_100;
block_97:
    if (!(var_f1_3 < 0.45f)) {
        goto block_100;
    }
block_100:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f0_6 = 5.0f + func_001FE2B0(&sp1B0, sp1C0, sp1C8);
    if (temp_f0_6 <= sp1C4) {
        goto block_102;
    }
    sp1C4 = temp_f0_6;
block_102:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
    *(s32 *)((u8 *)temp_s3 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s3 + 0x38) | 1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    var_f1_4 = 0.7853982f;
    *(s32 *)((u8 *)temp_s3 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s3 + 0x38) | 1);
    if (!(0.7853982f < 0.08726647f)) {
        goto block_104;
    }
    var_f1_4 = 0.08726647f;
block_104:
    if (var_f1_4 <= 3.0543263f) {
        goto block_106;
    }
    var_f1_4 = 3.0543263f;
block_106:
    *(f32 *)((u8 *)temp_s3 + 0x34) = var_f1_4;
block_107:
    return;
}
