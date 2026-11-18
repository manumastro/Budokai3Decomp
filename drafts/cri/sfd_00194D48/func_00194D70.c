/* Draft (not built): func_00194D70 at 0x00194D70, size 0x78, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00194D70.c:16: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00194D70.s */

s32 CreateSema(void *, s32, s32, s32);              /* extern */
s32 func_00194DE8(void *);                      /* extern */

s32 func_00194D70(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;

    temp_a2 = (arg2 & 0x0FFFFFFF) | 0x20000000;
    *(s32 *)((u8 *)arg0 + 0x54) = (s32) M2C_ERROR(/* Read from unset register $t1 */);
    *(s32 *)((u8 *)arg0 + 0x18) = (s32) (arg3 << 0xB);
    *(s32 *)((u8 *)arg0 + 8) = arg3;
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)arg0 + 4) = temp_a2;
    *(s32 *)((u8 *)arg0 + 0x40) = CreateSema(sp, temp_a2, 1, 1);
    func_00194DE8(arg0);
    *(s64 *)((u8 *)arg0 + 0x48) = 0;
    return 1;
}
