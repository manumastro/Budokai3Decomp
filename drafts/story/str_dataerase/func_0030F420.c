/* Draft (not built): func_0030F420 at 0x0030F420, size 0x140, segment story/str_dataerase (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); from 'unsigned char *' to 'int' @ 179: *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x14)) + 0x14)))))), 0);
 * Original: asm/nonmatchings/story/str_dataerase/func_0030F420.s */

// src/story/str_dataerase.c func_0030F420 cerr diff=-1/0
extern s32 func_0022D860(s32, f32);
extern void func_0022D0E0(s32, s32);
void func_0030F420(u8 *arg0) {
    s32 *var_v0;
    f32 temp_f1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x10) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x10) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x10) = 20.0f;
        temp_s2 = (u8 *)(D_0047099C);
        temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x6000);
        D_00470238 = 0;
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0);
        if (temp_a0_2 != NULL) {
            func_0022D0E0((s32)(temp_a0_2), 1);
        }
        *(u8 **)((u8 *)temp_s0 + 0) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x14)) + 0x14))))))), 0);
        var_v0 = (s32 *)(&func_0030F350);
        if (&func_0030F350 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
    }
    temp_s1 = (u8 *)(D_0047099C);
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0_3 = *(u8 **)((u8 *)temp_s1 + 0xC);
    D_00470704 = (s32)(temp_a0_3);
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0x6000);
    D_00470238 = 0;
    temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 0);
    if (temp_a0_4 != NULL) {
        func_0022C060((s32)(temp_a0_4), 0x3F800000);
        func_0022CD00((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 0))));
    }
    temp_a0_5 = *(u8 **)((u8 *)temp_s0 + 4);
    if (temp_a0_5 != NULL) {
        func_0022C060((s32)(temp_a0_5), 0x3F800000);
        func_0022CD00((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 4))));
    }
}
