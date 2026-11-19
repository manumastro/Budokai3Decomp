/* Draft (not built): func_001FA810 at 0x001FA810, size 0x8F8, segment unk/unk_1FA3C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); not an lvalue mwccps2.exe Compiler: 336: ((s32)(*temp_a2)) += ((s32)(arg0)); @ 288: ((s32)(*var_s6)) += ((s32)(arg0));
 * Original: asm/nonmatchings/unk/unk_1FA3C0/func_001FA810.s */

// src/unk/unk_1FA3C0.c func_001FA810 cerr diff=-1/0
void func_001FA810(char *arg0) {
    u8 **spA0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_fp;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    u8 **temp_a2;
    u8 **temp_a2_14;
    u8 **temp_a2_19;
    u8 **temp_a2_27;
    u8 **temp_a2_32;
    u8 **temp_a2_6;
    u8 **temp_v1_18;
    u8 **temp_v1_19;
    u8 **temp_v1_2;
    u8 **temp_v1_4;
    u8 **var_s1;
    u8 **var_s6;
    u8 *temp_a2_10;
    u8 *temp_a2_11;
    u8 *temp_a2_12;
    u8 *temp_a2_13;
    u8 *temp_a2_15;
    u8 *temp_a2_16;
    u8 *temp_a2_17;
    u8 *temp_a2_18;
    u8 *temp_a2_20;
    u8 *temp_a2_21;
    u8 *temp_a2_22;
    u8 *temp_a2_23;
    u8 *temp_a2_24;
    u8 *temp_a2_25;
    u8 *temp_a2_26;
    u8 *temp_a2_28;
    u8 *temp_a2_29;
    u8 *temp_a2_2;
    u8 *temp_a2_30;
    u8 *temp_a2_31;
    u8 *temp_a2_33;
    u8 *temp_a2_34;
    u8 *temp_a2_35;
    u8 *temp_a2_36;
    u8 *temp_a2_37;
    u8 *temp_a2_38;
    u8 *temp_a2_39;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a2_5;
    u8 *temp_a2_7;
    u8 *temp_a2_8;
    u8 *temp_a2_9;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_v1;
    u8 *temp_v1_10;
    u8 *temp_v1_11;
    u8 *temp_v1_12;
    u8 *temp_v1_13;
    u8 *temp_v1_14;
    u8 *temp_v1_15;
    u8 *temp_v1_16;
    u8 *temp_v1_17;
    u8 *temp_v1_20;
    u8 *temp_v1_21;
    u8 *temp_v1_22;
    u8 *temp_v1_23;
    u8 *temp_v1_24;
    u8 *temp_v1_3;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;
    u8 *temp_v1_8;
    u8 *temp_v1_9;
    u8 *var_s4;
    u8 *var_s5_2;
    u8 *var_s5_3;
    u8 *var_s5_4;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (temp_v1 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x1C) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1)));
        amFile_Load(*(u8 **)((u8 *)arg0 + 0x1C));
    }
    temp_v1_2 = *(u8 ***)((u8 *)arg0 + 0x20);
    if (temp_v1_2 != NULL) {
        *(u8 ***)((u8 *)arg0 + 0x20) = (u8 **) (((s32)(arg0)) + ((s32)(temp_v1_2)));
        spA0 = *(u8 ***)((u8 *)arg0 + 0x20);
        var_fp = 0;
        if (*(s32 *)((u8 *)arg0 + 4) > 0) {
            do {
                *spA0 = (unsigned char *)(((s32)(arg0)) + ((s32)(*spA0)));
                temp_s1 = *spA0;
                temp_v1_3 = *(u8 **)((u8 *)temp_s1 + 0xA4);
                if (temp_v1_3 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xA4) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_3)));
                    amFile_Load(*(u8 **)((u8 *)temp_s1 + 0xA4));
                }
                temp_v1_4 = *(u8 ***)((u8 *)temp_s1 + 0xA8);
                if (temp_v1_4 != NULL) {
                    *(u8 ***)((u8 *)temp_s1 + 0xA8) = (u8 **) (((s32)(arg0)) + ((s32)(temp_v1_4)));
                    var_s6 = *(u8 ***)((u8 *)temp_s1 + 0xA8);
                    var_s2 = 0;
                    if (*(s32 *)((u8 *)temp_s1 + 0x90) > 0) {
                        do {
                            ((s32)(*var_s6)) += ((s32)(arg0));
                            temp_s0 = *var_s6;
                            *(u8 **)((u8 *)temp_s0 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_s0 + 8))));
                            amFile_Load(*(u8 **)((u8 *)temp_s0 + 8));
                            temp_v1_5 = *(u8 **)((u8 *)temp_s0 + 0xC);
                            if (temp_v1_5 != NULL) {
                                *(u8 **)((u8 *)temp_s0 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_5)));
                                var_s4 = *(u8 **)((u8 *)temp_s0 + 0xC);
                                var_s5 = 0;
                                if (*(s32 *)((u8 *)temp_s0 + 0) > 0) {
                                    do {
                                        *(u8 **)((u8 *)var_s4 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s4 + 4))));
                                        amFile_Load(*(u8 **)((u8 *)var_s4 + 4));
                                        var_s5 += 1;
                                        *(u8 **)((u8 *)var_s4 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s4 + 8))));
                                        var_s4 += 0x10;
                                    } while (var_s5 < *(s32 *)((u8 *)temp_s0 + 0));
                                }
                            }
                            temp_v1_6 = *(u8 **)((u8 *)temp_s0 + 0x10);
                            if (temp_v1_6 != NULL) {
                                *(u8 **)((u8 *)temp_s0 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_6)));
                                var_s5_2 = *(u8 **)((u8 *)temp_s0 + 0x10);
                                var_s4_2 = 0;
                                if (*(s32 *)((u8 *)temp_s0 + 4) > 0) {
                                    do {
                                        *(u8 **)((u8 *)var_s5_2 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s5_2 + 4))));
                                        amFile_Load(*(u8 **)((u8 *)var_s5_2 + 4));
                                        var_s4_2 += 1;
                                        *(u8 **)((u8 *)var_s5_2 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s5_2 + 8))));
                                        var_s5_2 += 0x10;
                                    } while (var_s4_2 < *(s32 *)((u8 *)temp_s0 + 4));
                                }
                            }
                            var_s2 += 1;
                            var_s6 += 4;
                        } while (var_s2 < *(s32 *)((u8 *)temp_s1 + 0x90));
                    }
                }
                temp_v1_7 = *(u8 **)((u8 *)temp_s1 + 0xAC);
                if (temp_v1_7 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xAC) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_7)));
                    var_v1 = 0;
                    if (*(s32 *)((u8 *)temp_s1 + 0x94) > 0) {
                        var_a0 = 0;
                        do {
                            var_v1 += 1;
                            temp_a2 = (unsigned char **)(*(u8 **)((u8 *)temp_s1 + 0xAC) + var_a0);
                            ((s32)(*temp_a2)) += ((s32)(arg0));
                            temp_a2_2 = *(u8 **)((u8 *)temp_s1 + 0xAC) + var_a0;
                            *(u8 **)((u8 *)temp_a2_2 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_2 + 4))));
                            temp_a2_3 = *(u8 **)((u8 *)temp_s1 + 0xAC) + var_a0;
                            *(u8 **)((u8 *)temp_a2_3 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_3 + 8))));
                            temp_a2_4 = *(u8 **)((u8 *)temp_s1 + 0xAC) + var_a0;
                            *(u8 **)((u8 *)temp_a2_4 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_4 + 0xC))));
                            temp_a2_5 = *(u8 **)((u8 *)temp_s1 + 0xAC) + var_a0;
                            *(u8 **)((u8 *)temp_a2_5 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_5 + 0x10))));
                            var_a0 += 0x20;
                        } while (var_v1 < *(s32 *)((u8 *)temp_s1 + 0x94));
                    }
                }
                temp_v1_8 = *(u8 **)((u8 *)temp_s1 + 0xB0);
                if (temp_v1_8 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xB0) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_8)));
                    var_v1_2 = 0;
                    if (*(s32 *)((u8 *)temp_s1 + 0x98) > 0) {
                        var_a0_2 = 0;
                        do {
                            var_v1_2 += 1;
                            temp_a2_6 = (unsigned char **)(*(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2);
                            ((s32)(*temp_a2_6)) += ((s32)(arg0));
                            temp_a2_7 = *(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2;
                            *(u8 **)((u8 *)temp_a2_7 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_7 + 4))));
                            temp_a2_8 = *(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2;
                            *(u8 **)((u8 *)temp_a2_8 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_8 + 8))));
                            temp_a2_9 = *(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2;
                            *(u8 **)((u8 *)temp_a2_9 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_9 + 0xC))));
                            temp_a2_10 = *(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2;
                            *(u8 **)((u8 *)temp_a2_10 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_10 + 0x10))));
                            temp_a2_11 = *(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2;
                            *(u8 **)((u8 *)temp_a2_11 + 0x14) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_11 + 0x14))));
                            temp_a2_12 = *(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2;
                            *(u8 **)((u8 *)temp_a2_12 + 0x18) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_12 + 0x18))));
                            temp_a2_13 = *(u8 **)((u8 *)temp_s1 + 0xB0) + var_a0_2;
                            *(u8 **)((u8 *)temp_a2_13 + 0x1C) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_13 + 0x1C))));
                            var_a0_2 += 0x30;
                        } while (var_v1_2 < *(s32 *)((u8 *)temp_s1 + 0x98));
                    }
                }
                temp_v1_9 = *(u8 **)((u8 *)temp_s1 + 0xB4);
                if (temp_v1_9 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xB4) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_9)));
                    var_v1_3 = 0;
                    if (*(s32 *)((u8 *)temp_s1 + 0x9C) > 0) {
                        var_a0_3 = 0;
                        do {
                            var_v1_3 += 1;
                            temp_a2_14 = (unsigned char **)(*(u8 **)((u8 *)temp_s1 + 0xB4) + var_a0_3);
                            ((s32)(*temp_a2_14)) += ((s32)(arg0));
                            temp_a2_15 = *(u8 **)((u8 *)temp_s1 + 0xB4) + var_a0_3;
                            *(u8 **)((u8 *)temp_a2_15 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_15 + 4))));
                            temp_a2_16 = *(u8 **)((u8 *)temp_s1 + 0xB4) + var_a0_3;
                            *(u8 **)((u8 *)temp_a2_16 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_16 + 8))));
                            temp_a2_17 = *(u8 **)((u8 *)temp_s1 + 0xB4) + var_a0_3;
                            *(u8 **)((u8 *)temp_a2_17 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_17 + 0xC))));
                            temp_a2_18 = *(u8 **)((u8 *)temp_s1 + 0xB4) + var_a0_3;
                            *(u8 **)((u8 *)temp_a2_18 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_18 + 0x10))));
                            var_a0_3 += 0x20;
                        } while (var_v1_3 < *(s32 *)((u8 *)temp_s1 + 0x9C));
                    }
                }
                temp_v1_10 = *(u8 **)((u8 *)temp_s1 + 0xB8);
                if (temp_v1_10 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xB8) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_10)));
                    var_v1_4 = 0;
                    if (*(s32 *)((u8 *)temp_s1 + 0xA0) > 0) {
                        var_a0_4 = 0;
                        do {
                            var_v1_4 += 1;
                            temp_a2_19 = (unsigned char **)(*(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4);
                            ((s32)(*temp_a2_19)) += ((s32)(arg0));
                            temp_a2_20 = *(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4;
                            *(u8 **)((u8 *)temp_a2_20 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_20 + 4))));
                            temp_a2_21 = *(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4;
                            *(u8 **)((u8 *)temp_a2_21 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_21 + 8))));
                            temp_a2_22 = *(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4;
                            *(u8 **)((u8 *)temp_a2_22 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_22 + 0xC))));
                            temp_a2_23 = *(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4;
                            *(u8 **)((u8 *)temp_a2_23 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_23 + 0x10))));
                            temp_a2_24 = *(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4;
                            *(u8 **)((u8 *)temp_a2_24 + 0x14) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_24 + 0x14))));
                            temp_a2_25 = *(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4;
                            *(u8 **)((u8 *)temp_a2_25 + 0x18) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_25 + 0x18))));
                            temp_a2_26 = *(u8 **)((u8 *)temp_s1 + 0xB8) + var_a0_4;
                            *(u8 **)((u8 *)temp_a2_26 + 0x1C) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_26 + 0x1C))));
                            var_a0_4 += 0x30;
                        } while (var_v1_4 < *(s32 *)((u8 *)temp_s1 + 0xA0));
                    }
                }
                temp_v1_11 = *(u8 **)((u8 *)temp_s1 + 0xBC);
                if (temp_v1_11 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xBC) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_11)));
                    func_001FA6A0(*(u8 **)((u8 *)temp_s1 + 0xBC),(struct Bone *)(arg0));
                }
                temp_v1_12 = *(u8 **)((u8 *)temp_s1 + 0xC0);
                if (temp_v1_12 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xC0) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_12)));
                }
                temp_v1_13 = *(u8 **)((u8 *)temp_s1 + 0xC4);
                if (temp_v1_13 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xC4) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_13)));
                    func_001FA6A0(*(u8 **)((u8 *)temp_s1 + 0xC4),(struct Bone *)(arg0));
                }
                temp_v1_14 = *(u8 **)((u8 *)temp_s1 + 0xC8);
                if (temp_v1_14 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xC8) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_14)));
                }
                temp_v1_15 = *(u8 **)((u8 *)temp_s1 + 0xCC);
                if (temp_v1_15 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xCC) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_15)));
                    func_001FA6A0(*(u8 **)((u8 *)temp_s1 + 0xCC),(struct Bone *)(arg0));
                }
                temp_v1_16 = *(u8 **)((u8 *)temp_s1 + 0xD0);
                if (temp_v1_16 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xD0) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_16)));
                }
                temp_v1_17 = *(u8 **)((u8 *)temp_s1 + 0xD8);
                if (temp_v1_17 != NULL) {
                    *(u8 **)((u8 *)temp_s1 + 0xD8) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_17)));
                    var_s0 = 0;
                    if (*(s32 *)((u8 *)temp_s1 + 0xD4) > 0) {
                        var_s2_2 = 0;
                        do {
                            temp_v1_18 = (unsigned char **)(*(u8 **)((u8 *)temp_s1 + 0xD8) + var_s2_2);
                            ((s32)(*temp_v1_18)) += ((s32)(arg0));
                            amFile_Load((void *)(*(*(u8 **)((u8 *)temp_s1 + 0xD8) + var_s2_2)));
                            var_s0 += 1;
                            var_s2_2 += 4;
                        } while (var_s0 < *(s32 *)((u8 *)temp_s1 + 0xD4));
                    }
                }
                var_fp += 1;
                spA0 += 4;
            } while (var_fp < *(s32 *)((u8 *)arg0 + 4));
        }
    }
    temp_v1_19 = *(u8 ***)((u8 *)arg0 + 0x24);
    if (temp_v1_19 != NULL) {
        *(u8 ***)((u8 *)arg0 + 0x24) = (u8 **) (((s32)(arg0)) + ((s32)(temp_v1_19)));
        var_s1 = *(u8 ***)((u8 *)arg0 + 0x24);
        var_s4_3 = 0;
        if (*(s32 *)((u8 *)arg0 + 8) > 0) {
            do {
                ((s32)(*var_s1)) += ((s32)(arg0));
                temp_s0_2 = *var_s1;
                *(u8 **)((u8 *)temp_s0_2 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_s0_2 + 8))));
                amFile_Load(*(u8 **)((u8 *)temp_s0_2 + 8));
                temp_v1_20 = *(u8 **)((u8 *)temp_s0_2 + 0xC);
                if (temp_v1_20 != NULL) {
                    *(u8 **)((u8 *)temp_s0_2 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_20)));
                    var_s5_3 = *(u8 **)((u8 *)temp_s0_2 + 0xC);
                    var_s2_3 = 0;
                    if (*(s32 *)((u8 *)temp_s0_2 + 0) > 0) {
                        do {
                            *(u8 **)((u8 *)var_s5_3 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s5_3 + 4))));
                            amFile_Load(*(u8 **)((u8 *)var_s5_3 + 4));
                            var_s2_3 += 1;
                            *(u8 **)((u8 *)var_s5_3 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s5_3 + 8))));
                            var_s5_3 += 0x10;
                        } while (var_s2_3 < *(s32 *)((u8 *)temp_s0_2 + 0));
                    }
                }
                temp_v1_21 = *(u8 **)((u8 *)temp_s0_2 + 0x10);
                if (temp_v1_21 != NULL) {
                    *(u8 **)((u8 *)temp_s0_2 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_21)));
                    var_s5_4 = *(u8 **)((u8 *)temp_s0_2 + 0x10);
                    var_s2_4 = 0;
                    if (*(s32 *)((u8 *)temp_s0_2 + 4) > 0) {
                        do {
                            *(u8 **)((u8 *)var_s5_4 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s5_4 + 4))));
                            amFile_Load(*(u8 **)((u8 *)var_s5_4 + 4));
                            var_s2_4 += 1;
                            *(u8 **)((u8 *)var_s5_4 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)var_s5_4 + 8))));
                            var_s5_4 += 0x10;
                        } while (var_s2_4 < *(s32 *)((u8 *)temp_s0_2 + 4));
                    }
                }
                var_s4_3 += 1;
                var_s1 += 4;
            } while (var_s4_3 < *(s32 *)((u8 *)arg0 + 8));
        }
    }
    temp_v1_22 = *(u8 **)((u8 *)arg0 + 0x28);
    if (temp_v1_22 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x28) = (u8 *) (((s32)(temp_v1_22)) + ((s32)(arg0)));
        var_v1_5 = 0;
        if (*(s32 *)((u8 *)arg0 + 0xC) > 0) {
            var_a0_5 = 0;
            do {
                var_v1_5 += 1;
                temp_a2_27 = (unsigned char **)(*(u8 **)((u8 *)arg0 + 0x28) + var_a0_5);
                ((s32)(*temp_a2_27)) += ((s32)(arg0));
                temp_a2_28 = *(u8 **)((u8 *)arg0 + 0x28) + var_a0_5;
                *(u8 **)((u8 *)temp_a2_28 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_28 + 4))));
                temp_a2_29 = *(u8 **)((u8 *)arg0 + 0x28) + var_a0_5;
                *(u8 **)((u8 *)temp_a2_29 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_29 + 8))));
                temp_a2_30 = *(u8 **)((u8 *)arg0 + 0x28) + var_a0_5;
                *(u8 **)((u8 *)temp_a2_30 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_30 + 0xC))));
                temp_a2_31 = *(u8 **)((u8 *)arg0 + 0x28) + var_a0_5;
                *(u8 **)((u8 *)temp_a2_31 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_31 + 0x10))));
                var_a0_5 += 0x20;
            } while (var_v1_5 < *(s32 *)((u8 *)arg0 + 0xC));
        }
    }
    temp_v1_23 = *(u8 **)((u8 *)arg0 + 0x2C);
    if (temp_v1_23 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x2C) = (u8 *) (((s32)(temp_v1_23)) + ((s32)(arg0)));
        var_v1_6 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x10) > 0) {
            var_a0_6 = 0;
            do {
                var_v1_6 += 1;
                temp_a2_32 = (unsigned char **)(*(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6);
                ((s32)(*temp_a2_32)) += ((s32)(arg0));
                temp_a2_33 = *(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6;
                *(u8 **)((u8 *)temp_a2_33 + 4) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_33 + 4))));
                temp_a2_34 = *(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6;
                *(u8 **)((u8 *)temp_a2_34 + 8) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_34 + 8))));
                temp_a2_35 = *(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6;
                *(u8 **)((u8 *)temp_a2_35 + 0xC) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_35 + 0xC))));
                temp_a2_36 = *(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6;
                *(u8 **)((u8 *)temp_a2_36 + 0x10) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_36 + 0x10))));
                temp_a2_37 = *(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6;
                *(u8 **)((u8 *)temp_a2_37 + 0x14) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_37 + 0x14))));
                temp_a2_38 = *(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6;
                *(u8 **)((u8 *)temp_a2_38 + 0x18) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_38 + 0x18))));
                temp_a2_39 = *(u8 **)((u8 *)arg0 + 0x2C) + var_a0_6;
                *(u8 **)((u8 *)temp_a2_39 + 0x1C) = (u8 *) (((s32)(arg0)) + ((s32)(*(u8 **)((u8 *)temp_a2_39 + 0x1C))));
                var_a0_6 += 0x30;
            } while (var_v1_6 < *(s32 *)((u8 *)arg0 + 0x10));
        }
    }
    temp_v1_24 = *(u8 **)((u8 *)arg0 + 0x30);
    if (temp_v1_24 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x30) = (u8 *) (((s32)(arg0)) + ((s32)(temp_v1_24)));
    }
}
