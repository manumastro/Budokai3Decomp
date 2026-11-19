/* Draft (not built): func_002181A0 at 0x002181A0, size 0x248, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 125 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD0, original 0x248
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002181A0.s */

// src/unk/unk_20A4D0.c func_002181A0 size diff=125/52
extern void (*D_00469C70[])(void *, void *);
void func_002181A0(u32 arg0, u8 *arg1) {
    s32 sp20;
    s32 sp50;
    s32 sp60;
    s32 *sp70;
    s32 *sp74;
    s128 temp_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;

    var_v1 = -1;
    var_s0 = (s32) arg0 % 1000000;
    var_v0 = 0;
    if (((arg0 / 1000000) + (arg0 >> 0x1F)) == 1) {
        var_v0 = 1;
    }
    temp_a0 = (((s32) arg0 % 1000000) / 10000) + ((u32) var_s0 >> 0x1F);
    var_s0 = var_s0 % 10000;
    if (temp_a0 > 0) {
        var_v1 = temp_a0 - 1;
    }
    temp_a0_2 = (var_s0 / 100) + ((u32) var_s0 >> 0x1F);
    var_s0 = var_s0 % 100;
    if (temp_a0_2 > 0) {

    }
    if (var_v1 == -1) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        if (var_v0 != 0) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
            goto block_12;
        }
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a2) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
        if (var_v0 != 0) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
block_12:
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
    }
    func_00146F30(&sp50);
    memset(&sp70, 0, 0x2C);
    sp70 = &sp60;
    sp74 = &sp50;
    temp_a1 = *(s128 *)((u8 *)(&sp70) + 0x10);
    *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&sp70) + 0);
    *(s128 *)((u8 *)(&sp20) + 0x10) = temp_a1;
    *(s64 *)((u8 *)(&sp20) + 0x20) = (s64) *(s64 *)((u8 *)(&sp70) + 0x20);
    *(f32 *)((u8 *)(&sp20) + 0x28) = (f32) *(f32 *)((u8 *)(&sp70) + 0x28);
    if ((var_s0 >= 0) && (var_s0 < 0x11)) {
        D_00469C70[var_s0](&sp20, (u8 *) temp_a1);
    }
}
