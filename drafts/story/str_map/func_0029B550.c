/* Draft (not built): func_0029B550 at 0x0029B550, size 0x528, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s32)((void *)((s32)((void *)(&sp80)))))); @ 448: amAdx_PlayAfs(1, *(*(&D_00454060 + (temp_s1 * 4)) + (temp_s3 * 4)), 0);
 * Original: asm/nonmatchings/story/str_map/func_0029B550.s */

// src/story/str_map.c func_0029B550 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, s8, f32);
s32 StrBg_SetPos(s32, f32, s32);
s32 StrBg_SetValue(s32, void *);
s32 amAdx_IsStopped(s32, u16, u16 *, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32, s8, f32);
s32 amSofdec_StartFname(s32, s32, s32);
extern s32 D_00453F10;
extern s32 D_00453F14;
extern s32 D_00454060;
extern s32 D_00454200;
extern s32 D_00454220;
extern s32 D_0046FD5C;
extern s32 D_00492FD2;
extern s32 D_0049302E;
extern s32 D_00493032;
extern s8 D_004B4B63;
extern s32 D_004DFAEC;
extern s32 D_004DFB19;
extern s32 D_004DFD56;
extern f32 D_004E0610;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern void *amSofdec_Create(void *);
extern char D_00492FCE[];
extern void func_0029B290(void);
extern void func_0029BA80(void);
void func_0029B550(u8 *arg0) {
    s32 sp80;
    s32 sp9C;
    s32 spB0;
    s32 *var_v1;
    s32 *var_v1_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s6;
    s32 var_s2;
    u16 *temp_a2;
    u16 temp_a1;
    u16 temp_s5;
    u8 var_v0;
    u8 var_v0_2;

    temp_s1 = *(s32 *)((u8 *)gStrTitle + 0xB4);
    temp_s3 = *(s32 *)((u8 *)gStrTitle + 0xB8);
    temp_a3 = D_004B4B63 * 0xB8;
    temp_s0 = temp_s1 * 8;
    temp_a2 = (u16 *)(D_00492FCE + temp_a3);
    temp_a1 = *(&D_00492FD2 + temp_a3);
    temp_s5 = *temp_a2;
    temp_s2 = *(&D_00453F14 + temp_s0);
    temp_s6 = temp_a1 | *(&D_00493032 + temp_a3);
    if (amAdx_IsStopped(1, temp_a1, temp_a2, temp_a3) != 0) {
        amAdx_SetVolume(0, D_004E0610, 0, 0);
    }
    if (!(temp_s5 & 0x1000)) {
        temp_a1_2 = D_004B4B63 * 0xB8;
        if ((*(D_00492FCE + temp_a1_2) | *(&D_0049302E + temp_a1_2)) & 0x10) {
            goto block_5;
        }
        if (temp_s5 & 0x4000) {
            temp_v1 = *(&D_00453F10 + temp_s0);
            if (temp_v1 != -1) {
                var_v0 = *(&D_004DFB19 + temp_v1);
            } else if (temp_s1 == 0x28) {
                var_v0 = D_004DFAEC & (1 << temp_s3);
            } else if (temp_s1 == 0x29) {
                var_v0 = *(&D_004DFD56 + temp_s3);
            } else {
                var_v0 = 0;
            }
            if (var_v0 == 0) {
                SoundRpc_SetVolume(0, 0, D_004B4B63, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 6, 0);
                }
                return;
            }
            if (temp_s1 != 0x29) {
                amAdx_SetVolume(0, M2C_BITWISE(f32, temp_a1_2), D_004B4B63, 0.5f * D_004E0610);
                amAdx_PlayAfs(1, *(*(&D_00454060 + (temp_s1 * 4)) + (temp_s3 * 4)), 0);
                return;
            }
            amAdx_Stop(0);
            amAdx_Stop(1);
            if (*(s32 *)((u8 *)gStrTitle + 0xD0) < 0) {
                *(s128 *)((u8 *)(&sp80) + 0) = (s128) *(s128 *)((u8 *)(&D_00454220) + 0);
                *(s128 *)((u8 *)(&sp80) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00454220) + 0x10);
                *(f32 *)((u8 *)(&sp80) + 0x20) = (f32) *(f32 *)((u8 *)(&D_00454220) + 0x20);
                sp9C = D_0046FD5C;
                *(s32 *)((u8 *)gStrTitle + 0xD0) = amSofdec_Create((s32)((void *)((s32)((void *)((s32)((void *)(&sp80)))))));
            }
            *(s32 *)((u8 *)gStrTitle + 0xD4) = 0;
            amSofdec_StartFname(*(s32 *)((u8 *)gStrTitle + 0xD0), *(*(&D_00454060 + (temp_s1 * 4)) + (temp_s3 * 4)), 1);
            var_v1 = (s32 *)(&func_0029B290);
            if (&func_0029B290 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        temp_a0 = temp_s6 & 0xA0;
        switch (temp_a0) {                          /* irregular */
        case 0x80:
            var_s2 = (s32) (temp_s3 - 1 + temp_s2) % temp_s2;
block_41:
            SoundRpc_SetVolume(0, 0, D_004B4B63, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            StrBg_SetPos(*(s32 *)((u8 *)gStrTitle + 0x58), (f32) var_s2, 0);
            temp_v1_2 = *(&D_00453F10 + temp_s0);
            if (temp_v1_2 != -1) {
                var_v0_2 = *(&D_004DFB19 + temp_v1_2);
            } else if (temp_s1 == 0x28) {
                var_v0_2 = D_004DFAEC & (1 << var_s2);
            } else if (temp_s1 == 0x29) {
                var_v0_2 = *(&D_004DFD56 + var_s2);
            } else {
                var_v0_2 = 0;
            }
            if (var_v0_2 == 0) {
                StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58), ((u8 *)gStrTitle) + 0xC0);
            } else {
                StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58), NULL);
            }
            *(s32 *)((u8 *)gStrTitle + 0xB8) = var_s2;
            return;
        case 0x20:
            var_s2 = (s32) (temp_s3 + 1) % temp_s2;
            goto block_41;
        }
    } else {
block_5:
        *(s128 *)((u8 *)(&spB0) + 0) = (s128) *(s128 *)((u8 *)(&D_00454200) + 0);
        *(s64 *)((u8 *)(&spB0) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00454200) + 0x10);
        func_0028EC80(((u8 *)gStrTitle) + 0x10, ((u8 *)gStrTitle) + 0x64, ((u8 *)gStrTitle) + 0x68, ((u8 *)gStrTitle) + 0x6C);
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(s8, D_004E0614), 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        var_v1_2 = (s32 *)(&func_0029BA80);
        if (&func_0029BA80 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
