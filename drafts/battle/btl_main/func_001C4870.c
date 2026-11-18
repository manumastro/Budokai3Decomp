/* Draft (not built): func_001C4870 at 0x001C4870, size 0x3A0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); it conversion from 'int' to 'int *' @ 5310: temp_f20 = (s32 *)(sp100 - func_00146E30(&spF0, temp_s1 + (var_s0 * 0x30)));
 * Original: asm/nonmatchings/battle/btl_main/func_001C4870.s */

// src/battle/btl_main.c func_001C4870 cerr diff=-1/0
f32 func_00146E30(s32 *, s32 *);
s32 func_00146F60(s32 *, s32 *);
f32 func_00146F90(s32 *, s32 *);
s32 func_001FF4F0(s32 *, s32 *, s32);
extern s32 D_0046FDC8;
extern void BtbBg_ClearFlag2(void);
extern void BtbBg_SetFlag2(void);
void func_001C4870(u8 *arg0) {
    s32 sp80;
    f32 sp84;
    s32 sp90;
    f32 sp94;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    f32 spC4;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    f32 sp100;
    f32 sp104;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;

    if (*(s8 *)((u8 *)arg0 + 0x1FFB) != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp100 = 8.0f;
        sp104 = sp100 * 8.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        if (*(s8 *)((u8 *)arg0 + 0x1FFC) != 0) {
            BtbBg_SetFlag2();
            *(s8 *)((u8 *)arg0 + 0x1FFC) = 0;
        }
        temp_s5 = func_001FF4F0(&spF0, &spE0, 0);
        BtbBg_ClearFlag2();
        temp_s1 = D_0046FDC8;
        var_s3 = 0;
        var_s2 = 0;
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
        var_s0 = 0;
loop_21:
        if (var_s0 < temp_s5) {
            if (*(s32 *)((u8 *)((var_s0 * 0x30) + temp_s1) + 0x20) == 1) {
                if (var_s3 == 0) {
                    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                    var_s2 = 0;
                }
                var_s3 += 1;
                goto block_11;
            }
            if (var_s3 <= 0) {
                var_s2 += 1;
block_11:
                temp_f20 = (s32 *)(sp100 - func_00146E30(&spF0, temp_s1 + (var_s0 * 0x30)));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                spC4 = 0.0f;
                if (var_s3 < 2) {
                    if (var_s2 >= 2) {
                        goto block_14;
                    }
                } else {
block_14:
                    func_00146F60(&spA0, &spD0);
                    if (func_00146F90(&spC0, &spA0) < 0.5f) {
                        if (*(s32 *)((u8 *)((var_s0 * 0x30) + temp_s1) + 0x20) == 1) {
                            var_s3 -= 1;
                        } else {
                            var_s2 -= 1;
                        }
                    }
                }
                func_00146ED0(&spB0, &spC0, temp_f20);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            }
            var_s0 += 1;
            goto loop_21;
        }
        if (var_s3 > 0) {

        } else {
            var_s3 = var_s2;
        }
        if (var_s3 > 0) {
            func_00146F10(&spD0, &spD0, 1.0f / (f32) var_s3);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_001E4FA0(arg0, -1);
            if (*(s8 *)((u8 *)gBattle + 0x8AB0) == 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                sp94 = 0.0f;
                sp84 = 0.0f;
                temp_f20_2 = 3.0f + (*(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0x10) + *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xBB4)) + 0x10));
                if (!((0.5f * (temp_f20_2 - func_00146E30(&sp90, &sp80))) <= 0.0f)) {
                    *(s8 *)((u8 *)gBattle + 0x8AB0) = 1;
                }
            }
            if (*(s8 *)((u8 *)gBattle + 0x8AB0) != 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                func_001E4FA0(*(u8 **)((u8 *)arg0 + 0x1354), -1);
            }
        }
    }
}
