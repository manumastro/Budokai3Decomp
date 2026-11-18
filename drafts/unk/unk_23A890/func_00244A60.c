/* Draft (not built): func_00244A60 at 0x00244A60, size 0x260, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1EC, original 0x260
 * Original: asm/nonmatchings/unk/unk_23A890/func_00244A60.s */

// src/unk/unk_23A890.c func_00244A60 size diff=80/123
s32 func_001B0D10(void *, void *, s32);
void func_00244A60(s32 arg0) {
    s32 sp40;
    s16 sp90;
    s16 sp92;
    s16 sp94;
    s16 sp96;
    s16 sp98;
    u8 *spAC;
    s32 spB8;
    s16 spD4;
    s16 spD6;
    s16 spD8;
    s16 spE0;
    s16 spE2;
    s16 spE4;
    f32 var_f1;
    f32 var_f2;
    s16 var_v1_2;
    s32 temp_a2;
    s32 var_a1;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_s1;

    temp_a2 = arg0 * 0x2020;
    temp_a0 = gBattle + temp_a2;
    temp_s1 = D_0046FE4C + (arg0 * 0x480) + 0x10;
    if (func_001B0D10(temp_a0, gBattle, temp_a2) == 4) {
        var_a1 = 0;
        if (gBattle != NULL) {
            var_a1 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
            if (var_a1 != 0) {
                var_a1 = 1;
                if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                    var_a1 = 0;
                }
            }
        }
        var_v1 = 0;
        if (gBattle != NULL) {
            var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
        }
        if ((var_v1 | var_a1) == 0) {
            var_v1_2 = 0;
            if (gBattle != NULL) {
                var_v1_2 = *(s16 *)((u8 *)gBattle + 0x8944);
            }
            if (var_v1_2 == 0) {
                if (gBattle != NULL) {
                    var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
                } else if (D_004703F4 != 3) {
                    var_f1 = 1.0f;
                } else {
                    var_f1 = 1.2f;
                }
                *(s32 *)((u8 *)temp_s1 + 0x3C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 0x3C) + var_f1));
                if (gBattle != NULL) {
                    var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
                } else if (D_004703F4 != 3) {
                    var_f2 = 1.0f;
                } else {
                    var_f2 = 1.2f;
                }
                if (!((f32) *(s32 *)((u8 *)temp_s1 + 0x3C) < (30.0f * var_f2))) {
                    memset(&sp40, 0, 0xB0);
                    sp90 = 0x400;
                    sp92 = 2;
                    spE0 = 2;
                    sp94 = 1;
                    spB8 = 0x12;
                    spD4 = 1;
                    spD8 = 1;
                    spE2 = 3;
                    spE4 = 3;
                    spAC = temp_a0 + 0x830;
                    sp96 = 0;
                    sp98 = 0;
                    spD6 = 0;
                    func_00214DD0(&sp40, 1);
                    func_00214F80(sp92, &sp40);
                    *(s32 *)((u8 *)temp_s1 + 0x3C) = 0;
                }
            }
        }
    }
}
