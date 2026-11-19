/* Draft (not built): func_001660C0 at 0x001660C0, size 0x60, segment cri/dtx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dtx/func_001660C0.s */

s32 func_00165CF0(s8 *);                        /* extern */
s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */
extern s8 D_00411E40;

void func_001660C0(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s1 = 0xF;
    func_0016DAD8();
    var_s0 = &D_00411E40;
    do {
        if (*var_s0 == 1) {
            func_00165CF0(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x44;
    } while (var_s1 >= 0);
    func_0016DAF0();
}

/* Similar function already in C: func_0014EBB8 (src/cri/adx_0014E8F8.c), similarity 0.79.
 * It is the template below (not built). */
#if 0
void func_0014EBB8(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_00400B60;
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_0014EB90(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x30;
    } while (var_s1 >= 0);
}
#endif
