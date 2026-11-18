/* Draft (not built): func_002A2C70 at 0x002A2C70, size 0x1E0, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'int[]' = 'int' @ 707: B0(var_s0, *(s8 *)((u8 *)temp_s2 + 0x11E2), *(s8 *)((u8 *)temp_s2 + 0x11E3), 5);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A2C70.s */

// src/story/evt_scrp.c func_002A2C70 cerr diff=-1/0
s32 func_001F04E0(s8);
s32 func_0029E9B0(s8, s8, s8, s32);
extern s32 D_00455920;
extern f32 D_0046FD80;
extern void func_0029D6C0(void *);
s32 func_002A2C70(u8 *arg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 *var_v1;
    s32 temp_s0;
    s32 var_v0;
    s8 var_s0;
    s8 var_s1;
    u8 *temp_s1;
    u8 *temp_s2;

    var_s0 = (s8)(D_00511450);
    if (var_s0 < 0x16) {

    } else if (var_s0 < 0x1A) {
        var_s0 += 5;
    } else {
        var_s0 += 6;
    }
    var_v1 = &sp60;
    var_v0 = 0x10;
    temp_s1 = (u8 *)(&D_00455920 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1C));
    temp_s2 = (u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210) + 0x80);
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = *(f32 *)((u8 *)temp_s1 + 0x10);
    sp64 = *(f32 *)((u8 *)temp_s1 + 0x14);
    sp68 = *(f32 *)((u8 *)temp_s1 + 0x18);
    func_0029D6C0(&sp60);
    D_0046FD80 = *(f32 *)((u8 *)temp_s1 + 0xC);
    D_005AB7F0 = func_0029E9B0(var_s0, *(s8 *)((u8 *)temp_s2 + 0x11E2), *(s8 *)((u8 *)temp_s2 + 0x11E3), 5);
    func_001F04E0(*(s8 *)((u8 *)D_004E6560 + 0x2AEF0));
    *(s32 **)((u8 *)arg0 + 0x10) = &func_002A2BB0;
    var_s1 = (s8)(D_00511450);
    if (var_s1 < 0x16) {

    } else if (var_s1 < 0x1A) {
        var_s1 += 5;
    } else {
        var_s1 += 6;
    }
    temp_s0 = (s32)(D_005AB7F0);
    if (func_0029E7F0(temp_s0) == 0) {
        return 3;
    }
    *(s32 **)((u8 *)arg0 + 0x10) = NULL;
    func_0029E610(temp_s0);
    func_0029E120(temp_s0, var_s1, 1, 0x3F800000, 0);
    return 1;
}
