/* Draft (not built): func_002BAC80 at 0x002BAC80, size 0x314, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); from 'unsigned char *' to 'int' @ 175: Model_SetCurrent(*(u8 **)((u8 *)gStrStatus + 0x158), 0x600000, temp_a2, temp_a3);
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BAC80.s */

// src/unk/unk_2B98D0.c func_002BAC80 cerr diff=-1/0
s32 amGs_SetReg32(s32, s32);
s32 func_00133780(s32, s32);
s32 func_00136E80(s32, s32, s32, s32);
extern s32 D_005116EC;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_002BAC80(void) {
    f32 sp30;
    f32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    s32 temp_a2;
    s32 temp_s0;
    u8 *temp_a3;
    u8 *temp_t2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s0 = amGs_SetReg32(0, 0x3040A);
    func_00133780(2, 1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_a3 = *(u8 **)((u8 *)gStrStatus + 0x158);
    temp_a2 = *(s32 *)((u8 *)gStrStatus + 0x288) + 0x1B;
    temp_v0 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((temp_a2 - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
    temp_f21 = (f32) *(s16 *)((u8 *)temp_v0 + 0x10);
    temp_f20 = (f32) *(s16 *)((u8 *)temp_v0 + 0x12);
    amModel_SetCurrent(*(u8 **)((u8 *)gStrStatus + 0x158), 0x600000, temp_a2, temp_a3);
    func_00136E80(0x40000C24, 0, *(s32 *)((u8 *)gStrStatus + 0x288) + 0x1B, 0x44);
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = 0x3F800000;
    sp3C = 0x3F800000;
    sp48 -= 10.0f;
    sp40 -= 0.8f * (0.5f * temp_f21);
    sp44 -= 0.8f * (0.5f * temp_f20);
    func_00137560(&sp40, &sp30);
    sp40 += 0.8f * temp_f21;
    sp44 += 0.8f * temp_f20;
    sp30 = temp_f21;
    sp34 = temp_f20;
    func_00137560(&sp40, &sp30);
    amDraw_FlushPacket();
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_t2 = *(u8 **)((u8 *)gStrStatus + 0x158);
    temp_v0_2 = temp_t2 + *(*(s32 *)((u8 *)temp_t2 + 0x14) + temp_t2 + (((D_005116EC + 0x1B) - *(s32 *)((u8 *)temp_t2 + 0x18)) * 4));
    temp_f21_2 = (f32) *(s16 *)((u8 *)temp_v0_2 + 0x10);
    temp_f20_2 = (f32) *(s16 *)((u8 *)temp_v0_2 + 0x12);
    func_00136E80(0x40000C24, 0, D_005116EC + 0x1B, 0x44);
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = 0x3F800000;
    sp3C = 0x3F800000;
    sp48 -= 10.0f;
    sp40 -= 0.8f * (0.5f * temp_f21_2);
    sp44 -= 0.8f * (0.5f * temp_f20_2);
    func_00137560(&sp40, &sp30);
    sp40 += 0.8f * temp_f21_2;
    sp44 += 0.8f * temp_f20_2;
    sp30 = temp_f21_2;
    sp34 = temp_f20_2;
    func_00137560(&sp40, &sp30);
    amDraw_FlushPacket();
    func_00133780(2, 0);
    amGs_SetReg32(0, temp_s0);
}
