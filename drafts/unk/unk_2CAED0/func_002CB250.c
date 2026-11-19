/* Draft (not built): func_002CB250 at 0x002CB250, size 0xB0, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 14 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CB250.s */

// src/unk/unk_2CAED0.c func_002CB250 diff diff=14/44
s32 func_002CB250(void) {
    u8 *temp_a0;
    u8 *temp_a1;

    temp_a0 = *(u8 **)((u8 *)gTutWork + 0);
    temp_a1 = (unsigned char *)(gTutWork + 0x20);
    if (*(s16 *)((u8 *)temp_a0 + 0xCAC) == 9) {
        *(f32 *)((u8 *)gTutWork + 0x20) = (f32) (*(f32 *)((u8 *)gTutWork + 0x20) + *(f32 *)((u8 *)gBattle + 0x88F0));
    }
    if (*(s16 *)((u8 *)temp_a0 + 0xCAC) == 0xB) {
        *(f32 *)((u8 *)temp_a1 + 4) = (f32) (*(f32 *)((u8 *)temp_a1 + 4) + *(f32 *)((u8 *)gBattle + 0x88F0));
    }
    if (!(*(f32 *)((u8 *)gTutWork + 0x20) < 30.0f) && !(*(f32 *)((u8 *)temp_a1 + 4) < 30.0f)) {
        return 1;
    }
    return 0;
}

/* Similar function already in C: func_002CB370 (src/unk/unk_2CAED0.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
s32 func_002CB370(void) {
    TutWork *w = gTutWork;
    f32 *a1 = (f32 *)&w->f20;
    char *c = (char *)w->chr;

    if (*(s16 *)(c + 0xCAC) == 2) {
        a1[0] = a1[0] + *(f32 *)(gBattle + 0x88F0);
    }
    if (*(s16 *)(c + 0xCAC) == 3) {
        a1[1] = a1[1] + *(f32 *)(gBattle + 0x88F0);
    }
    if (a1[0] >= 60.0f && a1[1] >= 60.0f) {
        return 1;
    }
    return 0;
}
#endif
