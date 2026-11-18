/* Draft (not built): func_001E4440 at 0x001E4440, size 0x3B8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); Compiler: 3602: *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = 0; @ 3595: *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = -1;
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E4440.s */

// src/unk/unk_1D5B30.c func_001E4440 cerr diff=-1/0
void func_001E4440(void) {
    s32 sp40;
    f32 temp_f0;
    s16 temp_s1;
    s32 temp_a0;
    s32 var_a1;
    s32 var_t7;
    u8 *temp_s0;
    u8 *var_s1;
    u8 *var_s2;

    temp_s0 = (u8 *)(gBattle);
    if ((*(s16 *)((u8 *)temp_s0 + 0x8944) == 0) && ((temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x88F8), (temp_a0 == 3)) || (temp_a0 == 4)) && (temp_f0 = func_001E52B0(0), var_t7 = 0, !(temp_f0 <= 150.0f))) {
loop_24:
        if (var_t7 < *(s32 *)((u8 *)temp_s0 + 0x88D8)) {
            temp_s1 = *(s16 *)((u8 *)((var_t7 * 0x2020) + temp_s0) + 0x14DC);
            switch (temp_s1) {                      /* irregular */
            case 11:
            case 6:
                *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = -1;
                break;
            case 16:
            case 26:
            case 25:
            case 12:
            case 3:
                *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = 0;
                break;
            case 24:
            case 23:
            case 22:
            case 20:
            case 17:
                *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = 2;
                break;
            default:
                *(s32 *)((u8 *)((var_t7 * 4) + sp) + 0x50) = 1;
                break;
            }
            var_t7 += 1;
            goto loop_24;
        }
        var_a1 = 0;
        var_s2 = temp_s0 + 0x830;
        var_s1 = temp_s0 + 0x2850;
        if (sp54 < sp50) {
            var_s2 = var_s1;
            var_a1 = 1;
            var_s1 = temp_s0 + 0x830;
        } else if (sp50 < sp54) {
            var_a1 = 1;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        if (var_a1 != 0) {
            func_00146ED0(&sp40, &sp40, 0xC, 0x19, temp_f0 - 150.0f);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_001E8640((struct Fighter *)(var_s2 + 0x650), 1);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            *(f32 *)((u8 *)var_s2 + 0x84) = (f32) (*(f32 *)((u8 *)var_s2 + 0x84) + **(f32 **)((u8 *)var_s2 + 0xB94));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            if (*(s8 *)((u8 *)var_s2 + 0x1FF9) == 0) {
                *(f32 *)((u8 *)var_s2 + 0x64) = (f32) *(f32 *)((u8 *)var_s2 + 0x44);
                return;
            }
            *(f32 *)((u8 *)var_s2 + 0x64) = (f32) *(f32 *)((u8 *)var_s2 + 0x44);
            return;
        }
        func_00146ED0(&sp40, &sp40, 0xC, 0x19, 0.5f * (temp_f0 - 150.0f));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_001E8640((struct Fighter *)(var_s2 + 0x650), 1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(f32 *)((u8 *)var_s2 + 0x84) = (f32) (*(f32 *)((u8 *)var_s2 + 0x84) + **(f32 **)((u8 *)var_s2 + 0xB94));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        if (*(s8 *)((u8 *)var_s2 + 0x1FF9) == 0) {

        }
        *(f32 *)((u8 *)var_s2 + 0x64) = *(f32 *)((u8 *)var_s2 + 0x44);
        func_001E8640((struct Fighter *)(var_s1 + 0x650), 1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(f32 *)((u8 *)var_s1 + 0x84) = (f32) (*(f32 *)((u8 *)var_s1 + 0x84) + **(f32 **)((u8 *)var_s1 + 0xB94));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        if (*(s8 *)((u8 *)var_s1 + 0x1FF9) == 0) {

        }
        *(f32 *)((u8 *)var_s1 + 0x64) = *(f32 *)((u8 *)var_s1 + 0x44);
    }
}
