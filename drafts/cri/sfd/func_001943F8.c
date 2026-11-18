/* Draft (not built): func_001943F8 at 0x001943F8, size 0x70, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001943F8.c:15: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001943F8.s */

s32 func_00194468(void *, void *);                  /* extern */
s32 func_001999E0(void *, s32);                 /* extern */

s32 func_001943F8(u8 *arg0) {
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x1C70);
    var_v0 = func_00194468(temp_s0, sp);
    if (var_v0 == 0) {
        *(s32 *)((u8 *)temp_s0 + 0x74) = 2;
        if (sp0 != 0) {
            if (func_001999E0(arg0, 0x30) != 0) {
                var_v0_2 = 0xC8;
            } else {
                goto block_5;
            }
        } else {
block_5:
            var_v0_2 = 0xC0;
        }
        *(s32 *)((u8 *)temp_s0 + 0x78) = var_v0_2;
        var_v0 = 0;
    }
    return var_v0;
}
