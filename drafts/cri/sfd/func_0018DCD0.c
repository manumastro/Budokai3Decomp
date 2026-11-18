/* Draft (not built): func_0018DCD0 at 0x0018DCD0, size 0x68, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018DCD0.c:9: `spC' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018DCD0.s */

s32 func_0018AA80(s32, void *);                     /* extern */

void func_0018DCD0(u8 *arg0, s32 *arg1, s32 *arg2) {
    if (func_0018AA80(*(s32 *)((u8 *)arg0 + 0x1C34), sp) == 0) {
        *arg2 = sp4;
        *arg1 = sp0;
        *M2C_ERROR(/* Read from unset register $t0 */) = sp4 + spC;
    }
}
