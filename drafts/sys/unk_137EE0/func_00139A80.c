/* Draft (not built): func_00139A80 at 0x00139A80, size 0x35C, segment sys/unk_137EE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 134 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A0, original 0x35C
 * Original: asm/nonmatchings/sys/unk_137EE0/func_00139A80.s */

// src/sys/unk_137EE0.c func_00139A80 size diff=134/168
s32 amLight_Update(void *, s32);
s32 func_00146F10(s32, s32, f32);
extern void func_00146F30(void *);
void func_00139A80(u8 *arg0, s32 arg1, s32 arg2) {
    u8 sp[0x400];
    s32 sp50;
    s32 sp60;
    s32 var_a1;
    s32 var_a2;
    s32 var_s3;
    u16 temp_v1;
    u8 *temp_s2;
    u8 *temp_v1_2;
    u8 *var_s2;

    var_s2 = (unsigned char *)(gNodeHead);
    memset(&sp60, 0, 0xC);
    goto loop_22;
block_2:
    if (!(arg2 & 0xFFFF)) {
        goto block_7;
    }
    if (!(*(u16 *)((u8 *)var_s2 + 0x32) & 0xFF00)) {
        goto block_7;
    }
    if (*(u16 *)((u8 *)var_s2 + 0x32) & (arg2 & 0xFFFF)) {
        goto block_7;
    }
    var_s2 = *(u8 **)((u8 *)var_s2 + 0x4C);
    goto loop_22;
block_7:
    if (amLight_Update(var_s2, arg1) == 0) {
        goto block_21;
    }
    var_a2 = 0;
    goto loop_19;
block_10:
    if (*(s32 *)((u8 *)((var_a2 * 4) + sp) + 0x60) != 0) {
        goto block_12;
    }
    *(u8 **)((u8 *)((var_a2 * 4) + sp) + 0x60) = var_s2;
    goto block_21;
block_12:
    if (!(*(f32 *)((u8 *)(*(u8 **)((u8 *)((var_a2 * 4) + sp) + 0x60)) + 0x40) < *(f32 *)((u8 *)var_s2 + 0x40))) {
        goto block_18;
    }
    var_a1 = 1;
    goto loop_16;
block_15:
    *(s32 *)((u8 *)((var_a1 * 4) + sp) + 0x64) = (s32) *(s32 *)((u8 *)((var_a1 * 4) + sp) + 0x60);
    var_a1 -= 1;
loop_16:
    if (var_a1 >= var_a2) {
        goto block_15;
    }
    *(u8 **)((u8 *)((var_a2 * 4) + sp) + 0x60) = var_s2;
    goto block_21;
block_18:
    var_a2 += 1;
loop_19:
    if (var_a2 < 3) {
        goto block_10;
    }
block_21:
    var_s2 = *(u8 **)((u8 *)var_s2 + 0x4C);
loop_22:
    if (var_s2 != NULL) {
        goto block_2;
    }
    var_s3 = 0;
    goto loop_37;
block_25:
    temp_s2 = *(u8 **)((u8 *)((var_s3 * 4) + sp) + 0x60);
    if (temp_s2 != NULL) {
        goto block_28;
    }
    *(s32 *)((u8 *)((var_s3 * 0x10) + arg0) + 0x40) = 0;
    *(s32 *)((u8 *)((var_s3 * 0x10) + arg0) + 0x44) = 0;
    *(s32 *)((u8 *)((var_s3 * 0x10) + arg0) + 0x48) = 0;
    *(s32 *)((u8 *)((var_s3 * 0x10) + arg0) + 0x4C) = 0x3F800000;
    *(s32 *)((u8 *)((var_s3 * 0x10) + arg0) + 0x4C) = 0;
    goto block_36;
block_28:
    temp_v1 = *(u16 *)((u8 *)temp_s2 + 0x30);
    if (temp_v1 == 1) {
        goto block_33;
    }
    if (temp_v1 == 0) {
        goto block_31;
    }
    goto block_35;
block_31:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    goto block_35;
block_33:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00146F30(&sp50);
    if (M2C_ERROR(/* Read from unset register $f0 */) == 0.0f) {
        goto block_35;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
block_35:
    *(f32 *)((u8 *)((var_s3 * 0x10) + arg0) + 0xC) = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F10((s32)(arg0 + (var_s3 * 0x10) + 0x40), (s32)(arg0 + (var_s3 * 0x10) + 0x40), *(f32 *)((u8 *)temp_s2 + 0x44));
    temp_v1_2 = (var_s3 * 0x10) + arg0;
    *(f32 *)((u8 *)temp_v1_2 + 0x4C) = (f32) (*(f32 *)((u8 *)temp_v1_2 + 0x4C) * *(f32 *)((u8 *)temp_s2 + 0x44));
block_36:
    var_s3 += 1;
loop_37:
    if (var_s3 < 3) {
        goto block_25;
    }
    *(f32 *)((u8 *)arg0 + 0x3C) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x30) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x34) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x38) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x3C) = 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    return;
}
