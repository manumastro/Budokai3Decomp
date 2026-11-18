/* Draft (not built): func_0024A440 at 0x0024A440, size 0x23C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); igned char *' to 'int' mwccps2.exe Compiler: @ 278: func_0020D400(arg0 + 0x10, temp_s2, *(s32 *)((u8 *)temp_s3 + 0x2C));
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024A440.s */

// src/battle/skill_cmd.c func_0024A440 cerr diff=-1/0
extern s32 func_00209540(s32, s32, s32);
extern void func_00146F10(s32 *, s32 *, f32);
extern void func_00146F60(f32 *, s32 *);
extern void func_00141C30(f32 *, f32 *, f32 *);
extern void func_00209950(s32, void *, s32);
void func_0024A440(u8 *arg0) {
    s32 sp60;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
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
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s2 = *(u8 **)((u8 *)arg0 + 8);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x1350);
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400(arg0 + 0x10, temp_s2, *(s32 *)((u8 *)temp_s3 + 0x2C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_002499A0(arg0 + 0x30, arg0 + 0x10, temp_s2, temp_s3, 0x41F00000);
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_a0 = arg0 + 0x30;
    func_00146F10(temp_a0, temp_a0, *(f32 *)((u8 *)temp_s3 + 0x28) * var_f1);
    *(s32 *)((u8 *)arg0 + 0x5C) = 0;
    var_s0 = 0;
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
    temp_v0 = func_0020B020(temp_s1, *(s16 *)((u8 *)temp_s3 + 0x58), *(s16 *)((u8 *)temp_s3 + 0x5E));
    if (temp_s1 != 0) {
        var_a1 = 0x04000020;
    } else {
        var_a1 = 0x04000010;
    }
    *(s32 *)((u8 *)arg0 + 0x54) = func_00209540(temp_v0, var_a1, 0);
    temp_v0_2 = func_0020B020(temp_s1, *(s16 *)((u8 *)temp_s3 + 0x64), *(s16 *)((u8 *)temp_s3 + 0x6A));
    if (temp_s1 != 0) {
        var_a1_2 = 0x04000020;
    } else {
        var_a1_2 = 0x04000010;
    }
    *(s32 *)((u8 *)arg0 + 0x58) = func_00209540(temp_v0_2, var_a1_2, 0);
    sp78 = 0x3F800000;
    sp7C = 0x3F800000;
    sp70 = 0;
    sp74 = 0;
    func_00146F60(&sp60, arg0 + 0x30);
    func_00141C30((void *)(&sp80), (void *)(&sp70), (void *)(&sp60));
    func_00209950(*(s32 *)((u8 *)arg0 + 0x54), &sp80, 0);
    func_00249100(arg0 + 0x40, arg0 + 0x10, temp_s2, temp_s3, 0x41F00000);
}
