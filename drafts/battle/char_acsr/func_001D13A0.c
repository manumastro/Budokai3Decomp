/* Draft (not built): func_001D13A0 at 0x001D13A0, size 0x100, segment battle/char_acsr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD0, original 0x100
 * Original: asm/nonmatchings/battle/char_acsr/func_001D13A0.s */

// src/battle/char_acsr.c func_001D13A0 size diff=39/52
s32 func_00146F10(s32 *, void *, f32);
extern void *D_0047058C;
void func_001D13A0(void) {
    s32 sp60;
    f32 temp_f20;
    f32 temp_f21;
    s16 var_s1;
    s32 var_s0;
    u8 *temp_s3;
    u8 *var_s2;

    temp_s3 = D_0047058C;
    var_s0 = 0;
    if (func_0029D8D0() & 4) {

    } else {
        var_s0 = 1;
    }
    var_s2 = *(u8 **)((u8 *)temp_s3 + 0x54);
    var_s1 = *(s16 *)((u8 *)temp_s3 + 0x6A);
    temp_f21 = *(f32 *)((u8 *)temp_s3 + 0x70);
    temp_f20 = *(f32 *)((u8 *)temp_s3 + 0x74);
    do {
        if (!(*(s32 *)((u8 *)var_s2 + 0x70) & 1)) {
            func_00146F10(&sp60, var_s2 + 0x40, temp_f21);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00146F10((s32 *)(var_s2 + 0x30), (void *)(var_s2 + 0x30), *(f32 *)((u8 *)var_s2 + 0x64));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
            if ((var_s0 != 0) && (*(f32 *)((u8 *)var_s2 + 4) < temp_f20)) {
                *(f32 *)((u8 *)var_s2 + 4) = temp_f20;
            }
        }
        var_s1 -= 1;
        var_s2 += 0x80;
    } while (var_s1 != 0);
}
