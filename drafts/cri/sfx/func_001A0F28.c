/* Draft (not built): func_001A0F28 at 0x001A0F28, size 0x44, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001A0F28.c:12: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfx/func_001A0F28.s */

s32 func_001221D8(void *, s8, s8, s8);              /* extern */

s32 func_001A0F28(u8 *arg0, s32 arg1) {
    s8 temp_a1;

    if ((arg0 == NULL) || (arg1 < 0)) {
        return 0;
    }
    temp_a1 = *(s8 *)((u8 *)arg0 + 0x11);
    return func_001221D8(sp, temp_a1, *(s8 *)((u8 *)arg0 + 0x10), temp_a1);
}
