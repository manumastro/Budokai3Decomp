/* Draft (not built): func_0024B2B0 at 0x0024B2B0, size 0x3AC, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 97 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3C8, original 0x3AC
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024B2B0.s */

// src/battle/skill_cmd.c func_0024B2B0 size diff=97/242
extern void func_00146F10(s32 *, s32 *, f32);
s32 func_001414D0(void *, s16, s32, f32, s32);
void func_0024B2B0(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f1;
    f32 var_f1_2;
    s16 temp_a1;
    s32 *temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) *(s32 *)((u8 *)D_0046FE54 + 0x10);
    func_0020D400((s32) (arg0 + 0x10), (s32) temp_s1, *(s32 *)((u8 *)temp_s2 + 0x2C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_002499A0((s32 *)(arg0 + 0x30), (s32) (arg0 + 0x10), (s32) temp_s1, (s32) temp_s2, 30.0f);
    *(f32 *)((u8 *)arg0 + 0x34) = (f32) (*(f32 *)((u8 *)arg0 + 0x34) + 0.5f);
    func_00146F30((s32 *)(arg0 + 0x30));
    if (gBattle != NULL) {
        var_f1 = gBattle->unk88F0;
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_a0 = (int *)(arg0 + 0x30);
    func_00146F10(temp_a0, temp_a0, *(f32 *)((u8 *)temp_s2 + 0x28) * var_f1);
    *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x1000);
    *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x800);
    *(s32 *)((u8 *)(((s32)(((u8 *)(temp_s0 * 4)))) + ((s32)(D_0046FE54))) + 0x54) = 1;
    temp_v0 = func_0012EAE0(4) & 0xF;
    if (temp_v0 >= 0) {
        var_f1_2 = (f32) temp_v0;
    } else {
        var_f1_2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    }
    *(f32 *)((u8 *)arg0 + 0x5C) = (f32) (var_f1_2 / 15.0f);
    if (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0x10) {
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x5C);
        if (temp_f1 < 0.5f) {
            var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x58), (s32) *(s16 *)((u8 *)temp_s2 + 0x5E));
        } else if (!(temp_f1 < 0.5f) && (temp_f1 < 0.75f)) {
            var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x30), (s32) *(s16 *)((u8 *)temp_s2 + 0x36));
        } else {
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x5C);
            if (!(temp_f1_2 < 0.75f) && (temp_f1_2 < 0.9f)) {
                var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x64), (s32) *(s16 *)((u8 *)temp_s2 + 0x6A));
            } else {
                var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x8E), (s32) *(s16 *)((u8 *)temp_s2 + 0x96));
            }
        }
    } else {
        temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x5C);
        if (temp_f1_3 < 0.25f) {
            var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x58), (s32) *(s16 *)((u8 *)temp_s2 + 0x5E));
        } else if (!(temp_f1_3 < 0.25f) && (temp_f1_3 < 0.5f)) {
            var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x30), (s32) *(s16 *)((u8 *)temp_s2 + 0x36));
        } else {
            temp_f1_4 = *(f32 *)((u8 *)arg0 + 0x5C);
            if (!(temp_f1_4 < 0.5f) && (temp_f1_4 < 0.75f)) {
                var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x64), (s32) *(s16 *)((u8 *)temp_s2 + 0x6A));
            } else {
                var_v0 = func_0020B020(temp_s0, (s32) *(s16 *)((u8 *)temp_s2 + 0x8E), (s32) *(s16 *)((u8 *)temp_s2 + 0x96));
            }
        }
    }
    if (temp_s0 != 0) {
        var_a1 = 0x04000020;
    } else {
        var_a1 = 0x04000010;
    }
    *(s32 *)((u8 *)arg0 + 0x54) = func_00209540(var_v0, var_a1, 0);
    temp_a1 = *(s16 *)((u8 *)temp_s1 + 0x17A4);
    func_001414D0(arg0 + 0x40, temp_a1, 0, (3.1415927f * (f32) temp_a1) / 32768.0f, 0);
}
