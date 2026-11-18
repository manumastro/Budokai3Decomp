/* Draft (not built): func_002DBFE0 at 0x002DBFE0, size 0xC64, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 534 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xBC4, original 0xC64
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DBFE0.s */

// src/unk/unk_2DB970.c func_002DBFE0 size diff=534/753
s32 func_00228430(s32);
s32 func_0022C060(void *, s32);
s32 func_0022C7D0(void *, s32, s8 *, s8, s32);
extern s8 D_00456B10;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00492FCC;
extern s32 D_0049302E;
extern void func_00228410(void);
extern void func_0022CD00(void *);
extern char D_004B4B40[];
extern char D_00492FCE[];
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002DBFE0(void) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a3_5;
    s32 var_a3_6;
    s32 var_a3_7;
    s32 var_a3_8;
    s32 var_a3_9;
    s32 var_t1;
    s32 var_t1_10;
    s32 var_t1_11;
    s32 var_t1_12;
    s32 var_t1_13;
    s32 var_t1_14;
    s32 var_t1_15;
    s32 var_t1_16;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_t1_4;
    s32 var_t1_5;
    s32 var_t1_6;
    s32 var_t1_7;
    s32 var_t1_8;
    s32 var_t1_9;
    s8 *var_a2;
    s8 *var_t0;
    s8 *var_t0_2;
    s8 *var_t0_3;
    s8 *var_t0_4;
    s8 *var_t0_5;
    s8 *var_t0_6;
    s8 *var_t0_7;
    s8 *var_t0_8;
    s8 var_a3;
    u16 temp_a0;
    u8 *temp_a0_10;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_s0;
    u8 *temp_t0;
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t2;
    u8 *temp_t2_2;
    u8 *temp_t2_3;
    u8 *temp_t2_4;
    u8 *temp_t2_5;
    u8 *temp_t2_6;
    u8 *temp_t2_7;
    u8 *temp_t2_8;
    u8 *var_s1;

    temp_s0 = (u8 *)(gOptionWork);
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x380);
    var_a3 = temp_v1 * 0xB8;
    temp_a0 = *(&D_00492FCC + var_a3);
    temp_a1 = *(D_00492FCE + var_a3) | *(&D_0049302E + var_a3);
    var_s1 = NULL;
    if (temp_a0 & 0x400) {
        if (temp_a1 & 0x80) {
            var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
            temp_t2 = (u8 *)(var_a2 + 0x2BA86);
            var_a3 = *(s8 *)((u8 *)temp_t2 + 4);
            var_t1 = 0;
            var_t0 = &D_00456B10;
loop_3:
            if (*var_t0 == var_a3) {

            } else {
                var_t1 += 1;
                var_t0 += 1;
                if (var_t1 >= 0xA) {
                    var_t1 = 0;
                } else {
                    goto loop_3;
                }
            }
            var_t1_2 = var_t1 - 1;
            if (var_t1_2 < 0) {
                var_t1_2 = 9;
            }
            *(s8 *)((u8 *)temp_t2 + 4) = (s8) (&D_00456B10)[var_t1_2];
            *(s8 *)((u8 *)var_a2 + 0x2BAA6) = (s8) *(s8 *)((u8 *)temp_t2 + 4);
        } else {
            var_a2 = (s8 *) (temp_a1 & 0x20);
            var_a3 = temp_v1 * 4;
            if (var_a2 != NULL) {
                var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
                temp_t2_2 = (u8 *)(var_a2 + 0x2BA86);
                var_a3 = *(s8 *)((u8 *)temp_t2_2 + 4);
                var_t1_3 = 0;
                var_t0_2 = &D_00456B10;
loop_13:
                if (*var_t0_2 == var_a3) {

                } else {
                    var_t1_3 += 1;
                    var_t0_2 += 1;
                    if (var_t1_3 >= 0xA) {
                        var_t1_3 = 0;
                    } else {
                        goto loop_13;
                    }
                }
                var_t1_4 = var_t1_3 + 1;
                if (var_t1_4 >= 0xA) {
                    var_t1_4 = 0;
                }
                *(s8 *)((u8 *)temp_t2_2 + 4) = (s8) (&D_00456B10)[var_t1_4];
                *(s8 *)((u8 *)var_a2 + 0x2BAA6) = (s8) *(s8 *)((u8 *)temp_t2_2 + 4);
            }
        }
        var_s1 = *(u8 **)((u8 *)temp_s0 + 0xD8);
    } else if (temp_a0 & 0x100) {
        if (temp_a1 & 0x80) {
            var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
            temp_t2_3 = (u8 *)(var_a2 + 0x2BA86);
            var_a3 = *(s8 *)((u8 *)temp_t2_3 + 2);
            var_t1_5 = 0;
            var_t0_3 = &D_00456B10;
loop_25:
            if (*var_t0_3 == var_a3) {

            } else {
                var_t1_5 += 1;
                var_t0_3 += 1;
                if (var_t1_5 >= 0xA) {
                    var_t1_5 = 0;
                } else {
                    goto loop_25;
                }
            }
            var_t1_6 = var_t1_5 - 1;
            if (var_t1_6 < 0) {
                var_t1_6 = 9;
            }
            *(s8 *)((u8 *)temp_t2_3 + 2) = (s8) (&D_00456B10)[var_t1_6];
            *(s8 *)((u8 *)var_a2 + 0x2BAA4) = (s8) *(s8 *)((u8 *)temp_t2_3 + 2);
        } else {
            var_a2 = (s8 *) (temp_a1 & 0x20);
            var_a3 = temp_v1 * 4;
            if (var_a2 != NULL) {
                var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
                temp_t2_4 = (u8 *)(var_a2 + 0x2BA86);
                var_a3 = *(s8 *)((u8 *)temp_t2_4 + 2);
                var_t1_7 = 0;
                var_t0_4 = &D_00456B10;
loop_35:
                if (*var_t0_4 == var_a3) {

                } else {
                    var_t1_7 += 1;
                    var_t0_4 += 1;
                    if (var_t1_7 >= 0xA) {
                        var_t1_7 = 0;
                    } else {
                        goto loop_35;
                    }
                }
                var_t1_8 = var_t1_7 + 1;
                if (var_t1_8 >= 0xA) {
                    var_t1_8 = 0;
                }
                *(s8 *)((u8 *)temp_t2_4 + 2) = (s8) (&D_00456B10)[var_t1_8];
                *(s8 *)((u8 *)var_a2 + 0x2BAA4) = (s8) *(s8 *)((u8 *)temp_t2_4 + 2);
            }
        }
        var_s1 = *(u8 **)((u8 *)temp_s0 + 0xD4);
    } else if (temp_a0 & 0x800) {
        if (temp_a1 & 0x80) {
            var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
            temp_t2_5 = (u8 *)(var_a2 + 0x2BA86);
            var_a3 = *(s8 *)((u8 *)temp_t2_5 + 5);
            var_t1_9 = 0;
            var_t0_5 = &D_00456B10;
loop_47:
            if (*var_t0_5 == var_a3) {

            } else {
                var_t1_9 += 1;
                var_t0_5 += 1;
                if (var_t1_9 >= 0xA) {
                    var_t1_9 = 0;
                } else {
                    goto loop_47;
                }
            }
            var_t1_10 = var_t1_9 - 1;
            if (var_t1_10 < 0) {
                var_t1_10 = 9;
            }
            *(s8 *)((u8 *)temp_t2_5 + 5) = (s8) (&D_00456B10)[var_t1_10];
            *(s8 *)((u8 *)var_a2 + 0x2BAA7) = (s8) *(s8 *)((u8 *)temp_t2_5 + 5);
        } else {
            var_a2 = (s8 *) (temp_a1 & 0x20);
            var_a3 = temp_v1 * 4;
            if (var_a2 != NULL) {
                var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
                temp_t2_6 = (u8 *)(var_a2 + 0x2BA86);
                var_a3 = *(s8 *)((u8 *)temp_t2_6 + 5);
                var_t1_11 = 0;
                var_t0_6 = &D_00456B10;
loop_57:
                if (*var_t0_6 == var_a3) {

                } else {
                    var_t1_11 += 1;
                    var_t0_6 += 1;
                    if (var_t1_11 >= 0xA) {
                        var_t1_11 = 0;
                    } else {
                        goto loop_57;
                    }
                }
                var_t1_12 = var_t1_11 + 1;
                if (var_t1_12 >= 0xA) {
                    var_t1_12 = 0;
                }
                *(s8 *)((u8 *)temp_t2_6 + 5) = (s8) (&D_00456B10)[var_t1_12];
                *(s8 *)((u8 *)var_a2 + 0x2BAA7) = (s8) *(s8 *)((u8 *)temp_t2_6 + 5);
            }
        }
        var_s1 = *(u8 **)((u8 *)temp_s0 + 0xE0);
    } else {
        var_a2 = (s8 *) (temp_a1 & 0x80);
        if (temp_a0 & 0x200) {
            if (var_a2 != NULL) {
                var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
                temp_t2_7 = (u8 *)(var_a2 + 0x2BA86);
                var_a3 = *(s8 *)((u8 *)temp_t2_7 + 3);
                var_t1_13 = 0;
                var_t0_7 = &D_00456B10;
loop_69:
                if (*var_t0_7 == var_a3) {

                } else {
                    var_t1_13 += 1;
                    var_t0_7 += 1;
                    if (var_t1_13 >= 0xA) {
                        var_t1_13 = 0;
                    } else {
                        goto loop_69;
                    }
                }
                var_t1_14 = var_t1_13 - 1;
                if (var_t1_14 < 0) {
                    var_t1_14 = 9;
                }
                *(s8 *)((u8 *)temp_t2_7 + 3) = (s8) (&D_00456B10)[var_t1_14];
                *(s8 *)((u8 *)var_a2 + 0x2BAA5) = (s8) *(s8 *)((u8 *)temp_t2_7 + 3);
            } else {
                var_a2 = (s8 *) (temp_a1 & 0x20);
                var_a3 = temp_v1 * 4;
                if (var_a2 != NULL) {
                    var_a2 = (s8 *)(D_004B4B40 + (temp_v1 * 0xA));
                    temp_t2_8 = (u8 *)(var_a2 + 0x2BA86);
                    var_a3 = *(s8 *)((u8 *)temp_t2_8 + 3);
                    var_t1_15 = 0;
                    var_t0_8 = &D_00456B10;
loop_79:
                    if (*var_t0_8 == var_a3) {

                    } else {
                        var_t1_15 += 1;
                        var_t0_8 += 1;
                        if (var_t1_15 >= 0xA) {
                            var_t1_15 = 0;
                        } else {
                            goto loop_79;
                        }
                    }
                    var_t1_16 = var_t1_15 + 1;
                    if (var_t1_16 >= 0xA) {
                        var_t1_16 = 0;
                    }
                    *(s8 *)((u8 *)temp_t2_8 + 3) = (s8) (&D_00456B10)[var_t1_16];
                    *(s8 *)((u8 *)var_a2 + 0x2BAA5) = (s8) *(s8 *)((u8 *)temp_t2_8 + 3);
                }
            }
            var_s1 = *(u8 **)((u8 *)temp_s0 + 0xDC);
        }
    }
    if (temp_a0 & 0x8000) {
        if (temp_a1 & 0x80) {
            var_a3_2 = 0;
            var_a2 = &D_00456B10;
            temp_a0_2 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0 = temp_a0_2 + 0x2BA86;
loop_91:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0 + 9)) {

            } else {
                var_a3_2 += 1;
                var_a2 += 1;
                if (var_a3_2 >= 0xA) {
                    var_a3_2 = 0;
                } else {
                    goto loop_91;
                }
            }
            var_a3 = var_a3_2 - 1;
            if (var_a3 < 0) {
                var_a3 = 9;
            }
            *(s8 *)((u8 *)temp_t0 + 9) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_2 + 0x2BAAB) = (s8) *(s8 *)((u8 *)temp_t0 + 9);
        } else if (temp_a1 & 0x20) {
            var_a3_3 = 0;
            var_a2 = &D_00456B10;
            temp_a0_3 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0_2 = temp_a0_3 + 0x2BA86;
loop_101:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0_2 + 9)) {

            } else {
                var_a3_3 += 1;
                var_a2 += 1;
                if (var_a3_3 >= 0xA) {
                    var_a3_3 = 0;
                } else {
                    goto loop_101;
                }
            }
            var_a3 = var_a3_3 + 1;
            if (var_a3 >= 0xA) {
                var_a3 = 0;
            }
            *(s8 *)((u8 *)temp_t0_2 + 9) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_3 + 0x2BAAB) = (s8) *(s8 *)((u8 *)temp_t0_2 + 9);
        }
        var_s1 = *(u8 **)((u8 *)temp_s0 + 0xF0);
    } else if (temp_a0 & 0x1000) {
        if (temp_a1 & 0x80) {
            var_a3_4 = 0;
            var_a2 = &D_00456B10;
            temp_a0_4 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0_3 = temp_a0_4 + 0x2BA86;
loop_113:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0_3 + 6)) {

            } else {
                var_a3_4 += 1;
                var_a2 += 1;
                if (var_a3_4 >= 0xA) {
                    var_a3_4 = 0;
                } else {
                    goto loop_113;
                }
            }
            var_a3 = var_a3_4 - 1;
            if (var_a3 < 0) {
                var_a3 = 9;
            }
            *(s8 *)((u8 *)temp_t0_3 + 6) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_4 + 0x2BAA8) = (s8) *(s8 *)((u8 *)temp_t0_3 + 6);
        } else if (temp_a1 & 0x20) {
            var_a3_5 = 0;
            var_a2 = &D_00456B10;
            temp_a0_5 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0_4 = temp_a0_5 + 0x2BA86;
loop_123:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0_4 + 6)) {

            } else {
                var_a3_5 += 1;
                var_a2 += 1;
                if (var_a3_5 >= 0xA) {
                    var_a3_5 = 0;
                } else {
                    goto loop_123;
                }
            }
            var_a3 = var_a3_5 + 1;
            if (var_a3 >= 0xA) {
                var_a3 = 0;
            }
            *(s8 *)((u8 *)temp_t0_4 + 6) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_5 + 0x2BAA8) = (s8) *(s8 *)((u8 *)temp_t0_4 + 6);
        }
        var_s1 = *(u8 **)((u8 *)temp_s0 + 0xE4);
    } else if (temp_a0 & 0x2000) {
        if (temp_a1 & 0x80) {
            var_a3_6 = 0;
            var_a2 = &D_00456B10;
            temp_a0_6 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0_5 = temp_a0_6 + 0x2BA86;
loop_135:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0_5 + 7)) {

            } else {
                var_a3_6 += 1;
                var_a2 += 1;
                if (var_a3_6 >= 0xA) {
                    var_a3_6 = 0;
                } else {
                    goto loop_135;
                }
            }
            var_a3 = var_a3_6 - 1;
            if (var_a3 < 0) {
                var_a3 = 9;
            }
            *(s8 *)((u8 *)temp_t0_5 + 7) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_6 + 0x2BAA9) = (s8) *(s8 *)((u8 *)temp_t0_5 + 7);
        } else if (temp_a1 & 0x20) {
            var_a3_7 = 0;
            var_a2 = &D_00456B10;
            temp_a0_7 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0_6 = temp_a0_7 + 0x2BA86;
loop_145:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0_6 + 7)) {

            } else {
                var_a3_7 += 1;
                var_a2 += 1;
                if (var_a3_7 >= 0xA) {
                    var_a3_7 = 0;
                } else {
                    goto loop_145;
                }
            }
            var_a3 = var_a3_7 + 1;
            if (var_a3 >= 0xA) {
                var_a3 = 0;
            }
            *(s8 *)((u8 *)temp_t0_6 + 7) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_7 + 0x2BAA9) = (s8) *(s8 *)((u8 *)temp_t0_6 + 7);
        }
        var_s1 = *(u8 **)((u8 *)temp_s0 + 0xE8);
    } else if (temp_a0 & 0x4000) {
        if (temp_a1 & 0x80) {
            var_a3_8 = 0;
            var_a2 = &D_00456B10;
            temp_a0_8 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0_7 = temp_a0_8 + 0x2BA86;
loop_157:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0_7 + 8)) {

            } else {
                var_a3_8 += 1;
                var_a2 += 1;
                if (var_a3_8 >= 0xA) {
                    var_a3_8 = 0;
                } else {
                    goto loop_157;
                }
            }
            var_a3 = var_a3_8 - 1;
            if (var_a3 < 0) {
                var_a3 = 9;
            }
            *(s8 *)((u8 *)temp_t0_7 + 8) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_8 + 0x2BAAA) = (s8) *(s8 *)((u8 *)temp_t0_7 + 8);
        } else if (temp_a1 & 0x20) {
            var_a3_9 = 0;
            var_a2 = &D_00456B10;
            temp_a0_9 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)gOptionWork + 0x380) * 0xA));
            temp_t0_8 = temp_a0_9 + 0x2BA86;
loop_167:
            if (*var_a2 == *(s8 *)((u8 *)temp_t0_8 + 8)) {

            } else {
                var_a3_9 += 1;
                var_a2 += 1;
                if (var_a3_9 >= 0xA) {
                    var_a3_9 = 0;
                } else {
                    goto loop_167;
                }
            }
            var_a3 = var_a3_9 + 1;
            if (var_a3 >= 0xA) {
                var_a3 = 0;
            }
            *(s8 *)((u8 *)temp_t0_8 + 8) = (s8) (&D_00456B10)[var_a3];
            *(s8 *)((u8 *)temp_a0_9 + 0x2BAAA) = (s8) *(s8 *)((u8 *)temp_t0_8 + 8);
        }
        var_s1 = *(u8 **)((u8 *)temp_s0 + 0xEC);
    }
    if (var_s1 != NULL) {
        func_0022C7D0(var_s1, 1, var_a2, var_a3, 0);
        func_00228430(0);
        func_00228430(0);
        temp_a0_10 = *(u8 **)((u8 *)temp_s0 + 0xC);
        D_00470704 = temp_a0_10;
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent(temp_a0_10, 0);
        D_00470238 = 0;
        func_0022C060(var_s1, 0x3F800000);
        func_00228410();
        func_0022CD00(var_s1);
        func_00228410();
    }
}
