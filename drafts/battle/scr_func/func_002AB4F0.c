/* Draft (not built): func_002AB4F0 at 0x002AB4F0, size 0x198, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x19C, original 0x198
 * Original: asm/nonmatchings/battle/scr_func/func_002AB4F0.s */

// src/battle/scr_func.c func_002AB4F0 size diff=59/103
s32 func_002AB4F0(s32 **arg0, u8 *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 temp_a0;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_t1;
    u8 *temp_t2;

    temp_a3 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a0 = *(s32 *)((u8 *)temp_a3 + 8);
    temp_t2 = (*(s32 *)((u8 *)temp_a3 + 0xC) * 0xD0) + (&D_005BC9E0 + (**arg0 * 0x1A0));
    temp_t1 = *(u8 **)((u8 *)temp_t2 + 4);
    *(s32 *)((u8 *)temp_t2 + 8) = temp_a0;
    temp_a3_2 = temp_t1 + *(temp_t1 + *(s32 *)((u8 *)temp_t1 + 0x14) + (temp_a0 * 4));
    *(s32 *)((u8 *)temp_t2 + 0xC) = (s32) *(s32 *)((u8 *)temp_a3 + 4);
    *(f32 *)((u8 *)temp_t2 + 0x50) = (f32) *(s16 *)((u8 *)temp_a3_2 + 0x10);
    *(f32 *)((u8 *)temp_t2 + 0x54) = (f32) *(s16 *)((u8 *)temp_a3_2 + 0x12);
    *(s32 *)((u8 *)temp_t2 + 0x30) = 0;
    *(s32 *)((u8 *)temp_t2 + 0x34) = 0;
    *(s32 *)((u8 *)temp_t2 + 0x38) = 0x3F800000;
    *(s32 *)((u8 *)temp_t2 + 0x3C) = 0x3F800000;
    if (*(s32 *)((u8 *)temp_a3 + 0) == 1) {
        var_f0 = *(f32 *)((u8 *)temp_t2 + 0x50);
    } else {
        var_f0 = *(f32 *)((u8 *)temp_t2 + 0x50) - 0.5f;
    }
    *(f32 *)((u8 *)temp_t2 + 0x40) = var_f0;
    *(f32 *)((u8 *)temp_t2 + 0x44) = (f32) *(f32 *)((u8 *)temp_t2 + 0x54);
    *(s32 *)((u8 *)temp_t2 + 0x48) = 0x3F800000;
    *(s32 *)((u8 *)temp_t2 + 0x4C) = 0x3F800000;
    if (*(s32 *)((u8 *)temp_t2 + 0x14) & 1) {
        temp_f1 = 0.5f * *(f32 *)((u8 *)temp_t2 + 0x50);
        *(f32 *)((u8 *)temp_t2 + 0x60) = (f32) (*(f32 *)((u8 *)temp_t2 + 0x80) - temp_f1);
        var_f0_2 = *(f32 *)((u8 *)temp_t2 + 0x80) + temp_f1;
    } else {
        var_f0_2 = *(f32 *)((u8 *)temp_t2 + 0x60) + *(f32 *)((u8 *)temp_t2 + 0x50);
    }
    *(f32 *)((u8 *)temp_t2 + 0x70) = var_f0_2;
    if (*(s32 *)((u8 *)temp_t2 + 0x14) & 2) {
        temp_f1_2 = 0.5f * *(f32 *)((u8 *)temp_t2 + 0x54);
        *(f32 *)((u8 *)temp_t2 + 0x64) = (f32) (*(f32 *)((u8 *)temp_t2 + 0x84) - temp_f1_2);
        var_f0_3 = *(f32 *)((u8 *)temp_t2 + 0x84) + temp_f1_2;
    } else {
        var_f0_3 = *(f32 *)((u8 *)temp_t2 + 0x64) + *(f32 *)((u8 *)temp_t2 + 0x54);
    }
    *(f32 *)((u8 *)temp_t2 + 0x74) = var_f0_3;
    return 1;
}
