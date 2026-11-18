/* Draft (not built): mfci_get_adr_size at 0x0016A7F8, size 0xF8, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0016A7F8.c:24: for each function it appears in.)
 * Original: asm/nonmatchings/cri/mfci/mfci_get_adr_size.s */

s32 func_0016A7B0(s32, s32 *);          /* extern */
s64 func_0016A7E0(s8 *, void *, s32);           /* extern */
s32 sprintf(s32 *, s32 *, s8 *);        /* extern */
s32 strlen();                                       /* extern */
extern s32 D_00418FB8;
extern s32 D_00463F48;
extern s32 D_00463F88;

s64 mfci_get_adr_size(s8 *arg0, s32 *arg1) {
    s8 *sp0;
    s64 temp_s0;

    if (strlen() != 0x11) {
        sprintf(&D_00418FB8, &D_00463F48, arg0);
        func_0016A7B0(0, &D_00418FB8);
    }
    if (*(s8 *)((u8 *)arg0 + 8) != 0x2E) {
        sprintf(&D_00418FB8, &D_00463F88, arg0);
        func_0016A7B0(0, &D_00418FB8);
    }
    sp0 = arg0;
    temp_s0 = (s64) (func_0016A7E0(arg0, sp, 0x10) << 0x20) >> 0x20;
    if (*sp0 != 0) {
        sp0 += 1;
    }
    if (arg1 != NULL) {
        *arg1 = (s32) ((s64) (func_0016A7E0(sp0, sp, 0x10) << 0x20) >> 0x20);
    }
    return temp_s0;
}
