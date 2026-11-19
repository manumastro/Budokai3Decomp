/* Draft (not built): func_001F8ED0 at 0x001F8ED0, size 0x39C, segment battle/btb_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 86 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3B8, original 0x39C
 * Original: asm/nonmatchings/battle/btb_main/func_001F8ED0.s */

// src/battle/btb_main.c func_001F8ED0 size diff=86/238
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
void func_001F8ED0(StageWork *arg0) {
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_16;
    s32 temp_a0_17;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u8 **temp_a0;
    u8 **temp_a0_10;
    u8 **temp_a0_3;
    u8 **temp_a0_8;
    u8 **temp_v1;
    u8 **temp_v1_2;
    u8 **temp_v1_3;
    u8 **temp_v1_4;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_13;
    u8 *temp_a0_18;
    u8 *temp_a0_19;
    u8 *temp_a0_20;
    u8 *temp_a0_21;
    u8 *temp_a0_22;
    u8 *temp_a0_23;
    u8 *temp_a0_2;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_9;
    u8 *var_s2;
    u8 *var_s5;

    var_s5 = (unsigned char *)(arg0);
    if (*(u8 **)((u8 *)arg0 + 0x34) != NULL) {
        var_s4 = 0;
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s5 + 0x20)) + 4) > 0) {
            var_s1 = 0;
            do {
                var_s3 = 0;
                if (*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s5 + 0x34) + var_s1) + 8) > 0) {
                    var_s0 = 0;
                    do {
                        var_s2 = (unsigned char *)(*(s32 *)((u8 *)(var_s1 + *(u8 **)((u8 *)var_s5 + 0x34)) + 0xC) + var_s0);
                        temp_v1 = *(u8 ***)((u8 *)var_s2 + 8);
                        if (temp_v1 != NULL) {
                            amHeap_Free(*temp_v1);
                            temp_a0 = *(u8 ***)((u8 *)var_s2 + 8);
                            if (temp_a0 != NULL) {
                                amHeap_Free(temp_a0);
                            }
                        }
                        temp_v1_2 = *(u8 ***)((u8 *)var_s2 + 0xC);
                        if (temp_v1_2 != NULL) {
                            temp_a0_2 = *temp_v1_2;
                            if (temp_a0_2 != NULL) {
                                amHeap_Free(temp_a0_2);
                            }
                            temp_a0_3 = *(u8 ***)((u8 *)var_s2 + 0xC);
                            if (temp_a0_3 != NULL) {
                                amHeap_Free(temp_a0_3);
                            }
                        }
                        temp_a0_4 = *(u8 **)((u8 *)var_s2 + 0x10);
                        if ((temp_a0_4 != NULL) && (temp_a0_4 != NULL)) {
                            amHeap_Free(temp_a0_4);
                        }
                        temp_a0_5 = *(u8 **)((u8 *)var_s2 + 4);
                        if (temp_a0_5 != NULL) {
                            amHeap_Free(temp_a0_5);
                        }
                        var_s3 += 1;
                        var_s0 += 0x20;
                    } while (var_s3 < *(s32 *)((u8 *)(var_s1 + *(u8 **)((u8 *)var_s5 + 0x34)) + 8));
                }
                temp_a0_6 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s5 + 0x34) + var_s1) + 0xC);
                if (temp_a0_6 != NULL) {
                    amHeap_Free(temp_a0_6);
                }
                var_s4 += 1;
                var_s1 += 0x24;
            } while (var_s4 < *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s5 + 0x20)) + 4));
        }
        temp_a0_7 = *(u8 **)((u8 *)var_s5 + 0x34);
        if (temp_a0_7 != NULL) {
            amHeap_Free(temp_a0_7);
        }
        *(u8 **)((u8 *)var_s5 + 0x34) = NULL;
    }
    if (*(u8 **)((u8 *)var_s5 + 0x3C) != NULL) {
        var_s1 = 0;
        if (*(s32 *)((u8 *)var_s5 + 0x38) > 0) {
            var_s0 = 0;
            do {
                var_s2 = *(u8 **)((u8 *)var_s5 + 0x3C) + var_s0;
                temp_v1_3 = *(u8 ***)((u8 *)var_s2 + 8);
                if (temp_v1_3 != NULL) {
                    amHeap_Free(*temp_v1_3);
                    temp_a0_8 = *(u8 ***)((u8 *)var_s2 + 8);
                    if (temp_a0_8 != NULL) {
                        amHeap_Free(temp_a0_8);
                    }
                }
                temp_v1_4 = *(u8 ***)((u8 *)var_s2 + 0xC);
                if (temp_v1_4 != NULL) {
                    temp_a0_9 = *temp_v1_4;
                    if (temp_a0_9 != NULL) {
                        amHeap_Free(temp_a0_9);
                    }
                    temp_a0_10 = *(u8 ***)((u8 *)var_s2 + 0xC);
                    if (temp_a0_10 != NULL) {
                        amHeap_Free(temp_a0_10);
                    }
                }
                temp_a0_11 = *(u8 **)((u8 *)var_s2 + 0x10);
                if ((temp_a0_11 != NULL) && (temp_a0_11 != NULL)) {
                    amHeap_Free(temp_a0_11);
                }
                temp_a0_12 = *(u8 **)((u8 *)var_s2 + 4);
                if (temp_a0_12 != NULL) {
                    amHeap_Free(temp_a0_12);
                }
                var_s1 += 1;
                var_s0 += 0x20;
            } while (var_s1 < *(s32 *)((u8 *)var_s5 + 0x38));
        }
        temp_a0_13 = *(u8 **)((u8 *)var_s5 + 0x3C);
        if (temp_a0_13 != NULL) {
            amHeap_Free(temp_a0_13);
        }
        *(u8 **)((u8 *)var_s5 + 0x3C) = NULL;
    }
    temp_a0_14 = *(s32 *)((u8 *)var_s5 + 4);
    if (temp_a0_14 != 0) {
        amCdFs_Close((void *)(temp_a0_14), 0);
        *(s32 *)((u8 *)var_s5 + 4) = 0;
    }
    temp_a0_15 = *(s32 *)((u8 *)var_s5 + 8);
    if (temp_a0_15 != 0) {
        amCdFs_Close((void *)(temp_a0_15), 0);
        *(s32 *)((u8 *)var_s5 + 8) = 0;
    }
    temp_a0_16 = *(s32 *)((u8 *)var_s5 + 0xC);
    if (temp_a0_16 != 0) {
        amCdFs_Close((void *)(temp_a0_16), 0);
        *(s32 *)((u8 *)var_s5 + 0xC) = 0;
    }
    temp_a0_17 = *(s32 *)((u8 *)var_s5 + 0x10);
    if (temp_a0_17 != 0) {
        amCdFs_Close((void *)(temp_a0_17), 0);
        *(s32 *)((u8 *)var_s5 + 0x10) = 0;
    }
    temp_a0_18 = *(u8 **)((u8 *)var_s5 + 0x1C);
    if (temp_a0_18 != NULL) {
        if (temp_a0_18 != NULL) {
            amHeap_Free(temp_a0_18);
        }
    } else {
        temp_a0_19 = *(u8 **)((u8 *)var_s5 + 0x20);
        if (temp_a0_19 != NULL) {
            amHeap_Free(temp_a0_19);
        }
        temp_a0_20 = *(u8 **)((u8 *)var_s5 + 0x24);
        if (temp_a0_20 != NULL) {
            amHeap_Free(temp_a0_20);
        }
        temp_a0_21 = *(u8 **)((u8 *)var_s5 + 0x28);
        if (temp_a0_21 != NULL) {
            amHeap_Free(temp_a0_21);
        }
        temp_a0_22 = *(u8 **)((u8 *)var_s5 + 0x2C);
        if (temp_a0_22 != NULL) {
            amHeap_Free(temp_a0_22);
        }
        temp_a0_23 = *(u8 **)((u8 *)var_s5 + 0x30);
        if (temp_a0_23 != NULL) {
            amHeap_Free(temp_a0_23);
        }
    }
}
