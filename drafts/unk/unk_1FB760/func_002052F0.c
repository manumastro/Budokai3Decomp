/* Draft (not built): func_002052F0 at 0x002052F0, size 0x258, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 102 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x244, original 0x258
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002052F0.s */

// src/unk/unk_1FB760.c func_002052F0 size diff=102/145
void func_002052F0(u8 *arg0) {
    s32 temp_f1;
    s32 temp_f1_2;
    s32 temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) -*(f32 *)((u8 *)temp_s1 + 0x54);
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    *(f32 *)((u8 *)temp_s0 + 0x60) = (f32) *(f32 *)((u8 *)temp_s1 + 0x5C);
    *(f32 *)((u8 *)temp_s0 + 0x64) = (f32) *(f32 *)((u8 *)temp_s1 + 0x64);
    *(f32 *)((u8 *)temp_s0 + 0x68) = (f32) *(f32 *)((u8 *)temp_s1 + 0x6C);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
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
    func_00146F10((void *)(temp_s0 + 0x20), (void *)(*(s32 *)((u8 *)arg0 + 0x1C)), *(f32 *)((u8 *)temp_s1 + 0x58));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 8);
    if (temp_a0 & 0x8000) {
        *(s32 *)((u8 *)temp_s0 + 0x6C) = 0;
        *(u32 *)((u8 *)temp_s0 + 0x70) = 0U;
        if (*(s32 *)((u8 *)temp_s1 + 8) & 0x80000) {
            *(u32 *)((u8 *)temp_s0 + 0x70) = (u32) (func_0012EAE0(0x20) % (u32) *(u32 *)((u8 *)temp_s1 + 0xE4));
        }
        temp_v1 = temp_s1 + (*(u32 *)((u8 *)temp_s0 + 0x70) * 0x14);
        *(s32 *)((u8 *)temp_s0 + 0x50) = (s32) *(s32 *)((u8 *)temp_v1 + 0xEC);
        *(s32 *)((u8 *)temp_s0 + 0x54) = (s32) *(s32 *)((u8 *)temp_v1 + 0xF0);
        *(s32 *)((u8 *)temp_s0 + 0x58) = (s32) *(s32 *)((u8 *)temp_v1 + 0xF4);
        *(s32 *)((u8 *)temp_s0 + 0x5C) = (s32) *(s32 *)((u8 *)temp_v1 + 0xF8);
    } else if (temp_a0 & 0x2000) {
        *(s32 *)((u8 *)temp_s0 + 0x50) = (s32) *(s32 *)((u8 *)temp_s1 + 0xC8);
        *(s32 *)((u8 *)temp_s0 + 0x54) = (s32) *(s32 *)((u8 *)temp_s1 + 0xCC);
        *(s32 *)((u8 *)temp_s0 + 0x58) = (s32) *(s32 *)((u8 *)temp_s1 + 0xD0);
        *(s32 *)((u8 *)temp_s0 + 0x5C) = (s32) *(s32 *)((u8 *)temp_s1 + 0xD4);
    } else {
        *(s32 *)((u8 *)temp_s0 + 0x50) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x54) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x58) = 0x3F800000;
        *(s32 *)((u8 *)temp_s0 + 0x5C) = 0x3F800000;
    }
    if ((*(s32 *)((u8 *)temp_s1 + 8) & 0x20000) && (func_0012EAE0(1) & 1)) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 8);
        temp_f1 = *(s32 *)((u8 *)temp_s0 + 0x50);
        *(s32 *)((u8 *)temp_s0 + 0x50) = (s32) *(s32 *)((u8 *)temp_s0 + 0x58);
        *(s32 *)((u8 *)temp_s0 + 0x58) = temp_f1;
    }
    if ((*(s32 *)((u8 *)temp_s1 + 8) & 0x40000) && (func_0012EAE0(1) & 1)) {
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 0x10);
        temp_f1_2 = *(s32 *)((u8 *)temp_s0 + 0x54);
        *(s32 *)((u8 *)temp_s0 + 0x54) = (s32) *(s32 *)((u8 *)temp_s0 + 0x5C);
        *(s32 *)((u8 *)temp_s0 + 0x5C) = temp_f1_2;
    }
}
