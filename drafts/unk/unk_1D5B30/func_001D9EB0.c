/* Draft (not built): func_001D9EB0 at 0x001D9EB0, size 0x298, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); version from 'int' to 'void *' @ 1702: 9B00(*(s32 *)((u8 *)arg0 + 0x1350) + 2, var_s0, 0, arg0 + 0x1A70, 0, 0x3F800000);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D9EB0.s */

// src/unk/unk_1D5B30.c func_001D9EB0 cerr diff=-1/0
void func_001D9EB0(u8 *arg0, s32 arg1) {
    s32 *var_a1;
    s32 temp_a0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_s0;
    u8 *temp_v0;

    var_s0 = arg1;
    if (var_s0 >= 0x7D0) {
        var_s0 -= 0x7D0;
        goto block_5;
    }
    if (var_s0 < 0x3E8) {
block_5:
        if (var_s0 != 0x190) {
            if (var_s0 >= 0x258) {
                if ((u32) ((func_0012EAE0(0x20) % 100U) + 1) < 0x3DU) {
                    var_s0 -= 0x258;
                    goto block_17;
                }
            } else if (var_s0 >= 0x12C) {
                if ((u32) ((func_0012EAE0(0x20) % 100U) + 1) < 0x1FU) {
                    var_s0 -= 0x12C;
                    goto block_17;
                }
            } else if (var_s0 >= 0x64) {
                temp_v0 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x1CF8) + ((var_s0 - 0x64) * 4));
                temp_s0 = temp_v0 + 0x2C;
                if ((*(s8 *)((u8 *)temp_v0 + 0x2F) >= 0x64) || ((u32) *(s8 *)((u8 *)temp_s0 + 3) >= (u32) ((func_0012EAE0(0x20) % 100U) + 1))) {
                    var_s0 = *(s16 *)((u8 *)temp_v0 + 0x2C) + (func_0012EAE0(0x20) % (u32) *(s8 *)((u8 *)temp_s0 + 2));
                    goto block_17;
                }
            } else {
block_17:
                if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
                    AdxSlot_Stop(gBattle + ((*(s32 *)((u8 *)arg0 + 0x1350) + 3) << 5) + 0x5C4);
                }
                if (*(s32 *)((u8 *)arg0 + 0x1A70) >= 0) {
                    func_00144430(arg0 + 0x1A70);
                    *(s32 *)((u8 *)arg0 + 0x1A70) = -1;
                }
                func_001E73C0((void *)(arg0 + 0x650));
                func_001E73E0(arg0 + 0x650, var_s0, 1);
                var_a1 = (s32 *)(&D_004693C0);
                var_v0 = (s32)(D_004693C0);
                temp_a0 = *(s32 *)((u8 *)arg0 + 0x1CFC);
                if (var_v0 != -1) {
loop_23:
                    if ((temp_a0 == var_v0) && (*(s32 *)((u8 *)arg0 + 0xBA4) >= *(s32 *)((u8 *)var_a1 + 4))) {
                        var_v1 = *(s32 *)((u8 *)var_a1 + 8);
                    } else {
                        var_a1 += 0xC;
                        var_v0 = *var_a1;
                        if (var_v0 == -1) {
                            goto block_27;
                        }
                        goto loop_23;
                    }
                } else {
block_27:
                    var_v1 = 0;
                }
                switch (var_v1) {                   /* irregular */
                case 2:
                    if (temp_a0 != 0x4C) {
                    case 1:
                        var_s0 += 0x37;
                    }
                    break;
                }
                func_001E9B00(*(s32 *)((u8 *)arg0 + 0x1350) + 2, var_s0, 0, arg0 + 0x1A70, 0, 0x3F800000);
            }
        }
    }
}
