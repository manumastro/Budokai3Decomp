/* Draft (not built): func_002B2400 at 0x002B2400, size 0x818, segment unk/unk_2B2400 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ')' expected mwccps2.exe Compiler: 8: s32 func_00227B20(s32, s32, s32, s32, f32); @ 7: s32 func_00227A30(s3232 *);
 * Original: asm/nonmatchings/unk/unk_2B2400/func_002B2400.s */

// src/unk/unk_2B2400.c func_002B2400 cerr diff=-1/0
void *A2d_AllocObj(s32, f32);
s32 func_00227830(s32, s32);
s32 func_00227880(s32 *, u8, u8, u8);
s32 func_00227A30(s3232 *);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00228430(s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
s32 func_002B0BF0(s32, s32, s32, void *);
s32 func_002B1E90(void *, void *, s32, s32);
s32 memcpy(f32 *, s32 *, s32);
extern s3232 D_004700E4;
extern f32 D_004700E8;
extern f32 D_004700EC;
extern f32 D_004700F0;
extern f32 D_004700F4;
extern f32 D_004700F8;
extern f32 D_004700FC;
extern f32 D_00470100;
extern f32 D_00470104;
extern f32 D_00470108;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_004E0660;
extern f32 gFrameDelta;
extern void *gSklEdit;
extern void Title_StepCounters(void);
extern void func_00228410(void);
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002B2400(u8 *arg0) {
    s32 *spA0;
    s32 *spB0;
    s32 spC0;
    s32 spD0;
    s3232 spE0;
    f32 spE4;
    s32 spE8;
    s32 spEC;
    s32 spF0;
    s32 spF4;
    s32 spF8;
    s32 spFC;
    u8 sp100;
    u8 sp101;
    u8 sp102;
    u8 sp103;
    s32 sp104;
    s32 sp110;
    s32 sp114;
    s32 sp118;
    s32 sp11C;
    u8 sp120;
    u8 sp121;
    u8 sp122;
    u8 sp123;
    s32 sp124;
    f32 sp138;
    s32 sp13C;
    f32 sp140;
    s32 sp144;
    u8 sp148;
    u8 sp14C;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_fp;
    s32 var_s5;
    s32 var_s7;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s3;
    u8 *temp_s6;
    u8 *temp_v0_2;
    u8 *temp_v0_6;
    u8 *temp_v0_7;
    u8 *temp_v0_8;
    u8 *var_a0_2;
    u8 *var_a3;
    u8 *var_a3_2;

    temp_s3 = *(u8 **)((u8 *)gSklEdit + 0x10);
    func_00228430(0);
    func_00227830(0, 0);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_v1 == 6) {
        sp11C = 0x3F800000;
        sp118 = 0x3F800000;
        sp114 = 0x3F800000;
        sp110 = 0x3F800000;
        sp144 = 0;
        memcpy(&sp140, &sp144, 4);
        sp14C = (f32) sp140;
        sp124 = 1;
        sp110 = 0x3F19999A;
        sp120 = sp14C;
        sp121 = sp14D;
        sp122 = sp14E;
        sp123 = sp14F;
        sp114 = 0x3F19999A;
        sp118 = 0x3F19999A;
        sp11C = 0x3F800000;
        func_00227880(&sp110, sp14F, sp14E, sp14D);
    } else if ((*(s32 *)((u8 *)arg0 + 0x14) != 0) && (temp_v1 != 5)) {
        spFC = 0x3F800000;
        spF8 = 0x3F800000;
        spF4 = 0x3F800000;
        spF0 = 0x3F800000;
        sp13C = 0;
        memcpy(&sp138, &sp13C, 4);
        sp148 = (f32) sp138;
        sp104 = 1;
        spF0 = 0x3F19999A;
        sp100 = sp148;
        sp101 = sp149;
        sp102 = sp14A;
        sp103 = sp14B;
        spF4 = 0x3F19999A;
        spF8 = 0x3F19999A;
        spFC = 0x3F800000;
        func_00227880(&spF0, sp14B, sp14A, sp149);
    }
    if (*(s32 *)((u8 *)arg0 + 0xE4) == 0) {
        temp_a1 = ((s32) *(s32 *)((u8 *)arg0 + 0x10) >> 1) << 0xC;
        temp_a0 = *(u8 **)((u8 *)gSklEdit + 0x14);
        temp_v0 = *(s32 *)((u8 *)gSklEdit + 0x3C);
        D_00470704 = temp_a0;
        D_00470708 = 0;
        spC0 = temp_v0 + temp_a1;
        spD0 = temp_v0 + 0x500 + temp_a1;
        D_0047070C = spD0;
        amModel_SetCurrent(temp_a0, spD0);
        D_00470238 = 0;
        temp_v0_2 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)arg0 + 0xD8) * 4)), (f32) *(s32 *)((u8 *)(arg0 + 0xD8) + 8) * gFrameDelta);
        func_0022C6B0(temp_v0_2);
        func_0022D4B0(temp_v0_2, 1);
        spB0 = arg0 + 0xB8;
        func_00228430(0);
        spE0 = D_004700E4;
        spE4 = D_004700E8;
        spE8 = 0;
        spEC = 0x3F800000;
        func_00227A30(&spE0);
        var_s5 = 0;
        var_s7 = 0;
        var_fp = 0;
        if (*spB0 > 0) {
            spA0 = spB0;
            do {
                temp_s2 = *(s32 *)((u8 *)spA0 + 4);
                if ((temp_s2 > 0) && (temp_s2 < 0x253)) {
                    temp_s6 = &D_004E0660 + (temp_s2 * 0x28);
                    temp_s1 = *(u8 *)((u8 *)temp_s6 + 8) & 7;
                    spE0 = 0;
                    var_s5 += temp_s1;
                    spE4 = D_004700EC * (f32) temp_s1;
                    spE8 = 0;
                    spEC = 0x3F800000;
                    func_00227A30(&spE0);
                    func_00228430(0);
                    temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x20);
                    if (var_s5 == temp_v1_2) {
                        temp_v0_3 = *(s32 *)((u8 *)arg0 + 0xB8);
                        var_s7 = 1;
                        var_t0 = 0;
                        if (temp_v0_3 > 0) {
loop_13:
                            var_a3 = arg0 + 0xB8;
                            var_a2 = 0;
                            var_a0 = 0;
                            if (temp_v0_3 > 0) {
loop_15:
                                if (var_t0 >= var_a0) {
                                    temp_t5 = *(s32 *)((u8 *)var_a3 + 4);
                                    var_a0 += 1;
                                    temp_t3 = temp_t5 * 4;
                                    var_a3 += 4;
                                    var_a2 += *(u8 *)((u8 *)(&D_004E0660 + ((temp_t3 + temp_t5) * 8)) + 8) & 7;
                                    if (var_a0 >= temp_v0_3) {

                                    } else {
                                        goto loop_15;
                                    }
                                }
                            }
                            if (temp_v1_2 == var_a2) {
                                var_a3_2 = *(u8 **)((u8 *)(arg0 + 0xB8 + (var_t0 * 4)) + 4);
                            } else {
                                var_t0 += 1;
                                if (var_t0 >= temp_v0_3) {
                                    goto block_21;
                                }
                                goto loop_13;
                            }
                        } else {
block_21:
                            var_a3_2 = (u8 *)-1;
                        }
                        var_a2_2 = 0;
                        var_a0_2 = arg0;
loop_23:
                        temp_v0_4 = *(s32 *)((u8 *)var_a0_2 + 0x2C);
                        if (temp_v0_4 > 0) {
                            if (temp_v0_4 == var_a3_2) {
                                var_v0 = 0;
                            } else {
                                var_a2_2 += 1;
                                var_a0_2 += 4;
                                if (var_a2_2 >= 7) {
                                    goto block_28;
                                }
                                goto loop_23;
                            }
                        } else {
block_28:
                            var_v0 = 1;
                        }
                        if (var_v0 == 0) {

                        } else {
                            temp_v0_5 = *(s32 *)((u8 *)arg0 + 0xB8);
                            var_t0_2 = 0;
                            if (temp_v0_5 > 0) {
loop_33:
                                var_a3_2 = arg0 + 0xB8;
                                var_a2_2 = 0;
                                var_a0_3 = 0;
                                if (temp_v0_5 > 0) {
loop_35:
                                    if (var_t0_2 >= var_a0_3) {
                                        temp_t5_2 = *(s32 *)((u8 *)var_a3_2 + 4);
                                        var_a0_3 += 1;
                                        temp_t3_2 = temp_t5_2 * 4;
                                        var_a3_2 += 4;
                                        var_a2_2 += *(u8 *)((u8 *)(&D_004E0660 + ((temp_t3_2 + temp_t5_2) * 8)) + 8) & 7;
                                        if (var_a0_3 >= temp_v0_5) {

                                        } else {
                                            goto loop_35;
                                        }
                                    }
                                }
                                if (temp_v1_2 == var_a2_2) {
                                    var_a0_4 = *(s32 *)((u8 *)(arg0 + 0xB8 + (var_t0_2 * 4)) + 4);
                                } else {
                                    var_t0_2 += 1;
                                    if (var_t0_2 >= temp_v0_5) {
                                        goto block_41;
                                    }
                                    goto loop_33;
                                }
                            } else {
block_41:
                                var_a0_4 = -1;
                            }
                            if (func_002B0BF0(var_a0_4, 1, var_a2_2, var_a3_2) == 0) {

                            }
                        }
                    }
                    temp_v0_6 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x100), (f32) M2C_ERROR(/* Read from unset register $a1 */));
                    *(s16 *)((u8 *)temp_v0_6 + 0x18) = -1;
                    *(f32 *)((u8 *)temp_v0_6 + 0x34) = (f32) (-D_004700EC * (f32) temp_s1);
                    temp_f2 = *(f32 *)((u8 *)temp_v0_6 + 0x24);
                    if ((*(f32 *)((u8 *)temp_v0_6 + 0x34) + temp_f2) < D_00470104) {
                        *(f32 *)((u8 *)temp_v0_6 + 0x34) = (f32) (D_004700FC - temp_f2);
                    }
                    *(f32 *)((u8 *)temp_v0_6 + 0x3C) = (f32) (D_004700EC * (f32) temp_s1);
                    temp_f2_2 = *(f32 *)((u8 *)temp_v0_6 + 0x24);
                    if (!((*(f32 *)((u8 *)temp_v0_6 + 0x3C) + temp_f2_2) <= D_00470108)) {
                        *(f32 *)((u8 *)temp_v0_6 + 0x3C) = (f32) (D_00470100 - temp_f2_2);
                    }
                    *(f32 *)((u8 *)temp_v0_6 + 0x38) = (f32) D_004700F8;
                    *(f32 *)((u8 *)temp_v0_6 + 0x20) = (f32) (*(f32 *)((u8 *)temp_v0_6 + 0x20) + D_004700F4);
                    func_0022C6B0(temp_v0_6);
                    func_0022D4B0(temp_v0_6, 1);
                    func_00228410();
                    temp_s0 = *(u8 *)((u8 *)temp_s6 + 0xA) & 3;
                    func_00228430(0);
                    if (var_s5 == *(s32 *)((u8 *)arg0 + 0x20)) {
                        func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x44)) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)arg0 + 0x140) * gFrameDelta);
                    }
                    temp_a0_2 = *(u8 **)((u8 *)gSklEdit + 0x14);
                    D_00470704 = temp_a0_2;
                    D_0047070C = spD0;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_2, spD0);
                    D_00470238 = 0;
                    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x48), (f32) temp_s0);
                    func_00228410();
                    temp_a0_3 = *(u8 **)((u8 *)arg0 + 8);
                    D_00470704 = temp_a0_3;
                    D_0047070C = spC0;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_3, spC0);
                    D_00470238 = 0;
                    temp_v0_7 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xFC), 0.0f);
                    *(s16 *)((u8 *)temp_v0_7 + 0x18) = (s16) temp_s2;
                    func_002B1E90(temp_v0_7, *(u8 **)((u8 *)arg0 + 8), temp_s2, 0xC);
                    *(f32 *)((u8 *)temp_v0_7 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_7 + 0x38) * 0.8f);
                    *(f32 *)((u8 *)temp_v0_7 + 0x34) = (f32) (*(f32 *)((u8 *)temp_v0_7 + 0x34) * 0.9f);
                    *(f32 *)((u8 *)temp_v0_7 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_v0_7 + 0x3C) * 0.9f);
                    *(f32 *)((u8 *)temp_v0_7 + 0x20) = (f32) (*(f32 *)((u8 *)temp_v0_7 + 0x20) + D_004700F0);
                    func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
                    func_0022D4B0(temp_v0_7, 1);
                    func_00227A30(&spE0);
                }
                var_fp += 1;
                spA0 += 4;
            } while (var_fp < *spB0);
        }
        if (var_s7 == 0) {
            temp_v0_8 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x100), 1.0f);
            *(s16 *)((u8 *)temp_v0_8 + 0x18) = -1;
            *(f32 *)((u8 *)temp_v0_8 + 0x38) = (f32) D_004700F8;
            *(f32 *)((u8 *)temp_v0_8 + 0x20) = (f32) (*(f32 *)((u8 *)temp_v0_8 + 0x20) + D_004700F4);
            *(f32 *)((u8 *)temp_v0_8 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v0_8 + 0x24) + D_004700EC);
            *(f32 *)((u8 *)temp_v0_8 + 0x34) = (f32) -D_004700EC;
            temp_f2_3 = *(f32 *)((u8 *)temp_v0_8 + 0x24);
            if ((*(f32 *)((u8 *)temp_v0_8 + 0x34) + temp_f2_3) < D_00470104) {
                *(f32 *)((u8 *)temp_v0_8 + 0x34) = (f32) (D_004700FC - temp_f2_3);
            }
            *(f32 *)((u8 *)temp_v0_8 + 0x3C) = (f32) D_004700EC;
            temp_f2_4 = *(f32 *)((u8 *)temp_v0_8 + 0x24);
            if (!((*(f32 *)((u8 *)temp_v0_8 + 0x3C) + temp_f2_4) <= D_00470108)) {
                *(f32 *)((u8 *)temp_v0_8 + 0x3C) = (f32) (D_00470100 - temp_f2_4);
            }
            func_0022C6B0(temp_v0_8);
            func_0022D4B0(temp_v0_8, 1);
        }
        func_00228410();
    }
    Title_StepCounters();
    func_00228410();
}
