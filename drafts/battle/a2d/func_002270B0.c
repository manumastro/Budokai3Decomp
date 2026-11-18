/* Draft (not built): func_002270B0 at 0x002270B0, size 0x118, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); mwccps2.exe Compiler: 568: if (*(arg0 + (var_a2 * 4)) > 0x3F800000) { @ 560: if (*(arg0 + (var_a2 * 4)) <= 0x3F800000) {
 * Original: asm/nonmatchings/battle/a2d/func_002270B0.s */

// src/battle/a2d.c func_002270B0 cerr diff=-1/0
s32 func_002270B0(s32 arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_v1;
    u8 *temp_a1;

    var_a2 = arg2;
    if (fparg0 < 1.0f) {
        return 0;
    }
    if (var_a2 == -1) {
        var_v1 = (s32) (arg1 + 1) >> 1;
        var_a2 = arg1 >> 1;
        if (var_v1 >= 2) {
            do {
                if (*(arg0 + (var_a2 * 4)) <= 0x3F800000) {
                    var_a2 += var_v1 >> 1;
                } else {
                    var_a2 -= var_v1 >> 1;
                }
                var_v1 = (s32) (var_v1 + 1) >> 1;
            } while (var_v1 >= 2);
        }
        if (*(arg0 + (var_a2 * 4)) > 0x3F800000) {
            var_a2 -= 1;
        }
    } else {
        temp_v1 = arg1 - 1;
loop_13:
        temp_a1 = (u8 *)(arg0 + (var_a2 * 4));
        if (*(s16 *)((u8 *)temp_a1 + 0) <= 0x3F800000) {
            if (*(s16 *)((u8 *)temp_a1 + 4) <= 0x3F800000) {
                var_a2 += 1;
                goto block_17;
            }
        } else {
            var_a2 -= 1;
block_17:
            if (var_a2 <= 0) {
                var_a2 = 0;
            } else if (var_a2 >= temp_v1) {
                var_a2 = temp_v1;
            } else {
                goto loop_13;
            }
        }
    }
    return var_a2;
}
