/* Draft (not built): func_002811D0 at 0x002811D0, size 0x698, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 252 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5A8, original 0x698
 * Original: asm/nonmatchings/unk/unk_280730/func_002811D0.s */

// src/unk/unk_280730.c func_002811D0 size diff=252/362
s32 func_00133B50(s32, s32);
s32 func_00227A30(f32 *);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
s32 memcpy(s32 *, s32 *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gCsSubStat;
extern void func_00228410(void);
extern void A2d_FlushList(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_002811D0(void *arg0) {
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 sp16C;
    s32 sp168;
    s32 sp164;
    s32 saved_reg_s5;
    s16 spA0;
    f32 spB0;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    s32 sp120;
    u8 *sp140;
    s32 sp144;
    u8 *sp148;
    s32 sp14C;
    s32 sp150;
    f32 sp160;
    s32 sp188;
    s32 sp18C;
    f32 var_f0;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_v0;
    s64 temp_s3_5;
    s64 temp_v0_3;
    s64 var_s5;
    s64 var_s5_2;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_v1;
    u8 **var_s4;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s3_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s6;
    u8 *var_s6_2;
    u8 *var_v1_2;

    var_s5 = saved_reg_s5;
    temp_s1 = gCsSubStat;
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x6000);
    var_v1 = &sp140;
    D_00470238 = 0;
    var_v0 = 0x14;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s0 = 0;
    var_s4 = &sp140;
    sp140 = *(u8 **)((u8 *)arg0 + 0x14);
    sp144 = *(s32 *)((u8 *)arg0 + 0x18);
    sp148 = *(u8 **)((u8 *)arg0 + 0x1C);
    sp14C = *(s32 *)((u8 *)arg0 + 0x30);
    sp150 = *(s32 *)((u8 *)arg0 + 0x34);
    do {
        temp_s3 = *var_s4;
        if (temp_s3 != NULL) {
            func_0022C060(temp_s3, 0x3F800000);
            func_0022CD00(temp_s3);
        }
        var_s0 += 1;
        var_s4 += 4;
    } while (var_s0 < 5);
    func_002284D0(NULL);
    func_00228430(0);
    temp_v0 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (temp_v0 != NULL) {
        func_00229800(*(s32 *)((u8 *)temp_v0 + 0), &sp160, -1, *(f32 *)((u8 *)temp_v0 + 0x10));
        func_00227A30(&sp160);
    }
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x3C);
    if (temp_s0 != NULL) {
        func_0022C060(temp_s0, 0x3F800000);
        func_0022CD00(temp_s0);
    }
    var_s0_2 = 0;
    var_s6 = arg0;
    var_s4_2 = 0;
    do {
        temp_s3_2 = *(u8 **)((u8 *)var_s6 + 0x40);
        if (temp_s3_2 != NULL) {
            func_00228430(0);
            func_00229800(*(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + var_s4_2) + 0x40), &sp160, -1, 20.0f);
            func_00227A30(&sp160);
            func_0022C060(temp_s3_2, 0x3F800000);
            func_00228410();
            func_0022CD00(temp_s3_2);
        }
        var_s0_2 += 1;
        var_s6 += 4;
        var_s4_2 += 4;
    } while (var_s0_2 < 7);
    func_00228410();
    temp_v1 = *(u8 *)((u8 *)arg0 + 8);
    if (temp_v1 != *(u8 *)((u8 *)arg0 + 9)) {
        *(u8 *)((u8 *)arg0 + 9) = temp_v1;
        var_a0 = 0;
        var_v1_2 = arg0;
        do {
            temp_v0_2 = *(u8 **)((u8 *)var_v1_2 + 0x24);
            if (temp_v0_2 != NULL) {
                *(f32 *)((u8 *)temp_v0_2 + 0x10) = (f32) gFrameDelta;
            }
            var_a0 += 1;
            var_v1_2 += 4;
        } while (var_a0 < 3);
    }
    func_002284D0(&spF0);
    sp18C = 0;
    memcpy(&sp188, &sp18C, 4);
    func_00228430(0);
    func_00228240(&spF0);
    var_s4_3 = 0;
    var_s6_2 = arg0;
loop_20:
    temp_s0_2 = *(u8 **)((u8 *)var_s6_2 + 0x24);
    if (temp_s0_2 != NULL) {
        temp_a0_2 = *(u8 *)((u8 *)arg0 + 8);
        if (temp_a0_2 != 4) {
            if (temp_a0_2 != 3) {
                if (temp_a0_2 != 2) {
                    if (temp_a0_2 != 1) {
                        if (temp_a0_2 != 0) {
                            goto block_35;
                        }
                        return;
                    }
                    var_s5_2 = ((*(s8 *)((u8 *)arg0 + 4) == 0) ? 0x1F : 0x25) << 0x30;
                    goto block_34;
                }
                var_s5 = -1;
                goto block_35;
            }
            var_s5_2 = ((*(s8 *)((u8 *)arg0 + 4) == 0) ? 0x20 : 0x27) << 0x30;
            goto block_34;
        }
        var_s5_2 = ((*(s8 *)((u8 *)arg0 + 4) == 0) ? 0x1E : 0x26) << 0x30;
block_34:
        var_s5 = var_s5_2 >> 0x30;
block_35:
        temp_v0_3 = (s64) (var_s5 << 0x30) >> 0x30;
        temp_s3_3 = temp_v0_3 * 4;
        if (temp_v0_3 != -1) {
            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + temp_s3_3), &spD0, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
            spF0 = spD0;
            spF4 = spD4;
            spF8 = spD8;
            spFC = spDC;
            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + temp_s3_3), &sp100, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
            func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + temp_s3_3), &sp120, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
        }
        func_00228430(0);
        if (*(u8 *)((u8 *)arg0 + 0) == var_s4_3) {
            var_f0 = 1.0f;
        } else {
            var_f0 = 0.5f;
        }
        sp108 = var_f0;
        sp104 = var_f0;
        sp100 = var_f0;
        func_00228240(&spF0);
        func_0022C060(temp_s0_2, 0x3F800000);
        func_00228410();
        func_0022CD00(temp_s0_2);
        goto block_41;
    }
block_41:
    var_s4_3 += 1;
    var_s6_2 += 4;
    if (var_s4_3 >= 3) {
        func_002284D0(&spF0);
        temp_s0_3 = *(u8 **)((u8 *)arg0 + 0x20);
        if (temp_s0_3 != NULL) {
            temp_a0_3 = *(u8 *)((u8 *)arg0 + 8);
            if (temp_a0_3 != 4) {
                if (temp_a0_3 != 3) {
                    if (temp_a0_3 != 2) {
                        if (temp_a0_3 != 1) {
                            if (temp_a0_3 != 0) {
                                goto block_55;
                            }
                            return;
                        }
                        spA0 = (s16) ((s64) (((*(s8 *)((u8 *)arg0 + 4) == 0) ? 0x1F : 0x25) << 0x30) >> 0x30);
                        goto block_55;
                    }
                    spA0 = -1;
                    goto block_55;
                }
                spA0 = (s16) ((s64) (((*(s8 *)((u8 *)arg0 + 4) == 0) ? 0x20 : 0x27) << 0x30) >> 0x30);
                goto block_55;
            }
            spA0 = (s16) ((s64) (((*(s8 *)((u8 *)arg0 + 4) == 0) ? 0x1E : 0x26) << 0x30) >> 0x30);
block_55:
            temp_s3_4 = spA0 * 4;
            if (spA0 != -1) {
                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + temp_s3_4), &spB0, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                spF0 = spB0;
                spF4 = spB4;
                spF8 = spB8;
                spFC = spBC;
                func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + temp_s3_4), &sp100, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + temp_s3_4), &sp120, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
            }
            func_00228430(0);
            func_00228240(&spF0);
            func_0022C060(temp_s0_3, 0x3F800000);
            func_00228410();
            func_0022CD00(temp_s0_3);
            goto block_58;
        }
block_58:
        temp_s0_4 = *(u8 **)((u8 *)arg0 + 0x38);
        if (temp_s0_4 != NULL) {
            temp_s3_5 = (*(s8 *)((u8 *)arg0 + 4) == 0) ? 0x21 : 0x28;
            func_002284D0(&spF0);
            func_00228430(0);
            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + ((((s64) (temp_s3_5 << 0x30) >> 0x30) + *(u8 *)((u8 *)arg0 + 0)) * 4)), &sp160, -1, 0.0f);
            spF0 = sp160;
            spF4 = sp164;
            spF8 = sp168;
            spFC = sp16C;
            func_00228240(&spF0);
            func_0022C060(temp_s0_4, 0x3F800000);
            func_0022CD00(temp_s0_4);
            func_00228410();
        }
        func_00228410();
        return;
    }
    goto loop_20;
}
