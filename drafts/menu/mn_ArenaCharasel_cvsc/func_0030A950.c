/* Draft (not built): func_0030A950 at 0x0030A950, size 0xE8, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030A950.s */

extern f32 gFrameDelta;
extern void func_0030A5E0(void);
void func_0030A950(u8 *arg0) {
    u8 **var_v1;
    u8 *sp4C;
    s32 *var_v1_2;
    f32 temp_f1;
    s32 temp_a0;
    u32 var_v0;
    u8 *temp_s0;
    u8 *temp_s2;
    var_v0 = 4;
    var_v1 = &sp4C;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        }
        while (var_v0 != 0);
    }
    sp4C = *(u8 **)((u8 *)temp_s0 + 0x1C);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    D_00470238 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    temp_s2 = sp4C;
    if (temp_s2 != NULL) {
        func_0022C060(temp_s2, 1.0f);
        func_0022CD00(temp_s2);
    }
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x24) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x24) = temp_f1;
    if (temp_f1 <= 0.0f) {
        var_v1_2 = (int *)&func_0030A5E0;
        *(f32 *)((u8 *)temp_s0 + 0x24) = 180.0f;
        if (&func_0030A5E0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
