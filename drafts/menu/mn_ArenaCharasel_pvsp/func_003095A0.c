/* Draft (not built): func_003095A0 at 0x003095A0, size 0xE0, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_003095A0.s */

// src/menu/mn_ArenaCharasel_pvsp.c func_003095A0 diff diff=39/56
s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_00309250(void);
void func_003095A0(u8 *arg0) {
    u8 *sp4C;
    s32 *var_v1_2;
    f32 temp_f1;
    s32 var_v0;
    u8 **var_v1;
    u8 *temp_a0;
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
        } while (var_v0 != 0);
    }
    sp4C = *(u8 **)((u8 *)temp_s0 + 0x14);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    temp_s2 = sp4C;
    if (temp_s2 != NULL) {
        func_0022C060(temp_s2, 0x3F800000);
        func_0022CD00(temp_s2);
    }
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x18) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x18) = temp_f1;
    if (temp_f1 <= 0.0f) {
        var_v1_2 = (s32 *)(&func_00309250);
        if (&func_00309250 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
