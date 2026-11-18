/* Draft (not built): func_00227A30 at 0x00227A30, size 0xF0, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA8, original 0xF0
 * Original: asm/nonmatchings/battle/a2d/func_00227A30.s */

// src/battle/a2d.c func_00227A30 size diff=37/42
s32 amMath_SinCosI(s64, f32 *, f32 *);
void func_00227A30(u8 *arg0) {
    f32 sp28;
    f32 sp2C;
    s32 temp_a0;

    temp_a0 = *D_004706D0;
    if (!(temp_a0 & 1)) {
        if (temp_a0 & 0x40) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            return;
        }
        amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)D_004706CC + 0x40)) / 180.0f)) << 0x30) >> 0x30, &sp2C, &sp28);
        M2C_ERROR(/* unknown instruction: mula.s $f1, $f3 */);
        M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
        *(f32 *)((u8 *)D_004706CC + 0) = (f32) (*(f32 *)((u8 *)D_004706CC + 0) + (*(f32 *)((u8 *)D_004706CC + 0x30) * M2C_ERROR(/* unknown instruction: msub.s $f4, $f2, $f0 */)));
        *(f32 *)((u8 *)D_004706CC + 4) = (f32) (*(f32 *)((u8 *)D_004706CC + 4) + (*(f32 *)((u8 *)D_004706CC + 0x34) * M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f3 */)));
        *(f32 *)((u8 *)D_004706CC + 8) = (f32) *(f32 *)((u8 *)arg0 + 8);
    }
}
