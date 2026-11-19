/* Draft (not built): func_002D27E0 at 0x002D27E0, size 0x2E8, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 154 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x17C, original 0x2E8
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D27E0.s */

// src/unk/unk_2D2530.c func_002D27E0 size diff=154/95
s32 func_00136E80(s32, s32 *, s32, s32);
s32 func_001484A0(s32);
extern f32 D_0047042C;
extern f32 D_00470430;
extern void amDraw_FlushPacket(void);
extern void func_00137C10(void *, void *);
void func_002D27E0(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    f32 spC0;
    f32 spC4;
    s32 spC8;
    s32 spCC;
    f32 spD0;
    f32 spD4;
    s32 spD8;
    s32 spDC;
    f32 spE0;
    f32 spE4;
    s32 spE8;
    s32 spEC;
    s32 spF0;
    s32 spF4;
    s32 spF8;
    s32 spFC;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f5;
    s32 temp_s2;

    temp_s2 = func_001484A0(0);
    temp_f25 = *(f32 *)((u8 *)arg3 + 0);
    temp_f5 = *(f32 *)((u8 *)arg3 + 4);
    temp_f23 = 0.5f * temp_f5;
    spF0 = 0;
    spF4 = 0;
    spF8 = 0x3F800000;
    spFC = 0x3F800000;
    temp_f21 = 0.5f * *(f32 *)((u8 *)arg2 + 0);
    temp_f20 = 0.5f * *(f32 *)((u8 *)arg2 + 4);
    temp_f24 = 0.5f * temp_f25;
    spE0 = (D_0047042C / 2.0f) - temp_f24;
    spE4 = ((D_00470430 / 2.0f) + temp_f20) - temp_f23;
    spE8 = 0x42B40000;
    temp_f22 = 0.5f * temp_f23;
    spEC = 0x3F800000;
    spD0 = spE0 + temp_f25;
    spD4 = spE4 + temp_f5;
    spD8 = spE8;
    spDC = 0x3F800000;
    func_00136E80(0x100, &spF0, -1, 0);
    func_00137C10(&spE0, &spD0);
    amDraw_FlushPacket();
    spC0 = (D_0047042C / 2.0f) + temp_f21;
    spC4 = ((D_00470430 / 2.0f) + temp_f20) - temp_f22;
    spC8 = 0x42A00000;
    spCC = 0x3F800000;
    func_002D2530(arg0, 1, 0x80000, &spC0);
    spC0 = (D_0047042C / 2.0f) + temp_f21;
    spC4 = temp_f22 + ((D_00470430 / 2.0f) + temp_f20);
    spC8 = 0x42A00000;
    spCC = 0x3F800000;
    func_002D2530(arg0, 2, 0x80000, &spC0);
    spF0 = 0;
    spF4 = 0;
    spF8 = 0;
    spFC = 0x3F000000;
    M2C_ERROR(/* unknown instruction: adda.s $f1, $f20 */);
    spE0 = (D_0047042C / 2.0f) - temp_f24;
    spE4 = M2C_ERROR(/* unknown instruction: msub.s $f0, $f23, $f0 */);
    spE8 = 0x428C0000;
    spD0 = spE0 + temp_f25;
    spD4 = spE4 + temp_f23;
    spD8 = 0x428C0000;
    func_00136E80(0x900, &spF0, -1, 0x44);
    func_00137C10(&spE0, &spD0);
    amDraw_FlushPacket();
    func_001484A0(temp_s2);
}
