/* Draft (not built): func_002BFFD0 at 0x002BFFD0, size 0x244, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); onversion from 'unsigned char *' to 'int' @ 799: amModel_SetCurrent(*(u8 **)((u8 *)arg0 + 4), 0xFE00, temp_a2, temp_a3);
 * Original: asm/nonmatchings/story/str_status/func_002BFFD0.s */

// src/story/str_status.c func_002BFFD0 cerr diff=-1/0
s32 func_00136E80(s32, f32 *, s64, s32);
s32 func_001484A0(s32);
extern s128 D_00456330;
extern s128 D_00456340;
extern s128 D_00456350;
extern s128 D_00456360;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_002BFFD0(u8 *arg0, s32 arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    s128 sp50;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f2;
    s32 temp_s1;
    s32 var_v1;
    s64 temp_s0;
    u8 *temp_a2;
    u8 *temp_a3;

    sp70 = (s128) D_00456330;
    sp60 = (s128) D_00456340;
    sp50 = D_00456350;
    sp40 = (s128) D_00456360;
    if (arg1 != 0) {
        var_v1 = *(s32 *)((u8 *)arg0 + 0x10);
    } else {
        var_v1 = *(s32 *)((u8 *)arg0 + 0x14);
    }
    temp_s0 = (s64) ((s64) var_v1 << 0x30) >> 0x30;
    if (temp_s0 != -1) {
        temp_a3 = *(u8 **)((u8 *)arg0 + 4);
        temp_a2 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((temp_s0 - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
        sp70 = *(f32 *)((u8 *)arg0 + 0x20) - ((f32) *(s16 *)((u8 *)temp_a2 + 0x10) / 2.0f);
        sp60 = *(f32 *)((u8 *)arg0 + 0x20) + ((f32) *(s16 *)((u8 *)temp_a2 + 0x10) / 2.0f);
        sp74 = *(f32 *)((u8 *)arg0 + 0x24) - ((f32) *(s16 *)((u8 *)temp_a2 + 0x12) / 2.0f);
        sp64 = *(f32 *)((u8 *)arg0 + 0x24) + ((f32) *(s16 *)((u8 *)temp_a2 + 0x12) / 2.0f);
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x28) - (f32) arg1;
        sp68 = temp_f0;
        sp78 = temp_f0;
        sp40 = (f32) *(s16 *)((u8 *)temp_a2 + 0x10) - 0.5f;
        sp44 = (f32) *(s16 *)((u8 *)temp_a2 + 0x12) - 0.5f;
        sp30 = *(f32 *)((u8 *)arg0 + 0x30);
        sp34 = *(f32 *)((u8 *)arg0 + 0x34);
        sp38 = *(f32 *)((u8 *)arg0 + 0x38);
        if (arg1 != 0) {
            var_f2 = 1.0f - *(f32 *)((u8 *)arg0 + 0x18);
        } else {
            var_f2 = *(f32 *)((u8 *)arg0 + 0x18);
        }
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x3C) * var_f2;
        sp3C = temp_f1;
        if (!(temp_f1 <= 0.0f)) {
            amModel_SetCurrent(*(u8 **)((u8 *)arg0 + 4), 0xFE00, temp_a2, temp_a3);
            temp_s1 = func_001484A0(0);
            func_00136E80(0x40000924, &sp30, temp_s0, 0x44);
            func_00137560(&sp70, &sp50);
            func_00137560(&sp60, &sp40);
            amDraw_FlushPacket();
            func_001484A0(temp_s1);
        }
    }
}
