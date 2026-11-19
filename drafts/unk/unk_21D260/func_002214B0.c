/* Draft (not built): func_002214B0 at 0x002214B0, size 0x494, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 192 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2FC, original 0x494
 * Original: asm/nonmatchings/unk/unk_21D260/func_002214B0.s */

// src/unk/unk_21D260.c func_002214B0 size diff=192/191
s32 amDraw_SetPacketMode(s32);
s32 func_00139620(s32, s128 *, s32, s32, s32);
extern s32 D_0044F720;
extern s128 D_0044FA50;
extern s32 D_0046FE10;
extern void func_002CFC50(void);
void func_002214B0(u8 *arg0) {
    s128 sp50;
    f32 sp5C;
    s128 sp60;
    f32 sp6C;
    s128 sp70;
    f32 sp7C;
    s128 sp80;
    f32 sp8C;
    s128 sp90;
    f32 sp9C;
    s128 spA0;
    f32 spAC;
    s32 *var_s1;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f22;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = (unsigned char *)(gBtlSys);
    if (*(s16 *)((u8 *)temp_s0 + 0xE42) != -1) {
        goto block_3;
    }
    if (*(s16 *)((u8 *)temp_s0 + 0xE46) != 0) {
        goto block_3;
    }
    var_s1 = &D_0044F720;
    goto block_4;
block_3:
    var_s1 = (int *)(*(&D_0046FE10 + (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 0x10));
block_4:
    if (*(s8 *)((u8 *)gBattle + 0x8975) != 1) {
        goto block_6;
    }
    func_002CFC50();
block_6:
    if (D_0058BB38 != 0) {
        goto block_14;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s2 + 0x20);
    if (temp_f1 < 18000.0f) {
        goto block_13;
    }
    var_f1 = (temp_f1 - 18000.0f) / 8.0f;
    spA0 = D_0044FA50;
    if (!(var_f1 < 0.0f)) {
        goto block_10;
    }
    var_f1 = 0.0f;
block_10:
    if (var_f1 <= 1.0f) {
        goto block_12;
    }
    var_f1 = 1.0f;
block_12:
    spAC *= var_f1;
    func_00139620(0x902, &spA0, -1, 0x44, 0);
block_13:
    return;
block_14:
    temp_f21 = *(f32 *)((u8 *)var_s1 + 8);
    temp_f20 = *(f32 *)((u8 *)var_s1 + 0xC);
    amDraw_SetPacketMode(1);
    temp_v1 = *(s32 *)((u8 *)temp_s2 + 4);
    if (temp_v1 == 1) {
        goto block_16;
    }
    goto block_21;
block_16:
    if (*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) {
        goto block_18;
    }
    sp90 = D_0044FA50;
    sp9C *= 1.0f;
    func_00139620(0x902, &sp90, -1, 0x44, 0);
block_18:
    func_0021D6C0(0, temp_f21, temp_f20);
    func_00221950(temp_s2);
    if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
        goto block_37;
    }
    sp80 = D_0044FA50;
    sp8C *= 1.0f;
    func_00139620(0x902, &sp80, -1, 0x44, 0);
    func_00224480(temp_s2);
    goto block_37;
block_21:
    if (temp_v1 != 0) {
        goto block_24;
    }
    var_f22 = *(f32 *)((u8 *)temp_s2 + 0x1C) / 8.0f;
    goto block_25;
block_24:
    var_f22 = (8.0f - *(f32 *)((u8 *)temp_s2 + 0x1C)) / 8.0f;
block_25:
    if (*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) {
        goto block_31;
    }
    var_f1_2 = var_f22;
    sp70 = D_0044FA50;
    if (!(var_f22 < 0.0f)) {
        goto block_28;
    }
    var_f1_2 = 0.0f;
block_28:
    if (var_f1_2 <= 1.0f) {
        goto block_30;
    }
    var_f1_2 = 1.0f;
block_30:
    sp7C *= var_f1_2;
    func_00139620(0x902, &sp70, -1, 0x44, 0);
block_31:
    func_0021D6C0(0, temp_f21 * var_f22, temp_f20 * var_f22);
    if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
        goto block_37;
    }
    sp60 = D_0044FA50;
    if (!(var_f22 < 0.0f)) {
        goto block_34;
    }
    var_f22 = 0.0f;
block_34:
    if (var_f22 <= 1.0f) {
        goto block_36;
    }
    var_f22 = 1.0f;
block_36:
    sp6C *= var_f22;
    func_00139620(0x902, &sp60, -1, 0x44, 0);
    func_00224480(temp_s2);
block_37:
    temp_f1_2 = *(f32 *)((u8 *)temp_s2 + 0x20);
    if (temp_f1_2 < 18000.0f) {
        goto block_43;
    }
    var_f1_3 = (temp_f1_2 - 18000.0f) / 8.0f;
    sp50 = D_0044FA50;
    if (!(var_f1_3 < 0.0f)) {
        goto block_40;
    }
    var_f1_3 = 0.0f;
block_40:
    if (var_f1_3 <= 1.0f) {
        goto block_42;
    }
    var_f1_3 = 1.0f;
block_42:
    sp5C *= var_f1_3;
    func_00139620(0x902, &sp50, -1, 0x44, 0);
block_43:
    amDraw_SetPacketMode(0);
    return;
}
