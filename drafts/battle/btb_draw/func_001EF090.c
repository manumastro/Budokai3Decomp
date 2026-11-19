/* Draft (not built): func_001EF090 at 0x001EF090, size 0x3C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 7 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x34, original 0x3C
 * Original: asm/nonmatchings/battle/btb_draw/func_001EF090.s */

// src/battle/btb_draw.c func_001EF090 size diff=7/13
void func_001EF090(void) {
    if (*D_004B4BB1 == 0) {
        goto block_2;
    }
    func_001EA740((s32) *D_004B4BB2);
    return;
block_2:
    return;
}
