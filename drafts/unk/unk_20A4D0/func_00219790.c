/* Draft (not built): func_00219790 at 0x00219790, size 0xD4, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  implicit conversion from 'int *' to 'float' mwccps2.exe Compiler: @ 4998: amAdx_SetVolume(0, var_a1, var_a2, temp_f22);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00219790.s */

// src/unk/unk_20A4D0.c func_00219790 cerr diff=-1/0
void func_00219790(s32 arg0, s32 *arg1) {
    s32 *temp_f20;
    s32 *temp_f21;
    s32 *temp_f22;
    s32 *var_a1;
    s32 var_a2;

    var_a1 = arg1;
    var_a2 = (arg0 == 0) ? 2 : 0;
    temp_f22 = (s32 *)(D_004E0610);
    temp_f21 = (s32 *)(D_004E0614);
    temp_f20 = (s32 *)(D_004E0618);
    if (var_a2 < 5) {
        var_a1 = (s32 *)(gBattle + 0x5C4 + (var_a2 << 5));
        do {
            var_a2 += 1;
            *var_a1 = 0x3F800000;
            var_a1 += 0x20;
        } while (var_a2 < 5);
    }
    if (arg0 != 0) {
        amAdx_SetVolume(0, var_a1, var_a2, temp_f22);
        amAdx_SetVolume(1, (f32)(temp_f22));
    }
    amAdx_SetVolume(3, (f32)(temp_f20));
    amAdx_SetVolume(4, (f32)(temp_f20));
    amAdx_SetVolume(2, (f32)(temp_f21));
}
