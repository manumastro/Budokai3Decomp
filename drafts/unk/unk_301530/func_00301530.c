/* Draft (not built): func_00301530 at 0x00301530, size 0x1C4, segment unk/unk_301530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x190, original 0x1C4
 * Original: asm/nonmatchings/unk/unk_301530/func_00301530.s */

// src/unk/unk_301530.c func_00301530 size diff=48/100
s32 func_00133780(s32, s32);
s32 func_00227A30(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C430(s32, f32);
s32 func_002FDF70(s32);
s32 func_002FE1B0(s32);
s32 func_002FE7A0(void *);
s32 func_002FEED0(s8);
s32 func_002FF610();
extern f32 D_00458A90;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s8 D_005D0082;
extern f32 gFrameDelta;
extern void *gTourMap;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00301530(void) {
    f32 sp30;
    f32 sp34;
    s32 sp38;
    s32 var_s0;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s1 = *(u8 **)((u8 *)gTourMap + 0x30);
    temp_a0 = *(u8 **)((u8 *)gTourMap + 0x24);
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x44);
    sp30 = *(f32 *)((u8 *)temp_v0 + 0x30);
    sp34 = *(f32 *)((u8 *)temp_v0 + 0x34);
    sp38 = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    D_00470704 = temp_a0;
    D_0047070C = 0x11405000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11405000);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    func_00227A30(&D_00458A90);
    temp_s0 = ((u8 *)gTourMap) + 0x7C;
    func_0022C430(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0x7C) * 4)), (f32) *(s32 *)((u8 *)gTourMap + 0x84) * gFrameDelta);
    *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
    func_002FF610();
    temp_s0_2 = ((u8 *)gTourMap) + 0xDC;
    func_0022C430(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0xDC) * 4)), (f32) *(s32 *)((u8 *)gTourMap + 0xE4) * gFrameDelta);
    *(s32 *)((u8 *)temp_s0_2 + 8) = (s32) (*(s32 *)((u8 *)temp_s0_2 + 8) + 1);
    func_002FEED0(D_005D0082);
    func_002FDF70(0);
    func_002FE1B0(0);
    func_00228410();
    func_00228430(0);
    func_00227A30(&sp30);
    var_s0 = 0;
    goto loop_4;
block_1:
    temp_v0_2 = ((u8 *)gTourMap) + (var_s0 * 0x14);
    if (*(u8 *)((u8 *)temp_v0_2 + 0x2F2) == 0) {
        goto block_3;
    }
    func_002FE7A0(temp_v0_2 + 0x2EC);
block_3:
    var_s0 += 1;
loop_4:
    if (var_s0 < (1 << D_005D0082)) {
        goto block_1;
    }
    func_00228410();
    func_00133780(0, 0);
    return;
}
