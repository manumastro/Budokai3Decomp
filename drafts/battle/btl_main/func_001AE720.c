/* Draft (not built): func_001AE720 at 0x001AE720, size 0x168, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x168
 * Original: asm/nonmatchings/battle/btl_main/func_001AE720.s */

// src/battle/btl_main.c func_001AE720 size diff=43/82
void func_001AE720(void) {
    s32 sp20;
    s32 *var_a1;
    s32 temp_v1;
    s32 var_a2;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBattle);
    if (!(*(f32 *)((u8 *)temp_s0 + 0x890C) <= 0.0f)) {
        sp20 = 0;
        var_a2 = 0;
        if (*(s32 *)((u8 *)temp_s0 + 0x88D8) > 0) {
            var_a1 = &sp20;
            do {
                temp_v1 = 1 << var_a2;
                var_a2 += 1;
                sp20 |= temp_v1;
                *(s16 *)((u8 *)var_a1 + 8) = 1;
                var_a1 += 2;
            } while (var_a2 < *(s32 *)((u8 *)temp_s0 + 0x88D8));
        }
        func_001C8020(0, &sp20);
    }
    *(f32 *)((u8 *)gBattle + 0x8910) = (f32) *(f32 *)((u8 *)gBattle + 0x890C);
    *(f32 *)((u8 *)gBattle + 0x890C) = (f32) (*(f32 *)((u8 *)gBattle + 0x890C) + *(f32 *)((u8 *)gBattle + 0x88F0));
    if (!(*(f32 *)((u8 *)gBattle + 0x890C) <= 1e8f)) {
        *(f32 *)((u8 *)gBattle + 0x8910) = 0.0f;
        *(f32 *)((u8 *)gBattle + 0x890C) = (f32) *(f32 *)((u8 *)gBattle + 0x88F0);
    }
    if (!(*(f32 *)((u8 *)temp_s0 + 0x890C) < 120.0f)) {
        D_004682F0[0]();
    }
}
