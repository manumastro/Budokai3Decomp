/* Draft (not built): func_002A2730 at 0x002A2730, size 0x158, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 72 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x124, original 0x158
 * Original: asm/nonmatchings/story/evt_scrp/func_002A2730.s */

// src/story/evt_scrp.c func_002A2730 size diff=72/73
extern void func_00131B90(s32 *);
extern void func_00131D00(s32 *, s32, f32, f32);
extern s32 D_005AB800[];
extern s32 D_005AB840[];
extern f32 D_00455924[];
extern s32 D_005AB7F0[];
s32 amCamera_SetScreen(s32 *, s32 *, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_0013B110(s32);
s32 func_0013BBD0(s32, s32, f32);
s32 func_0029DB00(s32, s32);
s32 func_0029DD30(s32, s32);
extern s32 D_00455928;
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void func_0013B160(void *);
extern void func_0013AFA0(void *);
s32 func_002A2730(u8 *arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 temp_a1;
    s32 temp_s1;
    s8 temp_s0;

    temp_s1 = (s32)(D_005AB7F0);
    temp_s0 = *(s8 *)((u8 *)D_004E6560 + 0x2AEF0);
    temp_a1 = temp_s0 * 0x1C;
    sp30 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 4);
    sp34 = *(&D_00455924 + temp_a1);
    sp38 = *(&D_00455928 + temp_a1);
    func_0013B160(NULL);
    amCamera_SetScreen(&D_005AB840, &D_005AB800, 0x43F00000);
    func_00131B90((void *)(&D_005AB840));
    func_00131D00(&D_005AB840, 0, sp30, sp34);
    func_00131F00((s32 *)(&D_005AB840), 0, 0);
    func_00132DF0(NULL);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_0013B0B0(NULL);
    func_0013AFA0(NULL);
    func_0029DD30(temp_s1, 0x3F800000);
    func_0013BBD0(0, 0, *(&D_00455928 + (temp_s0 * 0x1C)));
    func_0029DB00(temp_s1, 0x3F800000);
    func_0013B110(1);
    return 3;
}
