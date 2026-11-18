/* Draft (not built): func_002F3210 at 0x002F3210, size 0xA4C, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  891: if (!(*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x4008)) { @ 850: if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000) {
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F3210.s */

// src/menu/mn_InputPass.c func_002F3210 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, f32, f32);
s32 func_001221A8(s8);
extern s32 D_00492FCC;
extern s32 D_00492FD2;
extern s32 D_0049302A;
extern s32 D_0049302B;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern void func_002F3020(void);
void func_002F3210(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f1;
    f32 var_f2;
    s32 temp_a0_10;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_s3_2;
    s32 var_s5;
    s64 temp_a1;
    s64 temp_a1_2;
    s64 temp_t1;
    s8 *temp_s3_3;
    s8 *temp_s4;
    u16 temp_a0_11;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_a0_5;
    u16 temp_a0_6;
    u16 temp_a1_3;
    u16 temp_s0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u8 *temp_a0;
    u8 *temp_a0_7;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s3_4;
    u8 *var_s3;
    u8 *var_s4;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s3 = gInputName;
    temp_s0 = *(u16 *)((u8 *)temp_s1 + 0x4C);
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0x10);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x5000);
    D_00470238 = 0;
    func_002F2D50(temp_s1);
    var_s5 = 0;
    if ((s32) *(u8 *)((u8 *)temp_s1 + 0x60) < 5) {
        var_s4 = temp_s1;
        var_s3 = temp_s1;
        do {
            if (*(s16 *)((u8 *)var_s4 + 0x50) != -1) {
                func_0022CF70(*(s32 *)((u8 *)var_s3 + 4));
            }
            var_s5 += 1;
            var_s4 += 2;
            var_s3 += 4;
        } while (var_s5 < 8);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    if (*(u8 *)((u8 *)temp_s1 + 0x60) == 2) {
        if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000) {
            *(u8 *)((u8 *)temp_s1 + 0x60) = 3U;
            temp_a0_2 = *(u16 *)((u8 *)temp_s1 + 0x4C);
            switch ((s32) temp_a0_2) {              /* irregular */
            default:
                SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                *(u16 *)((u8 *)((*(u16 *)((u8 *)temp_s1 + 0x4E) * 2) + temp_s1) + 0x50) = (u16) *(u16 *)((u8 *)temp_s1 + 0x4C);
                func_002F2870(temp_s1, (s16) *(u16 *)((u8 *)temp_s1 + 0x4E));
                temp_v1 = *(u16 *)((u8 *)temp_s1 + 0x4E);
                if ((s32) temp_v1 < 7) {
                    *(u16 *)((u8 *)temp_s1 + 0x4E) = (u16) (temp_v1 + 1);
                } else {
                    *(u8 *)((u8 *)temp_s1 + 0x62) = 1U;
                }
                break;
            case 0x102:
                if ((s32) *(u16 *)((u8 *)temp_s1 + 0x4E) > 0) {
                    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    *(u16 *)((u8 *)temp_s1 + 0x4E) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x4E) - 1);
                }
                break;
            case 0x103:
                temp_v1_2 = *(u16 *)((u8 *)temp_s1 + 0x4E);
                if (((s32) temp_v1_2 < 7) && (*(s16 *)((u8 *)((temp_v1_2 * 2) + temp_s1) + 0x50) != -1)) {
                    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    *(u16 *)((u8 *)temp_s1 + 0x4E) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x4E) + 1);
                }
                break;
            }
        }
        goto block_36;
    }
    if (!(*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x4008)) {
        *(u8 *)((u8 *)temp_s1 + 0x60) = 2U;
        if (*(u8 *)((u8 *)temp_s1 + 0x62) != 0) {
            *(u8 *)((u8 *)temp_s1 + 0x62) = 0U;
            *(f32 *)((u8 *)temp_s1 + 0x44) = 434.5f;
            *(f32 *)((u8 *)temp_s1 + 0x48) = 140.0f;
        }
        if (*(u16 *)((u8 *)temp_s1 + 0x4C) == 0x104) {
            SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x30);
            var_v1 = (s32 *)(&func_002F3020);
            *(s32 *)((u8 *)temp_s0_2 + 0x3C) = IpSysWnd_Start(6);
            if (&func_002F3020 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        goto block_36;
    }
block_36:
    if (*(u8 *)((u8 *)temp_s1 + 0x60) != 3) {
        temp_s3_2 = D_004B4B63 * 0xB8;
        temp_s4 = (s8 *)(&D_0049302A + temp_s3_2);
        if (func_001221A8(*temp_s4) >= 5) {
            var_f1 = 0.0625f * (f32) *temp_s4;
        } else {
            var_f1 = 0.0f;
        }
        temp_s3_3 = (s8 *)(&D_0049302B + temp_s3_2);
        *(f32 *)((u8 *)temp_s1 + 0x44) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x44) + var_f1);
        if (func_001221A8(*temp_s3_3) >= 5) {
            var_f2 = 0.0625f * (f32) *temp_s3_3;
        } else {
            var_f2 = 0.0f;
        }
        *(f32 *)((u8 *)temp_s1 + 0x48) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x48) + var_f2);
        temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x44);
        if (temp_f1 < 0.0f) {
            *(f32 *)((u8 *)temp_s1 + 0x44) = 0.0f;
        } else if (!(temp_f1 <= 480.0f)) {
            *(f32 *)((u8 *)temp_s1 + 0x44) = 480.0f;
        }
        temp_f1_2 = *(f32 *)((u8 *)temp_s1 + 0x48);
        if (temp_f1_2 < 0.0f) {
            *(f32 *)((u8 *)temp_s1 + 0x48) = 0.0f;
        } else if (!(temp_f1_2 <= 160.0f)) {
            *(f32 *)((u8 *)temp_s1 + 0x48) = 160.0f;
        }
        temp_a0_3 = *(&D_00492FD2 + (D_004B4B63 * 0xB8));
        if (temp_a0_3 & 0xF0) {
            if (temp_a0_3 & 0x80) {
                temp_f1_3 = *(f32 *)((u8 *)temp_s1 + 0x44);
                if (!(temp_f1_3 <= 397.0f)) {
                    *(f32 *)((u8 *)temp_s1 + 0x44) = 382.0f;
                } else {
                    *(f32 *)((u8 *)temp_s1 + 0x44) = (f32) (temp_f1_3 - 30.0f);
                }
            } else if (temp_a0_3 & 0x20) {
                *(f32 *)((u8 *)temp_s1 + 0x44) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x44) + 30.0f);
            }
            temp_a0_4 = *(&D_00492FD2 + (D_004B4B63 * 0xB8));
            if (temp_a0_4 & 0x10) {
                *(f32 *)((u8 *)temp_s1 + 0x48) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x48) - 30.0f);
            } else if (temp_a0_4 & 0x40) {
                *(f32 *)((u8 *)temp_s1 + 0x48) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x48) + 30.0f);
            }
            temp_f1_4 = *(f32 *)((u8 *)temp_s1 + 0x48);
            if (temp_f1_4 < 20.0f) {
                *(f32 *)((u8 *)temp_s1 + 0x48) = 20.0f;
            } else if (!(temp_f1_4 <= 140.0f)) {
                *(f32 *)((u8 *)temp_s1 + 0x48) = 140.0f;
            }
            temp_f1_5 = *(f32 *)((u8 *)temp_s1 + 0x44);
            if (temp_f1_5 < 20.0f) {
                *(f32 *)((u8 *)temp_s1 + 0x44) = 20.0f;
            } else if (!(temp_f1_5 <= 397.0f)) {
                *(f32 *)((u8 *)temp_s1 + 0x44) = 434.5f;
            }
        }
        temp_f4 = *(f32 *)((u8 *)temp_s1 + 0x44);
        if (!(temp_f4 < 8.0f) && (temp_f4 <= 473.0f) && (temp_f3 = *(f32 *)((u8 *)temp_s1 + 0x48), !(temp_f3 < 5.0f))) {
            if (!(temp_f3 <= 155.0f)) {
                goto block_80;
            }
            temp_f0 = temp_f3 - 5.0f;
            if (!(temp_f4 < 397.0f)) {
                temp_a1 = (s64) (M2C_BITWISE(s64, temp_f0) << 0x30) >> 0x30;
                *(u16 *)((u8 *)temp_s1 + 0x4C) = (u16) (((s64) ((((s32) (((M2C_BITWISE(s64, temp_f0) << 0x30) / 527765581224960) + temp_a1) >> 4) + ((u32) temp_a1 >> 0x1F)) << 0x30) >> 0x30) + 0x100);
            } else {
                temp_f1_6 = temp_f4 - 8.0f;
                temp_f0_2 = temp_f3 - 5.0f;
                temp_t1 = (s64) (M2C_BITWISE(s64, temp_f1_6) << 0x30) >> 0x30;
                temp_a1_2 = (s64) (M2C_BITWISE(s64, temp_f0_2) << 0x30) >> 0x30;
                *(u16 *)((u8 *)temp_s1 + 0x4C) = (u16) (((s64) ((((s32) (((M2C_BITWISE(s64, temp_f1_6) << 0x30) / 527765581224960) + temp_t1) >> 4) + ((u32) temp_t1 >> 0x1F)) << 0x30) >> 0x30) + (((s64) ((((s32) (((M2C_BITWISE(s64, temp_f0_2) << 0x30) / 527765581224960) + temp_a1_2) >> 4) + ((u32) temp_a1_2 >> 0x1F)) << 0x30) >> 0x30) * 0xD));
            }
        } else {
block_80:
            *(u16 *)((u8 *)temp_s1 + 0x4C) = 0xFFFFU;
        }
        temp_a0_5 = *(&D_00492FD2 + (D_004B4B63 * 0xB8));
        if (temp_a0_5 & 0xC00) {
            if (temp_a0_5 & 0x800) {
                temp_a1_3 = *(u16 *)((u8 *)temp_s1 + 0x4E);
                if (((s32) temp_a1_3 < 7) && (*(s16 *)((u8 *)((temp_a1_3 * 2) + temp_s1) + 0x50) != -1)) {
                    *(u16 *)((u8 *)temp_s1 + 0x4E) = (u16) (temp_a1_3 + 1);
                }
            } else {
                temp_v1_3 = *(u16 *)((u8 *)temp_s1 + 0x4E);
                if ((s32) temp_v1_3 > 0) {
                    *(u16 *)((u8 *)temp_s1 + 0x4E) = (u16) (temp_v1_3 - 1);
                }
            }
        }
        temp_a0_6 = *(D_00492FCE + (D_004B4B63 * 0xB8));
        if (temp_a0_6 & 8) {
            *(u8 *)((u8 *)temp_s1 + 0x60) = 3U;
            *(f32 *)((u8 *)temp_s1 + 0x44) = 434.5f;
            *(f32 *)((u8 *)temp_s1 + 0x48) = 140.0f;
            *(u16 *)((u8 *)temp_s1 + 0x4C) = 0x104U;
            func_002F2AF0(temp_s1, D_004B4B63);
        } else if (temp_a0_6 & 0x1000) {
            SoundRpc_SetVolume(0, 0, D_004E0614, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            *(s8 *)((u8 *)temp_s1 + 0x61) = 0;
            *(s32 *)((u8 *)temp_s1 + 0x40) = 0x41A00000;
            *(u8 *)((u8 *)temp_s1 + 0x60) = 5U;
            temp_s3_4 = gInputName;
            temp_a0_7 = *(u8 **)((u8 *)temp_s3_4 + 0x10);
            D_00470704 = (s32)(temp_a0_7);
            D_0047070C = 0x5000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_7), 0x5000);
            D_00470238 = 0;
            temp_a0_8 = *(s32 *)((u8 *)temp_s1 + 0);
            if (temp_a0_8 != 0) {
                func_0022D0E0(temp_a0_8, 1);
            }
            *(s32 *)((u8 *)temp_s1 + 0) = func_0022D860((s32)((s32)((s32)((s32)((s32)((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3_4 + 0xC)) + 0x14)) + 0xC))))))), 0);
            temp_a0_9 = *(s32 *)((u8 *)temp_s1 + 0x28);
            if (temp_a0_9 != 0) {
                func_0022D0E0(temp_a0_9, 1);
                *(s32 *)((u8 *)temp_s1 + 0x28) = 0;
            }
            temp_a0_10 = *(s32 *)((u8 *)temp_s1 + 0x2C);
            if (temp_a0_10 != 0) {
                func_0022D0E0(temp_a0_10, 1);
                *(s32 *)((u8 *)temp_s1 + 0x2C) = 0;
            }
            var_v1_2 = (s32 *)(&func_002F2F00);
            if (&func_002F2F00 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        }
    }
    temp_a0_11 = *(u16 *)((u8 *)temp_s1 + 0x4C);
    if (((temp_s0 & 0xFFFF) != temp_a0_11) && (temp_a0_11 != 0xFFFF)) {
        SoundRpc_SetVolume(0, 0, D_004E0614, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
}
