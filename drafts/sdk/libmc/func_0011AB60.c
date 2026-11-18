/* Draft (not built): func_0011AB60 at 0x0011AB60, size 0x8C, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_0011AB60.c:21: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libmc/func_0011AB60.s */

s32 iSignalSema(s32);                           /* extern */
s32 memcpy(s32, s32, u32);                      /* extern */
u32 strlen(s32);                                    /* extern */
extern s32 D_003EF950;
extern s32 D_00479580;

void func_0011AB60(s32 arg0) {
    s32 temp_s0;
    u32 var_s0;

    if (arg0 != 0) {
        temp_s0 = (s32) &D_00479580 | 0x20000000;
        if (strlen(temp_s0) >= 0x400U) {
            var_s0 = 0x3FF;
        } else {
            var_s0 = strlen(temp_s0);
        }
        memcpy(arg0, (s32) &D_00479580 | 0x20000000, var_s0);
        *(arg0 + var_s0) = 0;
    }
    iSignalSema(D_003EF950);
}
