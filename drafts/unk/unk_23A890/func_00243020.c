/* Draft (not built): func_00243020 at 0x00243020, size 0x258, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 117 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_00243020.s */

// src/unk/unk_23A890.c func_00243020 diff diff=117/150
s32 func_00208E50(s32, s32);
void func_00243020(void) {
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    s32 var_s6;
    s8 var_v1;
    u8 *temp_a0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_a0 = D_0046FE44;
    var_s5 = 0;
    if (*(s16 *)((u8 *)temp_a0 + 0x102) > 0) {
        var_s1 = 0;
        var_s0 = 0;
        var_s6 = 0;
        do {
            temp_s4 = temp_a0 + var_s1;
            temp_s3 = gBattle + var_s0 + 0x830;
            temp_s2 = D_0046FE4C + var_s6 + 0x10;
            if (!(*(s32 *)((u8 *)temp_s4 + 0x2C) & 8)) {
                func_00241EB0(var_s5, *(s8 *)((u8 *)temp_s3 + 0xCBD));
            }
            if (!(*(s32 *)((u8 *)temp_s4 + 0x2C) & 4)) {
                func_00241FA0(var_s5, 0);
            }
            func_00241AC0(var_s5);
            if (gBattle != NULL) {
                var_a2 = 1;
                if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
                    var_a1 = 0;
                    if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                        if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                            goto block_12;
                        }
                        var_v1 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                    } else {
block_12:
                        var_v1 = -1;
                    }
                    if ((var_s5 == var_v1) && (*(s16 *)((u8 *)gBattle + 0x8944) == 0)) {
                        var_a1 = 1;
                    }
                    if (var_a1 == 0) {
                        var_a2 = 0;
                    }
                }
            } else {
                var_a2 = 0;
            }
            if (var_a2 == 0) {
                func_00240FF0(var_s5, *(s8 *)((u8 *)temp_s4 + 0x39));
                temp_a1 = *(s32 *)((u8 *)temp_s3 + 0x1CFC);
                if (temp_a1 == 0x46) {
                    if (*(s32 *)((u8 *)temp_s3 + 0xBA4) != 4) {
                        goto block_24;
                    }
                    goto block_27;
                }
block_24:
                if ((temp_a1 == 0x47) && (*(s32 *)((u8 *)temp_s3 + 0xBA4) == 4)) {
block_27:
                    temp_a0_2 = *(s32 *)((u8 *)temp_s2 + 0x14);
                    if (temp_a0_2 != -1) {
                        if (temp_a0_2 == *(s32 *)((u8 *)temp_s2 + 0x38)) {
                            goto block_30;
                        }
                    } else {
block_30:
                        func_002410D0(var_s5);
                    }
                }
                if (*(s32 *)((u8 *)gWave + 0x88) != 0) {
                    if (var_s5 != 0) {
                        func_00208E50(0x400020, 1);
                    } else {
                        func_00208E50(0x400010, 1);
                    }
                }
            }
            var_s5 += 1;
            var_s1 += 0x80;
            var_s0 += 0x2020;
            var_s6 += 0x480;
        } while (var_s5 < *(s16 *)((u8 *)D_0046FE44 + 0x102));
    }
}
