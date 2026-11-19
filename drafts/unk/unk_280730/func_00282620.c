/* Draft (not built): func_00282620 at 0x00282620, size 0xEC, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_280730/func_00282620.s */

s32 func_0022D860(s32, s32);
extern f32 D_00470038;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gCsSubStat;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_00281E40(void);
void func_00282620(u8 *arg0) {
    u8 sp[0x400];
    f32 sp5C;
    s32 *var_v1;
    f32 temp_f1;
    u8 temp_s3;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002811D0(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0xC) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s8 *)((u8 *)temp_s0 + 2) = 2;
        *(s8 *)((u8 *)temp_s0 + 8) = 2;
        temp_s2 = gCsSubStat;
        sp5C = D_00470038;
        temp_s3 = *(s8 *)((u8 *)temp_s0 + 4);
        temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
        D_00470704 = temp_a0;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x6000);
        D_00470238 = 0;
        *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)*(u8 **)((u8 *)temp_s2 + 8) + 0x14) + *(s16 *)((u8 *)(((s64)((s64)temp_s3 << 0x30) >> 0x30) * 2 + sp) + 0x5C) * 4), 0);
        var_v1 = (int *)&func_00281E40;
        if (&func_00281E40 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002E2E50 (src/unk/unk_2E2290.c), similarity 0.76.
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
