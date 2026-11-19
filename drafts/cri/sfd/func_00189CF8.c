/* Draft (not built): func_00189CF8 at 0x00189CF8, size 0x7C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00189CF8.s */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001999E0(void *, s32);                 /* extern */

void func_00189CF8(u8 *arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF0001A3);
        return;
    }
    if (func_001999E0(arg0, 6) != 0) {
        (*(s32 (**)(u8 *, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0x1DC4)) + 0xC))(arg0, arg1);
    }
}

/* Similar function already in C: func_00196558 (src/cri/sfd_00194D48.c), similarity 0.85.
 * It is the template below (not built). */
#if 0
s32 func_00196558(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000144);
    }
    func_0019B938(arg0, arg1);
    func_00189DE8(arg0, arg1);
    return 0;
}
#endif
