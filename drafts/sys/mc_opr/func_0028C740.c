/* Draft (not built): func_0028C740 at 0x0028C740, size 0x598, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 256 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4E0, original 0x598
 * Original: asm/nonmatchings/sys/mc_opr/func_0028C740.s */

// src/sys/mc_opr.c func_0028C740 size diff=256/312
extern s32 D_00470894;
extern s32 D_00470048;
s32 amMc_GetDir(s32, s32, s32 *, s32 *);
s32 amMc_Load(s32, s32, s32 *, s32);
s32 amMc_Save(s32, s32, s32 *, s32);
extern s32 D_0046B8F0;
extern s32 D_0046B9E0;
extern s32 D_0046BA10;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470868;
extern s32 D_00470870;
extern s32 D_00470898;
extern s32 D_005AA380;
extern s32 D_005AA388;
extern s32 D_005AA390;
extern u16 D_005AA394;
extern u16 D_005AA396;
extern s32 D_005AA398;
extern s32 D_005AA39C;
extern s32 D_005AA3A0;
extern s32 D_005AA3C0;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028DDF0(void);
extern void func_0028D1E0(void);
extern void func_0028B9B0(void);
extern void func_0028C580(void);
extern void func_0028AE60(void);
extern void func_0028AD20(void);
extern void func_0028BDB0(void);
extern void func_0028BEB0(void);
void func_0028C740(u8 *arg0) {
    s32 *var_a2;
    s32 *var_v1;
    s32 *var_v1_10;
    s32 *var_v1_11;
    s32 *var_v1_12;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 *var_v1_6;
    s32 *var_v1_7;
    s32 *var_v1_8;
    s32 *var_v1_9;
    s32 var_a1;
    s8 temp_v1;
    u8 *temp_v0;
    u8 *var_a3;

    if (gMcState == 3) {
        goto block_3;
    }
    if (gMcState == 2) {
        goto block_3;
    }
    return;
block_3:
    temp_v0 = (unsigned char *)(func_00288AF0(&D_005AA3C0, gMcResult, 0));
    if (temp_v0 == NULL) {
        goto block_38;
    }
    var_a3 = temp_v0 + 0x20;
    var_a2 = &D_005AA3A0;
    var_a1 = 0x10;
    *(s16 *)((u8 *)(&D_005AA380) + 0) = (s16) *(s16 *)((u8 *)temp_v0 + 0);
    *(s16 *)((u8 *)(&D_005AA380) + 2) = (s16) *(s16 *)((u8 *)temp_v0 + 2);
    *(s16 *)((u8 *)(&D_005AA380) + 4) = (s16) *(s16 *)((u8 *)temp_v0 + 4);
    *(s16 *)((u8 *)(&D_005AA380) + 6) = (s16) *(s16 *)((u8 *)temp_v0 + 6);
    *(s16 *)((u8 *)(&D_005AA388) + 0) = (s16) *(s16 *)((u8 *)temp_v0 + 8);
    *(s16 *)((u8 *)(&D_005AA388) + 2) = (s16) *(s16 *)((u8 *)temp_v0 + 0xA);
    *(s16 *)((u8 *)(&D_005AA388) + 4) = (s16) *(s16 *)((u8 *)temp_v0 + 0xC);
    *(s16 *)((u8 *)(&D_005AA388) + 6) = (s16) *(s16 *)((u8 *)temp_v0 + 0xE);
    D_005AA390 = *(s32 *)((u8 *)temp_v0 + 0x10);
    D_005AA394 = *(u16 *)((u8 *)temp_v0 + 0x14);
    D_005AA396 = *(u16 *)((u8 *)temp_v0 + 0x16);
    D_005AA398 = *(s32 *)((u8 *)temp_v0 + 0x18);
    D_005AA39C = *(s32 *)((u8 *)temp_v0 + 0x1C);
loop_5:
    var_a1 -= 1;
    temp_v1 = *(s8 *)((u8 *)var_a3 + 1);
    *(s8 *)((u8 *)var_a2 + 0) = (s8) *(s8 *)((u8 *)var_a3 + 0);
    var_a3 += 2;
    *(s8 *)((u8 *)var_a2 + 1) = temp_v1;
    var_a2 += 2;
    if (var_a1 > 0) {
        goto loop_5;
    }
    if (D_00470048 == 0xA) {
        goto block_29;
    }
    if (D_00470048 == 9) {
        goto block_29;
    }
    if (D_00470048 == 8) {
        goto block_29;
    }
    if (D_00470048 == 5) {
        goto block_20;
    }
    if (D_00470048 == 4) {
        goto block_20;
    }
    if (D_00470048 == 2) {
        goto block_20;
    }
    if (D_00470048 == 0) {
        goto block_15;
    }
    goto block_59;
block_15:
    if (D_00470868 != 0) {
        goto block_60;
    }
    func_00288870(0x14, var_a1, var_a2, var_a3);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_18;
    }
    var_v1 = NULL;
block_18:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470894 = (int)(func_0028D1E0);
    D_00470854 = 1;
    goto block_59;
block_20:
    if (amMc_Load(D_0047084C, 0, &D_0046B8F0, 0) == 0) {
        goto block_25;
    }
    if (D_00470868 != 0) {
        goto block_60;
    }
    func_00288870(0x18);
    var_v1_2 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_24;
    }
    var_v1_2 = NULL;
block_24:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470858 = 3;
    D_00470894 = (int)(func_0028C730);
    D_00470854 = 1;
    goto block_59;
block_25:
    var_v1_3 = (int *)(&func_0028B9B0);
    if (&func_0028B9B0 != NULL) {
        goto block_27;
    }
    var_v1_3 = NULL;
block_27:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    goto block_59;
block_29:
    if (amMc_Load(D_0047084C, 0, &D_0046B8F0, 0) == 0) {
        goto block_34;
    }
    func_00288870(0x2B);
    var_v1_4 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_32;
    }
    var_v1_4 = NULL;
block_32:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
    D_00470894 = (int)(func_0028C580);
    goto block_59;
block_34:
    var_v1_5 = (int *)(&func_0028B9B0);
    if (&func_0028B9B0 != NULL) {
        goto block_36;
    }
    var_v1_5 = NULL;
block_36:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
    goto block_59;
block_38:
    if (gMcResult == 0) {
        goto block_45;
    }
    if (gMcResult == -6) {
        goto block_45;
    }
    if (gMcResult == -5) {
        goto block_45;
    }
    if (gMcResult == -4) {
        goto block_45;
    }
    if (gMcResult == -2) {
        goto block_45;
    }
    goto block_53;
block_45:
    if (D_00470048 == 0xA) {
        goto block_49;
    }
    if (D_00470048 == 9) {
        goto block_49;
    }
    if (D_00470048 == 8) {
        goto block_49;
    }
    goto block_52;
block_49:
    func_00288870(7);
    var_v1_6 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_51;
    }
    var_v1_6 = NULL;
block_51:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_6;
    D_00470894 = (int)(func_0028C580);
    goto block_59;
block_52:
    func_002889C0(arg0, &D_005AA3C0, gMcResult);
    goto block_59;
block_53:
    if (gMcResult < -0xA) {
        goto block_84;
    }
    if (D_00470868 == 0) {
        goto block_56;
    }
    func_002889C0(arg0, &D_005AA3C0, gMcResult);
    goto block_59;
block_56:
    func_00288870(0x16);
    var_v1_7 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_58;
    }
    var_v1_7 = NULL;
block_58:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_7;
    D_00470854 = 1;
    D_00470894 = (int)(func_0028D1E0);
block_59:
    return;
block_60:
    if (D_00470048 == 5) {
        goto block_75;
    }
    if (D_00470048 == 4) {
        goto block_75;
    }
    if (D_00470048 == 2) {
        goto block_75;
    }
    if (D_00470048 == 0) {
        goto block_65;
    }
    goto block_75;
block_65:
    func_00288870(0x11);
    if (amMc_GetDir(D_0047084C, 0, &D_0046BA10, &D_005AA3C0) != 0) {
        goto block_70;
    }
    var_v1_8 = (int *)(&func_0028AE60);
    if (&func_0028AE60 != NULL) {
        goto block_68;
    }
    var_v1_8 = NULL;
block_68:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_8;
    return;
block_70:
    if (amMc_GetDir(D_0047084C, 0, &D_0046B9E0, &D_005AA3C0) != 0) {
        goto block_75;
    }
    var_v1_9 = (int *)(&func_0028AD20);
    if (&func_0028AD20 != NULL) {
        goto block_73;
    }
    var_v1_9 = NULL;
block_73:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_9;
    return;
block_75:
    if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) == 0) {
        goto block_80;
    }
    var_v1_10 = (int *)(&func_0028BDB0);
    if (&func_0028BDB0 != NULL) {
        goto block_78;
    }
    var_v1_10 = NULL;
block_78:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_10;
    D_00470898 = 0;
    goto block_83;
block_80:
    func_00288870(0x11);
    var_v1_11 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_82;
    }
    var_v1_11 = NULL;
block_82:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_11;
    D_00470894 = (int)(func_0028BEB0);
block_83:
    return;
block_84:
    func_00288870(4);
    var_v1_12 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_86;
    }
    var_v1_12 = NULL;
block_86:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_12;
    D_00470858 = 3;
    D_00470894 = (int)(func_0028C580);
    return;
}
