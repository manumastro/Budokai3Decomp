/* Draft (not built): func_00308C40 at 0x00308C40, size 0x104, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); version from 'int' to 'void *' @ 118: if (((s64) (ArenaList_GetF2(*(s32 *)((u8 *)arg0 + 0x34)) << 0x30) >> 0x30) == 1) {
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00308C40.s */

// src/menu/mn_ArenaCharasel_pvsp.c func_00308C40 cerr diff=-1/0
void func_00308C40(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x30;
    if (((s64) (ArenaList_GetF2(*(s32 *)((u8 *)arg0 + 0x34)) << 0x30) >> 0x30) == 1) {
        var_v1 = (s32 *)(&func_00308BD0);
        *(s8 *)((u8 *)(*(u8 *)((u8 *)temp_s0 + 0xD) + *(s32 *)((u8 *)temp_s0 + 8)) + 0x11) = 1;
        if (&func_00308BD0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if ((((s64) (ArenaList_GetF0(*(u8 **)((u8 *)temp_s0 + 4)) << 0x30) >> 0x30) != 5) && (*(D_00492FCE + (*(u8 *)((u8 *)temp_s0 + 0xD) * 0xB8)) & 0x300)) {
        *(s8 *)((u8 *)temp_s0 + 0xE) = 0;
        *(&D_005C4122 + (*(u8 *)((u8 *)temp_s0 + 0xD) * 2)) = 0;
        func_0030D300(*(u8 **)((u8 *)temp_s0 + 4));
        var_v1_2 = (s32 *)(&func_00308AF0);
        if (&func_00308AF0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
