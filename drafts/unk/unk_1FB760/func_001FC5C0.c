/* Draft (not built): func_001FC5C0 at 0x001FC5C0, size 0x260, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x260
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FC5C0.s */

// src/unk/unk_1FB760.c func_001FC5C0 size diff=115/124
extern f32 func_00146E90(f32 *);
extern void func_00146F30(f32 *);
extern void func_00146F10(void *, void *, f32);
extern f32 func_00146EB0(f32 *);
s32 func_00146F90(f32 *, f32 *);
s32 func_001FC5C0(u8 *arg0, f32 *arg1, s32 arg2) {
    s32 sp74;
    s32 sp78;
    f32 sp60;
    f32 sp70;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f12;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f2;
    f32 var_f3;
    s32 var_v1;

    if (*D_0051CD28 == 0) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    temp_f21 = func_00146E90(&sp70);
    func_00146F30(&sp70);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00146F90(&sp70, &sp60);
    temp_f22 = M2C_ERROR(/* unknown instruction: mula.s $f22, $f22 */);
    temp_f3 = func_00146EB0(&sp60) - *(f32 *)((u8 *)(M2C_ERROR(/* Read from unset register $t0 */)) + 0x14);
    temp_f0 = M2C_ERROR(/* unknown instruction: msub.s $f0, $f2, $f3 */);
    if (temp_f0 < 0.0f) {
        return 0;
    }
    if (temp_f22 < 0.0f) {
        var_f1 = -1.0f;
    } else {
        var_f1 = 1.0f;
    }
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    temp_f0_2 = -(temp_f22 + (var_f1 * temp_f0)) / 2.0f;
    var_f12 = temp_f0_2 / (sp78 + (sp70 + sp74));
    var_f3 = temp_f3 / temp_f0_2;
    var_f2 = fabsf(var_f12);
    temp_f0_3 = fabsf(var_f3);
    if (!(var_f2 <= temp_f0_3)) {
        var_f2 = temp_f0_3;
        temp_f0_4 = var_f12;
        var_f12 = var_f3;
        var_f3 = temp_f0_4;
    }
    var_v1 = 0;
    if (var_f3 < 0.0f) {
        var_f1_2 = -1.0f;
    } else {
        var_f1_2 = 1.0f;
    }
    if (var_f12 < 0.0f) {
        var_f0 = -1.0f;
    } else {
        var_f0 = 1.0f;
    }
    if (var_f0 == var_f1_2) {
        if (var_f2 <= temp_f21) {
            var_v1 = 1;
        }
    } else {
        var_v1 = 1;
        if (!(var_f12 < 0.0f)) {
            var_f12 = var_f3;
        }
    }
    if (var_v1 != 0) {
        func_00146F10(arg0, &sp70, var_f12);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        func_00146F30(arg1);
        return 1;
    }
    return 0;
}
