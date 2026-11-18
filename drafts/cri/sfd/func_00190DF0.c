/* Draft (not built): func_00190DF0 at 0x00190DF0, size 0x4C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00190DF0.c:12: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00190DF0.s */

s32 func_0018AA80(s32, void *);                     /* extern */

void func_00190DF0(u8 *arg0, u8 *arg1) {
    if (func_0018AA80(*(s32 *)((u8 *)arg0 + 0x1C78), sp) != 0) {
        *(s32 *)((u8 *)arg1 + 4) = 0;
        *(s32 *)((u8 *)arg1 + 0) = 0;
        return;
    }
    *(s32 *)((u8 *)arg1 + 0) = sp0;
    *(s32 *)((u8 *)arg1 + 4) = sp4;
}
