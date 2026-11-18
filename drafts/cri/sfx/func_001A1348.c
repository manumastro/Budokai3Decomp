/* Draft (not built): func_001A1348 at 0x001A1348, size 0x5C, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001A1348.c:14: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfx/func_001A1348.s */

s64 func_001A13A8(void *, s32 *, s32, s8, s8, s8, s8); /* extern */

s64 func_001A1348(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s8 temp_a3;
    u8 *temp_v0;

    if (arg0 != 0) {
        if (arg1 >= 0) {
            temp_v0 = arg0 + arg2;
            temp_a3 = *(s8 *)((u8 *)temp_v0 + 1);
            return (s64) (func_001A13A8(sp, &sp10, 0x10, temp_a3, *(s8 *)((u8 *)temp_v0 + 0), temp_a3, *(s8 *)((u8 *)temp_v0 + 2)) << 0x20) >> 0x20;
        }
        goto block_4;
    }
block_4:
    return 0;
}
