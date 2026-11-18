/* Draft (not built): func_001A6FA0 at 0x001A6FA0, size 0x450, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 213 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D0, original 0x450
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A6FA0.s */

// src/battle/btl_cmd.c func_001A6FA0 size diff=213/116
s32 func_0013B580(f32);
s32 func_00146ED0(s32 *, s32 *, f32);
extern void func_0013B160(void *);
void func_001A6FA0(void) {
    s32 sp50;
    f32 sp54;
    s32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 sp80;
    f32 sp84;
    s32 sp90;
    s32 spA0;
    f32 temp_f20;
    f32 var_f1;
    f32 var_f21;
    s32 temp_v0;
    s32 var_v1;
    u8 *temp_s2;

    if (*(s32 *)((u8 *)gBattle + 0x88EC) != 0) {
        goto block_15;
    }
    temp_s2 = (u8 *)(gBattle + 0xA0 + 0xF0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp84 = 0.0f;
    sp74 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    if (sp74 <= 0.0f) {
        goto block_3;
    }
    var_f21 = 1.0f;
    goto block_4;
block_3:
    var_f21 = -1.0f;
block_4:
    sp70 = 0.0f;
    sp74 = var_f21;
    sp7C = 1.0f;
    sp78 = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    sp74 = 0.0f;
    temp_v0 = ((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)gBattle + 0x8934)) + 0x1A38) << 0x30) >> 0x30) - ((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)gBattle + 0x8938)) + 0x1A38) << 0x30) >> 0x30);
    if (temp_v0 >= 0) {
        goto block_7;
    }
    var_v1 = -temp_v0;
    goto block_8;
block_7:
    var_v1 = temp_v0;
block_8:
    if (temp_v0 <= 0) {
        goto block_10;
    }
    var_f21 = -var_f21;
block_10:
    temp_f20 = 0.01f * (f32) var_v1;
    func_0013B160(D_003F0800);
    func_0013B580((3.1415927f * (2.0f * (65.0f * temp_f20 * var_f21))) / 360.0f);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_00146ED0(&sp60, &sp60, 30.0f + (2.0f * temp_f20));
    sp64 += 8.0f * temp_f20;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp54 += 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(s32 *)((u8 *)temp_s2 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x38) | 1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    *(s32 *)((u8 *)temp_s2 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x38) | 1);
    var_f1 = (0.99f * *(f32 *)((u8 *)temp_s2 + 0x34)) + 0.00959931f;
    if (!(var_f1 < 0.08726647f)) {
        goto block_12;
    }
    var_f1 = 0.08726647f;
block_12:
    if (var_f1 <= 3.0543263f) {
        goto block_14;
    }
    var_f1 = 3.0543263f;
block_14:
    *(f32 *)((u8 *)temp_s2 + 0x34) = var_f1;
block_15:
    return;
}
