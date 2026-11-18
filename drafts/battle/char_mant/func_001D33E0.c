/* Draft (not built): func_001D33E0 at 0x001D33E0, size 0x5E4, segment battle/char_mant (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'int *' mwccps2.exe Compiler: @ 149: 0(temp_s1 + 0x40, temp_s1 + 0x40, D_00470598, *(f32 *)((u8 *)D_00470598 + 0x68));
 * Original: asm/nonmatchings/battle/char_mant/func_001D33E0.s */

// src/battle/char_mant.c func_001D33E0 cerr diff=-1/0
s32 func_0013B190(s32);
s32 func_001416A0(s32 *, s32 *, s32 *, s32 *);
s32 func_00146F10(s32 *, s32 *, void *, f32);
s32 func_0029D690();
f32 func_0029D850();
extern void *D_0046FDA0;
extern void *D_0046FDB0;
extern s32 D_00470590;
extern void *D_00470598;
extern void *D_0047059C;
extern void *D_004705A0;
extern s32 D_004705B0;
extern s32 D_004705B4;
extern s32 D_004705B8;
extern s32 D_004705BC;
extern void func_0013B960(void *);
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
extern void func_0013B160(void *);
extern void func_0011F4C0(void);
void func_001D33E0(void) {
    s32 sp90;
    s32 spA0;
    s32 spB0;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    s32 sp120;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    s32 temp_s0;
    s32 temp_s1;
    s8 var_s6;
    u8 *temp_a2;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s5;

    temp_s5 = D_00470598;
    temp_s4 = D_0047059C;
    temp_s3 = D_004705A0;
    temp_s2 = D_0046FDA0;
    temp_s1 = D_004705B4;
    temp_s0 = D_004705B8;
    var_s6 = 0;
    if (D_00470590 == 0) {
        temp_a2 = *(u8 **)((u8 *)((*(s16 *)((u8 *)temp_s3 + 0x48) * 4) + D_004705B0) + 8);
        *(s8 *)((u8 *)temp_s4 + 0x12C) = 0;
        var_f1 = *(f32 *)((u8 *)temp_a2 + 0x40) - *(f32 *)((u8 *)temp_s3 + 0);
        if (var_f1 < 0.0f) {
            var_f1 = -var_f1;
        }
        if (var_f1 <= 0.001f) {
            var_f1_2 = *(f32 *)((u8 *)temp_a2 + 0x44) - *(f32 *)((u8 *)temp_s3 + 4);
            if (var_f1_2 < 0.0f) {
                var_f1_2 = -var_f1_2;
            }
            if (var_f1_2 <= 0.001f) {
                var_f1_3 = *(f32 *)((u8 *)temp_a2 + 0x48) - *(f32 *)((u8 *)temp_s3 + 8);
                if (var_f1_3 < 0.0f) {
                    var_f1_3 = -var_f1_3;
                }
                if (var_f1_3 <= 0.001f) {
                    var_f1_4 = *(f32 *)((u8 *)temp_a2 + 0x4C) - *(f32 *)((u8 *)temp_s3 + 0xC);
                    if (var_f1_4 < 0.0f) {
                        var_f1_4 = -var_f1_4;
                    }
                    if (!(var_f1_4 <= 0.001f)) {
                        goto block_18;
                    }
                } else {
                    goto block_18;
                }
            } else {
                goto block_18;
            }
        } else {
block_18:
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s4) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($s4) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($s4) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($s4) */);
            var_s6 = 1;
            *(s8 *)((u8 *)temp_s4 + 0x12C) = (s8) ((s64) (1 << 0x38) >> 0x38);
        }
    } else {
        var_s6 = *(s8 *)((u8 *)temp_s4 + 0x12C);
    }
    func_0013B160(D_0046FDB0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_0013B960(temp_s4);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    if (*(s32 *)((u8 *)temp_s4 + 0x120) == 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F10(temp_s1 + 0x40, temp_s1 + 0x40, D_00470598, *(f32 *)((u8 *)D_00470598 + 0x68));
    }
    if (var_s6 == 0) {
        if (*(s32 *)((u8 *)temp_s4 + 0x124) == 0) {
            if (*(s32 *)((u8 *)temp_s5 + 0x18) & 0x10) {
                goto block_27;
            }
        } else {
block_27:
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            if (!(*(s32 *)((u8 *)temp_s5 + 0x18) & 8)) {
                spC0 = 0.0f;
                spC8 = 0.0f;
                spCC = 1.0f;
                spC4 = -0.027222225f * *(f32 *)((u8 *)D_00470598 + 0x6C);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            }
            func_001D2F10(&spF0);
            temp_s1_2 = D_00470598;
            D_004705BC += 1;
            func_0011F4C0();
            func_0029D690();
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00146F10(&spB0, &spB0, M2C_BITWISE(u8 *, ((0.5f + (0.5f * M2C_ERROR(/* Read from unset register $f0 */))) * (1.0f / *(f32 *)((u8 *)temp_s1_2 + 0x6C)))));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00146F10(&spF0, &spF0, M2C_BITWISE(u8 *, func_0029D850()));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_0013B160(temp_s2);
            func_0013B190(0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            func_00146F30(&sp110);
            func_00146F30(&sp100);
            func_00141C30(&spE0, &sp110, &sp100);
            func_001416A0(&spD0, &spD4, &spD8, &spE0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_001D3070(&spD0, 0);
            func_001D2CB0();
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00146F10(temp_s0 + 0x40, temp_s0 + 0x40, D_00470598, *(f32 *)((u8 *)D_00470598 + 0x68));
        }
    }
}
