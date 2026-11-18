/* Draft (not built): func_002F1770 at 0x002F1770, size 0xA34, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  471: if (!(*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x4008)) { @ 430: if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000) {
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F1770.s */

// src/menu/mn_InputPass.c func_002F1770 cerr diff=-1/0
extern void *func_0022D860(f32, void *);
s32 SoundRpc_SetVolume(s32, s32, f32, f32);
s32 func_001221A8(s8);
extern s32 D_00492FCC;
extern s32 D_00492FD2;
extern s32 D_0049302A;
extern s32 D_0049302B;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
void func_002F1770(u8 *arg0) {
    s32 *var_v1;
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
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s3_4;
    u8 *var_s3;
    u8 *var_s4;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s3 = gInputName;
    temp_s0 = *(u16 *)((u8 *)temp_s1 + 0x124);
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0x10);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x5000);
    D_00470238 = 0;
    func_002F0BC0(temp_s1);
    var_s5 = 0;
    if ((s32) *(u8 *)((u8 *)temp_s1 + 0x170) < 5) {
        var_s4 = temp_s1;
        var_s3 = temp_s1;
        do {
            if (*(u16 *)((u8 *)var_s4 + 0x128) != 0xFFFF) {
                func_0022CF70(*(s32 *)((u8 *)var_s3 + 4));
            }
            var_s5 += 1;
            var_s4 += 2;
            var_s3 += 4;
        } while (var_s5 < 0x24);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    if (*(u8 *)((u8 *)temp_s1 + 0x170) == 2) {
        if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000) {
            *(u8 *)((u8 *)temp_s1 + 0x170) = 3U;
            temp_a0_2 = *(u16 *)((u8 *)temp_s1 + 0x124);
            switch ((s32) temp_a0_2) {              /* irregular */
            default:
                SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                *(u16 *)((u8 *)((*(u16 *)((u8 *)temp_s1 + 0x126) * 2) + temp_s1) + 0x128) = (u16) *(u16 *)((u8 *)temp_s1 + 0x124);
                func_002F06D0(temp_s1, (s16) *(u16 *)((u8 *)temp_s1 + 0x126));
                temp_v1 = *(u16 *)((u8 *)temp_s1 + 0x126);
                if ((s32) temp_v1 < 0x23) {
                    *(u16 *)((u8 *)temp_s1 + 0x126) = (u16) (temp_v1 + 1);
                } else {
                    *(u8 *)((u8 *)temp_s1 + 0x173) = 1U;
                }
                break;
            case 0x102:
                if ((s32) *(u16 *)((u8 *)temp_s1 + 0x126) > 0) {
                    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    *(u16 *)((u8 *)temp_s1 + 0x126) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x126) - 1);
                }
                break;
            case 0x103:
                temp_v1_2 = *(u16 *)((u8 *)temp_s1 + 0x126);
                if (((s32) temp_v1_2 < 0x23) && (*(u16 *)((u8 *)((temp_v1_2 * 2) + temp_s1) + 0x128) != 0xFFFF)) {
                    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    *(u16 *)((u8 *)temp_s1 + 0x126) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x126) + 1);
                }
                break;
            }
        }
        goto block_34;
    }
    if (!(*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x4008)) {
        *(u8 *)((u8 *)temp_s1 + 0x170) = 2U;
        if (*(u8 *)((u8 *)temp_s1 + 0x173) != 0) {
            *(u8 *)((u8 *)temp_s1 + 0x173) = 0U;
            *(f32 *)((u8 *)temp_s1 + 0x11C) = 434.5f;
            *(f32 *)((u8 *)temp_s1 + 0x120) = 140.0f;
        }
        if (*(u16 *)((u8 *)temp_s1 + 0x124) == 0x104) {
            SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            func_002F0D70(arg0);
            return;
        }
        goto block_34;
    }
block_34:
    if (*(u8 *)((u8 *)temp_s1 + 0x170) != 3) {
        temp_s3_2 = D_004B4B63 * 0xB8;
        temp_s4 = (s8 *)(&D_0049302A + temp_s3_2);
        if (func_001221A8(*temp_s4) >= 5) {
            var_f1 = 0.0625f * (f32) *temp_s4;
        } else {
            var_f1 = 0.0f;
        }
        temp_s3_3 = (s8 *)(&D_0049302B + temp_s3_2);
        *(f32 *)((u8 *)temp_s1 + 0x11C) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x11C) + var_f1);
        if (func_001221A8(*temp_s3_3) >= 5) {
            var_f2 = 0.0625f * (f32) *temp_s3_3;
        } else {
            var_f2 = 0.0f;
        }
        *(f32 *)((u8 *)temp_s1 + 0x120) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x120) + var_f2);
        temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x11C);
        if (temp_f1 < 0.0f) {
            *(f32 *)((u8 *)temp_s1 + 0x11C) = 0.0f;
        } else if (!(temp_f1 <= 480.0f)) {
            *(f32 *)((u8 *)temp_s1 + 0x11C) = 480.0f;
        }
        temp_f1_2 = *(f32 *)((u8 *)temp_s1 + 0x120);
        if (temp_f1_2 < 0.0f) {
            *(f32 *)((u8 *)temp_s1 + 0x120) = 0.0f;
        } else if (!(temp_f1_2 <= 160.0f)) {
            *(f32 *)((u8 *)temp_s1 + 0x120) = 160.0f;
        }
        temp_a0_3 = *(&D_00492FD2 + (D_004B4B63 * 0xB8));
        if (temp_a0_3 & 0xF0) {
            if (temp_a0_3 & 0x80) {
                temp_f1_3 = *(f32 *)((u8 *)temp_s1 + 0x11C);
                if (!(temp_f1_3 <= 397.0f)) {
                    *(f32 *)((u8 *)temp_s1 + 0x11C) = 382.0f;
                } else {
                    *(f32 *)((u8 *)temp_s1 + 0x11C) = (f32) (temp_f1_3 - 30.0f);
                }
            } else if (temp_a0_3 & 0x20) {
                *(f32 *)((u8 *)temp_s1 + 0x11C) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x11C) + 30.0f);
            }
            temp_a0_4 = *(&D_00492FD2 + (D_004B4B63 * 0xB8));
            if (temp_a0_4 & 0x10) {
                *(f32 *)((u8 *)temp_s1 + 0x120) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x120) - 30.0f);
            } else if (temp_a0_4 & 0x40) {
                *(f32 *)((u8 *)temp_s1 + 0x120) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x120) + 30.0f);
            }
            temp_f1_4 = *(f32 *)((u8 *)temp_s1 + 0x120);
            if (temp_f1_4 < 20.0f) {
                *(f32 *)((u8 *)temp_s1 + 0x120) = 20.0f;
            } else if (!(temp_f1_4 <= 140.0f)) {
                *(f32 *)((u8 *)temp_s1 + 0x120) = 140.0f;
            }
            temp_f1_5 = *(f32 *)((u8 *)temp_s1 + 0x11C);
            if (temp_f1_5 < 20.0f) {
                *(f32 *)((u8 *)temp_s1 + 0x11C) = 20.0f;
            } else if (!(temp_f1_5 <= 397.0f)) {
                *(f32 *)((u8 *)temp_s1 + 0x11C) = 434.5f;
            }
        }
        temp_f4 = *(f32 *)((u8 *)temp_s1 + 0x11C);
        if (!(temp_f4 < 8.0f) && (temp_f4 <= 473.0f) && (temp_f3 = *(f32 *)((u8 *)temp_s1 + 0x120), !(temp_f3 < 5.0f))) {
            if (!(temp_f3 <= 155.0f)) {
                goto block_78;
            }
            temp_f0 = temp_f3 - 5.0f;
            if (!(temp_f4 < 397.0f)) {
                temp_a1 = (s64) (M2C_BITWISE(s64, temp_f0) << 0x30) >> 0x30;
                *(u16 *)((u8 *)temp_s1 + 0x124) = (u16) (((s64) ((((s32) (((M2C_BITWISE(s64, temp_f0) << 0x30) / 527765581224960) + temp_a1) >> 4) + ((u32) temp_a1 >> 0x1F)) << 0x30) >> 0x30) + 0x100);
            } else {
                temp_f1_6 = temp_f4 - 8.0f;
                temp_f0_2 = temp_f3 - 5.0f;
                temp_t1 = (s64) (M2C_BITWISE(s64, temp_f1_6) << 0x30) >> 0x30;
                temp_a1_2 = (s64) (M2C_BITWISE(s64, temp_f0_2) << 0x30) >> 0x30;
                *(u16 *)((u8 *)temp_s1 + 0x124) = (u16) (((s64) ((((s32) (((M2C_BITWISE(s64, temp_f1_6) << 0x30) / 527765581224960) + temp_t1) >> 4) + ((u32) temp_t1 >> 0x1F)) << 0x30) >> 0x30) + (((s64) ((((s32) (((M2C_BITWISE(s64, temp_f0_2) << 0x30) / 527765581224960) + temp_a1_2) >> 4) + ((u32) temp_a1_2 >> 0x1F)) << 0x30) >> 0x30) * 0xD));
            }
        } else {
block_78:
            *(u16 *)((u8 *)temp_s1 + 0x124) = 0xFFFFU;
        }
        temp_a0_5 = *(&D_00492FD2 + (D_004B4B63 * 0xB8));
        if (temp_a0_5 & 0xC00) {
            if (temp_a0_5 & 0x800) {
                temp_a1_3 = *(u16 *)((u8 *)temp_s1 + 0x126);
                if (((s32) temp_a1_3 < 0x23) && (*(u16 *)((u8 *)((temp_a1_3 * 2) + temp_s1) + 0x128) != 0xFFFF)) {
                    *(u16 *)((u8 *)temp_s1 + 0x126) = (u16) (temp_a1_3 + 1);
                }
            } else {
                temp_v1_3 = *(u16 *)((u8 *)temp_s1 + 0x126);
                if ((s32) temp_v1_3 > 0) {
                    *(u16 *)((u8 *)temp_s1 + 0x126) = (u16) (temp_v1_3 - 1);
                }
            }
        }
        temp_a0_6 = *(D_00492FCE + (D_004B4B63 * 0xB8));
        if (temp_a0_6 & 8) {
            *(u8 *)((u8 *)temp_s1 + 0x170) = 3U;
            *(f32 *)((u8 *)temp_s1 + 0x11C) = 434.5f;
            *(f32 *)((u8 *)temp_s1 + 0x120) = 140.0f;
            *(u16 *)((u8 *)temp_s1 + 0x124) = 0x104U;
            func_002F0960(temp_s1, D_004B4B63);
        } else if (temp_a0_6 & 0x1000) {
            SoundRpc_SetVolume(0, 0, D_004E0614, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            *(s8 *)((u8 *)temp_s1 + 0x172) = 0;
            *(s32 *)((u8 *)temp_s1 + 0x118) = 0x41A00000;
            *(u8 *)((u8 *)temp_s1 + 0x170) = 5U;
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
            *(s32 *)((u8 *)temp_s1 + 0) = func_0022D860((s32)((s32)((s32)((s32)((s32)((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3_4 + 0xC)) + 0x14)) + 4))))))), 0);
            temp_a0_9 = *(s32 *)((u8 *)temp_s1 + 0x98);
            if (temp_a0_9 != 0) {
                func_0022D0E0(temp_a0_9, 1);
                *(s32 *)((u8 *)temp_s1 + 0x98) = 0;
            }
            temp_a0_10 = *(s32 *)((u8 *)temp_s1 + 0x9C);
            if (temp_a0_10 != 0) {
                func_0022D0E0(temp_a0_10, 1);
                *(s32 *)((u8 *)temp_s1 + 0x9C) = 0;
            }
            var_v1 = (s32 *)(&func_002F0FD0);
            if (&func_002F0FD0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        }
    }
    temp_a0_11 = *(u16 *)((u8 *)temp_s1 + 0x124);
    if (((temp_s0 & 0xFFFF) != temp_a0_11) && (temp_a0_11 != 0xFFFF)) {
        SoundRpc_SetVolume(0, 0, D_004E0614, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
}
