/* Draft (not built): func_001A6C70 at 0x001A6C70, size 0x318, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp74' @ 653: var_f1 = sp84 - sp74;
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A6C70.s */

// src/battle/btl_cmd.c func_001A6C70 cerr diff=-1/0
extern void func_00146F10(void *, void *, f32);
f32 func_00146E90(s32 *, s32);
s32 func_00146ED0(s32 *, s32 *, f32);
extern void func_00146F30(void *);
void func_001A6C70(void) {
    s32 sp60;
    f32 sp64;
    s32 sp70;
    s32 sp80;
    f32 sp84;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f1;
    s32 var_a1;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s3 = (u8 *)(gBattle);
    temp_s2 = temp_s3 + 0xA0;
    var_a1 = 1 - *(s32 *)((u8 *)temp_s3 + 0x8900);
    temp_s1 = temp_s2 + 0xF0;
    if (*(s8 *)((u8 *)((var_a1 * 0x2020) + temp_s3) + 0x2845) != 0) {
        var_a1 = 1 - var_a1;
    }
    if (*(s16 *)((u8 *)temp_s3 + 0x8944) == 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp64 = 0.0f;
        var_f0 = func_00146E90(&sp60, var_a1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        sp64 = 0.0f;
        if (!(var_f0 <= 50.0f)) {

        } else {
            var_f0 = 50.0f;
        }
        func_00146ED0(&sp60, &sp60, var_f0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp84 = *(f32 *)((u8 *)temp_s1 + 4);
        temp_f20 = *(f32 *)((u8 *)temp_s2 + 0x140) / 120.0f;
        if (!(temp_f20 <= 1.0f)) {

        } else if (temp_f20 < 0.0f) {

        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(s32 *)((u8 *)temp_s1 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x38) | 1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        sp64 = 0.0f;
        func_00146F30(&sp60);
        temp_f3 = M2C_ERROR(/* Read from unset register $f0 */);
        var_f1 = sp84 - sp74;
        if (var_f1 < 0.0f) {
            var_f1 = -var_f1;
        }
        temp_f0 = 1.5f * var_f1;
        if (temp_f3 < temp_f0) {
            func_00146F10(&sp60, &sp60, temp_f0 - temp_f3);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        *(s32 *)((u8 *)temp_s1 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x38) | 1);
        *(f32 *)((u8 *)temp_s2 + 0x140) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x140) + *(f32 *)((u8 *)temp_s3 + 0x88F0));
    }
}
