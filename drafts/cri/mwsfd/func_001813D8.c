/* Draft (not built): func_001813D8 at 0x001813D8, size 0xA8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_001813D8.s */

s32 func_00182260();                                /* extern */
s32 func_00185AA8(s32);                             /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00465AE8;

s32 func_001813D8(s32 arg0, u8 *arg1) {
    s32 temp_v0;
    s32 var_s1;
    u32 temp_v1;

    var_s1 = 0;
    temp_v1 = *(u32 *)((u8 *)arg1 + 0x3C);
    if (temp_v1 < 3U) {
        if (temp_v1 != 0) {
            var_s1 = 2;
        } else {
            goto block_8;
        }
    } else if (temp_v1 == 3) {
        if (*(s32 *)((u8 *)arg1 + 0x44) == 0) {
            var_s1 = 2;
        }
    } else {
block_8:
        func_001870E8(&D_00465AE8);
    }
    temp_v0 = func_00182260();
    if (temp_v0 == 1) {
        var_s1 = ((func_00185AA8(arg0) ^ temp_v0) == 0) ? 2 : var_s1;
    }
    return var_s1;
}
