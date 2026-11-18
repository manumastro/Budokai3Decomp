/* Draft (not built): func_00170380 at 0x00170380, size 0xCC, segment cri/svm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/svm/func_00170380.s */

s32 func_0016FF40();                            /* extern */
s32 func_0016FF58();                            /* extern */
s32 func_00170118(s32 *, s32, s32 *);   /* extern */
extern s32 D_00464EE8;
extern s32 D_004812A0;

s32 func_00170380(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    u8 *var_v0;

    var_s0 = 0;
    func_0016FF40();
    var_v0 = &D_004812A0 + (arg0 * 0x30);
loop_4:
    if (*(s32 *)((u8 *)var_v0 + 0) != 0) {
        var_s0 += 1;
        if (var_s0 < 6) {
            var_v0 = (((arg0 * 6) + var_s0) * 8) + &D_004812A0;
            goto loop_4;
        }
    } else {
        *(s32 *)((u8 *)var_v0 + 4) = arg2;
        *(s32 *)((u8 *)var_v0 + 0) = arg1;
    }
    if (var_s0 == 6) {
        func_00170118(&D_00464EE8, arg0 * 2, &D_004812A0);
    }
    func_0016FF58();
    return ((var_s0 ^ 6) != 0) ? var_s0 : -1;
}
