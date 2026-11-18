/* Draft (not built): func_0018BC30 at 0x0018BC30, size 0xA0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0018BC30.c:10: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_0018BC30.s */

s32 func_0018BCD0(s32, s32, void *);            /* extern */
s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *, s32);                 /* extern */

void func_0018BC30(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_a1;

    func_0018D908(sp);
    func_0018BCD0(arg0, arg1, arg2);
    temp_a1 = *(s32 *)((u8 *)arg2 + 8);
    if (temp_a1 == 0) {
        if (*(s32 *)((u8 *)arg2 + 0xC) == 0) {
            if (*(s32 *)((u8 *)arg2 + 0x10) == -1) {
                goto block_3;
            }
        } else {
            goto block_4;
        }
    } else {
block_3:
block_4:
        *(s8 *)((u8 *)arg2 + 0) = 1;
    }
    if ((temp_a1 != 0) || (*(s32 *)((u8 *)arg2 + 0xC) != 0)) {
        *(s8 *)((u8 *)arg2 + 1) = 1;
    }
    func_0018D920(sp, temp_a1);
}
