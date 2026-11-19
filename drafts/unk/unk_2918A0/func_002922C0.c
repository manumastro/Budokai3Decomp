/* Draft (not built): func_002922C0 at 0x002922C0, size 0x2D4, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 137 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x270, original 0x2D4
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002922C0.s */

// src/unk/unk_2918A0.c func_002922C0 size diff=137/156
s32 func_00133DD0(f32 *, f32 *, f32 *, f32 *);
s32 func_0013B110(s32);
f32 func_00146E90(f32 *);
extern f32 D_0047042C;
extern f32 D_00470430;
extern void *D_004708A4;
extern s32 D_005AA6F0;
extern s32 D_005AA730;
extern void *D_005AA734;
extern s32 D_005AA740;
extern void func_0013B0B0(void *);
void func_002922C0(s32 arg0) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    s32 *var_s0;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f22;
    f32 var_f23;
    s32 var_s2;
    u8 *var_s1;

    func_0013B0B0(&D_005AA6F0);
    var_f23 = 100000.0f;
    D_005AA730 = 0;
    var_s1 = (unsigned char *)(arg0 + 0x80);
    D_005AA734 = NULL;
    var_s2 = 0;
    var_s0 = &D_005AA740;
    var_f22 = 100000.0f;
    temp_f2 = (f32) *(s8 *)((u8 *)D_004708A4 + 0x1AE0);
    temp_f21 = 4000.0f * temp_f2;
    temp_f20 = 2000.0f * temp_f2;
    goto loop_23;
block_2:
    if (*(s32 *)((u8 *)var_s1 + 0) == -1) {
        goto block_22;
    }
    if (!(*(s32 *)((u8 *)var_s1 + 4) & 3)) {
        goto block_22;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    var_f0 = sp50 + temp_f21;
    if (!(sp50 < -temp_f20)) {
        goto block_7;
    }
    goto block_8;
block_7:
    var_f0 = sp50 - temp_f21;
    if (sp50 <= temp_f20) {
        goto block_9;
    }
block_8:
    sp50 = var_f0;
block_9:
    var_f0_2 = sp58 + temp_f21;
    if (!(sp58 < -temp_f20)) {
        goto block_12;
    }
    goto block_13;
block_12:
    var_f0_2 = sp58 - temp_f21;
    if (sp58 <= temp_f20) {
        goto block_14;
    }
block_13:
    sp58 = var_f0_2;
block_14:
    if (!(func_00146E90(&sp50) <= 3000.0f)) {
        goto block_22;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp54 = -sp54;
    sp58 = -sp58;
    if (func_00133DD0(&sp50, &sp6C, &sp68, &sp64) == 0) {
        goto block_22;
    }
    if (func_002920E0(var_s1) == 0) {
        goto block_22;
    }
    *(f32 *)((u8 *)var_s0 + 0) = sp6C;
    *(f32 *)((u8 *)var_s0 + 4) = sp68;
    *(f32 *)((u8 *)var_s0 + 8) = sp64;
    *(f32 *)((u8 *)var_s0 + 0xC) = 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(u8 **)((u8 *)var_s0 + 0x20) = var_s1;
    var_s0 += 0x30;
    temp_f0 = fabsf(sp68 - (0.5f * D_00470430));
    sp6C = fabsf(sp6C - (0.5f * D_0047042C));
    sp68 = temp_f0;
    D_005AA730 += 1;
    if (!(sp6C <= var_f23)) {
        goto block_22;
    }
    if (sp6C != var_f23) {
        goto block_21;
    }
    if (!(sp68 < var_f22)) {
        goto block_22;
    }
block_21:
    var_f23 = sp6C;
    var_f22 = sp68;
    D_005AA734 = var_s0 - 0x30;
block_22:
    var_s2 += 1;
    var_s1 += 0x40;
loop_23:
    if (var_s2 < 0x40) {
        goto block_2;
    }
    func_0013B110(1);
    return;
}
