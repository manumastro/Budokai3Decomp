/* Draft (not built): func_001E2DE0 at 0x001E2DE0, size 0x228, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x250, original 0x228
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E2DE0.s */

// src/unk/unk_1D5B30.c func_001E2DE0 size diff=67/148
void func_001E2DE0(Fighter *arg0) {
    s32 *var_a2;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f1;
    f32 var_f21;
    f32 var_f3;
    s16 temp_a3;
    s16 var_a3;
    s32 temp_a0;
    s32 var_a0;
    s32 var_t1;
    u8 *temp_a2;
    u8 *temp_t0;
    u8 *var_t0;

    if (!(*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f)) {
        temp_t0 = *(u8 **)((u8 *)arg0 + 0xBB0);
        var_a3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x16);
        var_a2 = (int *)(&D_004693C0);
        if (var_a3 < 0) {
            var_a3 = (s16) *(s32 *)((u8 *)arg0 + 0xBA4);
        }
loop_7:
        temp_a0 = *(s32 *)((u8 *)var_a2 + 0);
        if (temp_a0 == -1) {
            var_a0 = 0;
        } else if ((*(s32 *)((u8 *)arg0 + 0x1CFC) == temp_a0) && (var_a3 >= *(s32 *)((u8 *)var_a2 + 4))) {
            var_a0 = *(s32 *)((u8 *)var_a2 + 8);
        } else {
            var_a2 += 0xC;
            goto loop_7;
        }
        if (var_a0 != 1) {
            temp_f20 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0x1A44);
            var_f21 = (f32) *(s16 *)((u8 *)temp_t0 + 0xC) / 100.0f;
            if ((*(s16 *)((u8 *)temp_t0 + 0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                var_f21 *= 2.0f;
            }
            if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
                var_t0 = *(u8 **)((u8 *)arg0 + 0x1CF4);
                var_f3 = 100.0f;
                temp_a3 = *(s16 *)((u8 *)var_t0 + 0x34);
                var_t1 = 0;
                if (temp_a3 > 0) {
                    do {
                        temp_a2 = ((u8 *)&D_004E0660) + (*(s16 *)((u8 *)var_t0 + 0x36) * 0x28);
                        if (*(u8 *)((u8 *)temp_a2 + 0x15) == 0x17) {
                            var_f3 -= ((f32) *(s16 *)((u8 *)temp_a2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f;
                        }
                        var_t1 += 1;
                        var_t0 += 2;
                    } while (var_t1 < temp_a3);
                }
                var_f1 = (2.0f * var_f3) / 100.0f;
                if (!(var_f1 <= 0.0f)) {

                } else {
                    var_f1 = 0.0f;
                }
                var_f21 *= var_f1;
            }
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x1A40) - (temp_f20 * var_f21);
            *(f32 *)((u8 *)arg0 + 0x1A40) = temp_f1;
            if (temp_f1 <= 0.0f) {
                *(f32 *)((u8 *)arg0 + 0x17D0) = 0.0f;
                *(s8 *)((u8 *)arg0 + 0x200F) = 1;
                if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
                    func_001D7CC0((Fighter *)(arg0), 1);
                }
            }
        }
    }
}
