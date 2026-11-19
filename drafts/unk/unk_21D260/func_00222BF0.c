/* Draft (not built): func_00222BF0 at 0x00222BF0, size 0xA6C, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 321 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA8C, original 0xA6C
 * Original: asm/nonmatchings/unk/unk_21D260/func_00222BF0.s */

// src/unk/unk_21D260.c func_00222BF0 size diff=321/675
extern u8 D_00492FC0[];
extern u8 D_0058BB34[];
s8 *BtlSys_GetSlot(s16);
s32 SoundRpc_SetVolume(s32, s32, f32, s32, f32);
s16 func_0021C2E0(s16);
s32 memcpy(void *, void *, s32);
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern s8 D_0058BB31;
extern s8 D_0058BB32;
extern s8 D_0058BB33;
extern void SoundRpc_Send3();
extern void func_00222A90(void);
extern void func_002228F0(void);
extern void func_0021F0E0(void);
void func_00222BF0(u8 *arg0) {
    s32 *var_v0_10;
    s32 *var_v0_11;
    s32 *var_v0_3;
    s32 *var_v0_4;
    s32 *var_v0_5;
    s32 *var_v0_6;
    s32 *var_v0_7;
    s32 *var_v0_8;
    s32 *var_v0_9;
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_s4;
    s16 var_v0;
    s32 temp_a1;
    s32 var_s5;
    s32 var_t0;
    s8 *var_s3;
    s8 *var_v0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s2 = arg0;
    var_s1 = (unsigned char *)(gBtlSys);
    var_v0 = *(s16 *)((u8 *)var_s1 + 0xE42);
    var_s0 = var_s2 + 0x30;
    if (var_v0 == -1) {
        var_v0 = func_0021C2E0(*(s16 *)((u8 *)var_s1 + 0xE40));
    }
    if (var_v0 == -1) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = BtlSys_GetSlot(var_v0);
    }
    var_s3 = var_v0_2;
    func_00224680(var_s0);
    if (*(s32 *)((u8 *)var_s1 + 0xE30) & 2) {
        temp_a1 = *(s32 *)((u8 *)var_s0 + 0x28);
        switch (temp_a1) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            break;
        case 0:                                     /* switch 1 */
            temp_f1 = *(f32 *)((u8 *)var_s0 + 0x2C) + D_00470710;
            *(f32 *)((u8 *)var_s0 + 0x2C) = temp_f1;
            if (!(temp_f1 < 8.0f)) {
                *(s32 *)((u8 *)var_s0 + 0x28) = 1;
            }
            break;
        case 2:                                     /* switch 1 */
            temp_f1_2 = *(f32 *)((u8 *)var_s0 + 0x2C) + D_00470710;
            *(f32 *)((u8 *)var_s0 + 0x2C) = temp_f1_2;
            if (!(temp_f1_2 < 8.0f)) {
                *(s32 *)((u8 *)gBtlSys + 0xE30) = (s32) (*(s32 *)((u8 *)gBtlSys + 0xE30) & ~2);
            }
            break;
        }
        *(f32 *)((u8 *)var_s0 + 0x20) = (f32) (*(f32 *)((u8 *)var_s0 + 0x20) + D_00470710);
        return;
    }
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (D_0058BB36 != 0) {
        *(f32 *)((u8 *)var_s0 + 0x20) = (f32) (*(f32 *)((u8 *)var_s0 + 0x20) + D_00470710);
    } else {
        *(f32 *)((u8 *)var_s0 + 0x20) = 0.0f;
    }
    if (D_0058BB38 != 0) {
        if (D_0058BB32 != 0) {
            temp_a0 = *(s16 *)((u8 *)var_s0 + 8);
            switch (temp_a0) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                *(s32 *)((u8 *)var_s0 + 4) = 2;
                *(s16 *)((u8 *)var_s1 + 0xE44) = 0;
                var_v0_3 = (int *)(&func_00222A90);
                *(s32 *)((u8 *)var_s0 + 0x1C) = 0;
                if (&func_00222A90 == NULL) {
                    var_v0_3 = NULL;
                }
                *(s32 **)((u8 *)var_s2 + 0x1C) = var_v0_3;
                SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 5, 0);
                }
                return;
            case 7:                                 /* switch 2 */
                *(s32 *)((u8 *)var_s0 + 4) = 2;
                *(s16 *)((u8 *)var_s1 + 0xE44) = 1;
                var_v0_4 = (int *)(&func_00222A90);
                *(s32 *)((u8 *)var_s0 + 0x1C) = 0;
                if (&func_00222A90 == NULL) {
                    var_v0_4 = NULL;
                }
                *(s32 **)((u8 *)var_s2 + 0x1C) = var_v0_4;
                SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x16, 0);
                }
                return;
            case 8:                                 /* switch 2 */
                if (var_s3 != NULL) {
                    if (*(s32 *)((u8 *)var_s0 + 0x18) != 0) {
                        *(s32 *)((u8 *)var_s0 + 4) = 3;
                        *(s32 *)((u8 *)var_s0 + 0x1C) = 0;
                        *(s16 *)((u8 *)var_s0 + 0xA) = 0;
                        var_v0_5 = (int *)(&func_002228F0);
                        *(s32 *)((u8 *)var_s0 + 0x14) = (s32) *(s32 *)((u8 *)var_s3 + 0x1C);
                        *(s32 *)((u8 *)var_s0 + 0x30) = 0x43C80000;
                        *(s32 *)((u8 *)var_s0 + 0x34) = 0x43AA0000;
                        if (&func_002228F0 == NULL) {
                            var_v0_5 = NULL;
                        }
                        *(s32 **)((u8 *)var_s2 + 0x1C) = var_v0_5;
                        var_v0_6 = (int *)(&func_0021F0E0);
                        if (&func_0021F0E0 == NULL) {
                            var_v0_6 = NULL;
                        }
                        *(s32 **)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x30)) + 0x1C) = var_v0_6;
                        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 0x15, 0);
                        }
                    } else {
                        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 6, 0);
                        }
                    }
                    return;
                }
                goto block_65;
            case 9:                                 /* switch 2 */
                *(s32 *)((u8 *)var_s0 + 4) = 3;
                *(s16 *)((u8 *)var_s1 + 0xE44) = 2;
                *(s16 *)((u8 *)var_s0 + 0xA) = 1;
                var_v0_7 = (int *)(&func_002228F0);
                if (&func_002228F0 == NULL) {
                    var_v0_7 = NULL;
                }
                *(s32 **)((u8 *)var_s2 + 0x1C) = var_v0_7;
                var_v0_8 = (int *)(&func_0021F0E0);
                if (&func_0021F0E0 == NULL) {
                    var_v0_8 = NULL;
                }
                *(s32 **)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x30)) + 0x1C) = var_v0_8;
                SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x15, 0);
                }
                return;
            case 10:                                /* switch 2 */
                *(s32 *)((u8 *)var_s0 + 4) = 3;
                *(s16 *)((u8 *)var_s1 + 0xE44) = 3;
                var_v0_9 = (int *)(&func_002228F0);
                *(s16 *)((u8 *)var_s0 + 0xA) = 1;
                if (&func_002228F0 == NULL) {
                    var_v0_9 = NULL;
                }
                *(s32 **)((u8 *)var_s2 + 0x1C) = var_v0_9;
                var_v0_10 = (int *)(&func_0021F0E0);
                if (&func_0021F0E0 == NULL) {
                    var_v0_10 = NULL;
                }
                *(s32 **)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x30)) + 0x1C) = var_v0_10;
                SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x15, 0);
                }
                return;
            }
        } else {
block_65:
            if (*D_0058BB30 != 0) {
                *(s16 *)((u8 *)var_s0 + 8) = (s16) (*(s16 *)((u8 *)var_s0 + 8) - ((s64) ((s64) *D_0058BB30 << 0x38) >> 0x38));
                do {
                    temp_a0_2 = *(s16 *)((u8 *)var_s0 + 8);
                    var_t0 = 0;
                    if ((temp_a0_2 == 2) && (*(s16 *)((u8 *)var_s1 + 0xE48) != 3)) {
                        var_t0 = 1;
                        *(s16 *)((u8 *)var_s0 + 8) = (s16) (temp_a0_2 - *D_0058BB30);
                    }
                    temp_v0 = *(s16 *)((u8 *)var_s0 + 8);
                    if ((temp_v0 >= 3) && (temp_v0 < 6)) {
                        temp_v0_2 = *(s16 *)((u8 *)var_s1 + 0xE48);
                        if (temp_v0_2 != 4) {
                            if (temp_v0_2 == 3) {
                                goto block_75;
                            }
                        } else {
block_75:
                            var_t0 = 1;
                            *(s16 *)((u8 *)var_s0 + 8) = (s16) (*(s16 *)((u8 *)var_s0 + 8) - *D_0058BB30);
                        }
                    }
                    if (*(s16 *)((u8 *)var_s0 + 8) < 0) {
                        *(s16 *)((u8 *)var_s0 + 8) = 0xA;
                        var_t0 = 1;
                    }
                    if (*(s16 *)((u8 *)var_s0 + 8) >= 0xB) {
                        *(s16 *)((u8 *)var_s0 + 8) = 0;
                        var_t0 = 1;
                    }
                } while (var_t0 != 0);
                SoundRpc_SetVolume(0, 0, 4e-45f, 2, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 2, 0);
                }
            }
            if (D_0058BB31 != 0) {
                temp_v1 = *(s16 *)((u8 *)var_s0 + 8);
                switch (temp_v1) {                  /* switch 3 */
                case 1:                             /* switch 3 */
                    *(s16 *)((u8 *)var_s1 + 0xE48) = (s16) (*(s16 *)((u8 *)var_s1 + 0xE48) + ((s64) ((s64) D_0058BB31 << 0x38) >> 0x38));
                    if (*(s16 *)((u8 *)var_s1 + 0xE48) < 0) {
                        *(s16 *)((u8 *)var_s1 + 0xE48) = 4;
                    }
                    if (*(s16 *)((u8 *)var_s1 + 0xE48) >= 5) {
                        *(s16 *)((u8 *)var_s1 + 0xE48) = 0;
                    }
                    var_s3 = (signed char *)(gBattle);
                    temp_a1_2 = *(s16 *)((u8 *)var_s1 + 0xE48);
                    *(s8 *)((u8 *)var_s3 + 0x8977) = (s8) temp_a1_2;
                    temp_v1_2 = *(s16 *)((u8 *)var_s3 + 0x1BD4);
                    var_s5 = temp_v1_2 ^ D_004B4B63;
                    var_s5 = temp_v1_2 == D_004B4B63;
                    if (temp_a1_2 == 4) {
                        var_s4 = 1 - D_004B4B63;
                    } else {
                        var_s4 = -1;
                    }
                    if (var_s4 >= 0) {
                        memcpy(var_s3 + (var_s5 * 0x2020) + 0x272C,((u8 *)&D_00492FC0) + (var_s4 * 0xB8), 0xB8);
                    }
                    *(s16 *)((u8 *)((var_s5 * 0x2020) + var_s3) + 0x1BD4) = var_s4;
                    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    break;
                case 2:                             /* switch 3 */
                    *(s16 *)((u8 *)var_s1 + 0xE4A) = (s16) (*(s16 *)((u8 *)var_s1 + 0xE4A) + ((s64) ((s64) D_0058BB31 << 0x38) >> 0x38));
                    if (*(s16 *)((u8 *)var_s1 + 0xE4A) < 0) {
                        *(s16 *)((u8 *)var_s1 + 0xE4A) = 4;
                    }
                    if (*(s16 *)((u8 *)var_s1 + 0xE4A) >= 5) {
                        *(s16 *)((u8 *)var_s1 + 0xE4A) = 0;
                    }
                    *(s8 *)((u8 *)gBattle + 0x8978) = (s8) *(s16 *)((u8 *)var_s1 + 0xE4A);
                    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    break;
                case 3:                             /* switch 3 */
                    *(s16 *)((u8 *)var_s1 + 0xE4C) = (s16) (*(s16 *)((u8 *)var_s1 + 0xE4C) + ((s64) ((s64) D_0058BB31 << 0x38) >> 0x38));
                    if (*(s16 *)((u8 *)var_s1 + 0xE4C) < 0) {
                        *(s16 *)((u8 *)var_s1 + 0xE4C) = 2;
                    }
                    if (*(s16 *)((u8 *)var_s1 + 0xE4C) >= 3) {
                        *(s16 *)((u8 *)var_s1 + 0xE4C) = 0;
                    }
                    *(s8 *)((u8 *)gBattle + 0x8979) = (s8) *(s16 *)((u8 *)var_s1 + 0xE4C);
                    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    break;
                case 4:                             /* switch 3 */
                    *(s16 *)((u8 *)var_s1 + 0xE4E) = (s16) (*(s16 *)((u8 *)var_s1 + 0xE4E) ^ 1);
                    *(s8 *)((u8 *)gBattle + 0x897A) = (s8) *(s16 *)((u8 *)var_s1 + 0xE4E);
                    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    break;
                case 5:                             /* switch 3 */
                    *(s16 *)((u8 *)var_s1 + 0xE50) = (s16) (*(s16 *)((u8 *)var_s1 + 0xE50) ^ 1);
                    *(s8 *)((u8 *)gBattle + 0x897B) = (s8) *(s16 *)((u8 *)var_s1 + 0xE50);
                    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    break;
                case 6:                             /* switch 3 */
                    *(s16 *)((u8 *)var_s1 + 0xE52) = (s16) (*(s16 *)((u8 *)var_s1 + 0xE52) + ((s64) ((s64) D_0058BB31 << 0x38) >> 0x38));
                    if (*(s16 *)((u8 *)var_s1 + 0xE52) < 0) {
                        *(s16 *)((u8 *)var_s1 + 0xE52) = 3;
                    }
                    if (*(s16 *)((u8 *)var_s1 + 0xE52) >= 4) {
                        *(s16 *)((u8 *)var_s1 + 0xE52) = 0;
                    }
                    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    break;
                }
            }
            if (D_0058BB33 == 0) {
                if (D_0058BB34 != 0) {
                    goto block_125;
                }
            } else {
block_125:
                *(s32 *)((u8 *)var_s0 + 4) = 2;
                *(s16 *)((u8 *)var_s1 + 0xE44) = 0;
                var_v0_11 = (int *)(&func_00222A90);
                *(s32 *)((u8 *)var_s0 + 0x1C) = 0;
                if (&func_00222A90 == NULL) {
                    var_v0_11 = NULL;
                }
                *(s32 **)((u8 *)var_s2 + 0x1C) = var_v0_11;
                SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 5, 0);
                }
            }
        }
    }
}
