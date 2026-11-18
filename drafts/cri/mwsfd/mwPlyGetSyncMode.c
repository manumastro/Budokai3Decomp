/* Draft (not built): mwPlyGetSyncMode at 0x00183E10, size 0x9C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00183E10.c:28: too few arguments to function `func_001870E8'
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetSyncMode.s */

s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32, void *);      /* extern */
s32 func_00199940(s32, s32, void *);        /* extern */
extern s32 D_00466400;
extern s32 D_00466430;

s32 mwPlyGetSyncMode(u8 *arg0) {
    s32 var_a1;

    if (func_00183B38() == 0) {
        func_001870E8(&D_00466400, 0xF, sp);
        return -1;
    }
    func_00199940(*(s32 *)((u8 *)arg0 + 0x40), 0xF, sp);
    var_a1 = 1;
    if (sp0 != 1) {
        if (sp0 >= 2) {
            var_a1 = 2;
            if (sp0 != 2) {
                goto block_11;
            }
        } else {
            var_a1 = 0;
            if (sp0 != 0) {
block_11:
                func_001870E8(&D_00466430, var_a1);
                var_a1 = -1;
            }
        }
    }
    return var_a1;
}
