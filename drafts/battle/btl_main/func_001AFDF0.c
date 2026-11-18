/* Draft (not built): func_001AFDF0 at 0x001AFDF0, size 0x1A8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x178, original 0x1A8
 * Original: asm/nonmatchings/battle/btl_main/func_001AFDF0.s */

// src/battle/btl_main.c func_001AFDF0 size diff=47/94
void func_001AFDF0(void) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    u8 *temp_s0;
    u8 *var_at;

    temp_s0 = (u8 *)(gBattle);
    func_0013AFA0((s32)((void *)(NULL)));
    func_001A87A0();
    amVram_Apply(0);
    if (*(s8 *)((u8 *)gBattle + 0x8975) != 1) {
        func_00131F00(temp_s0, 0, 0);
        func_00132DF0(temp_s0 + 0x60);
        func_00209E50(temp_s0 + 0x60);
        if (*(s32 *)((u8 *)temp_s0 + 0x88EC) == 0) {
            if (*(s8 *)((u8 *)temp_s0 + 0x8AB2) != 0) {
                temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x8930) + (0.07f * *(f32 *)((u8 *)temp_s0 + 0x88F0));
                *(f32 *)((u8 *)temp_s0 + 0x8930) = temp_f1;
                if (!(temp_f1 <= 1.0f)) {
                    *(f32 *)((u8 *)temp_s0 + 0x8930) = 1.0f;
                }
            } else {
                temp_f1_2 = *(f32 *)((u8 *)temp_s0 + 0x8930) - (0.1f * *(f32 *)((u8 *)temp_s0 + 0x88F0));
                *(f32 *)((u8 *)temp_s0 + 0x8930) = temp_f1_2;
                if (temp_f1_2 < 0.0f) {
                    *(f32 *)((u8 *)temp_s0 + 0x8930) = 0.0f;
                }
            }
            if (*(s32 *)((u8 *)temp_s0 + 0x8928) == 0x200800) {
                temp_f1_3 = *(f32 *)((u8 *)temp_s0 + 0x8930);
                var_at = temp_s0 + 0x10000;
                var_f0 = 0.75f * (temp_f1_3 * temp_f1_3);
            } else {
                temp_f0 = *(f32 *)((u8 *)temp_s0 + 0x8930);
                var_at = temp_s0 + 0x10000;
                var_f0 = temp_f0 * temp_f0;
            }
            *(f32 *)((u8 *)var_at + -0x76D4) = var_f0;
        }
    }
}
