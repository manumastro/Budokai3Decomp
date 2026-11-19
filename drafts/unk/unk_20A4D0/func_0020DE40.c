/* Draft (not built): func_0020DE40 at 0x0020DE40, size 0x22C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x22C
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020DE40.s */

// src/unk/unk_20A4D0.c func_0020DE40 size diff=64/124
s32 amDma_Request(s32, s32, s32, s32);
s32 amDraw3d_Flip(s32 *, s32);
s64 amDraw3d_SetTexFrame(s32, s32, s32, s64 *);
s32 amDraw_SetScissor(s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 func_0012EF80(u8 *, s64, s32);
s32 func_00131F00(u8 *, s32, s32);
s32 func_00133780(s32, s32);
s32 func_00136E80(s32, void *, s32, s32);
extern s32 D_0044BA00;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_00137560(void *, void *);
void func_0020DE40(s32 arg0) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp7C;
    u8 sp90;
    s64 spF8;
    s32 var_s0;
    s32 var_s2;
    s64 var_s1;
    u8 *var_s3;

    var_s0 = arg0;
    var_s3 = gWave;
    *(s128 *)((u8 *)(&sp70) + 0) = (s128) *(s128 *)((u8 *)(&D_0044BA00) + 0);
    *(f32 *)((u8 *)(&sp70) + 0x10) = (f32) *(f32 *)((u8 *)(&D_0044BA00) + 0x10);
    sp7C = ((u32) D_0046FD5C >> 5) + 0x20;
    var_s1 = amDraw3d_SetTexFrame(0, 1, 0, NULL);
    amVram_Set(0, D_0046FD5C, 0x400);
    amDraw3d_Flip(&sp70, 0);
    func_00131B90(&sp90);
    func_00131F00(&sp90, 0, 0);
    amDraw_SetScissor(0, 0);
    func_00133780(0, 1);
    var_s2 = amGs_SetReg32(0, 0x30002);
    amDma_Request(0, 1, 1, 0);
    func_00136E80(0x40000124, D_00568C90 + (var_s0 * 0x2140) + 0x30, -1, 0x44);
    sp60 = 0;
    var_s1 = (s64) &sp64;
    *(s32 *)var_s1 = 0;
    sp68 = 0;
    var_s0 = (s32) &sp54;
    sp6C = 0x3F800000;
    sp50 = 0;
    *(s32 *)var_s0 = 0;
    sp58 = 0x3F800000;
    sp5C = 0x3F800000;
    func_00137560(&sp60, &sp50);
    sp60 = 0x43800000;
    *(s32 *)var_s1 = 0x43800000;
    sp50 = 0x44000000;
    *(s32 *)var_s0 = 0x43E00000;
    func_00137560(&sp60, &sp50);
    amDraw_FlushPacket();
    spF8 = 0x80 | (0x80 << 0x20);
    func_0012EF80(var_s3, amDraw3d_SetTexFrame(0, 1, 0, &spF8), 6);
    func_00133780(0, 0);
    amGs_SetReg32(0, var_s2);
    amDraw3d_Flip(NULL, 0);
    func_00131F00(gBattle, 0, 0);
    func_00132DF0(gBattle + 0x60);
    amDraw_SetScissor(0, 0);
}
