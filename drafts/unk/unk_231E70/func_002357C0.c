/* Draft (not built): func_002357C0 at 0x002357C0, size 0xDC, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB8, original 0xDC
 * Original: asm/nonmatchings/unk/unk_231E70/func_002357C0.s */

// src/unk/unk_231E70.c func_002357C0 size diff=29/46
extern void *gBattle;
s32 func_002357C0(u8 *arg0, s32 arg1) {
    s32 sp48;
    f32 sp40;
    s32 temp_s1;
    s32 var_s0;

    temp_s1 = *(s32 *)((u8 *)arg0 + 0x1354);
    var_s0 = 0x13;
    if ((*(s16 *)((u8 *)gBattle + 0x7E2) == 2) || ((func_0012EAE0(0x20, arg1) / 10) & 1)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        var_s0 = 0x24;
        if (!(-((sp48 * *(f32 *)((u8 *)arg0 + 0x650)) - (sp40 * *(f32 *)((u8 *)(arg0 + 0x650) + 8))) < 0.0f)) {

        } else {
            var_s0 = 0x25;
        }
    }
    return var_s0;
}
