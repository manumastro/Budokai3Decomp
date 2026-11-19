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
                func_0020D290((u8 *)(&sp50), (u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1354)), (s32)(*(s32 *)((u8 *)temp_s1 + 0x3C)), *(f32 *)((u8 *)temp_s1 + 8));
            } else {
                func_0020D290((u8 *)(&sp50), (u8 *)(temp_s0), (s32)(*(s32 *)((u8 *)temp_s1 + 0x3C)), *(f32 *)((u8 *)temp_s1 + 8));
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
            func_0013B060((s32)(NULL));
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
            func_0013B060((s32)(NULL));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        }
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70((s32)(*(u8 **)((u8 *)arg0 + 0x10)));
        func_00209C50();
        func_0013B110(1);
    }
}

/* Similar function already in C: func_002116B0 (src/unk/unk_20A4D0.c), similarity 0.66.
 * It is the template below (not built). */
#if 0
void func_002116B0(u8 *p) {
    u8 *s1;
    u8 *s0;
    Copy16A t80;
    Copy16A t40[4];
    s32 a2;
    s32 k;
    s32 w;

    s1 = p + 0x20;
    a2 = *(s16 *)(p + 0x1C);
    k = a2 * 257;
    s0 = gBattle + (k << 5) + 0x830;
    if (*(s32 *)(p + 0x10) == 0) {
        return;
    }
    D_00470238 = 0;
    if (*(s32 *)(s1 + 0x20) != 0) {
        amModel_SetCurrent(*(s32 *)(s1 + 0x20), *(s32 *)(s1 + 0x28));
    }
    if (*(s32 *)(s1 + 0x24) != 0) {
        func_00208D60(*(s32 *)(s1 + 0x24));
    }
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(s1), "r"(&t80) : "memory");
    w = *(s32 *)(s1 + 0x2C);
    if (w & 1) {
        if (w & 0x40) {
            func_0020D290((u8 *)&t80, *(u8 **)(s0 + 0x1354), *(s32 *)(s1 + 0x3C), *(f32 *)(s1 + 0x8));
        } else {
            func_0020D290((u8 *)&t80, s0, *(s32 *)(s1 + 0x3C), *(f32 *)(s1 + 0x8));
        }
    }
    func_0013AFA0((u8 *)&t40[0]);
    func_0020D5C0(&t40[0], 0, &t80, (u8 *)7);
    func_0013B0B0(gBattle + 0x60);
    func_0013B960((u8 *)&t40[0]);
    func_00209D20(0);
    __asm__ volatile (
        "lqc2 $vf28, 0(%0)\n"
        "lqc2 $vf29, 0x10(%0)\n"
        "lqc2 $vf30, 0x20(%0)\n"
        "lqc2 $vf31, 0x30(%0)\n"
        : : "r"(&t40[0]) : "memory");
    func_00208D70(*(s32 *)(p + 0x10));
    func_0013B110(1);
    func_00209C50();
}
#endif
