/* Draft (not built): func_00223DA0 at 0x00223DA0, size 0x6D4, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 252 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x698, original 0x6D4
 * Original: asm/nonmatchings/unk/unk_21D260/func_00223DA0.s */

// src/unk/unk_21D260.c func_00223DA0 size diff=252/422
extern u8 D_0058BB34[];
void *BtlSys_GetSlot(s16);
s32 SoundRpc_SetVolume(s32, s32, f32, f32);
s16 func_0021C2E0(s16, s32 *);
extern s32 D_0044F720;
extern s32 D_0044F810;
extern s32 D_0046FE10;
extern s32 D_0046FE18;
extern f32 D_004E0614;
extern s8 D_0058BB32;
extern s8 D_0058BB33;
extern void SoundRpc_Send3();
extern void func_002238B0(void);
extern void func_00221110(void);
void func_00223DA0(u8 *arg0, s32 *arg1) {
    s32 *var_s2;
    s32 *var_s3;
    s32 *var_v0_3;
    s32 *var_v0_4;
    s32 *var_v0_5;
    s32 *var_v0_6;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s16 var_v0;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_a0;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s4;
    u8 *temp_v1;
    u8 *var_v0_2;

    var_a1 = arg1;
    temp_s0 = (unsigned char *)(gBtlSys);
    temp_s4 = arg0 + 0x30;
    if (*(s16 *)((u8 *)temp_s0 + 0xE42) != -1) {
        goto block_3;
    }
    if (*(s16 *)((u8 *)temp_s0 + 0xE46) != 0) {
        goto block_3;
    }
    var_s3 = &D_0044F720;
    goto block_4;
block_3:
    var_s3 = (int *)(*(&D_0046FE10 + (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 0x10));
block_4:
    var_v0 = *(s16 *)((u8 *)temp_s0 + 0xE42);
    var_a0 = 0;
    if (var_v0 != -1) {
        goto block_7;
    }
    if (*(s16 *)((u8 *)temp_s0 + 0xE46) != 0) {
        goto block_7;
    }
    var_a0 = 1;
block_7:
    if (var_a0 == 0) {
        goto block_9;
    }
    var_s2 = &D_0044F810;
    goto block_10;
block_9:
    var_a1 = &D_0046FE18 + (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4);
    var_s2 = (int *)(*(s32 *)(*var_a1 + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 4)));
block_10:
    if (var_v0 != -1) {
        goto block_12;
    }
    var_v0 = func_0021C2E0(*(s16 *)((u8 *)temp_s0 + 0xE40), var_a1);
block_12:
    if (var_v0 != -1) {
        goto block_15;
    }
    var_v0_2 = NULL;
    goto block_16;
block_15:
    var_v0_2 = BtlSys_GetSlot(var_v0);
block_16:
    func_00224680(temp_s4);
    if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
        goto block_29;
    }
    temp_a1 = *(s32 *)((u8 *)temp_s4 + 0x28);
    if (temp_a1 == 2) {
        goto block_25;
    }
    if (temp_a1 == 1) {
        goto block_27;
    }
    if (temp_a1 == 0) {
        goto block_22;
    }
    goto block_27;
block_22:
    temp_f1 = *(f32 *)((u8 *)temp_s4 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s4 + 0x2C) = temp_f1;
    if (temp_f1 < 8.0f) {
        goto block_27;
    }
    *(s32 *)((u8 *)temp_s4 + 0x28) = 1;
    goto block_27;
block_25:
    temp_f1_2 = *(f32 *)((u8 *)temp_s4 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s4 + 0x2C) = temp_f1_2;
    if (temp_f1_2 < 8.0f) {
        goto block_27;
    }
    *(s32 *)((u8 *)gBtlSys + 0xE30) = (s32) (*(s32 *)((u8 *)gBtlSys + 0xE30) & ~2);
block_27:
    *(f32 *)((u8 *)temp_s4 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s4 + 0x20) + D_00470710);
    goto block_33;
block_29:
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (D_0058BB36 == 0) {
        goto block_31;
    }
    *(f32 *)((u8 *)temp_s4 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s4 + 0x20) + D_00470710);
    goto block_32;
block_31:
    *(f32 *)((u8 *)temp_s4 + 0x20) = 0.0f;
block_32:
    if (D_0058BB38 == 0) {
        goto block_85;
    }
block_33:
    temp_a0 = *(s32 *)((u8 *)temp_s4 + 4);
    if (temp_a0 == 2) {
        goto block_80;
    }
    if (temp_a0 == 1) {
        goto block_40;
    }
    if (temp_a0 == 0) {
        goto block_38;
    }
    return;
block_38:
    temp_f1_3 = *(f32 *)((u8 *)temp_s4 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s4 + 0x1C) = temp_f1_3;
    if (temp_f1_3 < 8.0f) {
        goto block_85;
    }
    *(s32 *)((u8 *)temp_s4 + 4) = 1;
    *(f32 *)((u8 *)temp_s4 + 0x1C) = 0.0f;
    return;
block_40:
    if (D_0058BB32 == 0) {
        goto block_68;
    }
    temp_a0_2 = *(s32 *)((u8 *)((*(s16 *)((u8 *)temp_s4 + 8) * 0xC) + var_s2) + 4);
    if (temp_a0_2 == 0) {
        goto block_61;
    }
    if (temp_a0_2 == 1) {
        goto block_49;
    }
    if (temp_a0_2 == -1) {
        goto block_46;
    }
    goto block_68;
block_46:
    *(s32 *)((u8 *)temp_s4 + 4) = 2;
    *(s16 *)((u8 *)temp_s0 + 0xE44) = (s16) *(var_s2 + (*(s16 *)((u8 *)temp_s4 + 8) * 0xC));
    *(f32 *)((u8 *)temp_s4 + 0x1C) = 0.0f;
    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_48;
    }
    SoundRpc_Send3(0, 0, 0x16, 0);
block_48:
    return;
block_49:
    if (*(s16 *)((u8 *)temp_s0 + 0xE42) == -1) {
        goto block_58;
    }
    if (*(s32 *)((u8 *)temp_s4 + 0x18) == 0) {
        goto block_58;
    }
    *(s32 *)((u8 *)temp_s4 + 4) = 3;
    var_v0_3 = (int *)(&func_002238B0);
    *(f32 *)((u8 *)temp_s4 + 0x1C) = 0.0f;
    *(s16 *)((u8 *)temp_s4 + 0xA) = 0;
    *(s32 *)((u8 *)temp_s4 + 0x14) = (s32) *(s32 *)((u8 *)var_v0_2 + 0x1C);
    *(f32 *)((u8 *)temp_s4 + 0x30) = (f32) *(f32 *)((u8 *)var_s3 + 8);
    *(f32 *)((u8 *)temp_s4 + 0x34) = (f32) *(f32 *)((u8 *)var_s3 + 0xC);
    if (&func_002238B0 != NULL) {
        goto block_53;
    }
    var_v0_3 = NULL;
block_53:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_3;
    var_v0_4 = (int *)(&func_00221110);
    if (&func_00221110 != NULL) {
        goto block_55;
    }
    var_v0_4 = NULL;
block_55:
    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_4;
    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_60;
    }
    SoundRpc_Send3(0, 0, 0x15, 0);
    goto block_60;
block_58:
    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_60;
    }
    SoundRpc_Send3(0, 0, 6, 0);
block_60:
    return;
block_61:
    *(s32 *)((u8 *)temp_s4 + 4) = 3;
    var_v0_5 = (int *)(&func_002238B0);
    *(s16 *)((u8 *)temp_s0 + 0xE44) = (s16) *(var_s2 + (*(s16 *)((u8 *)temp_s4 + 8) * 0xC));
    *(s16 *)((u8 *)temp_s4 + 0xA) = 1;
    if (&func_002238B0 != NULL) {
        goto block_63;
    }
    var_v0_5 = NULL;
block_63:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_5;
    var_v0_6 = (int *)(&func_00221110);
    if (&func_00221110 != NULL) {
        goto block_65;
    }
    var_v0_6 = NULL;
block_65:
    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_6;
    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_67;
    }
    SoundRpc_Send3(0, 0, 0x15, 0);
block_67:
    return;
block_68:
    if (*D_0058BB30 == 0) {
        goto block_75;
    }
    *(s16 *)((u8 *)temp_s4 + 8) = (s16) (*(s16 *)((u8 *)temp_s4 + 8) - ((s64) ((s64) *D_0058BB30 << 0x38) >> 0x38));
    if (*(s16 *)((u8 *)temp_s4 + 8) >= 0) {
        goto block_71;
    }
    *(s16 *)((u8 *)temp_s4 + 8) = (s16) (*(s32 *)((u8 *)var_s3 + 0) - 1);
block_71:
    if (*(s16 *)((u8 *)temp_s4 + 8) < *(s32 *)((u8 *)var_s3 + 0)) {
        goto block_73;
    }
    *(s16 *)((u8 *)temp_s4 + 8) = 0;
block_73:
    SoundRpc_SetVolume(0, 0, 3e-45f, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_75;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_75:
    if (D_0058BB33 != 0) {
        goto block_77;
    }
    if (D_0058BB34 == 0) {
        goto block_85;
    }
block_77:
    if (*(s16 *)((u8 *)temp_s0 + 0xE46) != 0) {
        goto block_85;
    }
    *(s32 *)((u8 *)temp_s4 + 4) = 2;
    *(s16 *)((u8 *)temp_s0 + 0xE44) = 0;
    *(f32 *)((u8 *)temp_s4 + 0x1C) = 0.0f;
    SoundRpc_SetVolume(0, 0, D_004E0614, 0);
    if (D_004E0614 <= 0.0f) {
        goto block_85;
    }
    SoundRpc_Send3(0, 0, 5, 0);
    return;
block_80:
    temp_f1_4 = *(f32 *)((u8 *)temp_s4 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s4 + 0x1C) = temp_f1_4;
    if (temp_f1_4 < 8.0f) {
        goto block_85;
    }
    amTask_Kill((s32)(*(u8 **)((u8 *)arg0 + 0x30)));
    amTask_Kill((s32)(arg0));
    *(s32 *)((u8 *)temp_s0 + 0xEF0) = 0;
    temp_s0_2 = (unsigned char *)(gBtlSys);
    *(s32 *)((u8 *)temp_s0_2 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s0_2 + 0xE30) & ~1);
    func_0022D4B0((s32)(D_0058BAE0), 1);
    D_0058BAE0[0] = 0;
    temp_v1 = *(u8 **)((u8 *)temp_s0_2 + 0xEF0);
    if (temp_v1 == NULL) {
        goto block_85;
    }
    temp_a0_3 = *(u8 **)((u8 *)temp_v1 + 0x30);
    if (temp_a0_3 == NULL) {
        goto block_84;
    }
    amTask_Kill((s32)(temp_a0_3));
block_84:
    amTask_Kill((s32)(*(u8 **)((u8 *)temp_s0_2 + 0xEF0)));
    *(u8 **)((u8 *)temp_v1 + 0x30) = NULL;
    *(u8 **)((u8 *)temp_s0_2 + 0xEF0) = NULL;
block_85:
    return;
}
