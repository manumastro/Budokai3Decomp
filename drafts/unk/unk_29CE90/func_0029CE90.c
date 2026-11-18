/* Draft (not built): func_0029CE90 at 0x0029CE90, size 0x1C4, segment unk/unk_29CE90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (...)' redeclared was declared as: 'int (...)' now declared as: 'void (void *)' @ 175: asm void func_0029D060(void *a) {
 * Original: asm/nonmatchings/unk/unk_29CE90/func_0029CE90.s */

// src/unk/unk_29CE90.c func_0029CE90 cerr diff=-1/0
extern void func_0013B960(void *);
void func_0029CE90(s32 arg0, u8 *arg1) {
    s32 temp_a1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s5;

    temp_s2 = *(u8 **)((u8 *)arg1 + 0x40);
    if (temp_s2 != NULL) {
        temp_s1 = *(u8 **)((u8 *)temp_s2 + 0x40);
        if (temp_s1 != NULL) {
            temp_s0 = *(u8 **)((u8 *)temp_s1 + 0x40);
            if (temp_s0 != NULL) {
                temp_a1 = *(s32 *)((u8 *)temp_s0 + 0x40);
                if (temp_a1 != 0) {
                    func_0029CE90(temp_a1, 0);
                }
                temp_s5 = *(u8 **)((u8 *)((*(s16 *)((u8 *)temp_s0 + 0x48) * 4) + arg0) + 8);
                func_0029D060(temp_s0 + 0x10);
                if (temp_s5 != NULL) {
                    func_0013B960(temp_s5);
                } else {
                    func_00142100((void *)(temp_s0), (void *)(NULL));
                }
            }
            temp_a0 = *(u8 **)((u8 *)((*(s16 *)((u8 *)temp_s1 + 0x48) * 4) + arg0) + 8);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            if (temp_a0 != NULL) {
                func_0013B960(temp_a0);
            } else {
                func_00142100((void *)(temp_s1), (void *)(NULL));
            }
        }
        temp_a0_2 = *(u8 **)((u8 *)((((s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x48) << 0x30) >> 0x30) * 4) + arg0) + 8);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        if (temp_a0_2 != NULL) {
            func_0013B960(temp_a0_2);
        } else {
            func_00142100((void *)(temp_s2), (void *)(NULL));
        }
    }
    temp_a0_3 = *(u8 **)((u8 *)((((s64) ((s64) *(s16 *)((u8 *)arg1 + 0x48) << 0x30) >> 0x30) * 4) + arg0) + 8);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    if (temp_a0_3 != NULL) {
        func_0013B960(temp_a0_3);
        return;
    }
    func_00142100((void *)(arg1), (void *)(NULL));
}
