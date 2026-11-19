/* Draft (not built): func_00288BF0 at 0x00288BF0, size 0x280, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 79 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x258, original 0x280
 * Original: asm/nonmatchings/sys/mc_opr/func_00288BF0.s */

// src/sys/mc_opr.c func_00288BF0 size diff=79/150
extern s32 D_00470894;
void func_0028DDB0(u8 *arg0);
s32 SoundRpc_SetVolume(s32, s32, f32, u16, f32);
s32 amMc_GetInfo(s32, s32, s32);
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern s32 gMcResult;
extern s32 gMcState;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_00289210(void);
extern void func_00289380(void);
extern void func_0028DDA0(void);
void func_00288BF0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a0;
    s32 temp_a2;

    if (gMcState == 3) {
        goto block_15;
    }
    if (gMcState == 2) {
        goto block_4;
    }
    goto block_19;
block_4:
    if (gMcResult == -5) {
        goto block_14;
    }
    if (gMcResult == -2) {
        goto block_10;
    }
    if (gMcResult == -1) {
        goto block_10;
    }
    if (gMcResult == 0) {
        goto block_19;
    }
    goto block_14;
block_10:
    func_00288870(0x20);
    var_v1 = (int *)(&func_00289210);
    if (&func_00289210 != NULL) {
        goto block_12;
    }
    var_v1 = NULL;
block_12:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    return;
block_14:
    func_00288870(5);
    goto block_19;
block_15:
    var_v1_2 = (int *)(&func_00289380);
    if (&func_00289380 != NULL) {
        goto block_17;
    }
    var_v1_2 = NULL;
block_17:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    return;
block_19:
    amMc_GetInfo(D_0047084C, 0, 0);
    func_002880B0(D_00470854);
    if (!((*D_00492FCE | D_00493086) & 0x4000)) {
        goto block_29;
    }
    if (D_00470854 == 0) {
        goto block_24;
    }
    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
    if (D_004E0614 <= 0.0f) {
        goto block_23;
    }
    SoundRpc_Send3(0, 0, 5, 0);
block_23:
    return;
block_24:
    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
    if (D_004E0614 <= 0.0f) {
        goto block_26;
    }
    SoundRpc_Send3(0, 0, 3, 0);
block_26:
    func_00288870(-1);
    var_v1_3 = (int *)(&func_0028DDB0);
    if (&func_0028DDB0 != NULL) {
        goto block_28;
    }
    var_v1_3 = NULL;
block_28:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470894 = (s32) func_0028DDA0;
    D_00470858 = 1;
    return;
block_29:
    temp_a2 = D_00492FD2 | D_00493032;
    temp_a0 = (temp_a2 | (D_0049308A | D_004930EA)) & 0x50;
    if (temp_a0 == 0x40) {
        goto block_33;
    }
    if (temp_a0 == 0x10) {
        goto block_33;
    }
    goto block_36;
block_33:
    SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), D_00492FD2, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_35;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_35:
    D_00470854 ^= 1;
    return;
block_36:
    return;
}
