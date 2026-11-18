/* Draft (not built): func_00181020 at 0x00181020, size 0x50, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00181020.s */

s32 func_001853B0();                            /* extern */

void func_00181020(u8 *arg0, u8 *arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x1A4) < *(s32 *)((u8 *)arg1 + 0x2C)) {
        func_001853B0();
    }
    *(s32 *)((u8 *)arg0 + 0x1A4) = *(s32 *)((u8 *)arg1 + 0x2C);
}
