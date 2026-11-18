/* Draft (not built): func_002A75C0 at 0x002A75C0, size 0x118, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  2473: *(u8 **)((u8 *)temp_s0 + 0x74)) + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0x90) * 4)), *(f32 *)((u8 *)temp_s0 + 0x98));
 * Original: asm/nonmatchings/story/evt_scrp/func_002A75C0.s */

// src/story/evt_scrp.c func_002A75C0 cerr diff=-1/0
extern s32 func_0022BC30(s32, f32);
void func_002A75C0(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = (u8 *)(gEvtWork);
    func_00133B50(0, 0);
    A2d_SetMode((s32)(D_004E05F8));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x78);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x890100;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x890100);
    D_00470238 = 0;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 0x80);
    func_00228430(0);
    func_00228430(0);
    func_0022C060((s32)(temp_s2), 0x3F800000);
    func_00228410();
    func_0022CD00((s32)((void *)(temp_s2)));
    func_00228410();
    A2d_FlushList();
    *(f32 *)((u8 *)temp_s0 + 0x98) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x98) + func_002B06A0());
    func_0022BC30(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0x90) * 4)), *(f32 *)((u8 *)temp_s0 + 0x98));
    if (!(*(f32 *)((u8 *)temp_s0 + 0x98) < 30.0f)) {
        var_v1 = (s32 *)(&func_002A7400);
        *(f32 *)((u8 *)temp_s0 + 0x98) = 0.0f;
        if (&func_002A7400 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
