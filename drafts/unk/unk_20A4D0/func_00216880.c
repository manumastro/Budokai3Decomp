/* Draft (not built): func_00216880 at 0x00216880, size 0x1DC, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ' redeclared was declared as: 'void ()' now declared as: 'void (unsigned char *)' @ 3935: void func_00216880(u8 *arg0) {
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00216880.s */

// src/unk/unk_20A4D0.c func_00216880 cerr diff=-1/0
void func_00216880(u8 *arg0) {
    s32 *sp10;
    s32 *sp14;
    s16 sp30;
    s16 sp32;
    s32 sp40;
    s32 sp50;
    f32 var_f1;
    f32 var_f1_2;
    s32 var_v1;
    u8 *temp_a1;

    temp_a1 = arg0 + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        if (*(f32 *)((u8 *)temp_a1 + 0xC) < 700.0f) {
            if (gBattle != NULL) {
                var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f1 = 1.0f;
            } else {
                var_f1 = 1.2f;
            }
            *(f32 *)((u8 *)temp_a1 + 0xC) = (f32) (*(f32 *)((u8 *)temp_a1 + 0xC) + var_f1);
            if (!(*(f32 *)((u8 *)temp_a1 + 0xC) < *(f32 *)((u8 *)D_0046FDD0 + 0x1AC))) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                memset(&sp10, 0, 0x2C);
                func_0020D780(&sp40);
                sp10 = &sp50;
                sp14 = &sp40;
                sp30 = 0x12;
                sp32 = 0;
                jtbl_00469CC4[0](&sp10);
                if (gBattle != NULL) {
                    var_f1_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
                } else if (D_004703F4 != 3) {
                    var_f1_2 = 1.0f;
                } else {
                    var_f1_2 = 1.2f;
                }
                *(f32 *)((u8 *)D_0046FDD0 + 0x1AC) = (f32) (*(f32 *)((u8 *)D_0046FDD0 + 0x1AC) + (15.0f * var_f1_2));
            }
        } else {
            amTask_Kill(arg0);
            *(s32 *)((u8 *)D_0046FDD0 + 0x1A8) = 0;
        }
    }
}
