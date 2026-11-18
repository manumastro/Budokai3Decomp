/* Draft (not built): iWakeupThread at 0x0010B128, size 0x94, segment sdk/libkernl_0010B038 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl_0010B038/iWakeupThread.s */

u8 _iWakeupThread();                                /* extern */
s32 iSignalSema(s32, void *, s32);              /* extern */
extern s32 D_003EC618;
extern s32 D_00471040;
extern s32 D_00471048;

u8 iWakeupThread(s32 arg0) {
    s32 temp_a2;
    s32 temp_v0;
    u8 temp_s0;
    u8 *temp_a1;

    M2C_ERROR(/* unknown instruction: syscall 0x0 */);
    temp_s0 = M2C_ERROR(/* Read from unset register $v0 */);
    if (temp_s0 != arg0) {
        return _iWakeupThread();
    }
    if ((temp_s0 >= 0x100U) || (D_003EC618 == 0)) {
        return -1U;
    }
    temp_v0 = *(s32 *)((u8 *)(&D_00471048) + 4) & 0x1FF;
    temp_a2 = temp_v0 * 2;
    temp_a1 = &D_00471048 + temp_a2;
    *(s32 *)((u8 *)(&D_00471048) + 4) = (s32) (temp_v0 + 1);
    *(s8 *)((u8 *)temp_a1 + 8) = 0;
    *(u8 *)((u8 *)temp_a1 + 9) = temp_s0;
    iSignalSema(D_00471040, temp_a1, temp_a2);
    return temp_s0;
}
