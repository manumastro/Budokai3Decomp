/* Draft (not built): func_00195810 at 0x00195810, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00195810.c:12: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195810.s */

void func_00195810(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_t1;

    temp_t1 = *(s32 *)((u8 *)arg0 + 0x1C70) + 0x1038;
    *arg1 = *(s32 *)((u8 *)temp_t1 + 0x18);
    *arg3 = *(s32 *)((u8 *)temp_t1 + 0xC) << 0xB;
    *arg2 = (s32) (((*(s32 *)((u8 *)temp_t1 + 0xC) + *(s32 *)((u8 *)temp_t1 + 0x10)) << 0xB) + *(s32 *)((u8 *)temp_t1 + 0x14)) % (s32) *(s32 *)((u8 *)temp_t1 + 0x18);
    *M2C_ERROR(/* Read from unset register $t0 */) = (*(s32 *)((u8 *)temp_t1 + 0x10) << 0xB) + *(s32 *)((u8 *)temp_t1 + 0x14);
}
