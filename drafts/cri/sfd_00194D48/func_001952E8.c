/* Draft (not built): func_001952E8 at 0x001952E8, size 0x100, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001952E8.s */

s32 SignalSema(s32, s32, s32, s32); /* extern */
s32 WaitSema(s32);                              /* extern */
s32 setD3_CHCR(s32, s32, s32, s32); /* extern */
s32 setD4_CHCR(s32);                        /* extern */

s32 func_001952E8(u8 *arg0) {
    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    setD4_CHCR(5);
    *(s32 *)((u8 *)arg0 + 0x1C) = (s32) *(s32 *)0x1000B410;
    *(s32 *)((u8 *)arg0 + 0x20) = (s32) *(s32 *)0x1000B430;
    *(s32 *)((u8 *)arg0 + 0x24) = (s32) *(s32 *)0x1000B420;
    *(s32 *)((u8 *)arg0 + 0x28) = (s32) *(s32 *)0x1000B400;
    do {

    } while (*(s32 *)0x10002010 & 0xF0);
    setD3_CHCR(0, 0x1000B420, 0x1000B400, 0x10002010);
    *(s32 *)((u8 *)arg0 + 0x2C) = (s32) *(s32 *)0x1000B010;
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) *(s32 *)0x1000B020;
    *(s32 *)((u8 *)arg0 + 0x34) = (s32) *(s32 *)0x1000B000;
    *(s32 *)((u8 *)arg0 + 0x38) = (s32) *(s32 *)0x10002020;
    *(s32 *)((u8 *)arg0 + 0x3C) = (s32) *(u8 *)0x10002010;
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40), 0x10002010, 0x1000B000, 0x10002020);
    return 1;
}
