/* Draft (not built): func_00226070 at 0x00226070, size 0x4D0, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  = sp71 + sp6D; @ 485: 0 + 0x18) = (s16) ((s64) ((s64) *M2C_ERROR(/* Read from unset register $t0 */) << 0x30) >> 0x30);
 * Original: asm/nonmatchings/battle/a2d/func_00226070.s */

// src/battle/a2d.c func_00226070 cerr diff=-1/0
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
s32 amMath_SinCosI(s64, f32 *, f32 *);
void func_00226070(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 sp4C;
    u8 sp6C;
    u8 sp70;
    u8 sp71;
    u8 sp72;
    u8 sp73;
    u8 sp74;
    f32 sp78;
    f32 sp7C;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u8 var_v1;
    u8 *temp_a0_3;
    u8 *temp_v1;
    u8 *temp_v1_2;

    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(s16 *)((u8 *)arg0 + 0x18) = (s16) ((s64) ((s64) *M2C_ERROR(/* Read from unset register $t0 */) << 0x30) >> 0x30);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) *(s32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t0 */)) + 4);
    *(s32 *)((u8 *)arg0 + 8) = (s32) *(s32 *)((u8 *)arg2 + 0x14);
    *(u8 **)((u8 *)arg0 + 0x10) = (u8 *) D_00470704;
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) D_0047070C;
    *(s16 *)((u8 *)arg0 + 0x1A) = (s16) ((s64) ((s64) D_00470708 << 0x30) >> 0x30);
    if (!(*D_004706D0 & 0x20)) {
        temp_f1 = *(f32 *)((u8 *)D_004706CC + 0x38);
        if (temp_f1 != 1.0f) {
            *(f32 *)((u8 *)arg0 + 0x30) = (f32) (*(f32 *)((u8 *)arg0 + 0x30) * temp_f1);
            *(f32 *)((u8 *)arg0 + 0x38) = (f32) (*(f32 *)((u8 *)arg0 + 0x38) * *(f32 *)((u8 *)D_004706CC + 0x38));
        }
        temp_f1_2 = *(f32 *)((u8 *)D_004706CC + 0x3C);
        if (temp_f1_2 != 1.0f) {
            *(f32 *)((u8 *)arg0 + 0x34) = (f32) (*(f32 *)((u8 *)arg0 + 0x34) * temp_f1_2);
            *(f32 *)((u8 *)arg0 + 0x3C) = (f32) (*(f32 *)((u8 *)arg0 + 0x3C) * *(f32 *)((u8 *)D_004706CC + 0x3C));
        }
    }
    temp_f1_3 = *(f32 *)((u8 *)arg3 + 0);
    if (temp_f1_3 != 1.0f) {
        *(f32 *)((u8 *)arg0 + 0x30) = (f32) (*(f32 *)((u8 *)arg0 + 0x30) * temp_f1_3);
        *(f32 *)((u8 *)arg0 + 0x38) = (f32) (*(f32 *)((u8 *)arg0 + 0x38) * *(f32 *)((u8 *)arg3 + 0));
    }
    temp_f1_4 = *(f32 *)((u8 *)arg3 + 4);
    if (temp_f1_4 != 1.0f) {
        *(f32 *)((u8 *)arg0 + 0x34) = (f32) (*(f32 *)((u8 *)arg0 + 0x34) * temp_f1_4);
        *(f32 *)((u8 *)arg0 + 0x3C) = (f32) (*(f32 *)((u8 *)arg0 + 0x3C) * *(f32 *)((u8 *)arg3 + 4));
    }
    *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)arg1 + 0);
    *(s128 *)((u8 *)(&sp40) + 0x10) = (s128) *(s128 *)((u8 *)arg1 + 0x10);
    if (!(*D_004706D0 & 0x20)) {
        temp_f2 = *(f32 *)((u8 *)D_004706CC + 0x40);
        if (temp_f2 != 0.0f) {
            amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * temp_f2) / 180.0f)) << 0x30) >> 0x30, &sp7C, &sp78);
            sp4C = 0x3F800000;
            M2C_ERROR(/* unknown instruction: mula.s $f4, $f3 */);
            M2C_ERROR(/* unknown instruction: mula.s $f4, $f1 */);
            sp40 = M2C_ERROR(/* unknown instruction: msub.s $f5, $f2, $f1 */);
            sp44 = M2C_ERROR(/* unknown instruction: madd.s $f1, $f2, $f3 */);
        }
        temp_f1_5 = *(f32 *)((u8 *)D_004706CC + 0x30);
        if (temp_f1_5 != 1.0f) {
            sp40 *= temp_f1_5;
        }
        temp_f1_6 = *(f32 *)((u8 *)D_004706CC + 0x34);
        if (temp_f1_6 != 1.0f) {
            sp44 *= temp_f1_6;
        }
    }
    temp_a0 = *D_004706D0;
    if (!(temp_a0 & 8)) {
        if (temp_a0 & 0x40) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        }
    }
    *(f32 *)((u8 *)arg0 + 0) = (f32) (*(f32 *)((u8 *)arg3 + 8) + *(f32 *)((u8 *)D_004706CC + 0x40));
    temp_a0_2 = *D_004706D0;
    if (!(temp_a0_2 & 0x10)) {
        if (temp_a0_2 & 0x80) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            temp_a0_3 = D_004706CC + 0x20;
            *(u8 *)((u8 *)arg0 + 0x1C) = (u8) *(u8 *)((u8 *)D_004706CC + 0x20);
            *(u8 *)((u8 *)arg0 + 0x1D) = (u8) *(u8 *)((u8 *)temp_a0_3 + 1);
            *(u8 *)((u8 *)arg0 + 0x1E) = (u8) *(u8 *)((u8 *)temp_a0_3 + 2);
            var_v1 = *(u8 *)((u8 *)temp_a0_3 + 3);
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            temp_v1 = arg2 + 0x10;
            *(u8 *)((u8 *)(&sp6C) + 0) = *(u8 *)((u8 *)arg2 + 0x10);
            *(u8 *)((u8 *)(&sp6C) + 1) = (u8) *(u8 *)((u8 *)temp_v1 + 1);
            *(u8 *)((u8 *)(&sp6C) + 2) = (u8) *(u8 *)((u8 *)temp_v1 + 2);
            *(u8 *)((u8 *)(&sp6C) + 3) = (u8) *(u8 *)((u8 *)temp_v1 + 3);
            temp_v1_2 = D_004706CC + 0x20;
            *(u8 *)((u8 *)(&sp70) + 0) = *(u8 *)((u8 *)D_004706CC + 0x20);
            *(u8 *)((u8 *)(&sp70) + 1) = (u8) *(u8 *)((u8 *)temp_v1_2 + 1);
            *(u8 *)((u8 *)(&sp70) + 2) = (u8) *(u8 *)((u8 *)temp_v1_2 + 2);
            *(u8 *)((u8 *)(&sp70) + 3) = (u8) *(u8 *)((u8 *)temp_v1_2 + 3);
            var_v1_2 = (sp70 & 0xFF) + (sp6C & 0xFF);
            if (var_v1_2 >= 0x100) {
                var_v1_2 = 0xFF;
            }
            sp70 = (u8) var_v1_2;
            var_v1_3 = sp71 + sp6D;
            if (var_v1_3 >= 0x100) {
                var_v1_3 = 0xFF;
            }
            sp71 = (u8) var_v1_3;
            var_v1_4 = sp72 + sp6E;
            if (var_v1_4 >= 0x100) {
                var_v1_4 = 0xFF;
            }
            sp72 = (u8) var_v1_4;
            var_v1_5 = sp73 + sp6F;
            if (var_v1_5 >= 0x100) {
                var_v1_5 = 0xFF;
            }
            sp73 = (u8) var_v1_5;
            sp74 = (f32) *(u8 *)((u8 *)(&sp70) + 0);
            *(u8 *)((u8 *)arg0 + 0x1C) = sp74;
            *(u8 *)((u8 *)arg0 + 0x1D) = sp75;
            *(u8 *)((u8 *)arg0 + 0x1E) = sp76;
            var_v1 = sp77;
        }
    } else {
        *(f32 *)((u8 *)arg0 + 0x50) = (f32) *(f32 *)((u8 *)arg2 + 0);
        *(f32 *)((u8 *)arg0 + 0x54) = (f32) *(f32 *)((u8 *)arg2 + 4);
        *(f32 *)((u8 *)arg0 + 0x58) = (f32) *(f32 *)((u8 *)arg2 + 8);
        *(f32 *)((u8 *)arg0 + 0x5C) = (f32) *(f32 *)((u8 *)arg2 + 0xC);
        *(u8 *)((u8 *)arg0 + 0x1C) = (u8) *(u8 *)((u8 *)arg2 + 0x10);
        *(u8 *)((u8 *)arg0 + 0x1D) = (u8) *(u8 *)((u8 *)arg2 + 0x11);
        *(u8 *)((u8 *)arg0 + 0x1E) = (u8) *(u8 *)((u8 *)arg2 + 0x12);
        var_v1 = *(u8 *)((u8 *)arg2 + 0x13);
    }
    *(u8 *)((u8 *)arg0 + 0x1F) = var_v1;
}
