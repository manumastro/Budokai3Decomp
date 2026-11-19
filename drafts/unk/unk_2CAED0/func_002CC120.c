/* Draft (not built): func_002CC120 at 0x002CC120, size 0x114, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x104, original 0x114
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CC120.s */

// src/unk/unk_2CAED0.c func_002CC120 size diff=28/65
s32 func_002CA4F0(s32, void *);
s32 func_002CA690(s32, void *);
s32 func_002CA730(s32, void *);
s32 func_002CC120(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = -3;
    if (gTutWork == NULL) {
        goto block_5;
    }
    temp_v1 = *(s32 *)((u8 *)gTutWork + 0xC);
    if (temp_v1 < 0) {
        goto block_5;
    }
    if (temp_v1 >= 0x22) {
        goto block_5;
    }
    var_a1 = *(((u8 *)&D_004565B0) + (temp_v1 * 4));
    goto block_6;
block_5:
    var_a1 = 0;
block_6:
    if (!(var_a1 & 2)) {
        goto block_8;
    }
    var_v0 = -2;
block_8:
    if (!(var_a1 & 4)) {
        goto block_10;
    }
    var_v0 = -2;
block_10:
    temp_a1 = *(s32 *)((u8 *)gTutWork + 0xC);
    if (temp_a1 == 0x21) {
        goto block_24;
    }
    if (temp_a1 == 0x15) {
        goto block_23;
    }
    if (temp_a1 == 0x13) {
        goto block_17;
    }
    if (temp_a1 == 0x11) {
        goto block_16;
    }
    return var_v0;
block_16:
    return func_002CA730(temp_a1, gTutWork);
block_17:
    var_v0_2 = -2;
    if (*(s32 *)((u8 *)gTutWork + 0x20) == 2) {
        goto block_20;
    }
    goto block_22;
block_20:
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)gTutWork + 0)) + 0x1350) != *(s8 *)((u8 *)arg0 + 6)) {
        goto block_22;
    }
    var_v0_2 = 0;
block_22:
    return var_v0_2;
block_23:
    return func_002CA690(temp_a1, gTutWork);
block_24:
    return func_002CA4F0(temp_a1, gTutWork);
}
