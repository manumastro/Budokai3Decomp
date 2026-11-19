/* Draft (not built): func_001AEBF0 at 0x001AEBF0, size 0x1BC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x154, original 0x1BC
 * Original: asm/nonmatchings/battle/btl_main/func_001AEBF0.s */

// src/battle/btl_main.c func_001AEBF0 size diff=68/85
void func_001AEBF0(void) {
    u8 sp[0x400];
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
    s32 spD0;
    s32 spE0;
    BattleWork *temp_s1;
    Fighter *temp_s0;
    s32 temp_a0;
    s32 var_a2;
    u8 *temp_v0;

    var_a2 = 0;
    temp_s1 = gBattle;
    *(s32 *)((u8 *)temp_s1 + 0x88F8) = 2;
    *(s32 *)((u8 *)temp_s1 + 0x890C) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x8910) = 0;
    temp_s1->unk8954[0x15A] = 0;
    spE0 = 0;
loop_2:
    if (var_a2 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        temp_a0 = 1 << var_a2;
        temp_v0 = (var_a2 * 2) + sp;
        var_a2 += 1;
        spE0 |= temp_a0;
        *(s16 *)((u8 *)temp_v0 + 0xE8) = 0;
        goto loop_2;
    }
    func_001C8020(0, &spE0);
    func_001C8020(1, NULL);
    func_001C8020(1, temp_s1->fighter[0]);
    temp_s0 = temp_s1->fighter[0];
    if (*(s16 *)((u8 *)temp_s0 + 0x1ABC) >= 0) {
        memset(&sp80, 0, 0x50);
        spB4 = BtlChara_GetF270C(temp_s0->unk1350);
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
        sp58 = temp_s0->unk1350;
        func_001A8770(1, &sp30);
    }
    spD0 = 0;
    A2d_CallHandler(0x27, &spD0);
    func_00219270((s32) *(s16 *)((u8 *)temp_s1 + 0x7E6));
}
