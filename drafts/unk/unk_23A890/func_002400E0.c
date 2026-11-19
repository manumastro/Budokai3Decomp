/* Draft (not built): func_002400E0 at 0x002400E0, size 0xB8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xBC, original 0xB8
 * Original: asm/nonmatchings/unk/unk_23A890/func_002400E0.s */

// src/unk/unk_23A890.c func_002400E0 size diff=18/47
void func_002400E0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s1 = gBtlSys;
    var_s0 = 0;
    if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
        var_s2 = D_0058BF50;
        do {
            temp_a0 = *(s32 *)((u8 *)var_s2 + 0x10);
            if (temp_a0 != 0) {
                amCdFs_ReleaseCache(temp_a0);
            }
            *(s32 *)((u8 *)var_s2 + 0x10) = 0;
            *(s32 *)((u8 *)var_s1 + 0xE8C) = 0;
            temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0xEC0);
            if (temp_a0_2 != 0) {
                func_00254100(temp_a0_2);
            }
            var_s0 += 1;
            var_s2 += 4;
            var_s1 += 4;
        } while (var_s0 < *(s32 *)((u8 *)gBattle + 0x88D8));
    }
}
