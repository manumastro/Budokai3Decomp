/* Draft (not built): func_00204300 at 0x00204300, size 0x5B0, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 513: s3232 temp_f1_2; @ 512: s3232 temp_f1;
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00204300.s */

// src/unk/unk_1FB760.c func_00204300 cerr diff=-1/0
s32 func_00141C80(void *, f32 *, f32);
void func_00204300(u8 *arg0) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 sp4C;
    s3232 temp_f1;
    s3232 temp_f1_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    f32 var_f2_5;
    f32 var_f2_6;
    f32 var_f2_7;
    f32 var_f3;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v1_2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) -*(f32 *)((u8 *)temp_s1 + 0x54);
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    *(f32 *)((u8 *)temp_s0 + 0x74) = (f32) *(f32 *)((u8 *)temp_s1 + 0x68);
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
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    if (*(s32 *)((u8 *)temp_s1 + 8) & 0x20) {
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
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    if (*(s32 *)((u8 *)temp_s1 + 8) & 0x40) {
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
        func_00146F30(temp_s0 + 0x40);
        *(s3232 *)((u8 *)temp_s0 + 0x4C) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0x7C);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    temp_v1 = func_0012EAE0(8) & 0xFF;
    if (temp_v1 >= 0) {
        var_f3 = (f32) temp_v1;
    } else {
        var_f3 = 2.0f * (f32) (((u32) temp_v1 >> 1) | (temp_v1 & 1));
    }
    *(f32 *)((u8 *)temp_s0 + 0x70) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x5C) + (*(f32 *)((u8 *)temp_s1 + 0x60) * (var_f3 / 255.0f)));
    *(f32 *)((u8 *)temp_s0 + 0x70) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x70) * 0.5f);
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 8);
    if (temp_a0 & 0x8000) {
        *(s32 *)((u8 *)temp_s0 + 0x78) = 0;
        *(u32 *)((u8 *)temp_s0 + 0x7C) = 0U;
        if (*(s32 *)((u8 *)temp_s1 + 8) & 0x80000) {
            *(u32 *)((u8 *)temp_s0 + 0x7C) = (u32) (func_0012EAE0(0x20) % (u32) *(u32 *)((u8 *)temp_s1 + 0xC4));
        }
        temp_v1_2 = temp_s1 + (*(u32 *)((u8 *)temp_s0 + 0x7C) * 0x14);
        *(s3232 *)((u8 *)temp_s0 + 0x60) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xCC);
        *(s3232 *)((u8 *)temp_s0 + 0x64) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xD0);
        *(s3232 *)((u8 *)temp_s0 + 0x68) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xD4);
        *(s3232 *)((u8 *)temp_s0 + 0x6C) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xD8);
    } else if (temp_a0 & 0x2000) {
        *(s3232 *)((u8 *)temp_s0 + 0x60) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xA8);
        *(s3232 *)((u8 *)temp_s0 + 0x64) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xAC);
        *(s3232 *)((u8 *)temp_s0 + 0x68) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xB0);
        *(s3232 *)((u8 *)temp_s0 + 0x6C) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xB4);
    } else {
        *(s3232 *)((u8 *)temp_s0 + 0x60) = 0;
        *(s3232 *)((u8 *)temp_s0 + 0x64) = 0;
        *(s3232 *)((u8 *)temp_s0 + 0x68) = 0x3F800000;
        *(s3232 *)((u8 *)temp_s0 + 0x6C) = 0x3F800000;
    }
    if ((*(s32 *)((u8 *)temp_s1 + 8) & 0x20000) && (func_0012EAE0(1) & 1)) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 8);
        temp_f1 = *(s3232 *)((u8 *)temp_s0 + 0x60);
        *(s3232 *)((u8 *)temp_s0 + 0x60) = (s3232) *(s3232 *)((u8 *)temp_s0 + 0x68);
        *(s3232 *)((u8 *)temp_s0 + 0x68) = temp_f1;
    }
    if ((*(s32 *)((u8 *)temp_s1 + 8) & 0x40000) && (func_0012EAE0(1) & 1)) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 0x10);
        temp_f1_2 = *(s3232 *)((u8 *)temp_s0 + 0x64);
        *(s3232 *)((u8 *)temp_s0 + 0x64) = (s3232) *(s3232 *)((u8 *)temp_s0 + 0x6C);
        *(s3232 *)((u8 *)temp_s0 + 0x6C) = temp_f1_2;
    }
}
