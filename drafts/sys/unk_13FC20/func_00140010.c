/* Draft (not built): func_00140010 at 0x00140010, size 0x404, segment sys/unk_13FC20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 183 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x240, original 0x404
 * Original: asm/nonmatchings/sys/unk_13FC20/func_00140010.s */

// src/sys/unk_13FC20.c func_00140010 size diff=183/144
s32 amMtxStack_Pop(s32);
s32 func_0013B110(s32);
s32 func_0013B190(s32);
extern f32 D_0046FD40;
extern f32 D_0046FD44;
extern void func_0013B0B0(void *);
extern void func_0013B960(void *);
extern void func_00146F30(void *);
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
void func_00140010(u8 *arg0, u8 ***arg1, u8 *arg2) {
    s32 sp54;
    f32 sp50;
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
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f2;
    u8 ***var_s2;
    u8 *temp_a0;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3;

    var_s3 = arg0;
    var_s2 = arg1;
    var_s1 = arg2;
    func_0013B0B0(NULL);
    do {
        var_s0 = **var_s2;
        *var_s2 += 4;
        if (var_s0 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_0013B960(var_s0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
        } else {
            func_00142100(var_s3, var_s3 + 0x10);
        }
        if ((*(u8 **)((u8 *)var_s3 + 0x34) != NULL) && !(*(s32 *)((u8 *)var_s3 + 0x30) & 0x20000000)) {
            func_0013B0B0(NULL);
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
                    if (var_s0 != NULL) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
                    }
                } else {
                    func_0013B060(NULL);
                }
            }
            temp_v1 = *(u8 **)((u8 *)var_s3 + 0x34);
            if (*(s32 *)((u8 *)temp_v1 + 4) == 0) {
                if (*(s32 *)((u8 *)temp_v1 + 8) != 0) {
                    goto block_20;
                }
            } else {
block_20:
                temp_a0 = *(u8 **)((u8 *)temp_v1 + 0xC);
                if (temp_a0 != NULL) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_f2 = *(f32 *)((u8 *)temp_a0 + 0x30);
                } else {
                    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
                    if (*(u8 **)((u8 *)var_s3 + 0x38) != NULL) {
                        var_f2 = D_0046FD40;
                    } else {
                        var_f2 = D_0046FD44;
                    }
                }
                temp_f1 = sp50 - var_f2;
                if (!(*(f32 *)((u8 *)var_s1 + 0) <= temp_f1)) {
                    *(f32 *)((u8 *)var_s1 + 0) = temp_f1;
                }
                temp_f1_2 = sp50 + var_f2;
                if (*(f32 *)((u8 *)var_s1 + 8) < temp_f1_2) {
                    *(f32 *)((u8 *)var_s1 + 8) = temp_f1_2;
                }
                temp_f1_3 = sp54 - var_f2;
                if (!(*(f32 *)((u8 *)var_s1 + 4) <= temp_f1_3)) {
                    *(f32 *)((u8 *)var_s1 + 4) = temp_f1_3;
                }
                temp_f1_4 = sp54 + var_f2;
                if (*(f32 *)((u8 *)var_s1 + 0xC) < temp_f1_4) {
                    *(f32 *)((u8 *)var_s1 + 0xC) = temp_f1_4;
                }
            }
            func_0013B110(1);
        }
        if (*(u8 **)((u8 *)var_s3 + 0x38) != NULL) {
            func_00140010(*(u8 **)((u8 *)var_s3 + 0x38), var_s2, var_s1);
        }
        func_0013B060(NULL);
        var_s3 = *(u8 **)((u8 *)var_s3 + 0x3C);
    } while (var_s3 != NULL);
    amMtxStack_Pop(1);
}
