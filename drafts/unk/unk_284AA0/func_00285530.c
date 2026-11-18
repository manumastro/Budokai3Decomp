/* Draft (not built): func_00285530 at 0x00285530, size 0x420, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  not match 'amModel_SetCurrent(int, int)' @ 81: amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 4), 0x7000, D_00453550, &spB0);
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00285530.s */

// src/unk/unk_284AA0.c func_00285530 cerr diff=-1/0
f32 amMath_CosI(f32);
f32 amMath_SinI(f32);
extern s128 D_00453540;
extern s128 D_00453550;
extern s128 D_00453560;
extern s32 D_0046B840;
extern void func_00135D40(void *, void *, void *);
void func_00285530(u8 *arg0, s64 arg1) {
    s128 spA0;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spC0;
    f32 spC4;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 var_s3;

    spC0 = (s128) D_00453540;
    spB0 = (s128) D_00453550;
    spA0 = D_00453560;
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 4), 0x7000, D_00453550, &spB0);
    var_s3 = 0;
    do {
        func_00134690(1, 0x100C36, 0, *(&D_0046B840 + (((s64) (arg1 << 0x30) >> 0x30) * 2)));
        spC0 = 0.0f;
        spC4 = 0.0f;
        spB0 = 0.29003906f;
        spB4 = 0.29003906f;
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x284);
        spAC = temp_f0;
        temp_f0_2 = (f32) ((var_s3 + 1) << 0x10) / 16.0f;
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 160.0f * amMath_CosI(temp_f0_2);
        spC4 = 160.0f * amMath_SinI(temp_f0_2);
        spB0 = 0.29003906f + (0.19335938f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
        spB4 = 0.29003906f + (0.19335938f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
        spAC = 0.6f * *(f32 *)((u8 *)arg0 + 0x284);
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 160.0f * amMath_CosI(temp_f0);
        spC4 = 160.0f * amMath_SinI(temp_f0);
        spB0 = 0.29003906f + (0.19335938f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        spB4 = 0.29003906f + (0.19335938f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 240.0f * amMath_CosI(temp_f0_2);
        spC4 = 240.0f * amMath_SinI(temp_f0_2);
        spB0 = 0.29003906f + (0.29003906f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
        spB4 = 0.29003906f + (0.29003906f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
        spAC = 0.0f;
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 240.0f * amMath_CosI(temp_f0);
        spC4 = 240.0f * amMath_SinI(temp_f0);
        spB0 = 0.29003906f + (0.29003906f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        spB4 = 0.29003906f + (0.29003906f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
        func_00135D40(&spC0, &spA0, &spB0);
        amDraw_FlushPacket();
        var_s3 += 1;
    } while ((f32) var_s3 < 16.0f);
}
