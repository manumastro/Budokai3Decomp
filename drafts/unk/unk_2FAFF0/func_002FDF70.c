/* Draft (not built): func_002FDF70 at 0x002FDF70, size 0x238, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 122 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD4, original 0x238
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FDF70.s */

// src/unk/unk_2FAFF0.c func_002FDF70 size diff=122/53
s32 func_00227A30(s32 *);
s32 func_00228430(s32, void *, s32, s32);
s32 func_0022C1D0(s32, s32, f32);
extern s8 D_005D0082;
extern void func_00228410(void);
void func_002FDF70(s32 arg0) {
    s32 sp30;
    f32 sp34;
    s32 sp38;
    f32 sp4C;
    f32 temp_f0;
    s32 temp_a1;
    s32 var_v0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;

    var_v0 = 1;
    temp_s0 = *(u8 **)((u8 *)gTourMap + 0x30);
    sp4C = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
loop_3:
    if (var_v0 <= 0) {
        temp_a1 = 1 << (var_v0 - 1);
        var_v0 += 1;
        goto loop_3;
    }
    temp_f0 = sp4C * (1.0f - (*(f32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44)) + 0x38) / 100.0f));
    sp4C = temp_f0;
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x44);
    sp30 = *(s32 *)((u8 *)temp_v0 + 0x30);
    sp34 = *(f32 *)((u8 *)temp_v0 + 0x34);
    sp38 = 0;
    sp30 = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp34 += temp_f0;
    if (arg0 != 0) {
        sp34 -= 100.0f;
    } else if (!(sp34 <= 0.0f)) {
        sp34 = 0.0f;
    }
    temp_s1 = (unsigned char *)(gTourMap + 0x13C);
    func_00228430(0, gTourMap, 1, (((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5));
    func_00227A30(&sp30);
    func_0022C1D0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 0x10), 1, (f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta);
    func_00228410();
    *(s32 *)((u8 *)temp_s1 + 8) = (s32) (*(s32 *)((u8 *)temp_s1 + 8) + 1);
}
