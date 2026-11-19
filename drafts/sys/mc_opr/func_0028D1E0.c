/* Draft (not built): func_0028D1E0 at 0x0028D1E0, size 0x2F0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 93 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2E8, original 0x2F0
 * Original: asm/nonmatchings/sys/mc_opr/func_0028D1E0.s */

// src/sys/mc_opr.c func_0028D1E0 size diff=93/186
extern s32 D_00470894;
extern s32 D_00470048;
void func_0028DDB0(u8 *arg0);
s32 SoundRpc_SetVolume(s32, s32, f32, u16, f32);
s32 amMc_GetInfo(s32, s32, s32);
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_0047085C;
extern s32 D_00470864;
extern s32 D_00470868;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028DDF0(void);
extern void func_0028C580(void);
extern void func_0028D4D0(void);
extern void func_0028A730(void);
extern void func_0028DDA0(void);
extern void func_0028B720(void);
void func_0028D1E0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;

    func_002880B0(D_00470854);
    temp_a0 = *D_00492FCE | D_00493086;
    if (temp_a0 & 0x1000) {
        goto block_22;
    }
    if (!(temp_a0 & 0x4000)) {
        goto block_13;
    }
    if (D_00470854 != 0) {
        goto block_22;
    }
    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
    if (D_004E0614 <= 0.0f) {
        goto block_5;
    }
    SoundRpc_Send3(0, 0, 3, 0);
block_5:
    if (amMc_GetInfo(D_0047084C, 0, 1) == 0) {
        goto block_9;
    }
    func_00288870(4);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_8;
    }
    var_v1 = NULL;
block_8:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470858 = 3;
    D_00470894 = (s32) &func_0028C580;
    D_00470854 = 1;
    goto block_12;
block_9:
    D_00470868 = 1;
    D_00470864 = 0;
    func_00288870(0x20);
    var_v1_2 = (int *)(&func_0028D4D0);
    if (&func_0028D4D0 != NULL) {
        goto block_11;
    }
    var_v1_2 = NULL;
block_11:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
block_12:
    return;
block_13:
    temp_a2 = D_00492FD2 | D_00493032;
    temp_a0_2 = (temp_a2 | (D_0049308A | D_004930EA)) & 0x50;
    if (temp_a0_2 == 0x40) {
        goto block_17;
    }
    if (temp_a0_2 == 0x10) {
        goto block_17;
    }
    goto block_20;
block_17:
    SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), D_00492FD2, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_19;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_19:
    D_00470854 ^= 1;
    goto block_21;
block_20:
    return;
block_21:
    return;
block_22:
    SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
    if (D_004E0614 <= 0.0f) {
        goto block_24;
    }
    SoundRpc_Send3(0, 0, 5, 0);
block_24:
    if (D_00470048 == 5) {
        goto block_36;
    }
    if (D_00470048 == 4) {
        goto block_36;
    }
    if (D_00470048 == 2) {
        goto block_32;
    }
    if (D_00470048 == 0) {
        goto block_29;
    }
    return;
block_29:
    func_00288870(2, D_00470048);
    var_v1_3 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_31;
    }
    var_v1_3 = NULL;
block_31:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470894 = (s32) &func_0028A730;
    D_00470854 = 1;
    return;
block_32:
    D_00470858 = 2;
    func_00288870(-1, D_00470048);
    var_v1_4 = (int *)(&func_0028DDB0);
    if (&func_0028DDB0 != NULL) {
        goto block_34;
    }
    var_v1_4 = NULL;
block_34:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
    D_00470894 = (s32) func_0028DDA0;
    return;
block_36:
    func_00288870(D_0047085C, D_00470048);
    var_v1_5 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_38;
    }
    var_v1_5 = NULL;
block_38:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
    D_00470854 = 0;
    D_00470864 = 0;
    D_00470894 = (s32) &func_0028B720;
    D_00470868 = 0;
    return;
}
