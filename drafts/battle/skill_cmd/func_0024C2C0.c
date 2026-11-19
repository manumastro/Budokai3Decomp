/* Draft (not built): func_0024C2C0 at 0x0024C2C0, size 0x214, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x214
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024C2C0.s */

// src/battle/skill_cmd.c func_0024C2C0 size diff=78/109
extern void func_00146F10(s32 *, s32 *, f32);
extern void func_00146F60(f32 *, s32 *);
extern void func_00141C30(f32 *, f32 *, f32 *);
extern void func_00209850(s32, f32 *);
s32 func_00146ED0(s32 *, void *, f32);
s32 func_001E0200(void *, s32, s32);
void func_0024C2C0(u8 *arg0) {
    f32 sp50;
    f32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    f32 sp70;
    s32 sp80;
    f32 var_f1;
    s32 *temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a1_2;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
    *(s32 *)((u8 *)arg0 + 0x40) = (s32) *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400((s32) (arg0 + 0x10), (s32) temp_s1, *(s32 *)((u8 *)temp_s2 + 0x2C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_002499A0((s32 *)(arg0 + 0x30), (s32) (arg0 + 0x10), (s32) temp_s1, (s32) temp_s2, 30.0f);
    if (gBattle != NULL) {
        var_f1 = gBattle->unk88F0;
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_a0 = (int *)(arg0 + 0x30);
    func_00146F10(temp_a0, temp_a0, *(f32 *)((u8 *)temp_s2 + 0x28) * var_f1);
    func_00146ED0(&sp80, arg0 + 0x30, *(f32 *)((u8 *)temp_s2 + 0x1C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E0200(temp_s1, 0x28, 0x844);
    temp_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x58), (s32) *(s16 *)((u8 *)temp_s2 + 0x5E));
    if (temp_s0 != 0) {
        var_a1 = 0x04000020;
    } else {
        var_a1 = 0x04000010;
    }
    *(s32 *)((u8 *)arg0 + 0x48) = func_00209540(temp_v0, var_a1, 0);
    temp_v0_2 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x64), (s32) *(s16 *)((u8 *)temp_s2 + 0x6A));
    if (temp_s0 != 0) {
        var_a1_2 = 0x04000020;
    } else {
        var_a1_2 = 0x04000010;
    }
    *(s32 *)((u8 *)arg0 + 0x4C) = func_00209540(temp_v0_2, var_a1_2, 0);
    sp64 = 0x3F800000;
    sp6C = 0x3F800000;
    sp60 = 0.0f;
    sp68 = 0;
    func_00146F60((f32 *)(&sp50), (s32 *)(arg0 + 0x30));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00141C30(&sp70, &sp60, &sp50);
    func_00209850(*(s32 *)((u8 *)arg0 + 0x48), &sp70);
    func_00209B50(*(s32 *)((u8 *)arg0 + 0x4C), (s32) (arg0 + 0x20), 0);
    func_00209850(*(s32 *)((u8 *)arg0 + 0x4C), &sp70);
}

/* Similar function already in C: func_0024EFA0 (src/battle/skill_cmd.c), similarity 0.78.
 * It is the template below (not built). */
#if 0
void func_0024EFA0(s32 a0) {
    u8 *s2;
    u8 *s1;
    s32 s0;
    s32 v;
    f32 f1;
    f32 v70[4] __attribute__((aligned(16)));
    f32 v60[4] __attribute__((aligned(16)));
    f32 v50[4] __attribute__((aligned(16)));
    f32 *p50;

    s1 = *(u8 **)(a0 + 0x8);
    s2 = *(u8 **)(a0 + 0xC);
    s0 = *(s32 *)(s1 + 0x1350);
    *(s32 *)(a0 + 0x40) = *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400(a0 + 0x10, (s32)s1, *(s32 *)(s2 + 0x2C));
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(a0 + 0x20), "r"(a0 + 0x10));
    func_002499A0((s32 *)(a0 + 0x30), a0 + 0x10, (s32)s1, (s32)s2, 30.0f);
    f1 = SkillObj_Scale();
    func_00146F10((s32 *)(a0 + 0x30), (s32 *)(a0 + 0x30), *(f32 *)(s2 + 0x28) * f1);
    if (*(s32 *)(s1 + 0xB9C) == 0x1C) {
        v = amMotion_FindBone(*(s32 *)(*(s32 *)(s1 + 0xB88) + 4), (s32)D_0046ADE8);
    } else {
        v = 0;
    }
    *(s32 *)(a0 + 0x48) = v;
    v = func_0020B020(s0, *(s16 *)(s2 + 0x64), *(s16 *)(s2 + 0x6A));
    *(s32 *)(a0 + 0x44) = func_00209540(v, (s0 != 0) ? 0x4000020 : 0x4000010, 0);
    p50 = v50;
    v60[0] = 0.0f;
    v60[1] = 1.0f;
    v60[2] = 0.0f;
    v60[3] = 1.0f;
    func_00146F60(p50, (s32 *)(a0 + 0x30));
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vsub.xyz $vf1, $vf0, $vf1 ; sqc2 $vf1, 0x0(%0)" : : "r"(v50));
    func_00141C30(v70, v60, v50);
    func_00209850(*(s32 *)(a0 + 0x44), v70);
}
#endif
