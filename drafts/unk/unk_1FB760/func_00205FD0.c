/* Draft (not built): func_00205FD0 at 0x00205FD0, size 0x338, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 514: s3232 temp_f1_2; @ 513: s3232 temp_f1;
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00205FD0.s */

// src/unk/unk_1FB760.c func_00205FD0 cerr diff=-1/0
void func_00205FD0(u8 *arg0) {
    s3232 temp_f1;
    s3232 temp_f1_2;
    f32 var_f3;
    f32 var_f3_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v1_2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) -*(f32 *)((u8 *)temp_s1 + 0x54);
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    *(f32 *)((u8 *)temp_s0 + 0x54) = (f32) *(f32 *)((u8 *)temp_s1 + 0x68);
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
    temp_v0 = func_0012EAE0(8) & 0xFF;
    if (temp_v0 >= 0) {
        var_f3 = (f32) temp_v0;
    } else {
        var_f3 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    }
    *(f32 *)((u8 *)temp_s0 + 0x50) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x5C) + (*(f32 *)((u8 *)temp_s1 + 0x60) * (var_f3 / 255.0f)));
    *(f32 *)((u8 *)temp_s0 + 0x50) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x50) * 0.5f);
    temp_v1 = func_0012EAE0(8) & 0xFF;
    if (temp_v1 >= 0) {
        var_f3_2 = (f32) temp_v1;
    } else {
        var_f3_2 = 2.0f * (f32) (((u32) temp_v1 >> 1) | (temp_v1 & 1));
    }
    *(f32 *)((u8 *)temp_s0 + 0x58) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x70) + (*(f32 *)((u8 *)temp_s1 + 0x74) * (var_f3_2 / 255.0f)));
    if ((*(s32 *)((u8 *)temp_s1 + 8) & 0x20) && (func_0012EAE0(1) & 1)) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 4);
    }
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 8);
    if (temp_a0 & 0x8000) {
        *(s32 *)((u8 *)temp_s0 + 0x5C) = 0;
        *(u32 *)((u8 *)temp_s0 + 0x60) = 0U;
        if (*(s32 *)((u8 *)temp_s1 + 8) & 0x80000) {
            *(u32 *)((u8 *)temp_s0 + 0x60) = (u32) (func_0012EAE0(0x20) % (u32) *(u32 *)((u8 *)temp_s1 + 0xC4));
        }
        temp_v1_2 = temp_s1 + (*(u32 *)((u8 *)temp_s0 + 0x60) * 0x14);
        *(s3232 *)((u8 *)temp_s0 + 0x40) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xCC);
        *(s3232 *)((u8 *)temp_s0 + 0x44) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xD0);
        *(s3232 *)((u8 *)temp_s0 + 0x48) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xD4);
        *(s3232 *)((u8 *)temp_s0 + 0x4C) = (s3232) *(s3232 *)((u8 *)temp_v1_2 + 0xD8);
    } else if (temp_a0 & 0x2000) {
        *(s3232 *)((u8 *)temp_s0 + 0x40) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xA8);
        *(s3232 *)((u8 *)temp_s0 + 0x44) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xAC);
        *(s3232 *)((u8 *)temp_s0 + 0x48) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xB0);
        *(s3232 *)((u8 *)temp_s0 + 0x4C) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0xB4);
    } else {
        *(s3232 *)((u8 *)temp_s0 + 0x40) = 0;
        *(s3232 *)((u8 *)temp_s0 + 0x44) = 0;
        *(s3232 *)((u8 *)temp_s0 + 0x48) = 0x3F800000;
        *(s3232 *)((u8 *)temp_s0 + 0x4C) = 0x3F800000;
    }
    if ((*(s32 *)((u8 *)temp_s1 + 8) & 0x20000) && (func_0012EAE0(1) & 1)) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 8);
        temp_f1 = *(s3232 *)((u8 *)temp_s0 + 0x40);
        *(s3232 *)((u8 *)temp_s0 + 0x40) = (s3232) *(s3232 *)((u8 *)temp_s0 + 0x48);
        *(s3232 *)((u8 *)temp_s0 + 0x48) = temp_f1;
    }
    if ((*(s32 *)((u8 *)temp_s1 + 8) & 0x40000) && (func_0012EAE0(1) & 1)) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 0x10);
        temp_f1_2 = *(s3232 *)((u8 *)temp_s0 + 0x44);
        *(s3232 *)((u8 *)temp_s0 + 0x44) = (s3232) *(s3232 *)((u8 *)temp_s0 + 0x4C);
        *(s3232 *)((u8 *)temp_s0 + 0x4C) = temp_f1_2;
    }
}
