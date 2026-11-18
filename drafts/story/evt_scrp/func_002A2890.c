/* Draft (not built): func_002A2890 at 0x002A2890, size 0x204, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'float *' mwccps2.exe Compiler: 631: temp_f0 = D_005AB8CC + func_002B06A0(); @ 630: temp_f20 = D_005AB8CC / D_005AB8C8;
 * Original: asm/nonmatchings/story/evt_scrp/func_002A2890.s */

// src/story/evt_scrp.c func_002A2890 cerr diff=-1/0
extern void func_00131B90(s32 *);
extern void func_00131D00(s32 *, s32, f32, f32);
extern s32 D_005AB800[];
extern f32 D_005AB8C8[];
extern s32 D_005AB8CC[];
extern s32 D_005AB840[];
extern f32 D_00455924[];
extern s32 D_005AB7F0[];
s32 amCamera_SetScreen(s32 *, s32 *, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_0013B110(s32);
s32 func_0013BBD0(s32, s32, f32);
s32 func_0029D390(s32 *);
s32 func_0029DB00(s32, s32);
extern s32 D_00455928;
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void func_0013B160(void *);
extern void func_0029D8B0(int, int);
extern void func_0013AFA0(void *);
extern void func_002A2730(void);
s32 func_002A2890(u8 *arg0, u8 *arg1) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_a1;
    s32 temp_s1;
    s8 temp_s0;

    temp_s1 = (s32)(D_005AB7F0);
    temp_f21 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 4);
    temp_f20 = D_005AB8CC / D_005AB8C8;
    temp_f0 = D_005AB8CC + func_002B06A0();
    D_005AB8CC = temp_f0;
    if (!(temp_f0 < D_005AB8C8)) {
        *(s32 **)((u8 *)arg0 + 0x10) = &func_002A2730;
    }
    temp_s0 = *(s8 *)((u8 *)D_004E6560 + 0x2AEF0);
    temp_a1 = temp_s0 * 0x1C;
    sp50 = temp_f21;
    sp54 = *(&D_00455924 + temp_a1);
    sp58 = *(&D_00455928 + temp_a1);
    func_0013B160(NULL);
    amCamera_SetScreen(&D_005AB840, &D_005AB800, 0x43F00000);
    func_00131B90((void *)(&D_005AB840));
    func_00131D00(&D_005AB840, 0, sp50, sp54);
    func_00131F00((s32 *)(&D_005AB840), 0, 0);
    func_00132DF0(NULL);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_0013B0B0(NULL);
    func_0013AFA0(NULL);
    func_0013BBD0(0, 0, *(&D_00455928 + (temp_s0 * 0x1C)));
    sp40 = 0;
    sp44 = 0;
    sp48 = 0;
    temp_f0_2 = 1.0f - temp_f20;
    sp4C = temp_f0_2;
    if (!(temp_f0_2 <= 0.0f)) {
        func_0029D390(&sp40);
        func_0029D8B0(-1, 2);
    }
    func_0029DB00(temp_s1, 0x3F800000);
    func_0029D390(NULL);
    func_0029D8B0(-3, 0);
    func_0013B110(1);
    return 3;
}
