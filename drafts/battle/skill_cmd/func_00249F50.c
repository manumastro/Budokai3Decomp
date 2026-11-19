/* Draft (not built): func_00249F50 at 0x00249F50, size 0x15C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x128, original 0x15C
 * Original: asm/nonmatchings/battle/skill_cmd/func_00249F50.s */

// src/battle/skill_cmd.c func_00249F50 size diff=47/74
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
        func_00208D70((s32)(*(u8 **)((u8 *)arg0 + 0x54)));
    }
    if (*(u8 **)((u8 *)arg0 + 0x58) != NULL) {
        func_0013B060(NULL);
        func_00142100((s32 *)(arg0 + 0x40), (s32)(arg0 + 0x20));
        func_00208D70((s32)(*(u8 **)((u8 *)arg0 + 0x58)));
    }
    func_0013B110(1);
    func_00209C50();
}

/* Similar function already in C: func_0024B6A0 (src/battle/skill_cmd.c), similarity 0.97.
 * It is the template below (not built). */
#if 0
void func_0024B6A0(u8 *ob) {
    u8 *s1 = ob;
    u8 *s0;
    s32 side;
    s32 k;
    s32 r;
    s32 t;
    s32 tmp[4] __attribute__((aligned(16)));

    s0 = *(u8 **)(s1 + 0xC);
    side = *(s32 *)(*(u8 **)(s1 + 0x8) + 0x1350);
    r = func_0020B020(side, *(s16 *)(s0 + 0x20), *(s16 *)(s0 + 0x22));
    amModel_SetCurrent(r, func_0020AD30(side, *(s16 *)(s0 + 0x20), *(s16 *)(s0 + 0x22)));
    k = *(s16 *)(s0 + 0x60);
    if (k != 0) {
        t = func_0020AE80(side, *(s16 *)(s0 + 0x5A), k);
        if (t != 0) {
            func_00208D60(t);
        }
    }
    func_0013B0B0(0);
    __asm__ volatile ("lqc2 $vf28, 0x0(%0) ; lqc2 $vf29, 0x10(%0) ; lqc2 $vf30, 0x20(%0) ; lqc2 $vf31, 0x30(%0)"
        : : "r"((u8 *)gBattle + 0x60));
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%1)"
        : : "r"(*(u8 **)((u8 *)gBattle + 0x264)), "r"(tmp), "r"(ob + 0x20));
    func_00209D70(tmp);
    if (*(s32 *)(ob + 0x44) != 0) {
        func_0013B060(0);
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddaz.xyzw ACC, $vf30, $vf1z ; vmaddw.xyzw $vf31, $vf31, $vf0w"
            : : "r"(ob + 0x20));
        func_00208D70(*(s32 *)(ob + 0x44));
    }
    if (*(s32 *)(ob + 0x48) != 0) {
        func_0013B060(0);
        func_00209B50(*(s32 *)(ob + 0x48), (s32)(ob + 0x20), 0);
        func_00208D70(*(s32 *)(ob + 0x48));
    }
    func_0013B110(1);
    func_00209C50();
}
#endif
