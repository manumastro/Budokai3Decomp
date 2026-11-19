/* Draft (not built): func_001ED020 at 0x001ED020, size 0x98, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 11 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btb_draw/func_001ED020.s */

// src/battle/btb_draw.c func_001ED020 diff diff=11/38
extern void SceneSw_LoadMenu8(Task *);
extern void func_0030F0E0(void);
void func_001ED020(u8 *arg0) {
    s32 var_v1;
    void (*var_v0)(Task *);

    if (*D_004B4BB1 != 0) {
        func_001EA740((s32) *D_004B4BB2);
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if ((var_v1 == 0) && (gSceneReady != 0)) {
        var_v0 = SceneSw_LoadMenu8;
        gSceneReady = 0;
        gSceneDone = 0;
        *D_004B4B40 = (s8) gSceneNext;
        gSceneNext = gSceneQueued;
        gSceneQueued = -1;
        if (SceneSw_LoadMenu8 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)(Task *))((u8 *)arg0 + 0x1C) = var_v0;
        func_0030F0E0();
    }
}

/* Similar function already in C: SceneSw_CommitBoot (src/battle/btb_draw.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void SceneSw_CommitBoot(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, SceneSw_LoadOpening);
            Boot_Exit();
        }
    }
}
#endif
