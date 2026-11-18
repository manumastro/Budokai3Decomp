/* Draft (not built): func_0020D7C0 at 0x0020D7C0, size 0x1E4, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 69 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x16C, original 0x1E4
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020D7C0.s */

// src/unk/unk_20A4D0.c func_0020D7C0 size diff=69/91
extern s32 D_0046FD5C;
s32 amDma_Request(s32, s32, s32, s32);
s32 amDraw3d_Flip(s32 *, s32);
s64 amDraw3d_SetTexFrame(s32, s32, s32, s64 *);
s32 amDraw_SetScissor(s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133780(s32, s32);
s32 func_00136E80(s32, s32, s32, s32);
extern s32 D_0044BA20;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_00137560(void *, void *);
void func_0020D7C0(void) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    u32 sp6C;
    u32 sp70;
    s32 sp80;
    s64 spE8;
    s32 temp_s2;
    s64 temp_s0;
    u32 temp_v0;

    *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_0044BA20) + 0);
    *(f32 *)((u8 *)(&sp60) + 0x10) = (f32) *(f32 *)((u8 *)(&D_0044BA20) + 0x10);
    temp_v0 = (u32) D_0046FD5C >> 5;
    sp6C = temp_v0;
    sp70 = temp_v0;
    temp_s0 = amDraw3d_SetTexFrame(0, 1, 0, NULL);
    amDraw3d_Flip(&sp60, 0);
    func_00131B90(&sp80);
    func_00131F00(&sp80, 0, 0);
    amDraw_SetScissor(0, 0);
    func_00133780(0, 1);
    temp_s2 = amGs_SetReg32(0, 0x30002);
    amDma_Request(0, 1, 1, 0);
    func_00136E80(0x40000424, 0, -1, 0x44);
    sp50 = 0;
    sp54 = 0;
    sp58 = 0;
    sp5C = 0x3F800000;
    sp40 = 0;
    sp44 = 0;
    sp48 = 0x3F800000;
    sp4C = 0x3F800000;
    func_00137560(&sp50, &sp40);
    sp50 = 0x43800000;
    sp54 = 0x43800000;
    sp40 = 0x44000000;
    sp44 = 0x43E00000;
    func_00137560(&sp50, &sp40);
    amDraw_FlushPacket();
    spE8 = 0x80 | (0x80 << 0x20);
    *(s32 *)((u8 *)gWave + 0x70) = amDraw3d_SetTexFrame(0, 1, 0, &spE8);
    amGs_SetReg32(0, temp_s2);
    func_00133780(0, 0);
    amDraw3d_Flip(NULL, 0);
    func_00131F00((s32 *) gBattle, 0, 0);
    func_00132DF0(gBattle + 0x60);
    amDraw_SetScissor(0, 0);
}
