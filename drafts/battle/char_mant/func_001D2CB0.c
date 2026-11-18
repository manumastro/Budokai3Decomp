/* Draft (not built): func_001D2CB0 at 0x001D2CB0, size 0x254, segment battle/char_mant (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 117 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x118, original 0x254
 * Original: asm/nonmatchings/battle/char_mant/func_001D2CB0.s */

// src/battle/char_mant.c func_001D2CB0 size diff=117/70
s32 func_0013B190(s32);
s32 func_00146ED0(s32 *, s32 *, f32);
s32 func_00146F10(s32 *, s32 *, f32);
f32 func_00146F90(s32 *, s32 *);
extern s128 D_0044A1C0;
extern void *D_0046FDA0;
extern s32 D_00470594;
extern void *D_00470598;
extern s32 D_0047059C;
extern s32 D_004705B8;
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
extern void func_0013B160(void *);
void func_001D2CB0(void) {
    s32 sp80;
    s32 sp90;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s128 spD0;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 var_s4;
    u8 *temp_s2;
    u8 *temp_s5;

    temp_s3 = D_00470594;
    temp_s2 = D_00470598;
    temp_s1 = D_0047059C;
    temp_s0 = D_004705B8;
    temp_s5 = D_0046FDA0;
    spD0 = D_0044A1C0;
    if (*(s16 *)((u8 *)temp_s2 + 0x1E) != 0) {
        var_s4 = 0;
loop_9:
        if (var_s4 < *(s16 *)((u8 *)temp_s2 + 0x1E)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            temp_f21 = *(f32 *)((u8 *)(temp_s2 + (var_s4 << 5) + 0x80) + 0xC);
            func_00146F30(&spC0);
            temp_f20 = M2C_ERROR(/* Read from unset register $f0 */);
            if (!(temp_f21 <= temp_f20)) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                if (!(func_00146F90(&spC0, &spA0) <= 0.0f)) {
                    func_00146F10(&spC0, &spC0, temp_f21 - temp_f20);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                } else {
                    func_00146ED0(&spA0, &spA0, temp_f21);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                }
                func_0013B160(temp_s5);
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
                func_00146F30(&spB0);
                func_00146F30(&sp90);
                func_00141C30(&sp80, &spB0, &sp90);
                func_001D3070(0, &sp80);
            }
            var_s4 += 1;
            goto loop_9;
        }
    }
}
