/* Draft (not built): func_003053D0 at 0x003053D0, size 0x1C0, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 81 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x11C, original 0x1C0
 * Original: asm/nonmatchings/menu/mn_TourMap/func_003053D0.s */

// src/menu/mn_TourMap.c func_003053D0 size diff=81/71
s32 func_00136E80(s32, s32, s32, s32);
s32 func_001484A0(s32);
extern void func_00137560(void *, void *);
extern void amModel_SetCurrent();
void func_003053D0(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 sp60;
    f32 sp64;
    s32 sp68;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 temp_f0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    u8 *temp_s1;

    temp_a3 = *(s32 *)((u8 *)arg1 + 0x14);
    temp_s0 = func_001484A0(0);
    temp_a2 = arg2 * 4;
    temp_s1 = arg1 + *(arg1 + temp_a3 + temp_a2);
    temp_f0 = (*(f32 *)((u8 *)arg0 + 0) - (0.5f * (f32) *(s16 *)((u8 *)temp_s1 + 0x10))) - 0.5f;
    sp90 = temp_f0;
    sp94 = (*(f32 *)((u8 *)arg0 + 4) - (0.5f * (f32) *(s16 *)((u8 *)temp_s1 + 0x12))) - 0.5f;
    sp98 = *(f32 *)((u8 *)arg0 + 8);
    sp70 = 0;
    sp74 = 0;
    sp78 = 0x3F800000;
    sp80 = 0.5f + (temp_f0 + (f32) *(s16 *)((u8 *)temp_s1 + 0x10));
    sp84 = 0.5f + (sp94 + (f32) *(s16 *)((u8 *)temp_s1 + 0x12));
    sp88 = *(f32 *)((u8 *)arg0 + 8);
    sp60 = (f32) *(s16 *)((u8 *)temp_s1 + 0x10);
    sp68 = 0x3F800000;
    sp64 = (f32) *(s16 *)((u8 *)temp_s1 + 0x12);
    amModel_SetCurrent(arg1, arg3, temp_a2, temp_a3);
    func_00136E80(0x40000C26, 0, arg2, 0x44);
    func_00137560(&sp90, &sp70);
    func_00137560(&sp80, &sp60);
    func_001484A0(temp_s0);
}
