/* Draft (not built): func_002122A0 at 0x002122A0, size 0x1D8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 63 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x1D8
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002122A0.s */

// src/unk/unk_20A4D0.c func_002122A0 size diff=63/72
void func_002122A0(u8 *arg0) {
    s32 sp40;
    s32 sp50;
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = arg0 + 0x20;
    temp_a2 = *(s16 *)((u8 *)arg0 + 0x1C);
    temp_s0 = gBattle + (temp_a2 * 0x2020) + 0x830;
    if (*(u8 **)((u8 *)arg0 + 0x10) != NULL) {
        D_00470238 = 0;
        temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x20);
        if (temp_a0 != 0) {
            amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)temp_s1 + 0x28));
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s1 + 0x24);
        if (temp_a0_2 != 0) {
            func_00208D60(temp_a0_2);
        }
        func_0013B0B0(NULL);
        temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x2C);
        if (temp_v1 & 1) {
            if (temp_v1 & 0x40) {
                func_0020D290(&sp50, *(u8 **)((u8 *)temp_s0 + 0x1354), *(s32 *)((u8 *)temp_s1 + 0x3C), *(f32 *)((u8 *)temp_s1 + 8));
            } else {
                func_0020D290(&sp50, temp_s0, *(s32 *)((u8 *)temp_s1 + 0x3C), *(f32 *)((u8 *)temp_s1 + 8));
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_00209D70(&sp40);
            func_0013B060((s32)((void *)(NULL)));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_00209D70(&sp40);
            func_0013B060((s32)((void *)(NULL)));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        }
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x10))));
        func_00209C50();
        func_0013B110(1);
    }
}
