/* Draft (not built): func_0024D060 at 0x0024D060, size 0x454, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); igned char *' to 'int' mwccps2.exe Compiler: @ 805: func_0020D400(arg0 + 0x10, temp_s1, *(s32 *)((u8 *)temp_s2 + 0x2C));
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024D060.s */

// src/battle/skill_cmd.c func_0024D060 cerr diff=-1/0
extern void func_00146F60(f32 *, s32 *);
extern void func_00141C30(f32 *, f32 *, f32 *);
extern void func_00209850(s32, f32 *);
s32 func_00146ED0(s32 *, void *, f32);
void func_0024D060(u8 *arg0) {
    s32 sp60;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp90;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    s32 var_a1;
    s32 var_a1_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f21;
    s16 temp_v0_5;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_6;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) *(s32 *)((u8 *)D_0046FE54 + 0x10);
    *(s16 *)((u8 *)D_0046FE4C + 0x918) = 0;
    if (*(s16 *)((u8 *)arg0 + 4) & 4) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_v0 = func_0012EAE0(8) & 0xFF;
        if (temp_v0 >= 0) {
            var_f1 = (f32) temp_v0;
        } else {
            var_f1 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        temp_v0_2 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_2 >= 0) {
            var_f1_2 = (f32) temp_v0_2;
        } else {
            var_f1_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        temp_v0_3 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_3 >= 0) {
            var_f1_3 = (f32) temp_v0_3;
        } else {
            var_f1_3 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
        }
        var_f21 = 1.0f;
        if (func_0012EAE0(1) & 1) {
            var_f21 = -1.0f;
        }
        spA0 += var_f21 * (20.0f + (60.0f * (var_f1 / 255.0f)));
        if (func_0012EAE0(1) & 1) {
            var_f21 = -var_f21;
        }
        spA4 += var_f21 * (20.0f + (60.0f * (var_f1_2 / 255.0f)));
        if (func_0012EAE0(1) & 1) {
            var_f21 = -var_f21;
        }
        spA8 += var_f21 * (20.0f + (60.0f * (var_f1_3 / 255.0f)));
    }
    func_0020D400(arg0 + 0x10, temp_s1, *(s32 *)((u8 *)temp_s2 + 0x2C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F30((void *)(arg0 + 0x30));
    if (gBattle != NULL) {
        var_f1_4 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1_4 = 1.0f;
    } else {
        var_f1_4 = 1.2f;
    }
    temp_a0 = arg0 + 0x30;
    func_00146F10(temp_a0, temp_a0, *(f32 *)((u8 *)temp_s2 + 0x28) * var_f1_4);
    func_00146ED0(&sp90, arg0 + 0x30, *(f32 *)((u8 *)temp_s2 + 0x1C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_v0_4 = func_0020B020(temp_s0, (s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x58) << 0x30) >> 0x30, (s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x5E) << 0x30) >> 0x30);
    if (temp_s0 != 0) {
        var_a1 = 0x04000020;
    } else {
        var_a1 = 0x04000010;
    }
    *(u8 **)((u8 *)arg0 + 0x54) = func_00209540(temp_v0_4, var_a1, 0);
    temp_v0_5 = *(s16 *)((u8 *)temp_s2 + 0x6A);
    if (temp_v0_5 != 0) {
        temp_v0_6 = func_0020B020(temp_s0, (s64) *(s16 *)((u8 *)temp_s2 + 0x64), (s64) ((s64) temp_v0_5 << 0x30) >> 0x30);
        if (temp_s0 != 0) {
            var_a1_2 = 0x04000020;
        } else {
            var_a1_2 = 0x04000010;
        }
        *(u8 **)((u8 *)arg0 + 0x58) = func_00209540(temp_v0_6, var_a1_2, 0);
    }
    sp74 = 0x3F800000;
    sp7C = 0x3F800000;
    sp70 = 0;
    sp78 = 0;
    func_00146F60(&sp60, arg0 + 0x30);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00141C30((void *)(&sp80), (void *)(&sp70), (void *)(&sp60));
    func_00209850((void *)(*(u8 **)((u8 *)arg0 + 0x54)), (void *)(&sp80));
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x58);
    if (temp_a0_2 != NULL) {
        func_00209B50(temp_a0_2, arg0 + 0x20, 0);
        func_00209850((void *)(*(u8 **)((u8 *)arg0 + 0x58)), (void *)(&sp80));
    }
}
