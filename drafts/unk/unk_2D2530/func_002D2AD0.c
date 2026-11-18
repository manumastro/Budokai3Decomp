/* Draft (not built): func_002D2AD0 at 0x002D2AD0, size 0x378, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 125 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x354, original 0x378
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D2AD0.s */

// src/unk/unk_2D2530.c func_002D2AD0 size diff=125/213
f32 *amGs_SetReg32(s32, f32 *);
s32 func_001363D0(s32, s32, f32 *, s32);
s32 func_00136E80(s32, f32 *, s32, s32);
s32 func_00137B60(f32 *);
s32 func_001484A0(s32, s128, f32 *);
extern s128 D_00456D40;
extern s128 D_00456D50;
extern f32 D_0047042C;
extern f32 D_00470430;
extern void amDraw_FlushPacket(void);
extern void func_00137C10(void *, void *);
void func_002D2AD0(u8 *arg0, f32 *arg1, f32 fparg0) {
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 spEC;
    f32 *var_fp;
    f32 *var_s0;
    f32 *var_s1;
    f32 *var_s2;
    f32 *var_s5;
    f32 *var_s6;
    f32 *var_s7;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f2;
    f32 temp_f4;
    s32 var_s3;
    u8 *var_s4;

    var_s6 = &spC4;
    var_s4 = arg0;
    var_s0 = arg1;
    spD0 = (s128) D_00456D40;
    spC0 = (s128) D_00456D50;
    spC0 = D_0047042C;
    *var_s6 = D_00470430;
    var_s3 = func_001484A0(0, D_00456D40, &spD0);
    var_s2 = &spE4;
    var_s1 = &spE8;
    var_fp = &spEC;
    temp_f23 = *(f32 *)((u8 *)var_s0 + 0) * fparg0;
    spE0 = 0.0f;
    *var_s2 = 0.0f;
    *var_s1 = 0.0f;
    temp_f22 = *(f32 *)((u8 *)var_s0 + 4) * fparg0;
    temp_f21 = 0.5f * temp_f23;
    temp_f20 = 0.5f * temp_f22;
    *var_fp = 0.75f * fparg0;
    var_s0 = amGs_SetReg32(0, (f32 *)0x30000);
    func_00136E80(0x900, &spE0, -1, 0x44);
    func_00137C10(&spD0, &spC0);
    amDraw_FlushPacket();
    amGs_SetReg32(0, var_s0);
    spE0 = 0.0f;
    *var_s2 = 0.75f;
    var_s5 = &spD4;
    var_s0 = &spD8;
    *var_s1 = 0.25f;
    var_s7 = &spC8;
    *var_fp = 0.5f * fparg0;
    temp_f4 = D_0047042C / 2.0f;
    temp_f2 = D_00470430 / 2.0f;
    spD0 = (temp_f4 - *(f32 *)((u8 *)var_s4 + 0)) - temp_f21;
    *var_s5 = (temp_f2 - *(f32 *)((u8 *)var_s4 + 4)) - temp_f20;
    *var_s0 = 200.0f;
    spC0 = temp_f21 + (temp_f4 - *(f32 *)((u8 *)var_s4 + 0));
    *var_s6 = temp_f20 + (temp_f2 - *(f32 *)((u8 *)var_s4 + 4));
    *var_s7 = *var_s0;
    func_00136E80(0x900, &spE0, -1, 0x44);
    func_00137C10(&spD0, &spC0);
    amDraw_FlushPacket();
    temp_f1 = spE0 * 2.0f;
    spE0 = temp_f1;
    if (!(temp_f1 <= 1.0f)) {
        spE0 = 1.0f;
    }
    temp_f1_2 = *var_s2 * 2.0f;
    *var_s2 = temp_f1_2;
    if (!(temp_f1_2 <= 1.0f)) {
        *var_s2 = 1.0f;
    }
    temp_f1_3 = *var_s1 * 2.0f;
    *var_s1 = temp_f1_3;
    if (!(temp_f1_3 <= 1.0f)) {
        *var_s1 = 1.0f;
    }
    spD0 = ((D_0047042C / 2.0f) - *(f32 *)((u8 *)var_s4 + 0)) - temp_f21;
    *var_s5 = ((D_00470430 / 2.0f) - *(f32 *)((u8 *)var_s4 + 4)) - temp_f20;
    *var_s0 = 150.0f;
    spC0 = spD0;
    *var_s6 = *var_s5 + temp_f22;
    *var_s7 = *var_s0;
    func_001363D0(1, 0x900, &spE0, 0x44);
    func_00137C10(&spD0, &spC0);
    temp_f0 = spD0 + temp_f23;
    spD0 = temp_f0;
    spC0 = temp_f0;
    func_00137C10(&spC0, &spD0);
    spD0 -= temp_f23;
    func_00137B60(&spD0);
    amDraw_FlushPacket();
    func_001484A0(var_s3, 0, 0);
}
