/* Draft (not built): func_002E40D0 at 0x002E40D0, size 0x3C4, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E40D0.s */

// src/unk/unk_2E4030.c func_002E40D0 diff diff=80/241
extern void func_00134690(s32, s32, void *, s32, s32, s32);
extern void amDraw_FlushPacket(void);
f32 amMath_CosI(s32);
f32 amMath_SinI(s32);
s32 amVram_Apply(s32);
extern s128 D_00456E80;
extern s128 D_00456E90;
extern s128 D_00456EA0;
extern void func_00135D40(void *, void *, void *);
void func_002E40D0(void) {
    s128 sp80;
    s32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 spA0;
    f32 spA4;
    f32 *var_s0;
    f32 *var_s1;
    s32 *var_s6;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;

    var_s3 = 0;
    var_s2 = 0;
    var_s1 = &spA4;
    var_s0 = &sp94;
    var_s6 = &sp8C;
    spA0 = (s128) D_00456E80;
    sp90 = (s128) D_00456E90;
    sp80 = D_00456EA0;
    do {
        func_00134690(1, 0x100C36, 0, -1, 0, 0);
        spA0 = 0.0f;
        *var_s1 = 0.0f;
        sp90 = 0.43554688f;
        *var_s0 = 0.43554688f;
        *var_s6 = 0x3F800000;
        var_s5 = M2C_BITWISE(s32, ((f32) var_s2 / 16.0f));
        var_s4 = M2C_BITWISE(s32, ((f32) ((var_s3 + 1) << 0x10) / 16.0f));
        func_00135D40(&spA0, &sp80, &sp90);
        spA0 = 160.0f * amMath_CosI(var_s4);
        *var_s1 = 160.0f * amMath_SinI(var_s4);
        sp90 = 0.43554688f + (0.30298913f * amMath_CosI(var_s4 + 0x7FFF + 1));
        *var_s0 = 0.43554688f + (0.30298913f * amMath_SinI(var_s4 + 0x7FFF + 1));
        *var_s6 = 0x3F800000;
        func_00135D40(&spA0, &sp80, &sp90);
        spA0 = 160.0f * amMath_CosI(var_s5);
        *var_s1 = 160.0f * amMath_SinI(var_s5);
        sp90 = 0.43554688f + (0.30298913f * amMath_CosI(var_s5 + 0x7FFF + 1));
        *var_s0 = 0.43554688f + (0.30298913f * amMath_SinI(var_s5 + 0x7FFF + 1));
        func_00135D40(&spA0, &sp80, &sp90);
        spA0 = 230.0f * amMath_CosI(var_s4);
        *var_s1 = 230.0f * amMath_SinI(var_s4);
        sp90 = 0.43554688f + (0.43554688f * amMath_CosI(var_s4 + 0x7FFF + 1));
        *var_s0 = 0.43554688f + (0.43554688f * amMath_SinI(var_s4 + 0x7FFF + 1));
        *var_s6 = 0x3F800000;
        func_00135D40(&spA0, &sp80, &sp90);
        spA0 = 230.0f * amMath_CosI(var_s5);
        *var_s1 = 230.0f * amMath_SinI(var_s5);
        sp90 = 0.43554688f + (0.43554688f * amMath_CosI(var_s5 + 0x7FFF + 1));
        *var_s0 = 0.43554688f + (0.43554688f * amMath_SinI(var_s5 + 0x7FFF + 1));
        func_00135D40(&spA0, &sp80, &sp90);
        amDraw_FlushPacket();
        var_s3 += 1;
        var_s2 += 0x10000;
    } while ((f32) var_s3 < 16.0f);
    amVram_Apply(2);
}
