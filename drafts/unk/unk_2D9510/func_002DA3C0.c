/* Draft (not built): func_002DA3C0 at 0x002DA3C0, size 0x768, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); x1C) + (temp_s1_2 * 4)), 0); @ 341: 022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (temp_fp * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002DA3C0.s */

// src/unk/unk_2D9510.c func_002DA3C0 cerr diff=-1/0
s32 Help_Open(s64, s32, u16, u16);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32, s8 *, f32);
s32 func_001446E0(s32);
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
s32 func_002D2E50(s8);
s32 func_002D3290(s32, s32 *, s32, s32);
s32 func_002D33B0(s32, void *, s32, s32);
extern s32 D_00456BB8;
extern f32 D_00470188;
extern u16 D_00492FCC;
extern u16 D_00492FD0;
extern u16 D_00492FD2;
extern u16 D_0049302C;
extern u16 D_00493030;
extern u16 D_00493032;
extern u16 D_00493084;
extern u16 D_00493086;
extern u16 D_00493088;
extern u16 D_0049308A;
extern u16 D_004930E4;
extern u16 D_004930E8;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern void func_0015FE80(void);
extern void SoundRpc_Send3();
extern void amAdx_Pause();
extern void func_002DDF00();
extern char D_00492FCE[];
extern char D_004E05DC[];
extern char D_00456C80[];
void func_002DA3C0(void) {
    s32 spA0;
    s64 spB0;
    s32 sp140;
    s32 sp148;
    s32 sp14C;
    s32 sp150;
    s32 sp158;
    s32 sp15C;
    s32 sp160;
    f32 sp16C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    s128 temp_v0_3;
    s32 *temp_s7;
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_fp;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    s64 *var_a1_5;
    s8 *var_a2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s6_2;

    temp_s2 = (u8 *)(gOptionWork);
    temp_s4 = *(s32 *)((u8 *)temp_s2 + 0x37C);
    temp_s3 = *D_00492FCE | D_00493086;
    temp_s6 = D_00492FCC | D_0049302C | (D_00493084 | D_004930E4);
    temp_s5 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
    spA0 = D_00492FD0 | D_00493030 | (D_00493088 | D_004930E8);
    *(s64 *)((u8 *)(&sp160) + 0) = (s64) *(s64 *)((u8 *)(&D_00456BB8) + 0);
    *(f32 *)((u8 *)(&sp160) + 8) = (f32) *(f32 *)((u8 *)(&D_00456BB8) + 8);
    if (temp_s3 & 1) {
        Help_Open(0x40041 << 0x20, 3, D_004930E8, D_00493088);
        return;
    }
    if ((temp_s5 & 0xA0) && (temp_s4 == 0)) {
        func_002D3290(temp_s5, *(s32 **)((u8 *)temp_s2 + 0x3EC), *(s32 *)((u8 *)temp_s2 + 0x3F8), 0);
        temp_s1 = (u8 *)(gOptionWork);
        temp_s7 = (s32 *)(temp_s1 + 0x308);
        temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x308);
        temp_fp = 0x6A - **(s32 **)((u8 *)temp_s1 + 0x3EC);
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
        }
        *temp_s7 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (temp_fp * 4)), 0);
        if (*(s32 *)((u8 *)D_004E05DC + 0x30) == 0) {
            func_0015FE80();
            func_001446E0(0);
        } else {
            func_0015FE80();
            func_001446E0(1);
        }
    }
    if (temp_s6 & 0xA0) {
        if (temp_s4 == 1) {
            temp_v0 = *(s32 *)((u8 *)temp_s2 + 0x3FC);
            var_a1 = &sp158;
            temp_v1 = *(s32 **)((u8 *)temp_s2 + 0x3F0);
            var_a0 = 8;
            temp_a2 = D_00492FCC | D_0049302C | (D_00493084 | D_004930E4);
            if (var_a1 != NULL) {
                do {
                    *var_a1 = 0;
                    var_a0 -= 1;
                    var_a1 += 1;
                } while (var_a0 != 0);
            }
            var_a1_2 = &sp150;
            sp15C = temp_v0 - 1;
            var_a0_2 = 8;
            if (var_a1_2 != NULL) {
                do {
                    *var_a1_2 = 0;
                    var_a0_2 -= 1;
                    var_a1_2 += 1;
                } while (var_a0_2 != 0);
            }
            sp150 = temp_v0 - 1;
            if (temp_a2 & 0x80) {
                *temp_v1 -= 5;
                if (*temp_v1 < 0) {
                    var_v0 = sp158;
                    goto block_22;
                }
            } else if (temp_a2 & 0x20) {
                *temp_v1 += 5;
                if (*temp_v1 >= temp_v0) {
                    var_v0 = sp150;
block_22:
                    *temp_v1 = var_v0;
                }
            }
            temp_f0 = (f32) *(s32 *)((u8 *)temp_s2 + 0x404);
            *(f32 *)((u8 *)D_004E05DC + 0x34) = temp_f0;
            *(f32 *)((u8 *)D_004E05DC + 0x34) = (f32) (temp_f0 / 255.0f);
        } else if (temp_s4 == 2) {
            temp_v0_2 = *(s32 *)((u8 *)temp_s2 + 0x400);
            var_a1_3 = &sp148;
            temp_v1_2 = *(s32 **)((u8 *)temp_s2 + 0x3F4);
            var_a0_3 = 8;
            temp_a2_2 = D_00492FCC | D_0049302C | (D_00493084 | D_004930E4);
            if (var_a1_3 != NULL) {
                do {
                    *var_a1_3 = 0;
                    var_a0_3 -= 1;
                    var_a1_3 += 1;
                } while (var_a0_3 != 0);
            }
            var_a1_4 = &sp140;
            sp14C = temp_v0_2 - 1;
            var_a0_4 = 8;
            if (var_a1_4 != NULL) {
                do {
                    *var_a1_4 = 0;
                    var_a0_4 -= 1;
                    var_a1_4 += 1;
                } while (var_a0_4 != 0);
            }
            sp140 = temp_v0_2 - 1;
            if (temp_a2_2 & 0x80) {
                *temp_v1_2 -= 5;
                if (*temp_v1_2 < 0) {
                    var_v0_2 = sp148;
                    goto block_35;
                }
            } else if (temp_a2_2 & 0x20) {
                *temp_v1_2 += 5;
                if (*temp_v1_2 >= temp_v0_2) {
                    var_v0_2 = sp140;
block_35:
                    *temp_v1_2 = var_v0_2;
                }
            }
            temp_f0_2 = (f32) *(s32 *)((u8 *)temp_s2 + 0x408);
            *(f32 *)((u8 *)D_004E05DC + 0x38) = temp_f0_2;
            temp_f0_3 = temp_f0_2 / 255.0f;
            *(f32 *)((u8 *)D_004E05DC + 0x38) = temp_f0_3;
            *(f32 *)((u8 *)D_004E05DC + 0x3C) = temp_f0_3;
        }
    } else if ((temp_s3 & 0x4000) && (temp_s4 == 3)) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(s32 *)((u8 *)D_004E05DC + 0x30) = 1;
        *(f32 *)((u8 *)D_004E05DC + 0x34) = 1.0f;
        *(f32 *)((u8 *)D_004E05DC + 0x38) = 1.0f;
        *(f32 *)((u8 *)D_004E05DC + 0x3C) = 1.0f;
        *(s32 *)((u8 *)temp_s2 + 0x404) = 0xFF;
        *(s32 *)((u8 *)temp_s2 + 0x408) = 0xFF;
        temp_f0_4 = (f32) *(s32 *)((u8 *)temp_s2 + 0x404);
        *(f32 *)((u8 *)D_004E05DC + 0x34) = temp_f0_4;
        *(f32 *)((u8 *)D_004E05DC + 0x34) = (f32) (temp_f0_4 / 255.0f);
        temp_f1 = (f32) *(s32 *)((u8 *)temp_s2 + 0x408);
        temp_f0_5 = temp_f1 / 255.0f;
        *(f32 *)((u8 *)D_004E05DC + 0x38) = temp_f1;
        *(f32 *)((u8 *)D_004E05DC + 0x38) = temp_f0_5;
        *(f32 *)((u8 *)D_004E05DC + 0x3C) = temp_f0_5;
        amAdx_SetVolume(0, *(f32 *)((u8 *)D_004E05DC + 0x34), 0, 0);
        amAdx_SetVolume(1, *(f32 *)((u8 *)D_004E05DC + 0x3C), 0, 0);
        amAdx_SetVolume(1, D_004E0618, 0, 0);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, 0x21113, 0);
        *(s32 **)((u8 *)temp_s2 + 0x3F0) = (s32 *) (temp_s2 + 0x404);
        *(s32 **)((u8 *)temp_s2 + 0x3F4) = (s32 *) (temp_s2 + 0x408);
        temp_a0_2 = *(s32 *)((u8 *)temp_s2 + 0x308);
        temp_s6_2 = (u8 *)(gOptionWork);
        temp_s1_2 = sp160 - **(s32 **)((u8 *)temp_s2 + 0x3EC);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        *(s32 *)((u8 *)temp_s2 + 0x308) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s6_2 + 8)) + 0x1C) + (temp_s1_2 * 4)), 0);
    }
    var_s1 = 1;
    if (spA0 & 0xA0) {
        if (temp_s4 == 1) {
            amAdx_SetVolume(0, *(f32 *)((u8 *)D_004E05DC + 0x34), 0, 0);
        } else if (temp_s4 == 2) {
            do {
                amAdx_SetVolume(var_s1, *(f32 *)((u8 *)D_004E05DC + 0x38), 0, 0);
                var_s1 += 1;
            } while (var_s1 < 3);
            amAdx_SetVolume(1, D_004E0618, 0, 0);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, 0x21113, 0);
        }
    }
    func_002D33B0(temp_s5, temp_s2 + 0x37C, 0, 4);
    sp16C = D_00470188;
    func_002D2E50(*(s8 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x37C) + sp) + 0x16C));
    if (temp_s4 != *(s32 *)((u8 *)temp_s2 + 0x37C)) {
        amAdx_SetVolume(0, *(f32 *)((u8 *)D_004E05DC + 0x34), 0, 0);
        var_s1_2 = 1;
        do {
            amAdx_SetVolume(var_s1_2, *(f32 *)((u8 *)D_004E05DC + 0x38), 0, 0);
            var_s1_2 += 1;
        } while (var_s1_2 < 3);
    }
    if (temp_s3 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_a2 = (s8 *)(D_00456C80[0]);
        var_a1_5 = &spB0;
        var_a0_5 = 4;
        do {
            var_a0_5 -= 1;
            temp_v0_3 = *(s128 *)((u8 *)var_a2 + 0x10);
            *(s128 *)((u8 *)var_a1_5 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
            var_a2 += 0x20;
            *(s128 *)((u8 *)var_a1_5 + 0x10) = temp_v0_3;
            var_a1_5 += 0x20;
        } while (var_a0_5 > 0);
        *var_a1_5 = *var_a2;
        amAdx_SetVolume(1, M2C_BITWISE(f32, var_a1_5), var_a2, D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, spCC | 0x20000, 0);
        *(s32 *)((u8 *)gOptionWork + 0x360) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x368) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x37C) = 0;
        *(void (**)())((u8 *)gOptionWork + 0x344) = func_002DDF00;
    }
}
