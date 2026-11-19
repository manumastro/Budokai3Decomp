/* Draft (not built): func_001D12A0 at 0x001D12A0, size 0xF8, segment battle/char_acsr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD4, original 0xF8
 * Original: asm/nonmatchings/battle/char_acsr/func_001D12A0.s */

// src/battle/char_acsr.c func_001D12A0 size diff=42/53
s32 func_00146F10(s32 *, s32 *, f32);
extern void *D_0047058C;
extern void func_00146F30(void *);
void func_001D12A0(void) {
    s32 sp60;
    f32 temp_f12;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_s4 = D_0047058C;
    var_s1 = 0;
    goto loop_8;
block_1:
    var_s0 = 1;
    goto loop_6;
block_3:
    temp_s3 = (unsigned char *)(*(s32 *)((u8 *)temp_s4 + 0x54) + ((var_s1 + (*(s16 *)((u8 *)temp_s4 + 0x6C) * var_s0)) << 7));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp60);
    temp_f12 = *(f32 *)((u8 *)temp_s3 + 0x6C);
    if (M2C_ERROR(/* Read from unset register $f0 */) <= temp_f12) {
        goto block_5;
    }
    func_00146F10(&sp60, &sp60, temp_f12);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
block_5:
    var_s0 += 1;
loop_6:
    if (var_s0 < *(s16 *)((u8 *)temp_s4 + 0x6E)) {
        goto block_3;
    }
    var_s1 += 1;
loop_8:
    if (var_s1 < *(s16 *)((u8 *)temp_s4 + 0x6C)) {
        goto block_1;
    }
    return;
}
