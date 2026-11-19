/* Draft (not built): func_001FC220 at 0x001FC220, size 0x39C, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 187 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x264, original 0x39C
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FC220.s */

// src/unk/unk_1FB760.c func_001FC220 size diff=187/153
extern f32 func_00146E90(f32 *);
extern void func_00146F30(f32 *);
extern void func_00146F10(void *, void *, f32);
s32 func_00142280(s32 *, void *, s32 *, void *);
extern void func_00141C30(void *, void *, void *);
s32 func_001FC220(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    f32 sp70;
    s32 sp80;
    f32 sp84;
    s32 sp90;
    f32 sp94;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    f32 spC4;
    s32 spD0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f20;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f3;
    f32 var_f4;
    s32 var_v1;
    u8 *temp_s0;

    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    if (D_0051CD28 == 0) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    spC4 = 100.0f;
    func_00141C30(&spB0, &spC0, &spD0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00142280(&sp90, arg2, &spA0, temp_s0);
    func_00142280(&sp80, arg3, &spA0, temp_s0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    temp_f0 = *(f32 *)((u8 *)arg2 + 4);
    var_f2 = *(f32 *)((u8 *)arg3 + 4);
    var_f1 = temp_f0;
    if (!(temp_f0 <= var_f2)) {

    } else {
        var_f1 = var_f2;
        var_f2 = temp_f0;
    }
    if ((var_f1 < *(f32 *)((u8 *)temp_s0 + 4)) || !(var_f2 <= *(f32 *)((u8 *)temp_s0 + 0x14))) {
        return 0;
    }
    sp94 = 0.0f;
    sp84 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f20 = func_00146E90(&sp70);
    func_00146F30(&sp70);
    M2C_ERROR(/* unknown instruction: mula.s $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: mula.s $f5, $f8 */);
    M2C_ERROR(/* unknown instruction: madd.s $f4, $f4, $f7 */);
    M2C_ERROR(/* unknown instruction: mula.s $f8, $f8 */);
    temp_f4 = M2C_ERROR(/* unknown instruction: mula.s $f4, $f4 */);
    if (M2C_ERROR(/* unknown instruction: msub.s $f2, $f1, $f3 */) < 0.0f) {
        return 0;
    }
    if (temp_f4 < 0.0f) {
        var_f1_2 = -1.0f;
    } else {
        var_f1_2 = 1.0f;
    }
    M2C_ERROR(/* unknown instruction: c1 0x20004 */);
    temp_f0_2 = -(temp_f4 + (var_f1_2 * 0.0f)) / 2.0f;
    var_f4 = temp_f0_2 / M2C_ERROR(/* unknown instruction: madd.s $f6, $f4, $f4 */);
    var_f3 = (M2C_ERROR(/* unknown instruction: madd.s $f3, $f7, $f7 */) - *(f32 *)((u8 *)temp_s0 + 0x28)) / temp_f0_2;
    var_f2_2 = fabsf(var_f4);
    temp_f0_3 = fabsf(var_f3);
    if (!(var_f2_2 <= temp_f0_3)) {
        var_f2_2 = temp_f0_3;
        temp_f0_4 = var_f4;
        var_f4 = var_f3;
        var_f3 = temp_f0_4;
    }
    var_v1 = 0;
    if (var_f3 < 0.0f) {
        var_f1_3 = -1.0f;
    } else {
        var_f1_3 = 1.0f;
    }
    if (var_f4 < 0.0f) {
        var_f0 = -1.0f;
    } else {
        var_f0 = 1.0f;
    }
    if (var_f0 == var_f1_3) {
        if (var_f2_2 <= temp_f20) {
            var_v1 = 1;
        }
    } else {
        var_v1 = 1;
        if (!(var_f4 < 0.0f)) {
            var_f4 = var_f3;
        }
    }
    if (var_v1 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_00146F10((void *)(arg0), (void *)(&sp70), var_f4 / temp_f20);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
        *(f32 *)((u8 *)arg1 + 4) = 0.0f;
        func_00146F30((f32 *)(arg1));
        return 1;
    }
    return 0;
}
