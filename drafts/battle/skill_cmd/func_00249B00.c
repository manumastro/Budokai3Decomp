/* Draft (not built): func_00249B00 at 0x00249B00, size 0x24C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s 'void *' + 'int' @ 219: *)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0x18) * 4) + ((temp_s0 * 0x10) + D_0046FE54)) + 0x14) = 0;
 * Original: asm/nonmatchings/battle/skill_cmd/func_00249B00.s */

// src/battle/skill_cmd.c func_00249B00 cerr diff=-1/0
s32 func_001EA240(s32 *, s32 *, void *, s32);
extern void func_00251F30(void);
void func_00249B00(u8 *arg0, s32 arg3) {
    s32 sp30;
    s32 sp40;
    f32 sp50;
    s32 *sp58;
    u8 *sp5C;
    s16 sp60;
    s16 sp62;
    s8 sp64;
    s8 sp65;
    s16 sp66;
    s32 sp68;
    s32 temp_s0;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s8 var_a1;
    u8 *temp_s1;
    u8 *temp_v1;

    var_a3 = arg3;
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x38);
    temp_s0 = *(s32 *)((u8 *)temp_v1 + 0x1350);
    temp_s1 = arg0 + 0x30;
    if (gBattle != NULL) {
        var_t1 = 1;
        if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
            var_t0 = 0;
            var_a3 = 0;
            if ((*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) && !(*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f)) {
                var_a3 = 1;
            }
            if (var_a3 != 0) {
                var_a1 = *(s8 *)((u8 *)gBattle + 0x8AB3);
            } else {
                var_a1 = -1;
            }
            if ((temp_s0 == var_a1) && (*(s16 *)((u8 *)gBattle + 0x8944) == 0)) {
                var_t0 = 1;
            }
            if (var_t0 == 0) {
                var_t1 = 0;
            }
        }
    } else {
        var_t1 = 0;
    }
    if (var_t1 == 0) {
        if (*(s16 *)((u8 *)temp_s1 + 4) & 0x1000) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        }
        if (*(s16 *)((u8 *)temp_s1 + 4) & 0x800) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            sp66 = *(s16 *)((u8 *)temp_s1 + 6);
            sp50 = *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xC)) + 0xCC);
            sp58 = (s32 *)(&func_00251F30);
            sp5C = temp_s1;
            sp62 = 0;
            sp60 = (s16) ((s64) ((s64) *(s32 *)((u8 *)temp_s1 + 0x14) << 0x30) >> 0x30);
            sp64 = (s8) ((s64) ((s64) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0x1354)) + 0x1350) << 0x38) >> 0x38);
            sp65 = (s8) ((s64) ((s64) *(s32 *)((u8 *)temp_v1 + 0x1350) << 0x38) >> 0x38);
            if (((s64) ((s64) *(s16 *)((u8 *)temp_s1 + 4) << 0x30) >> 0x30) & 0x400) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            sp68 = var_v0;
            sp68 = var_v0 | 4;
            func_001EA240(&sp30, &sp40, gBattle, var_a3);
            *(s16 *)((u8 *)temp_s1 + 4) = (s16) (*(s16 *)((u8 *)temp_s1 + 4) & ~0x400);
            return;
        }
        amTask_Kill((s32)((void *)(arg0)));
        *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0x18) * 4) + ((temp_s0 * 0x10) + D_0046FE54)) + 0x14) = 0;
    }
}
