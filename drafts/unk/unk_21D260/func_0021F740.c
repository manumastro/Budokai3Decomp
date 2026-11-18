/* Draft (not built): func_0021F740 at 0x0021F740, size 0x19C8, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'float' mwccps2.exe Compiler: @ 264: *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x1C), &sp120, 0);
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021F740.s */

// src/unk/unk_21D260.c func_0021F740 cerr diff=-1/0
s32 amDraw_SetPacketMode(s32);
s32 func_0021C460(s16);
s32 func_00228AC0(s32, s32 *, s32, s32);
extern s32 D_0044F760;
extern s32 D_0044F990;
extern s32 D_0044F994;
extern s32 D_0044F998;
extern s32 D_0044F99C;
extern s32 D_0044F9A0;
extern s32 D_0044F9A4;
extern s32 D_0044F9A8;
extern s32 D_0044F9AC;
extern s32 D_0044F9B0;
extern s32 D_0044F9B4;
extern s32 D_0044F9B8;
extern s32 D_0044FA24;
extern s32 D_0044FA28;
extern s32 D_0044FA2C;
extern s32 D_0044FA30;
extern s32 D_0044FA34;
extern s32 D_0044FA38;
extern f32 D_0047042C;
void func_0021F740(u8 *arg0) {
    s32 *spB0;
    s32 spC0;
    s32 spE0;
    s32 sp100;
    s32 sp120;
    s16 sp138;
    u8 sp13C;
    u8 sp13D;
    u8 sp13E;
    u8 sp13F;
    f32 sp140;
    f32 sp144;
    f32 sp150;
    f32 sp154;
    f32 sp158;
    f32 sp15C;
    s32 sp160;
    s32 sp164;
    f32 sp168;
    f32 sp16C;
    f32 sp170;
    f32 sp174;
    f32 sp178;
    f32 sp17C;
    s32 *var_a3;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 *var_v1_6;
    s32 *var_v1_7;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_14;
    f32 temp_f0_15;
    f32 temp_f0_16;
    f32 temp_f0_17;
    f32 temp_f0_18;
    f32 temp_f0_19;
    f32 temp_f0_20;
    f32 temp_f0_21;
    f32 temp_f0_22;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f20;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_v0_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a2_6;
    s32 temp_a2_7;
    s32 temp_a2_8;
    s32 temp_s0;
    s32 var_a2;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a1_10;
    u8 *temp_a1_11;
    u8 *temp_a1_12;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a1_4;
    u8 *temp_a1_5;
    u8 *temp_a1_6;
    u8 *temp_a1_7;
    u8 *temp_a1_8;
    u8 *temp_a1_9;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_a3;
    u8 *temp_a3_10;
    u8 *temp_a3_11;
    u8 *temp_a3_12;
    u8 *temp_a3_13;
    u8 *temp_a3_14;
    u8 *temp_a3_15;
    u8 *temp_a3_2;
    u8 *temp_a3_3;
    u8 *temp_a3_4;
    u8 *temp_a3_5;
    u8 *temp_a3_6;
    u8 *temp_a3_7;
    u8 *temp_a3_8;
    u8 *temp_a3_9;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;

    temp_s3 = (u8 *)(gBtlSys);
    spB0 = &D_0044F760;
    amDraw_SetPacketMode(1);
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x04040000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04040000);
    D_00470238 = 0;
    temp_a0_2 = *(s16 *)((u8 *)temp_s3 + 0xE42);
    if (temp_a0_2 == -1) {
        func_00228430(0);
        func_0022B900(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x1C), &sp120, 0);
        func_00228410();
    } else {
        temp_s0 = (func_0021C460(temp_a0_2) != 0) ? 3 : 2;
        func_00228430(0);
        func_0022B900(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C) + (temp_s0 * 4)), &sp120, 0);
        func_00228410();
    }
    sp144 -= (170.0f + sp154) - 5.0f;
    func_0022C6B0(&sp120);
    temp_f20 = 10.0f + (sp144 + sp15C);
    func_00228430(0);
    func_0022B900(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x20), &sp120, 0);
    func_00228410();
    func_00228AC0(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x20), &sp100, -1, 0);
    func_00228AC0(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x28), &spE0, -1, 0);
    func_00228AC0(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xEDC)) + 0x1C)) + 0x30), &spC0, -1, 0);
    sp138 = (s16) D_0044F990;
    temp_a2 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_v0 = temp_a2 + *(*(s32 *)((u8 *)temp_a2 + 0x14) + temp_a2 + ((D_0044F990 - *(s32 *)((u8 *)temp_a2 + 0x18)) * 4));
    if (*(s16 *)((u8 *)arg0 + 8) == 0) {
        var_v1 = &sp100;
    } else {
        var_v1 = &spE0;
    }
    sp170 = *(f32 *)((u8 *)var_v1 + 0);
    sp174 = *(f32 *)((u8 *)var_v1 + 4);
    sp178 = *(f32 *)((u8 *)var_v1 + 8);
    sp17C = *(f32 *)((u8 *)var_v1 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v1 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v1 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v1 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v1 + 0x13);
    sp144 = temp_f20;
    temp_f0 = -((f32) *(s16 *)((u8 *)temp_v0 + 0x10) - 1.0f) / 2.0f;
    sp150 = temp_f0;
    sp158 = -temp_f0;
    temp_f0_2 = -((f32) *(s16 *)((u8 *)temp_v0 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_2;
    sp15C = -temp_f0_2;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_v0 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_v0 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F994;
    temp_a2_2 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1 = temp_a2_2 + *(*(s32 *)((u8 *)temp_a2_2 + 0x14) + temp_a2_2 + ((D_0044F994 - *(s32 *)((u8 *)temp_a2_2 + 0x18)) * 4));
    if (*(s16 *)((u8 *)arg0 + 8) == 1) {
        var_v1_2 = &sp100;
    } else {
        var_v1_2 = &spE0;
    }
    sp170 = *(f32 *)((u8 *)var_v1_2 + 0);
    sp174 = *(f32 *)((u8 *)var_v1_2 + 4);
    sp178 = *(f32 *)((u8 *)var_v1_2 + 8);
    sp17C = *(f32 *)((u8 *)var_v1_2 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v1_2 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v1_2 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v1_2 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v1_2 + 0x13);
    sp140 = 20.0f + ((D_0047042C / 2.0f) - (*(f32 *)((u8 *)spB0 + 8) / 2.0f));
    sp144 = 15.0f + (sp144 + sp15C);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1 + 0x10) - 1.0f;
    temp_f0_3 = -((f32) *(s16 *)((u8 *)temp_a1 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_3;
    sp15C = -temp_f0_3;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    temp_a2_3 = *(D_0044FA24 + (*(s16 *)((u8 *)temp_s3 + 0xE48) * 4));
    sp138 = (s16) temp_a2_3;
    temp_a3 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_2 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((temp_a2_3 - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
    sp140 = 15.0f + (D_0047042C / 2.0f);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_2 + 0x10) - 1.0f;
    temp_f0_4 = -((f32) *(s16 *)((u8 *)temp_a1_2 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_4;
    sp15C = -temp_f0_4;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_2 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_2 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F998;
    temp_a3_2 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_3 = temp_a3_2 + *(*(s32 *)((u8 *)temp_a3_2 + 0x14) + temp_a3_2 + ((D_0044F998 - *(s32 *)((u8 *)temp_a3_2 + 0x18)) * 4));
    if (*(s16 *)((u8 *)temp_s3 + 0xE48) != 3) {
        var_v1_3 = &spC0;
    } else {
        var_v1_3 = &sp100;
        if (*(s16 *)((u8 *)arg0 + 8) == 2) {

        } else {
            var_v1_3 = &spE0;
        }
    }
    sp170 = *(f32 *)((u8 *)var_v1_3 + 0);
    sp174 = *(f32 *)((u8 *)var_v1_3 + 4);
    sp178 = *(f32 *)((u8 *)var_v1_3 + 8);
    sp17C = *(f32 *)((u8 *)var_v1_3 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v1_3 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v1_3 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v1_3 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v1_3 + 0x13);
    sp140 = 20.0f + ((D_0047042C / 2.0f) - (*(f32 *)((u8 *)spB0 + 8) / 2.0f));
    sp144 = 15.0f + (sp144 + sp15C);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_3 + 0x10) - 1.0f;
    temp_f0_5 = -((f32) *(s16 *)((u8 *)temp_a1_3 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_5;
    sp15C = -temp_f0_5;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_3 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_3 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    temp_a2_4 = *(D_0044FA28 + (*(s16 *)((u8 *)temp_s3 + 0xE4A) * 4));
    sp138 = (s16) temp_a2_4;
    temp_a3_3 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_4 = temp_a3_3 + *(*(s32 *)((u8 *)temp_a3_3 + 0x14) + temp_a3_3 + ((temp_a2_4 - *(s32 *)((u8 *)temp_a3_3 + 0x18)) * 4));
    sp140 = 15.0f + (D_0047042C / 2.0f);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_4 + 0x10) - 1.0f;
    temp_f0_6 = -((f32) *(s16 *)((u8 *)temp_a1_4 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_6;
    sp15C = -temp_f0_6;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_4 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_4 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F99C;
    temp_a3_4 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a0_3 = *(s16 *)((u8 *)temp_s3 + 0xE48);
    temp_a1_5 = temp_a3_4 + *(*(s32 *)((u8 *)temp_a3_4 + 0x14) + temp_a3_4 + ((D_0044F99C - *(s32 *)((u8 *)temp_a3_4 + 0x18)) * 4));
    if (temp_a0_3 != 3) {
        if (temp_a0_3 == 4) {
            goto block_18;
        }
        if (*(s16 *)((u8 *)arg0 + 8) == 3) {
            var_v1_4 = &sp100;
        } else {
            var_v1_4 = &spE0;
        }
    } else {
block_18:
        var_v1_4 = &spC0;
    }
    sp170 = *(f32 *)((u8 *)var_v1_4 + 0);
    sp174 = *(f32 *)((u8 *)var_v1_4 + 4);
    sp178 = *(f32 *)((u8 *)var_v1_4 + 8);
    sp17C = *(f32 *)((u8 *)var_v1_4 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v1_4 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v1_4 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v1_4 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v1_4 + 0x13);
    sp140 = 20.0f + ((D_0047042C / 2.0f) - (*(f32 *)((u8 *)spB0 + 8) / 2.0f));
    sp144 = 15.0f + (sp144 + sp15C);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_5 + 0x10) - 1.0f;
    temp_f0_7 = -((f32) *(s16 *)((u8 *)temp_a1_5 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_7;
    sp15C = -temp_f0_7;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_5 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_5 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    temp_a2_5 = *(D_0044FA2C + (*(s16 *)((u8 *)temp_s3 + 0xE4C) * 4));
    sp138 = (s16) temp_a2_5;
    temp_a3_5 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_6 = temp_a3_5 + *(*(s32 *)((u8 *)temp_a3_5 + 0x14) + temp_a3_5 + ((temp_a2_5 - *(s32 *)((u8 *)temp_a3_5 + 0x18)) * 4));
    sp140 = 15.0f + (D_0047042C / 2.0f);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_6 + 0x10) - 1.0f;
    temp_f0_8 = -((f32) *(s16 *)((u8 *)temp_a1_6 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_8;
    sp15C = -temp_f0_8;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_6 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_6 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F9A0;
    temp_a3_6 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_v0_2 = *(s16 *)((u8 *)temp_s3 + 0xE48);
    temp_a1_7 = temp_a3_6 + *(*(s32 *)((u8 *)temp_a3_6 + 0x14) + temp_a3_6 + ((D_0044F9A0 - *(s32 *)((u8 *)temp_a3_6 + 0x18)) * 4));
    if (temp_v0_2 != 3) {
        if (temp_v0_2 == 4) {
            goto block_26;
        }
        if (*(s16 *)((u8 *)arg0 + 8) == 4) {
            var_v1_5 = &sp100;
        } else {
            var_v1_5 = &spE0;
        }
    } else {
block_26:
        var_v1_5 = &spC0;
    }
    sp170 = *(f32 *)((u8 *)var_v1_5 + 0);
    sp174 = *(f32 *)((u8 *)var_v1_5 + 4);
    sp178 = *(f32 *)((u8 *)var_v1_5 + 8);
    sp17C = *(f32 *)((u8 *)var_v1_5 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v1_5 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v1_5 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v1_5 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v1_5 + 0x13);
    sp140 = 20.0f + ((D_0047042C / 2.0f) - (*(f32 *)((u8 *)spB0 + 8) / 2.0f));
    sp144 = 15.0f + (sp144 + sp15C);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_7 + 0x10) - 1.0f;
    temp_f0_9 = -((f32) *(s16 *)((u8 *)temp_a1_7 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_9;
    sp15C = -temp_f0_9;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_7 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_7 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    temp_a2_6 = *(D_0044FA30 + (*(s16 *)((u8 *)temp_s3 + 0xE4E) * 4));
    sp138 = (s16) temp_a2_6;
    temp_a3_7 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_8 = temp_a3_7 + *(*(s32 *)((u8 *)temp_a3_7 + 0x14) + temp_a3_7 + ((temp_a2_6 - *(s32 *)((u8 *)temp_a3_7 + 0x18)) * 4));
    sp140 = 15.0f + (D_0047042C / 2.0f);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_8 + 0x10) - 1.0f;
    temp_f0_10 = -((f32) *(s16 *)((u8 *)temp_a1_8 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_10;
    sp15C = -temp_f0_10;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_8 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_8 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F9A4;
    temp_a3_8 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a0_4 = *(s16 *)((u8 *)temp_s3 + 0xE48);
    temp_a1_9 = temp_a3_8 + *(*(s32 *)((u8 *)temp_a3_8 + 0x14) + temp_a3_8 + ((D_0044F9A4 - *(s32 *)((u8 *)temp_a3_8 + 0x18)) * 4));
    if (temp_a0_4 != 3) {
        if (temp_a0_4 == 4) {
            goto block_34;
        }
        var_v1_6 = &sp100;
        if (*(s16 *)((u8 *)arg0 + 8) == 5) {

        } else {
            var_v1_6 = &spE0;
        }
    } else {
block_34:
        var_v1_6 = &spC0;
    }
    sp170 = *(f32 *)((u8 *)var_v1_6 + 0);
    sp174 = *(f32 *)((u8 *)var_v1_6 + 4);
    sp178 = *(f32 *)((u8 *)var_v1_6 + 8);
    sp17C = *(f32 *)((u8 *)var_v1_6 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v1_6 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v1_6 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v1_6 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v1_6 + 0x13);
    sp140 = 20.0f + ((D_0047042C / 2.0f) - (*(f32 *)((u8 *)spB0 + 8) / 2.0f));
    sp144 = 15.0f + (sp144 + sp15C);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_9 + 0x10) - 1.0f;
    temp_f0_11 = -((f32) *(s16 *)((u8 *)temp_a1_9 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_11;
    sp15C = -temp_f0_11;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_9 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_9 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    temp_a2_7 = *(D_0044FA34 + (*(s16 *)((u8 *)temp_s3 + 0xE50) * 4));
    sp138 = (s16) temp_a2_7;
    temp_a3_9 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_10 = temp_a3_9 + *(*(s32 *)((u8 *)temp_a3_9 + 0x14) + temp_a3_9 + ((temp_a2_7 - *(s32 *)((u8 *)temp_a3_9 + 0x18)) * 4));
    sp140 = 15.0f + (D_0047042C / 2.0f);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_10 + 0x10) - 1.0f;
    temp_f0_12 = -((f32) *(s16 *)((u8 *)temp_a1_10 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_12;
    sp15C = -temp_f0_12;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_10 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_10 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F9A8;
    temp_a3_10 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_11 = temp_a3_10 + *(*(s32 *)((u8 *)temp_a3_10 + 0x14) + temp_a3_10 + ((D_0044F9A8 - *(s32 *)((u8 *)temp_a3_10 + 0x18)) * 4));
    if (*(s16 *)((u8 *)arg0 + 8) == 6) {
        var_v1_7 = &sp100;
    } else {
        var_v1_7 = &spE0;
    }
    sp170 = *(f32 *)((u8 *)var_v1_7 + 0);
    sp174 = *(f32 *)((u8 *)var_v1_7 + 4);
    sp178 = *(f32 *)((u8 *)var_v1_7 + 8);
    sp17C = *(f32 *)((u8 *)var_v1_7 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v1_7 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v1_7 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v1_7 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v1_7 + 0x13);
    sp140 = 20.0f + ((D_0047042C / 2.0f) - (*(f32 *)((u8 *)spB0 + 8) / 2.0f));
    sp144 = 15.0f + (sp144 + sp15C);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_11 + 0x10) - 1.0f;
    temp_f0_13 = -((f32) *(s16 *)((u8 *)temp_a1_11 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_13;
    sp15C = -temp_f0_13;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_11 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_11 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    temp_a2_8 = *(D_0044FA38 + (*(s16 *)((u8 *)temp_s3 + 0xE52) * 4));
    sp138 = (s16) temp_a2_8;
    temp_a3_11 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_a1_12 = temp_a3_11 + *(*(s32 *)((u8 *)temp_a3_11 + 0x14) + temp_a3_11 + ((temp_a2_8 - *(s32 *)((u8 *)temp_a3_11 + 0x18)) * 4));
    sp140 = 15.0f + (D_0047042C / 2.0f);
    sp150 = 0.0f;
    sp158 = (f32) *(s16 *)((u8 *)temp_a1_12 + 0x10) - 1.0f;
    temp_f0_14 = -((f32) *(s16 *)((u8 *)temp_a1_12 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_14;
    sp15C = -temp_f0_14;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_a1_12 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_a1_12 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp140 = D_0047042C / 2.0f;
    sp138 = (s16) D_0044F9AC;
    temp_a3_12 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_v1 = temp_a3_12 + *(*(s32 *)((u8 *)temp_a3_12 + 0x14) + temp_a3_12 + ((D_0044F9AC - *(s32 *)((u8 *)temp_a3_12 + 0x18)) * 4));
    if (*(s16 *)((u8 *)arg0 + 8) == 7) {
        var_v0 = &sp100;
    } else {
        var_v0 = &spE0;
    }
    sp170 = *(f32 *)((u8 *)var_v0 + 0);
    sp174 = *(f32 *)((u8 *)var_v0 + 4);
    sp178 = *(f32 *)((u8 *)var_v0 + 8);
    sp17C = *(f32 *)((u8 *)var_v0 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v0 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v0 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v0 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v0 + 0x13);
    sp144 = 15.0f + (sp144 + sp15C);
    temp_f0_15 = -((f32) *(s16 *)((u8 *)temp_v1 + 0x10) - 1.0f) / 2.0f;
    sp150 = temp_f0_15;
    sp158 = -temp_f0_15;
    temp_f0_16 = -((f32) *(s16 *)((u8 *)temp_v1 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_16;
    sp15C = -temp_f0_16;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_v1 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_v1 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    if (*(s32 *)((u8 *)arg0 + 0x18) == 0) {
        var_a2 = 9;
    } else {
        var_a2 = D_0044F9B0;
    }
    sp138 = (s16) var_a2;
    temp_a3_13 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_v1_2 = temp_a3_13 + *(*(s32 *)((u8 *)temp_a3_13 + 0x14) + temp_a3_13 + ((var_a2 - *(s32 *)((u8 *)temp_a3_13 + 0x18)) * 4));
    if (*(s16 *)((u8 *)arg0 + 8) == 8) {
        var_v0_2 = &sp100;
    } else {
        var_v0_2 = &spE0;
    }
    sp170 = *(f32 *)((u8 *)var_v0_2 + 0);
    sp174 = *(f32 *)((u8 *)var_v0_2 + 4);
    sp178 = *(f32 *)((u8 *)var_v0_2 + 8);
    sp17C = *(f32 *)((u8 *)var_v0_2 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v0_2 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v0_2 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v0_2 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v0_2 + 0x13);
    sp144 = 15.0f + (sp144 + sp15C);
    temp_f0_17 = -((f32) *(s16 *)((u8 *)temp_v1_2 + 0x10) - 1.0f) / 2.0f;
    sp150 = temp_f0_17;
    sp158 = -temp_f0_17;
    temp_f0_18 = -((f32) *(s16 *)((u8 *)temp_v1_2 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_18;
    sp15C = -temp_f0_18;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_v1_2 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_v1_2 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F9B4;
    temp_a3_14 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_v1_3 = temp_a3_14 + *(*(s32 *)((u8 *)temp_a3_14 + 0x14) + temp_a3_14 + ((D_0044F9B4 - *(s32 *)((u8 *)temp_a3_14 + 0x18)) * 4));
    if (*(s16 *)((u8 *)arg0 + 8) == 9) {
        var_v0_3 = &sp100;
    } else {
        var_v0_3 = &spE0;
    }
    sp170 = *(f32 *)((u8 *)var_v0_3 + 0);
    sp174 = *(f32 *)((u8 *)var_v0_3 + 4);
    sp178 = *(f32 *)((u8 *)var_v0_3 + 8);
    sp17C = *(f32 *)((u8 *)var_v0_3 + 0xC);
    sp13C = *(u8 *)((u8 *)var_v0_3 + 0x10);
    sp13D = *(u8 *)((u8 *)var_v0_3 + 0x11);
    sp13E = *(u8 *)((u8 *)var_v0_3 + 0x12);
    sp13F = *(u8 *)((u8 *)var_v0_3 + 0x13);
    sp144 = 15.0f + (sp144 + sp15C);
    temp_f0_19 = -((f32) *(s16 *)((u8 *)temp_v1_3 + 0x10) - 1.0f) / 2.0f;
    sp150 = temp_f0_19;
    sp158 = -temp_f0_19;
    temp_f0_20 = -((f32) *(s16 *)((u8 *)temp_v1_3 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_20;
    sp15C = -temp_f0_20;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_v1_3 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_v1_3 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    sp138 = (s16) D_0044F9B8;
    temp_a3_15 = *(u8 **)((u8 *)temp_s3 + 0xED8);
    temp_v0_3 = temp_a3_15 + *(*(s32 *)((u8 *)temp_a3_15 + 0x14) + temp_a3_15 + ((D_0044F9B8 - *(s32 *)((u8 *)temp_a3_15 + 0x18)) * 4));
    if (*(s16 *)((u8 *)arg0 + 8) == 0xA) {
        var_a3 = &sp100;
    } else {
        var_a3 = &spE0;
    }
    sp170 = *(f32 *)((u8 *)var_a3 + 0);
    sp174 = *(f32 *)((u8 *)var_a3 + 4);
    sp178 = *(f32 *)((u8 *)var_a3 + 8);
    sp17C = *(f32 *)((u8 *)var_a3 + 0xC);
    sp13C = *(u8 *)((u8 *)var_a3 + 0x10);
    sp13D = *(u8 *)((u8 *)var_a3 + 0x11);
    sp13E = *(u8 *)((u8 *)var_a3 + 0x12);
    sp13F = *(u8 *)((u8 *)var_a3 + 0x13);
    sp144 = 15.0f + (sp144 + sp15C);
    temp_f0_21 = -((f32) *(s16 *)((u8 *)temp_v0_3 + 0x10) - 1.0f) / 2.0f;
    sp150 = temp_f0_21;
    sp158 = -temp_f0_21;
    temp_f0_22 = -((f32) *(s16 *)((u8 *)temp_v0_3 + 0x12) - 1.0f) / 2.0f;
    sp154 = temp_f0_22;
    sp15C = -temp_f0_22;
    sp164 = 0x3F000000;
    sp160 = 0x3F000000;
    sp16C = (f32) *(s16 *)((u8 *)temp_v0_3 + 0x12) - 0.5f;
    sp168 = (f32) *(s16 *)((u8 *)temp_v0_3 + 0x10) - 0.5f;
    func_0022C6B0(&sp120);
    amDraw_SetPacketMode(0);
}
