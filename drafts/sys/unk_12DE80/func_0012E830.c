/* Draft (not built): func_0012E830 at 0x0012E830, size 0x5C, segment sys/unk_12DE80 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required mwccps2.exe Compiler: 251: andi       $at, $at, 0x1 @ 174: var_f0 = *((var_a1 * 4) + D_0046FD0C);
 * Original: asm/nonmatchings/sys/unk_12DE80/func_0012E830.s */

// src/sys/unk_12DE80.c func_0012E830 cerr diff=-1/0
extern s32 D_0046FD0C;
f32 func_0012E830(s32 arg0) {
    f32 var_f0;
    s32 temp_a2;
    s32 var_a1;

    var_a1 = arg0 & 0x3FFF;
    temp_a2 = 0x4000 - var_a1;
    if (arg0 & 0x4000) {
        var_a1 = 0x4000 - var_a1;
    }
    var_f0 = *((var_a1 * 4) + D_0046FD0C);
    if (arg0 & 0x8000) {
        var_f0 = -var_f0;
    }
    if ((arg0 + 0x4000) & 0x8000) {

    }
    return var_f0;
}
