/* Draft (not built): func_002934F0 at 0x002934F0, size 0xF8, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 51 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002934F0.s */

// src/unk/unk_2918A0.c func_002934F0 diff diff=51/62
s32 func_002B4C80(s32);
s32 func_002B4CC0(s32, s32 *);
extern void SklEdit_Close(void);
void func_002934F0(u8 *arg0) {
    s32 sp20;
    s32 *var_a2;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    void (*var_v1)();

    func_00291BF0();
    if (func_002B4C80(0) == 9) {
        goto block_2;
    }
    goto block_13;
block_2:
    func_002B4CC0(0, &sp20);
    SklEdit_Close();
    var_a3 = 0;
    if (sp20 <= 0) {
        goto block_6;
    }
    var_a2 = &sp20;
    var_a1 = 0;
loop_4:
    var_a3 += 1;
    *(s16 *)((u8 *)(D_005AA604 + var_a1) + 0x11F0) = (s16) *(s32 *)((u8 *)var_a2 + 4);
    var_a2 += 4;
    var_a1 += 2;
    if (var_a3 < sp20) {
        goto loop_4;
    }
block_6:
    var_a2_2 = var_a3 * 2;
    if (var_a3 >= 7) {
        goto block_9;
    }
loop_8:
    var_a3 += 1;
    *(s16 *)((u8 *)(D_005AA604 + var_a2_2) + 0x11F0) = -1;
    var_a2_2 += 2;
    if (var_a3 < 7) {
        goto loop_8;
    }
block_9:
    var_v1 = func_00294A10;
    if (func_00294A10 != NULL) {
        goto block_11;
    }
    var_v1 = NULL;
block_11:
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    return;
block_13:
    return;
}
