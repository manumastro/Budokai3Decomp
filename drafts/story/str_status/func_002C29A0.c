/* Draft (not built): func_002C29A0 at 0x002C29A0, size 0x650, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 276 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x634, original 0x650
 * Original: asm/nonmatchings/story/str_status/func_002C29A0.s */

// src/story/str_status.c func_002C29A0 size diff=276/397
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00492FC0;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern s32 D_00493078;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_002C27B0(void);
void func_002C29A0(u8 *arg0) {
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
    s32 var_a0;

    temp_s0 = *(s32 **)((u8 *)arg0 + 0x30);
    if ((*D_00492FCE | D_00493086) & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3);
    }
    temp_v1 = *D_00492FCE | D_00493086;
    if (temp_v1 & 0x4000) {
        var_a0 = 1;
        if ((s32) *(u8 *)((u8 *)temp_s0 + 0xAC) > 0) {
            if (D_00492FC0 == 3) {
                if (D_00493078 != 3) {
                    goto block_7;
                }
            } else {
block_7:
                var_a0 = 0;
            }
        }
        if (var_a0 != 0) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            *(s32 *)((u8 *)temp_s0 + 0xC4) = 0x41C80000;
            *(s8 *)((u8 *)temp_s0 + 0xAF) = 7;
            Obj_SetF3C(*(u8 **)((u8 *)temp_s0 + 0x9C), -1);
            func_002C1160(temp_s0);
            var_v0 = (int *)(&func_002C27B0);
            if (&func_002C27B0 == NULL) {
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
        *(s32 *)((u8 *)temp_s0 + 0xC4) = 0x41A00000;
        *(s8 *)((u8 *)temp_s0 + 0xAF) = 8;
        Obj_SetF3C(*(u8 **)((u8 *)temp_s0 + 0x9C), -1);
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 4);
        D_00470704 = temp_a0;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x2000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 4);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x2000);
        D_00470238 = 0;
        temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x34);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
            *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x80), 0.0f);
        }
        temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x38);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
            *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x84), 0.0f);
        }
        temp_a0_5 = *(s32 *)((u8 *)temp_s0 + 0x28);
        if (temp_a0_5 != 0) {
            func_0022D0E0(temp_a0_5, 1);
        }
        *(s32 *)((u8 *)temp_s0 + 0x28) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0xC0), 0.0f);
        var_v0_2 = (int *)(&func_002C28A0);
        if (&func_002C28A0 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    } else {
        temp_v1_2 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
        if (temp_v1_2 & 0x50) {
            if (temp_v1_2 & 0x10) {
                if ((s32) *(u8 *)((u8 *)temp_s0 + 0xAC) > 0) {
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    *(u8 *)((u8 *)temp_s0 + 0xAC) = (u8) (*(u8 *)((u8 *)temp_s0 + 0xAC) - 1);
                    temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 4);
                    D_00470704 = temp_a0_6;
                    D_0047070C = 0x2000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_6, 0x2000);
                    D_00470238 = 0;
                    if (*(s32 *)((u8 *)temp_s0 + 0x34) == 0) {
                        *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x70), 0.0f);
                    }
                    temp_a0_7 = *(s32 *)((u8 *)temp_s0 + 4);
                    D_00470704 = temp_a0_7;
                    D_0047070C = 0x2000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_7, 0x2000);
                    D_00470238 = 0;
                    if (*(s32 *)((u8 *)temp_s0 + 0x38) == 0) {
                        *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x74), 0.0f);
                    }
                    if (*(u8 *)((u8 *)temp_s0 + 0xAC) == 0) {
                        temp_a0_8 = *(s32 *)((u8 *)temp_s0 + 4);
                        D_00470704 = temp_a0_8;
                        D_0047070C = 0x2000;
                        D_00470708 = 0;
                        amModel_SetCurrent(temp_a0_8, 0x2000);
                        D_00470238 = 0;
                        temp_a0_9 = *(s32 *)((u8 *)temp_s0 + 0x34);
                        if (temp_a0_9 != 0) {
                            func_0022D0E0(temp_a0_9, 1);
                        }
                        *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x88), 0.0f);
                    }
                }
            } else if ((s32) *(u8 *)((u8 *)temp_s0 + 0xAC) < 7) {
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 2, 0);
                }
                *(u8 *)((u8 *)temp_s0 + 0xAC) = (u8) (*(u8 *)((u8 *)temp_s0 + 0xAC) + 1);
                temp_a0_10 = *(s32 *)((u8 *)temp_s0 + 4);
                D_00470704 = temp_a0_10;
                D_0047070C = 0x2000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_10, 0x2000);
                D_00470238 = 0;
                if (*(s32 *)((u8 *)temp_s0 + 0x34) == 0) {
                    *(s32 *)((u8 *)temp_s0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x70), 0.0f);
                }
                temp_a0_11 = *(s32 *)((u8 *)temp_s0 + 4);
                D_00470704 = temp_a0_11;
                D_0047070C = 0x2000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_11, 0x2000);
                D_00470238 = 0;
                if (*(s32 *)((u8 *)temp_s0 + 0x38) == 0) {
                    *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x74), 0.0f);
                }
                if ((s32) *(u8 *)((u8 *)temp_s0 + 0xAC) >= 7) {
                    temp_a0_12 = *(s32 *)((u8 *)temp_s0 + 4);
                    D_00470704 = temp_a0_12;
                    D_0047070C = 0x2000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_12, 0x2000);
                    D_00470238 = 0;
                    temp_a0_13 = *(s32 *)((u8 *)temp_s0 + 0x38);
                    if (temp_a0_13 != 0) {
                        func_0022D0E0(temp_a0_13, 1);
                    }
                    *(s32 *)((u8 *)temp_s0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x8C), 0.0f);
                }
            }
            temp_a0_14 = *(s32 *)((u8 *)temp_s0 + 4);
            D_00470704 = temp_a0_14;
            D_0047070C = 0x2000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_14, 0x2000);
            D_00470238 = 0;
            temp_a0_15 = *(s32 *)((u8 *)temp_s0 + 0x24);
            if (temp_a0_15 != 0) {
                func_0022D0E0(temp_a0_15, 1);
            }
            *(s32 *)((u8 *)temp_s0 + 0x24) = func_0022D670(*(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C) + ((*(u8 *)((u8 *)temp_s0 + 0xAC) + 0x12) * 4)), 0.0f);
        }
    }
    temp_a0_16 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0_16;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_16, 0x2000);
    D_00470238 = 0;
    temp_a0_17 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0_17;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_17, 0x2000);
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
