/* Draft (not built): func_0028A0A0 at 0x0028A0A0, size 0x258, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 98 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x210, original 0x258
 * Original: asm/nonmatchings/sys/mc_opr/func_0028A0A0.s */

// src/sys/mc_opr.c func_0028A0A0 size diff=98/132
extern s32 D_00470894;
s32 amMc_Load(s32, s32, s32 *, s32);
extern s32 D_0046B8F0;
extern s32 D_0047084C;
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
extern void func_00289E80(void);
extern void func_00289F30(void);
void func_0028A0A0(u8 *arg0) {
    s32 *var_a1;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 var_a0;
    s8 temp_v0_2;
    u8 *temp_v0;
    u8 *var_a2;

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
        goto block_14;
    }
    var_a2 = temp_v0 + 0x20;
    var_a1 = &D_005AA3A0;
    var_a0 = 0x10;
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
    var_a0 -= 1;
    temp_v0_2 = *(s8 *)((u8 *)var_a2 + 1);
    *(s8 *)((u8 *)var_a1 + 0) = (s8) *(s8 *)((u8 *)var_a2 + 0);
    var_a2 += 2;
    *(s8 *)((u8 *)var_a1 + 1) = temp_v0_2;
    var_a1 += 2;
    if (var_a0 > 0) {
        goto loop_5;
    }
    if (amMc_Load(D_0047084C, 0, &D_0046B8F0, 0) == 0) {
        goto block_11;
    }
    func_00288870(9);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_9;
    }
    var_v1 = NULL;
block_9:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470894 = (int)(&func_00289E80);
    return;
block_11:
    func_00288870(8);
    var_v1_2 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_13;
    }
    var_v1_2 = NULL;
block_13:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470894 = (int)(&func_00289F30);
    return;
block_14:
    if (gMcResult == 0) {
        goto block_21;
    }
    if (gMcResult == -6) {
        goto block_21;
    }
    if (gMcResult == -2) {
        goto block_21;
    }
    if (gMcResult == -5) {
        goto block_21;
    }
    if (gMcResult == -4) {
        goto block_21;
    }
    goto block_24;
block_21:
    func_00288870(7);
    var_v1_3 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_23;
    }
    var_v1_3 = NULL;
block_23:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470894 = (int)(&func_00289E80);
    return;
block_24:
    func_00288870(9);
    var_v1_4 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_26;
    }
    var_v1_4 = NULL;
block_26:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
    D_00470894 = (int)(&func_00289E80);
    return;
}
