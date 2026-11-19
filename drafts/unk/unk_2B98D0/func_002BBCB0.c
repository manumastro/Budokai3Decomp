/* Draft (not built): func_002BBCB0 at 0x002BBCB0, size 0x344, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 132 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2FC, original 0x344
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BBCB0.s */

// src/unk/unk_2B98D0.c func_002BBCB0 size diff=132/191
extern s128 D_00455E10;
extern s32 D_00455E20;
extern s32 D_00492FD2;
extern s32 D_00493032;
extern void func_002BBA30(void);
void func_002BBCB0(u8 *arg0) {
    s32 sp30;
    s8 sp38;
    s128 sp50;
    s16 sp54;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a3;
    s32 temp_v1;
    s32 var_s0;
    u16 temp_a2;
    u8 *temp_a0_2;
    u8 *temp_a0_4;

    sp50 = D_00455E10;
    *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00455E20) + 0);
    *(s64 *)((u8 *)(&sp30) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00455E20) + 0x10);
    var_s0 = *(s32 *)((u8 *)gStrStatus + 0x40C);
    temp_a3 = ((s32)(D_004B4B63)) * 0x18;
    temp_v1 = ((s32)(D_004B4B63)) * 0xB8;
    temp_a2 = *(D_00492FCE + temp_v1);
    if (temp_a2 & 1) {
        Help_Open(0x40000 | (0x40040 << 0x20), (1 << ((s32)(D_004B4B63))) & 0xFF);
        return;
    }
    if (temp_a2 & 0x1000) {
        var_s0 = 1;
        *(s32 *)((u8 *)gStrStatus + 0x40C) = 1;
        goto block_6;
    }
    if (temp_a2 & 0x4000) {
block_6:
        temp_a0 = *(s32 *)((u8 *)gStrStatus + 0x1C4);
        if (temp_a0 != 0) {
            func_0022D0E0((void *)(temp_a0), 1);
            *(s32 *)((u8 *)gStrStatus + 0x1C4) = 0;
        }
        temp_a0_2 = *(u8 **)((u8 *)gStrStatus + 0xAC);
        if (temp_a0_2 != NULL) {
            amTask_Kill(temp_a0_2);
            *(u8 **)((u8 *)gStrStatus + 0xAC) = NULL;
        }
        if (var_s0 == 0) {
            temp_a0_3 = *(s32 *)((u8 *)gStrStatus + 0x1D0);
            if (temp_a0_3 != 0) {
                func_0022D0E0((void *)(temp_a0_3), 1);
                *(s32 *)((u8 *)gStrStatus + 0x1D0) = 0;
            }
            temp_a0_4 = *(u8 **)((u8 *)gStrStatus + 0xBC);
            if (temp_a0_4 != NULL) {
                amTask_Kill(temp_a0_4);
                *(u8 **)((u8 *)gStrStatus + 0xBC) = NULL;
            }
        } else {
            sp38 = -1;
        }
        func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
        if (*(s32 *)((u8 *)gStrStatus + 0x40C) == 0) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
            if (!(D_004E0614[0] <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
        } else {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
            if (!(D_004E0614[0] <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
        }
        var_v1 = (int *)(&func_002BBA30);
        if (&func_002BBA30 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    temp_a0_5 = (*(&D_00492FD2 + temp_v1) | *(&D_00493032 + temp_v1)) & 0x50;
    if ((temp_a0_5 != 0x40) && (temp_a0_5 != 0x10)) {
        return;
    }
    SoundRpc_SetVolume(0, 0, temp_a2);
    if (!(D_004E0614[0] <= 0.0f)) {
        SoundRpc_Send3(0, 0, 2, 0);
    }
    temp_a0_6 = var_s0 ^ 1;
    *(s32 *)((u8 *)gStrStatus + 0x40C) = temp_a0_6;
    sp54 = temp_a0_6 + 0x5E;
    func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
}
