/* Draft (not built): func_0019A2E8 at 0x0019A2E8, size 0x48, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A2E8.s */

s32 func_001999E0(s32);                         /* extern */

void func_0019A2E8(u8 *arg1) {
    s32 var_v0;

    if (func_001999E0(0x47) == 1) {
        var_v0 = *(s32 *)((u8 *)arg1 + 0x29C);
    } else {
        var_v0 = *(s32 *)((u8 *)arg1 + 0x2D0);
    }
    *(s32 *)((u8 *)arg1 + 0x2C4) = var_v0;
}

/* Similar function already in C: func_0019A1C8 (src/cri/sfd_00194D48.c), similarity 0.63.
 * It is the template below (not built). */
#if 0
void func_0019A1C8(s32 arg0) {
    func_0019A218();
    if (func_001999E0(arg0, 0x47) == 1) {
        func_0019AD80(arg0);
    }
}
#endif
