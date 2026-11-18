/* Draft (not built): func_002BC250 at 0x002BC250, size 0x58C, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0x8080 << 0x10) | (0x400040 << 0x20), (1 << D_004B4B63) & 0xFF, temp_a2, temp_a3_2); @ 514: temp_a3 = D_004B4B63 * 0xB8;
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BC250.s */

// src/unk/unk_2B98D0.c func_002BC250 cerr diff=-1/0
extern s128 D_00455DE0;
extern s32 D_00492FD2;
extern s32 D_00493032;
void func_002BC250(u8 *arg0) {
    s32 sp30;
    s16 sp34;
    s16 sp3C;
    s128 sp50;
    s16 sp54;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 var_s0;
    u16 temp_a2;
    u16 temp_a3_2;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_s1 = *(s32 *)((u8 *)gStrStatus + 0x408);
    temp_a3 = D_004B4B63 * 0xB8;
    temp_a3_2 = *(D_00492FCE + temp_a3);
    temp_a2 = *(&D_00492FD2 + temp_a3);
    temp_a1 = temp_a2 | *(&D_00493032 + temp_a3);
    if (temp_a3_2 & 1) {
        Help_Open((0x8080 << 0x10) | (0x400040 << 0x20), (1 << D_004B4B63) & 0xFF, temp_a2, temp_a3_2);
        return;
    }
    if (temp_a3_2 & 0x5000) {
        sp50 = D_00455DE0;
        if (*(s32 *)((u8 *)gStrStatus + 0x404) != 0) {
            func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
            SoundRpc_SetVolume(0, 0, (s32)(D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            var_v1 = (s32 *)(&func_002BC120);
            if (&func_002BC120 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        sp54 = -0x7FF0;
        func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
        SoundRpc_SetVolume(0, 0, (s32)(D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        var_v1_2 = (s32 *)(&func_002BC000);
        if (&func_002BC000 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    if (temp_a1 & 0x20) {
        temp_s0 = temp_s1 * 4;
        if (*(s32 *)((u8 *)gStrStatus + 0x404) > 0) {
            if (*(s32 *)((u8 *)(temp_s0 + gStrStatus) + 0x29C) >= 0x14) {
                goto block_21;
            }
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), temp_a3_2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(s32 *)((u8 *)gStrStatus + 0x404) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x404) - 1);
            temp_v1 = (u8 *)(temp_s0 + gStrStatus);
            *(s32 *)((u8 *)temp_v1 + 0x29C) = (s32) (*(s32 *)((u8 *)temp_v1 + 0x29C) + 1);
            StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0xBC), (f32) *(s32 *)((u8 *)gStrStatus + 0x404), 0);
            temp_s1_2 = temp_s1 * 8;
            StrBg_SetPos(*(s32 *)((u8 *)(temp_s1_2 + gStrStatus) + 0x58), (f32) *(s32 *)((u8 *)(temp_s0 + gStrStatus) + 0x29C), 0);
            StrBg_SetPos(*(s32 *)((u8 *)(temp_s1_2 + gStrStatus) + 0x5C), (f32) *(s32 *)((u8 *)(temp_s0 + gStrStatus) + 0x29C), 0);
            return;
        }
block_21:
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), temp_a3_2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 6, 0);
        }
        return;
    }
    if (temp_a1 & 0x80) {
        temp_s0_2 = temp_s1 * 4;
        if (*(s32 *)((u8 *)gStrStatus + 0x404) != *(s32 *)((u8 *)gStrStatus + 0x400)) {
            temp_v0 = (u8 *)(temp_s0_2 + gStrStatus);
            if (*(s32 *)((u8 *)temp_v0 + 0x2B8) >= *(s32 *)((u8 *)temp_v0 + 0x29C)) {
                goto block_31;
            }
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), temp_a3_2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(s32 *)((u8 *)gStrStatus + 0x404) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x404) + 1);
            temp_v1_2 = (u8 *)(temp_s0_2 + gStrStatus);
            *(s32 *)((u8 *)temp_v1_2 + 0x29C) = (s32) (*(s32 *)((u8 *)temp_v1_2 + 0x29C) - 1);
            StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0xBC), (f32) *(s32 *)((u8 *)gStrStatus + 0x404), 0);
            temp_s1_3 = temp_s1 * 8;
            StrBg_SetPos(*(s32 *)((u8 *)(temp_s1_3 + gStrStatus) + 0x58), (f32) *(s32 *)((u8 *)(temp_s0_2 + gStrStatus) + 0x29C), 0);
            StrBg_SetPos(*(s32 *)((u8 *)(temp_s1_3 + gStrStatus) + 0x5C), (f32) *(s32 *)((u8 *)(temp_s0_2 + gStrStatus) + 0x29C), 0);
            return;
        }
block_31:
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), temp_a3_2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 6, 0);
        }
        return;
    }
    temp_a0 = temp_a1 & 0x50;
    switch (temp_a0) {                              /* irregular */
    case 0x10:
        var_s0 = (s32) (temp_s1 + 6) % 7;
block_43:
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), temp_a3_2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00456000) + 0);
        *(s64 *)((u8 *)(&sp30) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00456000) + 0x10);
        sp3C = (var_s0 + 8) | 0x8000;
        sp34 = var_s0 + 0x25;
        func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
        *(s32 *)((u8 *)gStrStatus + 0x408) = var_s0;
        return;
    case 0x40:
        var_s0 = (s32) (temp_s1 + 1) % 7;
        goto block_43;
    }
}
