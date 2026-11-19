/* Draft (not built): func_00300D20 at 0x00300D20, size 0x248, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x240, original 0x248
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_00300D20.s */

// src/unk/unk_2FAFF0.c func_00300D20 size diff=68/144
s32 func_00133780(s32, s32);
s32 func_00227A30(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0022C430(s32, f32);
extern f32 D_00458A90;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s8 D_005D0082;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00300D20(void) {
    f32 sp40;
    f32 sp44;
    s32 sp48;
    s32 temp_v0_3;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s1 = *(u8 **)((u8 *)gTourMap + 0x30);
    temp_a0 = *(u8 **)((u8 *)gTourMap + 0x24);
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x44);
    sp40 = *(f32 *)((u8 *)temp_v0 + 0x30);
    sp44 = *(f32 *)((u8 *)temp_v0 + 0x34);
    sp48 = 0;
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
    var_s0 = (unsigned char *)(gTourMap + 0x7C);
    func_0022C430(*(s32 *)(*(s32 *)((u8 *)var_s1 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0x7C) * 4)), (f32) *(s32 *)((u8 *)gTourMap + 0x84) * gFrameDelta);
    *(s32 *)((u8 *)var_s0 + 8) = (s32) (*(s32 *)((u8 *)var_s0 + 8) + 1);
    func_002FF610();
    var_s0 = (unsigned char *)(gTourMap + 0xDC);
    func_0022C430(*(s32 *)(*(s32 *)((u8 *)var_s1 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0xDC) * 4)), (f32) *(s32 *)((u8 *)gTourMap + 0xE4) * gFrameDelta);
    *(s32 *)((u8 *)var_s0 + 8) = (s32) (*(s32 *)((u8 *)var_s0 + 8) + 1);
    func_002FEED0(D_005D0082);
    func_002FDF70(1);
    func_002FE1B0(1);
    func_00228430(0);
    func_002284D0(0);
    func_00227A30(&sp40);
    var_s0 = NULL;
loop_5:
    if ((s32) var_s0 < (1 << D_005D0082)) {
        temp_v0_2 = (unsigned char *)(gTourMap + ((s32) (((s32) var_s0 * 4) + var_s0) * 4));
        if (*(u8 *)((u8 *)temp_v0_2 + 0x2F2) != 0) {
            func_002FE7A0(temp_v0_2 + 0x2EC);
        }
        var_s0 += 1;
        goto loop_5;
    }
    func_00228410();
    func_002FE5A0();
    var_s0 = NULL;
    var_s2 = *(u8 **)((u8 *)gTourMap + 0x30);
    var_s1 = (unsigned char *)(gTourMap + 0x19C);
loop_10:
    if ((s32) var_s0 < 4) {
        temp_v0_3 = *(s32 *)((u8 *)var_s1 + 0);
        if (temp_v0_3 != 0) {
            func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)var_s2 + 0x14) + (temp_v0_3 * 4)), 1, (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
            *(s32 *)((u8 *)var_s1 + 8) = (s32) (*(s32 *)((u8 *)var_s1 + 8) + 1);
        }
        var_s0 += 1;
        var_s1 += 0x30;
        goto loop_10;
    }
    func_00228410();
    func_00133780(0, 0);
}
