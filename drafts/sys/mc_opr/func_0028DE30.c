/* Draft (not built): func_0028DE30 at 0x0028DE30, size 0x64, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028DE30.s */

// src/sys/mc_opr.c func_0028DE30 diff diff=4/25
extern void func_0028DF10(void);
void func_0028DE30(u8 *arg0) {
    f32 temp_f1;
    void (*var_v1)();

    temp_f1 = D_00470884 - 0.05f;
    D_00470884 = temp_f1;
    if (temp_f1 <= 0.0f) {
        var_v1 = func_0028DF10;
        D_00470884 = 0.0f;
        if (func_0028DF10 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    func_00288500();
}
