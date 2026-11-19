/* Draft (not built): func_00194630 at 0x00194630, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00194630.s */

s32 func_0018D650();
s32 func_0018D870();
void *func_001946D8();

void func_00194630(u8 *arg0, s32 arg1) {
    s32 temp_v0_2;
    u8 *temp_v0;

    if (func_0018D870() != 0) {
        func_0018D650(NULL, 0xFF000189);
        return;
    }
    temp_v0 = func_001946D8(arg0, arg1);
    if (temp_v0 == NULL) {
        func_0018D650(arg0, 0xFF000F31, temp_v0);
    } else {
        temp_v0_2 = *(s32 *)((u8 *)temp_v0 + 4) - 1;
        *(s32 *)((u8 *)temp_v0 + 4) = (s32) ((temp_v0_2 < 0) ? 0 : temp_v0_2);
    }
    *(s32 *)((u8 *)arg0 + 0x978) = (s32) (*(s32 *)((u8 *)arg0 + 0x978) - 1);
}

/* Similar function already in C: func_00196558 (src/cri/sfd_00194D48.c), similarity 0.64.
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
