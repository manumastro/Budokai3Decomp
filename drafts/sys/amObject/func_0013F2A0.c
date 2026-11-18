/* Draft (not built): func_0013F2A0 at 0x0013F2A0, size 0x470, segment sys/amObject (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 308: f32 sp84; @ 307: s3232 sp80;
 * Original: asm/nonmatchings/sys/amObject/func_0013F2A0.s */

// src/sys/amObject.c func_0013F2A0 cerr diff=-1/0
s32 amMtxStack_Pop(s32);
s32 func_00132D20(s32, s32 *, f32);
s64 func_00138070(s32, void **);
s32 func_0013B190(s32);
extern void func_00146F30(void *);
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
void func_0013F2A0(u8 *arg0, s32 **arg1, s32 *arg2, u8 **arg3) {
    s3232 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    f32 spA0;
    f32 spA4;
    s3232 spA8;
    f32 spAC;
    s32 spC0;
    f32 spD0;
    s3232 spD4;
    s3232 spD8;
    s32 spDC;
    s32 spE0;
    s32 (*temp_s6)(u8 *);
    s32 var_s5;
    s64 temp_v0;
    u8 *temp_s5;
    u8 *temp_s5_2;
    u8 *var_s0;
    u8 *var_s4;

    var_s4 = arg0;
    temp_s6 = D_0047CAC4;
    func_0013B0B0((s32)((void *)(NULL)));
    do {
        var_s5 = **arg1;
        if ((var_s5 < 0) || (var_s0 = *(u8 **)((u8 *)((var_s5 * 0x10) + *(u8 **)((u8 *)var_s4 + 4)) + 8), (var_s0 == NULL))) {
            var_s0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 4)) + 8);
            var_s5 = -1;
        }
        func_00142100(var_s0, var_s0 + 0x10);
        if ((var_s5 != -1) && (*(u8 **)((u8 *)var_s0 + 0x34) != NULL) && (*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x34)) + 4) != 0)) {
            temp_s5 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x34)) + 0xC);
            func_0013B0B0((s32)((void *)(NULL)));
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
                    spD0 = 0.0f;
                    spD4 = 0;
                    spD8 = 0xBF800000;
                    spDC = 0x3F800000;
                }
                func_0013B190(0);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                spD4 = 0;
                func_00146F30(&spD0);
                if (M2C_ERROR(/* Read from unset register $f0 */) != 0.0f) {
                    sp80 = spD8;
                    sp84 = 0.0f;
                    sp88 = -spD0;
                    sp8C = 0.0f;
                    sp90 = 0.0f;
                    sp94 = 1.0f;
                    sp98 = 0.0f;
                    sp9C = 0.0f;
                    spA0 = spD0;
                    spA4 = 0.0f;
                    spA8 = spD8;
                    spAC = 0.0f;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
                } else {
                    func_0013B060(NULL);
                }
            }
            if ((temp_s5 != NULL) && (*(f32 *)((u8 *)temp_s5 + 0x30) != 0.0f) && (M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */), M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */), M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */), M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */), M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */), (func_00132D20(0, &spE0, *(f32 *)((u8 *)temp_s5 + 0x30)) != 0))) {
                func_0013B110(1);
            } else if ((temp_s6 != NULL) && (temp_s6(var_s0) != 0)) {
                func_0013B110(1);
            } else {
                temp_s5_2 = *arg3;
                temp_v0 = func_00138070(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x34)) + 4), arg3);
                if (temp_v0 != 0) {
                    if (*arg2 != 0) {
                        *(s32 *)((u8 *)temp_s5_2 + 0) = 0x20000000;
                        *(s32 *)((u8 *)temp_s5_2 + 4) = (s32) ((u64) (temp_v0 << 0x24) >> 0x24);
                    } else {
                        *arg2 = (s32) temp_v0;
                    }
                }
                func_0013B110(1);
            }
        }
        *arg1 += 8;
        if (*(u8 **)((u8 *)var_s4 + 8) != NULL) {
            func_0013F2A0(*(u8 **)((u8 *)var_s4 + 8), arg1, arg2, arg3);
        }
        func_0013B060(NULL);
        var_s4 = *(u8 **)((u8 *)var_s4 + 0xC);
    } while (var_s4 != NULL);
    amMtxStack_Pop(1);
}
