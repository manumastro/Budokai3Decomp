/* Draft (not built): func_001CF2C0 at 0x001CF2C0, size 0x1E0, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x104, original 0x1E0
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CF2C0.s */

// src/unk/unk_1CBD90.c func_001CF2C0 size diff=90/65
s32 func_0013B500(s32);
extern void func_0013B160(void *);
extern char D_003F0800[];
extern void func_0013B620(void *);
s32 func_001CF2C0(s32 unused_arg0, u8 *arg1) {
    s32 sp20;
    f32 sp24;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 sp3C;
    f32 temp_f12;
    f32 temp_f13;
    s32 temp_a2_2;
    s32 temp_t0;
    u8 *temp_a2;
    u8 *temp_s0;

    temp_a2 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_f13 = *(f32 *)((u8 *)temp_a2 + 0);
    temp_t0 = *(s32 *)((u8 *)temp_a2 + 0xC);
    temp_f12 = *(f32 *)((u8 *)temp_a2 + 8);
    temp_a2_2 = temp_t0 & 0xF0000;
    temp_s0 = gBattle->tbl[*(s32 *)((u8 *)temp_a2 + 0x10)];
    sp34 = *(f32 *)((u8 *)temp_a2 + 4);
    sp3C = 0x3F800000;
    sp30 = temp_f12;
    sp38 = temp_f13;
    switch (temp_a2_2) {                            /* irregular */
    case 0x0:
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        if (!(temp_t0 & 0x01000000)) {
            sp24 = func_00200270(temp_f12, 0, temp_f13);
        }
        break;
    case 0x10000:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        break;
    case 0x20000:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0013B160(D_003F0800);
        func_0013B620(*(u8 **)((u8 *)temp_s0 + 0x17A4));
        func_0013B500(*(s32 *)((u8 *)temp_s0 + 0x17A8));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        break;
    case 0x30000:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0013B160(D_003F0800);
        func_0013B620(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1354)) + 0x17A4));
        func_0013B500(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1354)) + 0x17A8));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        break;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E4FA0(temp_s0, -1);
    return 1;
}
