/* Draft (not built): func_001ED020 at 0x001ED020, size 0x98, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btb_draw/func_001ED020.s */

// src/battle/btb_draw.c func_001ED020 diff diff=13/38
extern void SceneSw_LoadMenu8(Task *);
s32 func_0030F0E0(s32, s32);
void func_001ED020(u8 *arg0) {
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_v1;

    if (D_004B4BB1 != 0) {
        func_001EA740((s32)(D_004B4BB2));
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if ((var_v1 == 0) && (gSceneReady != 0)) {
        temp_a1 = gSceneNext;
        temp_a0 = gSceneQueued;
        var_v0 = (s32 *)(&SceneSw_LoadMenu8);
        gSceneReady = 0;
        gSceneDone = 0;
        *D_004B4B40 = (s8) temp_a1;
        gSceneNext = temp_a0;
        gSceneQueued = -1;
        if (&SceneSw_LoadMenu8 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        func_0030F0E0(temp_a0, temp_a1);
    }
}
