/* Draft (not built): func_0020F300 at 0x0020F300, size 0x68, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020F300.s */

// src/unk/unk_20A4D0.c func_0020F300 diff diff=13/26
void func_0020F300(s32 arg0, s32 arg1) {
    s32 temp_v1;
    u8 *temp_a2;

    temp_a2 = &D_00568C90 + (arg0 * 0x2140);
    *(s32 *)((u8 *)temp_a2 + 0x2100) = (s32) (arg1 | 0x10000);
    temp_v1 = *(s32 *)((u8 *)temp_a2 + 0x2100);
    *(f32 *)((u8 *)temp_a2 + 0x20F8) = (f32) *(s32 *)((u8 *)(((temp_v1 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)temp_a2 + 0x9C)) + 0x46C)) + 0x14)) + 8);
}
