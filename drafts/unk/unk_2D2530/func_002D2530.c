/* Draft (not built): func_002D2530 at 0x002D2530, size 0x2B0, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 257: amModel_SetCurrent(arg0, arg2, temp_a2, temp_a3);
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D2530.s */

// src/unk/unk_2D2530.c func_002D2530 cerr diff=-1/0
s32 func_00136E80(s32, s32, s32, s32);
s32 func_00137650(f32 *, s32 *, f32 *);
s32 func_001484A0(s32);
extern void amDraw_FlushPacket(void);
void func_002D2530(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
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
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    f32 temp_f0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s6;
    u8 *temp_s3;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_s6 = func_001484A0(0);
    temp_a2 = arg1 * 4;
    spD0 = 0x3F800000;
    temp_s3 = arg0 + *(arg0 + temp_a3 + temp_a2);
    spD4 = 0x3F800000;
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    temp_f0 = (*(f32 *)((u8 *)arg3 + 0) - (0.5f * (f32) *(s16 *)((u8 *)temp_s3 + 0x10))) - 0.5f;
    spC0 = temp_f0;
    spC4 = (*(f32 *)((u8 *)arg3 + 4) - (0.5f * (f32) *(s16 *)((u8 *)temp_s3 + 0x12))) - 0.5f;
    spC8 = *(f32 *)((u8 *)arg3 + 8);
    spA0 = 0.0f;
    spA4 = 0;
    spA8 = 0x3F800000;
    spB0 = 0.5f + (temp_f0 + (f32) *(s16 *)((u8 *)temp_s3 + 0x10));
    spB4 = 0.5f + (spC4 + (f32) *(s16 *)((u8 *)temp_s3 + 0x12));
    spB8 = *(f32 *)((u8 *)arg3 + 8);
    sp90 = (f32) *(s16 *)((u8 *)temp_s3 + 0x10);
    sp98 = 0x3F800000;
    sp94 = (f32) *(s16 *)((u8 *)temp_s3 + 0x12);
    amModel_SetCurrent(arg0, arg2, temp_a2, temp_a3);
    func_00136E80(0x40000C26, 0, arg1, 0x44);
    func_00137650(&spC0, &spD0, &spA0);
    func_00137650(&spB0, &spD0, &sp90);
    spC4 -= 1.0f;
    spB4 -= 1.0f;
    spB8 -= 1.0f;
    spDC = 0x3E800000;
    func_00137650(&spC0, &spD0, &spA0);
    func_00137650(&spB0, &spD0, &sp90);
    spC4 += 2.0f;
    spB4 += 2.0f;
    spB8 -= 1.0f;
    func_00137650(&spC0, &spD0, &spA0);
    func_00137650(&spB0, &spD0, &sp90);
    amDraw_FlushPacket();
    func_001484A0(temp_s6);
}
