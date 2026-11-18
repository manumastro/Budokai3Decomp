/* Draft (not built): func_0030DC70 at 0x0030DC70, size 0x500, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 174 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4EC, original 0x500
 * Original: asm/nonmatchings/story/str_staffroll/func_0030DC70.s */

// src/story/str_staffroll.c func_0030DC70 size diff=174/315
f32 amMath_CosI(s32);
f32 amMath_SinI(s32);
s32 amSofdec_Draw(s32);
s32 amVram_Apply(s32);
s32 func_00136870(s32, s32, s32, s32);
s32 func_00137650(f32 *, s128 *, f32 *, s32);
extern s128 D_004590D0;
extern s128 D_004590E0;
extern s128 D_004590F0;
void func_0030DC70(u8 *arg0) {
    s128 spA0;
    s32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spC0;
    f32 spC4;
    s32 spC8;
    f32 *var_s0;
    f32 *var_s1;
    s32 *var_fp;
    s32 *var_s6;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    u8 *var_s7;

    var_s7 = arg0;
    temp_v0 = amSofdec_Draw(*(s32 *)((u8 *)arg0 + 0));
    switch (temp_v0) {                              /* irregular */
    case 0:
        /* fallthrough */
    case -1:
        return;
    case 1:
        temp_v1 = *(s32 *)((u8 *)var_s7 + 0xC);
        if (temp_v1 < 2) {
            *(s32 *)((u8 *)var_s7 + 0xC) = (s32) (temp_v1 + 1);
            return;
        }
    default:
block_15:
        var_s3 = 0;
        var_s2 = 0;
        var_s1 = &spC4;
        var_fp = &spC8;
        var_s0 = &spB4;
        var_s6 = &spAC;
        spC0 = (s128) D_004590D0;
        spB0 = (s128) D_004590E0;
        spA0 = D_004590F0;
        do {
            func_00136870(1, 0x40100C36, 0, -1);
            temp_a3 = (var_s3 + 1) << 0x10;
            spC0 = 300.0f;
            *var_s1 = 133.0f;
            *var_fp = 0x453B8000;
            spB0 = 112.0f;
            *var_s0 = 112.0f;
            *var_s6 = 0x3F800000;
            var_s5 = M2C_BITWISE(s32, ((f32) var_s2 / 32.0f));
            var_s4 = M2C_BITWISE(s32, ((f32) temp_a3 / 32.0f));
            func_00137650(&spC0, &spA0, &spB0, temp_a3);
            spC0 = 300.0f + (80.0f * amMath_CosI(var_s4));
            *var_s1 = 133.0f + (80.0f * amMath_SinI(var_s4));
            spB0 = 112.0f + (78.49057f * amMath_CosI(var_s4));
            *var_s0 = 112.0f + (78.49057f * amMath_SinI(var_s4));
            *var_s6 = 0x3F800000;
            func_00137650(&spC0, &spA0, &spB0, 0);
            spC0 = 300.0f + (80.0f * amMath_CosI(var_s5));
            *var_s1 = 133.0f + (80.0f * amMath_SinI(var_s5));
            spB0 = 112.0f + (78.49057f * amMath_CosI(var_s5));
            *var_s0 = 112.0f + (78.49057f * amMath_SinI(var_s5));
            func_00137650(&spC0, &spA0, &spB0, 0);
            spC0 = 300.0f + (106.0f * amMath_CosI(var_s4));
            *var_s1 = 133.0f + (106.0f * amMath_SinI(var_s4));
            spB0 = 112.0f + (104.0f * amMath_CosI(var_s4));
            *var_s0 = 112.0f + (104.0f * amMath_SinI(var_s4));
            *var_s6 = 0x3F800000;
            func_00137650(&spC0, &spA0, &spB0, 0);
            spC0 = 300.0f + (106.0f * amMath_CosI(var_s5));
            *var_s1 = 133.0f + (106.0f * amMath_SinI(var_s5));
            spB0 = 112.0f + (104.0f * amMath_CosI(var_s5));
            *var_s0 = 112.0f + (104.0f * amMath_SinI(var_s5));
            func_00137650(&spC0, &spA0, &spB0, 0);
            amDraw_FlushPacket();
            var_s3 += 1;
            var_s2 += 0x10000;
        } while (var_s3 < 0x20);
        amVram_Apply(2);
        return;
    case 2:
        temp_a1 = *(s32 *)((u8 *)var_s7 + 0xC);
        if (temp_a1 > 0) {
            if (temp_a1 == 1) {
                *(s32 *)((u8 *)var_s7 + 0xC) = 2;
                return;
            }
            goto block_15;
        }
        break;
    }
}
