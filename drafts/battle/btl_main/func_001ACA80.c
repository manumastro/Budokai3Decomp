/* Draft (not built): func_001ACA80 at 0x001ACA80, size 0x13C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x130, original 0x13C
 * Original: asm/nonmatchings/battle/btl_main/func_001ACA80.s */

// src/battle/btl_main.c func_001ACA80 size diff=47/76
s32 func_001ACA80(void) {
    BattleWork *temp_s1;
    s32 var_s3;
    u8 *temp_s0;
    u8 *var_s2;

    var_s3 = 0;
    temp_s1 = gBattle;
    temp_s0 = &temp_s1->unk0000[0x830];
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) > 0) {
        var_s2 = temp_s0;
        do {
            func_001D9480(var_s2);
            var_s3 += 1;
            var_s2 += 0x2020;
        } while (var_s3 < *(s32 *)((u8 *)temp_s1 + 0x88D8));
    }
    if (temp_s1->unk8AB1 > 0) {
        *(s32 *)((u8 *)temp_s1 + 0x88FC) = 4;
        *(s32 *)((u8 *)temp_s1 + 0x8900) = (s32) (temp_s1->unk8AB1 - 1);
        *(s32 *)((u8 *)temp_s1 + 0x8904) = (s32) *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0x8900) * 0x2020) + temp_s0) + 0x13A4);
        *(s32 *)((u8 *)(((1 - *(s32 *)((u8 *)temp_s1 + 0x8900)) * 0x2020) + temp_s0) + 0x1AC4) = 0;
        temp_s1->unk8AB1 = -temp_s1->unk8AB1;
        return 1;
    }
    return 0;
}
