/* Draft (not built): func_0016ADD8 at 0x0016ADD8, size 0x4C, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mfci/func_0016ADD8.s */

s32 func_0016A768();                            /* extern */
s32 func_0016A780();                            /* extern */
s32 func_0016A7B0(s32 *);                   /* extern */
extern s32 D_004640F0;

void func_0016ADD8(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0(&D_004640F0);
        return;
    }
    func_0016A768();
    *(s8 *)((u8 *)arg0 + 1) = 0;
    func_0016A780();
}
