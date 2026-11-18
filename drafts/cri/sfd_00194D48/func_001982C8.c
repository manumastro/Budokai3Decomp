/* Draft (not built): func_001982C8 at 0x001982C8, size 0xB8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001982C8.s */

s32 func_0018D650(s32, s32, s32, s32 *); /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019C0D8(void *, s32, s32, s32 *); /* extern */
extern s32 (*D_00426B20)(void *, s32);

s32 func_001982C8(u8 *arg0, s32 *arg1) {
    s32 temp_s2;
    s32 temp_v0;

    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000136, 0xB, arg1);
    }
    temp_s2 = func_0019C0D8(arg0, 6, 0xB, arg1);
    temp_v0 = *arg1;
    if (temp_v0 != 0) {
        *(s32 *)((u8 *)arg0 + 0x964) = 1;
    }
    if (D_00426B20 != NULL) {
        D_00426B20(arg0, temp_v0);
    }
    return temp_s2;
}
