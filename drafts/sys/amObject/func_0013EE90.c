/* Draft (not built): func_0013EE90 at 0x0013EE90, size 0x408, segment sys/amObject (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'int (*)(unsigned char *)' @ 332: temp_s1 = D_0047CAC4;
 * Original: asm/nonmatchings/sys/amObject/func_0013EE90.s */

// src/sys/amObject.c func_0013EE90 cerr diff=-1/0
s32 amMtxStack_Pop(s32);
s32 func_00132D20(s32, s32 *, f32);
s64 func_00138070(s32, void **);
s32 func_0013B190(s32);
extern void func_00146F30(void *);
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
extern s32 D_0047CAC4;
void func_0013EE90(void *arg0, s32 *arg1, s32 *arg2) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    s32 sp88;
    f32 sp8C;
    s32 spA0;
    f32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 (*temp_s1)(u8 *);
    s64 temp_v0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *var_s4;

    var_s4 = arg0;
    temp_s1 = D_0047CAC4;
    func_0013B0B0((s32)(NULL));
    do {
        func_00142100(var_s4, var_s4 + 0x10);
        if ((*(u8 **)((u8 *)var_s4 + 0x34) != NULL) && (*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s4 + 0x34)) + 4) != 0)) {
            temp_s0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0x34)) + 0xC);
            func_0013B0B0((s32)(NULL));
            if (*(s32 *)((u8 *)var_s4 + 0x30) & 0xC000) {
                M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                if (*(s32 *)((u8 *)var_s4 + 0x30) & 0x8000) {
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
                    spB0 = 0.0f;
                    spB4 = 0;
                    spB8 = 0xBF800000;
                    spBC = 0x3F800000;
                }
                func_0013B190(0);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                spB4 = 0;
                func_00146F30(&spB0);
                if (M2C_ERROR(/* Read from unset register $f0 */) != 0.0f) {
                    sp60 = spB8;
                    sp64 = 0.0f;
                    sp68 = -spB0;
                    sp6C = 0.0f;
                    sp70 = 0.0f;
                    sp74 = 1.0f;
                    sp78 = 0.0f;
                    sp7C = 0.0f;
                    sp80 = spB0;
                    sp84 = 0.0f;
                    sp88 = spB8;
                    sp8C = 0.0f;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
                } else {
                    func_0013B060(NULL);
                }
            }
            if ((temp_s0 != NULL) && (*(f32 *)((u8 *)temp_s0 + 0x30) != 0.0f) && (M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), (func_00132D20(0, &spC0, *(f32 *)((u8 *)temp_s0 + 0x30)) != 0))) {
                func_0013B110(1);
            } else if ((temp_s1 != NULL) && (temp_s1(var_s4) != 0)) {
                func_0013B110(1);
            } else {
                temp_s0_2 = (unsigned char *)(*arg2);
                temp_v0 = func_00138070((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s4 + 0x34)) + 4)), (void **)(arg2));
                if (temp_v0 != 0) {
                    if (*arg1 != 0) {
                        *(s32 *)((u8 *)temp_s0_2 + 0) = 0x20000000;
                        *(s32 *)((u8 *)temp_s0_2 + 4) = (s32) ((u64) (temp_v0 << 0x24) >> 0x24);
                    } else {
                        *arg1 = (s32) temp_v0;
                    }
                }
                func_0013B110(1);
            }
        }
        if (*(u8 **)((u8 *)var_s4 + 0x38) != NULL) {
            func_0013EE90(*(u8 **)((u8 *)var_s4 + 0x38), arg1, arg2);
        }
        func_0013B060(NULL);
        var_s4 = *(u8 **)((u8 *)var_s4 + 0x3C);
    } while (var_s4 != NULL);
    amMtxStack_Pop(1);
}
