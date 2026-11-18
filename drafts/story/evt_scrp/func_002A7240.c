/* Draft (not built): func_002A7240 at 0x002A7240, size 0x1B4, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ointer/array required @ 2368: *(u8 **)((u8 *)temp_s0 + 0x74)) + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0x94) * 4)), temp_f0);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A7240.s */

// src/story/evt_scrp.c func_002A7240 cerr diff=-1/0
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
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;

    temp_s0 = (u8 *)(gEvtWork);
    func_00133B50(0, 0);
    A2d_SetMode(*(s16 *)((u8 *)D_004E05DC + 0x1C));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x78);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x890100;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x890100);
    D_00470238 = 0;
    temp_s1 = *(u8 **)((u8 *)temp_s0 + 0x84);
    func_00228430(0);
    func_00228430(0);
    func_0022C060((s32)(temp_s1), 0x3F800000);
    func_00228410();
    func_0022CD00((s32)((void *)(temp_s1)));
    func_00228410();
    A2d_FlushList();
    temp_f0 = *(f32 *)((u8 *)temp_s0 + 0x98) + func_002B06A0();
    *(f32 *)((u8 *)temp_s0 + 0x98) = temp_f0;
    func_0022BC30(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0x94) * 4)), temp_f0);
    if (!(*(f32 *)((u8 *)temp_s0 + 0x98) < 30.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0x98) = 0.0f;
        temp_s1_2 = (u8 *)(gEvtWork);
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
            Fade_SetRequest(0xA, 0, 0);
            func_002987E0(3, 0);
            func_0026DC80(D_004B4B40, &D_004DFB19);
        }
    }
}
