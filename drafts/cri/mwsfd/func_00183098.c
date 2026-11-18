/* Draft (not built): func_00183098 at 0x00183098, size 0x40, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00183098.s */

s32 func_00183020();                            /* extern */

void func_00183098(u8 *arg0) {
    func_00183020();
    *(s32 *)((u8 *)arg0 + 0x1C0) = 1;
    *(s32 *)((u8 *)arg0 + 0x1CC) = 0xFFFFF;
    *(s32 *)((u8 *)arg0 + 0x1C4) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C8) = 0;
}
