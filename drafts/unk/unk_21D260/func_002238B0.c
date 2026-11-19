/* Draft (not built): func_002238B0 at 0x002238B0, size 0x4E4, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 181 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4A0, original 0x4E4
 * Original: asm/nonmatchings/unk/unk_21D260/func_002238B0.s */

// src/unk/unk_21D260.c func_002238B0 size diff=181/296
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_0044F810;
extern s32 D_0046FE18;
extern f32 D_004E0614;
extern s8 D_0058BB32;
extern s8 D_0058BB33;
extern void SoundRpc_Send3();
extern void func_00223DA0(void);
extern void func_002214B0(void);
void func_002238B0(u8 *arg0) {
    s32 *var_s1;
    s32 *var_v0_2;
    s32 *var_v1_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 var_a1;
    void (*var_v0)(u8 *);
    void (*var_v1)(u8 *);
    void (*var_v1_2)(u8 *);
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = (unsigned char *)(gBtlSys);
    temp_s2 = arg0 + 0x30;
    if (*(s16 *)((u8 *)temp_s0 + 0xE42) != -1) {
        goto block_3;
    }
    if (*(s16 *)((u8 *)temp_s0 + 0xE46) != 0) {
        goto block_3;
    }
    var_s1 = &D_0044F810;
    goto block_4;
block_3:
    var_s1 = (int *)(*(s32 *)(*(&D_0046FE18 + (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 4)));
block_4:
    func_00224680(temp_s2);
    if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
        goto block_16;
    }
    temp_a1 = *(s32 *)((u8 *)temp_s2 + 0x28);
    if (temp_a1 == 2) {
        goto block_12;
    }
    if (temp_a1 == 1) {
        goto block_14;
    }
    if (temp_a1 == 0) {
        goto block_9;
    }
    goto block_14;
block_9:
    temp_f1 = *(f32 *)((u8 *)temp_s2 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s2 + 0x2C) = temp_f1;
    if (temp_f1 < 8.0f) {
        goto block_14;
    }
    *(s32 *)((u8 *)temp_s2 + 0x28) = 1;
    goto block_14;
block_12:
    temp_f1_2 = *(f32 *)((u8 *)temp_s2 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s2 + 0x2C) = temp_f1_2;
    if (temp_f1_2 < 8.0f) {
        goto block_14;
    }
    *(s32 *)((u8 *)gBtlSys + 0xE30) = (s32) (*(s32 *)((u8 *)gBtlSys + 0xE30) & ~2);
block_14:
    *(f32 *)((u8 *)temp_s2 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x20) + D_00470710);
    goto block_20;
block_16:
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (D_0058BB36 == 0) {
        goto block_18;
    }
    *(f32 *)((u8 *)temp_s2 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x20) + D_00470710);
    goto block_19;
block_18:
    *(f32 *)((u8 *)temp_s2 + 0x20) = 0.0f;
block_19:
    if (D_0058BB38 == 0) {
        goto block_66;
    }
block_20:
    temp_a1_2 = *(s32 *)((u8 *)temp_s2 + 4);
    if (temp_a1_2 == 5) {
        goto block_60;
    }
    if (temp_a1_2 == 4) {
        goto block_29;
    }
    if (temp_a1_2 == 3) {
        goto block_24;
    }
    return;
block_24:
    temp_f1_3 = *(f32 *)((u8 *)temp_s2 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s2 + 0x1C) = temp_f1_3;
    if (temp_f1_3 < 8.0f) {
        goto block_66;
    }
    *(s32 *)((u8 *)temp_s2 + 4) = 4;
    var_v1 = func_002238B0;
    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
    if (func_002238B0 != NULL) {
        goto block_27;
    }
    var_v1 = NULL;
block_27:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
    return;
block_29:
    var_a1 = 1;
    temp_v1 = *(s32 *)((u8 *)((*(s16 *)((u8 *)temp_s2 + 8) * 0xC) + var_s1) + 4);
    if (temp_v1 == 1) {
        goto block_57;
    }
    if (temp_v1 == 0) {
        goto block_33;
    }
    return;
block_33:
    if (D_0058BB32 == 0) {
        goto block_38;
    }
    if (*(s16 *)((u8 *)temp_s2 + 0xA) != 0) {
        goto block_37;
    }
    var_a1 = 0;
    goto block_44;
block_37:
    goto block_44;
block_38:
    if (*D_0058BB30 == 0) {
        goto block_41;
    }
    *(s16 *)((u8 *)temp_s2 + 0xA) = (s16) (*(s16 *)((u8 *)temp_s2 + 0xA) ^ 1);
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_41;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_41:
    if (D_0058BB33 == 0) {
        goto block_43;
    }
    var_a1 = 1;
    goto block_44;
block_43:
    var_a1 = -1;
block_44:
    if (var_a1 == 0) {
        goto block_50;
    }
    if (var_a1 == 1) {
        goto block_48;
    }
    if (var_a1 == -1) {
        goto block_66;
    }
    return;
block_48:
    *(s32 *)((u8 *)temp_s2 + 4) = 5;
    *(s16 *)((u8 *)temp_s0 + 0xE44) = -1;
    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_66;
    }
    SoundRpc_Send3(0, 0, 5, 0);
    return;
block_50:
    *(s32 *)((u8 *)temp_s2 + 4) = 2;
    var_v0 = func_00223DA0;
    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
    if (func_00223DA0 != NULL) {
        goto block_52;
    }
    var_v0 = NULL;
block_52:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v0;
    var_v0_2 = (int *)(&func_002214B0);
    if (&func_002214B0 != NULL) {
        goto block_54;
    }
    var_v0_2 = NULL;
block_54:
    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_66;
    }
    SoundRpc_Send3(0, 0, 3, 0);
    return;
block_57:
    if (func_00221E10(temp_s2, 1) == -2) {
        goto block_66;
    }
    *(s32 *)((u8 *)temp_s2 + 4) = 5;
    *(s16 *)((u8 *)temp_s0 + 0xE44) = -1;
    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_66;
    }
    SoundRpc_Send3(0, 0, 5, 0);
    return;
block_60:
    temp_f1_4 = *(f32 *)((u8 *)temp_s2 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s2 + 0x1C) = temp_f1_4;
    if (temp_f1_4 < 8.0f) {
        goto block_66;
    }
    *(s32 *)((u8 *)temp_s2 + 4) = 1;
    var_v1_2 = func_00223DA0;
    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
    *(s16 *)((u8 *)temp_s2 + 0xA) = 0;
    if (func_00223DA0 != NULL) {
        goto block_63;
    }
    var_v1_2 = NULL;
block_63:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_2;
    var_v1_3 = (int *)(&func_002214B0);
    if (&func_002214B0 != NULL) {
        goto block_65;
    }
    var_v1_3 = NULL;
block_65:
    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v1_3;
block_66:
    return;
}
