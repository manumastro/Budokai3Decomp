/* Draft (not built): func_0017F750 at 0x0017F750, size 0x714, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017F750.c:291: too few arguments to function `func_00182420'
 * Original: asm/nonmatchings/cri/mwsfd/func_0017F750.s */

s32 MWSFD_Malloc(void *, s32);                      /* extern */
s32 MwsfdCrePrm(s32, s32 *, s32, s32 *);            /* extern */
s32 func_0017EF98(void *, s32 *, s32 *, s32 *); /* extern */
s32 func_0017F080(void *, s32 **, s32 *, s32 *); /* extern */
s32 func_0017F0D0(void *, s32 *, s32 *); /* extern */
s32 func_0017F220(void *, s32 *, s32 *);        /* extern */
s32 func_0017F240();                                /* extern */
s32 func_0017F4D8(void *, void *, s32 *);       /* extern */
s32 func_0017F5E8(void *, void *, s32 *, s32 *); /* extern */
s32 func_0017FE68(s32);                             /* extern */
s32 func_0017FEA0(void *, s32, s32, s32); /* extern */
s32 func_00180D88(void *);                      /* extern */
s32 func_00182420(s32, s32 *);          /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00188380(s32 *);                   /* extern */
s32 func_0018D700(s32, s32 *, void *);          /* extern */
s32 func_0018F780(s32 *, s32 *, s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_001957A8(s32);                     /* extern */
s32 func_00197778(s32 *, s32);                  /* extern */
extern s32 D_004250F8;
extern s32 D_00425140;
extern s32 D_00425188;
extern s32 D_004251D0;
extern s32 D_004251F8;
extern s32 D_00425214;
extern s32 D_00465570;
extern s32 D_00465590;
extern s32 D_004655B0;
extern s32 D_004655E0;
extern s32 D_00484D90;
extern s32 D_00484D94;
extern s32 D_00484D98;
extern s32 D_00484D9C;
extern s32 D_00484DA0;
extern s32 D_00484DA4;
extern s32 D_00484DA8;
extern s32 D_00484DAC;
extern s32 D_00484DB0;
extern s32 func_00182538;

s32 func_0017F750(u8 *arg0, u8 *arg1) {
    s32 sp50;
    s32 sp60;
    s32 spA0;
    s32 spA4;
    s32 *spA8;
    s32 spAC;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a0_5;
    s32 *var_a0_3;
    s32 *var_a0_4;
    s32 *var_a1;
    s32 *var_a3;
    s32 *var_v1;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1_2;

    temp_s6 = *(s32 *)((u8 *)arg1 + 0);
    spC0 = *(s32 *)((u8 *)arg1 + 0x10);
    spC4 = *(s32 *)((u8 *)arg1 + 8);
    spC8 = *(s32 *)((u8 *)arg1 + 0xC);
    func_0017EF98(arg1, &D_00484D94, &D_00484D98, &D_00484D9C);
    func_0017F0D0(arg1, &D_00484DA4, &D_00484DA8);
    func_0017F220(arg1, &spA0, &spA4);
    spD0 = func_0017F240();
    spB8 = MWSFD_Malloc(arg0, D_00484D98 + D_00484D9C + D_00484DA0 + 0x40);
    temp_s7 = MWSFD_Malloc(arg0, D_00484D94 + 0x40);
    temp_fp = func_0017F4D8(arg0, arg1, &sp50);
    temp_s3 = func_0017F5E8(arg0, arg1, &sp60, &sp60);
    if (func_0017FE68(temp_s6) != 1) {
        var_s2 = 0;
        var_s1 = 0;
    } else {
        var_s2 = MWSFD_Malloc(arg0, D_00484DB0);
        var_s1 = MWSFD_Malloc(arg0, D_00484DAC);
    }
    spBC = MWSFD_Malloc(arg0, 0x800);
    spCC = MWSFD_Malloc(arg0, spA0);
    temp_s0 = MWSFD_Malloc(arg0, spA4);
    spD4 = MWSFD_Malloc(arg0, spD0);
    if (spB8 != 0) {
        var_a0 = &D_00465570;
        if (temp_s7 != 0) {
            var_a0_2 = &D_00465570;
            if (temp_fp == 0) {
                if (temp_s3 != 0) {
                    var_a0 = (s32 *)0x460000;
                    goto block_19;
                }
                if (spBC != 0) {
                    var_a0 = (s32 *)0x460000;
                    if (spCC != 0) {
                        if (spD4 == 0) {
                            var_a0 = (s32 *)0x460000;
                            goto block_19;
                        }
                        if (temp_s0 == 0) {
                            goto block_18;
                        }
                        if (func_0017FE68(temp_s6) != 1) {
                            goto block_29;
                        }
                        if (var_s2 != 0) {
                            if (var_s1 == 0) {
                                goto block_26;
                            }
block_29:
                            D_00484D90 = (temp_s7 + 0x3F) & ~0x3F;
                            func_0017F080(arg1, &spA8, &spAC, &spB0);
                            var_a3 = spA8;
                            var_a2 = spAC;
                            *(s32 *)((u8 *)(&D_004251F8) + 0x18) = var_s1;
                            *(s32 *)((u8 *)(&D_004251D0) + 0) = spB0;
                            *(s32 *)((u8 *)(&D_004251D0) + 0x20) = 0;
                            *(s32 *)((u8 *)(&D_004251D0) + 4) = spB4;
                            *(s32 *)((u8 *)(&D_004251F8) + 8) = var_s2;
                            *(s32 **)((u8 *)(&D_004251D0) + 0x14) = var_a3;
                            *(s32 *)((u8 *)(&D_004251D0) + 0x18) = var_a2;
                            *(s32 **)((u8 *)(&D_004251D0) + 8) = var_a3;
                            *(s32 *)((u8 *)(&D_004251D0) + 0xC) = var_a2;
                            *(s32 *)((u8 *)(&D_004251D0) + 0x10) = 0;
                            *(s32 *)((u8 *)(&D_004251D0) + 0x1C) = spC0;
                            switch (temp_s6) {      /* irregular */
                            case 1:
                                var_v1 = &D_004250F8;
                                var_a0_3 = sp;
                                if ((s32) &D_004250F8 & 7) {
                                    do {
                                        M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $a2, ($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $t0, 0x17($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $t0, 0x10($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $t1, 0x1f($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $t1, 0x18($v1) */);
                                        M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
                                        var_a2 = M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdl $t1, 0x1f($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdr $t1, 0x18($a0) */);
                                        var_v1 += 0x20;
                                        var_a0_3 += 0x20;
                                    } while (var_v1 != (&D_004250F8 + 0x40));
                                } else {
                                    do {
                                        var_a2 = (s32) *(s64 *)((u8 *)var_v1 + 0x10);
                                        *(s64 *)((u8 *)var_a0_3 + 0) = (s64) *(s64 *)((u8 *)var_v1 + 0);
                                        *(s64 *)((u8 *)var_a0_3 + 8) = (s64) *(s64 *)((u8 *)var_v1 + 8);
                                        *(s64 *)((u8 *)var_a0_3 + 0x10) = (s64) var_a2;
                                        *(s64 *)((u8 *)var_a0_3 + 0x18) = (s64) *(s64 *)((u8 *)var_v1 + 0x18);
                                        var_v1 += 0x20;
                                        var_a0_3 += 0x20;
                                    } while (var_v1 != (&D_004250F8 + 0x40));
                                }
                                var_a3 = &D_00484D94;
                                *var_a0_3 = *var_v1;
                                *(s32 *)((u8 *)arg0 + 0x1D8) = (s32) D_00484D90;
block_60:
                                var_v1_2 = D_00484D94 - D_00425214;
                                *(s32 *)((u8 *)arg0 + 0x1E0) = (s32) D_00425214;
block_61:
                                *(s32 *)((u8 *)arg0 + 0x1DC) = var_v1_2;
                                break;
                            case 2:
                                var_v1_3 = &D_00425140;
                                var_a1 = sp;
                                if ((s32) &D_00425140 & 7) {
                                    do {
                                        M2C_ERROR(/* unknown instruction: ldl $t0, 0x7($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $t0, ($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $t1, 0xf($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $t1, 0x8($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $t2, 0x17($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $t2, 0x10($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $a0, 0x1f($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $a0, 0x18($v1) */);
                                        M2C_ERROR(/* unknown instruction: sdl $t0, 0x7($a1) */);
                                        M2C_ERROR(/* unknown instruction: sdr $t0, ($a1) */);
                                        M2C_ERROR(/* unknown instruction: sdl $t1, 0xf($a1) */);
                                        M2C_ERROR(/* unknown instruction: sdr $t1, 0x8($a1) */);
                                        M2C_ERROR(/* unknown instruction: sdl $t2, 0x17($a1) */);
                                        M2C_ERROR(/* unknown instruction: sdr $t2, 0x10($a1) */);
                                        M2C_ERROR(/* unknown instruction: sdl $a0, 0x1f($a1) */);
                                        M2C_ERROR(/* unknown instruction: sdr $a0, 0x18($a1) */);
                                        var_v1_3 += 0x20;
                                        var_a1 += 0x20;
                                    } while (var_v1_3 != (&D_00425140 + 0x40));
                                } else {
                                    do {
                                        var_a2 = (s32) *(s64 *)((u8 *)var_v1_3 + 0);
                                        var_a3 = (s32 *) *(s64 *)((u8 *)var_v1_3 + 8);
                                        *(s64 *)((u8 *)var_a1 + 0) = (s64) var_a2;
                                        *(s64 *)((u8 *)var_a1 + 8) = (s64) var_a3;
                                        *(s64 *)((u8 *)var_a1 + 0x10) = (s64) *(s64 *)((u8 *)var_v1_3 + 0x10);
                                        *(s64 *)((u8 *)var_a1 + 0x18) = (s64) *(s64 *)((u8 *)var_v1_3 + 0x18);
                                        var_v1_3 += 0x20;
                                        var_a1 += 0x20;
                                    } while (var_v1_3 != (&D_00425140 + 0x40));
                                }
                                *var_a1 = *var_v1_3;
                                *(s32 *)((u8 *)arg0 + 0x1D8) = (s32) D_00484D90;
                                *(s32 *)((u8 *)arg0 + 0x1E0) = 0x800;
                                var_v1_2 = D_00484D94 - 0x800;
                                goto block_61;
                            case 3:
                                var_v1_4 = &D_00425188;
                                var_a0_4 = sp;
                                if ((s32) &D_00425188 & 7) {
                                    do {
                                        M2C_ERROR(/* unknown instruction: ldl $t2, 0x7($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $t2, ($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldl $a3, 0x1f($v1) */);
                                        M2C_ERROR(/* unknown instruction: ldr $a3, 0x18($v1) */);
                                        M2C_ERROR(/* unknown instruction: sdl $t2, 0x7($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdr $t2, ($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($a0) */);
                                        M2C_ERROR(/* unknown instruction: sdl $a3, 0x1f($a0) */);
                                        var_a3 = M2C_ERROR(/* unknown instruction: sdr $a3, 0x18($a0) */);
                                        var_v1_4 += 0x20;
                                        var_a0_4 += 0x20;
                                    } while (var_v1_4 != (&D_00425188 + 0x40));
                                } else {
                                    do {
                                        *(s64 *)((u8 *)var_a0_4 + 0) = (s64) *(s64 *)((u8 *)var_v1_4 + 0);
                                        *(s64 *)((u8 *)var_a0_4 + 8) = (s64) *(s64 *)((u8 *)var_v1_4 + 8);
                                        *(s64 *)((u8 *)var_a0_4 + 0x10) = (s64) *(s64 *)((u8 *)var_v1_4 + 0x10);
                                        *(s64 *)((u8 *)var_a0_4 + 0x18) = (s64) *(s64 *)((u8 *)var_v1_4 + 0x18);
                                        var_v1_4 += 0x20;
                                        var_a0_4 += 0x20;
                                    } while (var_v1_4 != (&D_00425188 + 0x40));
                                }
                                var_a2 = *var_v1_4;
                                *var_a0_4 = var_a2;
                                *(s32 *)((u8 *)arg0 + 0x1D8) = (s32) D_00484D90;
                                goto block_60;
                            }
                            if (D_00484D98 != 0) {
                                D_00484D98 -= (s32) D_00484D98 % (s32) D_00425214;
                            }
                            func_0018F780(&D_004251D0, &sp50, &sp60, spC4, spB8, D_00484D98, D_00484D9C, D_00484DA0, spC0, spC4, spC8, MwsfdCrePrm(*(s32 *)((u8 *)arg1 + 0x24), &D_00425214, var_a2, var_a3), spCC, spA0);
                            if (temp_s6 == 1) {
                                func_00188380(&D_004251F8);
                            }
                            func_001957A8(1);
                            temp_v0 = func_00197778(sp, 0);
                            if (temp_v0 == 0) {
                                func_00182420(-0x131, &func_00182538);
                                var_a0_5 = &D_004655B0;
                                goto block_72;
                            }
                            if (func_0018D700(temp_v0, &func_00182538, arg0) == 0) {
                                *(s32 *)((u8 *)arg0 + 0x1B8) = spD4;
                                *(s32 *)((u8 *)arg0 + 0x1BC) = spD0;
                                func_0017FEA0(arg0, spBC, 0x800, 0x40);
                                return temp_v0;
                            }
                            func_00182420(-0x12F);
                            var_a0_5 = &D_004655E0;
block_72:
                            func_001870E8(var_a0_5);
                            return 0;
                        }
block_26:
                        var_a0_2 = &D_00465590;
                        goto block_27;
                    }
                    goto block_19;
                }
                goto block_18;
            }
            goto block_27;
        }
        goto block_19;
    }
block_18:
    var_a0 = &D_00465570;
block_19:
    var_a0_2 = var_a0;
block_27:
    func_001870E8(var_a0_2);
    func_00180D88(arg0);
    return 0;
}
