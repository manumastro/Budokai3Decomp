/* Draft (not built): func_002BF3B0 at 0x002BF3B0, size 0x168, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_status/func_002BF3B0.s */

void *func_00240EF0(s8);
void *func_00240F40(s32, s32);
void func_002BF3B0(void) {
    u8 *var_s3;
    f32 temp_f2;
    f32 var_f0;
    s32 *var_s4;
    s32 temp_a0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    var_s4 = D_0046FE44;
    if (*(s16 *)((u8 *)var_s4 + 0x100) == 1) {
        var_s3 = func_00240F40(0, 0);
        temp_v0 = func_00240F40(0, 1);
        var_s0 = *(u8 **)((u8 *)temp_v0 + 0x24);
        var_s1 = *(u8 **)((u8 *)var_s3 + 0x24);
        var_s2 = temp_v0;
        temp_v0_2 = func_00240EF0(*(s8 *)((u8 *)var_s4 + 0x3A));
        *(s32 **)((u8 *)var_s2 + 0x68) = var_s4;
        var_f0 = 0.0f;
        *(s32 **)((u8 *)var_s3 + 0x68) = var_s4;
        temp_f2 = *(f32 *)((u8 *)var_s4 + 0x24);
        if (!(temp_f2 <= 0.0f)) {
            *(f32 *)((u8 *)var_s3 + 0x60) = (f32)(*(f32 *)((u8 *)temp_v0_2 + 0) + *(f32 *)((u8 *)temp_v0_2 + 4) * temp_f2);
            var_f0 = *(f32 *)((u8 *)temp_v0_2 + 0x1C) + *(f32 *)((u8 *)temp_v0_2 + 0x20) * *(f32 *)((u8 *)var_s4 + 0x24);
        } else {
            *(f32 *)((u8 *)var_s3 + 0x60) = 0.0f;
        }
        *(f32 *)((u8 *)var_s2 + 0x60) = var_f0;
        temp_a0 = *(s32 *)((u8 *)var_s4 + 0x2C);
        if (temp_a0 & 2) {
            *(s32 *)((u8 *)var_s3 + 0x54) = 0x40800000;
            *(f32 *)((u8 *)var_s3 + 0x5C) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0xC);
            *(f32 *)((u8 *)var_s3 + 0x60) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x10);
            *(f32 *)((u8 *)var_s1 + 0x60) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x14);
            *(s32 *)((u8 *)var_s2 + 0x54) = 0x40800000;
            *(f32 *)((u8 *)var_s2 + 0x5C) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x28);
            *(f32 *)((u8 *)var_s2 + 0x60) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x2C);
            *(f32 *)((u8 *)var_s0 + 0x60) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x30);
            return;
        }
        if (temp_a0 & 0x20) {
            *(f32 *)((u8 *)var_s3 + 0x60) = 0.0f;
            *(f32 *)((u8 *)var_s2 + 0x60) = 0.0f;
            return;
        }
        *(s32 *)((u8 *)var_s3 + 0x54) = 0xC0400000;
        *(f32 *)((u8 *)var_s3 + 0x5C) = (f32)*(f32 *)((u8 *)temp_v0_2 + 8);
        *(f32 *)((u8 *)var_s1 + 0x60) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x18);
        *(s32 *)((u8 *)var_s2 + 0x54) = 0xC0400000;
        *(f32 *)((u8 *)var_s2 + 0x5C) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x24);
        *(f32 *)((u8 *)var_s0 + 0x60) = (f32)*(f32 *)((u8 *)temp_v0_2 + 0x34);
    }
}
