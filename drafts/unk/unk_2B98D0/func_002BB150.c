/* Draft (not built): func_002BB150 at 0x002BB150, size 0x148, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xAC, original 0x148
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BB150.s */

// src/unk/unk_2B98D0.c func_002BB150 size diff=64/43
s32 func_00136E80(s32, s32, s32, s32);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_002BB150(void) {
    f32 sp20;
    f32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_f20;
    f32 temp_f21;
    u8 *temp_t2;
    u8 *temp_v0;

    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_t2 = *(u8 **)((u8 *)gStrStatus + 0x158);
    temp_v0 = temp_t2 + *(*(s32 *)((u8 *)temp_t2 + 0x14) + temp_t2 + (((*(s32 *)((u8 *)gStrStatus + 0x288) + 0x1B) - *(s32 *)((u8 *)temp_t2 + 0x18)) * 4));
    temp_f21 = (f32) *(s16 *)((u8 *)temp_v0 + 0x10);
    temp_f20 = (f32) *(s16 *)((u8 *)temp_v0 + 0x12);
    func_00136E80(0x40000C24, 0, *(s32 *)((u8 *)gStrStatus + 0x288) + 0x1B, 0x44);
    sp28 = 0x3F800000;
    sp2C = 0x3F800000;
    sp20 = 0.0f;
    sp24 = 0.0f;
    sp34 -= 0.5f * temp_f20;
    sp30 -= temp_f21;
    sp38 -= 10.0f;
    func_00137560(&sp30, &sp20);
    sp20 = temp_f21;
    sp24 = temp_f20;
    sp30 += temp_f21;
    sp34 += temp_f20;
    func_00137560(&sp30, &sp20);
    amDraw_FlushPacket();
}
