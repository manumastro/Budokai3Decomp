/* Draft (not built): func_0030C400 at 0x0030C400, size 0x2F0, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 127 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2F8, original 0x2F0
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030C400.s */

// src/unk/unk_30B130.c func_0030C400 size diff=127/190
s32 SoundRpc_SetVolume(s32, s32, s16, s16, f32);
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern s32 D_005C412E;
extern s32 D_005C4132;
extern void SoundRpc_Send3();
void func_0030C400(u8 *arg0) {
    s16 temp_a0;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_a2_4;
    s16 temp_a3;
    s16 temp_v1;
    s32 temp_a1;
    s32 var_a3;
    s8 temp_a2;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x12);
    temp_a2 = *(s8 *)((u8 *)arg0 + 0xA);
    var_a3 = 0;
    if (temp_a2 & 1) {
        var_a3 = (0 | ((D_00492FD2 | D_00493032) & 0xFFFF)) & 0xFFFF;
    }
    if (temp_a2 & 4) {
        var_a3 = (var_a3 | ((D_0049308A | D_004930EA) & 0xFFFF)) & 0xFFFF;
    }
    temp_a1 = var_a3 & 0xFFFF;
    if (temp_a1 & 0x10) {
        if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) != 0) {
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) (*(s16 *)((u8 *)arg0 + 0x12) - 1);
            temp_a1_2 = *(s16 *)((u8 *)arg0 + 0x12);
            if (temp_a1_2 == 0) {
                *(s16 *)((u8 *)arg0 + 0x14) = 0;
            } else if (temp_a1_2 < (*(s16 *)((u8 *)arg0 + 0x14) + 1)) {
                *(s16 *)((u8 *)arg0 + 0x14) = (s16) (temp_a1_2 - 1);
            }
        }
    } else if (temp_a1 & 0x40) {
        if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) < (*(s16 *)((u8 *)arg0 + 0x10) - 1)) {
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) (*(s16 *)((u8 *)arg0 + 0x12) + 1);
            temp_a2_2 = *(s16 *)((u8 *)arg0 + 0x10);
            temp_a1_3 = *(s16 *)((u8 *)arg0 + 0x12);
            if (temp_a1_3 >= (temp_a2_2 - 1)) {
                *(s16 *)((u8 *)arg0 + 0x14) = (s16) (temp_a2_2 - 8);
                if (*(s16 *)((u8 *)arg0 + 0x14) < 0) {
                    *(s16 *)((u8 *)arg0 + 0x14) = 0;
                }
            } else if ((temp_a1_3 - *(s16 *)((u8 *)arg0 + 0x14)) >= 7) {
                *(s16 *)((u8 *)arg0 + 0x14) = (s16) (temp_a1_3 - 6);
            }
        }
    } else if (temp_a1 & 0x80) {
        temp_a0 = *(s16 *)((u8 *)arg0 + 0x14);
        if (temp_a0 < 9) {
            *(s16 *)((u8 *)arg0 + 0x14) = 0;
        } else {
            *(s16 *)((u8 *)arg0 + 0x14) = (s16) (temp_a0 - 8);
        }
        *(s16 *)((u8 *)arg0 + 0x12) = (s16) *(s16 *)((u8 *)arg0 + 0x14);
    } else if (temp_a1 & 0x20) {
        temp_a2_3 = *(s16 *)((u8 *)arg0 + 0x10);
        temp_a1_4 = *(s16 *)((u8 *)arg0 + 0x14);
        if ((temp_a2_3 - 0x11) >= temp_a1_4) {
            *(s16 *)((u8 *)arg0 + 0x14) = (s16) (temp_a1_4 + 8);
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) *(s16 *)((u8 *)arg0 + 0x14);
        } else if ((temp_a2_3 - 9) >= temp_a1_4) {
            *(s16 *)((u8 *)arg0 + 0x14) = (s16) (temp_a2_3 - 8);
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) *(s16 *)((u8 *)arg0 + 0x14);
        }
    }
    temp_a1_5 = *(s16 *)((u8 *)arg0 + 0x10);
    if (*(s16 *)((u8 *)arg0 + 0x12) >= temp_a1_5) {
        *(s16 *)((u8 *)arg0 + 0x12) = (s16) (temp_a1_5 - 1);
    }
    if (*(s16 *)((u8 *)arg0 + 0x12) < 0) {
        *(s16 *)((u8 *)arg0 + 0x12) = 0;
    }
    temp_a1_6 = *(s16 *)((u8 *)arg0 + 0x10) - 1;
    if (temp_a1_6 < *(s16 *)((u8 *)arg0 + 0x14)) {
        *(s16 *)((u8 *)arg0 + 0x14) = temp_a1_6;
    }
    if (*(s16 *)((u8 *)arg0 + 0x14) < 0) {
        *(s16 *)((u8 *)arg0 + 0x14) = 0;
    }
    temp_a3 = *(s16 *)((u8 *)arg0 + 0x14);
    *(&D_005C412E + (*(s8 *)((u8 *)arg0 + 0xB) * 2)) = temp_a3;
    temp_a2_4 = *(s16 *)((u8 *)arg0 + 0x12);
    *(&D_005C4132 + (*(s8 *)((u8 *)arg0 + 0xB) * 2)) = temp_a2_4;
    if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) != *(s16 *)((u8 *)arg0 + 0x12)) {
        SoundRpc_SetVolume(0, 0, temp_a2_4, temp_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        func_0030C280(arg0);
        func_0030BD30(arg0);
    }
}
