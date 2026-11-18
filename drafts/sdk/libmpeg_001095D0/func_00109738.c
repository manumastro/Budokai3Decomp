/* Draft (not built): func_00109738 at 0x00109738, size 0x54, segment sdk/libmpeg_001095D0 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00109738.c:11: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libmpeg_001095D0/func_00109738.s */

s32 _ErrMessage(s32);                           /* extern */
s32 func_00107DE0(s32, void *, s32, s32);       /* extern */

void func_00109738(u8 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x868);
    if ((temp_v1 != 0) && (arg0 != NULL) && (*(s32 *)((u8 *)arg0 + 0xC) != 0)) {
        func_00107DE0(temp_v1, sp, 0, arg1);
        return;
    }
    _ErrMessage(arg1);
}
