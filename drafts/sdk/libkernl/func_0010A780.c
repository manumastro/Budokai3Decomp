/* Draft (not built): func_0010A780 at 0x0010A780, size 0xA4, segment sdk/libkernl (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_0010A780.c:31: too few arguments to function `EI'
 * Original: asm/nonmatchings/sdk/libkernl/func_0010A780.s */

s32 DI();                                           /* extern */
s32 EI(s32);                                /* extern */
s32 SetVSyncFlag(void *, s64 *);                /* extern */

s64 func_0010A780(void) {
    s32 sp0;
    s64 sp8;
    s32 temp_v0;
    s32 temp_v0_2;

    sp0 = 0;
    SetVSyncFlag(sp, &sp8);
    temp_v0 = DI();
    *(s32 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_v0 != 0) {
        EI(4);
    }
loop_3:
    if (!(*(u8 *)0x1000F000 & 4)) {
        if (sp0 == 0) {
            goto loop_3;
        }
    }
    temp_v0_2 = DI();
    *(u8 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_v0_2 != 0) {
        EI();
    }
    return sp8;
}
