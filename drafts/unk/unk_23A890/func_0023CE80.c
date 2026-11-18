/* Draft (not built): func_0023CE80 at 0x0023CE80, size 0x4D8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 312: s32 spDC; @ 311: s3232 spD8;
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023CE80.s */

// src/unk/unk_23A890.c func_0023CE80 cerr diff=-1/0
s32 func_00136870(s32, s32, s32, s32);
s32 func_00137650(f32 *, void *, f32 *, s32);
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
    f32 spD4;
    s3232 spD8;
    s32 spDC;
    f32 spE8;
    f32 spEC;
    f32 *temp_s4_2;
    f32 *temp_s4_3;
    f32 *temp_s5;
    f32 *temp_s5_2;
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
    f32 var_f8;
    s32 temp_s4;
    u8 *temp_s1;
    u8 *temp_s3;

    temp_s4 = arg0 * 0x10;
    temp_s1 = gBtlSys;
    spEC = D_00470690;
    spE8 = D_00470694;
    temp_f25 = *(&D_0058BF84 + temp_s4) + D_00470694;
    temp_f23 = temp_f25 + *(f32 *)0x58BF74;
    if (D_00470714 == 1) {
        func_001484A0(3);
    }
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)temp_s1 + 0xE84), 0x04010000);
    func_00136870(2, 0x40000836, 0, 0xB);
    temp_s3 = &D_0058BF70 + (arg2 * 0x10) + 0x560;
    var_f8 = (f32) arg1 / 1000.0f;
    if (var_f8 <= 0.0f) {
        var_f8 = 0.0f;
    }
    if (!(var_f8 < 1.0f)) {
        var_f8 = 1.0f;
    }
    if (var_f8 != 0.0f) {
        if (!(arg0 & 1)) {
            temp_f24 = *(&D_0058BF80 + temp_s4) + spEC;
            temp_s5 = &D_0058BFC4 + temp_s4;
            spD0 = 6.0f + temp_f24;
            temp_f21 = 0.5f + *(&D_0058BFC0 + temp_s4);
            spD4 = temp_f25;
            spD8 = 0;
            spDC = 0x3F800000;
            spC0 = 2.0f + temp_f21;
            temp_f22 = temp_f24 + (D_0058BF70 * var_f8);
            temp_f20 = temp_f21 + (var_f8 * (*(&D_0058BFC8 + temp_s4) - temp_f21));
            spC4 = *temp_s5;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0, 0x3F800000);
            spD0 = temp_f24;
            spD4 = temp_f23;
            spD8 = 0;
            spDC = 0x3F800000;
            temp_s4_2 = &D_0058BFCC + temp_s4;
            spC0 = temp_f21;
            spC4 = *temp_s4_2;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0);
            spD0 = temp_f22;
            spD4 = temp_f23;
            spD8 = 0;
            spDC = 0x3F800000;
            spC0 = temp_f20;
            spC4 = *temp_s4_2;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0);
            spD0 = 6.0f + temp_f22;
            spD4 = temp_f25;
            spD8 = 0;
            spDC = 0x3F800000;
            spC0 = temp_f20;
            spC4 = *temp_s5;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0);
        } else {
            temp_f20_2 = 0.5f + *(&D_0058BFC8 + temp_s4);
            temp_f21_2 = *(&D_0058BF80 + temp_s4) + spEC;
            temp_f22_2 = temp_f21_2 - (D_0058BF70 * var_f8);
            temp_s5_2 = &D_0058BFC4 + temp_s4;
            spD0 = temp_f22_2 - 6.0f;
            spD4 = temp_f25;
            spD8 = 0;
            temp_f24_2 = temp_f20_2 + (var_f8 * (*(&D_0058BFC0 + temp_s4) - temp_f20_2));
            spDC = 0x3F800000;
            spC0 = temp_f24_2;
            spC4 = *temp_s5_2;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0);
            spD0 = temp_f22_2;
            spD4 = temp_f23;
            spD8 = 0;
            spDC = 0x3F800000;
            temp_s4_3 = &D_0058BFCC + temp_s4;
            spC0 = temp_f24_2;
            spC4 = *temp_s4_3;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0);
            spD0 = temp_f21_2;
            spD4 = temp_f23;
            spD8 = 0;
            spDC = 0x3F800000;
            spC0 = temp_f20_2;
            spC4 = *temp_s4_3;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0);
            spD0 = temp_f21_2 - 6.0f;
            spD4 = temp_f25;
            spD8 = 0;
            spDC = 0x3F800000;
            spC0 = 2.0f + temp_f20_2;
            spC4 = *temp_s5_2;
            spC8 = 0x3F800000;
            spCC = 0x3F800000;
            func_00137650(&spD0, temp_s3, &spC0);
        }
        amDraw_FlushPacket();
    }
}
