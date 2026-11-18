/* Draft (not built): func_00199180 at 0x00199180, size 0x84, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199180.s */

s32 func_0017EE78(s32, s32, s32);               /* extern */
s32 func_00199208(s32);                         /* extern */

void func_00199180(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xDB0);
    if (temp_v0 != 0) {
        func_00199208(temp_v0);
        return;
    }
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0xD98);
    if (temp_v0_2 <= 0) {
        *arg2 = 0;
    } else {
        *arg2 = func_0017EE78(arg1, 0x3E8, temp_v0_2);
    }
    *arg3 = 0x3E8;
}
