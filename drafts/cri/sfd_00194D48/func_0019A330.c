/* Draft (not built): func_0019A330 at 0x0019A330, size 0x94, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A330.s */

s32 func_001999E0(s32);                         /* extern */
extern s32 D_00426A90;

void func_0019A330(u8 *arg1, s32 *arg2, s32 *arg3) {
    if (func_001999E0(0x47) == 1) {
        *arg2 = *(s32 *)((u8 *)arg1 + 0x29C) - *(s32 *)((u8 *)arg1 + 0x2C4);
        *arg3 = *(s32 *)((u8 *)(&D_00426A90) + 8);
        return;
    }
    *arg2 = *(s32 *)((u8 *)arg1 + 0x2D0) - *(s32 *)((u8 *)arg1 + 0x2C4);
    *arg3 = *(s32 *)((u8 *)arg1 + 0x2D4);
}
