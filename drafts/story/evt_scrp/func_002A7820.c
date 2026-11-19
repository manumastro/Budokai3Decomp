/* Draft (not built): func_002A7820 at 0x002A7820, size 0x118, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x110, original 0x118
 * Original: asm/nonmatchings/story/evt_scrp/func_002A7820.s */

// src/story/evt_scrp.c func_002A7820 size diff=18/68
void func_002A7820(u8 *arg0) {
    s32 *temp_s0;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0;
    void (*var_v1)();

    temp_s0 = gEvtWork;
    func_00133B50(0, 0);
    A2d_SetMode((s32) *D_004E05F8);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x78);
    D_00470704 = temp_a0;
    D_0047070C = 0x890000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x890000);
    D_00470238 = 0;
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 0x80);
    func_00228430(0);
    func_00228430(0);
    func_0022C060(temp_s2, 1.0f);
    func_00228410();
    func_0022CD00(temp_s2);
    func_00228410();
    A2d_FlushList();
    temp_v0 = Save_GetState();
    switch (temp_v0) {                              /* irregular */
    case 4:
        Option_ProcessTable();
        /* fallthrough */
    case 3:
    case 5:
        var_v1 = func_002A76E0;
        if (func_002A76E0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        *(s32 *)((u8 *)temp_s0 + 0x98) = 0;
        return;
    }
}

/* Similar function already in C: func_002A7B50 (src/story/evt_scrp.c), similarity 0.66.
 * It is the template below (not built). */
#if 0
void func_002A7B50(struct Task *a0) {
    s32 *s0 = gEvtWork;
    s32 s2;
    s32 t;
    s32 v;
    void *fn;
    s8 x;
    char *base;
    f32 f;
    func_00133B50(0, 0);
    A2d_SetMode(D_004E05F8[0]);
    v = s0[0x78 / 4];
    D_00470704 = v;
    D_0047070C = 0x890000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x890000);
    D_00470238 = 0;
    s2 = s0[0x80 / 4];
    func_00228430(0);
    func_00228430(0);
    func_0022C060(s2, 1.0f);
    func_00228410();
    func_0022CD00(s2);
    func_00228410();
    A2d_FlushList();
    f = func_002B06A0();
    *(f32 *)&s0[0x98 / 4] = *(f32 *)&s0[0x98 / 4] + f;
    func_0022BC30(((s32 *)((s32 *)s0[0x74 / 4])[0x1C / 4])[s0[0x90 / 4]], *(f32 *)&s0[0x98 / 4]);
    f = *(f32 *)&s0[0x98 / 4];
    if (!(f < 30.0f)) {
        s0[0x98 / 4] = 0;
        fn = (void *)func_002A7940;
        *(s32 *)((char *)a0 + 0x1C) = (fn == 0) ? 0 : (s32)fn;
        t = D_004700A0;
        if (t != -1) {
            x = D_00511450[0];
            base = (char *)D_004E6560 + x * 4624;
            *(s32 *)(base + 0x1254) = t;
            *(s32 *)(base + 0x1258) = D_004700A0;
            D_004700A0 = -1;
            D_004708D4 = 1;
        }
    }
}
#endif
