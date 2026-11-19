/* Draft (not built): func_001A5880 at 0x001A5880, size 0x2BC, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 141 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x11C, original 0x2BC
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A5880.s */

// src/battle/btl_cmd.c func_001A5880 size diff=141/71
void func_001A5880(void) {
    s32 sp40;
    s32 sp50;
    s32 sp60;
    s32 sp70;
    f32 var_f1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    var_f1 = 0.7853982f;
    temp_s2 = (unsigned char *)(gBattle);
    temp_a0 = temp_s2 + 0xA0;
    temp_s1 = temp_a0 + 0xB0;
    temp_s0 = temp_a0 + 0x160;
    if (0.7853982f < 0.08726647f) {
        var_f1 = 0.08726647f;
    }
    if (!(var_f1 <= 3.0543263f)) {
        var_f1 = 3.0543263f;
    }
    *(f32 *)((u8 *)temp_s1 + 0x34) = var_f1;
    if (*(f32 *)((u8 *)temp_a0 + 0x13C) == 0.0f) {
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x28);
        if ((temp_a0_2 != 1) && (temp_a0_2 != 0)) {

        } else {
            func_0013B0B0(D_003F0800);
            func_0013B620((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x28) * 4) + temp_s2) + 0x8934)) + 0x17A4)));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            func_0013B110(1);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        }
        temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x2C);
        if ((temp_a0_3 != 1) && (temp_a0_3 != 0)) {

        } else {
            func_0013B0B0(D_003F0800);
            func_0013B620((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x2C) * 4) + temp_s2) + 0x8934)) + 0x17A4)));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_0013B110(1);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        }
    }
    if ((*(f32 *)((u8 *)temp_s0 + 0x48) * *(f32 *)((u8 *)temp_s2 + 0x88F0)) < 1.0f) {

    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
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
}
