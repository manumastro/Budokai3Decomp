/* Draft (not built): func_0029D550 at 0x0029D550, size 0x108, segment unk/unk_29CE90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 34 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB0, original 0x108
 * Original: asm/nonmatchings/unk/unk_29CE90/func_0029D550.s */

// src/unk/unk_29CE90.c func_0029D550 size diff=34/44
f32 func_00146E30();
extern void func_0011F4C0(void);
f32 func_0029D550(f32 fparg0) {
    f32 temp_f0;
    f32 temp_f20;

    temp_f0 = func_00146E30();
    temp_f20 = ((360.0f * fparg0) / 6.2831855f) / 45.0f;
    if (temp_f0 <= 10.0f) {
        return 0.015f * temp_f20;
    }
    if (!(temp_f0 < 180.0f)) {
        return 0.35f * temp_f20;
    }
    func_0011F4C0();
    M2C_ERROR(/* unknown instruction: mula.s $f3, $f2 */);
    return temp_f20 * M2C_ERROR(/* unknown instruction: madd.s $f0, $f1, $f0 */);
}
