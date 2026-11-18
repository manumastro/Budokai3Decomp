/* Draft (not built): func_002C8360 at 0x002C8360, size 0x310, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 613: s3232 sp9C; @ 612: s3232 sp98;
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C8360.s */

// src/unk/unk_2C41C0.c func_002C8360 cerr diff=-1/0
s32 func_00133780(s32, s32);
s32 func_001351F0(s32, s32, s32, s128 *);
s32 func_00136130(s32 *, f32 *, s128 *);
s32 func_00146ED0(s32 *, s32 *, f32);
s32 func_0020AD30(s32, s16, s16);
extern s128 D_00456470;
extern void amDraw_FlushPacket(void);
extern void amModel_SetCurrent();
void func_002C8360(u8 *arg0) {
    s32 sp80;
    f32 sp90;
    f32 sp94;
    s3232 sp98;
    s3232 sp9C;
    s32 spA0;
    s128 spB0;
    f32 spBC;
    s128 spC0;
    s32 *temp_s2;
    f32 temp_f0;
    f32 temp_f20;
    f32 var_f20;
    f32 var_f2;
    f32 var_f2_2;
    s32 temp_s0;
    s32 temp_s0_2;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *var_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0);
    temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x14)) + 0x1350);
    temp_a0 = gEffWork + (*(s16 *)((u8 *)arg0 + 0x3E) * 0xF80);
    temp_s2 = *(s32 **)((u8 *)temp_a0 + 0xF78);
    temp_s3 = temp_a0 + 0xF00;
    if ((*(u8 **)((u8 *)temp_s2 + 0x38) != temp_s3) && !(*(f32 *)((u8 *)arg0 + 0x20) <= 0.0f)) {
        spC0 = D_00456470;
        var_f20 = 1.0f;
        spB0 = *(s128 *)((u8 *)temp_s1 + 0x10);
        if (gBattle != NULL) {
            var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else {
            var_f2 = 1.0f;
            if (D_004703F4 != 3) {

            } else {
                var_f2 = 1.2f;
            }
        }
        if (*(f32 *)((u8 *)arg0 + 0x20) < (*(f32 *)((u8 *)arg0 + 0x28) * var_f2)) {
            if (gBattle != NULL) {
                var_f2_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f2_2 = 1.0f;
            } else {
                var_f2_2 = 1.2f;
            }
            temp_f20 = *(f32 *)((u8 *)arg0 + 0x20) / (*(f32 *)((u8 *)arg0 + 0x28) * var_f2_2);
            var_f20 = temp_f20 * temp_f20;
        }
        *(f32 *)((u8 *)arg0 + 0x2C) = var_f20;
        spBC = *(f32 *)((u8 *)temp_s1 + 0x50) * var_f20;
        temp_s0_2 = func_0020B020(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x88), *(s16 *)((u8 *)temp_s1 + 0x8A));
        amModel_SetCurrent(temp_s0_2, func_0020AD30(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x88), *(s16 *)((u8 *)temp_s1 + 0x8A)));
        func_00133780(0, 1);
        if (*(s16 *)((u8 *)temp_s1 + 0x80) != 0) {
            func_001351F0(1, 0xC23, 0, &spC0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            func_00146ED0(&sp80, &sp80, *(f32 *)((u8 *)temp_s1 + 0x3C));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            sp90 = *(f32 *)((u8 *)temp_s1 + 0x38) * var_f20;
            sp98 = 0;
            sp9C = 0x3F800000;
            sp94 = *(f32 *)((u8 *)temp_s1 + 0x38) * var_f20;
            func_00136130(&spA0, &sp90, &spB0);
            amDraw_FlushPacket();
        }
        temp_f0 = *(f32 *)((u8 *)temp_s1 + 0x44) * var_f20;
        sp98 = 0;
        sp9C = 0;
        sp94 = temp_f0;
        sp90 = temp_f0;
        func_001351F0(1, 0xC23, 0, &spC0);
        func_00136130(temp_s2, &sp90, &spB0);
        var_s2 = *(u8 **)((u8 *)temp_s2 + 0x38);
loop_19:
        if (var_s2 != temp_s3) {
            func_002C7E00(var_s2, arg0, &spB0, &sp90);
            var_s2 = *(u8 **)((u8 *)var_s2 + 0x38);
            goto loop_19;
        }
        amDraw_FlushPacket();
        func_00133780(0, 0);
    }
}
