/* Draft (not built): func_00105A58 at 0x00105A58, size 0xA0, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s32 DI();                                           /* extern */
s32 EI(s32, s32);                               /* extern */

void func_00105A58(u32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_s0;

    temp_a1 = DI();
    if ((arg0 >> 0x1C) == 7) {
        var_s0 = (arg0 & 0x0FFFFFFF) | 0x80000000;
    } else {
        var_s0 = arg0 & 0x0FFFFFFF;
    }
    *(s32 *)0x1000B010 = var_s0;
    temp_a0 = arg1 >> 4;
    *(s32 *)0x1000B020 = temp_a0;
    *(s32 *)0x1000B000 = 0x100;
    if (temp_a1 != 0) {
        EI(temp_a0, temp_a1);
    }
}
