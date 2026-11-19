/* Draft (not built): func_00222440 at 0x00222440, size 0x4A4, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 117 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x464, original 0x4A4
 * Original: asm/nonmatchings/unk/unk_21D260/func_00222440.s */

// src/unk/unk_21D260.c func_00222440 size diff=117/281
void *BtlSys_GetSlot(s16);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern f32 D_004E0614;
extern s8 D_0058BB32;
extern s8 D_0058BB33;
extern s32 D_0058BB40;
extern void SoundRpc_Send3();
extern void func_00222280(void);
extern void func_00222A90(void);
extern void func_0021F3A0(void);
void func_00222440(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 *var_v0_4;
    s32 *var_v0_5;
    s32 *var_v0_6;
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_a0;
    s16 temp_v0;
    s32 temp_a1;
    s32 var_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = arg0 + 0x30;
    temp_s2 = (unsigned char *)(gBtlSys);
    func_00224680(temp_s1);
    if (!(*(s32 *)((u8 *)temp_s2 + 0xE30) & 2)) {
        goto block_12;
    }
    temp_a1 = *(s32 *)((u8 *)temp_s1 + 0x28);
    if (temp_a1 == 2) {
        goto block_8;
    }
    if (temp_a1 == 1) {
        goto block_10;
    }
    if (temp_a1 == 0) {
        goto block_5;
    }
    goto block_10;
block_5:
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s1 + 0x2C) = temp_f1;
    if (temp_f1 < 8.0f) {
        goto block_10;
    }
    *(s32 *)((u8 *)temp_s1 + 0x28) = 1;
    goto block_10;
block_8:
    temp_f1_2 = *(f32 *)((u8 *)temp_s1 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s1 + 0x2C) = temp_f1_2;
    if (temp_f1_2 < 8.0f) {
        goto block_10;
    }
    *(s32 *)((u8 *)gBtlSys + 0xE30) = (s32) (*(s32 *)((u8 *)gBtlSys + 0xE30) & ~2);
block_10:
    *(f32 *)((u8 *)temp_s1 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x20) + D_00470710);
    return;
block_12:
    func_00224BB0(D_0058BB30);
    D_0058BB40 = func_002249B0();
    if (D_0058BB40 != 0) {
        goto block_63;
    }
    if (D_0058BB36 == 0) {
        goto block_16;
    }
    *(f32 *)((u8 *)temp_s1 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x20) + D_00470710);
    goto block_17;
block_16:
    *(f32 *)((u8 *)temp_s1 + 0x20) = 0.0f;
block_17:
    if (D_0058BB38 == 0) {
        goto block_63;
    }
    temp_a0 = *(s16 *)((u8 *)temp_s1 + 8);
    if (temp_a0 == 8) {
        goto block_49;
    }
    if (temp_a0 == 0xA) {
        goto block_23;
    }
    if (temp_a0 == 9) {
        goto block_23;
    }
    return;
block_23:
    if (D_0058BB32 == 0) {
        goto block_28;
    }
    var_a0 = 0;
    if (*(s16 *)((u8 *)temp_s1 + 0xA) != 0) {
        goto block_27;
    }
    goto block_34;
block_27:
    var_a0 = 1;
    goto block_34;
block_28:
    if (*D_0058BB30 == 0) {
        goto block_31;
    }
    *(s16 *)((u8 *)temp_s1 + 0xA) = (s16) (*(s16 *)((u8 *)temp_s1 + 0xA) ^ 1);
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_31;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_31:
    var_a0 = 1;
    if (D_0058BB33 == 0) {
        goto block_33;
    }
    goto block_34;
block_33:
    var_a0 = -1;
block_34:
    if (var_a0 == 0) {
        goto block_43;
    }
    if (var_a0 == 1) {
        goto block_39;
    }
    if (var_a0 == -1) {
        goto block_63;
    }
    return;
block_39:
    *(s32 *)((u8 *)temp_s1 + 4) = 5;
    *(s16 *)((u8 *)temp_s2 + 0xE44) = -1;
    var_v0 = (int *)(&func_00222280);
    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
    if (&func_00222280 != NULL) {
        goto block_41;
    }
    var_v0 = NULL;
block_41:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_63;
    }
    SoundRpc_Send3(0, 0, 5, 0);
    return;
block_43:
    *(s32 *)((u8 *)temp_s1 + 4) = 2;
    var_v0_2 = (int *)(&func_00222A90);
    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
    if (&func_00222A90 != NULL) {
        goto block_45;
    }
    var_v0_2 = NULL;
block_45:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    var_v0_3 = (int *)(&func_0021F3A0);
    if (&func_0021F3A0 != NULL) {
        goto block_47;
    }
    var_v0_3 = NULL;
block_47:
    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_3;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_63;
    }
    SoundRpc_Send3(0, 0, 3, 0);
    return;
block_49:
    temp_s0 = BtlSys_GetSlot(*(s16 *)((u8 *)temp_s2 + 0xE42));
    temp_v0 = func_00221E10(temp_s1);
    if (temp_v0 == -1) {
        goto block_52;
    }
    if (temp_v0 == -2) {
        goto block_63;
    }
    goto block_57;
block_52:
    *(s32 *)((u8 *)temp_s1 + 4) = 5;
    *(s16 *)((u8 *)temp_s2 + 0xE44) = -1;
    *(s32 *)((u8 *)temp_s1 + 0x30) = 0x43C80000;
    *(s32 *)((u8 *)temp_s1 + 0x34) = 0x43AA0000;
    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
    var_v0_4 = (int *)(&func_00222280);
    *(s16 *)((u8 *)temp_s0 + 0x4E) = -2;
    if (&func_00222280 != NULL) {
        goto block_54;
    }
    var_v0_4 = NULL;
block_54:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_4;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_63;
    }
    SoundRpc_Send3(0, 0, 5, 0);
    return;
block_57:
    *(s16 *)((u8 *)temp_s0 + 0x4E) = temp_v0;
    *(s32 *)((u8 *)temp_s1 + 4) = 2;
    var_v0_5 = (int *)(&func_00222A90);
    *(s16 *)((u8 *)temp_s2 + 0xE44) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x30) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x34) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
    if (&func_00222A90 != NULL) {
        goto block_59;
    }
    var_v0_5 = NULL;
block_59:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_5;
    var_v0_6 = (int *)(&func_0021F3A0);
    if (&func_0021F3A0 != NULL) {
        goto block_61;
    }
    var_v0_6 = NULL;
block_61:
    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_6;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_63;
    }
    SoundRpc_Send3(0, 0, 3, 0);
block_63:
    return;
}
