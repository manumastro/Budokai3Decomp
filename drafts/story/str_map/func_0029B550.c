/* Draft (not built): func_0029B550 at 0x0029B550, size 0x528, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 182 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x518, original 0x528
 * Original: asm/nonmatchings/story/str_map/func_0029B550.s */

// src/story/str_map.c func_0029B550 size diff=182/326
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
extern void func_0029BA80(void);
extern void func_0029B290(void);
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
    temp_a2 = (unsigned short *)(D_00492FCE + temp_a3);
    temp_a1 = *(&D_00492FD2 + temp_a3);
    temp_s5 = *temp_a2;
    temp_s2 = *(&D_00453F14 + temp_s0);
    temp_s6 = temp_a1 | *(&D_00493032 + temp_a3);
    if (amAdx_IsStopped(1, temp_a1, temp_a2, temp_a3) == 0) {
        goto block_2;
    }
    amAdx_SetVolume(0, D_004E0610, 0, 0);
block_2:
    if (temp_s5 & 0x1000) {
        goto block_5;
    }
    temp_a1_2 = D_004B4B63 * 0xB8;
    if (!((*(D_00492FCE + temp_a1_2) | *(&D_0049302E + temp_a1_2)) & 0x10)) {
        goto block_11;
    }
block_5:
    *(s128 *)((u8 *)(&spB0) + 0) = (s128) *(s128 *)((u8 *)(&D_00454200) + 0);
    *(s64 *)((u8 *)(&spB0) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00454200) + 0x10);
    func_0028EC80((s32)(((u8 *)gStrTitle) + 0x10), (s32)(((u8 *)gStrTitle) + 0x64), (s32)(((u8 *)gStrTitle) + 0x68), (s32)(((u8 *)gStrTitle) + 0x6C), 0, 0, 0, 0);
    SoundRpc_SetVolume(0, 0, M2C_BITWISE(s8, D_004E0614), 0);
    if (D_004E0614 <= 0.0f) {
        goto block_7;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_7:
    var_v1 = (int *)(&func_0029BA80);
    if (&func_0029BA80 != NULL) {
        goto block_9;
    }
    var_v1 = NULL;
block_9:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    return;
block_11:
    if (!(temp_s5 & 0x4000)) {
        goto block_34;
    }
    temp_v1 = *(&D_00453F10 + temp_s0);
    if (temp_v1 == -1) {
        goto block_15;
    }
    var_v0 = *(&D_004DFB19 + temp_v1);
    goto block_21;
block_15:
    if (temp_s1 != 0x28) {
        goto block_17;
    }
    var_v0 = D_004DFAEC & (1 << temp_s3);
    goto block_21;
block_17:
    if (temp_s1 != 0x29) {
        goto block_20;
    }
    var_v0 = *(&D_004DFD56 + temp_s3);
    goto block_21;
block_20:
    var_v0 = 0;
block_21:
    if (var_v0 != 0) {
        goto block_25;
    }
    SoundRpc_SetVolume(0, 0, D_004B4B63, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_24;
    }
    SoundRpc_Send3(0, 0, 6, 0);
block_24:
    return;
block_25:
    if (temp_s1 == 0x29) {
        goto block_27;
    }
    amAdx_SetVolume(0, M2C_BITWISE(f32, temp_a1_2), D_004B4B63, 0.5f * D_004E0610);
    amAdx_PlayAfs(1, *(s32 *)(*(&D_00454060 + (temp_s1 * 4)) + (temp_s3 * 4)), 0);
    goto block_33;
block_27:
    amAdx_Stop(0);
    amAdx_Stop(1);
    if (*(s32 *)((u8 *)gStrTitle + 0xD0) >= 0) {
        goto block_29;
    }
    *(s128 *)((u8 *)(&sp80) + 0) = (s128) *(s128 *)((u8 *)(&D_00454220) + 0);
    *(s128 *)((u8 *)(&sp80) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00454220) + 0x10);
    *(f32 *)((u8 *)(&sp80) + 0x20) = (f32) *(f32 *)((u8 *)(&D_00454220) + 0x20);
    sp9C = D_0046FD5C;
    *(s32 *)((u8 *)gStrTitle + 0xD0) = (int)(amSofdec_Create(&sp80));
block_29:
    *(s32 *)((u8 *)gStrTitle + 0xD4) = 0;
    amSofdec_StartFname(*(s32 *)((u8 *)gStrTitle + 0xD0), *(s32 *)(*(&D_00454060 + (temp_s1 * 4)) + (temp_s3 * 4)), 1);
    var_v1_2 = (int *)(&func_0029B290);
    if (&func_0029B290 != NULL) {
        goto block_31;
    }
    var_v1_2 = NULL;
block_31:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    return;
block_33:
    return;
block_34:
    temp_a0 = temp_s6 & 0xA0;
    if (temp_a0 == 0x20) {
        goto block_38;
    }
    if (temp_a0 == 0x80) {
        goto block_37;
    }
    goto block_40;
block_37:
    var_s2 = (s32) (temp_s3 - 1 + temp_s2) % temp_s2;
    goto block_41;
block_38:
    var_s2 = (s32) (temp_s3 + 1) % temp_s2;
    goto block_41;
block_40:
    return;
block_41:
    SoundRpc_SetVolume(0, 0, D_004B4B63, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_43;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_43:
    StrBg_SetPos(*(s32 *)((u8 *)gStrTitle + 0x58), (f32) var_s2, 0);
    temp_v1_2 = *(&D_00453F10 + temp_s0);
    if (temp_v1_2 == -1) {
        goto block_46;
    }
    var_v0_2 = *(&D_004DFB19 + temp_v1_2);
    goto block_52;
block_46:
    if (temp_s1 != 0x28) {
        goto block_48;
    }
    var_v0_2 = D_004DFAEC & (1 << var_s2);
    goto block_52;
block_48:
    if (temp_s1 != 0x29) {
        goto block_51;
    }
    var_v0_2 = *(&D_004DFD56 + var_s2);
    goto block_52;
block_51:
    var_v0_2 = 0;
block_52:
    if (var_v0_2 != 0) {
        goto block_54;
    }
    StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58),((u8 *)gStrTitle) + 0xC0);
    goto block_55;
block_54:
    StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58), NULL);
block_55:
    *(s32 *)((u8 *)gStrTitle + 0xB8) = var_s2;
    return;
}
