/* Draft (not built): func_001A6740 at 0x001A6740, size 0x388, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 200 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x11C, original 0x388
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A6740.s */

// src/battle/btl_cmd.c func_001A6740 size diff=200/71
s32 func_00146ED0(s32 *, s32 *, f32);
extern s128 D_00427430;
extern void func_0011F4C0(void);
extern void func_0011F220(void);
void func_001A6740(void) {
    s32 sp60;
    s32 sp70;
    f32 sp74;
    s128 sp80;
    s32 sp90;
    f32 sp94;
    s32 spA0;
    f32 temp_f0;
    f32 temp_f23;
    f32 var_f1;
    f32 var_f21;
    s32 temp_s1;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s1 = *(s32 *)((u8 *)gBattle + 0x228);
    temp_s3 = (unsigned char *)(gBattle + 0xA0);
    temp_s2 = temp_s3 + 0xB0;
    if (temp_s1 != 0) {

    }
    temp_s0 = (unsigned char *)(gBattle + (temp_s1 * 0x2020) + 0x830);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp94 -= 2.0f;
    if (*(f32 *)((u8 *)temp_s3 + 0x13C) != 0.0f) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(s32 *)((u8 *)temp_s2 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x38) | 1);
    sp80 = D_00427430;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f23 = 1.8849558f * (*(f32 *)((u8 *)temp_s3 + 0x13C) / (20.0f + (60.0f * 3.1f)));
    func_0011F4C0();
    if (temp_s1 == 1) {
        var_f21 = -1.0f;
    } else {
        var_f21 = 1.0f;
    }
    func_0011F220();
    func_00146ED0(&sp70, &sp70, -20.0f * M2C_ERROR(/* Read from unset register $f0 */));
    func_00146ED0(&sp60, &sp60, var_f21 * (20.0f * M2C_ERROR(/* Read from unset register $f0 */)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_f0 = sp74 + 4.0f;
    sp74 = temp_f0;
    sp74 = temp_f0 + (10.0f * (*(f32 *)((u8 *)temp_s3 + 0x13C) / (60.0f * 3.1f)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    *(s32 *)((u8 *)temp_s2 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x38) | 1);
    var_f1 = (3.1415927f * (2.0f * (35.0f + (35.0f * (*(f32 *)((u8 *)temp_s3 + 0x13C) / (60.0f * 3.1f)))))) / 360.0f;
    if (var_f1 < 0.08726647f) {
        var_f1 = 0.08726647f;
    }
    if (!(var_f1 <= 3.0543263f)) {
        var_f1 = 3.0543263f;
    }
    *(f32 *)((u8 *)temp_s2 + 0x34) = var_f1;
}
