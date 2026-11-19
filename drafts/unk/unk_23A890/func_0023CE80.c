/* Draft (not built): func_0023CE80 at 0x0023CE80, size 0x4D8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 256 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3DC, original 0x4D8
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023CE80.s */

// src/unk/unk_23A890.c func_0023CE80 size diff=256/247
s32 func_00136870(s32, s32, s32, s32);
s32 func_00137650(f32 *, s32, f32 *, s32);
s32 func_001484A0(s32);
extern s32 D_00470714;
extern s32 D_0058BF80;
extern s32 D_0058BF84;
extern s32 D_0058BFC0;
extern s32 D_0058BFC4;
extern s32 D_0058BFC8;
extern s32 D_0058BFCC;
extern void amDraw_FlushPacket(void);
void func_0023CE80(s32 arg0, s32 arg1, s32 arg2) {
    f32 spC0;
    f32 spC4;
    s32 spC8;
    s32 spCC;
    f32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    f32 spE8;
    f32 spEC;
    s32 *var_s1;
    f32 *var_s5;
    f32 *var_s6;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f25;
    f32 temp_f2;
    f32 var_f8;
    s32 *var_fp;
    s32 *var_s7;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;

    var_s4 = arg0 * 0x10;
    var_s3 = arg1;
    var_s2 = arg2;
    var_s0 = arg0;
    var_s1 = (int *)(gBtlSys);
    spEC = D_00470690;
    spE8 = D_00470694;
    temp_f25 = *(&D_0058BF84 + var_s4) + D_00470694;
    temp_f23 = temp_f25 + *(f32 *)0x58BF74;
    if (D_00470714 == 1) {
        func_001484A0(3);
    }
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)var_s1 + 0xE84), 0x04010000);
    func_00136870(2, 0x40000836, 0, 0xB);
    temp_f2 = (f32) var_s3;
    var_s3 = (s32) (((u8 *)&D_0058BF70) + (var_s2 * 0x10) + 0x560);
    var_f8 = temp_f2 / 1000.0f;
    if (var_f8 <= 0.0f) {
        var_f8 = 0.0f;
    }
    if (!(var_f8 < 1.0f)) {
        var_f8 = 1.0f;
    }
    if (var_f8 != 0.0f) {
        if (!(var_s0 & 1)) {
            var_s2 = (s32) &spD4;
            var_s1 = &spD8;
            var_s0 = (s32) &spDC;
            var_s6 = &spC4;
            var_s7 = &spC8;
            var_fp = &spCC;
            temp_f24 = *(&D_0058BF80 + var_s4) + spEC;
            var_s5 = (float *)(&D_0058BFC4 + var_s4);
            spD0 = 6.0f + temp_f24;
            temp_f21 = 0.5f + *(&D_0058BFC0 + var_s4);
            *(s32 *)var_s2 = temp_f25;
            *var_s1 = 0;
            *(s32 *)var_s0 = 0x3F800000;
            spC0 = 2.0f + temp_f21;
            temp_f22 = temp_f24 + ((*(f32 *)(D_0058BF70)) * var_f8);
            temp_f20 = temp_f21 + (var_f8 * (*(&D_0058BFC8 + var_s4) - temp_f21));
            *var_s6 = *var_s5;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0x3F800000);
            spD0 = temp_f24;
            *(s32 *)var_s2 = temp_f23;
            *var_s1 = 0;
            *(s32 *)var_s0 = 0x3F800000;
            var_s4 = (s32) (&D_0058BFCC + var_s4);
            spC0 = temp_f21;
            *var_s6 = *(s32 *)var_s4;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0);
            spD0 = temp_f22;
            *(s32 *)var_s2 = temp_f23;
            *var_s1 = 0;
            *(s32 *)var_s0 = 0x3F800000;
            spC0 = temp_f20;
            *var_s6 = *(s32 *)var_s4;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0);
            spD0 = 6.0f + temp_f22;
            *(s32 *)var_s2 = temp_f25;
            *var_s1 = 0;
            *(s32 *)var_s0 = 0x3F800000;
            spC0 = temp_f20;
            *var_s6 = *var_s5;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0);
        } else {
            var_s2 = (s32) &spD4;
            var_s1 = &spD8;
            var_s0 = (s32) &spDC;
            var_s6 = &spC4;
            var_s7 = &spC8;
            var_fp = &spCC;
            temp_f20_2 = 0.5f + *(&D_0058BFC8 + var_s4);
            temp_f21_2 = *(&D_0058BF80 + var_s4) + spEC;
            temp_f22_2 = temp_f21_2 - ((*(f32 *)(D_0058BF70)) * var_f8);
            var_s5 = (float *)(&D_0058BFC4 + var_s4);
            spD0 = temp_f22_2 - 6.0f;
            *(s32 *)var_s2 = temp_f25;
            *var_s1 = 0;
            temp_f24_2 = temp_f20_2 + (var_f8 * (*(&D_0058BFC0 + var_s4) - temp_f20_2));
            *(s32 *)var_s0 = 0x3F800000;
            spC0 = temp_f24_2;
            *var_s6 = *var_s5;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0);
            spD0 = temp_f22_2;
            *(s32 *)var_s2 = temp_f23;
            *var_s1 = 0;
            *(s32 *)var_s0 = 0x3F800000;
            var_s4 = (s32) (&D_0058BFCC + var_s4);
            spC0 = temp_f24_2;
            *var_s6 = *(s32 *)var_s4;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0);
            spD0 = temp_f21_2;
            *(s32 *)var_s2 = temp_f23;
            *var_s1 = 0;
            *(s32 *)var_s0 = 0x3F800000;
            spC0 = temp_f20_2;
            *var_s6 = *(s32 *)var_s4;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0);
            spD0 = temp_f21_2 - 6.0f;
            *(s32 *)var_s2 = temp_f25;
            *var_s1 = 0;
            *(s32 *)var_s0 = 0x3F800000;
            spC0 = 2.0f + temp_f20_2;
            *var_s6 = *var_s5;
            *var_s7 = 0x3F800000;
            *var_fp = 0x3F800000;
            func_00137650(&spD0, var_s3, &spC0, 0);
        }
        amDraw_FlushPacket();
    }
}
