/* Draft (not built): func_001D80A0 at 0x001D80A0, size 0x27C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ion from 'short' to 'struct Fighter *' @ 879: var_v1 = (struct Fighter *)(func_001DFA90(temp_a2, temp_a2, temp_a3) > 0);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D80A0.s */

// src/unk/unk_1D5B30.c func_001D80A0 cerr diff=-1/0
void func_001D80A0(u8 *arg0, u32 arg1) {
    s16 temp_a1;
    s16 temp_a2;
    s32 temp_a3;
    s32 var_a1;
    s32 var_t0;
    s32 var_v1;
    u8 *temp_s0;
    u8 *var_a3;

    temp_s0 = (u8 *)(gBattle);
    if ((*(s32 *)((u8 *)temp_s0 + 0x88F8) != 5) && (*(s16 *)((u8 *)temp_s0 + 0x7FA) == arg1) && (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0)) {
        temp_a2 = *(s16 *)((u8 *)temp_s0 + 0x7FC);
        var_v1 = 0;
        switch (arg1) {
        case 1:
            temp_a3 = temp_a2 * 0x28;
            if (*(u8 *)((u8 *)(&D_004E0660 + temp_a3) + 0xA) & 3) {
                var_a3 = *(u8 **)((u8 *)arg0 + 0x1CF4);
                temp_a1 = *(s16 *)((u8 *)var_a3 + 0x34);
                var_t0 = 0;
                if (temp_a1 > 0) {
loop_9:
                    if (temp_a2 == *(s16 *)((u8 *)var_a3 + 0x36)) {
block_33:
                        var_v1 = 1;
                    } else {
                        var_t0 += 1;
                        var_a3 += 2;
                        if (var_t0 >= temp_a1) {

                        } else {
                            goto loop_9;
                        }
                    }
                }
            } else {
                var_v1 = (struct Fighter *)(func_001DFA90(temp_a2, temp_a2, temp_a3) > 0);
            }
            break;
        case 2:
        case 5:
            if ((temp_a2 == *(s16 *)((u8 *)arg0 + 0x1A58)) || (temp_a2 == *(s16 *)((u8 *)arg0 + 0x1FF0)) || (temp_a2 == *(s16 *)((u8 *)temp_s0 + 0x894C))) {
                goto block_33;
            }
            break;
        case 3:
            if ((temp_a2 == *(s16 *)((u8 *)temp_s0 + 0x894C)) && (*(s16 *)((u8 *)temp_s0 + 0x894E) == 1)) {
                var_v1 = 1;
            }
            break;
        case 4:
            if ((temp_a2 == *(s16 *)((u8 *)temp_s0 + 0x894C)) && (*(s16 *)((u8 *)temp_s0 + 0x894E) == 0)) {
                goto block_33;
            }
            break;
        case 6:
            if (!((f32) temp_a2 < *(f32 *)((u8 *)temp_s0 + 0x8908))) {
                goto block_33;
            }
            break;
        case 7:
            if ((f32) temp_a2 <= *(f32 *)((u8 *)temp_s0 + 0x8908)) {
                goto block_33;
            }
            break;
        case 8:
            if ((f32) temp_a2 <= *(f32 *)((u8 *)arg0 + 0x17C0)) {
                goto block_33;
            }
            break;
        case 9:
            if (*(s8 *)((u8 *)temp_s0 + 0x8AB1) != 0) {
                goto block_33;
            }
            break;
        }
        if (var_v1 != 0) {
            if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
                var_a1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
            } else {
                var_a1 = *(s32 *)((u8 *)arg0 + 0x1350);
            }
            *(s16 *)((u8 *)(gBattle + (var_a1 * 0x48)) + 0x89C2) = 1;
            *(s8 *)((u8 *)temp_s0 + 0x897C) = 1;
        }
    }
}
