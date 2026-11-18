/* Draft (not built): func_0020B360 at 0x0020B360, size 0x29C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); it conversion from 'int' to 'unsigned char *' mwccps2.exe Compiler: @ 666: func_0020D5C0(temp_s1 + 0x50, 0, temp_s1, 7);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020B360.s */

// src/unk/unk_20A4D0.c func_0020B360 cerr diff=-1/0
extern u8 D_0058A090[];
void func_0020B360(u8 *arg0) {
    s32 sp50;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_a3;
    s32 temp_s3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = arg0 + 0x20;
    temp_a0 = *(s16 *)((u8 *)arg0 + 0x3C);
    temp_a3 = *(s32 *)((u8 *)arg0 + 0x20) * 0xC0;
    temp_s1 = &D_0058A090 + temp_a3;
    temp_s0 = gBattle + (*(s16 *)((u8 *)arg0 + 0x1C) * 0x2020) + 0x830;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 5:                                         /* switch 1 */
        func_0020D290(temp_s1, temp_s0, *(s32 *)((u8 *)temp_s2 + 0x10), temp_a3, *(f32 *)((u8 *)temp_s1 + 0x18));
        func_0013B160(&D_0058A090 + (*(s32 *)((u8 *)arg0 + 0x20) * 0xC0) + 0x50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s3) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
block_7:
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        break;
    case 10:                                        /* switch 1 */
        func_0020D290(temp_s1, *(u8 **)((u8 *)temp_s0 + 0x1354), *(s32 *)((u8 *)temp_s2 + 0x10), temp_a3, *(f32 *)((u8 *)temp_s1 + 0x18));
        func_0013B160(&D_0058A090 + (*(s32 *)((u8 *)arg0 + 0x20) * 0xC0) + 0x50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s3) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        goto block_7;
    }
    temp_v1 = *(s16 *)((u8 *)temp_s2 + 0x1E);
    switch (temp_v1) {                              /* switch 2 */
    case 0:                                         /* switch 2 */
    case 1:                                         /* switch 2 */
    case 2:                                         /* switch 2 */
    case 3:                                         /* switch 2 */
    case 4:                                         /* switch 2 */
        break;
    case 6:                                         /* switch 2 */
        func_0020D5C0(temp_s1 + 0x50, 0, temp_s1, 7);
        func_0013B160(&D_0058A090 + (*(s32 *)((u8 *)arg0 + 0x20) * 0xC0) + 0x50);
        func_0013B2B0(temp_s1 + 0x30);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
block_12:
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        break;
    case 5:                                         /* switch 2 */
        func_0020CCF0((s16) *(s32 *)((u8 *)temp_s2 + 0x10), &sp50);
        temp_s3 = amMotion_FindBone(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xB88)) + 4), &sp50);
        func_0013B160(temp_s0);
        func_0013B960((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xB88)) + 0x408) + (temp_s3 << 6)));
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        func_0013B160(&D_0058A090 + (*(s32 *)((u8 *)arg0 + 0x20) * 0xC0) + 0x50);
        func_0013B2B0(temp_s1 + 0x30);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        goto block_12;
    }
}
