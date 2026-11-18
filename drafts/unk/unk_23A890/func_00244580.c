/* Draft (not built): func_00244580 at 0x00244580, size 0xD8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x78, original 0xD8
 * Original: asm/nonmatchings/unk/unk_23A890/func_00244580.s */

// src/unk/unk_23A890.c func_00244580 size diff=47/30
void func_00244580(s32 arg0, s32 arg1, s16 arg2) {
    s32 sp50;
    s16 spA0;
    s16 spA2;
    s16 spA4;
    s16 spA6;
    s16 spA8;
    s16 spAA;
    s16 spAC;
    s32 spBC;
    s32 spC8;
    s16 spE4;
    s16 spE6;
    s16 spF0;
    s16 spF2;
    s16 *var_s0;
    s16 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = arg0;
    var_s2 = arg1;
    var_s1 = arg2;
    memset(&sp50, 0, 0xB0);
    spA0 = 0x800;
    if (var_s1 == 6) {
        var_s0 = &spA2;
        *var_s0 = 3;
    } else {
        var_s0 = &spA2;
        *var_s0 = 2;
    }
    spA4 = 0xB;
    spF0 = 2;
    spAC = 0xC6;
    spAA = 0xC6 - var_s1;
    spE4 = 1;
    spE6 = 1;
    spBC = var_s3;
    spC8 = var_s2;
    spA6 = 0;
    spA8 = 0;
    spF2 = var_s1;
    func_00214DD0(&sp50, 1);
    func_00214F80(*var_s0, &sp50);
}
