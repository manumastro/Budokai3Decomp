/* Draft (not built): func_001DFE60 at 0x001DFE60, size 0x398, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 119 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3A4, original 0x398
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DFE60.s */

// src/unk/unk_1D5B30.c func_001DFE60 size diff=119/233
s32 func_001DFE60(Fighter *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f2;
    s32 var_v0;

    var_f12 = fparg0;
    var_v0 = 1;
    if (var_f12 <= 0.0f) {
        if ((*(s8 *)((u8 *)arg0 + 0x2010) != 0) && !(arg1 & 0x10)) {
            return 1;
        }
        if ((*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) && !(arg1 & 2)) {
            temp_f0_3 = *(f32 *)((u8 *)arg0 + 0x17D0) - var_f12;
            *(f32 *)((u8 *)arg0 + 0x17D0) = temp_f0_3;
            var_f1 = *(f32 *)((u8 *)arg0 + 0x17D4);
            if (var_f1 < temp_f0_3) {

            } else {
                var_f1 = temp_f0_3;
            }
            *(f32 *)((u8 *)arg0 + 0x17D0) = var_f1;
            if ((*(s8 *)((u8 *)arg0 + 0x1FD7) > 0) || (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1FD7) > 0)) {
                if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                    var_f0_2 = 0.0f;
                } else {
                    var_f0_2 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
                }
                var_f1_2 = *(f32 *)((u8 *)arg0 + 0x17D0);
                if (var_f0_2 < var_f1_2) {
                    if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                        var_f1_2 = 0.0f;
                    } else {
                        var_f1_2 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
                    }
                }
                *(f32 *)((u8 *)arg0 + 0x17D0) = var_f1_2;
            }
            if ((*(f32 *)((u8 *)arg0 + 0x1854) <= 0.0f) && (*(f32 *)((u8 *)arg0 + 0x17D0) == *(f32 *)((u8 *)arg0 + 0x17D4))) {
                *(f32 *)((u8 *)arg0 + 0x1854) = 180.0f;
            }
        }
        return 1;
    }
    if (!(arg1 & 4)) {
        var_f12 *= *(f32 *)((u8 *)arg0 + 0x1A20);
        if (!(var_f12 <= 0.0f)) {

        } else {
            var_f12 = 0.0f;
        }
    }
    if (arg1 & 8) {
        if ((*(s8 *)((u8 *)arg0 + 0x1FD5) > 0) || (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1FD5) > 0)) {
            var_f12 *= 2.0f;
        }
        if (*(s8 *)((u8 *)arg0 + 0x1FD6) <= 0) {
            if (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1FD6) > 0) {
                goto block_41;
            }
        } else {
block_41:
            var_f12 *= 0.5f;
        }
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x1A40);
    var_f0 = 0.0f;
    if (!(temp_f1 <= 0.0f)) {
        var_f2 = *(f32 *)((u8 *)arg0 + 0x17D4);
    } else {
        var_f2 = *(f32 *)((u8 *)arg0 + 0x17D0);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        if (!(temp_f1 <= 0.0f)) {
            var_f0 = *(f32 *)((u8 *)arg0 + 0x17D4);
        } else {
            var_f0 = *(f32 *)((u8 *)arg0 + 0x17E0);
        }
        if (!(var_f2 <= var_f0)) {

        } else {
            var_f0 = 0.0f;
            if (!(temp_f1 <= 0.0f)) {
                var_f2 = *(f32 *)((u8 *)arg0 + 0x17D4);
            } else {
                var_f2 = *(f32 *)((u8 *)arg0 + 0x17E0);
            }
        }
    }
    if (!(var_f12 <= var_f2)) {
        var_v0 = 0;
    }
    if (arg1 & 1) {
        return var_v0;
    }
    if (arg1 & 2) {
        return var_v0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x200A) != 0) {
        *(f32 *)((u8 *)arg0 + 0x17D0) = (f32) *(f32 *)((u8 *)arg0 + 0x17D4);
        return M2C_BITWISE(s32, var_f0);
    }
    temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x17D0);
    if (temp_f0_2 < var_f12) {
        *(f32 *)((u8 *)arg0 + 0x17D0) = 0.0f;
        return M2C_BITWISE(s32, temp_f0_2);
    }
    temp_f0 = temp_f0_2 - var_f12;
    *(f32 *)((u8 *)arg0 + 0x17D0) = temp_f0;
    return M2C_BITWISE(s32, temp_f0);
}
