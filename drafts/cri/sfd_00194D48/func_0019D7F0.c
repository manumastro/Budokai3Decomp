/* Draft (not built): func_0019D7F0 at 0x0019D7F0, size 0xF0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0019D7F0.c:28: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D7F0.s */

s32 func_0019D770();                                /* extern */
s32 func_0019DBD8(void *, void *, s32 *);           /* extern */
s32 memcmp(s32, s32 *, s32);                /* extern */
extern s32 D_00467A38;

s32 func_0019D7F0(u8 *arg0, s32 *arg1) {
    s32 sp4;
    s32 temp_s1;
    s32 var_v0;

    *arg1 = 0;
    temp_s1 = *(s32 *)((u8 *)arg0 + 4) + 0x20;
    if (func_0019D770() != 1) {
        if ((u32) *(u32 *)((u8 *)arg0 + 8) < 0x800U) {
            *(s32 *)((u8 *)arg0 + 0) = -1;
            return 0;
        }
        if (memcmp(temp_s1, &D_00467A38, 0x18) != 0) {
            *(s32 *)((u8 *)arg0 + 0) = -1;
            return 0;
        }
        *(s32 *)((u8 *)arg0 + 0) = 2;
        var_v0 = func_0019DBD8(arg0, sp, &sp4);
        if (var_v0 != 0) {
            var_v0 = 1;
            *(s32 *)((u8 *)arg0 + 0xC) = (s32) ((sp0 * 0x64) + sp4);
            *arg1 = 1;
        }
        return var_v0;
    }
    return 0;
}
