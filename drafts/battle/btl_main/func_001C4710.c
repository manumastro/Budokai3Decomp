/* Draft (not built): func_001C4710 at 0x001C4710, size 0x160, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A8, original 0x160
 * Original: asm/nonmatchings/battle/btl_main/func_001C4710.s */

// src/battle/btl_main.c func_001C4710 size diff=55/106
void func_001C4710(BattleWork *arg0) {
    BattleWork *var_s0;
    BattleWork *var_s4;
    f32 temp_f1;
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    u8 *var_s3;

    var_s0 = gBattle;
    var_s4 = arg0;
    temp_a0 = *(s32 *)((u8 *)var_s0 + 0x88F8);
    var_s3 = func_001EA230();
    switch (temp_a0) {                              /* irregular */
    case 5:
        /* fallthrough */
    case 4:
        if ((s8) var_s0->unk8954[0x15A] != 0) {
            if ((s8) var_s0->unk8954[0x15B] == 0) {
                return;
            }
loop_18:
            if (var_s3 == NULL) {

            } else {
                if (!(*(s32 *)((u8 *)var_s3 + 0x38) & 2) && (*(s8 *)((u8 *)var_s3 + 0x35) != *(s32 *)((u8 *)var_s4 + 0x1350))) {
                    var_s2 = 0;
                    if (*(s32 *)((u8 *)var_s3 + 0x28) != 0) {
                        var_s1 = 0;
                        var_s0 = var_s4;
loop_11:
                        if (!(*(f32 *)((u8 *)(*(s32 *)((u8 *)var_s4 + 0xBB4) + var_s1) + 0x18) <= 0.0f)) {
                            temp_f1 = *(f32 *)((u8 *)var_s3 + 0x20) + *(f32 *)((u8 *)(*(s32 *)((u8 *)var_s4 + 0xBB4) + var_s1) + 0x18);
                            if (func_00146E60(&var_s0->unk0000[0x650], var_s3) <= (temp_f1 * temp_f1)) {
                                func_001C4250(var_s4, var_s3, var_s2);
                                return;
                            }
                        }
                        var_s2 += 1;
                        var_s1 += 4;
                        var_s0 += 0x10;
                        if (var_s2 >= 0x16) {
                            goto block_17;
                        }
                        goto loop_11;
                    }
                }
block_17:
                var_s3 = *(u8 **)((u8 *)var_s3 + 0x3C);
                goto loop_18;
            }
        } else {
            return;
        }
        break;
    }
}
