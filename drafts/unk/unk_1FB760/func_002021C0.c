/* Draft (not built): func_002021C0 at 0x002021C0, size 0x6B4, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 574: *)&D_0044B860) + (*(u16 *)((u8 *)spF8 + 4) * 0x10))(&spF0, spF4, temp_a2, &spA0);
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002021C0.s */

// src/unk/unk_1FB760.c func_002021C0 cerr diff=-1/0
extern u32 func_0012EAE0(s32);
extern void func_00146ED0(f32 *, f32 *, f32);
extern f32 D_0051D9A8;
s32 func_002021C0(u8 *arg0) {
    s32 sp70;
    f32 sp74;
    s32 sp80;
    s32 sp90;
    s32 spA0;
    s32 spB0;
    f32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    u8 *spF4;
    u8 *spF8;
    s32 *spFC;
    s32 *sp100;
    s32 *sp104;
    s32 *sp108;
    s32 *sp10C;
    s32 *temp_a2;
    f32 temp_f1;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    u32 temp_hi;
    u8 *temp_s3;
    u8 *temp_v1;
    u8 *var_s2;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x20);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x14);
    *(f32 *)((u8 *)temp_v1 + 8) = (f32) (*(f32 *)((u8 *)temp_v1 + 8) + D_0051D9A8);
    temp_f1 = *(f32 *)((u8 *)temp_s3 + 0x50);
    if ((temp_f1 != -1.0f) && !(*(f32 *)((u8 *)temp_v1 + 8) < temp_f1)) {
        return 1;
    }
    var_s2 = *(u8 **)((u8 *)arg0 + 0x28);
loop_59:
    if (var_s2 != (arg0 + 0x30)) {
        if (*(s32 *)((u8 *)temp_s3 + 8) == 1) {
            temp_v0 = func_0012EAE0(8) & 0xFF;
            if (temp_v0 >= 0) {
                var_f2 = (f32) temp_v0;
            } else {
                var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
            }
            if ((var_f2 / 255.0f) <= *(f32 *)((u8 *)temp_s3 + 0x60)) {
                *(f32 *)((u8 *)var_s2 + 0x24) = (f32) (*(f32 *)((u8 *)var_s2 + 0x24) + 1.0f);
            }
        } else {
            *(f32 *)((u8 *)var_s2 + 0x24) = (f32) (*(f32 *)((u8 *)var_s2 + 0x24) + (*(f32 *)((u8 *)temp_s3 + 0x60) * D_0051D9A8));
        }
loop_57:
        if (!(*(f32 *)((u8 *)var_s2 + 0x24) < 1.0f)) {
            *(f32 *)((u8 *)var_s2 + 0x24) = (f32) (*(f32 *)((u8 *)var_s2 + 0x24) - 1.0f);
            if ((func_0012EAE0(8) & 0xFF) >= 0) {

            }
            temp_hi = func_0012EAE0(4) % (u32) *(u32 *)((u8 *)temp_s3 + 0x70);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            if ((temp_hi == 2) || (temp_hi == 3) || (temp_hi == 5) || (temp_hi == 6)) {
                sp74 -= 3.0f;
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_v0_2 = func_0012EAE0(8) & 0xFF;
            if (temp_v0_2 >= 0) {
                var_f1 = (f32) temp_v0_2;
            } else {
                var_f1 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
            }
            switch (temp_hi) {                      /* switch 1; irregular */
            case 6:                                 /* switch 1 */
                /* fallthrough */
            case 2:                                 /* switch 1 */
            case 3:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
                if ((var_f1 / 255.0f) <= 0.3f) {
                    func_00146ED0((f32 *)(&spB0), (f32 *)(&spB0), *(f32 *)((u8 *)temp_s3 + 0x58));
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                } else {
                default:                            /* switch 1 */
                    func_00146ED0((f32 *)(&spB0), (f32 *)(&spB0), *(f32 *)((u8 *)temp_s3 + 0x54));
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                }
                break;
            }
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_v1_2 = *(s32 *)((u8 *)temp_s3 + 8);
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                /* fallthrough */
            case 0:                                 /* switch 2 */
                if (*(s32 *)((u8 *)temp_s3 + 0x68) != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    func_00146F30((f32 *)(&sp90));
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                    temp_v0_3 = func_0012EAE0(8) & 0xFF;
                    if (temp_v0_3 >= 0) {
                        var_f1_2 = (f32) temp_v0_3;
                    } else {
                        var_f1_2 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
                    }
                    var_f20 = var_f1_2 / 255.0f;
                    if (func_0012EAE0(1) & 1) {

                    } else {
                        var_f20 = -var_f20;
                    }
                    func_00146F10(&spB0, &sp90, var_f20);
                    func_00146F10(&spD0, &spD0, 3.0f);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                } else {
                    temp_v0_4 = func_0012EAE0(8) & 0xFF;
                    if (temp_v0_4 >= 0) {
                        var_f1_3 = (f32) temp_v0_4;
                    } else {
                        var_f1_3 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
                    }
                    var_f20_2 = var_f1_3 / 255.0f;
                    if (func_0012EAE0(1) & 1) {

                    } else {
                        var_f20_2 = -var_f20_2;
                    }
                    func_00146F10(&spB0, &D_0051D9D0, var_f20_2);
                    spB4 += *(f32 *)((u8 *)temp_s3 + 0x64);
                }
                func_00146F30((f32 *)(&spB0));
                break;
            case 1:                                 /* switch 2 */
                spB4 = 1.0f;
                spBC = 0x3F800000;
                spB0 = 0;
                spB8 = 0;
                func_00146F10(&spB0, &spB0, 3.0f);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                break;
            }
            func_00146F10(&spC0, &spB0, *(f32 *)((u8 *)temp_s3 + 0x5C));
            spF0 = *(s32 *)((u8 *)arg0 + 0x10);
            spF4 = var_s2;
            spF8 = *(u8 **)((u8 *)var_s2 + 0x14);
            sp100 = &spE0;
            sp104 = &spC0;
            sp108 = &spA0;
            sp10C = &spA0;
            temp_a2 = (int *)(*(((u8 *)&D_00526440) + (D_00470668 * 4)));
            D_00470668 += 1;
            if (D_00470668 >= 0x800) {
                D_00470668 = 0;
            }
            *(s32 **)((u8 *)temp_a2 + 4) = (s32 *) *(s32 **)((u8 *)spF4 + 0x48);
            *(s32 **)((u8 *)temp_a2 + 0) = (int *)(**(s32 **)((u8 *)spF4 + 0x48));
            **(s32 **)((u8 *)spF4 + 0x48) = (int)(temp_a2);
            *(s32 **)((u8 *)spF4 + 0x48) = temp_a2;
            *(s32 *)((u8 *)spF4 + 0x4C) = (s32) (*(s32 *)((u8 *)spF4 + 0x4C) + 1);
            spFC = temp_a2;
            *(((u8 *)&D_0044B860) + (*(u16 *)((u8 *)spF8 + 4) * 0x10))(&spF0, spF4, temp_a2, &spA0);
            goto loop_57;
        }
        var_s2 = *(u8 **)((u8 *)var_s2 + 0);
        goto loop_59;
    }
    return 0;
}
