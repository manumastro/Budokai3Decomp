/* Draft (not built): func_0029A1C0 at 0x0029A1C0, size 0x8C, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_map/func_0029A1C0.s */

// src/story/str_map.c func_0029A1C0 diff diff=5/35
void func_0029A1C0(void) {
    s8 temp_a1;
    u8 *temp_v1;

    temp_a1 = *(s8 *)((u8 *)gStrMap + 0x1BD);
    switch (temp_a1) {                              /* irregular */
    case 0:
        temp_v1 = *(u8 **)((u8 *)gStrMap + 0xC);
        if ((temp_v1 == NULL) || (*(s16 *)((u8 *)temp_v1 + 4) == 3)) {
            func_00299390();
            *(s8 *)((u8 *)gStrMap + 0x1BD) = 2;
            return;
        }
    case 2:
        return;
    case 1:
        return;
    case 3:
        break;
    }
}
