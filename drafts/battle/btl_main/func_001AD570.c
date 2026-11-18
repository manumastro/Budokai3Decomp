/* Draft (not built): func_001AD570 at 0x001AD570, size 0x610, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand @ 1086: + 0x8904) >= 0) || ((*(s16 *)((u8 *)temp_s0 + 0x7E2) == 5) && (D_004B4B59 == 3))) {
 * Original: asm/nonmatchings/battle/btl_main/func_001AD570.s */

// src/battle/btl_main.c func_001AD570 cerr diff=-1/0
extern void func_001A8770(s32 a, void *b);
extern s32 func_001C8020(s32, void *);
extern s32 func_00218CD0(s32, s32);
extern s8 D_004B4B59[];
void func_001AD570(void) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp60;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spE4;
    s32 spF0;
    s32 spF4;
    s32 spF8;
    f32 spFC;
    f32 sp104;
    f32 sp10C;
    s32 sp110;
    s32 sp114;
    s32 sp118;
    s32 sp11C;
    s32 sp120;
    s32 sp124;
    s32 sp128;
    s32 sp12C;
    s32 sp130;
    s32 sp134;
    s32 sp138;
    s32 sp150;
    s32 sp160;
    s32 sp170;
    s32 sp180;
    s32 sp184;
    s32 sp190;
    s32 sp194;
    s32 sp198;
    s32 sp19C;
    s32 sp1A4;
    f32 sp1AC;
    s32 sp1B0;
    s32 sp1B4;
    s32 sp1B8;
    s32 sp1BC;
    s32 sp1C0;
    s32 sp1C4;
    s32 sp1C8;
    s32 sp1CC;
    s32 sp1D0;
    s32 sp1D4;
    s32 sp1D8;
    s32 sp1F0;
    s32 sp200;
    s16 temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_v1;

    temp_s0 = (u8 *)(gBattle);
    *(s32 *)((u8 *)temp_s0 + 0x88F8) = 6;
    *(s32 *)((u8 *)temp_s0 + 0x890C) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8910) = 0;
    func_001C8020(3, 0);
    func_00237000(7, NULL);
    if (D_00470574 != 0) {
        func_001E9D10();
    }
    sp200 = 0;
    A2d_CallHandler(0x28, &sp200);
    A2d_CallHandler(0x29, &sp200);
    A2d_CallHandler(0x2B, &sp200);
    temp_a0 = *(s16 *)((u8 *)temp_s0 + 0x7E2);
    switch (temp_a0) {                              /* irregular */
    case 0:
        A2d_CallHandler(0x1E, NULL);
        var_v1 = temp_s0 + 0x830;
        if (*(s8 *)((u8 *)temp_s0 + 0x2845) != 0) {
            var_v1 = *(u8 **)((u8 *)var_v1 + 0x1358);
        }
        *(u8 **)((u8 *)temp_s0 + 0x8934) = (u8 *) *(u8 **)((u8 *)var_v1 + 0x1354);
        *(u8 **)((u8 *)temp_s0 + 0x8938) = var_v1;
        memset(&sp1B0, 0, 0x50);
        sp1D4 = 5;
        sp1D0 = 1;
        sp1C8 = 0x41A00000;
        sp1D8 = 1;
        sp1B4 = 0x425C0000;
        sp1CC = 0x3F800000;
        sp1B8 = 0x42340000;
        sp1BC = 0x3F800000;
        sp1F0 = 0x44480000;
        sp1C0 = 0;
        sp1C4 = 0;
        sp1B0 = 0;
        func_001A8770(1, &sp1B0);
        func_00218CD0(8, -1);
        return;
    case 1:
        if (*(s32 *)((u8 *)temp_s0 + 0x8900) >= 0) {
            *(s8 *)((u8 *)temp_s0 + 0x8AAE) = 0;
            A2d_CallHandler(*(s32 *)((u8 *)temp_s0 + 0x8900) + 0x1C, NULL);
            temp_v1 = temp_s0 + (*(s32 *)((u8 *)temp_s0 + 0x8900) * 0x2020);
            *(u8 **)((u8 *)temp_s0 + 0x8934) = (u8 *) (temp_v1 + 0x830);
            *(u8 **)((u8 *)temp_s0 + 0x8938) = (u8 *) *(u8 **)((u8 *)temp_v1 + 0x1B84);
            if (*(s16 *)((u8 *)temp_v1 + 0x22EC) >= 0) {
                temp_s0_2 = *(u8 **)((u8 *)temp_s0 + 0x8934);
                memset(&sp160, 0, 0x50);
                sp194 = BtlChara_GetF270C(*(s32 *)((u8 *)temp_s0_2 + 0x1350));
                sp198 = (s32) *(s16 *)((u8 *)temp_s0_2 + 0x1ABC);
                sp180 = 1;
                sp184 = 7;
                sp190 = 8;
                sp1A4 = 0x3F000000;
                sp19C = 0;
                sp1AC = 360.0f * ((f32) *(s32 *)((u8 *)temp_s0_2 + 0x17A4) / 65536.0f);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                func_001A8770(1, &sp160);
            } else {
                memset(&sp110, 0, 0x50);
                sp134 = 5;
                sp130 = 1;
                sp128 = 0x425C0000;
                sp12C = 0x3F800000;
                sp118 = 0x41000000;
                sp11C = 0x3F800000;
                sp150 = 0x43700000;
                sp138 = 0;
                sp120 = 0;
                sp124 = 0;
                sp110 = 0;
                sp114 = 0;
                func_001A8770(1, &sp110);
            }
            func_00218CD0(7, -1);
            return;
        }
        *(s8 *)((u8 *)temp_s0 + 0x8AAE) = 1;
        A2d_CallHandler(0x1F, NULL);
        func_00218CD0(9, -1);
        return;
    case 5:
    case 2:
        if (*(s32 *)((u8 *)temp_s0 + 0x8900) < 0) {
            *(s8 *)((u8 *)temp_s0 + 0x8AAE) = 1;
            A2d_CallHandler(0x1F, NULL);
            func_00218CD0(9, -1);
            return;
        }
        *(s8 *)((u8 *)temp_s0 + 0x8AAE) = 0;
        if ((*(s32 *)((u8 *)temp_s0 + 0x8904) >= 0) || ((*(s16 *)((u8 *)temp_s0 + 0x7E2) == 5) && (D_004B4B59 == 3))) {
            A2d_CallHandler(*(s32 *)((u8 *)temp_s0 + 0x8900) + 0x1C, NULL);
            temp_v1_2 = temp_s0 + (*(s32 *)((u8 *)temp_s0 + 0x8900) * 0x2020);
            *(u8 **)((u8 *)temp_s0 + 0x8934) = (u8 *) (temp_v1_2 + 0x830);
            *(u8 **)((u8 *)temp_s0 + 0x8938) = (u8 *) *(u8 **)((u8 *)temp_v1_2 + 0x1B84);
            if (*(s16 *)((u8 *)temp_v1_2 + 0x22EC) >= 0) {
                temp_s0_3 = *(u8 **)((u8 *)temp_s0 + 0x8934);
                memset(&spC0, 0, 0x50);
                spF4 = BtlChara_GetF270C(*(s32 *)((u8 *)temp_s0_3 + 0x1350));
                spE0 = 1;
                spE4 = 7;
                spF0 = 8;
                sp104 = 0.5f;
                spF8 = (s32) ((s64) ((s64) *(s16 *)((u8 *)temp_s0_3 + 0x1ABC) << 0x30) >> 0x30);
                spFC = 0.0f;
                sp10C = 360.0f * ((f32) *(s32 *)((u8 *)temp_s0_3 + 0x17A4) / 65536.0f);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
                func_001A8770(1, &spC0);
            } else {
                memset(&sp70, 0, 0x50);
                sp94 = 5;
                sp90 = 1;
                sp88 = 0x425C0000;
                sp8C = 0x3F800000;
                sp78 = 0x41000000;
                sp7C = 0x3F800000;
                spB0 = 0x43700000;
                sp98 = 0;
                sp80 = 0;
                sp84 = 0;
                sp70 = 0;
                sp74 = 0;
                func_001A8770(1, &sp70);
            }
            func_00218CD0(7, -1);
            return;
        }
        A2d_CallHandler(0x1E, NULL);
        temp_v0 = temp_s0 + (*(s32 *)((u8 *)temp_s0 + 0x8900) * 0x2020);
        *(u8 **)((u8 *)temp_s0 + 0x8934) = (u8 *) (temp_v0 + 0x830);
        *(u8 **)((u8 *)temp_s0 + 0x8938) = (u8 *) *(u8 **)((u8 *)temp_v0 + 0x1B84);
        memset(&sp20, 0, 0x50);
        sp44 = 5;
        sp40 = 1;
        sp38 = 0x41A00000;
        sp48 = 1;
        sp24 = 0x425C0000;
        sp3C = 0x3F800000;
        sp28 = 0x42340000;
        sp2C = 0x3F800000;
        sp60 = 0x44480000;
        sp30 = 0;
        sp34 = 0;
        sp20 = 0;
        func_001A8770(1, &sp20);
        func_00218CD0(8, -1);
        return;
    }
}
