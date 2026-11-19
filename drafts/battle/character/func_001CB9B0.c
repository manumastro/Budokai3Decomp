/* Draft (not built): func_001CB9B0 at 0x001CB9B0, size 0x34, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/character/func_001CB9B0.s */

// src/battle/character.c func_001CB9B0 diff diff=10/13
s32 func_001CB9B0(s32 unused_arg0, u8 *arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg1 + 0x2C);
    gBattle->fighter[*(s32 *)((u8 *)temp_v1 + 4)]->unk1AD6 = *(s32 *)((u8 *)temp_v1 + 0) != 0;
    return 1;
}

/* Similar function already in C: Scr_CmdSetFighterPair1AD2 (src/unk/unk_1CBD90.c), similarity 0.74.
 * It is the template below (not built). */
#if 0
int Scr_CmdSetFighterPair1AD2(void *unused, Arg *a) {
    int *p = a->p;
    char *t = gBattle->tbl[p[2]];
    s32 b = p[0];
    *(s16 *)(t + 0x1AD2) = p[1];
    *(s16 *)(t + 0x1AD4) = b;
    return 1;
}
#endif
