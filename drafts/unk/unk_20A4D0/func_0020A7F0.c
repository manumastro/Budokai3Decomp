/* Draft (not built): func_0020A7F0 at 0x0020A7F0, size 0x228, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 95 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x288, original 0x228
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020A7F0.s */

// src/unk/unk_20A4D0.c func_0020A7F0 size diff=95/162
void func_0020A7F0(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 **temp_s0;
    u8 **temp_s0_2;
    u8 **temp_s0_3;
    u8 **temp_s0_4;
    u8 **temp_s4;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;

    var_s3 = arg0;
    if (var_s3 != -1) {
        goto block_38;
    }
    if (var_s3 >= 3) {
        goto block_40;
    }
loop_3:
    var_s3 += 1;
    var_s2 = var_s3;
    if (var_s3 != -1) {
        goto block_33;
    }
    if (var_s3 >= 3) {
        goto block_35;
    }
loop_6:
    var_s2 += 1;
    var_s1 = var_s2;
    if (var_s2 != -1) {
        goto block_28;
    }
    if (var_s2 >= 3) {
        goto block_30;
    }
loop_9:
    var_s1 += 1;
    var_s0 = var_s1;
    if (var_s1 != -1) {
        goto block_23;
    }
    if (var_s1 >= 3) {
        goto block_25;
    }
loop_12:
    var_s0 += 1;
    var_s4 = var_s0;
    if (var_s0 != -1) {
        goto block_18;
    }
    if (var_s0 >= 3) {
        goto block_20;
    }
loop_15:
    var_s4 += 1;
    func_0020A7F0(var_s4);
    if (var_s4 < 3) {
        goto loop_15;
    }
    goto block_20;
block_18:
    temp_s4 = &D_005687C0 + (var_s0 * 4);
    temp_a0 = *temp_s4;
    if (temp_a0 == NULL) {
        goto block_20;
    }
    Obj_ResetF38((s32)((void *)(temp_a0)));
    *temp_s4 = NULL;
block_20:
    if (var_s0 < 3) {
        goto loop_12;
    }
    goto block_25;
block_23:
    temp_s0 = &D_005687C0 + (var_s1 * 4);
    temp_a0_2 = *temp_s0;
    if (temp_a0_2 == NULL) {
        goto block_25;
    }
    Obj_ResetF38((s32)((void *)(temp_a0_2)));
    *temp_s0 = NULL;
block_25:
    if (var_s1 < 3) {
        goto loop_9;
    }
    goto block_30;
block_28:
    temp_s0_2 = &D_005687C0 + (var_s2 * 4);
    temp_a0_3 = *temp_s0_2;
    if (temp_a0_3 == NULL) {
        goto block_30;
    }
    Obj_ResetF38((s32)((void *)(temp_a0_3)));
    *temp_s0_2 = NULL;
block_30:
    if (var_s2 < 3) {
        goto loop_6;
    }
    goto block_35;
block_33:
    temp_s0_3 = &D_005687C0 + (var_s3 * 4);
    temp_a0_4 = *temp_s0_3;
    if (temp_a0_4 == NULL) {
        goto block_35;
    }
    Obj_ResetF38((s32)((void *)(temp_a0_4)));
    *temp_s0_3 = NULL;
block_35:
    if (var_s3 < 3) {
        goto loop_3;
    }
    return;
block_38:
    temp_s0_4 = &D_005687C0 + (var_s3 * 4);
    temp_a0_5 = *temp_s0_4;
    if (temp_a0_5 == NULL) {
        goto block_40;
    }
    Obj_ResetF38((s32)((void *)(temp_a0_5)));
    *temp_s0_4 = NULL;
block_40:
    return;
}
