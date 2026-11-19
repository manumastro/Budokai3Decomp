/* Draft (not built): func_001DFC80 at 0x001DFC80, size 0x1D4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 36 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DFC80.s */

s32 func_001DFC80(Fighter *arg0, s32 arg1, f32 fparg0) {
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s32 var_v0;
    s32 var_v0_2;
    if (fparg0 < 0.0f) {
        if (arg0->f1FF8 != -1) {
            var_f1 = arg0->f17E4 + fparg0;
            arg0->f17E4 = var_f1;
            if (!(var_f1 <= 1000.0f)) {
                var_f1 = 1000.0f;
            } else
                if (var_f1 < 0.0f) {
                var_f1 = 0.0f;
            }
            arg0->f17E4 = var_f1;
            if (var_f1 <= 300.0f) {
                arg0->f17EC = 0;
            } else {
                var_v0 = 1;
                if (var_f1 <= 600.0f) {
                } else {
                    var_v0 = 2;
                }
                arg0->f17EC = var_v0;
            }
        }
        return 0;
    }
    var_f1_2 = arg0->f17E4 + fparg0;
    arg0->f17E4 = var_f1_2;
    if (!!(var_f1_2 <= 1000.0f))
        if (!(var_f1_2 < 0.0f)) {
        var_f1_2 = 1000.0f;
    } else {
        var_f1_2 = 0.0f;
    }
    arg0->f17E4 = var_f1_2;
    if (var_f1_2 <= 300.0f) {
        arg0->f17EC = 0;
    } else {
        var_v0_2 = 1;
        if (var_f1_2 <= 600.0f) {
        } else {
            var_v0_2 = 2;
        }
        arg0->f17EC = var_v0_2;
    }
    if (arg1 & 1 && arg0->f2010 == 0 && arg0->f2013 == 0 && !(arg0->f17E4 <= 800.0f)) {
        if (!(arg0->f1A40 <= 0.0f)) {
            var_f1_3 = arg0->f17D4;
        } else {
            var_f1_3 = arg0->f17D0;
        }
        if (var_f1_3 < 1000.0f) {
            func_001D7CC0(arg0, 1);
        }
    }
    return 0;
}
