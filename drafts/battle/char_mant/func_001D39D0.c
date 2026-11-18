/* Draft (not built): func_001D39D0 at 0x001D39D0, size 0x190, segment battle/char_mant (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x190
 * Original: asm/nonmatchings/battle/char_mant/func_001D39D0.s */

// src/battle/char_mant.c func_001D39D0 size diff=60/77
extern void *D_00470594;
extern void *D_00470598;
extern void *D_0047059C;
extern void *D_004705A0;
extern void *D_004705B0;
extern void *D_004705B4;
extern void *D_004705B8;
extern void func_0013B960(void *);
extern void func_0013B160(void *);
void func_001D39D0(u8 *arg0) {
    s32 var_s0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    D_00470594 = arg0;
    var_s0 = 0;
    temp_s4 = D_00470594;
    D_00470598 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s3 = D_00470598;
    D_004705B0 = *(u8 **)((u8 *)arg0 + 0);
    temp_s2 = D_004705B0;
    D_0047059C = *(u8 **)((u8 *)arg0 + 4);
    D_004705A0 = *(u8 **)((u8 *)D_0047059C + 0x128);
    D_004705B4 = ((u8 *)D_0047059C) + 0x40;
    D_004705B8 = ((u8 *)D_0047059C) + 0xD0;
    goto loop_2;
block_1:
    func_0013B160(NULL);
    func_0013B960((void *)(*(s32 *)((u8 *)temp_s2 + 0x408) + (*(s16 *)((u8 *)((var_s0 * 2) + temp_s4) + 0x90) << 6)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    var_s0 += 1;
loop_2:
    if (var_s0 < *(s16 *)((u8 *)temp_s3 + 0x1E)) {
        goto block_1;
    }
    func_0013B160(NULL);
    if (!(*(s32 *)((u8 *)D_00470598 + 0x18) & 0x40)) {
        goto block_6;
    }
    func_0013B960((void *)(*(s32 *)((u8 *)D_004705B0 + 0x408) + (*(s16 *)((u8 *)(*(u8 **)((u8 *)D_004705A0 + 0x40)) + 0x48) << 6)));
    goto block_7;
block_6:
    func_0013B960((void *)(*(s32 *)((u8 *)D_004705B0 + 0x408) + (*(s16 *)((u8 *)(*(u8 **)((u8 *)D_004705A0 + 0x40)) + 0x48) << 6)));
block_7:
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_001D33E0();
    return;
}
