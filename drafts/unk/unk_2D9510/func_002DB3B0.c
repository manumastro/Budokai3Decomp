/* Draft (not built): func_002DB3B0 at 0x002DB3B0, size 0x244, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x27C, original 0x244
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002DB3B0.s */

// src/unk/unk_2D9510.c func_002DB3B0 size diff=80/159
s32 Help_Open(s32, s32, u16, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_00148310(s32, s32, u16, s32, f32);
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
extern void func_002D5570(void);
extern void func_002DDD40(void);
extern void func_002D9DE0(void);
void func_002DB3B0(void) {
    f32 var_f0;
    f32 var_f0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s0;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(gOptionWork);
    temp_s0 = *D_00492FCE | D_00493086;
    temp_a3 = D_00492FCC | D_0049302C;
    temp_a1 = temp_a3 | (D_00493084 | D_004930E4);
    if (temp_s0 & 1) {
        Help_Open(0x20000000 | (0x400000 << 0x20), 3, D_00493084, temp_a3);
        return;
    }
    temp_a0 = temp_a1 & 0x10;
    if (temp_a0 != 0) {
        *(s16 *)((u8 *)temp_s1 + 0x418) = (s16) (*(s16 *)((u8 *)temp_s1 + 0x418) - 1);
        if (*(s16 *)((u8 *)temp_s1 + 0x418) < 0) {
            *(s16 *)((u8 *)temp_s1 + 0x418) = 0;
        }
        temp_v0 = *(s16 *)((u8 *)temp_s1 + 0x418);
        if (temp_v0 != 0) {
            var_f0 = (f32) temp_v0;
        } else {
            var_f0 = 1.0f;
        }
        *(s16 *)((u8 *)D_004E05DC + 0x2C) = M2C_BITWISE(s16, var_f0);
        func_00148310(temp_a0, temp_a1, D_00493084, temp_a3, (f32) *(s16 *)((u8 *)D_004E05DC + 0x2C));
    } else {
        temp_a0_2 = temp_a1 & 0x40;
        if (temp_a0_2 != 0) {
            *(s16 *)((u8 *)temp_s1 + 0x418) = (s16) (*(s16 *)((u8 *)temp_s1 + 0x418) + 1);
            if (*(s16 *)((u8 *)temp_s1 + 0x418) >= 0x81) {
                *(s16 *)((u8 *)temp_s1 + 0x418) = 0x80;
            }
            temp_v0_2 = *(s16 *)((u8 *)temp_s1 + 0x418);
            if (temp_v0_2 != 0) {
                var_f0_2 = (f32) temp_v0_2;
            } else {
                var_f0_2 = 1.0f;
            }
            *(s16 *)((u8 *)D_004E05DC + 0x2C) = M2C_BITWISE(s16, var_f0_2);
            func_00148310(temp_a0_2, temp_a1, D_00493084, temp_a3, (f32) *(s16 *)((u8 *)D_004E05DC + 0x2C));
        }
    }
    if (temp_s0 & 8) {
        *(s16 *)((u8 *)gOptionWork + 0x418) = 0x1A;
        *(s16 *)((u8 *)D_004E05DC + 0x2C) = 0x41D00000;
        func_00148310(0x1A, (s32) D_004E05DC, M2C_BITWISE(u16, (f32) *(s16 *)((u8 *)D_004E05DC + 0x2C)), 0, 0);
    }
    if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(s32 *)((u8 *)temp_s1 + 0x388) = 0;
        *(void (**)())((u8 *)temp_s1 + 0x34C) = func_002D9DE0;
        func_002DDD40();
        *(s32 *)((u8 *)temp_s1 + 0x39C) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x398) = 0;
        *(void (**)())((u8 *)temp_s1 + 0x370) = func_002D5D70;
        *(void (**)())((u8 *)temp_s1 + 0x374) = func_002D5570;
    }
}
