/* Draft (not built): func_00285530 at 0x00285530, size 0x420, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 111 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x46C, original 0x420
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00285530.s */

// src/unk/unk_284AA0.c func_00285530 size diff=111/283
f32 amMath_CosI(s32);
f32 amMath_SinI(s32);
extern s128 D_00453540;
extern s128 D_00453550;
extern s128 D_00453560;
extern s32 D_0046B840;
extern void func_00135D40(void *, void *, void *);
void func_00285530(u8 *arg0, s64 arg1) {
    s128 spA0;
    s32 spAC;
    f32 spB0;
    s32 spB4;
    f32 spC0;
    f32 spC4;
    f32 *var_s1;
    s32 *var_s7;
    s32 temp_f0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s64 var_s0;
    u8 *var_fp;
    u8 *var_s6;

    var_s6 = arg0;
    var_s0 = arg1;
    spC0 = (s128) D_00453540;
    spB0 = (s128) D_00453550;
    spA0 = D_00453560;
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 4), 0x7000);
    var_s3 = 0;
    var_s2 = 0;
    temp_v1 = ((s64) (var_s0 << 0x30) >> 0x30) * 2;
    var_s1 = &spC4;
    var_s0 = (s64) &spB4;
    var_s7 = &spAC;
    var_fp = (unsigned char *)(&D_0046B840 + temp_v1);
    do {
        func_00134690(1, 0x100C36, NULL, (s32) *var_fp, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
        spC0 = 0.0f;
        *var_s1 = 0.0f;
        spB0 = 0.29003906f;
        *(s32 *)var_s0 = 0.29003906f;
        temp_f0 = *(s32 *)((u8 *)var_s6 + 0x284);
        *var_s7 = temp_f0;
        var_s5 = temp_f0;
        var_s4 = M2C_BITWISE(s32, ((f32) ((var_s3 + 1) << 0x10) / 16.0f));
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 160.0f * amMath_CosI(var_s4);
        *var_s1 = 160.0f * amMath_SinI(var_s4);
        spB0 = 0.29003906f + (0.19335938f * amMath_CosI(var_s4 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.19335938f * amMath_SinI(var_s4 + 0x7FFF + 1)));
        *var_s7 = M2C_BITWISE(s32, (0.6f * M2C_BITWISE(f32, *(s32 *)((u8 *)var_s6 + 0x284))));
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 160.0f * amMath_CosI(var_s5);
        *var_s1 = 160.0f * amMath_SinI(var_s5);
        spB0 = 0.29003906f + (0.19335938f * amMath_CosI(var_s5 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.19335938f * amMath_SinI(var_s5 + 0x7FFF + 1)));
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 240.0f * amMath_CosI(var_s4);
        *var_s1 = 240.0f * amMath_SinI(var_s4);
        spB0 = 0.29003906f + (0.29003906f * amMath_CosI(var_s4 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.29003906f * amMath_SinI(var_s4 + 0x7FFF + 1)));
        *var_s7 = 0;
        func_00135D40(&spC0, &spA0, &spB0);
        spC0 = 240.0f * amMath_CosI(var_s5);
        *var_s1 = 240.0f * amMath_SinI(var_s5);
        spB0 = 0.29003906f + (0.29003906f * amMath_CosI(var_s5 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.29003906f * amMath_SinI(var_s5 + 0x7FFF + 1)));
        func_00135D40(&spC0, &spA0, &spB0);
        amDraw_FlushPacket();
        var_s3 += 1;
        var_s2 += 0x10000;
    } while ((f32) var_s3 < 16.0f);
}
