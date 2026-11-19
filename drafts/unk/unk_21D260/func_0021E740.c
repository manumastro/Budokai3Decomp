/* Draft (not built): func_0021E740 at 0x0021E740, size 0x99C, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'void *' mwccps2.exe Compiler: @ 221: **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x44)), &sp100, (void *)((f32)(s32)(0)));
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021E740.s */

// src/unk/unk_21D260.c func_0021E740 cerr diff=-1/0
s32 BtlChara_Reset(s64, s16);
s32 amDraw_SetPacketMode(s32);
s32 func_00139620(s32, s128 *, s32, s32, s32);
s32 func_00146F10(s32 *, s32 *, s32);
s32 func_0021C360(s64);
s32 func_0021C460(s64);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0023F3F0(s32 *, s64, s32, s32);
s32 func_002538E0(s32, s32 *);
s32 func_00253BA0(s32, s32 *);
s32 func_00253E60(s32, s32 *);
s32 func_00253FC0(s32, s32 *);
s32 memset(s32 *, s32, s32);
extern s128 D_0044FA50;
void func_0021E740(s8 *arg0) {
    s32 sp118;
    s128 sp80;
    f32 sp8C;
    s128 sp90;
    f32 sp9C;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    f32 spC4;
    s32 spC8;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    s32 spE8;
    s32 spEC;
    s32 spF0;
    s16 spF4;
    s16 spF6;
    s32 sp100;
    f32 sp120;
    f32 sp124;
    f32 sp130;
    f32 sp134;
    f32 sp13C;
    s32 sp140;
    s32 sp144;
    f32 sp148;
    f32 sp14C;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f21;
    s16 var_v1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s5;
    s64 temp_s2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_s3;

    temp_s3 = (unsigned char *)(gBtlSys);
    var_v1 = *(s16 *)((u8 *)temp_s3 + 0xE42);
    if (var_v1 != -1) {

    } else {
        var_v1 = *(s16 *)((u8 *)temp_s3 + 0xE40);
    }
    temp_s2 = (s64) ((s64) var_v1 << 0x30) >> 0x30;
    func_0021C360(temp_s2);
    amDraw_SetPacketMode(1);
    temp_v1 = *(s32 *)((u8 *)arg0 + 4);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 4:                                         /* switch 1 */
        temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xED8);
        D_00470704 = (int)(temp_a0);
        D_0047070C = 0x04040000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04040000);
        D_00470238 = 0;
        func_0021D6C0(0, 550.0f, 410.0f);
        amDraw_SetPacketMode(0);
        func_00228430(0);
        func_0022C1D0(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x14), 1, *(f32 *)((u8 *)arg0 + 0x1C));
        func_00228410();
        amDraw_SetPacketMode(1);
        func_00228430(0);
        func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x44)), &sp100, (void *)((f32)(s32)(0)));
        func_00228410();
        var_s0 = 0;
loop_10:
        if (var_s0 < 6) {
            func_0022C6B0(&sp100);
            var_s0 += 1;
            sp124 += 56.0f;
            goto loop_10;
        }
        var_s0_2 = 2;
        if (func_0021C460(temp_s2) == 0) {

        } else {
            var_s0_2 = 3;
        }
        func_00228430(0);
        func_0022B900((s32)(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C) + (var_s0_2 * 4))), &sp100, (void *)((f32)(s32)(0)));
        func_00228410();
        sp124 -= (205.0f + sp134) - 5.0f;
        func_0022C6B0(&sp100);
        if (*(s32 *)((u8 *)arg0 + 0x18) == 0) {
            memset(&spC0, 0, 0x40);
            spC0 = 0x42840000;
            spF4 = 0;
            spC4 = 76.0f;
            spF6 = 0;
            spC8 = 0;
            spCC = 0x3F800000;
            spF0 = 8;
            spD0 = 0x3F800000;
            spD4 = 0x3F800000;
            spD8 = 0x3F800000;
            spDC = 0x3F800000;
            func_00253FC0(*(s32 *)((u8 *)((temp_s2 * 4) + temp_s3) + 0xEC0), &spC0);
        } else {
            var_s1 = 0;
            var_s0_3 = 0;
loop_38:
            if ((var_s1 < *(s32 *)((u8 *)arg0 + 0x18)) && (var_s1 < 6)) {
                amDraw_SetPacketMode(0);
                amDraw_SetPacketMode(1);
                temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x18);
                temp_f20 = 75.0f + (56.0f * (f32) var_s1);
                if (temp_v1_2 < 7) {
                    var_s5 = var_s0_3;
                } else {
                    var_s5 = *(s32 *)((u8 *)arg0 + 0x14) + var_s0_3;
                    if (var_s5 >= temp_v1_2) {
                        var_s5 -= temp_v1_2;
                    }
                }
                memset(&spC0, 0, 0x40);
                func_0023F3F0(&spC0, temp_s2, *(s32 *)((u8 *)((temp_s2 * 4) + temp_s3) + 0xEC0), var_s5);
                if (*(s16 *)((u8 *)arg0 + 0xA) == var_s1) {
                    spD0 = 0x3F800000;
                    spD4 = 0x3F19999A;
                    spDC = 0x3F800000;
                    spD8 = 0x3E4CCCCD;
                    temp_a0_2 = *(u8 **)((u8 *)temp_s3 + 0xED8);
                    D_00470704 = (int)(temp_a0_2);
                    D_0047070C = 0x04040000;
                    D_00470708 = 0;
                    amModel_SetCurrent((s32)(temp_a0_2), 0x04040000);
                    D_00470238 = 0;
                    func_00228430(0);
                    func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x6C)), &sp100, (void *)((f32)(s32)(0)));
                    func_00228410();
                    sp124 += 56.0f * (f32) var_s1;
                    func_0022C6B0(&sp100);
                } else {
                    spD0 = 0x3F800000;
                    spD4 = 0x3F800000;
                    spD8 = 0x3F800000;
                    spDC = 0x3F800000;
                }
                temp_v0 = BtlChara_Reset(temp_s2, spF4);
                switch (temp_v0) {                  /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    break;
                case 1:                             /* switch 2 */
                    func_00146F10(&spB0, &spD0, 0x3F000000);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    /* fallthrough */
                default:                            /* switch 2 */
                    spC0 = 0x42840000;
                    spF0 = 8;
                    spC4 = 76.0f + (56.0f * (f32) var_s0_3);
                    func_00253FC0(*(s32 *)((u8 *)((temp_s2 * 4) + temp_s3) + 0xEC0), &spC0);
                    spD0 = 0x3F800000;
                    spD4 = 0x3F800000;
                    spD8 = 0x3F800000;
                    spDC = 0x3F800000;
                    if (temp_v0 == 1) {
                        func_00146F10(&spA0, &spD0, 0x3F000000);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    }
                    spC0 = 0x42600000;
                    spF0 = 8;
                    spC4 += 26.0f;
                    func_00253E60(*(s32 *)((u8 *)((temp_s2 * 4) + temp_s3) + 0xEC0), &spC0);
                    spC0 = 0x44020000;
                    spC4 = temp_f20;
                    spD0 = 0x3F800000;
                    spF0 = 9;
                    spD4 = 0x3F800000;
                    spD8 = 0x3F800000;
                    spDC = 0x3F800000;
                    func_00253BA0(*(s32 *)((u8 *)((temp_s2 * 4) + temp_s3) + 0xEC0), &spC0);
                    spC0 = 0x42600000;
                    spC4 = temp_f20;
                    spC8 = 0;
                    spCC = 0x3F800000;
                    spD0 = 0x3F800000;
                    spF0 = 0x6A;
                    spD4 = 0x3F800000;
                    spD8 = 0x3F800000;
                    spDC = 0x3F800000;
                    spE8 = 0x3F2E147B;
                    spEC = 0x3F2E147B;
                    func_002538E0(*(s32 *)((u8 *)((temp_s2 * 4) + temp_s3) + 0xEC0), &spC0);
                    var_s1 += 1;
                    break;
                }
                var_s0_3 += 1;
                goto loop_38;
            }
        }
        amDraw_SetPacketMode(0);
        amDraw_SetPacketMode(1);
        func_0021E420(arg0);
        func_0021E250((char *)(arg0));
        if (*(s16 *)((u8 *)gBattle + 0x7E2) == 3) {
            temp_a0_3 = *(u8 **)((u8 *)temp_s3 + 0xED8);
            D_00470704 = (int)(temp_a0_3);
            D_0047070C = 0x04040000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_3), 0x04040000);
            D_00470238 = 0;
            func_00228430(0);
            func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x58)), &sp100, (void *)((f32)(s32)(0)));
            func_00228410();
            temp_a3 = *(u8 **)((u8 *)temp_s3 + 0xED8);
            temp_a1 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((sp118 - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
            sp140 = 0x3F000000;
            sp144 = 0x3F000000;
            sp148 = (f32) *(s16 *)((u8 *)temp_a1 + 0x10) - 0.5f;
            sp14C = (f32) *(s16 *)((u8 *)temp_a1 + 0x12) - 0.5f;
            sp130 = (f32) -*(s16 *)((u8 *)temp_a1 + 0x10);
            sp134 = (f32) -*(s16 *)((u8 *)temp_a1 + 0x12) / 2.0f;
            sp13C = (f32) *(s16 *)((u8 *)temp_a1 + 0x12) / 2.0f;
            temp_f20_2 = (f32) *(s16 *)((u8 *)temp_a1 + 0x10);
            func_0022C6B0(&sp100);
            func_00228430(0);
            func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x5C)), &sp100, (void *)((f32)(s32)(0)));
            func_00228410();
            temp_a3_2 = *(u8 **)((u8 *)temp_s3 + 0xED8);
            temp_a1_2 = temp_a3_2 + *(*(s32 *)((u8 *)temp_a3_2 + 0x14) + temp_a3_2 + ((sp118 - *(s32 *)((u8 *)temp_a3_2 + 0x18)) * 4));
            sp140 = 0x3F000000;
            sp144 = 0x3F000000;
            sp148 = (f32) *(s16 *)((u8 *)temp_a1_2 + 0x10) - 0.5f;
            sp14C = (f32) *(s16 *)((u8 *)temp_a1_2 + 0x12) - 0.5f;
            sp130 = (f32) -*(s16 *)((u8 *)temp_a1_2 + 0x10);
            sp134 = (f32) -*(s16 *)((u8 *)temp_a1_2 + 0x12) / 2.0f;
            sp120 -= temp_f20_2;
            sp13C = (f32) *(s16 *)((u8 *)temp_a1_2 + 0x12) / 2.0f;
            func_0022C6B0(&sp100);
        }
        if (*(s32 *)((u8 *)temp_s3 + 0xE30) & 2) {
            var_f1 = 1.0f;
            sp90 = D_0044FA50;
            if (1.0f < 0.0f) {
                var_f1 = 0.0f;
            }
            if (!(var_f1 <= 1.0f)) {
                var_f1 = 1.0f;
            }
            sp9C *= var_f1;
            func_00139620(0x902, &sp90, -1, 0x44, 0);
            func_00224480(arg0);
        }
        break;
    case 3:                                         /* switch 1 */
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x30);
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x34);
        temp_f3 = *(f32 *)((u8 *)arg0 + 0x1C) / 8.0f;
        var_f21 = temp_f2 + (temp_f3 * (550.0f - temp_f2));
        var_f20 = temp_f1 + (temp_f3 * (410.0f - temp_f1));
block_51:
        func_0021D6C0(0, var_f21, var_f20);
        if (*(s32 *)((u8 *)temp_s3 + 0xE30) & 2) {
            var_f1_2 = 1.0f;
            sp80 = D_0044FA50;
            if (1.0f < 0.0f) {
                var_f1_2 = 0.0f;
            }
            if (!(var_f1_2 <= 1.0f)) {
                var_f1_2 = 1.0f;
            }
            sp8C *= var_f1_2;
            func_00139620(0x902, &sp80, -1, 0x44, 0);
            func_00224480(arg0);
        }
        break;
    default:                                        /* switch 1 */
        temp_f2_2 = *(f32 *)((u8 *)arg0 + 0x30);
        temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x34);
        temp_f3_2 = (8.0f - *(f32 *)((u8 *)arg0 + 0x1C)) / 8.0f;
        var_f21 = temp_f2_2 + (temp_f3_2 * (550.0f - temp_f2_2));
        var_f20 = temp_f1_2 + (temp_f3_2 * (410.0f - temp_f1_2));
        goto block_51;
    }
    amDraw_SetPacketMode(0);
}
