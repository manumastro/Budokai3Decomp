/* Draft (not built): func_0022E0B0 at 0x0022E0B0, size 0x574, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); har *' mwccps2.exe Compiler: 88: *temp_t1 = arg0 + temp_t0; @ 76: *(u8 **)((u8 *)arg0 + 0x1C) = (u8 *) (arg0 + temp_v1);
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022E0B0.s */

// src/unk/unk_22E0B0.c func_0022E0B0 cerr diff=-1/0
void **amPkt_Alloc(s32);
s32 func_00227240(void *, void *);
s32 memset(void **, s32, s32);
void func_0022E0B0(u8 *arg0) {
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t3_3;
    s32 var_t5;
    u8 **temp_a1;
    u8 **temp_a2;
    u8 **temp_a2_2;
    u8 **temp_s0;
    u8 **temp_s1;
    u8 **temp_s2;
    u8 **temp_s3;
    u8 **temp_t1;
    u8 **var_a0;
    u8 **var_a1;
    u8 **var_a2;
    u8 **var_t4;
    u8 **var_t5_2;
    u8 **var_t5_3;
    u8 **var_t5_4;
    u8 **var_v1;
    u8 *temp_t0;
    u8 *temp_t0_10;
    u8 *temp_t0_11;
    u8 *temp_t0_12;
    u8 *temp_t0_13;
    u8 *temp_t0_14;
    u8 *temp_t0_15;
    u8 *temp_t0_16;
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t0_9;
    u8 *temp_t3;
    u8 *temp_t3_2;
    u8 *temp_t3_3;
    u8 *temp_t3_4;
    u8 *temp_t3_5;
    u8 *temp_t3_6;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;

    temp_s3 = (u8 **)amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x18) * 4);
    temp_s2 = (u8 **)amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x18) * 4);
    temp_s1 = (u8 **)amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x18) * 4);
    temp_s0 = (u8 **)amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x18) * 4);
    memset(temp_s3, 0, *(s32 *)((u8 *)arg0 + 0x18) * 4);
    memset(temp_s2, 0, *(s32 *)((u8 *)arg0 + 0x18) * 4);
    memset(temp_s1, 0, *(s32 *)((u8 *)arg0 + 0x18) * 4);
    memset(temp_s0, 0, *(s32 *)((u8 *)arg0 + 0x18) * 4);
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (temp_v1 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x1C) = (u8 *) (arg0 + temp_v1);
        var_t2 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x18) > 0) {
            var_a3 = 0;
            var_a2 = temp_s3;
            var_a1 = temp_s2;
            var_a0 = temp_s1;
            var_v1 = temp_s0;
            do {
                temp_t1 = (u8 **)(*(u8 **)((u8 *)arg0 + 0x1C) + var_a3);
                temp_t0 = *temp_t1;
                if (temp_t0 != NULL) {
                    *temp_t1 = arg0 + temp_t0;
                    temp_t0_2 = *temp_t1;
                    temp_t0_3 = *(u8 **)((u8 *)temp_t0_2 + 4);
                    if (temp_t0_3 != NULL) {
                        *(u8 **)((u8 *)temp_t0_2 + 4) = (u8 *) (arg0 + temp_t0_3);
                        var_t5 = 1;
                        if (*temp_s3 != NULL) {
                            var_t4 = temp_s3;
loop_7:
                            if (*var_t4 == *(u8 **)((u8 *)(*temp_t1) + 4)) {
                                var_t5 = 0;
                            } else {
                                var_t4 += 8;
                                if (*var_t4 != NULL) {
                                    goto loop_7;
                                }
                            }
                        }
                        if (var_t5 != 0) {
                            temp_t3 = *(u8 **)((u8 *)(*temp_t1) + 4);
                            temp_t0_4 = *(u8 **)((u8 *)temp_t3 + 0x14);
                            if (temp_t0_4 != NULL) {
                                *(u8 **)((u8 *)temp_t3 + 0x14) = (u8 *) (arg0 + temp_t0_4);
                                *(u8 **)((u8 *)temp_t3 + 0x10) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t3 + 0x10));
                            }
                            temp_t0_5 = *(u8 **)((u8 *)temp_t3 + 0x1C);
                            if (temp_t0_5 != NULL) {
                                *(u8 **)((u8 *)temp_t3 + 0x1C) = (u8 *) (arg0 + temp_t0_5);
                                *(u8 **)((u8 *)temp_t3 + 0x18) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t3 + 0x18));
                            }
                            *var_a2 = temp_t3;
                        }
                    }
                    temp_t0_6 = *temp_t1;
                    temp_t0_7 = *(u8 **)((u8 *)temp_t0_6 + 8);
                    if (temp_t0_7 != NULL) {
                        *(u8 **)((u8 *)temp_t0_6 + 8) = (u8 *) (arg0 + temp_t0_7);
                        var_t3 = 1;
                        if (*temp_s2 != NULL) {
                            var_t5_2 = temp_s2;
loop_20:
                            if (*var_t5_2 == *(u8 **)((u8 *)(*temp_t1) + 8)) {
                                var_t3 = 0;
                            } else {
                                var_t5_2 += 8;
                                if (*var_t5_2 != NULL) {
                                    goto loop_20;
                                }
                            }
                        }
                        if (var_t3 != 0) {
                            temp_t3_2 = *(u8 **)((u8 *)(*temp_t1) + 8);
                            temp_t0_8 = *(u8 **)((u8 *)temp_t3_2 + 0x14);
                            if (temp_t0_8 != NULL) {
                                *(u8 **)((u8 *)temp_t3_2 + 0x14) = (u8 *) (arg0 + temp_t0_8);
                                *(u8 **)((u8 *)temp_t3_2 + 0x10) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t3_2 + 0x10));
                            }
                            temp_t0_9 = *(u8 **)((u8 *)temp_t3_2 + 0x1C);
                            if (temp_t0_9 != NULL) {
                                *(u8 **)((u8 *)temp_t3_2 + 0x1C) = (u8 *) (arg0 + temp_t0_9);
                                *(u8 **)((u8 *)temp_t3_2 + 0x18) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t3_2 + 0x18));
                            }
                            *var_a1 = temp_t3_2;
                        }
                    }
                    temp_t0_10 = *temp_t1;
                    temp_t0_11 = *(u8 **)((u8 *)temp_t0_10 + 0xC);
                    if (temp_t0_11 != NULL) {
                        *(u8 **)((u8 *)temp_t0_10 + 0xC) = (u8 *) (arg0 + temp_t0_11);
                        var_t3_2 = 1;
                        if (*temp_s1 != NULL) {
                            var_t5_3 = temp_s1;
loop_33:
                            if (*var_t5_3 == *(u8 **)((u8 *)(*temp_t1) + 0xC)) {
                                var_t3_2 = 0;
                            } else {
                                var_t5_3 += 8;
                                if (*var_t5_3 != NULL) {
                                    goto loop_33;
                                }
                            }
                        }
                        if (var_t3_2 != 0) {
                            temp_t0_12 = *(u8 **)((u8 *)(*temp_t1) + 0xC);
                            temp_t3_3 = *(u8 **)((u8 *)temp_t0_12 + 0x1C);
                            if (temp_t3_3 != NULL) {
                                *(u8 **)((u8 *)temp_t0_12 + 0x1C) = (u8 *) (arg0 + temp_t3_3);
                                *(u8 **)((u8 *)temp_t0_12 + 0x18) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t0_12 + 0x18));
                            }
                            temp_t3_4 = *(u8 **)((u8 *)temp_t0_12 + 0x2C);
                            if (temp_t3_4 != NULL) {
                                *(u8 **)((u8 *)temp_t0_12 + 0x2C) = (u8 *) (arg0 + temp_t3_4);
                                *(u8 **)((u8 *)temp_t0_12 + 0x28) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t0_12 + 0x28));
                            }
                            temp_t3_5 = *(u8 **)((u8 *)temp_t0_12 + 0x24);
                            if (temp_t3_5 != NULL) {
                                *(u8 **)((u8 *)temp_t0_12 + 0x24) = (u8 *) (arg0 + temp_t3_5);
                                *(u8 **)((u8 *)temp_t0_12 + 0x20) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t0_12 + 0x20));
                            }
                            *var_a0 = temp_t0_12;
                        }
                    }
                    temp_t0_13 = *temp_t1;
                    temp_t0_14 = *(u8 **)((u8 *)temp_t0_13 + 0x10);
                    if (temp_t0_14 != NULL) {
                        *(u8 **)((u8 *)temp_t0_13 + 0x10) = (u8 *) (arg0 + temp_t0_14);
                        var_t3_3 = 1;
                        if (*temp_s0 != NULL) {
                            var_t5_4 = temp_s0;
loop_48:
                            if (*var_t5_4 == *(u8 **)((u8 *)(*temp_t1) + 0x10)) {
                                var_t3_3 = 0;
                            } else {
                                var_t5_4 += 8;
                                if (*var_t5_4 != NULL) {
                                    goto loop_48;
                                }
                            }
                        }
                        if (var_t3_3 != 0) {
                            temp_t3_6 = *(u8 **)((u8 *)(*temp_t1) + 0x10);
                            *(u8 **)((u8 *)temp_t3_6 + 0xC) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t3_6 + 0xC));
                            *(u8 **)((u8 *)temp_t3_6 + 8) = (u8 *) (arg0 + *(u8 **)((u8 *)temp_t3_6 + 8));
                            *var_v1 = temp_t3_6;
                        }
                    }
                    temp_t0_15 = *temp_t1;
                    temp_t0_16 = *(u8 **)((u8 *)temp_t0_15 + 0x18);
                    if (temp_t0_16 != NULL) {
                        *(u8 **)((u8 *)temp_t0_15 + 0x18) = (u8 *) (arg0 + temp_t0_16);
                    }
                }
                var_t2 += 1;
                var_a3 += 4;
                var_a2 += 4;
                var_a1 += 4;
                var_a0 += 4;
                var_v1 += 4;
            } while (var_t2 < *(s32 *)((u8 *)arg0 + 0x18));
        }
    }
    temp_v1_2 = *(u8 **)((u8 *)arg0 + 0x20);
    if (temp_v1_2 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x20) = (u8 *) (arg0 + temp_v1_2);
        var_a0_2 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x18) > 0) {
            var_a1_2 = 0;
            do {
                temp_a2 = (u8 **)(*(u8 **)((u8 *)arg0 + 0x20) + var_a1_2);
                temp_v1_3 = *temp_a2;
                if (temp_v1_3 != NULL) {
                    *temp_a2 = arg0 + temp_v1_3;
                }
                var_a0_2 += 1;
                var_a1_2 += 4;
            } while (var_a0_2 < *(s32 *)((u8 *)arg0 + 0x18));
        }
    }
    temp_v1_4 = *(u8 **)((u8 *)arg0 + 0x24);
    if (temp_v1_4 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x24) = (u8 *) (arg0 + temp_v1_4);
        var_a0_3 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x18) > 0) {
            var_a1_3 = 0;
            do {
                temp_a2_2 = (u8 **)(*(u8 **)((u8 *)arg0 + 0x24) + var_a1_3);
                temp_v1_5 = *temp_a2_2;
                if (temp_v1_5 != NULL) {
                    *temp_a2_2 = arg0 + temp_v1_5;
                }
                var_a0_3 += 1;
                var_a1_3 += 4;
            } while (var_a0_3 < *(s32 *)((u8 *)arg0 + 0x18));
        }
    }
    temp_v1_6 = *(u8 **)((u8 *)arg0 + 0x14);
    if (temp_v1_6 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x14) = (u8 *) (arg0 + temp_v1_6);
        var_s0 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x10) > 0) {
            var_s1 = 0;
            do {
                temp_a1 = (u8 **)(*(u8 **)((u8 *)arg0 + 0x14) + var_s1);
                temp_v1_7 = *temp_a1;
                if (temp_v1_7 != NULL) {
                    *temp_a1 = arg0 + temp_v1_7;
                    func_00227240(arg0, *temp_a1);
                }
                var_s0 += 1;
                var_s1 += 4;
            } while (var_s0 < *(s32 *)((u8 *)arg0 + 0x10));
        }
    }
}
