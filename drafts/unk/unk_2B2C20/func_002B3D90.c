/* Draft (not built): func_002B3D90 at 0x002B3D90, size 0x8EC, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 284 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x8D4, original 0x8EC
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B3D90.s */

// src/unk/unk_2B2C20.c func_002B3D90 size diff=284/565
s32 Help_Open(s32, s32, s32, u16);
s32 SklSheet_SetIndex(s32);
s32 SoundRpc_SetVolume(s32, s32, s32, u16, f32);
s32 func_00283D00(s32, s32, s32, s32);
s32 func_002B0E00(void *);
s32 func_002B1590(void *);
s32 func_002B16B0(void *);
s32 func_002B1D70(void *, s32, s32, s32);
s32 func_002D2370(s32, s32, s32, s32);
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002B3D90(u8 *arg0) {
    s32 saved_reg_s0;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_6;
    s32 *var_v1_7;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_t2;
    s32 var_t3_2;
    s32 var_t3_3;
    s32 var_t4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_a3;
    u8 *temp_a0;
    u8 *temp_a1_3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1_4;
    u8 *var_s0;
    u8 *var_t2_2;
    u8 *var_t2_3;
    u8 *var_t3;
    u8 *var_v1_5;

    var_s0 = (unsigned char *)(saved_reg_s0);
    temp_s2 = arg0 + 0x30;
    temp_a0 = (unsigned char *)(gSklEdit + (*(s32 *)((u8 *)arg0 + 0x30) * 0x1C8));
    temp_t0 = *(s32 *)((u8 *)temp_a0 + 0x60);
    temp_s1 = temp_a0 + 0x48;
    if (temp_t0 != 2) {
        temp_a3 = temp_t0 * 0xB8;
        var_v1 = 1 << temp_t0;
        var_a3 = *(D_00492FCE + temp_a3);
        var_a2 = *(&D_00492FD2 + temp_a3) | *(&D_00493032 + temp_a3);
    } else {
        var_v1 = 3;
        var_a2 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
        var_a3 = *D_00492FCE | D_00493086;
    }
    if (var_a3 & 0x1000) {
        if (*(s32 *)((u8 *)temp_s1 + 0x14) != 0) {
            SoundRpc_SetVolume(0, 0, var_a2, var_a3, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            *(s32 *)((u8 *)temp_s1 + 0xC) = 4;
            var_v1_2 = (int *)(&func_002B3D40);
            if (&func_002B3D40 == NULL) {
                var_v1_2 = NULL;
            }
        } else {
            temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x10);
            switch (temp_v1) {                      /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                *(s32 *)((u8 *)temp_s1 + 0xD8) = 0x16;
                *(s32 *)((u8 *)temp_s1 + 0xE0) = 0;
                break;
            case 1:                                 /* switch 1 */
                *(s32 *)((u8 *)temp_s1 + 0xD8) = 0x14;
                *(s32 *)((u8 *)temp_s1 + 0xE0) = 0;
                break;
            case 2:                                 /* switch 1 */
                *(s32 *)((u8 *)temp_s1 + 0xD8) = 0x16;
                *(s32 *)((u8 *)temp_s1 + 0xE0) = 0;
                break;
            }
            SoundRpc_SetVolume(0, 0, var_a2, var_a3, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0x11, 0);
            }
            *(s32 *)((u8 *)temp_s1 + 0xC) = 8;
            var_v1_2 = (int *)(&func_002B3C40);
            if (&func_002B3C40 == NULL) {
                var_v1_2 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    if (var_a3 & 1) {
        var_a0 = 0x80000 | (0x800840 << 0x20);
        if (*(s32 *)((u8 *)temp_s1 + 0x10) == 0) {
            var_a0 |= 0x4000 << 0x20;
        }
        Help_Open(var_a0, var_v1 & 0xFF, var_a2, var_a3);
        var_a2 = 0;
        var_a3 = 0;
    }
    if ((var_a3 & 0x8000) && (*(s32 *)((u8 *)temp_s1 + 0x10) == 0)) {
        temp_a3_2 = *(s32 *)((u8 *)temp_s1 + 0xB8);
        var_t4 = 0;
        if (temp_a3_2 > 0) {
loop_32:
            var_t3 = temp_s1 + 0xB8;
            var_t2 = 0;
            var_t1 = 0;
            if (temp_a3_2 > 0) {
loop_34:
                if (var_t4 >= var_t1) {
                    temp_a2 = *(s32 *)((u8 *)var_t3 + 4);
                    var_t1 += 1;
                    temp_a0_2 = temp_a2 * 4;
                    var_t3 += 4;
                    var_t2 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_a0_2 + temp_a2) * 8)) + 8) & 7;
                    if (var_t1 >= temp_a3_2) {

                    } else {
                        goto loop_34;
                    }
                }
            }
            if (*(s32 *)((u8 *)temp_s1 + 0x20) == var_t2) {
                var_a1 = *(s32 *)((u8 *)((var_t4 * 4) + (temp_s1 + 0xB8)) + 4);
            } else {
                var_t4 += 1;
                if (var_t4 >= temp_a3_2) {
                    goto block_41;
                }
                goto loop_32;
            }
        } else {
block_41:
            var_a1 = -1;
        }
        if ((var_a1 > 0) && (var_a1 < 0x253)) {
            func_00283D00(*(s32 *)((u8 *)gSklEdit + 0x38) + 0x20, var_a1, 0, 0x11403000);
            SklSheet_SetIndex(0);
            var_v1_3 = (int *)(&func_002B2D50);
            *(void (**)(u8 *))((u8 *)temp_s2 + 4) = func_002B3D90;
            if (&func_002B2D50 == NULL) {
                var_v1_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
        }
        return;
    }
    if (var_a3 & 0x2000) {
        temp_a2_2 = *(s32 *)((u8 *)temp_s1 + 0xB8);
        var_t3_2 = 0;
        if (temp_a2_2 > 0) {
            var_a3 = (u16) *(s32 *)((u8 *)temp_s1 + 0x20);
loop_51:
            var_t2_2 = temp_s1 + 0xB8;
            var_t1_2 = 0;
            var_t0 = 0;
            if (temp_a2_2 > 0) {
loop_53:
                if (var_t3_2 >= var_t0) {
                    temp_a1 = *(s32 *)((u8 *)var_t2_2 + 4);
                    var_t0 += 1;
                    temp_v1_2 = temp_a1 * 4;
                    var_t2_2 += 4;
                    var_t1_2 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_v1_2 + temp_a1) * 8)) + 8) & 7;
                    if (var_t0 >= temp_a2_2) {

                    } else {
                        goto loop_53;
                    }
                }
            }
            if (var_a3 == var_t1_2) {
                var_v0 = *(s32 *)((u8 *)((var_t3_2 * 4) + (temp_s1 + 0xB8)) + 4);
            } else {
                var_t3_2 += 1;
                if (var_t3_2 >= temp_a2_2) {
                    goto block_60;
                }
                goto loop_51;
            }
        } else {
block_60:
            var_v0 = -1;
        }
        if (var_v0 < 0) {
            SoundRpc_SetVolume(0, 0, temp_a2_2, var_a3, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
        } else if (func_002B0E00(temp_s1) != 0) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x30) * 2) + gSklEdit) + 0x34) = 1;
        } else {
            func_002D2370(*(s32 *)((u8 *)gSklEdit + 0x30), 0, 0, 0);
            var_v1_4 = (int *)(&func_002B2D00);
            *(void (**)(u8 *))((u8 *)temp_s2 + 4) = func_002B3D90;
            if (&func_002B2D00 == NULL) {
                var_v1_4 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
        }
        return;
    }
    if (var_a3 & 0x4000) {
        temp_a2_3 = *(s32 *)((u8 *)temp_s1 + 0xB8);
        var_t3_3 = 0;
        if (temp_a2_3 > 0) {
            var_a3 = (u16) *(s32 *)((u8 *)temp_s1 + 0x20);
loop_77:
            var_t2_3 = temp_s1 + 0xB8;
            var_t1_3 = 0;
            var_t0_2 = 0;
            if (temp_a2_3 > 0) {
loop_79:
                if (var_t3_3 >= var_t0_2) {
                    temp_a1_2 = *(s32 *)((u8 *)var_t2_3 + 4);
                    var_t0_2 += 1;
                    temp_v1_3 = temp_a1_2 * 4;
                    var_t2_3 += 4;
                    var_t1_3 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_v1_3 + temp_a1_2) * 8)) + 8) & 7;
                    if (var_t0_2 >= temp_a2_3) {

                    } else {
                        goto loop_79;
                    }
                }
            }
            if (var_a3 == var_t1_3) {
                var_a1_2 = *(s32 *)((u8 *)((var_t3_3 * 4) + (temp_s1 + 0xB8)) + 4);
            } else {
                var_t3_3 += 1;
                if (var_t3_3 >= temp_a2_3) {
                    goto block_86;
                }
                goto loop_77;
            }
        } else {
block_86:
            var_a1_2 = -1;
        }
        var_a0_2 = 0;
        var_v1_5 = temp_s1;
loop_88:
        temp_v0 = *(s32 *)((u8 *)var_v1_5 + 0x2C);
        if (temp_v0 > 0) {
            if (temp_v0 == var_a1_2) {
                var_v0_2 = 0;
            } else {
                var_a0_2 += 1;
                var_v1_5 += 4;
                if (var_a0_2 >= 7) {
                    goto block_93;
                }
                goto loop_88;
            }
        } else {
block_93:
            var_v0_2 = 1;
        }
        if (var_v0_2 == 0) {
            *(s32 *)((u8 *)gSklEdit + 0x30) = 4;
            func_002D2370(*(s32 *)((u8 *)gSklEdit + 0x30), var_a1_2, temp_a2_3, (s32) var_a3);
            var_v1_6 = (int *)(&func_002B2D00);
            *(void (**)(u8 *))((u8 *)temp_s2 + 4) = func_002B3D90;
            if (&func_002B2D00 == NULL) {
                var_v1_6 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_6;
            return;
        }
        func_002B1D70(temp_s1, var_a1_2, temp_a2_3, (s32) var_a3);
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        temp_a0_3 = *(s32 *)((u8 *)temp_s1 + 0x10);
        switch (temp_a0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            *(s32 *)((u8 *)temp_s1 + 0x108) = 0;
            *(s32 *)((u8 *)temp_s1 + 0x110) = 0;
            var_s0 = temp_s1 + 0x108;
            *(s32 *)((u8 *)temp_s1 + 0x118) = (s32) ((*(s32 *)((u8 *)gSklEdit + 0x28) != 0) ? 5 : 4);
            break;
        case 1:                                     /* switch 2 */
            *(s32 *)((u8 *)temp_s1 + 0x108) = 0;
            var_s0 = temp_s1 + 0x108;
            *(s32 *)((u8 *)temp_s1 + 0x118) = 4;
            *(s32 *)((u8 *)temp_s1 + 0x110) = 0;
            break;
        case 2:                                     /* switch 2 */
            *(s32 *)((u8 *)temp_s1 + 0x108) = 2;
            var_s0 = temp_s1 + 0x108;
            *(s32 *)((u8 *)temp_s1 + 0x118) = 5;
            *(s32 *)((u8 *)temp_s1 + 0x110) = 0;
            break;
        }
        *(s32 *)((u8 *)var_s0 + 0xC) = 0;
        temp_v1_4 = temp_s1 + (*(s32 *)((u8 *)temp_s1 + 0x24) * 0x1C);
        temp_s0 = temp_s1 + 0x168;
        if (*(s32 *)((u8 *)temp_v1_4 + 0x48) > 0) {
            *(s32 *)((u8 *)temp_s1 + 0x168) = 0xD;
            *(s32 *)((u8 *)temp_s0 + 8) = 0;
        } else {
            *(s32 *)((u8 *)temp_s1 + 0x168) = 0xF;
            *(s32 *)((u8 *)temp_s0 + 8) = 0x2710;
        }
        temp_a1_3 = temp_s1 + 0x198;
        if ((*(s32 *)((u8 *)temp_v1_4 + 0x48) + 9) < *(s16 *)((u8 *)(temp_v1_4 + 0x48) + 0x1A)) {
            *(s32 *)((u8 *)temp_s1 + 0x198) = 0xE;
            *(s32 *)((u8 *)temp_a1_3 + 8) = 0;
        } else {
            *(s32 *)((u8 *)temp_s1 + 0x198) = 0x10;
            *(s32 *)((u8 *)temp_a1_3 + 8) = 0x2710;
        }
        *(s32 *)((u8 *)temp_s1 + 0xC) = 6;
        var_v1_7 = (int *)(&func_002B3BA0);
        if (&func_002B3BA0 == NULL) {
            var_v1_7 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_7;
        return;
    }
    temp_a0_4 = var_a2 & 0x50;
    switch (temp_a0_4) {                            /* switch 3; irregular */
    case 0x10:                                      /* switch 3 */
        if (func_002B16B0(temp_s1) != 0) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(s32 *)((u8 *)temp_s1 + 0x140) = 0;
            return;
        }
        return;
    case 0x40:                                      /* switch 3 */
        if (func_002B1590(temp_s1) != 0) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(s32 *)((u8 *)temp_s1 + 0x140) = 0;
        }
        break;
    }
}
