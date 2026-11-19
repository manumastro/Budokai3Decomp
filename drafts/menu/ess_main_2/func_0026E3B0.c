/* Draft (not built): func_0026E3B0 at 0x0026E3B0, size 0xF0, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E3B0.s */

extern void amCdFs_Close(void *, s32);
s32 amTask_KillGroup(s32, s32, s32);
extern s32 D_0058F5D0;
extern void amCdFs_ReleaseCache(void *);
extern void StrStatus_Exit();
extern void Help_Exit();
extern void Save_Exit();
void func_0026E3B0(void) {
    s32 var_s1;
    s32 *var_s0;
    s32 temp_a0;
    u8 *temp_a0_2;
    StrStatus_Exit(*(s32 *)((u8 *)gEssMain + 0x20));
    Help_Exit();
    Save_Exit();
    amTask_KillGroup(0x200, 1, 0);
    var_s1 = 0;
    var_s0 = NULL;
    do {
        temp_a0 = *(s32 *)((s32)gEssMain + (s32)var_s0);
        if (temp_a0 != 0) {
            amCdFs_Close((void *)temp_a0, 0);
        }
        var_s1 += 1;
        var_s0 += 4;
    }
    while (var_s1 < 3);
    var_s1 = 0;
    if (0 < D_0058F5D0) {
        var_s0 = &D_0058F5D0;
        var_s0 = &D_0058F5D0;
        do {
            amCdFs_ReleaseCache(*(u8 **)((u8 *)var_s0 + 4));
            var_s1 += 1;
            var_s0 += 4;
        }
        while (var_s1 < D_0058F5D0);
    }
    temp_a0_2 = *(u8 **)((u8 *)gEssMain + 0x270);
    if (temp_a0_2 != NULL) {
        amHeap_Free(temp_a0_2);
    }
    amHeap_Free(gEssMain);
    gEssMain = NULL;
}

/* Similar function already in C: TourMap_Exit (src/menu/mn_TourMap.c), similarity 0.67.
 * It is the template below (not built). */
#if 0
void TourMap_Exit(void) {
    s32 s1;
    s32 s0;

    Zenie_Release();
    if (*(s32 *)(*(u8 **)((u8 *)gTourMap + 0x40) + 0x38) != 0) {
        Obj_ResetF38(*(void **)(*(u8 **)((u8 *)gTourMap + 0x40) + 0x38));
    }
    s1 = 0;
    s0 = 0;
    do {
        if (*(void **)((u8 *)gTourMap + s0) != 0) {
            amCdFs_Close(*(void **)((u8 *)gTourMap + s0), 0);
        }
        s1++;
        s0 += 4;
    } while (s1 < 9);
    amTask_KillGroup(0x200, 0x2000, 0);
    s1 = 0;
    s0 = 0;
    do {
        if (*(void **)((u8 *)gTourMap + s0 + 0x74) != 0) {
            func_0029E450(*(void **)((u8 *)gTourMap + s0 + 0x74));
            *(s32 *)((u8 *)gTourMap + s0 + 0x74) = 0;
        }
        s1++;
        s0 += 4;
    } while (s1 < 2);
    amHeap_Free((void *)gTourMap);
    gTourMap = 0;
}
#endif
