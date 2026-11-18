/* Draft (not built): func_00211D80 at 0x00211D80, size 0x200, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); nc_00248640(int, void *, int)' @ 3048: (s16 *)((u8 *)temp_s0 + 0x44), temp_a1, *(s32 *)((u8 *)temp_s0 + 0x40), gBattle);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00211D80.s */

// src/unk/unk_20A4D0.c func_00211D80 cerr diff=-1/0
void func_00211D80(u8 *arg0) {
    f32 var_f1;
    s16 temp_a0;
    s16 temp_a2;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v1_3;
    u8 *temp_a1;
    u8 *temp_s0;

    temp_a2 = *(s16 *)((u8 *)arg0 + 0x1C);
    temp_s0 = arg0 + 0x20;
    temp_a1 = gBattle + (temp_a2 * 0x2020) + 0x830;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v1_2 = 0;
        if (gBattle != NULL) {
            var_v1_2 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
            if (var_v1_2 != 0) {
                var_v1_2 = 1;
                if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                    var_v1_2 = 0;
                }
            }
        }
        if (var_v1_2 != 0) {
            var_v1_3 = -1;
            if (gBattle != NULL) {
                var_v1_3 = -1;
                if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                        var_v1_3 = -1;
                    } else {
                        var_v1_3 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                    }
                }
            }
            if (temp_a2 != var_v1_3) {
                goto block_21;
            }
        } else {
block_21:
            if (*(s32 *)((u8 *)temp_s0 + 0x38) < *(s32 *)((u8 *)temp_s0 + 0x34)) {
                if (gBattle != NULL) {
                    var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
                } else if (D_004703F4 != 3) {
                    var_f1 = 1.0f;
                } else {
                    var_f1 = 1.2f;
                }
                *(s32 *)((u8 *)temp_s0 + 0x38) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s0 + 0x38) + var_f1));
                return;
            }
            temp_a0 = *(s16 *)((u8 *)arg0 + 0x1E);
            switch (temp_a0) {                      /* irregular */
            case 0x1:
                break;
            case 0x2:
                func_00248640(*(s16 *)((u8 *)temp_s0 + 0x44), temp_a1, *(s32 *)((u8 *)temp_s0 + 0x40), gBattle);
                break;
            case 0x400:
                func_00248640(*(s16 *)((u8 *)temp_s0 + 0x44), temp_a1, *(s32 *)((u8 *)temp_s0 + 0x40), gBattle);
                break;
            }
            *(s32 *)((u8 *)temp_s0 + 0x38) = 0;
        }
    }
}
