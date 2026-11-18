/* Draft (not built): func_0020F4D0 at 0x0020F4D0, size 0xC8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); rom 'int' to 'unsigned char *' @ 2129: 1350), *(s16 *)((u8 *)arg0 + 0x9C), *(s16 *)((u8 *)arg0 + 0xA8), temp_a3 * 0x85);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020F4D0.s */

// src/unk/unk_20A4D0.c func_0020F4D0 cerr diff=-1/0
void func_0020F4D0(u8 *arg0) {
    f32 temp_f0;
    s16 temp_a3;
    s32 temp_v1;
    u8 *temp_s0;

    temp_a3 = *(s16 *)((u8 *)arg0 + 0x90);
    temp_s0 = &D_00568C90 + (temp_a3 * 0x2140);
    *(s32 *)((u8 *)temp_s0 + 0x90) = func_0020B020(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350), *(s16 *)((u8 *)arg0 + 0x9C), *(s16 *)((u8 *)arg0 + 0xA8), temp_a3 * 0x85);
    amMotSet_Init(temp_s0 + 0xA0, *(s32 *)((u8 *)temp_s0 + 0x94));
    amMotSet_Bind(temp_s0 + 0xA0, 0, *(s32 *)((u8 *)temp_s0 + 0x90));
    *(s32 *)((u8 *)temp_s0 + 0x2114) = 0x10000;
    *(s32 *)((u8 *)temp_s0 + 0x2110) = 0x3F800000;
    temp_f0 = -1.0f;
    *(f32 *)((u8 *)temp_s0 + 0x2104) = temp_f0;
    *(f32 *)((u8 *)temp_s0 + 0x2108) = temp_f0;
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x2114);
    *(f32 *)((u8 *)temp_s0 + 0x210C) = (f32) *(s32 *)((u8 *)(((temp_v1 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1 >> 0x10) - 1) * 4) + temp_s0) + 0xA4)) + 0x14)) + 8);
}
