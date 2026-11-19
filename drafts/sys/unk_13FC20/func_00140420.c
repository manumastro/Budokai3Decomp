/* Draft (not built): func_00140420 at 0x00140420, size 0x470, segment sys/unk_13FC20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 195 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2B4, original 0x470
 * Original: asm/nonmatchings/sys/unk_13FC20/func_00140420.s */

// src/sys/unk_13FC20.c func_00140420 size diff=195/173
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
void func_00140420(u8 *arg0, s32 **arg1, u8 ***arg2, u8 *arg3) {
    s32 sp84;
    f32 sp80;
    s32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    s32 spB8;
    f32 spBC;
    s32 spD0;
    f32 spE0;
    s32 spE4;
    s32 spE8;
    s32 spEC;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f2;
    s32 var_s6;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_v1;
    u8 *var_s1;
    u8 *var_s4;

    var_s4 = arg0;
    func_0013B0B0(NULL);
    do {
        temp_s0 = **arg2;
        *arg2 += 4;
        var_s6 = **arg1;
        if (var_s6 >= 0) {
            var_s1 = *(u8 **)((u8 *)((var_s6 * 0x10) + *(u8 **)((u8 *)var_s4 + 4)) + 8);
            if (var_s1 == NULL) {
                goto block_4;
            }
        } else {
block_4:
            var_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 4)) + 8);
            var_s6 = -1;
        }
        if (temp_s0 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_0013B960(temp_s0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
        } else {
            func_00142100(var_s1, var_s1 + 0x10);
        }
        if ((var_s6 != -1) && (*(u8 **)((u8 *)var_s1 + 0x34) != NULL) && !(*(s32 *)((u8 *)var_s1 + 0x30) & 0x20000000)) {
            func_0013B0B0(NULL);
            if (*(s32 *)((u8 *)var_s1 + 0x30) & 0xC000) {
                M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                if (*(s32 *)((u8 *)var_s1 + 0x30) & 0x8000) {
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
                    spE0 = 0.0f;
                    spE4 = 0;
                    spE8 = 0xBF800000;
                    spEC = 0x3F800000;
                }
                func_0013B190(0);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                spE4 = 0;
                func_00146F30(&spE0);
                if (M2C_ERROR(/* Read from unset register $f0 */) != 0.0f) {
                    sp90 = spE8;
                    sp94 = 0.0f;
                    sp98 = -spE0;
                    sp9C = 0.0f;
                    spA0 = 0.0f;
                    spA4 = 1.0f;
                    spA8 = 0.0f;
                    spAC = 0.0f;
                    spB0 = spE0;
                    spB4 = 0.0f;
                    spB8 = spE8;
                    spBC = 0.0f;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
                    if (temp_s0 != NULL) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
                    }
                } else {
                    func_0013B060(NULL);
                }
            }
            temp_v1 = *(u8 **)((u8 *)var_s1 + 0x34);
            if (*(s32 *)((u8 *)temp_v1 + 4) == 0) {
                if (*(s32 *)((u8 *)temp_v1 + 8) != 0) {
                    goto block_23;
                }
            } else {
block_23:
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
                    if (*(u8 **)((u8 *)var_s4 + 8) != NULL) {
                        var_f2 = D_0046FD40;
                    } else {
                        var_f2 = D_0046FD44;
                    }
                }
                temp_f1 = sp80 - var_f2;
                if (!(*(f32 *)((u8 *)arg3 + 0) <= temp_f1)) {
                    *(f32 *)((u8 *)arg3 + 0) = temp_f1;
                }
                temp_f1_2 = sp80 + var_f2;
                if (*(f32 *)((u8 *)arg3 + 8) < temp_f1_2) {
                    *(f32 *)((u8 *)arg3 + 8) = temp_f1_2;
                }
                temp_f1_3 = sp84 - var_f2;
                if (!(*(f32 *)((u8 *)arg3 + 4) <= temp_f1_3)) {
                    *(f32 *)((u8 *)arg3 + 4) = temp_f1_3;
                }
                temp_f1_4 = sp84 + var_f2;
                if (*(f32 *)((u8 *)arg3 + 0xC) < temp_f1_4) {
                    *(f32 *)((u8 *)arg3 + 0xC) = temp_f1_4;
                }
            }
            func_0013B110(1);
        }
        *arg1 += 8;
        if (*(u8 **)((u8 *)var_s4 + 8) != NULL) {
            func_00140420(*(u8 **)((u8 *)var_s4 + 8), arg1, arg2, arg3);
        }
        func_0013B060(NULL);
        var_s4 = *(u8 **)((u8 *)var_s4 + 0xC);
    } while (var_s4 != NULL);
    amMtxStack_Pop(1);
}
