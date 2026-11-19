/* Draft (not built): func_00227B20 at 0x00227B20, size 0x714, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 317 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x58C, original 0x714
 * Original: asm/nonmatchings/battle/a2d/func_00227B20.s */

// src/battle/a2d.c func_00227B20 size diff=317/355
s32 amMath_SinCosI(s64, f32 *, f32 *);
void func_00227B20(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 fparg0) {
    s32 spEF;
    s32 spEE;
    s32 spED;
    s32 spEB;
    s32 spEA;
    s32 spE9;
    s32 spE3;
    s32 spE2;
    s32 spE1;
    s32 spDB;
    s32 spDA;
    s32 spD9;
    s32 spB8;
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
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
    u8 *temp_s0;
    u8 *temp_v1_2;
    u8 *temp_v1_4;
    u8 *temp_a0;

    temp_s0 = D_004706CC;
    var_f20 = fparg0;
    if (*D_004706D0 & 1) {
        goto block_19;
    }
    if (!(*(s32 *)((u8 *)arg0 + 0) & 0x10)) {
        goto block_5;
    }
    if (arg1 == NULL) {
        goto block_5;
    }
    amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)temp_s0 + 0x40)) / 180.0f)) << 0x30) >> 0x30, &spFC, &spF8);
    M2C_ERROR(/* unknown instruction: mula.s $f5, $f4 */);
    *(f32 *)((u8 *)temp_s0 + 0) = (f32) (*(f32 *)((u8 *)temp_s0 + 0) + (*(f32 *)((u8 *)temp_s0 + 0x30) * M2C_ERROR(/* unknown instruction: msub.s $f6, $f3, $f2 */)));
    M2C_ERROR(/* unknown instruction: mula.s $f5, $f2 */);
    *(f32 *)((u8 *)temp_s0 + 4) = (f32) (*(f32 *)((u8 *)temp_s0 + 4) + (*(f32 *)((u8 *)temp_s0 + 0x34) * M2C_ERROR(/* unknown instruction: madd.s $f2, $f3, $f4 */)));
    var_f0 = *(f32 *)((u8 *)temp_s0 + 8) + *(f32 *)((u8 *)arg1 + 8);
    goto block_18;
block_5:
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x20);
    if (temp_v1 == 0) {
        goto block_19;
    }
    if (arg0 == NULL) {
        goto block_9;
    }
    if (temp_v1 != 0) {
        goto block_11;
    }
block_9:
    var_f12 = 0.0f;
    goto block_17;
block_11:
    if (!(*(s32 *)((u8 *)arg0 + 0) & 2)) {
        goto block_13;
    }
    var_f12 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 0xA)) + (var_f20 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
    goto block_17;
block_13:
    var_f12 = (f32) *(s16 *)((u8 *)arg0 + 0xA);
    if (var_f20 < var_f12) {
        goto block_16;
    }
    goto block_17;
block_16:
    var_f12 = var_f20;
block_17:
    func_00229840(arg0, &spB0, -1, var_f12);
    amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)D_004706CC + 0x40)) / 180.0f)) << 0x30) >> 0x30, &spF4, &spF0);
    M2C_ERROR(/* unknown instruction: mula.s $f5, $f4 */);
    *(f32 *)((u8 *)temp_s0 + 0) = (f32) (*(f32 *)((u8 *)temp_s0 + 0) + (*(f32 *)((u8 *)temp_s0 + 0x30) * M2C_ERROR(/* unknown instruction: msub.s $f6, $f3, $f2 */)));
    M2C_ERROR(/* unknown instruction: mula.s $f5, $f2 */);
    *(f32 *)((u8 *)temp_s0 + 4) = (f32) (*(f32 *)((u8 *)temp_s0 + 4) + (*(f32 *)((u8 *)temp_s0 + 0x34) * M2C_ERROR(/* unknown instruction: madd.s $f2, $f3, $f4 */)));
    var_f0 = *(f32 *)((u8 *)temp_s0 + 8) + spB8;
block_18:
    *(f32 *)((u8 *)temp_s0 + 8) = var_f0;
block_19:
    if (*D_004706D0 & 2) {
        goto block_59;
    }
    if (!(*(s32 *)((u8 *)arg0 + 0) & 0x20)) {
        goto block_35;
    }
    if (arg2 == NULL) {
        goto block_35;
    }
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
    if (var_v1 < 0x100) {
        goto block_25;
    }
    var_v1 = 0xFF;
block_25:
    spE4 = (u8) var_v1;
    var_v1_2 = spE5 + spE1;
    if (var_v1_2 < 0x100) {
        goto block_28;
    }
    var_v1_2 = 0xFF;
block_28:
    spE5 = (u8) var_v1_2;
    var_v1_3 = spE6 + spE2;
    if (var_v1_3 < 0x100) {
        goto block_31;
    }
    var_v1_3 = 0xFF;
block_31:
    spE6 = (u8) var_v1_3;
    var_v1_4 = spE7 + spE3;
    if (var_v1_4 < 0x100) {
        goto block_34;
    }
    var_v1_4 = 0xFF;
block_34:
    spE7 = (u8) var_v1_4;
    spEC = (f32) *(u8 *)((u8 *)(&spE4) + 0);
    *(u8 *)((u8 *)temp_s0 + 0x20) = spEC;
    *(u8 *)((u8 *)temp_s0 + 0x21) = spED;
    *(u8 *)((u8 *)temp_s0 + 0x22) = spEE;
    *(u8 *)((u8 *)temp_s0 + 0x23) = spEF;
    goto block_59;
block_35:
    temp_v1_3 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_v1_3 == 0) {
        goto block_59;
    }
    if (arg0 == NULL) {
        goto block_39;
    }
    if (temp_v1_3 != 0) {
        goto block_41;
    }
block_39:
    var_f12_2 = 0.0f;
    goto block_47;
block_41:
    if (!(*(s32 *)((u8 *)arg0 + 0) & 4)) {
        goto block_43;
    }
    var_f12_2 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 0xE)) + (var_f20 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
    goto block_47;
block_43:
    var_f12_2 = (f32) *(s16 *)((u8 *)arg0 + 0xE);
    if (var_f20 < var_f12_2) {
        goto block_46;
    }
    goto block_47;
block_46:
    var_f12_2 = var_f20;
block_47:
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
    if (var_v1_5 < 0x100) {
        goto block_49;
    }
    var_v1_5 = 0xFF;
block_49:
    spDC = (u8) var_v1_5;
    var_v1_6 = spDD + spD9;
    if (var_v1_6 < 0x100) {
        goto block_52;
    }
    var_v1_6 = 0xFF;
block_52:
    spDD = (u8) var_v1_6;
    var_v1_7 = spDE + spDA;
    if (var_v1_7 < 0x100) {
        goto block_55;
    }
    var_v1_7 = 0xFF;
block_55:
    spDE = (u8) var_v1_7;
    var_v1_8 = spDF + spDB;
    if (var_v1_8 < 0x100) {
        goto block_58;
    }
    var_v1_8 = 0xFF;
block_58:
    spDF = (u8) var_v1_8;
    spE8 = (f32) *(u8 *)((u8 *)(&spDC) + 0);
    *(u8 *)((u8 *)temp_s0 + 0x20) = spE8;
    *(u8 *)((u8 *)temp_s0 + 0x21) = spE9;
    *(u8 *)((u8 *)temp_s0 + 0x22) = spEA;
    *(u8 *)((u8 *)temp_s0 + 0x23) = spEB;
block_59:
    if (*D_004706D0 & 4) {
        goto block_72;
    }
    if (!(*(s32 *)((u8 *)arg0 + 0) & 8)) {
        goto block_63;
    }
    if (arg3 == NULL) {
        goto block_63;
    }
    *(f32 *)((u8 *)temp_s0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x38) * *(f32 *)((u8 *)arg3 + 0));
    *(f32 *)((u8 *)temp_s0 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x3C) * *(f32 *)((u8 *)arg3 + 4));
    *(f32 *)((u8 *)temp_s0 + 0x40) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x40) + *(f32 *)((u8 *)arg3 + 8));
    return;
block_63:
    if (*(s32 *)((u8 *)arg0 + 0x18) == 0) {
        goto block_72;
    }
    if (arg0 != NULL) {
        goto block_66;
    }
    var_f20 = 0.0f;
    goto block_71;
block_66:
    if (!(*(s32 *)((u8 *)arg0 + 0) & 1)) {
        goto block_68;
    }
    var_f20 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 6)) + (var_f20 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
    goto block_71;
block_68:
    temp_f0 = (f32) *(s16 *)((u8 *)arg0 + 6);
    if (var_f20 < temp_f0) {
        goto block_71;
    }
    var_f20 = temp_f0;
block_71:
    func_002285E0((s32) arg0, var_f20);
    *(f32 *)((u8 *)temp_s0 + 0x30) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x30) * sp70);
    *(f32 *)((u8 *)temp_s0 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x34) * sp74);
    *(f32 *)((u8 *)temp_s0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x38) * sp78);
    *(f32 *)((u8 *)temp_s0 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x3C) * sp7C);
    *(f32 *)((u8 *)temp_s0 + 0x40) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x40) + sp80);
block_72:
    return;
}
