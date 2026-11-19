/* Draft (not built): func_002EEF00 at 0x002EEF00, size 0x2A0, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 111 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2B8, original 0x2A0
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EEF00.s */

// src/menu/mn_ArenaList.c func_002EEF00 size diff=111/174
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B63;
extern s16 D_005C412E;
extern s16 D_005C4132;
void func_002EEF00(u8 *arg0) {
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_a1;
    s32 var_a0;
    s64 temp_a2_2;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x10);
    temp_v0 = *(s16 *)((u8 *)arg0 + 0x12);
    if (D_004B4B63 == 0) {
        var_a0 = 0 | ((D_00492FD2 | D_00493032) & 0xFFFF);
    } else {
        var_a0 = 0 | ((D_0049308A | D_004930EA) & 0xFFFF);
    }
    temp_a1 = var_a0 & 0xFFFF & 0xFFFF;
    if (temp_a1 & 0x10) {
        if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) != 0) {
            *(s16 *)((u8 *)arg0 + 0x10) = (s16) (*(s16 *)((u8 *)arg0 + 0x10) - 1);
            temp_a1_2 = *(s16 *)((u8 *)arg0 + 0x10);
            if (temp_a1_2 == 0) {
                *(s16 *)((u8 *)arg0 + 0x12) = 0;
            } else if (temp_a1_2 < (*(s16 *)((u8 *)arg0 + 0x12) + 1)) {
                *(s16 *)((u8 *)arg0 + 0x12) = (s16) (temp_a1_2 - 1);
            }
        }
    } else if (temp_a1 & 0x40) {
        if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) < (*(s16 *)((u8 *)arg0 + 0xC) - 1)) {
            *(s16 *)((u8 *)arg0 + 0x10) = (s16) (*(s16 *)((u8 *)arg0 + 0x10) + 1);
            temp_a2 = *(s16 *)((u8 *)arg0 + 0xC);
            temp_a1_3 = *(s16 *)((u8 *)arg0 + 0x10);
            if (temp_a1_3 >= (temp_a2 - 1)) {
                *(s16 *)((u8 *)arg0 + 0x12) = (s16) (temp_a2 - 8);
                if (*(s16 *)((u8 *)arg0 + 0x12) < 0) {
                    *(s16 *)((u8 *)arg0 + 0x12) = 0;
                }
            } else if ((temp_a1_3 - *(s16 *)((u8 *)arg0 + 0x12)) >= 7) {
                *(s16 *)((u8 *)arg0 + 0x12) = (s16) (temp_a1_3 - 6);
            }
        }
    } else if (temp_a1 & 0x80) {
        if (((s64) ((s64) temp_v0 << 0x30) >> 0x30) < 9) {
            *(s16 *)((u8 *)arg0 + 0x12) = 0;
        } else {
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) (*(s16 *)((u8 *)arg0 + 0x12) - 8);
        }
        *(s16 *)((u8 *)arg0 + 0x10) = (s16) *(s16 *)((u8 *)arg0 + 0x12);
    } else if (temp_a1 & 0x20) {
        temp_a1_4 = *(s16 *)((u8 *)arg0 + 0xC);
        temp_a2_2 = (s64) ((s64) temp_v0 << 0x30) >> 0x30;
        if ((temp_a1_4 - 0x11) >= temp_a2_2) {
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) (*(s16 *)((u8 *)arg0 + 0x12) + 8);
            *(s16 *)((u8 *)arg0 + 0x10) = (s16) *(s16 *)((u8 *)arg0 + 0x12);
        } else if ((temp_a1_4 - 9) >= temp_a2_2) {
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) (temp_a1_4 - 8);
            *(s16 *)((u8 *)arg0 + 0x10) = (s16) *(s16 *)((u8 *)arg0 + 0x12);
        }
    }
    if ((*(s16 *)((u8 *)arg0 + 0x10) != ((s64) ((s64) temp_v1 << 0x30) >> 0x30)) || (*(s16 *)((u8 *)arg0 + 0x12) != ((s64) ((s64) temp_v0 << 0x30) >> 0x30))) {
        SoundRpc_SetVolume(0, 0, *D_004E0614);
        if (!(*D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
    D_005C4132 = *(s16 *)((u8 *)arg0 + 0x10);
    D_005C412E = *(s16 *)((u8 *)arg0 + 0x12);
    func_002EEB80(arg0);
    func_002EDE90(arg0);
}
