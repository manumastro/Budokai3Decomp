/* Draft (not built): scePadGetButtonMask at 0x001175F8, size 0xB0, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_001175F8.c:16: `sp7A' undeclared (first use in this function)
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/scePadGetButtonMask.s */

s32 func_00116C18(s32, void *);                 /* extern */
extern s32 D_00478990;

s64 func_001175F8(s32 arg0, s32 arg1) {
    s64 var_v0;

    if ((*(s32 *)((u8 *)(&D_00478990 + ((arg1 * 0x1C) + (arg0 * 0x70))) + 0x10) == 0) || (func_00116C18(arg0, sp), (sp72 != 1))) {
        return 0;
    }
    var_v0 = 0;
    if (sp64 >= 2U) {
        var_v0 = 0;
        if (sp66 >= 2U) {
            var_v0 = (s64) ((sp79 + ((s64) sp7C << 0x18) + (((s64) sp7B << 0x10) + ((s64) sp7A << 8))) << 0x20) >> 0x20;
        }
    }
    return var_v0;
}
