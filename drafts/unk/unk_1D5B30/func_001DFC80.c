/* Draft (not built): func_001DFC80 at 0x001DFC80, size 0x1D4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DFC80.s */

// src/unk/unk_1D5B30.c func_001DFC80 diff diff=45/117
s32 func_001DFC80(u8 *arg0, s32 arg1, f32 fparg0) {
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s32 var_v0;
    s32 var_v0_2;

    if (fparg0 < 0.0f) {
        if (*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) {
            var_f1 = *(f32 *)((u8 *)arg0 + 0x17E4) + fparg0;
            *(f32 *)((u8 *)arg0 + 0x17E4) = var_f1;
            if (!(var_f1 <= 1000.0f)) {
                var_f1 = 1000.0f;
            } else if (var_f1 < 0.0f) {
                var_f1 = 0.0f;
            }
            *(f32 *)((u8 *)arg0 + 0x17E4) = var_f1;
            if (var_f1 <= 300.0f) {
                *(s32 *)((u8 *)arg0 + 0x17EC) = 0;
            } else {
                var_v0 = 1;
                if (var_f1 <= 600.0f) {

                } else {
                    var_v0 = 2;
                }
                *(s32 *)((u8 *)arg0 + 0x17EC) = var_v0;
            }
        }
        return 0;
    }
    var_f1_2 = *(f32 *)((u8 *)arg0 + 0x17E4) + fparg0;
    *(f32 *)((u8 *)arg0 + 0x17E4) = var_f1_2;
    if (!(var_f1_2 <= 1000.0f)) {
        var_f1_2 = 1000.0f;
    } else if (var_f1_2 < 0.0f) {
        var_f1_2 = 0.0f;
    }
    *(f32 *)((u8 *)arg0 + 0x17E4) = var_f1_2;
    if (var_f1_2 <= 300.0f) {
        *(s32 *)((u8 *)arg0 + 0x17EC) = 0;
    } else {
        var_v0_2 = 1;
        if (var_f1_2 <= 600.0f) {

        } else {
            var_v0_2 = 2;
        }
        *(s32 *)((u8 *)arg0 + 0x17EC) = var_v0_2;
    }
    if ((arg1 & 1) && (*(s8 *)((u8 *)arg0 + 0x2010) == 0) && (*(s8 *)((u8 *)arg0 + 0x2013) == 0) && !(*(f32 *)((u8 *)arg0 + 0x17E4) <= 800.0f)) {
        if (!(*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f)) {
            var_f1_3 = *(f32 *)((u8 *)arg0 + 0x17D4);
        } else {
            var_f1_3 = *(f32 *)((u8 *)arg0 + 0x17D0);
        }
        if (var_f1_3 < 1000.0f) {
            func_001D7CC0((void *)(arg0), 1);
        }
    }
    return 0;
}
