/* Draft (not built): func_00280DF0 at 0x00280DF0, size 0x50, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_280730/func_00280DF0.s */

// src/unk/unk_280730.c func_00280DF0 diff diff=15/20
void func_00280DF0(u8 *arg0, s64 arg1) {
    s32 *var_v1;
    u8 *temp_a3;

    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(u16 *)((u8 *)arg0 + 0x3E) = (u16) (*(u16 *)((u8 *)arg0 + 0x3E) | 2);
    temp_a3 = arg0 + 0x30;
    if (*(s16 *)((u8 *)arg0 + 0x40) != ((s64) (arg1 << 0x30) >> 0x30)) {
        *(s8 *)((u8 *)temp_a3 + 0xC) = 0;
        *(s16 *)((u8 *)temp_a3 + 0x10) = (s16) arg1;
        var_v1 = (s32 *)(&func_00280C70);
        *(f32 *)((u8 *)temp_a3 + 0x14) = 0.0f;
        if (&func_00280C70 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
