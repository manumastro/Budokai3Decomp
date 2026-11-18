/* Draft (not built): func_00284F10 at 0x00284F10, size 0x41C, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); , int)' does not match 'func_00134690(int, int, struct Vec4f *, int, int, int)' @ 90: func_00134690(1, 0x100C36, 0, -1);
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00284F10.s */

// src/unk/unk_284AA0.c func_00284F10 cerr diff=-1/0
f32 amMath_CosI(f32);
f32 amMath_SinI(f32);
s32 amSofdec_Draw(s32, s128 *, s128, f32 *);
s32 amVram_Apply(s32);
extern s128 D_00453570;
extern s128 D_00453580;
extern s128 D_00453590;
extern void func_00135D40(void *, void *, void *);
void func_00284F10(u8 *arg0) {
    s128 sp90;
    f32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spB4;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s3;

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
        do {
            func_00134690(1, 0x100C36, 0, -1);
            spB0 = 0.0f;
            spB4 = 0.0f;
            spA0 = 0.43554688f;
            spA4 = 0.43554688f;
            temp_f0 = *(f32 *)((u8 *)arg0 + 0x284);
            sp9C = temp_f0;
            temp_f0_2 = (f32) ((var_s3 + 1) << 0x10) / 16.0f;
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 160.0f * amMath_CosI(temp_f0_2);
            spB4 = 160.0f * amMath_SinI(temp_f0_2);
            spA0 = 0.43554688f + (0.2903646f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
            spA4 = 0.43554688f + (0.2903646f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
            sp9C = 0.6f * *(f32 *)((u8 *)arg0 + 0x284);
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 160.0f * amMath_CosI(temp_f0);
            spB4 = 160.0f * amMath_SinI(temp_f0);
            spA0 = 0.43554688f + (0.2903646f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
            spA4 = 0.43554688f + (0.2903646f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 240.0f * amMath_CosI(temp_f0_2);
            spB4 = 240.0f * amMath_SinI(temp_f0_2);
            spA0 = 0.43554688f + (0.43554688f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
            spA4 = 0.43554688f + (0.43554688f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0_2) + 0x7FFF + 1))));
            sp9C = 0.0f;
            func_00135D40(&spB0, &sp90, &spA0);
            spB0 = 240.0f * amMath_CosI(temp_f0);
            spB4 = 240.0f * amMath_SinI(temp_f0);
            spA0 = 0.43554688f + (0.43554688f * amMath_CosI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
            spA4 = 0.43554688f + (0.43554688f * amMath_SinI(M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f0) + 0x7FFF + 1))));
            func_00135D40(&spB0, &sp90, &spA0);
            amDraw_FlushPacket();
            var_s3 += 1;
        } while ((f32) var_s3 < 16.0f);
        amVram_Apply(2);
    }
}
