/* Draft (not built): func_001D3070 at 0x001D3070, size 0x364, segment battle/char_mant (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 162 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x200, original 0x364
 * Original: asm/nonmatchings/battle/char_mant/func_001D3070.s */

// src/battle/char_mant.c func_001D3070 size diff=162/128
s32 func_0013B2B0(f32 *);
s32 func_001416A0(f32 *, f32 *, f32 *, s32 *);
s32 func_00141CF0(s32, s32 *, s32);
s32 func_00141E70(s32 *, s32);
s32 func_00142080(s32 *, void *, s32);
s32 func_00142370(s32 *, s32 *);
s32 func_001423F0(s32 *, s32 *, void *, f32);
s32 func_0029D270(void *, s64, s32);
extern s128 D_0044A1B0;
extern void **D_00470594;
extern void *D_00470598;
extern void *D_0047059C;
extern void func_0013B960(void *);
extern void func_0013B160(void *);
extern char D_003F0800[];
void func_001D3070(f32 *arg0, s32 arg1) {
    s32 sp80;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    s32 spA0;
    f32 var_f20;
    s32 temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_v0;

    temp_s4 = D_00470598;
    temp_s3 = D_0047059C;
    sp90 = (s128) D_0044A1B0;
    temp_s2 = *(u8 **)((u8 *)temp_s3 + 0x128);
    temp_s1 = *D_00470594;
    temp_s0 = *(s32 *)((u8 *)((*(s16 *)((u8 *)temp_s2 + 0x48) * 4) + temp_s1) + 8);
    if (arg0 != NULL) {
        func_0013B160(temp_s3);
        func_0013B2B0(arg0);
        func_00141E70(&spA0, 0);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    } else {
        func_00142080(&spA0, temp_s3 + 0xC0, arg1);
    }
    func_001416A0(&sp90, &sp94, &sp98, &spA0);
    temp_v0 = temp_s3 + 0x90;
    if (!(*(s32 *)((u8 *)temp_s4 + 0x18) & 0x20)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmini.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmax.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    }
    if (*(s32 *)((u8 *)temp_s4 + 0x18) & 1) {
        sp90 = *(f32 *)((u8 *)temp_s3 + 0x90);
    }
    if (*(s32 *)((u8 *)temp_s4 + 0x18) & 2) {
        sp94 = *(f32 *)((u8 *)temp_v0 + 4);
    }
    if (*(s32 *)((u8 *)temp_s4 + 0x18) & 4) {
        sp98 = *(f32 *)((u8 *)temp_v0 + 8);
    }
    func_0013B160(D_003F0800);
    var_f20 = *(f32 *)((u8 *)temp_s4 + 0x64);
    func_0013B2B0(&sp90);
    func_00141E70(&spA0, 0);
    if (!(var_f20 <= 1.0f)) {
        var_f20 = 1.0f;
    } else if (var_f20 < 0.0f) {
        var_f20 = 0.0f;
    }
    if (!(var_f20 <= 0.0f)) {
        func_001423F0(&spA0, &spA0, temp_s3 + 0xA0, var_f20);
        func_00142370(&spA0, &spA0);
        func_00141CF0(0, &spA0, 0);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s3) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s3) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s3) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s3) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_0029D270(temp_s1, (s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x48) << 0x30) >> 0x30, *(s32 *)((u8 *)temp_s1 + 0x408) + (((s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x48) << 0x30) >> 0x30) << 6));
    func_0013B160(NULL);
    func_0013B960((void *)(*(s32 *)((u8 *)temp_s1 + 0x408) + (*(s16 *)((u8 *)temp_s2 + 0x48) << 6)));
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
    if (*(s32 *)((u8 *)temp_s4 + 0x18) & 0x10) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    }
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
}
