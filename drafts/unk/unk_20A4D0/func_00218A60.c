/* Draft (not built): func_00218A60 at 0x00218A60, size 0xFC, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x104, original 0xFC
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00218A60.s */

// src/unk/unk_20A4D0.c func_00218A60 size diff=15/65
s8 func_00218A60(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s8 *temp_s1;
    s8 *var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (var_a0 < 3) {
        goto block_2;
    }
    var_a0 = 2;
    goto block_4;
block_2:
    if (var_a0 >= 0) {
        goto block_4;
    }
    var_a0 = 0;
block_4:
    if (var_a1 < 5) {
        goto block_6;
    }
    var_a1 = 4;
    goto block_8;
block_6:
    if (var_a1 >= 0) {
        goto block_8;
    }
    var_a1 = 0;
block_8:
    temp_a1 = var_a1 * 2;
    var_s0 = 0;
    temp_s1 = (signed char *)(((u8 *)&D_0046A380) + (var_a0 * 0xA) + temp_a1);
    var_v1 = temp_s1;
    goto loop_10;
block_9:
    var_v1 += 1;
    var_s0 += 1;
loop_10:
    if (var_s0 >= 4) {
        goto block_12;
    }
    if (*var_v1 >= 0) {
        goto block_9;
    }
block_12:
    if (var_s0 > 0) {
        goto block_14;
    }
    return -1;
block_14:
    if (var_s0 != 1) {
        goto block_17;
    }
    return *temp_s1;
block_17:
    return *(temp_s1 + (func_0012EAE0(0x20) % (u32) var_s0));
}
