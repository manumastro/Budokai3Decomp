/* Draft (not built): func_00213F30 at 0x00213F30, size 0x434, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); char *' mwccps2.exe Compiler: @ 3420: func_0020B020(temp_s0, *(s16 *)((u8 *)arg0 + 0x96), *(s16 *)((u8 *)arg0 + 0xA2)));
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00213F30.s */

// src/unk/unk_20A4D0.c func_00213F30 cerr diff=-1/0
extern f32 D_0047040C;
extern f32 D_0047CA50;
extern f32 D_0047CA7C;
extern void func_00209A90(void *, void *);
extern char D_00459390[];
void func_00213F30(u8 *arg0) {
    f32 sp70;
    f32 sp80;
    s32 sp90;
    s32 spA0;
    s32 spB0;
    s32 var_a1;
    f32 temp_f0;
    s16 temp_a2_2;
    s16 temp_s5;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 var_s0;
    s64 temp_a0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_a2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
    temp_s3 = gBattle + (temp_a2 * 0x2020) + 0x830;
    temp_v0 = func_00215320((s64) ((s64) temp_a2 << 0x30) >> 0x30, *(s16 *)((u8 *)arg0 + 0x50));
    if (temp_v0 != NULL) {
        temp_s1 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 8) = &func_00211F80;
        *(s32 **)((u8 *)temp_v0 + 0xC) = &func_00212650;
        *(f32 *)((u8 *)temp_v0 + 0x18) = (f32) *(f32 *)((u8 *)arg0 + 0x84);
        memset(temp_s1, 0, 0x50);
        temp_s5 = *(s16 *)((u8 *)arg0 + 0x50);
        temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
        temp_v0_2 = (u8 *)(func_0020B020(temp_s0, *(s16 *)((u8 *)arg0 + 0x96), *(s16 *)((u8 *)arg0 + 0xA2)));
        if (temp_v0_2 != 0) {
            temp_a0 = (s64) ((s64) temp_s5 << 0x30) >> 0x30;
            switch (temp_a0) {                      /* irregular */
            case 0x1:
                if (temp_s0 != 0) {
                    var_a1 = 0x04000020;
                } else {
                    var_a1 = 0x04000010;
                }
                break;
            case 0x2:
                if (temp_s0 != 0) {
                    var_a1 = 0x04000008;
                } else {
                    var_a1 = 0x04000004;
                }
                break;
            case 0x4:
                if (temp_s0 != 0) {
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
                if (temp_s0 != 0) {
                    var_a1 = 0x04000100;
                } else {
                    var_a1 = 0x04000080;
                }
                break;
            default:
                var_a1 = 0;
                break;
            }
            *(u8 **)((u8 *)temp_v0 + 0x10) = func_00209540(temp_v0_2, var_a1, 0);
        }
        temp_s0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
        *(s32 *)((u8 *)temp_s1 + 0x20) = func_0020B020(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x94), *(s16 *)((u8 *)arg0 + 0xA0));
        *(s32 *)((u8 *)temp_s1 + 0x28) = func_0020AD30(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x94), *(s16 *)((u8 *)arg0 + 0xA0));
        temp_a2_2 = *(s16 *)((u8 *)arg0 + 0xA4);
        if (temp_a2_2 > 0) {
            *(s32 *)((u8 *)temp_s1 + 0x24) = func_0020AE80(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x98), temp_a2_2);
        } else {
            *(s32 *)((u8 *)temp_s1 + 0x24) = 0;
        }
        if (*(u8 **)((u8 *)temp_v0 + 0x10) != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
            func_00209A90(*(u8 **)((u8 *)temp_v0 + 0x10), arg0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            var_s0 = 1;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_0013B160(D_00459390);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            sp80 = (0.5f * D_0047040C) + ((D_0047CA7C * (sp80 * D_0047CA50)) / sp88);
            temp_f0 = (0.5f * D_0047040C) + ((D_0047CA7C * (sp70 * D_0047CA50)) / sp78);
            sp70 = temp_f0;
            if (sp80 < temp_f0) {
                var_s0 = 0;
            }
            if (var_s0 != 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            } else {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            }
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00146F30(&spB0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            *(s16 *)((u8 *)temp_s1 + 0x48) = (s16) *(s16 *)((u8 *)arg0 + 0x5A);
            *(s16 *)((u8 *)temp_s1 + 0x4A) = (s16) *(s16 *)((u8 *)arg0 + 0x5C);
            *(s32 *)((u8 *)temp_s1 + 0x34) = (s32) *(s32 *)((u8 *)arg0 + 0x70);
            *(s16 *)((u8 *)temp_s1 + 0x44) = (s16) ((s64) ((s64) *(s32 *)((u8 *)arg0 + 0x68) << 0x30) >> 0x30);
        }
    }
}
