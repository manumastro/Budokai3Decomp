/* Draft (not built): func_001D1090 at 0x001D1090, size 0x210, segment battle/char_acsr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC0, original 0x210
 * Original: asm/nonmatchings/battle/char_acsr/func_001D1090.s */

// src/battle/char_acsr.c func_001D1090 size diff=115/48
extern void *D_0047058C;
extern void func_00146F30(void *);
void func_001D1090(void) {
    s32 sp30;
    s32 sp40;
    s32 sp50;
    s16 var_s0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;

    var_s1 = *(s32 *)((u8 *)D_0047058C + 0x54);
    var_s0 = *(s16 *)((u8 *)D_0047058C + 0x6A);
    do {
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        var_s0 -= 1;
        var_s1 += 0x80;
    } while (var_s0 != 0);
    var_a1 = 0;
loop_8:
    if (var_a1 < (*(s16 *)((u8 *)D_0047058C + 0x6E) - 1)) {
        var_a2 = 0;
loop_6:
        if (var_a2 < (*(s16 *)((u8 *)D_0047058C + 0x6C) - 1)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t4) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t3) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t4) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t3) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t4) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t3) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
            M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            var_a2 += 1;
            goto loop_6;
        }
        var_a1 += 1;
        goto loop_8;
    }
    var_s1 = *(s32 *)((u8 *)D_0047058C + 0x54);
    var_s0 = *(s16 *)((u8 *)D_0047058C + 0x6A);
    do {
        func_00146F30((void *)(var_s1 + 0x20));
        var_s0 -= 1;
        var_s1 += 0x80;
    } while (var_s0 != 0);
}
