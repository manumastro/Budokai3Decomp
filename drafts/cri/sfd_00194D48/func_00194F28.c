/* Draft (not built): func_00194F28 at 0x00194F28, size 0xEC, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00194F28.s */

s32 SignalSema(s32, s32, s32, s32);             /* extern */
s32 WaitSema(s32);                              /* extern */

void func_00194F28(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 *temp_s4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_hi;

    temp_s4 = M2C_ERROR(/* Read from unset register $t0 */);
    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x18);
    temp_hi = (s32) (((*(s32 *)((u8 *)arg0 + 0xC) + temp_a1) << 0xB) + temp_a2) % temp_a0;
    temp_a1_2 = (((*(s32 *)((u8 *)arg0 + 8) - temp_a1) << 0xB) - 0x1000) - temp_a2;
    temp_a0_2 = temp_a0 - temp_hi;
    if (temp_a0_2 < temp_a1_2) {
        *arg2 = temp_a0_2;
        temp_a0_3 = *(s32 *)((u8 *)arg0 + 0);
        *arg1 = temp_a0_3 + temp_hi;
        *arg3 = temp_a0_3;
        *temp_s4 = temp_a1_2 - (*(s32 *)((u8 *)arg0 + 0x18) - temp_hi);
    } else {
        *arg2 = temp_a1_2;
        *temp_s4 = 0;
        *arg1 = *(s32 *)((u8 *)arg0 + 0) + temp_hi;
        *arg3 = 0;
    }
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40), temp_a1_2, temp_a2, temp_hi);
}
