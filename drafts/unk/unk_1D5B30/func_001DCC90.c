/* Draft (not built): func_001DCC90 at 0x001DCC90, size 0x9E4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); dentifier 'sp68' mwccps2.exe Compiler: 2015: var_f1_3 = sp64 / temp_f1; @ 2012: temp_f1 = (sp60 * sp60) + (sp68 * sp68);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DCC90.s */

// src/unk/unk_1D5B30.c func_001DCC90 cerr diff=-1/0
s32 func_0013B190(s32);
s32 func_001414D0(s32 *, f32, f32, f32);
s32 func_001416A0(f32 *, f32 *, f32 *, s32);
s32 func_00141CF0(s32, s32, s32);
s32 func_001423F0(s32, s32, s32 *, f32);
extern void func_0011F680(void);
extern void func_00142100(void *, void *);
void func_001DCC90(u8 *arg0) {
    f32 sp60;
    s32 sp70;
    s32 spB0;
    s32 spC0;
    f32 spC4;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f21;
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f20;
    f32 var_f2;
    f32 var_f2_2;
    s16 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_s0;
    u8 *temp_s2;

    var_s0 = 0;
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xB88);
    temp_f21 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    if (*(s32 *)((u8 *)arg0 + 0x18D8) != 0) {
        if (*(s8 *)((u8 *)arg0 + 0x1FFF) != 0) {
            var_f0 = 1.0f;
        } else {
            var_f0 = 0.0f;
        }
        var_s0 = 1;
        *(f32 *)((u8 *)arg0 + 0x18C0) = var_f0;
        *(s32 *)((u8 *)arg0 + 0x18D8) = 0;
    } else {
        if (*(s32 *)((u8 *)gBattle + 0x88F8) == 4) {
            if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
                goto block_8;
            }
            goto block_11;
        }
block_8:
        if (*(s8 *)((u8 *)arg0 + 0x1FFF) != 0) {
            *(f32 *)((u8 *)arg0 + 0x18C0) = (f32) (*(f32 *)((u8 *)arg0 + 0x18C0) + (0.1f * temp_f21));
        } else {
block_11:
            *(f32 *)((u8 *)arg0 + 0x18C0) = (f32) (*(f32 *)((u8 *)arg0 + 0x18C0) - (0.1f * temp_f21));
        }
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x18C0);
        var_f1 = 1.0f;
        if (!(temp_f0 <= 1.0f)) {

        } else {
            var_f1 = 0.0f;
            if (temp_f0 < 0.0f) {

            } else {
                var_f1 = temp_f0;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x18C0) = var_f1;
    }
    if (*(f32 *)((u8 *)arg0 + 0x18C0) == 0.0f) {
        func_001416A0(&spD0, &spD4, &spD8, *(s32 *)((u8 *)((*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 2) * 4) + temp_s2) + 8) + 0x40);
        *(f32 *)((u8 *)arg0 + 0x18C4) = spD4;
        func_001416A0(&spD0, &spD4, &spD8, *(s32 *)((u8 *)((*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 4) * 4) + temp_s2) + 8) + 0x40);
        *(f32 *)((u8 *)arg0 + 0x18C8) = spD0;
        *(f32 *)((u8 *)arg0 + 0x18CC) = spD4;
        func_001416A0(&spD0, &spD4, &spD8, *(s32 *)((u8 *)((*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 6) * 4) + temp_s2) + 8) + 0x40);
        *(f32 *)((u8 *)arg0 + 0x18D0) = spD0;
        *(f32 *)((u8 *)arg0 + 0x18D4) = spD4;
        return;
    }
    if (var_s0 == 0) {
        if (!(temp_f21 <= 0.0f)) {
            goto block_26;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    } else {
block_26:
        temp_a0 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xCAC);
        if ((temp_a0 != 0xE) && (temp_a0 != 0xB) && (temp_a0 != 9) && (temp_a0 != 4) && (temp_a0 != 6) && (temp_a0 != 5) && (temp_a0 != 2) && (temp_a0 != 0)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        }
        spC4 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x684);
        if ((*(s32 *)((u8 *)gBattle + 0x88F8) == 4) && (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) && (*(s16 *)((u8 *)arg0 + 0xCAC) == 0) && !(*(f32 *)((u8 *)arg0 + 0xCB8) <= 36000.0f)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            *(f32 *)((u8 *)arg0 + 0x18C0) = 1.0f;
            *(s32 *)((u8 *)((((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x26) << 0x30) >> 0x30) * 8) + *(s32 *)((u8 *)temp_s2 + 0)) + 8) = 6;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    }
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_s1 = *(s32 *)((u8 *)((*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 4) * 4) + temp_s2) + 8);
    func_001416A0(&spD0, &spD4, &spD8, temp_s1 + 0x40);
    func_0013B160(arg0);
    func_0013B960((void *)(*(s32 *)((u8 *)temp_s2 + 0x408) + (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x24) << 6)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    func_0013B190(0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    var_f1_2 = *(f32 *)((u8 *)arg0 + 0x18C0);
    if (var_f1_2 < 0.5f) {

    } else {
        var_f1_2 = 0.5f;
    }
    func_0011F680();
    var_f2 = *(f32 *)((u8 *)arg0 + 0x18CC) - M2C_ERROR(/* Read from unset register $f0 */);
    if (var_f2 < 0.0f) {
        var_f2 = -var_f2;
    }
    if (var_f2 < 4.0142574f) {
        if (!(M2C_ERROR(/* Read from unset register $f0 */) <= 0.5235988f)) {

        } else if (M2C_ERROR(/* Read from unset register $f0 */) < -0.5235988f) {

        }
        if (var_s0 != 0) {

        }
        M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
        *(f32 *)((u8 *)arg0 + 0x18CC) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f3 */);
    }
    temp_f1 = (sp60 * sp60) + (sp68 * sp68);
    M2C_ERROR(/* unknown instruction: c1 0x10044 */);
    if (!(temp_f1 <= 0.0f)) {
        var_f1_3 = sp64 / temp_f1;
    } else {
        var_f1_3 = sp64;
    }
    if (!(var_f1_3 <= 1.0f)) {

    } else if (var_f1_3 < -0.3f) {

    }
    if (var_s0 != 0) {

    }
    M2C_ERROR(/* unknown instruction: mula.s $f0, $f1 */);
    *(f32 *)((u8 *)arg0 + 0x18C8) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f2, $f3 */);
    func_001414D0(&spB0, spD0, *(f32 *)((u8 *)arg0 + 0x18CC), spD8);
    temp_a0_2 = temp_s1 + 0x40;
    func_001423F0(temp_a0_2, temp_a0_2, &spB0, 2.0f * var_f1_2);
    func_00141CF0(temp_s1, temp_s1 + 0x40, temp_s1 + 0x50);
    func_0013B160(&sp70);
    func_00142100((void *)(temp_s1 + 0x40), (void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x14) + (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 6) * 0x50) + 0x10));
    func_0013B190(0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    var_f20 = *(f32 *)((u8 *)arg0 + 0x18C0) - 0.5f;
    temp_s1_2 = *(s32 *)((u8 *)((((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 6) << 0x30) >> 0x30) * 4) + temp_s2) + 8);
    if (!(var_f20 <= 0.0f)) {

    } else {
        var_f20 = 0.0f;
    }
    func_0011F680();
    var_f2_2 = *(f32 *)((u8 *)arg0 + 0x18D4) - M2C_ERROR(/* Read from unset register $f0 */);
    if (var_f2_2 < 0.0f) {
        var_f2_2 = -var_f2_2;
    }
    if (var_f2_2 < 4.0142574f) {
        if (!(M2C_ERROR(/* Read from unset register $f0 */) <= 0.6981317f)) {

        } else if (M2C_ERROR(/* Read from unset register $f0 */) < -0.6981317f) {

        }
        if (var_s0 != 0) {

        }
        M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
        *(f32 *)((u8 *)arg0 + 0x18D4) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f3 */);
    }
    temp_f1_2 = (sp60 * sp60) + (sp68 * sp68);
    M2C_ERROR(/* unknown instruction: c1 0x10044 */);
    if (!(temp_f1_2 <= 0.0f)) {
        var_f1_4 = sp64 / temp_f1_2;
    } else {
        var_f1_4 = sp64;
    }
    if (!(var_f1_4 <= 1.0f)) {

    } else if (var_f1_4 < -0.3f) {

    }
    if (var_s0 != 0) {

    }
    M2C_ERROR(/* unknown instruction: mula.s $f0, $f1 */);
    *(f32 *)((u8 *)arg0 + 0x18D0) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f2, $f3 */);
    func_001416A0(&spD0, &spD4, &spD8, temp_s1_2 + 0x40);
    func_001414D0(&spB0, *(f32 *)((u8 *)arg0 + 0x18D0), *(f32 *)((u8 *)arg0 + 0x18D4), spD8);
    temp_a0_3 = temp_s1_2 + 0x40;
    func_001423F0(temp_a0_3, temp_a0_3, &spB0, 2.0f * var_f20);
    func_00141CF0(temp_s1_2, temp_s1_2 + 0x40, temp_s1_2 + 0x50);
}
