/* Draft (not built): func_00223660 at 0x00223660, size 0x244, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 124 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_21D260/func_00223660.s */

// src/unk/unk_21D260.c func_00223660 diff diff=124/145
void *BtlSys_GetSlot(s16);
s16 func_0021C2E0(s16);
extern void func_002228F0(void);
extern void func_0021F0E0(void);
extern void func_00222BF0(void);
void func_00223660(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s16 var_v0;
    s32 temp_a1;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *var_v0_2;

    temp_s3 = (unsigned char *)(gBtlSys);
    var_v0 = *(s16 *)((u8 *)temp_s3 + 0xE42);
    temp_s1 = arg0 + 0x30;
    if (var_v0 != -1) {
        goto block_2;
    }
    var_v0 = func_0021C2E0(*(s16 *)((u8 *)temp_s3 + 0xE40));
block_2:
    if (var_v0 != -1) {
        goto block_4;
    }
    var_v0_2 = NULL;
    goto block_5;
block_4:
    var_v0_2 = BtlSys_GetSlot(var_v0);
block_5:
    func_00224680(temp_s1);
    if (!(*(s32 *)((u8 *)temp_s3 + 0xE30) & 2)) {
        goto block_18;
    }
    temp_a1 = *(s32 *)((u8 *)temp_s1 + 0x28);
    if (temp_a1 == 2) {
        goto block_14;
    }
    if (temp_a1 == 1) {
        goto block_16;
    }
    if (temp_a1 == 0) {
        goto block_11;
    }
    goto block_16;
block_11:
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s1 + 0x2C) = temp_f1;
    if (temp_f1 < 8.0f) {
        goto block_16;
    }
    *(s32 *)((u8 *)temp_s1 + 0x28) = 1;
    goto block_16;
block_14:
    temp_f1_2 = *(f32 *)((u8 *)temp_s1 + 0x2C) + D_00470710;
    *(f32 *)((u8 *)temp_s1 + 0x2C) = temp_f1_2;
    if (temp_f1_2 < 8.0f) {
        goto block_16;
    }
    *(s32 *)((u8 *)gBtlSys + 0xE30) = (s32) (*(s32 *)((u8 *)gBtlSys + 0xE30) & ~2);
block_16:
    *(f32 *)((u8 *)temp_s1 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x20) + D_00470710);
    goto block_24;
block_18:
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (D_0058BB38 != 0) {
        goto block_24;
    }
    if (D_0058BB36 == 0) {
        goto block_22;
    }
    *(f32 *)((u8 *)temp_s1 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x20) + D_00470710);
    goto block_23;
block_22:
    *(f32 *)((u8 *)temp_s1 + 0x20) = 0.0f;
block_23:
    return;
block_24:
    if (var_v0_2 == NULL) {
        goto block_31;
    }
    if (*(s16 *)((u8 *)var_v0_2 + 0x4E) == -2) {
        goto block_31;
    }
    *(s16 *)((u8 *)temp_s1 + 8) = 8;
    *(s32 *)((u8 *)temp_s1 + 4) = 3;
    *(s16 *)((u8 *)temp_s1 + 0xA) = 0;
    var_v1 = (int *)(&func_002228F0);
    *(s32 *)((u8 *)temp_s1 + 0x14) = (s32) *(s32 *)((u8 *)var_v0_2 + 0x1C);
    *(s32 *)((u8 *)temp_s1 + 0x30) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x34) = 0;
    if (&func_002228F0 != NULL) {
        goto block_28;
    }
    var_v1 = NULL;
block_28:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    var_v1_2 = (int *)(&func_0021F0E0);
    if (&func_0021F0E0 != NULL) {
        goto block_30;
    }
    var_v1_2 = NULL;
block_30:
    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v1_2;
block_31:
    temp_f1_3 = *(f32 *)((u8 *)temp_s1 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s1 + 0x1C) = temp_f1_3;
    if (temp_f1_3 < 8.0f) {
        goto block_35;
    }
    *(s32 *)((u8 *)temp_s1 + 4) = 1;
    var_v1_3 = (int *)(&func_00222BF0);
    *(f32 *)((u8 *)temp_s1 + 0x1C) = 0.0f;
    if (&func_00222BF0 != NULL) {
        goto block_34;
    }
    var_v1_3 = NULL;
block_34:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
block_35:
    return;
}
