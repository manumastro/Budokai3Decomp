/* Draft (not built): func_002065F0 at 0x002065F0, size 0x3C0, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 161 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x410, original 0x3C0
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002065F0.s */

// src/unk/unk_1FB760.c func_002065F0 size diff=161/260
extern f32 D_0051D9A8;
s32 func_002065F0(u8 *arg0) {
    s32 sp60;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f2;
    s32 temp_a1;
    s32 temp_v1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s1;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s1 = *(u8 **)((u8 *)arg0 + 0x3C);
loop_34:
    if (var_s1 != (arg0 + 0x44)) {
        *(f32 *)((u8 *)var_s1 + 8) = (f32) (*(f32 *)((u8 *)var_s1 + 8) + D_0051D9A8);
        *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) & ~1);
        temp_f1 = *(f32 *)((u8 *)var_s1 + 8);
        temp_f21 = *(f32 *)((u8 *)temp_s2 + 0x50);
        temp_f20 = temp_f1 / temp_f21;
        if (temp_f1 <= 0.0f) {
            *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) | 1);
        } else {
            func_00146F10(&sp60, var_s1 + 0x20, *D_0051D9AC);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            if (!(temp_f21 < 0.0f) && !(*(f32 *)((u8 *)var_s1 + 8) < temp_f21)) {
                if (*(s32 *)((u8 *)arg0 + 0x1C) != 0) {
                    func_00208530(arg0, var_s1);
                }
                **(u8 ***)((u8 *)var_s1 + 4) = *(u8 **)((u8 *)var_s1 + 0);
                *(u8 ***)((u8 *)(*(u8 **)((u8 *)var_s1 + 0)) + 4) = (u8 **) *(u8 ***)((u8 *)var_s1 + 4);
                *(s32 *)((u8 *)arg0 + 0x4C) = (s32) (*(s32 *)((u8 *)arg0 + 0x4C) - 1);
                D_00526440[D_0047066C] = (s32) var_s1;
                D_0047066C += 1;
                if (D_0047066C >= 0x800) {
                    D_0047066C = 0;
                }
            } else {
                if (*(s32 *)((u8 *)temp_s2 + 8) & 4) {
                    M2C_ERROR(/* unknown instruction: mula.s $f2, $f3 */);
                    temp_f1_2 = M2C_ERROR(/* unknown instruction: madd.s $f1, $f1, $f20 */);
                    *(f32 *)((u8 *)var_s1 + 0x50) = (f32) (*(f32 *)((u8 *)var_s1 + 0x58) * temp_f1_2);
                    *(f32 *)((u8 *)var_s1 + 0x54) = (f32) (*(f32 *)((u8 *)var_s1 + 0x5C) * temp_f1_2);
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
                        *(f32 *)((u8 *)var_s1 + 0x60) = (f32) (*(f32 *)((u8 *)var_s1 + 0x60) + D_0051D9A8);
                        if (!(*(f32 *)((u8 *)var_s1 + 0x60) < *(f32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x64) * 0x14) + temp_v0) + 8))) {
                            *(f32 *)((u8 *)var_s1 + 0x60) = 0.0f;
                            *(s32 *)((u8 *)var_s1 + 0x64) = (s32) (*(s32 *)((u8 *)var_s1 + 0x64) + 1);
                            temp_a1 = *(s32 *)((u8 *)temp_v0 + 4);
                            if (*(s32 *)((u8 *)var_s1 + 0x64) == temp_a1) {
                                if (*(s32 *)((u8 *)temp_s2 + 8) & 0x10000) {
                                    *(s32 *)((u8 *)var_s1 + 0x64) = 0;
                                } else {
                                    *(s32 *)((u8 *)var_s1 + 0x64) = (s32) (temp_a1 - 1);
                                    *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) | 2);
                                }
                            }
                        }
                    }
                    temp_v0_2 = temp_v0 + (*(s32 *)((u8 *)var_s1 + 0x64) * 0x14);
                    *(f32 *)((u8 *)var_s1 + 0x40) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0xC);
                    *(f32 *)((u8 *)var_s1 + 0x44) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x10);
                    *(f32 *)((u8 *)var_s1 + 0x48) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x14);
                    *(f32 *)((u8 *)var_s1 + 0x4C) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x18);
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 8) {
                        temp_f1_3 = *(f32 *)((u8 *)var_s1 + 0x40);
                        *(f32 *)((u8 *)var_s1 + 0x40) = (f32) *(f32 *)((u8 *)var_s1 + 0x48);
                        *(f32 *)((u8 *)var_s1 + 0x48) = temp_f1_3;
                    }
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 0x10) {
                        temp_f1_4 = *(f32 *)((u8 *)var_s1 + 0x44);
                        *(f32 *)((u8 *)var_s1 + 0x44) = (f32) *(f32 *)((u8 *)var_s1 + 0x4C);
                        *(f32 *)((u8 *)var_s1 + 0x4C) = temp_f1_4;
                    }
                } else if (temp_v1 & 0x4000) {
                    var_f2 = *(f32 *)((u8 *)temp_s2 + 0xB8) * *D_0051D9AC;
                    var_f1 = *(f32 *)((u8 *)temp_s2 + 0xBC) * *D_0051D9AC;
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 8) {
                        var_f2 = -var_f2;
                    }
                    if (*(s32 *)((u8 *)var_s1 + 0xC) & 0x10) {
                        var_f1 = -var_f1;
                    }
                    *(f32 *)((u8 *)var_s1 + 0x40) = (f32) (*(f32 *)((u8 *)var_s1 + 0x40) + var_f2);
                    *(f32 *)((u8 *)var_s1 + 0x44) = (f32) (*(f32 *)((u8 *)var_s1 + 0x44) + var_f1);
                    *(f32 *)((u8 *)var_s1 + 0x48) = (f32) (*(f32 *)((u8 *)var_s1 + 0x48) + var_f2);
                    *(f32 *)((u8 *)var_s1 + 0x4C) = (f32) (*(f32 *)((u8 *)var_s1 + 0x4C) + var_f1);
                }
            }
        }
        var_s1 = *(u8 **)((u8 *)var_s1 + 0);
        goto loop_34;
    }
    return 0;
}
