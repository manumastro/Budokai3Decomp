/* Draft (not built): func_0019B228 at 0x0019B228, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0019B228.c:14: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B228.s */

s32 func_0017EE78(s32);                             /* extern */
s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
extern s32 D_00426A98;

void func_0019B228(s32 arg0) {
    s32 temp_s1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    temp_s1 = func_0017EE78(D_00426A98);
    func_0018D908(sp);
    *(s32 *)((u8 *)temp_s0 + 0x29C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x29C) + temp_s1);
    *(s32 *)((u8 *)temp_s0 + 0x2C0) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2C0) + temp_s1);
    func_0018D920(sp);
}
