/* Draft (not built): func_0013BA20 at 0x0013BA20, size 0xC8, segment sys/amMotion (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x34, original 0xC8
 * Original: asm/nonmatchings/sys/amMotion/func_0013BA20.s */

// src/sys/amMotion.c func_0013BA20 size diff=46/13
extern s32 D_0047E000;
extern s128 D_0047E020;
extern f32 D_0047E028;
void func_0013BA20(void) {
    func_0012E830();
    *(s128 *)((u8 *)(&D_0047E000) + 0) = (s128) M2C_ERROR(/* Read from unset register $v1 */);
    D_0047E020 = M2C_ERROR(/* Read from unset register $a3 */);
    D_0047E020 = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    *(s128 *)((u8 *)(&D_0047E000) + 0) = (f32) M2C_ERROR(/* Read from unset register $f1 */);
    D_0047E028 = M2C_ERROR(/* Read from unset register $f1 */);
    *(f32 *)((u8 *)(&D_0047E000) + 8) = (f32) -M2C_ERROR(/* Read from unset register $f0 */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, %lo(D_0047E000)($at) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, %lo(D_003F0810)($at) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, %lo(D_0047E020)($at) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, %lo(D_003F0830)($at) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf1, $vf28x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf2, $vf28y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf3, $vf28z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf5, $vf4, $vf28w */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf1, $vf29x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf2, $vf29y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf3, $vf29z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf6, $vf4, $vf29w */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf1, $vf30x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf2, $vf30y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf3, $vf30z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf7, $vf4, $vf30w */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf1, $vf31x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf2, $vf31y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf3, $vf31z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf4, $vf31w */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf5 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf6 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf7 */);
}
