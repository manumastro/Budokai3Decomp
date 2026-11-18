/* Draft (not built): func_00249F50 at 0x00249F50, size 0x15C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'void *' to 'int' @ 181: func_00142100((void *)(arg0 + 0x40), (void *)(arg0 + 0x20));
 * Original: asm/nonmatchings/battle/skill_cmd/func_00249F50.s */

// src/battle/skill_cmd.c func_00249F50 cerr diff=-1/0
void func_00249F50(u8 *arg0) {
    s32 sp50;
    s16 temp_v0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0_2;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1350);
    temp_s2 = func_0020B020(temp_s3, *(s16 *)((u8 *)temp_s0 + 0x20), *(s16 *)((u8 *)temp_s0 + 0x22));
    amModel_SetCurrent(temp_s2, func_0020AD30(temp_s3, *(s16 *)((u8 *)temp_s0 + 0x20), *(s16 *)((u8 *)temp_s0 + 0x22)));
    temp_v0 = *(s16 *)((u8 *)temp_s0 + 0x6C);
    if (temp_v0 != 0) {
        temp_v0_2 = func_0020AE80(temp_s3, *(s16 *)((u8 *)temp_s0 + 0x66), (s64) ((s64) temp_v0 << 0x30) >> 0x30);
        if (temp_v0_2 != 0) {
            func_00208D60(temp_v0_2);
        }
    }
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00209D70(&sp50);
    if (*(u8 **)((u8 *)arg0 + 0x54) != NULL) {
        func_0013B060(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x54))));
    }
    if (*(u8 **)((u8 *)arg0 + 0x58) != NULL) {
        func_0013B060(NULL);
        func_00142100((void *)(arg0 + 0x40), (void *)(arg0 + 0x20));
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x58))));
    }
    func_0013B110(1);
    func_00209C50();
}
