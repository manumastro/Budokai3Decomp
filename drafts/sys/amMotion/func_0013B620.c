/* Draft (not built): func_0013B620 at 0x0013B620, size 0x84, segment sys/amMotion (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x34, original 0x84
 * Original: asm/nonmatchings/sys/amMotion/func_0013B620.s */

// src/sys/amMotion.c func_0013B620 size diff=30/13
extern s32 D_0047E000;
extern s128 D_0047E020;
extern f32 D_0047E028;
void func_0013B620(void) {
    func_0012E830();
    *(s128 *)((u8 *)(&D_0047E000) + 0) = (s128) M2C_ERROR(/* Read from unset register $v1 */);
    D_0047E020 = M2C_ERROR(/* Read from unset register $a3 */);
    D_0047E020 = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    *(s128 *)((u8 *)(&D_0047E000) + 0) = (f32) M2C_ERROR(/* Read from unset register $f1 */);
    D_0047E028 = M2C_ERROR(/* Read from unset register $f1 */);
    *(f32 *)((u8 *)(&D_0047E000) + 8) = (f32) -M2C_ERROR(/* Read from unset register $f0 */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, %lo(D_0047E000)($at) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, %lo(D_0047E020)($at) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyzw $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf3x */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyzw $vf30, $vf30, $vf3z */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf1 */);
}
