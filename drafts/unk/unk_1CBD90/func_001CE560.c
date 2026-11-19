/* Draft (not built): func_001CE560 at 0x001CE560, size 0x48, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 3 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x44, original 0x48
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CE560.s */

// src/unk/unk_1CBD90.c func_001CE560 size diff=3/17
s32 func_001CE560(s32 unused_arg0, u8 *arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    func_001D7CC0(gBattle->tbl[*(s32 *)((u8 *)temp_v0 + 4)], (*(s32 *)((u8 *)temp_v0 + 0) == 0) ? 0 : 1);
    return 1;
}

/* Similar function already in C: Scr_CmdFighterE0200 (src/unk/unk_1CBD90.c), similarity 0.80.
 * It is the template below (not built). */
#if 0
int Scr_CmdFighterE0200(void *unused, Arg *a) {
    int *p = a->p;
    char *t = gBattle->tbl[p[1]];
    *(s32 *)a = func_001E0200(t, -p[0], 0);
    return 1;
}
#endif
