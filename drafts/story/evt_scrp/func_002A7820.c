/* Draft (not built): func_002A7820 at 0x002A7820, size 0x118, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 19 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x110, original 0x118
 * Original: asm/nonmatchings/story/evt_scrp/func_002A7820.s */

// src/story/evt_scrp.c func_002A7820 size diff=19/68
void func_002A7820(u8 *arg0) {
    s32 temp_v0;
    void (*var_v1)();
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = (u8 *)(gEvtWork);
    func_00133B50(0, 0);
    A2d_SetMode((s32)(D_004E05F8));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x78);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x890000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x890000);
    D_00470238 = 0;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 0x80);
    func_00228430(0);
    func_00228430(0);
    func_0022C060((s32)(temp_s2), 0x3F800000);
    func_00228410();
    func_0022CD00((s32)((void *)(temp_s2)));
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
