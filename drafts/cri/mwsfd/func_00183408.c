/* Draft (not built): func_00183408 at 0x00183408, size 0x3C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00183408.s */

s32 func_00183448();                            /* extern */
s32 func_00183478();                            /* extern */
extern s32 D_004268A4;

void func_00183408(void) {
    if (D_004268A4 == 0) {
        func_00183478();
        return;
    }
    func_00183448();
}

/* Similar function already in C: func_001576B0 (src/cri/adx_001563B0.c), similarity 0.65.
 * It is the template below (not built). */
#if 0
s32 func_001576B0(void) {
    func_00170818();
    func_00170830();
    func_00170878();
    func_00170890();
    func_001708A8();
    return 0;
}
#endif
