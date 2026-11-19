/* Draft (not built): func_0020F290 at 0x0020F290, size 0x64, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020F290.s */

void func_0020F290(s32 arg0, s32 arg1) {
    u32 temp_v1;
    u8 *temp_a1;
    temp_a1 = (u8 *)&D_00568C90 + arg0 * 0x2140;
    *(s32 *)((u8 *)temp_a1 + 0x2114) = (s32)(arg1 | 0x10000);
    temp_v1 = *(s32 *)((u8 *)temp_a1 + 0x2114);
    *(f32 *)((u8 *)temp_a1 + 0x210C) = (f32)*(s32 *)((u8 *)((temp_v1 & 0xFFFF) * 0x10 + *(s32 *)((u8 *)*(u8 **)((u8 *)((((s32)temp_v1 >> 0x10) - 1) * 4 + temp_a1) + 0xA4) + 0x14)) + 8);
}
