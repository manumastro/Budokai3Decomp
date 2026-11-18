/* Draft (not built): func_00107280 at 0x00107280, size 0xC8, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s32 DI();                                           /* extern */
s32 EI(s32, s32, s32, s32);     /* extern */
s32 func_00109AF8(s32, s32);            /* extern */

void func_00107280(u8 *arg0) {
    s32 temp_v0;

    *(s32 *)((u8 *)arg0 + 0x828) = 1;
    *(s32 *)((u8 *)arg0 + 0x1C0) = 0;
    temp_v0 = DI();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 = 0;
    *(s32 *)0x1000B400 = 0;
    *(s32 *)0x1000D400 = 0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    if (temp_v0 != 0) {
        EI(0xFFFEFFFF, 0x1000B400, 0x1000F520, 0x1000F590);
    }
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000D420 = 0;
    *(s32 *)0x10002010 = 0x40000000;
    func_00109AF8(0, 0);
}
