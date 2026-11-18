/* Draft (not built): func_00241710 at 0x00241710, size 0x3AC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ersion from 'unsigned char *' to 'int' mwccps2.exe Compiler: @ 944: temp_s1 = (s32)(func_00240F40(0, temp_a2, temp_a3));
 * Original: asm/nonmatchings/unk/unk_23A890/func_00241710.s */

// src/unk/unk_23A890.c func_00241710 cerr diff=-1/0
f32 func_00146E30(void *, s32);
extern s128 D_00450180;
extern void func_00146F30(void *);
void func_00241710(s32 arg0) {
    s128 sp50;
    s32 sp60;
    f32 temp_f0;
    s32 temp_a3;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_a3 = arg0 * 0x2020;
    temp_a2 = gBattle + temp_a3;
    temp_s3 = temp_a2 + 0x830;
    temp_s2 = D_0046FE44 + (arg0 << 7);
    temp_s1 = (s32)(func_00240F40(0, temp_a2, temp_a3));
    temp_s0 = (s32)(func_00240F40(arg0, (u8 *)1));
    sp50 = D_00450180;
    temp_f0 = (s32)(func_00146E30(temp_s3 + 0x650, temp_s2 + 0x10));
    if ((*(s16 *)((u8 *)temp_s3 + 0xCAC) == 0xF) && !((*(f32 *)((u8 *)temp_s3 + 0x654) - *(f32 *)((u8 *)temp_s2 + 0x14)) <= 0.1f)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        *(s32 *)((u8 *)temp_s2 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x30) - 1);
        if (*(s32 *)((u8 *)temp_s2 + 0x30) < 0) {
            goto block_20;
        }
    } else if (*(s16 *)((u8 *)temp_s3 + 0xCAC) == 0x13) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        *(s32 *)((u8 *)temp_s2 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x30) - 1);
        if (*(s32 *)((u8 *)temp_s2 + 0x30) < 0) {
            goto block_20;
        }
    } else if (!(temp_f0 < 0.1f) && (temp_f0 < 2.5f) && (*(s32 *)((u8 *)temp_s2 + 0x30) < 0x1E)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp60);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        *(s32 *)((u8 *)temp_s2 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x30) + 1);
    } else if (!(temp_f0 < 2.5f) && (temp_f0 < 10.0f) && (*(s32 *)((u8 *)temp_s2 + 0x30) < 0x1E)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp60);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        *(s32 *)((u8 *)temp_s2 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x30) + 1);
    } else if (!(temp_f0 < 10.0f)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp60);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        *(s32 *)((u8 *)temp_s2 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x30) + 1);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
        *(s32 *)((u8 *)temp_s2 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x30) - 1);
        if (*(s32 *)((u8 *)temp_s2 + 0x30) < 0) {
block_20:
            *(s32 *)((u8 *)temp_s2 + 0x30) = 0;
        }
    }
    *(u8 **)((u8 *)temp_s0 + 0x68) = temp_s2;
    *(u8 **)((u8 *)temp_s1 + 0x68) = temp_s2;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
}
