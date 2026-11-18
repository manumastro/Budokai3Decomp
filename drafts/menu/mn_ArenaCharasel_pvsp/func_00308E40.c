/* Draft (not built): func_00308E40 at 0x00308E40, size 0x6C, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); onversion from 'int' to 'void *' @ 172: if (((s64) (func_0027DAB0(*(s32 *)((u8 *)arg0 + 0x30)) << 0x38) >> 0x38) == 4) {
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00308E40.s */

// src/menu/mn_ArenaCharasel_pvsp.c func_00308E40 cerr diff=-1/0
void func_00308E40(u8 *arg0) {
    void (*var_v1)();
    u8 *temp_s1;

    temp_s1 = arg0 + 0x30;
    if (((s64) (func_0027DAB0(*(s32 *)((u8 *)arg0 + 0x30)) << 0x38) >> 0x38) == 4) {
        var_v1 = func_00308EB0;
        *(s8 *)((u8 *)(*(u8 *)((u8 *)temp_s1 + 0xD) + *(s32 *)((u8 *)temp_s1 + 8)) + 0x11) = 0;
        if (func_00308EB0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
