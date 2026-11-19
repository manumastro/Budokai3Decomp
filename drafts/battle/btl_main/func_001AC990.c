/* Draft (not built): func_001AC990 at 0x001AC990, size 0xEC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001AC990.s */

s32 func_001AC990(void) {
    BattleWork *temp_s1;
    s32 var_s3;
    u8 *temp_s0;
    u8 *var_s2;
    var_s3 = 0;
    temp_s1 = gBattle;
    temp_s0 = &temp_s1->unk0000[0x830];
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) > 0) {
        var_s2 = temp_s0;
        do {
            func_001D9480(var_s2);
            var_s3 += 1;
            var_s2 += 0x2020;
        }
        while (var_s3 < *(s32 *)((u8 *)temp_s1 + 0x88D8));
    }
    if (func_002CC4A0() == 4) {
        *(s32 *)((u8 *)temp_s1 + 0x8900) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x88FC) = 5;
        *(s32 *)((u8 *)temp_s1 + 0x8904) = (s32)*(s16 *)((u8 *)(*(s32 *)((u8 *)temp_s1 + 0x8900) * 0x2020 + temp_s0) + 0x13A4);
        return 1;
    }
    return 0;
}

/* Similar function already in C: func_001C8EE0 (src/battle/btl_main.c), similarity 0.67.
 * It is the template below (not built). */
#if 0
void func_001C8EE0(void) {
    BattleSlots *bw = (BattleSlots *)gBattle;
    Fighter *f0 = (Fighter *)((u8 *)bw + 0x830);
    s32 i = 0;
    Fighter *f;
    s32 j;

    if (0 < bw->numFighters) {
        f = f0;
        do {
            func_001C80E0(f, -1);
            func_001C8050(f, -1);
            i++;
            f = (Fighter *)((u8 *)f + 0x2020);
        } while (i < bw->numFighters);
    }
    func_001DA4C0();
    if (0 < bw->numFighters) {
        j = 0;
        do {
            func_001D9CA0(f0, 1);
            j++;
            f0 = (Fighter *)((u8 *)f0 + 0x2020);
        } while (j < bw->numFighters);
    }
    amTask_KillGroup(0x20, 0x40000000, 1);
    func_001C90D0();
}
#endif
