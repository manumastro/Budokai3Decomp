/* Draft (not built): func_002C8A80 at 0x002C8A80, size 0x2A8, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 138 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D8, original 0x2A8
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C8A80.s */

// src/unk/unk_2C41C0.c func_002C8A80 size diff=138/118
f32 func_00146E30(s32);
s32 func_00146ED0(s32 *, s32 *, f32);
extern void func_00146F30(void *);
void func_002C8A80(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    s32 sp70;
    s32 sp80;
    s32 sp90;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    s32 spC0;
    s32 spD0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f20;
    s32 temp_a0;
    s32 temp_a1;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg1 + 0);
    temp_f1 = *(f32 *)((u8 *)arg1 + 0x58) + func_00146E30(*(s32 *)((u8 *)arg0 + 0x34));
    *(f32 *)((u8 *)arg1 + 0x58) = temp_f1;
    if (!(temp_f1 <= *(f32 *)((u8 *)temp_s2 + 0xA4))) {
        sp60 = *(f32 *)((u8 *)arg2 + 0);
        sp64 = *(f32 *)((u8 *)arg2 + 4);
        sp68 = *(f32 *)((u8 *)arg2 + 8);
        temp_f4 = *(f32 *)((u8 *)temp_s2 + 0x4C);
        temp_f2 = *(f32 *)((u8 *)arg1 + 0x2C);
        temp_f6 = (f32) *(s32 *)((u8 *)arg1 + 0x44) / (f32) *(s32 *)((u8 *)arg1 + 0x40);
        temp_f1_2 = *(f32 *)((u8 *)temp_s2 + 0x58);
        var_f20 = temp_f2 * (temp_f4 + (temp_f6 * (*(f32 *)((u8 *)temp_s2 + 0x48) - temp_f4)));
        *(f32 *)((u8 *)arg2 + 0xC) = (f32) (temp_f2 * (temp_f1_2 + (temp_f6 * (*(f32 *)((u8 *)temp_s2 + 0x54) - temp_f1_2))));
    } else {
        sp60 = *(f32 *)((u8 *)arg2 + 0);
        sp64 = *(f32 *)((u8 *)arg2 + 4);
        sp68 = *(f32 *)((u8 *)arg2 + 8);
        temp_f3 = *(f32 *)((u8 *)temp_s2 + 0x4C);
        temp_f1_3 = *(f32 *)((u8 *)arg1 + 0x2C);
        var_f20 = temp_f1_3 * (temp_f3 + (((f32) *(s32 *)((u8 *)arg1 + 0x44) / (f32) *(s32 *)((u8 *)arg1 + 0x40)) * (*(f32 *)((u8 *)temp_s2 + 0x48) - temp_f3)));
        *(f32 *)((u8 *)arg2 + 0xC) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x54) * (temp_f1_3 * (*(f32 *)((u8 *)arg1 + 0x58) / *(f32 *)((u8 *)temp_s2 + 0xA4))));
    }
    sp6C = *(f32 *)((u8 *)arg2 + 0xC);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp80);
    func_00146ED0(&sp70, &sp80, var_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    spA0 = 1.0f;
    spA8 = 1.0f;
    spAC = 1.0f;
    spB4 = 1.0f;
    spA4 = 0.0f;
    spB0 = 1.0f;
    spB8 = 1.0f;
    spBC = 1.0f;
    func_00135D40(&spC0, &sp60, &spA0);
    func_00135D40(&spD0, &sp60, &spB0);
    temp_a1 = *(s32 *)((u8 *)arg1 + 0x40);
    temp_a0 = temp_a1 - *(s32 *)((u8 *)arg1 + 0x44);
    if ((temp_a0 != 0x19) && (temp_a0 != 0x32)) {
        if (temp_a0 == 0x4B) {
            goto block_7;
        }
    } else {
block_7:
        amDraw_ClosePacket(1);
        func_00135D40(&spC0, &sp60, &spA0);
        func_00135D40(&spD0, &sp60, &spB0);
    }
}
