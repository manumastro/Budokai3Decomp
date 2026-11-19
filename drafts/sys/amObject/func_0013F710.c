/* Draft (not built): func_0013F710 at 0x0013F710, size 0x510, segment sys/amObject (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); t match 'func_0013F710(unsigned char *, int **, unsigned char ***, int *)' @ 110: func_0013F710(d, &q, &p, &tag, &size);
 * Original: asm/nonmatchings/sys/amObject/func_0013F710.s */

// src/sys/amObject.c func_0013F710 cerr diff=-1/0
s32 amMtxStack_Pop(s32);
s32 func_00132D20(s32, s32 *, f32);
s64 func_00138070(s32, void **);
s32 func_0013B190(s32);
extern void func_0013B960(void *);
extern void func_00146F30(void *);
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
extern s32 D_0047CAC4;
void func_0013F710(u8 *arg0, s32 **arg1, u8 ***arg2, s32 *arg3) {
    s32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    f32 spC4;
    s32 spC8;
    f32 spCC;
    s32 spE0;
    f32 spF0;
    s32 spF4;
    s32 spF8;
    s32 spFC;
    s32 sp100;
    s32 (*temp_fp)(u8 *);
    s32 var_s4;
    s64 temp_v0;
    u8 **temp_s7;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_s5;
    u8 *var_s0;
    u8 *var_s3;

    var_s3 = arg0;
    temp_s7 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_fp = D_0047CAC4;
    func_0013B0B0((s32)(NULL));
    do {
        temp_s5 = **arg2;
        *arg2 += 4;
        var_s4 = **arg1;
        if (var_s4 >= 0) {
            var_s0 = *(u8 **)((u8 *)((var_s4 * 0x10) + *(u8 **)((u8 *)var_s3 + 4)) + 8);
            if (var_s0 == NULL) {
                goto block_4;
            }
        } else {
block_4:
            var_s0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s3 + 4)) + 8);
            var_s4 = -1;
        }
        if (temp_s5 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_0013B960(temp_s5);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
        } else {
            func_00142100(var_s0, var_s0 + 0x10);
        }
        if ((var_s4 != -1) && (*(u8 **)((u8 *)var_s0 + 0x34) != NULL) && (*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x34)) + 4) != 0)) {
            temp_s4 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x34)) + 0xC);
            func_0013B0B0((s32)(NULL));
            if (*(s32 *)((u8 *)var_s0 + 0x30) & 0xC000) {
                M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                if (*(s32 *)((u8 *)var_s0 + 0x30) & 0x8000) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                } else {
                    spF0 = 0.0f;
                    spF4 = 0;
                    spF8 = 0xBF800000;
                    spFC = 0x3F800000;
                }
                func_0013B190(0);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                spF4 = 0;
                func_00146F30(&spF0);
                if (M2C_ERROR(/* Read from unset register $f0 */) != 0.0f) {
                    spA0 = spF8;
                    spA4 = 0.0f;
                    spA8 = -spF0;
                    spAC = 0.0f;
                    spB0 = 0.0f;
                    spB4 = 1.0f;
                    spB8 = 0.0f;
                    spBC = 0.0f;
                    spC0 = spF0;
                    spC4 = 0.0f;
                    spC8 = spF8;
                    spCC = 0.0f;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
                    if (temp_s5 != NULL) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
                    }
                } else {
                    func_0013B060(NULL);
                }
            }
            if ((temp_s4 != NULL) && (*(f32 *)((u8 *)temp_s4 + 0x30) != 0.0f) && (M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), (func_00132D20(0, &sp100, *(f32 *)((u8 *)temp_s4 + 0x30)) != 0))) {
                func_0013B110(1);
            } else if ((temp_fp != NULL) && (temp_fp(var_s0) != 0)) {
                func_0013B110(1);
            } else {
                temp_s4_2 = *temp_s7;
                temp_v0 = func_00138070((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x34)) + 4)), (void **)(temp_s7));
                if (temp_v0 != 0) {
                    if (*arg3 != 0) {
                        *(s32 *)((u8 *)temp_s4_2 + 0) = 0x20000000;
                        *(s32 *)((u8 *)temp_s4_2 + 4) = (s32) ((u64) (temp_v0 << 0x24) >> 0x24);
                    } else {
                        *arg3 = (s32) temp_v0;
                    }
                }
                func_0013B110(1);
            }
        }
        *arg1 += 8;
        if (*(u8 **)((u8 *)var_s3 + 8) != NULL) {
            func_0013F710(*(u8 **)((u8 *)var_s3 + 8), arg1, arg2, arg3);
        }
        func_0013B060(NULL);
        var_s3 = *(u8 **)((u8 *)var_s3 + 0xC);
    } while (var_s3 != NULL);
    amMtxStack_Pop(1);
}
