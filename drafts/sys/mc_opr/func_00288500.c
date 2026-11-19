/* Draft (not built): func_00288500 at 0x00288500, size 0x364, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 121 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x320, original 0x364
 * Original: asm/nonmatchings/sys/mc_opr/func_00288500.s */

// src/sys/mc_opr.c func_00288500 size diff=121/200
extern f32 D_00470884;
s32 *amGs_SetReg32(s32, s32 *);
s32 func_001363D0(s32, s32, f32 *, s32);
s32 func_00136E80(s32, f32 *, s32, s32);
s32 func_00137B60(f32 *);
s32 func_001484A0(s32, s128, f32 *);
extern s128 D_00453750;
extern s128 D_00453760;
extern f32 D_0047042C;
extern f32 D_00470430;
extern s128 D_005AA540;
extern void amDraw_FlushPacket(void);
extern void func_00137C10(void *, void *);
void func_00288500(void) {
    f32 sp90;
    f32 sp94;
    s32 sp98;
    f32 spA0;
    f32 spA4;
    s32 spA8;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    s32 *var_s0;
    s32 *var_s7;
    f32 *var_s1;
    f32 *var_s2;
    f32 *var_s3;
    f32 *var_s5;
    f32 *var_s6;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_v0;
    s32 var_s4;

    var_s6 = &sp94;
    spA0 = (s128) D_00453750;
    sp90 = (s128) D_00453760;
    sp90 = D_0047042C;
    *var_s6 = D_00470430;
    temp_v0 = func_001484A0(0, D_00453750, &spA0);
    spB0 = 0.0f;
    var_s2 = &spB4;
    var_s1 = &spB8;
    *var_s2 = 0.0f;
    *var_s1 = 0.0f;
    var_s4 = temp_v0;
    var_s3 = &spBC;
    *var_s3 = 0.75f * D_00470884;
    var_s0 = amGs_SetReg32(0, (s32 *)0x30000);
    func_00136E80(0x900, &spB0, -1, 0x44);
    func_00137C10(&spA0, &sp90);
    amDraw_FlushPacket();
    amGs_SetReg32(0, var_s0);
    var_s5 = &spA4;
    var_s0 = &spA8;
    var_s7 = &sp98;
    spB0 = (s128) D_005AA540;
    temp_f6 = 270.0f * D_00470884;
    *var_s3 *= D_00470884;
    temp_f4 = 64.0f * D_00470884;
    temp_f2 = D_0047042C / 2.0f;
    temp_f3 = (D_00470430 / 2.0f) - 30.0f;
    spA0 = temp_f2 - temp_f6;
    *var_s5 = temp_f3 - temp_f4;
    *var_s0 = 0x43480000;
    sp90 = temp_f2 + temp_f6;
    *var_s6 = temp_f3 + temp_f4;
    *var_s7 = *var_s0;
    func_00136E80(0x900, &spB0, -1, 0x44);
    func_00137C10(&spA0, &sp90);
    amDraw_FlushPacket();
    temp_f1 = spB0 * 2.0f;
    spB0 = temp_f1;
    if (!(temp_f1 <= 1.0f)) {
        spB0 = 1.0f;
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
    M2C_ERROR(/* unknown instruction: suba.s $f1, $f0 */);
    spA0 = (D_0047042C / 2.0f) - (270.0f * D_00470884);
    *var_s5 = M2C_ERROR(/* unknown instruction: msub.s $f1, $f1, $f5 */);
    *var_s0 = 0x43160000;
    sp90 = spA0;
    *var_s6 = *var_s5 + (128.0f * D_00470884);
    *var_s7 = *var_s0;
    func_001363D0(1, 0x900, &spB0, 0x44);
    func_00137C10(&spA0, &sp90);
    temp_f0 = spA0 + (540.0f * D_00470884);
    spA0 = temp_f0;
    sp90 = temp_f0;
    func_00137C10(&sp90, &spA0);
    spA0 -= 540.0f * D_00470884;
    func_00137B60(&spA0);
    amDraw_FlushPacket();
    func_001484A0(var_s4, 0, 0);
}
