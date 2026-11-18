/* Draft (not built): func_002507B0 at 0x002507B0, size 0x604, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *, float, int, float)' mwccps2.exe Compiler: @ 1162: func_00146ED0(&sp140, arg0 + 0x30, *(f32 *)((u8 *)temp_s2 + 0x3C));
 * Original: asm/nonmatchings/battle/skill_cmd/func_002507B0.s */

// src/battle/skill_cmd.c func_002507B0 cerr diff=-1/0
s32 func_00133780(s32, s32);
s32 func_00134690(s32, s32, s32, s64);
s32 func_001351F0(s32, s32, s32, f32 *);
s32 func_00135F10(s32 *, f32 *);
s32 func_00136230(s32 *, f32 *);
f32 func_00146E30(void *, void *);
s32 func_00146ED0(s32 *, s32 *, f32, s32, f32);
extern void amDraw_FlushPacket(void);
void func_002507B0(u8 *arg0) {
    s32 sp70;
    s32 sp80;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    f32 sp120;
    f32 sp124;
    f32 sp128;
    f32 sp12C;
    f32 sp130;
    f32 sp134;
    f32 sp138;
    f32 sp13C;
    s32 sp140;
    s32 sp150;
    s32 sp160;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f8;
    f32 var_f20;
    s16 temp_v1;
    s16 var_v0;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s4_2;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
    temp_s4 = func_0020B020(temp_s0, *(s16 *)((u8 *)temp_s2 + 0x20), *(s16 *)((u8 *)temp_s2 + 0x22));
    amModel_SetCurrent(temp_s4, func_0020AD30(temp_s0, *(s16 *)((u8 *)temp_s2 + 0x20), *(s16 *)((u8 *)temp_s2 + 0x22)));
    var_f20 = 1.0f;
    temp_f1 = *(f32 *)((u8 *)arg0 + 0);
    if (temp_f1 < 12.0f) {
        temp_f20 = temp_f1 / 12.0f;
        var_f20 = temp_f20 * temp_f20;
    }
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    func_00146ED0(&sp140, arg0 + 0x30, *(f32 *)((u8 *)temp_s2 + 0x3C));
    if (gBattle != NULL) {
        var_v0 = *(s16 *)((u8 *)gBattle + 0x8944);
    } else {
        var_v0 = 0;
    }
    if ((var_v0 != 0) && ((temp_v1 = *(s16 *)((u8 *)temp_s2 + 0xE0), (temp_v1 == 3)) || (temp_v1 == 4))) {
        func_0020D400(arg0 + 0x10, temp_s1, *(s32 *)((u8 *)temp_s2 + 0x2C));
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00209D70(&sp160);
    if (*(u8 **)((u8 *)arg0 + 0x48) != NULL) {
        func_0013B060(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x48))));
    }
    if ((*(u8 **)((u8 *)arg0 + 0x4C) != NULL) && !(*(s16 *)((u8 *)arg0 + 4) & 0x2000)) {
        func_0013B060(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x4C))));
    }
    func_0013B110(1);
    func_00209C50();
    func_00133780(0, 1);
    if (!(*(f32 *)((u8 *)arg0 + 0) <= 0.0f)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146ED0(&sp110, &sp110, *(f32 *)((u8 *)temp_s2 + 0x40), 0, 0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp130 = *(f32 *)((u8 *)temp_s2 + 0x44) * var_f20;
        sp138 = 0.0f;
        sp13C = 1.0f;
        sp120 = 0.0f;
        sp124 = 0.0f;
        sp128 = 1.0f;
        sp134 = *(f32 *)((u8 *)temp_s2 + 0x44) * var_f20;
        sp12C = 1.0f;
        func_001351F0(1, 0xC21, 0, &sp120);
        func_00136230(&sp160, &sp130);
        amDraw_FlushPacket();
    }
    if (!(*(f32 *)((u8 *)arg0 + 0) <= 0.0f)) {
        temp_f0 = func_00146E30(arg0 + 0x10, arg0 + 0x20);
        temp_f8 = *(f32 *)((u8 *)arg0 + 0x44);
        sp94 = 0.0f;
        sp98 = 1.0f;
        temp_f1_2 = (temp_f0 / (2.0f * *(f32 *)((u8 *)temp_s2 + 0x4C) * *(f32 *)((u8 *)temp_s2 + 0x54))) + *(f32 *)((u8 *)arg0 + 0x44);
        spB0 = temp_f1_2;
        spC0 = temp_f1_2;
        sp9C = 1.0f;
        spA4 = 1.0f;
        spA8 = 1.0f;
        spAC = 1.0f;
        spB8 = 1.0f;
        spBC = 1.0f;
        spC4 = 1.0f;
        spC8 = 1.0f;
        sp90 = temp_f8;
        spA0 = temp_f8;
        spCC = 1.0f;
        spB4 = 0.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t4) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146ED0(&sp150, &sp70, 1.0f, 0x3F800000, *(f32 *)((u8 *)temp_s2 + 0x4C) * var_f20);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00134690(1, 0xC24, 0, (s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x4A) << 0x30) >> 0x30);
        func_00135F10(&spD0, &sp90);
        func_00135F10(&spE0, &spA0);
        func_00135F10(&spF0, &spB0);
        func_00135F10(&sp100, &spC0);
        amDraw_FlushPacket();
    }
    func_00133780(0, 0);
    if ((*(u8 **)((u8 *)D_0046FE54 + 0x5C) != NULL) && (*(s16 *)((u8 *)D_0046FE54 + 0x62) == *(s32 *)((u8 *)temp_s1 + 0x1350))) {
        temp_s4_2 = func_0020B020(0, 7, 0);
        amModel_SetCurrent(temp_s4_2, func_0020AD30(temp_s0, 7, 0));
        func_0013B0B0(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00209D70(&sp160);
        func_0013B060(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)D_0046FE54 + 0x5C))));
        func_0013B110(1);
        func_00209C50();
    }
}
