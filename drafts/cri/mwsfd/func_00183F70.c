/* Draft (not built): func_00183F70 at 0x00183F70, size 0x2C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00183F70.c:7: `spC' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_00183F70.s */

s32 func_00198128(s32, void *);                 /* extern */

s32 func_00183F70(u8 *arg0) {
    func_00198128(*(s32 *)((u8 *)arg0 + 0x40), sp);
    return sp4 + spC;
}
