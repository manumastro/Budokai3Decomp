/* Draft (not built): func_002F0960 at 0x002F0960, size 0x194, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 79 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x168, original 0x194
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F0960.s */

// src/menu/mn_InputPass.c func_002F0960 size diff=79/90
void func_002F0960(u8 *arg0) {
    f32 var_f3;
    f32 var_f4;
    f32 var_f5;
    f32 var_f6;
    f32 var_f7;
    f32 var_f8;
    u16 temp_a3;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x94);
    temp_a3 = *(u16 *)((u8 *)arg0 + 0x124);
    if (temp_a3 != 0xFFFF) {
        if (temp_a3 & 0x100) {
            var_f6 = 397.0f;
            var_f5 = 473.0f;
            var_f8 = -38.0f;
            var_f4 = 5.0f + (30.0f * (f32) ((s64) ((temp_a3 & 0xFF) << 0x30) >> 0x30));
            var_f7 = 38.0f;
            var_f3 = 30.0f + var_f4;
        } else {
            var_f8 = -15.0f;
            var_f7 = 15.0f;
            var_f6 = 5.0f + (30.0f * (f32) ((s64) ((s64) ((s32) temp_a3 % 13) << 0x30) >> 0x30));
            var_f5 = 30.0f + var_f6;
            var_f4 = 5.0f + (30.0f * (f32) ((s64) (((*(u16 *)((u8 *)arg0 + 0x124) / 13) + (temp_a3 >> 0x1F)) << 0x30) >> 0x30));
            var_f3 = 30.0f + var_f4;
        }
        *(s16 *)((u8 *)temp_v1 + 0x18) = 1;
        *(f32 *)((u8 *)temp_v1 + 0x20) = (f32) (60.0f + (var_f6 + ((var_f5 - var_f6) / 2.0f)));
        *(f32 *)((u8 *)temp_v1 + 0x24) = (f32) (49.0f + (var_f4 + ((var_f3 - var_f4) / 2.0f)));
        *(s32 *)((u8 *)temp_v1 + 0x34) = 0xC1700000;
        *(s32 *)((u8 *)temp_v1 + 0x3C) = 0x41700000;
        *(f32 *)((u8 *)temp_v1 + 0x30) = var_f8;
        *(f32 *)((u8 *)temp_v1 + 0x38) = var_f7;
        *(f32 *)((u8 *)temp_v1 + 0x44) = var_f4;
        *(f32 *)((u8 *)temp_v1 + 0x40) = var_f6;
        *(f32 *)((u8 *)temp_v1 + 0x48) = var_f5;
        *(f32 *)((u8 *)temp_v1 + 0x4C) = var_f3;
        func_0022CF70(temp_v1, 0xC1700000, 0x42440000, 0x42700000);
    }
}
