/* Draft (not built): func_002925A0 at 0x002925A0, size 0x1DC, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x188, original 0x1DC
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002925A0.s */

// src/unk/unk_2918A0.c func_002925A0 size diff=78/98
s32 func_00132D20(s32, f32 *, s32);
s32 func_0013B110(s32);
f32 func_00146E90(f32 *);
extern void *D_004708A4;
extern s32 D_005AA6F0;
extern void func_0013B0B0(void *);
u8 *func_002925A0(s32 arg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f22;
    s32 var_s3;
    u8 *var_s1;
    u8 *var_s2;

    func_0013B0B0(&D_005AA6F0);
    var_s2 = (unsigned char *)(arg0 + 0x80);
    var_f22 = 5000000.0f;
    var_s1 = NULL;
    var_s3 = 0;
    temp_f2 = (f32) *(s8 *)((u8 *)D_004708A4 + 0x1AE0);
    temp_f21 = 4000.0f * temp_f2;
    temp_f20 = 2000.0f * temp_f2;
    goto loop_18;
block_2:
    if (*(s32 *)((u8 *)var_s2 + 0) == -1) {
        goto block_17;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_f0 = sp60 + temp_f21;
    if (!(sp60 < -temp_f20)) {
        goto block_5;
    }
    goto block_6;
block_5:
    var_f0 = sp60 - temp_f21;
    if (sp60 <= temp_f20) {
        goto block_7;
    }
block_6:
    sp60 = var_f0;
block_7:
    var_f0_2 = sp68 + temp_f21;
    if (!(sp68 < -temp_f20)) {
        goto block_10;
    }
    goto block_11;
block_10:
    var_f0_2 = sp68 - temp_f21;
    if (sp68 <= temp_f20) {
        goto block_12;
    }
block_11:
    sp68 = var_f0_2;
block_12:
    temp_f0 = func_00146E90(&sp60);
    if (!(temp_f0 <= *(f32 *)((u8 *)var_s2 + 0xC))) {
        goto block_17;
    }
    if (var_f22 <= temp_f0) {
        goto block_17;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp64 = -sp64;
    sp68 = -sp68;
    if (func_00132D20(0, &sp60, 0) != 0) {
        goto block_17;
    }
    if (func_002920E0(var_s2) == 0) {
        goto block_17;
    }
    var_f22 = temp_f0;
    var_s1 = var_s2;
block_17:
    var_s3 += 1;
    var_s2 += 0x40;
loop_18:
    if (var_s3 < 0x40) {
        goto block_2;
    }
    func_0013B110(1);
    return var_s1;
}
