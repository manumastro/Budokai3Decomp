/* Draft (not built): func_002F2870 at 0x002F2870, size 0x1A0, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  = sp44; @ 667: )gInputName + 0xC)) + 0x1C) + (((s64) ((temp_a2 + 0x33) << 0x30) >> 0x30) * 4)), &sp40, -1, temp_a3, 0);
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F2870.s */

// src/menu/mn_InputPass.c func_002F2870 cerr diff=-1/0
void func_002F2870(s32 arg0, s64 arg1) {
    f32 sp40;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_s0;
    s32 temp_s1;
    s64 temp_a2;
    u16 temp_t1;
    u32 temp_a3;
    u8 *temp_a1;
    u8 *temp_s2;

    temp_a2 = (s64) (arg1 << 0x30) >> 0x30;
    temp_a1 = (u8 *)((temp_a2 * 2) + arg0);
    temp_t1 = *(u16 *)((u8 *)temp_a1 + 0x50);
    if (temp_t1 != 0xFFFF) {
        temp_s2 = *(u8 **)((u8 *)((temp_a2 * 4) + arg0) + 4);
        temp_a3 = temp_t1 >> 0x1F;
        temp_s1 = ((s32) temp_t1 % 10) & 0xFFFF;
        temp_s0 = ((*(u16 *)((u8 *)temp_a1 + 0x50) / 10) + temp_a3) & 0xFFFF;
        func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)gInputName + 0xC)) + 0x1C) + (((s64) ((temp_a2 + 0x33) << 0x30) >> 0x30) * 4)), &sp40, -1, temp_a3, 0);
        *(f32 *)((u8 *)temp_s2 + 0x20) = sp40;
        *(f32 *)((u8 *)temp_s2 + 0x24) = sp44;
        *(s32 *)((u8 *)temp_s2 + 0x34) = 0xC1A00000;
        *(s32 *)((u8 *)temp_s2 + 0x3C) = 0x41A00000;
        *(s32 *)((u8 *)temp_s2 + 0x30) = 0xC1A00000;
        *(s32 *)((u8 *)temp_s2 + 0x38) = 0x41A00000;
        if (temp_s0 >= 0) {
            var_f0 = (f32) temp_s0;
        } else {
            var_f0 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
        }
        *(f32 *)((u8 *)temp_s2 + 0x44) = (f32) (40.0f * var_f0);
        if (temp_s1 >= 0) {
            var_f0_2 = (f32) temp_s1;
        } else {
            var_f0_2 = 2.0f * (f32) (((u32) temp_s1 >> 1) | (temp_s1 & 1));
        }
        *(f32 *)((u8 *)temp_s2 + 0x40) = (f32) (40.0f * var_f0_2);
        *(f32 *)((u8 *)temp_s2 + 0x48) = (f32) (40.0f * (f32) ((temp_s1 & 0xFFFF) + 1));
        *(f32 *)((u8 *)temp_s2 + 0x4C) = (f32) (40.0f * (f32) ((temp_s0 & 0xFFFF) + 1));
    }
}
