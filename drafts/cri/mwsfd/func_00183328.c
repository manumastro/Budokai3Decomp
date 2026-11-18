/* Draft (not built): func_00183328 at 0x00183328, size 0x3C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00183328.s */

s32 func_00183368();                            /* extern */
s32 func_001833A0();                            /* extern */
extern s32 D_004268A4;

void func_00183328(void) {
    if (D_004268A4 == 0) {
        func_001833A0();
        return;
    }
    func_00183368();
}
