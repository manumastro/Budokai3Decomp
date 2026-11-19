/* Draft (not built): func_001CF600 at 0x001CF600, size 0x84, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CF600.s */

s32 func_001CF600(s32 unused_arg0, u8 *arg1, s32 unused_arg2, s32 unused_arg3, s32 arg4) {
    u32 temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;
    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 8);
    temp_s1 = gBattle->tbl[*(s32 *)((u8 *)temp_v0 + 0xC)];
    func_001C8A50(temp_s1, temp_s0, (s32)*(s16 *)((u8 *)(temp_s0 * 0x14 + *(s32 *)((u8 *)temp_s1 + 0x1CF8)) + 0xD6), *(s32 *)((u8 *)temp_v0 + 4), arg4);
    func_001C89A0(temp_s1, temp_s0);
    return 1;
}

/* Similar function already in C: Scr_CmdFighterSlotSetPair (src/unk/unk_1CBD90.c), similarity 0.62.
 * It is the template below (not built). */
#if 0
int Scr_CmdFighterSlotSetPair(void *unused, Arg *a) {
    int *p = a->p;
    s32 x = p[0];
    s32 j = p[1];
    char *t = gBattle->tbl[p[2]];
    char *s0 = t + j * 0x680 + 0x650;
    if (j == 0) {
        func_001E2190(t, x);
        func_001E3550(t);
    } else {
        func_001E7070(s0, x);
        func_001E8290(s0);
    }
    return 1;
}
#endif
