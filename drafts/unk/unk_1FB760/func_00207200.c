/* Draft (not built): func_00207200 at 0x00207200, size 0xB4, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); nversion from 'int' to 'void *' @ 553: F10(temp_s0 + 0x20, *(s32 *)((u8 *)arg0 + 0x1C), *(f32 *)((u8 *)temp_s1 + 0x58));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00207200.s */

// src/unk/unk_1FB760.c func_00207200 cerr diff=-1/0
void func_00207200(u8 *arg0) {
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) -*(f32 *)((u8 *)temp_s1 + 0x54);
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F10(temp_s0 + 0x20, *(s32 *)((u8 *)arg0 + 0x1C), *(f32 *)((u8 *)temp_s1 + 0x58));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
}
