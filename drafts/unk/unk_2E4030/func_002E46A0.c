/* Draft (not built): func_002E46A0 at 0x002E46A0, size 0x414, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 116 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x478, original 0x414
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E46A0.s */

// src/unk/unk_2E4030.c func_002E46A0 size diff=116/286
extern void amModel_SetCurrent(s32, s32);
extern void func_00134690(s32, s32, void *, s32, s32, s32);
extern void amDraw_FlushPacket(void);
f32 amMath_CosI(s32);
f32 amMath_SinI(s32);
extern s128 D_00456E50;
extern s128 D_00456E60;
extern s128 D_00456E70;
extern s32 D_0046F4A8;
extern void func_00135D40(void *, void *, void *);
void func_002E46A0(u8 *arg0, s64 arg1) {
    s128 sp90;
    s32 sp9C;
    f32 spA0;
    s32 spA4;
    f32 spB0;
    f32 spB4;
    f32 *var_s1;
    s32 *var_s6;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s64 var_s0;
    u8 *var_s7;

    var_s0 = arg1;
    spB0 = (s128) D_00456E50;
    spA0 = (s128) D_00456E60;
    sp90 = D_00456E70;
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 4), 0x7000);
    var_s3 = 0;
    var_s2 = 0;
    var_s7 = (unsigned char *)(&D_0046F4A8 + ((s64) (var_s0 << 0x30) >> 0x30));
    var_s1 = &spB4;
    var_s0 = (s64) &spA4;
    var_s6 = &sp9C;
    do {
        func_00134690(1, 0x100C36, NULL, (s32) *var_s7, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
        spB0 = 0.0f;
        *var_s1 = 0.0f;
        spA0 = 0.29003906f;
        *(s32 *)var_s0 = 0.29003906f;
        *var_s6 = 0x3F800000;
        var_s5 = M2C_BITWISE(s32, ((f32) var_s2 / 16.0f));
        var_s4 = M2C_BITWISE(s32, ((f32) ((var_s3 + 1) << 0x10) / 16.0f));
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 160.0f * amMath_CosI(var_s4);
        *var_s1 = 160.0f * amMath_SinI(var_s4);
        spA0 = 0.29003906f + (0.20176631f * amMath_CosI(var_s4 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.20176631f * amMath_SinI(var_s4 + 0x7FFF + 1)));
        *var_s6 = 0x3F800000;
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 160.0f * amMath_CosI(var_s5);
        *var_s1 = 160.0f * amMath_SinI(var_s5);
        spA0 = 0.29003906f + (0.20176631f * amMath_CosI(var_s5 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.20176631f * amMath_SinI(var_s5 + 0x7FFF + 1)));
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 230.0f * amMath_CosI(var_s4);
        *var_s1 = 230.0f * amMath_SinI(var_s4);
        spA0 = 0.29003906f + (0.29003906f * amMath_CosI(var_s4 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.29003906f * amMath_SinI(var_s4 + 0x7FFF + 1)));
        *var_s6 = 0x3F800000;
        func_00135D40(&spB0, &sp90, &spA0);
        spB0 = 230.0f * amMath_CosI(var_s5);
        *var_s1 = 230.0f * amMath_SinI(var_s5);
        spA0 = 0.29003906f + (0.29003906f * amMath_CosI(var_s5 + 0x7FFF + 1));
        *(s32 *)var_s0 = (f32) (0.29003906f + (0.29003906f * amMath_SinI(var_s5 + 0x7FFF + 1)));
        func_00135D40(&spB0, &sp90, &spA0);
        amDraw_FlushPacket();
        var_s3 += 1;
        var_s2 += 0x10000;
    } while ((f32) var_s3 < 16.0f);
}
