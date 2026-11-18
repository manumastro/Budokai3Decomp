/* Draft (not built): func_0021F0E0 at 0x0021F0E0, size 0x2C0, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1CC, original 0x2C0
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021F0E0.s */

// src/unk/unk_21D260.c func_0021F0E0 size diff=115/115
s32 func_00139620(s32, s128 *, s32, s32, s32);
extern f32 D_0044F768;
extern s128 D_0044FA50;
extern s32 D_0058BB40;
extern void func_002CFC50(void);
void func_0021F0E0(u8 *arg0) {
    s128 sp40;
    f32 sp4C;
    s128 sp50;
    f32 sp5C;
    s128 sp60;
    f32 sp6C;
    s128 sp70;
    f32 sp7C;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 var_f1;
    f32 var_f1_2;
    s16 temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_f20 = D_0044F768;
    temp_s1 = (u8 *)(gBtlSys);
    if (*(s8 *)((u8 *)gBattle + 0x8975) != 1) {
        goto block_2;
    }
    func_002CFC50();
block_2:
    if (D_0058BB38 == 0) {
        goto block_5;
    }
    if (D_0058BB40 == 0) {
        goto block_12;
    }
block_5:
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x20);
    if (temp_f1 < 18000.0f) {
        goto block_11;
    }
    var_f1 = (temp_f1 - 18000.0f) / 8.0f;
    sp70 = D_0044FA50;
    if (!(var_f1 < 0.0f)) {
        goto block_8;
    }
    var_f1 = 0.0f;
block_8:
    if (var_f1 <= 1.0f) {
        goto block_10;
    }
    var_f1 = 1.0f;
block_10:
    sp7C *= var_f1;
    func_00139620(0x902, &sp70, -1, 0x44, 0);
block_11:
    return;
block_12:
    temp_a0 = *(s16 *)((u8 *)temp_s0 + 8);
    if (temp_a0 == 0xA) {
        goto block_14;
    }
    if (temp_a0 != 9) {
        goto block_17;
    }
block_14:
    func_0021D6C0(0, temp_f20, 0x43AA0000);
    func_0021F740(temp_s0);
    if (*(s32 *)((u8 *)temp_s1 + 0xE30) & 2) {
        goto block_16;
    }
    sp60 = D_0044FA50;
    sp6C *= 1.0f;
    func_00139620(0x902, &sp60, -1, 0x44, 0);
block_16:
    func_0021DCF0(temp_s0);
block_17:
    if (*(s16 *)((u8 *)temp_s0 + 8) != 8) {
        goto block_21;
    }
    if (*(s32 *)((u8 *)temp_s1 + 0xE30) & 2) {
        goto block_20;
    }
    sp50 = D_0044FA50;
    sp5C *= 1.0f;
    func_00139620(0x902, &sp50, -1, 0x44, 0);
block_20:
    func_0021E740(temp_s0);
block_21:
    temp_f1_2 = *(f32 *)((u8 *)temp_s0 + 0x20);
    if (temp_f1_2 < 18000.0f) {
        goto block_27;
    }
    var_f1_2 = (temp_f1_2 - 18000.0f) / 8.0f;
    sp40 = D_0044FA50;
    if (!(var_f1_2 < 0.0f)) {
        goto block_24;
    }
    var_f1_2 = 0.0f;
block_24:
    if (var_f1_2 <= 1.0f) {
        goto block_26;
    }
    var_f1_2 = 1.0f;
block_26:
    sp4C *= var_f1_2;
    func_00139620(0x902, &sp40, -1, 0x44, 0);
block_27:
    return;
}
