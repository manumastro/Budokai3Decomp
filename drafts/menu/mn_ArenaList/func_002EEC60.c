/* Draft (not built): func_002EEC60 at 0x002EEC60, size 0x2A0, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); loat[])' does not match 'SoundRpc_SetVolume(int, int, float)' @ 257: SoundRpc_SetVolume(0, 0, (s64) var_a2, D_004E0614);
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EEC60.s */

// src/menu/mn_ArenaList.c func_002EEC60 cerr diff=-1/0
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B63;
extern s16 D_005C4130;
extern s16 D_005C4134;
void func_002EEC60(u8 *arg0) {
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_v0;
    s16 temp_v1;
    s16 var_a2;
    s32 temp_a1;
    s32 var_a0;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x14);
    temp_v0 = *(s16 *)((u8 *)arg0 + 0x16);
    if (D_004B4B63 == 0) {
        var_a0 = 0 | ((D_00492FD2 | D_00493032) & 0xFFFF);
    } else {
        var_a0 = 0 | ((D_0049308A | D_004930EA) & 0xFFFF);
    }
    var_a2 = var_a0 & 0xFFFF;
    temp_a1 = var_a2 & 0xFFFF;
    if (temp_a1 & 0x10) {
        if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) != 0) {
            *(s16 *)((u8 *)arg0 + 0x14) = (s16) (*(s16 *)((u8 *)arg0 + 0x14) - 1);
            temp_a1_2 = *(s16 *)((u8 *)arg0 + 0x14);
            if (temp_a1_2 == 0) {
                *(s16 *)((u8 *)arg0 + 0x16) = 0;
            } else if (temp_a1_2 < (*(s16 *)((u8 *)arg0 + 0x16) + 1)) {
                *(s16 *)((u8 *)arg0 + 0x16) = (s16) (temp_a1_2 - 1);
            }
        }
    } else if (temp_a1 & 0x40) {
        if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) < (*(s16 *)((u8 *)arg0 + 0xE) - 1)) {
            *(s16 *)((u8 *)arg0 + 0x14) = (s16) (*(s16 *)((u8 *)arg0 + 0x14) + 1);
            var_a2 = *(s16 *)((u8 *)arg0 + 0xE);
            temp_a1_3 = *(s16 *)((u8 *)arg0 + 0x14);
            if (temp_a1_3 >= (var_a2 - 1)) {
                *(s16 *)((u8 *)arg0 + 0x16) = (s16) (var_a2 - 8);
                if (*(s16 *)((u8 *)arg0 + 0x16) < 0) {
                    *(s16 *)((u8 *)arg0 + 0x16) = 0;
                }
            } else if ((temp_a1_3 - *(s16 *)((u8 *)arg0 + 0x16)) >= 7) {
                *(s16 *)((u8 *)arg0 + 0x16) = (s16) (temp_a1_3 - 6);
            }
        }
    } else if (temp_a1 & 0x80) {
        if (((s64) ((s64) temp_v0 << 0x30) >> 0x30) < 9) {
            *(s16 *)((u8 *)arg0 + 0x16) = 0;
        } else {
            *(s16 *)((u8 *)arg0 + 0x16) = (s16) (*(s16 *)((u8 *)arg0 + 0x16) - 8);
        }
        *(s16 *)((u8 *)arg0 + 0x14) = (s16) *(s16 *)((u8 *)arg0 + 0x16);
    } else if (temp_a1 & 0x20) {
        temp_a1_4 = *(s16 *)((u8 *)arg0 + 0xE);
        var_a2 = (s16) ((s64) ((s64) temp_v0 << 0x30) >> 0x30);
        if ((temp_a1_4 - 0x11) >= var_a2) {
            *(s16 *)((u8 *)arg0 + 0x16) = (s16) (*(s16 *)((u8 *)arg0 + 0x16) + 8);
            *(s16 *)((u8 *)arg0 + 0x14) = (s16) *(s16 *)((u8 *)arg0 + 0x16);
        } else if ((temp_a1_4 - 9) >= var_a2) {
            *(s16 *)((u8 *)arg0 + 0x16) = (s16) (temp_a1_4 - 8);
            *(s16 *)((u8 *)arg0 + 0x14) = (s16) *(s16 *)((u8 *)arg0 + 0x16);
        }
    }
    if ((*(s16 *)((u8 *)arg0 + 0x14) != ((s64) ((s64) temp_v1 << 0x30) >> 0x30)) || (*(s16 *)((u8 *)arg0 + 0x16) != ((s64) ((s64) temp_v0 << 0x30) >> 0x30))) {
        SoundRpc_SetVolume(0, 0, (s64) var_a2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
    D_005C4134 = *(s16 *)((u8 *)arg0 + 0x14);
    D_005C4130 = *(s16 *)((u8 *)arg0 + 0x16);
    func_002EE9F0(arg0);
    func_002EDC50(arg0);
}
