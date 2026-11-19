/* Draft (not built): func_00284F10 at 0x00284F10, size 0x41C, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 120 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3F8, original 0x41C
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00284F10.s */

// src/unk/unk_284AA0.c func_00284F10 size diff=120/254
f32 amMath_CosI(s32);
f32 amMath_SinI(s32);
s32 amSofdec_Draw(s32, s128 *, s128, f32 *);
s32 amVram_Apply(s32);
extern s128 D_00453570;
extern s128 D_00453580;
extern s128 D_00453590;
extern void func_00135D40(void *, void *, void *);
void func_00284F10(u8 *arg0) {
    s128 sp90;
    s32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spB4;
    f32 *var_s0;
    f32 *var_s1;
    s32 *var_s7;
    s32 temp_a0;
    s32 temp_f0;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    u8 *var_s6;

    var_s6 = arg0;
    spB0 = (s128) D_00453570;
    spA0 = (s128) D_00453580;
    sp90 = D_00453590;
    temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x230)) + 0x30);
    if (temp_a0 >= 0) {
        temp_v0 = amSofdec_Draw(temp_a0, &sp90, D_00453580, &spA0);
        if ((temp_v0 != 2) && (temp_v0 != 1)) {
            return;
        }
        var_s3 = 0;
        var_s2 = 0;
        var_s1 = &spB4;
        var_s0 = &spA4;
        var_s7 = &sp9C;
        do {
            func_00134690(1, 0x100C36, NULL, -1, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
            spB0 = 0.0f;
            *var_s1 = 0.0f;
            spA0 = 0.43554688f;
            *var_s0 = 0.43554688f;
            temp_f0 = *(s32 *)((u8 *)var_s6 + 0x284);
            *var_s7 = temp_f0;
            var_s5 = temp_f0;
            var_s4 = M2C_BITWISE(s32, ((f32) ((var_s3 + 1) << 0x10) / 16.0f));
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 160.0f * amMath_CosI(var_s4);
            *var_s1 = 160.0f * amMath_SinI(var_s4);
            spA0 = 0.43554688f + (0.2903646f * amMath_CosI(var_s4 + 0x7FFF + 1));
            *var_s0 = 0.43554688f + (0.2903646f * amMath_SinI(var_s4 + 0x7FFF + 1));
            *var_s7 = M2C_BITWISE(s32, (0.6f * M2C_BITWISE(f32, *(s32 *)((u8 *)var_s6 + 0x284))));
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 160.0f * amMath_CosI(var_s5);
            *var_s1 = 160.0f * amMath_SinI(var_s5);
            spA0 = 0.43554688f + (0.2903646f * amMath_CosI(var_s5 + 0x7FFF + 1));
            *var_s0 = 0.43554688f + (0.2903646f * amMath_SinI(var_s5 + 0x7FFF + 1));
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 240.0f * amMath_CosI(var_s4);
            *var_s1 = 240.0f * amMath_SinI(var_s4);
            spA0 = 0.43554688f + (0.43554688f * amMath_CosI(var_s4 + 0x7FFF + 1));
            *var_s0 = 0.43554688f + (0.43554688f * amMath_SinI(var_s4 + 0x7FFF + 1));
            *var_s7 = 0;
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 240.0f * amMath_CosI(var_s5);
            *var_s1 = 240.0f * amMath_SinI(var_s5);
            spA0 = 0.43554688f + (0.43554688f * amMath_CosI(var_s5 + 0x7FFF + 1));
            *var_s0 = 0.43554688f + (0.43554688f * amMath_SinI(var_s5 + 0x7FFF + 1));
            func_00135D40(&spB0, &sp90, &spA0);
            amDraw_FlushPacket();
            var_s3 += 1;
            var_s2 += 0x10000;
        } while ((f32) var_s3 < 16.0f);
        amVram_Apply(2);
    }
}
