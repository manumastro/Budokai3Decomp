/* Draft (not built): func_0020F5A0 at 0x0020F5A0, size 0xEC, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  char *' mwccps2.exe Compiler: @ 2164: 1350), *(s16 *)((u8 *)arg0 + 0x9A), *(s16 *)((u8 *)arg0 + 0xA6), temp_a3 * 0x85);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020F5A0.s */

// src/unk/unk_20A4D0.c func_0020F5A0 cerr diff=-1/0
s32 amMotion_CreateFromObj(s32, s32, s32);
void func_0020F5A0(u8 *arg0) {
    f32 temp_f0;
    s16 temp_a3;
    s32 temp_v1;
    u8 *temp_s0;

    temp_a3 = *(s16 *)((u8 *)arg0 + 0x90);
    temp_s0 = &D_00568C90 + (temp_a3 * 0x2140);
    *(s32 *)((u8 *)temp_s0 + 0x8C) = func_0020B020(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350), *(s16 *)((u8 *)arg0 + 0x9A), *(s16 *)((u8 *)arg0 + 0xA6), temp_a3 * 0x85);
    *(s32 *)((u8 *)temp_s0 + 0x9C) = amMotion_CreateFromObj(*(s32 *)((u8 *)temp_s0 + 0x94), 0, 0);
    amMotion_BindAnim(*(s32 *)((u8 *)temp_s0 + 0x9C), 0, *(s32 *)((u8 *)temp_s0 + 0x8C));
    temp_f0 = -1.0f;
    *(s32 *)((u8 *)temp_s0 + 0x2100) = (s32) (*(s16 *)((u8 *)arg0 + 0xAC) | 0x10000);
    *(s32 *)((u8 *)temp_s0 + 0x20FC) = 0x3F800000;
    *(f32 *)((u8 *)temp_s0 + 0x20F0) = temp_f0;
    *(f32 *)((u8 *)temp_s0 + 0x20F4) = temp_f0;
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x2100);
    *(f32 *)((u8 *)temp_s0 + 0x20F8) = (f32) *(s32 *)((u8 *)(((temp_v1 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)temp_s0 + 0x9C)) + 0x46C)) + 0x14)) + 8);
}
