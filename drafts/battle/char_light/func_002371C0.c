/* Draft (not built): func_002371C0 at 0x002371C0, size 0x218, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 109 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x13C, original 0x218
 * Original: asm/nonmatchings/battle/char_light/func_002371C0.s */

// src/battle/char_light.c func_002371C0 size diff=109/79
extern u8 *func_0029D7F0(void);
extern u8 *func_0029D7E0(void);
s32 func_0013B110(s32);
s32 func_0013B460(s32, f32);
s32 func_00142280(s32 *, f32 *, s32 *, s32);
extern s128 D_0044FB90;
extern void func_0013B0B0(void *);
extern void func_00141C30(void *, void *, void *);
extern void func_0011F4C0(void);
extern char D_003F0800[];
void func_002371C0(u8 *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    s32 sp30;
    s32 sp40;
    f32 temp_f4;
    s32 *temp_v0;
    s32 var_v0;

    sp20 = (s128) D_0044FB90;
    if (func_0029D8A0() == 0) {
        *(f32 *)((u8 *)arg0 + 0x28) = (f32) (*(f32 *)((u8 *)arg0 + 0x28) + func_0029D850());
    }
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    temp_v0 = *(s32 **)((u8 *)arg0 + 0x18);
    if (temp_v0 != NULL) {
        var_v0 = *temp_v0;
    } else {
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        var_v0 = (int)(func_0029D7F0());
    }
    if (var_v0 != 0) {
        sp24 = 1.0f;
        sp20 = 0.0f;
        sp2C = 1.0f;
        sp28 = 0.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp30);
        func_00141C30(&sp40, &sp20, &sp30);
    } else {
        func_0029D7E0();
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    func_0013B0B0(D_003F0800);
    func_0011F4C0();
    temp_f4 = *(f32 *)((u8 *)arg0 + 0x1C);
    func_0013B460(0x40490FDB, (3.1415927f * (2.0f * ((-2.5f * temp_f4 * (1.0f - M2C_ERROR(/* Read from unset register $f0 */))) + (2.5f * temp_f4 * M2C_ERROR(/* Read from unset register $f0 */))))) / 360.0f);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B110(1);
    func_00142280(&sp30, &sp20, &sp40, 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
}
