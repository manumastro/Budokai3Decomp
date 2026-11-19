/* Draft (not built): func_001A5EF0 at 0x001A5EF0, size 0x460, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 219 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C0, original 0x460
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A5EF0.s */

// src/battle/btl_cmd.c func_001A5EF0 size diff=219/112
f32 func_00146E60(void *, s32 *);
void *func_001FDD40(s32 *, s32 *);
extern void *D_0046FDC8;
void func_001A5EF0(void) {
    s32 sp60;
    s32 sp70;
    s32 sp80;
    f32 var_f1;
    s32 temp_a0;
    s32 temp_v1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;

    var_s4 = (unsigned char *)(gBattle);
    temp_a0 = *(s32 *)((u8 *)var_s4 + 0x228);
    var_s1 = *(u8 **)((u8 *)var_s4 + 0x8934);
    var_s3 = var_s4 + 0xA0;
    var_s0 = var_s3 + 0xB0;
    var_s2 = var_s3 + 0x160;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0013B0B0(D_003F0800);
        func_0013B620((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)((*(s32 *)((u8 *)var_s2 + 0x28) * 4) + var_s4) + 0x8934)) + 0x17A4)));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_0013B110(1);
        break;
    case 2:                                         /* switch 1 */
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
block_9:
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        break;
    case 3:                                         /* switch 1 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        goto block_9;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (*(f32 *)((u8 *)var_s3 + 0x13C) == 0.0f) {

    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(s32 *)((u8 *)var_s0 + 0x38) = (s32) (*(s32 *)((u8 *)var_s0 + 0x38) | 1);
    if (*(f32 *)((u8 *)var_s3 + 0x13C) == 0.0f) {
        temp_v1 = *(s32 *)((u8 *)var_s2 + 0x2C);
        switch (temp_v1) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_0013B0B0(D_003F0800);
            func_0013B620((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)((*(s32 *)((u8 *)var_s2 + 0x2C) * 4) + var_s4) + 0x8934)) + 0x17A4)));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_0013B110(1);
            break;
        case 2:                                     /* switch 2 */
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            break;
        case 3:                                     /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            break;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        var_s2 = D_0046FDC8;
        var_s3 = func_001FDD40(&sp70, &sp60);
        var_s1 = NULL;
loop_30:
        if ((s32) var_s1 >= (s32) var_s3) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        } else if (func_00146E60(var_s2 + ((s32) (((s32) var_s1 * 2) + var_s1) * 0x10), &sp60) < 4.0f) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        } else {
            var_s1 += 1;
            goto loop_30;
        }
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        var_f1 = 0.7853982f;
        *(s32 *)((u8 *)var_s0 + 0x38) = (s32) (*(s32 *)((u8 *)var_s0 + 0x38) | 1);
        if (0.7853982f < 0.08726647f) {
            var_f1 = 0.08726647f;
        }
        if (!(var_f1 <= 3.0543263f)) {
            var_f1 = 3.0543263f;
        }
        *(f32 *)((u8 *)var_s0 + 0x34) = var_f1;
    }
}
