/* Draft (not built): func_001D14A0 at 0x001D14A0, size 0x118, segment battle/char_acsr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x11C, original 0x118
 * Original: asm/nonmatchings/battle/char_acsr/func_001D14A0.s */

// src/battle/char_acsr.c func_001D14A0 size diff=48/71
f32 func_00146EB0(s32 *);
s32 func_00146ED0(s32 *, s32 *, f32);
s32 func_00146F10(s32 *, s32 *, f32);
f32 func_00146F90(s32 *, void *);
extern void *D_0047058C;
extern void func_00146F30(void *);
void func_001D14A0(void) {
    s32 sp60;
    s32 sp70;
    s16 var_s1;
    s32 var_s0;
    u8 *temp_s4;
    u8 *var_s2;
    u8 *var_s3;

    temp_s4 = D_0047058C;
    var_s0 = *(s32 *)((u8 *)temp_s4 + 0x78);
    var_s2 = *(u8 **)((u8 *)temp_s4 + 0x7C);
    if (var_s0 == 0) {
        goto block_8;
    }
loop_2:
    var_s3 = *(u8 **)((u8 *)temp_s4 + 0x54);
    var_s1 = *(s16 *)((u8 *)temp_s4 + 0x6A);
loop_3:
    if (*(s32 *)((u8 *)var_s3 + 0x70) & 1) {
        goto block_6;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    if (!(func_00146EB0(&sp70) <= *(f32 *)((u8 *)var_s2 + 0x34))) {
        goto block_6;
    }
    func_00146ED0(&sp70, &sp70, *(f32 *)((u8 *)var_s2 + 0x30));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
    func_00146F30(&sp70);
    func_00146F10(&sp60, &sp70, func_00146F90(&sp70, var_s3 + 0x40));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
block_6:
    var_s1 -= 1;
    var_s3 += 0x80;
    if (var_s1 != 0) {
        goto loop_3;
    }
    var_s0 -= 1;
    var_s2 += 0x40;
    if (var_s0 != 0) {
        goto loop_2;
    }
block_8:
    return;
}
