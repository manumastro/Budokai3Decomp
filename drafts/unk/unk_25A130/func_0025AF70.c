/* Draft (not built): func_0025AF70 at 0x0025AF70, size 0x38, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025AF70.s */

// src/unk/unk_25A130.c func_0025AF70 diff diff=12/14
s32 func_0025AF70(s32 unused_arg0, u8 *arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    if (*D_0058D4F0 != NULL) {
        (*D_0058D4F0)->f50 = *(f32 *)((u8 *)temp_v0 + 0xC);
        (*D_0058D4F0)->f54 = *(f32 *)((u8 *)temp_v0 + 4);
        (*D_0058D4F0)->f58 = *(f32 *)((u8 *)temp_v0 + 8);
        (*D_0058D4F0)->f5C = *(f32 *)((u8 *)temp_v0 + 0);
    }
    return 1;
}
