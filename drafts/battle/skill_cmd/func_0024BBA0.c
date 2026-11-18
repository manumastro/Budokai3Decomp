/* Draft (not built): func_0024BBA0 at 0x0024BBA0, size 0x284, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); igned char *' to 'int' mwccps2.exe Compiler: @ 548: func_0020D400(arg0 + 0x10, temp_s0, *(s32 *)((u8 *)temp_s2 + 0x2C));
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024BBA0.s */

// src/battle/skill_cmd.c func_0024BBA0 cerr diff=-1/0
extern void func_00146F10(s32 *, s32 *, f32);
extern void func_00146F60(f32 *, s32 *);
extern void func_00141C30(f32 *, f32 *, f32 *);
extern void func_00209850(s32, f32 *);
s32 func_00146ED0(s32 *, void *, f32);
void func_0024BBA0(u8 *arg0) {
    s32 sp50;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp80;
    s32 var_a1;
    s32 var_a1_2;
    f32 var_f1;
    s32 temp_a0_3;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 8);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 0x1350);
    *(s32 *)((u8 *)arg0 + 0x40) = (s32) *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400(arg0 + 0x10, temp_s0, *(s32 *)((u8 *)temp_s2 + 0x2C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_002499A0(arg0 + 0x30, arg0 + 0x10, temp_s0, temp_s2, 0x41F00000);
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_a0 = arg0 + 0x30;
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
    var_s0 = 0;
    *(f32 *)((u8 *)arg0 + 0x50) = 0.0f;
loop_11:
    if (var_s0 < 4) {
        temp_a0_2 = *(u8 **)((u8 *)((var_s0 * 4) + ((temp_s1 * 0x10) + D_0046FE54)) + 0x14);
        if (temp_a0_2 != NULL) {
            amTask_Kill((s32)((void *)(temp_a0_2)));
        }
        temp_a0_3 = temp_s1 * 0x10;
        temp_v1 = var_s0 * 4;
        var_s0 += 1;
        *(s32 *)((u8 *)(((u8 *)temp_v1) + (((u8 *)temp_a0_3) + D_0046FE54)) + 0x14) = 0;
        *(s32 *)((u8 *)(((u8 *)temp_v1) + (((u8 *)temp_a0_3) + D_0046FE54)) + 0x34) = 0;
        goto loop_11;
    }
    func_00249D50((struct SkillObj *)(arg0), 0);
    temp_v0 = func_0020B020(temp_s1, *(s16 *)((u8 *)temp_s2 + 0x58), *(s16 *)((u8 *)temp_s2 + 0x5E));
    if (temp_s1 != 0) {
        var_a1 = 0x04000020;
    } else {
        var_a1 = 0x04000010;
    }
    *(u8 **)((u8 *)arg0 + 0x44) = func_00209540(temp_v0, var_a1, 0);
    temp_v0_2 = func_0020B020(temp_s1, *(s16 *)((u8 *)temp_s2 + 0x64), *(s16 *)((u8 *)temp_s2 + 0x6A));
    if (temp_s1 != 0) {
        var_a1_2 = 0x04000020;
    } else {
        var_a1_2 = 0x04000010;
    }
    *(u8 **)((u8 *)arg0 + 0x48) = func_00209540(temp_v0_2, var_a1_2, 0);
    sp64 = 0x3F800000;
    sp6C = 0x3F800000;
    sp60 = 0;
    sp68 = 0;
    func_00146F60(&sp50, arg0 + 0x30);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00141C30((void *)(&sp70), (void *)(&sp60), (void *)(&sp50));
    func_00209850((void *)(*(u8 **)((u8 *)arg0 + 0x44)), (void *)(&sp70));
    func_00209B50(*(u8 **)((u8 *)arg0 + 0x48), arg0 + 0x20, 0);
    func_00209850((void *)(*(u8 **)((u8 *)arg0 + 0x48)), (void *)(&sp70));
}
