/* Draft (not built): func_00221110 at 0x00221110, size 0x398, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 162: (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 4));
 * Original: asm/nonmatchings/unk/unk_21D260/func_00221110.s */

// src/unk/unk_21D260.c func_00221110 cerr diff=-1/0
s32 amDraw_SetPacketMode(s32);
s32 func_00139620(s32, s128 *, s32, s32, s32);
extern s32 D_0044F720;
extern s32 D_0044F810;
extern s128 D_0044FA50;
extern s32 D_0046FE10;
extern s32 D_0046FE18;
extern s32 D_0058BB40;
extern void func_002CFC50(void);
void func_00221110(u8 *arg0) {
    s128 sp50;
    f32 sp5C;
    s128 sp60;
    f32 sp6C;
    s128 sp70;
    f32 sp7C;
    s128 sp80;
    f32 sp8C;
    s32 *var_a2;
    s32 *var_s1;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f1_2;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = (u8 *)(gBtlSys);
    if ((*(s16 *)((u8 *)temp_s0 + 0xE42) == -1) && (*(s16 *)((u8 *)temp_s0 + 0xE46) == 0)) {
        var_a2 = &D_0044F720;
    } else {
        var_a2 = (s32 *)(*(&D_0046FE10 + (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 0x10));
    }
    if ((*(s16 *)((u8 *)temp_s0 + 0xE42) == -1) && (*(s16 *)((u8 *)temp_s0 + 0xE46) == 0)) {
        var_s1 = &D_0044F810;
    } else {
        var_s1 = *(*(&D_0046FE18 + (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 4));
    }
    temp_f20 = *(f32 *)((u8 *)var_a2 + 0xC);
    temp_f21 = *(f32 *)((u8 *)var_a2 + 8);
    if (*(s8 *)((u8 *)gBattle + 0x8975) == 1) {
        func_002CFC50();
    }
    if ((D_0058BB38 == 0) || (D_0058BB40 != 0)) {
        temp_f1 = *(f32 *)((u8 *)temp_s2 + 0x20);
        if (!(temp_f1 < 18000.0f)) {
            var_f1 = (temp_f1 - 18000.0f) / 8.0f;
            sp80 = D_0044FA50;
            if (var_f1 < 0.0f) {
                var_f1 = 0.0f;
            }
            if (!(var_f1 <= 1.0f)) {
                var_f1 = 1.0f;
            }
            sp8C *= var_f1;
            func_00139620(0x902, &sp80, -1, 0x44, 0);
        }
        return;
    }
    amDraw_SetPacketMode(1);
    if (*(s32 *)((u8 *)((*(s16 *)((u8 *)temp_s2 + 8) * 0xC) + var_s1) + 4) == 1) {
        if (*(s16 *)((u8 *)temp_s0 + 0xE42) == -1) {
            goto block_22;
        }
        if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
            sp60 = D_0044FA50;
            sp6C *= 1.0f;
            func_00139620(0x902, &sp60, -1, 0x44, 0);
        }
        func_0021E740(temp_s2);
    } else {
block_22:
        func_0021D6C0(0, temp_f21, temp_f20);
        func_00221950(temp_s2);
        if (!(*(s32 *)((u8 *)temp_s0 + 0xE30) & 2)) {
            sp70 = D_0044FA50;
            sp7C *= 1.0f;
            func_00139620(0x902, &sp70, -1, 0x44, 0);
        }
        func_0021DCF0(temp_s2);
    }
    temp_f1_2 = *(f32 *)((u8 *)temp_s2 + 0x20);
    if (!(temp_f1_2 < 18000.0f)) {
        var_f1_2 = (temp_f1_2 - 18000.0f) / 8.0f;
        sp50 = D_0044FA50;
        if (var_f1_2 < 0.0f) {
            var_f1_2 = 0.0f;
        }
        if (!(var_f1_2 <= 1.0f)) {
            var_f1_2 = 1.0f;
        }
        sp5C *= var_f1_2;
        func_00139620(0x902, &sp50, -1, 0x44, 0);
    }
    amDraw_SetPacketMode(0);
}
