/* Draft (not built): func_002AD180 at 0x002AD180, size 0x410, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 229 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x378, original 0x410
 * Original: asm/nonmatchings/battle/scr_func/func_002AD180.s */

// src/battle/scr_func.c func_002AD180 size diff=229/222
s32 amCamera_SetScreen(s128 *, void *, s32);
s32 func_0012E100(void *, void *, s32, s32, f32);
s32 func_00131D00(s128 *, s32, s32 *, s32 *, f32, f32);
s32 func_00131F00(s128 *, s32, s32);
s32 memcpy(s32 *, void *, s32);
extern s32 D_005BCEE0;
extern s128 D_005BCF20;
extern f32 D_005BCF30;
extern f32 D_005BCF34;
extern f32 D_005BCF38;
extern f32 D_005BCF3C;
extern f32 D_005BCF40;
extern f32 D_005BCF44;
extern f32 D_005BCF48;
extern f32 D_005BCF4C;
extern f32 D_005BCF50;
extern f32 D_005BCF54;
extern f32 D_005BCF58;
extern f32 D_005BCF5C;
extern f32 D_005BCF60;
extern f32 D_005BCF64;
extern s32 D_005BCF68;
extern f32 D_005BCF70;
extern f32 D_005BCF74;
extern s32 D_005BCF78;
extern void func_00132DF0(void *);
extern void func_0013B160(void *);
extern void func_002ACDB0(void);
s32 func_002AD180(u8 *arg0, u8 *arg1) {
    s128 sp40;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    s32 sp88;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    s32 temp_a0;
    s32 temp_a3;
    u8 *temp_a1;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a3 = *(s32 *)((u8 *)temp_v1 + 4);
    temp_s0 = (*(s32 *)((u8 *)temp_v1 + 8) * 0xB0) + (&D_005BC180 + (**(s32 **)((u8 *)arg0 + 0) * 0x160));
    *(s32 *)((u8 *)temp_s0 + 8) = temp_a3;
    if (!(*(f32 *)((u8 *)temp_s0 + 0x10) < 0.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0xC) = 0.0f;
    } else {
        *(f32 *)((u8 *)temp_s0 + 0xC) = (f32) (*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 8) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x14)) + 8) - 1);
    }
    *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) *(s32 *)((u8 *)temp_v1 + 0);
    func_0012E100(temp_s0 + 0x20, *(u8 **)((u8 *)temp_s0 + 4), *(s32 *)((u8 *)temp_s0 + 8), temp_a3, *(f32 *)((u8 *)temp_s0 + 0xC));
    func_0013B160(NULL);
    sp40 = D_005BCF20;
    sp50 = D_005BCF30;
    sp54 = D_005BCF34;
    sp58 = D_005BCF38;
    sp5C = D_005BCF3C;
    sp60 = D_005BCF40;
    sp64 = D_005BCF44;
    sp68 = D_005BCF48;
    sp6C = D_005BCF4C;
    sp70 = D_005BCF50;
    sp74 = D_005BCF54;
    sp78 = D_005BCF58;
    sp7C = D_005BCF5C;
    sp80 = D_005BCF60;
    sp84 = D_005BCF64;
    *(f32 *)((u8 *)(&sp88) + 0) = (f32) *(f32 *)((u8 *)(&D_005BCF68) + 0);
    *(f32 *)((u8 *)(&sp88) + 4) = (f32) *(f32 *)((u8 *)(&D_005BCF68) + 4);
    sp90 = D_005BCF70;
    sp94 = D_005BCF74;
    *(f32 *)((u8 *)(&sp98) + 0) = (f32) *(f32 *)((u8 *)(&D_005BCF78) + 0);
    *(f32 *)((u8 *)(&sp98) + 4) = (f32) *(f32 *)((u8 *)(&D_005BCF78) + 4);
    func_00131D00(&D_005BCF20, 0, &sp88, &D_005BCF68, *(f32 *)((u8 *)temp_s0 + 0xA0), *(f32 *)((u8 *)temp_s0 + 0xA4));
    amCamera_SetScreen(&D_005BCF20, temp_s0 + 0x20, 0x43F00000);
    func_00131F00(&D_005BCF20, 0, 0);
    func_00132DF0(NULL);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    memcpy(&D_005BCEE0, temp_s0 + 0x60, 0x40);
    D_005BCF20 = sp40;
    D_005BCF30 = sp50;
    D_005BCF34 = sp54;
    D_005BCF38 = sp58;
    D_005BCF3C = sp5C;
    D_005BCF40 = sp60;
    D_005BCF44 = sp64;
    D_005BCF48 = sp68;
    D_005BCF4C = sp6C;
    D_005BCF50 = sp70;
    D_005BCF54 = sp74;
    D_005BCF58 = sp78;
    D_005BCF5C = sp7C;
    D_005BCF60 = sp80;
    D_005BCF64 = sp84;
    *(f32 *)((u8 *)(&D_005BCF68) + 0) = (f32) *(f32 *)((u8 *)(&sp88) + 0);
    *(f32 *)((u8 *)(&D_005BCF68) + 4) = (f32) *(f32 *)((u8 *)(&sp88) + 4);
    D_005BCF70 = sp90;
    D_005BCF74 = sp94;
    *(f32 *)((u8 *)(&D_005BCF78) + 0) = (f32) *(f32 *)((u8 *)(&sp98) + 0);
    *(f32 *)((u8 *)(&D_005BCF78) + 4) = (f32) *(f32 *)((u8 *)(&sp98) + 4);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    temp_v0 = *(u8 **)((u8 *)arg1 + 0x38);
    temp_a1 = temp_v0 + 0x68;
    temp_a0 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 8) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x14)) + 8);
    if (*(s32 *)((u8 *)temp_a1 + 4) == 0) {
        *(s32 *)((u8 *)temp_v0 + 0x68) = (s32) (temp_a0 + *(&gScrTimers + (**(s32 **)((u8 *)arg0 + 0) * 4)));
    } else {
        *(s32 *)((u8 *)temp_v0 + 0x68) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x68) + temp_a0);
    }
    *(s32 *)((u8 *)temp_a1 + 4) = 1;
    *(s32 **)((u8 *)arg0 + 0x10) = &func_002ACDB0;
    return 3;
}
