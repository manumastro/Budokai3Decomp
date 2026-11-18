/* Draft (not built): func_0013E590 at 0x0013E590, size 0x45C, segment sys/amObject (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 237: f32 sp74; @ 236: s3232 sp70;
 * Original: asm/nonmatchings/sys/amObject/func_0013E590.s */

// src/sys/amObject.c func_0013E590 cerr diff=-1/0
s32 amMtxStack_Pop(s32);
s32 func_00132D20(s32, s32 *, void *, f32);
s64 func_00138070(s32, void **);
s32 func_0013B190(s32);
extern void func_0013B960(void *);
extern void func_00146F30(void *);
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
void func_0013E590(u8 *arg0, u8 ***arg1, s32 *arg2, u8 **arg3) {
    s3232 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    s3232 sp98;
    f32 sp9C;
    s32 spB0;
    f32 spC0;
    s3232 spC4;
    s3232 spC8;
    s32 spCC;
    s32 spD0;
    s64 temp_v0;
    u8 *temp_a2;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_s5;
    u8 *var_s3;

    var_s3 = arg0;
    func_0013B0B0((s32)((void *)(NULL)));
    do {
        temp_s4 = **arg1;
        temp_s5 = *(u8 **)((u8 *)var_s3 + 0x34);
        *arg1 += 4;
        if (temp_s4 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_0013B960(temp_s4);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
        } else {
            func_00142100(var_s3, var_s3 + 0x10);
        }
        if ((temp_s5 != NULL) && (*(s32 *)((u8 *)temp_s5 + 4) != 0)) {
            func_0013B0B0((s32)((void *)(NULL)));
            if (*(s32 *)((u8 *)var_s3 + 0x30) & 0xC000) {
                M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                if (*(s32 *)((u8 *)var_s3 + 0x30) & 0x8000) {
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
                    spC0 = 0.0f;
                    spC4 = 0;
                    spC8 = 0xBF800000;
                    spCC = 0x3F800000;
                }
                func_0013B190(0);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                spC4 = 0;
                func_00146F30(&spC0);
                if (M2C_ERROR(/* Read from unset register $f0 */) != 0.0f) {
                    sp70 = spC8;
                    sp74 = 0.0f;
                    sp78 = -spC0;
                    sp7C = 0.0f;
                    sp80 = 0.0f;
                    sp84 = 1.0f;
                    sp88 = 0.0f;
                    sp8C = 0.0f;
                    sp90 = spC0;
                    sp94 = 0.0f;
                    sp98 = spC8;
                    sp9C = 0.0f;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
                    if (temp_s4 != NULL) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
                    }
                } else {
                    func_0013B060(NULL);
                }
            }
            temp_a2 = *(u8 **)((u8 *)temp_s5 + 0xC);
            if ((temp_a2 != NULL) && (*(f32 *)((u8 *)temp_a2 + 0x30) != 0.0f) && (M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), (func_00132D20(0, &spD0, temp_a2, *(f32 *)((u8 *)temp_a2 + 0x30)) != 0))) {
                func_0013B110(1);
            } else {
                temp_s4_2 = *arg3;
                temp_v0 = func_00138070(*(s32 *)((u8 *)temp_s5 + 4), arg3);
                if (temp_v0 != 0) {
                    if (*arg2 != 0) {
                        *(s32 *)((u8 *)temp_s4_2 + 0) = 0x20000000;
                        *(s32 *)((u8 *)temp_s4_2 + 4) = (s32) ((u64) (temp_v0 << 0x24) >> 0x24);
                    } else {
                        *arg2 = (s32) temp_v0;
                    }
                }
                func_0013B110(1);
            }
        }
        if (*(u8 **)((u8 *)var_s3 + 0x38) != NULL) {
            func_0013E590(*(u8 **)((u8 *)var_s3 + 0x38), arg1, arg2, arg3);
        }
        func_0013B060(NULL);
        var_s3 = *(u8 **)((u8 *)var_s3 + 0x3C);
    } while (var_s3 != NULL);
    amMtxStack_Pop(1);
}
