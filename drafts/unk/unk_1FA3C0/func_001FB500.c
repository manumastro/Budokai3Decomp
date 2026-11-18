/* Draft (not built): func_001FB500 at 0x001FB500, size 0x248, segment unk/unk_1FA3C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x238, original 0x248
 * Original: asm/nonmatchings/unk/unk_1FA3C0/func_001FB500.s */

// src/unk/unk_1FA3C0.c func_001FB500 size diff=54/142
s32 amDraw3d_Flip(s32 *, s32);
s32 amDraw3d_SetTexFrame(s32, s32, s32, s32);
s32 amDraw_SetScissor(s128 *, s32);
s32 amVram_Apply(s32);
s32 func_00131F00(s32, s32, s32);
s32 func_00132610(s32 *, s32, s32);
s32 func_00136E80(s32, s8 *, s32, s32);
s32 func_00137B60(s32 *);
s32 func_0013E170(s32);
s32 func_0013E370(void *, s32, s32, s32);
s32 func_001D44C0(s32);
s32 func_0029D730();
extern s32 D_0044B790;
extern s128 D_0044B7B0;
extern s128 D_0044B7C0;
extern s32 D_0046FD44;
extern u32 D_0046FD5C;
extern s32 D_00470238;
extern s32 D_00470634;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void amDraw_FlushPacket(void);
void func_001FB500(u8 *arg0) {
    s128 sp30;
    s8 sp40;
    s32 sp50;
    s32 sp54;
    s32 sp60;
    s32 spC0;
    u32 spCC;
    u32 spD0;
    s32 temp_a1;
    s32 temp_s0;
    s32 var_v0;
    s8 *var_v1;
    u32 temp_v0;

    *(s128 *)((u8 *)(&spC0) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B790) + 0);
    *(f32 *)((u8 *)(&spC0) + 0x10) = (f32) *(f32 *)((u8 *)(&D_0044B790) + 0x10);
    temp_v0 = (u32) D_0046FD5C >> 5;
    spCC = temp_v0;
    spD0 = temp_v0;
    amDraw3d_Flip(&spC0, 0);
    func_00131B90(&sp60);
    func_00132610(&sp60, 0, 0);
    amDraw_SetScissor(NULL, 0);
    temp_s0 = amGs_SetReg32(0, 0x20002);
    var_v1 = &sp40;
    var_v0 = 0x10;
    sp50 = (s128) D_0044B7B0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_00136E80(0x100, &sp40, -1, 0);
    func_00137B60(&sp50);
    sp50 = 0x43800000;
    sp54 = 0x43800000;
    func_00137B60(&sp50);
    amDraw_FlushPacket();
    sp30 = D_0044B7C0;
    amDraw_SetScissor(&sp30, 1);
    amVram_Apply(0);
    D_00470238 = 0;
    func_0013B0B0(arg0);
    temp_a1 = func_0029D730();
    D_0046FD44 = 0x40800000;
    func_0013E370(arg0 + 0x40, temp_a1, *(s32 *)((u8 *)arg0 + 0xF0), 0);
    D_0046FD44 = 0;
    func_00132DF0(arg0 + 0x40);
    DrawFlags_Apply(0x13C00728, 0, 0, 0x10800200, 0);
    func_00133980(0, 0, 0, 0x3F800000);
    func_0013E170(*(s32 *)((u8 *)arg0 + 0xF0));
    func_001D44C0(*(s32 *)((u8 *)arg0 + 0xF4));
    DrawFlags_Apply(0, 0x13C00728, 0, 0, 0);
    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    func_0013B110(1);
    amGs_SetReg32(0, temp_s0);
    *(s32 *)((u8 *)arg0 + 0xF8) = amDraw3d_SetTexFrame(0, D_00470634, 0, 0);
    amDraw3d_Flip(NULL, 0);
    func_00131F00(D_00470638, 0, 0);
    func_00132DF0((void *)(D_00470640));
    amDraw_SetScissor(NULL, 0);
}
