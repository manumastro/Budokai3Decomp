/* Draft (not built): func_0024D4C0 at 0x0024D4C0, size 0x64C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); nc_00146ED0(int *, int *, float, int, float)' @ 824: func_00146ED0(&sp140, arg0 + 0x30, *(f32 *)((u8 *)temp_s3 + 0x3C));
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024D4C0.s */

// src/battle/skill_cmd.c func_0024D4C0 cerr diff=-1/0
s32 func_00133780(s32, s32);
s32 func_00134690(s32, s32, s32, s64);
s32 func_001351F0(s32, s32, s32, f32 *);
s32 func_00135F10(s32 *, f32 *);
s32 func_00136230(s32 *, f32 *);
f32 func_00146E30(s32 *, s32 *);
s32 func_00146ED0(s32 *, s32 *, f32, s32, f32);
extern void amDraw_FlushPacket(void);
void func_0024D4C0(u8 *arg0) {
    s32 sp70;
    s32 sp80;
    s32 sp90;
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
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
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
    s32 sp170;
    s32 sp180;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f8;
    f32 var_f20;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_s0;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s2 = *(u8 **)((u8 *)arg0 + 8);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x1350);
    temp_s0 = func_0020B020(temp_s1, *(s16 *)((u8 *)temp_s3 + 0x20), *(s16 *)((u8 *)temp_s3 + 0x22));
    amModel_SetCurrent(temp_s0, func_0020AD30(temp_s1, *(s16 *)((u8 *)temp_s3 + 0x20), *(s16 *)((u8 *)temp_s3 + 0x22)));
    var_f20 = 1.0f;
    temp_f1 = *(f32 *)((u8 *)arg0 + 0);
    if (temp_f1 < 12.0f) {
        temp_f20 = temp_f1 / 12.0f;
        var_f20 = temp_f20 * temp_f20;
    }
    var_s0 = 0;
loop_17:
    if (var_s0 < 2) {
        if (var_s0 == 0) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        }
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_0013B0B0(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        func_00146ED0(&sp140, arg0 + 0x30, *(f32 *)((u8 *)temp_s3 + 0x3C));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00209D70(&sp180);
        if (*(u8 **)((u8 *)arg0 + 0x58) != NULL) {
            func_0013B060(NULL);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x58))));
        }
        if ((*(u8 **)((u8 *)arg0 + 0x5C) != NULL) && !(*(s16 *)((u8 *)arg0 + 4) & 0x2000)) {
            func_0013B060(NULL);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x5C))));
        }
        func_0013B110(1);
        func_00209C50();
        func_00133780(0, 1);
        if (!(*(f32 *)((u8 *)arg0 + 0) <= 0.0f)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_00146ED0(&sp170, &sp170, *(f32 *)((u8 *)temp_s3 + 0x40), 0, 0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            sp130 = *(f32 *)((u8 *)temp_s3 + 0x44) * var_f20;
            sp138 = 0.0f;
            sp13C = 1.0f;
            sp120 = 0.0f;
            sp124 = 0.0f;
            sp128 = 1.0f;
            sp134 = *(f32 *)((u8 *)temp_s3 + 0x44) * var_f20;
            sp12C = 1.0f;
            func_001351F0(1, 0xC21, 0, &sp120);
            func_00136230(&sp180, &sp130);
            amDraw_FlushPacket();
        }
        if (!(*(f32 *)((u8 *)arg0 + 0) <= 0.0f)) {
            temp_f0 = func_00146E30(&sp160, &sp150);
            temp_f8 = *(f32 *)((u8 *)arg0 + 0x54);
            spA4 = 0.0f;
            temp_f0_2 = (temp_f0 / (2.0f * *(f32 *)((u8 *)temp_s3 + 0x4C) * *(f32 *)((u8 *)temp_s3 + 0x54))) + *(f32 *)((u8 *)arg0 + 0x54);
            spA8 = 1.0f;
            spC0 = temp_f0_2;
            spD0 = temp_f0_2;
            spB4 = 1.0f;
            spAC = 1.0f;
            spB8 = 1.0f;
            spBC = 1.0f;
            spC8 = 1.0f;
            spCC = 1.0f;
            spD4 = 1.0f;
            spD8 = 1.0f;
            spA0 = temp_f8;
            spB0 = temp_f8;
            spDC = 1.0f;
            spC4 = 0.0f;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t4) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t5) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_00146ED0(&sp70, &sp80, 1.0f, 0x3F800000, *(f32 *)((u8 *)temp_s3 + 0x4C) * var_f20);
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
            func_00134690(1, 0xC24, 0, (s64) ((s64) *(s16 *)((u8 *)temp_s3 + 0x4A) << 0x30) >> 0x30);
            func_00135F10(&spE0, &spA0);
            func_00135F10(&spF0, &spB0);
            func_00135F10(&sp100, &spC0);
            func_00135F10(&sp110, &spD0);
            amDraw_FlushPacket();
        }
        func_00133780(0, 0);
        var_s0 += 1;
        goto loop_17;
    }
    if ((*(u8 **)((u8 *)D_0046FE54 + 0x5C) != NULL) && (*(s16 *)((u8 *)D_0046FE54 + 0x62) == *(s32 *)((u8 *)temp_s2 + 0x1350))) {
        temp_s0_2 = func_0020B020(0, 7, 0);
        amModel_SetCurrent(temp_s0_2, func_0020AD30(temp_s1, 7, 0));
        func_0013B0B0(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00209D70(&sp180);
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
