/* Draft (not built): func_001C5FE0 at 0x001C5FE0, size 0x13C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001C5FE0.s */

// src/battle/btl_main.c func_001C5FE0 diff diff=42/79
void func_001C5FE0(u8 *arg0) {
    BattleWork *temp_s0;
    BattleWork *var_a0;
    BattleWork *var_a1;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 *var_v1;
    u8 *var_v1_2;

    temp_s0 = gBattle;
    if (arg0 == NULL) {
        goto block_2;
    }
    func_001D8710(arg0);
    return;
block_2:
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x88D8);
    if (temp_v1 < 3) {
        goto block_7;
    }
    var_a2 = 0;
    if (temp_v1 <= 0) {
        goto block_6;
    }
    var_a1 = temp_s0;
    var_a0 = temp_s0;
loop_5:
    var_a0->fighter[0] = (Fighter *) &var_a1->unk0000[0x830];
    var_a2 += 1;
    var_a1 += 0x2020;
    var_a0 += 4;
    if (var_a2 < *(s32 *)((u8 *)temp_s0 + 0x88D8)) {
        goto loop_5;
    }
block_6:
    return;
block_7:
    var_s3 = 0;
    var_s2 = 0;
    var_s1 = 0;
loop_8:
    if (func_001D89E0(&temp_s0->unk0000[0x830], var_s1) == 0) {
        goto block_10;
    }
    var_s3 = var_s1;
block_10:
    if (func_001D89E0(&temp_s0->unk0000[0x2850], var_s1) == 0) {
        goto block_12;
    }
    var_s2 = var_s1;
block_12:
    var_s1 += 1;
    if (var_s1 < 2) {
        goto loop_8;
    }
    var_v1 = &temp_s0->unk0000[0x830];
    if (var_s3 >= var_s2) {
        goto block_15;
    }
    var_v1 = &temp_s0->unk0000[0x2850];
block_15:
    temp_s0->fighter[0] = (Fighter *) var_v1;
    if (var_s3 >= var_s2) {
        goto block_17;
    }
    var_v1_2 = &temp_s0->unk0000[0x830];
    goto block_18;
block_17:
    var_v1_2 = &temp_s0->unk0000[0x2850];
block_18:
    temp_s0->fighter[1] = (Fighter *) var_v1_2;
    return;
}
