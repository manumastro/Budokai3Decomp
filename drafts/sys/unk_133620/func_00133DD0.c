/* Draft (not built): func_00133DD0 at 0x00133DD0, size 0x1C8, segment sys/unk_133620 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x23C, original 0x1C8
 * Original: asm/nonmatchings/sys/unk_133620/func_00133DD0.s */

// src/sys/unk_133620.c func_00133DD0 size diff=61/143
s32 func_00132D20(s32, s32, s32);
s32 func_0013B110(s32);
extern s32 D_00470414;
extern s32 D_00470418;
extern f32 D_0047042C;
extern f32 D_00470430;
extern s32 D_0047C8D0;
extern void func_0013B0B0(void *);
s32 func_00133DD0(s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    f32 sp50;
    f32 *var_s0;
    f32 *var_s1;
    f32 *var_s2;
    f32 var_f0;
    f32 var_f0_2;
    s32 var_s3;

    var_s3 = arg0;
    var_s2 = arg1;
    var_s1 = arg2;
    var_s0 = arg3;
    if (func_00132D20(0, var_s3, 0) != 0) {
        return 0;
    }
    func_0013B0B0(&D_0047C8D0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_0013B110(1);
    if (D_00470414 >= 0) {
        var_f0 = (f32) D_00470414;
    } else {
        var_f0 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
    }
    *var_s2 = (0.5f * D_0047042C) + ((D_0047042C * ((sp50 / sp5C) - 2048.0f)) / var_f0);
    if (D_00470418 >= 0) {
        var_f0_2 = (f32) D_00470418;
    } else {
        var_f0_2 = 2.0f * (f32) (((u32) D_00470418 >> 1) | (D_00470418 & 1));
    }
    *var_s1 = (0.5f * D_00470430) + ((D_00470430 * ((sp54 / sp5C) - 2048.0f)) / var_f0_2);
    *var_s0 = sp58 / sp5C;
    return 1;
}
