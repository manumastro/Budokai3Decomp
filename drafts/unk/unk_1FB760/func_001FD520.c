/* Draft (not built): func_001FD520 at 0x001FD520, size 0x2DC, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); emp_a2 * 4))) + 0xC) + (*(s32 *)((u8 *)temp_v0 + 4) * 4)); @ 305: temp_s5 = *(*(s32 *)((u8 *)D_0051CD08 + 8) + temp_s1);
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FD520.s */

// src/unk/unk_1FB760.c func_001FD520 cerr diff=-1/0
s32 BtbBg_GetFlag8(void **, s32);
extern void *D_0051CD04;
extern void *D_0051CD08;
extern void BtbBg_ClearFlag10(void);
extern void BtbBg_ClearFlag8(void);
extern void BtbBg_ClearFlag4(void);
extern void BtbBg_ClearFlag2(void);
s32 func_001FD520(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_a2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_v0;
    u8 **temp_a0_4;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s5;
    u8 *temp_v0;
    u8 *temp_v1_2;
    u8 *var_a0;

    var_s4 = 0;
    var_s3 = 1;
    temp_s1 = arg0 * 4;
    temp_s5 = *(*(s32 *)((u8 *)D_0051CD08 + 8) + temp_s1);
    if (arg2 == NULL) {
        var_s6 = 0;
        if (*(s32 *)((u8 *)temp_s5 + 4) > 0) {
            var_s2 = 0;
            do {
                temp_v0 = (u8 *)(*(s32 *)((u8 *)temp_s5 + 8) + var_s2);
                temp_a2 = *(s32 *)((u8 *)temp_v0 + 0);
                temp_v1 = *(s32 *)((u8 *)D_0051CD04 + 8);
                temp_a0 = *(*(s32 *)((u8 *)(*(temp_v1 + (temp_a2 * 4))) + 0xC) + (*(s32 *)((u8 *)temp_v0 + 4) * 4));
                if (*(s32 *)((u8 *)temp_a0 + 0) & 1) {
                    if (temp_a2 != 0) {

                    } else {
                        temp_a3 = *(s32 *)((u8 *)temp_a0 + 4);
                        if (temp_a3 == 0) {
                            var_s3 = 0;
                        }
                        if (temp_a3 > 0) {
                            var_a2 = 0;
                            temp_a0_2 = *(temp_s1 + *(s32 *)((u8 *)D_0051CD08 + 8));
                            temp_v0_2 = *(s32 *)((u8 *)temp_a0_2 + 4);
                            var_a1 = 0;
                            if (temp_v0_2 > 0) {
                                var_a0 = *(u8 **)((u8 *)temp_a0_2 + 8);
loop_11:
                                if (**(*(s32 *)((u8 *)(*(temp_v1 + (*(s32 *)((u8 *)var_a0 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)var_a0 + 4) * 4)) & 8) {
                                    var_v0 = 1;
                                } else {
                                    var_a1 += 1;
                                    var_a0 += 0x10;
                                    if (var_a1 >= temp_v0_2) {
                                        goto block_15;
                                    }
                                    goto loop_11;
                                }
                            } else {
block_15:
                                var_v0 = 0;
                            }
                            if (var_v0 != 0) {
                                var_a2 = 2;
                            }
                            func_001FD300(arg1, temp_a3 - 1, var_a2, temp_a3);
                            var_s4 = (var_s4 & ~2) | 2;
                        }
                    }
                }
                var_s6 += 1;
                var_s2 += 0x10;
            } while (var_s6 < *(s32 *)((u8 *)temp_s5 + 4));
        }
    } else {
        var_s3 = 0;
        var_s0 = 0;
        if (*(s32 *)((u8 *)temp_s5 + 4) > 0) {
            var_s1 = 0;
            do {
                temp_a0_3 = (u8 *)(*(s32 *)((u8 *)temp_s5 + 8) + var_s1);
                temp_a1 = *(s32 *)((u8 *)temp_a0_3 + 0);
                temp_a0_4 = (u8 **)(*(s32 *)((u8 *)D_0051CD04 + 8) + (temp_a1 * 4));
                temp_v1_2 = *(*(s32 *)((u8 *)(*temp_a0_4) + 0xC) + (*(s32 *)((u8 *)temp_a0_3 + 4) * 4));
                if ((*(s32 *)((u8 *)temp_v1_2 + 0) & 1) && (temp_a1 == 1)) {
                    temp_s6 = *(s32 *)((u8 *)temp_v1_2 + 4);
                    if ((temp_s6 > 0) && (BtbBg_GetFlag8(temp_a0_4, temp_a1) != 0)) {
                        *arg2 = temp_s6 - 1;
                    }
                }
                var_s0 += 1;
                var_s1 += 0x10;
            } while (var_s0 < *(s32 *)((u8 *)temp_s5 + 4));
        }
    }
    if (var_s4 & 2) {
        BtbBg_ClearFlag2();
    }
    if (var_s4 & 8) {
        BtbBg_ClearFlag8();
    }
    if (var_s4 & 0x10) {
        BtbBg_ClearFlag10();
    }
    if (var_s4 & 4) {
        BtbBg_ClearFlag4();
    }
    return var_s3;
}
