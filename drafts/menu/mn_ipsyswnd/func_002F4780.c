/* Draft (not built): func_002F4780 at 0x002F4780, size 0x100, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4780.s */

extern void *gInputName;
extern void func_0022D0E0(void *, s32);
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
s32 func_0022D670(s32, s32);
extern void func_002F44E0(void);
void func_002F4780(u8 *arg0) {
    u8 *temp_s2;
    s32 *var_v1;
    f32 temp_f1;
    s16 temp_a0;
    s32 temp_a0_3;
    u8 *temp_a0_2;
    u8 *temp_s0;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002F4330(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x14) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x14) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s16 *)((u8 *)temp_s0 + 0xE) = 2;
        temp_a0 = *(s16 *)((u8 *)temp_s0 + 0xC);
        temp_s2 = gInputName;
        if (temp_a0 != 6 && temp_a0 != 4 && temp_a0 != 0) {
        } else {
            temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0x10);
            D_00470704 = (int)temp_a0_2;
            D_0047070C = 0x5000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)temp_a0_2, 0x5000);
            D_00470238 = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 8);
            if (temp_a0_3 != 0) {
                func_0022D0E0((void *)temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s0 + 8) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)*(u8 **)((u8 *)temp_s2 + 0xC) + 0x1C) + (*(s16 *)((u8 *)temp_s0 + 0x10) + 0x40) * 4), 0);
        }
        var_v1 = (int *)&func_002F44E0;
        if (&func_002F44E0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002E2E50 (src/unk/unk_2E2290.c), similarity 0.69.
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
