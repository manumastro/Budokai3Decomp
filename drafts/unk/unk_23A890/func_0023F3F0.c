/* Draft (not built): func_0023F3F0 at 0x0023F3F0, size 0x21C, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )temp_s0 + 4) + (var_s5_2 * 2)); @ 424: s16 *)((u8 *)arg0 + 0x34) = (s16) *(*(s32 *)((u8 *)temp_s0 + 8) + (var_s6 * 2));
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023F3F0.s */

// src/unk/unk_23A890.c func_0023F3F0 cerr diff=-1/0
extern s32 D_00450070[];
s32 func_0023F3F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_a1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_v0;
    u8 *temp_s0;

    var_s6 = 0;
    temp_s0 = **(u8 ***)((u8 *)arg2 + 8);
    var_s1 = 0;
    if (*(s8 *)((u8 *)temp_s0 + 0xD) > 0) {
        var_s5 = 0;
loop_2:
        if (BtlChara_Reset(arg1, *(s32 *)(*(s32 *)((u8 *)temp_s0 + 8) + var_s5)) != 0) {
            temp_v0 = func_00253600(arg2, *(s32 *)(*(s32 *)((u8 *)temp_s0 + 8) + var_s5));
            if (arg3 < (var_s1 + temp_v0)) {
                *(s16 *)((u8 *)arg0 + 0x34) = (s16) *(*(s32 *)((u8 *)temp_s0 + 8) + (var_s6 * 2));
                *(s16 *)((u8 *)arg0 + 0x36) = (s16) (arg3 - var_s1);
                return 1;
            }
            var_s1 += temp_v0;
            goto block_7;
        }
block_7:
        var_s6 += 1;
        var_s5 += 2;
        if (var_s6 >= *(s8 *)((u8 *)temp_s0 + 0xD)) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    var_s5_2 = 0;
    if (*(s8 *)((u8 *)temp_s0 + 0xC) > 0) {
        var_s6_2 = 0;
loop_11:
        if (BtlChara_Reset(arg1, *(s32 *)(*(s32 *)((u8 *)temp_s0 + 4) + var_s6_2)) != 0) {
            var_v0 = func_00253600(arg2, *(s32 *)(*(s32 *)((u8 *)temp_s0 + 4) + var_s6_2));
            if (var_v0 == 0) {
                if (D_00450070 != 0) {
                    var_a1 = (int *)(&D_00450070);
loop_15:
                    if (*(s32 *)(*(s32 *)((u8 *)temp_s0 + 4) + var_s6_2) == *var_a1) {
                        var_v0 = 1;
                        *(s8 *)((u8 *)arg0 + 0x38) = 0x1B;
                    } else {
                        var_a1 += 4;
                        if (*var_a1 == 0) {

                        } else {
                            goto loop_15;
                        }
                    }
                }
            } else {
                *(s8 *)((u8 *)arg0 + 0x38) = 0;
            }
            if (arg3 < (var_s1 + var_v0)) {
                *(s16 *)((u8 *)arg0 + 0x34) = (s16) *(*(s32 *)((u8 *)temp_s0 + 4) + (var_s5_2 * 2));
                *(s16 *)((u8 *)arg0 + 0x36) = (s16) (arg3 - var_s1);
                return 1;
            }
            var_s1 += var_v0;
            goto block_24;
        }
block_24:
        var_s5_2 += 1;
        var_s6_2 += 2;
        if (var_s5_2 >= *(s8 *)((u8 *)temp_s0 + 0xC)) {
            goto block_26;
        }
        goto loop_11;
    }
block_26:
    *(s16 *)((u8 *)arg0 + 0x34) = 0;
    *(s16 *)((u8 *)arg0 + 0x36) = 0;
    return 0;
}
