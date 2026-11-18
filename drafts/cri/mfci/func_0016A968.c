/* Draft (not built): func_0016A968 at 0x0016A968, size 0x20, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0016A968.c:7: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mfci/func_0016A968.s */

s32 mfci_get_adr_size(void *);                  /* extern */

s32 func_0016A968(void) {
    mfci_get_adr_size(sp);
    return sp0;
}
