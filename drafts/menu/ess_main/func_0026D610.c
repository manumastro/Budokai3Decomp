/* Draft (not built): func_0026D610 at 0x0026D610, size 0x8C, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_main/func_0026D610.s */

// src/menu/ess_main.c func_0026D610 diff diff=22/35
void func_0026D610(u8 *arg0) {
    s32 *var_a2;
    s32 var_a3;

    var_a3 = 0;
    if (D_0058F5D0[0] > 0) {
        var_a2 = (int *)(&D_0058F5D0);
loop_2:
        if ((s32)(*(s32 *)((u8 *)var_a2 + 4)) == (s32)(arg0)) {
            amCdFs_ReleaseCache((s32)(arg0));
            return;
        }
        var_a3 += 1;
        var_a2 += 4;
        if (var_a3 >= D_0058F5D0[0]) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    *(((u8 *)&D_0058F5D4) + (((s32)(D_0058F5D0)) * 4)) = (unsigned char)(arg0);
    D_0058F5D0[0] += 1;
}
