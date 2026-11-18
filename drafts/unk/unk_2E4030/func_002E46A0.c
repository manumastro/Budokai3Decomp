/* Draft (not built): func_002E46A0 at 0x002E46A0, size 0x414, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); not match 'amModel_SetCurrent(int, int)' @ 145: amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 4), 0x7000, D_00456E60, &spA0);
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E46A0.s */

// src/unk/unk_2E4030.c func_002E46A0 cerr diff=-1/0
extern void amModel_SetCurrent(s32, s32);
extern void func_00134690(s32, s32, void *, s32, s32, s32);
extern void amDraw_FlushPacket(void);
f32 amMath_CosI(f32);
f32 amMath_SinI(f32);
extern s128 D_00456E50;
extern s128 D_00456E60;
extern s128 D_00456E70;
extern s32 D_0046F4A8;
extern void func_00135D40(void *, void *, void *);
void func_002E46A0(u8 *arg0, s64 arg1) {
    s128 sp90;
    s32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spB4;
    f32 temp_f0;
    f32 temp_f1;
    s32 var_s2;
    s32 var_s3;

    spB0 = (s128) D_00456E50;
    spA0 = (s128) D_00456E60;
    sp90 = D_00456E70;
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 4), 0x7000, D_00456E60, &spA0);
    var_s3 = 0;
    var_s2 = 0;
    do {
        func_00134690(1, 0x100C36, 0, *(&D_0046F4A8 + ((s64) (arg1 << 0x30) >> 0x30)), 0, 0);
        spB0 = 0.0f;
        spB4 = 0.0f;
        spA0 = 0.29003906f;
        spA4 = 0.29003906f;
        sp9C = 0x3F800000;
        temp_f1 = (f32) var_s2 / 16.0f;
        temp_f0 = (f32) ((var_s3 + 1) << 0x10) / 16.0f;
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 160.0f * amMath_CosI(temp_f0);
        spB4 = 160.0f * amMath_SinI(temp_f0);
        spA0 = 0.29003906f + (0.20176631f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        spA4 = 0.29003906f + (0.20176631f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        sp9C = 0x3F800000;
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 160.0f * amMath_CosI(temp_f1);
        spB4 = 160.0f * amMath_SinI(temp_f1);
        spA0 = 0.29003906f + (0.20176631f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) + 0x7FFF + 1))));
        spA4 = 0.29003906f + (0.20176631f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) + 0x7FFF + 1))));
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 230.0f * amMath_CosI(temp_f0);
        spB4 = 230.0f * amMath_SinI(temp_f0);
        spA0 = 0.29003906f + (0.29003906f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        spA4 = 0.29003906f + (0.29003906f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        sp9C = 0x3F800000;
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 230.0f * amMath_CosI(temp_f1);
        spB4 = 230.0f * amMath_SinI(temp_f1);
        spA0 = 0.29003906f + (0.29003906f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) + 0x7FFF + 1))));
        spA4 = 0.29003906f + (0.29003906f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) + 0x7FFF + 1))));
        func_00135D40(&spB0, &sp90, &spA0);
        amDraw_FlushPacket();
        var_s3 += 1;
        var_s2 += 0x10000;
    } while ((f32) var_s3 < 16.0f);
}
