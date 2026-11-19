/* Draft (not built): func_0030C8F0 at 0x0030C8F0, size 0xD0, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 19 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030C8F0.s */

s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gArenaRegCharList;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0030C9C0(void);
void func_0030C8F0(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a0_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_0030BFC0((Part30C *)temp_s0);
    func_0030B2E0((Part30C *)temp_s0);
    if (*(s16 *)((u8 *)temp_s0 + 0) != 5) {
        *(s16 *)((u8 *)temp_s0 + 2) = -1;
        *(s16 *)((u8 *)temp_s0 + 0) = 4;
        *(s16 *)((u8 *)temp_s0 + 4) = 2;
        temp_s2 = gArenaRegCharList;
        temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
        D_00470704 = temp_a0;
        D_0047070C = 0x4000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x4000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x64);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        *(s32 *)((u8 *)temp_s0 + 0x64) = func_0022D860(**(s32 **)((u8 *)*(u8 **)((u8 *)temp_s2 + 8) + 0x14), 0);
        var_v1 = (int *)&func_0030C9C0;
        if (&func_0030C9C0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002E2E50 (src/unk/unk_2E2290.c), similarity 0.68.
 * It is the template below (not built). */
#if 0
void func_002E2E50(Task *t) {
    Work *w = t->work;
    Global *g;
    void *v;
    s32 n;
    Pair16 tbl;

    func_002E2290(w);
    w->f8 -= gFrameDelta;
    if (w->f8 <= 0.0f) {
        w->f4 = 2;
        g = gCsSubArena;
        D_00470704 = v = g->fC;
        D_0047070C = n = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(v, n);
        D_00470238 = 0;
        tbl = D_0047018C;
        w->f1C = func_0022D860(g->f8->f14[tbl.v[w->f2]], 0.0f);
        TASK_SETFUNC(t, func_002E2850);
    }
}
#endif
