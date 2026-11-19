/* Draft (not built): func_0020EE10 at 0x0020EE10, size 0x170, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020EE10.s */

// src/unk/unk_20A4D0.c func_0020EE10 diff diff=68/92
s32 func_0020EE10(s32 arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f2;
    s32 var_s0;
    s32 var_v0;
    u8 *temp_a3;

    temp_a3 = D_00568C90 + (arg0 * 0x2140);
    temp_f3 = *(f32 *)((u8 *)temp_a3 + 0x210C) - 1.0f;
    if (gBattle == NULL) {
        goto block_2;
    }
    var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
    goto block_3;
block_2:
    var_v0 = 0;
block_3:
    if (var_v0 == 0) {
        goto block_6;
    }
    return 0;
block_6:
    if (!(*(s32 *)((u8 *)temp_a3 + 0x20EC) & 0x10)) {
        goto block_9;
    }
    var_f0 = *(f32 *)((u8 *)temp_a3 + 0x2104) + *(f32 *)((u8 *)temp_a3 + 0x2110);
    goto block_15;
block_9:
    if (gBattle == NULL) {
        goto block_11;
    }
    var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    goto block_14;
block_11:
    if (D_004703F4 == 3) {
        goto block_13;
    }
    var_f2 = 1.0f;
    goto block_14;
block_13:
    var_f2 = 1.2f;
block_14:
    var_f0 = *(f32 *)((u8 *)temp_a3 + 0x2104) + (*(f32 *)((u8 *)temp_a3 + 0x2110) * var_f2);
block_15:
    *(f32 *)((u8 *)temp_a3 + 0x2104) = var_f0;
    if (!(*(f32 *)((u8 *)temp_a3 + 0x2104) < 0.0f)) {
        goto block_17;
    }
    *(f32 *)((u8 *)temp_a3 + 0x2104) = 0.0f;
block_17:
    temp_f0 = *(f32 *)((u8 *)temp_a3 + 0x2104);
    if (temp_f0 <= temp_f3) {
        goto block_23;
    }
    if (arg1 == 0) {
        goto block_21;
    }
    *(f32 *)((u8 *)temp_a3 + 0x2104) = (f32) (temp_f0 - temp_f3);
    goto block_22;
block_21:
    *(f32 *)((u8 *)temp_a3 + 0x2104) = temp_f3;
block_22:
    var_s0 = 1;
    goto block_24;
block_23:
    var_s0 = 0;
block_24:
    amMotSet_Apply(temp_a3 + 0xA0, *(s32 *)((u8 *)temp_a3 + 0x2114), *(f32 *)((u8 *)temp_a3 + 0x2104));
    return var_s0;
}
