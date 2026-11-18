/* Draft (not built): func_00271AF0 at 0x00271AF0, size 0x890, segment menu/ess_list (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )var_a2 + 0x64) + (*temp_a0_3 * 4)) = temp_a3_3; @ 109: *(*(s32 *)((u8 *)var_a2 + 0x64) + (*temp_a0_3 * 4)) = temp_a3_3;
 * Original: asm/nonmatchings/menu/ess_list/func_00271AF0.s */

// src/menu/ess_list.c func_00271AF0 cerr diff=-1/0
s32 Help_Open(s32, s32, void *, s32);
s32 SklSheet_SetIndex(s32);
s32 SoundRpc_SetVolume(s32, s32, u16, s32, f32);
s32 func_0026FF30();
s32 func_00270020();
s32 func_00283D00(s32, s16, s32, s32);
s32 func_002D2370(s32, s32, void *, void *);
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern s32 func_00271080;
extern s32 func_002719D0;
extern s32 func_00271A20;
extern s32 func_00271A70;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_00272380(void);
void func_00271AF0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_10;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 *var_v1_6;
    s32 *var_v1_7;
    s32 *var_v1_8;
    s32 *var_v1_9;
    s16 var_a1;
    s32 *temp_a0_3;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_8;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_3;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    u16 var_a2;
    u16 var_a2_2;
    u16 var_a2_3;
    u8 temp_a0_2;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a3_2;
    u8 *temp_v1;

    temp_a3 = D_00492FD2 | D_00493032;
    var_a2 = D_0049308A;
    temp_a0 = *D_00492FCE | D_00493086;
    var_s0 = temp_a3 | (var_a2 | D_004930EA);
    if (temp_a0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, var_a2, temp_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(s32 *)((u8 *)arg0 + 0x30) = 0x3C;
        var_v1 = (s32 *)(&func_00272380);
        *(s32 *)((u8 *)D_004707FC + 0x74) = 1;
        *(s32 *)((u8 *)D_004707FC + 0x7C) = 0;
        if (&func_00272380 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_a0 & 0x4000) {
        var_a2 = (u16) D_004707FC;
        if (*(s32 *)((u8 *)var_a2 + 0x40) == 1) {
            temp_v1 = (u8 *)(var_a2 + ((*(s32 *)((u8 *)var_a2 + 0x48) + 1) * 8));
            temp_a0_2 = *(u8 *)((u8 *)temp_v1 + 0x763);
            temp_a3_2 = temp_v1 + 0x75C;
            if (temp_a0_2 == 0) {
                temp_a3_3 = *(s32 *)((u8 *)temp_v1 + 0x75C);
                temp_a0_3 = *(s32 **)((u8 *)var_a2 + 0x68);
                var_s0_2 = 0;
                if (*(s32 *)((u8 *)var_a2 + 0x70) == 0) {
                    *(*(s32 *)((u8 *)var_a2 + 0x64) + (*temp_a0_3 * 4)) = temp_a3_3;
                    temp_v0 = *temp_a0_3 + 1;
                    *temp_a0_3 = temp_v0;
                    if (temp_v0 >= 4) {
                        var_s0_2 = 1;
                        *temp_a0_3 = 3;
                    }
                } else {
                    var_s0_2 = 1;
                    *(*(s32 *)((u8 *)var_a2 + 0x64) + (*temp_a0_3 * 4)) = temp_a3_3;
                }
                SoundRpc_SetVolume(0, 0, var_a2, temp_a3_3, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x10, 0);
                }
                if (var_s0_2 != 0) {
                    SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 5, 0);
                    }
                    var_v1_2 = (s32 *)(&func_00272380);
                    *(s32 *)((u8 *)D_004707FC + 0x74) = 1;
                    *(s32 *)((u8 *)D_004707FC + 0x7C) = 0;
                    if (&func_00272380 == NULL) {
                        var_v1_2 = NULL;
                    }
                    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
                }
            } else if (temp_a0_2 & 1) {
                func_002D2370(2, 1, (u8 *) var_a2, temp_a3_2);
                var_v1_3 = &func_002719D0;
                if (&func_002719D0 == NULL) {
                    var_v1_3 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
            } else if (temp_a0_2 & 2) {
                func_002D2370(3, 1, (u8 *) var_a2, temp_a3_2);
                var_v1_4 = &func_002719D0;
                if (&func_002719D0 == NULL) {
                    var_v1_4 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
            } else if (temp_a0_2 & 4) {
                func_002D2370(4, 1, (u8 *) var_a2, temp_a3_2);
                var_v1_5 = &func_002719D0;
                if (&func_002719D0 == NULL) {
                    var_v1_5 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
            }
            return;
        }
    }
    if (temp_a0 & 0x8000) {
        temp_v1_2 = *(s32 *)((u8 *)D_004707FC + 0x4C) + *(s32 *)((u8 *)D_004707FC + 0x48);
        var_a1 = -1;
        if (temp_v1_2 < 0) {

        } else if (temp_v1_2 < *(s32 *)((u8 *)D_004707FC + 0x58)) {
            var_a1 = *(s16 *)((u8 *)((temp_v1_2 * 2) + D_004707FC) + 0x134);
        } else {
            var_a1 = -1;
        }
        func_00283D00(0x3220, var_a1, 0, 0x11403000);
        SklSheet_SetIndex(0);
        var_v1_6 = &func_00271A20;
        if (&func_00271A20 == NULL) {
            var_v1_6 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_6;
        return;
    }
    if (temp_a0 & 1) {
        temp_a0_4 = 0x40000 | (0x4000 << 0x20);
        if (*(s32 *)((u8 *)D_004707FC + 0x40) == 1) {
            var_a0 = temp_a0_4 | (0x40040 << 0x20);
        } else {
            var_a0 = temp_a0_4 | (0x800000 << 0x20);
        }
        Help_Open(var_a0, 3, (u8 *) var_a2, temp_a3);
        var_s0 = 0;
    }
    if ((var_s0 & 0x800) && (func_00270020() != 0)) {
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
    if ((var_s0 & 0x400) && (func_0026FF30() != 0)) {
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
    temp_a0_5 = var_s0 & 0xF0;
    switch (temp_a0_5) {                            /* irregular */
    case 0x10:
        var_a2_2 = 1;
        temp_v1_3 = *(s32 *)((u8 *)D_004707FC + 0x48) - 1;
        *(s32 *)((u8 *)D_004707FC + 0x48) = temp_v1_3;
        if (temp_v1_3 < 0) {
            *(s32 *)((u8 *)D_004707FC + 0x48) = 0;
            if ((*(s32 *)((u8 *)D_004707FC + 0x4C) - 1) >= 0) {
                var_v1_7 = &func_00271A70;
                temp_a1 = *(u8 **)((u8 *)D_004707FC + 0x18);
                if (&func_00271A70 == NULL) {
                    var_v1_7 = NULL;
                }
                *(s32 **)((u8 *)temp_a1 + 0x1C) = var_v1_7;
                *(s32 *)((u8 *)temp_a1 + 0x30) = 0;
                *(s32 *)((u8 *)temp_a1 + 0x34) = -1;
                var_v1_8 = &func_00271080;
                temp_a0_6 = *(u8 **)((u8 *)D_004707FC + 0x1C);
                if (&func_00271080 == NULL) {
                    var_v1_8 = NULL;
                }
                *(s32 **)((u8 *)temp_a0_6 + 0x1C) = var_v1_8;
                *(s32 *)((u8 *)temp_a0_6 + 0x30) = 0;
                *(s32 *)((u8 *)temp_a0_6 + 0x34) = -1;
            } else {
                var_a2_2 = 0;
            }
        }
        if (var_a2_2 != 0) {
            SoundRpc_SetVolume(0, 0, var_a2_2, M2C_BITWISE(s32, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    case 0x40:
        temp_v1_4 = *(s32 *)((u8 *)D_004707FC + 0x48) + 1;
        *(s32 *)((u8 *)D_004707FC + 0x48) = temp_v1_4;
        var_a2_3 = 1;
        if (temp_v1_4 >= 9) {
            *(s32 *)((u8 *)D_004707FC + 0x48) = 8;
            if ((*(s32 *)((u8 *)D_004707FC + 0x58) - 9) >= (*(s32 *)((u8 *)D_004707FC + 0x4C) + 1)) {
                var_v1_9 = &func_00271A70;
                temp_a1_2 = *(u8 **)((u8 *)D_004707FC + 0x18);
                if (&func_00271A70 == NULL) {
                    var_v1_9 = NULL;
                }
                *(s32 **)((u8 *)temp_a1_2 + 0x1C) = var_v1_9;
                *(s32 *)((u8 *)temp_a1_2 + 0x30) = 0;
                *(s32 *)((u8 *)temp_a1_2 + 0x34) = 1;
                var_v1_10 = &func_00271080;
                temp_a0_7 = *(u8 **)((u8 *)D_004707FC + 0x1C);
                if (&func_00271080 == NULL) {
                    var_v1_10 = NULL;
                }
                *(s32 **)((u8 *)temp_a0_7 + 0x1C) = var_v1_10;
                *(s32 *)((u8 *)temp_a0_7 + 0x30) = 0;
                *(s32 *)((u8 *)temp_a0_7 + 0x34) = 1;
            } else {
                var_a2_3 = 0;
            }
        }
        if (var_a2_3 != 0) {
            SoundRpc_SetVolume(0, 0, var_a2_3, M2C_BITWISE(s32, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    case 0x20:
        temp_a2 = *(s32 *)((u8 *)D_004707FC + 0x4C);
        temp_a1_3 = *(s32 *)((u8 *)D_004707FC + 0x58);
        temp_a0_8 = temp_a2 + 9;
        if (temp_a0_8 < temp_a1_3) {
            if ((temp_a2 + 0x12) < temp_a1_3) {
                *(s32 *)((u8 *)D_004707FC + 0x4C) = temp_a0_8;
            } else {
                *(s32 *)((u8 *)D_004707FC + 0x4C) = (s32) (temp_a1_3 - 9);
                *(s32 *)((u8 *)D_004707FC + 0x48) = 8;
            }
            var_a1_2 = 1;
        } else if (*(s32 *)((u8 *)D_004707FC + 0x48) < 8) {
            var_a1_2 = 1;
            *(s32 *)((u8 *)D_004707FC + 0x48) = 8;
        } else {
            var_a1_2 = 0;
        }
        if (var_a1_2 != 0) {
            SoundRpc_SetVolume(0, 0, (u16) temp_a2, (s32) (D_004707FC + 0x4C), D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    case 0x80:
        temp_a2_2 = *(s32 *)((u8 *)D_004707FC + 0x4C);
        temp_v1_5 = temp_a2_2 - 9;
        if (temp_v1_5 >= 0) {
            *(s32 *)((u8 *)D_004707FC + 0x4C) = temp_v1_5;
            var_a0_2 = 1;
        } else if ((*(s32 *)((u8 *)D_004707FC + 0x48) | temp_a2_2) != 0) {
            *(s32 *)((u8 *)D_004707FC + 0x48) = 0;
            var_a0_2 = 1;
            *(s32 *)((u8 *)D_004707FC + 0x4C) = 0;
        } else {
            var_a0_2 = 0;
        }
        if (var_a0_2 != 0) {
            SoundRpc_SetVolume(0, 0, (u16) temp_a2_2, M2C_BITWISE(s32, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    }
    if (*(s32 *)((u8 *)D_004707FC + 0x4C) == 0) {
        if (*(s32 *)((u8 *)D_004707FC + 0xA4) == 2) {
            *(s32 *)((u8 *)D_004707FC + 0xA4) = 3;
            goto block_118;
        }
    } else if (*(s32 *)((u8 *)D_004707FC + 0xA4) == 3) {
        *(s32 *)((u8 *)D_004707FC + 0xA4) = 2;
block_118:
        *(s32 *)((u8 *)(D_004707FC + 0xA4) + 8) = 0;
    }
    if ((*(s32 *)((u8 *)D_004707FC + 0x4C) + 9) < *(s32 *)((u8 *)D_004707FC + 0x58)) {
        if (*(s32 *)((u8 *)D_004707FC + 0xD4) == 5) {
            *(s32 *)((u8 *)D_004707FC + 0xD4) = 4;
            goto block_125;
        }
    } else if (*(s32 *)((u8 *)D_004707FC + 0xD4) == 4) {
        *(s32 *)((u8 *)D_004707FC + 0xD4) = 5;
block_125:
        *(s32 *)((u8 *)(D_004707FC + 0xD4) + 8) = 0;
    }
}
