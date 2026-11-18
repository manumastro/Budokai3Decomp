/* Draft (not built): func_002A13C0 at 0x002A13C0, size 0x44, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

M2C_UNK amAdx_Stop(s32);                            /* extern */
extern void *D_004708CC;

void func_002A13C0(s32 arg0) {
    s32 var_s0;

    var_s0 = 1;
    M2C_FIELD(D_004708CC, s32 *, 0x30) = arg0;
    do {
        amAdx_Stop(var_s0);
        var_s0 += 1;
    } while (var_s0 < 4);
}
