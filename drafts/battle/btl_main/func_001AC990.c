/* Draft (not built): func_001AC990 at 0x001AC990, size 0xEC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 34 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0xEC
 * Original: asm/nonmatchings/battle/btl_main/func_001AC990.s */

// src/battle/btl_main.c func_001AC990 size diff=34/56
s32 func_001AC990(void) {
    s32 var_s3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *var_s2;

    var_s3 = 0;
    temp_s1 = (u8 *)(gBattle);
    temp_s0 = temp_s1 + 0x830;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) > 0) {
        var_s2 = temp_s0;
        do {
            func_001D9480(var_s2);
            var_s3 += 1;
            var_s2 += 0x2020;
        } while (var_s3 < *(s32 *)((u8 *)temp_s1 + 0x88D8));
    }
    if (func_002CC4A0() == 4) {
        *(s32 *)((u8 *)temp_s1 + 0x88FC) = 5;
        *(s32 *)((u8 *)temp_s1 + 0x8900) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x8904) = (s32) *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0x8900) * 0x2020) + temp_s0) + 0x13A4);
        return 1;
    }
    return 0;
}
