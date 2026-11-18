/* Draft (not built): func_0021F3A0 at 0x0021F3A0, size 0x39C, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 155 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x258, original 0x39C
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021F3A0.s */

// src/unk/unk_21D260.c func_0021F3A0 size diff=155/150
s32 func_00139620(s32, s128 *, s32, s32, s32);
extern s32 D_0044F760;
extern s128 D_0044FA50;
extern void func_002CFC50(void);
void func_0021F3A0(u8 *arg0) {
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
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f22;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s2 = (u8 *)(gBtlSys);
    if (*(s8 *)((u8 *)gBattle + 0x8975) != 1) {
        goto block_2;
    }
    func_002CFC50();
block_2:
    if (D_0058BB38 != 0) {
        goto block_10;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x20);
    if (temp_f1 < 18000.0f) {
        goto block_9;
    }
    var_f1 = (temp_f1 - 18000.0f) / 8.0f;
    sp90 = D_0044FA50;
    if (!(var_f1 < 0.0f)) {
        goto block_6;
    }
    var_f1 = 0.0f;
block_6:
    if (var_f1 <= 1.0f) {
        goto block_8;
    }
    var_f1 = 1.0f;
block_8:
    sp9C *= var_f1;
    func_00139620(0x902, &sp90, -1, 0x44, 0);
block_9:
    return;
block_10:
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 4);
    temp_f21 = *(f32 *)((u8 *)(&D_0044F760) + 8);
    if (temp_v1 == 1) {
        goto block_12;
    }
    goto block_16;
block_12:
    if (*(s32 *)((u8 *)temp_s2 + 0xE30) & 2) {
        goto block_14;
    }
    sp80 = D_0044FA50;
    sp8C *= 1.0f;
    func_00139620(0x902, &sp80, -1, 0x44, 0);
block_14:
    func_0021D6C0(0, temp_f21, 340.0f);
    func_0021F740(temp_s0);
    if (!(*(s32 *)((u8 *)temp_s2 + 0xE30) & 2)) {
        goto block_27;
    }
    sp70 = D_0044FA50;
    sp7C *= 1.0f;
    func_00139620(0x902, &sp70, -1, 0x44, 0);
    func_00224480(temp_s0);
    goto block_27;
block_16:
    if (temp_v1 != 0) {
        goto block_19;
    }
    var_f22 = *(f32 *)((u8 *)temp_s0 + 0x1C) / 8.0f;
    goto block_20;
block_19:
    var_f22 = (8.0f - *(f32 *)((u8 *)temp_s0 + 0x1C)) / 8.0f;
block_20:
    if (*(s32 *)((u8 *)temp_s2 + 0xE30) & 2) {
        goto block_26;
    }
    var_f1_2 = var_f22;
    sp60 = D_0044FA50;
    if (!(var_f22 < 0.0f)) {
        goto block_23;
    }
    var_f1_2 = 0.0f;
block_23:
    if (var_f1_2 <= 1.0f) {
        goto block_25;
    }
    var_f1_2 = 1.0f;
block_25:
    sp6C *= var_f1_2;
    func_00139620(0x902, &sp60, -1, 0x44, 0);
block_26:
    func_0021D6C0(0, temp_f21 * var_f22, 340.0f * var_f22);
block_27:
    temp_f1_2 = *(f32 *)((u8 *)temp_s0 + 0x20);
    if (temp_f1_2 < 18000.0f) {
        goto block_33;
    }
    var_f1_3 = (temp_f1_2 - 18000.0f) / 8.0f;
    sp50 = D_0044FA50;
    if (!(var_f1_3 < 0.0f)) {
        goto block_30;
    }
    var_f1_3 = 0.0f;
block_30:
    if (var_f1_3 <= 1.0f) {
        goto block_32;
    }
    var_f1_3 = 1.0f;
block_32:
    sp5C *= var_f1_3;
    func_00139620(0x902, &sp50, -1, 0x44, 0);
block_33:
    return;
}
