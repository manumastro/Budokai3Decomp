/* Draft (not built): func_00212160 at 0x00212160, size 0x134, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 44 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xCC, original 0x134
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00212160.s */

// src/unk/unk_20A4D0.c func_00212160 size diff=44/51
void func_00212160(u8 *arg0) {
    s32 sp30;
    s32 sp40;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x20;
    if (*(u8 **)((u8 *)arg0 + 0x10) != NULL) {
        D_00470238 = 0;
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x20);
        if (temp_a0 != 0) {
            amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)temp_s0 + 0x28));
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x24);
        if (temp_a0_2 != 0) {
            func_00208D60(temp_a0_2);
        }
        func_0013B0B0(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00209D70(&sp30);
        if (gBattle != NULL) {
            var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
        } else {
            var_v0 = 0;
        }
        if (var_v0 == 0) {
            func_00146ED0(&sp40, temp_s0 + 0x10, *(f32 *)((u8 *)temp_s0 + 0x30));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        }
        func_0013B060((s32)(NULL));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70((s32)(*(u8 **)((u8 *)arg0 + 0x10)));
        func_0013B110(1);
        func_00209C50();
    }
}

/* Similar function already in C: func_00212480 (src/unk/unk_20A4D0.c), similarity 0.80.
 * It is the template below (not built). */
#if 0
void func_00212480(u8 *a0) {
    u8 *s0 = a0 + 0x20;
    V4Q t;
    u8 *p2;
    if (*(s32 *)(a0 + 0x10) != 0) {
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x20) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x20), *(s32 *)(s0 + 0x28));
        }
        if (*(s32 *)(s0 + 0x24) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x24));
        }
        func_0013B0B0(0);
        __asm__ volatile (
            "lqc2 $vf28, 0x0(%0)\n"
            "lqc2 $vf29, 0x10(%0)\n"
            "lqc2 $vf30, 0x20(%0)\n"
            "lqc2 $vf31, 0x30(%0)\n"
            : : "r"((u8 *)gBattle + 0x60));
        p2 = *(u8 **)((u8 *)gBattle + 0x264);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%2)\n"
            : : "r"(p2), "r"(s0), "r"(&t));
        func_00209D70(&t);
        func_0013B060(0);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw $ACC, $vf28, $vf1x\n"
            "vmadday.xyzw $ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw $ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(s0));
        func_00208D70(*(s32 *)(a0 + 0x10));
        func_00209C50();
        func_0013B110(1);
    }
}
#endif
