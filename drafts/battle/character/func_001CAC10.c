/* Draft (not built): func_001CAC10 at 0x001CAC10, size 0x5C, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  does not match 'func_001E11E0(int, void *)' @ 181: func_001E11E0(*(s32 *)((u8 *)arg0 + 0x30), &sp10, temp_a2, temp_a3);
 * Original: asm/nonmatchings/battle/character/func_001CAC10.s */

// src/battle/character.c func_001CAC10 cerr diff=-1/0
void func_001CAC10(u8 *arg0) {
    f32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 temp_a2;
    u8 *temp_a3;

    temp_a3 = arg0 + 0x30;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        temp_a2 = *(s32 *)((u8 *)temp_a3 + 4);
        sp10 = *(f32 *)((u8 *)temp_a3 + 0xC);
        sp14 = *(s32 *)((u8 *)temp_a3 + 0x10);
        sp18 = temp_a2;
        sp1C = *(s32 *)((u8 *)temp_a3 + 8);
        func_001E11E0(*(s32 *)((u8 *)arg0 + 0x30), &sp10, temp_a2, temp_a3);
    }
}
