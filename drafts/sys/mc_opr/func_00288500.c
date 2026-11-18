/* Draft (not built): func_00288500 at 0x00288500, size 0x364, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK amDraw_FlushPacket();                       /* extern */
s32 amGs_SetReg32(M2C_UNK, s32);                    /* extern */
M2C_UNK func_001363D0(M2C_UNK, M2C_UNK, f32 *, M2C_UNK); /* extern */
M2C_UNK func_00136E80(M2C_UNK, f32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00137B60(f32 *);                       /* extern */
M2C_UNK func_00137C10(f32 *, f32 *);                /* extern */
s32 func_001484A0(s32, s128, f32 *);                /* extern */
extern s128 D_00453750;
extern s128 D_00453760;
extern f32 D_0047042C;
extern f32 D_00470430;
extern f32 D_00470884;
extern s128 D_005AA540;

void func_00288500(void) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    M2C_UNK32 spA8;
    f32 spA4;
    f32 spA0;
    M2C_UNK32 sp98;
    f32 sp94;
    f32 sp90;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_s0;
    s32 temp_v0;

    spA0 = (s128) D_00453750;
    sp90 = (s128) D_00453760;
    sp90 = D_0047042C;
    sp94 = D_00470430;
    temp_v0 = func_001484A0(0, D_00453750, &spA0);
    spB0 = 0.0f;
    spB4 = 0.0f;
    spB8 = 0.0f;
    spBC = 0.75f * D_00470884;
    temp_s0 = amGs_SetReg32(0, 0x30000);
    func_00136E80(0x900, &spB0, -1, 0x44);
    func_00137C10(&spA0, &sp90);
    amDraw_FlushPacket();
    amGs_SetReg32(0, temp_s0);
    spB0 = (s128) D_005AA540;
    temp_f6 = 270.0f * D_00470884;
    spBC *= D_00470884;
    temp_f4 = 64.0f * D_00470884;
    temp_f2 = D_0047042C / 2.0f;
    temp_f3 = (D_00470430 / 2.0f) - 30.0f;
    spA0 = temp_f2 - temp_f6;
    spA4 = temp_f3 - temp_f4;
    spA8 = 0x43480000;
    sp90 = temp_f2 + temp_f6;
    sp94 = temp_f3 + temp_f4;
    sp98 = spA8;
    func_00136E80(0x900, &spB0, -1, 0x44);
    func_00137C10(&spA0, &sp90);
    amDraw_FlushPacket();
    temp_f1 = spB0 * 2.0f;
    spB0 = temp_f1;
    if (!(temp_f1 <= 1.0f)) {
        spB0 = 1.0f;
    }
    temp_f1_2 = spB4 * 2.0f;
    spB4 = temp_f1_2;
    if (!(temp_f1_2 <= 1.0f)) {
        spB4 = 1.0f;
    }
    temp_f1_3 = spB8 * 2.0f;
    spB8 = temp_f1_3;
    if (!(temp_f1_3 <= 1.0f)) {
        spB8 = 1.0f;
    }
    M2C_ERROR(/* unknown instruction: suba.s $f1, $f0 */);
    spA0 = (D_0047042C / 2.0f) - (270.0f * D_00470884);
    spA4 = M2C_ERROR(/* unknown instruction: msub.s $f1, $f1, $f5 */);
    spA8 = 0x43160000;
    sp90 = spA0;
    sp94 = spA4 + (128.0f * D_00470884);
    sp98 = spA8;
    func_001363D0(1, 0x900, &spB0, 0x44);
    func_00137C10(&spA0, &sp90);
    temp_f0 = spA0 + (540.0f * D_00470884);
    spA0 = temp_f0;
    sp90 = temp_f0;
    func_00137C10(&sp90, &spA0);
    spA0 -= 540.0f * D_00470884;
    func_00137B60(&spA0);
    amDraw_FlushPacket();
    func_001484A0(temp_v0);
}
