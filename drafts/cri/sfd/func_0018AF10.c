/* Draft (not built): func_0018AF10 at 0x0018AF10, size 0x68, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0018AF10.c:10: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_0018AF10.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */

void func_0018AF10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_s0;

    temp_s0 = arg0 + (arg1 * 0x74);
    func_0018D908(sp);
    *(s32 *)((u8 *)(temp_s0 + 0x12A8) + 4) = arg3;
    *(s32 *)((u8 *)temp_s0 + 0x12A8) = arg2;
    func_0018D920(sp);
}
