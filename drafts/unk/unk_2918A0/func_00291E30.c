/* Draft (not built): func_00291E30 at 0x00291E30, size 0x2B0, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp24' mwccps2.exe Compiler: 267: D_005AA6AC = sp2C; @ 265: D_005AA6A4 = sp24;
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00291E30.s */

// src/unk/unk_2918A0.c func_00291E30 cerr diff=-1/0
s32 func_0013B110(s32);
s32 func_0013B500(s32);
s32 func_0013B750(s32);
s32 func_0013B7D0(s32);
s32 func_0013B850(void *);
extern void *D_004708A4;
extern s32 D_005AA668;
extern s32 D_005AA66C;
extern f32 D_005AA6A0;
extern f32 D_005AA6A4;
extern f32 D_005AA6A8;
extern f32 D_005AA6AC;
extern void func_0013B0B0(void *);
extern void func_0013B620(void *);
extern void func_0013AFA0(void *);
void func_00291E30(void) {
    s32 sp10;
    f32 sp20;
    f32 sp28;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;

    func_0013B0B0(NULL);
    func_0013B7D0(D_005AA668);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B850(D_005AA664);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B850(*(s32 *)((u8 *)D_005AA604 + 0x11D0) + D_005AA664);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f4 = (f32) *(s8 *)((u8 *)D_004708A4 + 0x1AE0);
    temp_f3 = 4000.0f * temp_f4;
    temp_f2 = 2000.0f * temp_f4;
    var_f0 = sp20 + temp_f3;
    if (sp20 < -temp_f2) {
        goto block_3;
    }
    var_f0 = sp20 - temp_f3;
    if (!(sp20 <= temp_f2)) {
block_3:
        sp20 = var_f0;
    }
    var_f0_2 = sp28 + temp_f3;
    if (sp28 < -temp_f2) {
        goto block_8;
    }
    var_f0_2 = sp28 - temp_f3;
    if (!(sp28 <= temp_f2)) {
block_8:
        sp28 = var_f0_2;
    }
    D_005AA6A0 = sp20;
    D_005AA6A4 = sp24;
    D_005AA6A8 = sp28;
    D_005AA6AC = sp2C;
    func_0013AFA0(NULL);
    func_0013B750(D_005AA66C);
    func_0013B500(-D_005AA668);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_0013B620(D_005AA664 - *(s32 *)((u8 *)D_005AA604 + 0x11D0));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    func_0013AFA0(NULL);
    func_0013B750(D_005AA66C);
    func_0013B500(-D_005AA668);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_0013B620(D_005AA664);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    func_0013B110(1);
}
