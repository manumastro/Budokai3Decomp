/* Draft (not built): func_00201BD0 at 0x00201BD0, size 0x370, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 140 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2D0, original 0x370
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00201BD0.s */

// src/unk/unk_1FB760.c func_00201BD0 size diff=140/180
extern u32 func_0012EAE0(s32);
extern void func_00146ED0(f32 *, f32 *, f32);
s32 func_0012E890(f32, f32 *, f32 *);
void func_00201BD0(u8 *arg0) {
    f32 sp30;
    f32 sp34;
    f32 sp48;
    f32 sp4C;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s64 temp_v1;
    u32 temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_a0 = *(u32 *)((u8 *)temp_s1 + 8);
    *(s32 *)((u8 *)temp_s0 + 8) = 0;
    temp_v1 = (s64) ((temp_a0 & 0xFFFF) << 0x30) >> 0x30;
    *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) ((s64) ((s64) (temp_a0 >> 0x10) << 0x30) >> 0x30);
    if (temp_v1 == 0) {
        temp_v0 = func_0012EAE0(8) & 0xFF;
        if (temp_v0 >= 0) {
            var_f2 = (f32) temp_v0;
        } else {
            var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        func_0012E890((32768.0f * (3.1415927f * (2.0f * (var_f2 / 255.0f)))) / 3.141592f, &sp4C, &sp48);
        *(f32 *)((u8 *)temp_s0 + 0x10) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x58) + (*(f32 *)((u8 *)temp_s1 + 0x60) * sp4C));
        *(f32 *)((u8 *)temp_s0 + 0x14) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x5C) + (*(f32 *)((u8 *)temp_s1 + 0x60) * sp48));
        *(s32 *)((u8 *)temp_s0 + 0x18) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x1C) = 0x3F800000;
        *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x58) + (*(f32 *)((u8 *)temp_s1 + 0x64) * sp4C));
        *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x5C) + (*(f32 *)((u8 *)temp_s1 + 0x64) * sp48));
        *(s32 *)((u8 *)temp_s0 + 0x28) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x2C) = 0x3F800000;
    } else if (temp_v1 == 1) {
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        sp30 = *(f32 *)((u8 *)temp_s1 + 0x74) - *(f32 *)((u8 *)temp_s1 + 0x6C);
        sp34 = *(f32 *)((u8 *)temp_s1 + 0x68) - *(f32 *)((u8 *)temp_s1 + 0x70);
        temp_v0_2 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_2 >= 0) {
            var_f3 = (f32) temp_v0_2;
        } else {
            var_f3 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        func_00146ED0(&sp30, &sp30, *(f32 *)((u8 *)temp_s1 + 0x78) * ((var_f3 / 255.0f) - 0.5f));
        *(f32 *)((u8 *)temp_s0 + 0x10) = (f32) *(f32 *)((u8 *)temp_s1 + 0x68);
        *(f32 *)((u8 *)temp_s0 + 0x14) = (f32) *(f32 *)((u8 *)temp_s1 + 0x6C);
        *(s32 *)((u8 *)temp_s0 + 0x18) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x1C) = 0x3F800000;
        *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) *(f32 *)((u8 *)temp_s1 + 0x70);
        *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) *(f32 *)((u8 *)temp_s1 + 0x74);
        *(s32 *)((u8 *)temp_s0 + 0x28) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x2C) = 0x3F800000;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    *(s128 *)((u8 *)temp_s0 + 0x30) = (s128) *(s128 *)((u8 *)temp_s1 + 0x30);
    *(s32 *)((u8 *)temp_s0 + 0x3C) = 0;
    *(s128 *)((u8 *)temp_s0 + 0x40) = (s128) *(s128 *)((u8 *)temp_s1 + 0x40);
    temp_v0_3 = func_0012EAE0(8) & 0xFF;
    if (temp_v0_3 >= 0) {
        var_f2_2 = (f32) temp_v0_3;
    } else {
        var_f2_2 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
    }
    *(f32 *)((u8 *)temp_s0 + 0x4C) = (f32) (0.5f + (0.5f * (var_f2_2 / 255.0f)));
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    temp_v1_2 = func_0012EAE0(8) & 0xFF;
    if (temp_v1_2 >= 0) {
        var_f2_3 = (f32) temp_v1_2;
    } else {
        var_f2_3 = 2.0f * (f32) (((u32) temp_v1_2 >> 1) | (temp_v1_2 & 1));
    }
    *(f32 *)((u8 *)temp_s0 + 0x5C) = (f32) ((-0.1f * (var_f2_3 / 255.0f)) - 0.1f);
}
