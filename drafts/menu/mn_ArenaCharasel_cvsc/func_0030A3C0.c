/* Draft (not built): func_0030A3C0 at 0x0030A3C0, size 0x180, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x174, original 0x180
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030A3C0.s */

// src/menu/mn_ArenaCharasel_cvsc.c func_0030A3C0 size diff=57/93
s64 ArenaList_GetF0(s32);
s32 ArenaRegCharList_Start(s32, s32, s32);
s32 Help_TaskKill(s32);
s64 func_0027DAB0(void *);
void *func_0027E2D0(s32, s32, s32, s32);
extern s16 D_005C4122;
extern void func_0027E120(void *);
extern void func_0030A5E0(void);
void func_0030A3C0(u8 *arg0) {
    u8 *sp4C;
    s32 *var_v1_2;
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
    sp4C = *(u8 **)((u8 *)temp_s0 + 0x1C);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    temp_s2 = sp4C;
    if (temp_s2 != NULL) {
        func_0022C060(temp_s2, 0x3F800000);
        func_0022CD00(temp_s2);
    }
    if (*(u8 *)((u8 *)temp_s0 + 0x19) != 0) {
        if (((s64) (ArenaList_GetF0(*(s32 *)((u8 *)temp_s0 + 0x10)) << 0x30) >> 0x30) == 7) {
            Help_TaskKill(*(s32 *)((u8 *)temp_s0 + 0x10));
            *(s32 *)((u8 *)temp_s0 + 0x10) = 0;
            *(u8 **)((u8 *)temp_s0 + 8) = func_0027E2D0(5, 6, 0, -1);
            *(u8 *)((u8 *)temp_s0 + 0x19) = 0U;
            goto block_10;
        }
    } else if (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 8)) << 0x38) >> 0x38) >= 7) {
        func_0027E120(*(u8 **)((u8 *)temp_s0 + 8));
        *(u8 **)((u8 *)temp_s0 + 8) = NULL;
        *(s32 *)((u8 *)temp_s0 + 0x10) = ArenaRegCharList_Start(5, 0, 0xFF);
        *(u8 *)((u8 *)temp_s0 + 0x19) = 1U;
block_10:
        var_v1_2 = (s32 *)(&func_0030A5E0);
        D_005C4122 = (s16) *(u8 *)((u8 *)temp_s0 + 0x19);
        if (&func_0030A5E0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
