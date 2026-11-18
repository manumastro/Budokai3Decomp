/* Draft (not built): func_00180620 at 0x00180620, size 0x50, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00180620.s */

void *func_00181FA8();                              /* extern */

s32 func_00180620(u8 *arg0) {
    s32 var_a0;
    u8 *temp_a1;

    temp_a1 = func_00181FA8();
    var_a0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x18) == 0) {
        var_a0 = (*(s32 *)((u8 *)temp_a1 + 0x2C) == 0) ? -1 : ((*(s32 *)((u8 *)temp_a1 + 0x28) != 0) ? 0 : -1);
    }
    return var_a0;
}
