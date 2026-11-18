/* Draft (not built): func_001415F0 at 0x001415F0, size 0xAC, segment sys/amSofdec (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4C, original 0xAC
 * Original: asm/nonmatchings/sys/amSofdec/func_001415F0.s */

// src/sys/amSofdec.c func_001415F0 size diff=38/19
extern void func_0012E830(void);
void func_001415F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0012E830();
    func_0012E830();
    func_0012E830();
    M2C_ERROR(/* unknown instruction: mula.s $f10, $f5 */);
    *(f32 *)((u8 *)arg0 + 4) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f10, $f11, $f4 */);
    M2C_ERROR(/* unknown instruction: mula.s $f11, $f4 */);
    *(f32 *)((u8 *)arg0 + 0) = (f32) ((M2C_ERROR(/* Read from unset register $f12 */) * (M2C_ERROR(/* Read from unset register $f3 */) * M2C_ERROR(/* Read from unset register $f1 */))) - (M2C_ERROR(/* Read from unset register $f13 */) * (M2C_ERROR(/* Read from unset register $f2 */) * M2C_ERROR(/* Read from unset register $f0 */))));
    M2C_ERROR(/* unknown instruction: mula.s $f1, $f6 */);
    *(f32 *)((u8 *)arg0 + 8) = (f32) M2C_ERROR(/* unknown instruction: msub.s $f12, $f12, $f5 */);
    *(f32 *)((u8 *)arg0 + 0xC) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f8, $f0, $f7 */);
}
