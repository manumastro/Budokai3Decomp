/* Draft (not built): func_001A6AD0 at 0x001A6AD0, size 0x198, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 73 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC8, original 0x198
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A6AD0.s */

// src/battle/btl_cmd.c func_001A6AD0 size diff=73/50
extern void func_0011F4C0(void);
void func_001A6AD0(void) {
    s32 sp40;
    f32 var_f0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = (u8 *)(gBattle);
    temp_s1 = temp_s2 + 0xA0;
    temp_s0 = temp_s1 + 0xF0;
    if (*(s32 *)((u8 *)temp_s2 + 0x88EC) == 0) {
        func_001A73F0();
        if ((*(f32 *)((u8 *)temp_s1 + 0x140) / 50.0f) < 0.6f) {

        }
        func_0011F4C0();
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)temp_s0 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x38) | 1);
        var_f0 = (*(f32 *)((u8 *)temp_s0 + 0x34) * (1.0f - M2C_ERROR(/* Read from unset register $f0 */))) + (M2C_ERROR(/* Read from unset register $f0 */) * 0.5235988f);
        if (var_f0 < 0.08726647f) {
            var_f0 = 0.08726647f;
        }
        if (!(var_f0 <= 3.0543263f)) {
            var_f0 = 3.0543263f;
        }
        *(f32 *)((u8 *)temp_s0 + 0x34) = var_f0;
        *(f32 *)((u8 *)temp_s1 + 0x140) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x140) + *(f32 *)((u8 *)temp_s2 + 0x88F0));
    }
}
