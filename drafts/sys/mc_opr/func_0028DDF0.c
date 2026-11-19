/* Draft (not built): func_0028DDF0 at 0x0028DDF0, size 0x38, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x40, original 0x38
 * Original: asm/nonmatchings/sys/mc_opr/func_0028DDF0.s */

// src/sys/mc_opr.c func_0028DDF0 size diff=4/16
void func_0028DDF0(u8 *arg0) {
    s32 var_v1;

    if (D_00470884 == 1.0f) {
        var_v1 = D_00470894;
        if (var_v1 == 0) {
            var_v1 = 0;
        }
        *(s32 *)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_0028DDB0 (src/sys/mc_opr.c), similarity 0.85.
 * It is the template below (not built). */
#if 0
void func_0028DDB0(u8 *arg0) {
    s32 var_v1;

    if (D_00470884 == 0.0f) {
        var_v1 = D_00470894;
        if (var_v1 == 0) {
            var_v1 = 0;
        }
        *(s32 *)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
#endif
