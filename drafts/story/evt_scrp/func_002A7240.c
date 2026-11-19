/* Draft (not built): func_002A7240 at 0x002A7240, size 0x1B4, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x18C, original 0x1B4
 * Original: asm/nonmatchings/story/evt_scrp/func_002A7240.s */

// src/story/evt_scrp.c func_002A7240 size diff=54/99
extern void func_00133B50(s32, s32);
extern void A2d_SetMode(s32);
extern void A2d_FlushList(void);
extern s32 func_0022BC30(s32, f32);
s32 func_0026DC80(s8 *, s32 *);
extern s32 D_004DFB19;
extern s32 D_005AB390;
extern char D_004B4B40[];
extern char D_004E05DC[];
void func_002A7240(void) {
    f32 temp_f0;
    s32 *temp_s0;
    s32 *temp_s1_2;
    s32 temp_a0;
    s32 temp_s1;

    temp_s0 = gEvtWork;
    func_00133B50(0, 0);
    A2d_SetMode((s32) *(s16 *)((u8 *)D_004E05DC + 0x1C));
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x78);
    D_00470704 = temp_a0;
    D_0047070C = 0x890100;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x890100);
    D_00470238 = 0;
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 0x84);
    func_00228430(0);
    func_00228430(0);
    func_0022C060(temp_s1, 1.0f);
    func_00228410();
    func_0022CD00(temp_s1);
    func_00228410();
    A2d_FlushList();
    temp_f0 = *(f32 *)((u8 *)temp_s0 + 0x98) + func_002B06A0();
    *(f32 *)((u8 *)temp_s0 + 0x98) = temp_f0;
    func_0022BC30(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0x94) * 4)), temp_f0);
    if (!(*(f32 *)((u8 *)temp_s0 + 0x98) < 30.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0x98) = 0.0f;
        temp_s1_2 = gEvtWork;
        if (*(s32 *)((u8 *)temp_s1_2 + 8) != 0) {
            func_002A5B00();
        }
        if (*(s32 *)((u8 *)temp_s1_2 + 0x124) >= 0) {
            func_0029A9F0();
        }
        if (*(s32 *)((u8 *)temp_s0 + 0x7C) != 0) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            *(s32 *)((u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210) + 0x80) + 0x11D0) = (s32) D_005AB390;
            Fade_SetRequest(0xA, NULL, 0);
            func_002987E0(3, 0);
            func_0026DC80((s8 *)(D_004B4B40), (s32 *)(&D_004DFB19));
        }
    }
}

/* Similar function already in C: func_002A76E0 (src/story/evt_scrp.c), similarity 0.68.
 * It is the template below (not built). */
#if 0
void func_002A76E0(void) {
    s32 *s0 = gEvtWork;
    s32 s1;
    s32 *pp;
    s32 *tbl;
    s32 v;
    f32 t;
    f32 f;
    func_00133B50(0, 0);
    A2d_SetMode(D_004E05F8[0]);
    v = s0[0x78 / 4];
    D_00470704 = v;
    D_0047070C = 0x890000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x890000);
    D_00470238 = 0;
    s1 = s0[0x84 / 4];
    func_00228430(0);
    func_00228430(0);
    func_0022C060(s1, 1.0f);
    func_00228410();
    func_0022CD00(s1);
    func_00228410();
    A2d_FlushList();
    t = func_002B06A0();
    *(f32 *)&s0[0x98 / 4] = *(f32 *)&s0[0x98 / 4] + t;
    pp = (s32 *)s0[0x74 / 4];
    tbl = *(s32 **)((char *)pp + 0x1C);
    func_0022BC30(tbl[s0[0x94 / 4]], *(f32 *)&s0[0x98 / 4]);
    f = *(f32 *)&s0[0x98 / 4];
    if (!(f < 30.0f)) {
        Save_Exit();
        s0[0x7C / 4] = 0;
        s0[0x98 / 4] = 0;
        s0 = gEvtWork;
        if (s0[0x8 / 4] != 0) {
            func_002A5B00();
        }
        if (s0[0x124 / 4] >= 0) {
            func_0029A9F0();
        }
    }
}
#endif
