/* Draft (not built): func_00246680 at 0x00246680, size 0x174, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x17C, original 0x174
 * Original: asm/nonmatchings/unk/unk_23A890/func_00246680.s */

// src/unk/unk_23A890.c func_00246680 size diff=47/95
s32 func_001DFA90(void *, s16);
void func_00246680(s32 arg0, u8 **arg1) {
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_s0;
    u8 *var_s1;

    if (arg0 < 0xC8) {
        goto block_3;
    }
    if (arg0 < 0x12C) {
        goto block_6;
    }
block_3:
    if (arg0 < 0x190) {
        goto block_7;
    }
    if (arg0 >= 0x1F4) {
        goto block_7;
    }
block_6:
    var_s1 = *(u8 **)((u8 *)(*arg1) + 0x1354);
    var_v0 = (s32)(D_0046FE4C + (*(s32 *)((u8 *)var_s1 + 0x1350) * 0x480));
    goto block_8;
block_7:
    var_s1 = *arg1;
    var_v0 = (s32)(D_0046FE4C + (*(s32 *)((u8 *)var_s1 + 0x1350) * 0x480));
block_8:
    temp_s0 = (u8 *)(var_v0 + 0x10);
    if (*(s32 *)((u8 *)temp_s0 + 0x14) != -1) {
        goto block_14;
    }
    *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) *(s32 *)((u8 *)var_s1 + 0xB70);
    if ((u32) (arg0 - 0x12C) < 3U) {
        goto block_11;
    }
    if (arg0 != 0x12F) {
        goto block_12;
    }
block_11:
    *(s32 *)((u8 *)temp_s0 + 0x38) = (s32) *(s32 *)((u8 *)var_s1 + 0xB70);
block_12:
    *(s16 *)((u8 *)temp_s0 + 0x2A) = (s16) (func_001DFA90(var_s1, *(s16 *)((u8 *)var_s1 + 0x1A58)) - 1);
    if (*(s16 *)((u8 *)temp_s0 + 0x2A) >= 0) {
        goto block_14;
    }
    *(s16 *)((u8 *)temp_s0 + 0x2A) = 0;
block_14:
    temp_v1 = arg0 < 4;
    if (temp_v1 != 0) {
        goto block_17;
    }
    if (arg0 < 0x15E) {
        goto block_18;
    }
block_17:
    func_002529B0(arg0, var_s1, 0);
    return;
block_18:
    if (temp_v1 != 0) {
        goto block_21;
    }
    if (arg0 >= 0x12C) {
        goto block_21;
    }
    func_00248910(arg0, var_s1);
    return;
block_21:
    func_00245DA0(arg0, arg1);
    return;
}
