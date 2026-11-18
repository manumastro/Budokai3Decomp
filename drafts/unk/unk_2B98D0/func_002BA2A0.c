/* Draft (not built): func_002BA2A0 at 0x002BA2A0, size 0x370, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pen(0x200000 | (0x200000 << 0x20), (1 << D_004B4B63) & 0xFF, temp_a2_2, D_004B4B63); @ 163: temp_a2 = D_004B4B63 * 0xB8;
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BA2A0.s */

// src/unk/unk_2B98D0.c func_002BA2A0 cerr diff=-1/0
extern s128 D_00455F10;
extern s32 D_00492FD2;
extern s32 D_00493032;
extern void func_002BCCD0(void);
void func_002BA2A0(u8 *arg0) {
    s8 sp40;
    s16 sp42;
    s16 sp44;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    u16 temp_a2_2;
    u8 *temp_a0_2;
    u8 *temp_a0_5;
    u8 *temp_a0_7;

    temp_a2 = D_004B4B63 * 0xB8;
    temp_a2_2 = *(D_00492FCE + temp_a2);
    if (temp_a2_2 & 1) {
        Help_Open(0x200000 | (0x200000 << 0x20), (1 << D_004B4B63) & 0xFF, temp_a2_2, D_004B4B63);
        return;
    }
    if (temp_a2_2 & 0x5000) {
        SoundRpc_SetVolume(0, 0, temp_a2_2, D_004B4B63, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_s1 = 0;
        var_s0 = 0;
        do {
            temp_a0 = *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0x1D8);
            if (temp_a0 != 0) {
                func_0022D0E0((void *)(temp_a0), 1);
                *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0x1D8) = 0;
            }
            temp_a0_2 = *(u8 **)((u8 *)(&gStrStatus[var_s0]) + 0xC4);
            if (temp_a0_2 != NULL) {
                amTask_Kill(temp_a0_2);
                *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0xC4) = 0;
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        var_v1 = (s32 *)(&func_002BCCD0);
        if (&func_002BCCD0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    temp_a0_3 = (*(&D_00492FD2 + temp_a2) | *(&D_00493032 + temp_a2)) & 0x50;
    temp_s0 = *(s32 *)((u8 *)gStrStatus + 0x418);
    switch (temp_a0_3) {                            /* irregular */
    case 0x10:
        if (temp_s0 != 0) {
            var_s0_2 = temp_s0 - 1;
block_25:
            SoundRpc_SetVolume(0, 0, temp_a2_2, D_004B4B63, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            func_002B98D0(var_s0_2);
            sp40 = (s128) D_00455F10;
            if (var_s0_2 == 0) {
                temp_a0_4 = *(s32 *)((u8 *)gStrStatus + 0x1E0);
                if (temp_a0_4 != 0) {
                    func_0022D0E0((void *)(temp_a0_4), 1);
                    *(s32 *)((u8 *)gStrStatus + 0x1E0) = 0;
                }
                temp_a0_5 = *(u8 **)((u8 *)gStrStatus + 0xCC);
                if (temp_a0_5 != NULL) {
                    amTask_Kill(temp_a0_5);
                    *(u8 **)((u8 *)gStrStatus + 0xCC) = NULL;
                }
            } else if (var_s0_2 == (*(s32 *)((u8 *)gStrStatus + 0x41C) - 6)) {
                temp_a0_6 = *(s32 *)((u8 *)gStrStatus + 0x1E4);
                if (temp_a0_6 != 0) {
                    func_0022D0E0((void *)(temp_a0_6), 1);
                    *(s32 *)((u8 *)gStrStatus + 0x1E4) = 0;
                }
                temp_a0_7 = *(u8 **)((u8 *)gStrStatus + 0xD0);
                if (temp_a0_7 != NULL) {
                    amTask_Kill(temp_a0_7);
                    *(u8 **)((u8 *)gStrStatus + 0xD0) = NULL;
                }
            }
            temp_a0_8 = *(s32 *)((u8 *)gStrStatus + 0x418);
            if (temp_a0_8 == 0) {
                func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
            } else if (temp_a0_8 == (*(s32 *)((u8 *)gStrStatus + 0x41C) - 6)) {
                sp40 = 0x26;
                sp42 = 0x1F;
                sp44 = 5;
                func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
            }
            *(s32 *)((u8 *)gStrStatus + 0x418) = var_s0_2;
        }
        return;
    case 0x40:
        if (temp_s0 < (*(s32 *)((u8 *)gStrStatus + 0x41C) - 6)) {
            var_s0_2 = temp_s0 + 1;
            goto block_25;
        }
        break;
    }
}
