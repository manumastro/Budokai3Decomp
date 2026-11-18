/* Draft (not built): func_00142280 at 0x00142280, size 0xE8, segment sys/amSofdec (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x50, original 0xE8
 * Original: asm/nonmatchings/sys/amSofdec/func_00142280.s */

// src/sys/amSofdec.c func_00142280 size diff=55/20
void func_00142280(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    f32 var_f4;
    f32 var_f5;
    f32 var_f6;
    f32 var_f7;

    M2C_ERROR(/* unknown instruction: mula.s $f7, $f8 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f6, $f9 */);
    M2C_ERROR(/* unknown instruction: madda.s $f5, $f10 */);
    M2C_ERROR(/* unknown instruction: madd.s $f12, $f4, $f11 */);
    M2C_ERROR(/* unknown instruction: mula.s $f7, $f9 */);
    M2C_ERROR(/* unknown instruction: madda.s $f6, $f8 */);
    M2C_ERROR(/* unknown instruction: madda.s $f5, $f11 */);
    M2C_ERROR(/* unknown instruction: msub.s $f13, $f4, $f10 */);
    M2C_ERROR(/* unknown instruction: mula.s $f7, $f10 */);
    M2C_ERROR(/* unknown instruction: madda.s $f6, $f11 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f5, $f8 */);
    M2C_ERROR(/* unknown instruction: madd.s $f14, $f4, $f9 */);
    M2C_ERROR(/* unknown instruction: mula.s $f7, $f11 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f6, $f10 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f5, $f9 */);
    M2C_ERROR(/* unknown instruction: msub.s $f15, $f4, $f8 */);
    M2C_ERROR(/* unknown instruction: mula.s $f3, $f12 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f2, $f13 */);
    M2C_ERROR(/* unknown instruction: madda.s $f1, $f14 */);
    var_f4 = M2C_ERROR(/* unknown instruction: madd.s $f4, $f0, $f15 */);
    M2C_ERROR(/* unknown instruction: mula.s $f3, $f13 */);
    M2C_ERROR(/* unknown instruction: madda.s $f2, $f12 */);
    M2C_ERROR(/* unknown instruction: madda.s $f1, $f15 */);
    var_f5 = M2C_ERROR(/* unknown instruction: msub.s $f5, $f0, $f14 */);
    M2C_ERROR(/* unknown instruction: mula.s $f3, $f14 */);
    M2C_ERROR(/* unknown instruction: madda.s $f2, $f15 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f1, $f12 */);
    var_f6 = M2C_ERROR(/* unknown instruction: madd.s $f6, $f0, $f13 */);
    M2C_ERROR(/* unknown instruction: mula.s $f3, $f15 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f2, $f14 */);
    M2C_ERROR(/* unknown instruction: msuba.s $f1, $f13 */);
    var_f7 = M2C_ERROR(/* unknown instruction: msub.s $f7, $f0, $f12 */);
    if (arg3 != NULL) {
        var_f4 += *(f32 *)((u8 *)arg3 + 0);
        var_f5 += *(f32 *)((u8 *)arg3 + 4);
        var_f6 += *(f32 *)((u8 *)arg3 + 8);
        var_f7 += *(f32 *)((u8 *)arg3 + 0xC);
    }
    *(f32 *)((u8 *)arg0 + 0) = var_f4;
    *(f32 *)((u8 *)arg0 + 4) = var_f5;
    *(f32 *)((u8 *)arg0 + 8) = var_f6;
    *(f32 *)((u8 *)arg0 + 0xC) = var_f7;
}
