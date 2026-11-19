/* Draft (not built): func_002E9900 at 0x002E9900, size 0x68, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E9900.s */

// src/unk/unk_2E8540.c func_002E9900 diff diff=1/26
s32 func_002E9900(void) {
    s32 var_v0;

    if (*D_005C9F6C == 0) {
        return 1;
    }
    var_v0 = 1;
    if (*(f32 *)((u8 *)(*D_005C9F6C) + 0x10) < *(f32 *)((u8 *)(D_004573C0[*D_005C9F60] + (*D_005C9F64 * 0x10)) + 0xC)) {
        var_v0 = 0;
    }
    return var_v0;
}
