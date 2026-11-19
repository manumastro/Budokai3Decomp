/* Draft (not built): func_00138070 at 0x00138070, size 0x304, segment sys/unk_137EE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 93 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x244, original 0x304
 * Original: asm/nonmatchings/sys/unk_137EE0/func_00138070.s */

// src/sys/unk_137EE0.c func_00138070 size diff=93/145
s32 amDraw_Null(void);
s32 func_00132D20(s32, s32 *, f32);
extern s32 D_0046FD20;
extern s32 D_00470250;
extern s32 D_00470254;
extern void func_0013B160(void *);
extern char D_00459390[];
extern void *D_0047CAC0[];
s32 func_00138070(u8 *arg0, u32 **arg1) {
    s32 spA8;
    s32 spA0;
    s32 *var_s7;
    s32 temp_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    u8 *temp_s0;
    u8 *var_fp;

    var_s5 = 0;
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    func_0013B160(D_00459390);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */);
    var_fp = *D_0047CAC0;
    if (var_fp == NULL) {
        var_fp = (unsigned char *)(amDraw_Null);
    }
    var_s3 = *(s32 *)((u8 *)arg0 + 0);
    var_s7 = (int *)(arg0 + *(s32 *)((u8 *)arg0 + 4));
    if (D_00470254 != 0) {
        var_s1 = D_0046FD20 | 0x80;
        var_s2 = ~D_0046FD20 & D_00470250;
    } else {
        var_s1 = D_0046FD20 & ~0x80;
        var_s2 = ~var_s1 & D_00470250 & ~0x80;
    }
    if (var_s3 > 0) {
        do {
            var_s3 -= 1;
            temp_s0 = arg0 + *var_s7;
            var_s7 += 4;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */);
            if (*(f32 *)((u8 *)temp_s0 + 0x1C) != 0.0f) {
                if (func_00132D20(0, &spA0, *(f32 *)((u8 *)temp_s0 + 0x1C)) == 0) {
                    goto block_9;
                }
            } else {
block_9:
                if (((s32 (*)(u8 *)) var_fp)(temp_s0) == 0) {
                    temp_a1 = var_s2 | (*(s32 *)((u8 *)temp_s0 + 0) & var_s1);
                    if (temp_a1 >= 0) {
                        if (var_s5 != 0) {
                            *(s32 *)((u8 *)(*arg1) + 4) = func_00138390(temp_s0, var_s1, var_s2);
                        } else {
                            var_s5 = func_00138390(temp_s0, var_s1, var_s2);
                        }
                        *arg1 = gPacketPtr - 0x10;
                    } else {
                        func_00139100(temp_s0, temp_a1, 1000.0f * (spA8 + *(f32 *)((u8 *)temp_s0 + 0x1C)));
                    }
                }
            }
        } while (var_s3 > 0);
        if (var_s5 != 0) {
            *(u32 *)((u8 *)(*arg1) + 0) = 0x60000000;
            return var_s5;
        }
        goto block_21;
    }
block_21:
    return 0;
}
