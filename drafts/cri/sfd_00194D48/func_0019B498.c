/* Draft (not built): func_0019B498 at 0x0019B498, size 0x84, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B498.s */

s32 func_0018D650(s32, s32, void *);    /* extern */
s32 func_0018D870();                                /* extern */

void func_0019B498(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_a2;

    temp_a2 = arg0 + 0xCC0;
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000125, temp_a2);
        return;
    }
    *(s32 *)((u8 *)temp_a2 + 0x2AC) = arg2;
    *(s32 *)((u8 *)temp_a2 + 0x2A8) = arg1;
    *(s32 *)((u8 *)temp_a2 + 0x2A4) = (s32) (*(s32 *)((u8 *)temp_a2 + 0x2A4) + 1);
    *(s32 *)((u8 *)arg0 + 0x44) = 1;
}

/* Similar function already in C: func_00173230 (src/cri/mpv.c), similarity 0.63.
 * It is the template below (not built). */
#if 0
void func_00173230(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_s0;

    temp_s0 = arg0 + 0x158;
    if (func_00178B80() != 0) {
        func_00172EF8(0, 0xFF03020E);
        return;
    }
    *arg1 = *(s32 *)((u8 *)temp_s0 + 0xD0);
    *arg2 = *(s32 *)((u8 *)temp_s0 + 0xD4);
}
#endif
