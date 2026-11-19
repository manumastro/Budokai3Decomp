/* Draft (not built): func_002C32C0 at 0x002C32C0, size 0x750, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 278 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x748, original 0x750
 * Original: asm/nonmatchings/story/str_status/func_002C32C0.s */

// src/story/str_status.c func_002C32C0 size diff=278/466
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_GetStat(s32);
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern u8 D_004B4B57;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002C32C0(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *temp_s0;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_16;
    s32 temp_a0_17;
    s32 temp_a0_18;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 var_v0_3;

    temp_s0 = *(s32 **)((u8 *)arg0 + 0x30);
    if ((*D_00492FCE | D_00493086) & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3);
    }
    if ((*(u8 *)((u8 *)temp_s0 + 0xCC) == 0) && (amAdx_GetStat(*(s32 *)((u8 *)temp_s0 + 0xC8)) == 5)) {
        *(s32 *)((u8 *)temp_s0 + 0xC8) = amAdx_PlayAfs(1, 0x21123, 0);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s0 + 0xC8), *D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 0xC8), 0);
        *(u8 *)((u8 *)temp_s0 + 0xCC) = 1U;
    }
    temp_v1 = *D_00492FCE | D_00493086;
    if (temp_v1 & 0x4000) {
        if ((s32) *(u8 *)((u8 *)temp_s0 + 0xAD) >= (s32) *(u8 *)((u8 *)temp_s0 + 0xAB)) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            *(s32 *)((u8 *)temp_s0 + 0xC4) = 0x41A00000;
            *(u8 *)((u8 *)temp_s0 + 0xCC) = 1U;
            *(s8 *)((u8 *)temp_s0 + 0xAF) = 2;
            temp_a0 = *(s32 *)((u8 *)temp_s0 + 4);
            D_00470704 = temp_a0;
            D_0047070C = 0x2000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0, 0x2000);
            D_00470238 = 0;
            temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x34);
            if (temp_a0_2 != 0) {
                func_0022D0E0(temp_a0_2, 1);
                *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x80), 0.0f);
            }
            temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x38);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
                *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x84), 0.0f);
            }
            D_004B4B57 = *(u8 *)((u8 *)temp_s0 + 0xAB);
            Obj_SetF3C(*(u8 **)((u8 *)temp_s0 + 0x9C), -1);
            var_v0 = (int *)(&func_002C3120);
            if (&func_002C3120 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        } else {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
        }
    } else if (temp_v1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        Scene_Request(5, 0);
        Scene_FadeTo(0xA, 0);
        *(s8 *)((u8 *)temp_s0 + 0xAF) = 3;
        temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 4);
        D_00470704 = temp_a0_4;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_4, 0x2000);
        D_00470238 = 0;
        temp_a0_5 = *(s32 *)((u8 *)temp_s0 + 0x34);
        if (temp_a0_5 != 0) {
            func_0022D0E0(temp_a0_5, 1);
            *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x80), 0.0f);
        }
        temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 0x38);
        if (temp_a0_6 != 0) {
            func_0022D0E0(temp_a0_6, 1);
            *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x84), 0.0f);
        }
        var_v0_2 = (int *)(&func_002C3220);
        if (&func_002C3220 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    } else {
        temp_v1_2 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
        if (temp_v1_2 & 0x50) {
            if (temp_v1_2 & 0x10) {
                if ((s32) *(u8 *)((u8 *)temp_s0 + 0xAB) > 0) {
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    *(u8 *)((u8 *)temp_s0 + 0xAB) = (u8) (*(u8 *)((u8 *)temp_s0 + 0xAB) - 1);
                    temp_a0_7 = *(s32 *)((u8 *)temp_s0 + 4);
                    D_00470704 = temp_a0_7;
                    D_0047070C = 0x2000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_7, 0x2000);
                    D_00470238 = 0;
                    if (*(s32 *)((u8 *)temp_s0 + 0x34) == 0) {
                        *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x70), 0.0f);
                    }
                    temp_a0_8 = *(s32 *)((u8 *)temp_s0 + 4);
                    D_00470704 = temp_a0_8;
                    D_0047070C = 0x2000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_8, 0x2000);
                    D_00470238 = 0;
                    if (*(s32 *)((u8 *)temp_s0 + 0x38) == 0) {
                        *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x74), 0.0f);
                    }
                    if (*(u8 *)((u8 *)temp_s0 + 0xAB) == 0) {
                        temp_a0_9 = *(s32 *)((u8 *)temp_s0 + 4);
                        D_00470704 = temp_a0_9;
                        D_0047070C = 0x2000;
                        D_00470708 = 0;
                        amModel_SetCurrent(temp_a0_9, 0x2000);
                        D_00470238 = 0;
                        temp_a0_10 = *(s32 *)((u8 *)temp_s0 + 0x34);
                        if (temp_a0_10 != 0) {
                            func_0022D0E0(temp_a0_10, 1);
                        }
                        *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x88), 0.0f);
                    }
                }
            } else {
                temp_v1_3 = *(u8 *)((u8 *)temp_s0 + 0xAB);
                if (((s32) temp_v1_3 < 2) || ((s32) temp_v1_3 < (s32) *(u8 *)((u8 *)temp_s0 + 0xAD))) {
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    *(u8 *)((u8 *)temp_s0 + 0xAB) = (u8) (*(u8 *)((u8 *)temp_s0 + 0xAB) + 1);
                    temp_a0_11 = *(s32 *)((u8 *)temp_s0 + 4);
                    D_00470704 = temp_a0_11;
                    D_0047070C = 0x2000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_11, 0x2000);
                    D_00470238 = 0;
                    if (*(s32 *)((u8 *)temp_s0 + 0x34) == 0) {
                        *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x70), 0.0f);
                    }
                    temp_a0_12 = *(s32 *)((u8 *)temp_s0 + 4);
                    D_00470704 = temp_a0_12;
                    D_0047070C = 0x2000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_12, 0x2000);
                    D_00470238 = 0;
                    if (*(s32 *)((u8 *)temp_s0 + 0x38) == 0) {
                        *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x74), 0.0f);
                    }
                    temp_v1_4 = *(u8 *)((u8 *)temp_s0 + 0xAB);
                    if (((s32) temp_v1_4 >= 2) && ((s32) temp_v1_4 >= (s32) *(u8 *)((u8 *)temp_s0 + 0xAD))) {
                        temp_a0_13 = *(s32 *)((u8 *)temp_s0 + 4);
                        D_00470704 = temp_a0_13;
                        D_0047070C = 0x2000;
                        D_00470708 = 0;
                        amModel_SetCurrent(temp_a0_13, 0x2000);
                        D_00470238 = 0;
                        temp_a0_14 = *(s32 *)((u8 *)temp_s0 + 0x38);
                        if (temp_a0_14 != 0) {
                            func_0022D0E0(temp_a0_14, 1);
                        }
                        *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x8C), 0.0f);
                    }
                }
            }
            if (*(u8 *)((u8 *)temp_s0 + 0xCC) == 0) {
                *(s32 *)((u8 *)temp_s0 + 0xC8) = amAdx_PlayAfs(1, 0x21123, 0);
                amAdx_SetVolume(*(s32 *)((u8 *)temp_s0 + 0xC8), *D_004E0618);
                amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 0xC8), 0);
                *(u8 *)((u8 *)temp_s0 + 0xCC) = 1U;
            }
            var_v0_3 = 3;
            if ((s32) *(u8 *)((u8 *)temp_s0 + 0xAD) >= (s32) *(u8 *)((u8 *)temp_s0 + 0xAB)) {
                var_v0_3 = *(u8 *)((u8 *)temp_s0 + 0xAE);
            }
            Obj_SetF3C(*(u8 **)((u8 *)temp_s0 + 0x9C), (s16) ((s64) ((s64) var_v0_3 << 0x30) >> 0x30));
            temp_a0_15 = *(s32 *)((u8 *)temp_s0 + 4);
            D_00470704 = temp_a0_15;
            D_0047070C = 0x2000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_15, 0x2000);
            D_00470238 = 0;
            temp_a0_16 = *(s32 *)((u8 *)temp_s0 + 0x24);
            if (temp_a0_16 != 0) {
                func_0022D0E0(temp_a0_16, 1);
            }
            *(s32 *)((u8 *)temp_s0 + 0x24) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + ((*(u8 *)((u8 *)temp_s0 + 0xAB) + 0x2A) * 4)), 0.0f);
        }
    }
    temp_a0_17 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0_17;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_17, 0x2000);
    D_00470238 = 0;
    temp_a0_18 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0_18;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_18, 0x2000);
    D_00470238 = 0;
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 8);
    if (temp_s1 != 0) {
        func_0022C060(temp_s1, 1.0f);
        func_0022CD00(temp_s1);
    }
    func_002C0860(temp_s0);
    A2d_FlushList();
    func_00133B50(0, 0);
}
