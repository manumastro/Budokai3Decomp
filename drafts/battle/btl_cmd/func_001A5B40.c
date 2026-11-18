/* Draft (not built): func_001A5B40 at 0x001A5B40, size 0x394, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 189 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x13C, original 0x394
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A5B40.s */

// src/battle/btl_cmd.c func_001A5B40 size diff=189/79
f32 func_00146E60(s32, s32 *);
s32 func_001FDD40(s32 *, s32 *);
extern s32 D_0046FDC8;
extern void func_0011F4C0(void);
void func_001A5B40(void) {
    s32 sp70;
    s32 sp80;
    s32 sp90;
    s32 spA0;
    f32 var_f1;
    s32 temp_s0_2;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s4;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;

    var_f1 = 0.7853982f;
    temp_s3 = (u8 *)(gBattle);
    temp_s2 = temp_s3 + 0xA0;
    temp_s1 = temp_s2 + 0xB0;
    temp_s0 = temp_s2 + 0x160;
    if (!(0.7853982f < 0.08726647f)) {
        goto block_2;
    }
    var_f1 = 0.08726647f;
block_2:
    if (var_f1 <= 3.0543263f) {
        goto block_4;
    }
    var_f1 = 3.0543263f;
block_4:
    *(f32 *)((u8 *)temp_s1 + 0x34) = var_f1;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x28);
    if (temp_v1 == 3) {
        goto block_10;
    }
    if (temp_v1 == 2) {
        goto block_10;
    }
    if (temp_v1 == 1) {
        goto block_9;
    }
    if (temp_v1 == 0) {
        goto block_9;
    }
    goto block_11;
block_9:
    func_0013B0B0(D_003F0800);
    func_0013B620((s32)((void *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x28) * 4) + temp_s3) + 0x8934)) + 0x17A4))));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_0013B110(1);
    goto block_11;
block_10:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
block_11:
    if (!(*(f32 *)((u8 *)temp_s2 + 0x13C) < *(f32 *)((u8 *)temp_s0 + 0x40))) {
        goto block_14;
    }
    goto block_15;
block_14:
block_15:
    func_0011F4C0();
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_s5 = D_0046FDC8;
    temp_s0_2 = func_001FDD40(&spA0, &sp90);
    var_s4 = 0;
    goto loop_21;
block_17:
    if (!(func_00146E60(temp_s5 + (var_s4 * 0x30), &sp90) < 4.0f)) {
        goto block_20;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    goto block_23;
block_20:
    var_s4 += 1;
loop_21:
    if (var_s4 < temp_s0_2) {
        goto block_17;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
block_23:
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (!(*(f32 *)((u8 *)temp_s2 + 0x13C) <= 0.0f)) {
        goto block_26;
    }
    goto block_27;
block_26:
block_27:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(s32 *)((u8 *)temp_s1 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x38) | 1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    *(s32 *)((u8 *)temp_s1 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x38) | 1);
    return;
}
