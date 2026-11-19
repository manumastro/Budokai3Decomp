/* Draft (not built): func_002DB0E0 at 0x002DB0E0, size 0x2D0, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 118 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2DC, original 0x2D0
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002DB0E0.s */

// src/unk/unk_2D9510.c func_002DB0E0 size diff=118/183
s32 Help_Open(s64, s32, u16, u16);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amDisp_SetOffset(s16, s16, u16, u16);
extern u16 D_00492FCC;
extern u16 D_0049302C;
extern u16 D_00493084;
extern u16 D_00493086;
extern u16 D_004930E4;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern char D_004E05DC[];
extern void func_002D5D70(void);
extern void func_002D4CF0(void);
extern void func_002DDD40(void);
extern void func_002D9DE0(void);
void func_002DB0E0(void) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a1;
    u8 *temp_s2;

    temp_s2 = (unsigned char *)(gOptionWork);
    temp_s0 = *D_00492FCE | D_00493086;
    temp_v1 = D_00492FCC | D_0049302C | (D_00493084 | D_004930E4);
    if (temp_s0 & 1) {
        Help_Open(0x400010 << 0x20, 3, D_00492FCC, D_00493084);
        return;
    }
    temp_a1 = D_00492FCC | D_00493084;
    if (temp_a1 & 0x2000) {
        var_a1 = 1;
        if (temp_v1 & 0x800) {
            var_a1 = 5;
        }
        if (temp_v1 & 0x10) {
            if (*(s32 *)((u8 *)D_004E05DC + 0x28) >= -0x13F) {
                *(s32 *)((u8 *)D_004E05DC + 0x28) = (s32) (*(s32 *)((u8 *)D_004E05DC + 0x28) - var_a1);
            }
        } else if ((temp_v1 & 0x40) && (*(s32 *)((u8 *)D_004E05DC + 0x28) < 0x1C2)) {
            *(s32 *)((u8 *)D_004E05DC + 0x28) = (s32) (*(s32 *)((u8 *)D_004E05DC + 0x28) + var_a1);
        }
        if (temp_v1 & 0x20) {
            if (*(s32 *)((u8 *)D_004E05DC + 0x24) < 0x3C0) {
                *(s32 *)((u8 *)D_004E05DC + 0x24) = (s32) (*(s32 *)((u8 *)D_004E05DC + 0x24) + var_a1);
            }
        } else if ((temp_v1 & 0x80) && (*(s32 *)((u8 *)D_004E05DC + 0x24) >= -0x3BF)) {
            *(s32 *)((u8 *)D_004E05DC + 0x24) = (s32) (*(s32 *)((u8 *)D_004E05DC + 0x24) - var_a1);
        }
    } else if (temp_a1 & 0x8000) {
        if (temp_v1 & 0x20) {
            if (*(s16 *)((u8 *)D_004E05DC + 0x1E) < 0x27B) {
                *(s16 *)((u8 *)D_004E05DC + 0x1E) = (s16) (*(s16 *)((u8 *)D_004E05DC + 0x1E) + 5);
            }
        } else if ((temp_v1 & 0x80) && (*(s16 *)((u8 *)D_004E05DC + 0x1E) >= -0x27A)) {
            *(s16 *)((u8 *)D_004E05DC + 0x1E) = (s16) (*(s16 *)((u8 *)D_004E05DC + 0x1E) - 5);
        }
        if (temp_v1 & 0x10) {
            if (*(s16 *)((u8 *)D_004E05DC + 0x20) >= -0x18) {
                *(s16 *)((u8 *)D_004E05DC + 0x20) = (s16) (*(s16 *)((u8 *)D_004E05DC + 0x20) - 1);
            }
        } else if ((temp_v1 & 0x40) && (*(s16 *)((u8 *)D_004E05DC + 0x20) < 0x19)) {
            *(s16 *)((u8 *)D_004E05DC + 0x20) = (s16) (*(s16 *)((u8 *)D_004E05DC + 0x20) + 1);
        }
        amDisp_SetOffset(*(s16 *)((u8 *)D_004E05DC + 0x1E), *(s16 *)((u8 *)D_004E05DC + 0x20), D_00492FCC, D_00493084);
    }
    if (temp_s0 & 8) {
        *(s16 *)((u8 *)D_004E05DC + 0x1E) = 0;
        *(s16 *)((u8 *)D_004E05DC + 0x20) = 0;
        *(s32 *)((u8 *)D_004E05DC + 0x24) = 0;
        *(s32 *)((u8 *)D_004E05DC + 0x28) = 0;
        amDisp_SetOffset(*(s16 *)((u8 *)D_004E05DC + 0x1E), *(s16 *)((u8 *)D_004E05DC + 0x20), 0, 0);
    }
    if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(s32 *)((u8 *)temp_s2 + 0x388) = 0;
        *(void (**)())((u8 *)temp_s2 + 0x34C) = func_002D9DE0;
        func_002DDD40();
        *(s32 *)((u8 *)temp_s2 + 0x39C) = 0;
        *(s32 *)((u8 *)temp_s2 + 0x398) = 0;
        *(void (**)())((u8 *)temp_s2 + 0x370) = func_002D5D70;
        *(void (**)())((u8 *)temp_s2 + 0x374) = func_002D4CF0;
    }
}
