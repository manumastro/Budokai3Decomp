/* Draft (not built): func_00155AB0 at 0x00155AB0, size 0x60, segment cri/adx_001554B8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001554B8/func_00155AB0.s */

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_001559E8(s8 *);                        /* extern */
extern s8 D_00402110;

void func_00155AB0(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s1 = 0xF;
    func_00152508();
    var_s0 = &D_00402110;
    do {
        if (*var_s0 == 1) {
            func_001559E8(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x44;
    } while (var_s1 >= 0);
    func_00152520();
}
