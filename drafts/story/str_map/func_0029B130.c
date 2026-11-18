/* Draft (not built): func_0029B130 at 0x0029B130, size 0x158, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD4, original 0x158
 * Original: asm/nonmatchings/story/str_map/func_0029B130.s */

// src/story/str_map.c func_0029B130 size diff=65/53
s32 func_00136E80(s32, s32, s64, s32);
extern s32 D_00453F12;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_0029B130(void) {
    f32 sp20;
    f32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_f20;
    f32 temp_f21;
    s64 temp_a2;
    u8 *temp_t1;
    u8 *temp_v0;

    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_t1 = *(u8 **)((u8 *)gStrTitle + 0x68);
    temp_a2 = (s64) ((s64) *(&D_00453F12 + (*(s32 *)((u8 *)gStrTitle + 0xB4) * 8)) << 0x30) >> 0x30;
    temp_v0 = temp_t1 + *(*(s32 *)((u8 *)temp_t1 + 0x14) + temp_t1 + ((temp_a2 - *(s32 *)((u8 *)temp_t1 + 0x18)) * 4));
    temp_f21 = (f32) *(s16 *)((u8 *)temp_v0 + 0x10);
    temp_f20 = (f32) *(s16 *)((u8 *)temp_v0 + 0x12);
    func_00136E80(0x40000C24, 0, temp_a2, 0x44);
    sp20 = 0.0f;
    sp24 = 0.0f;
    sp28 = 0x3F800000;
    sp2C = 0x3F800000;
    sp38 -= 10.0f;
    sp30 -= 0.5f * temp_f21;
    sp34 -= 0.5f * temp_f20;
    func_00137560(&sp30, &sp20);
    sp20 = temp_f21;
    sp24 = temp_f20;
    sp30 += temp_f21;
    sp34 += temp_f20;
    func_00137560(&sp30, &sp20);
    amDraw_FlushPacket();
}
