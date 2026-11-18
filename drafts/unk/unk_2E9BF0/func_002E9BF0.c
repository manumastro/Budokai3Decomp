/* Draft (not built): func_002E9BF0 at 0x002E9BF0, size 0xAC, segment unk/unk_2E9BF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2E9BF0/func_002E9BF0.s */

// src/unk/unk_2E9BF0.c func_002E9BF0 diff diff=8/43
void func_002E9BF0(void) {
    s32 temp_v0;

    temp_v0 = func_002E0C70();
    switch (temp_v0) {                              /* irregular */
    case 3:
        return;
    case 0:
        Option_Load();
        return;
    case 2:
    case 1:
        if (func_002E0D10() == 1) {
            ChangeProgress_Start();
            return;
        }
        return;
    case 4:
        Scene_MarkDone();
        *(s32 *)((u8 *)D_00470950 + 0x1C) = 0;
        break;
    }
}
