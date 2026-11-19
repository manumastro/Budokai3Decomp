/* Draft (not built): func_00289BE0 at 0x00289BE0, size 0x208, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x208
 * Original: asm/nonmatchings/sys/mc_opr/func_00289BE0.s */

// src/sys/mc_opr.c func_00289BE0 size diff=78/124
extern s32 D_00470838;
s32 amMc_CheckFile(s32, s32, s32 *, s32 *);
s32 amMc_GetInfo(s32, s32, s32, s32 *);
extern s32 D_0046B9A0;
extern s32 D_0047084C;
extern s32 D_005AA3C0;
extern s32 gMcInfo;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_00289DF0(void);
extern void func_002898F0(void);
void func_00289BE0(u8 *arg0) {
    s32 *temp_a3;
    s32 temp_a2;
    s32 var_v1_3;
    void (*var_v1)(u8 *);
    void (*var_v1_2)(u8 *);
    void (*var_v1_4)(u8 *);

    if (gMcState == 3) {
        goto block_3;
    }
    if (gMcState == 2) {
        goto block_6;
    }
    goto block_5;
block_3:
    gMcResult = -5;
    goto block_6;
block_5:
    return;
block_6:
    temp_a3 = &(&D_00470838)[D_0047084C];
    temp_a2 = *temp_a3;
    if (!(temp_a2 & 0x8000)) {
        goto block_19;
    }
    var_v1 = func_00289DF0;
    D_0047084C ^= 1;
    if (func_00289DF0 != NULL) {
        goto block_9;
    }
    var_v1 = NULL;
block_9:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
    if (!((&D_00470838)[D_0047084C] & 0x8000)) {
        goto block_12;
    }
    D_0047084C ^= 1;
    goto block_18;
block_12:
    if (amMc_GetInfo(D_0047084C, 0, 0, temp_a3) == 0) {
        goto block_15;
    }
    D_0047084C ^= 1;
    goto block_18;
block_15:
    var_v1_2 = func_00289BE0;
    if (func_00289BE0 != NULL) {
        goto block_17;
    }
    var_v1_2 = NULL;
block_17:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_2;
block_18:
    return;
block_19:
    if (gMcResult == -5) {
        goto block_37;
    }
    if (gMcResult == -2) {
        goto block_35;
    }
    if (gMcResult == -1) {
        goto block_27;
    }
    if (gMcResult == 0) {
        goto block_25;
    }
    goto block_37;
block_25:
    if (temp_a2 == 0) {
        goto block_27;
    }
    if (temp_a2 != 1) {
        goto block_39;
    }
block_27:
    var_v1_3 = 5;
    if (*(&gMcInfo + 4 + (D_0047084C << 6)) != 0) {
        goto block_30;
    }
    goto block_38;
block_30:
    if (amMc_CheckFile(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) != 0) {
        goto block_39;
    }
    var_v1_4 = func_002898F0;
    (&D_00470838)[D_0047084C] = 2;
    if (func_002898F0 != NULL) {
        goto block_33;
    }
    var_v1_4 = NULL;
block_33:
    goto block_41;
block_35:
    var_v1_3 = 5;
    goto block_38;
block_37:
    var_v1_3 = 1;
block_38:
    *temp_a3 = var_v1_3;
block_39:
    var_v1_4 = func_00289DF0;
    D_0047084C ^= 1;
    if (func_00289DF0 != NULL) {
        goto block_41;
    }
    var_v1_4 = NULL;
block_41:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_4;
    return;
}
