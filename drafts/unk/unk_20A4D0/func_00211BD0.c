/* Draft (not built): func_00211BD0 at 0x00211BD0, size 0x1A8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x164, original 0x1A8
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00211BD0.s */

// src/unk/unk_20A4D0.c func_00211BD0 size diff=57/89
void func_00211BD0(u8 *arg0) {
    s32 sp40;
    s32 sp60;
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s2 = arg0;
    temp_a2 = *(s16 *)((u8 *)arg0 + 0x1C);
    var_s0 = var_s2 + 0x20;
    var_s1 = gBattle + (temp_a2 * 0x2020) + 0x830;
    func_0020CCF0(*(s16 *)((u8 *)arg0 + 0x5C), &sp40);
    if (*(s16 *)((u8 *)var_s0 + 0x4C) != 0) {
        temp_v0 = (unsigned char *)(amMotion_FindBone(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x1354)) + 0xB88)) + 4), &sp40));
        var_s1 = *(u8 **)((u8 *)var_s1 + 0x1354);
        var_s0 = temp_v0;
        func_0013B160(var_s1);
        func_0013B960((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xB88)) + 0x408) + ((s32) var_s0 << 6)));
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    } else {
        var_s0 = (unsigned char *)(amMotion_FindBone(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xB88)) + 4), &sp40));
        func_0013B160(var_s1);
        func_0013B960((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xB88)) + 0x408) + ((s32) var_s0 << 6)));
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    }
    if (*(u8 **)((u8 *)var_s2 + 0x10) != NULL) {
        D_00470238 = 0;
        temp_a0 = *(s32 *)((u8 *)var_s2 + 0x40);
        var_s0 = var_s2 + 0x20;
        if (temp_a0 != 0) {
            amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)var_s0 + 0x28));
        }
        temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x24);
        if (temp_a0_2 != 0) {
            func_00208D60(temp_a0_2);
        }
        func_0013B0B0(gBattle + 0x60);
        func_0013B960((u8 *)(&sp60));
        func_00209D20((s32)(NULL));
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        func_00208D70((s32)(*(u8 **)((u8 *)var_s2 + 0x10)));
        func_0013B110(1);
        func_00209C50();
    }
}
