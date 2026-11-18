/* Draft (not built): func_00305130 at 0x00305130, size 0x2A0, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 129 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x174, original 0x2A0
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00305130.s */

// src/menu/mn_TourMap.c func_00305130 size diff=129/93
s32 func_00136E80(s32, s32, s32, s32);
s32 func_00137650(f32 *, void *, f32 *);
s32 func_001484A0(s32);
extern void amDraw_FlushPacket(void);
extern void amModel_SetCurrent();
void func_00305130(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    f32 sp90;
    f32 sp94;
    s32 sp98;
    f32 spA0;
    s32 spA4;
    s32 spA8;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 temp_f0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s7;
    u8 *temp_s4;

    temp_a3 = *(s32 *)((u8 *)arg2 + 0x14);
    temp_s7 = func_001484A0(0);
    temp_a2 = arg3 * 4;
    temp_s4 = arg2 + *(arg2 + temp_a3 + temp_a2);
    temp_f0 = (*(f32 *)((u8 *)arg0 + 0) - (0.5f * (f32) *(s16 *)((u8 *)temp_s4 + 0x10))) - 0.5f;
    spC0 = temp_f0;
    spC4 = (*(f32 *)((u8 *)arg0 + 4) - (0.5f * (f32) *(s16 *)((u8 *)temp_s4 + 0x12))) - 0.5f;
    spC8 = *(f32 *)((u8 *)arg0 + 8);
    spA0 = 0.0f;
    spA4 = 0;
    spA8 = 0x3F800000;
    spB0 = 0.5f + (temp_f0 + (f32) *(s16 *)((u8 *)temp_s4 + 0x10));
    spB4 = 0.5f + (spC4 + (f32) *(s16 *)((u8 *)temp_s4 + 0x12));
    spB8 = *(f32 *)((u8 *)arg0 + 8);
    sp90 = (f32) *(s16 *)((u8 *)temp_s4 + 0x10);
    sp98 = 0x3F800000;
    sp94 = (f32) *(s16 *)((u8 *)temp_s4 + 0x12);
    amModel_SetCurrent(arg2, M2C_ERROR(/* Read from unset register $t0 */), temp_a2, temp_a3);
    func_00136E80(0x40001826, 0, arg3, 0x44);
    func_00137650(&spC0, arg1, &spA0);
    func_00137650(&spB0, arg1, &sp90);
    spC4 -= 1.0f;
    spB4 -= 1.0f;
    spB8 -= 1.0f;
    *(s32 *)((u8 *)arg1 + 0xC) = 0x3E800000;
    func_00137650(&spC0, arg1, &spA0);
    func_00137650(&spB0, arg1, &sp90);
    spC4 += 2.0f;
    spB4 += 2.0f;
    spB8 -= 1.0f;
    func_00137650(&spC0, arg1, &spA0);
    func_00137650(&spB0, arg1, &sp90);
    amDraw_FlushPacket();
    func_001484A0(temp_s7);
}
