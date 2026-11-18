/* Draft (not built): func_002034F0 at 0x002034F0, size 0x400, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'void *' mwccps2.exe Compiler: @ 549: F10(temp_s0 + 0x20, *(s32 *)((u8 *)arg0 + 0x1C), *(f32 *)((u8 *)temp_s1 + 0x58));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002034F0.s */

// src/unk/unk_1FB760.c func_002034F0 cerr diff=-1/0
s32 func_00141C80(void *, f32 *, f32);
void func_002034F0(u8 *arg0) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 sp4C;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    f32 var_f2_5;
    f32 var_f2_6;
    f32 var_f2_7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) -*(f32 *)((u8 *)temp_s1 + 0x54);
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x70) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x74) = 0;
    *(f32 *)((u8 *)temp_s0 + 0x50) = (f32) *(f32 *)((u8 *)temp_s1 + 0x70);
    *(f32 *)((u8 *)temp_s0 + 0x54) = (f32) *(f32 *)((u8 *)temp_s1 + 0x74);
    *(f32 *)((u8 *)temp_s0 + 0x58) = (f32) *(f32 *)((u8 *)temp_s1 + 0x78);
    *(f32 *)((u8 *)temp_s0 + 0x5C) = (f32) *(f32 *)((u8 *)temp_s1 + 0x7C);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (*(f32 *)((u8 *)temp_s0 + 8) < 0.0f) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 1);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F10(temp_s0 + 0x20, *(s32 *)((u8 *)arg0 + 0x1C), *(f32 *)((u8 *)temp_s1 + 0x58));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (*(s32 *)((u8 *)temp_s1 + 8) & 0x40) {
        temp_v0 = func_0012EAE0(8) & 0xFF;
        if (temp_v0 >= 0) {
            var_f2 = (f32) temp_v0;
        } else {
            var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        sp40 = (var_f2 / 255.0f) - 0.5f;
        temp_v0_2 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_2 >= 0) {
            var_f2_2 = (f32) temp_v0_2;
        } else {
            var_f2_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        sp44 = (var_f2_2 / 255.0f) - 0.5f;
        temp_v0_3 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_3 >= 0) {
            var_f2_3 = (f32) temp_v0_3;
        } else {
            var_f2_3 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
        }
        sp4C = 0x3F800000;
        sp48 = (var_f2_3 / 255.0f) - 0.5f;
        func_00146F30(&sp40);
        temp_v0_4 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_4 >= 0) {
            var_f2_4 = (f32) temp_v0_4;
        } else {
            var_f2_4 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
        }
        func_00141C80(temp_s0 + 0x30, &sp40, 3.1415927f * (2.0f * (var_f2_4 / 255.0f)));
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    }
    if (*(s32 *)((u8 *)temp_s1 + 8) & 0x80) {
        temp_v0_5 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_5 >= 0) {
            var_f2_5 = (f32) temp_v0_5;
        } else {
            var_f2_5 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
        }
        *(f32 *)((u8 *)temp_s0 + 0x40) = (f32) ((var_f2_5 / 255.0f) - 0.5f);
        temp_v0_6 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_6 >= 0) {
            var_f2_6 = (f32) temp_v0_6;
        } else {
            var_f2_6 = 2.0f * (f32) (((u32) temp_v0_6 >> 1) | (temp_v0_6 & 1));
        }
        *(f32 *)((u8 *)temp_s0 + 0x44) = (f32) ((var_f2_6 / 255.0f) - 0.5f);
        temp_v0_7 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_7 >= 0) {
            var_f2_7 = (f32) temp_v0_7;
        } else {
            var_f2_7 = 2.0f * (f32) (((u32) temp_v0_7 >> 1) | (temp_v0_7 & 1));
        }
        *(f32 *)((u8 *)temp_s0 + 0x48) = (f32) ((var_f2_7 / 255.0f) - 0.5f);
        *(s3232 *)((u8 *)temp_s0 + 0x4C) = 0x3F800000;
        func_00146F30((void *)(temp_s0 + 0x40));
        *(s3232 *)((u8 *)temp_s0 + 0x4C) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0x6C);
        return;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
}
