/* Draft (not built): func_0025BE50 at 0x0025BE50, size 0x8C, segment sys/amCdFs (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 19 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x84, original 0x8C
 * Original: asm/nonmatchings/sys/amCdFs/func_0025BE50.s */

// src/sys/amCdFs.c func_0025BE50 size diff=19/33
void func_0025BE50(void) {
    amTask_Create(Wave_TaskMain, 0, 0x3800, 0x400, 0, 0);
    amTask_Create(Wave_TaskDraw, 0, 0x3900, 0x400, 0, 0);
    amTask_Create(Wave_TaskAfterDraw, 0, 0x39F0, 0x400, 0, 0);
}

/* Similar function already in C: Hm_Start (src/unk/unk_20A4D0.c), similarity 0.83.
 * It is the template below (not built). */
#if 0
void Hm_Start(void) {
    amTask_Create((void *)Hm_TaskMain, 0, 0x5A00, 0x400, 0x40002, D_00469CF8);
    amTask_Create((void *)func_00216D20, 0, 0x3780, 0x400, 0x40002, D_00469D00);
}
#endif
