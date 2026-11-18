/* Draft (not built): func_001E2290 at 0x001E2290, size 0x27C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 108 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2E4, original 0x27C
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E2290.s */

// src/unk/unk_1D5B30.c func_001E2290 size diff=108/185
void func_001E2290(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 var_f0;
    s32 var_a2;
    s32 var_a2_2;
    u8 *temp_s0;
    u8 *temp_t0;
    u8 *var_a1;
    u8 *var_a1_2;

    temp_s0 = (u8 *)(gBattle);
    if (*(s32 *)((u8 *)arg0 + 0x1A4C) != 0) {
        func_001D5B30();
        if ((*(s8 *)((u8 *)temp_s0 + 0x8AAD) == 0) && (*(s32 *)((u8 *)temp_s0 + 0x88F8) == 4) && (*(s8 *)((u8 *)arg0 + 0x1FF8) == 2)) {
            temp_f0 = *(f32 *)((u8 *)arg0 + 0x1A50);
            if (!(temp_f0 <= 0.0f)) {
                *(f32 *)((u8 *)arg0 + 0x1A54) = temp_f0;
                var_f0 = *(f32 *)((u8 *)arg0 + 0x1A50) - *(f32 *)((u8 *)temp_s0 + 0x88F0);
                *(f32 *)((u8 *)arg0 + 0x1A50) = var_f0;
                if (!(var_f0 <= 0.0f)) {

                } else {
                    var_f0 = 0.0f;
                }
                *(f32 *)((u8 *)arg0 + 0x1A50) = var_f0;
                *(f32 *)((u8 *)(func_0021C660(*(s32 *)((u8 *)arg0 + 0x1350))) + 0xF4) = (f32) *(f32 *)((u8 *)arg0 + 0x1A50);
                temp_f1 = *(f32 *)((u8 *)arg0 + 0x1A54);
                temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x1A50);
                if ((((s32) (MULT_HI(0x88888889, M2C_BITWISE(s32, temp_f0_2)) + M2C_BITWISE(s32, temp_f0_2)) >> 5) + (M2C_BITWISE(u32, temp_f0_2) >> 0x1F)) < (((s32) (MULT_HI(0x88888889, M2C_BITWISE(s32, temp_f1)) + M2C_BITWISE(s32, temp_f1)) >> 5) + (M2C_BITWISE(u32, temp_f1) >> 0x1F))) {
                    func_001E9B00((void *)(*(s32 *)((u8 *)arg0 + 0x1350) + 2), 0x34, 0, 0, 0, 0x3F800000);
                }
                if (*(f32 *)((u8 *)arg0 + 0x1A50) <= 0.0f) {
                    if (*(s32 *)((u8 *)gBattle + 0x88F8) == 4) {
                        var_a2 = 0;
                        if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
                            var_a1 = (u8 *)(gBattle);
                            do {
                                if (*(s8 *)((u8 *)var_a1 + 0x2828) != -1) {
                                    *(s8 *)((u8 *)var_a1 + 0x2828) = 2;
                                }
                                var_a2 += 1;
                                var_a1 += 0x2020;
                            } while (var_a2 < *(s32 *)((u8 *)gBattle + 0x88D8));
                        }
                    }
                    *(s8 *)((u8 *)arg0 + 0x183F) = -1;
                    *(s32 *)((u8 *)arg0 + 0x1840) = 0;
                    temp_t0 = *(u8 **)((u8 *)arg0 + 0x1354);
                    if (*(s32 *)((u8 *)gBattle + 0x88F8) == 4) {
                        var_a2_2 = 0;
                        if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
                            var_a1_2 = (u8 *)(gBattle);
                            do {
                                if (*(s8 *)((u8 *)var_a1_2 + 0x2828) != -1) {
                                    *(s8 *)((u8 *)var_a1_2 + 0x2828) = 2;
                                }
                                var_a2_2 += 1;
                                var_a1_2 += 0x2020;
                            } while (var_a2_2 < *(s32 *)((u8 *)gBattle + 0x88D8));
                        }
                    }
                    *(s8 *)((u8 *)temp_t0 + 0x183F) = -1;
                    *(s32 *)((u8 *)temp_t0 + 0x1840) = 0;
                    func_00246E20(arg0);
                    *(s8 *)((u8 *)arg0 + 0x1FF8) = 0;
                    *(s32 *)((u8 *)arg0 + 0xC9C) = 0;
                    *(s8 *)((u8 *)arg0 + 0x2004) = 0;
                    *(s8 *)((u8 *)arg0 + 0xCBD) = 1;
                }
            }
        }
    }
}
