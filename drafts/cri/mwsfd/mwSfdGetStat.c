/* Draft (not built): mwSfdGetStat at 0x00183BD8, size 0x88, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwSfdGetStat.s */

s32 func_00182420(s32);                     /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_001996B0(s32);                             /* extern */
extern s32 D_004663A8;

s32 mwSfdGetStat(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    if (func_00183B38() == 0) {
        func_00182420(-0xC);
        func_001870E8(&D_004663A8);
        return 0;
    }
    var_v0 = *(s32 *)((u8 *)arg0 + 8);
    if ((var_v0 == 2) && ((temp_v0 = func_001996B0(*(s32 *)((u8 *)arg0 + 0x40)), (temp_v0 == 4)) || (var_v0 = (temp_v0 < 0) ? 4 : 1, (temp_v0 == 6)))) {
        var_v0 = 2;
    }
    return var_v0;
}
