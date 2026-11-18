/* Draft (not built): func_001AE980 at 0x001AE980, size 0x264, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 79 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x264
 * Original: asm/nonmatchings/battle/btl_main/func_001AE980.s */

// src/battle/btl_main.c func_001AE980 size diff=79/124
void func_001AE980(void) {
    s32 sp30;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp80;
    s32 sp90;
    s32 spA0;
    s32 spA4;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC4;
    f32 spCC;
    f32 temp_f1;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = (u8 *)(gBattle);
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x890C) / 180.0f;
    if (M2C_BITWISE(s32, temp_f1) != M2C_BITWISE(s32, (*(f32 *)((u8 *)temp_s1 + 0x8910) / 180.0f))) {
        temp_s0 = *(u8 **)((u8 *)((M2C_BITWISE(s32, temp_f1) * 4) + temp_s1) + 0x8934);
        func_001C8020(1, temp_s0);
        if (*(s16 *)((u8 *)temp_s0 + 0x1ABC) >= 0) {
            memset(&sp80, 0, 0x50);
            spB4 = BtlChara_GetF270C(*(s32 *)((u8 *)temp_s0 + 0x1350));
            spB8 = (s32) *(s16 *)((u8 *)temp_s0 + 0x1ABC);
            spA0 = 1;
            spA4 = 7;
            spB0 = 8;
            spC4 = 0x3F000000;
            spBC = 0;
            spCC = 360.0f * ((f32) *(s32 *)((u8 *)temp_s0 + 0x17A4) / 65536.0f);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_001A8770(1, &sp80);
        } else {
            memset(&sp30, 0, 0x50);
            sp54 = 0;
            sp50 = 1;
            sp58 = *(s32 *)((u8 *)temp_s0 + 0x1350);
            func_001A8770(1, &sp30);
        }
    }
    *(f32 *)((u8 *)gBattle + 0x8910) = (f32) *(f32 *)((u8 *)gBattle + 0x890C);
    *(f32 *)((u8 *)gBattle + 0x890C) = (f32) (*(f32 *)((u8 *)gBattle + 0x890C) + *(f32 *)((u8 *)gBattle + 0x88F0));
    if (!(*(f32 *)((u8 *)gBattle + 0x890C) <= 1e8f)) {
        *(f32 *)((u8 *)gBattle + 0x8910) = 0.0f;
        *(f32 *)((u8 *)gBattle + 0x890C) = (f32) *(f32 *)((u8 *)gBattle + 0x88F0);
    }
    if ((func_001AC110() != 0) || !(*(f32 *)((u8 *)temp_s1 + 0x890C) < (180.0f * (f32) *(s32 *)((u8 *)temp_s1 + 0x88D8)))) {
        D_004682EC[0]();
        *(s32 *)((u8 *)gBattle + 0x8920) = 0x3F800000;
        *(s32 *)((u8 *)gBattle + 0x8924) = 0x3CCCCCCD;
    }
}
