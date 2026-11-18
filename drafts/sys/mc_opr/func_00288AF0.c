/* Draft (not built): func_00288AF0 at 0x00288AF0, size 0x100, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 func_00127940(void *, s32 *);                   /* extern */
extern s32 D_004535E0;

void *func_00288AF0(void *arg0, s32 arg1, s32 *arg2) {
    s32 *var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    void *var_s1;
    void *var_s6;

    var_s6 = arg0;
    var_s5 = arg1;
    var_s1 = NULL;
    if (var_s5 != 5) {
        return NULL;
    }
    var_s2 = 0;
    if (var_s5 > 0) {
        do {
            if (arg2 != NULL) {
                var_s0 = arg2;
            } else {
                var_s0 = &D_004535E0;
            }
            var_s3 = 0;
loop_8:
            if ((M2C_FIELD(var_s6, s32 *, 0x10) == *var_s0) && (func_00127940(var_s6 + 0x20, var_s0 + 4) == 0)) {
                var_s2 += 1;
                if (var_s3 == 2) {
                    var_s1 = var_s6;
                }
            } else {
                var_s3 += 1;
                var_s0 += 0x24;
                if (var_s3 < 3) {
                    goto loop_8;
                }
            }
            var_s5 -= 1;
            var_s6 += 0x40;
        } while (var_s5 > 0);
    }
    if (var_s2 != 3) {
        var_s1 = NULL;
    }
    return var_s1;
}
