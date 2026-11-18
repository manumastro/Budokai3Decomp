/* Draft (not built): func_002C27B0 at 0x002C27B0, size 0xE4, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_status/func_002C27B0.s */

// src/story/str_status.c func_002C27B0 diff diff=31/57
extern void SeReady_Start();
void func_002C27B0(u8 *arg0) {
    void (*var_v1)();
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
    SeReady_Start();
    var_v1 = func_002C2560;
    *(u8 *)((u8 *)temp_s0 + 0xAC) = (u8) (*(u8 *)((u8 *)temp_s0 + 0xAC) + 1);
    *(s32 *)((u8 *)temp_s0 + 0xC4) = 0x41F00000;
    *(s8 *)((u8 *)temp_s0 + 0xAF) = 9;
    if (func_002C2560 == NULL) {
        var_v1 = NULL;
    }
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
}
