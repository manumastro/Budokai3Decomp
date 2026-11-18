/* Draft (not built): func_002C1BC0 at 0x002C1BC0, size 0x130, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'int' mwccps2.exe Compiler: @ 1370: if (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 0xA0)) << 0x38) >> 0x38) >= 7) {
 * Original: asm/nonmatchings/story/str_status/func_002C1BC0.s */

// src/story/str_status.c func_002C1BC0 cerr diff=-1/0
void func_002C1BC0(u8 *arg0) {
    s32 *var_v1;
    u8 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x2000);
    D_00470238 = 0;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 8);
    if (temp_s2 != NULL) {
        func_0022C060((s32)(temp_s2), 0x3F800000);
        func_0022CD00((s32)((void *)(temp_s2)));
    }
    func_002C0860((s32 *)(temp_s0));
    A2d_FlushList();
    func_00133B50(0, 0);
    if (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 0xA0)) << 0x38) >> 0x38) >= 7) {
        func_0027E120((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 0xA0))));
        *(u8 **)((u8 *)temp_s0 + 0xA0) = NULL;
        temp_v1 = *(u8 *)((u8 *)temp_s0 + 0xB2);
        *(u8 **)((u8 *)temp_s0 + 0xA0) = func_0027E2D0(3, 6, (temp_v1 + 1) & 0xFF, (s64) ((s64) temp_v1 << 0x38) >> 0x38, 0, 0, 0, 0);
        *(s32 *)((u8 *)temp_s0 + 0xC4) = 0x42700000;
        var_v1 = (s32 *)(&func_002C2470);
        if (&func_002C2470 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
