/* Draft (not built): func_0028DDB0 at 0x0028DDB0, size 0x38, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

extern f32 D_00470884;
extern s32 D_00470894;

void func_0028DDB0(void *arg0) {
    s32 var_v1;

    if (D_00470884 == 0.0f) {
        var_v1 = D_00470894;
        if (var_v1 == 0) {
            var_v1 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_v1;
    }
}
