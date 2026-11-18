/* Draft (not built): func_003090F0 at 0x003090F0, size 0x160, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 35 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x158, original 0x160
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_003090F0.s */

// src/menu/mn_ArenaCharasel_pvsp.c func_003090F0 size diff=35/86
extern u8 *D_0047098C;
s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u8 D_004B4B56;
extern s16 D_005C9F04;
extern f32 gFrameDelta;
extern void func_002D1C50(void);
extern void func_0022CD00(void *);
extern void ArenaStageSel_Start();
extern void func_0028DF20(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_003090F0(u8 *arg0) {
    u8 *sp4C;
    f32 temp_f2;
    s32 var_v0;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_f2 = *(f32 *)((u8 *)temp_s0 + 0x1C);
    temp_s1 = D_0047098C;
    if (temp_f2 < 1.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x1C) = (f32) (temp_f2 + (0.05f * gFrameDelta));
    }
    if (!(*(f32 *)((u8 *)temp_s0 + 0x1C) <= 1.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0x1C) = 1.0f;
    }
    var_v1 = &sp4C;
    if (*(f32 *)((u8 *)temp_s0 + 0x1C) < 1.0f) {
        var_v0 = 4;
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
        temp_v1 = *(u8 **)((u8 *)temp_s1 + 0x10);
        *(s32 *)((u8 *)temp_v1 + 0x30) = 0;
        *(s32 *)((u8 *)temp_v1 + 0x34) = 0;
        *(s32 *)((u8 *)temp_v1 + 0x38) = 0;
        *(f32 *)((u8 *)temp_v1 + 0x3C) = (f32) *(f32 *)((u8 *)temp_s0 + 0x1C);
        return;
    }
    func_0028DF20();
    D_005C9F04 = -1;
    ArenaStageSel_Start(D_004B4B56);
    func_002D1C50();
}
