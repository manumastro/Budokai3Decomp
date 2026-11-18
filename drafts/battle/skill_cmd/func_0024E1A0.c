/* Draft (not built): func_0024E1A0 at 0x0024E1A0, size 0x2A0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); igned char *' to 'int' mwccps2.exe Compiler: @ 781: func_0020D400(arg0 + 0x10, temp_s2, *(s32 *)((u8 *)temp_s3 + 0x2C));
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024E1A0.s */

// src/battle/skill_cmd.c func_0024E1A0 cerr diff=-1/0
extern void func_00146F60(f32 *, s32 *);
extern void func_00141C30(f32 *, f32 *, f32 *);
extern void func_00209850(s32, f32 *);
s32 func_00146ED0(s32 *, void *, f32);
void func_0024E1A0(u8 *arg0) {
    s32 sp60;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp90;
    s32 var_a1;
    s32 var_a1_2;
    f32 var_f1;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s2 = *(u8 **)((u8 *)arg0 + 8);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x1350);
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) *(s32 *)((u8 *)D_0046FE54 + 0x10);
    temp_s0 = D_0046FE4C + (temp_s1 * 0x480) + 0x10;
    if (*(s16 *)((u8 *)D_0046FE54 + 0x60) & 0x100) {
        func_0020D400(arg0 + 0x10, temp_s2, *(s32 *)((u8 *)temp_s3 + 0x2C));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30((void *)(arg0 + 0x30));
        *(s16 *)((u8 *)temp_s0 + 0x34) = (s16) *(s16 *)((u8 *)arg0 + 6);
    } else {
        func_0020D400(arg0 + 0x10, temp_s2, *(s32 *)((u8 *)temp_s3 + 0x2C));
        func_002499A0(arg0 + 0x30, arg0 + 0x10, temp_s2, temp_s3, 0x41F00000);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_a0 = arg0 + 0x30;
    func_00146F10(temp_a0, temp_a0, *(f32 *)((u8 *)temp_s3 + 0x28) * var_f1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146ED0(&sp90, arg0 + 0x30, *(f32 *)((u8 *)temp_s3 + 0x1C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_v0 = func_0020B020(temp_s1, (s64) ((s64) *(s16 *)((u8 *)temp_s3 + 0x30) << 0x30) >> 0x30, (s64) ((s64) *(s16 *)((u8 *)temp_s3 + 0x36) << 0x30) >> 0x30);
    if (temp_s1 != 0) {
        var_a1 = 0x04000020;
    } else {
        var_a1 = 0x04000010;
    }
    *(u8 **)((u8 *)arg0 + 0x58) = func_00209540(temp_v0, var_a1, 0);
    temp_v0_2 = func_0020B020(temp_s1, (s64) *(s16 *)((u8 *)temp_s3 + 0x58), (s64) *(s16 *)((u8 *)temp_s3 + 0x5E));
    if (temp_s1 != 0) {
        var_a1_2 = 0x04000020;
    } else {
        var_a1_2 = 0x04000010;
    }
    *(u8 **)((u8 *)arg0 + 0x5C) = func_00209540(temp_v0_2, var_a1_2, 0);
    sp74 = 0x3F800000;
    sp7C = 0x3F800000;
    sp70 = 0;
    sp78 = 0;
    func_00146F60(&sp60, arg0 + 0x30);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00141C30((void *)(&sp80), (void *)(&sp70), (void *)(&sp60));
    func_00209850((void *)(*(u8 **)((u8 *)arg0 + 0x58)), (void *)(&sp80));
    func_00209850((void *)(*(u8 **)((u8 *)arg0 + 0x5C)), (void *)(&sp80));
}
