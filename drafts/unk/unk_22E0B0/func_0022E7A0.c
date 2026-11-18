/* Draft (not built): func_0022E7A0 at 0x0022E7A0, size 0x120, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x170, original 0x120
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022E7A0.s */

// src/unk/unk_22E0B0.c func_0022E7A0 size diff=47/92
extern s32 D_0044FB70;
f32 func_0022E7A0(s8 *arg0, s8 **arg1) {
    f32 var_f0;
    s64 temp_a2;
    s64 temp_v1;
    s64 var_a3;
    s8 *var_a0;
    s8 var_v1;

    var_a0 = arg0;
    var_v1 = *var_a0;
    var_f0 = 0.0f;
    var_a3 = 0;
    if (((var_v1 < 0x30) || (var_v1 >= 0x3A)) && (var_v1 != 0x2E)) {
        if (arg1 != NULL) {
            *arg1 = var_a0;
        }
        return -1.0f;
    }
loop_6:
    temp_a2 = (s64) ((s64) var_v1 << 0x38) >> 0x38;
    if (temp_a2 == 0x2E) {
        if (((s64) (var_a3 << 0x38) >> 0x38) == 0) {
            var_a3 = (s64) ((var_a3 + 1) << 0x38) >> 0x38;
            goto block_15;
        }
    } else if ((temp_a2 >= 0x30) && (temp_a2 < 0x3A)) {
        temp_v1 = (s64) (var_a3 << 0x38) >> 0x38;
        if (temp_v1 == 0) {
            var_f0 = (10.0f * var_f0) + (f32) (temp_a2 - 0x30);
        } else {
            var_a3 = (s64) ((var_a3 + 1) << 0x38) >> 0x38;
            var_f0 += (f32) (temp_a2 - 0x30) * *(&D_0044FB70 + (temp_v1 * 4));
        }
block_15:
        var_a0 += 1;
        var_v1 = *var_a0;
        goto loop_6;
    }
    if (arg1 != NULL) {
        *arg1 = var_a0;
    }
    return var_f0;
}
