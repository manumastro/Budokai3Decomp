/* Draft (not built): func_002B2E40 at 0x002B2E40, size 0xD54, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'unsigned short *' to 'float' @ 266: ((f32)(var_a2))
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B2E40.s */

// src/unk/unk_2B2C20.c func_002B2E40 cerr diff=-1/0
s32 Help_Open(s32, s32);
s32 SklSheet_SetIndex(s32);
s32 SoundRpc_SetVolume(s32, s32, f32, s32, f32);
s32 func_00283D00(s32, s16, s32, s32);
s32 func_002B1160(void *, s16, s32, s32);
s32 func_002B1780(void *, s16, s32, s32);
s32 func_002B1B10(void *, s16);
s32 func_002B1C60(void *, void *, s32, s32);
s32 func_002B1D70(void *, void *, s32, s32);
s32 func_002D2370(s32);
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern s32 D_004E0668;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002B2E40(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s16 temp_a1_2;
    s16 temp_s1;
    s16 var_a0_2;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s5;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_7;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_s1;
    s32 var_t0;
    s32 var_t1;
    s32 var_t3;
    s32 var_v0;
    s32 var_v0_2;
    u16 *var_a2;
    u16 var_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_a1_3;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a1_3;
    u8 *var_a1_4;
    u8 *var_t2;

    temp_s3 = arg0 + 0x30;
    temp_a1 = (u8 *)(gSklEdit + (*(s32 *)((u8 *)arg0 + 0x30) * 0x1C8));
    temp_t1 = *(s32 *)((u8 *)temp_a1 + 0x60);
    temp_s2 = temp_a1 + 0x48;
    if (temp_t1 != 2) {
        var_s1 = 1 << temp_t1;
        temp_a0 = temp_t1 * 0xB8;
        var_a2 = &D_00493032 + temp_a0;
        var_a0 = *(D_00492FCE + temp_a0);
        var_a3 = *(&D_00492FD2 + temp_a0) | *var_a2;
    } else {
        var_s1 = 3;
        var_a2 = (u16 *) (D_0049308A | D_004930EA);
        var_a3 = D_00492FD2 | D_00493032 | (s32) var_a2;
        var_a0 = *D_00492FCE | D_00493086;
    }
    if (var_a0 & 0x1000) {
        temp_v1 = *(s32 *)((u8 *)temp_s2 + 0x10);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            *(s32 *)((u8 *)temp_s2 + 0x108) = 1;
            *(s32 *)((u8 *)temp_s2 + 0x110) = 0;
            break;
        case 1:                                     /* switch 1 */
            *(s32 *)((u8 *)temp_s2 + 0x108) = 1;
            *(s32 *)((u8 *)temp_s2 + 0x110) = 0;
            break;
        case 2:                                     /* switch 1 */
            *(s32 *)((u8 *)temp_s2 + 0x108) = 3;
            *(s32 *)((u8 *)temp_s2 + 0x110) = 0;
            break;
        }
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, var_a2), var_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x16, 0);
        }
        var_v1 = (s32 *)(&func_002B2DA0);
        if (&func_002B2DA0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if ((var_a0 & 0x8000) && (*(s32 *)((u8 *)temp_s2 + 0x10) == 0)) {
        temp_a0_2 = temp_s2 + (*(s32 *)((u8 *)temp_s2 + 0x24) * 0x1C);
        temp_a1_2 = *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_a0_2 + 0x4C) * 2) + (temp_a0_2 + 0x48)) + 8);
        if ((temp_a1_2 > 0) && (temp_a1_2 < 0x253)) {
            func_00283D00(*(s32 *)((u8 *)gSklEdit + 0x38) + 0x20, temp_a1_2, 0, 0x11403000);
            SklSheet_SetIndex(0);
            var_v1_2 = (s32 *)(&func_002B2D50);
            *(void (**)(u8 *))((u8 *)temp_s3 + 4) = func_002B2E40;
            if (&func_002B2D50 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        }
        return;
    }
    temp_a2 = *(s32 *)((u8 *)temp_s2 + 0x24);
    temp_a1_3 = temp_s2 + (temp_a2 * 0x1C);
    temp_s5 = *(s32 *)((u8 *)temp_a1_3 + 0x48);
    temp_s0 = temp_a1_3 + 0x48;
    if (var_a3 & 0x400) {
        temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 4);
        if ((temp_a0_3 + temp_s5) < 9) {
            *(s32 *)((u8 *)temp_s0 + 4) = 0;
            *(s32 *)((u8 *)temp_a1_3 + 0x48) = 0;
        } else if (temp_s5 < 9) {
            *(s32 *)((u8 *)temp_s0 + 4) = (s32) (temp_a0_3 - (9 - temp_s5));
            *(s32 *)((u8 *)temp_a1_3 + 0x48) = 0;
        } else {
            *(s32 *)((u8 *)temp_a1_3 + 0x48) = (s32) (temp_s5 - 9);
        }
        func_002B1D70(temp_s2, temp_a1_3, temp_a2, var_a3);
        func_002B1B10(temp_s2, *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 4) * 2) + temp_s0) + 8));
        temp_a0_4 = *(s32 *)((u8 *)temp_a1_3 + 0x48);
        if (M2C_ERROR(/* Read from unset register $t6 */) != (*(s32 *)((u8 *)temp_s0 + 4) + temp_a0_4)) {
            if (temp_s5 != temp_a0_4) {
                if ((temp_a0_4 == 0) && (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xF)) {
                    *(s32 *)((u8 *)temp_s2 + 0x168) = 0xF;
                    *(s32 *)((u8 *)(temp_s2 + 0x168) + 8) = 0;
                }
                if (((*(s32 *)((u8 *)temp_a1_3 + 0x48) + 9) < *(s16 *)((u8 *)temp_s0 + 0x1A)) && (*(s32 *)((u8 *)temp_s2 + 0x198) != 0xC)) {
                    *(s32 *)((u8 *)temp_s2 + 0x198) = 0xC;
                    *(s32 *)((u8 *)(temp_s2 + 0x198) + 8) = 0;
                }
            }
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        return;
    }
    if (var_a3 & 0x800) {
        if (func_002B1C60(temp_s2, temp_a1_3, temp_a2, var_a3) != 0) {
            temp_v0 = *(s32 *)((u8 *)temp_a1_3 + 0x48);
            if (temp_s5 != temp_v0) {
                if ((temp_v0 > 0) && (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xB)) {
                    *(s32 *)((u8 *)temp_s2 + 0x168) = 0xB;
                    *(s32 *)((u8 *)(temp_s2 + 0x168) + 8) = 0;
                }
                if (((*(s32 *)((u8 *)temp_a1_3 + 0x48) + 9) >= *(s16 *)((u8 *)temp_s0 + 0x1A)) && (*(s32 *)((u8 *)temp_s2 + 0x198) != 0x10)) {
                    *(s32 *)((u8 *)temp_s2 + 0x198) = 0x10;
                    *(s32 *)((u8 *)(temp_s2 + 0x198) + 8) = 0;
                }
            }
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        return;
    }
    temp_a1_4 = var_a3 & 0xF0;
    switch (temp_a1_4) {                            /* switch 2; irregular */
    case 0x10:                                      /* switch 2 */
        temp_v1_2 = *(s32 *)((u8 *)temp_s0 + 4) - 1;
        *(s32 *)((u8 *)temp_s0 + 4) = temp_v1_2;
        if (temp_v1_2 < 0) {
            *(s32 *)((u8 *)temp_s0 + 4) = 0;
            temp_v1_3 = *(s32 *)((u8 *)temp_a1_3 + 0x48) - 1;
            *(s32 *)((u8 *)temp_a1_3 + 0x48) = temp_v1_3;
            if (temp_v1_3 < 0) {
                *(s32 *)((u8 *)temp_a1_3 + 0x48) = 0;
            } else {
                func_002B1D70(temp_s2, (u8 *) temp_a1_4, temp_a2, var_a3);
            }
        }
        func_002B1B10(temp_s2, *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 4) * 2) + temp_s0) + 8));
        if (*(s32 *)((u8 *)temp_s0 + 4) != M2C_ERROR(/* Read from unset register $t6 */)) {
            temp_v0_2 = *(s32 *)((u8 *)temp_a1_3 + 0x48);
            if (temp_s5 != temp_v0_2) {
                if ((temp_v0_2 == 0) && (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xF)) {
                    *(s32 *)((u8 *)temp_s2 + 0x168) = 0xF;
                    *(s32 *)((u8 *)(temp_s2 + 0x168) + 8) = 0;
                }
                if (((*(s32 *)((u8 *)temp_a1_3 + 0x48) + 9) < *(s16 *)((u8 *)temp_s0 + 0x1A)) && (*(s32 *)((u8 *)temp_s2 + 0x198) != 0xC)) {
                    *(s32 *)((u8 *)temp_s2 + 0x198) = 0xC;
                    *(s32 *)((u8 *)(temp_s2 + 0x198) + 8) = 0;
                }
            }
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        return;
    case 0x40:                                      /* switch 2 */
        var_a0_2 = *(s16 *)((u8 *)temp_s0 + 0x1A);
        if (var_a0_2 >= 9) {
            var_a0_2 = 9;
        }
        temp_v1_4 = *(s32 *)((u8 *)temp_s0 + 4) + 1;
        *(s32 *)((u8 *)temp_s0 + 4) = temp_v1_4;
        if (temp_v1_4 >= var_a0_2) {
            *(s32 *)((u8 *)temp_s0 + 4) = (s32) (var_a0_2 - 1);
            temp_a1_5 = *(s32 *)((u8 *)temp_a1_3 + 0x48);
            if ((temp_a1_5 + 9) < *(s16 *)((u8 *)temp_s0 + 0x1A)) {
                *(s32 *)((u8 *)temp_a1_3 + 0x48) = (s32) (temp_a1_5 + 1);
                func_002B1D70(temp_s2, (u8 *) temp_a1_5, temp_a2, var_a3);
            }
        }
        func_002B1B10(temp_s2, *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 4) * 2) + temp_s0) + 8));
        if (*(s32 *)((u8 *)temp_s0 + 4) != M2C_ERROR(/* Read from unset register $t6 */)) {
            temp_v0_3 = *(s32 *)((u8 *)temp_a1_3 + 0x48);
            if (temp_s5 != temp_v0_3) {
                if ((temp_v0_3 > 0) && (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xB)) {
                    *(s32 *)((u8 *)temp_s2 + 0x168) = 0xB;
                    *(s32 *)((u8 *)(temp_s2 + 0x168) + 8) = 0;
                }
                if (((*(s32 *)((u8 *)temp_a1_3 + 0x48) + 9) >= *(s16 *)((u8 *)temp_s0 + 0x1A)) && (*(s32 *)((u8 *)temp_s2 + 0x198) != 0x10)) {
                    *(s32 *)((u8 *)temp_s2 + 0x198) = 0x10;
                    *(s32 *)((u8 *)(temp_s2 + 0x198) + 8) = 0;
                }
            }
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        return;
    case 0x80:                                      /* switch 2 */
        temp_v0_4 = temp_a2 - 1;
        *(s32 *)((u8 *)temp_s2 + 0x24) = temp_v0_4;
        if (temp_v0_4 < 0) {
            *(s32 *)((u8 *)temp_s2 + 0x24) = 2;
        }
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), var_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        func_002B1D70(temp_s2, 0, 0, 0);
        temp_v1_5 = temp_s2 + (*(s32 *)((u8 *)temp_s2 + 0x24) * 0x1C);
        if (*(s32 *)((u8 *)temp_v1_5 + 0x48) > 0) {
            var_a1 = temp_s2 + 0x168;
            if (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xB) {
                *(s32 *)((u8 *)temp_s2 + 0x168) = 0xB;
                goto block_106;
            }
        } else {
            var_a1 = temp_s2 + 0x168;
            if (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xF) {
                *(s32 *)((u8 *)temp_s2 + 0x168) = 0xF;
block_106:
                *(s32 *)((u8 *)var_a1 + 8) = 0;
            }
        }
        if ((*(s32 *)((u8 *)temp_v1_5 + 0x48) + 9) >= *(s16 *)((u8 *)(temp_v1_5 + 0x48) + 0x1A)) {
            var_a1_2 = temp_s2 + 0x198;
            if (*(s32 *)((u8 *)temp_s2 + 0x198) != 0x10) {
                *(s32 *)((u8 *)temp_s2 + 0x198) = 0x10;
                goto block_113;
            }
        } else {
            var_a1_2 = temp_s2 + 0x198;
            if (*(s32 *)((u8 *)temp_s2 + 0x198) != 0xC) {
                *(s32 *)((u8 *)temp_s2 + 0x198) = 0xC;
block_113:
                *(s32 *)((u8 *)var_a1_2 + 8) = 0;
            }
        }
        return;
    case 0x20:                                      /* switch 2 */
        temp_v0_5 = temp_a2 + 1;
        *(s32 *)((u8 *)temp_s2 + 0x24) = temp_v0_5;
        if (temp_v0_5 >= 3) {
            *(s32 *)((u8 *)temp_s2 + 0x24) = 0;
        }
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), var_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        func_002B1D70(temp_s2, 0, 0, 0);
        temp_v1_6 = temp_s2 + (*(s32 *)((u8 *)temp_s2 + 0x24) * 0x1C);
        if (*(s32 *)((u8 *)temp_v1_6 + 0x48) > 0) {
            var_a1_3 = temp_s2 + 0x168;
            if (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xB) {
                *(s32 *)((u8 *)temp_s2 + 0x168) = 0xB;
                goto block_124;
            }
        } else {
            var_a1_3 = temp_s2 + 0x168;
            if (*(s32 *)((u8 *)temp_s2 + 0x168) != 0xF) {
                *(s32 *)((u8 *)temp_s2 + 0x168) = 0xF;
block_124:
                *(s32 *)((u8 *)var_a1_3 + 8) = 0;
            }
        }
        if ((*(s32 *)((u8 *)temp_v1_6 + 0x48) + 9) >= *(s16 *)((u8 *)(temp_v1_6 + 0x48) + 0x1A)) {
            var_a1_4 = temp_s2 + 0x198;
            if (*(s32 *)((u8 *)temp_s2 + 0x198) != 0x10) {
                *(s32 *)((u8 *)temp_s2 + 0x198) = 0x10;
                goto block_131;
            }
        } else {
            var_a1_4 = temp_s2 + 0x198;
            if (*(s32 *)((u8 *)temp_s2 + 0x198) != 0xC) {
                *(s32 *)((u8 *)temp_s2 + 0x198) = 0xC;
block_131:
                *(s32 *)((u8 *)var_a1_4 + 8) = 0;
            }
        }
        return;
    default:                                        /* switch 2 */
        if (var_a0 & 0x4000) {
            temp_s1 = *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 4) * 2) + temp_s0) + 8);
            if (temp_s1 < 0) {
                SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), var_a3, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 6, 0);
                }
            } else {
                temp_a2_2 = *(s32 *)((u8 *)temp_s2 + 0xB8);
                var_t3 = 0;
                if (temp_a2_2 > 0) {
                    var_a3 = *(s32 *)((u8 *)temp_s2 + 0x20);
loop_139:
                    var_t2 = temp_s2 + 0xB8;
                    var_t1 = 0;
                    var_t0 = 0;
                    if (temp_a2_2 > 0) {
loop_141:
                        if (var_t3 >= var_t0) {
                            temp_a1_6 = *(s32 *)((u8 *)var_t2 + 4);
                            var_t0 += 1;
                            temp_v1_7 = temp_a1_6 * 4;
                            var_t2 += 4;
                            var_t1 += *(u8 *)((u8 *)(&D_004E0660 + ((temp_v1_7 + temp_a1_6) * 8)) + 8) & 7;
                            if (var_t0 >= temp_a2_2) {

                            } else {
                                goto loop_141;
                            }
                        }
                    }
                    if (var_a3 == var_t1) {
                        var_v0 = *(s32 *)((u8 *)((var_t3 * 4) + (temp_s2 + 0xB8)) + 4);
                    } else {
                        var_t3 += 1;
                        if (var_t3 >= temp_a2_2) {
                            goto block_148;
                        }
                        goto loop_139;
                    }
                } else {
block_148:
                    var_v0 = -1;
                }
                if (var_v0 > 0) {
                    if (func_002B1160(temp_s2, temp_s1, temp_a2_2, var_a3) != 0) {
                        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 0x10, 0);
                        }
                        *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x30) * 2) + gSklEdit) + 0x34) = 1;
                    } else if (*(s32 *)((u8 *)temp_s2 + 0x10) != 0) {
                        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 6, 0);
                        }
                    } else {
                        func_002D2370(*(s32 *)((u8 *)gSklEdit + 0x30));
                        var_v1_3 = (s32 *)(&func_002B2D00);
                        *(void (**)(u8 *))((u8 *)temp_s3 + 4) = func_002B2E40;
                        if (&func_002B2D00 == NULL) {
                            var_v1_3 = NULL;
                        }
                        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
                    }
                } else {
                    temp_v0_6 = func_002B1780(temp_s2, temp_s1, temp_a2_2, var_a3);
                    switch (temp_v0_6) {            /* switch 3; irregular */
                    case 0:                         /* switch 3 */
                        temp_a1_7 = *(s32 *)((u8 *)temp_s2 + 0xB8);
                        *(s32 *)((u8 *)temp_s2 + 0xB8) = (s32) (temp_a1_7 + 1);
                        *(s32 *)((u8 *)((temp_a1_7 * 4) + (temp_s2 + 0xB8)) + 4) = (s32) temp_s1;
                        *(s32 *)((u8 *)temp_s2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x20) + (*(&D_004E0668 + (temp_s1 * 0x28)) & 7));
                        if (*(s32 *)((u8 *)temp_s2 + 0x20) >= 8) {
                            *(s32 *)((u8 *)temp_s2 + 0x20) = 7;
                        }
                        var_v0_2 = 1;
                        break;
                    case 1:                         /* switch 3 */
                        *(s32 *)((u8 *)gSklEdit + 0x30) = 0;
                    default:                        /* switch 3 */
block_173:
                        var_v0_2 = 0;
                        break;
                    case 2:                         /* switch 3 */
                        *(s32 *)((u8 *)gSklEdit + 0x30) = 1;
                        goto block_173;
                    case 3:                         /* switch 3 */
                        *(s32 *)((u8 *)gSklEdit + 0x30) = 2;
                        goto block_173;
                    }
                    if (var_v0_2 != 0) {
                        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 0x10, 0);
                        }
                        *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x30) * 2) + gSklEdit) + 0x34) = 1;
                    } else if (*(s32 *)((u8 *)temp_s2 + 0x10) != 0) {
                        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 6, 0);
                        }
                    } else {
                        func_002D2370(*(s32 *)((u8 *)gSklEdit + 0x30));
                        var_v1_4 = (s32 *)(&func_002B2D00);
                        *(void (**)(u8 *))((u8 *)temp_s3 + 4) = func_002B2E40;
                        if (&func_002B2D00 == NULL) {
                            var_v1_4 = NULL;
                        }
                        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
                    }
                }
            }
            return;
        }
        if (var_a0 & 1) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), var_a3, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            var_a0_3 = 0x08080000 | (0x800080 << 0x20);
            if (*(s32 *)((u8 *)temp_s2 + 0x10) == 0) {
                var_a0_3 |= 0x4000 << 0x20;
            }
            Help_Open(var_a0_3, var_s1 & 0xFF);
        }
        return;
    }
}
