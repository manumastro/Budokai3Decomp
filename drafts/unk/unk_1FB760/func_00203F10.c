/* Draft (not built): func_00203F10 at 0x00203F10, size 0x3E8, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 164 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3B8, original 0x3E8
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00203F10.s */

// src/unk/unk_1FB760.c func_00203F10 size diff=164/238
s32 func_00141C80(s32 *, void *, f32);
extern f32 D_0051D9A8;
s32 func_00203F10(u8 *arg0) {
    s32 sp60;
    s32 sp70;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f2;
    s32 temp_a1;
    s32 temp_v1;
    u8 *temp_a0;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s1;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s1 = *(u8 **)((u8 *)arg0 + 0x3C);
loop_36:
    if (var_s1 != (arg0 + 0x44)) {
        *(f32 *)((u8 *)var_s1 + 8) = (f32) (*(f32 *)((u8 *)var_s1 + 8) + D_0051D9A8);
        *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) & ~1);
        temp_f1 = *(f32 *)((u8 *)var_s1 + 8);
        temp_f20 = *(f32 *)((u8 *)temp_s2 + 0x50);
        temp_f21 = temp_f1 / temp_f20;
        if (temp_f1 <= 0.0f) {
            *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) | 1);
        } else {
            func_00146F10((void *)(&sp70), (void *)(var_s1 + 0x20),(*(f32 *)(D_0051D9AC)));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            if (!(temp_f20 < 0.0f) && !(*(f32 *)((u8 *)var_s1 + 8) < temp_f20)) {
                if (*(s32 *)((u8 *)arg0 + 0x1C) != 0) {
                    func_00208530(arg0, var_s1);
                }
                **(u8 ***)((u8 *)var_s1 + 4) = *(u8 **)((u8 *)var_s1 + 0);
                *(u8 ***)((u8 *)(*(u8 **)((u8 *)var_s1 + 0)) + 4) = (u8 **) *(u8 ***)((u8 *)var_s1 + 4);
                *(s32 *)((u8 *)arg0 + 0x4C) = (s32) (*(s32 *)((u8 *)arg0 + 0x4C) - 1);
                *(((u8 *)&D_00526440) + (D_0047066C * 4)) = (unsigned char)(var_s1);
                D_0047066C += 1;
                if (D_0047066C >= 0x800) {
                    D_0047066C = 0;
                }
            } else {
                if (*(s32 *)((u8 *)temp_s2 + 8) & 4) {
                    func_00141C80(&sp60, var_s1 + 0x40, *(f32 *)((u8 *)var_s1 + 0x4C) * (*(f32 *)(D_0051D9AC)));
                    temp_a0 = var_s1 + 0x30;
                    func_00142080((u8 *)(temp_a0), (u8 *)(temp_a0), (u8 *)(&sp60));
                }
                if (*(s32 *)((u8 *)temp_s2 + 8) & 8) {
                    M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
                    *(f32 *)((u8 *)var_s1 + 0x74) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f21 */);
                }
                if (*(s32 *)((u8 *)temp_s2 + 8) & 0x10) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
                    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
                    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a0) */);
                }
                temp_v1 = *(s32 *)((u8 *)temp_s2 + 8);
                if (temp_v1 & 0x8000) {
                    temp_v0 = temp_s2 + 0xC0;
                    if (!(*(s32 *)((u8 *)var_s1 + 0xC) & 2)) {
                        *(f32 *)((u8 *)var_s1 + 0x78) = (f32) (*(f32 *)((u8 *)var_s1 + 0x78) + D_0051D9A8);
                        if (!(*(f32 *)((u8 *)var_s1 + 0x78) < *(f32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x7C) * 0x14) + temp_v0) + 8))) {
                            *(f32 *)((u8 *)var_s1 + 0x78) = 0.0f;
                            *(s32 *)((u8 *)var_s1 + 0x7C) = (s32) (*(s32 *)((u8 *)var_s1 + 0x7C) + 1);
                            temp_a1 = *(s32 *)((u8 *)temp_v0 + 4);
                            if (*(s32 *)((u8 *)var_s1 + 0x7C) == temp_a1) {
                                if (*(s32 *)((u8 *)temp_s2 + 8) & 0x10000) {
                                    *(s32 *)((u8 *)var_s1 + 0x7C) = 0;
                                } else {
                                    *(s32 *)((u8 *)var_s1 + 0x7C) = (s32) (temp_a1 - 1);
                                    *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) | 2);
                                }
                            }
                        }
                    }
                    temp_v0_2 = temp_v0 + (*(s32 *)((u8 *)var_s1 + 0x7C) * 0x14);
                    *(f32 *)((u8 *)var_s1 + 0x60) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0xC);
                    *(f32 *)((u8 *)var_s1 + 0x64) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x10);
                    *(f32 *)((u8 *)var_s1 + 0x68) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x14);
                    *(f32 *)((u8 *)var_s1 + 0x6C) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x18);
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 8) {
                        temp_f1_2 = *(f32 *)((u8 *)var_s1 + 0x60);
                        *(f32 *)((u8 *)var_s1 + 0x60) = (f32) *(f32 *)((u8 *)var_s1 + 0x68);
                        *(f32 *)((u8 *)var_s1 + 0x68) = temp_f1_2;
                    }
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 0x10) {
                        temp_f1_3 = *(f32 *)((u8 *)var_s1 + 0x64);
                        *(f32 *)((u8 *)var_s1 + 0x64) = (f32) *(f32 *)((u8 *)var_s1 + 0x6C);
                        *(f32 *)((u8 *)var_s1 + 0x6C) = temp_f1_3;
                    }
                } else if (temp_v1 & 0x4000) {
                    var_f2 = *(f32 *)((u8 *)temp_s2 + 0xB8) * (*(f32 *)(D_0051D9AC));
                    var_f1 = *(f32 *)((u8 *)temp_s2 + 0xBC) * (*(f32 *)(D_0051D9AC));
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 8) {
                        var_f2 = -var_f2;
                    }
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 0x10) {
                        var_f1 = -var_f1;
                    }
                    *(f32 *)((u8 *)var_s1 + 0x60) = (f32) (*(f32 *)((u8 *)var_s1 + 0x60) + var_f2);
                    *(f32 *)((u8 *)var_s1 + 0x64) = (f32) (*(f32 *)((u8 *)var_s1 + 0x64) + var_f1);
                    *(f32 *)((u8 *)var_s1 + 0x68) = (f32) (*(f32 *)((u8 *)var_s1 + 0x68) + var_f2);
                    *(f32 *)((u8 *)var_s1 + 0x6C) = (f32) (*(f32 *)((u8 *)var_s1 + 0x6C) + var_f1);
                }
            }
        }
        var_s1 = *(u8 **)((u8 *)var_s1 + 0);
        goto loop_36;
    }
    return 0;
}
