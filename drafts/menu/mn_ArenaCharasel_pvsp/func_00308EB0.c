/* Draft (not built): func_00308EB0 at 0x00308EB0, size 0x144, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x170, original 0x144
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00308EB0.s */

// src/menu/mn_ArenaCharasel_pvsp.c func_00308EB0 size diff=46/92
void func_00308EB0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x30;
    if (((s64) (func_0027DAA0(*(u8 **)((u8 *)arg0 + 0x30)) << 0x38) >> 0x38) == 1) {
        var_v1 = (s32 *)(&func_00308E40);
        *(s8 *)((u8 *)(*(u8 *)((u8 *)temp_s0 + 0xD) + *(s32 *)((u8 *)temp_s0 + 8)) + 0x11) = 1;
        if (&func_00308E40 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    *(&D_005C4126 + (*(u8 *)((u8 *)temp_s0 + 0xD) * 2)) = func_0027DAE0(*(u8 **)((u8 *)arg0 + 0x30));
    *(&D_005C412A + (*(u8 *)((u8 *)temp_s0 + 0xD) * 2)) = func_0027DAD0(*(u8 **)((u8 *)arg0 + 0x30));
    if ((((s64) (func_0027DAB0(*(u8 **)((u8 *)arg0 + 0x30)) << 0x38) >> 0x38) != 5) && (*(D_00492FCE + (*(u8 *)((u8 *)temp_s0 + 0xD) * 0xB8)) & 0x300)) {
        *(s8 *)((u8 *)temp_s0 + 0xE) = 1;
        *(&D_005C4122 + (*(u8 *)((u8 *)temp_s0 + 0xD) * 2)) = 1;
        func_0027DB20(*(u8 **)((u8 *)arg0 + 0x30));
        var_v1_2 = (s32 *)(&func_00308DA0);
        if (&func_00308DA0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
