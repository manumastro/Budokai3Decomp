/* Draft (not built): func_00212DA0 at 0x00212DA0, size 0x3D8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); char *' mwccps2.exe Compiler: @ 3435: nc_0020B020(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x96), *(s16 *)((u8 *)arg0 + 0xA2)));
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00212DA0.s */

// src/unk/unk_20A4D0.c func_00212DA0 cerr diff=-1/0
extern void func_00211AF0(void);
void func_00212DA0(u8 *arg0) {
    s32 var_a1;
    f32 temp_f1;
    f32 var_f1;
    s16 temp_a0_2;
    s16 temp_a2;
    s16 temp_s4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0_3;
    s64 temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
    temp_v0 = func_00215320((s64) ((s64) temp_s0 << 0x30) >> 0x30, *(s16 *)((u8 *)arg0 + 0x50));
    if (temp_v0 != NULL) {
        *(s32 **)((u8 *)temp_v0 + 8) = &func_002115A0;
        *(s32 *)((u8 *)temp_v0 + 0xC) = 0;
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x84);
        if (temp_f1 != 0.0f) {
            *(f32 *)((u8 *)temp_v0 + 0x18) = temp_f1;
        } else {
            *(f32 *)((u8 *)temp_v0 + 0x18) = 100.0f;
        }
        temp_s1 = temp_v0 + 0x20;
        memset(temp_s1, 0, 0x50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        if (gBattle != NULL) {
            var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f1 = 1.0f;
        } else {
            var_f1 = 1.2f;
        }
        *(f32 *)((u8 *)temp_s1 + 0x30) = (f32) (*(f32 *)((u8 *)arg0 + 0x80) * var_f1);
        *(s16 *)((u8 *)temp_s1 + 0x46) = (s16) *(s16 *)((u8 *)arg0 + 0x90);
        *(s16 *)((u8 *)temp_s1 + 0x48) = (s16) *(s16 *)((u8 *)arg0 + 0x5A);
        *(s16 *)((u8 *)temp_s1 + 0x4A) = (s16) *(s16 *)((u8 *)arg0 + 0x5C);
        temp_v0_2 = func_00215320((s64) ((s64) temp_s0 << 0x30) >> 0x30, *(s16 *)((u8 *)arg0 + 0x50));
        if (temp_v0_2 != NULL) {
            temp_s1_2 = temp_v0_2 + 0x20;
            *(s32 **)((u8 *)temp_v0_2 + 8) = &func_00211AF0;
            *(s32 **)((u8 *)temp_v0_2 + 0xC) = &func_00212600;
            *(f32 *)((u8 *)temp_v0_2 + 0x18) = (f32) *(f32 *)((u8 *)arg0 + 0x84);
            memset(temp_s1_2, 0, 0x50);
            temp_s4 = *(s16 *)((u8 *)arg0 + 0x50);
            temp_s0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
            temp_v0_3 = (u8 *)(func_0020B020(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x96), *(s16 *)((u8 *)arg0 + 0xA2)));
            if (temp_v0_3 != 0) {
                temp_a0 = (s64) ((s64) temp_s4 << 0x30) >> 0x30;
                switch (temp_a0) {                  /* irregular */
                case 0x1:
                    if (temp_s0_2 != 0) {
                        var_a1 = 0x04000020;
                    } else {
                        var_a1 = 0x04000010;
                    }
                    break;
                case 0x2:
                    if (temp_s0_2 != 0) {
                        var_a1 = 0x04000008;
                    } else {
                        var_a1 = 0x04000004;
                    }
                    break;
                case 0x4:
                    if (temp_s0_2 != 0) {
                        var_a1 = 0x400020;
                    } else {
                        var_a1 = 0x400010;
                    }
                    break;
                case 0x8:
                    var_a1 = 0x400008;
                    break;
                case 0x10:
                    var_a1 = 0x04000002;
                    break;
                case 0x400:
                    var_a1 = 0x04000040;
                    break;
                case 0x800:
                    if (temp_s0_2 != 0) {
                        var_a1 = 0x04000100;
                    } else {
                        var_a1 = 0x04000080;
                    }
                    break;
                default:
                    var_a1 = 0;
                    break;
                }
                *(s32 *)((u8 *)temp_v0_2 + 0x10) = func_00209540(temp_v0_3, var_a1, 0);
            }
            temp_s0_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
            *(s32 *)((u8 *)temp_s1_2 + 0x20) = func_0020B020(temp_s0_3, *(s16 *)((u8 *)arg0 + 0x94), *(s16 *)((u8 *)arg0 + 0xA0));
            *(s32 *)((u8 *)temp_s1_2 + 0x28) = func_0020AD30(temp_s0_3, *(s16 *)((u8 *)arg0 + 0x94), *(s16 *)((u8 *)arg0 + 0xA0));
            temp_a2 = *(s16 *)((u8 *)arg0 + 0xA4);
            if (temp_a2 > 0) {
                *(s32 *)((u8 *)temp_s1_2 + 0x24) = func_0020AE80(temp_s0_3, *(s16 *)((u8 *)arg0 + 0x98), temp_a2);
            } else {
                *(s32 *)((u8 *)temp_s1_2 + 0x24) = 0;
            }
            if (*(s32 *)((u8 *)temp_v0_2 + 0x10) != 0) {
                temp_a0_2 = *(s16 *)((u8 *)arg0 + 0x90);
                func_0020F870(temp_a0_2);
                func_0013B160(&D_00568C90 + (*(s16 *)((u8 *)arg0 + 0x90) * 0x2140) + 0x40);
                M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s3) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s2) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s2) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s2) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s2) */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                func_00141CF0(&D_00568C90 + (temp_a0_2 * 0x2140) + 0x40, arg0 + 0x40, arg0);
                *(s16 *)((u8 *)temp_s1_2 + 0x46) = (s16) *(s16 *)((u8 *)arg0 + 0x90);
                *(s16 *)((u8 *)temp_s1_2 + 0x48) = (s16) *(s16 *)((u8 *)arg0 + 0x5A);
                *(s16 *)((u8 *)temp_s1_2 + 0x4A) = (s16) *(s16 *)((u8 *)arg0 + 0x5C);
                *(s32 *)((u8 *)temp_s1_2 + 0x34) = (s32) *(s32 *)((u8 *)arg0 + 0x70);
                *(s16 *)((u8 *)temp_s1_2 + 0x44) = (s16) *(s32 *)((u8 *)arg0 + 0x68);
            }
        }
    }
}
