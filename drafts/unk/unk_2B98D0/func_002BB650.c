/* Draft (not built): func_002BB650 at 0x002BB650, size 0x240, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); was declared as: 'void (struct Ac98D *)' now declared as: 'void (unsigned char *)' @ 391: void func_002BB650(u8 *arg0) {
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BB650.s */

// src/unk/unk_2B98D0.c func_002BB650 cerr diff=-1/0
void func_002BB650(u8 *arg0) {
    s32 sp20;
    s8 sp21;
    s8 sp22;
    s8 sp23;
    s8 sp24;
    s8 sp25;
    s8 sp26;
    s8 sp27;
    s8 sp28;
    s8 sp29;
    s16 sp2A;
    s16 sp2C;
    s16 sp2E;
    s16 sp30;
    s16 sp32;
    s16 sp34;
    s16 sp36;
    s32 *var_v1;
    s32 var_a0;
    u16 temp_a0;

    if (D_004B4B41 == 6) {
        if (*(s32 *)((u8 *)gStrStatus + 0x280) != 0) {
            goto block_3;
        }
    } else {
block_3:
        temp_a0 = *(D_00492FCE + (D_004B4B63 * 0xB8));
        if (temp_a0 & 1) {
            if (*(s32 *)((u8 *)gStrStatus + 0x280) != 0) {
                var_a0 = 0x200 | (0x200000 << 0x20);
            } else {
                var_a0 = 0x200 | (0x100000 << 0x20);
            }
            Help_Open(var_a0, (1 << D_004B4B63) & 0xFF);
            return;
        }
        if (temp_a0 & 0x5000) {
            SoundRpc_SetVolume(0, 0, (s32)(D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            Fade_SetRequest(0xA, func_002B9C10, 0);
            *(s32 **)((u8 *)arg0 + 0x1C) = NULL;
            return;
        }
        if (!(temp_a0 & 8)) {
            if (*(s32 *)((u8 *)gStrStatus + 0x400) > 0) {
                goto block_16;
            }
        } else {
block_16:
            *(s32 *)((u8 *)gStrStatus + 0x400) = 0;
            SoundRpc_SetVolume(0, 0, (s32)(D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0, 0);
            }
            sp21 = (s8) *(s32 *)((u8 *)gStrStatus + 0x288);
            sp22 = (s8) *(s32 *)((u8 *)gStrStatus + 0x298);
            sp23 = (s8) *(s32 *)((u8 *)gStrStatus + 0x29C);
            sp24 = (s8) *(s32 *)((u8 *)gStrStatus + 0x2A0);
            sp25 = (s8) *(s32 *)((u8 *)gStrStatus + 0x2A4);
            sp26 = (s8) *(s32 *)((u8 *)gStrStatus + 0x2A8);
            sp27 = (s8) *(s32 *)((u8 *)gStrStatus + 0x2AC);
            sp28 = (s8) *(s32 *)((u8 *)gStrStatus + 0x2B0);
            sp29 = (s8) *(s32 *)((u8 *)gStrStatus + 0x2B4);
            sp2A = (s16) *(s32 *)((u8 *)gStrStatus + 0x2DC);
            sp2C = (s16) *(s32 *)((u8 *)gStrStatus + 0x2E0);
            sp2E = (s16) *(s32 *)((u8 *)gStrStatus + 0x2E4);
            sp30 = (s16) *(s32 *)((u8 *)gStrStatus + 0x2E8);
            sp32 = (s16) *(s32 *)((u8 *)gStrStatus + 0x2EC);
            sp34 = (s16) *(s32 *)((u8 *)gStrStatus + 0x2F0);
            sp36 = (s16) *(s32 *)((u8 *)gStrStatus + 0x2F4);
            OutputPass_Start(&sp20, 0xC000);
            var_v1 = (s32 *)(&func_002BB5F0);
            if (&func_002BB5F0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        }
    }
}
