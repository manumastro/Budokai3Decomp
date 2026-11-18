/* Draft (not built): func_001D6E20 at 0x001D6E20, size 0x460, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand @ 590: *(s16 *)((u8 *)temp_s2 + 0x48) <= 0) || (*(s32 *)((u8 *)temp_s2 + 0x40) != arg0)) {
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6E20.s */

// src/unk/unk_1D5B30.c func_001D6E20 cerr diff=-1/0
f32 func_00146EB0(s32 *);
s32 func_00146F10(s32 *, s32 *, f32);
s32 func_00146F60(s32 *, s32 *);
f32 func_00146F90(s32 *, s32 *);
s32 func_001EA240(s32 *);
extern void func_00146F30(void *);
extern void func_001D6770(void);
void func_001D6E20(u8 *arg0) {
    s32 sp60;
    s32 sp70;
    f32 sp80;
    s32 sp84;
    s32 *sp88;
    u8 *sp8C;
    s16 sp90;
    s16 sp92;
    s8 sp94;
    s8 sp95;
    s16 sp96;
    s32 sp98;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f20;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 temp_v1;
    s8 var_v0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *var_s0;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s3 = (u8 *)(gBattle);
    temp_s1 = temp_s3 + (*(s8 *)((u8 *)temp_s2 + 0x4E) * 0x2020) + 0x830;
    if ((*(s32 *)((u8 *)temp_s3 + 0x88EC) != 0) || (*(s8 *)((u8 *)temp_s3 + 0x8AB2) != 0)) {
        return;
    }
    if ((*(s16 *)((u8 *)temp_s2 + 0x48) <= 0) || (*(s32 *)((u8 *)temp_s2 + 0x40) != arg0)) {
        amTask_Kill(arg0);
        return;
    }
    if ((*(s8 *)((u8 *)temp_s2 + 0x4D) == 1) && (*(s16 *)((u8 *)((*(s8 *)((u8 *)temp_s2 + 0x4C) * 0x50) + *(u8 **)((u8 *)temp_s1 + 0x1354)) + 0x198) <= 0)) {
        *(s8 *)((u8 *)temp_s2 + 0x4D) = 0;
    }
    temp_v1 = *(s8 *)((u8 *)temp_s2 + 0x4D);
    var_f20 = 0.0f;
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_f20 = 0.02f;
        if (*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0x200E) == -1) {

        }
        var_s0 = temp_s2 + 0x20;
block_22:
        if (var_s0 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            func_00146F30(&spC0);
            if (func_00146F90(&spC0, temp_s2 + 0x30) < 0.0f) {
                var_v0 = 2;
                if (!(*(f32 *)((u8 *)temp_s2 + 0x44) <= 12.0f)) {

                } else {
                    var_v0 = 0;
                }
                goto block_38;
            }
            func_00146F10(&spC0, &spC0, 3.8f);
            if ((0.01f + (var_f20 * *(f32 *)((u8 *)temp_s2 + 0x44))) < 0.25f) {

            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            var_v0 = 2;
            if (func_00146EB0(&spC0) <= 96.04f) {
                goto block_38;
            }
            func_00146F60(&spC0, &spC0);
            func_00146F60(&spA0, temp_s2 + 0x10);
            temp_f0 = func_00146F90(&spC0, &spA0);
            temp_f2 = *(f32 *)((u8 *)temp_s2 + 0x44);
            if (!(temp_f2 <= 12.0f) && (temp_f0 < (temp_f2 / 90.0f))) {
                var_v0 = 2;
block_38:
                *(s8 *)((u8 *)temp_s2 + 0x4D) = var_v0;
            }
        }
        func_00146F10(&spB0, temp_s2 + 0x10, *(f32 *)((u8 *)temp_s3 + 0x88F0));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp80 = 6.0f;
        sp88 = (s32 *)(&func_001D6770);
        sp90 = 1;
        sp8C = temp_s2;
        sp84 = (s32) ((s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x48) << 0x30) >> 0x30);
        sp92 = 0;
        if (var_s0 != NULL) {
            var_v0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0x1350);
        } else {
            var_v0_2 = -1;
        }
        sp94 = (s8) var_v0_2;
        sp95 = (s8) *(s32 *)((u8 *)temp_s1 + 0x1350);
        sp96 = 0x32;
        if (*(f32 *)((u8 *)temp_s2 + 0x44) == 0.0f) {
            var_v0_3 = 1;
        } else {
            var_v0_3 = 0;
        }
        sp98 = var_v0_3;
        func_001EA240(&sp60);
        *(f32 *)((u8 *)temp_s2 + 0x44) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x44) + *(f32 *)((u8 *)temp_s3 + 0x88F0));
        return;
    case 1:
        var_f20 = 0.05f;
        var_s0 = *(u8 **)((u8 *)temp_s1 + 0x1354) + (*(s8 *)((u8 *)temp_s2 + 0x4C) * 0x50) + 0x150;
        goto block_22;
    default:
    case 2:
        if (!(*(f32 *)((u8 *)temp_s2 + 0x44) < 120.0f)) {
            amTask_Kill(arg0);
            *(s16 *)((u8 *)temp_s2 + 0x48) = 0;
            *(s32 *)((u8 *)temp_s2 + 0x40) = 0;
            return;
        }
        var_s0 = NULL;
        goto block_22;
    }
}
