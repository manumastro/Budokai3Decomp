/* Draft (not built): func_001C0130 at 0x001C0130, size 0x870, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 369 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x648, original 0x870
 * Original: asm/nonmatchings/battle/btl_main/func_001C0130.s */

// src/battle/btl_main.c func_001C0130 size diff=369/402
s32 func_0013B500(s32);
f32 func_00146E90(f32 *);
f32 func_00146F90(s32 *, f32 *);
s32 func_001FED00(f32 *, s32 *, s32 *);
extern s32 D_004313F0;
extern void func_00146F30(void *);
extern void func_0013B160(void *);
extern void func_0011F680(void);
extern char D_003F0800[];
extern void func_0013B620(void *);
void func_001C0130(Fighter *arg0, s32 arg1) {
    s32 spC4;
    s32 spBC;
    s32 spB4;
    s32 spB0;
    s32 sp98;
    u8 sp[0x400];
    f32 sp80;
    f32 sp90;
    f32 sp94;
    s32 spA0;
    s32 spB8;
    f32 spC0;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    s32 spDC;
    s32 spE0;
    s32 sp100;
    s32 sp110;
    s32 sp120;
    s32 sp130;
    BattleWork *temp_s5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    s64 temp_a1;
    u8 *temp_a1_2;
    u8 *temp_v1;

    temp_s5 = gBattle;
    *(s128 *)((u8 *)(&spE0) + 0) = (s128) *(s128 *)((u8 *)(&D_004313F0) + 0);
    *(s64 *)((u8 *)(&spE0) + 0x10) = (s64) *(s64 *)((u8 *)(&D_004313F0) + 0x10);
    func_001E4FA0(arg0, 1);
    func_001E4FA0(*(u8 **)((u8 *)arg0 + 0x1354), 1);
    func_001E4820(0.000001f, arg0, 0);
    func_001E4820(0.000001f, *(u8 **)((u8 *)arg0 + 0x1354), 0);
    temp_v0 = func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 180.0f);
    if (temp_v0 != 0) {
        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        *(s8 *)((u8 *)arg0 + 0x183C) = (s8) *(s32 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0x183C) * 4) + sp) + 0xE0);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(s8 *)((u8 *)arg0 + 0x183E) = 0;
    switch (arg1) {                                 /* irregular */
    case 0:
        spD0 = 0.0f;
        spD4 = 0.0f;
        spD8 = *(f32 *)((u8 *)arg0 + 0x1828);
        spDC = 0x3F800000;
        func_0013B160(D_003F0800);
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x1354);
        func_0013B620((u8 *) ((*(s32 *)((u8 *)arg0 + 0x1838) + (*(s32 *)((u8 *)temp_v1 + 0x17B0) + *(s32 *)((u8 *)temp_v1 + 0x17B8))) & 0xFFFF));
        func_0013B500(*(s32 *)((u8 *)arg0 + 0x1834));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        break;
    case 2:
        spD0 = 0.0f;
        spD4 = 0.0f;
        spD8 = *(f32 *)((u8 *)arg0 + 0x1828);
        spDC = 0x3F800000;
        func_0013B160(D_003F0800);
        func_0013B620((u8 *) ((*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x17B0) + *(s32 *)((u8 *)arg0 + 0x1838)) & 0xFFFF));
        func_0013B500(*(s32 *)((u8 *)arg0 + 0x1834));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        break;
    case 1:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        spD4 *= 0.35f;
        func_00146ED0(&spD0, &spD0, *(f32 *)((u8 *)arg0 + 0x1828));
        var_f1 = spD4;
        if (var_f1 < 0.0f) {
            var_f1 = -var_f1;
        }
        if (var_f1 < 1.7f) {
            spD4 = 0.0f;
        }
        *(s8 *)((u8 *)arg0 + 0x183E) = 1;
        break;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    var_s2 = 0;
    var_s1 = 0;
    spB8 = 0;
loop_18:
    var_s2 += 1;
    if (var_s2 >= 5) {
        var_s1 = 1;
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&spC0);
        func_00146ED0(&sp80, &spC0, 20.0f);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        temp_s3 = func_001FED00(&sp90, &sp110, &sp100);
        temp_f0 = func_00146F90(&spA0, &spC0);
        var_v1 = 1;
        if ((temp_s5->unk8944 != 0) && ((s8) temp_s5->unk8954[0x15A] == 0)) {
            var_v1 = 0;
        }
        if ((var_v1 != 0) && (temp_s3 > 0) && (temp_f0 < 0.0f)) {
            temp_f0_2 = func_00200270(0, sp90, sp98);
            if (sp94 < (9.0f + temp_f0_2)) {
                sp94 = 9.0f + temp_f0_2;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                func_00146ED0(&spD0, &spD0, *(f32 *)((u8 *)arg0 + 0x1828));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                goto loop_18;
            }
            temp_f20 = *(f32 *)((u8 *)arg0 + 0x654) - sp94;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            spD4 = 0.0f;
            var_f2 = (0.6f * func_00146E90(&spD0)) - 15.0f;
            if (!(var_f2 >= 0.0f)) {
                var_f2 = 0.0f;
            }
            var_f1_2 = -temp_f20;
            if (temp_f20 < 0.0f) {

            } else {
                var_f1_2 = temp_f20;
            }
            if (!(var_f1_2 <= (5.0f + var_f2))) {
                if (!(temp_f20 <= 0.0f)) {
                    var_f2 = -var_f2;
                }
                sp94 += temp_f20 + var_f2;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                func_00146ED0(&spD0, &spD0, *(f32 *)((u8 *)arg0 + 0x1828));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                goto loop_18;
            }
            var_s1 = 1;
        }
    }
    if (((spB8 == 0) || (gBtbBg.stage != 0)) && ((*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) || (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1FF8) == -1) || (*(s8 *)((u8 *)arg0 + 0x2013) == 1))) {
        func_00146F30(&spC0);
        *(s16 *)((u8 *)arg0 + 0x181E) = (s16) *(s16 *)((u8 *)arg0 + 0xCB4);
        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        *(f32 *)((u8 *)arg0 + 0x1814) = (f32) (0.03f * *(f32 *)((u8 *)arg0 + 0x1828));
        *(f32 *)((u8 *)arg0 + 0x1810) = (f32) (3.0f * spC4);
        func_0011F680();
        var_f20 = M2C_ERROR(/* Read from unset register $f0 */);
        if (temp_v0 != 0) {
            *(f32 *)((u8 *)arg0 + 0x1814) = (f32) -*(f32 *)((u8 *)arg0 + 0x1814);
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684A0(arg0);
        func_002CBFF0(1, arg0);
        if (temp_v0 != 0) {
            var_f20 += 3.1415927f;
        }
        *(s32 *)((u8 *)arg0 + 0x17A4) = (s32) ((M2C_BITWISE(s32, (65536.0f * (var_f20 / 6.2831855f))) + 0x7FFF + 1) & 0xFFFF);
        return;
    }
    if (var_s1 != 0) {
        func_00146ED0((f32 *)(arg0 + 0xD0), (f32 *)(&spC0), 3.0f);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_a1 = (s64) ((s64) *(s16 *)((u8 *)arg0 + 0xCB4) << 0x38) >> 0x38;
        *(s8 *)((u8 *)arg0 + 0x183C) = (s8) temp_a1;
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684B8(arg0, temp_a1);
        func_002CBFF0(1, arg0);
        if (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x183F) < 0) {
            if (spB0 != 2) {
                if (spB0 == 3) {
                    goto block_55;
                }
                goto block_63;
            }
block_55:
            if (!(*(s16 *)((u8 *)temp_s5 + 0x7EA) & 2)) {
                var_a2 = 0;
                *(s8 *)((u8 *)arg0 + 0x183F) = (s8) spB4;
                *(s32 *)((u8 *)arg0 + 0x1840) = spB8;
                *(s32 *)((u8 *)arg0 + 0x1A6C) = spBC;
                *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1A6C) = spBC;
loop_61:
                if (var_a2 < *(s32 *)((u8 *)temp_s5 + 0x88D8)) {
                    if (*(s32 *)((u8 *)arg0 + 0x1350) != var_a2) {
                        temp_a1_2 = (unsigned char *)((var_a2 * 0x2020) + temp_s5);
                        if (*(s8 *)((u8 *)temp_a1_2 + 0x2828) != -1) {
                            *(s8 *)((u8 *)temp_a1_2 + 0x2828) = 0;
                        }
                    }
                    var_a2 += 1;
                    goto loop_61;
                }
                return;
            }
            goto block_63;
        }
block_63:
        *(s8 *)((u8 *)arg0 + 0x183F) = -1;
        *(s32 *)((u8 *)arg0 + 0x1840) = 0;
        *(s32 *)((u8 *)arg0 + 0x1A6C) = 0;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1A6C) = 0;
        return;
    }
    func_00146ED0((f32 *)(arg0 + 0xD0), (f32 *)(&spC0), 3.0f);
    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
    D_004684B0(arg0);
    func_002CBFF0(1, arg0);
}
