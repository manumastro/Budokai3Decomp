/* Draft (not built): func_00190290 at 0x00190290, size 0xA8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00190290.s */

s32 func_00190338(void *, s32);             /* extern */
s32 func_00194778(void *);                          /* extern */
s32 func_00194798();                                /* extern */
s32 func_00199818(void *, s32, s32);    /* extern */

void func_00190290(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_00194798();
    if ((temp_v0 == -1) || ((func_00194778(arg0) != 0) && (temp_v0 == 1) && (*(s32 *)((u8 *)(arg0 + 0x94C) + 0x18) != 0))) {
        func_00190338(arg0, 1);
        if (*(s32 *)((u8 *)arg0 + 0x94C) == 0) {
            func_00199818(arg0, 5, 0);
        }
    }
}
