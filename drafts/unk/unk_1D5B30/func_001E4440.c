/* Draft (not built): func_001E4440 at 0x001E4440, size 0x3B8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 165 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2AC, original 0x3B8
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E4440.s */

// src/unk/unk_1D5B30.c func_001E4440 size diff=165/171
void func_001E4440(void) {
    s32 sp54;
    s32 sp50;
    u8 sp[0x400];
    s32 sp40;
    f32 temp_f0;
    s16 temp_s1;
    s32 temp_a0;
    s32 var_a1;
    s32 var_t7;
    u8 *temp_s0;
    u8 *var_s1;
    u8 *var_s2;

    temp_s0 = (unsigned char *)(gBattle);
    if (*(s16 *)((u8 *)temp_s0 + 0x8944) != 0) {
        goto block_43;
    }
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x88F8);
    if (temp_a0 == 3) {
        goto block_3;
    }
    if (temp_a0 != 4) {
        goto block_43;
    }
block_3:
    temp_f0 = func_001E52B0(0);
    var_t7 = 0;
    if (temp_f0 <= 150.0f) {
        goto block_43;
    }
    goto loop_24;
block_5:
    temp_s1 = *(s16 *)((u8 *)((var_t7 * 0x2020) + temp_s0) + 0x14DC);
    if (temp_s1 == 0x18) {
        goto block_21;
    }
    if (temp_s1 == 0x17) {
        goto block_21;
    }
    if (temp_s1 == 0x16) {
        goto block_21;
    }
    if (temp_s1 == 0x14) {
        goto block_21;
    }
    if (temp_s1 == 0x11) {
        goto block_21;
    }
    if (temp_s1 == 0x10) {
        goto block_20;
    }
    if (temp_s1 == 0x1A) {
        goto block_20;
    }
    if (temp_s1 == 0x19) {
        goto block_20;
    }
    if (temp_s1 == 0xC) {
        goto block_20;
    }
    if (temp_s1 == 3) {
        goto block_20;
    }
    if (temp_s1 == 0xB) {
        goto block_19;
    }
    if (temp_s1 == 6) {
        goto block_19;
    }
    goto block_22;
block_19:
    *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = -1;
    goto block_23;
block_20:
    *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = 0;
    goto block_23;
block_21:
    *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = 2;
    goto block_23;
block_22:
    *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = 1;
block_23:
    var_t7 += 1;
loop_24:
    if (var_t7 < *(s32 *)((u8 *)temp_s0 + 0x88D8)) {
        goto block_5;
    }
    var_a1 = 0;
    var_s2 = temp_s0 + 0x830;
    var_s1 = temp_s0 + 0x2850;
    if (sp54 >= sp50) {
        goto block_28;
    }
    var_s2 = var_s1;
    var_a1 = 1;
    var_s1 = temp_s0 + 0x830;
    goto block_30;
block_28:
    if (sp50 >= sp54) {
        goto block_30;
    }
    var_a1 = 1;
block_30:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (var_a1 == 0) {
        goto block_36;
    }
    func_00146ED0(&sp40, &sp40, 0xC);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E8640((Fighter *)(var_s2 + 0x650), 1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(f32 *)((u8 *)var_s2 + 0x84) = (f32) (*(f32 *)((u8 *)var_s2 + 0x84) + **(f32 **)((u8 *)var_s2 + 0xB94));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    if (*(s8 *)((u8 *)var_s2 + 0x1FF9) != 0) {
        goto block_34;
    }
    *(f32 *)((u8 *)var_s2 + 0x64) = (f32) *(f32 *)((u8 *)var_s2 + 0x44);
    return;
block_34:
    *(f32 *)((u8 *)var_s2 + 0x64) = (f32) *(f32 *)((u8 *)var_s2 + 0x44);
    return;
block_36:
    func_00146ED0(&sp40, &sp40, 0xC);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E8640((Fighter *)(var_s2 + 0x650), 1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)var_s2 + 0x84) = (f32) (*(f32 *)((u8 *)var_s2 + 0x84) + **(f32 **)((u8 *)var_s2 + 0xB94));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (*(s8 *)((u8 *)var_s2 + 0x1FF9) != 0) {
        goto block_38;
    }
    goto block_39;
block_38:
block_39:
    *(f32 *)((u8 *)var_s2 + 0x64) = *(f32 *)((u8 *)var_s2 + 0x44);
    func_001E8640((Fighter *)(var_s1 + 0x650), 1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(f32 *)((u8 *)var_s1 + 0x84) = (f32) (*(f32 *)((u8 *)var_s1 + 0x84) + **(f32 **)((u8 *)var_s1 + 0xB94));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    if (*(s8 *)((u8 *)var_s1 + 0x1FF9) != 0) {
        goto block_41;
    }
    goto block_42;
block_41:
block_42:
    *(f32 *)((u8 *)var_s1 + 0x64) = *(f32 *)((u8 *)var_s1 + 0x44);
block_43:
    return;
}
