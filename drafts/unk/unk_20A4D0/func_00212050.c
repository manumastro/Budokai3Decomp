/* Draft (not built): func_00212050 at 0x00212050, size 0x104, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE4, original 0x104
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00212050.s */

// src/unk/unk_20A4D0.c func_00212050 size diff=32/57
void func_00212050(u8 *arg0) {
    s32 sp30;
    s128 sp40;
    s32 sp50;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;
    u8 *temp_s0;

    sp40 = *D_0044B910;
    temp_s0 = arg0 + 0x20;
    if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
        D_00470238 = 0;
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x20);
        if (temp_a0 != 0) {
            amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)temp_s0 + 0x28));
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x24);
        if (temp_a0_2 != 0) {
            func_00208D60(temp_a0_2);
        }
        if (gBattle != NULL) {
            var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
        } else {
            var_v0 = 0;
        }
        if (var_v0 == 0) {
            func_00146ED0(&sp50, temp_s0 + 0x10, *(f32 *)((u8 *)temp_s0 + 0x30));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        }
        func_0013B0B0(NULL);
        func_00141C30(&sp30, &sp40, temp_s0 + 0x10);
        func_00142100(&sp30, temp_s0);
        func_00208D70(*(s32 *)((u8 *)arg0 + 0x10));
        func_0013B110(1);
    }
}

/* Similar function already in C: func_00211F80 (src/unk/unk_20A4D0.c), similarity 0.67.
 * It is the template below (not built). */
#if 0
void func_00211F80(u8 *a0) {
    V4Q v;
    V4Q out;
    u8 *s0 = a0 + 0x20;
    v = D_0044B920;
    if (*(s32 *)(a0 + 0x10) != 0) {
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x20) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x20), *(s32 *)(s0 + 0x28));
        }
        if (*(s32 *)(s0 + 0x24) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x24));
        }
        __asm__ volatile (
            "lqc2 $vf1, 0(%1)\n"
            "lqc2 $vf2, 0(%2)\n"
            "vopmula.xyz ACC, $vf1, $vf2\n"
            "vopmsub.xyz $vf1, $vf2, $vf1\n"
            "sqc2 $vf1, 0(%0)\n"
            : : "r"(&out), "r"(&v), "r"(s0 + 0x10));
        func_00209CA0(s0, &v, &out);
        func_00208D70(*(s32 *)(a0 + 0x10));
        func_0013B110(1);
        func_00209C50();
    }
}
#endif
