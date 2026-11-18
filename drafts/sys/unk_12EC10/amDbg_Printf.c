/* Draft (not built): amDbg_Printf at 0x0012EC10, size 0xA0, segment sys/unk_12EC10 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int *' to 'int' @ 49: func_0012C140(&sp30, sp158, &arg_sp0 - var_v1);
 * Original: asm/nonmatchings/sys/unk_12EC10/amDbg_Printf.s */

// src/sys/unk_12EC10.c amDbg_Printf cerr diff=-1/0
s32 amDbg_Print(s32, s32, s32 *);
s32 func_0012C140(s32 *, s32, s32);
void amDbg_Printf(s32 arg0, s32 arg1, s32 arg2, s64 arg3, s32 arg_sp0) {
    s32 sp30;
    s32 sp158;
    s64 sp168;
    s64 sp170;
    s64 sp178;
    s64 sp180;
    s64 sp188;
    s32 var_v1;

    sp158 = arg2;
    sp168 = arg3;
    sp170 = M2C_ERROR(/* Read from unset register $t0 */);
    sp178 = M2C_ERROR(/* Read from unset register $t1 */);
    sp180 = M2C_ERROR(/* Read from unset register $t2 */);
    sp188 = M2C_ERROR(/* Read from unset register $t3 */);
    if (3 >= 8) {
        var_v1 = 0;
    } else {
        var_v1 = (8 - 3) * 8;
    }
    func_0012C140(&sp30, sp158, &arg_sp0 - var_v1);
    amDbg_Print(arg0, arg1, &sp30);
}
