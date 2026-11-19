/* Draft (not built): func_0028DEA0 at 0x0028DEA0, size 0x6C, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028DEA0.s */

// src/sys/mc_opr.c func_0028DEA0 diff diff=5/27
extern void func_0028D810(void);
void func_0028DEA0(u8 *arg0) {
    s32 (*var_v0)();
    f32 temp_f1;

    temp_f1 = D_00470884 + 0.05f;
    D_00470884 = temp_f1;
    if (!(temp_f1 < 1.0f)) {
        var_v0 = func_0028D810;
        D_00470884 = 1.0f;
        if (func_0028D810 == NULL) {
            var_v0 = NULL;
        }
        *(s32 (**)())((u8 *)arg0 + 0x1C) = var_v0;
        func_0028D810();
        return;
    }
    func_00288500();
}
