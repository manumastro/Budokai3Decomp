/* Draft (not built): func_0024E910 at 0x0024E910, size 0x3D0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 132 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x310, original 0x3D0
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024E910.s */

// src/battle/skill_cmd.c func_0024E910 size diff=132/196
extern void func_00146F60(f32 *, s32 *);
extern void func_00141C30(f32 *, f32 *, f32 *);
extern s32 amMotion_FindBone(s32, s32);
s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 amGs_SetReg64(s32, s32);
s32 func_00133980(s32, s32, s32, s32);
s32 func_001414D0(s32 *, s32, s32, s32);
s32 func_00142080(s32 *, s32 *, s32 *);
s128 *func_0029D540();
f32 func_0029D550(s32 *, void *, f32);
extern s128 D_004502C0;
extern s32 D_0046ADE0;
extern f32 D_0046FD80;
extern void amObject_Draw(void *);
extern void func_001339B0(void *);
void func_0024E910(u8 *arg0) {
    s32 sp60;
    s32 sp70;
    s128 sp80;
    s32 sp90;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    u8 *spD8;
    u8 *spDC;
    f32 var_f0;
    f32 var_f0_2;
    s128 *var_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0_2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 8);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x1350);
    if (!(*(s16 *)((u8 *)arg0 + 4) & 0x4000)) {
        func_0013B0B0(NULL);
        spC0 = 0x3F800000;
        spCC = 0x3F800000;
        spC4 = 0;
        spC8 = 0;
        func_00146F60((f32 *)(&spB0), (s32 *)(arg0 + 0x30));
        func_00141C30((f32 *)(&spA0), (f32 *)(&spC0), (f32 *)(&spB0));
        func_001414D0(&sp90, 0x43340000, 0, 0);
        func_00142080(&spA0, &spA0, &sp90);
        func_00142100((s32 *)(&spA0), (s32)(arg0 + 0x20));
        if (*(s32 *)((u8 *)temp_s2 + 0x1CFC) == 0x1C) {
            sp80 = D_004502C0;
            temp_s0 = *(s32 *)((u8 *)(**(u8 ***)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xB88)) + 0)) + 0x14);
            spD0 = *(s32 *)((u8 *)arg0 + 0x48);
            temp_v0 = amMotion_FindBone((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xB88)) + 4)), (s32)(&D_0046ADE0));
            spD4 = temp_v0;
            spD8 = (unsigned char *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xB88)) + 4)) + 0x14) + (spD0 * 0x50));
            spDC = *(u8 **)((u8 *)(*(u8 **)((u8 *)((temp_v0 << 5) + temp_s0) + 4)) + 0x18);
            D_00470238 = 0;
            temp_v0_2 = **(u8 ***)((u8 *)temp_s2 + 0xB7C);
            amModel_SetCurrent(*(s32 *)((u8 *)temp_v0_2 + 0x5C), *(s32 *)((u8 *)temp_v0_2 + 0x60));
            func_0013B0B0(NULL);
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
            DrawFlags_Apply(0x20000000, 0, 0, 0x20000000);
            amGs_SetReg64(1, 0x42);
            amObject_Draw(spD8);
            temp_a0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)((temp_v0 << 5) + temp_s0) + 4)) + 8)) + 0x40);
            func_00142100((s32 *)(temp_a0), (s32)(temp_a0 + 0x10));
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
            amObject_Draw(spDC);
            amGs_SetReg64(1, 0x44);
            DrawFlags_Apply(0, 0x20000000, 0, 0);
            func_0013B060(NULL);
            temp_a1 = *(u8 **)((u8 *)gBattle + 0x264);
            if (temp_a1 == NULL) {
                var_f0 = D_0046FD80;
            } else {
                var_f0 = func_0029D550(&sp60, temp_a1, *(f32 *)((u8 *)temp_a1 + 0x34));
            }
            var_v0 = &sp80;
            D_0046FD80 = var_f0;
            if (var_v0 == NULL) {
                var_v0 = func_0029D540();
            }
            func_001339B0(var_v0);
            DrawFlags_Apply(0x13C00720, 0, 0, 0x10400200);
            amObject_Draw(spD8);
            temp_a0_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)((spD4 << 5) + temp_s0) + 4)) + 8)) + 0x40);
            func_00142100((s32 *)(temp_a0_2), (s32)(temp_a0_2 + 0x10));
            temp_a1_2 = *(u8 **)((u8 *)gBattle + 0x264);
            if (temp_a1_2 == NULL) {
                var_f0_2 = D_0046FD80;
            } else {
                var_f0_2 = func_0029D550(&sp70, temp_a1_2, *(f32 *)((u8 *)temp_a1_2 + 0x34));
            }
            D_0046FD80 = var_f0_2;
            amObject_Draw(spDC);
            func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
            DrawFlags_Apply(0, 0x13C00720, 0, 0);
        }
        func_0013B110(2);
        if (*(u8 **)((u8 *)arg0 + 0x44) != NULL) {
            temp_s0_2 = func_0020B020(temp_s1, *(s16 *)((u8 *)temp_s3 + 0x20), *(s16 *)((u8 *)temp_s3 + 0x22));
            amModel_SetCurrent(temp_s0_2, func_0020AD30(temp_s1, *(s16 *)((u8 *)temp_s3 + 0x20), *(s16 *)((u8 *)temp_s3 + 0x22)));
            func_0013B0B0(NULL);
            M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_00209D20((s32)(NULL));
            M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            func_00208D70((s32)(*(u8 **)((u8 *)arg0 + 0x44)));
            func_0013B110(1);
            func_00209C50();
        }
    }
}
