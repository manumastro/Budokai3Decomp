/* Draft (not built): func_00132D20 at 0x00132D20, size 0xD0, segment sys/unk_131700 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A8, original 0xD0
 * Original: asm/nonmatchings/sys/unk_131700/func_00132D20.s */

// src/sys/unk_131700.c func_00132D20 size diff=40/106
s32 func_00132D20(s32 *arg0, u8 *arg1, f32 fparg0) {
    s32 *var_a0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;

    var_a0 = arg0;
    if (var_a0 != NULL) {
        goto block_2;
    }
    var_a0 = (int *)(&D_0047CA40);
block_2:
    temp_f2 = fparg0 * *(f32 *)((u8 *)var_a0 + 0x38);
    temp_f4 = *(f32 *)((u8 *)arg1 + 8) + temp_f2;
    temp_f1 = fabsf(temp_f4);
    if (!(fabsf(*(f32 *)((u8 *)arg1 + 0) * *(f32 *)((u8 *)var_a0 + 0x30)) <= temp_f1)) {
        goto block_4;
    }
    if (fabsf(*(f32 *)((u8 *)arg1 + 4) * *(f32 *)((u8 *)var_a0 + 0x34)) <= temp_f1) {
        goto block_5;
    }
block_4:
    return 1;
block_5:
    temp_f3 = (*(f32 *)((u8 *)var_a0 + 0x20) + temp_f2) - fparg0;
    temp_f2_2 = fparg0 + (*(f32 *)((u8 *)var_a0 + 0x24) + temp_f2);
    if (fabsf(((temp_f4 * (temp_f2_2 + temp_f3)) - (2.0f * temp_f2_2 * temp_f3)) / (temp_f2_2 - temp_f3)) <= temp_f1) {
        goto block_7;
    }
    return 1;
block_7:
    return 0;
}
