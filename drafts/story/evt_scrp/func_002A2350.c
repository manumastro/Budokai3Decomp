/* Draft (not built): func_002A2350 at 0x002A2350, size 0x7C, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x6C, original 0x7C
 * Original: asm/nonmatchings/story/evt_scrp/func_002A2350.s */

// src/story/evt_scrp.c func_002A2350 size diff=21/27
s32 func_002A2350(s32 unused_arg0, u8 *arg1) {
    u8 sp[0x400];
    s64 sp8;

    sp8 = D_004700D8;
    if (*(D_00492FCE + (((s32)(D_004B4B63)) * 0xB8)) & *(s32 *)((u8 *)((**(s32 **)((u8 *)arg1 + 0x2C) * 4) + sp) + 8)) {
        *(s32 *)((u8 *)arg1 + 0) = 1;
    } else {
        *(s32 *)((u8 *)arg1 + 0) = 0;
    }
    return 1;
}
