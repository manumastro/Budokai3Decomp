/* Draft (not built): func_00242B40 at 0x00242B40, size 0x2CC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); from 'int' to 'unsigned char *' @ 1393: *)temp_s2 + 0x74) = func_00209540(*(&D_0058CA08 + (var_v0_2 * 4)), var_a1_2, 0);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00242B40.s */

// src/unk/unk_23A890.c func_00242B40 cerr diff=-1/0
s32 func_0013B110(s32);
s32 func_00141E70(void *, s32);
extern void func_0013B0B0(void *);
extern void func_00209390(void *);
extern void func_0013BA20(void *);
void func_00242B40(void) {
    s32 var_a1_2;
    s16 temp_a0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_v1;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;

    var_s0 = 0;
loop_44:
    if (var_s0 < *(s16 *)((u8 *)D_0046FE44 + 0x102)) {
        temp_v1 = gBattle + (var_s0 * 0x2020);
        temp_s1 = temp_v1 + 0x830;
        temp_s2 = D_0046FE44 + (var_s0 << 7);
        if ((*(s8 *)((u8 *)temp_v1 + 0x14ED) == 0) && (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0xE)) {
            if (gBattle != NULL) {
                var_a3 = 1;
                if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
                    var_a1 = 0;
                    var_a0 = 0;
                    if ((*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) && !(*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f)) {
                        var_a0 = 1;
                    }
                    if (var_a0 != 0) {
                        var_v1 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                    } else {
                        var_v1 = -1;
                    }
                    if ((var_s0 == var_v1) && (*(s16 *)((u8 *)gBattle + 0x8944) == 0)) {
                        var_a1 = 1;
                    }
                    if (var_a1 == 0) {
                        var_a3 = 0;
                    }
                }
            } else {
                var_a3 = 0;
            }
            if (var_a3 == 0) {
                func_0013B0B0(NULL);
                M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                func_0013BA20(*(u8 **)((u8 *)temp_s1 + 0x17A4));
                func_00141E70(temp_s2 + 0x50, 0);
                M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                func_0013B110(1);
                temp_a0 = *(s16 *)((u8 *)temp_s1 + 0xCAC);
                if ((temp_a0 == 5) || (temp_a0 == 9)) {
                    if (*(u8 **)((u8 *)temp_s2 + 0x74) == NULL) {
                        var_v0 = *(s32 *)((u8 *)temp_s1 + 0xBA0);
                        if ((var_v0 < 0) || (var_v0 >= 2)) {
                            var_v0 = 0;
                        }
                        if (var_v0 != 0) {
                            var_v0_2 = 0xB;
                        } else {
                            var_v0_2 = 0xA;
                        }
                        if (var_s0 != 0) {
                            var_a1_2 = 0x400080;
                        } else {
                            var_a1_2 = 0x400040;
                        }
                        *(u8 **)((u8 *)temp_s2 + 0x74) = func_00209540(*(&D_0058CA08 + (var_v0_2 * 4)), var_a1_2, 0);
                    }
                } else {
                    temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0x74);
                    if (temp_a0_2 != NULL) {
                        func_00209390(temp_a0_2);
                    }
                }
                temp_a0_3 = *(u8 **)((u8 *)temp_s2 + 0x70);
                if (temp_a0_3 != NULL) {
                    func_00208F70((s32)((void *)(temp_a0_3)));
                    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x70)) + 0x38) < 0) {
                        *(u8 **)((u8 *)temp_s2 + 0x70) = NULL;
                    }
                }
                temp_a0_4 = *(u8 **)((u8 *)temp_s2 + 0x74);
                if (temp_a0_4 != NULL) {
                    func_00208F70((s32)((void *)(temp_a0_4)));
                    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x74)) + 0x38) < 0) {
                        *(u8 **)((u8 *)temp_s2 + 0x74) = NULL;
                    }
                }
            }
        }
        var_s0 += 1;
        goto loop_44;
    }
}
