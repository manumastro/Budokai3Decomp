/* Draft (not built): func_001FB880 at 0x001FB880, size 0x218, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 100 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x16C, original 0x218
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FB880.s */

// src/unk/unk_1FB760.c func_001FB880 size diff=100/91
extern f32 func_00146E90(f32 *);
extern void func_00146F10(void *, void *, f32);
f32 func_00146E30(f32 *, f32 *);
f32 func_00146F90(s32 *, s32 *);
f32 func_001FB880() {
    s32 sp58;
    s32 sp68;
    s32 sp28;
    f32 sp20;
    s32 sp30;
    s32 sp40;
    f32 sp50;
    f32 sp54;
    f32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 var_v0;

    if (*D_0051CD28 != 0) {
        goto block_2;
    }
    return 0.0f;
block_2:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp74 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp64 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp54 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f20_2 = func_00146F90(&sp30, &sp40);
    func_00146F10(&sp20, &sp40, temp_f20_2 / func_00146E30(&sp60, &sp50));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_v0 = 0;
    if (!(sp60 < sp50)) {
        goto block_7;
    }
    if (sp20 < sp60) {
        goto block_10;
    }
    if (!(sp20 <= sp50)) {
        goto block_10;
    }
    goto block_9;
block_7:
    if (!(sp20 <= sp60)) {
        goto block_10;
    }
    if (sp20 < sp50) {
        goto block_10;
    }
block_9:
    var_v0 = 1;
block_10:
    if (!(sp68 < sp58)) {
        goto block_14;
    }
    if (sp28 < sp68) {
        goto block_17;
    }
    if (!(sp28 <= sp58)) {
        goto block_17;
    }
    goto block_16;
block_14:
    if (!(sp28 <= sp68)) {
        goto block_17;
    }
    if (sp28 < sp58) {
        goto block_17;
    }
block_16:
    var_v0 += 1;
block_17:
    if (var_v0 >= 2) {
        goto block_21;
    }
    temp_f20 = func_00146E30(&sp70, &sp60);
    temp_f0 = func_00146E30(&sp70, &sp50);
    if (!(temp_f20 < temp_f0)) {
        goto block_20;
    }
    return temp_f20;
block_20:
    return temp_f0;
block_21:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    return func_00146E90(&sp20);
}
