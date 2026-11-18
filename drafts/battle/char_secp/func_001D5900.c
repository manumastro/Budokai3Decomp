/* Draft (not built): func_001D5900 at 0x001D5900, size 0x224, segment battle/char_secp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 107 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x174, original 0x224
 * Original: asm/nonmatchings/battle/char_secp/func_001D5900.s */

// src/battle/char_secp.c func_001D5900 size diff=107/93
s32 func_0013B110(s32);
s32 func_0013B190(s32);
s32 func_00142080(s32, s32, s32 *);
extern void *D_004705C0;
extern s32 D_004705D0;
extern void func_0013B0B0(void *);
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
extern void func_0013B160(void *);
extern void func_00142100(void *, void *);
void func_001D5900(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp40;
    s32 sp50;
    s32 sp60;
    s32 sp70;
    s32 sp80;
    s32 temp_a0;
    s64 temp_s0_2;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 0x14) + (arg1 * 0x50)) + 0x40)) + 0x40);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp80);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F30(&sp70);
    func_0013B160((void *)(*(s32 *)((u8 *)arg0 + 0x408) + (*(s16 *)((u8 *)temp_s0 + 0x48) << 6)));
    func_0013B190(0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_00141C30(&sp40, &sp80, &sp70);
    temp_s1 = *(u8 **)((u8 *)((*(s16 *)((u8 *)temp_s0 + 0x48) * 4) + arg0) + 8);
    temp_a0 = (s32)(temp_s1 + 0x40);
    func_00142080(temp_a0, temp_a0, &sp40);
    func_0013B160(temp_s1);
    func_00142100(&sp40, NULL);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    temp_s0_2 = (s64) ((s64) *(s16 *)((u8 *)temp_s0 + 0x48) << 0x30) >> 0x30;
    D_004705C0 = arg0 + (temp_s0_2 * 4) + 8;
    D_004705D0 = *(s32 *)((u8 *)arg0 + 0x408) + (temp_s0_2 << 6);
    func_0013B0B0((void *)(*(s32 *)((u8 *)arg0 + 0x408) + (((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)((temp_s0_2 * 0x50) + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 0x14)) + 0x40)) + 0x48) << 0x30) >> 0x30) << 6)));
    func_001D53D0(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 0x14) + (temp_s0_2 * 0x50));
    func_0013B110(1);
}
