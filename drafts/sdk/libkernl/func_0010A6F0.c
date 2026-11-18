/* Draft (not built): func_0010A6F0 at 0x0010A6F0, size 0x90, segment sdk/libkernl (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl/func_0010A6F0.s */

s32 DI();                                           /* extern */
s32 EI(s32);                                /* extern */

void func_0010A6F0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = DI();
    *(s32 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_v0 == 0) {
        goto block_2;
    }
    EI(4);
block_2:
loop_3:
    if (!(*(u8 *)0x1000F000 & 4)) {
        goto loop_3;
    }
    temp_v0_2 = DI();
    *(u8 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_v0_2 == 0) {
        goto block_7;
    }
    EI(4);
    return;
block_7:
    return;
}
