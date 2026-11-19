/* Draft (not built): func_001E53B0 at 0x001E53B0, size 0x150, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 69 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x15C, original 0x150
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E53B0.s */

// src/unk/unk_1D5B30.c func_001E53B0 size diff=69/87
void func_001E53B0(s32 arg0, s32 arg1) {
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    f32 var_f4;
    s16 temp_t0;
    s16 temp_t0_2;
    s32 temp_a1;
    s32 temp_v1;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_a3_2;

    temp_v1 = arg1 * 4;
    temp_a2 = **(u8 ***)((u8 *)(temp_v1 + arg0) + 0x1DB8);
    temp_a1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_a2 + 0x4C)) + 4)) + 0x14);
    temp_a3 = (unsigned char *)((*(s16 *)((u8 *)temp_a2 + 0x18) * 0x50) + temp_a1);
    temp_t0 = *(s16 *)((u8 *)temp_a3 + 0x4A);
    if (!(temp_t0 & 1)) {
        *(s16 *)((u8 *)temp_a3 + 0x4A) = (s16) (temp_t0 | 1);
    }
    temp_a3_2 = (unsigned char *)((*(s16 *)((u8 *)temp_a2 + 0x1A) * 0x50) + temp_a1);
    temp_t0_2 = *(s16 *)((u8 *)temp_a3_2 + 0x4A);
    if (!(temp_t0_2 & 1)) {
        *(s16 *)((u8 *)temp_a3_2 + 0x4A) = (s16) (temp_t0_2 | 1);
    }
    var_f4 = *(f32 *)((u8 *)((*(s16 *)((u8 *)temp_a2 + 0x24) * 0x50) + temp_a1) + 0x14);
    if (var_f4 < 0.0f) {
        var_f4 = -var_f4;
    }
    var_f3 = *(f32 *)((u8 *)((*(s16 *)((u8 *)temp_a2 + 2) * 0x50) + temp_a1) + 0x14);
    if (var_f3 < 0.0f) {
        var_f3 = -var_f3;
    }
    var_f2 = *(f32 *)((u8 *)((*(s16 *)((u8 *)temp_a2 + 4) * 0x50) + temp_a1) + 0x14);
    if (var_f2 < 0.0f) {
        var_f2 = -var_f2;
    }
    var_f1 = *(f32 *)((u8 *)((*(s16 *)((u8 *)temp_a2 + 6) * 0x50) + temp_a1) + 0x14);
    if (var_f1 < 0.0f) {
        var_f1 = -var_f1;
    }
    *(f32 *)((u8 *)(temp_v1 + arg0) + 0x1DD8) = (f32) (0.5f * (var_f1 + (var_f2 + (var_f3 + var_f4))));
}
