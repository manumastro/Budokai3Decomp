/* Draft (not built): adxt_stat_decinfo at 0x00160A90, size 0x404, segment cri/adx_001605E0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00160A90.c:132: too few arguments to function `ADXSJD_GetSfreq'
 * Original: asm/nonmatchings/cri/adx_001605E0/adxt_stat_decinfo.s */

s32 ADXSJD_GetSfreq(s32, s8, void *);               /* extern */
s32 ADXT_Stop(void *);                          /* extern */
s32 func_0014EC20(s32, s32);                    /* extern */
s32 func_00154178(s32 *, void *);           /* extern */
s32 func_001542F0(s32, s8, void *, s32);    /* extern */
s32 func_00158880(s32, s32);                /* extern */
s32 func_00158960(s32, s32);                    /* extern */
s32 func_00158978(s32, s32);                    /* extern */
s32 func_00158990(s32, s32);                    /* extern */
s32 func_001589D8(s32, s32);                    /* extern */
s32 func_00158AC0(s32, s32);                    /* extern */
s32 func_00158AD0(s32, s32);                    /* extern */
s32 func_00158D98(s32);                             /* extern */
s32 func_00158DF0(s32, s32);                    /* extern */
s32 func_00159D58(s32, s32 *, void *);      /* extern */
s32 func_00159D68(s32, s32);                    /* extern */
s32 func_00159D78(s32, s32);                /* extern */
s32 func_00159D88(s32, s32);                /* extern */
s32 func_00159D98(s32);                             /* extern */
s32 func_00159DC8(s32);                             /* extern */
s32 func_00159DE0(s32);                             /* extern */
s32 func_00159DF8(s32);                             /* extern */
s32 func_00159E28(s32);                             /* extern */
s32 func_00159E58(s32);                             /* extern */
s32 func_00159E88(s32);                             /* extern */
s32 func_00159ED0(s32);                         /* extern */
s32 func_00159EE8(s32);                             /* extern */
s32 func_00159F18(s32);                             /* extern */
s32 func_0015A050(s32);                             /* extern */
s32 func_0015CCD0(s32);                             /* extern */
s32 func_0015CE88(s32, s32 *, void *);      /* extern */
s32 func_0015CE98(s32, s32);                    /* extern */
s32 func_0015E4F8(void *, s32, s32, s32);       /* extern */
s32 func_0015F9E8(void *, s32, s32);            /* extern */
s32 func_0015F9F0(void *, s32 *, s32 *);        /* extern */
s32 func_001605E0(void *);                      /* extern */
extern s32 (*D_004111B0)(void *, s32, s32, s32);
extern s32 D_00462110;
extern s32 func_00160300;
extern s32 func_00160550;
extern s32 func_001607A8;

void adxt_stat_decinfo(u8 *arg0) {
    s32 sp20;
    s32 sp24;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1_2;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s8 temp_a1;
    u8 **temp_a0;

    sp20 = 0;
    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    sp24 = 0;
    *(s32 *)((u8 *)arg0 + 0xA8) = 0;
    if (((u8) *(u8 *)((u8 *)arg0 + 2) < 2U) && (*(s8 *)((u8 *)arg0 + 0xAC) == 1)) {
        if (func_0015CCD0(*(s32 *)((u8 *)arg0 + 8)) != 2) {
            temp_a0 = *(u8 ***)((u8 *)arg0 + 0x10);
            if (temp_a0 != NULL) {
                (*(s32 (**)(u8 **))((u8 *)(*temp_a0) + 0x14))(temp_a0);
            }
            func_0015E4F8(arg0, *(s32 *)((u8 *)arg0 + 0xB4), *(s32 *)((u8 *)arg0 + 0xB8), *(s32 *)((u8 *)arg0 + 0xBC));
            *(s8 *)((u8 *)arg0 + 0xAC) = 0;
            goto block_6;
        }
    } else {
block_6:
        if (func_00158D98(temp_s1) == 2) {
            temp_v0 = func_00159DC8(temp_s1);
            temp_a1 = *(s8 *)((u8 *)arg0 + 3);
            if (temp_a1 < temp_v0) {
                func_001542F0(temp_v0, temp_a1, sp, 0x10);
                func_00154178(&D_00462110, sp);
                ADXT_Stop(arg0);
                return;
            }
            temp_s2 = ADXSJD_GetSfreq(temp_s1, temp_a1, sp);
            temp_v0_2 = func_00159E58(temp_s1);
            if (temp_v0_2 <= 0) {
                *(s32 *)((u8 *)arg0 + 0x48) = (s32) ((s32) ((temp_s2 / (s32) *(s32 *)((u8 *)arg0 + 0x38)) * 3) / 2);
            } else {
                *(s32 *)((u8 *)arg0 + 0x48) = (s32) ((temp_s2 / (s32) *(s32 *)((u8 *)arg0 + 0x38)) * 3);
            }
            temp_v0_3 = func_00159DF8(temp_s1) * 2;
            temp_a1_2 = ((s32) (*(s32 *)((u8 *)arg0 + 0x48) + temp_v0_3) / temp_v0_3) * temp_v0_3;
            *(s32 *)((u8 *)arg0 + 0x48) = temp_a1_2;
            func_00158DF0(temp_s1, temp_a1_2);
            if (temp_v0_2 <= 0) {
                temp_a0_2 = *(s32 *)((u8 *)arg0 + 8);
                if (temp_a0_2 != 0) {
                    func_0015CE98(temp_a0_2, 0x7FFFFFFF);
                }
                func_00159D68(temp_s1, func_00159E28(temp_s1));
                func_00159D88(temp_s1, 0);
                func_00159D78(temp_s1, 0);
                func_00159D58(temp_s1, &func_001607A8, arg0);
            } else {
                if ((s8) *(u8 *)((u8 *)arg0 + 2) == 2) {
                    *(s32 *)((u8 *)arg0 + 0x50) = 0;
                } else {
                    temp_v0_4 = func_00159EE8(temp_s1);
                    temp_lo = (s32) (temp_v0_4 + 0x7FF) / 2048;
                    temp_v1 = 0x800 - (temp_v0_4 % 2048);
                    *(s32 *)((u8 *)arg0 + 0x50) = temp_v1;
                    *(s32 *)((u8 *)arg0 + 0x50) = (s32) (temp_v1 % 2048);
                    *(s32 *)((u8 *)arg0 + 0x8C) = temp_lo;
                    func_0015CE98(*(s32 *)((u8 *)arg0 + 8), temp_lo);
                    func_0015CE88(*(s32 *)((u8 *)arg0 + 8), &func_00160550, arg0);
                }
                func_00159ED0(temp_s1);
                temp_v0_5 = func_00159E88(temp_s1);
                *(s32 *)((u8 *)arg0 + 0x90) = temp_v0_5;
                func_00159D68(temp_s1, temp_v0_5);
                func_00159D88(temp_s1, 0);
                func_00159D78(temp_s1, 0);
                func_00159D58(temp_s1, &func_00160300, arg0);
            }
            temp_s2_2 = ADXSJD_GetSfreq(temp_s1);
            temp_s4 = func_00159DC8(temp_s1);
            temp_s5 = func_00159E28(temp_s1);
            func_001589D8(*(s32 *)((u8 *)arg0 + 0xC), func_00159DE0(temp_s1));
            func_00158978(*(s32 *)((u8 *)arg0 + 0xC), temp_s2_2);
            func_00158960(*(s32 *)((u8 *)arg0 + 0xC), temp_s4);
            func_00158AC0(*(s32 *)((u8 *)arg0 + 0xC), temp_s5);
            func_00158990(*(s32 *)((u8 *)arg0 + 0xC), *(s16 *)((u8 *)arg0 + 0x40) + func_00159F18(*(s32 *)((u8 *)arg0 + 4)));
            func_0015F9F0(arg0, &sp20, &sp24);
            if ((sp20 != 0) || (sp24 != 0)) {
                func_0015F9E8(arg0, sp20, sp24);
            }
            func_001605E0(arg0);
            temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x74);
            if (temp_a0_3 != 0) {
                func_0014EC20(temp_a0_3, temp_s2_2);
            }
            if (func_00159D98(temp_s1) == 2) {
                func_00158AD0(*(s32 *)((u8 *)arg0 + 0xC), func_0015A050(temp_s1));
            }
            func_00158880(*(s32 *)((u8 *)arg0 + 0xC), 1);
            if (D_004111B0 != NULL) {
                D_004111B0(arg0, temp_s2_2, temp_s4, temp_s5);
            }
            *(s8 *)((u8 *)arg0 + 1) = 2;
        }
    }
}
